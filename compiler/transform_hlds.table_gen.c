/*
** Automatically generated from `table_gen.m'
** by the Mercury compiler,
** version rotd-2023-04-03
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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
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
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_test.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.polymorphism_info.mih"
#include "check_hlds.polymorphism_type_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.purity.mih"
#include "check_hlds.recompute_instmap_deltas.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"



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

struct transform_hlds__table_gen__table_gen_process_proc_11_p_0_4_env_0_s {
  MR_Box * transform_hlds__table_gen__table_gen_process_proc_11_p_0_4_env_0__wrapper_arg_1;
  MR_Cont transform_hlds__table_gen__table_gen_process_proc_11_p_0_4_env_0__cont;
  void * transform_hlds__table_gen__table_gen_process_proc_11_p_0_4_env_0__cont_env_ptr;
  MR_Word transform_hlds__table_gen__table_gen_process_proc_11_p_0_4_env_0__conv1_MayCallMercuryAttr_4;
};

struct transform_hlds__table_gen__table_gen_process_proc_11_p_0_2_env_0_s {
  MR_Box * transform_hlds__table_gen__table_gen_process_proc_11_p_0_2_env_0__wrapper_arg_1;
  MR_Cont transform_hlds__table_gen__table_gen_process_proc_11_p_0_2_env_0__cont;
  void * transform_hlds__table_gen__table_gen_process_proc_11_p_0_2_env_0__cont_env_ptr;
  MR_Word transform_hlds__table_gen__table_gen_process_proc_11_p_0_2_env_0__conv0_TabledForIoAttr_4;
};


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__table_gen__transform_hlds__table_gen__pti_var_mode_pos_method_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__table_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__table_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__table_gen__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__table_gen__transform_hlds__table_gen__pti_var_mode_pos_method_1__plain_unit__type_ctor_info_unit_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__table_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__table_gen__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__table_gen__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__table_gen__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__table_gen__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__table_gen__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0;

static const MR_EnumFunctorDesc transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_call_or_answer_table_0_0;

static const MR_EnumFunctorDesc transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_call_or_answer_table_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__table_gen__transform_hlds__table_gen__enum_ordinal_ordered_call_or_answer_table_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__table_gen__transform_hlds__table_gen__enum_name_ordered_call_or_answer_table_0[2];

static const MR_Integer transform_hlds__table_gen__transform_hlds__table_gen__functor_number_map_call_or_answer_table_0[2];

static const MR_EnumFunctorDesc transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_general_cannot_table_reason_0_0;

static const MR_EnumFunctorDesc transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_general_cannot_table_reason_0_1;

static const MR_EnumFunctorDesc transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_general_cannot_table_reason_0_2;

static const MR_EnumFunctorDesc transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_general_cannot_table_reason_0_3;

static const MR_EnumFunctorDescPtr transform_hlds__table_gen__transform_hlds__table_gen__enum_ordinal_ordered_general_cannot_table_reason_0[4];

static const MR_EnumFunctorDescPtr transform_hlds__table_gen__transform_hlds__table_gen__enum_name_ordered_general_cannot_table_reason_0[4];

static const MR_Integer transform_hlds__table_gen__transform_hlds__table_gen__functor_number_map_general_cannot_table_reason_0[4];

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

static const MR_EnumFunctorDesc transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_mm_cannot_table_reason_0_0;

static const MR_EnumFunctorDesc transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_mm_cannot_table_reason_0_1;

static const MR_EnumFunctorDesc transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_mm_cannot_table_reason_0_2;

static const MR_EnumFunctorDescPtr transform_hlds__table_gen__transform_hlds__table_gen__enum_ordinal_ordered_mm_cannot_table_reason_0[3];

static const MR_EnumFunctorDescPtr transform_hlds__table_gen__transform_hlds__table_gen__enum_name_ordered_mm_cannot_table_reason_0[3];

static const MR_Integer transform_hlds__table_gen__transform_hlds__table_gen__functor_number_map_mm_cannot_table_reason_0[3];

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
transform_hlds__table_gen__IntroducedFrom__pred__get_input_output_vars__3565__1_2_p_0(
  MR_Word HeadVar__1_60,
  MR_Word LastMaybeArgMethod_70);

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__generate_mm_restore_or_suspend_goal__3302__1_1_f_0(
  MR_Word HeadVar__1_70);

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__generate_memo_non_restore_goal__3228__1_1_f_0(
  MR_Word HeadVar__1_71);

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__generate_mm_call_table_lookup_goal__2453__1_1_f_0(
  MR_Word HeadVar__1_133);

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__generate_memo_non_call_table_lookup_goal__2393__1_1_f_0(
  MR_Word HeadVar__1_133);

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__generate_plain_call_table_lookup_goal__2334__1_1_f_0(
  MR_Word HeadVar__1_121);

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__generate_gen_proc_table_info__2275__1_1_f_0(
  MR_Word HeadVar__1_45);

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__do_own_stack_create_generator__2021__1_2_f_0(
  MR_Word ModuleInfo0_38,
  MR_Word HeadVar__2_167);

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__do_own_stack_create_generator__2019__1_1_f_0(
  MR_Word HeadVar__1_163);

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__do_own_stack_create_generator__2017__1_1_f_0(
  MR_Word HeadVar__1_159);

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__do_own_stack_transform__1879__1_1_f_0(
  MR_Word HeadVar__1_252);

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__create_new_io_goal__1521__1_1_f_0(
  MR_Word HeadVar__1_307);

static MR_bool MR_CALL 
transform_hlds__table_gen__IntroducedFrom__pred__create_new_io_goal__1514__1_2_p_0(
  MR_Word UnnumberedSavedOutputVars_59,
  MR_Word HeadVar__2_303);

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__create_new_io_goal__1513__1_1_f_0(
  MR_Word HeadVar__1_300);

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__create_new_memo_non_goal__1346__1_1_f_0(
  MR_Word HeadVar__1_194);

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__create_new_memo_goal__1185__1_1_f_0(
  MR_Word HeadVar__1_168);

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__create_new_loop_goal__958__1_1_f_0(
  MR_Word HeadVar__1_203);

static MR_bool MR_CALL 
transform_hlds__table_gen__IntroducedFrom__pred__table_gen_transform_proc__712__1_2_p_0(
  MR_Word CodeModel_21,
  MR_Word HeadVar__2_100);

static MR_bool MR_CALL 
transform_hlds__table_gen__IntroducedFrom__pred__table_gen_transform_proc__650__1_2_p_0(
  MR_Word MaybeSpecMethod_30,
  MR_Word HeadVar__2_92);

static MR_bool MR_CALL 
transform_hlds__table_gen__IntroducedFrom__pred__table_gen_transform_proc__648__1_2_p_0(
  MR_Word MaybeSizeLimit_32,
  MR_Word HeadVar__2_88);

static MR_bool MR_CALL 
transform_hlds__table_gen__IntroducedFrom__pred__table_gen_transform_proc__618__1_2_p_0(
  MR_Word MaybeAttributes_26,
  MR_Word HeadVar__2_81);

static void MR_CALL 
transform_hlds__table_gen____Compare____var_mode_pos_method_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____var_mode_pos_method_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__table_gen____Compare____var_mode_pos_method_1_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

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
transform_hlds__table_gen____Compare____mm_cannot_table_reason_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____mm_cannot_table_reason_0_0(
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
transform_hlds__table_gen____Compare____general_cannot_table_reason_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____general_cannot_table_reason_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__table_gen____Compare____call_or_answer_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____call_or_answer_table_0_0(
  MR_Word HeadVar__1_1,
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
  MR_Word VarTable_3,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
transform_hlds__table_gen__var_mode_pos_is_io_state_2_p_0(
  MR_Word VarTable_3,
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
transform_hlds__table_gen__table_gen_process_proc_11_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__table_gen__table_gen_process_proc_11_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
transform_hlds__table_gen__table_gen_process_proc_11_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__table_gen__table_gen_process_proc_11_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
transform_hlds__table_gen__table_gen_process_proc_11_p_0(
  MR_Word TraceTableIO_12,
  MR_Word PredId_13,
  MR_Integer ProcId_14,
  MR_Word ProcInfo0_15,
  MR_Word PredInfo0_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27,
  MR_Word STATE_VARIABLE_GenMap_0_28,
  MR_Word * STATE_VARIABLE_GenMap_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31);

static void MR_CALL 
transform_hlds__table_gen__table_gen_transform_proc_if_possible_13_p_0(
  MR_Word TabledMethod_14,
  MR_Word PredId_15,
  MR_Integer ProcId_16,
  MR_Word STATE_VARIABLE_ProcInfo_0_25,
  MR_Word * STATE_VARIABLE_ProcInfo_26,
  MR_Word STATE_VARIABLE_PredInfo_0_27,
  MR_Word * STATE_VARIABLE_PredInfo_28,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30,
  MR_Word STATE_VARIABLE_GenMap_0_31,
  MR_Word * STATE_VARIABLE_GenMap_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34);

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
  MR_Word TabledMethod_12,
  MR_Word PredId_13,
  MR_Integer ProcId_14,
  MR_Word STATE_VARIABLE_ProcInfo_0_70,
  MR_Word * STATE_VARIABLE_ProcInfo_71,
  MR_Word STATE_VARIABLE_PredInfo_0_72,
  MR_Word * STATE_VARIABLE_PredInfo_73,
  MR_Word STATE_VARIABLE_ModuleInfo_0_74,
  MR_Word * STATE_VARIABLE_ModuleInfo_75,
  MR_Word STATE_VARIABLE_GenMap_0_76,
  MR_Word * STATE_VARIABLE_GenMap_77);

static MR_Box MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_119_95_109_101_109_111_95_110_111_110_95_103_111_97_108_95_95_91_52_93_95_48_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_119_95_109_101_109_111_95_110_111_110_95_103_111_97_108_95_95_91_52_93_95_48_17_p_0(
  MR_Word Detism_18,
  MR_Word OrigGoal_19,
  MR_Word Statistics_20,
  MR_Word PredId_22,
  MR_Integer ProcId_23,
  MR_Word HeadVars_24,
  MR_Word NumberedInputVars_25,
  MR_Word NumberedOutputVars_26,
  MR_Word STATE_VARIABLE_VarTable_0_86,
  MR_Word * STATE_VARIABLE_VarTable_87,
  MR_Word STATE_VARIABLE_TableInfo_0_88,
  MR_Word * STATE_VARIABLE_TableInfo_89,
  MR_Word * RecordVar_29,
  MR_Word * Goal_30,
  MR_Word * InputSteps_31,
  MR_Word * OutputSteps_32);

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
transform_hlds__table_gen__generate_memo_non_restore_goal_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__table_gen__generate_memo_non_restore_goal_9_p_0(
  MR_Word Detism_10,
  MR_Word NumberedOutputVars_11,
  MR_Word OrigInstMapDelta_12,
  MR_Word RecordVar_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_VarTable_0_34,
  MR_Word * STATE_VARIABLE_VarTable_35,
  MR_Word TableInfo_16,
  MR_Word * Goal_17);

static void MR_CALL 
transform_hlds__table_gen__generate_memo_non_save_goals_13_p_0(
  MR_Word NumberedSaveVars_14,
  MR_Word PredId_15,
  MR_Integer ProcId_16,
  MR_Word RecordVar_17,
  MR_Integer BlockSize_18,
  MR_Word Statistics_19,
  MR_Word Context_20,
  MR_Word STATE_VARIABLE_VarTable_0_47,
  MR_Word * STATE_VARIABLE_VarTable_48,
  MR_Word STATE_VARIABLE_TableInfo_0_49,
  MR_Word * STATE_VARIABLE_TableInfo_50,
  MR_Word * OutputSteps_23,
  MR_Word * Goals_24);

static MR_Box MR_CALL 
transform_hlds__table_gen__generate_memo_non_call_table_lookup_goal_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__table_gen__generate_memo_non_call_table_lookup_goal_13_p_0(
  MR_Word NumberedVars_14,
  MR_Word PredId_15,
  MR_Integer ProcId_16,
  MR_Word Statistics_17,
  MR_Word Context_18,
  MR_Word STATE_VARIABLE_VarTable_0_52,
  MR_Word * STATE_VARIABLE_VarTable_53,
  MR_Word STATE_VARIABLE_TableInfo_0_54,
  MR_Word * STATE_VARIABLE_TableInfo_55,
  MR_Word * RecordVar_21,
  MR_Word * StatusVar_22,
  MR_Word * Goal_23,
  MR_Word * Steps_24);

static MR_String MR_CALL 
transform_hlds__table_gen__memo_non_record_name_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_non_status_type_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_non_record_type_0_f_0(void);

static MR_Box MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_119_95_109_101_109_111_95_103_111_97_108_95_95_91_52_93_95_48_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_119_95_109_101_109_111_95_103_111_97_108_95_95_91_52_93_95_48_16_p_0(
  MR_Word Detism_17,
  MR_Word OrigGoal_18,
  MR_Word Statistics_19,
  MR_Word PredId_21,
  MR_Integer ProcId_22,
  MR_Word HeadVars_23,
  MR_Word NumberedInputVars_24,
  MR_Word NumberedOutputVars_25,
  MR_Word STATE_VARIABLE_VarTable_0_77,
  MR_Word * STATE_VARIABLE_VarTable_78,
  MR_Word STATE_VARIABLE_TableInfo_0_79,
  MR_Word * STATE_VARIABLE_TableInfo_80,
  MR_Word * TableTipVar_28,
  MR_Word * Goal_29,
  MR_Word * Steps_30);

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
transform_hlds__table_gen__do_own_stack_transform_19_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__table_gen__do_own_stack_transform_19_p_0(
  MR_Word Detism_20,
  MR_Word OrigGoal_21,
  MR_Word Statistics_22,
  MR_Word PredId_23,
  MR_Integer ProcId_24,
  MR_Word PredInfo0_25,
  MR_Word ProcInfo0_26,
  MR_Word HeadVars_27,
  MR_Word NumberedInputVars_28,
  MR_Word NumberedOutputVars_29,
  MR_Word STATE_VARIABLE_VarTable_0_88,
  MR_Word * STATE_VARIABLE_VarTable_89,
  MR_Word STATE_VARIABLE_TableInfo_0_90,
  MR_Word * STATE_VARIABLE_TableInfo_91,
  MR_Word STATE_VARIABLE_GenMap_0_92,
  MR_Word * STATE_VARIABLE_GenMap_93,
  MR_Word * Goal_33,
  MR_Word * InputSteps_34,
  MR_Word * OutputSteps_35);

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
transform_hlds__table_gen__answer_block_type_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__make_generator_c_attributes_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__consumer_type_0_f_0(void);

static MR_bool MR_CALL 
transform_hlds__table_gen__clone_pred_info_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__table_gen__clone_pred_info_8_p_0(
  MR_Word OrigPredId_9,
  MR_Integer OrigProcId_10,
  MR_Word PredInfo0_11,
  MR_Word HeadVars_12,
  MR_Word NumberedOutputVars_13,
  MR_Word * GeneratorPredId_14,
  MR_Word STATE_VARIABLE_TableInfo_0_47,
  MR_Word * STATE_VARIABLE_TableInfo_48);

static void MR_CALL 
transform_hlds__table_gen__keep_only_output_arg_types_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_Box MR_CALL 
transform_hlds__table_gen__do_own_stack_create_generator_19_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__table_gen__do_own_stack_create_generator_19_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__table_gen__do_own_stack_create_generator_19_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__table_gen__do_own_stack_create_generator_19_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__table_gen__do_own_stack_create_generator_19_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__table_gen__do_own_stack_create_generator_19_p_0(
  MR_Word PredId_20,
  MR_Integer ProcId_21,
  MR_Word STATE_VARIABLE_PredInfo_0_72,
  MR_Word STATE_VARIABLE_ProcInfo_0_73,
  MR_Word Statistics_24,
  MR_Word Context_25,
  MR_Word GeneratorVar_26,
  MR_String DebugArgStr_27,
  MR_String PickupVarCode_28,
  MR_Word PickupForeignArgs_29,
  MR_Word NumberedInputVars_30,
  MR_Word NumberedOutputVars_31,
  MR_Word OrigNonLocals_32,
  MR_Word OrigInstMapDelta_33,
  MR_Word STATE_VARIABLE_VarTable_0_74,
  MR_Word STATE_VARIABLE_TableInfo_0_75,
  MR_Word * STATE_VARIABLE_TableInfo_76,
  MR_Word InputSteps_36,
  MR_Word * OutputSteps_37);

static void MR_CALL 
transform_hlds__table_gen__add_proc_table_struct_5_p_0(
  MR_Word PredProcId_6,
  MR_Word ProcTableStructInfo_7,
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16);

static void MR_CALL 
transform_hlds__table_gen__generate_own_stack_save_return_goal_13_p_0(
  MR_Word NumberedOutputVars_14,
  MR_Word GeneratorVar_15,
  MR_Word PredId_16,
  MR_Integer ProcId_17,
  MR_Integer BlockSize_18,
  MR_Word Statistics_19,
  MR_Word Context_20,
  MR_Word STATE_VARIABLE_VarTable_0_51,
  MR_Word * STATE_VARIABLE_VarTable_52,
  MR_Word STATE_VARIABLE_TableInfo_0_53,
  MR_Word * STATE_VARIABLE_TableInfo_54,
  MR_Word * OutputSteps_23,
  MR_Word * Goals_24);

static MR_String MR_CALL 
transform_hlds__table_gen__returning_generator_locn_0_f_0(void);

static MR_String MR_CALL 
transform_hlds__table_gen__generator_name_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__generator_type_0_f_0(void);

static MR_Box MR_CALL 
transform_hlds__table_gen__generate_gen_proc_table_info_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__table_gen__generate_gen_proc_table_info_10_p_0(
  MR_Word TableInfo_11,
  MR_Word PredId_12,
  MR_Integer ProcId_13,
  MR_Word VarTable_14,
  MR_Word TabledMethod_15,
  MR_Word InputSteps_16,
  MR_Word MaybeOutputSteps_17,
  MR_Word InputVars_18,
  MR_Word OutputVars_19,
  MR_Word * ProcTableStructInfo_20);

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
transform_hlds__table_gen__create_new_mm_goal_16_p_0(
  MR_Word Detism_17,
  MR_Word OrigGoal_18,
  MR_Word Statistics_19,
  MR_Word PredId_20,
  MR_Integer ProcId_21,
  MR_Word HeadVars_22,
  MR_Word NumberedInputVars_23,
  MR_Word NumberedOutputVars_24,
  MR_Word STATE_VARIABLE_VarTable_0_59,
  MR_Word * STATE_VARIABLE_VarTable_60,
  MR_Word STATE_VARIABLE_TableInfo_0_61,
  MR_Word * STATE_VARIABLE_TableInfo_62,
  MR_Word * SubgoalVar_27,
  MR_Word * Goal_28,
  MR_Word * InputSteps_29,
  MR_Word * OutputSteps_30);

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
transform_hlds__table_gen__generate_mm_restore_goal_9_p_0(
  MR_Word Detism_10,
  MR_Word NumberedOutputVars_11,
  MR_Word OrigInstMapDelta_12,
  MR_Word SubgoalVar_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_VarTable_0_19,
  MR_Word * STATE_VARIABLE_VarTable_20,
  MR_Word TableInfo_16,
  MR_Word * Goal_17);

static MR_Box MR_CALL 
transform_hlds__table_gen__generate_mm_restore_or_suspend_goal_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__table_gen__generate_mm_restore_or_suspend_goal_11_p_0(
  MR_String PredName_12,
  MR_Word Detism_13,
  MR_Word Purity_14,
  MR_Word NumberedOutputVars_15,
  MR_Word OrigInstMapDelta_16,
  MR_Word SubgoalVar_17,
  MR_Word Context_18,
  MR_Word STATE_VARIABLE_VarTable_0_37,
  MR_Word * STATE_VARIABLE_VarTable_38,
  MR_Word TableInfo_20,
  MR_Word * Goal_21);

static void MR_CALL 
transform_hlds__table_gen__generate_mm_save_goals_13_p_0(
  MR_Word NumberedSaveVars_14,
  MR_Word SubgoalVar_15,
  MR_Word PredId_16,
  MR_Integer ProcId_17,
  MR_Integer BlockSize_18,
  MR_Word Statistics_19,
  MR_Word Context_20,
  MR_Word STATE_VARIABLE_VarTable_0_48,
  MR_Word * STATE_VARIABLE_VarTable_49,
  MR_Word STATE_VARIABLE_TableInfo_0_50,
  MR_Word * STATE_VARIABLE_TableInfo_51,
  MR_Word * OutputSteps_23,
  MR_Word * Goals_24);

static MR_String MR_CALL 
transform_hlds__table_gen__success_indicator_name_0_f_0(void);

static void MR_CALL 
transform_hlds__table_gen__generate_answer_table_lookup_goals_13_p_0(
  MR_Word NumberedVars_14,
  MR_Word PredId_15,
  MR_Integer ProcId_16,
  MR_Word Statistics_17,
  MR_Word Context_18,
  MR_Word STATE_VARIABLE_VarTable_0_34,
  MR_Word * STATE_VARIABLE_VarTable_35,
  MR_Word STATE_VARIABLE_TableInfo_0_36,
  MR_Word * STATE_VARIABLE_TableInfo_37,
  MR_Word * OutputSteps_21,
  MR_Word * ForeignArgs_22,
  MR_Word * PrefixGoals_23,
  MR_String * CodeStr_24);

static MR_Box MR_CALL 
transform_hlds__table_gen__generate_mm_call_table_lookup_goal_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__table_gen__generate_mm_call_table_lookup_goal_13_p_0(
  MR_Word NumberedVars_14,
  MR_Word PredId_15,
  MR_Integer ProcId_16,
  MR_Word Statistics_17,
  MR_Word Context_18,
  MR_Word STATE_VARIABLE_VarTable_0_53,
  MR_Word * STATE_VARIABLE_VarTable_54,
  MR_Word STATE_VARIABLE_TableInfo_0_55,
  MR_Word * STATE_VARIABLE_TableInfo_56,
  MR_Word * SubgoalVar_21,
  MR_Word * StatusVar_22,
  MR_Word * Goal_23,
  MR_Word * Steps_24);

static MR_String MR_CALL 
transform_hlds__table_gen__status_name_0_f_0(void);

static MR_String MR_CALL 
transform_hlds__table_gen__subgoal_name_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__mm_status_type_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__subgoal_type_0_f_0(void);

static MR_Box MR_CALL 
transform_hlds__table_gen__create_new_io_goal_15_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__table_gen__create_new_io_goal_15_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__table_gen__create_new_io_goal_15_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__table_gen__create_new_io_goal_15_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__table_gen__create_new_io_goal_15_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__table_gen__create_new_io_goal_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__table_gen__create_new_io_goal_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__table_gen__create_new_io_goal_15_p_0(
  MR_Word OrigGoal_16,
  MR_Word TableIoEntryKind_17,
  MR_Word Unitize_18,
  MR_Word TableIoStates_19,
  MR_Word PredId_20,
  MR_Integer ProcId_21,
  MR_Word HeadVarModes_22,
  MR_Word OrigInputVars_23,
  MR_Word OrigOutputVars_24,
  MR_Word STATE_VARIABLE_VarTable_0_112,
  MR_Word * STATE_VARIABLE_VarTable_113,
  MR_Word STATE_VARIABLE_TableInfo_0_114,
  MR_Word * STATE_VARIABLE_TableInfo_115,
  MR_Word * Goal_27,
  MR_Word * MaybeProcTableIOInfo_28);

static void MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_108_108_111_99_97_116_101_95_115_108_111_116_95_110_117_109_98_101_114_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Offset0_2,
  MR_Word * HeadVar__3_3);

static MR_Word MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_111_106_101_99_116_95_118_97_114_95_95_91_49_93_95_48_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_101_109_111_95_114_101_115_116_111_114_101_95_103_111_97_108_95_95_91_49_93_95_48_8_p_0(
  MR_Word NumberedOutputVars_9,
  MR_Word OrigInstMapDelta_10,
  MR_Word TipVar_11,
  MR_Word Context_12,
  MR_Word STATE_VARIABLE_VarTable_0_31,
  MR_Word * STATE_VARIABLE_VarTable_32,
  MR_Word TableInfo_14,
  MR_Word * Goal_15);

static void MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_116_111_114_101_95_103_111_97_108_115_95_95_91_49_93_95_48_9_p_0(
  MR_Word ModuleInfo_1,
  MR_Word OrigInstmapDelta_2,
  MR_String DebugArgStr_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_String * HeadVar__7_7,
  MR_Word STATE_VARIABLE_VarTable_0_8,
  MR_Word * STATE_VARIABLE_VarTable_9);

static void MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_101_109_111_95_115_97_118_101_95_103_111_97_108_95_95_91_49_93_95_48_9_p_0(
  MR_Word NumberedSaveVars_10,
  MR_Word TableTipVar_11,
  MR_Integer BlockSize_12,
  MR_Word Context_13,
  MR_Word STATE_VARIABLE_VarTable_0_31,
  MR_Word * STATE_VARIABLE_VarTable_32,
  MR_Word STATE_VARIABLE_TableInfo_0_33,
  MR_Word * STATE_VARIABLE_TableInfo_34,
  MR_Word * Goals_16);

static void MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_108_108_95_115_97_118_101_95_103_111_97_108_115_95_95_91_49_93_95_48_13_p_0(
  MR_Word NumberedSaveVars_14,
  MR_String BaseVarName_15,
  MR_Integer BlockSize_16,
  MR_String CreateMacroName_17,
  MR_Word Context_18,
  MR_Word STATE_VARIABLE_VarTable_0_28,
  MR_Word * STATE_VARIABLE_VarTable_29,
  MR_Word STATE_VARIABLE_TableInfo_0_30,
  MR_Word * STATE_VARIABLE_TableInfo_31,
  MR_Word * SaveArgs_21,
  MR_Word * SavePrefixGoals_22,
  MR_String * SaveDeclCodeStr_23,
  MR_String * CreateSaveCodeStr_24);

static void MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_97_118_101_95_103_111_97_108_115_95_95_91_49_93_95_48_10_p_0(
  MR_Word HeadVar__1_1,
  MR_String DebugArgStr_2,
  MR_Word Context_3,
  MR_Word STATE_VARIABLE_VarTable_0_4,
  MR_Word * STATE_VARIABLE_VarTable_5,
  MR_Word STATE_VARIABLE_TableInfo_0_6,
  MR_Word * STATE_VARIABLE_TableInfo_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_String * HeadVar__10_10);

static void MR_CALL 
transform_hlds__table_gen__gen_save_call_for_type_13_p_0(
  MR_Word CtorCat_14,
  MR_Word Type_15,
  MR_Word Var_16,
  MR_Integer Offset_17,
  MR_String DebugArgStr_18,
  MR_Word Context_19,
  MR_Word STATE_VARIABLE_VarTable_0_34,
  MR_Word * STATE_VARIABLE_VarTable_35,
  MR_Word STATE_VARIABLE_TableInfo_0_36,
  MR_Word * STATE_VARIABLE_TableInfo_37,
  MR_Word * Args_22,
  MR_Word * PrefixGoals_23,
  MR_String * CodeStr_24);

static MR_String MR_CALL 
transform_hlds__table_gen__answer_block_name_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__dummy_type_var_0_f_0(void);

static void MR_CALL 
transform_hlds__table_gen__table_gen_make_type_info_var_8_p_0(
  MR_Word Type_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_VarTable_0_17,
  MR_Word * STATE_VARIABLE_VarTable_18,
  MR_Word STATE_VARIABLE_TableInfo_0_19,
  MR_Word * STATE_VARIABLE_TableInfo_20,
  MR_Word * TypeInfoVar_13,
  MR_Word * TypeInfoGoals_14);

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
transform_hlds__table_gen__clone_proc_and_create_call_6_p_0(
  MR_Word PredId_7,
  MR_Word PredInfo_8,
  MR_Integer ProcId_9,
  MR_Word * CallExpr_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_45,
  MR_Word * STATE_VARIABLE_ModuleInfo_46);

static MR_Box MR_CALL 
transform_hlds__table_gen__create_new_loop_goal_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__table_gen__create_new_loop_goal_14_p_0(
  MR_Word OrigGoal_15,
  MR_Word Statistics_16,
  MR_Word PredId_17,
  MR_Integer ProcId_18,
  MR_Word HeadVars_19,
  MR_Word NumberedInputVars_20,
  MR_Word NumberedOutputVars_21,
  MR_Word STATE_VARIABLE_VarTable_0_84,
  MR_Word * STATE_VARIABLE_VarTable_85,
  MR_Word STATE_VARIABLE_TableInfo_0_86,
  MR_Word * STATE_VARIABLE_TableInfo_87,
  MR_Word * TableTipVar_24,
  MR_Word * Goal_25,
  MR_Word * Steps_26);

static MR_Word MR_CALL 
transform_hlds__table_gen__loop_status_type_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__loop_active_cons_id_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__loop_inactive_cons_id_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__tabling_c_attributes_dupl_0_f_0(void);

static void MR_CALL 
transform_hlds__table_gen__generate_error_goal_6_p_0(
  MR_Word TableInfo_7,
  MR_Word Context_8,
  MR_String Msg_9,
  MR_Word STATE_VARIABLE_VarTable_0_26,
  MR_Word * STATE_VARIABLE_VarTable_27,
  MR_Word * Goal_11);

static void MR_CALL 
transform_hlds__table_gen__table_plain_call_8_p_0(
  MR_Word ModuleInfo_9,
  MR_String PredName_10,
  MR_Word ArgVars_11,
  MR_Word InstMapDelta_12,
  MR_Word Detism_13,
  MR_Word Purity_14,
  MR_Word Context_15,
  MR_Word * Goal_16);

static MR_String MR_CALL 
transform_hlds__table_gen__infinite_recursion_msg_0_f_0(void);

static MR_Box MR_CALL 
transform_hlds__table_gen__generate_plain_call_table_lookup_goal_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__table_gen__generate_plain_call_table_lookup_goal_16_p_0(
  MR_Word StatusType_17,
  MR_String PredName_18,
  MR_String SetupMacroName_19,
  MR_Word NumberedVars_20,
  MR_Word PredId_21,
  MR_Integer ProcId_22,
  MR_Word Statistics_23,
  MR_Word Context_24,
  MR_Word STATE_VARIABLE_VarTable_0_53,
  MR_Word * STATE_VARIABLE_VarTable_54,
  MR_Word STATE_VARIABLE_TableInfo_0_55,
  MR_Word * STATE_VARIABLE_TableInfo_56,
  MR_Word * TableTipVar_27,
  MR_Word * StatusVar_28,
  MR_Word * Goal_29,
  MR_Word * Steps_30);

static MR_Word MR_CALL 
transform_hlds__table_gen__tabling_c_attributes_no_dupl_0_f_0(void);

static MR_String MR_CALL 
transform_hlds__table_gen__get_back_arg_string_1_f_0(
  MR_Word TableInfo_3);

static MR_String MR_CALL 
transform_hlds__table_gen__get_debug_arg_string_1_f_0(
  MR_Word TableInfo_3);

static void MR_CALL 
transform_hlds__table_gen__goal_info_init_hide_6_p_0(
  MR_Word NonLocals_7,
  MR_Word InstmapDelta_8,
  MR_Word Detism_9,
  MR_Word Purity_10,
  MR_Word Context_11,
  MR_Word * GoalInfo_12);

static void MR_CALL 
transform_hlds__table_gen__table_call_foreign_proc_11_p_0(
  MR_Word ModuleInfo_12,
  MR_String PredName_13,
  MR_Word Args_14,
  MR_Word ExtraArgs_15,
  MR_Word InstMapDelta_16,
  MR_Word Detism_17,
  MR_Word Purity_18,
  MR_Word Attributes_19,
  MR_String Code_20,
  MR_Word Context_21,
  MR_Word * Goal_22);

static void MR_CALL 
transform_hlds__table_gen__attach_call_table_tip_2_p_0(
  MR_Word Goal0_3,
  MR_Word * Goal_4);

static void MR_CALL 
transform_hlds__table_gen__generate_call_table_lookup_goals_17_p_0(
  MR_Word NumberedVars_18,
  MR_Word PredId_19,
  MR_Integer ProcId_20,
  MR_Word Statistics_21,
  MR_Word Context_22,
  MR_Word STATE_VARIABLE_VarTable_0_44,
  MR_Word * STATE_VARIABLE_VarTable_45,
  MR_Word STATE_VARIABLE_TableInfo_0_46,
  MR_Word * STATE_VARIABLE_TableInfo_47,
  MR_Word * InputSteps_25,
  MR_Word * CallTableTipVar_26,
  MR_Word * CallTableTipArg_27,
  MR_Word * InfoArg_28,
  MR_Word * LookupArgs_29,
  MR_Word * PrefixGoals_30,
  MR_String * MainCodeStr_31,
  MR_String * CallTableTipVarCodeStr_32);

static MR_Word MR_CALL 
transform_hlds__table_gen__trie_node_type_0_f_0(void);

static void MR_CALL 
transform_hlds__table_gen__generate_new_table_var_6_p_0(
  MR_String Name_7,
  MR_Word Type_8,
  MR_Word IsDummy_9,
  MR_Word STATE_VARIABLE_VarTable_0_13,
  MR_Word * STATE_VARIABLE_VarTable_14,
  MR_Word * Var_11);

static void MR_CALL 
transform_hlds__table_gen__generate_table_lookup_goals_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word MaybeStatsRef_2,
  MR_String DebugArgStr_3,
  MR_String BackArgStr_4,
  MR_Word Context_5,
  MR_Word STATE_VARIABLE_VarTable_0_6,
  MR_Word * STATE_VARIABLE_VarTable_7,
  MR_Word STATE_VARIABLE_TableInfo_0_8,
  MR_Word * STATE_VARIABLE_TableInfo_9,
  MR_Word * HeadVar__10_10,
  MR_Word * HeadVar__11_11,
  MR_Word * HeadVar__12_12,
  MR_String * HeadVar__13_13);

static void MR_CALL 
transform_hlds__table_gen__gen_lookup_call_for_type_17_p_0(
  MR_Word ArgTablingMethod0_18,
  MR_Word CtorCat_19,
  MR_Word Type_20,
  MR_Word ArgVar_21,
  MR_Integer VarSeqNum_22,
  MR_Word MaybeStatsRef_23,
  MR_String DebugArgStr_24,
  MR_String BackArgStr_25,
  MR_Word Context_26,
  MR_Word STATE_VARIABLE_VarTable_0_62,
  MR_Word * STATE_VARIABLE_VarTable_63,
  MR_Word STATE_VARIABLE_TableInfo_0_64,
  MR_Word * STATE_VARIABLE_TableInfo_65,
  MR_Word * Step_29,
  MR_Word * ExtraArgs_30,
  MR_Word * PrefixGoals_31,
  MR_String * CodeStr_32);

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

static MR_String MR_CALL 
transform_hlds__table_gen__maybe_step_stats_arg_addr_2_f_0(
  MR_Word MaybeStatsRef_4,
  MR_Integer SeqNum_5);

static void MR_CALL 
transform_hlds__table_gen__get_enum_max_int_tag_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__table_gen__get_enum_max_int_tag_3_p_0(
  MR_Word TypeTable_4,
  MR_Word TypeCtor_5,
  MR_Integer * MaxIntTag_6);

static void MR_CALL 
transform_hlds__table_gen__max_enum_int_tag_3_p_0(
  MR_Word CtorRepn_4,
  MR_Integer STATE_VARIABLE_MaxIntTag_0_8,
  MR_Integer * STATE_VARIABLE_MaxIntTag_9);

static void MR_CALL 
transform_hlds__table_gen__gen_general_lookup_call_18_p_0(
  MR_Word IsAddr_19,
  MR_String MaybeAddrString_20,
  MR_Word Type_21,
  MR_Word ForeignArg_22,
  MR_String ArgName_23,
  MR_Integer VarSeqNum_24,
  MR_Word MaybeStatsRef_25,
  MR_String DebugArgStr_26,
  MR_String BackArgStr_27,
  MR_Word Context_28,
  MR_Word STATE_VARIABLE_VarTable_0_46,
  MR_Word * STATE_VARIABLE_VarTable_47,
  MR_Word STATE_VARIABLE_TableInfo_0_48,
  MR_Word * STATE_VARIABLE_TableInfo_49,
  MR_Word * Step_31,
  MR_Word * ExtraArgs_32,
  MR_Word * PrefixGoals_33,
  MR_String * LookupCodeStr_34);

static void MR_CALL 
transform_hlds__table_gen__generate_get_table_info_goal_8_p_0(
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word Context_11,
  MR_String InfoVarName_12,
  MR_Word * Arg_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_VarTable_0_22,
  MR_Word * STATE_VARIABLE_VarTable_23);

static void MR_CALL 
transform_hlds__table_gen__maybe_record_overall_stats_11_p_0(
  MR_Word PredId_12,
  MR_Integer ProcId_13,
  MR_Word Context_14,
  MR_String InfoVarName_15,
  MR_String TipVarName_16,
  MR_Word MaybeStatsRef_17,
  MR_Word STATE_VARIABLE_VarTable_0_25,
  MR_Word * STATE_VARIABLE_VarTable_26,
  MR_Word * PrefixGoals_19,
  MR_Word * Args_20,
  MR_String * StatsCodeStr_21);

static void MR_CALL 
transform_hlds__table_gen__general_cannot_table_reason_spec_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Integer ProcId_9,
  MR_Word TabledMethod_10,
  MR_Word Reason_11,
  MR_Word * Spec_12);

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
transform_hlds__table_gen____Unify____general_cannot_table_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__table_gen____Compare____general_cannot_table_reason_0_0_10001(
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
transform_hlds__table_gen____Unify____mm_cannot_table_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__table_gen____Compare____mm_cannot_table_reason_0_0_10001(
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


static /* final */ const MR_Box transform_hlds__table_gen_scalar_common_1[44][2];

static /* final */ const MR_Box transform_hlds__table_gen_scalar_common_2[26][3];

static /* final */ const MR_Box transform_hlds__table_gen_scalar_common_3[9][1];

static /* final */ const MR_Box transform_hlds__table_gen_scalar_common_5[2][6];

static /* final */ const MR_Box transform_hlds__table_gen_scalar_common_6[16][5];

static /* final */ const MR_Box transform_hlds__table_gen_scalar_common_9[1][4];


struct transform_hlds__table_gen__vector_common_type_4_0_s {
  const MR_Word transform_hlds__table_gen__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct transform_hlds__table_gen__vector_common_type_4_0_s transform_hlds__table_gen_vector_common_4[12];

struct transform_hlds__table_gen__vector_common_type_7_0_s {
  const MR_Word transform_hlds__table_gen__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct transform_hlds__table_gen__vector_common_type_7_0_s transform_hlds__table_gen_vector_common_7[4];

struct transform_hlds__table_gen__vector_common_type_8_0_s {
  const MR_String transform_hlds__table_gen__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct transform_hlds__table_gen__vector_common_type_8_0_s transform_hlds__table_gen_vector_common_8[10];



static /* final */ const MR_Box transform_hlds__table_gen_scalar_common_1[44][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_var_mode_pos_method_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_var_mode_pos_method_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_1[5]))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "contains untabled I/O primitive."))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__table_gen_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[7])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but tabling"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__table_gen_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "(to make the mdb command \140retry\' safe across I/O),"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__table_gen_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[11])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "all predicates that perform I/O"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__table_gen_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[13])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning: debugging implicitly tables"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__table_gen_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[15])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Ignoring the"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__table_gen_scalar_common_1[19]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "because tabling"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__table_gen_scalar_common_1[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__table_gen_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[22])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: minimal model tabling"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__table_gen_scalar_common_1[25]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not compatible with --gc accurate."))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__table_gen_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[7])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not compatible with --gc hgc."))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__table_gen_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[7])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is implemented only on the C backend."))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__table_gen_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[7])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not compatible with parallel execution."))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__table_gen_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[7])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: minimal model tabling is not compatible with"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__table_gen_scalar_common_1[35]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "generating high level code."))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__table_gen_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[7])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "profiling."))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__table_gen_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[7])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "trailing."))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__table_gen_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[7])))
  },
  /* row  43 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box transform_hlds__table_gen_scalar_common_2[26][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_1[2])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_1[2])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_1[2])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 3U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__table_gen__get_enum_max_int_tag_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__table_gen__generate_plain_call_table_lookup_goal_16_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__table_gen__create_new_loop_goal_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_6[3])),
    ((MR_Box) (transform_hlds__table_gen__create_new_io_goal_15_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__table_gen__create_new_io_goal_15_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_6[5])),
    ((MR_Box) (transform_hlds__table_gen__create_new_io_goal_15_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_6[3])),
    ((MR_Box) (transform_hlds__table_gen__create_new_io_goal_15_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__table_gen__generate_mm_call_table_lookup_goal_13_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__table_gen__generate_mm_restore_or_suspend_goal_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_6[6])),
    ((MR_Box) (transform_hlds__table_gen__generate_gen_proc_table_info_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__table_gen__do_own_stack_create_generator_19_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_6[7])),
    ((MR_Box) (transform_hlds__table_gen__do_own_stack_create_generator_19_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_6[8])),
    ((MR_Box) (transform_hlds__table_gen__do_own_stack_create_generator_19_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_6[8])),
    ((MR_Box) (transform_hlds__table_gen__do_own_stack_create_generator_19_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_9[0])),
    ((MR_Box) (transform_hlds__table_gen__clone_pred_info_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_6[7])),
    ((MR_Box) (transform_hlds__table_gen__do_own_stack_transform_19_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  22 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_119_95_109_101_109_111_95_103_111_97_108_95_95_91_52_93_95_48_16_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  23 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__table_gen__generate_memo_non_call_table_lookup_goal_13_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  24 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__table_gen__generate_memo_non_restore_goal_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  25 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_119_95_109_101_109_111_95_110_111_110_95_103_111_97_108_95_95_91_52_93_95_48_17_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__table_gen_scalar_common_3[9][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   4 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   5 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 0U))))
  },
  /* row   6 */
  {
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__table_gen_scalar_common_3[6])))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__table_gen_scalar_common_5[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__table_gen__transform_hlds__table_gen__pti_var_mode_pos_method_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0)),
    ((MR_Box) (&transform_hlds__table_gen__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};

static /* final */ const MR_Box transform_hlds__table_gen_scalar_common_6[16][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__table_gen__transform_hlds__table_gen__pti_var_mode_pos_method_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0)),
    ((MR_Box) (&transform_hlds__table_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&transform_hlds__table_gen__transform_hlds__table_gen__pti_var_mode_pos_method_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&transform_hlds__table_gen__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__table_gen__transform_hlds__table_gen__pti_var_mode_pos_method_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0)),
    ((MR_Box) (&transform_hlds__table_gen__transform_hlds__table_gen__pti_var_mode_pos_method_1__plain_unit__type_ctor_info_unit_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__table_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__table_gen__transform_hlds__table_gen__pti_var_mode_pos_method_1__plain_unit__type_ctor_info_unit_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__table_gen__transform_hlds__table_gen__pti_var_mode_pos_method_1__plain_unit__type_ctor_info_unit_0)),
    ((MR_Box) (&transform_hlds__table_gen__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__table_gen__transform_hlds__table_gen__pti_var_mode_pos_method_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0)),
    ((MR_Box) (&transform_hlds__table_gen__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__table_gen__transform_hlds__table_gen__pti_var_mode_pos_method_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__table_gen__transform_hlds__table_gen__pti_var_mode_pos_method_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0)),
    ((MR_Box) (&transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_var_mode_method_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__table_gen__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0)),
    ((MR_Box) (&transform_hlds__table_gen__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0))
  },
  /* row  10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__table_gen__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0)),
    ((MR_Box) (&transform_hlds__table_gen__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0))
  },
  /* row  11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__table_gen__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__table_gen__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row  12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_maybe_specified_method_0)),
    ((MR_Box) (&transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_maybe_specified_method_0))
  },
  /* row  13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0))
  },
  /* row  14 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_tabled_for_io_0))
  },
  /* row  15 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_may_call_mercury_0))
  },
};

static /* final */ const MR_Box transform_hlds__table_gen_scalar_common_9[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0))
  },
};


static /* final */ const struct transform_hlds__table_gen__vector_common_type_4_0_s transform_hlds__table_gen_vector_common_4[12] = {
  /* row   0 */   { (MR_Word) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[32])) },
  /* row   1 */   { (MR_Word) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[28])) },
  /* row   2 */   { (MR_Word) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[30])) },
  /* row   3 */   { (MR_Word) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[34])) },
  /* row   4 */   { (MR_Word) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[32])) },
  /* row   5 */   { (MR_Word) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[28])) },
  /* row   6 */   { (MR_Word) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[30])) },
  /* row   7 */   { (MR_Word) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[34])) },
  /* row   8 */   { (MR_Word) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[32])) },
  /* row   9 */   { (MR_Word) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[28])) },
  /* row  10 */   { (MR_Word) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[30])) },
  /* row  11 */   { (MR_Word) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[34])) },
};

static /* final */ const struct transform_hlds__table_gen__vector_common_type_7_0_s transform_hlds__table_gen_vector_common_7[4] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 1 },
  /* row   3 */   { (MR_Integer) 1 },
};

static /* final */ const struct transform_hlds__table_gen__vector_common_type_8_0_s transform_hlds__table_gen_vector_common_8[10] = {
  /* row   0 */   { (MR_String) "int" },
  /* row   1 */   { (MR_String) "uint" },
  /* row   2 */   { (MR_String) "int8" },
  /* row   3 */   { (MR_String) "uint8" },
  /* row   4 */   { (MR_String) "int16" },
  /* row   5 */   { (MR_String) "uint16" },
  /* row   6 */   { (MR_String) "int32" },
  /* row   7 */   { (MR_String) "uint32" },
  /* row   8 */   { (MR_String) "int64" },
  /* row   9 */   { (MR_String) "uint64" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "io.stream_ops.mh"



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

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__table_gen__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__table_gen__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
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

static const MR_EnumFunctorDescPtr transform_hlds__table_gen__transform_hlds__table_gen__enum_ordinal_ordered_call_or_answer_table_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__table_gen____Unify____call_or_answer_table_0_0_10001)),
  ((MR_Box) (transform_hlds__table_gen____Compare____call_or_answer_table_0_0_10001)),
  (MR_String) "transform_hlds.table_gen",
  (MR_String) "call_or_answer_table",
  { transform_hlds__table_gen__transform_hlds__table_gen__enum_name_ordered_call_or_answer_table_0 },
  { transform_hlds__table_gen__transform_hlds__table_gen__enum_ordinal_ordered_call_or_answer_table_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__table_gen__transform_hlds__table_gen__functor_number_map_call_or_answer_table_0,

};

static const MR_EnumFunctorDesc transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_general_cannot_table_reason_0_0 = {
  (MR_String) "gen_reason_non_c_backend",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_general_cannot_table_reason_0_1 = {
  (MR_String) "gen_reason_gc_accurate",
  INT32_C(1)
};

static const MR_EnumFunctorDesc transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_general_cannot_table_reason_0_2 = {
  (MR_String) "gen_reason_gc_hgc",
  INT32_C(2)
};

static const MR_EnumFunctorDesc transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_general_cannot_table_reason_0_3 = {
  (MR_String) "gen_reason_parallel",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr transform_hlds__table_gen__transform_hlds__table_gen__enum_ordinal_ordered_general_cannot_table_reason_0[4] = {
  &transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_general_cannot_table_reason_0_0,
  &transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_general_cannot_table_reason_0_1,
  &transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_general_cannot_table_reason_0_2,
  &transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_general_cannot_table_reason_0_3
};

static const MR_EnumFunctorDescPtr transform_hlds__table_gen__transform_hlds__table_gen__enum_name_ordered_general_cannot_table_reason_0[4] = {
  &transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_general_cannot_table_reason_0_1,
  &transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_general_cannot_table_reason_0_2,
  &transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_general_cannot_table_reason_0_0,
  &transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_general_cannot_table_reason_0_3
};

static const MR_Integer transform_hlds__table_gen__transform_hlds__table_gen__functor_number_map_general_cannot_table_reason_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_general_cannot_table_reason_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__table_gen____Unify____general_cannot_table_reason_0_0_10001)),
  ((MR_Box) (transform_hlds__table_gen____Compare____general_cannot_table_reason_0_0_10001)),
  (MR_String) "transform_hlds.table_gen",
  (MR_String) "general_cannot_table_reason",
  { transform_hlds__table_gen__transform_hlds__table_gen__enum_name_ordered_general_cannot_table_reason_0 },
  { transform_hlds__table_gen__transform_hlds__table_gen__enum_ordinal_ordered_general_cannot_table_reason_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  transform_hlds__table_gen__transform_hlds__table_gen__functor_number_map_general_cannot_table_reason_0,

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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__table_gen____Unify____generator_map_0_0_10001)),
  ((MR_Box) (transform_hlds__table_gen____Compare____generator_map_0_0_10001)),
  (MR_String) "transform_hlds.table_gen",
  (MR_String) "generator_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__table_gen__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_id_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__table_gen__transform_hlds__table_gen__du_stag_ordered_maybe_specified_method_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__table_gen____Unify____maybe_specified_method_0_0_10001)),
  ((MR_Box) (transform_hlds__table_gen____Compare____maybe_specified_method_0_0_10001)),
  (MR_String) "transform_hlds.table_gen",
  (MR_String) "maybe_specified_method",
  { transform_hlds__table_gen__transform_hlds__table_gen__du_name_ordered_maybe_specified_method_0 },
  { transform_hlds__table_gen__transform_hlds__table_gen__du_ptag_ordered_maybe_specified_method_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__table_gen__transform_hlds__table_gen__functor_number_map_maybe_specified_method_0,

};

static const MR_EnumFunctorDesc transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_mm_cannot_table_reason_0_0 = {
  (MR_String) "mm_reason_hlc",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_mm_cannot_table_reason_0_1 = {
  (MR_String) "mm_reason_trailing",
  INT32_C(1)
};

static const MR_EnumFunctorDesc transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_mm_cannot_table_reason_0_2 = {
  (MR_String) "mm_reason_profiling",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr transform_hlds__table_gen__transform_hlds__table_gen__enum_ordinal_ordered_mm_cannot_table_reason_0[3] = {
  &transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_mm_cannot_table_reason_0_0,
  &transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_mm_cannot_table_reason_0_1,
  &transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_mm_cannot_table_reason_0_2
};

static const MR_EnumFunctorDescPtr transform_hlds__table_gen__transform_hlds__table_gen__enum_name_ordered_mm_cannot_table_reason_0[3] = {
  &transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_mm_cannot_table_reason_0_0,
  &transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_mm_cannot_table_reason_0_2,
  &transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_mm_cannot_table_reason_0_1
};

static const MR_Integer transform_hlds__table_gen__transform_hlds__table_gen__functor_number_map_mm_cannot_table_reason_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_mm_cannot_table_reason_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__table_gen____Unify____mm_cannot_table_reason_0_0_10001)),
  ((MR_Box) (transform_hlds__table_gen____Compare____mm_cannot_table_reason_0_0_10001)),
  (MR_String) "transform_hlds.table_gen",
  (MR_String) "mm_cannot_table_reason",
  { transform_hlds__table_gen__transform_hlds__table_gen__enum_name_ordered_mm_cannot_table_reason_0 },
  { transform_hlds__table_gen__transform_hlds__table_gen__enum_ordinal_ordered_mm_cannot_table_reason_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  transform_hlds__table_gen__transform_hlds__table_gen__functor_number_map_mm_cannot_table_reason_0,

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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__table_gen____Unify____table_info_0_0_10001)),
  ((MR_Box) (transform_hlds__table_gen____Compare____table_info_0_0_10001)),
  (MR_String) "transform_hlds.table_gen",
  (MR_String) "table_info",
  { transform_hlds__table_gen__transform_hlds__table_gen__du_name_ordered_table_info_0 },
  { transform_hlds__table_gen__transform_hlds__table_gen__du_ptag_ordered_table_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__table_gen__transform_hlds__table_gen__functor_number_map_table_info_0,

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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__table_gen____Unify____var_mode_method_0_0_10001)),
  ((MR_Box) (transform_hlds__table_gen____Compare____var_mode_method_0_0_10001)),
  (MR_String) "transform_hlds.table_gen",
  (MR_String) "var_mode_method",
  { transform_hlds__table_gen__transform_hlds__table_gen__du_name_ordered_var_mode_method_0 },
  { transform_hlds__table_gen__transform_hlds__table_gen__du_ptag_ordered_var_mode_method_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__table_gen__transform_hlds__table_gen__functor_number_map_var_mode_method_0,

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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__table_gen____Unify____var_mode_pos_method_1_0_10001)),
  ((MR_Box) (transform_hlds__table_gen____Compare____var_mode_pos_method_1_0_10001)),
  (MR_String) "transform_hlds.table_gen",
  (MR_String) "var_mode_pos_method",
  { transform_hlds__table_gen__transform_hlds__table_gen__du_name_ordered_var_mode_pos_method_1 },
  { transform_hlds__table_gen__transform_hlds__table_gen__du_ptag_ordered_var_mode_pos_method_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__table_gen__transform_hlds__table_gen__functor_number_map_var_mode_pos_method_1,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__table_gen__transform_hlds__table_gen__ti_var_mode_pos_method_1parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0 = {
  &transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_var_mode_pos_method_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_var_mode_pos_method_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__table_gen____Unify____var_mode_pos_method_0_0_10001)),
  ((MR_Box) (transform_hlds__table_gen____Compare____var_mode_pos_method_0_0_10001)),
  (MR_String) "transform_hlds.table_gen",
  (MR_String) "var_mode_pos_method",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__table_gen__transform_hlds__table_gen__ti_var_mode_pos_method_1parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_bool MR_CALL 
transform_hlds__table_gen__IntroducedFrom__pred__get_input_output_vars__3565__1_2_p_0(
  MR_Word HeadVar__1_60,
  MR_Word LastMaybeArgMethod_70)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[5]), ((MR_Box) (LastMaybeArgMethod_70)), ((MR_Box) (HeadVar__1_60)));
  return succeeded;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__generate_mm_restore_or_suspend_goal__3302__1_1_f_0(
  MR_Word HeadVar__1_70)
{
  MR_Word HeadVar__2_71 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_70, (MR_Integer) 0))));

  return HeadVar__2_71;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__generate_memo_non_restore_goal__3228__1_1_f_0(
  MR_Word HeadVar__1_71)
{
  MR_Word HeadVar__2_72 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_71, (MR_Integer) 0))));

  return HeadVar__2_72;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__generate_mm_call_table_lookup_goal__2453__1_1_f_0(
  MR_Word HeadVar__1_133)
{
  MR_Word HeadVar__2_134 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_133, (MR_Integer) 0))));

  return HeadVar__2_134;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__generate_memo_non_call_table_lookup_goal__2393__1_1_f_0(
  MR_Word HeadVar__1_133)
{
  MR_Word HeadVar__2_134 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_133, (MR_Integer) 0))));

  return HeadVar__2_134;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__generate_plain_call_table_lookup_goal__2334__1_1_f_0(
  MR_Word HeadVar__1_121)
{
  MR_Word HeadVar__2_122 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_121, (MR_Integer) 0))));

  return HeadVar__2_122;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__generate_gen_proc_table_info__2275__1_1_f_0(
  MR_Word HeadVar__1_45)
{
  MR_Word HeadVar__2_46;
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_45, (MR_Integer) 0))));
  MR_Integer Pos_50 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_45, (MR_Integer) 2))));

  {
    HeadVar__2_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_46, 0) = ((MR_Box) (Var_48));
    MR_hl_field(0, HeadVar__2_46, 1) = ((MR_Box) (Pos_50));
  }
  return HeadVar__2_46;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__do_own_stack_create_generator__2021__1_2_f_0(
  MR_Word ModuleInfo0_38,
  MR_Word HeadVar__2_167)
{
  MR_Word HeadVar__3_168;
  MR_Word Var_170 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_167, (MR_Integer) 0))));
  MR_Word Mode_171 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_167, (MR_Integer) 1))));
  MR_Word Inst_174;
  MR_Word Var_175;

  check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo0_38, Mode_171, &Inst_174, &Var_175);
  {
    HeadVar__3_168 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_168, 0) = ((MR_Box) (Var_170));
    MR_hl_field(0, HeadVar__3_168, 1) = ((MR_Box) (Inst_174));
  }
  return HeadVar__3_168;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__do_own_stack_create_generator__2019__1_1_f_0(
  MR_Word HeadVar__1_163)
{
  MR_Word HeadVar__2_164 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_163, (MR_Integer) 1))));

  return HeadVar__2_164;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__do_own_stack_create_generator__2017__1_1_f_0(
  MR_Word HeadVar__1_159)
{
  MR_Word HeadVar__2_160 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_159, (MR_Integer) 0))));

  return HeadVar__2_160;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__do_own_stack_transform__1879__1_1_f_0(
  MR_Word HeadVar__1_252)
{
  MR_Word HeadVar__2_253 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_252, (MR_Integer) 1))));

  return HeadVar__2_253;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__create_new_io_goal__1521__1_1_f_0(
  MR_Word HeadVar__1_307)
{
  MR_Word HeadVar__2_308;
  MR_Word Var_310 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_307, (MR_Integer) 0))));
  MR_Integer Pos_312 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_307, (MR_Integer) 2))));

  {
    HeadVar__2_308 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_308, 0) = ((MR_Box) (Var_310));
    MR_hl_field(0, HeadVar__2_308, 1) = ((MR_Box) (Pos_312));
  }
  return HeadVar__2_308;
}

static MR_bool MR_CALL 
transform_hlds__table_gen__IntroducedFrom__pred__create_new_io_goal__1514__1_2_p_0(
  MR_Word UnnumberedSavedOutputVars_59,
  MR_Word HeadVar__2_303)
{
  MR_bool succeeded;
  MR_Word Var_305 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_303, (MR_Integer) 0))));

  succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[2]), ((MR_Box) (Var_305)), UnnumberedSavedOutputVars_59);
  return succeeded;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__create_new_io_goal__1513__1_1_f_0(
  MR_Word HeadVar__1_300)
{
  MR_Word HeadVar__2_301 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_300, (MR_Integer) 0))));

  return HeadVar__2_301;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__create_new_memo_non_goal__1346__1_1_f_0(
  MR_Word HeadVar__1_194)
{
  MR_Word HeadVar__2_195 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_194, (MR_Integer) 0))));

  return HeadVar__2_195;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__create_new_memo_goal__1185__1_1_f_0(
  MR_Word HeadVar__1_168)
{
  MR_Word HeadVar__2_169 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_168, (MR_Integer) 0))));

  return HeadVar__2_169;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__create_new_loop_goal__958__1_1_f_0(
  MR_Word HeadVar__1_203)
{
  MR_Word HeadVar__2_204 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_203, (MR_Integer) 0))));

  return HeadVar__2_204;
}

static MR_bool MR_CALL 
transform_hlds__table_gen__IntroducedFrom__pred__table_gen_transform_proc__712__1_2_p_0(
  MR_Word CodeModel_21,
  MR_Word HeadVar__2_100)
{
  MR_bool succeeded = (CodeModel_21 == HeadVar__2_100);

  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__table_gen__IntroducedFrom__pred__table_gen_transform_proc__650__1_2_p_0(
  MR_Word MaybeSpecMethod_30,
  MR_Word HeadVar__2_92)
{
  MR_bool succeeded;
  MR_Integer CastX_150 = (MR_Integer) (MaybeSpecMethod_30);
  MR_Integer CastY_151 = (MR_Integer) (HeadVar__2_92);

  succeeded = (CastX_150 == CastY_151);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_144;
    MR_Word ArgY1_145;

    succeeded = ((MR_tag((MR_Word) MaybeSpecMethod_30)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgX1_144 = ((MR_Unsigned) ((MR_hl_field(0, MaybeSpecMethod_30, (MR_Integer) 0))) & (MR_Integer) 3);
      succeeded = ((MR_tag((MR_Word) HeadVar__2_92)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_145 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_92, (MR_Integer) 0))) & (MR_Integer) 3);
        succeeded = (ArgX1_144 == ArgY1_145);
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__table_gen__IntroducedFrom__pred__table_gen_transform_proc__648__1_2_p_0(
  MR_Word MaybeSizeLimit_32,
  MR_Word HeadVar__2_88)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[1]), ((MR_Box) (MaybeSizeLimit_32)), ((MR_Box) (HeadVar__2_88)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__table_gen__IntroducedFrom__pred__table_gen_transform_proc__618__1_2_p_0(
  MR_Word MaybeAttributes_26,
  MR_Word HeadVar__2_81)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[0]), ((MR_Box) (MaybeAttributes_26)), ((MR_Box) (HeadVar__2_81)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__table_gen____Compare____var_mode_pos_method_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____var_mode_pos_method_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = transform_hlds__table_gen____Unify____var_mode_pos_method_1_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

static void MR_CALL 
transform_hlds__table_gen____Compare____var_mode_pos_method_1_0(
  MR_Word TypeInfo_for_T_17,
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Box ArgX4_13 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3));
    MR_Box ArgY4_14 = (MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3));
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

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____var_mode_pos_method_1_0(
  MR_Word TypeInfo_for_T_13,
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Box ArgX4_9 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3));
    MR_Box ArgY4_10 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3));

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

static void MR_CALL 
transform_hlds__table_gen____Compare____var_mode_method_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 3);
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

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____var_mode_method_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 3);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);

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

static void MR_CALL 
transform_hlds__table_gen____Compare____table_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
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

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____table_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

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

static void MR_CALL 
transform_hlds__table_gen____Compare____mm_cannot_table_reason_0_0(
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
transform_hlds__table_gen____Unify____mm_cannot_table_reason_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__table_gen____Compare____maybe_specified_method_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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
    MR_Word Var_22 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
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
    MR_Word Var_23 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_16 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word SubResult1_14;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[6]), &SubResult1_14, ((MR_Box) (Var_24)), ((MR_Box) (ArgY1_13)));
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

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____maybe_specified_method_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
  else
  {
    MR_Word TypeInfo_11_11;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      TypeInfo_11_11 = (MR_Word) (&transform_hlds__table_gen_scalar_common_1[6]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      if (succeeded)
        succeeded = (ArgX2_7 == ArgY2_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__table_gen____Compare____generator_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____generator_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__table_gen____Compare____general_cannot_table_reason_0_0(
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
transform_hlds__table_gen____Unify____general_cannot_table_reason_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__table_gen____Compare____call_or_answer_table_0_0(
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
transform_hlds__table_gen____Unify____call_or_answer_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_String MR_CALL 
transform_hlds__table_gen__answer_table_name_0_f_0(void)
{
  return (MR_String) "answer_table";
}

static MR_String MR_CALL 
transform_hlds__table_gen__pred_name_var_name_0_f_0(void)
{
  return (MR_String) "pred_name";
}

static MR_String MR_CALL 
transform_hlds__table_gen__num_input_args_name_0_f_0(void)
{
  return (MR_String) "num_input_args";
}

static MR_String MR_CALL 
transform_hlds__table_gen__table_tip_node_name_0_f_0(void)
{
  return (MR_String) "table_tip";
}

static MR_bool MR_CALL 
transform_hlds__table_gen__var_mode_is_io_state_2_p_0(
  MR_Word VarTable_3,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Var_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word VarType_6;

  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_3, Var_4, &VarType_6);
  succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(VarType_6);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__table_gen__var_mode_pos_is_io_state_2_p_0(
  MR_Word VarTable_3,
  MR_Word VarModePosMethod_4)
{
  MR_bool succeeded;
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, VarModePosMethod_4, (MR_Integer) 0))));
  MR_Word VarType_10;

  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_3, Var_5, &VarType_10);
  succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(VarType_10);
  return succeeded;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__project_out_pos_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word Mode_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word ArgMethod_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Var_3));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (Mode_4));
    MR_hl_field(0, HeadVar__2_2, 2) = (MR_Box) ((MR_Unsigned) (ArgMethod_6));
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__project_out_arg_method_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word Mode_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Integer Pos_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Var_3));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (Mode_4));
    MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) (Pos_5));
    MR_hl_field(0, HeadVar__2_2, 3) = NULL;
  }
  return HeadVar__2_2;
}

static MR_bool MR_CALL 
transform_hlds__table_gen__filter_marker_1_p_0(
  MR_Word Marker_2)
{
  MR_bool succeeded;

  if (((MR_Unsigned) 534757888U & (((MR_Integer) 1 << Marker_2))))
    succeeded = MR_TRUE;
  else
    succeeded = MR_FALSE;
  return succeeded;
}

static void MR_CALL 
transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_1(
  void * env_ptr_arg)
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

    (env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__Var_14 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__SubGoal_15, (MR_Integer) 0))));
    Var_13 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__SubGoal_15, (MR_Integer) 1))));
    (env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__Var_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, (env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__Var_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if ((env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__succeeded)
    {
      (env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__Attrs_16 = ((MR_Word) ((MR_hl_field(3, (env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__Var_14, (MR_Integer) 1))));
      Var_7 = ((MR_Word) ((MR_hl_field(3, (env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__Var_14, (MR_Integer) 2))));
      Var_8 = ((MR_Integer) ((MR_hl_field(3, (env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__Var_14, (MR_Integer) 3))));
      Var_9 = ((MR_Word) ((MR_hl_field(3, (env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__Var_14, (MR_Integer) 4))));
      Var_10 = ((MR_Word) ((MR_hl_field(3, (env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__Var_14, (MR_Integer) 5))));
      Var_11 = ((MR_Word) ((MR_hl_field(3, (env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__Var_14, (MR_Integer) 6))));
      Var_12 = ((MR_Word) ((MR_hl_field(3, (env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__Var_14, (MR_Integer) 7))));
      *((env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__TabledForIoAttr_4) = parse_tree__prog_data_foreign__get_tabled_for_io_1_f_0((env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__Attrs_16);
      (env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__succeeded = (*((env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__TabledForIoAttr_4) != (MR_Integer) 0);
      if ((env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__succeeded)
        ((env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__cont)((env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__cont_env_ptr);
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
  struct transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0_s env;

  (env).transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__TabledForIoAttr_4 = TabledForIoAttr_4;
  (env).transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__cont = cont;
  (env).transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__cont_env_ptr = cont_env_ptr;
  hlds__goal_util__goal_contains_goal_2_p_0(Goal_3, &(env).transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__SubGoal_15, transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_1, &env);
}

static void MR_CALL 
transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_1(
  void * env_ptr_arg)
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

    (env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__Var_14 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__SubGoal_15, (MR_Integer) 0))));
    Var_13 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__SubGoal_15, (MR_Integer) 1))));
    (env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__Var_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, (env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__Var_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if ((env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__succeeded)
    {
      (env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__Attrs_16 = ((MR_Word) ((MR_hl_field(3, (env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__Var_14, (MR_Integer) 1))));
      Var_7 = ((MR_Word) ((MR_hl_field(3, (env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__Var_14, (MR_Integer) 2))));
      Var_8 = ((MR_Integer) ((MR_hl_field(3, (env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__Var_14, (MR_Integer) 3))));
      Var_9 = ((MR_Word) ((MR_hl_field(3, (env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__Var_14, (MR_Integer) 4))));
      Var_10 = ((MR_Word) ((MR_hl_field(3, (env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__Var_14, (MR_Integer) 5))));
      Var_11 = ((MR_Word) ((MR_hl_field(3, (env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__Var_14, (MR_Integer) 6))));
      Var_12 = ((MR_Word) ((MR_hl_field(3, (env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__Var_14, (MR_Integer) 7))));
      *((env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__MayCallMercuryAttr_4) = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0((env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__Attrs_16);
      ((env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__cont)((env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__cont_env_ptr);
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
  struct transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0_s env;

  (env).transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__MayCallMercuryAttr_4 = MayCallMercuryAttr_4;
  (env).transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__cont = cont;
  (env).transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__cont_env_ptr = cont_env_ptr;
  hlds__goal_util__goal_contains_goal_2_p_0(Goal_3, &(env).transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__SubGoal_15, transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_1, &env);
}

void MR_CALL 
transform_hlds__table_gen__table_gen_process_module_4_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * STATE_VARIABLE_ModuleInfo_14,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  MR_Word Globals_7;
  MR_Word TraceTableIO_8;
  MR_Word PredIdTable0_9;
  MR_Word PredIds_10;
  MR_Word GenMap0_11;
  MR_Word Var_12;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_13, &Globals_7);
  libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 158, &TraceTableIO_8);
  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_13, &PredIdTable0_9);
  mercury__map__keys_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable0_9, &PredIds_10);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), &GenMap0_11);
  transform_hlds__table_gen__table_gen_process_preds_8_p_0(TraceTableIO_8, PredIds_10, STATE_VARIABLE_ModuleInfo_0_13, STATE_VARIABLE_ModuleInfo_14, GenMap0_11, &Var_12, STATE_VARIABLE_Specs_0_15, STATE_VARIABLE_Specs_16);
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
      MR_Word PredId_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word PredIds_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ModuleInfo_31_31;
      MR_Word STATE_VARIABLE_GenMap_32_32;
      MR_Word STATE_VARIABLE_Specs_33_33;
      MR_Word PredInfo_34;
      MR_Word ProcIds_35;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      MR_Word next_value_of_STATE_VARIABLE_GenMap_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_3, PredId_20, &PredInfo_34);
      ProcIds_35 = hlds__hlds_pred__pred_info_valid_procids_1_f_0(PredInfo_34);
      transform_hlds__table_gen__table_gen_process_procs_9_p_0(TraceTableIO_1, PredId_20, ProcIds_35, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_31_31, STATE_VARIABLE_GenMap_0_5, &STATE_VARIABLE_GenMap_32_32, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_33_33);
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
      MR_Integer ProcId_23 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ProcIds_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word PredInfo_28;
      MR_Word ProcTable_29;
      MR_Word ProcInfo0_30;
      MR_Word STATE_VARIABLE_ModuleInfo_37_37;
      MR_Word STATE_VARIABLE_GenMap_38_38;
      MR_Word STATE_VARIABLE_Specs_39_39;
      MR_Box conv0_ProcInfo0_30;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_4;
      MR_Word next_value_of_STATE_VARIABLE_GenMap_0_6;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_8;

      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_4, PredId_2, &PredInfo_28);
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_28, &ProcTable_29);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_29, ((MR_Box) (ProcId_23)), &conv0_ProcInfo0_30);
      ProcInfo0_30 = ((MR_Word) (conv0_ProcInfo0_30));
      transform_hlds__table_gen__table_gen_process_proc_11_p_0(TraceTableIO_1, PredId_2, ProcId_23, ProcInfo0_30, PredInfo_28, STATE_VARIABLE_ModuleInfo_0_4, &STATE_VARIABLE_ModuleInfo_37_37, STATE_VARIABLE_GenMap_0_6, &STATE_VARIABLE_GenMap_38_38, STATE_VARIABLE_Specs_0_8, &STATE_VARIABLE_Specs_39_39);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = ProcIds_24;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_4 = STATE_VARIABLE_ModuleInfo_37_37;
      next_value_of_STATE_VARIABLE_GenMap_0_6 = STATE_VARIABLE_GenMap_38_38;
      next_value_of_STATE_VARIABLE_Specs_0_8 = STATE_VARIABLE_Specs_39_39;
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
transform_hlds__table_gen__table_gen_process_proc_11_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__table_gen__table_gen_process_proc_11_p_0_4_env_0_s * env_ptr = (struct transform_hlds__table_gen__table_gen_process_proc_11_p_0_4_env_0_s *) (env_ptr_arg);

  *((env_ptr)->transform_hlds__table_gen__table_gen_process_proc_11_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->transform_hlds__table_gen__table_gen_process_proc_11_p_0_4_env_0__conv1_MayCallMercuryAttr_4));
  ((env_ptr)->transform_hlds__table_gen__table_gen_process_proc_11_p_0_4_env_0__cont)((env_ptr)->transform_hlds__table_gen__table_gen_process_proc_11_p_0_4_env_0__cont_env_ptr);
}

static void MR_CALL 
transform_hlds__table_gen__table_gen_process_proc_11_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct transform_hlds__table_gen__table_gen_process_proc_11_p_0_4_env_0_s env;

  (env).transform_hlds__table_gen__table_gen_process_proc_11_p_0_4_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).transform_hlds__table_gen__table_gen_process_proc_11_p_0_4_env_0__cont = cont;
  (env).transform_hlds__table_gen__table_gen_process_proc_11_p_0_4_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), &(env).transform_hlds__table_gen__table_gen_process_proc_11_p_0_4_env_0__conv1_MayCallMercuryAttr_4, transform_hlds__table_gen__table_gen_process_proc_11_p_0_3, &env);
  }
}

static void MR_CALL 
transform_hlds__table_gen__table_gen_process_proc_11_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__table_gen__table_gen_process_proc_11_p_0_2_env_0_s * env_ptr = (struct transform_hlds__table_gen__table_gen_process_proc_11_p_0_2_env_0_s *) (env_ptr_arg);

  *((env_ptr)->transform_hlds__table_gen__table_gen_process_proc_11_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->transform_hlds__table_gen__table_gen_process_proc_11_p_0_2_env_0__conv0_TabledForIoAttr_4));
  ((env_ptr)->transform_hlds__table_gen__table_gen_process_proc_11_p_0_2_env_0__cont)((env_ptr)->transform_hlds__table_gen__table_gen_process_proc_11_p_0_2_env_0__cont_env_ptr);
}

static void MR_CALL 
transform_hlds__table_gen__table_gen_process_proc_11_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct transform_hlds__table_gen__table_gen_process_proc_11_p_0_2_env_0_s env;

  (env).transform_hlds__table_gen__table_gen_process_proc_11_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).transform_hlds__table_gen__table_gen_process_proc_11_p_0_2_env_0__cont = cont;
  (env).transform_hlds__table_gen__table_gen_process_proc_11_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), &(env).transform_hlds__table_gen__table_gen_process_proc_11_p_0_2_env_0__conv0_TabledForIoAttr_4, transform_hlds__table_gen__table_gen_process_proc_11_p_0_1, &env);
  }
}

static void MR_CALL 
transform_hlds__table_gen__table_gen_process_proc_11_p_0(
  MR_Word TraceTableIO_12,
  MR_Word PredId_13,
  MR_Integer ProcId_14,
  MR_Word ProcInfo0_15,
  MR_Word PredInfo0_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27,
  MR_Word STATE_VARIABLE_GenMap_0_28,
  MR_Word * STATE_VARIABLE_GenMap_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31)
{
  MR_bool succeeded;
  MR_Word EvalMethod_20;

  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo0_15, &EvalMethod_20);
  if ((EvalMethod_20 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer _InArgNum_24;
    MR_Integer _OutArgNum_25;

    succeeded = (TraceTableIO_12 == (MR_Integer) 1);
    if (succeeded)
      succeeded = hlds__hlds_pred__proc_info_has_io_state_pair_4_p_0(STATE_VARIABLE_ModuleInfo_0_26, ProcInfo0_15, &_InArgNum_24, &_OutArgNum_25);
    if (succeeded)
    {
      MR_Word CodeModel_32;
      MR_Word Globals_35;
      MR_Word TransformAll_36;
      MR_Word Require_37;
      MR_Word BodyGoal_38;
      MR_Word PredModuleName_39;
      MR_Word AnnotationIsMissing_40;
      MR_Word TransformPrimitive_41;
      MR_Word STATE_VARIABLE_Specs_52_60;
      MR_Word TabledForIoAttrs_73;
      MR_Word Var_90;

      CodeModel_32 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo0_15);
      switch (CodeModel_32) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 1:
          {
            MR_Integer PredIdInt_33;
            MR_String Msg_34;
            MR_String Var_64;
            MR_String Var_71;

            hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_13, &PredIdInt_33);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_3[0]), PredIdInt_33, &Var_64);
            Var_71 = mercury__string__f_43_43_2_f_0(Var_64, (MR_String) " not model_det");
            Msg_34 = mercury__string__f_43_43_2_f_0((MR_String) "I/O procedure pred id ", Var_71);
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.table_gen_process_io_proc\'/10", Msg_34);
              return;
            }
          }
          break;
      }
      hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_26, &Globals_35);
      libs__globals__lookup_bool_option_3_p_0(Globals_35, (MR_Integer) 162, &TransformAll_36);
      libs__globals__lookup_bool_option_3_p_0(Globals_35, (MR_Integer) 161, &Require_37);
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo0_15, &BodyGoal_38);
      PredModuleName_39 = hlds__hlds_module__predicate_module_2_f_0(STATE_VARIABLE_ModuleInfo_0_26, PredId_13);
      {
        Var_90 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_90, 0) = ((MR_Box) (&transform_hlds__table_gen_scalar_common_6[14]));
        MR_hl_field(0, Var_90, 1) = ((MR_Box) (transform_hlds__table_gen__table_gen_process_proc_11_p_0_2));
        MR_hl_field(0, Var_90, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_90, 3) = ((MR_Box) (BodyGoal_38));
      }
      mercury__solutions__solutions_2_p_1((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_tabled_for_io_0), Var_90, &TabledForIoAttrs_73);
      if ((TabledForIoAttrs_73 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        AnnotationIsMissing_40 = (MR_Integer) 0;
        TransformPrimitive_41 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word Var_88 = ((MR_Word) ((MR_hl_field(1, TabledForIoAttrs_73, (MR_Integer) 1))));
        MR_Word Var_89 = ((MR_Word) ((MR_hl_field(1, TabledForIoAttrs_73, (MR_Integer) 0))));

        if ((Var_88 == (MR_Word) ((MR_Unsigned) 0U)))
          switch (Var_89) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                succeeded = (Require_37 == (MR_Integer) 1);
                if (succeeded)
                {
                  succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(PredModuleName_39);
                  succeeded = !(succeeded);
                }
                if (succeeded)
                {
                  AnnotationIsMissing_40 = (MR_Integer) 1;
                  TransformPrimitive_41 = (MR_Word) ((MR_Unsigned) 0U);
                }
                else
                {
                  AnnotationIsMissing_40 = (MR_Integer) 0;
                  switch (TransformAll_36) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      TransformPrimitive_41 = (MR_Word) ((MR_Unsigned) 0U);
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word MayCallMercuryAttrs_75;
                        MR_Word Var_92;
                        MR_Word Var_80;
                        MR_Word Var_81;

                        {
                          Var_92 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, Var_92, 0) = ((MR_Box) (&transform_hlds__table_gen_scalar_common_6[15]));
                          MR_hl_field(0, Var_92, 1) = ((MR_Box) (transform_hlds__table_gen__table_gen_process_proc_11_p_0_4));
                          MR_hl_field(0, Var_92, 2) = ((MR_Box) ((MR_Integer) 1));
                          MR_hl_field(0, Var_92, 3) = ((MR_Box) (BodyGoal_38));
                        }
                        mercury__solutions__solutions_2_p_1((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_may_call_mercury_0), Var_92, &MayCallMercuryAttrs_75);
                        succeeded = (MayCallMercuryAttrs_75 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_80 = ((MR_Word) ((MR_hl_field(1, MayCallMercuryAttrs_75, (MR_Integer) 0))));
                          Var_81 = ((MR_Word) ((MR_hl_field(1, MayCallMercuryAttrs_75, (MR_Integer) 1))));
                          succeeded = (Var_80 == (MR_Integer) 0);
                          if (succeeded)
                            succeeded = (Var_81 == (MR_Word) ((MR_Unsigned) 0U));
                        }
                        if (succeeded)
                          TransformPrimitive_41 = (MR_Word) ((MR_Unsigned) 0U);
                        else
                          TransformPrimitive_41 = (MR_Word) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_3[1]));
                      }
                      break;
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                AnnotationIsMissing_40 = (MR_Integer) 0;
                TransformPrimitive_41 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 1:
              {
                AnnotationIsMissing_40 = (MR_Integer) 0;
                TransformPrimitive_41 = (MR_Word) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_3[1]));
              }
              break;
            case (MR_Integer) 2:
              {
                AnnotationIsMissing_40 = (MR_Integer) 0;
                TransformPrimitive_41 = (MR_Word) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_3[2]));
              }
              break;
          }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.should_io_procedure_be_transformed\'/6", (MR_String) "different tabled_for_io attributes in one procedure");
            return;
          }
      }
      switch (AnnotationIsMissing_40) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Specs_52_60 = STATE_VARIABLE_Specs_0_30;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Spec_42;
            MR_Word Context_94;
            MR_Word ProcPieces_95;
            MR_Word Pieces_96;
            MR_Word Var_98;

            hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo0_16, &Context_94);
            {
              Var_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_98, 0) = ((MR_Box) (PredId_13));
              MR_hl_field(0, Var_98, 1) = ((MR_Box) (ProcId_14));
            }
            ProcPieces_95 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(STATE_VARIABLE_ModuleInfo_0_26, (MR_Integer) 1, Var_98);
            Pieces_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ProcPieces_95, (MR_Word) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[9])));
            {
              Spec_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_42, 0) = ((MR_Box) ((MR_String) "function \140transform_hlds.table_gen.report_missing_tabled_for_io\'/4"));
              MR_hl_field(1, Spec_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_42, 2) = ((MR_Box) ((MR_Unsigned) 104U));
              MR_hl_field(1, Spec_42, 3) = ((MR_Box) (Context_94));
              MR_hl_field(1, Spec_42, 4) = ((MR_Box) (Pieces_96));
            }
            {
              STATE_VARIABLE_Specs_52_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_Specs_52_60, 0) = ((MR_Box) (Spec_42));
              MR_hl_field(1, STATE_VARIABLE_Specs_52_60, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_30));
            }
          }
          break;
      }
      if ((TransformPrimitive_41 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_ModuleInfo_27 = STATE_VARIABLE_ModuleInfo_0_26;
        *STATE_VARIABLE_GenMap_29 = STATE_VARIABLE_GenMap_0_28;
        *STATE_VARIABLE_Specs_31 = STATE_VARIABLE_Specs_52_60;
      }
      else
      {
        MR_Word Unitize_43 = ((MR_Word) ((MR_hl_field(1, TransformPrimitive_41, (MR_Integer) 0))));
        MR_Word TraceTableIoOnlyRetry_44;
        MR_Word EntryKind_48;
        MR_Word TableIoMethod_49;
        MR_Word ProcInfo1_50;
        MR_Word Var_62;
        MR_Word Var_51;
        MR_Word Var_52;

        libs__globals__lookup_bool_option_3_p_0(Globals_35, (MR_Integer) 159, &TraceTableIoOnlyRetry_44);
        switch (TraceTableIoOnlyRetry_44) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeClassConstraints_45;
              MR_Word UnivConstraints_46;
              MR_Word ExistConstraints_47;

              hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo0_16, &TypeClassConstraints_45);
              UnivConstraints_46 = ((MR_Word) ((MR_hl_field(0, TypeClassConstraints_45, (MR_Integer) 0))));
              ExistConstraints_47 = ((MR_Word) ((MR_hl_field(0, TypeClassConstraints_45, (MR_Integer) 1))));
              succeeded = (UnivConstraints_46 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
                succeeded = (ExistConstraints_47 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
                EntryKind_48 = (MR_Integer) 2;
              else
                EntryKind_48 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 1:
            EntryKind_48 = (MR_Integer) 0;
            break;
        }
        {
          TableIoMethod_49 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, TableIoMethod_49, 0) = (MR_Box) (((((MR_Unsigned) (EntryKind_48) << 1)) | (MR_Unsigned) (Unitize_43)));
        }
        {
          Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_62, 0) = ((MR_Box) (TableIoMethod_49));
        }
        hlds__hlds_pred__proc_info_set_eval_method_3_p_0(Var_62, ProcInfo0_15, &ProcInfo1_50);
        transform_hlds__table_gen__table_gen_transform_proc_if_possible_13_p_0(TableIoMethod_49, PredId_13, ProcId_14, ProcInfo1_50, &Var_51, PredInfo0_16, &Var_52, STATE_VARIABLE_ModuleInfo_0_26, STATE_VARIABLE_ModuleInfo_27, STATE_VARIABLE_GenMap_0_28, STATE_VARIABLE_GenMap_29, STATE_VARIABLE_Specs_52_60, STATE_VARIABLE_Specs_31);
      }
    }
    else
    {
      *STATE_VARIABLE_Specs_31 = STATE_VARIABLE_Specs_0_30;
      *STATE_VARIABLE_GenMap_29 = STATE_VARIABLE_GenMap_0_28;
      *STATE_VARIABLE_ModuleInfo_27 = STATE_VARIABLE_ModuleInfo_0_26;
    }
  }
  else
  {
    MR_Word TabledMethod_21 = ((MR_Word) ((MR_hl_field(1, EvalMethod_20, (MR_Integer) 0))));
    MR_Word Var_22;
    MR_Word Var_23;

    transform_hlds__table_gen__table_gen_transform_proc_if_possible_13_p_0(TabledMethod_21, PredId_13, ProcId_14, ProcInfo0_15, &Var_22, PredInfo0_16, &Var_23, STATE_VARIABLE_ModuleInfo_0_26, STATE_VARIABLE_ModuleInfo_27, STATE_VARIABLE_GenMap_0_28, STATE_VARIABLE_GenMap_29, STATE_VARIABLE_Specs_0_30, STATE_VARIABLE_Specs_31);
  }
}

static void MR_CALL 
transform_hlds__table_gen__table_gen_transform_proc_if_possible_13_p_0(
  MR_Word TabledMethod_14,
  MR_Word PredId_15,
  MR_Integer ProcId_16,
  MR_Word STATE_VARIABLE_ProcInfo_0_25,
  MR_Word * STATE_VARIABLE_ProcInfo_26,
  MR_Word STATE_VARIABLE_PredInfo_0_27,
  MR_Word * STATE_VARIABLE_PredInfo_28,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30,
  MR_Word STATE_VARIABLE_GenMap_0_31,
  MR_Word * STATE_VARIABLE_GenMap_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34)
{
  MR_bool succeeded;
  MR_Word GradeSpecs_22;
  MR_Word Globals_43;
  MR_Word Target_44;
  MR_Word GC_46;
  MR_Word Parallel_48;
  MR_Word STATE_VARIABLE_Specs_32_63;
  MR_Word STATE_VARIABLE_Specs_34_65;
  MR_Word STATE_VARIABLE_Specs_39_69;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_29, &Globals_43);
  libs__globals__get_target_2_p_0(Globals_43, &Target_44);
  switch (Target_44) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Specs_32_63 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        MR_Word TargetSpec_45;

        transform_hlds__table_gen__general_cannot_table_reason_spec_6_p_0(STATE_VARIABLE_ModuleInfo_0_29, PredId_15, ProcId_16, TabledMethod_14, (MR_Integer) 0, &TargetSpec_45);
        {
          STATE_VARIABLE_Specs_32_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Specs_32_63, 0) = ((MR_Box) (TargetSpec_45));
          MR_hl_field(1, STATE_VARIABLE_Specs_32_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
  }
  libs__globals__get_gc_method_2_p_0(Globals_43, &GC_46);
  switch (GC_46) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 5:
      {
        MR_Word GcSpec_47;

        transform_hlds__table_gen__general_cannot_table_reason_spec_6_p_0(STATE_VARIABLE_ModuleInfo_0_29, PredId_15, ProcId_16, TabledMethod_14, (MR_Integer) 1, &GcSpec_47);
        {
          STATE_VARIABLE_Specs_34_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Specs_34_65, 0) = ((MR_Box) (GcSpec_47));
          MR_hl_field(1, STATE_VARIABLE_Specs_34_65, 1) = ((MR_Box) (STATE_VARIABLE_Specs_32_63));
        }
      }
      break;
    case (MR_Integer) 0:
      STATE_VARIABLE_Specs_34_65 = STATE_VARIABLE_Specs_32_63;
      break;
    case (MR_Integer) 2:
      STATE_VARIABLE_Specs_34_65 = STATE_VARIABLE_Specs_32_63;
      break;
    case (MR_Integer) 3:
      STATE_VARIABLE_Specs_34_65 = STATE_VARIABLE_Specs_32_63;
      break;
    case (MR_Integer) 4:
      {
        MR_Word GcSpec_79;

        transform_hlds__table_gen__general_cannot_table_reason_spec_6_p_0(STATE_VARIABLE_ModuleInfo_0_29, PredId_15, ProcId_16, TabledMethod_14, (MR_Integer) 2, &GcSpec_79);
        {
          STATE_VARIABLE_Specs_34_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Specs_34_65, 0) = ((MR_Box) (GcSpec_79));
          MR_hl_field(1, STATE_VARIABLE_Specs_34_65, 1) = ((MR_Box) (STATE_VARIABLE_Specs_32_63));
        }
      }
      break;
    case (MR_Integer) 1:
      STATE_VARIABLE_Specs_34_65 = STATE_VARIABLE_Specs_32_63;
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_43, (MR_Integer) 265, &Parallel_48);
  switch (Parallel_48) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Specs_39_69 = STATE_VARIABLE_Specs_34_65;
      break;
    case (MR_Integer) 1:
      {
        MR_Word ParSpec_49;

        transform_hlds__table_gen__general_cannot_table_reason_spec_6_p_0(STATE_VARIABLE_ModuleInfo_0_29, PredId_15, ProcId_16, TabledMethod_14, (MR_Integer) 3, &ParSpec_49);
        {
          STATE_VARIABLE_Specs_39_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Specs_39_69, 0) = ((MR_Box) (ParSpec_49));
          MR_hl_field(1, STATE_VARIABLE_Specs_39_69, 1) = ((MR_Box) (STATE_VARIABLE_Specs_34_65));
        }
      }
      break;
  }
  switch (MR_tag((MR_Word) TabledMethod_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      GradeSpecs_22 = STATE_VARIABLE_Specs_39_69;
      break;
    case (MR_Integer) 1:
      GradeSpecs_22 = STATE_VARIABLE_Specs_39_69;
      break;
    case (MR_Integer) 2:
      GradeSpecs_22 = STATE_VARIABLE_Specs_39_69;
      break;
    case (MR_Integer) 3:
      {
        MR_Word HighLevelCode_51;
        MR_Word UseTrail_53;
        MR_Word ProfileCalls_55;
        MR_Word ProfileDeep_56;
        MR_Word STATE_VARIABLE_Specs_42_72;
        MR_Word STATE_VARIABLE_Specs_45_75;

        libs__globals__lookup_bool_option_3_p_0(Globals_43, (MR_Integer) 308, &HighLevelCode_51);
        switch (HighLevelCode_51) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Specs_42_72 = STATE_VARIABLE_Specs_39_69;
            break;
          case (MR_Integer) 1:
            {
              MR_Word HLCSpec_52;
              MR_Word Pieces_80;

              Pieces_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[36])), (MR_Word) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[38])));
              {
                HLCSpec_52 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, HLCSpec_52, 0) = ((MR_Box) ((MR_String) "predicate \140transform_hlds.table_gen.mm_cannot_table_reason_spec\'/2"));
                MR_hl_field(2, HLCSpec_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(2, HLCSpec_52, 2) = ((MR_Box) ((MR_Unsigned) 104U));
                MR_hl_field(2, HLCSpec_52, 3) = ((MR_Box) (Pieces_80));
              }
              {
                STATE_VARIABLE_Specs_42_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_Specs_42_72, 0) = ((MR_Box) (HLCSpec_52));
                MR_hl_field(1, STATE_VARIABLE_Specs_42_72, 1) = ((MR_Box) (STATE_VARIABLE_Specs_39_69));
              }
            }
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(Globals_43, (MR_Integer) 267, &UseTrail_53);
        switch (UseTrail_53) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Specs_45_75 = STATE_VARIABLE_Specs_42_72;
            break;
          case (MR_Integer) 1:
            {
              MR_Word TrailSpec_54;
              MR_Word Pieces_90;

              Pieces_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[36])), (MR_Word) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[42])));
              {
                TrailSpec_54 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, TrailSpec_54, 0) = ((MR_Box) ((MR_String) "predicate \140transform_hlds.table_gen.mm_cannot_table_reason_spec\'/2"));
                MR_hl_field(2, TrailSpec_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(2, TrailSpec_54, 2) = ((MR_Box) ((MR_Unsigned) 104U));
                MR_hl_field(2, TrailSpec_54, 3) = ((MR_Box) (Pieces_90));
              }
              {
                STATE_VARIABLE_Specs_45_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_Specs_45_75, 0) = ((MR_Box) (TrailSpec_54));
                MR_hl_field(1, STATE_VARIABLE_Specs_45_75, 1) = ((MR_Box) (STATE_VARIABLE_Specs_42_72));
              }
            }
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(Globals_43, (MR_Integer) 241, &ProfileCalls_55);
        libs__globals__lookup_bool_option_3_p_0(Globals_43, (MR_Integer) 244, &ProfileDeep_56);
        succeeded = (ProfileCalls_55 == (MR_Integer) 1);
        if (!(succeeded))
          succeeded = (ProfileDeep_56 == (MR_Integer) 1);
        if (succeeded)
        {
          MR_Word ProfSpec_57;
          MR_Word Pieces_100;

          Pieces_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[36])), (MR_Word) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[40])));
          {
            ProfSpec_57 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, ProfSpec_57, 0) = ((MR_Box) ((MR_String) "predicate \140transform_hlds.table_gen.mm_cannot_table_reason_spec\'/2"));
            MR_hl_field(2, ProfSpec_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(2, ProfSpec_57, 2) = ((MR_Box) ((MR_Unsigned) 104U));
            MR_hl_field(2, ProfSpec_57, 3) = ((MR_Box) (Pieces_100));
          }
          {
            GradeSpecs_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, GradeSpecs_22, 0) = ((MR_Box) (ProfSpec_57));
            MR_hl_field(1, GradeSpecs_22, 1) = ((MR_Box) (STATE_VARIABLE_Specs_45_75));
          }
        }
        else
          GradeSpecs_22 = STATE_VARIABLE_Specs_45_75;
      }
      break;
  }
  if ((GradeSpecs_22 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    transform_hlds__table_gen__table_gen_transform_proc_11_p_0(TabledMethod_14, PredId_15, ProcId_16, STATE_VARIABLE_ProcInfo_0_25, STATE_VARIABLE_ProcInfo_26, STATE_VARIABLE_PredInfo_0_27, STATE_VARIABLE_PredInfo_28, STATE_VARIABLE_ModuleInfo_0_29, STATE_VARIABLE_ModuleInfo_30, STATE_VARIABLE_GenMap_0_31, STATE_VARIABLE_GenMap_32);
    *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_0_33;
  }
  else
  {
    MR_Word Var_39;

    succeeded = ((MR_tag((MR_Word) TabledMethod_14)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_39 = ((MR_Unsigned) ((MR_hl_field(1, TabledMethod_14, (MR_Integer) 0))) & (MR_Integer) 1);
      succeeded = (Var_39 == (MR_Integer) 1);
    }
    if (succeeded)
      *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_0_33;
    else
      *STATE_VARIABLE_Specs_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), GradeSpecs_22, STATE_VARIABLE_Specs_0_33);
    hlds__hlds_pred__proc_info_set_eval_method_3_p_0((MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ProcInfo_0_25, STATE_VARIABLE_ProcInfo_26);
    hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_15, ProcId_16, STATE_VARIABLE_PredInfo_0_27, *STATE_VARIABLE_ProcInfo_26, STATE_VARIABLE_ModuleInfo_0_29, STATE_VARIABLE_ModuleInfo_30);
    *STATE_VARIABLE_PredInfo_28 = STATE_VARIABLE_PredInfo_0_27;
    *STATE_VARIABLE_GenMap_32 = STATE_VARIABLE_GenMap_0_31;
  }
}

static MR_bool MR_CALL 
transform_hlds__table_gen__table_gen_transform_proc_11_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__table_gen__IntroducedFrom__pred__table_gen_transform_proc__712__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__table_gen__table_gen_transform_proc_11_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__table_gen__IntroducedFrom__pred__table_gen_transform_proc__650__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__table_gen__table_gen_transform_proc_11_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__table_gen__IntroducedFrom__pred__table_gen_transform_proc__648__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__table_gen__table_gen_transform_proc_11_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__table_gen__IntroducedFrom__pred__table_gen_transform_proc__618__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
transform_hlds__table_gen__table_gen_transform_proc_11_p_0(
  MR_Word TabledMethod_12,
  MR_Word PredId_13,
  MR_Integer ProcId_14,
  MR_Word STATE_VARIABLE_ProcInfo_0_70,
  MR_Word * STATE_VARIABLE_ProcInfo_71,
  MR_Word STATE_VARIABLE_PredInfo_0_72,
  MR_Word * STATE_VARIABLE_PredInfo_73,
  MR_Word STATE_VARIABLE_ModuleInfo_0_74,
  MR_Word * STATE_VARIABLE_ModuleInfo_75,
  MR_Word STATE_VARIABLE_GenMap_0_76,
  MR_Word * STATE_VARIABLE_GenMap_77)
{
  MR_bool succeeded;
  MR_Word TableInfo0_19;
  MR_Word Detism_20;
  MR_Word CodeModel_21;
  MR_Word HeadVars_22;
  MR_Word VarTable0_23;
  MR_Word OrigGoal_24;
  MR_Word ArgModes_25;
  MR_Word MaybeAttributes_26;
  MR_Word Attributes_27;
  MR_Word ProcTable1_68;
  MR_Word ProcTable_69;
  MR_Word STATE_VARIABLE_PredInfo_105_105;
  MR_Word STATE_VARIABLE_ProcInfo_111_111;
  MR_Word STATE_VARIABLE_ModuleInfo_112_112;
  MR_Word STATE_VARIABLE_ModuleInfo_115_115;
  MR_Word STATE_VARIABLE_PredInfo_116_116;
  MR_Word Var_117;

  transform_hlds__table_gen__table_info_init_4_p_0(STATE_VARIABLE_ModuleInfo_0_74, STATE_VARIABLE_PredInfo_0_72, STATE_VARIABLE_ProcInfo_0_70, &TableInfo0_19);
  hlds__hlds_pred__proc_info_interface_determinism_2_p_0(STATE_VARIABLE_ProcInfo_0_70, &Detism_20);
  hlds__code_model__determinism_to_code_model_2_p_0(Detism_20, &CodeModel_21);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_0_70, &HeadVars_22);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_70, &VarTable0_23);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_70, &OrigGoal_24);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_0_70, &ArgModes_25);
  hlds__hlds_pred__proc_info_get_table_attributes_2_p_0(STATE_VARIABLE_ProcInfo_0_70, &MaybeAttributes_26);
  if ((MaybeAttributes_26 == (MR_Word) ((MR_Unsigned) 0U)))
    Attributes_27 = parse_tree__prog_data_pragma__default_memo_table_attributes_0_f_0();
  else
    Attributes_27 = ((MR_Word) ((MR_hl_field(1, MaybeAttributes_26, (MR_Integer) 0))));
  switch (MR_tag((MR_Word) TabledMethod_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word CallStrictness_35 = ((MR_Word) ((MR_hl_field(0, Attributes_27, (MR_Integer) 0))));
        MR_Word MaybeSpecMethod_150;
        MR_Word Statistics_151 = ((((MR_Unsigned) ((MR_hl_field(0, Attributes_27, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
        MR_Word MaybeSizeLimit_152 = ((MR_Word) ((MR_hl_field(0, Attributes_27, (MR_Integer) 1))));

        switch (MR_tag((MR_Word) CallStrictness_35)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(CallStrictness_35)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                MaybeSpecMethod_150 = (MR_Word) (&transform_hlds__table_gen_scalar_common_3[3]);
                break;
              case (MR_Integer) 1:
                MaybeSpecMethod_150 = (MR_Word) (&transform_hlds__table_gen_scalar_common_3[4]);
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgMethods_36 = ((MR_Word) ((MR_hl_field(1, CallStrictness_35, (MR_Integer) 0))));
              MR_Word HiddenArgMethod_37 = ((MR_Unsigned) ((MR_hl_field(1, CallStrictness_35, (MR_Integer) 1))) & (MR_Integer) 1);

              {
                MaybeSpecMethod_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeSpecMethod_150, 0) = ((MR_Box) (ArgMethods_36));
                MR_hl_field(1, MaybeSpecMethod_150, 1) = (MR_Box) ((MR_Unsigned) (HiddenArgMethod_37));
              }
            }
            break;
        }
        switch (MR_tag((MR_Word) TabledMethod_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word CallTableTip_56;
              MR_Word InputSteps_57;
              MR_Word FinalProcTableStructInfo_66;
              MR_Word PredProcId_67;
              MR_Word InputVarModeMethods_154;
              MR_Word OutputVarModeMethods_155;
              MR_Word NumberedInputVars_156;
              MR_Word NumberedOutputVars_157;
              MR_Word VarTable_177;
              MR_Word TableInfo_178;
              MR_Word Goal_179;
              MR_Word MaybeCallTableTip_181;
              MR_Word STATE_VARIABLE_ModuleInfo_104_183;
              MR_Word STATE_VARIABLE_ProcInfo_106_184;
              MR_Word STATE_VARIABLE_ProcInfo_107_185;
              MR_Word STATE_VARIABLE_ProcInfo_108_186;
              MR_Word Var_149;

              transform_hlds__table_gen__get_input_output_vars_7_p_0(HeadVars_22, ArgModes_25, STATE_VARIABLE_ModuleInfo_0_74, MaybeSpecMethod_150, &Var_149, &InputVarModeMethods_154, &OutputVarModeMethods_155);
              transform_hlds__table_gen__allocate_slot_numbers_3_p_0(InputVarModeMethods_154, (MR_Integer) 0, &NumberedInputVars_156);
              transform_hlds__table_gen__allocate_slot_numbers_3_p_0(OutputVarModeMethods_155, (MR_Integer) 0, &NumberedOutputVars_157);
              transform_hlds__table_gen__create_new_loop_goal_14_p_0(OrigGoal_24, Statistics_151, PredId_13, ProcId_14, HeadVars_22, NumberedInputVars_156, NumberedOutputVars_157, VarTable0_23, &VarTable_177, TableInfo0_19, &TableInfo_178, &CallTableTip_56, &Goal_179, &InputSteps_57);
              transform_hlds__table_gen__generate_gen_proc_table_info_10_p_0(TableInfo_178, PredId_13, ProcId_14, VarTable_177, TabledMethod_12, InputSteps_57, (MR_Word) ((MR_Unsigned) 0U), InputVarModeMethods_154, OutputVarModeMethods_155, &FinalProcTableStructInfo_66);
              {
                MaybeCallTableTip_181 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeCallTableTip_181, 0) = ((MR_Box) (CallTableTip_56));
              }
              *STATE_VARIABLE_GenMap_77 = STATE_VARIABLE_GenMap_0_76;
              transform_hlds__table_gen__table_info_extract_4_p_0(TableInfo_178, &STATE_VARIABLE_ModuleInfo_104_183, &STATE_VARIABLE_PredInfo_105_105, &STATE_VARIABLE_ProcInfo_106_184);
              hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_179, STATE_VARIABLE_ProcInfo_106_184, &STATE_VARIABLE_ProcInfo_107_185);
              hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_177, STATE_VARIABLE_ProcInfo_107_185, &STATE_VARIABLE_ProcInfo_108_186);
              hlds__hlds_pred__proc_info_set_call_table_tip_3_p_0(MaybeCallTableTip_181, STATE_VARIABLE_ProcInfo_108_186, &STATE_VARIABLE_ProcInfo_111_111);
              {
                PredProcId_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, PredProcId_67, 0) = ((MR_Box) (PredId_13));
                MR_hl_field(0, PredProcId_67, 1) = ((MR_Box) (ProcId_14));
              }
              transform_hlds__table_gen__add_proc_table_struct_5_p_0(PredProcId_67, FinalProcTableStructInfo_66, STATE_VARIABLE_ProcInfo_111_111, STATE_VARIABLE_ModuleInfo_104_183, &STATE_VARIABLE_ModuleInfo_112_112);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word CallTableTip_120;
              MR_Word InputSteps_121;
              MR_Word MaybeOutputSteps_122;
              MR_Word InputVarModeMethods_160;
              MR_Word OutputVarModeMethods_161;
              MR_Word NumberedInputVars_162;
              MR_Word NumberedOutputVars_163;
              MR_Word FinalProcTableStructInfo_189;
              MR_Word PredProcId_190;
              MR_Word VarTable_191;
              MR_Word TableInfo_192;
              MR_Word Goal_193;
              MR_Word MaybeCallTableTip_194;
              MR_Word STATE_VARIABLE_ModuleInfo_104_196;
              MR_Word STATE_VARIABLE_ProcInfo_106_197;
              MR_Word STATE_VARIABLE_ProcInfo_107_198;
              MR_Word STATE_VARIABLE_ProcInfo_108_199;
              MR_Word Var_158;

              transform_hlds__table_gen__get_input_output_vars_7_p_0(HeadVars_22, ArgModes_25, STATE_VARIABLE_ModuleInfo_0_74, MaybeSpecMethod_150, &Var_158, &InputVarModeMethods_160, &OutputVarModeMethods_161);
              transform_hlds__table_gen__allocate_slot_numbers_3_p_0(InputVarModeMethods_160, (MR_Integer) 0, &NumberedInputVars_162);
              transform_hlds__table_gen__allocate_slot_numbers_3_p_0(OutputVarModeMethods_161, (MR_Integer) 0, &NumberedOutputVars_163);
              switch (CodeModel_21) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                  {
                    transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_119_95_109_101_109_111_95_103_111_97_108_95_95_91_52_93_95_48_16_p_0(Detism_20, OrigGoal_24, Statistics_151, PredId_13, ProcId_14, HeadVars_22, NumberedInputVars_162, NumberedOutputVars_163, VarTable0_23, &VarTable_191, TableInfo0_19, &TableInfo_192, &CallTableTip_120, &Goal_193, &InputSteps_121);
                    MaybeOutputSteps_122 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word OutputSteps_61;

                    transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_119_95_109_101_109_111_95_110_111_110_95_103_111_97_108_95_95_91_52_93_95_48_17_p_0(Detism_20, OrigGoal_24, Statistics_151, PredId_13, ProcId_14, HeadVars_22, NumberedInputVars_162, NumberedOutputVars_163, VarTable0_23, &VarTable_191, TableInfo0_19, &TableInfo_192, &CallTableTip_120, &Goal_193, &InputSteps_121, &OutputSteps_61);
                    {
                      MaybeOutputSteps_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, MaybeOutputSteps_122, 0) = ((MR_Box) (OutputSteps_61));
                    }
                  }
                  break;
              }
              transform_hlds__table_gen__generate_gen_proc_table_info_10_p_0(TableInfo_192, PredId_13, ProcId_14, VarTable_191, TabledMethod_12, InputSteps_121, MaybeOutputSteps_122, InputVarModeMethods_160, OutputVarModeMethods_161, &FinalProcTableStructInfo_189);
              {
                MaybeCallTableTip_194 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeCallTableTip_194, 0) = ((MR_Box) (CallTableTip_120));
              }
              *STATE_VARIABLE_GenMap_77 = STATE_VARIABLE_GenMap_0_76;
              transform_hlds__table_gen__table_info_extract_4_p_0(TableInfo_192, &STATE_VARIABLE_ModuleInfo_104_196, &STATE_VARIABLE_PredInfo_105_105, &STATE_VARIABLE_ProcInfo_106_197);
              hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_193, STATE_VARIABLE_ProcInfo_106_197, &STATE_VARIABLE_ProcInfo_107_198);
              hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_191, STATE_VARIABLE_ProcInfo_107_198, &STATE_VARIABLE_ProcInfo_108_199);
              hlds__hlds_pred__proc_info_set_call_table_tip_3_p_0(MaybeCallTableTip_194, STATE_VARIABLE_ProcInfo_108_199, &STATE_VARIABLE_ProcInfo_111_111);
              {
                PredProcId_190 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, PredProcId_190, 0) = ((MR_Box) (PredId_13));
                MR_hl_field(0, PredProcId_190, 1) = ((MR_Box) (ProcId_14));
              }
              transform_hlds__table_gen__add_proc_table_struct_5_p_0(PredProcId_190, FinalProcTableStructInfo_189, STATE_VARIABLE_ProcInfo_111_111, STATE_VARIABLE_ModuleInfo_104_196, &STATE_VARIABLE_ModuleInfo_112_112);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word MinimalMethod_62;
              MR_Word Var_85;
              MR_Word Var_89;
              MR_Word Var_97;
              MR_Word InputVarModeMethods_166;
              MR_Word OutputVarModeMethods_167;
              MR_Word NumberedInputVars_168;
              MR_Word NumberedOutputVars_169;
              MR_Word Var_164;

              {
                Var_85 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_85, 0) = ((MR_Box) (&transform_hlds__table_gen_scalar_common_6[11]));
                MR_hl_field(0, Var_85, 1) = ((MR_Box) (transform_hlds__table_gen__table_gen_transform_proc_11_p_0_2));
                MR_hl_field(0, Var_85, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_85, 3) = ((MR_Box) (MaybeSizeLimit_152));
                MR_hl_field(0, Var_85, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_85, (MR_String) "predicate \140transform_hlds.table_gen.table_gen_transform_proc\'/11", (MR_String) "tabled_minimal with size limit");
              {
                Var_89 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_89, 0) = ((MR_Box) (&transform_hlds__table_gen_scalar_common_6[12]));
                MR_hl_field(0, Var_89, 1) = ((MR_Box) (transform_hlds__table_gen__table_gen_transform_proc_11_p_0_3));
                MR_hl_field(0, Var_89, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_89, 3) = ((MR_Box) (MaybeSpecMethod_150));
                MR_hl_field(0, Var_89, 4) = ((MR_Box) (&transform_hlds__table_gen_scalar_common_3[3]));
              }
              mercury__require__expect_3_p_0(Var_89, (MR_String) "predicate \140transform_hlds.table_gen.table_gen_transform_proc\'/11", (MR_String) "tabled_minimal without all_strict");
              transform_hlds__table_gen__get_input_output_vars_7_p_0(HeadVars_22, ArgModes_25, STATE_VARIABLE_ModuleInfo_0_74, MaybeSpecMethod_150, &Var_164, &InputVarModeMethods_166, &OutputVarModeMethods_167);
              transform_hlds__table_gen__allocate_slot_numbers_3_p_0(InputVarModeMethods_166, (MR_Integer) 0, &NumberedInputVars_168);
              transform_hlds__table_gen__allocate_slot_numbers_3_p_0(OutputVarModeMethods_167, (MR_Integer) 0, &NumberedOutputVars_169);
              MinimalMethod_62 = ((MR_Unsigned) ((MR_hl_field(3, TabledMethod_12, (MR_Integer) 0))) & (MR_Integer) 3);
              {
                Var_97 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_97, 0) = ((MR_Box) (&transform_hlds__table_gen_scalar_common_6[13]));
                MR_hl_field(0, Var_97, 1) = ((MR_Box) (transform_hlds__table_gen__table_gen_transform_proc_11_p_0_4));
                MR_hl_field(0, Var_97, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_97, 3) = ((MR_Box) (CodeModel_21));
                MR_hl_field(0, Var_97, 4) = ((MR_Box) ((MR_Integer) 2));
              }
              mercury__require__expect_3_p_0(Var_97, (MR_String) "predicate \140transform_hlds.table_gen.table_gen_transform_proc\'/11", (MR_String) "table_gen_transform_proc: minimal model but not model_non");
              switch (MinimalMethod_62) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word VarTable_206;
                    MR_Word TableInfo_207;
                    MR_Word Goal_208;
                    MR_Word STATE_VARIABLE_ProcInfo_106_212;
                    MR_Word STATE_VARIABLE_ProcInfo_107_213;
                    MR_Word STATE_VARIABLE_ProcInfo_108_214;
                    MR_Word _InputSteps_63;
                    MR_Word _OutputSteps_64;

                    transform_hlds__table_gen__do_own_stack_transform_19_p_0(Detism_20, OrigGoal_24, Statistics_151, PredId_13, ProcId_14, STATE_VARIABLE_PredInfo_0_72, STATE_VARIABLE_ProcInfo_0_70, HeadVars_22, NumberedInputVars_168, NumberedOutputVars_169, VarTable0_23, &VarTable_206, TableInfo0_19, &TableInfo_207, STATE_VARIABLE_GenMap_0_76, STATE_VARIABLE_GenMap_77, &Goal_208, &_InputSteps_63, &_OutputSteps_64);
                    transform_hlds__table_gen__table_info_extract_4_p_0(TableInfo_207, &STATE_VARIABLE_ModuleInfo_112_112, &STATE_VARIABLE_PredInfo_105_105, &STATE_VARIABLE_ProcInfo_106_212);
                    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_208, STATE_VARIABLE_ProcInfo_106_212, &STATE_VARIABLE_ProcInfo_107_213);
                    hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_206, STATE_VARIABLE_ProcInfo_107_213, &STATE_VARIABLE_ProcInfo_108_214);
                    hlds__hlds_pred__proc_info_set_call_table_tip_3_p_0((MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ProcInfo_108_214, &STATE_VARIABLE_ProcInfo_111_111);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.table_gen_transform_proc\'/11", (MR_String) "own stacks generator");
                    return;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word CallTableTip_124;
                    MR_Word InputSteps_125;
                    MR_Word MaybeOutputSteps_126;
                    MR_Word OutputSteps_128;
                    MR_Word FinalProcTableStructInfo_200;
                    MR_Word PredProcId_201;
                    MR_Word VarTable_216;
                    MR_Word TableInfo_217;
                    MR_Word Goal_218;
                    MR_Word MaybeCallTableTip_219;
                    MR_Word STATE_VARIABLE_ModuleInfo_104_221;
                    MR_Word STATE_VARIABLE_ProcInfo_106_222;
                    MR_Word STATE_VARIABLE_ProcInfo_107_223;
                    MR_Word STATE_VARIABLE_ProcInfo_108_224;

                    transform_hlds__table_gen__create_new_mm_goal_16_p_0(Detism_20, OrigGoal_24, Statistics_151, PredId_13, ProcId_14, HeadVars_22, NumberedInputVars_168, NumberedOutputVars_169, VarTable0_23, &VarTable_216, TableInfo0_19, &TableInfo_217, &CallTableTip_124, &Goal_218, &InputSteps_125, &OutputSteps_128);
                    {
                      MaybeCallTableTip_219 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, MaybeCallTableTip_219, 0) = ((MR_Box) (CallTableTip_124));
                    }
                    {
                      MaybeOutputSteps_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, MaybeOutputSteps_126, 0) = ((MR_Box) (OutputSteps_128));
                    }
                    transform_hlds__table_gen__generate_gen_proc_table_info_10_p_0(TableInfo_217, PredId_13, ProcId_14, VarTable_216, TabledMethod_12, InputSteps_125, MaybeOutputSteps_126, InputVarModeMethods_166, OutputVarModeMethods_167, &FinalProcTableStructInfo_200);
                    *STATE_VARIABLE_GenMap_77 = STATE_VARIABLE_GenMap_0_76;
                    transform_hlds__table_gen__table_info_extract_4_p_0(TableInfo_217, &STATE_VARIABLE_ModuleInfo_104_221, &STATE_VARIABLE_PredInfo_105_105, &STATE_VARIABLE_ProcInfo_106_222);
                    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_218, STATE_VARIABLE_ProcInfo_106_222, &STATE_VARIABLE_ProcInfo_107_223);
                    hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_216, STATE_VARIABLE_ProcInfo_107_223, &STATE_VARIABLE_ProcInfo_108_224);
                    hlds__hlds_pred__proc_info_set_call_table_tip_3_p_0(MaybeCallTableTip_219, STATE_VARIABLE_ProcInfo_108_224, &STATE_VARIABLE_ProcInfo_111_111);
                    {
                      PredProcId_201 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, PredProcId_201, 0) = ((MR_Box) (PredId_13));
                      MR_hl_field(0, PredProcId_201, 1) = ((MR_Box) (ProcId_14));
                    }
                    transform_hlds__table_gen__add_proc_table_struct_5_p_0(PredProcId_201, FinalProcTableStructInfo_200, STATE_VARIABLE_ProcInfo_111_111, STATE_VARIABLE_ModuleInfo_104_221, &STATE_VARIABLE_ModuleInfo_112_112);
                  }
                  break;
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 3:
      {
        MR_Word CallStrictness_35 = ((MR_Word) ((MR_hl_field(0, Attributes_27, (MR_Integer) 0))));
        MR_Word MaybeSpecMethod_150;
        MR_Word Statistics_151 = ((((MR_Unsigned) ((MR_hl_field(0, Attributes_27, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
        MR_Word MaybeSizeLimit_152 = ((MR_Word) ((MR_hl_field(0, Attributes_27, (MR_Integer) 1))));

        switch (MR_tag((MR_Word) CallStrictness_35)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(CallStrictness_35)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                MaybeSpecMethod_150 = (MR_Word) (&transform_hlds__table_gen_scalar_common_3[3]);
                break;
              case (MR_Integer) 1:
                MaybeSpecMethod_150 = (MR_Word) (&transform_hlds__table_gen_scalar_common_3[4]);
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgMethods_36 = ((MR_Word) ((MR_hl_field(1, CallStrictness_35, (MR_Integer) 0))));
              MR_Word HiddenArgMethod_37 = ((MR_Unsigned) ((MR_hl_field(1, CallStrictness_35, (MR_Integer) 1))) & (MR_Integer) 1);

              {
                MaybeSpecMethod_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeSpecMethod_150, 0) = ((MR_Box) (ArgMethods_36));
                MR_hl_field(1, MaybeSpecMethod_150, 1) = (MR_Box) ((MR_Unsigned) (HiddenArgMethod_37));
              }
            }
            break;
        }
        switch (MR_tag((MR_Word) TabledMethod_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word CallTableTip_56;
              MR_Word InputSteps_57;
              MR_Word FinalProcTableStructInfo_66;
              MR_Word PredProcId_67;
              MR_Word InputVarModeMethods_154;
              MR_Word OutputVarModeMethods_155;
              MR_Word NumberedInputVars_156;
              MR_Word NumberedOutputVars_157;
              MR_Word VarTable_177;
              MR_Word TableInfo_178;
              MR_Word Goal_179;
              MR_Word MaybeCallTableTip_181;
              MR_Word STATE_VARIABLE_ModuleInfo_104_183;
              MR_Word STATE_VARIABLE_ProcInfo_106_184;
              MR_Word STATE_VARIABLE_ProcInfo_107_185;
              MR_Word STATE_VARIABLE_ProcInfo_108_186;
              MR_Word Var_149;

              transform_hlds__table_gen__get_input_output_vars_7_p_0(HeadVars_22, ArgModes_25, STATE_VARIABLE_ModuleInfo_0_74, MaybeSpecMethod_150, &Var_149, &InputVarModeMethods_154, &OutputVarModeMethods_155);
              transform_hlds__table_gen__allocate_slot_numbers_3_p_0(InputVarModeMethods_154, (MR_Integer) 0, &NumberedInputVars_156);
              transform_hlds__table_gen__allocate_slot_numbers_3_p_0(OutputVarModeMethods_155, (MR_Integer) 0, &NumberedOutputVars_157);
              transform_hlds__table_gen__create_new_loop_goal_14_p_0(OrigGoal_24, Statistics_151, PredId_13, ProcId_14, HeadVars_22, NumberedInputVars_156, NumberedOutputVars_157, VarTable0_23, &VarTable_177, TableInfo0_19, &TableInfo_178, &CallTableTip_56, &Goal_179, &InputSteps_57);
              transform_hlds__table_gen__generate_gen_proc_table_info_10_p_0(TableInfo_178, PredId_13, ProcId_14, VarTable_177, TabledMethod_12, InputSteps_57, (MR_Word) ((MR_Unsigned) 0U), InputVarModeMethods_154, OutputVarModeMethods_155, &FinalProcTableStructInfo_66);
              {
                MaybeCallTableTip_181 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeCallTableTip_181, 0) = ((MR_Box) (CallTableTip_56));
              }
              *STATE_VARIABLE_GenMap_77 = STATE_VARIABLE_GenMap_0_76;
              transform_hlds__table_gen__table_info_extract_4_p_0(TableInfo_178, &STATE_VARIABLE_ModuleInfo_104_183, &STATE_VARIABLE_PredInfo_105_105, &STATE_VARIABLE_ProcInfo_106_184);
              hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_179, STATE_VARIABLE_ProcInfo_106_184, &STATE_VARIABLE_ProcInfo_107_185);
              hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_177, STATE_VARIABLE_ProcInfo_107_185, &STATE_VARIABLE_ProcInfo_108_186);
              hlds__hlds_pred__proc_info_set_call_table_tip_3_p_0(MaybeCallTableTip_181, STATE_VARIABLE_ProcInfo_108_186, &STATE_VARIABLE_ProcInfo_111_111);
              {
                PredProcId_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, PredProcId_67, 0) = ((MR_Box) (PredId_13));
                MR_hl_field(0, PredProcId_67, 1) = ((MR_Box) (ProcId_14));
              }
              transform_hlds__table_gen__add_proc_table_struct_5_p_0(PredProcId_67, FinalProcTableStructInfo_66, STATE_VARIABLE_ProcInfo_111_111, STATE_VARIABLE_ModuleInfo_104_183, &STATE_VARIABLE_ModuleInfo_112_112);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word CallTableTip_120;
              MR_Word InputSteps_121;
              MR_Word MaybeOutputSteps_122;
              MR_Word InputVarModeMethods_160;
              MR_Word OutputVarModeMethods_161;
              MR_Word NumberedInputVars_162;
              MR_Word NumberedOutputVars_163;
              MR_Word FinalProcTableStructInfo_189;
              MR_Word PredProcId_190;
              MR_Word VarTable_191;
              MR_Word TableInfo_192;
              MR_Word Goal_193;
              MR_Word MaybeCallTableTip_194;
              MR_Word STATE_VARIABLE_ModuleInfo_104_196;
              MR_Word STATE_VARIABLE_ProcInfo_106_197;
              MR_Word STATE_VARIABLE_ProcInfo_107_198;
              MR_Word STATE_VARIABLE_ProcInfo_108_199;
              MR_Word Var_158;

              transform_hlds__table_gen__get_input_output_vars_7_p_0(HeadVars_22, ArgModes_25, STATE_VARIABLE_ModuleInfo_0_74, MaybeSpecMethod_150, &Var_158, &InputVarModeMethods_160, &OutputVarModeMethods_161);
              transform_hlds__table_gen__allocate_slot_numbers_3_p_0(InputVarModeMethods_160, (MR_Integer) 0, &NumberedInputVars_162);
              transform_hlds__table_gen__allocate_slot_numbers_3_p_0(OutputVarModeMethods_161, (MR_Integer) 0, &NumberedOutputVars_163);
              switch (CodeModel_21) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                  {
                    transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_119_95_109_101_109_111_95_103_111_97_108_95_95_91_52_93_95_48_16_p_0(Detism_20, OrigGoal_24, Statistics_151, PredId_13, ProcId_14, HeadVars_22, NumberedInputVars_162, NumberedOutputVars_163, VarTable0_23, &VarTable_191, TableInfo0_19, &TableInfo_192, &CallTableTip_120, &Goal_193, &InputSteps_121);
                    MaybeOutputSteps_122 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word OutputSteps_61;

                    transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_119_95_109_101_109_111_95_110_111_110_95_103_111_97_108_95_95_91_52_93_95_48_17_p_0(Detism_20, OrigGoal_24, Statistics_151, PredId_13, ProcId_14, HeadVars_22, NumberedInputVars_162, NumberedOutputVars_163, VarTable0_23, &VarTable_191, TableInfo0_19, &TableInfo_192, &CallTableTip_120, &Goal_193, &InputSteps_121, &OutputSteps_61);
                    {
                      MaybeOutputSteps_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, MaybeOutputSteps_122, 0) = ((MR_Box) (OutputSteps_61));
                    }
                  }
                  break;
              }
              transform_hlds__table_gen__generate_gen_proc_table_info_10_p_0(TableInfo_192, PredId_13, ProcId_14, VarTable_191, TabledMethod_12, InputSteps_121, MaybeOutputSteps_122, InputVarModeMethods_160, OutputVarModeMethods_161, &FinalProcTableStructInfo_189);
              {
                MaybeCallTableTip_194 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeCallTableTip_194, 0) = ((MR_Box) (CallTableTip_120));
              }
              *STATE_VARIABLE_GenMap_77 = STATE_VARIABLE_GenMap_0_76;
              transform_hlds__table_gen__table_info_extract_4_p_0(TableInfo_192, &STATE_VARIABLE_ModuleInfo_104_196, &STATE_VARIABLE_PredInfo_105_105, &STATE_VARIABLE_ProcInfo_106_197);
              hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_193, STATE_VARIABLE_ProcInfo_106_197, &STATE_VARIABLE_ProcInfo_107_198);
              hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_191, STATE_VARIABLE_ProcInfo_107_198, &STATE_VARIABLE_ProcInfo_108_199);
              hlds__hlds_pred__proc_info_set_call_table_tip_3_p_0(MaybeCallTableTip_194, STATE_VARIABLE_ProcInfo_108_199, &STATE_VARIABLE_ProcInfo_111_111);
              {
                PredProcId_190 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, PredProcId_190, 0) = ((MR_Box) (PredId_13));
                MR_hl_field(0, PredProcId_190, 1) = ((MR_Box) (ProcId_14));
              }
              transform_hlds__table_gen__add_proc_table_struct_5_p_0(PredProcId_190, FinalProcTableStructInfo_189, STATE_VARIABLE_ProcInfo_111_111, STATE_VARIABLE_ModuleInfo_104_196, &STATE_VARIABLE_ModuleInfo_112_112);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word MinimalMethod_62;
              MR_Word Var_85;
              MR_Word Var_89;
              MR_Word Var_97;
              MR_Word InputVarModeMethods_166;
              MR_Word OutputVarModeMethods_167;
              MR_Word NumberedInputVars_168;
              MR_Word NumberedOutputVars_169;
              MR_Word Var_164;

              {
                Var_85 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_85, 0) = ((MR_Box) (&transform_hlds__table_gen_scalar_common_6[11]));
                MR_hl_field(0, Var_85, 1) = ((MR_Box) (transform_hlds__table_gen__table_gen_transform_proc_11_p_0_2));
                MR_hl_field(0, Var_85, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_85, 3) = ((MR_Box) (MaybeSizeLimit_152));
                MR_hl_field(0, Var_85, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_85, (MR_String) "predicate \140transform_hlds.table_gen.table_gen_transform_proc\'/11", (MR_String) "tabled_minimal with size limit");
              {
                Var_89 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_89, 0) = ((MR_Box) (&transform_hlds__table_gen_scalar_common_6[12]));
                MR_hl_field(0, Var_89, 1) = ((MR_Box) (transform_hlds__table_gen__table_gen_transform_proc_11_p_0_3));
                MR_hl_field(0, Var_89, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_89, 3) = ((MR_Box) (MaybeSpecMethod_150));
                MR_hl_field(0, Var_89, 4) = ((MR_Box) (&transform_hlds__table_gen_scalar_common_3[3]));
              }
              mercury__require__expect_3_p_0(Var_89, (MR_String) "predicate \140transform_hlds.table_gen.table_gen_transform_proc\'/11", (MR_String) "tabled_minimal without all_strict");
              transform_hlds__table_gen__get_input_output_vars_7_p_0(HeadVars_22, ArgModes_25, STATE_VARIABLE_ModuleInfo_0_74, MaybeSpecMethod_150, &Var_164, &InputVarModeMethods_166, &OutputVarModeMethods_167);
              transform_hlds__table_gen__allocate_slot_numbers_3_p_0(InputVarModeMethods_166, (MR_Integer) 0, &NumberedInputVars_168);
              transform_hlds__table_gen__allocate_slot_numbers_3_p_0(OutputVarModeMethods_167, (MR_Integer) 0, &NumberedOutputVars_169);
              MinimalMethod_62 = ((MR_Unsigned) ((MR_hl_field(3, TabledMethod_12, (MR_Integer) 0))) & (MR_Integer) 3);
              {
                Var_97 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_97, 0) = ((MR_Box) (&transform_hlds__table_gen_scalar_common_6[13]));
                MR_hl_field(0, Var_97, 1) = ((MR_Box) (transform_hlds__table_gen__table_gen_transform_proc_11_p_0_4));
                MR_hl_field(0, Var_97, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_97, 3) = ((MR_Box) (CodeModel_21));
                MR_hl_field(0, Var_97, 4) = ((MR_Box) ((MR_Integer) 2));
              }
              mercury__require__expect_3_p_0(Var_97, (MR_String) "predicate \140transform_hlds.table_gen.table_gen_transform_proc\'/11", (MR_String) "table_gen_transform_proc: minimal model but not model_non");
              switch (MinimalMethod_62) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word VarTable_206;
                    MR_Word TableInfo_207;
                    MR_Word Goal_208;
                    MR_Word STATE_VARIABLE_ProcInfo_106_212;
                    MR_Word STATE_VARIABLE_ProcInfo_107_213;
                    MR_Word STATE_VARIABLE_ProcInfo_108_214;
                    MR_Word _InputSteps_63;
                    MR_Word _OutputSteps_64;

                    transform_hlds__table_gen__do_own_stack_transform_19_p_0(Detism_20, OrigGoal_24, Statistics_151, PredId_13, ProcId_14, STATE_VARIABLE_PredInfo_0_72, STATE_VARIABLE_ProcInfo_0_70, HeadVars_22, NumberedInputVars_168, NumberedOutputVars_169, VarTable0_23, &VarTable_206, TableInfo0_19, &TableInfo_207, STATE_VARIABLE_GenMap_0_76, STATE_VARIABLE_GenMap_77, &Goal_208, &_InputSteps_63, &_OutputSteps_64);
                    transform_hlds__table_gen__table_info_extract_4_p_0(TableInfo_207, &STATE_VARIABLE_ModuleInfo_112_112, &STATE_VARIABLE_PredInfo_105_105, &STATE_VARIABLE_ProcInfo_106_212);
                    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_208, STATE_VARIABLE_ProcInfo_106_212, &STATE_VARIABLE_ProcInfo_107_213);
                    hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_206, STATE_VARIABLE_ProcInfo_107_213, &STATE_VARIABLE_ProcInfo_108_214);
                    hlds__hlds_pred__proc_info_set_call_table_tip_3_p_0((MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ProcInfo_108_214, &STATE_VARIABLE_ProcInfo_111_111);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.table_gen_transform_proc\'/11", (MR_String) "own stacks generator");
                    return;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word CallTableTip_124;
                    MR_Word InputSteps_125;
                    MR_Word MaybeOutputSteps_126;
                    MR_Word OutputSteps_128;
                    MR_Word FinalProcTableStructInfo_200;
                    MR_Word PredProcId_201;
                    MR_Word VarTable_216;
                    MR_Word TableInfo_217;
                    MR_Word Goal_218;
                    MR_Word MaybeCallTableTip_219;
                    MR_Word STATE_VARIABLE_ModuleInfo_104_221;
                    MR_Word STATE_VARIABLE_ProcInfo_106_222;
                    MR_Word STATE_VARIABLE_ProcInfo_107_223;
                    MR_Word STATE_VARIABLE_ProcInfo_108_224;

                    transform_hlds__table_gen__create_new_mm_goal_16_p_0(Detism_20, OrigGoal_24, Statistics_151, PredId_13, ProcId_14, HeadVars_22, NumberedInputVars_168, NumberedOutputVars_169, VarTable0_23, &VarTable_216, TableInfo0_19, &TableInfo_217, &CallTableTip_124, &Goal_218, &InputSteps_125, &OutputSteps_128);
                    {
                      MaybeCallTableTip_219 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, MaybeCallTableTip_219, 0) = ((MR_Box) (CallTableTip_124));
                    }
                    {
                      MaybeOutputSteps_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, MaybeOutputSteps_126, 0) = ((MR_Box) (OutputSteps_128));
                    }
                    transform_hlds__table_gen__generate_gen_proc_table_info_10_p_0(TableInfo_217, PredId_13, ProcId_14, VarTable_216, TabledMethod_12, InputSteps_125, MaybeOutputSteps_126, InputVarModeMethods_166, OutputVarModeMethods_167, &FinalProcTableStructInfo_200);
                    *STATE_VARIABLE_GenMap_77 = STATE_VARIABLE_GenMap_0_76;
                    transform_hlds__table_gen__table_info_extract_4_p_0(TableInfo_217, &STATE_VARIABLE_ModuleInfo_104_221, &STATE_VARIABLE_PredInfo_105_105, &STATE_VARIABLE_ProcInfo_106_222);
                    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_218, STATE_VARIABLE_ProcInfo_106_222, &STATE_VARIABLE_ProcInfo_107_223);
                    hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_216, STATE_VARIABLE_ProcInfo_107_223, &STATE_VARIABLE_ProcInfo_108_224);
                    hlds__hlds_pred__proc_info_set_call_table_tip_3_p_0(MaybeCallTableTip_219, STATE_VARIABLE_ProcInfo_108_224, &STATE_VARIABLE_ProcInfo_111_111);
                    {
                      PredProcId_201 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, PredProcId_201, 0) = ((MR_Box) (PredId_13));
                      MR_hl_field(0, PredProcId_201, 1) = ((MR_Box) (ProcId_14));
                    }
                    transform_hlds__table_gen__add_proc_table_struct_5_p_0(PredProcId_201, FinalProcTableStructInfo_200, STATE_VARIABLE_ProcInfo_111_111, STATE_VARIABLE_ModuleInfo_104_221, &STATE_VARIABLE_ModuleInfo_112_112);
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
        MR_Word InputVarModeMethods_41;
        MR_Word OutputVarModeMethods_42;
        MR_Word NumberedInputVars_43;
        MR_Word NumberedOutputVars_44;
        MR_Word Decl_45;
        MR_Word Unitize_46;
        MR_Word Globals_47;
        MR_Word TableIoStates_48;
        MR_Word HeadVarModes_49;
        MR_Word VarTable_50;
        MR_Word TableInfo_51;
        MR_Word Goal_52;
        MR_Word MaybeProcTableIOInfo_53;
        MR_Word Var_78;
        MR_Word STATE_VARIABLE_ProcInfo_106_106;
        MR_Word STATE_VARIABLE_ProcInfo_107_107;
        MR_Word STATE_VARIABLE_ProcInfo_108_108;
        MR_Word STATE_VARIABLE_ProcInfo_109_109;
        MR_Word Var_40;

        {
          Var_78 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_78, 0) = ((MR_Box) (&transform_hlds__table_gen_scalar_common_6[10]));
          MR_hl_field(0, Var_78, 1) = ((MR_Box) (transform_hlds__table_gen__table_gen_transform_proc_11_p_0_1));
          MR_hl_field(0, Var_78, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_78, 3) = ((MR_Box) (MaybeAttributes_26));
          MR_hl_field(0, Var_78, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_3_p_0(Var_78, (MR_String) "predicate \140transform_hlds.table_gen.table_gen_transform_proc\'/11", (MR_String) "tabled_io and Attributes");
        transform_hlds__table_gen__get_input_output_vars_7_p_0(HeadVars_22, ArgModes_25, STATE_VARIABLE_ModuleInfo_0_74, (MR_Word) (&transform_hlds__table_gen_scalar_common_3[3]), &Var_40, &InputVarModeMethods_41, &OutputVarModeMethods_42);
        transform_hlds__table_gen__allocate_slot_numbers_3_p_0(InputVarModeMethods_41, (MR_Integer) 0, &NumberedInputVars_43);
        transform_hlds__table_gen__allocate_slot_numbers_3_p_0(OutputVarModeMethods_42, (MR_Integer) 0, &NumberedOutputVars_44);
        Decl_45 = ((((MR_Unsigned) ((MR_hl_field(2, TabledMethod_12, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
        Unitize_46 = ((MR_Unsigned) ((MR_hl_field(2, TabledMethod_12, (MR_Integer) 0))) & (MR_Integer) 1);
        hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_74, &Globals_47);
        libs__globals__lookup_bool_option_3_p_0(Globals_47, (MR_Integer) 160, &TableIoStates_48);
        mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), HeadVars_22, ArgModes_25, &HeadVarModes_49);
        transform_hlds__table_gen__create_new_io_goal_15_p_0(OrigGoal_24, Decl_45, Unitize_46, TableIoStates_48, PredId_13, ProcId_14, HeadVarModes_49, NumberedInputVars_43, NumberedOutputVars_44, VarTable0_23, &VarTable_50, TableInfo0_19, &TableInfo_51, &Goal_52, &MaybeProcTableIOInfo_53);
        *STATE_VARIABLE_GenMap_77 = STATE_VARIABLE_GenMap_0_76;
        transform_hlds__table_gen__table_info_extract_4_p_0(TableInfo_51, &STATE_VARIABLE_ModuleInfo_112_112, &STATE_VARIABLE_PredInfo_105_105, &STATE_VARIABLE_ProcInfo_106_106);
        hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_52, STATE_VARIABLE_ProcInfo_106_106, &STATE_VARIABLE_ProcInfo_107_107);
        hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_50, STATE_VARIABLE_ProcInfo_107_107, &STATE_VARIABLE_ProcInfo_108_108);
        hlds__hlds_pred__proc_info_set_call_table_tip_3_p_0((MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ProcInfo_108_108, &STATE_VARIABLE_ProcInfo_109_109);
        if ((MaybeProcTableIOInfo_53 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_ProcInfo_111_111 = STATE_VARIABLE_ProcInfo_109_109;
        else
          hlds__hlds_pred__proc_info_set_maybe_proc_table_io_info_3_p_0(MaybeProcTableIOInfo_53, STATE_VARIABLE_ProcInfo_109_109, &STATE_VARIABLE_ProcInfo_111_111);
      }
      break;
  }
  check_hlds__recompute_instmap_deltas__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_111_111, STATE_VARIABLE_ProcInfo_71, STATE_VARIABLE_ModuleInfo_112_112, &STATE_VARIABLE_ModuleInfo_115_115);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(STATE_VARIABLE_PredInfo_105_105, &ProcTable1_68);
  mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_14)), ((MR_Box) (*STATE_VARIABLE_ProcInfo_71)), ProcTable1_68, &ProcTable_69);
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_69, STATE_VARIABLE_PredInfo_105_105, &STATE_VARIABLE_PredInfo_116_116);
  {
    Var_117 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_117, 0) = ((MR_Box) (PredId_13));
    MR_hl_field(0, Var_117, 1) = ((MR_Box) (ProcId_14));
  }
  check_hlds__purity__repuritycheck_proc_4_p_0(STATE_VARIABLE_ModuleInfo_115_115, Var_117, STATE_VARIABLE_PredInfo_116_116, STATE_VARIABLE_PredInfo_73);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_13, *STATE_VARIABLE_PredInfo_73, STATE_VARIABLE_ModuleInfo_115_115, STATE_VARIABLE_ModuleInfo_75);
}

static MR_Box MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_119_95_109_101_109_111_95_110_111_110_95_103_111_97_108_95_95_91_52_93_95_48_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_195;

  conv0_HeadVar__2_195 = transform_hlds__table_gen__IntroducedFrom__func__create_new_memo_non_goal__1346__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_195));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_119_95_109_101_109_111_95_110_111_110_95_103_111_97_108_95_95_91_52_93_95_48_17_p_0(
  MR_Word Detism_18,
  MR_Word OrigGoal_19,
  MR_Word Statistics_20,
  MR_Word PredId_22,
  MR_Integer ProcId_23,
  MR_Word HeadVars_24,
  MR_Word NumberedInputVars_25,
  MR_Word NumberedOutputVars_26,
  MR_Word STATE_VARIABLE_VarTable_0_86,
  MR_Word * STATE_VARIABLE_VarTable_87,
  MR_Word STATE_VARIABLE_TableInfo_0_88,
  MR_Word * STATE_VARIABLE_TableInfo_89,
  MR_Word * RecordVar_29,
  MR_Word * Goal_30,
  MR_Word * InputSteps_31,
  MR_Word * OutputSteps_32)
{
  MR_Word OrigNonLocals_33;
  MR_Word OrigGoalInfo_35;
  MR_Word OrigInstMapDelta_36;
  MR_Word Context_37;
  MR_Word ModuleInfo_38;
  MR_Integer BlockSize_39;
  MR_Word InfiniteRecursionGoal_40;
  MR_Word NeedMinModelGoal_41;
  MR_Word StatusVar_42;
  MR_Word LookUpGoal_43;
  MR_Word SaveAnswerGoals_44;
  MR_Word RestoreAllAnswerGoal_45;
  MR_String RecordVarName_46;
  MR_Word RecordArg_47;
  MR_String DebugArgStr_54;
  MR_String MarkIncompleteCode_55;
  MR_String MarkActiveCode_56;
  MR_String MarkCompleteCode_57;
  MR_Word MarkIncompleteGoal_58;
  MR_Word MarkActiveGoal_59;
  MR_Word MarkCompleteGoal_60;
  MR_Word OrigSaveExpr_61;
  MR_Word OrigSaveNonLocals_62;
  MR_Word OrigSaveIMD0_63;
  MR_Word OrigSaveIMD_64;
  MR_Word OrigSaveGoalInfo_65;
  MR_Word OrigSaveGoal_66;
  MR_Word AfterExpr_67;
  MR_Word AfterNonLocals_68;
  MR_Word AfterInstMapDelta_69;
  MR_Word AfterGoalInfo_70;
  MR_Word AfterGoal_71;
  MR_Word OrigSaveAfterExpr_72;
  MR_Word OrigSaveAfterGoal_73;
  MR_Word InactiveExpr_74;
  MR_Word InactiveGoal_75;
  MR_Word InactiveNonLocals_76;
  MR_Word OutputVars_77;
  MR_Word InactiveInstmapDelta_78;
  MR_Word SwitchArms_79;
  MR_Word SwitchExpr_80;
  MR_Word SwitchNonLocals_81;
  MR_Word SwitchGoalInfo_82;
  MR_Word SwitchGoal_83;
  MR_Word GoalExpr_84;
  MR_Word GoalInfo_85;
  MR_String Var_90;
  MR_Word STATE_VARIABLE_VarTable_91_91;
  MR_String Var_92;
  MR_Word STATE_VARIABLE_VarTable_93_93;
  MR_Word STATE_VARIABLE_VarTable_94_94;
  MR_Word STATE_VARIABLE_TableInfo_95_95;
  MR_Word STATE_VARIABLE_VarTable_96_96;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_Word Var_102;
  MR_String Var_104;
  MR_String Var_106;
  MR_String Var_107;
  MR_String Var_109;
  MR_String Var_111;
  MR_String Var_113;
  MR_String Var_114;
  MR_String Var_116;
  MR_String Var_118;
  MR_String Var_120;
  MR_String Var_121;
  MR_String Var_123;
  MR_Word Var_125;
  MR_Word Var_127;
  MR_Word Var_130;
  MR_Word Var_134;
  MR_Word Var_137;
  MR_Word Var_141;
  MR_Word Var_144;
  MR_Word Var_147;
  MR_Word Var_151;
  MR_Word Var_152;
  MR_Word Var_158;
  MR_Word Var_159;
  MR_Word Var_161;
  MR_Word Var_162;
  MR_Word Var_164;
  MR_Word Var_166;
  MR_Word Var_167;
  MR_Word Var_169;
  MR_Word Var_170;
  MR_Word Var_171;
  MR_Word Var_173;
  MR_Word Var_174;
  MR_Word Var_175;
  MR_Word Var_177;
  MR_Word Var_178;
  MR_Word Var_179;
  MR_Word Var_185;
  MR_Word Var_186;
  MR_Word Goal_195;
  MR_Word Rest_196;
  MR_Word GoalInfo_199;
  MR_Word IMD0_200;
  MR_Word IMD1_201;

  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_24, &OrigNonLocals_33);
  OrigGoalInfo_35 = ((MR_Word) ((MR_hl_field(0, OrigGoal_19, (MR_Integer) 1))));
  OrigInstMapDelta_36 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(OrigGoalInfo_35);
  Context_37 = hlds__hlds_goal__goal_info_get_context_1_f_0(OrigGoalInfo_35);
  ModuleInfo_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TableInfo_0_88, (MR_Integer) 0))));
  mercury__list__length_2_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), NumberedOutputVars_26, &BlockSize_39);
  Var_90 = transform_hlds__table_gen__infinite_recursion_msg_0_f_0();
  transform_hlds__table_gen__generate_error_goal_6_p_0(STATE_VARIABLE_TableInfo_0_88, Context_37, Var_90, STATE_VARIABLE_VarTable_0_86, &STATE_VARIABLE_VarTable_91_91, &InfiniteRecursionGoal_40);
  Var_92 = transform_hlds__table_gen__need_minimal_model_msg_0_f_0();
  transform_hlds__table_gen__generate_error_goal_6_p_0(STATE_VARIABLE_TableInfo_0_88, Context_37, Var_92, STATE_VARIABLE_VarTable_91_91, &STATE_VARIABLE_VarTable_93_93, &NeedMinModelGoal_41);
  transform_hlds__table_gen__generate_memo_non_call_table_lookup_goal_13_p_0(NumberedInputVars_25, PredId_22, ProcId_23, Statistics_20, Context_37, STATE_VARIABLE_VarTable_93_93, &STATE_VARIABLE_VarTable_94_94, STATE_VARIABLE_TableInfo_0_88, &STATE_VARIABLE_TableInfo_95_95, RecordVar_29, &StatusVar_42, &LookUpGoal_43, InputSteps_31);
  transform_hlds__table_gen__generate_memo_non_save_goals_13_p_0(NumberedOutputVars_26, PredId_22, ProcId_23, *RecordVar_29, BlockSize_39, Statistics_20, Context_37, STATE_VARIABLE_VarTable_94_94, &STATE_VARIABLE_VarTable_96_96, STATE_VARIABLE_TableInfo_95_95, STATE_VARIABLE_TableInfo_89, OutputSteps_32, &SaveAnswerGoals_44);
  transform_hlds__table_gen__generate_memo_non_restore_goal_9_p_0(Detism_18, NumberedOutputVars_26, OrigInstMapDelta_36, *RecordVar_29, Context_37, STATE_VARIABLE_VarTable_96_96, STATE_VARIABLE_VarTable_87, *STATE_VARIABLE_TableInfo_89, &RestoreAllAnswerGoal_45);
  RecordVarName_46 = transform_hlds__table_gen__memo_non_record_name_0_f_0();
  Var_101 = parse_tree__prog_mode__in_mode_0_f_0();
  {
    Var_100 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_100, 0) = ((MR_Box) (RecordVarName_46));
    MR_hl_field(0, Var_100, 1) = ((MR_Box) (Var_101));
  }
  {
    Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_99, 0) = ((MR_Box) (Var_100));
  }
  Var_102 = transform_hlds__table_gen__memo_non_record_type_0_f_0();
  {
    RecordArg_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RecordArg_47, 0) = ((MR_Box) (*RecordVar_29));
    MR_hl_field(0, RecordArg_47, 1) = ((MR_Box) (Var_99));
    MR_hl_field(0, RecordArg_47, 2) = ((MR_Box) (Var_102));
    MR_hl_field(0, RecordArg_47, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  DebugArgStr_54 = transform_hlds__table_gen__get_debug_arg_string_1_f_0(*STATE_VARIABLE_TableInfo_89);
  Var_109 = mercury__string__f_43_43_2_f_0(RecordVarName_46, (MR_String) ");\n");
  Var_107 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_109);
  Var_106 = mercury__string__f_43_43_2_f_0(DebugArgStr_54, Var_107);
  Var_104 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_106);
  MarkIncompleteCode_55 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_memo_mark_as_incomplete", Var_104);
  Var_116 = mercury__string__f_43_43_2_f_0(RecordVarName_46, (MR_String) ");\n");
  Var_114 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_116);
  Var_113 = mercury__string__f_43_43_2_f_0(DebugArgStr_54, Var_114);
  Var_111 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_113);
  MarkActiveCode_56 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_memo_mark_as_active_and_fail", Var_111);
  Var_123 = mercury__string__f_43_43_2_f_0(RecordVarName_46, (MR_String) ");\n");
  Var_121 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_123);
  Var_120 = mercury__string__f_43_43_2_f_0(DebugArgStr_54, Var_121);
  Var_118 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_120);
  MarkCompleteCode_57 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_memo_mark_as_complete_and_fail", Var_118);
  {
    Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_125, 0) = ((MR_Box) (RecordArg_47));
    MR_hl_field(1, Var_125, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_127 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
  Var_130 = transform_hlds__table_gen__tabling_c_attributes_dupl_0_f_0();
  transform_hlds__table_gen__table_call_foreign_proc_11_p_0(ModuleInfo_38, (MR_String) "table_memo_mark_as_incomplete", Var_125, (MR_Word) ((MR_Unsigned) 0U), Var_127, (MR_Integer) 0, (MR_Integer) 2, Var_130, MarkIncompleteCode_55, Context_37, &MarkIncompleteGoal_58);
  Var_134 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
  Var_137 = transform_hlds__table_gen__tabling_c_attributes_dupl_0_f_0();
  transform_hlds__table_gen__table_call_foreign_proc_11_p_0(ModuleInfo_38, (MR_String) "table_memo_mark_as_active_and_fail", Var_125, (MR_Word) ((MR_Unsigned) 0U), Var_134, (MR_Integer) 7, (MR_Integer) 2, Var_137, MarkActiveCode_56, Context_37, &MarkActiveGoal_59);
  Var_141 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
  Var_144 = transform_hlds__table_gen__tabling_c_attributes_dupl_0_f_0();
  transform_hlds__table_gen__table_call_foreign_proc_11_p_0(ModuleInfo_38, (MR_String) "table_memo_mark_as_complete_and_fail", Var_125, (MR_Word) ((MR_Unsigned) 0U), Var_141, (MR_Integer) 7, (MR_Integer) 2, Var_144, MarkCompleteCode_57, Context_37, &MarkCompleteGoal_60);
  {
    Var_147 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_147, 0) = ((MR_Box) (OrigGoal_19));
    MR_hl_field(1, Var_147, 1) = ((MR_Box) (SaveAnswerGoals_44));
  }
  {
    OrigSaveExpr_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, OrigSaveExpr_61, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, OrigSaveExpr_61, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, OrigSaveExpr_61, 2) = ((MR_Box) (Var_147));
  }
  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *RecordVar_29, OrigNonLocals_33, &OrigSaveNonLocals_62);
  Goal_195 = ((MR_Word) ((MR_hl_field(1, Var_147, (MR_Integer) 0))));
  Rest_196 = ((MR_Word) ((MR_hl_field(1, Var_147, (MR_Integer) 1))));
  GoalInfo_199 = ((MR_Word) ((MR_hl_field(0, Goal_195, (MR_Integer) 1))));
  IMD0_200 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_199);
  transform_hlds__table_gen__create_instmap_delta_2_p_0(Rest_196, &IMD1_201);
  hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(IMD0_200, IMD1_201, (MR_Integer) 2, &OrigSaveIMD0_63);
  hlds__instmap__instmap_delta_restrict_3_p_0(OrigSaveNonLocals_62, OrigSaveIMD0_63, &OrigSaveIMD_64);
  transform_hlds__table_gen__goal_info_init_hide_6_p_0(OrigSaveNonLocals_62, OrigSaveIMD_64, (MR_Integer) 3, (MR_Integer) 2, Context_37, &OrigSaveGoalInfo_65);
  {
    OrigSaveGoal_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, OrigSaveGoal_66, 0) = ((MR_Box) (OrigSaveExpr_61));
    MR_hl_field(0, OrigSaveGoal_66, 1) = ((MR_Box) (OrigSaveGoalInfo_65));
  }
  {
    Var_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_152, 0) = ((MR_Box) (MarkActiveGoal_59));
    MR_hl_field(1, Var_152, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_151, 0) = ((MR_Box) (MarkIncompleteGoal_58));
    MR_hl_field(1, Var_151, 1) = ((MR_Box) (Var_152));
  }
  {
    AfterExpr_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, AfterExpr_67, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, AfterExpr_67, 1) = ((MR_Box) (Var_151));
  }
  AfterNonLocals_68 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *RecordVar_29);
  AfterInstMapDelta_69 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
  transform_hlds__table_gen__goal_info_init_hide_6_p_0(AfterNonLocals_68, AfterInstMapDelta_69, (MR_Integer) 3, (MR_Integer) 2, Context_37, &AfterGoalInfo_70);
  {
    AfterGoal_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, AfterGoal_71, 0) = ((MR_Box) (AfterExpr_67));
    MR_hl_field(0, AfterGoal_71, 1) = ((MR_Box) (AfterGoalInfo_70));
  }
  {
    Var_159 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_159, 0) = ((MR_Box) (AfterGoal_71));
    MR_hl_field(1, Var_159, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_158 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_158, 0) = ((MR_Box) (OrigSaveGoal_66));
    MR_hl_field(1, Var_158, 1) = ((MR_Box) (Var_159));
  }
  {
    OrigSaveAfterExpr_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, OrigSaveAfterExpr_72, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, OrigSaveAfterExpr_72, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, OrigSaveAfterExpr_72, 2) = ((MR_Box) (Var_158));
  }
  {
    OrigSaveAfterGoal_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, OrigSaveAfterGoal_73, 0) = ((MR_Box) (OrigSaveAfterExpr_72));
    MR_hl_field(0, OrigSaveAfterGoal_73, 1) = ((MR_Box) (OrigSaveGoalInfo_65));
  }
  {
    Var_162 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_162, 0) = ((MR_Box) (MarkCompleteGoal_60));
    MR_hl_field(1, Var_162, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_161 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_161, 0) = ((MR_Box) (OrigSaveAfterGoal_73));
    MR_hl_field(1, Var_161, 1) = ((MR_Box) (Var_162));
  }
  {
    InactiveExpr_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, InactiveExpr_74, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, InactiveExpr_74, 1) = ((MR_Box) (Var_161));
  }
  {
    InactiveGoal_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InactiveGoal_75, 0) = ((MR_Box) (InactiveExpr_74));
    MR_hl_field(0, InactiveGoal_75, 1) = ((MR_Box) (OrigSaveGoalInfo_65));
  }
  {
    Var_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_164, 0) = ((MR_Box) (*RecordVar_29));
    MR_hl_field(1, Var_164, 1) = ((MR_Box) (HeadVars_24));
  }
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_164, &InactiveNonLocals_76);
  OutputVars_77 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), (MR_Word) (&transform_hlds__table_gen_scalar_common_1[2]), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[25]), NumberedOutputVars_26);
  InactiveInstmapDelta_78 = hlds__instmap__instmap_delta_bind_vars_1_f_0(OutputVars_77);
  Var_167 = transform_hlds__table_gen__memo_non_active_cons_id_0_f_0();
  {
    Var_166 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_166, 0) = ((MR_Box) (Var_167));
    MR_hl_field(0, Var_166, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_166, 2) = ((MR_Box) (InfiniteRecursionGoal_40));
  }
  Var_171 = transform_hlds__table_gen__memo_non_inactive_cons_id_0_f_0();
  {
    Var_170 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_170, 0) = ((MR_Box) (Var_171));
    MR_hl_field(0, Var_170, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_170, 2) = ((MR_Box) (InactiveGoal_75));
  }
  Var_175 = transform_hlds__table_gen__memo_non_incomplete_cons_id_0_f_0();
  {
    Var_174 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_174, 0) = ((MR_Box) (Var_175));
    MR_hl_field(0, Var_174, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_174, 2) = ((MR_Box) (NeedMinModelGoal_41));
  }
  Var_179 = transform_hlds__table_gen__memo_non_complete_cons_id_0_f_0();
  {
    Var_178 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_178, 0) = ((MR_Box) (Var_179));
    MR_hl_field(0, Var_178, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_178, 2) = ((MR_Box) (RestoreAllAnswerGoal_45));
  }
  {
    Var_177 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_177, 0) = ((MR_Box) (Var_178));
    MR_hl_field(1, Var_177, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_173 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_173, 0) = ((MR_Box) (Var_174));
    MR_hl_field(1, Var_173, 1) = ((MR_Box) (Var_177));
  }
  {
    Var_169 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_169, 0) = ((MR_Box) (Var_170));
    MR_hl_field(1, Var_169, 1) = ((MR_Box) (Var_173));
  }
  {
    SwitchArms_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SwitchArms_79, 0) = ((MR_Box) (Var_166));
    MR_hl_field(1, SwitchArms_79, 1) = ((MR_Box) (Var_169));
  }
  {
    SwitchExpr_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, SwitchExpr_80, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, SwitchExpr_80, 1) = ((MR_Box) (StatusVar_42));
    MR_hl_field(3, SwitchExpr_80, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, SwitchExpr_80, 3) = ((MR_Box) (SwitchArms_79));
  }
  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), StatusVar_42, InactiveNonLocals_76, &SwitchNonLocals_81);
  transform_hlds__table_gen__goal_info_init_hide_6_p_0(SwitchNonLocals_81, InactiveInstmapDelta_78, Detism_18, (MR_Integer) 2, Context_37, &SwitchGoalInfo_82);
  {
    SwitchGoal_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SwitchGoal_83, 0) = ((MR_Box) (SwitchExpr_80));
    MR_hl_field(0, SwitchGoal_83, 1) = ((MR_Box) (SwitchGoalInfo_82));
  }
  {
    Var_186 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_186, 0) = ((MR_Box) (SwitchGoal_83));
    MR_hl_field(1, Var_186, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_185 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_185, 0) = ((MR_Box) (LookUpGoal_43));
    MR_hl_field(1, Var_185, 1) = ((MR_Box) (Var_186));
  }
  {
    GoalExpr_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, GoalExpr_84, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, GoalExpr_84, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, GoalExpr_84, 2) = ((MR_Box) (Var_185));
  }
  transform_hlds__table_gen__goal_info_init_hide_6_p_0(OrigNonLocals_33, OrigInstMapDelta_36, Detism_18, (MR_Integer) 2, Context_37, &GoalInfo_85);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_30 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_84));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_85));
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_non_complete_cons_id_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word SymName_2;
  MR_Word TypeCtor_3;
  MR_Word Var_5;
  MR_Word TypeModule_7;
  MR_Word TypeSymName_8;

  Var_5 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    SymName_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_2, 0) = ((MR_Box) (Var_5));
    MR_hl_field(1, SymName_2, 1) = ((MR_Box) ((MR_String) "memo_non_complete"));
  }
  TypeModule_7 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    TypeSymName_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypeSymName_8, 0) = ((MR_Box) (TypeModule_7));
    MR_hl_field(1, TypeSymName_8, 1) = ((MR_Box) ((MR_String) "memo_non_status"));
  }
  {
    TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_3, 0) = ((MR_Box) (TypeSymName_8));
    MR_hl_field(0, TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    HeadVar__1_1 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, HeadVar__1_1, 1) = ((MR_Box) (SymName_2));
    MR_hl_field(3, HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(3, HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
  }
  return HeadVar__1_1;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_non_incomplete_cons_id_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word SymName_2;
  MR_Word TypeCtor_3;
  MR_Word Var_5;
  MR_Word TypeModule_7;
  MR_Word TypeSymName_8;

  Var_5 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    SymName_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_2, 0) = ((MR_Box) (Var_5));
    MR_hl_field(1, SymName_2, 1) = ((MR_Box) ((MR_String) "memo_non_incomplete"));
  }
  TypeModule_7 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    TypeSymName_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypeSymName_8, 0) = ((MR_Box) (TypeModule_7));
    MR_hl_field(1, TypeSymName_8, 1) = ((MR_Box) ((MR_String) "memo_non_status"));
  }
  {
    TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_3, 0) = ((MR_Box) (TypeSymName_8));
    MR_hl_field(0, TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    HeadVar__1_1 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, HeadVar__1_1, 1) = ((MR_Box) (SymName_2));
    MR_hl_field(3, HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(3, HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
  }
  return HeadVar__1_1;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_non_active_cons_id_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word SymName_2;
  MR_Word TypeCtor_3;
  MR_Word Var_5;
  MR_Word TypeModule_7;
  MR_Word TypeSymName_8;

  Var_5 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    SymName_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_2, 0) = ((MR_Box) (Var_5));
    MR_hl_field(1, SymName_2, 1) = ((MR_Box) ((MR_String) "memo_non_active"));
  }
  TypeModule_7 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    TypeSymName_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypeSymName_8, 0) = ((MR_Box) (TypeModule_7));
    MR_hl_field(1, TypeSymName_8, 1) = ((MR_Box) ((MR_String) "memo_non_status"));
  }
  {
    TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_3, 0) = ((MR_Box) (TypeSymName_8));
    MR_hl_field(0, TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    HeadVar__1_1 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, HeadVar__1_1, 1) = ((MR_Box) (SymName_2));
    MR_hl_field(3, HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(3, HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
  }
  return HeadVar__1_1;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_non_inactive_cons_id_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word SymName_2;
  MR_Word TypeCtor_3;
  MR_Word Var_5;
  MR_Word TypeModule_7;
  MR_Word TypeSymName_8;

  Var_5 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    SymName_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_2, 0) = ((MR_Box) (Var_5));
    MR_hl_field(1, SymName_2, 1) = ((MR_Box) ((MR_String) "memo_non_inactive"));
  }
  TypeModule_7 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    TypeSymName_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypeSymName_8, 0) = ((MR_Box) (TypeModule_7));
    MR_hl_field(1, TypeSymName_8, 1) = ((MR_Box) ((MR_String) "memo_non_status"));
  }
  {
    TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_3, 0) = ((MR_Box) (TypeSymName_8));
    MR_hl_field(0, TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    HeadVar__1_1 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, HeadVar__1_1, 1) = ((MR_Box) (SymName_2));
    MR_hl_field(3, HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(3, HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
  }
  return HeadVar__1_1;
}

static MR_String MR_CALL 
transform_hlds__table_gen__need_minimal_model_msg_0_f_0(void)
{
  return (MR_String) "detected need for minimal model";
}

static MR_Box MR_CALL 
transform_hlds__table_gen__generate_memo_non_restore_goal_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_72;

  conv0_HeadVar__2_72 = transform_hlds__table_gen__IntroducedFrom__func__generate_memo_non_restore_goal__3228__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_72));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__table_gen__generate_memo_non_restore_goal_9_p_0(
  MR_Word Detism_10,
  MR_Word NumberedOutputVars_11,
  MR_Word OrigInstMapDelta_12,
  MR_Word RecordVar_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_VarTable_0_34,
  MR_Word * STATE_VARIABLE_VarTable_35,
  MR_Word TableInfo_16,
  MR_Word * Goal_17)
{
  MR_bool succeeded = (Detism_10 == (MR_Integer) 2);
  MR_String ReturnAllAns_18;
  MR_Word AnswerBlockVar_19;
  MR_Word ModuleInfo_20;
  MR_Word ReturnAnswerBlocksGoal_21;
  MR_String DebugArgStr_22;
  MR_Word RestoreInstMapDeltaSrc_23;
  MR_Word RestoreArgs_24;
  MR_String RestoreCodeStr_25;
  MR_Word OutputVars_26;
  MR_Word Arg_27;
  MR_Word Args_28;
  MR_Word ShortcutGoal_30;
  MR_Word GoalExpr_31;
  MR_Word NonLocals_32;
  MR_Word GoalInfo_33;
  MR_Word Var_39;
  MR_Word STATE_VARIABLE_VarTable_41_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_45;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_56;
  MR_Word Var_59;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_64;
  MR_Word TB_75;
  MR_Word Var_76;
  MR_Word Var_78;
  MR_Word Entry_81;
  MR_Word ModuleInfo_82;
  MR_Word Globals_83;
  MR_Word TableDebug_84;
  MR_Word TB_88;
  MR_Word Var_89;
  MR_Word Var_91;
  MR_Word Attrs0_94;
  MR_Word Attrs1_95;
  MR_Word GoalInfo0_99;

  if (succeeded)
    ReturnAllAns_18 = (MR_String) "table_memo_return_all_answers_multi";
  else
  {
    succeeded = (Detism_10 == (MR_Integer) 3);
    if (succeeded)
      ReturnAllAns_18 = (MR_String) "table_memo_return_all_answers_nondet";
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.generate_memo_non_restore_goal\'/9", (MR_String) "invalid determinism");
        return;
      }
  }
  TB_75 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_78, 0) = ((MR_Box) (TB_75));
    MR_hl_field(1, Var_78, 1) = ((MR_Box) ((MR_String) "ml_answer_block"));
  }
  {
    Var_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_76, 0) = ((MR_Box) (Var_78));
    MR_hl_field(0, Var_76, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  parse_tree__prog_type__construct_type_3_p_0(Var_76, (MR_Word) ((MR_Unsigned) 0U), &Var_39);
  {
    Entry_81 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entry_81, 0) = ((MR_Box) ((MR_String) "AnswerBlock"));
    MR_hl_field(0, Entry_81, 1) = ((MR_Box) (Var_39));
    MR_hl_field(0, Entry_81, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  parse_tree__var_table__add_var_entry_4_p_0(Entry_81, &AnswerBlockVar_19, STATE_VARIABLE_VarTable_0_34, &STATE_VARIABLE_VarTable_41_41);
  ModuleInfo_20 = ((MR_Word) ((MR_hl_field(0, TableInfo_16, (MR_Integer) 0))));
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) (AnswerBlockVar_19));
    MR_hl_field(1, Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (RecordVar_13));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_45));
  }
  Var_43 = hlds__instmap__instmap_delta_bind_var_1_f_0(AnswerBlockVar_19);
  transform_hlds__table_gen__table_plain_call_8_p_0(ModuleInfo_20, ReturnAllAns_18, Var_42, Var_43, Detism_10, (MR_Integer) 1, Context_14, &ReturnAnswerBlocksGoal_21);
  ModuleInfo_82 = ((MR_Word) ((MR_hl_field(0, TableInfo_16, (MR_Integer) 0))));
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_82, &Globals_83);
  libs__globals__lookup_bool_option_3_p_0(Globals_83, (MR_Integer) 345, &TableDebug_84);
  switch (TableDebug_84) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      DebugArgStr_22 = (MR_String) "MR_FALSE";
      break;
    case (MR_Integer) 1:
      DebugArgStr_22 = (MR_String) "MR_TRUE";
      break;
  }
  transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_116_111_114_101_95_103_111_97_108_115_95_95_91_49_93_95_48_9_p_0(ModuleInfo_20, OrigInstMapDelta_12, DebugArgStr_22, NumberedOutputVars_11, &RestoreInstMapDeltaSrc_23, &RestoreArgs_24, &RestoreCodeStr_25, STATE_VARIABLE_VarTable_41_41, STATE_VARIABLE_VarTable_35);
  OutputVars_26 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), (MR_Word) (&transform_hlds__table_gen_scalar_common_1[2]), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[24]), NumberedOutputVars_11);
  Var_52 = parse_tree__prog_mode__in_mode_0_f_0();
  {
    Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_50, 0) = ((MR_Box) ((MR_String) "answerblock"));
    MR_hl_field(0, Var_50, 1) = ((MR_Box) (Var_52));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
  }
  TB_88 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_91, 0) = ((MR_Box) (TB_88));
    MR_hl_field(1, Var_91, 1) = ((MR_Box) ((MR_String) "ml_answer_block"));
  }
  {
    Var_89 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_89, 0) = ((MR_Box) (Var_91));
    MR_hl_field(0, Var_89, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  parse_tree__prog_type__construct_type_3_p_0(Var_89, (MR_Word) ((MR_Unsigned) 0U), &Var_53);
  {
    Arg_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Arg_27, 0) = ((MR_Box) (AnswerBlockVar_19));
    MR_hl_field(0, Arg_27, 1) = ((MR_Box) (Var_49));
    MR_hl_field(0, Arg_27, 2) = ((MR_Box) (Var_53));
    MR_hl_field(0, Arg_27, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Args_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Args_28, 0) = ((MR_Box) (Arg_27));
    MR_hl_field(1, Args_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_56 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(RestoreInstMapDeltaSrc_23);
  Attrs0_94 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
  parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, Attrs0_94, &Attrs1_95);
  parse_tree__prog_data_foreign__set_affects_liveness_3_p_0((MR_Integer) 1, Attrs1_95, &Var_59);
  transform_hlds__table_gen__table_call_foreign_proc_11_p_0(ModuleInfo_20, (MR_String) "table_memo_non_return_all_shortcut", Args_28, RestoreArgs_24, Var_56, (MR_Integer) 0, (MR_Integer) 1, Var_59, RestoreCodeStr_25, Context_14, &ShortcutGoal_30);
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (ShortcutGoal_30));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (ReturnAnswerBlocksGoal_21));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_62));
  }
  {
    GoalExpr_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, GoalExpr_31, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, GoalExpr_31, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, GoalExpr_31, 2) = ((MR_Box) (Var_61));
  }
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (RecordVar_13));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) (OutputVars_26));
  }
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_64, &NonLocals_32);
  hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_32, OrigInstMapDelta_12, Detism_10, (MR_Integer) 1, Context_14, &GoalInfo0_99);
  hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 8, GoalInfo0_99, &GoalInfo_33);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_17 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_31));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_33));
  }
}

static void MR_CALL 
transform_hlds__table_gen__generate_memo_non_save_goals_13_p_0(
  MR_Word NumberedSaveVars_14,
  MR_Word PredId_15,
  MR_Integer ProcId_16,
  MR_Word RecordVar_17,
  MR_Integer BlockSize_18,
  MR_Word Statistics_19,
  MR_Word Context_20,
  MR_Word STATE_VARIABLE_VarTable_0_47,
  MR_Word * STATE_VARIABLE_VarTable_48,
  MR_Word STATE_VARIABLE_TableInfo_0_49,
  MR_Word * STATE_VARIABLE_TableInfo_50,
  MR_Word * OutputSteps_23,
  MR_Word * Goals_24)
{
  MR_Word ModuleInfo_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TableInfo_0_49, (MR_Integer) 0))));
  MR_String RecordName_26;
  MR_Word RecordArg_27;
  MR_Word LookupForeignArgs_28;
  MR_Word LookupPrefixGoals_29;
  MR_String LookupCodeStr_30;
  MR_String SaveDeclCodeStr_34;
  MR_String CreateSaveCode_35;
  MR_String DebugArgStr_39;
  MR_String LookupDeclCodeStr_41;
  MR_String GetCodeStr_42;
  MR_String DuplCheckCodeStr_43;
  MR_String AssignSuccessCodeStr_44;
  MR_String CodeStr_45;
  MR_Word DuplicateCheckSaveGoal_46;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word STATE_VARIABLE_VarTable_56_56;
  MR_Word STATE_VARIABLE_TableInfo_57_57;
  MR_String Var_58;
  MR_String Var_62;
  MR_String Var_63;
  MR_String Var_64;
  MR_String Var_66;
  MR_String Var_68;
  MR_String Var_69;
  MR_String Var_70;
  MR_String Var_72;
  MR_String Var_74;
  MR_String Var_77;
  MR_String Var_78;
  MR_String Var_80;
  MR_String Var_81;
  MR_String Var_83;
  MR_String Var_84;
  MR_String Var_86;
  MR_String Var_87;
  MR_String Var_88;
  MR_String Var_91;
  MR_String Var_92;
  MR_String Var_94;
  MR_String Var_95;
  MR_String Var_97;
  MR_String Var_98;
  MR_String Var_99;
  MR_String Var_101;
  MR_String Var_104;
  MR_String Var_105;
  MR_String Var_106;
  MR_String Var_108;
  MR_String Var_110;
  MR_String Var_111;
  MR_String Var_113;
  MR_String Var_114;
  MR_String Var_115;
  MR_String Var_116;
  MR_String Var_118;
  MR_String Var_119;
  MR_String Var_121;
  MR_String Var_122;
  MR_Word Var_124;
  MR_Word Var_125;
  MR_Word Var_128;
  MR_Word Var_130;
  MR_Word _SaveForeignArgs_32;
  MR_Word _SavePrefixGoals_33;

  RecordName_26 = transform_hlds__table_gen__memo_non_record_name_0_f_0();
  Var_53 = parse_tree__prog_mode__in_mode_0_f_0();
  {
    Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_52, 0) = ((MR_Box) (RecordName_26));
    MR_hl_field(0, Var_52, 1) = ((MR_Box) (Var_53));
  }
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
  }
  Var_54 = transform_hlds__table_gen__memo_non_record_type_0_f_0();
  {
    RecordArg_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RecordArg_27, 0) = ((MR_Box) (RecordVar_17));
    MR_hl_field(0, RecordArg_27, 1) = ((MR_Box) (Var_51));
    MR_hl_field(0, RecordArg_27, 2) = ((MR_Box) (Var_54));
    MR_hl_field(0, RecordArg_27, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  transform_hlds__table_gen__generate_answer_table_lookup_goals_13_p_0(NumberedSaveVars_14, PredId_15, ProcId_16, Statistics_19, Context_20, STATE_VARIABLE_VarTable_0_47, &STATE_VARIABLE_VarTable_56_56, STATE_VARIABLE_TableInfo_0_49, &STATE_VARIABLE_TableInfo_57_57, OutputSteps_23, &LookupForeignArgs_28, &LookupPrefixGoals_29, &LookupCodeStr_30);
  Var_58 = transform_hlds__table_gen__memo_non_record_name_0_f_0();
  transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_108_108_95_115_97_118_101_95_103_111_97_108_115_95_95_91_49_93_95_48_13_p_0(NumberedSaveVars_14, Var_58, BlockSize_18, (MR_String) "MR_tbl_memo_non_create_answer_block", Context_20, STATE_VARIABLE_VarTable_56_56, STATE_VARIABLE_VarTable_48, STATE_VARIABLE_TableInfo_57_57, STATE_VARIABLE_TableInfo_50, &_SaveForeignArgs_32, &_SavePrefixGoals_33, &SaveDeclCodeStr_34, &CreateSaveCode_35);
  DebugArgStr_39 = transform_hlds__table_gen__get_debug_arg_string_1_f_0(*STATE_VARIABLE_TableInfo_50);
  Var_63 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
  Var_69 = transform_hlds__table_gen__next_table_node_name_0_f_0();
  Var_74 = mercury__string__f_43_43_2_f_0((MR_String) "succeeded", (MR_String) ";\n");
  Var_72 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_bool ", Var_74);
  Var_70 = mercury__string__f_43_43_2_f_0((MR_String) ";\n", Var_72);
  Var_68 = mercury__string__f_43_43_2_f_0(Var_69, Var_70);
  Var_66 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_TrieNode ", Var_68);
  Var_64 = mercury__string__f_43_43_2_f_0((MR_String) ";\n", Var_66);
  Var_62 = mercury__string__f_43_43_2_f_0(Var_63, Var_64);
  LookupDeclCodeStr_41 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_TrieNode ", Var_62);
  Var_87 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
  Var_88 = mercury__string__f_43_43_2_f_0((MR_String) ");\n", LookupCodeStr_30);
  Var_86 = mercury__string__f_43_43_2_f_0(Var_87, Var_88);
  Var_84 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_86);
  Var_83 = mercury__string__f_43_43_2_f_0(RecordName_26, Var_84);
  Var_81 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_83);
  Var_80 = mercury__string__f_43_43_2_f_0(DebugArgStr_39, Var_81);
  Var_78 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_80);
  Var_77 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_memo_non_get_answer_table", Var_78);
  GetCodeStr_42 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_77);
  Var_98 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
  Var_101 = mercury__string__f_43_43_2_f_0((MR_String) "succeeded", (MR_String) ");\n");
  Var_99 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_101);
  Var_97 = mercury__string__f_43_43_2_f_0(Var_98, Var_99);
  Var_95 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_97);
  Var_94 = mercury__string__f_43_43_2_f_0(DebugArgStr_39, Var_95);
  Var_92 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_94);
  Var_91 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_memo_non_answer_is_not_duplicate", Var_92);
  DuplCheckCodeStr_43 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_91);
  Var_105 = transform_hlds__table_gen__success_indicator_name_0_f_0();
  Var_108 = mercury__string__f_43_43_2_f_0((MR_String) "succeeded", (MR_String) ";\n");
  Var_106 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_108);
  Var_104 = mercury__string__f_43_43_2_f_0(Var_105, Var_106);
  AssignSuccessCodeStr_44 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_104);
  Var_122 = mercury__string__f_43_43_2_f_0((MR_String) "\t}\n", AssignSuccessCodeStr_44);
  Var_121 = mercury__string__f_43_43_2_f_0(CreateSaveCode_35, Var_122);
  Var_119 = mercury__string__f_43_43_2_f_0((MR_String) ") {\n", Var_121);
  Var_118 = mercury__string__f_43_43_2_f_0((MR_String) "succeeded", Var_119);
  Var_116 = mercury__string__f_43_43_2_f_0((MR_String) "\tif (", Var_118);
  Var_115 = mercury__string__f_43_43_2_f_0(DuplCheckCodeStr_43, Var_116);
  Var_114 = mercury__string__f_43_43_2_f_0(LookupCodeStr_30, Var_115);
  Var_113 = mercury__string__f_43_43_2_f_0(GetCodeStr_42, Var_114);
  Var_111 = mercury__string__f_43_43_2_f_0((MR_String) "\n", Var_113);
  Var_110 = mercury__string__f_43_43_2_f_0(SaveDeclCodeStr_34, Var_111);
  CodeStr_45 = mercury__string__f_43_43_2_f_0(LookupDeclCodeStr_41, Var_110);
  {
    Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_124, 0) = ((MR_Box) (RecordArg_27));
    MR_hl_field(1, Var_124, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_125 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
  Var_128 = transform_hlds__table_gen__tabling_c_attributes_dupl_0_f_0();
  transform_hlds__table_gen__table_call_foreign_proc_11_p_0(ModuleInfo_25, (MR_String) "table_memo_non_answer_is_not_duplicate_shortcut", Var_124, LookupForeignArgs_28, Var_125, (MR_Integer) 1, (MR_Integer) 2, Var_128, CodeStr_45, Context_20, &DuplicateCheckSaveGoal_46);
  {
    Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_130, 0) = ((MR_Box) (DuplicateCheckSaveGoal_46));
    MR_hl_field(1, Var_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  *Goals_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), LookupPrefixGoals_29, Var_130);
}

static MR_Box MR_CALL 
transform_hlds__table_gen__generate_memo_non_call_table_lookup_goal_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_134;

  conv0_HeadVar__2_134 = transform_hlds__table_gen__IntroducedFrom__func__generate_memo_non_call_table_lookup_goal__2393__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_134));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__table_gen__generate_memo_non_call_table_lookup_goal_13_p_0(
  MR_Word NumberedVars_14,
  MR_Word PredId_15,
  MR_Integer ProcId_16,
  MR_Word Statistics_17,
  MR_Word Context_18,
  MR_Word STATE_VARIABLE_VarTable_0_52,
  MR_Word * STATE_VARIABLE_VarTable_53,
  MR_Word STATE_VARIABLE_TableInfo_0_54,
  MR_Word * STATE_VARIABLE_TableInfo_55,
  MR_Word * RecordVar_21,
  MR_Word * StatusVar_22,
  MR_Word * Goal_23,
  MR_Word * Steps_24)
{
  MR_Word InfoArg_27;
  MR_Word LookupForeignArgs_28;
  MR_Word LookupPrefixGoals_29;
  MR_String LookupCodeStr_30;
  MR_Word ModuleInfo_32;
  MR_Word BoundVars_35;
  MR_String RecordVarName_36;
  MR_String StatusVarName_37;
  MR_Word RecordArg_38;
  MR_Word StatusArg_39;
  MR_Word Args_40;
  MR_String LookupDeclCodeStr_41;
  MR_String DebugArgStr_42;
  MR_String BackArgStr_43;
  MR_String PredCodeStr_44;
  MR_Word SetupGoal0_45;
  MR_Word SetupGoal_46;
  MR_Word LookupSetupGoals_47;
  MR_Word GoalExpr_48;
  MR_Word Vars_49;
  MR_Word NonLocals_50;
  MR_Word GoalInfo_51;
  MR_Word STATE_VARIABLE_VarTable_56_56;
  MR_Word Var_59;
  MR_Word STATE_VARIABLE_VarTable_61_61;
  MR_Word Var_63;
  MR_Word Var_66;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_String Var_82;
  MR_String Var_83;
  MR_String Var_84;
  MR_String Var_86;
  MR_String Var_88;
  MR_String Var_89;
  MR_String Var_90;
  MR_String Var_93;
  MR_String Var_94;
  MR_String Var_96;
  MR_String Var_97;
  MR_String Var_99;
  MR_String Var_100;
  MR_String Var_102;
  MR_String Var_103;
  MR_String Var_104;
  MR_String Var_106;
  MR_String Var_107;
  MR_String Var_109;
  MR_Word Var_111;
  MR_Word Var_114;
  MR_String Var_115;
  MR_Word Var_116;
  MR_Word Var_120;
  MR_Word Var_121;
  MR_Word Var_122;
  MR_Word _TableTipVar_25;
  MR_Word _TableTipArg_26;
  MR_String _CallTableTipAssignStr_31;

  transform_hlds__table_gen__generate_call_table_lookup_goals_17_p_0(NumberedVars_14, PredId_15, ProcId_16, Statistics_17, Context_18, STATE_VARIABLE_VarTable_0_52, &STATE_VARIABLE_VarTable_56_56, STATE_VARIABLE_TableInfo_0_54, STATE_VARIABLE_TableInfo_55, Steps_24, &_TableTipVar_25, &_TableTipArg_26, &InfoArg_27, &LookupForeignArgs_28, &LookupPrefixGoals_29, &LookupCodeStr_30, &_CallTableTipAssignStr_31);
  ModuleInfo_32 = ((MR_Word) ((MR_hl_field(0, *STATE_VARIABLE_TableInfo_55, (MR_Integer) 0))));
  Var_59 = transform_hlds__table_gen__memo_non_record_type_0_f_0();
  transform_hlds__table_gen__generate_new_table_var_6_p_0((MR_String) "Record", Var_59, (MR_Integer) 1, STATE_VARIABLE_VarTable_56_56, &STATE_VARIABLE_VarTable_61_61, RecordVar_21);
  Var_63 = transform_hlds__table_gen__memo_non_status_type_0_f_0();
  transform_hlds__table_gen__generate_new_table_var_6_p_0((MR_String) "Status", Var_63, (MR_Integer) 1, STATE_VARIABLE_VarTable_61_61, STATE_VARIABLE_VarTable_53, StatusVar_22);
  {
    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_66, 0) = ((MR_Box) (*StatusVar_22));
    MR_hl_field(1, Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    BoundVars_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, BoundVars_35, 0) = ((MR_Box) (*RecordVar_21));
    MR_hl_field(1, BoundVars_35, 1) = ((MR_Box) (Var_66));
  }
  RecordVarName_36 = transform_hlds__table_gen__memo_non_record_name_0_f_0();
  StatusVarName_37 = transform_hlds__table_gen__status_name_0_f_0();
  Var_70 = parse_tree__prog_mode__out_mode_0_f_0();
  {
    Var_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_69, 0) = ((MR_Box) (RecordVarName_36));
    MR_hl_field(0, Var_69, 1) = ((MR_Box) (Var_70));
  }
  {
    Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
  }
  Var_71 = transform_hlds__table_gen__memo_non_record_type_0_f_0();
  {
    RecordArg_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RecordArg_38, 0) = ((MR_Box) (*RecordVar_21));
    MR_hl_field(0, RecordArg_38, 1) = ((MR_Box) (Var_68));
    MR_hl_field(0, RecordArg_38, 2) = ((MR_Box) (Var_71));
    MR_hl_field(0, RecordArg_38, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  Var_75 = parse_tree__prog_mode__out_mode_0_f_0();
  {
    Var_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_74, 0) = ((MR_Box) (StatusVarName_37));
    MR_hl_field(0, Var_74, 1) = ((MR_Box) (Var_75));
  }
  {
    Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_73, 0) = ((MR_Box) (Var_74));
  }
  Var_76 = transform_hlds__table_gen__memo_non_status_type_0_f_0();
  {
    StatusArg_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, StatusArg_39, 0) = ((MR_Box) (*StatusVar_22));
    MR_hl_field(0, StatusArg_39, 1) = ((MR_Box) (Var_73));
    MR_hl_field(0, StatusArg_39, 2) = ((MR_Box) (Var_76));
    MR_hl_field(0, StatusArg_39, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) (StatusArg_39));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_78, 0) = ((MR_Box) (RecordArg_38));
    MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_79));
  }
  {
    Args_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Args_40, 0) = ((MR_Box) (InfoArg_27));
    MR_hl_field(1, Args_40, 1) = ((MR_Box) (Var_78));
  }
  Var_83 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
  Var_89 = transform_hlds__table_gen__next_table_node_name_0_f_0();
  Var_90 = mercury__string__f_43_43_2_f_0((MR_String) ";\n\n", LookupCodeStr_30);
  Var_88 = mercury__string__f_43_43_2_f_0(Var_89, Var_90);
  Var_86 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_TrieNode ", Var_88);
  Var_84 = mercury__string__f_43_43_2_f_0((MR_String) ";\n", Var_86);
  Var_82 = mercury__string__f_43_43_2_f_0(Var_83, Var_84);
  LookupDeclCodeStr_41 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_TrieNode ", Var_82);
  DebugArgStr_42 = transform_hlds__table_gen__get_debug_arg_string_1_f_0(*STATE_VARIABLE_TableInfo_55);
  BackArgStr_43 = transform_hlds__table_gen__get_back_arg_string_1_f_0(*STATE_VARIABLE_TableInfo_55);
  Var_103 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
  Var_109 = mercury__string__f_43_43_2_f_0(StatusVarName_37, (MR_String) ");\n");
  Var_107 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_109);
  Var_106 = mercury__string__f_43_43_2_f_0(RecordVarName_36, Var_107);
  Var_104 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_106);
  Var_102 = mercury__string__f_43_43_2_f_0(Var_103, Var_104);
  Var_100 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_102);
  Var_99 = mercury__string__f_43_43_2_f_0(BackArgStr_43, Var_100);
  Var_97 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_99);
  Var_96 = mercury__string__f_43_43_2_f_0(DebugArgStr_42, Var_97);
  Var_94 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_96);
  Var_93 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_memo_non_setup", Var_94);
  PredCodeStr_44 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_93);
  Var_111 = hlds__instmap__instmap_delta_bind_vars_1_f_0(BoundVars_35);
  Var_114 = transform_hlds__table_gen__tabling_c_attributes_no_dupl_0_f_0();
  Var_115 = mercury__string__f_43_43_2_f_0(LookupDeclCodeStr_41, PredCodeStr_44);
  transform_hlds__table_gen__table_call_foreign_proc_11_p_0(ModuleInfo_32, (MR_String) "table_memo_non_setup", Args_40, LookupForeignArgs_28, Var_111, (MR_Integer) 0, (MR_Integer) 2, Var_114, Var_115, Context_18, &SetupGoal0_45);
  transform_hlds__table_gen__attach_call_table_tip_2_p_0(SetupGoal0_45, &SetupGoal_46);
  {
    Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_116, 0) = ((MR_Box) (SetupGoal_46));
    MR_hl_field(1, Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  LookupSetupGoals_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), LookupPrefixGoals_29, Var_116);
  {
    GoalExpr_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, GoalExpr_48, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, GoalExpr_48, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, GoalExpr_48, 2) = ((MR_Box) (LookupSetupGoals_47));
  }
  Vars_49 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), (MR_Word) (&transform_hlds__table_gen_scalar_common_1[2]), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[23]), NumberedVars_14);
  {
    Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_121, 0) = ((MR_Box) (*RecordVar_21));
    MR_hl_field(1, Var_121, 1) = ((MR_Box) (Vars_49));
  }
  {
    Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_120, 0) = ((MR_Box) (*StatusVar_22));
    MR_hl_field(1, Var_120, 1) = ((MR_Box) (Var_121));
  }
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_120, &NonLocals_50);
  Var_122 = hlds__instmap__instmap_delta_bind_vars_1_f_0(BoundVars_35);
  transform_hlds__table_gen__goal_info_init_hide_6_p_0(NonLocals_50, Var_122, (MR_Integer) 0, (MR_Integer) 2, Context_18, &GoalInfo_51);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_23 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_48));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_51));
  }
}

static MR_String MR_CALL 
transform_hlds__table_gen__memo_non_record_name_0_f_0(void)
{
  return (MR_String) "record";
}

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_non_status_type_0_f_0(void)
{
  MR_Word Type_2;
  MR_Word TB_3;
  MR_Word Var_4;
  MR_Word Var_6;

  TB_3 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_6, 0) = ((MR_Box) (TB_3));
    MR_hl_field(1, Var_6, 1) = ((MR_Box) ((MR_String) "memo_non_status"));
  }
  {
    Var_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_4, 0) = ((MR_Box) (Var_6));
    MR_hl_field(0, Var_4, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  parse_tree__prog_type__construct_type_3_p_0(Var_4, (MR_Word) ((MR_Unsigned) 0U), &Type_2);
  return Type_2;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_non_record_type_0_f_0(void)
{
  MR_Word Type_2;
  MR_Word TB_3;
  MR_Word Var_4;
  MR_Word Var_6;

  TB_3 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_6, 0) = ((MR_Box) (TB_3));
    MR_hl_field(1, Var_6, 1) = ((MR_Box) ((MR_String) "memo_non_record"));
  }
  {
    Var_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_4, 0) = ((MR_Box) (Var_6));
    MR_hl_field(0, Var_4, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  parse_tree__prog_type__construct_type_3_p_0(Var_4, (MR_Word) ((MR_Unsigned) 0U), &Type_2);
  return Type_2;
}

static MR_Box MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_119_95_109_101_109_111_95_103_111_97_108_95_95_91_52_93_95_48_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_169;

  conv0_HeadVar__2_169 = transform_hlds__table_gen__IntroducedFrom__func__create_new_memo_goal__1185__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_169));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_119_95_109_101_109_111_95_103_111_97_108_95_95_91_52_93_95_48_16_p_0(
  MR_Word Detism_17,
  MR_Word OrigGoal_18,
  MR_Word Statistics_19,
  MR_Word PredId_21,
  MR_Integer ProcId_22,
  MR_Word HeadVars_23,
  MR_Word NumberedInputVars_24,
  MR_Word NumberedOutputVars_25,
  MR_Word STATE_VARIABLE_VarTable_0_77,
  MR_Word * STATE_VARIABLE_VarTable_78,
  MR_Word STATE_VARIABLE_TableInfo_0_79,
  MR_Word * STATE_VARIABLE_TableInfo_80,
  MR_Word * TableTipVar_28,
  MR_Word * Goal_29,
  MR_Word * Steps_30)
{
  MR_Word OrigNonLocals_31;
  MR_Word OrigGoalInfo_33;
  MR_Word OrigInstMapDelta_34;
  MR_Word Context_35;
  MR_Word ModuleInfo_36;
  MR_Word CodeModel_37;
  MR_Word StatusVar_41;
  MR_Word LookUpGoal_42;
  MR_Integer BlockSize_44;
  MR_Word InactiveNonLocals_48;
  MR_Word OutputVars_49;
  MR_Word InactiveInstmapDelta_50;
  MR_Word SwitchArms_54;
  MR_Word SwitchExpr_71;
  MR_Word SwitchNonLocals_72;
  MR_Word SwitchGoalInfo_73;
  MR_Word SwitchGoal_74;
  MR_Word GoalExpr_75;
  MR_Word GoalInfo_76;
  MR_String Var_85;
  MR_Word Var_155;
  MR_Word Var_156;

  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_23, &OrigNonLocals_31);
  OrigGoalInfo_33 = ((MR_Word) ((MR_hl_field(0, OrigGoal_18, (MR_Integer) 1))));
  OrigInstMapDelta_34 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(OrigGoalInfo_33);
  Context_35 = hlds__hlds_goal__goal_info_get_context_1_f_0(OrigGoalInfo_33);
  ModuleInfo_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TableInfo_0_79, (MR_Integer) 0))));
  hlds__code_model__determinism_to_code_model_2_p_0(Detism_17, &CodeModel_37);
  Var_85 = transform_hlds__table_gen__infinite_recursion_msg_0_f_0();
  mercury__list__length_2_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), NumberedOutputVars_25, &BlockSize_44);
  OutputVars_49 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), (MR_Word) (&transform_hlds__table_gen_scalar_common_1[2]), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[22]), NumberedOutputVars_25);
  InactiveInstmapDelta_50 = hlds__instmap__instmap_delta_bind_vars_1_f_0(OutputVars_49);
  switch (CodeModel_37) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word StatusType_38;
        MR_Word ActiveGoal_43;
        MR_Word SaveAnswerGoals_45;
        MR_Word SucceededGoal_47;
        MR_Word InactiveGoalExpr_51;
        MR_Word InactiveGoalInfo_52;
        MR_Word InactiveGoal_53;
        MR_Word STATE_VARIABLE_VarTable_83_83;
        MR_Word STATE_VARIABLE_TableInfo_84_84;
        MR_Word STATE_VARIABLE_VarTable_86_86;
        MR_Word STATE_VARIABLE_VarTable_87_87;
        MR_Word Var_90;
        MR_Word Var_93;
        MR_Word Var_95;
        MR_Word Var_96;
        MR_Word Var_98;
        MR_Word Var_99;
        MR_Word Var_100;
        MR_Word Var_102;
        MR_Word Var_103;
        MR_Word Var_104;

        StatusType_38 = transform_hlds__table_gen__memo_det_status_type_0_f_0();
        transform_hlds__table_gen__generate_plain_call_table_lookup_goal_16_p_0(StatusType_38, (MR_String) "table_memo_det_setup_shortcut", (MR_String) "MR_tbl_memo_det_setup", NumberedInputVars_24, PredId_21, ProcId_22, Statistics_19, Context_35, STATE_VARIABLE_VarTable_0_77, &STATE_VARIABLE_VarTable_83_83, STATE_VARIABLE_TableInfo_0_79, &STATE_VARIABLE_TableInfo_84_84, TableTipVar_28, &StatusVar_41, &LookUpGoal_42, Steps_30);
        transform_hlds__table_gen__generate_error_goal_6_p_0(STATE_VARIABLE_TableInfo_84_84, Context_35, Var_85, STATE_VARIABLE_VarTable_83_83, &STATE_VARIABLE_VarTable_86_86, &ActiveGoal_43);
        transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_101_109_111_95_115_97_118_101_95_103_111_97_108_95_95_91_49_93_95_48_9_p_0(NumberedOutputVars_25, *TableTipVar_28, BlockSize_44, Context_35, STATE_VARIABLE_VarTable_86_86, &STATE_VARIABLE_VarTable_87_87, STATE_VARIABLE_TableInfo_84_84, STATE_VARIABLE_TableInfo_80, &SaveAnswerGoals_45);
        transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_101_109_111_95_114_101_115_116_111_114_101_95_103_111_97_108_95_95_91_49_93_95_48_8_p_0(NumberedOutputVars_25, OrigInstMapDelta_34, *TableTipVar_28, Context_35, STATE_VARIABLE_VarTable_87_87, STATE_VARIABLE_VarTable_78, *STATE_VARIABLE_TableInfo_80, &SucceededGoal_47);
        {
          Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_90, 0) = ((MR_Box) (*TableTipVar_28));
          MR_hl_field(1, Var_90, 1) = ((MR_Box) (HeadVars_23));
        }
        parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_90, &InactiveNonLocals_48);
        {
          Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_93, 0) = ((MR_Box) (OrigGoal_18));
          MR_hl_field(1, Var_93, 1) = ((MR_Box) (SaveAnswerGoals_45));
        }
        {
          InactiveGoalExpr_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, InactiveGoalExpr_51, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, InactiveGoalExpr_51, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, InactiveGoalExpr_51, 2) = ((MR_Box) (Var_93));
        }
        transform_hlds__table_gen__goal_info_init_hide_6_p_0(InactiveNonLocals_48, InactiveInstmapDelta_50, Detism_17, (MR_Integer) 2, Context_35, &InactiveGoalInfo_52);
        {
          InactiveGoal_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, InactiveGoal_53, 0) = ((MR_Box) (InactiveGoalExpr_51));
          MR_hl_field(0, InactiveGoal_53, 1) = ((MR_Box) (InactiveGoalInfo_52));
        }
        Var_96 = transform_hlds__table_gen__memo_det_active_cons_id_0_f_0();
        {
          Var_95 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_95, 0) = ((MR_Box) (Var_96));
          MR_hl_field(0, Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_95, 2) = ((MR_Box) (ActiveGoal_43));
        }
        Var_100 = transform_hlds__table_gen__memo_det_inactive_cons_id_0_f_0();
        {
          Var_99 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_99, 0) = ((MR_Box) (Var_100));
          MR_hl_field(0, Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_99, 2) = ((MR_Box) (InactiveGoal_53));
        }
        Var_104 = transform_hlds__table_gen__memo_det_succeeded_cons_id_0_f_0();
        {
          Var_103 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_103, 0) = ((MR_Box) (Var_104));
          MR_hl_field(0, Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_103, 2) = ((MR_Box) (SucceededGoal_47));
        }
        {
          Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_102, 0) = ((MR_Box) (Var_103));
          MR_hl_field(1, Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_98, 0) = ((MR_Box) (Var_99));
          MR_hl_field(1, Var_98, 1) = ((MR_Box) (Var_102));
        }
        {
          SwitchArms_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SwitchArms_54, 0) = ((MR_Box) (Var_95));
          MR_hl_field(1, SwitchArms_54, 1) = ((MR_Box) (Var_98));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.create_new_memo_goal\'/16", (MR_String) "model_non");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Unifies_55;
        MR_Word NewVars_56;
        MR_Word Renaming_57;
        MR_Word RenamedOrigGoal_58;
        MR_Word ThenGoalExpr_59;
        MR_Word ThenVars_60;
        MR_Word ThenNonLocals_61;
        MR_Word ThenGoalInfo_62;
        MR_Word ThenGoal_63;
        MR_Word TableTipArg_66;
        MR_String DebugArgStr_67;
        MR_String MarkAsFailedCode_68;
        MR_Word ElseGoal_69;
        MR_Word FailedGoal_70;
        MR_Word Var_109;
        MR_Word Var_110;
        MR_Word Var_113;
        MR_Word Var_114;
        MR_String Var_115;
        MR_Word Var_116;
        MR_Word Var_117;
        MR_String Var_119;
        MR_String Var_121;
        MR_String Var_122;
        MR_String Var_124;
        MR_String Var_125;
        MR_Word Var_127;
        MR_Word Var_129;
        MR_Word Var_132;
        MR_Word Var_136;
        MR_Word Var_137;
        MR_Word Var_139;
        MR_Word Var_140;
        MR_Word Var_141;
        MR_Word Var_143;
        MR_Word Var_144;
        MR_Word Var_145;
        MR_Word Var_147;
        MR_Word Var_148;
        MR_Word Var_149;
        MR_Word InactiveGoalExpr_159;
        MR_Word InactiveGoalInfo_160;
        MR_Word InactiveGoal_161;
        MR_Word StatusType_172;
        MR_Word ActiveGoal_175;
        MR_Word SaveAnswerGoals_176;
        MR_Word SucceededGoal_177;
        MR_Word STATE_VARIABLE_VarTable_83_178;
        MR_Word STATE_VARIABLE_TableInfo_84_179;
        MR_Word STATE_VARIABLE_VarTable_86_180;
        MR_Word STATE_VARIABLE_VarTable_87_181;
        MR_Word STATE_VARIABLE_VarTable_89_182;
        MR_Word Var_183;

        StatusType_172 = transform_hlds__table_gen__memo_semi_status_type_0_f_0();
        transform_hlds__table_gen__generate_plain_call_table_lookup_goal_16_p_0(StatusType_172, (MR_String) "table_memo_semi_setup_shortcut", (MR_String) "MR_tbl_memo_semi_setup", NumberedInputVars_24, PredId_21, ProcId_22, Statistics_19, Context_35, STATE_VARIABLE_VarTable_0_77, &STATE_VARIABLE_VarTable_83_178, STATE_VARIABLE_TableInfo_0_79, &STATE_VARIABLE_TableInfo_84_179, TableTipVar_28, &StatusVar_41, &LookUpGoal_42, Steps_30);
        transform_hlds__table_gen__generate_error_goal_6_p_0(STATE_VARIABLE_TableInfo_84_179, Context_35, Var_85, STATE_VARIABLE_VarTable_83_178, &STATE_VARIABLE_VarTable_86_180, &ActiveGoal_175);
        transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_101_109_111_95_115_97_118_101_95_103_111_97_108_95_95_91_49_93_95_48_9_p_0(NumberedOutputVars_25, *TableTipVar_28, BlockSize_44, Context_35, STATE_VARIABLE_VarTable_86_180, &STATE_VARIABLE_VarTable_87_181, STATE_VARIABLE_TableInfo_84_179, STATE_VARIABLE_TableInfo_80, &SaveAnswerGoals_176);
        transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_101_109_111_95_114_101_115_116_111_114_101_95_103_111_97_108_95_95_91_49_93_95_48_8_p_0(NumberedOutputVars_25, OrigInstMapDelta_34, *TableTipVar_28, Context_35, STATE_VARIABLE_VarTable_87_181, &STATE_VARIABLE_VarTable_89_182, *STATE_VARIABLE_TableInfo_80, &SucceededGoal_177);
        {
          Var_183 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_183, 0) = ((MR_Box) (*TableTipVar_28));
          MR_hl_field(1, Var_183, 1) = ((MR_Box) (HeadVars_23));
        }
        parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_183, &InactiveNonLocals_48);
        hlds__goal_util__create_renaming_7_p_0(OutputVars_49, OrigInstMapDelta_34, STATE_VARIABLE_VarTable_89_182, STATE_VARIABLE_VarTable_78, &Unifies_55, &NewVars_56, &Renaming_57);
        hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Renaming_57, OrigGoal_18, &RenamedOrigGoal_58);
        Var_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Unifies_55, SaveAnswerGoals_176);
        {
          ThenGoalExpr_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ThenGoalExpr_59, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, ThenGoalExpr_59, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, ThenGoalExpr_59, 2) = ((MR_Box) (Var_109));
        }
        {
          Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_110, 0) = ((MR_Box) (*TableTipVar_28));
          MR_hl_field(1, Var_110, 1) = ((MR_Box) (OutputVars_49));
        }
        ThenVars_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[2]), Var_110, NewVars_56);
        parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ThenVars_60, &ThenNonLocals_61);
        transform_hlds__table_gen__goal_info_init_hide_6_p_0(ThenNonLocals_61, InactiveInstmapDelta_50, (MR_Integer) 0, (MR_Integer) 2, Context_35, &ThenGoalInfo_62);
        {
          ThenGoal_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ThenGoal_63, 0) = ((MR_Box) (ThenGoalExpr_59));
          MR_hl_field(0, ThenGoal_63, 1) = ((MR_Box) (ThenGoalInfo_62));
        }
        Var_115 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
        Var_116 = parse_tree__prog_mode__in_mode_0_f_0();
        {
          Var_114 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_114, 0) = ((MR_Box) (Var_115));
          MR_hl_field(0, Var_114, 1) = ((MR_Box) (Var_116));
        }
        {
          Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_113, 0) = ((MR_Box) (Var_114));
        }
        Var_117 = transform_hlds__table_gen__trie_node_type_0_f_0();
        {
          TableTipArg_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TableTipArg_66, 0) = ((MR_Box) (*TableTipVar_28));
          MR_hl_field(0, TableTipArg_66, 1) = ((MR_Box) (Var_113));
          MR_hl_field(0, TableTipArg_66, 2) = ((MR_Box) (Var_117));
          MR_hl_field(0, TableTipArg_66, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        DebugArgStr_67 = transform_hlds__table_gen__get_debug_arg_string_1_f_0(*STATE_VARIABLE_TableInfo_80);
        Var_125 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
        Var_124 = mercury__string__f_43_43_2_f_0(Var_125, (MR_String) ");");
        Var_122 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_124);
        Var_121 = mercury__string__f_43_43_2_f_0(DebugArgStr_67, Var_122);
        Var_119 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_121);
        MarkAsFailedCode_68 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_memo_mark_as_failed", Var_119);
        {
          Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_127, 0) = ((MR_Box) (TableTipArg_66));
          MR_hl_field(1, Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_129 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        Var_132 = transform_hlds__table_gen__tabling_c_attributes_dupl_0_f_0();
        transform_hlds__table_gen__table_call_foreign_proc_11_p_0(ModuleInfo_36, (MR_String) "table_memo_mark_as_failed", Var_127, (MR_Word) ((MR_Unsigned) 0U), Var_129, (MR_Integer) 7, (MR_Integer) 2, Var_132, MarkAsFailedCode_68, Context_35, &ElseGoal_69);
        {
          InactiveGoalExpr_159 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, InactiveGoalExpr_159, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, InactiveGoalExpr_159, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, InactiveGoalExpr_159, 2) = ((MR_Box) (RenamedOrigGoal_58));
          MR_hl_field(3, InactiveGoalExpr_159, 3) = ((MR_Box) (ThenGoal_63));
          MR_hl_field(3, InactiveGoalExpr_159, 4) = ((MR_Box) (ElseGoal_69));
        }
        transform_hlds__table_gen__goal_info_init_hide_6_p_0(InactiveNonLocals_48, InactiveInstmapDelta_50, Detism_17, (MR_Integer) 2, Context_35, &InactiveGoalInfo_160);
        {
          InactiveGoal_161 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, InactiveGoal_161, 0) = ((MR_Box) (InactiveGoalExpr_159));
          MR_hl_field(0, InactiveGoal_161, 1) = ((MR_Box) (InactiveGoalInfo_160));
        }
        FailedGoal_70 = hlds__make_goal__fail_goal_0_f_0();
        Var_137 = transform_hlds__table_gen__memo_semi_active_cons_id_0_f_0();
        {
          Var_136 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_136, 0) = ((MR_Box) (Var_137));
          MR_hl_field(0, Var_136, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_136, 2) = ((MR_Box) (ActiveGoal_175));
        }
        Var_141 = transform_hlds__table_gen__memo_semi_inactive_cons_id_0_f_0();
        {
          Var_140 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_140, 0) = ((MR_Box) (Var_141));
          MR_hl_field(0, Var_140, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_140, 2) = ((MR_Box) (InactiveGoal_161));
        }
        Var_145 = transform_hlds__table_gen__memo_semi_succeeded_cons_id_0_f_0();
        {
          Var_144 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_144, 0) = ((MR_Box) (Var_145));
          MR_hl_field(0, Var_144, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_144, 2) = ((MR_Box) (SucceededGoal_177));
        }
        Var_149 = transform_hlds__table_gen__memo_semi_failed_cons_id_0_f_0();
        {
          Var_148 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_148, 0) = ((MR_Box) (Var_149));
          MR_hl_field(0, Var_148, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_148, 2) = ((MR_Box) (FailedGoal_70));
        }
        {
          Var_147 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_147, 0) = ((MR_Box) (Var_148));
          MR_hl_field(1, Var_147, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_143, 0) = ((MR_Box) (Var_144));
          MR_hl_field(1, Var_143, 1) = ((MR_Box) (Var_147));
        }
        {
          Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_139, 0) = ((MR_Box) (Var_140));
          MR_hl_field(1, Var_139, 1) = ((MR_Box) (Var_143));
        }
        {
          SwitchArms_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SwitchArms_54, 0) = ((MR_Box) (Var_136));
          MR_hl_field(1, SwitchArms_54, 1) = ((MR_Box) (Var_139));
        }
      }
      break;
  }
  {
    SwitchExpr_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, SwitchExpr_71, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, SwitchExpr_71, 1) = ((MR_Box) (StatusVar_41));
    MR_hl_field(3, SwitchExpr_71, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, SwitchExpr_71, 3) = ((MR_Box) (SwitchArms_54));
  }
  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), StatusVar_41, InactiveNonLocals_48, &SwitchNonLocals_72);
  transform_hlds__table_gen__goal_info_init_hide_6_p_0(SwitchNonLocals_72, InactiveInstmapDelta_50, Detism_17, (MR_Integer) 2, Context_35, &SwitchGoalInfo_73);
  {
    SwitchGoal_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SwitchGoal_74, 0) = ((MR_Box) (SwitchExpr_71));
    MR_hl_field(0, SwitchGoal_74, 1) = ((MR_Box) (SwitchGoalInfo_73));
  }
  {
    Var_156 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_156, 0) = ((MR_Box) (SwitchGoal_74));
    MR_hl_field(1, Var_156, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_155, 0) = ((MR_Box) (LookUpGoal_42));
    MR_hl_field(1, Var_155, 1) = ((MR_Box) (Var_156));
  }
  {
    GoalExpr_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, GoalExpr_75, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, GoalExpr_75, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, GoalExpr_75, 2) = ((MR_Box) (Var_155));
  }
  transform_hlds__table_gen__goal_info_init_hide_6_p_0(OrigNonLocals_31, OrigInstMapDelta_34, Detism_17, (MR_Integer) 2, Context_35, &GoalInfo_76);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_29 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_75));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_76));
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_semi_status_type_0_f_0(void)
{
  MR_Word Type_2;
  MR_Word TB_3;
  MR_Word Var_4;
  MR_Word Var_6;

  TB_3 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_6, 0) = ((MR_Box) (TB_3));
    MR_hl_field(1, Var_6, 1) = ((MR_Box) ((MR_String) "memo_semi_status"));
  }
  {
    Var_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_4, 0) = ((MR_Box) (Var_6));
    MR_hl_field(0, Var_4, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  parse_tree__prog_type__construct_type_3_p_0(Var_4, (MR_Word) ((MR_Unsigned) 0U), &Type_2);
  return Type_2;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_det_status_type_0_f_0(void)
{
  MR_Word Type_2;
  MR_Word TB_3;
  MR_Word Var_4;
  MR_Word Var_6;

  TB_3 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_6, 0) = ((MR_Box) (TB_3));
    MR_hl_field(1, Var_6, 1) = ((MR_Box) ((MR_String) "memo_det_status"));
  }
  {
    Var_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_4, 0) = ((MR_Box) (Var_6));
    MR_hl_field(0, Var_4, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  parse_tree__prog_type__construct_type_3_p_0(Var_4, (MR_Word) ((MR_Unsigned) 0U), &Type_2);
  return Type_2;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_semi_failed_cons_id_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word SymName_2;
  MR_Word TypeCtor_3;
  MR_Word Var_5;
  MR_Word TypeModule_7;
  MR_Word TypeSymName_8;

  Var_5 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    SymName_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_2, 0) = ((MR_Box) (Var_5));
    MR_hl_field(1, SymName_2, 1) = ((MR_Box) ((MR_String) "memo_semi_failed"));
  }
  TypeModule_7 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    TypeSymName_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypeSymName_8, 0) = ((MR_Box) (TypeModule_7));
    MR_hl_field(1, TypeSymName_8, 1) = ((MR_Box) ((MR_String) "memo_semi_status"));
  }
  {
    TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_3, 0) = ((MR_Box) (TypeSymName_8));
    MR_hl_field(0, TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    HeadVar__1_1 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, HeadVar__1_1, 1) = ((MR_Box) (SymName_2));
    MR_hl_field(3, HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(3, HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
  }
  return HeadVar__1_1;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_semi_succeeded_cons_id_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word SymName_2;
  MR_Word TypeCtor_3;
  MR_Word Var_5;
  MR_Word TypeModule_7;
  MR_Word TypeSymName_8;

  Var_5 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    SymName_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_2, 0) = ((MR_Box) (Var_5));
    MR_hl_field(1, SymName_2, 1) = ((MR_Box) ((MR_String) "memo_semi_succeeded"));
  }
  TypeModule_7 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    TypeSymName_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypeSymName_8, 0) = ((MR_Box) (TypeModule_7));
    MR_hl_field(1, TypeSymName_8, 1) = ((MR_Box) ((MR_String) "memo_semi_status"));
  }
  {
    TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_3, 0) = ((MR_Box) (TypeSymName_8));
    MR_hl_field(0, TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    HeadVar__1_1 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, HeadVar__1_1, 1) = ((MR_Box) (SymName_2));
    MR_hl_field(3, HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(3, HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
  }
  return HeadVar__1_1;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_semi_active_cons_id_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word SymName_2;
  MR_Word TypeCtor_3;
  MR_Word Var_5;
  MR_Word TypeModule_7;
  MR_Word TypeSymName_8;

  Var_5 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    SymName_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_2, 0) = ((MR_Box) (Var_5));
    MR_hl_field(1, SymName_2, 1) = ((MR_Box) ((MR_String) "memo_semi_active"));
  }
  TypeModule_7 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    TypeSymName_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypeSymName_8, 0) = ((MR_Box) (TypeModule_7));
    MR_hl_field(1, TypeSymName_8, 1) = ((MR_Box) ((MR_String) "memo_semi_status"));
  }
  {
    TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_3, 0) = ((MR_Box) (TypeSymName_8));
    MR_hl_field(0, TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    HeadVar__1_1 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, HeadVar__1_1, 1) = ((MR_Box) (SymName_2));
    MR_hl_field(3, HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(3, HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
  }
  return HeadVar__1_1;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_semi_inactive_cons_id_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word SymName_2;
  MR_Word TypeCtor_3;
  MR_Word Var_5;
  MR_Word TypeModule_7;
  MR_Word TypeSymName_8;

  Var_5 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    SymName_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_2, 0) = ((MR_Box) (Var_5));
    MR_hl_field(1, SymName_2, 1) = ((MR_Box) ((MR_String) "memo_semi_inactive"));
  }
  TypeModule_7 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    TypeSymName_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypeSymName_8, 0) = ((MR_Box) (TypeModule_7));
    MR_hl_field(1, TypeSymName_8, 1) = ((MR_Box) ((MR_String) "memo_semi_status"));
  }
  {
    TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_3, 0) = ((MR_Box) (TypeSymName_8));
    MR_hl_field(0, TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    HeadVar__1_1 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, HeadVar__1_1, 1) = ((MR_Box) (SymName_2));
    MR_hl_field(3, HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(3, HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
  }
  return HeadVar__1_1;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_det_succeeded_cons_id_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word SymName_2;
  MR_Word TypeCtor_3;
  MR_Word Var_5;
  MR_Word TypeModule_7;
  MR_Word TypeSymName_8;

  Var_5 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    SymName_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_2, 0) = ((MR_Box) (Var_5));
    MR_hl_field(1, SymName_2, 1) = ((MR_Box) ((MR_String) "memo_det_succeeded"));
  }
  TypeModule_7 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    TypeSymName_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypeSymName_8, 0) = ((MR_Box) (TypeModule_7));
    MR_hl_field(1, TypeSymName_8, 1) = ((MR_Box) ((MR_String) "memo_det_status"));
  }
  {
    TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_3, 0) = ((MR_Box) (TypeSymName_8));
    MR_hl_field(0, TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    HeadVar__1_1 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, HeadVar__1_1, 1) = ((MR_Box) (SymName_2));
    MR_hl_field(3, HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(3, HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
  }
  return HeadVar__1_1;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_det_active_cons_id_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word SymName_2;
  MR_Word TypeCtor_3;
  MR_Word Var_5;
  MR_Word TypeModule_7;
  MR_Word TypeSymName_8;

  Var_5 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    SymName_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_2, 0) = ((MR_Box) (Var_5));
    MR_hl_field(1, SymName_2, 1) = ((MR_Box) ((MR_String) "memo_det_active"));
  }
  TypeModule_7 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    TypeSymName_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypeSymName_8, 0) = ((MR_Box) (TypeModule_7));
    MR_hl_field(1, TypeSymName_8, 1) = ((MR_Box) ((MR_String) "memo_det_status"));
  }
  {
    TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_3, 0) = ((MR_Box) (TypeSymName_8));
    MR_hl_field(0, TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    HeadVar__1_1 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, HeadVar__1_1, 1) = ((MR_Box) (SymName_2));
    MR_hl_field(3, HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(3, HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
  }
  return HeadVar__1_1;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_det_inactive_cons_id_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word SymName_2;
  MR_Word TypeCtor_3;
  MR_Word Var_5;
  MR_Word TypeModule_7;
  MR_Word TypeSymName_8;

  Var_5 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    SymName_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_2, 0) = ((MR_Box) (Var_5));
    MR_hl_field(1, SymName_2, 1) = ((MR_Box) ((MR_String) "memo_det_inactive"));
  }
  TypeModule_7 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    TypeSymName_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypeSymName_8, 0) = ((MR_Box) (TypeModule_7));
    MR_hl_field(1, TypeSymName_8, 1) = ((MR_Box) ((MR_String) "memo_det_status"));
  }
  {
    TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_3, 0) = ((MR_Box) (TypeSymName_8));
    MR_hl_field(0, TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    HeadVar__1_1 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, HeadVar__1_1, 1) = ((MR_Box) (SymName_2));
    MR_hl_field(3, HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(3, HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
  }
  return HeadVar__1_1;
}

static void MR_CALL 
transform_hlds__table_gen__table_info_extract_4_p_0(
  MR_Word TableInfo_5,
  MR_Word * ModuleInfo_6,
  MR_Word * PredInfo_7,
  MR_Word * ProcInfo_8)
{
  *ModuleInfo_6 = ((MR_Word) ((MR_hl_field(0, TableInfo_5, (MR_Integer) 0))));
  *PredInfo_7 = ((MR_Word) ((MR_hl_field(0, TableInfo_5, (MR_Integer) 1))));
  *ProcInfo_8 = ((MR_Word) ((MR_hl_field(0, TableInfo_5, (MR_Integer) 2))));
}

static MR_bool MR_CALL 
transform_hlds__table_gen__get_input_output_vars_7_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__table_gen__IntroducedFrom__pred__get_input_output_vars__3565__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.get_input_output_vars\'/7", (MR_String) "lists not same length");
        return;
      }
  else
  {
    MR_Word Var_77 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_78 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.get_input_output_vars\'/7", (MR_String) "lists not same length");
        return;
      }
    else
    {
      MR_Word Mode_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Modes_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));

      succeeded = check_hlds__mode_test__mode_is_fully_input_2_p_0(ModuleInfo_3, Mode_34);
      if (succeeded)
      {
        MR_Word InVarModes0_40;
        MR_Word ArgMethod_41;
        MR_Word STATE_VARIABLE_MaybeSpecMethod_50_50;
        MR_Word Var_55;

        transform_hlds__table_gen__get_input_output_vars_7_p_0(Var_77, Modes_35, ModuleInfo_3, STATE_VARIABLE_MaybeSpecMethod_0_4, &STATE_VARIABLE_MaybeSpecMethod_50_50, &InVarModes0_40, HeadVar__7_7);
        if (((MR_tag((MR_Word) STATE_VARIABLE_MaybeSpecMethod_50_50)) == (MR_Integer) 0))
        {
          ArgMethod_41 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_MaybeSpecMethod_50_50, (MR_Integer) 0))) & (MR_Integer) 3);
          *STATE_VARIABLE_MaybeSpecMethod_5 = STATE_VARIABLE_MaybeSpecMethod_50_50;
        }
        else
        {
          MR_Word MaybeArgMethods0_42 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_MaybeSpecMethod_50_50, (MR_Integer) 0))));
          MR_Word HiddenArgMethod_43 = ((MR_Unsigned) ((MR_hl_field(1, STATE_VARIABLE_MaybeSpecMethod_50_50, (MR_Integer) 1))) & (MR_Integer) 1);
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
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.get_input_output_vars\'/7", (MR_String) "bad method for input var");
                return;
              }
            else
              ArgMethod_41 = ((MR_Word) ((MR_hl_field(1, LastMaybeArgMethod_45, (MR_Integer) 0))));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_MaybeSpecMethod_5 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (MaybeArgMethods_44));
              MR_hl_field(1, base, 1) = (MR_Box) ((MR_Unsigned) (HiddenArgMethod_43));
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
              MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (ArgMethod_41));
            }
          }
        }
        {
          Var_55 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_55, 0) = ((MR_Box) (Var_78));
          MR_hl_field(0, Var_55, 1) = ((MR_Box) (Mode_34));
          MR_hl_field(0, Var_55, 2) = (MR_Box) ((MR_Unsigned) (ArgMethod_41));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__6_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_55));
          MR_hl_field(1, base, 1) = ((MR_Box) (InVarModes0_40));
        }
      }
      else
      {
        succeeded = check_hlds__mode_test__mode_is_fully_output_2_p_0(ModuleInfo_3, Mode_34);
        if (succeeded)
        {
          MR_Word OutVarModes0_46;
          MR_Word STATE_VARIABLE_MaybeSpecMethod_56_56;
          MR_Word Var_63;

          transform_hlds__table_gen__get_input_output_vars_7_p_0(Var_77, Modes_35, ModuleInfo_3, STATE_VARIABLE_MaybeSpecMethod_0_4, &STATE_VARIABLE_MaybeSpecMethod_56_56, HeadVar__6_6, &OutVarModes0_46);
          if (((MR_tag((MR_Word) STATE_VARIABLE_MaybeSpecMethod_56_56)) == (MR_Integer) 0))
            *STATE_VARIABLE_MaybeSpecMethod_5 = STATE_VARIABLE_MaybeSpecMethod_56_56;
          else
          {
            MR_Word MaybeArgMethods0_72 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_MaybeSpecMethod_56_56, (MR_Integer) 0))));
            MR_Word HiddenArgMethod_73 = ((MR_Unsigned) ((MR_hl_field(1, STATE_VARIABLE_MaybeSpecMethod_56_56, (MR_Integer) 1))) & (MR_Integer) 1);
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
                MR_hl_field(0, Var_57, 0) = ((MR_Box) (&transform_hlds__table_gen_scalar_common_6[9]));
                MR_hl_field(0, Var_57, 1) = ((MR_Box) (transform_hlds__table_gen__get_input_output_vars_7_p_0_1));
                MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_57, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Var_57, 4) = ((MR_Box) (LastMaybeArgMethod_70));
              }
              mercury__require__expect_3_p_0(Var_57, (MR_String) "predicate \140transform_hlds.table_gen.get_input_output_vars\'/7", (MR_String) "bad method for output var");
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_MaybeSpecMethod_5 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (MaybeArgMethods_69));
                MR_hl_field(1, base, 1) = (MR_Box) ((MR_Unsigned) (HiddenArgMethod_73));
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
                MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (ArgMethod_67));
              }
            }
          }
          {
            Var_63 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_63, 0) = ((MR_Box) (Var_78));
            MR_hl_field(0, Var_63, 1) = ((MR_Box) (Mode_34));
            MR_hl_field(0, Var_63, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__7_7 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_63));
            MR_hl_field(1, base, 1) = ((MR_Box) (OutVarModes0_46));
          }
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.get_input_output_vars\'/7", (MR_String) "bad var");
            return;
          }
      }
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__table_gen__do_own_stack_transform_19_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_253;

  conv1_HeadVar__2_253 = transform_hlds__table_gen__IntroducedFrom__func__do_own_stack_transform__1879__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_253));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__table_gen__do_own_stack_transform_19_p_0(
  MR_Word Detism_20,
  MR_Word OrigGoal_21,
  MR_Word Statistics_22,
  MR_Word PredId_23,
  MR_Integer ProcId_24,
  MR_Word PredInfo0_25,
  MR_Word ProcInfo0_26,
  MR_Word HeadVars_27,
  MR_Word NumberedInputVars_28,
  MR_Word NumberedOutputVars_29,
  MR_Word STATE_VARIABLE_VarTable_0_88,
  MR_Word * STATE_VARIABLE_VarTable_89,
  MR_Word STATE_VARIABLE_TableInfo_0_90,
  MR_Word * STATE_VARIABLE_TableInfo_91,
  MR_Word STATE_VARIABLE_GenMap_0_92,
  MR_Word * STATE_VARIABLE_GenMap_93,
  MR_Word * Goal_33,
  MR_Word * InputSteps_34,
  MR_Word * OutputSteps_35)
{
  MR_bool succeeded;
  MR_String PredName_36;
  MR_Word GeneratorPredId_38;
  MR_Word OrigNonLocals_39;
  MR_Word OrigGoalInfo_41;
  MR_Word OrigInstMapDelta_42;
  MR_Word Context_43;
  MR_Integer NumInputVars_44;
  MR_Word ModuleInfo_45;
  MR_Word GeneratorPredType_46;
  MR_Word GeneratorPredVar_47;
  MR_Word ConsumerVar_48;
  MR_Word ShroudedPredProcId_49;
  MR_Word GeneratorConsId_50;
  MR_Word MakeGeneratorVarGoal_51;
  MR_Word InfoArg_54;
  MR_Word LookupForeignArgs_55;
  MR_Word LookupPrefixGoals_56;
  MR_String LookupCodeStr_57;
  MR_Word InputVarModes_59;
  MR_Word LookupForeignArgModes_60;
  MR_Word PickupForeignArgs_61;
  MR_String SaveInputVarCode_62;
  MR_String PickupInputVarCode_63;
  MR_String GeneratorPredVarName_64;
  MR_String ConsumerVarName_65;
  MR_Word GeneratorPredArg_66;
  MR_Word ConsumerArg_67;
  MR_String LookupDeclCodeStr_68;
  MR_String SetupCode_70;
  MR_Word SetupGoal_71;
  MR_Word LookupSetupGoals_72;
  MR_Word AnswerBlockVar_73;
  MR_String ConsumePredName_74;
  MR_Word GetNextAnswerGoal_75;
  MR_String DebugArgStr_76;
  MR_Word RestoreInstMapDeltaSrc_77;
  MR_Word RestoreArgs_78;
  MR_String RestoreCodeStr_79;
  MR_Word AnswerBlockArg_80;
  MR_Word RestoreGoal_82;
  MR_Word GoalExpr_83;
  MR_Word GoalInfo_84;
  MR_Word GeneratorPredInfo_85;
  MR_Word GeneratorTableInfo0_86;
  MR_Word GeneratorTableInfo_87;
  MR_Word STATE_VARIABLE_TableInfo_94_94;
  MR_Word STATE_VARIABLE_VarTable_98_98;
  MR_Word Var_100;
  MR_Word STATE_VARIABLE_VarTable_102_102;
  MR_Word Var_103;
  MR_Word STATE_VARIABLE_VarTable_105_105;
  MR_Word STATE_VARIABLE_TableInfo_106_106;
  MR_Word Var_109;
  MR_Word Var_110;
  MR_String Var_111;
  MR_Word Var_112;
  MR_Word Var_114;
  MR_Word Var_115;
  MR_Word Var_116;
  MR_Word Var_117;
  MR_String Var_120;
  MR_String Var_121;
  MR_String Var_122;
  MR_String Var_124;
  MR_String Var_126;
  MR_String Var_127;
  MR_String Var_128;
  MR_String Var_130;
  MR_String Var_132;
  MR_String Var_133;
  MR_String Var_134;
  MR_String Var_137;
  MR_String Var_138;
  MR_String Var_139;
  MR_String Var_141;
  MR_String Var_142;
  MR_String Var_143;
  MR_String Var_145;
  MR_String Var_147;
  MR_String Var_148;
  MR_String Var_149;
  MR_String Var_151;
  MR_String Var_152;
  MR_String Var_154;
  MR_String Var_155;
  MR_String Var_156;
  MR_String Var_158;
  MR_String Var_159;
  MR_String Var_160;
  MR_String Var_162;
  MR_String Var_163;
  MR_String Var_164;
  MR_String Var_166;
  MR_String Var_167;
  MR_String Var_169;
  MR_String Var_171;
  MR_String Var_172;
  MR_String Var_174;
  MR_String Var_176;
  MR_String Var_177;
  MR_String Var_178;
  MR_String Var_180;
  MR_String Var_182;
  MR_String Var_184;
  MR_String Var_185;
  MR_String Var_186;
  MR_String Var_188;
  MR_String Var_190;
  MR_String Var_191;
  MR_String Var_192;
  MR_String Var_194;
  MR_Word Var_196;
  MR_Word Var_197;
  MR_Word Var_200;
  MR_String Var_201;
  MR_Word Var_202;
  MR_Word Var_203;
  MR_Word Var_205;
  MR_Word Var_206;
  MR_Word Var_209;
  MR_Word STATE_VARIABLE_VarTable_211_211;
  MR_Word Var_214;
  MR_Word Var_215;
  MR_Word Var_217;
  MR_Word Var_220;
  MR_Word Var_221;
  MR_String Var_222;
  MR_Word Var_223;
  MR_Word Var_224;
  MR_Word Var_226;
  MR_Word Var_227;
  MR_Word Var_230;
  MR_Word Var_233;
  MR_Word Var_234;
  MR_Word Var_235;
  MR_Word Var_239;
  MR_Word GeneratorPredIdPrime_37;
  MR_Box conv0_GeneratorPredIdPrime_37;
  MR_Word _TableTipVar_52;
  MR_Word _TableTipArg_53;
  MR_String _CallTableTipAssignStr_58;
  MR_Word Var_245;
  MR_Word Var_246;

  PredName_36 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo0_25);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), STATE_VARIABLE_GenMap_0_92, ((MR_Box) (PredId_23)), &conv0_GeneratorPredIdPrime_37);
  if (succeeded)
  {
    GeneratorPredIdPrime_37 = ((MR_Word) (conv0_GeneratorPredIdPrime_37));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    GeneratorPredId_38 = GeneratorPredIdPrime_37;
    *STATE_VARIABLE_GenMap_93 = STATE_VARIABLE_GenMap_0_92;
    STATE_VARIABLE_TableInfo_94_94 = STATE_VARIABLE_TableInfo_0_90;
  }
  else
  {
    transform_hlds__table_gen__clone_pred_info_8_p_0(PredId_23, ProcId_24, PredInfo0_25, HeadVars_27, NumberedOutputVars_29, &GeneratorPredId_38, STATE_VARIABLE_TableInfo_0_90, &STATE_VARIABLE_TableInfo_94_94);
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_23)), ((MR_Box) (GeneratorPredId_38)), STATE_VARIABLE_GenMap_0_92, STATE_VARIABLE_GenMap_93);
  }
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_27, &OrigNonLocals_39);
  OrigGoalInfo_41 = ((MR_Word) ((MR_hl_field(0, OrigGoal_21, (MR_Integer) 1))));
  OrigInstMapDelta_42 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(OrigGoalInfo_41);
  Context_43 = hlds__hlds_goal__goal_info_get_context_1_f_0(OrigGoalInfo_41);
  mercury__list__length_2_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), NumberedInputVars_28, &NumInputVars_44);
  ModuleInfo_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TableInfo_94_94, (MR_Integer) 0))));
  GeneratorPredType_46 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
  transform_hlds__table_gen__generate_new_table_var_6_p_0((MR_String) "GeneratorPredVar", GeneratorPredType_46, (MR_Integer) 1, STATE_VARIABLE_VarTable_0_88, &STATE_VARIABLE_VarTable_98_98, &GeneratorPredVar_47);
  Var_100 = transform_hlds__table_gen__consumer_type_0_f_0();
  transform_hlds__table_gen__generate_new_table_var_6_p_0((MR_String) "Consumer", Var_100, (MR_Integer) 1, STATE_VARIABLE_VarTable_98_98, &STATE_VARIABLE_VarTable_102_102, &ConsumerVar_48);
  {
    Var_103 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_103, 0) = ((MR_Box) (GeneratorPredId_38));
    MR_hl_field(0, Var_103, 1) = ((MR_Box) (ProcId_24));
  }
  ShroudedPredProcId_49 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(Var_103);
  {
    GeneratorConsId_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, GeneratorConsId_50, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, GeneratorConsId_50, 1) = ((MR_Box) (ShroudedPredProcId_49));
    MR_hl_field(3, GeneratorConsId_50, 2) = NULL;
  }
  hlds__make_goal__make_const_construction_4_p_0(Context_43, GeneratorPredVar_47, GeneratorConsId_50, &MakeGeneratorVarGoal_51);
  transform_hlds__table_gen__generate_call_table_lookup_goals_17_p_0(NumberedInputVars_28, GeneratorPredId_38, ProcId_24, Statistics_22, Context_43, STATE_VARIABLE_VarTable_102_102, &STATE_VARIABLE_VarTable_105_105, STATE_VARIABLE_TableInfo_94_94, &STATE_VARIABLE_TableInfo_106_106, InputSteps_34, &_TableTipVar_52, &_TableTipArg_53, &InfoArg_54, &LookupForeignArgs_55, &LookupPrefixGoals_56, &LookupCodeStr_57, &_CallTableTipAssignStr_58);
  InputVarModes_59 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[21]), NumberedInputVars_28);
  mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), LookupForeignArgs_55, InputVarModes_59, &LookupForeignArgModes_60);
  transform_hlds__table_gen__generate_save_input_vars_code_6_p_0(LookupForeignArgModes_60, ModuleInfo_45, (MR_Integer) 0, &PickupForeignArgs_61, &SaveInputVarCode_62, &PickupInputVarCode_63);
  GeneratorPredVarName_64 = transform_hlds__table_gen__generator_pred_name_0_f_0();
  ConsumerVarName_65 = transform_hlds__table_gen__consumer_name_0_f_0();
  Var_111 = transform_hlds__table_gen__generator_pred_name_0_f_0();
  Var_112 = parse_tree__prog_mode__in_mode_0_f_0();
  {
    Var_110 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_110, 0) = ((MR_Box) (Var_111));
    MR_hl_field(0, Var_110, 1) = ((MR_Box) (Var_112));
  }
  {
    Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_109, 0) = ((MR_Box) (Var_110));
  }
  {
    GeneratorPredArg_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, GeneratorPredArg_66, 0) = ((MR_Box) (GeneratorPredVar_47));
    MR_hl_field(0, GeneratorPredArg_66, 1) = ((MR_Box) (Var_109));
    MR_hl_field(0, GeneratorPredArg_66, 2) = ((MR_Box) (GeneratorPredType_46));
    MR_hl_field(0, GeneratorPredArg_66, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  Var_116 = parse_tree__prog_mode__out_mode_0_f_0();
  {
    Var_115 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_115, 0) = ((MR_Box) (ConsumerVarName_65));
    MR_hl_field(0, Var_115, 1) = ((MR_Box) (Var_116));
  }
  {
    Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_114, 0) = ((MR_Box) (Var_115));
  }
  Var_117 = transform_hlds__table_gen__consumer_type_0_f_0();
  {
    ConsumerArg_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ConsumerArg_67, 0) = ((MR_Box) (ConsumerVar_48));
    MR_hl_field(0, ConsumerArg_67, 1) = ((MR_Box) (Var_114));
    MR_hl_field(0, ConsumerArg_67, 2) = ((MR_Box) (Var_117));
    MR_hl_field(0, ConsumerArg_67, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  Var_121 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
  Var_127 = transform_hlds__table_gen__next_table_node_name_0_f_0();
  Var_133 = transform_hlds__table_gen__generator_name_0_f_0();
  Var_134 = mercury__string__f_43_43_2_f_0((MR_String) ";\n\n", LookupCodeStr_57);
  Var_132 = mercury__string__f_43_43_2_f_0(Var_133, Var_134);
  Var_130 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_GeneratorPtr ", Var_132);
  Var_128 = mercury__string__f_43_43_2_f_0((MR_String) ";\n", Var_130);
  Var_126 = mercury__string__f_43_43_2_f_0(Var_127, Var_128);
  Var_124 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_TrieNode ", Var_126);
  Var_122 = mercury__string__f_43_43_2_f_0((MR_String) ";\n", Var_124);
  Var_120 = mercury__string__f_43_43_2_f_0(Var_121, Var_122);
  LookupDeclCodeStr_68 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_TrieNode ", Var_120);
  Var_138 = transform_hlds__table_gen__generator_name_0_f_0();
  Var_142 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
  Var_148 = transform_hlds__table_gen__generator_name_0_f_0();
  Var_155 = transform_hlds__table_gen__generator_name_0_f_0();
  Var_159 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
  Var_163 = mercury__string__int_to_string_1_f_0(NumInputVars_44);
  Var_177 = transform_hlds__table_gen__generator_name_0_f_0();
  Var_185 = transform_hlds__table_gen__consumer_name_0_f_0();
  Var_191 = transform_hlds__table_gen__generator_name_0_f_0();
  Var_194 = mercury__string__f_43_43_2_f_0(PredName_36, (MR_String) "\");\n");
  Var_192 = mercury__string__f_43_43_2_f_0((MR_String) ", \"", Var_194);
  Var_190 = mercury__string__f_43_43_2_f_0(Var_191, Var_192);
  Var_188 = mercury__string__f_43_43_2_f_0((MR_String) "MR_table_mmos_setup_consumer(", Var_190);
  Var_186 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_188);
  Var_184 = mercury__string__f_43_43_2_f_0(Var_185, Var_186);
  Var_182 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_184);
  Var_180 = mercury__string__f_43_43_2_f_0((MR_String) "\t}\n", Var_182);
  Var_178 = mercury__string__f_43_43_2_f_0((MR_String) ";\n", Var_180);
  Var_176 = mercury__string__f_43_43_2_f_0(Var_177, Var_178);
  Var_174 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_mmos_new_generator = ", Var_176);
  Var_172 = mercury__string__f_43_43_2_f_0((MR_String) "\");\n", Var_174);
  Var_171 = mercury__string__f_43_43_2_f_0(PredName_36, Var_172);
  Var_169 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_171);
  Var_167 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_169);
  Var_166 = mercury__string__f_43_43_2_f_0(GeneratorPredVarName_64, Var_167);
  Var_164 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_166);
  Var_162 = mercury__string__f_43_43_2_f_0(Var_163, Var_164);
  Var_160 = mercury__string__f_43_43_2_f_0((MR_String) ",\n\t\t\t", Var_162);
  Var_158 = mercury__string__f_43_43_2_f_0(Var_159, Var_160);
  Var_156 = mercury__string__f_43_43_2_f_0((MR_String) " = MR_table_mmos_setup_generator(", Var_158);
  Var_154 = mercury__string__f_43_43_2_f_0(Var_155, Var_156);
  Var_152 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", Var_154);
  Var_151 = mercury__string__f_43_43_2_f_0(SaveInputVarCode_62, Var_152);
  Var_149 = mercury__string__f_43_43_2_f_0((MR_String) " == NULL) {\n", Var_151);
  Var_147 = mercury__string__f_43_43_2_f_0(Var_148, Var_149);
  Var_145 = mercury__string__f_43_43_2_f_0((MR_String) "\tif (", Var_147);
  Var_143 = mercury__string__f_43_43_2_f_0((MR_String) "->MR_generator;\n", Var_145);
  Var_141 = mercury__string__f_43_43_2_f_0(Var_142, Var_143);
  Var_139 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_141);
  Var_137 = mercury__string__f_43_43_2_f_0(Var_138, Var_139);
  SetupCode_70 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_137);
  {
    Var_203 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_203, 0) = ((MR_Box) (ConsumerArg_67));
    MR_hl_field(1, Var_203, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_202 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_202, 0) = ((MR_Box) (GeneratorPredArg_66));
    MR_hl_field(1, Var_202, 1) = ((MR_Box) (Var_203));
  }
  {
    Var_196 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_196, 0) = ((MR_Box) (InfoArg_54));
    MR_hl_field(1, Var_196, 1) = ((MR_Box) (Var_202));
  }
  Var_197 = hlds__instmap__instmap_delta_bind_var_1_f_0(ConsumerVar_48);
  Var_200 = transform_hlds__table_gen__make_generator_c_attributes_0_f_0();
  Var_201 = mercury__string__f_43_43_2_f_0(LookupDeclCodeStr_68, SetupCode_70);
  transform_hlds__table_gen__table_call_foreign_proc_11_p_0(ModuleInfo_45, (MR_String) "table_mmos_setup_consumer", Var_196, LookupForeignArgs_55, Var_197, (MR_Integer) 0, (MR_Integer) 2, Var_200, Var_201, Context_43, &SetupGoal_71);
  {
    Var_205 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_205, 0) = ((MR_Box) (MakeGeneratorVarGoal_51));
    MR_hl_field(1, Var_205, 1) = ((MR_Box) (LookupPrefixGoals_56));
  }
  {
    Var_206 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_206, 0) = ((MR_Box) (SetupGoal_71));
    MR_hl_field(1, Var_206, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  LookupSetupGoals_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_205, Var_206);
  Var_209 = transform_hlds__table_gen__answer_block_type_0_f_0();
  transform_hlds__table_gen__generate_new_table_var_6_p_0((MR_String) "AnswerBlock", Var_209, (MR_Integer) 1, STATE_VARIABLE_VarTable_105_105, &STATE_VARIABLE_VarTable_211_211, &AnswerBlockVar_73);
  succeeded = (Detism_20 == (MR_Integer) 2);
  if (succeeded)
    ConsumePredName_74 = (MR_String) "table_mmos_consume_next_answer_multi";
  else
  {
    succeeded = (Detism_20 == (MR_Integer) 3);
    if (succeeded)
      ConsumePredName_74 = (MR_String) "table_mmos_consume_next_answer_nondet";
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.do_own_stack_transform\'/19", (MR_String) "invalid determinism");
        return;
      }
  }
  {
    Var_217 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_217, 0) = ((MR_Box) (AnswerBlockVar_73));
    MR_hl_field(1, Var_217, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_214 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_214, 0) = ((MR_Box) (ConsumerVar_48));
    MR_hl_field(1, Var_214, 1) = ((MR_Box) (Var_217));
  }
  Var_215 = hlds__instmap__instmap_delta_bind_var_1_f_0(AnswerBlockVar_73);
  transform_hlds__table_gen__table_plain_call_8_p_0(ModuleInfo_45, ConsumePredName_74, Var_214, Var_215, Detism_20, (MR_Integer) 2, Context_43, &GetNextAnswerGoal_75);
  DebugArgStr_76 = transform_hlds__table_gen__get_debug_arg_string_1_f_0(STATE_VARIABLE_TableInfo_106_106);
  transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_116_111_114_101_95_103_111_97_108_115_95_95_91_49_93_95_48_9_p_0(ModuleInfo_45, OrigInstMapDelta_42, DebugArgStr_76, NumberedOutputVars_29, &RestoreInstMapDeltaSrc_77, &RestoreArgs_78, &RestoreCodeStr_79, STATE_VARIABLE_VarTable_211_211, STATE_VARIABLE_VarTable_89);
  Var_222 = transform_hlds__table_gen__answer_block_name_0_f_0();
  Var_223 = parse_tree__prog_mode__in_mode_0_f_0();
  {
    Var_221 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_221, 0) = ((MR_Box) (Var_222));
    MR_hl_field(0, Var_221, 1) = ((MR_Box) (Var_223));
  }
  {
    Var_220 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_220, 0) = ((MR_Box) (Var_221));
  }
  Var_224 = transform_hlds__table_gen__answer_block_type_0_f_0();
  {
    AnswerBlockArg_80 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, AnswerBlockArg_80, 0) = ((MR_Box) (AnswerBlockVar_73));
    MR_hl_field(0, AnswerBlockArg_80, 1) = ((MR_Box) (Var_220));
    MR_hl_field(0, AnswerBlockArg_80, 2) = ((MR_Box) (Var_224));
    MR_hl_field(0, AnswerBlockArg_80, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Var_226 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_226, 0) = ((MR_Box) (AnswerBlockArg_80));
    MR_hl_field(1, Var_226, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_227 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(RestoreInstMapDeltaSrc_77);
  Var_230 = transform_hlds__table_gen__tabling_c_attributes_no_dupl_0_f_0();
  transform_hlds__table_gen__table_call_foreign_proc_11_p_0(ModuleInfo_45, (MR_String) "table_mmos_restore_answers", Var_226, RestoreArgs_78, Var_227, (MR_Integer) 0, (MR_Integer) 1, Var_230, RestoreCodeStr_79, Context_43, &RestoreGoal_82);
  {
    Var_235 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_235, 0) = ((MR_Box) (RestoreGoal_82));
    MR_hl_field(1, Var_235, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_234 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_234, 0) = ((MR_Box) (GetNextAnswerGoal_75));
    MR_hl_field(1, Var_234, 1) = ((MR_Box) (Var_235));
  }
  Var_233 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), LookupSetupGoals_72, Var_234);
  {
    GoalExpr_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, GoalExpr_83, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, GoalExpr_83, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, GoalExpr_83, 2) = ((MR_Box) (Var_233));
  }
  hlds__hlds_goal__goal_info_init_6_p_0(OrigNonLocals_39, OrigInstMapDelta_42, Detism_20, (MR_Integer) 2, Context_43, &GoalInfo_84);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_33 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_83));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_84));
  }
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_45, GeneratorPredId_38, &GeneratorPredInfo_85);
  transform_hlds__table_gen__table_info_init_4_p_0(ModuleInfo_45, GeneratorPredInfo_85, ProcInfo0_26, &GeneratorTableInfo0_86);
  transform_hlds__table_gen__do_own_stack_create_generator_19_p_0(GeneratorPredId_38, ProcId_24, GeneratorPredInfo_85, ProcInfo0_26, Statistics_22, Context_43, GeneratorPredVar_47, DebugArgStr_76, PickupInputVarCode_63, PickupForeignArgs_61, NumberedInputVars_28, NumberedOutputVars_29, OrigNonLocals_39, OrigInstMapDelta_42, *STATE_VARIABLE_VarTable_89, GeneratorTableInfo0_86, &GeneratorTableInfo_87, *InputSteps_34, OutputSteps_35);
  Var_239 = ((MR_Word) ((MR_hl_field(0, GeneratorTableInfo_87, (MR_Integer) 0))));
  Var_245 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TableInfo_106_106, (MR_Integer) 1))));
  Var_246 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TableInfo_106_106, (MR_Integer) 2))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_TableInfo_91 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_239));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_245));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_246));
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
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(0, base, 1) = ((MR_Box) (PredInfo_6));
    MR_hl_field(0, base, 2) = ((MR_Box) (ProcInfo_7));
  }
}

static MR_String MR_CALL 
transform_hlds__table_gen__generator_pred_name_0_f_0(void)
{
  return (MR_String) "generator_pred";
}

static MR_String MR_CALL 
transform_hlds__table_gen__consumer_name_0_f_0(void)
{
  return (MR_String) "consumer";
}

static MR_Word MR_CALL 
transform_hlds__table_gen__answer_block_type_0_f_0(void)
{
  MR_Word Type_2;
  MR_Word TB_3;
  MR_Word Var_4;
  MR_Word Var_6;

  TB_3 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_6, 0) = ((MR_Box) (TB_3));
    MR_hl_field(1, Var_6, 1) = ((MR_Box) ((MR_String) "ml_answer_block"));
  }
  {
    Var_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_4, 0) = ((MR_Box) (Var_6));
    MR_hl_field(0, Var_4, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  parse_tree__prog_type__construct_type_3_p_0(Var_4, (MR_Word) ((MR_Unsigned) 0U), &Type_2);
  return Type_2;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__make_generator_c_attributes_0_f_0(void)
{
  MR_Word Attrs_2;
  MR_Word Attrs0_3;

  Attrs0_3 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
  parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 0, Attrs0_3, &Attrs_2);
  return Attrs_2;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__consumer_type_0_f_0(void)
{
  MR_Word Type_2;
  MR_Word TB_3;
  MR_Word Var_4;
  MR_Word Var_6;

  TB_3 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_6, 0) = ((MR_Box) (TB_3));
    MR_hl_field(1, Var_6, 1) = ((MR_Box) ((MR_String) "ml_consumer"));
  }
  {
    Var_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_4, 0) = ((MR_Box) (Var_6));
    MR_hl_field(0, Var_4, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  parse_tree__prog_type__construct_type_3_p_0(Var_4, (MR_Word) ((MR_Unsigned) 0U), &Type_2);
  return Type_2;
}

static MR_bool MR_CALL 
transform_hlds__table_gen__clone_pred_info_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__table_gen__filter_marker_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__table_gen__clone_pred_info_8_p_0(
  MR_Word OrigPredId_9,
  MR_Integer OrigProcId_10,
  MR_Word PredInfo0_11,
  MR_Word HeadVars_12,
  MR_Word NumberedOutputVars_13,
  MR_Word * GeneratorPredId_14,
  MR_Word STATE_VARIABLE_TableInfo_0_47,
  MR_Word * STATE_VARIABLE_TableInfo_48)
{
  MR_bool succeeded;
  MR_Word ModuleName_16;
  MR_Word PredOrFunc_17;
  MR_String PredName_18;
  MR_Word Context_19;
  MR_Word GoalType_21;
  MR_Word Markers0_22;
  MR_Word ArgTypes0_23;
  MR_Word TypeVarSet_24;
  MR_Word ExistQVars_25;
  MR_Word ClassContext_26;
  MR_Word ClassProofMap_27;
  MR_Word ClassConstraintMap_28;
  MR_Word OrigOrigin_29;
  MR_Word ClausesInfo_30;
  MR_Word VarNameRemap_31;
  MR_Word Transform_32;
  MR_String GenPredName_33;
  MR_Word HeadVarTypes_34;
  MR_Word ArgTypes_35;
  MR_Word PredFormArity_36;
  MR_Word MarkerList0_37;
  MR_Word MarkerList_38;
  MR_Word Markers_39;
  MR_Word Origin_40;
  MR_Word GenPredInfo_42;
  MR_Word ModuleInfo0_43;
  MR_Word PredTable0_44;
  MR_Word PredTable_45;
  MR_Word ModuleInfo_46;
  MR_Integer Var_50;
  MR_Word Var_56;
  MR_Word Var_57;

  ModuleName_16 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo0_11);
  PredOrFunc_17 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_11);
  PredName_18 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo0_11);
  hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo0_11, &Context_19);
  hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo0_11, &GoalType_21);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_11, &Markers0_22);
  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo0_11, &ArgTypes0_23);
  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo0_11, &TypeVarSet_24);
  hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(PredInfo0_11, &ExistQVars_25);
  hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo0_11, &ClassContext_26);
  hlds__hlds_pred__pred_info_get_constraint_proof_map_2_p_0(PredInfo0_11, &ClassProofMap_27);
  hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(PredInfo0_11, &ClassConstraintMap_28);
  hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo0_11, &OrigOrigin_29);
  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo0_11, &ClausesInfo_30);
  hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(PredInfo0_11, &VarNameRemap_31);
  Var_50 = hlds__hlds_pred__proc_id_to_int_1_f_0(OrigProcId_10);
  {
    Transform_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Transform_32, 0) = ((MR_Box) ((MR_Unsigned) 14U));
    MR_hl_field(3, Transform_32, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
    MR_hl_field(3, Transform_32, 2) = ((MR_Box) (Var_50));
  }
  hlds__pred_name__make_transformed_pred_name_3_p_0(PredName_18, Transform_32, &GenPredName_33);
  mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), HeadVars_12, ArgTypes0_23, &HeadVarTypes_34);
  transform_hlds__table_gen__keep_only_output_arg_types_3_p_0(HeadVarTypes_34, NumberedOutputVars_13, &ArgTypes_35);
  PredFormArity_36 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_35);
  hlds__hlds_pred__markers_to_marker_list_2_p_0(Markers0_22, &MarkerList0_37);
  mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[20]), MarkerList0_37, &MarkerList_38);
  hlds__hlds_pred__marker_list_to_markers_2_p_0(MarkerList_38, &Markers_39);
  {
    Origin_40 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Origin_40, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Origin_40, 1) = ((MR_Box) (OrigOrigin_29));
    MR_hl_field(2, Origin_40, 2) = ((MR_Box) (OrigPredId_9));
  }
  hlds__hlds_pred__pred_info_init_19_p_0(PredOrFunc_17, ModuleName_16, GenPredName_33, PredFormArity_36, Context_19, Origin_40, (MR_Word) (((MR_Box) ((MR_Unsigned) 32U))), (MR_Word) ((MR_Unsigned) 0U), GoalType_21, Markers_39, ArgTypes_35, TypeVarSet_24, ExistQVars_25, ClassContext_26, ClassProofMap_27, ClassConstraintMap_28, ClausesInfo_30, VarNameRemap_31, &GenPredInfo_42);
  ModuleInfo0_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TableInfo_0_47, (MR_Integer) 0))));
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo0_43, &PredTable0_44);
  hlds__pred_table__predicate_table_insert_4_p_0(GenPredInfo_42, GeneratorPredId_14, PredTable0_44, &PredTable_45);
  hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_45, ModuleInfo0_43, &ModuleInfo_46);
  Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TableInfo_0_47, (MR_Integer) 1))));
  Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TableInfo_0_47, (MR_Integer) 2))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_TableInfo_48 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleInfo_46));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_56));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_57));
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
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, Var_21, (MR_Integer) 0))));
        MR_Word Type_8 = ((MR_Word) ((MR_hl_field(0, Var_21, (MR_Integer) 1))));
        MR_Word Out_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Outs_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        MR_Word OutVar_13 = ((MR_Word) ((MR_hl_field(0, Out_10, (MR_Integer) 0))));

        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[2]), ((MR_Box) (Var_7)), ((MR_Box) (OutVar_13)));
        if (succeeded)
        {
          MR_Word OutTypesTail_17;

          transform_hlds__table_gen__keep_only_output_arg_types_3_p_0(Var_20, Outs_11, &OutTypesTail_17);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Type_8));
            MR_hl_field(1, base, 1) = ((MR_Box) (OutTypesTail_17));
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
transform_hlds__table_gen__do_own_stack_create_generator_19_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__2_2;

  conv4_HeadVar__2_2 = transform_hlds__table_gen__project_out_pos_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
transform_hlds__table_gen__do_own_stack_create_generator_19_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__2_2;

  conv3_HeadVar__2_2 = transform_hlds__table_gen__project_out_pos_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
transform_hlds__table_gen__do_own_stack_create_generator_19_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_168;

  conv2_HeadVar__3_168 = transform_hlds__table_gen__IntroducedFrom__func__do_own_stack_create_generator__2021__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_168));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
transform_hlds__table_gen__do_own_stack_create_generator_19_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_164;

  conv1_HeadVar__2_164 = transform_hlds__table_gen__IntroducedFrom__func__do_own_stack_create_generator__2019__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_164));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
transform_hlds__table_gen__do_own_stack_create_generator_19_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_160;

  conv0_HeadVar__2_160 = transform_hlds__table_gen__IntroducedFrom__func__do_own_stack_create_generator__2017__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_160));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__table_gen__do_own_stack_create_generator_19_p_0(
  MR_Word PredId_20,
  MR_Integer ProcId_21,
  MR_Word STATE_VARIABLE_PredInfo_0_72,
  MR_Word STATE_VARIABLE_ProcInfo_0_73,
  MR_Word Statistics_24,
  MR_Word Context_25,
  MR_Word GeneratorVar_26,
  MR_String DebugArgStr_27,
  MR_String PickupVarCode_28,
  MR_Word PickupForeignArgs_29,
  MR_Word NumberedInputVars_30,
  MR_Word NumberedOutputVars_31,
  MR_Word OrigNonLocals_32,
  MR_Word OrigInstMapDelta_33,
  MR_Word STATE_VARIABLE_VarTable_0_74,
  MR_Word STATE_VARIABLE_TableInfo_0_75,
  MR_Word * STATE_VARIABLE_TableInfo_76,
  MR_Word InputSteps_36,
  MR_Word * OutputSteps_37)
{
  MR_Word ModuleInfo0_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TableInfo_0_75, (MR_Integer) 0))));
  MR_Word PickupInstMapDeltaSrc0_39;
  MR_Word PickupInstMapDeltaSrc_40;
  MR_String PickupGeneratorCode_41;
  MR_Word PickupGeneratorArg_42;
  MR_Word PickupGoal_43;
  MR_Integer BlockSize_44;
  MR_Word SaveReturnAnswerGoals_45;
  MR_Word OrigGoal_46;
  MR_Word OrigGoalInfo_48;
  MR_Word MainGoalExpr_49;
  MR_Word Detism_50;
  MR_Word NonLocals_51;
  MR_Word MainGoalInfo0_52;
  MR_Word MainGoalInfo_53;
  MR_Word MainGoal_54;
  MR_String CompletionCode_55;
  MR_Word CompletionArg_56;
  MR_Word CompletionGoal_57;
  MR_Word DisjGoalExpr_58;
  MR_Word DisjGoal_59;
  MR_Word GoalExpr_60;
  MR_Word Goal_61;
  MR_Word InputVarModeMethods_63;
  MR_Word OutputVarModeMethods_64;
  MR_Word ProcTableStructInfo_65;
  MR_Word PredProcId_66;
  MR_Word ModuleInfo1_67;
  MR_Word SpecialReturn_68;
  MR_Word ProcTable0_69;
  MR_Word ProcTable_70;
  MR_Word ModuleInfo_71;
  MR_Word Var_77;
  MR_Word STATE_VARIABLE_ProcInfo_78_78;
  MR_Word Var_80;
  MR_Word STATE_VARIABLE_ProcInfo_81_81;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_String Var_87;
  MR_String Var_88;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_String Var_92;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_Word Var_101;
  MR_String Var_102;
  MR_Word STATE_VARIABLE_VarTable_104_104;
  MR_Word STATE_VARIABLE_TableInfo_105_105;
  MR_Word Var_107;
  MR_String Var_111;
  MR_String Var_113;
  MR_String Var_114;
  MR_String Var_116;
  MR_String Var_117;
  MR_Word Var_119;
  MR_Word Var_120;
  MR_String Var_121;
  MR_Word Var_122;
  MR_Word Var_123;
  MR_Word Var_126;
  MR_Word Var_128;
  MR_Word Var_131;
  MR_Word Var_133;
  MR_Word Var_134;
  MR_Word Var_137;
  MR_Word Var_138;
  MR_Word STATE_VARIABLE_ProcInfo_140_140;
  MR_Word STATE_VARIABLE_ProcInfo_141_141;
  MR_Word Var_145;
  MR_String Var_146;
  MR_Word Var_147;
  MR_Word STATE_VARIABLE_ProcInfo_148_148;
  MR_Word STATE_VARIABLE_ProcInfo_150_150;
  MR_Word STATE_VARIABLE_PredInfo_151_151;
  MR_Word Var_155;
  MR_Word Var_156;

  Var_77 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), (MR_Word) (&transform_hlds__table_gen_scalar_common_1[2]), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[16]), NumberedOutputVars_31);
  hlds__hlds_pred__proc_info_set_headvars_3_p_0(Var_77, STATE_VARIABLE_ProcInfo_0_73, &STATE_VARIABLE_ProcInfo_78_78);
  Var_80 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[17]), NumberedOutputVars_31);
  hlds__hlds_pred__proc_info_set_argmodes_3_p_0(Var_80, STATE_VARIABLE_ProcInfo_78_78, &STATE_VARIABLE_ProcInfo_81_81);
  {
    Var_83 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_83, 0) = ((MR_Box) (&transform_hlds__table_gen_scalar_common_5[1]));
    MR_hl_field(0, Var_83, 1) = ((MR_Box) (transform_hlds__table_gen__do_own_stack_create_generator_19_p_0_3));
    MR_hl_field(0, Var_83, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_83, 3) = ((MR_Box) (ModuleInfo0_38));
  }
  PickupInstMapDeltaSrc0_39 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[2]), Var_83, NumberedInputVars_30);
  Var_85 = parse_tree__prog_mode__ground_inst_0_f_0();
  {
    Var_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_84, 0) = ((MR_Box) (GeneratorVar_26));
    MR_hl_field(0, Var_84, 1) = ((MR_Box) (Var_85));
  }
  {
    PickupInstMapDeltaSrc_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PickupInstMapDeltaSrc_40, 0) = ((MR_Box) (Var_84));
    MR_hl_field(1, PickupInstMapDeltaSrc_40, 1) = ((MR_Box) (PickupInstMapDeltaSrc0_39));
  }
  Var_88 = transform_hlds__table_gen__generator_name_0_f_0();
  Var_87 = mercury__string__f_43_43_2_f_0(Var_88, (MR_String) " = MR_mmos_new_generator;\n");
  PickupGeneratorCode_41 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", Var_87);
  Var_92 = transform_hlds__table_gen__generator_name_0_f_0();
  Var_93 = parse_tree__prog_mode__out_mode_0_f_0();
  {
    Var_91 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_91, 0) = ((MR_Box) (Var_92));
    MR_hl_field(0, Var_91, 1) = ((MR_Box) (Var_93));
  }
  {
    Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_90, 0) = ((MR_Box) (Var_91));
  }
  Var_94 = transform_hlds__table_gen__generator_type_0_f_0();
  {
    PickupGeneratorArg_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PickupGeneratorArg_42, 0) = ((MR_Box) (GeneratorVar_26));
    MR_hl_field(0, PickupGeneratorArg_42, 1) = ((MR_Box) (Var_90));
    MR_hl_field(0, PickupGeneratorArg_42, 2) = ((MR_Box) (Var_94));
    MR_hl_field(0, PickupGeneratorArg_42, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_97, 0) = ((MR_Box) (PickupGeneratorArg_42));
    MR_hl_field(1, Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_98 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(PickupInstMapDeltaSrc_40);
  Var_101 = transform_hlds__table_gen__tabling_c_attributes_no_dupl_0_f_0();
  Var_102 = mercury__string__f_43_43_2_f_0(PickupGeneratorCode_41, PickupVarCode_28);
  transform_hlds__table_gen__table_call_foreign_proc_11_p_0(ModuleInfo0_38, (MR_String) "table_mmos_pickup_inputs", Var_97, PickupForeignArgs_29, Var_98, (MR_Integer) 0, (MR_Integer) 2, Var_101, Var_102, Context_25, &PickupGoal_43);
  mercury__list__length_2_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), NumberedOutputVars_31, &BlockSize_44);
  transform_hlds__table_gen__generate_own_stack_save_return_goal_13_p_0(NumberedOutputVars_31, GeneratorVar_26, PredId_20, ProcId_21, BlockSize_44, Statistics_24, Context_25, STATE_VARIABLE_VarTable_0_74, &STATE_VARIABLE_VarTable_104_104, STATE_VARIABLE_TableInfo_0_75, &STATE_VARIABLE_TableInfo_105_105, OutputSteps_37, &SaveReturnAnswerGoals_45);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_81_81, &OrigGoal_46);
  OrigGoalInfo_48 = ((MR_Word) ((MR_hl_field(0, OrigGoal_46, (MR_Integer) 1))));
  {
    Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_107, 0) = ((MR_Box) (OrigGoal_46));
    MR_hl_field(1, Var_107, 1) = ((MR_Box) (SaveReturnAnswerGoals_45));
  }
  {
    MainGoalExpr_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MainGoalExpr_49, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, MainGoalExpr_49, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MainGoalExpr_49, 2) = ((MR_Box) (Var_107));
  }
  Detism_50 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(OrigGoalInfo_48);
  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GeneratorVar_26, OrigNonLocals_32, &NonLocals_51);
  hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_51, OrigInstMapDelta_33, Detism_50, (MR_Integer) 2, Context_25, &MainGoalInfo0_52);
  hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 8, MainGoalInfo0_52, &MainGoalInfo_53);
  {
    MainGoal_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MainGoal_54, 0) = ((MR_Box) (MainGoalExpr_49));
    MR_hl_field(0, MainGoal_54, 1) = ((MR_Box) (MainGoalInfo_53));
  }
  Var_117 = transform_hlds__table_gen__generator_name_0_f_0();
  Var_116 = mercury__string__f_43_43_2_f_0(Var_117, (MR_String) ");\n");
  Var_114 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_116);
  Var_113 = mercury__string__f_43_43_2_f_0(DebugArgStr_27, Var_114);
  Var_111 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_mmos_completion(", Var_113);
  CompletionCode_55 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", Var_111);
  Var_121 = transform_hlds__table_gen__generator_name_0_f_0();
  Var_122 = parse_tree__prog_mode__in_mode_0_f_0();
  {
    Var_120 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_120, 0) = ((MR_Box) (Var_121));
    MR_hl_field(0, Var_120, 1) = ((MR_Box) (Var_122));
  }
  {
    Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_119, 0) = ((MR_Box) (Var_120));
  }
  Var_123 = transform_hlds__table_gen__generator_type_0_f_0();
  {
    CompletionArg_56 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CompletionArg_56, 0) = ((MR_Box) (GeneratorVar_26));
    MR_hl_field(0, CompletionArg_56, 1) = ((MR_Box) (Var_119));
    MR_hl_field(0, CompletionArg_56, 2) = ((MR_Box) (Var_123));
    MR_hl_field(0, CompletionArg_56, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_126, 0) = ((MR_Box) (CompletionArg_56));
    MR_hl_field(1, Var_126, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_128 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
  Var_131 = transform_hlds__table_gen__tabling_c_attributes_no_dupl_0_f_0();
  transform_hlds__table_gen__table_call_foreign_proc_11_p_0(ModuleInfo0_38, (MR_String) "table_mmos_completion", Var_126, (MR_Word) ((MR_Unsigned) 0U), Var_128, (MR_Integer) 7, (MR_Integer) 2, Var_131, CompletionCode_55, Context_25, &CompletionGoal_57);
  {
    Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_134, 0) = ((MR_Box) (CompletionGoal_57));
    MR_hl_field(1, Var_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_133, 0) = ((MR_Box) (MainGoal_54));
    MR_hl_field(1, Var_133, 1) = ((MR_Box) (Var_134));
  }
  {
    DisjGoalExpr_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, DisjGoalExpr_58, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, DisjGoalExpr_58, 1) = ((MR_Box) (Var_133));
  }
  {
    DisjGoal_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DisjGoal_59, 0) = ((MR_Box) (DisjGoalExpr_58));
    MR_hl_field(0, DisjGoal_59, 1) = ((MR_Box) (MainGoalInfo_53));
  }
  {
    Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_138, 0) = ((MR_Box) (DisjGoal_59));
    MR_hl_field(1, Var_138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_137, 0) = ((MR_Box) (PickupGoal_43));
    MR_hl_field(1, Var_137, 1) = ((MR_Box) (Var_138));
  }
  {
    GoalExpr_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, GoalExpr_60, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, GoalExpr_60, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, GoalExpr_60, 2) = ((MR_Box) (Var_137));
  }
  {
    Goal_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Goal_61, 0) = ((MR_Box) (GoalExpr_60));
    MR_hl_field(0, Goal_61, 1) = ((MR_Box) (OrigGoalInfo_48));
  }
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_61, STATE_VARIABLE_ProcInfo_81_81, &STATE_VARIABLE_ProcInfo_140_140);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(STATE_VARIABLE_VarTable_104_104, STATE_VARIABLE_ProcInfo_140_140, &STATE_VARIABLE_ProcInfo_141_141);
  InputVarModeMethods_63 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), (MR_Word) (&transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_var_mode_method_0), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[18]), NumberedInputVars_30);
  OutputVarModeMethods_64 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), (MR_Word) (&transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_var_mode_method_0), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[19]), NumberedOutputVars_31);
  {
    Var_145 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_145, 0) = ((MR_Box) (*OutputSteps_37));
  }
  transform_hlds__table_gen__generate_gen_proc_table_info_10_p_0(STATE_VARIABLE_TableInfo_105_105, PredId_20, ProcId_21, STATE_VARIABLE_VarTable_104_104, (MR_Word) (MR_mkword(3, &transform_hlds__table_gen_scalar_common_3[6])), InputSteps_36, Var_145, InputVarModeMethods_63, OutputVarModeMethods_64, &ProcTableStructInfo_65);
  {
    PredProcId_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredProcId_66, 0) = ((MR_Box) (PredId_20));
    MR_hl_field(0, PredProcId_66, 1) = ((MR_Box) (ProcId_21));
  }
  transform_hlds__table_gen__add_proc_table_struct_5_p_0(PredProcId_66, ProcTableStructInfo_65, STATE_VARIABLE_ProcInfo_141_141, ModuleInfo0_38, &ModuleInfo1_67);
  Var_146 = transform_hlds__table_gen__returning_generator_locn_0_f_0();
  {
    SpecialReturn_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SpecialReturn_68, 0) = ((MR_Box) (Var_146));
    MR_hl_field(0, SpecialReturn_68, 1) = ((MR_Box) (DebugArgStr_27));
  }
  {
    Var_147 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_147, 0) = ((MR_Box) (SpecialReturn_68));
  }
  hlds__hlds_pred__proc_info_set_maybe_special_return_3_p_0(Var_147, STATE_VARIABLE_ProcInfo_141_141, &STATE_VARIABLE_ProcInfo_148_148);
  hlds__hlds_pred__proc_info_set_eval_method_3_p_0((MR_Word) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_3[7])), STATE_VARIABLE_ProcInfo_148_148, &STATE_VARIABLE_ProcInfo_150_150);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(STATE_VARIABLE_PredInfo_0_72, &ProcTable0_69);
  mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_21)), ((MR_Box) (STATE_VARIABLE_ProcInfo_150_150)), ProcTable0_69, &ProcTable_70);
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_70, STATE_VARIABLE_PredInfo_0_72, &STATE_VARIABLE_PredInfo_151_151);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_20, STATE_VARIABLE_PredInfo_151_151, ModuleInfo1_67, &ModuleInfo_71);
  Var_155 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TableInfo_105_105, (MR_Integer) 1))));
  Var_156 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TableInfo_105_105, (MR_Integer) 2))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_TableInfo_76 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleInfo_71));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_155));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_156));
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
    TableAttributes_12 = ((MR_Word) ((MR_hl_field(1, MaybeTableAttributes_11, (MR_Integer) 0))));
  {
    TableStructInfo_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TableStructInfo_13, 0) = ((MR_Box) (ProcTableStructInfo_7));
    MR_hl_field(0, TableStructInfo_13, 1) = ((MR_Box) (TableAttributes_12));
  }
  mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0), ((MR_Box) (PredProcId_6)), ((MR_Box) (TableStructInfo_13)), TableStructMap0_10, &TableStructMap_14);
  hlds__hlds_module__module_info_set_table_struct_map_3_p_0(TableStructMap_14, STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16);
}

static void MR_CALL 
transform_hlds__table_gen__generate_own_stack_save_return_goal_13_p_0(
  MR_Word NumberedOutputVars_14,
  MR_Word GeneratorVar_15,
  MR_Word PredId_16,
  MR_Integer ProcId_17,
  MR_Integer BlockSize_18,
  MR_Word Statistics_19,
  MR_Word Context_20,
  MR_Word STATE_VARIABLE_VarTable_0_51,
  MR_Word * STATE_VARIABLE_VarTable_52,
  MR_Word STATE_VARIABLE_TableInfo_0_53,
  MR_Word * STATE_VARIABLE_TableInfo_54,
  MR_Word * OutputSteps_23,
  MR_Word * Goals_24)
{
  MR_String GeneratorName_25;
  MR_Word GeneratorArg_26;
  MR_String DebugArgStr_27;
  MR_Word LookupForeignArgs_28;
  MR_Word LookupPrefixGoals_29;
  MR_String LookupCodeStr_30;
  MR_Word SavePrefixGoals_32;
  MR_String SaveCodeStr_33;
  MR_Word Args_38;
  MR_String LookupSaveDeclCodeStr_40;
  MR_String GetCodeStr_41;
  MR_String DuplCheckCodeStr_42;
  MR_String AssignSuccessCodeStr_43;
  MR_String CreateCodeStr_44;
  MR_String SetupReturnCodeStr_45;
  MR_String CreateSaveSetupReturnCodeStr_46;
  MR_String CondSaveCodeStr_47;
  MR_String CodeStr_48;
  MR_Word ModuleInfo_49;
  MR_Word DuplicateCheckSaveGoal_50;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word STATE_VARIABLE_VarTable_60_60;
  MR_Word STATE_VARIABLE_TableInfo_61_61;
  MR_String Var_66;
  MR_String Var_67;
  MR_String Var_68;
  MR_String Var_70;
  MR_String Var_72;
  MR_String Var_73;
  MR_String Var_74;
  MR_String Var_76;
  MR_String Var_78;
  MR_String Var_79;
  MR_String Var_80;
  MR_String Var_82;
  MR_String Var_84;
  MR_String Var_87;
  MR_String Var_88;
  MR_String Var_89;
  MR_String Var_91;
  MR_String Var_92;
  MR_String Var_94;
  MR_String Var_97;
  MR_String Var_98;
  MR_String Var_100;
  MR_String Var_101;
  MR_String Var_103;
  MR_String Var_104;
  MR_String Var_105;
  MR_String Var_107;
  MR_String Var_110;
  MR_String Var_111;
  MR_String Var_112;
  MR_String Var_114;
  MR_String Var_117;
  MR_String Var_118;
  MR_String Var_120;
  MR_String Var_121;
  MR_String Var_123;
  MR_String Var_124;
  MR_String Var_126;
  MR_String Var_127;
  MR_String Var_128;
  MR_String Var_130;
  MR_String Var_131;
  MR_String Var_134;
  MR_String Var_135;
  MR_String Var_136;
  MR_String Var_138;
  MR_String Var_140;
  MR_String Var_142;
  MR_String Var_143;
  MR_String Var_145;
  MR_String Var_147;
  MR_String Var_148;
  MR_String Var_149;
  MR_String Var_150;
  MR_Word Var_151;
  MR_Word Var_154;
  MR_Word Var_155;
  MR_Word Var_156;
  MR_Word _SaveArgs_31;

  GeneratorName_25 = transform_hlds__table_gen__generator_name_0_f_0();
  Var_57 = parse_tree__prog_mode__in_mode_0_f_0();
  {
    Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_56, 0) = ((MR_Box) (GeneratorName_25));
    MR_hl_field(0, Var_56, 1) = ((MR_Box) (Var_57));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
  }
  Var_58 = transform_hlds__table_gen__generator_type_0_f_0();
  {
    GeneratorArg_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, GeneratorArg_26, 0) = ((MR_Box) (GeneratorVar_15));
    MR_hl_field(0, GeneratorArg_26, 1) = ((MR_Box) (Var_55));
    MR_hl_field(0, GeneratorArg_26, 2) = ((MR_Box) (Var_58));
    MR_hl_field(0, GeneratorArg_26, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  DebugArgStr_27 = transform_hlds__table_gen__get_debug_arg_string_1_f_0(STATE_VARIABLE_TableInfo_0_53);
  transform_hlds__table_gen__generate_answer_table_lookup_goals_13_p_0(NumberedOutputVars_14, PredId_16, ProcId_17, Statistics_19, Context_20, STATE_VARIABLE_VarTable_0_51, &STATE_VARIABLE_VarTable_60_60, STATE_VARIABLE_TableInfo_0_53, &STATE_VARIABLE_TableInfo_61_61, OutputSteps_23, &LookupForeignArgs_28, &LookupPrefixGoals_29, &LookupCodeStr_30);
  transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_97_118_101_95_103_111_97_108_115_95_95_91_49_93_95_48_10_p_0(NumberedOutputVars_14, DebugArgStr_27, Context_20, STATE_VARIABLE_VarTable_60_60, STATE_VARIABLE_VarTable_52, STATE_VARIABLE_TableInfo_61_61, STATE_VARIABLE_TableInfo_54, &_SaveArgs_31, &SavePrefixGoals_32, &SaveCodeStr_33);
  {
    Args_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Args_38, 0) = ((MR_Box) (GeneratorArg_26));
    MR_hl_field(1, Args_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_67 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
  Var_73 = transform_hlds__table_gen__next_table_node_name_0_f_0();
  Var_79 = transform_hlds__table_gen__answer_block_name_0_f_0();
  Var_84 = mercury__string__f_43_43_2_f_0((MR_String) "succeeded", (MR_String) ";\n\n");
  Var_82 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_bool ", Var_84);
  Var_80 = mercury__string__f_43_43_2_f_0((MR_String) ";\n", Var_82);
  Var_78 = mercury__string__f_43_43_2_f_0(Var_79, Var_80);
  Var_76 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_AnswerBlock ", Var_78);
  Var_74 = mercury__string__f_43_43_2_f_0((MR_String) ";\n", Var_76);
  Var_72 = mercury__string__f_43_43_2_f_0(Var_73, Var_74);
  Var_70 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_TrieNode ", Var_72);
  Var_68 = mercury__string__f_43_43_2_f_0((MR_String) ";\n", Var_70);
  Var_66 = mercury__string__f_43_43_2_f_0(Var_67, Var_68);
  LookupSaveDeclCodeStr_40 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_TrieNode ", Var_66);
  Var_88 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
  Var_94 = mercury__string__f_43_43_2_f_0(GeneratorName_25, (MR_String) ");\n");
  Var_92 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_94);
  Var_91 = mercury__string__f_43_43_2_f_0((MR_String) "MR_table_mmos_get_answer_table", Var_92);
  Var_89 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_91);
  Var_87 = mercury__string__f_43_43_2_f_0(Var_88, Var_89);
  GetCodeStr_41 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_87);
  Var_104 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
  Var_107 = mercury__string__f_43_43_2_f_0((MR_String) "succeeded", (MR_String) ");\n");
  Var_105 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_107);
  Var_103 = mercury__string__f_43_43_2_f_0(Var_104, Var_105);
  Var_101 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_103);
  Var_100 = mercury__string__f_43_43_2_f_0(DebugArgStr_27, Var_101);
  Var_98 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_100);
  Var_97 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_mmos_answer_is_not_duplicate", Var_98);
  DuplCheckCodeStr_42 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_97);
  Var_111 = transform_hlds__table_gen__success_indicator_name_0_f_0();
  Var_114 = mercury__string__f_43_43_2_f_0((MR_String) "succeeded", (MR_String) ";\n");
  Var_112 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_114);
  Var_110 = mercury__string__f_43_43_2_f_0(Var_111, Var_112);
  AssignSuccessCodeStr_43 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_110);
  Var_127 = mercury__string__int_to_string_1_f_0(BlockSize_18);
  Var_131 = transform_hlds__table_gen__answer_block_name_0_f_0();
  Var_130 = mercury__string__f_43_43_2_f_0(Var_131, (MR_String) ");\n");
  Var_128 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_130);
  Var_126 = mercury__string__f_43_43_2_f_0(Var_127, Var_128);
  Var_124 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_126);
  Var_123 = mercury__string__f_43_43_2_f_0(GeneratorName_25, Var_124);
  Var_121 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_123);
  Var_120 = mercury__string__f_43_43_2_f_0(DebugArgStr_27, Var_121);
  Var_118 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_120);
  Var_117 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_mmos_create_answer_block", Var_118);
  CreateCodeStr_44 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_117);
  Var_135 = transform_hlds__table_gen__returning_generator_locn_0_f_0();
  Var_138 = mercury__string__f_43_43_2_f_0(GeneratorName_25, (MR_String) ";\n");
  Var_136 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_138);
  Var_134 = mercury__string__f_43_43_2_f_0(Var_135, Var_136);
  SetupReturnCodeStr_45 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_134);
  Var_140 = mercury__string__f_43_43_2_f_0(SaveCodeStr_33, SetupReturnCodeStr_45);
  CreateSaveSetupReturnCodeStr_46 = mercury__string__f_43_43_2_f_0(CreateCodeStr_44, Var_140);
  Var_145 = mercury__string__f_43_43_2_f_0(CreateSaveSetupReturnCodeStr_46, (MR_String) "\t}\n");
  Var_143 = mercury__string__f_43_43_2_f_0((MR_String) ") {\n", Var_145);
  Var_142 = mercury__string__f_43_43_2_f_0((MR_String) "succeeded", Var_143);
  CondSaveCodeStr_47 = mercury__string__f_43_43_2_f_0((MR_String) "\tif (", Var_142);
  Var_150 = mercury__string__f_43_43_2_f_0(CondSaveCodeStr_47, AssignSuccessCodeStr_43);
  Var_149 = mercury__string__f_43_43_2_f_0(DuplCheckCodeStr_42, Var_150);
  Var_148 = mercury__string__f_43_43_2_f_0(LookupCodeStr_30, Var_149);
  Var_147 = mercury__string__f_43_43_2_f_0(GetCodeStr_41, Var_148);
  CodeStr_48 = mercury__string__f_43_43_2_f_0(LookupSaveDeclCodeStr_40, Var_147);
  ModuleInfo_49 = ((MR_Word) ((MR_hl_field(0, *STATE_VARIABLE_TableInfo_54, (MR_Integer) 0))));
  Var_151 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
  Var_154 = transform_hlds__table_gen__tabling_c_attributes_dupl_0_f_0();
  transform_hlds__table_gen__table_call_foreign_proc_11_p_0(ModuleInfo_49, (MR_String) "table_mmos_answer_is_not_duplicate_shortcut", Args_38, LookupForeignArgs_28, Var_151, (MR_Integer) 1, (MR_Integer) 2, Var_154, CodeStr_48, Context_20, &DuplicateCheckSaveGoal_50);
  {
    Var_156 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_156, 0) = ((MR_Box) (DuplicateCheckSaveGoal_50));
    MR_hl_field(1, Var_156, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_155 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), SavePrefixGoals_32, Var_156);
  *Goals_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), LookupPrefixGoals_29, Var_155);
}

static MR_String MR_CALL 
transform_hlds__table_gen__returning_generator_locn_0_f_0(void)
{
  return (MR_String) "MR_mmos_returning_generator";
}

static MR_String MR_CALL 
transform_hlds__table_gen__generator_name_0_f_0(void)
{
  return (MR_String) "generator";
}

static MR_Word MR_CALL 
transform_hlds__table_gen__generator_type_0_f_0(void)
{
  MR_Word Type_2;
  MR_Word TB_3;
  MR_Word Var_4;
  MR_Word Var_6;

  TB_3 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_6, 0) = ((MR_Box) (TB_3));
    MR_hl_field(1, Var_6, 1) = ((MR_Box) ((MR_String) "ml_generator"));
  }
  {
    Var_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_4, 0) = ((MR_Box) (Var_6));
    MR_hl_field(0, Var_4, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  parse_tree__prog_type__construct_type_3_p_0(Var_4, (MR_Word) ((MR_Unsigned) 0U), &Type_2);
  return Type_2;
}

static MR_Box MR_CALL 
transform_hlds__table_gen__generate_gen_proc_table_info_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_46;

  conv0_HeadVar__2_46 = transform_hlds__table_gen__IntroducedFrom__func__generate_gen_proc_table_info__2275__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_46));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__table_gen__generate_gen_proc_table_info_10_p_0(
  MR_Word TableInfo_11,
  MR_Word PredId_12,
  MR_Integer ProcId_13,
  MR_Word VarTable_14,
  MR_Word TabledMethod_15,
  MR_Word InputSteps_16,
  MR_Word MaybeOutputSteps_17,
  MR_Word InputVars_18,
  MR_Word OutputVars_19,
  MR_Word * ProcTableStructInfo_20)
{
  MR_Word ModuleInfo_21 = ((MR_Word) ((MR_hl_field(0, TableInfo_11, (MR_Integer) 0))));
  MR_Word PredInfo_22 = ((MR_Word) ((MR_hl_field(0, TableInfo_11, (MR_Integer) 1))));
  MR_Word ProcInfo_23 = ((MR_Word) ((MR_hl_field(0, TableInfo_11, (MR_Integer) 2))));
  MR_Word RTTIProcLabel_24;
  MR_Word TVarSet_25;
  MR_Word Context_26;
  MR_Word InOutHeadVars_27;
  MR_Word NumberedInOutHeadVars_28;
  MR_Word ArgInfos_29;
  MR_Word RttiVarMaps_30;
  MR_Word TableArgTypeInfo_31;
  MR_Integer NumInputs_32;
  MR_Integer NumOutputs_33;

  RTTIProcLabel_24 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_21, PredId_12, ProcId_13);
  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_22, &TVarSet_25);
  hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_23, &Context_26);
  InOutHeadVars_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_var_mode_method_0), InputVars_18, OutputVars_19);
  transform_hlds__table_gen__allocate_slot_numbers_3_p_0(InOutHeadVars_27, (MR_Integer) 1, &NumberedInOutHeadVars_28);
  ArgInfos_29 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[1]), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[15]), NumberedInOutHeadVars_28);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo_23, &RttiVarMaps_30);
  ll_backend__continuation_info__generate_table_arg_type_info_4_p_0(VarTable_14, RttiVarMaps_30, ArgInfos_29, &TableArgTypeInfo_31);
  NumInputs_32 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_var_mode_method_0), InputVars_18);
  NumOutputs_33 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_var_mode_method_0), OutputVars_19);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *ProcTableStructInfo_20 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (RTTIProcLabel_24));
    MR_hl_field(0, base, 1) = ((MR_Box) (TVarSet_25));
    MR_hl_field(0, base, 2) = ((MR_Box) (Context_26));
    MR_hl_field(0, base, 3) = ((MR_Box) (NumInputs_32));
    MR_hl_field(0, base, 4) = ((MR_Box) (NumOutputs_33));
    MR_hl_field(0, base, 5) = ((MR_Box) (InputSteps_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (MaybeOutputSteps_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (TableArgTypeInfo_31));
    MR_hl_field(0, base, 8) = ((MR_Box) (TabledMethod_15));
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
    MR_Word VarModes_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word VarModePos_10;
    MR_Word VarModePoss_11;
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer Var_13;

    Var_5 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 0))));
    Mode_6 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 1))));
    ArgMethod_7 = ((MR_Unsigned) ((MR_hl_field(0, Var_12, (MR_Integer) 2))) & (MR_Integer) 3);
    {
      VarModePos_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, VarModePos_10, 0) = ((MR_Box) (Var_5));
      MR_hl_field(0, VarModePos_10, 1) = ((MR_Box) (Mode_6));
      MR_hl_field(0, VarModePos_10, 2) = ((MR_Box) (Offset0_2));
      MR_hl_field(0, VarModePos_10, 3) = ((MR_Box) (ArgMethod_7));
    }
    Var_13 = (MR_Integer) ((MR_Unsigned) Offset0_2 + (MR_Unsigned) 1);
    transform_hlds__table_gen__allocate_slot_numbers_3_p_0(VarModes_8, Var_13, &VarModePoss_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (VarModePos_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (VarModePoss_11));
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
    MR_Word InputArgModes_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
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
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
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

    InputArg_9 = ((MR_Word) ((MR_hl_field(0, Var_29, (MR_Integer) 0))));
    Mode_10 = ((MR_Word) ((MR_hl_field(0, Var_29, (MR_Integer) 1))));
    InputVar_20 = ((MR_Word) ((MR_hl_field(0, InputArg_9, (MR_Integer) 0))));
    MaybeArgNameMode_21 = ((MR_Word) ((MR_hl_field(0, InputArg_9, (MR_Integer) 1))));
    Type_22 = ((MR_Word) ((MR_hl_field(0, InputArg_9, (MR_Integer) 2))));
    if ((MaybeArgNameMode_21 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.generate_save_input_vars_code\'/6", (MR_String) "no InputVarName");
        return;
      }
    else
    {
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(1, MaybeArgNameMode_21, (MR_Integer) 0))));

      InputVarName_24 = ((MR_String) ((MR_hl_field(0, Var_30, (MR_Integer) 0))));
    }
    check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_2, Mode_10, &InitInst_26, &_FinalInst_27);
    {
      PickupMode_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PickupMode_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, PickupMode_28, 1) = ((MR_Box) (InitInst_26));
    }
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_35, 0) = ((MR_Box) (InputVarName_24));
      MR_hl_field(0, Var_35, 1) = ((MR_Box) (PickupMode_28));
    }
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
    }
    {
      PickupArg_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PickupArg_14, 0) = ((MR_Box) (InputVar_20));
      MR_hl_field(0, PickupArg_14, 1) = ((MR_Box) (Var_34));
      MR_hl_field(0, PickupArg_14, 2) = ((MR_Box) (Type_22));
      MR_hl_field(0, PickupArg_14, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
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
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (PickupArg_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (PickupArgs_15));
    }
    *HeadVar__5_5 = mercury__string__f_43_43_2_f_0(SaveVarCode_16, SaveVarCodes_17);
    *HeadVar__6_6 = mercury__string__f_43_43_2_f_0(PickupVarCode_18, PickupVarCodes_19);
  }
}

static void MR_CALL 
transform_hlds__table_gen__create_new_mm_goal_16_p_0(
  MR_Word Detism_17,
  MR_Word OrigGoal_18,
  MR_Word Statistics_19,
  MR_Word PredId_20,
  MR_Integer ProcId_21,
  MR_Word HeadVars_22,
  MR_Word NumberedInputVars_23,
  MR_Word NumberedOutputVars_24,
  MR_Word STATE_VARIABLE_VarTable_0_59,
  MR_Word * STATE_VARIABLE_VarTable_60,
  MR_Word STATE_VARIABLE_TableInfo_0_61,
  MR_Word * STATE_VARIABLE_TableInfo_62,
  MR_Word * SubgoalVar_27,
  MR_Word * Goal_28,
  MR_Word * InputSteps_29,
  MR_Word * OutputSteps_30)
{
  MR_Word OrigNonLocals_31;
  MR_Word OrigGoalInfo_33;
  MR_Word OrigInstMapDelta_34;
  MR_Word Context_35;
  MR_Word ModuleInfo_36;
  MR_Integer BlockSize_37;
  MR_Word StatusVar_38;
  MR_Word LookUpGoal_39;
  MR_Word SaveAnswerGoals_40;
  MR_Word RestoreAllAnswerGoal_41;
  MR_Word SuspendGoal_42;
  MR_Word MainExpr_43;
  MR_Word MainNonLocals_44;
  MR_Word MainIMD0_45;
  MR_Word MainIMD_46;
  MR_Word MainGoalInfo_47;
  MR_Word MainGoal_48;
  MR_Word ResumeGoal0_49;
  MR_Word ResumeGoal_50;
  MR_Word InactiveExpr_51;
  MR_Word InactiveGoal_52;
  MR_Word SwitchArms_53;
  MR_Word SwitchExpr_54;
  MR_Word SwitchGoalInfo_55;
  MR_Word SwitchGoal_56;
  MR_Word GoalExpr_57;
  MR_Word GoalInfo_58;
  MR_Word STATE_VARIABLE_VarTable_63_63;
  MR_Word STATE_VARIABLE_TableInfo_64_64;
  MR_Word STATE_VARIABLE_VarTable_65_65;
  MR_Word STATE_VARIABLE_VarTable_67_67;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_89;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_95;
  MR_Word Var_101;
  MR_Word Var_102;
  MR_Word GoalInfo0_113;
  MR_Word Goal_116;
  MR_Word Rest_117;
  MR_Word GoalInfo_120;
  MR_Word IMD0_121;
  MR_Word IMD1_122;

  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_22, &OrigNonLocals_31);
  OrigGoalInfo_33 = ((MR_Word) ((MR_hl_field(0, OrigGoal_18, (MR_Integer) 1))));
  OrigInstMapDelta_34 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(OrigGoalInfo_33);
  Context_35 = hlds__hlds_goal__goal_info_get_context_1_f_0(OrigGoalInfo_33);
  ModuleInfo_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TableInfo_0_61, (MR_Integer) 0))));
  mercury__list__length_2_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), NumberedOutputVars_24, &BlockSize_37);
  transform_hlds__table_gen__generate_mm_call_table_lookup_goal_13_p_0(NumberedInputVars_23, PredId_20, ProcId_21, Statistics_19, Context_35, STATE_VARIABLE_VarTable_0_59, &STATE_VARIABLE_VarTable_63_63, STATE_VARIABLE_TableInfo_0_61, &STATE_VARIABLE_TableInfo_64_64, SubgoalVar_27, &StatusVar_38, &LookUpGoal_39, InputSteps_29);
  transform_hlds__table_gen__generate_mm_save_goals_13_p_0(NumberedOutputVars_24, *SubgoalVar_27, PredId_20, ProcId_21, BlockSize_37, Statistics_19, Context_35, STATE_VARIABLE_VarTable_63_63, &STATE_VARIABLE_VarTable_65_65, STATE_VARIABLE_TableInfo_64_64, STATE_VARIABLE_TableInfo_62, OutputSteps_30, &SaveAnswerGoals_40);
  transform_hlds__table_gen__generate_mm_restore_goal_9_p_0(Detism_17, NumberedOutputVars_24, OrigInstMapDelta_34, *SubgoalVar_27, Context_35, STATE_VARIABLE_VarTable_65_65, &STATE_VARIABLE_VarTable_67_67, *STATE_VARIABLE_TableInfo_62, &RestoreAllAnswerGoal_41);
  transform_hlds__table_gen__generate_mm_restore_or_suspend_goal_11_p_0((MR_String) "table_mm_suspend_consumer", (MR_Integer) 3, (MR_Integer) 2, NumberedOutputVars_24, OrigInstMapDelta_34, *SubgoalVar_27, Context_35, STATE_VARIABLE_VarTable_67_67, STATE_VARIABLE_VarTable_60, *STATE_VARIABLE_TableInfo_62, &SuspendGoal_42);
  {
    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_70, 0) = ((MR_Box) (OrigGoal_18));
    MR_hl_field(1, Var_70, 1) = ((MR_Box) (SaveAnswerGoals_40));
  }
  {
    MainExpr_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MainExpr_43, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, MainExpr_43, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MainExpr_43, 2) = ((MR_Box) (Var_70));
  }
  {
    Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_72, 0) = ((MR_Box) (StatusVar_38));
    MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_71, 0) = ((MR_Box) (*SubgoalVar_27));
    MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_72));
  }
  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_71, OrigNonLocals_31, &MainNonLocals_44);
  Goal_116 = ((MR_Word) ((MR_hl_field(1, Var_70, (MR_Integer) 0))));
  Rest_117 = ((MR_Word) ((MR_hl_field(1, Var_70, (MR_Integer) 1))));
  GoalInfo_120 = ((MR_Word) ((MR_hl_field(0, Goal_116, (MR_Integer) 1))));
  IMD0_121 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_120);
  transform_hlds__table_gen__create_instmap_delta_2_p_0(Rest_117, &IMD1_122);
  hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(IMD0_121, IMD1_122, (MR_Integer) 2, &MainIMD0_45);
  hlds__instmap__instmap_delta_restrict_3_p_0(MainNonLocals_44, MainIMD0_45, &MainIMD_46);
  hlds__hlds_goal__goal_info_init_6_p_0(MainNonLocals_44, MainIMD_46, (MR_Integer) 3, (MR_Integer) 2, Context_35, &GoalInfo0_113);
  hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 8, GoalInfo0_113, &MainGoalInfo_47);
  {
    MainGoal_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MainGoal_48, 0) = ((MR_Box) (MainExpr_43));
    MR_hl_field(0, MainGoal_48, 1) = ((MR_Box) (MainGoalInfo_47));
  }
  {
    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_78, 0) = ((MR_Box) (*SubgoalVar_27));
    MR_hl_field(1, Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_79 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
  transform_hlds__table_gen__table_plain_call_8_p_0(ModuleInfo_36, (MR_String) "table_mm_completion", Var_78, Var_79, (MR_Integer) 0, (MR_Integer) 2, Context_35, &ResumeGoal0_49);
  transform_hlds__table_gen__append_fail_2_p_0(ResumeGoal0_49, &ResumeGoal_50);
  {
    Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_84, 0) = ((MR_Box) (ResumeGoal_50));
    MR_hl_field(1, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_83, 0) = ((MR_Box) (MainGoal_48));
    MR_hl_field(1, Var_83, 1) = ((MR_Box) (Var_84));
  }
  {
    InactiveExpr_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, InactiveExpr_51, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, InactiveExpr_51, 1) = ((MR_Box) (Var_83));
  }
  {
    InactiveGoal_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InactiveGoal_52, 0) = ((MR_Box) (InactiveExpr_51));
    MR_hl_field(0, InactiveGoal_52, 1) = ((MR_Box) (MainGoalInfo_47));
  }
  Var_87 = transform_hlds__table_gen__mm_inactive_cons_id_0_f_0();
  {
    Var_86 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_86, 0) = ((MR_Box) (Var_87));
    MR_hl_field(0, Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_86, 2) = ((MR_Box) (InactiveGoal_52));
  }
  Var_91 = transform_hlds__table_gen__mm_active_cons_id_0_f_0();
  {
    Var_90 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_90, 0) = ((MR_Box) (Var_91));
    MR_hl_field(0, Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_90, 2) = ((MR_Box) (SuspendGoal_42));
  }
  Var_95 = transform_hlds__table_gen__mm_complete_cons_id_0_f_0();
  {
    Var_94 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_94, 0) = ((MR_Box) (Var_95));
    MR_hl_field(0, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_94, 2) = ((MR_Box) (RestoreAllAnswerGoal_41));
  }
  {
    Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_93, 0) = ((MR_Box) (Var_94));
    MR_hl_field(1, Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_89, 0) = ((MR_Box) (Var_90));
    MR_hl_field(1, Var_89, 1) = ((MR_Box) (Var_93));
  }
  {
    SwitchArms_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SwitchArms_53, 0) = ((MR_Box) (Var_86));
    MR_hl_field(1, SwitchArms_53, 1) = ((MR_Box) (Var_89));
  }
  {
    SwitchExpr_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, SwitchExpr_54, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, SwitchExpr_54, 1) = ((MR_Box) (StatusVar_38));
    MR_hl_field(3, SwitchExpr_54, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, SwitchExpr_54, 3) = ((MR_Box) (SwitchArms_53));
  }
  hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 8, MainGoalInfo_47, &SwitchGoalInfo_55);
  {
    SwitchGoal_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SwitchGoal_56, 0) = ((MR_Box) (SwitchExpr_54));
    MR_hl_field(0, SwitchGoal_56, 1) = ((MR_Box) (SwitchGoalInfo_55));
  }
  {
    Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_102, 0) = ((MR_Box) (SwitchGoal_56));
    MR_hl_field(1, Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_101, 0) = ((MR_Box) (LookUpGoal_39));
    MR_hl_field(1, Var_101, 1) = ((MR_Box) (Var_102));
  }
  {
    GoalExpr_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, GoalExpr_57, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, GoalExpr_57, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, GoalExpr_57, 2) = ((MR_Box) (Var_101));
  }
  transform_hlds__table_gen__goal_info_init_hide_6_p_0(OrigNonLocals_31, OrigInstMapDelta_34, (MR_Integer) 3, (MR_Integer) 2, Context_35, &GoalInfo_58);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_28 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_57));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_58));
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__mm_complete_cons_id_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word SymName_2;
  MR_Word TypeCtor_3;
  MR_Word Var_5;
  MR_Word TypeModule_7;
  MR_Word TypeSymName_8;

  Var_5 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    SymName_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_2, 0) = ((MR_Box) (Var_5));
    MR_hl_field(1, SymName_2, 1) = ((MR_Box) ((MR_String) "mm_complete"));
  }
  TypeModule_7 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    TypeSymName_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypeSymName_8, 0) = ((MR_Box) (TypeModule_7));
    MR_hl_field(1, TypeSymName_8, 1) = ((MR_Box) ((MR_String) "mm_status"));
  }
  {
    TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_3, 0) = ((MR_Box) (TypeSymName_8));
    MR_hl_field(0, TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    HeadVar__1_1 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, HeadVar__1_1, 1) = ((MR_Box) (SymName_2));
    MR_hl_field(3, HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(3, HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
  }
  return HeadVar__1_1;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__mm_active_cons_id_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word SymName_2;
  MR_Word TypeCtor_3;
  MR_Word Var_5;
  MR_Word TypeModule_7;
  MR_Word TypeSymName_8;

  Var_5 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    SymName_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_2, 0) = ((MR_Box) (Var_5));
    MR_hl_field(1, SymName_2, 1) = ((MR_Box) ((MR_String) "mm_active"));
  }
  TypeModule_7 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    TypeSymName_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypeSymName_8, 0) = ((MR_Box) (TypeModule_7));
    MR_hl_field(1, TypeSymName_8, 1) = ((MR_Box) ((MR_String) "mm_status"));
  }
  {
    TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_3, 0) = ((MR_Box) (TypeSymName_8));
    MR_hl_field(0, TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    HeadVar__1_1 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, HeadVar__1_1, 1) = ((MR_Box) (SymName_2));
    MR_hl_field(3, HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(3, HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
  }
  return HeadVar__1_1;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__mm_inactive_cons_id_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word SymName_2;
  MR_Word TypeCtor_3;
  MR_Word Var_5;
  MR_Word TypeModule_7;
  MR_Word TypeSymName_8;

  Var_5 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    SymName_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_2, 0) = ((MR_Box) (Var_5));
    MR_hl_field(1, SymName_2, 1) = ((MR_Box) ((MR_String) "mm_inactive"));
  }
  TypeModule_7 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    TypeSymName_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypeSymName_8, 0) = ((MR_Box) (TypeModule_7));
    MR_hl_field(1, TypeSymName_8, 1) = ((MR_Box) ((MR_String) "mm_status"));
  }
  {
    TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_3, 0) = ((MR_Box) (TypeSymName_8));
    MR_hl_field(0, TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    HeadVar__1_1 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, HeadVar__1_1, 1) = ((MR_Box) (SymName_2));
    MR_hl_field(3, HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(3, HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
  }
  return HeadVar__1_1;
}

static void MR_CALL 
transform_hlds__table_gen__append_fail_2_p_0(
  MR_Word Goal_3,
  MR_Word * GoalAndThenFail_4)
{
  MR_Word GoalInfo_6 = ((MR_Word) ((MR_hl_field(0, Goal_3, (MR_Integer) 1))));
  MR_Word NonLocals_7;
  MR_Word Context_8;
  MR_Word UnreachInstMapDelta_9;
  MR_Word ConjGoalInfo_10;
  MR_Word Var_13;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word GoalInfo0_19;

  NonLocals_7 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_6);
  Context_8 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_6);
  hlds__instmap__instmap_delta_init_unreachable_1_p_0(&UnreachInstMapDelta_9);
  hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_7, UnreachInstMapDelta_9, (MR_Integer) 7, (MR_Integer) 2, Context_8, &GoalInfo0_19);
  hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 8, GoalInfo0_19, &ConjGoalInfo_10);
  Var_17 = hlds__make_goal__fail_goal_0_f_0();
  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (Var_17));
    MR_hl_field(1, Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) (Goal_3));
    MR_hl_field(1, Var_15, 1) = ((MR_Box) (Var_16));
  }
  {
    Var_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_13, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_13, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_13, 2) = ((MR_Box) (Var_15));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *GoalAndThenFail_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 1) = ((MR_Box) (ConjGoalInfo_10));
  }
}

static void MR_CALL 
transform_hlds__table_gen__generate_mm_restore_goal_9_p_0(
  MR_Word Detism_10,
  MR_Word NumberedOutputVars_11,
  MR_Word OrigInstMapDelta_12,
  MR_Word SubgoalVar_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_VarTable_0_19,
  MR_Word * STATE_VARIABLE_VarTable_20,
  MR_Word TableInfo_16,
  MR_Word * Goal_17)
{
  MR_bool succeeded = (Detism_10 == (MR_Integer) 2);
  MR_String ReturnAllAns_18;

  if (succeeded)
    ReturnAllAns_18 = (MR_String) "table_mm_return_all_multi";
  else
  {
    succeeded = (Detism_10 == (MR_Integer) 3);
    if (succeeded)
      ReturnAllAns_18 = (MR_String) "table_mm_return_all_nondet";
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.generate_mm_restore_goal\'/9", (MR_String) "invalid determinism");
        return;
      }
  }
  transform_hlds__table_gen__generate_mm_restore_or_suspend_goal_11_p_0(ReturnAllAns_18, Detism_10, (MR_Integer) 1, NumberedOutputVars_11, OrigInstMapDelta_12, SubgoalVar_13, Context_14, STATE_VARIABLE_VarTable_0_19, STATE_VARIABLE_VarTable_20, TableInfo_16, Goal_17);
}

static MR_Box MR_CALL 
transform_hlds__table_gen__generate_mm_restore_or_suspend_goal_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_71;

  conv0_HeadVar__2_71 = transform_hlds__table_gen__IntroducedFrom__func__generate_mm_restore_or_suspend_goal__3302__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_71));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__table_gen__generate_mm_restore_or_suspend_goal_11_p_0(
  MR_String PredName_12,
  MR_Word Detism_13,
  MR_Word Purity_14,
  MR_Word NumberedOutputVars_15,
  MR_Word OrigInstMapDelta_16,
  MR_Word SubgoalVar_17,
  MR_Word Context_18,
  MR_Word STATE_VARIABLE_VarTable_0_37,
  MR_Word * STATE_VARIABLE_VarTable_38,
  MR_Word TableInfo_20,
  MR_Word * Goal_21)
{
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
  MR_Word ReturnAllGoal_33;
  MR_Word GoalExpr_34;
  MR_Word NonLocals_35;
  MR_Word GoalInfo_36;
  MR_Word Var_40;
  MR_Word STATE_VARIABLE_VarTable_42_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_56;
  MR_Word Var_59;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_64;
  MR_Word TB_74;
  MR_Word Var_75;
  MR_Word Var_77;
  MR_Word Entry_80;
  MR_Word ModuleInfo_81;
  MR_Word Globals_82;
  MR_Word TableDebug_83;
  MR_Word TB_87;
  MR_Word Var_88;
  MR_Word Var_90;
  MR_Word Attrs0_93;
  MR_Word Attrs1_94;
  MR_Word GoalInfo0_98;

  TB_74 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_77, 0) = ((MR_Box) (TB_74));
    MR_hl_field(1, Var_77, 1) = ((MR_Box) ((MR_String) "ml_answer_block"));
  }
  {
    Var_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_75, 0) = ((MR_Box) (Var_77));
    MR_hl_field(0, Var_75, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  parse_tree__prog_type__construct_type_3_p_0(Var_75, (MR_Word) ((MR_Unsigned) 0U), &Var_40);
  {
    Entry_80 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entry_80, 0) = ((MR_Box) ((MR_String) "AnswerBlock"));
    MR_hl_field(0, Entry_80, 1) = ((MR_Box) (Var_40));
    MR_hl_field(0, Entry_80, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  parse_tree__var_table__add_var_entry_4_p_0(Entry_80, &AnswerBlockVar_22, STATE_VARIABLE_VarTable_0_37, &STATE_VARIABLE_VarTable_42_42);
  ModuleInfo_23 = ((MR_Word) ((MR_hl_field(0, TableInfo_20, (MR_Integer) 0))));
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) (AnswerBlockVar_22));
    MR_hl_field(1, Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (SubgoalVar_17));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_45));
  }
  Var_44 = hlds__instmap__instmap_delta_bind_var_1_f_0(AnswerBlockVar_22);
  transform_hlds__table_gen__table_plain_call_8_p_0(ModuleInfo_23, PredName_12, Var_43, Var_44, Detism_13, Purity_14, Context_18, &ReturnAnswerBlocksGoal_24);
  ModuleInfo_81 = ((MR_Word) ((MR_hl_field(0, TableInfo_20, (MR_Integer) 0))));
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_81, &Globals_82);
  libs__globals__lookup_bool_option_3_p_0(Globals_82, (MR_Integer) 345, &TableDebug_83);
  switch (TableDebug_83) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      DebugArgStr_25 = (MR_String) "MR_FALSE";
      break;
    case (MR_Integer) 1:
      DebugArgStr_25 = (MR_String) "MR_TRUE";
      break;
  }
  transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_116_111_114_101_95_103_111_97_108_115_95_95_91_49_93_95_48_9_p_0(ModuleInfo_23, OrigInstMapDelta_16, DebugArgStr_25, NumberedOutputVars_15, &RestoreInstMapDeltaSrc_26, &RestoreArgs_27, &RestoreCodeStr_28, STATE_VARIABLE_VarTable_42_42, STATE_VARIABLE_VarTable_38);
  OutputVars_29 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), (MR_Word) (&transform_hlds__table_gen_scalar_common_1[2]), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[14]), NumberedOutputVars_15);
  Var_52 = parse_tree__prog_mode__in_mode_0_f_0();
  {
    Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_50, 0) = ((MR_Box) ((MR_String) "answerblock"));
    MR_hl_field(0, Var_50, 1) = ((MR_Box) (Var_52));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
  }
  TB_87 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_90, 0) = ((MR_Box) (TB_87));
    MR_hl_field(1, Var_90, 1) = ((MR_Box) ((MR_String) "ml_answer_block"));
  }
  {
    Var_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_88, 0) = ((MR_Box) (Var_90));
    MR_hl_field(0, Var_88, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  parse_tree__prog_type__construct_type_3_p_0(Var_88, (MR_Word) ((MR_Unsigned) 0U), &Var_53);
  {
    Arg_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Arg_30, 0) = ((MR_Box) (AnswerBlockVar_22));
    MR_hl_field(0, Arg_30, 1) = ((MR_Box) (Var_49));
    MR_hl_field(0, Arg_30, 2) = ((MR_Box) (Var_53));
    MR_hl_field(0, Arg_30, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Args_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Args_31, 0) = ((MR_Box) (Arg_30));
    MR_hl_field(1, Args_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_56 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(RestoreInstMapDeltaSrc_26);
  Attrs0_93 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
  parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, Attrs0_93, &Attrs1_94);
  parse_tree__prog_data_foreign__set_affects_liveness_3_p_0((MR_Integer) 1, Attrs1_94, &Var_59);
  transform_hlds__table_gen__table_call_foreign_proc_11_p_0(ModuleInfo_23, (MR_String) "table_mm_return_all_shortcut", Args_31, RestoreArgs_27, Var_56, (MR_Integer) 0, (MR_Integer) 1, Var_59, RestoreCodeStr_28, Context_18, &ReturnAllGoal_33);
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (ReturnAllGoal_33));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (ReturnAnswerBlocksGoal_24));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_62));
  }
  {
    GoalExpr_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, GoalExpr_34, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, GoalExpr_34, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, GoalExpr_34, 2) = ((MR_Box) (Var_61));
  }
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (SubgoalVar_17));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) (OutputVars_29));
  }
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_64, &NonLocals_35);
  hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_35, OrigInstMapDelta_16, Detism_13, Purity_14, Context_18, &GoalInfo0_98);
  hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 8, GoalInfo0_98, &GoalInfo_36);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_21 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_34));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_36));
  }
}

static void MR_CALL 
transform_hlds__table_gen__generate_mm_save_goals_13_p_0(
  MR_Word NumberedSaveVars_14,
  MR_Word SubgoalVar_15,
  MR_Word PredId_16,
  MR_Integer ProcId_17,
  MR_Integer BlockSize_18,
  MR_Word Statistics_19,
  MR_Word Context_20,
  MR_Word STATE_VARIABLE_VarTable_0_48,
  MR_Word * STATE_VARIABLE_VarTable_49,
  MR_Word STATE_VARIABLE_TableInfo_0_50,
  MR_Word * STATE_VARIABLE_TableInfo_51,
  MR_Word * OutputSteps_23,
  MR_Word * Goals_24)
{
  MR_Word ModuleInfo_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TableInfo_0_50, (MR_Integer) 0))));
  MR_String DebugArgStr_26;
  MR_Word LookupForeignArgs_27;
  MR_Word LookupPrefixGoals_28;
  MR_String LookupCodeStr_29;
  MR_String SaveDeclCode_36;
  MR_String CreateSaveCode_37;
  MR_String SubgoalName_38;
  MR_Word Args_39;
  MR_String LookupDeclCodeStr_41;
  MR_String GetCodeStr_42;
  MR_String DuplCheckCodeStr_43;
  MR_String CondSaveStr_44;
  MR_String AssignSuccessCodeStr_45;
  MR_String CodeStr_46;
  MR_Word DuplicateCheckSaveGoal_47;
  MR_Word STATE_VARIABLE_VarTable_52_52;
  MR_Word STATE_VARIABLE_TableInfo_53_53;
  MR_String Var_54;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_String Var_65;
  MR_String Var_66;
  MR_String Var_67;
  MR_String Var_69;
  MR_String Var_71;
  MR_String Var_72;
  MR_String Var_73;
  MR_String Var_75;
  MR_String Var_77;
  MR_String Var_80;
  MR_String Var_81;
  MR_String Var_83;
  MR_String Var_84;
  MR_String Var_86;
  MR_String Var_87;
  MR_String Var_89;
  MR_String Var_90;
  MR_String Var_93;
  MR_String Var_94;
  MR_String Var_96;
  MR_String Var_97;
  MR_String Var_99;
  MR_String Var_100;
  MR_String Var_101;
  MR_String Var_103;
  MR_String Var_106;
  MR_String Var_107;
  MR_String Var_109;
  MR_String Var_112;
  MR_String Var_113;
  MR_String Var_114;
  MR_String Var_116;
  MR_String Var_118;
  MR_String Var_119;
  MR_String Var_120;
  MR_String Var_121;
  MR_String Var_122;
  MR_Word Var_123;
  MR_Word Var_126;
  MR_Word Var_127;
  MR_Word _SaveArgs_34;
  MR_Word _SavePrefixGoals_35;

  DebugArgStr_26 = transform_hlds__table_gen__get_debug_arg_string_1_f_0(STATE_VARIABLE_TableInfo_0_50);
  transform_hlds__table_gen__generate_answer_table_lookup_goals_13_p_0(NumberedSaveVars_14, PredId_16, ProcId_17, Statistics_19, Context_20, STATE_VARIABLE_VarTable_0_48, &STATE_VARIABLE_VarTable_52_52, STATE_VARIABLE_TableInfo_0_50, &STATE_VARIABLE_TableInfo_53_53, OutputSteps_23, &LookupForeignArgs_27, &LookupPrefixGoals_28, &LookupCodeStr_29);
  Var_54 = transform_hlds__table_gen__subgoal_name_0_f_0();
  transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_108_108_95_115_97_118_101_95_103_111_97_108_115_95_95_91_49_93_95_48_13_p_0(NumberedSaveVars_14, Var_54, BlockSize_18, (MR_String) "MR_tbl_mm_create_answer_block", Context_20, STATE_VARIABLE_VarTable_52_52, STATE_VARIABLE_VarTable_49, STATE_VARIABLE_TableInfo_53_53, STATE_VARIABLE_TableInfo_51, &_SaveArgs_34, &_SavePrefixGoals_35, &SaveDeclCode_36, &CreateSaveCode_37);
  SubgoalName_38 = transform_hlds__table_gen__subgoal_name_0_f_0();
  Var_60 = parse_tree__prog_mode__in_mode_0_f_0();
  {
    Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_59, 0) = ((MR_Box) (SubgoalName_38));
    MR_hl_field(0, Var_59, 1) = ((MR_Box) (Var_60));
  }
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
  }
  Var_61 = transform_hlds__table_gen__subgoal_type_0_f_0();
  {
    Var_57 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_57, 0) = ((MR_Box) (SubgoalVar_15));
    MR_hl_field(0, Var_57, 1) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_57, 2) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_57, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Args_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Args_39, 0) = ((MR_Box) (Var_57));
    MR_hl_field(1, Args_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_66 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
  Var_72 = transform_hlds__table_gen__next_table_node_name_0_f_0();
  Var_77 = mercury__string__f_43_43_2_f_0((MR_String) "succeeded", (MR_String) ";\n");
  Var_75 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_bool ", Var_77);
  Var_73 = mercury__string__f_43_43_2_f_0((MR_String) ";\n", Var_75);
  Var_71 = mercury__string__f_43_43_2_f_0(Var_72, Var_73);
  Var_69 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_TrieNode ", Var_71);
  Var_67 = mercury__string__f_43_43_2_f_0((MR_String) ";\n", Var_69);
  Var_65 = mercury__string__f_43_43_2_f_0(Var_66, Var_67);
  LookupDeclCodeStr_41 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_TrieNode ", Var_65);
  Var_90 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
  Var_89 = mercury__string__f_43_43_2_f_0(Var_90, (MR_String) ");\n");
  Var_87 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_89);
  Var_86 = mercury__string__f_43_43_2_f_0(SubgoalName_38, Var_87);
  Var_84 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_86);
  Var_83 = mercury__string__f_43_43_2_f_0(DebugArgStr_26, Var_84);
  Var_81 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_83);
  Var_80 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_mm_get_answer_table", Var_81);
  GetCodeStr_42 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_80);
  Var_100 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
  Var_103 = mercury__string__f_43_43_2_f_0((MR_String) "succeeded", (MR_String) ");\n");
  Var_101 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_103);
  Var_99 = mercury__string__f_43_43_2_f_0(Var_100, Var_101);
  Var_97 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_99);
  Var_96 = mercury__string__f_43_43_2_f_0(DebugArgStr_26, Var_97);
  Var_94 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_96);
  Var_93 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_mm_answer_is_not_duplicate", Var_94);
  DuplCheckCodeStr_43 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_93);
  Var_109 = mercury__string__f_43_43_2_f_0(CreateSaveCode_37, (MR_String) "\t}\n");
  Var_107 = mercury__string__f_43_43_2_f_0((MR_String) ") {\n", Var_109);
  Var_106 = mercury__string__f_43_43_2_f_0((MR_String) "succeeded", Var_107);
  CondSaveStr_44 = mercury__string__f_43_43_2_f_0((MR_String) "\tif (", Var_106);
  Var_113 = transform_hlds__table_gen__success_indicator_name_0_f_0();
  Var_116 = mercury__string__f_43_43_2_f_0((MR_String) "succeeded", (MR_String) ";\n");
  Var_114 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_116);
  Var_112 = mercury__string__f_43_43_2_f_0(Var_113, Var_114);
  AssignSuccessCodeStr_45 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_112);
  Var_122 = mercury__string__f_43_43_2_f_0(CondSaveStr_44, AssignSuccessCodeStr_45);
  Var_121 = mercury__string__f_43_43_2_f_0(DuplCheckCodeStr_43, Var_122);
  Var_120 = mercury__string__f_43_43_2_f_0(LookupCodeStr_29, Var_121);
  Var_119 = mercury__string__f_43_43_2_f_0(GetCodeStr_42, Var_120);
  Var_118 = mercury__string__f_43_43_2_f_0(SaveDeclCode_36, Var_119);
  CodeStr_46 = mercury__string__f_43_43_2_f_0(LookupDeclCodeStr_41, Var_118);
  Var_123 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
  Var_126 = transform_hlds__table_gen__tabling_c_attributes_dupl_0_f_0();
  transform_hlds__table_gen__table_call_foreign_proc_11_p_0(ModuleInfo_25, (MR_String) "table_mm_answer_is_not_duplicate_shortcut", Args_39, LookupForeignArgs_27, Var_123, (MR_Integer) 1, (MR_Integer) 2, Var_126, CodeStr_46, Context_20, &DuplicateCheckSaveGoal_47);
  {
    Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_127, 0) = ((MR_Box) (DuplicateCheckSaveGoal_47));
    MR_hl_field(1, Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  *Goals_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), LookupPrefixGoals_28, Var_127);
}

static MR_String MR_CALL 
transform_hlds__table_gen__success_indicator_name_0_f_0(void)
{
  return (MR_String) "SUCCESS_INDICATOR";
}

static void MR_CALL 
transform_hlds__table_gen__generate_answer_table_lookup_goals_13_p_0(
  MR_Word NumberedVars_14,
  MR_Word PredId_15,
  MR_Integer ProcId_16,
  MR_Word Statistics_17,
  MR_Word Context_18,
  MR_Word STATE_VARIABLE_VarTable_0_34,
  MR_Word * STATE_VARIABLE_VarTable_35,
  MR_Word STATE_VARIABLE_TableInfo_0_36,
  MR_Word * STATE_VARIABLE_TableInfo_37,
  MR_Word * OutputSteps_21,
  MR_Word * ForeignArgs_22,
  MR_Word * PrefixGoals_23,
  MR_String * CodeStr_24)
{
  MR_Word MaybeStatsRef_25;
  MR_String DebugArgStr_26;
  MR_Word LookupArgs_28;
  MR_Word LookupPrefixGoals_29;
  MR_String LookupCodeStr_30;
  MR_Word StatsPrefixGoals_31;
  MR_Word StatsExtraArgs_32;
  MR_String StatsCodeStr_33;
  MR_Word STATE_VARIABLE_VarTable_39_39;
  MR_Word ModuleInfo_54;
  MR_Word Globals_55;
  MR_Word TableDebug_56;

  switch (Statistics_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      MaybeStatsRef_25 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 0:
      {
        MR_String StatsRef_46;
        MR_String Var_48;
        MR_String Var_50;
        MR_String Var_52;

        Var_52 = mercury__string__f_43_43_2_f_0((MR_String) "MR_TABLE_ANSWER_TABLE", (MR_String) "][MR_TABLE_STATS_CURR]");
        Var_50 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_52);
        Var_48 = mercury__string__f_43_43_2_f_0((MR_String) "->MR_pt_stats", Var_50);
        StatsRef_46 = mercury__string__f_43_43_2_f_0((MR_String) "proc_table_info", Var_48);
        {
          MaybeStatsRef_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeStatsRef_25, 0) = ((MR_Box) (StatsRef_46));
        }
      }
      break;
  }
  ModuleInfo_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TableInfo_0_36, (MR_Integer) 0))));
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_54, &Globals_55);
  libs__globals__lookup_bool_option_3_p_0(Globals_55, (MR_Integer) 345, &TableDebug_56);
  switch (TableDebug_56) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      DebugArgStr_26 = (MR_String) "MR_FALSE";
      break;
    case (MR_Integer) 1:
      DebugArgStr_26 = (MR_String) "MR_TRUE";
      break;
  }
  transform_hlds__table_gen__generate_table_lookup_goals_13_p_0(NumberedVars_14, MaybeStatsRef_25, DebugArgStr_26, (MR_String) "MR_FALSE", Context_18, STATE_VARIABLE_VarTable_0_34, &STATE_VARIABLE_VarTable_39_39, STATE_VARIABLE_TableInfo_0_36, STATE_VARIABLE_TableInfo_37, OutputSteps_21, &LookupArgs_28, &LookupPrefixGoals_29, &LookupCodeStr_30);
  transform_hlds__table_gen__maybe_record_overall_stats_11_p_0(PredId_15, ProcId_16, Context_18, (MR_String) "proc_table_info", (MR_String) "cur_node", MaybeStatsRef_25, STATE_VARIABLE_VarTable_39_39, STATE_VARIABLE_VarTable_35, &StatsPrefixGoals_31, &StatsExtraArgs_32, &StatsCodeStr_33);
  *CodeStr_24 = mercury__string__f_43_43_2_f_0(LookupCodeStr_30, StatsCodeStr_33);
  *ForeignArgs_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), StatsExtraArgs_32, LookupArgs_28);
  *PrefixGoals_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), StatsPrefixGoals_31, LookupPrefixGoals_29);
}

static MR_Box MR_CALL 
transform_hlds__table_gen__generate_mm_call_table_lookup_goal_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_134;

  conv0_HeadVar__2_134 = transform_hlds__table_gen__IntroducedFrom__func__generate_mm_call_table_lookup_goal__2453__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_134));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__table_gen__generate_mm_call_table_lookup_goal_13_p_0(
  MR_Word NumberedVars_14,
  MR_Word PredId_15,
  MR_Integer ProcId_16,
  MR_Word Statistics_17,
  MR_Word Context_18,
  MR_Word STATE_VARIABLE_VarTable_0_53,
  MR_Word * STATE_VARIABLE_VarTable_54,
  MR_Word STATE_VARIABLE_TableInfo_0_55,
  MR_Word * STATE_VARIABLE_TableInfo_56,
  MR_Word * SubgoalVar_21,
  MR_Word * StatusVar_22,
  MR_Word * Goal_23,
  MR_Word * Steps_24)
{
  MR_Word InfoArg_27;
  MR_Word LookupForeignArgs_28;
  MR_Word LookupPrefixGoals_29;
  MR_String LookupCodeStr_30;
  MR_Word BoundVars_34;
  MR_String SubgoalVarName_35;
  MR_String StatusVarName_36;
  MR_Word SubgoalArg_37;
  MR_Word StatusArg_38;
  MR_Word Args_39;
  MR_String LookupDeclStr_40;
  MR_String DebugArgStr_41;
  MR_String BackArgStr_42;
  MR_String SetupCodeStr_43;
  MR_String CodeStr_44;
  MR_Word ModuleInfo_45;
  MR_Word SetupGoal0_46;
  MR_Word SetupGoal_47;
  MR_Word LookupSetupGoals_48;
  MR_Word GoalExpr_49;
  MR_Word Vars_50;
  MR_Word NonLocals_51;
  MR_Word GoalInfo_52;
  MR_Word STATE_VARIABLE_VarTable_57_57;
  MR_Word Var_60;
  MR_Word STATE_VARIABLE_VarTable_62_62;
  MR_Word Var_64;
  MR_Word Var_67;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_String Var_83;
  MR_String Var_84;
  MR_String Var_85;
  MR_String Var_87;
  MR_String Var_89;
  MR_String Var_90;
  MR_String Var_93;
  MR_String Var_94;
  MR_String Var_96;
  MR_String Var_97;
  MR_String Var_99;
  MR_String Var_100;
  MR_String Var_102;
  MR_String Var_103;
  MR_String Var_104;
  MR_String Var_106;
  MR_String Var_107;
  MR_String Var_109;
  MR_String Var_111;
  MR_Word Var_112;
  MR_Word Var_115;
  MR_Word Var_116;
  MR_Word Var_120;
  MR_Word Var_121;
  MR_Word Var_122;
  MR_Word _TableTipVar_25;
  MR_Word _TableTipArg_26;
  MR_String _CallTableTipAssignStr_31;

  transform_hlds__table_gen__generate_call_table_lookup_goals_17_p_0(NumberedVars_14, PredId_15, ProcId_16, Statistics_17, Context_18, STATE_VARIABLE_VarTable_0_53, &STATE_VARIABLE_VarTable_57_57, STATE_VARIABLE_TableInfo_0_55, STATE_VARIABLE_TableInfo_56, Steps_24, &_TableTipVar_25, &_TableTipArg_26, &InfoArg_27, &LookupForeignArgs_28, &LookupPrefixGoals_29, &LookupCodeStr_30, &_CallTableTipAssignStr_31);
  Var_60 = transform_hlds__table_gen__subgoal_type_0_f_0();
  transform_hlds__table_gen__generate_new_table_var_6_p_0((MR_String) "Subgoal", Var_60, (MR_Integer) 1, STATE_VARIABLE_VarTable_57_57, &STATE_VARIABLE_VarTable_62_62, SubgoalVar_21);
  Var_64 = transform_hlds__table_gen__mm_status_type_0_f_0();
  transform_hlds__table_gen__generate_new_table_var_6_p_0((MR_String) "Status", Var_64, (MR_Integer) 1, STATE_VARIABLE_VarTable_62_62, STATE_VARIABLE_VarTable_54, StatusVar_22);
  {
    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_67, 0) = ((MR_Box) (*StatusVar_22));
    MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    BoundVars_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, BoundVars_34, 0) = ((MR_Box) (*SubgoalVar_21));
    MR_hl_field(1, BoundVars_34, 1) = ((MR_Box) (Var_67));
  }
  SubgoalVarName_35 = transform_hlds__table_gen__subgoal_name_0_f_0();
  StatusVarName_36 = transform_hlds__table_gen__status_name_0_f_0();
  Var_71 = parse_tree__prog_mode__out_mode_0_f_0();
  {
    Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_70, 0) = ((MR_Box) (SubgoalVarName_35));
    MR_hl_field(0, Var_70, 1) = ((MR_Box) (Var_71));
  }
  {
    Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
  }
  Var_72 = transform_hlds__table_gen__subgoal_type_0_f_0();
  {
    SubgoalArg_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SubgoalArg_37, 0) = ((MR_Box) (*SubgoalVar_21));
    MR_hl_field(0, SubgoalArg_37, 1) = ((MR_Box) (Var_69));
    MR_hl_field(0, SubgoalArg_37, 2) = ((MR_Box) (Var_72));
    MR_hl_field(0, SubgoalArg_37, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  Var_76 = parse_tree__prog_mode__out_mode_0_f_0();
  {
    Var_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_75, 0) = ((MR_Box) (StatusVarName_36));
    MR_hl_field(0, Var_75, 1) = ((MR_Box) (Var_76));
  }
  {
    Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_74, 0) = ((MR_Box) (Var_75));
  }
  Var_77 = transform_hlds__table_gen__mm_status_type_0_f_0();
  {
    StatusArg_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, StatusArg_38, 0) = ((MR_Box) (*StatusVar_22));
    MR_hl_field(0, StatusArg_38, 1) = ((MR_Box) (Var_74));
    MR_hl_field(0, StatusArg_38, 2) = ((MR_Box) (Var_77));
    MR_hl_field(0, StatusArg_38, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_80, 0) = ((MR_Box) (StatusArg_38));
    MR_hl_field(1, Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) (SubgoalArg_37));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_80));
  }
  {
    Args_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Args_39, 0) = ((MR_Box) (InfoArg_27));
    MR_hl_field(1, Args_39, 1) = ((MR_Box) (Var_79));
  }
  Var_84 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
  Var_90 = transform_hlds__table_gen__next_table_node_name_0_f_0();
  Var_89 = mercury__string__f_43_43_2_f_0(Var_90, (MR_String) ";\n\n");
  Var_87 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_TrieNode ", Var_89);
  Var_85 = mercury__string__f_43_43_2_f_0((MR_String) ";\n", Var_87);
  Var_83 = mercury__string__f_43_43_2_f_0(Var_84, Var_85);
  LookupDeclStr_40 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_TrieNode ", Var_83);
  DebugArgStr_41 = transform_hlds__table_gen__get_debug_arg_string_1_f_0(*STATE_VARIABLE_TableInfo_56);
  BackArgStr_42 = transform_hlds__table_gen__get_back_arg_string_1_f_0(*STATE_VARIABLE_TableInfo_56);
  Var_103 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
  Var_109 = mercury__string__f_43_43_2_f_0(StatusVarName_36, (MR_String) ");\n");
  Var_107 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_109);
  Var_106 = mercury__string__f_43_43_2_f_0(SubgoalVarName_35, Var_107);
  Var_104 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_106);
  Var_102 = mercury__string__f_43_43_2_f_0(Var_103, Var_104);
  Var_100 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_102);
  Var_99 = mercury__string__f_43_43_2_f_0(BackArgStr_42, Var_100);
  Var_97 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_99);
  Var_96 = mercury__string__f_43_43_2_f_0(DebugArgStr_41, Var_97);
  Var_94 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_96);
  Var_93 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_mm_setup", Var_94);
  SetupCodeStr_43 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_93);
  Var_111 = mercury__string__f_43_43_2_f_0(LookupCodeStr_30, SetupCodeStr_43);
  CodeStr_44 = mercury__string__f_43_43_2_f_0(LookupDeclStr_40, Var_111);
  ModuleInfo_45 = ((MR_Word) ((MR_hl_field(0, *STATE_VARIABLE_TableInfo_56, (MR_Integer) 0))));
  Var_112 = hlds__instmap__instmap_delta_bind_vars_1_f_0(BoundVars_34);
  Var_115 = transform_hlds__table_gen__tabling_c_attributes_no_dupl_0_f_0();
  transform_hlds__table_gen__table_call_foreign_proc_11_p_0(ModuleInfo_45, (MR_String) "table_mm_setup", Args_39, LookupForeignArgs_28, Var_112, (MR_Integer) 0, (MR_Integer) 2, Var_115, CodeStr_44, Context_18, &SetupGoal0_46);
  transform_hlds__table_gen__attach_call_table_tip_2_p_0(SetupGoal0_46, &SetupGoal_47);
  {
    Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_116, 0) = ((MR_Box) (SetupGoal_47));
    MR_hl_field(1, Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  LookupSetupGoals_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), LookupPrefixGoals_29, Var_116);
  {
    GoalExpr_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, GoalExpr_49, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, GoalExpr_49, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, GoalExpr_49, 2) = ((MR_Box) (LookupSetupGoals_48));
  }
  Vars_50 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), (MR_Word) (&transform_hlds__table_gen_scalar_common_1[2]), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[13]), NumberedVars_14);
  {
    Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_121, 0) = ((MR_Box) (*SubgoalVar_21));
    MR_hl_field(1, Var_121, 1) = ((MR_Box) (Vars_50));
  }
  {
    Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_120, 0) = ((MR_Box) (*StatusVar_22));
    MR_hl_field(1, Var_120, 1) = ((MR_Box) (Var_121));
  }
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_120, &NonLocals_51);
  Var_122 = hlds__instmap__instmap_delta_bind_vars_1_f_0(BoundVars_34);
  transform_hlds__table_gen__goal_info_init_hide_6_p_0(NonLocals_51, Var_122, (MR_Integer) 0, (MR_Integer) 2, Context_18, &GoalInfo_52);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_23 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_49));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_52));
  }
}

static MR_String MR_CALL 
transform_hlds__table_gen__status_name_0_f_0(void)
{
  return (MR_String) "status";
}

static MR_String MR_CALL 
transform_hlds__table_gen__subgoal_name_0_f_0(void)
{
  return (MR_String) "subgoal";
}

static MR_Word MR_CALL 
transform_hlds__table_gen__mm_status_type_0_f_0(void)
{
  MR_Word Type_2;
  MR_Word TB_3;
  MR_Word Var_4;
  MR_Word Var_6;

  TB_3 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_6, 0) = ((MR_Box) (TB_3));
    MR_hl_field(1, Var_6, 1) = ((MR_Box) ((MR_String) "mm_status"));
  }
  {
    Var_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_4, 0) = ((MR_Box) (Var_6));
    MR_hl_field(0, Var_4, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  parse_tree__prog_type__construct_type_3_p_0(Var_4, (MR_Word) ((MR_Unsigned) 0U), &Type_2);
  return Type_2;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__subgoal_type_0_f_0(void)
{
  MR_Word Type_2;
  MR_Word TB_3;
  MR_Word Var_4;
  MR_Word Var_6;

  TB_3 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_6, 0) = ((MR_Box) (TB_3));
    MR_hl_field(1, Var_6, 1) = ((MR_Box) ((MR_String) "ml_subgoal"));
  }
  {
    Var_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_4, 0) = ((MR_Box) (Var_6));
    MR_hl_field(0, Var_4, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  parse_tree__prog_type__construct_type_3_p_0(Var_4, (MR_Word) ((MR_Unsigned) 0U), &Type_2);
  return Type_2;
}

static MR_Box MR_CALL 
transform_hlds__table_gen__create_new_io_goal_15_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__2_2;

  conv3_HeadVar__2_2 = transform_hlds__table_gen__project_out_arg_method_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
transform_hlds__table_gen__create_new_io_goal_15_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_308;

  conv2_HeadVar__2_308 = transform_hlds__table_gen__IntroducedFrom__func__create_new_io_goal__1521__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_308));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
transform_hlds__table_gen__create_new_io_goal_15_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__table_gen__IntroducedFrom__pred__create_new_io_goal__1514__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
transform_hlds__table_gen__create_new_io_goal_15_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_301;

  conv1_HeadVar__2_301 = transform_hlds__table_gen__IntroducedFrom__func__create_new_io_goal__1513__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_301));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
transform_hlds__table_gen__create_new_io_goal_15_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = transform_hlds__table_gen__project_out_arg_method_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
transform_hlds__table_gen__create_new_io_goal_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__table_gen__var_mode_is_io_state_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__table_gen__create_new_io_goal_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__table_gen__var_mode_pos_is_io_state_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__table_gen__create_new_io_goal_15_p_0(
  MR_Word OrigGoal_16,
  MR_Word TableIoEntryKind_17,
  MR_Word Unitize_18,
  MR_Word TableIoStates_19,
  MR_Word PredId_20,
  MR_Integer ProcId_21,
  MR_Word HeadVarModes_22,
  MR_Word OrigInputVars_23,
  MR_Word OrigOutputVars_24,
  MR_Word STATE_VARIABLE_VarTable_0_112,
  MR_Word * STATE_VARIABLE_VarTable_113,
  MR_Word STATE_VARIABLE_TableInfo_0_114,
  MR_Word * STATE_VARIABLE_TableInfo_115,
  MR_Word * Goal_27,
  MR_Word * MaybeProcTableIOInfo_28)
{
  MR_bool succeeded;
  MR_Word OrigGoalInfo_30 = ((MR_Word) ((MR_hl_field(0, OrigGoal_16, (MR_Integer) 1))));
  MR_Word ModuleInfo0_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TableInfo_0_114, (MR_Integer) 0))));
  MR_Word PredInfo_32;
  MR_Word Markers_33;
  MR_Word ModuleInfo_35;
  MR_Word NewGoal_36;
  MR_Word OrigNonLocals_37;
  MR_Word Context_38;
  MR_Word IoStateAssignToVars_39;
  MR_Word IoStateAssignFromVars_40;
  MR_Word SavedOutputVars_41;
  MR_Word SavedHeadVars_42;
  MR_Word TableVar_46;
  MR_Word CounterVar_47;
  MR_Word StartVar_48;
  MR_Word InRangeGoal_49;
  MR_Word TipVar_50;
  MR_Word LookupGoal_51;
  MR_Word OccurredGoal_52;
  MR_Word TableIoEntryDescGoal_55;
  MR_Word NumberedSaveVars_58;
  MR_Word NumberedRestoreVars_61;
  MR_Integer BlockSize_67;
  MR_Word OrigInstMapDelta_68;
  MR_Word RestoreAnswerGoal0_69;
  MR_Word RestoreAnswerGoal_70;
  MR_Word SaveAnswerGoals_84;
  MR_Word CallSaveAnswerGoalList_85;
  MR_Word CallSaveAnswerGoalExpr_89;
  MR_Word CallSaveAnswerInstMapDelta0_90;
  MR_Word CallSaveAnswerNonLocals_91;
  MR_Word CallSaveAnswerInstMapDelta_92;
  MR_Word CallSaveAnswerGoalInfo0_93;
  MR_Word CallSaveAnswerGoalInfo_94;
  MR_Word CallSaveAnswerGoal_95;
  MR_Word GenIfNecGoalExpr_96;
  MR_Word GenIfNecInstMapDelta0_97;
  MR_Word GenIfNecNonLocals_98;
  MR_Word GenIfNecInstMapDelta_99;
  MR_Word GenIfNecGoalInfo_100;
  MR_Word GenIfNecGoal_101;
  MR_Word CheckAndGenAnswerGoalExpr_102;
  MR_Word CheckAndGenAnswerInstMapDelta0_103;
  MR_Word CheckAndGenAnswerNonLocals_104;
  MR_Word CheckAndGenAnswerInstMapDelta_105;
  MR_Word CheckAndGenAnswerGoalInfo_106;
  MR_Word CheckAndGenAnswerGoal_107;
  MR_Word BodyGoalExpr_108;
  MR_Word BodyInstMapDelta0_109;
  MR_Word BodyInstMapDelta_110;
  MR_Word BodyGoalInfo_111;
  MR_Word STATE_VARIABLE_TableInfo_117_117;
  MR_Word Var_123;
  MR_Word STATE_VARIABLE_VarTable_125_125;
  MR_Word Var_127;
  MR_Word STATE_VARIABLE_VarTable_129_129;
  MR_Word Var_131;
  MR_Word STATE_VARIABLE_VarTable_133_133;
  MR_Word Var_135;
  MR_Word Var_136;
  MR_Word Var_139;
  MR_Word Var_140;
  MR_Word Var_147;
  MR_Word STATE_VARIABLE_VarTable_149_149;
  MR_Word Var_151;
  MR_Word Var_152;
  MR_Word Var_155;
  MR_Word Var_156;
  MR_Word Var_157;
  MR_Word Var_161;
  MR_Word STATE_VARIABLE_VarTable_169_169;
  MR_Word STATE_VARIABLE_VarTable_193_193;
  MR_Word STATE_VARIABLE_VarTable_228_228;
  MR_Word Var_255;
  MR_Word Var_256;
  MR_Word Var_257;
  MR_Word Var_262;
  MR_Word Var_263;
  MR_Word Var_275;
  MR_Word Var_276;
  MR_Word Var_277;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo0_31, PredId_20, &PredInfo_32);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_32, &Markers_33);
  succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_33, (MR_Integer) 8);
  if (succeeded)
  {
    MR_Word CallExpr_34;
    MR_Word Var_288;
    MR_Word Var_289;

    transform_hlds__table_gen__clone_proc_and_create_call_6_p_0(PredId_20, PredInfo_32, ProcId_21, &CallExpr_34, ModuleInfo0_31, &ModuleInfo_35);
    {
      NewGoal_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, NewGoal_36, 0) = ((MR_Box) (CallExpr_34));
      MR_hl_field(0, NewGoal_36, 1) = ((MR_Box) (OrigGoalInfo_30));
    }
    Var_288 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TableInfo_0_114, (MR_Integer) 1))));
    Var_289 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TableInfo_0_114, (MR_Integer) 2))));
    {
      STATE_VARIABLE_TableInfo_117_117 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_TableInfo_117_117, 0) = ((MR_Box) (ModuleInfo_35));
      MR_hl_field(0, STATE_VARIABLE_TableInfo_117_117, 1) = ((MR_Box) (Var_288));
      MR_hl_field(0, STATE_VARIABLE_TableInfo_117_117, 2) = ((MR_Box) (Var_289));
    }
  }
  else
  {
    NewGoal_36 = OrigGoal_16;
    ModuleInfo_35 = ModuleInfo0_31;
    STATE_VARIABLE_TableInfo_117_117 = STATE_VARIABLE_TableInfo_0_114;
  }
  OrigNonLocals_37 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(OrigGoalInfo_30);
  Context_38 = hlds__hlds_goal__goal_info_get_context_1_f_0(OrigGoalInfo_30);
  switch (TableIoStates_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word MisNumberedSavedOutputVars_43;
        MR_Word Var_118;
        MR_Word Var_121;
        MR_Word _MisNumberedSavedInputVars_44;
        MR_Word Var_45;

        {
          Var_118 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_118, 0) = ((MR_Box) (&transform_hlds__table_gen_scalar_common_6[1]));
          MR_hl_field(0, Var_118, 1) = ((MR_Box) (transform_hlds__table_gen__create_new_io_goal_15_p_0_1));
          MR_hl_field(0, Var_118, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_118, 3) = ((MR_Box) (STATE_VARIABLE_VarTable_0_112));
        }
        mercury__list__filter_4_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), Var_118, OrigOutputVars_24, &IoStateAssignToVars_39, &MisNumberedSavedOutputVars_43);
        transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_108_108_111_99_97_116_101_95_115_108_111_116_95_110_117_109_98_101_114_115_95_95_91_49_93_95_48_3_p_0(MisNumberedSavedOutputVars_43, (MR_Integer) 0, &SavedOutputVars_41);
        mercury__list__filter_4_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), Var_118, OrigInputVars_23, &IoStateAssignFromVars_40, &_MisNumberedSavedInputVars_44);
        {
          Var_121 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_121, 0) = ((MR_Box) (&transform_hlds__table_gen_scalar_common_6[2]));
          MR_hl_field(0, Var_121, 1) = ((MR_Box) (transform_hlds__table_gen__create_new_io_goal_15_p_0_2));
          MR_hl_field(0, Var_121, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_121, 3) = ((MR_Box) (STATE_VARIABLE_VarTable_0_112));
        }
        mercury__list__filter_4_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_2[0]), Var_121, HeadVarModes_22, &Var_45, &SavedHeadVars_42);
      }
      break;
    case (MR_Integer) 1:
      {
        IoStateAssignToVars_39 = (MR_Word) ((MR_Unsigned) 0U);
        IoStateAssignFromVars_40 = (MR_Word) ((MR_Unsigned) 0U);
        SavedOutputVars_41 = OrigOutputVars_24;
        SavedHeadVars_42 = HeadVarModes_22;
      }
      break;
  }
  Var_123 = transform_hlds__table_gen__trie_node_type_0_f_0();
  transform_hlds__table_gen__generate_new_table_var_6_p_0((MR_String) "TableVar", Var_123, (MR_Integer) 1, STATE_VARIABLE_VarTable_0_112, &STATE_VARIABLE_VarTable_125_125, &TableVar_46);
  Var_127 = parse_tree__builtin_lib_types__int_type_0_f_0();
  transform_hlds__table_gen__generate_new_table_var_6_p_0((MR_String) "CounterVar", Var_127, (MR_Integer) 1, STATE_VARIABLE_VarTable_125_125, &STATE_VARIABLE_VarTable_129_129, &CounterVar_47);
  Var_131 = parse_tree__builtin_lib_types__int_type_0_f_0();
  transform_hlds__table_gen__generate_new_table_var_6_p_0((MR_String) "StartVar", Var_131, (MR_Integer) 1, STATE_VARIABLE_VarTable_129_129, &STATE_VARIABLE_VarTable_133_133, &StartVar_48);
  {
    Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_140, 0) = ((MR_Box) (StartVar_48));
    MR_hl_field(1, Var_140, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_139, 0) = ((MR_Box) (CounterVar_47));
    MR_hl_field(1, Var_139, 1) = ((MR_Box) (Var_140));
  }
  {
    Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_135, 0) = ((MR_Box) (TableVar_46));
    MR_hl_field(1, Var_135, 1) = ((MR_Box) (Var_139));
  }
  Var_136 = hlds__instmap__instmap_delta_bind_vars_1_f_0(Var_135);
  transform_hlds__table_gen__table_plain_call_8_p_0(ModuleInfo_35, (MR_String) "table_io_in_range", Var_135, Var_136, (MR_Integer) 1, (MR_Integer) 2, Context_38, &InRangeGoal_49);
  Var_147 = transform_hlds__table_gen__trie_node_type_0_f_0();
  transform_hlds__table_gen__generate_new_table_var_6_p_0((MR_String) "TipVar", Var_147, (MR_Integer) 1, STATE_VARIABLE_VarTable_133_133, &STATE_VARIABLE_VarTable_149_149, &TipVar_50);
  {
    Var_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_157, 0) = ((MR_Box) (TipVar_50));
    MR_hl_field(1, Var_157, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_156 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_156, 0) = ((MR_Box) (CounterVar_47));
    MR_hl_field(1, Var_156, 1) = ((MR_Box) (Var_157));
  }
  {
    Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_155, 0) = ((MR_Box) (StartVar_48));
    MR_hl_field(1, Var_155, 1) = ((MR_Box) (Var_156));
  }
  {
    Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_151, 0) = ((MR_Box) (TableVar_46));
    MR_hl_field(1, Var_151, 1) = ((MR_Box) (Var_155));
  }
  Var_152 = hlds__instmap__instmap_delta_bind_var_1_f_0(TipVar_50);
  transform_hlds__table_gen__table_plain_call_8_p_0(ModuleInfo_35, (MR_String) "table_lookup_insert_start_int", Var_151, Var_152, (MR_Integer) 0, (MR_Integer) 2, Context_38, &LookupGoal_51);
  Var_161 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
  transform_hlds__table_gen__table_plain_call_8_p_0(ModuleInfo_35, (MR_String) "table_io_has_occurred", Var_157, Var_161, (MR_Integer) 1, (MR_Integer) 2, Context_38, &OccurredGoal_52);
  switch (TableIoEntryKind_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        TableIoEntryDescGoal_55 = hlds__make_goal__true_goal_0_f_0();
        NumberedRestoreVars_61 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), (MR_Word) (&transform_hlds__table_gen_scalar_common_1[4]), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[9]), SavedOutputVars_41);
        NumberedSaveVars_58 = NumberedRestoreVars_61;
        *MaybeProcTableIOInfo_28 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_VarTable_169_169 = STATE_VARIABLE_VarTable_149_149;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ShroudedPredProcId_53;
        MR_Word TableIoEntryConsId_54;
        MR_Word TableIoEntryDescPtrVar_56;
        MR_Word NumberedSavedHeadVars_57;
        MR_Word UnnumberedSavedOutputVars_59;
        MR_Word ProcInfo0_62;
        MR_Word RttiVarMaps_63;
        MR_Word TableArgTypeInfo_64;
        MR_Word ProcTableIOInfo_65;
        MR_Word Var_165;
        MR_Word Var_166;
        MR_Word Var_171;
        MR_Word Var_172;
        MR_Word Var_176;
        MR_Word Var_177;
        MR_Word Var_179;

        {
          Var_165 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_165, 0) = ((MR_Box) (PredId_20));
          MR_hl_field(0, Var_165, 1) = ((MR_Box) (ProcId_21));
        }
        ShroudedPredProcId_53 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(Var_165);
        {
          TableIoEntryConsId_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, TableIoEntryConsId_54, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, TableIoEntryConsId_54, 1) = ((MR_Box) (ShroudedPredProcId_53));
        }
        Var_166 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
        hlds__make_goal__make_const_construction_alloc_8_p_0(TableIoEntryConsId_54, Var_166, (MR_Integer) 1, (MR_String) "TableIoEntryDescPtr", &TableIoEntryDescGoal_55, &TableIoEntryDescPtrVar_56, STATE_VARIABLE_VarTable_149_149, &STATE_VARIABLE_VarTable_169_169);
        transform_hlds__table_gen__allocate_plain_slot_numbers_3_p_0(SavedHeadVars_42, (MR_Integer) 1, &NumberedSavedHeadVars_57);
        Var_172 = parse_tree__prog_mode__in_mode_0_f_0();
        {
          Var_171 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_171, 0) = ((MR_Box) (TableIoEntryDescPtrVar_56));
          MR_hl_field(0, Var_171, 1) = ((MR_Box) (Var_172));
          MR_hl_field(0, Var_171, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(0, Var_171, 3) = NULL;
        }
        {
          NumberedSaveVars_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, NumberedSaveVars_58, 0) = ((MR_Box) (Var_171));
          MR_hl_field(1, NumberedSaveVars_58, 1) = ((MR_Box) (NumberedSavedHeadVars_57));
        }
        UnnumberedSavedOutputVars_59 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), (MR_Word) (&transform_hlds__table_gen_scalar_common_1[2]), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[10]), SavedOutputVars_41);
        {
          Var_176 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_176, 0) = ((MR_Box) (&transform_hlds__table_gen_scalar_common_6[4]));
          MR_hl_field(0, Var_176, 1) = ((MR_Box) (transform_hlds__table_gen__create_new_io_goal_15_p_0_5));
          MR_hl_field(0, Var_176, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_176, 3) = ((MR_Box) (UnnumberedSavedOutputVars_59));
        }
        mercury__list__filter_3_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[4]), Var_176, NumberedSaveVars_58, &NumberedRestoreVars_61);
        ProcInfo0_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TableInfo_117_117, (MR_Integer) 2))));
        hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo0_62, &RttiVarMaps_63);
        Var_177 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[4]), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[1]), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[11]), NumberedSavedHeadVars_57);
        ll_backend__continuation_info__generate_table_arg_type_info_4_p_0(STATE_VARIABLE_VarTable_169_169, RttiVarMaps_63, Var_177, &TableArgTypeInfo_64);
        {
          Var_179 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_179, 0) = ((MR_Box) (TableArgTypeInfo_64));
        }
        ProcTableIOInfo_65 = (MR_Word) (Var_179);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeProcTableIOInfo_28 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ProcTableIOInfo_65));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word NumberedRestoreVars0_66;
        MR_Word Var_180;
        MR_Word Var_181;
        MR_Word Var_187;
        MR_Word Var_188;
        MR_Word ShroudedPredProcId_281;
        MR_Word TableIoEntryConsId_282;
        MR_Word TableIoEntryDescPtrVar_283;

        {
          Var_180 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_180, 0) = ((MR_Box) (PredId_20));
          MR_hl_field(0, Var_180, 1) = ((MR_Box) (ProcId_21));
        }
        ShroudedPredProcId_281 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(Var_180);
        {
          TableIoEntryConsId_282 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, TableIoEntryConsId_282, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, TableIoEntryConsId_282, 1) = ((MR_Box) (ShroudedPredProcId_281));
        }
        Var_181 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
        hlds__make_goal__make_const_construction_alloc_8_p_0(TableIoEntryConsId_282, Var_181, (MR_Integer) 1, (MR_String) "TableIoEntryDescPtr", &TableIoEntryDescGoal_55, &TableIoEntryDescPtrVar_283, STATE_VARIABLE_VarTable_149_149, &STATE_VARIABLE_VarTable_169_169);
        NumberedRestoreVars0_66 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), (MR_Word) (&transform_hlds__table_gen_scalar_common_1[4]), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[12]), SavedOutputVars_41);
        transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_108_108_111_99_97_116_101_95_115_108_111_116_95_110_117_109_98_101_114_115_95_95_91_49_93_95_48_3_p_0(NumberedRestoreVars0_66, (MR_Integer) 1, &NumberedRestoreVars_61);
        Var_188 = parse_tree__prog_mode__in_mode_0_f_0();
        {
          Var_187 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_187, 0) = ((MR_Box) (TableIoEntryDescPtrVar_283));
          MR_hl_field(0, Var_187, 1) = ((MR_Box) (Var_188));
          MR_hl_field(0, Var_187, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(0, Var_187, 3) = NULL;
        }
        {
          NumberedSaveVars_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, NumberedSaveVars_58, 0) = ((MR_Box) (Var_187));
          MR_hl_field(1, NumberedSaveVars_58, 1) = ((MR_Box) (NumberedRestoreVars_61));
        }
        *MaybeProcTableIOInfo_28 = (MR_Word) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_3[5]));
      }
      break;
  }
  mercury__list__length_2_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[4]), NumberedSaveVars_58, &BlockSize_67);
  OrigInstMapDelta_68 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(OrigGoalInfo_30);
  transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_101_109_111_95_114_101_115_116_111_114_101_95_103_111_97_108_95_95_91_49_93_95_48_8_p_0(NumberedRestoreVars_61, OrigInstMapDelta_68, TipVar_50, Context_38, STATE_VARIABLE_VarTable_169_169, &STATE_VARIABLE_VarTable_193_193, STATE_VARIABLE_TableInfo_117_117, &RestoreAnswerGoal0_69);
  switch (TableIoStates_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word IoStateAssignFromVar_73;
        MR_Word IoStateAssignToVar_74;
        MR_Word IoStateAssignGoal_75;
        MR_Word RestoreAnswerGoalExpr_76;
        MR_Word RestoreAnswerInstMapDelta0_77;
        MR_Word RestoreAnswerGoal0Info_79;
        MR_Word RestoreAnswer0NonLocals_80;
        MR_Word RestoreAnswerNonLocals_81;
        MR_Word RestoreAnswerInstMapDelta_82;
        MR_Word RestoreAnswerGoalInfo_83;
        MR_Word Var_199;
        MR_Word Var_200;
        MR_Word Var_203;
        MR_Word Var_205;
        MR_Word Var_206;
        MR_Word Var_210;
        MR_Word Var_211;
        MR_Word Var_217;
        MR_Word Var_218;
        MR_Word IoStateAssignFromVarPrime_71;
        MR_Word IoStateAssignToVarPrime_72;
        MR_Word Var_194;
        MR_Word Var_195;

        succeeded = (IoStateAssignFromVars_40 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          IoStateAssignFromVarPrime_71 = ((MR_Word) ((MR_hl_field(1, IoStateAssignFromVars_40, (MR_Integer) 0))));
          Var_194 = ((MR_Word) ((MR_hl_field(1, IoStateAssignFromVars_40, (MR_Integer) 1))));
          succeeded = (Var_194 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (IoStateAssignToVars_39 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              IoStateAssignToVarPrime_72 = ((MR_Word) ((MR_hl_field(1, IoStateAssignToVars_39, (MR_Integer) 0))));
              Var_195 = ((MR_Word) ((MR_hl_field(1, IoStateAssignToVars_39, (MR_Integer) 1))));
              succeeded = (Var_195 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
        if (succeeded)
        {
          IoStateAssignFromVar_73 = transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_111_106_101_99_116_95_118_97_114_95_95_91_49_93_95_48_1_f_0(IoStateAssignFromVarPrime_71);
          IoStateAssignToVar_74 = transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_111_106_101_99_116_95_118_97_114_95_95_91_49_93_95_48_1_f_0(IoStateAssignToVarPrime_72);
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.create_new_io_goal\'/15", (MR_String) "one in / one out violation");
            return;
          }
        {
          Var_203 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_203, 0) = ((MR_Box) (IoStateAssignToVar_74));
          MR_hl_field(1, Var_203, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_199 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_199, 0) = ((MR_Box) (IoStateAssignFromVar_73));
          MR_hl_field(1, Var_199, 1) = ((MR_Box) (Var_203));
        }
        {
          Var_206 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_206, 0) = ((MR_Box) (IoStateAssignFromVar_73));
          MR_hl_field(0, Var_206, 1) = ((MR_Box) (MR_mkword(3, &transform_hlds__table_gen_scalar_common_2[4])));
        }
        {
          Var_211 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_211, 0) = ((MR_Box) (IoStateAssignToVar_74));
          MR_hl_field(0, Var_211, 1) = ((MR_Box) (MR_mkword(3, &transform_hlds__table_gen_scalar_common_2[5])));
        }
        {
          Var_210 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_210, 0) = ((MR_Box) (Var_211));
          MR_hl_field(1, Var_210, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_205 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_205, 0) = ((MR_Box) (Var_206));
          MR_hl_field(1, Var_205, 1) = ((MR_Box) (Var_210));
        }
        Var_200 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_205);
        transform_hlds__table_gen__table_plain_call_8_p_0(ModuleInfo_35, (MR_String) "table_io_copy_io_state", Var_199, Var_200, (MR_Integer) 0, (MR_Integer) 0, Context_38, &IoStateAssignGoal_75);
        {
          Var_218 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_218, 0) = ((MR_Box) (IoStateAssignGoal_75));
          MR_hl_field(1, Var_218, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_217 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_217, 0) = ((MR_Box) (RestoreAnswerGoal0_69));
          MR_hl_field(1, Var_217, 1) = ((MR_Box) (Var_218));
        }
        {
          RestoreAnswerGoalExpr_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, RestoreAnswerGoalExpr_76, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, RestoreAnswerGoalExpr_76, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, RestoreAnswerGoalExpr_76, 2) = ((MR_Box) (Var_217));
        }
        transform_hlds__table_gen__create_instmap_delta_2_p_0(Var_217, &RestoreAnswerInstMapDelta0_77);
        RestoreAnswerGoal0Info_79 = ((MR_Word) ((MR_hl_field(0, RestoreAnswerGoal0_69, (MR_Integer) 1))));
        RestoreAnswer0NonLocals_80 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(RestoreAnswerGoal0Info_79);
        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_199, RestoreAnswer0NonLocals_80, &RestoreAnswerNonLocals_81);
        hlds__instmap__instmap_delta_restrict_3_p_0(RestoreAnswerNonLocals_81, RestoreAnswerInstMapDelta0_77, &RestoreAnswerInstMapDelta_82);
        transform_hlds__table_gen__goal_info_init_hide_6_p_0(RestoreAnswerNonLocals_81, RestoreAnswerInstMapDelta_82, (MR_Integer) 0, (MR_Integer) 1, Context_38, &RestoreAnswerGoalInfo_83);
        {
          RestoreAnswerGoal_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, RestoreAnswerGoal_70, 0) = ((MR_Box) (RestoreAnswerGoalExpr_76));
          MR_hl_field(0, RestoreAnswerGoal_70, 1) = ((MR_Box) (RestoreAnswerGoalInfo_83));
        }
      }
      break;
    case (MR_Integer) 1:
      RestoreAnswerGoal_70 = RestoreAnswerGoal0_69;
      break;
  }
  transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_101_109_111_95_115_97_118_101_95_103_111_97_108_95_95_91_49_93_95_48_9_p_0(NumberedSaveVars_58, TipVar_50, BlockSize_67, Context_38, STATE_VARIABLE_VarTable_193_193, &STATE_VARIABLE_VarTable_228_228, STATE_VARIABLE_TableInfo_117_117, STATE_VARIABLE_TableInfo_115, &SaveAnswerGoals_84);
  switch (Unitize_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Var_230;

        {
          Var_230 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_230, 0) = ((MR_Box) (TableIoEntryDescGoal_55));
          MR_hl_field(1, Var_230, 1) = ((MR_Box) (SaveAnswerGoals_84));
        }
        {
          CallSaveAnswerGoalList_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, CallSaveAnswerGoalList_85, 0) = ((MR_Box) (NewGoal_36));
          MR_hl_field(1, CallSaveAnswerGoalList_85, 1) = ((MR_Box) (Var_230));
        }
        *STATE_VARIABLE_VarTable_113 = STATE_VARIABLE_VarTable_228_228;
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word SavedTraceEnabledVar_86;
        MR_Word LeftBracketGoal_87;
        MR_Word RightBracketGoal_88;
        MR_Word Var_232;
        MR_Word Var_236;
        MR_Word Var_237;
        MR_Word Var_243;
        MR_Word Var_247;
        MR_Word Var_248;
        MR_Word Var_249;

        Var_232 = parse_tree__builtin_lib_types__int_type_0_f_0();
        transform_hlds__table_gen__generate_new_table_var_6_p_0((MR_String) "SavedTraceEnabled", Var_232, (MR_Integer) 1, STATE_VARIABLE_VarTable_228_228, STATE_VARIABLE_VarTable_113, &SavedTraceEnabledVar_86);
        {
          Var_236 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_236, 0) = ((MR_Box) (SavedTraceEnabledVar_86));
          MR_hl_field(1, Var_236, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_237 = hlds__instmap__instmap_delta_bind_var_1_f_0(SavedTraceEnabledVar_86);
        transform_hlds__table_gen__table_plain_call_8_p_0(ModuleInfo_35, (MR_String) "table_io_left_bracket_unitized_goal", Var_236, Var_237, (MR_Integer) 0, (MR_Integer) 2, Context_38, &LeftBracketGoal_87);
        Var_243 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        transform_hlds__table_gen__table_plain_call_8_p_0(ModuleInfo_35, (MR_String) "table_io_right_bracket_unitized_goal", Var_236, Var_243, (MR_Integer) 0, (MR_Integer) 2, Context_38, &RightBracketGoal_88);
        {
          Var_249 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_249, 0) = ((MR_Box) (TableIoEntryDescGoal_55));
          MR_hl_field(1, Var_249, 1) = ((MR_Box) (SaveAnswerGoals_84));
        }
        {
          Var_248 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_248, 0) = ((MR_Box) (RightBracketGoal_88));
          MR_hl_field(1, Var_248, 1) = ((MR_Box) (Var_249));
        }
        {
          Var_247 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_247, 0) = ((MR_Box) (NewGoal_36));
          MR_hl_field(1, Var_247, 1) = ((MR_Box) (Var_248));
        }
        {
          CallSaveAnswerGoalList_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, CallSaveAnswerGoalList_85, 0) = ((MR_Box) (LeftBracketGoal_87));
          MR_hl_field(1, CallSaveAnswerGoalList_85, 1) = ((MR_Box) (Var_247));
        }
      }
      break;
  }
  {
    CallSaveAnswerGoalExpr_89 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, CallSaveAnswerGoalExpr_89, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, CallSaveAnswerGoalExpr_89, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, CallSaveAnswerGoalExpr_89, 2) = ((MR_Box) (CallSaveAnswerGoalList_85));
  }
  transform_hlds__table_gen__create_instmap_delta_2_p_0(CallSaveAnswerGoalList_85, &CallSaveAnswerInstMapDelta0_90);
  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TipVar_50, OrigNonLocals_37, &CallSaveAnswerNonLocals_91);
  hlds__instmap__instmap_delta_restrict_3_p_0(CallSaveAnswerNonLocals_91, CallSaveAnswerInstMapDelta0_90, &CallSaveAnswerInstMapDelta_92);
  transform_hlds__table_gen__goal_info_init_hide_6_p_0(CallSaveAnswerNonLocals_91, CallSaveAnswerInstMapDelta_92, (MR_Integer) 0, (MR_Integer) 2, Context_38, &CallSaveAnswerGoalInfo0_93);
  hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 8, CallSaveAnswerGoalInfo0_93, &CallSaveAnswerGoalInfo_94);
  {
    CallSaveAnswerGoal_95 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CallSaveAnswerGoal_95, 0) = ((MR_Box) (CallSaveAnswerGoalExpr_89));
    MR_hl_field(0, CallSaveAnswerGoal_95, 1) = ((MR_Box) (CallSaveAnswerGoalInfo_94));
  }
  {
    GenIfNecGoalExpr_96 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, GenIfNecGoalExpr_96, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, GenIfNecGoalExpr_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, GenIfNecGoalExpr_96, 2) = ((MR_Box) (OccurredGoal_52));
    MR_hl_field(3, GenIfNecGoalExpr_96, 3) = ((MR_Box) (RestoreAnswerGoal_70));
    MR_hl_field(3, GenIfNecGoalExpr_96, 4) = ((MR_Box) (CallSaveAnswerGoal_95));
  }
  {
    Var_257 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_257, 0) = ((MR_Box) (CallSaveAnswerGoal_95));
    MR_hl_field(1, Var_257, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_256 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_256, 0) = ((MR_Box) (RestoreAnswerGoal_70));
    MR_hl_field(1, Var_256, 1) = ((MR_Box) (Var_257));
  }
  {
    Var_255 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_255, 0) = ((MR_Box) (OccurredGoal_52));
    MR_hl_field(1, Var_255, 1) = ((MR_Box) (Var_256));
  }
  transform_hlds__table_gen__create_instmap_delta_2_p_0(Var_255, &GenIfNecInstMapDelta0_97);
  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TipVar_50, OrigNonLocals_37, &GenIfNecNonLocals_98);
  hlds__instmap__instmap_delta_restrict_3_p_0(GenIfNecNonLocals_98, GenIfNecInstMapDelta0_97, &GenIfNecInstMapDelta_99);
  transform_hlds__table_gen__goal_info_init_hide_6_p_0(GenIfNecNonLocals_98, GenIfNecInstMapDelta_99, (MR_Integer) 0, (MR_Integer) 2, Context_38, &GenIfNecGoalInfo_100);
  {
    GenIfNecGoal_101 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, GenIfNecGoal_101, 0) = ((MR_Box) (GenIfNecGoalExpr_96));
    MR_hl_field(0, GenIfNecGoal_101, 1) = ((MR_Box) (GenIfNecGoalInfo_100));
  }
  {
    Var_263 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_263, 0) = ((MR_Box) (GenIfNecGoal_101));
    MR_hl_field(1, Var_263, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_262 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_262, 0) = ((MR_Box) (LookupGoal_51));
    MR_hl_field(1, Var_262, 1) = ((MR_Box) (Var_263));
  }
  {
    CheckAndGenAnswerGoalExpr_102 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, CheckAndGenAnswerGoalExpr_102, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, CheckAndGenAnswerGoalExpr_102, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, CheckAndGenAnswerGoalExpr_102, 2) = ((MR_Box) (Var_262));
  }
  transform_hlds__table_gen__create_instmap_delta_2_p_0(Var_262, &CheckAndGenAnswerInstMapDelta0_103);
  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_135, OrigNonLocals_37, &CheckAndGenAnswerNonLocals_104);
  hlds__instmap__instmap_delta_restrict_3_p_0(CheckAndGenAnswerNonLocals_104, CheckAndGenAnswerInstMapDelta0_103, &CheckAndGenAnswerInstMapDelta_105);
  transform_hlds__table_gen__goal_info_init_hide_6_p_0(CheckAndGenAnswerNonLocals_104, CheckAndGenAnswerInstMapDelta_105, (MR_Integer) 0, (MR_Integer) 2, Context_38, &CheckAndGenAnswerGoalInfo_106);
  {
    CheckAndGenAnswerGoal_107 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CheckAndGenAnswerGoal_107, 0) = ((MR_Box) (CheckAndGenAnswerGoalExpr_102));
    MR_hl_field(0, CheckAndGenAnswerGoal_107, 1) = ((MR_Box) (CheckAndGenAnswerGoalInfo_106));
  }
  {
    BodyGoalExpr_108 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, BodyGoalExpr_108, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, BodyGoalExpr_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, BodyGoalExpr_108, 2) = ((MR_Box) (InRangeGoal_49));
    MR_hl_field(3, BodyGoalExpr_108, 3) = ((MR_Box) (CheckAndGenAnswerGoal_107));
    MR_hl_field(3, BodyGoalExpr_108, 4) = ((MR_Box) (NewGoal_36));
  }
  {
    Var_277 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_277, 0) = ((MR_Box) (NewGoal_36));
    MR_hl_field(1, Var_277, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_276 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_276, 0) = ((MR_Box) (CheckAndGenAnswerGoal_107));
    MR_hl_field(1, Var_276, 1) = ((MR_Box) (Var_277));
  }
  {
    Var_275 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_275, 0) = ((MR_Box) (InRangeGoal_49));
    MR_hl_field(1, Var_275, 1) = ((MR_Box) (Var_276));
  }
  transform_hlds__table_gen__create_instmap_delta_2_p_0(Var_275, &BodyInstMapDelta0_109);
  hlds__instmap__instmap_delta_restrict_3_p_0(OrigNonLocals_37, BodyInstMapDelta0_109, &BodyInstMapDelta_110);
  transform_hlds__table_gen__goal_info_init_hide_6_p_0(OrigNonLocals_37, BodyInstMapDelta_110, (MR_Integer) 0, (MR_Integer) 2, Context_38, &BodyGoalInfo_111);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_27 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (BodyGoalExpr_108));
    MR_hl_field(0, base, 1) = ((MR_Box) (BodyGoalInfo_111));
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
    MR_Word VarModePos0_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word VarModes_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word VarModePos_8;
    MR_Word VarModePoss_9;
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, VarModePos0_5, (MR_Integer) 0))));
    MR_Word Mode_11 = ((MR_Word) ((MR_hl_field(0, VarModePos0_5, (MR_Integer) 1))));
    MR_Box ArgMethod_13 = (MR_hl_field(0, VarModePos0_5, (MR_Integer) 3));
    MR_Integer Var_14;

    {
      VarModePos_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, VarModePos_8, 0) = ((MR_Box) (Var_10));
      MR_hl_field(0, VarModePos_8, 1) = ((MR_Box) (Mode_11));
      MR_hl_field(0, VarModePos_8, 2) = ((MR_Box) (Offset0_2));
      MR_hl_field(0, VarModePos_8, 3) = ArgMethod_13;
    }
    Var_14 = (MR_Integer) ((MR_Unsigned) Offset0_2 + (MR_Unsigned) 1);
    transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_108_108_111_99_97_116_101_95_115_108_111_116_95_110_117_109_98_101_114_115_95_95_91_49_93_95_48_3_p_0(VarModes_6, Var_14, &VarModePoss_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (VarModePos_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (VarModePoss_9));
    }
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_111_106_101_99_116_95_118_97_114_95_95_91_49_93_95_48_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word Var_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));

  return Var_3;
}

static void MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_101_109_111_95_114_101_115_116_111_114_101_95_103_111_97_108_95_95_91_49_93_95_48_8_p_0(
  MR_Word NumberedOutputVars_9,
  MR_Word OrigInstMapDelta_10,
  MR_Word TipVar_11,
  MR_Word Context_12,
  MR_Word STATE_VARIABLE_VarTable_0_31,
  MR_Word * STATE_VARIABLE_VarTable_32,
  MR_Word TableInfo_14,
  MR_Word * Goal_15)
{
  if ((NumberedOutputVars_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Goal_15 = hlds__make_goal__true_goal_0_f_0();
    *STATE_VARIABLE_VarTable_32 = STATE_VARIABLE_VarTable_0_31;
  }
  else
  {
    MR_String DebugArgStr_18;
    MR_Word ModuleInfo_19;
    MR_Word RestoreInstMapDeltaSrc_20;
    MR_Word RestoreArgs_21;
    MR_String RestoreCodeStr_22;
    MR_Word Arg_24;
    MR_Word Args_25;
    MR_String DeclCodeStr_28;
    MR_String GetRestoreCodeStr_29;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_String Var_41;
    MR_String Var_45;
    MR_String Var_46;
    MR_String Var_48;
    MR_String Var_49;
    MR_String Var_51;
    MR_String Var_52;
    MR_String Var_54;
    MR_String Var_56;
    MR_Word Var_58;
    MR_Word Var_61;
    MR_String Var_62;
    MR_Word ModuleInfo_66 = ((MR_Word) ((MR_hl_field(0, TableInfo_14, (MR_Integer) 0))));
    MR_Word Globals_67;
    MR_Word TableDebug_68;
    MR_Word TB_72;
    MR_Word Var_73;
    MR_Word Var_75;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_66, &Globals_67);
    libs__globals__lookup_bool_option_3_p_0(Globals_67, (MR_Integer) 345, &TableDebug_68);
    switch (TableDebug_68) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DebugArgStr_18 = (MR_String) "MR_FALSE";
        break;
      case (MR_Integer) 1:
        DebugArgStr_18 = (MR_String) "MR_TRUE";
        break;
    }
    ModuleInfo_19 = ((MR_Word) ((MR_hl_field(0, TableInfo_14, (MR_Integer) 0))));
    transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_116_111_114_101_95_103_111_97_108_115_95_95_91_49_93_95_48_9_p_0(ModuleInfo_19, OrigInstMapDelta_10, DebugArgStr_18, NumberedOutputVars_9, &RestoreInstMapDeltaSrc_20, &RestoreArgs_21, &RestoreCodeStr_22, STATE_VARIABLE_VarTable_0_31, STATE_VARIABLE_VarTable_32);
    Var_36 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_35, 0) = ((MR_Box) ((MR_String) "base"));
      MR_hl_field(0, Var_35, 1) = ((MR_Box) (Var_36));
    }
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
    }
    TB_72 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_75, 0) = ((MR_Box) (TB_72));
      MR_hl_field(1, Var_75, 1) = ((MR_Box) ((MR_String) "ml_trie_node"));
    }
    {
      Var_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_73, 0) = ((MR_Box) (Var_75));
      MR_hl_field(0, Var_73, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__prog_type__construct_type_3_p_0(Var_73, (MR_Word) ((MR_Unsigned) 0U), &Var_37);
    {
      Arg_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Arg_24, 0) = ((MR_Box) (TipVar_11));
      MR_hl_field(0, Arg_24, 1) = ((MR_Box) (Var_34));
      MR_hl_field(0, Arg_24, 2) = ((MR_Box) (Var_37));
      MR_hl_field(0, Arg_24, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    {
      Args_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Args_25, 0) = ((MR_Box) (Arg_24));
      MR_hl_field(1, Args_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_41 = mercury__string__f_43_43_2_f_0((MR_String) "answerblock", (MR_String) ";\n");
    DeclCodeStr_28 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_AnswerBlock ", Var_41);
    Var_56 = mercury__string__f_43_43_2_f_0((MR_String) ");\n", RestoreCodeStr_22);
    Var_54 = mercury__string__f_43_43_2_f_0((MR_String) "answerblock", Var_56);
    Var_52 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_54);
    Var_51 = mercury__string__f_43_43_2_f_0((MR_String) "base", Var_52);
    Var_49 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_51);
    Var_48 = mercury__string__f_43_43_2_f_0(DebugArgStr_18, Var_49);
    Var_46 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_48);
    Var_45 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_memo_get_answer_block", Var_46);
    GetRestoreCodeStr_29 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_45);
    Var_58 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(RestoreInstMapDeltaSrc_20);
    Var_61 = transform_hlds__table_gen__tabling_c_attributes_dupl_0_f_0();
    Var_62 = mercury__string__f_43_43_2_f_0(DeclCodeStr_28, GetRestoreCodeStr_29);
    transform_hlds__table_gen__table_call_foreign_proc_11_p_0(ModuleInfo_19, (MR_String) "table_memo_get_answer_block_shortcut", Args_25, RestoreArgs_21, Var_58, (MR_Integer) 0, (MR_Integer) 1, Var_61, Var_62, Context_12, Goal_15);
  }
}

static void MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_116_111_114_101_95_103_111_97_108_115_95_95_91_49_93_95_48_9_p_0(
  MR_Word ModuleInfo_1,
  MR_Word OrigInstmapDelta_2,
  MR_String DebugArgStr_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_String * HeadVar__7_7,
  MR_Word STATE_VARIABLE_VarTable_0_8,
  MR_Word * STATE_VARIABLE_VarTable_9)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__7_7 = (MR_String) "";
    *STATE_VARIABLE_VarTable_9 = STATE_VARIABLE_VarTable_0_8;
  }
  else
  {
    MR_Word NumberedVar_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word NumberedVars_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word VarInst_21;
    MR_Word VarInsts_22;
    MR_Word Arg_23;
    MR_Word Args_24;
    MR_String CodeStr_25;
    MR_String RestCodeStr_26;
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, NumberedVar_19, (MR_Integer) 0))));
    MR_Integer Offset_30 = ((MR_Integer) ((MR_hl_field(0, NumberedVar_19, (MR_Integer) 2))));
    MR_Word VarType_32;
    MR_Word CtorCat_33;
    MR_Word Inst_37;
    MR_String Name_38;
    MR_String RestoreMacroName_39;
    MR_Word ArgType_40;
    MR_String Var_44;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_String Var_57;
    MR_String Var_58;
    MR_String Var_60;
    MR_String Var_61;
    MR_String Var_63;
    MR_String Var_65;
    MR_String Var_67;
    MR_String Var_68;
    MR_String Var_69;
    MR_String Var_71;
    MR_Word InstPrime_42;

    parse_tree__var_table__lookup_var_type_3_p_0(STATE_VARIABLE_VarTable_0_8, Var_28, &VarType_32);
    CtorCat_33 = check_hlds__type_util__classify_type_2_f_0(ModuleInfo_1, VarType_32);
    Var_44 = mercury__string__int_to_string_1_f_0(Offset_30);
    Name_38 = mercury__string__f_43_43_2_f_0((MR_String) "restore_arg", Var_44);
    succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(VarType_32);
    if (succeeded)
    {
      RestoreMacroName_39 = (MR_String) "MR_tbl_restore_io_state_answer";
      ArgType_40 = VarType_32;
    }
    else
    {
      switch (MR_tag((MR_Word) CtorCat_33)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          switch (MR_unmkbody(CtorCat_33)) {
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
          switch (((MR_Integer) ((MR_hl_field(3, CtorCat_33, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_80 = ((MR_Unsigned) ((MR_hl_field(3, CtorCat_33, (MR_Integer) 1))) & (MR_Integer) 3);

                succeeded = (Var_80 == (MR_Integer) 0);
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
        MR_Word DummyTVarSet0_81;
        MR_Word DummyTVar_82;
        MR_Word Var_83;

        RestoreMacroName_39 = (MR_String) "MR_tbl_restore_any_answer";
        mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &DummyTVarSet0_81);
        mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &DummyTVar_82, DummyTVarSet0_81, &Var_83);
        {
          ArgType_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ArgType_40, 0) = ((MR_Box) (DummyTVar_82));
          MR_hl_field(0, ArgType_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_String CatString_41;
        MR_String Var_47;

        transform_hlds__table_gen__type_save_category_2_p_0(CtorCat_33, &CatString_41);
        Var_47 = mercury__string__f_43_43_2_f_0(CatString_41, (MR_String) "_answer");
        RestoreMacroName_39 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_restore_", Var_47);
        ArgType_40 = VarType_32;
      }
    }
    succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(OrigInstmapDelta_2, Var_28, &InstPrime_42);
    if (succeeded)
      Inst_37 = InstPrime_42;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_restore_call_for_type\'/9", (MR_String) "no inst");
        return;
      }
    {
      VarInst_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, VarInst_21, 0) = ((MR_Box) (Var_28));
      MR_hl_field(0, VarInst_21, 1) = ((MR_Box) (Inst_37));
    }
    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Var_53, 1) = ((MR_Box) (Inst_37));
    }
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_52, 0) = ((MR_Box) (Name_38));
      MR_hl_field(0, Var_52, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
    }
    {
      Arg_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Arg_23, 0) = ((MR_Box) (Var_28));
      MR_hl_field(0, Arg_23, 1) = ((MR_Box) (Var_51));
      MR_hl_field(0, Arg_23, 2) = ((MR_Box) (ArgType_40));
      MR_hl_field(0, Arg_23, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    Var_68 = mercury__string__int_to_string_1_f_0(Offset_30);
    Var_71 = mercury__string__f_43_43_2_f_0(Name_38, (MR_String) ");\n");
    Var_69 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_71);
    Var_67 = mercury__string__f_43_43_2_f_0(Var_68, Var_69);
    Var_65 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_67);
    Var_63 = mercury__string__f_43_43_2_f_0((MR_String) "answerblock", Var_65);
    Var_61 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_63);
    Var_60 = mercury__string__f_43_43_2_f_0(DebugArgStr_3, Var_61);
    Var_58 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_60);
    Var_57 = mercury__string__f_43_43_2_f_0(RestoreMacroName_39, Var_58);
    CodeStr_25 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_57);
    transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_116_111_114_101_95_103_111_97_108_115_95_95_91_49_93_95_48_9_p_0(ModuleInfo_1, OrigInstmapDelta_2, DebugArgStr_3, NumberedVars_20, &VarInsts_22, &Args_24, &RestCodeStr_26, STATE_VARIABLE_VarTable_0_8, STATE_VARIABLE_VarTable_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (VarInst_21));
      MR_hl_field(1, base, 1) = ((MR_Box) (VarInsts_22));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Arg_23));
      MR_hl_field(1, base, 1) = ((MR_Box) (Args_24));
    }
    *HeadVar__7_7 = mercury__string__f_43_43_2_f_0(CodeStr_25, RestCodeStr_26);
  }
}

static void MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_101_109_111_95_115_97_118_101_95_103_111_97_108_95_95_91_49_93_95_48_9_p_0(
  MR_Word NumberedSaveVars_10,
  MR_Word TableTipVar_11,
  MR_Integer BlockSize_12,
  MR_Word Context_13,
  MR_Word STATE_VARIABLE_VarTable_0_31,
  MR_Word * STATE_VARIABLE_VarTable_32,
  MR_Word STATE_VARIABLE_TableInfo_0_33,
  MR_Word * STATE_VARIABLE_TableInfo_34,
  MR_Word * Goals_16)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TableInfo_0_33, (MR_Integer) 0))));
  MR_Word TableArg_19;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word TB_73;
  MR_Word Var_74;
  MR_Word Var_76;

  Var_37 = parse_tree__prog_mode__in_mode_0_f_0();
  {
    Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_36, 0) = ((MR_Box) ((MR_String) "cur_node"));
    MR_hl_field(0, Var_36, 1) = ((MR_Box) (Var_37));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
  }
  TB_73 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_76, 0) = ((MR_Box) (TB_73));
    MR_hl_field(1, Var_76, 1) = ((MR_Box) ((MR_String) "ml_trie_node"));
  }
  {
    Var_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_74, 0) = ((MR_Box) (Var_76));
    MR_hl_field(0, Var_74, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  parse_tree__prog_type__construct_type_3_p_0(Var_74, (MR_Word) ((MR_Unsigned) 0U), &Var_38);
  {
    TableArg_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TableArg_19, 0) = ((MR_Box) (TableTipVar_11));
    MR_hl_field(0, TableArg_19, 1) = ((MR_Box) (Var_35));
    MR_hl_field(0, TableArg_19, 2) = ((MR_Box) (Var_38));
    MR_hl_field(0, TableArg_19, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  succeeded = (BlockSize_12 > (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word SaveArgs_22;
    MR_Word SavePrefixGoals_23;
    MR_String SaveDeclCode_24;
    MR_String SaveCode_25;
    MR_Word SaveGoal_26;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_47;
    MR_String Var_48;
    MR_Word Var_50;

    transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_108_108_95_115_97_118_101_95_103_111_97_108_115_95_95_91_49_93_95_48_13_p_0(NumberedSaveVars_10, (MR_String) "cur_node", BlockSize_12, (MR_String) "MR_tbl_memo_create_answer_block", Context_13, STATE_VARIABLE_VarTable_0_31, STATE_VARIABLE_VarTable_32, STATE_VARIABLE_TableInfo_0_33, STATE_VARIABLE_TableInfo_34, &SaveArgs_22, &SavePrefixGoals_23, &SaveDeclCode_24, &SaveCode_25);
    {
      Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_43, 0) = ((MR_Box) (TableArg_19));
      MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_44 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    Var_47 = transform_hlds__table_gen__tabling_c_attributes_dupl_0_f_0();
    Var_48 = mercury__string__f_43_43_2_f_0(SaveDeclCode_24, SaveCode_25);
    transform_hlds__table_gen__table_call_foreign_proc_11_p_0(ModuleInfo_17, (MR_String) "table_memo_fill_answer_block_shortcut", Var_43, SaveArgs_22, Var_44, (MR_Integer) 0, (MR_Integer) 2, Var_47, Var_48, Context_13, &SaveGoal_26);
    {
      Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_50, 0) = ((MR_Box) (SaveGoal_26));
      MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *Goals_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), SavePrefixGoals_23, Var_50);
  }
  else
  {
    MR_String DebugArgStr_27;
    MR_String MarkAsSucceededCode_30;
    MR_String Var_52;
    MR_String Var_54;
    MR_String Var_55;
    MR_String Var_57;
    MR_Word Var_60;
    MR_Word Var_62;
    MR_Word Var_65;
    MR_Word SaveGoal_68;
    MR_Word ModuleInfo_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TableInfo_0_33, (MR_Integer) 0))));
    MR_Word Globals_80;
    MR_Word TableDebug_81;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_79, &Globals_80);
    libs__globals__lookup_bool_option_3_p_0(Globals_80, (MR_Integer) 345, &TableDebug_81);
    switch (TableDebug_81) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DebugArgStr_27 = (MR_String) "MR_FALSE";
        break;
      case (MR_Integer) 1:
        DebugArgStr_27 = (MR_String) "MR_TRUE";
        break;
    }
    Var_57 = mercury__string__f_43_43_2_f_0((MR_String) "cur_node", (MR_String) ");");
    Var_55 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_57);
    Var_54 = mercury__string__f_43_43_2_f_0(DebugArgStr_27, Var_55);
    Var_52 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_54);
    MarkAsSucceededCode_30 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_memo_mark_as_succeeded", Var_52);
    {
      Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_60, 0) = ((MR_Box) (TableArg_19));
      MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_62 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    Var_65 = transform_hlds__table_gen__tabling_c_attributes_dupl_0_f_0();
    transform_hlds__table_gen__table_call_foreign_proc_11_p_0(ModuleInfo_17, (MR_String) "table_memo_mark_as_succeeded", Var_60, (MR_Word) ((MR_Unsigned) 0U), Var_62, (MR_Integer) 0, (MR_Integer) 2, Var_65, MarkAsSucceededCode_30, Context_13, &SaveGoal_68);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Goals_16 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (SaveGoal_68));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *STATE_VARIABLE_TableInfo_34 = STATE_VARIABLE_TableInfo_0_33;
    *STATE_VARIABLE_VarTable_32 = STATE_VARIABLE_VarTable_0_31;
  }
}

static void MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_108_108_95_115_97_118_101_95_103_111_97_108_115_95_95_91_49_93_95_48_13_p_0(
  MR_Word NumberedSaveVars_14,
  MR_String BaseVarName_15,
  MR_Integer BlockSize_16,
  MR_String CreateMacroName_17,
  MR_Word Context_18,
  MR_Word STATE_VARIABLE_VarTable_0_28,
  MR_Word * STATE_VARIABLE_VarTable_29,
  MR_Word STATE_VARIABLE_TableInfo_0_30,
  MR_Word * STATE_VARIABLE_TableInfo_31,
  MR_Word * SaveArgs_21,
  MR_Word * SavePrefixGoals_22,
  MR_String * SaveDeclCodeStr_23,
  MR_String * CreateSaveCodeStr_24)
{
  MR_String DebugArgStr_25;
  MR_String SaveCodeStr_26;
  MR_String CreateCodeStr_27;
  MR_String Var_35;
  MR_String Var_39;
  MR_String Var_40;
  MR_String Var_42;
  MR_String Var_43;
  MR_String Var_45;
  MR_String Var_46;
  MR_String Var_48;
  MR_String Var_49;
  MR_String Var_50;
  MR_String Var_52;
  MR_Word ModuleInfo_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TableInfo_0_30, (MR_Integer) 0))));
  MR_Word Globals_57;
  MR_Word TableDebug_58;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_56, &Globals_57);
  libs__globals__lookup_bool_option_3_p_0(Globals_57, (MR_Integer) 345, &TableDebug_58);
  switch (TableDebug_58) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      DebugArgStr_25 = (MR_String) "MR_FALSE";
      break;
    case (MR_Integer) 1:
      DebugArgStr_25 = (MR_String) "MR_TRUE";
      break;
  }
  transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_97_118_101_95_103_111_97_108_115_95_95_91_49_93_95_48_10_p_0(NumberedSaveVars_14, DebugArgStr_25, Context_18, STATE_VARIABLE_VarTable_0_28, STATE_VARIABLE_VarTable_29, STATE_VARIABLE_TableInfo_0_30, STATE_VARIABLE_TableInfo_31, SaveArgs_21, SavePrefixGoals_22, &SaveCodeStr_26);
  Var_35 = mercury__string__f_43_43_2_f_0((MR_String) "answerblock", (MR_String) ";\n");
  *SaveDeclCodeStr_23 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_AnswerBlock ", Var_35);
  Var_49 = mercury__string__int_to_string_1_f_0(BlockSize_16);
  Var_52 = mercury__string__f_43_43_2_f_0((MR_String) "answerblock", (MR_String) ");\n");
  Var_50 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_52);
  Var_48 = mercury__string__f_43_43_2_f_0(Var_49, Var_50);
  Var_46 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_48);
  Var_45 = mercury__string__f_43_43_2_f_0(BaseVarName_15, Var_46);
  Var_43 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_45);
  Var_42 = mercury__string__f_43_43_2_f_0(DebugArgStr_25, Var_43);
  Var_40 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_42);
  Var_39 = mercury__string__f_43_43_2_f_0(CreateMacroName_17, Var_40);
  CreateCodeStr_27 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_39);
  *CreateSaveCodeStr_24 = mercury__string__f_43_43_2_f_0(CreateCodeStr_27, SaveCodeStr_26);
}

static void MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_97_118_101_95_103_111_97_108_115_95_95_91_49_93_95_48_10_p_0(
  MR_Word HeadVar__1_1,
  MR_String DebugArgStr_2,
  MR_Word Context_3,
  MR_Word STATE_VARIABLE_VarTable_0_4,
  MR_Word * STATE_VARIABLE_VarTable_5,
  MR_Word STATE_VARIABLE_TableInfo_0_6,
  MR_Word * STATE_VARIABLE_TableInfo_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_String * HeadVar__10_10)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__10_10 = (MR_String) "";
    *STATE_VARIABLE_TableInfo_7 = STATE_VARIABLE_TableInfo_0_6;
    *STATE_VARIABLE_VarTable_5 = STATE_VARIABLE_VarTable_0_4;
  }
  else
  {
    MR_Word NumberedVar_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word NumberedRest_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Args_25;
    MR_Word RestArgs_26;
    MR_Word PrefixGoals_27;
    MR_Word RestPrefixGoals_28;
    MR_String CodeStr_29;
    MR_String RestCodeStr_30;
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, NumberedVar_19, (MR_Integer) 0))));
    MR_Integer Offset_33 = ((MR_Integer) ((MR_hl_field(0, NumberedVar_19, (MR_Integer) 2))));
    MR_Word ModuleInfo_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TableInfo_0_6, (MR_Integer) 0))));
    MR_Word VarType_36;
    MR_Word CtorCat_37;
    MR_Word STATE_VARIABLE_VarTable_42_42;
    MR_Word STATE_VARIABLE_TableInfo_43_43;

    parse_tree__var_table__lookup_var_type_3_p_0(STATE_VARIABLE_VarTable_0_4, Var_31, &VarType_36);
    CtorCat_37 = check_hlds__type_util__classify_type_2_f_0(ModuleInfo_35, VarType_36);
    transform_hlds__table_gen__gen_save_call_for_type_13_p_0(CtorCat_37, VarType_36, Var_31, Offset_33, DebugArgStr_2, Context_3, STATE_VARIABLE_VarTable_0_4, &STATE_VARIABLE_VarTable_42_42, STATE_VARIABLE_TableInfo_0_6, &STATE_VARIABLE_TableInfo_43_43, &Args_25, &PrefixGoals_27, &CodeStr_29);
    transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_97_118_101_95_103_111_97_108_115_95_95_91_49_93_95_48_10_p_0(NumberedRest_20, DebugArgStr_2, Context_3, STATE_VARIABLE_VarTable_42_42, STATE_VARIABLE_VarTable_5, STATE_VARIABLE_TableInfo_43_43, STATE_VARIABLE_TableInfo_7, &RestArgs_26, &RestPrefixGoals_28, &RestCodeStr_30);
    *HeadVar__8_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), Args_25, RestArgs_26);
    *HeadVar__9_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), PrefixGoals_27, RestPrefixGoals_28);
    *HeadVar__10_10 = mercury__string__f_43_43_2_f_0(CodeStr_29, RestCodeStr_30);
  }
}

static void MR_CALL 
transform_hlds__table_gen__gen_save_call_for_type_13_p_0(
  MR_Word CtorCat_14,
  MR_Word Type_15,
  MR_Word Var_16,
  MR_Integer Offset_17,
  MR_String DebugArgStr_18,
  MR_Word Context_19,
  MR_Word STATE_VARIABLE_VarTable_0_34,
  MR_Word * STATE_VARIABLE_VarTable_35,
  MR_Word STATE_VARIABLE_TableInfo_0_36,
  MR_Word * STATE_VARIABLE_TableInfo_37,
  MR_Word * Args_22,
  MR_Word * PrefixGoals_23,
  MR_String * CodeStr_24)
{
  MR_bool succeeded;
  MR_String Name_25;
  MR_Word ForeignArg_26;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;

  Name_25 = transform_hlds__table_gen__arg_name_1_f_0(Offset_17);
  Var_40 = parse_tree__prog_mode__in_mode_0_f_0();
  {
    Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_39, 0) = ((MR_Box) (Name_25));
    MR_hl_field(0, Var_39, 1) = ((MR_Box) (Var_40));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
  }
  {
    ForeignArg_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ForeignArg_26, 0) = ((MR_Box) (Var_16));
    MR_hl_field(0, ForeignArg_26, 1) = ((MR_Box) (Var_38));
    MR_hl_field(0, ForeignArg_26, 2) = ((MR_Box) (Type_15));
    MR_hl_field(0, ForeignArg_26, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(Type_15);
  if (succeeded)
  {
    MR_String Var_44;
    MR_String Var_45;
    MR_String Var_47;
    MR_String Var_48;
    MR_String Var_50;
    MR_String Var_51;
    MR_String Var_52;
    MR_String Var_54;
    MR_String Var_55;
    MR_String Var_56;
    MR_String Var_58;

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Args_22 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ForeignArg_26));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *PrefixGoals_23 = (MR_Word) ((MR_Unsigned) 0U);
    Var_51 = transform_hlds__table_gen__answer_block_name_0_f_0();
    Var_55 = mercury__string__int_to_string_1_f_0(Offset_17);
    Var_58 = mercury__string__f_43_43_2_f_0(Name_25, (MR_String) ");\n");
    Var_56 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_58);
    Var_54 = mercury__string__f_43_43_2_f_0(Var_55, Var_56);
    Var_52 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_54);
    Var_50 = mercury__string__f_43_43_2_f_0(Var_51, Var_52);
    Var_48 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_50);
    Var_47 = mercury__string__f_43_43_2_f_0(DebugArgStr_18, Var_48);
    Var_45 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_47);
    Var_44 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_save_io_state_answer", Var_45);
    *CodeStr_24 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_44);
    *STATE_VARIABLE_TableInfo_37 = STATE_VARIABLE_TableInfo_0_36;
    *STATE_VARIABLE_VarTable_35 = STATE_VARIABLE_VarTable_0_34;
  }
  else
  {
    MR_Word Var_60;

    Var_60 = transform_hlds__table_gen__builtin_type_1_f_0(CtorCat_14);
    succeeded = (Var_60 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word GenericForeignArg_28;
      MR_Word TypeInfoVar_29;
      MR_String TypeInfoName_30;
      MR_Word TypeInfoType_31;
      MR_Word TypeInfoForeignArg_32;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_String Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_74;
      MR_String Var_77;
      MR_String Var_78;
      MR_String Var_80;
      MR_String Var_81;
      MR_String Var_83;
      MR_String Var_84;
      MR_String Var_85;
      MR_String Var_87;
      MR_String Var_88;
      MR_String Var_89;
      MR_String Var_91;
      MR_String Var_92;
      MR_String Var_94;

      Var_63 = parse_tree__prog_mode__in_mode_0_f_0();
      {
        Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_62, 0) = ((MR_Box) (Name_25));
        MR_hl_field(0, Var_62, 1) = ((MR_Box) (Var_63));
      }
      {
        Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
      }
      Var_64 = transform_hlds__table_gen__dummy_type_var_0_f_0();
      {
        GenericForeignArg_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, GenericForeignArg_28, 0) = ((MR_Box) (Var_16));
        MR_hl_field(0, GenericForeignArg_28, 1) = ((MR_Box) (Var_61));
        MR_hl_field(0, GenericForeignArg_28, 2) = ((MR_Box) (Var_64));
        MR_hl_field(0, GenericForeignArg_28, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      transform_hlds__table_gen__table_gen_make_type_info_var_8_p_0(Type_15, Context_19, STATE_VARIABLE_VarTable_0_34, STATE_VARIABLE_VarTable_35, STATE_VARIABLE_TableInfo_0_36, STATE_VARIABLE_TableInfo_37, &TypeInfoVar_29, PrefixGoals_23);
      Var_69 = mercury__string__int_to_string_1_f_0(Offset_17);
      TypeInfoName_30 = mercury__string__f_43_43_2_f_0((MR_String) "save_arg_typeinfo", Var_69);
      parse_tree__var_table__lookup_var_type_3_p_0(*STATE_VARIABLE_VarTable_35, TypeInfoVar_29, &TypeInfoType_31);
      Var_72 = parse_tree__prog_mode__in_mode_0_f_0();
      {
        Var_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_71, 0) = ((MR_Box) (TypeInfoName_30));
        MR_hl_field(0, Var_71, 1) = ((MR_Box) (Var_72));
      }
      {
        Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
      }
      {
        TypeInfoForeignArg_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfoForeignArg_32, 0) = ((MR_Box) (TypeInfoVar_29));
        MR_hl_field(0, TypeInfoForeignArg_32, 1) = ((MR_Box) (Var_70));
        MR_hl_field(0, TypeInfoForeignArg_32, 2) = ((MR_Box) (TypeInfoType_31));
        MR_hl_field(0, TypeInfoForeignArg_32, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      {
        Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_74, 0) = ((MR_Box) (TypeInfoForeignArg_32));
        MR_hl_field(1, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Args_22 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (GenericForeignArg_28));
        MR_hl_field(1, base, 1) = ((MR_Box) (Var_74));
      }
      Var_84 = transform_hlds__table_gen__answer_block_name_0_f_0();
      Var_88 = mercury__string__int_to_string_1_f_0(Offset_17);
      Var_94 = mercury__string__f_43_43_2_f_0(Name_25, (MR_String) ");\n");
      Var_92 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_94);
      Var_91 = mercury__string__f_43_43_2_f_0(TypeInfoName_30, Var_92);
      Var_89 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_91);
      Var_87 = mercury__string__f_43_43_2_f_0(Var_88, Var_89);
      Var_85 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_87);
      Var_83 = mercury__string__f_43_43_2_f_0(Var_84, Var_85);
      Var_81 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_83);
      Var_80 = mercury__string__f_43_43_2_f_0(DebugArgStr_18, Var_81);
      Var_78 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_80);
      Var_77 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_save_any_answer", Var_78);
      *CodeStr_24 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_77);
    }
    else
    {
      MR_String CatString_33;
      MR_String Var_97;
      MR_String Var_101;
      MR_String Var_102;
      MR_String Var_104;
      MR_String Var_105;
      MR_String Var_107;
      MR_String Var_108;
      MR_String Var_109;
      MR_String Var_111;
      MR_String Var_112;
      MR_String Var_113;
      MR_String Var_115;
      MR_String SaveMacroName_118;

      transform_hlds__table_gen__type_save_category_2_p_0(CtorCat_14, &CatString_33);
      Var_97 = mercury__string__f_43_43_2_f_0(CatString_33, (MR_String) "_answer");
      SaveMacroName_118 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_save_", Var_97);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Args_22 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ForeignArg_26));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *PrefixGoals_23 = (MR_Word) ((MR_Unsigned) 0U);
      Var_108 = transform_hlds__table_gen__answer_block_name_0_f_0();
      Var_112 = mercury__string__int_to_string_1_f_0(Offset_17);
      Var_115 = mercury__string__f_43_43_2_f_0(Name_25, (MR_String) ");\n");
      Var_113 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_115);
      Var_111 = mercury__string__f_43_43_2_f_0(Var_112, Var_113);
      Var_109 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_111);
      Var_107 = mercury__string__f_43_43_2_f_0(Var_108, Var_109);
      Var_105 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_107);
      Var_104 = mercury__string__f_43_43_2_f_0(DebugArgStr_18, Var_105);
      Var_102 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_104);
      Var_101 = mercury__string__f_43_43_2_f_0(SaveMacroName_118, Var_102);
      *CodeStr_24 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_101);
      *STATE_VARIABLE_TableInfo_37 = STATE_VARIABLE_TableInfo_0_36;
      *STATE_VARIABLE_VarTable_35 = STATE_VARIABLE_VarTable_0_34;
    }
  }
}

static MR_String MR_CALL 
transform_hlds__table_gen__answer_block_name_0_f_0(void)
{
  return (MR_String) "answerblock";
}

static MR_Word MR_CALL 
transform_hlds__table_gen__dummy_type_var_0_f_0(void)
{
  MR_Word Type_2;
  MR_Word DummyTVarSet0_3;
  MR_Word DummyTVar_4;
  MR_Word Var_5;

  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &DummyTVarSet0_3);
  mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &DummyTVar_4, DummyTVarSet0_3, &Var_5);
  {
    Type_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Type_2, 0) = ((MR_Box) (DummyTVar_4));
    MR_hl_field(0, Type_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return Type_2;
}

static void MR_CALL 
transform_hlds__table_gen__table_gen_make_type_info_var_8_p_0(
  MR_Word Type_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_VarTable_0_17,
  MR_Word * STATE_VARIABLE_VarTable_18,
  MR_Word STATE_VARIABLE_TableInfo_0_19,
  MR_Word * STATE_VARIABLE_TableInfo_20,
  MR_Word * TypeInfoVar_13,
  MR_Word * TypeInfoGoals_14)
{
  MR_bool succeeded;
  MR_Word TypeInfoVars_15;
  MR_Word Var_21;
  MR_Word ModuleInfo0_28;
  MR_Word PredInfo0_29;
  MR_Word ProcInfo0_30;
  MR_Word ProcInfo1_31;
  MR_Word ModuleInfo_32;
  MR_Word PredInfo_33;
  MR_Word ProcInfo_34;
  MR_Word TypeInfoVar0_16;
  MR_Word Var_25;

  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (Type_9));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  ModuleInfo0_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TableInfo_0_19, (MR_Integer) 0))));
  PredInfo0_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TableInfo_0_19, (MR_Integer) 1))));
  ProcInfo0_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TableInfo_0_19, (MR_Integer) 2))));
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(STATE_VARIABLE_VarTable_0_17, ProcInfo0_30, &ProcInfo1_31);
  check_hlds__polymorphism_type_info__polymorphism_make_type_info_vars_mi_10_p_0(Var_21, Context_10, &TypeInfoVars_15, TypeInfoGoals_14, ModuleInfo0_28, &ModuleInfo_32, PredInfo0_29, &PredInfo_33, ProcInfo1_31, &ProcInfo_34);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_34, STATE_VARIABLE_VarTable_18);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_TableInfo_20 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleInfo_32));
    MR_hl_field(0, base, 1) = ((MR_Box) (PredInfo_33));
    MR_hl_field(0, base, 2) = ((MR_Box) (ProcInfo_34));
  }
  succeeded = (TypeInfoVars_15 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    TypeInfoVar0_16 = ((MR_Word) ((MR_hl_field(1, TypeInfoVars_15, (MR_Integer) 0))));
    Var_25 = ((MR_Word) ((MR_hl_field(1, TypeInfoVars_15, (MR_Integer) 1))));
    succeeded = (Var_25 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
    *TypeInfoVar_13 = TypeInfoVar0_16;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.table_gen_make_type_info_var\'/8", (MR_String) "list length != 1");
      return;
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
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.type_save_category\'/2", (MR_String) "unexpected category");
            return;
          }
          break;
        case (MR_Integer) 3:
          *Name_4 = (MR_String) "any";
          break;
        case (MR_Integer) 4:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.type_save_category\'/2", (MR_String) "unexpected category");
            return;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_49 = ((MR_Word) ((MR_hl_field(1, CtorCat_3, (MR_Integer) 0))));

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
              MR_Word Var_52 = ((MR_Unsigned) ((MR_hl_field(1, Var_49, (MR_Integer) 0))) & (MR_Integer) 15);

              *Name_4 = ((&transform_hlds__table_gen_vector_common_8[0 + Var_52]))->transform_hlds__table_gen__vector_common_type_8_0__vct_8_f_0;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_50 = ((MR_Unsigned) ((MR_hl_field(2, CtorCat_3, (MR_Integer) 0))) & (MR_Integer) 1);

        switch (Var_50) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.type_save_category\'/2", (MR_String) "tabling and foreign enumerations NYI.");
              return;
            }
            break;
          case (MR_Integer) 0:
            *Name_4 = (MR_String) "enum";
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, CtorCat_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_51 = ((MR_Unsigned) ((MR_hl_field(3, CtorCat_3, (MR_Integer) 1))) & (MR_Integer) 3);

            switch (Var_51) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 3:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.type_save_category\'/2", (MR_String) "unexpected category");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.type_save_category\'/2", (MR_String) "unexpected category");
                  return;
                }
                break;
              case (MR_Integer) 0:
                *Name_4 = (MR_String) "any";
                break;
              case (MR_Integer) 2:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.type_save_category\'/2", (MR_String) "unexpected category");
                  return;
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
      switch (((MR_Integer) ((MR_hl_field(3, CtorCat_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_12 = ((MR_Unsigned) ((MR_hl_field(3, CtorCat_3, (MR_Integer) 1))) & (MR_Integer) 3);

            Builtin_4 = ((&transform_hlds__table_gen_vector_common_7[0 + Var_12]))->transform_hlds__table_gen__vector_common_type_7_0__vct_7_f_0;
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
    MR_Word VarModes_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word VarModePos_9;
    MR_Word VarModePoss_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer Var_13;

    Var_5 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 0))));
    Mode_6 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 1))));
    {
      VarModePos_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, VarModePos_9, 0) = ((MR_Box) (Var_5));
      MR_hl_field(0, VarModePos_9, 1) = ((MR_Box) (Mode_6));
      MR_hl_field(0, VarModePos_9, 2) = ((MR_Box) (Offset0_2));
      MR_hl_field(0, VarModePos_9, 3) = NULL;
    }
    Var_13 = (MR_Integer) ((MR_Unsigned) Offset0_2 + (MR_Unsigned) 1);
    transform_hlds__table_gen__allocate_plain_slot_numbers_3_p_0(VarModes_7, Var_13, &VarModePoss_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (VarModePos_9));
      MR_hl_field(1, base, 1) = ((MR_Box) (VarModePoss_10));
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
    MR_Word Goal_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Rest_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word GoalInfo_8 = ((MR_Word) ((MR_hl_field(0, Goal_4, (MR_Integer) 1))));
    MR_Word IMD0_9;
    MR_Word IMD1_10;

    IMD0_9 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_8);
    transform_hlds__table_gen__create_instmap_delta_2_p_0(Rest_5, &IMD1_10);
    hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(IMD0_9, IMD1_10, (MR_Integer) 2, IMD_2);
  }
}

static void MR_CALL 
transform_hlds__table_gen__clone_proc_and_create_call_6_p_0(
  MR_Word PredId_7,
  MR_Word PredInfo_8,
  MR_Integer ProcId_9,
  MR_Word * CallExpr_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_45,
  MR_Word * STATE_VARIABLE_ModuleInfo_46)
{
  MR_Word ProcInfo_12;
  MR_Word ProcContext_13;
  MR_Word ProcVarTable_14;
  MR_Word ProcHeadVars_15;
  MR_Word ProcInstVarSet_16;
  MR_Word ProcHeadModes_17;
  MR_Word ProcDetism_18;
  MR_Word ProcGoal_19;
  MR_Word ProcRttiVarMaps_20;
  MR_Word HasParallelConj_21;
  MR_Word VarNameRemap_22;
  MR_Word NewProcInfo_24;
  MR_Word ModuleName_25;
  MR_String OrigPredName_26;
  MR_Word PredOrFunc_27;
  MR_Word Transform_28;
  MR_String NewPredName_29;
  MR_Word OrigOrigin_30;
  MR_Word Origin_31;
  MR_Word PredContext_32;
  MR_Word PredArgTypes_33;
  MR_Word PredTypeVarSet_34;
  MR_Word PredExistQVars_35;
  MR_Word PredClassContext_36;
  MR_Word PredAssertions_37;
  MR_Word Markers_38;
  MR_Word GoalType_39;
  MR_Integer NewProcId_40;
  MR_Word NewPredInfo_41;
  MR_Word PredicateTable0_42;
  MR_Word NewPredId_43;
  MR_Word PredicateTable_44;
  MR_Word Var_55;

  hlds__hlds_pred__pred_info_proc_info_3_p_0(PredInfo_8, ProcId_9, &ProcInfo_12);
  hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_12, &ProcContext_13);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_12, &ProcVarTable_14);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_12, &ProcHeadVars_15);
  hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_12, &ProcInstVarSet_16);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_12, &ProcHeadModes_17);
  hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo_12, &ProcDetism_18);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_12, &ProcGoal_19);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo_12, &ProcRttiVarMaps_20);
  hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(ProcInfo_12, &HasParallelConj_21);
  hlds__hlds_pred__proc_info_get_var_name_remap_2_p_0(ProcInfo_12, &VarNameRemap_22);
  hlds__hlds_pred__proc_info_create_14_p_0(ProcContext_13, (MR_Word) ((MR_Unsigned) 0U), ProcVarTable_14, ProcHeadVars_15, ProcInstVarSet_16, ProcHeadModes_17, (MR_Integer) 2, ProcDetism_18, ProcGoal_19, ProcRttiVarMaps_20, (MR_Integer) 1, HasParallelConj_21, VarNameRemap_22, &NewProcInfo_24);
  ModuleName_25 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_8);
  OrigPredName_26 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_8);
  PredOrFunc_27 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_8);
  {
    Transform_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Transform_28, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Transform_28, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_27));
  }
  hlds__pred_name__make_transformed_pred_name_3_p_0(OrigPredName_26, Transform_28, &NewPredName_29);
  hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_8, &OrigOrigin_30);
  {
    Origin_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Origin_31, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Origin_31, 1) = ((MR_Box) (OrigOrigin_30));
    MR_hl_field(3, Origin_31, 2) = ((MR_Box) (PredId_7));
    MR_hl_field(3, Origin_31, 3) = ((MR_Box) (ProcId_9));
  }
  hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_8, &PredContext_32);
  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_8, &PredArgTypes_33);
  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_8, &PredTypeVarSet_34);
  hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(PredInfo_8, &PredExistQVars_35);
  hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_8, &PredClassContext_36);
  hlds__hlds_pred__pred_info_get_assertions_2_p_0(PredInfo_8, &PredAssertions_37);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_8, &Markers_38);
  hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_8, &GoalType_39);
  hlds__hlds_pred__pred_info_create_17_p_0(PredOrFunc_27, ModuleName_25, NewPredName_29, PredContext_32, Origin_31, (MR_Word) (((MR_Box) ((MR_Unsigned) 32U))), Markers_38, PredArgTypes_33, PredTypeVarSet_34, PredExistQVars_35, PredClassContext_36, PredAssertions_37, VarNameRemap_22, GoalType_39, NewProcInfo_24, &NewProcId_40, &NewPredInfo_41);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_45, &PredicateTable0_42);
  hlds__pred_table__predicate_table_insert_4_p_0(NewPredInfo_41, &NewPredId_43, PredicateTable0_42, &PredicateTable_44);
  hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredicateTable_44, STATE_VARIABLE_ModuleInfo_0_45, STATE_VARIABLE_ModuleInfo_46);
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (ModuleName_25));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) (NewPredName_29));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    *CallExpr_10 = base;
    MR_hl_field(2, base, 0) = ((MR_Box) (NewPredId_43));
    MR_hl_field(2, base, 1) = ((MR_Box) (NewProcId_40));
    MR_hl_field(2, base, 2) = ((MR_Box) (ProcHeadVars_15));
    MR_hl_field(2, base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(2, base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, base, 5) = ((MR_Box) (Var_55));
  }
}

static MR_Box MR_CALL 
transform_hlds__table_gen__create_new_loop_goal_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_204;

  conv0_HeadVar__2_204 = transform_hlds__table_gen__IntroducedFrom__func__create_new_loop_goal__958__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_204));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__table_gen__create_new_loop_goal_14_p_0(
  MR_Word OrigGoal_15,
  MR_Word Statistics_16,
  MR_Word PredId_17,
  MR_Integer ProcId_18,
  MR_Word HeadVars_19,
  MR_Word NumberedInputVars_20,
  MR_Word NumberedOutputVars_21,
  MR_Word STATE_VARIABLE_VarTable_0_84,
  MR_Word * STATE_VARIABLE_VarTable_85,
  MR_Word STATE_VARIABLE_TableInfo_0_86,
  MR_Word * STATE_VARIABLE_TableInfo_87,
  MR_Word * TableTipVar_24,
  MR_Word * Goal_25,
  MR_Word * Steps_26)
{
  MR_Word OrigNonLocals_27;
  MR_Word OrigGoalInfo_29;
  MR_Word OrigInstMapDelta_30;
  MR_Word Context_31;
  MR_Word ModuleInfo_32;
  MR_Word StatusVar_33;
  MR_Word LookUpGoal_34;
  MR_Word ActiveGoal_35;
  MR_Word TableTipArg_36;
  MR_String DebugArgStr_43;
  MR_String MarkInactiveCode_44;
  MR_String MarkInactiveFailCode_45;
  MR_String MarkActiveFailCode_46;
  MR_Word MarkInactiveGoal_47;
  MR_Word MarkInactiveFailGoal_48;
  MR_Word MarkActiveFailGoal_49;
  MR_Word Detism_50;
  MR_Word CodeModel_51;
  MR_Word InactiveNonLocals_52;
  MR_Word OutputVars_53;
  MR_Word InactiveInstmapDelta_54;
  MR_Word InactiveGoalExpr_55;
  MR_Word InactiveGoalInfo_75;
  MR_Word InactiveGoal_76;
  MR_Word SwitchArms_77;
  MR_Word SwitchExpr_78;
  MR_Word SwitchNonLocals_79;
  MR_Word SwitchGoalInfo_80;
  MR_Word SwitchGoal_81;
  MR_Word GoalExpr_82;
  MR_Word GoalInfo_83;
  MR_Word Var_88;
  MR_Word STATE_VARIABLE_VarTable_91_91;
  MR_String Var_93;
  MR_Word STATE_VARIABLE_VarTable_94_94;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_String Var_97;
  MR_Word Var_98;
  MR_Word Var_99;
  MR_String Var_102;
  MR_String Var_103;
  MR_String Var_105;
  MR_String Var_106;
  MR_String Var_108;
  MR_String Var_109;
  MR_String Var_112;
  MR_String Var_113;
  MR_String Var_115;
  MR_String Var_116;
  MR_String Var_118;
  MR_String Var_119;
  MR_String Var_122;
  MR_String Var_123;
  MR_String Var_125;
  MR_String Var_126;
  MR_String Var_128;
  MR_String Var_129;
  MR_Word Var_131;
  MR_Word Var_133;
  MR_Word Var_136;
  MR_Word Var_140;
  MR_Word Var_143;
  MR_Word Var_147;
  MR_Word Var_150;
  MR_Word Var_152;
  MR_Word Var_180;
  MR_Word Var_181;
  MR_Word Var_183;
  MR_Word Var_184;
  MR_Word Var_185;
  MR_Word Var_189;
  MR_Word Var_190;
  MR_Word Var_194;
  MR_Word Var_195;

  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_19, &OrigNonLocals_27);
  OrigGoalInfo_29 = ((MR_Word) ((MR_hl_field(0, OrigGoal_15, (MR_Integer) 1))));
  OrigInstMapDelta_30 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(OrigGoalInfo_29);
  Context_31 = hlds__hlds_goal__goal_info_get_context_1_f_0(OrigGoalInfo_29);
  ModuleInfo_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TableInfo_0_86, (MR_Integer) 0))));
  Var_88 = transform_hlds__table_gen__loop_status_type_0_f_0();
  transform_hlds__table_gen__generate_plain_call_table_lookup_goal_16_p_0(Var_88, (MR_String) "table_loop_setup_shortcut", (MR_String) "MR_tbl_loop_setup", NumberedInputVars_20, PredId_17, ProcId_18, Statistics_16, Context_31, STATE_VARIABLE_VarTable_0_84, &STATE_VARIABLE_VarTable_91_91, STATE_VARIABLE_TableInfo_0_86, STATE_VARIABLE_TableInfo_87, TableTipVar_24, &StatusVar_33, &LookUpGoal_34, Steps_26);
  Var_93 = transform_hlds__table_gen__infinite_recursion_msg_0_f_0();
  transform_hlds__table_gen__generate_error_goal_6_p_0(*STATE_VARIABLE_TableInfo_87, Context_31, Var_93, STATE_VARIABLE_VarTable_91_91, &STATE_VARIABLE_VarTable_94_94, &ActiveGoal_35);
  Var_97 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
  Var_98 = parse_tree__prog_mode__in_mode_0_f_0();
  {
    Var_96 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_96, 0) = ((MR_Box) (Var_97));
    MR_hl_field(0, Var_96, 1) = ((MR_Box) (Var_98));
  }
  {
    Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_95, 0) = ((MR_Box) (Var_96));
  }
  Var_99 = transform_hlds__table_gen__trie_node_type_0_f_0();
  {
    TableTipArg_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TableTipArg_36, 0) = ((MR_Box) (*TableTipVar_24));
    MR_hl_field(0, TableTipArg_36, 1) = ((MR_Box) (Var_95));
    MR_hl_field(0, TableTipArg_36, 2) = ((MR_Box) (Var_99));
    MR_hl_field(0, TableTipArg_36, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  DebugArgStr_43 = transform_hlds__table_gen__get_debug_arg_string_1_f_0(*STATE_VARIABLE_TableInfo_87);
  Var_109 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
  Var_108 = mercury__string__f_43_43_2_f_0(Var_109, (MR_String) ");\n");
  Var_106 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_108);
  Var_105 = mercury__string__f_43_43_2_f_0(DebugArgStr_43, Var_106);
  Var_103 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_105);
  Var_102 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_loop_mark_as_inactive", Var_103);
  MarkInactiveCode_44 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_102);
  Var_119 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
  Var_118 = mercury__string__f_43_43_2_f_0(Var_119, (MR_String) ");\n");
  Var_116 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_118);
  Var_115 = mercury__string__f_43_43_2_f_0(DebugArgStr_43, Var_116);
  Var_113 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_115);
  Var_112 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_loop_mark_as_inactive_and_fail", Var_113);
  MarkInactiveFailCode_45 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_112);
  Var_129 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
  Var_128 = mercury__string__f_43_43_2_f_0(Var_129, (MR_String) ");\n");
  Var_126 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_128);
  Var_125 = mercury__string__f_43_43_2_f_0(DebugArgStr_43, Var_126);
  Var_123 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_125);
  Var_122 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_loop_mark_as_active_and_fail", Var_123);
  MarkActiveFailCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_122);
  {
    Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_131, 0) = ((MR_Box) (TableTipArg_36));
    MR_hl_field(1, Var_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_133 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
  Var_136 = transform_hlds__table_gen__tabling_c_attributes_dupl_0_f_0();
  transform_hlds__table_gen__table_call_foreign_proc_11_p_0(ModuleInfo_32, (MR_String) "table_loop_mark_as_inactive", Var_131, (MR_Word) ((MR_Unsigned) 0U), Var_133, (MR_Integer) 0, (MR_Integer) 2, Var_136, MarkInactiveCode_44, Context_31, &MarkInactiveGoal_47);
  Var_140 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
  Var_143 = transform_hlds__table_gen__tabling_c_attributes_dupl_0_f_0();
  transform_hlds__table_gen__table_call_foreign_proc_11_p_0(ModuleInfo_32, (MR_String) "table_loop_mark_as_inactive_and_fail", Var_131, (MR_Word) ((MR_Unsigned) 0U), Var_140, (MR_Integer) 7, (MR_Integer) 2, Var_143, MarkInactiveFailCode_45, Context_31, &MarkInactiveFailGoal_48);
  Var_147 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
  Var_150 = transform_hlds__table_gen__tabling_c_attributes_dupl_0_f_0();
  transform_hlds__table_gen__table_call_foreign_proc_11_p_0(ModuleInfo_32, (MR_String) "table_loop_mark_as_active_and_fail", Var_131, (MR_Word) ((MR_Unsigned) 0U), Var_147, (MR_Integer) 7, (MR_Integer) 2, Var_150, MarkActiveFailCode_46, Context_31, &MarkActiveFailGoal_49);
  Detism_50 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(OrigGoalInfo_29);
  hlds__code_model__determinism_to_code_model_2_p_0(Detism_50, &CodeModel_51);
  {
    Var_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_152, 0) = ((MR_Box) (*TableTipVar_24));
    MR_hl_field(1, Var_152, 1) = ((MR_Box) (HeadVars_19));
  }
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_152, &InactiveNonLocals_52);
  OutputVars_53 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), (MR_Word) (&transform_hlds__table_gen_scalar_common_1[2]), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[8]), NumberedOutputVars_21);
  InactiveInstmapDelta_54 = hlds__instmap__instmap_delta_bind_vars_1_f_0(OutputVars_53);
  switch (CodeModel_51) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_155;
        MR_Word Var_156;

        {
          Var_156 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_156, 0) = ((MR_Box) (MarkInactiveGoal_47));
          MR_hl_field(1, Var_156, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_155, 0) = ((MR_Box) (OrigGoal_15));
          MR_hl_field(1, Var_155, 1) = ((MR_Box) (Var_156));
        }
        {
          InactiveGoalExpr_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, InactiveGoalExpr_55, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, InactiveGoalExpr_55, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, InactiveGoalExpr_55, 2) = ((MR_Box) (Var_155));
        }
        *STATE_VARIABLE_VarTable_85 = STATE_VARIABLE_VarTable_94_94;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word AfterGoalExpr_66;
        MR_Word AfterInstMapDelta_67;
        MR_Word AfterGoalInfo_68;
        MR_Word AfterGoal_69;
        MR_Word FirstGoalExpr_70;
        MR_Word OrigGINonLocals_71;
        MR_Word FirstNonlocals_72;
        MR_Word FirstGoalInfo_73;
        MR_Word FirstGoal_74;
        MR_Word Var_166;
        MR_Word Var_167;
        MR_Word Var_169;
        MR_Word Var_173;
        MR_Word Var_174;
        MR_Word Var_176;
        MR_Word Var_177;

        {
          Var_167 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_167, 0) = ((MR_Box) (MarkActiveFailGoal_49));
          MR_hl_field(1, Var_167, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_166 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_166, 0) = ((MR_Box) (MarkInactiveGoal_47));
          MR_hl_field(1, Var_166, 1) = ((MR_Box) (Var_167));
        }
        {
          AfterGoalExpr_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, AfterGoalExpr_66, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, AfterGoalExpr_66, 1) = ((MR_Box) (Var_166));
        }
        hlds__instmap__instmap_delta_init_reachable_1_p_0(&AfterInstMapDelta_67);
        Var_169 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *TableTipVar_24);
        transform_hlds__table_gen__goal_info_init_hide_6_p_0(Var_169, AfterInstMapDelta_67, (MR_Integer) 2, (MR_Integer) 2, Context_31, &AfterGoalInfo_68);
        {
          AfterGoal_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, AfterGoal_69, 0) = ((MR_Box) (AfterGoalExpr_66));
          MR_hl_field(0, AfterGoal_69, 1) = ((MR_Box) (AfterGoalInfo_68));
        }
        {
          Var_174 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_174, 0) = ((MR_Box) (AfterGoal_69));
          MR_hl_field(1, Var_174, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_173 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_173, 0) = ((MR_Box) (OrigGoal_15));
          MR_hl_field(1, Var_173, 1) = ((MR_Box) (Var_174));
        }
        {
          FirstGoalExpr_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, FirstGoalExpr_70, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, FirstGoalExpr_70, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, FirstGoalExpr_70, 2) = ((MR_Box) (Var_173));
        }
        OrigGINonLocals_71 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(OrigGoalInfo_29);
        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *TableTipVar_24, OrigGINonLocals_71, &FirstNonlocals_72);
        hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(FirstNonlocals_72, OrigGoalInfo_29, &FirstGoalInfo_73);
        {
          FirstGoal_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FirstGoal_74, 0) = ((MR_Box) (FirstGoalExpr_70));
          MR_hl_field(0, FirstGoal_74, 1) = ((MR_Box) (FirstGoalInfo_73));
        }
        {
          Var_177 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_177, 0) = ((MR_Box) (MarkInactiveFailGoal_48));
          MR_hl_field(1, Var_177, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_176 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_176, 0) = ((MR_Box) (FirstGoal_74));
          MR_hl_field(1, Var_176, 1) = ((MR_Box) (Var_177));
        }
        {
          InactiveGoalExpr_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, InactiveGoalExpr_55, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, InactiveGoalExpr_55, 1) = ((MR_Box) (Var_176));
        }
        *STATE_VARIABLE_VarTable_85 = STATE_VARIABLE_VarTable_94_94;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word InstMapDelta_56;
        MR_Word Unifies_57;
        MR_Word NewVars_58;
        MR_Word Renaming_59;
        MR_Word RenamedOrigGoal_60;
        MR_Word ThenGoalExpr_61;
        MR_Word ThenVars_62;
        MR_Word ThenNonLocals_63;
        MR_Word ThenGoalInfo_64;
        MR_Word ThenGoal_65;
        MR_Word Var_160;
        MR_Word Var_161;
        MR_Word Var_163;

        InstMapDelta_56 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(OrigGoalInfo_29);
        hlds__goal_util__create_renaming_7_p_0(OutputVars_53, InstMapDelta_56, STATE_VARIABLE_VarTable_94_94, STATE_VARIABLE_VarTable_85, &Unifies_57, &NewVars_58, &Renaming_59);
        hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Renaming_59, OrigGoal_15, &RenamedOrigGoal_60);
        {
          Var_161 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_161, 0) = ((MR_Box) (MarkInactiveGoal_47));
          MR_hl_field(1, Var_161, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_160 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Unifies_57, Var_161);
        {
          ThenGoalExpr_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ThenGoalExpr_61, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, ThenGoalExpr_61, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, ThenGoalExpr_61, 2) = ((MR_Box) (Var_160));
        }
        {
          Var_163 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_163, 0) = ((MR_Box) (*TableTipVar_24));
          MR_hl_field(1, Var_163, 1) = ((MR_Box) (OutputVars_53));
        }
        ThenVars_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[2]), Var_163, NewVars_58);
        parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ThenVars_62, &ThenNonLocals_63);
        transform_hlds__table_gen__goal_info_init_hide_6_p_0(ThenNonLocals_63, InactiveInstmapDelta_54, Detism_50, (MR_Integer) 2, Context_31, &ThenGoalInfo_64);
        {
          ThenGoal_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ThenGoal_65, 0) = ((MR_Box) (ThenGoalExpr_61));
          MR_hl_field(0, ThenGoal_65, 1) = ((MR_Box) (ThenGoalInfo_64));
        }
        {
          InactiveGoalExpr_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, InactiveGoalExpr_55, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, InactiveGoalExpr_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, InactiveGoalExpr_55, 2) = ((MR_Box) (RenamedOrigGoal_60));
          MR_hl_field(3, InactiveGoalExpr_55, 3) = ((MR_Box) (ThenGoal_65));
          MR_hl_field(3, InactiveGoalExpr_55, 4) = ((MR_Box) (MarkInactiveFailGoal_48));
        }
      }
      break;
  }
  transform_hlds__table_gen__goal_info_init_hide_6_p_0(InactiveNonLocals_52, InactiveInstmapDelta_54, Detism_50, (MR_Integer) 2, Context_31, &InactiveGoalInfo_75);
  {
    InactiveGoal_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InactiveGoal_76, 0) = ((MR_Box) (InactiveGoalExpr_55));
    MR_hl_field(0, InactiveGoal_76, 1) = ((MR_Box) (InactiveGoalInfo_75));
  }
  Var_181 = transform_hlds__table_gen__loop_active_cons_id_0_f_0();
  {
    Var_180 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_180, 0) = ((MR_Box) (Var_181));
    MR_hl_field(0, Var_180, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_180, 2) = ((MR_Box) (ActiveGoal_35));
  }
  Var_185 = transform_hlds__table_gen__loop_inactive_cons_id_0_f_0();
  {
    Var_184 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_184, 0) = ((MR_Box) (Var_185));
    MR_hl_field(0, Var_184, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_184, 2) = ((MR_Box) (InactiveGoal_76));
  }
  {
    Var_183 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_183, 0) = ((MR_Box) (Var_184));
    MR_hl_field(1, Var_183, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    SwitchArms_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SwitchArms_77, 0) = ((MR_Box) (Var_180));
    MR_hl_field(1, SwitchArms_77, 1) = ((MR_Box) (Var_183));
  }
  {
    SwitchExpr_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, SwitchExpr_78, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, SwitchExpr_78, 1) = ((MR_Box) (StatusVar_33));
    MR_hl_field(3, SwitchExpr_78, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, SwitchExpr_78, 3) = ((MR_Box) (SwitchArms_77));
  }
  {
    Var_190 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_190, 0) = ((MR_Box) (*TableTipVar_24));
    MR_hl_field(1, Var_190, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_189 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_189, 0) = ((MR_Box) (StatusVar_33));
    MR_hl_field(1, Var_189, 1) = ((MR_Box) (Var_190));
  }
  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_189, InactiveNonLocals_52, &SwitchNonLocals_79);
  transform_hlds__table_gen__goal_info_init_hide_6_p_0(SwitchNonLocals_79, InactiveInstmapDelta_54, Detism_50, (MR_Integer) 2, Context_31, &SwitchGoalInfo_80);
  {
    SwitchGoal_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SwitchGoal_81, 0) = ((MR_Box) (SwitchExpr_78));
    MR_hl_field(0, SwitchGoal_81, 1) = ((MR_Box) (SwitchGoalInfo_80));
  }
  {
    Var_195 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_195, 0) = ((MR_Box) (SwitchGoal_81));
    MR_hl_field(1, Var_195, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_194 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_194, 0) = ((MR_Box) (LookUpGoal_34));
    MR_hl_field(1, Var_194, 1) = ((MR_Box) (Var_195));
  }
  {
    GoalExpr_82 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, GoalExpr_82, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, GoalExpr_82, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, GoalExpr_82, 2) = ((MR_Box) (Var_194));
  }
  transform_hlds__table_gen__goal_info_init_hide_6_p_0(OrigNonLocals_27, OrigInstMapDelta_30, Detism_50, (MR_Integer) 2, Context_31, &GoalInfo_83);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_25 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_82));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_83));
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__loop_status_type_0_f_0(void)
{
  MR_Word Type_2;
  MR_Word TB_3;
  MR_Word Var_4;
  MR_Word Var_6;

  TB_3 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_6, 0) = ((MR_Box) (TB_3));
    MR_hl_field(1, Var_6, 1) = ((MR_Box) ((MR_String) "loop_status"));
  }
  {
    Var_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_4, 0) = ((MR_Box) (Var_6));
    MR_hl_field(0, Var_4, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  parse_tree__prog_type__construct_type_3_p_0(Var_4, (MR_Word) ((MR_Unsigned) 0U), &Type_2);
  return Type_2;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__loop_active_cons_id_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word SymName_2;
  MR_Word TypeCtor_3;
  MR_Word Var_5;
  MR_Word TypeModule_7;
  MR_Word TypeSymName_8;

  Var_5 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    SymName_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_2, 0) = ((MR_Box) (Var_5));
    MR_hl_field(1, SymName_2, 1) = ((MR_Box) ((MR_String) "loop_active"));
  }
  TypeModule_7 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    TypeSymName_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypeSymName_8, 0) = ((MR_Box) (TypeModule_7));
    MR_hl_field(1, TypeSymName_8, 1) = ((MR_Box) ((MR_String) "loop_status"));
  }
  {
    TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_3, 0) = ((MR_Box) (TypeSymName_8));
    MR_hl_field(0, TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    HeadVar__1_1 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, HeadVar__1_1, 1) = ((MR_Box) (SymName_2));
    MR_hl_field(3, HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(3, HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
  }
  return HeadVar__1_1;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__loop_inactive_cons_id_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word SymName_2;
  MR_Word TypeCtor_3;
  MR_Word Var_5;
  MR_Word TypeModule_7;
  MR_Word TypeSymName_8;

  Var_5 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    SymName_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_2, 0) = ((MR_Box) (Var_5));
    MR_hl_field(1, SymName_2, 1) = ((MR_Box) ((MR_String) "loop_inactive"));
  }
  TypeModule_7 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    TypeSymName_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypeSymName_8, 0) = ((MR_Box) (TypeModule_7));
    MR_hl_field(1, TypeSymName_8, 1) = ((MR_Box) ((MR_String) "loop_status"));
  }
  {
    TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_3, 0) = ((MR_Box) (TypeSymName_8));
    MR_hl_field(0, TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    HeadVar__1_1 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, HeadVar__1_1, 1) = ((MR_Box) (SymName_2));
    MR_hl_field(3, HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(3, HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
  }
  return HeadVar__1_1;
}

static MR_Word MR_CALL 
transform_hlds__table_gen__tabling_c_attributes_dupl_0_f_0(void)
{
  MR_Word Attrs_2;
  MR_Word Attrs0_3;
  MR_Word Attrs1_4;
  MR_Word Attrs2_5;

  Attrs0_3 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
  parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, Attrs0_3, &Attrs1_4);
  parse_tree__prog_data_foreign__set_affects_liveness_3_p_0((MR_Integer) 1, Attrs1_4, &Attrs2_5);
  parse_tree__prog_data_foreign__set_may_duplicate_3_p_0((MR_Word) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_3[8])), Attrs2_5, &Attrs_2);
  return Attrs_2;
}

static void MR_CALL 
transform_hlds__table_gen__generate_error_goal_6_p_0(
  MR_Word TableInfo_7,
  MR_Word Context_8,
  MR_String Msg_9,
  MR_Word STATE_VARIABLE_VarTable_0_26,
  MR_Word * STATE_VARIABLE_VarTable_27,
  MR_Word * Goal_11)
{
  MR_Word ModuleInfo_12 = ((MR_Word) ((MR_hl_field(0, TableInfo_7, (MR_Integer) 0))));
  MR_Word PredInfo_13 = ((MR_Word) ((MR_hl_field(0, TableInfo_7, (MR_Integer) 1))));
  MR_Word ModuleName_14;
  MR_String PredName_15;
  MR_Integer Arity_16;
  MR_Word PredOrFunc_17;
  MR_String PredOrFuncStr_18;
  MR_String PredNameStr_19;
  MR_String Message_20;
  MR_Word MessageStrGoal_21;
  MR_Word MessageVar_22;
  MR_Word CallGoal_23;
  MR_Word GoalExpr_24;
  MR_Word GoalInfo_25;
  MR_Word Var_28;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_String Var_60;
  MR_String Var_68;
  MR_String Var_69;
  MR_String Var_71;
  MR_String Var_72;
  MR_String Var_74;
  MR_Word GoalInfo0_75;

  ModuleName_14 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_13);
  PredName_15 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_13);
  Arity_16 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_13);
  PredOrFunc_17 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_13);
  PredOrFuncStr_18 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_17);
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (ModuleName_14));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) (PredName_15));
  }
  PredNameStr_19 = mdbcomp__sym_name__sym_name_to_string_1_f_0(Var_28);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_3[0]), Arity_16, &Var_60);
  Var_68 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_60);
  Var_69 = mercury__string__f_43_43_2_f_0(PredNameStr_19, Var_68);
  Var_71 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_69);
  Var_72 = mercury__string__f_43_43_2_f_0(PredOrFuncStr_18, Var_71);
  Var_74 = mercury__string__f_43_43_2_f_0((MR_String) " in ", Var_72);
  Message_20 = mercury__string__f_43_43_2_f_0(Msg_9, Var_74);
  hlds__make_goal__make_string_const_construction_alloc_6_p_0(Message_20, (MR_String) "Message", &MessageStrGoal_21, &MessageVar_22, STATE_VARIABLE_VarTable_0_26, STATE_VARIABLE_VarTable_27);
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (MessageVar_22));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_43 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
  transform_hlds__table_gen__table_plain_call_8_p_0(ModuleInfo_12, (MR_String) "table_error", Var_42, Var_43, (MR_Integer) 6, (MR_Integer) 0, Context_8, &CallGoal_23);
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (CallGoal_23));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (MessageStrGoal_21));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_49));
  }
  {
    GoalExpr_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, GoalExpr_24, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, GoalExpr_24, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, GoalExpr_24, 2) = ((MR_Box) (Var_48));
  }
  Var_51 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  Var_52 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
  hlds__hlds_goal__goal_info_init_6_p_0(Var_51, Var_52, (MR_Integer) 6, (MR_Integer) 2, Context_8, &GoalInfo0_75);
  hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 8, GoalInfo0_75, &GoalInfo_25);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_24));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_25));
  }
}

static void MR_CALL 
transform_hlds__table_gen__table_plain_call_8_p_0(
  MR_Word ModuleInfo_9,
  MR_String PredName_10,
  MR_Word ArgVars_11,
  MR_Word InstMapDelta_12,
  MR_Word Detism_13,
  MR_Word Purity_14,
  MR_Word Context_15,
  MR_Word * Goal_16)
{
  MR_bool succeeded;
  MR_Word BuiltinModule_17;
  MR_Word Features0_18;
  MR_Word Features_19;

  BuiltinModule_17 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  switch (Purity_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      Features0_18 = (MR_Word) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[43]));
      break;
    case (MR_Integer) 0:
      Features0_18 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
  succeeded = (Detism_13 == (MR_Integer) 7);
  if (succeeded)
    {
      Features_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Features_19, 0) = ((MR_Box) ((MR_Integer) 6));
      MR_hl_field(1, Features_19, 1) = ((MR_Box) (Features0_18));
    }
  else
    Features_19 = Features0_18;
  hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_9, (MR_Integer) 0, BuiltinModule_17, PredName_10, (MR_Word) ((MR_Unsigned) 0U), ArgVars_11, InstMapDelta_12, (MR_Word) ((MR_Unsigned) 0U), Detism_13, Purity_14, Features_19, Context_15, Goal_16);
}

static MR_String MR_CALL 
transform_hlds__table_gen__infinite_recursion_msg_0_f_0(void)
{
  return (MR_String) "detected infinite recursion";
}

static MR_Box MR_CALL 
transform_hlds__table_gen__generate_plain_call_table_lookup_goal_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_122;

  conv0_HeadVar__2_122 = transform_hlds__table_gen__IntroducedFrom__func__generate_plain_call_table_lookup_goal__2334__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_122));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__table_gen__generate_plain_call_table_lookup_goal_16_p_0(
  MR_Word StatusType_17,
  MR_String PredName_18,
  MR_String SetupMacroName_19,
  MR_Word NumberedVars_20,
  MR_Word PredId_21,
  MR_Integer ProcId_22,
  MR_Word Statistics_23,
  MR_Word Context_24,
  MR_Word STATE_VARIABLE_VarTable_0_53,
  MR_Word * STATE_VARIABLE_VarTable_54,
  MR_Word STATE_VARIABLE_TableInfo_0_55,
  MR_Word * STATE_VARIABLE_TableInfo_56,
  MR_Word * TableTipVar_27,
  MR_Word * StatusVar_28,
  MR_Word * Goal_29,
  MR_Word * Steps_30)
{
  MR_Word TableTipArg_31;
  MR_Word InfoArg_32;
  MR_Word LookupForeignArgs_33;
  MR_Word LookupPrefixGoals_34;
  MR_String LookupCodeStr_35;
  MR_String CallTableTipAssignStr_36;
  MR_Word ModuleInfo_37;
  MR_Word StatusArg_39;
  MR_String DebugArgStr_40;
  MR_String BackArgStr_41;
  MR_String MainPredCodeStr_42;
  MR_Word Args_43;
  MR_Word BoundVars_44;
  MR_String CodeStr_45;
  MR_Word SetupGoal0_46;
  MR_Word SetupGoal_47;
  MR_Word LookupSetupGoals_48;
  MR_Word GoalExpr_49;
  MR_Word Vars_50;
  MR_Word NonLocals_51;
  MR_Word GoalInfo_52;
  MR_Word STATE_VARIABLE_VarTable_57_57;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_String Var_67;
  MR_String Var_68;
  MR_String Var_70;
  MR_String Var_71;
  MR_String Var_73;
  MR_String Var_74;
  MR_String Var_76;
  MR_String Var_78;
  MR_String Var_80;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_85;
  MR_String Var_88;
  MR_String Var_90;
  MR_String Var_92;
  MR_String Var_94;
  MR_String Var_96;
  MR_String Var_98;
  MR_String Var_99;
  MR_Word Var_100;
  MR_Word Var_103;
  MR_Word Var_104;
  MR_Word Var_108;
  MR_Word Var_109;
  MR_Word Var_110;

  transform_hlds__table_gen__generate_call_table_lookup_goals_17_p_0(NumberedVars_20, PredId_21, ProcId_22, Statistics_23, Context_24, STATE_VARIABLE_VarTable_0_53, &STATE_VARIABLE_VarTable_57_57, STATE_VARIABLE_TableInfo_0_55, STATE_VARIABLE_TableInfo_56, Steps_30, TableTipVar_27, &TableTipArg_31, &InfoArg_32, &LookupForeignArgs_33, &LookupPrefixGoals_34, &LookupCodeStr_35, &CallTableTipAssignStr_36);
  transform_hlds__table_gen__generate_new_table_var_6_p_0((MR_String) "Status", StatusType_17, (MR_Integer) 1, STATE_VARIABLE_VarTable_57_57, STATE_VARIABLE_VarTable_54, StatusVar_28);
  ModuleInfo_37 = ((MR_Word) ((MR_hl_field(0, *STATE_VARIABLE_TableInfo_56, (MR_Integer) 0))));
  Var_64 = parse_tree__prog_mode__out_mode_0_f_0();
  {
    Var_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_63, 0) = ((MR_Box) ((MR_String) "status"));
    MR_hl_field(0, Var_63, 1) = ((MR_Box) (Var_64));
  }
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
  }
  {
    StatusArg_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, StatusArg_39, 0) = ((MR_Box) (*StatusVar_28));
    MR_hl_field(0, StatusArg_39, 1) = ((MR_Box) (Var_62));
    MR_hl_field(0, StatusArg_39, 2) = ((MR_Box) (StatusType_17));
    MR_hl_field(0, StatusArg_39, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  DebugArgStr_40 = transform_hlds__table_gen__get_debug_arg_string_1_f_0(*STATE_VARIABLE_TableInfo_56);
  BackArgStr_41 = transform_hlds__table_gen__get_back_arg_string_1_f_0(*STATE_VARIABLE_TableInfo_56);
  Var_80 = mercury__string__f_43_43_2_f_0((MR_String) "status", (MR_String) ");\n");
  Var_78 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_80);
  Var_76 = mercury__string__f_43_43_2_f_0((MR_String) "cur_node", Var_78);
  Var_74 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_76);
  Var_73 = mercury__string__f_43_43_2_f_0(BackArgStr_41, Var_74);
  Var_71 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_73);
  Var_70 = mercury__string__f_43_43_2_f_0(DebugArgStr_40, Var_71);
  Var_68 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_70);
  Var_67 = mercury__string__f_43_43_2_f_0(SetupMacroName_19, Var_68);
  MainPredCodeStr_42 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_67);
  {
    Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_83, 0) = ((MR_Box) (StatusArg_39));
    MR_hl_field(1, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_82, 0) = ((MR_Box) (TableTipArg_31));
    MR_hl_field(1, Var_82, 1) = ((MR_Box) (Var_83));
  }
  {
    Args_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Args_43, 0) = ((MR_Box) (InfoArg_32));
    MR_hl_field(1, Args_43, 1) = ((MR_Box) (Var_82));
  }
  {
    Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_85, 0) = ((MR_Box) (*StatusVar_28));
    MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    BoundVars_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, BoundVars_44, 0) = ((MR_Box) (*TableTipVar_27));
    MR_hl_field(1, BoundVars_44, 1) = ((MR_Box) (Var_85));
  }
  Var_99 = mercury__string__f_43_43_2_f_0(CallTableTipAssignStr_36, MainPredCodeStr_42);
  Var_98 = mercury__string__f_43_43_2_f_0(LookupCodeStr_35, Var_99);
  Var_96 = mercury__string__f_43_43_2_f_0((MR_String) ";\n\n", Var_98);
  Var_94 = mercury__string__f_43_43_2_f_0((MR_String) "next_node", Var_96);
  Var_92 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_TrieNode ", Var_94);
  Var_90 = mercury__string__f_43_43_2_f_0((MR_String) ";\n", Var_92);
  Var_88 = mercury__string__f_43_43_2_f_0((MR_String) "cur_node", Var_90);
  CodeStr_45 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_TrieNode ", Var_88);
  Var_100 = hlds__instmap__instmap_delta_bind_vars_1_f_0(BoundVars_44);
  Var_103 = transform_hlds__table_gen__tabling_c_attributes_no_dupl_0_f_0();
  transform_hlds__table_gen__table_call_foreign_proc_11_p_0(ModuleInfo_37, PredName_18, Args_43, LookupForeignArgs_33, Var_100, (MR_Integer) 0, (MR_Integer) 2, Var_103, CodeStr_45, Context_24, &SetupGoal0_46);
  transform_hlds__table_gen__attach_call_table_tip_2_p_0(SetupGoal0_46, &SetupGoal_47);
  {
    Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_104, 0) = ((MR_Box) (SetupGoal_47));
    MR_hl_field(1, Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  LookupSetupGoals_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), LookupPrefixGoals_34, Var_104);
  {
    GoalExpr_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, GoalExpr_49, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, GoalExpr_49, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, GoalExpr_49, 2) = ((MR_Box) (LookupSetupGoals_48));
  }
  Vars_50 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), (MR_Word) (&transform_hlds__table_gen_scalar_common_1[2]), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[7]), NumberedVars_20);
  {
    Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_109, 0) = ((MR_Box) (*TableTipVar_27));
    MR_hl_field(1, Var_109, 1) = ((MR_Box) (Vars_50));
  }
  {
    Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_108, 0) = ((MR_Box) (*StatusVar_28));
    MR_hl_field(1, Var_108, 1) = ((MR_Box) (Var_109));
  }
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_108, &NonLocals_51);
  Var_110 = hlds__instmap__instmap_delta_bind_vars_1_f_0(BoundVars_44);
  transform_hlds__table_gen__goal_info_init_hide_6_p_0(NonLocals_51, Var_110, (MR_Integer) 0, (MR_Integer) 2, Context_24, &GoalInfo_52);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_29 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_49));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_52));
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__tabling_c_attributes_no_dupl_0_f_0(void)
{
  MR_Word Attrs_2;
  MR_Word Attrs0_3;
  MR_Word Attrs1_4;

  Attrs0_3 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
  parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, Attrs0_3, &Attrs1_4);
  parse_tree__prog_data_foreign__set_affects_liveness_3_p_0((MR_Integer) 1, Attrs1_4, &Attrs_2);
  return Attrs_2;
}

static MR_String MR_CALL 
transform_hlds__table_gen__get_back_arg_string_1_f_0(
  MR_Word TableInfo_3)
{
  MR_String BackArgStr_4;
  MR_Word ProcInfo_5 = ((MR_Word) ((MR_hl_field(0, TableInfo_3, (MR_Integer) 2))));
  MR_Word MaybeAttributes_6;

  hlds__hlds_pred__proc_info_get_table_attributes_2_p_0(ProcInfo_5, &MaybeAttributes_6);
  if ((MaybeAttributes_6 == (MR_Word) ((MR_Unsigned) 0U)))
    BackArgStr_4 = (MR_String) "MR_FALSE";
  else
  {
    MR_Word Attributes_7 = ((MR_Word) ((MR_hl_field(1, MaybeAttributes_6, (MR_Integer) 0))));
    MR_Word MaybeSizeLimit_8 = ((MR_Word) ((MR_hl_field(0, Attributes_7, (MR_Integer) 1))));

    if ((MaybeSizeLimit_8 == (MR_Word) ((MR_Unsigned) 0U)))
      BackArgStr_4 = (MR_String) "MR_FALSE";
    else
      BackArgStr_4 = (MR_String) "MR_TRUE";
  }
  return BackArgStr_4;
}

static MR_String MR_CALL 
transform_hlds__table_gen__get_debug_arg_string_1_f_0(
  MR_Word TableInfo_3)
{
  MR_String DebugArgStr_4;
  MR_Word ModuleInfo_5 = ((MR_Word) ((MR_hl_field(0, TableInfo_3, (MR_Integer) 0))));
  MR_Word Globals_6;
  MR_Word TableDebug_7;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_6);
  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 345, &TableDebug_7);
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

static void MR_CALL 
transform_hlds__table_gen__goal_info_init_hide_6_p_0(
  MR_Word NonLocals_7,
  MR_Word InstmapDelta_8,
  MR_Word Detism_9,
  MR_Word Purity_10,
  MR_Word Context_11,
  MR_Word * GoalInfo_12)
{
  MR_Word GoalInfo0_13;

  hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_7, InstmapDelta_8, Detism_9, Purity_10, Context_11, &GoalInfo0_13);
  hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 8, GoalInfo0_13, GoalInfo_12);
}

static void MR_CALL 
transform_hlds__table_gen__table_call_foreign_proc_11_p_0(
  MR_Word ModuleInfo_12,
  MR_String PredName_13,
  MR_Word Args_14,
  MR_Word ExtraArgs_15,
  MR_Word InstMapDelta_16,
  MR_Word Detism_17,
  MR_Word Purity_18,
  MR_Word Attributes_19,
  MR_String Code_20,
  MR_Word Context_21,
  MR_Word * Goal_22)
{
  MR_bool succeeded;
  MR_Word Features0_23;
  MR_Word Features_24;
  MR_Word BuiltinModule_25;

  switch (Purity_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      Features0_23 = (MR_Word) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[43]));
      break;
    case (MR_Integer) 0:
      Features0_23 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
  succeeded = (Detism_17 == (MR_Integer) 7);
  if (succeeded)
    {
      Features_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Features_24, 0) = ((MR_Box) ((MR_Integer) 6));
      MR_hl_field(1, Features_24, 1) = ((MR_Box) (Features0_23));
    }
  else
    Features_24 = Features0_23;
  BuiltinModule_25 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  hlds__goal_util__generate_call_foreign_proc_17_p_0(ModuleInfo_12, (MR_Integer) 0, BuiltinModule_25, PredName_13, (MR_Word) ((MR_Unsigned) 0U), Args_14, ExtraArgs_15, InstMapDelta_16, (MR_Word) ((MR_Unsigned) 0U), Detism_17, Purity_18, Features_24, Attributes_19, (MR_Word) ((MR_Unsigned) 0U), Code_20, Context_21, Goal_22);
}

static void MR_CALL 
transform_hlds__table_gen__attach_call_table_tip_2_p_0(
  MR_Word Goal0_3,
  MR_Word * Goal_4)
{
  MR_Word GoalExpr_5 = ((MR_Word) ((MR_hl_field(0, Goal0_3, (MR_Integer) 0))));
  MR_Word GoalInfo0_6 = ((MR_Word) ((MR_hl_field(0, Goal0_3, (MR_Integer) 1))));
  MR_Word Features0_7;
  MR_Word Features_8;
  MR_Word GoalInfo_9;

  Features0_7 = hlds__hlds_goal__goal_info_get_features_1_f_0(GoalInfo0_6);
  mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0), ((MR_Box) ((MR_Integer) 5)), Features0_7, &Features_8);
  hlds__hlds_goal__goal_info_set_features_3_p_0(Features_8, GoalInfo0_6, &GoalInfo_9);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_5));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_9));
  }
}

static void MR_CALL 
transform_hlds__table_gen__generate_call_table_lookup_goals_17_p_0(
  MR_Word NumberedVars_18,
  MR_Word PredId_19,
  MR_Integer ProcId_20,
  MR_Word Statistics_21,
  MR_Word Context_22,
  MR_Word STATE_VARIABLE_VarTable_0_44,
  MR_Word * STATE_VARIABLE_VarTable_45,
  MR_Word STATE_VARIABLE_TableInfo_0_46,
  MR_Word * STATE_VARIABLE_TableInfo_47,
  MR_Word * InputSteps_25,
  MR_Word * CallTableTipVar_26,
  MR_Word * CallTableTipArg_27,
  MR_Word * InfoArg_28,
  MR_Word * LookupArgs_29,
  MR_Word * PrefixGoals_30,
  MR_String * MainCodeStr_31,
  MR_String * CallTableTipVarCodeStr_32)
{
  MR_String InfoToPtrCodeStr_33;
  MR_Word GetTableInfoGoal_34;
  MR_Word MaybeStatsRef_35;
  MR_String DebugArgStr_36;
  MR_String BackArgStr_37;
  MR_Word LookupPrefixGoals_38;
  MR_String LookupCodeStr_39;
  MR_String StatsCodeStr_42;
  MR_String Var_49;
  MR_String Var_51;
  MR_String Var_53;
  MR_String Var_55;
  MR_Word STATE_VARIABLE_VarTable_59_59;
  MR_Word STATE_VARIABLE_VarTable_61_61;
  MR_Word Var_63;
  MR_Word STATE_VARIABLE_VarTable_67_67;
  MR_String Var_68;
  MR_Word Var_69;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_String Var_78;
  MR_String Var_79;
  MR_String Var_81;
  MR_Word ModuleInfo_94;
  MR_Word Globals_95;
  MR_Word TableDebug_96;
  MR_Word ProcInfo_100;
  MR_Word MaybeAttributes_101;
  MR_Word TB_111;
  MR_Word Var_112;
  MR_Word Var_114;
  MR_Word _StatsPrefixGoals_40;
  MR_Word _StatsExtraArgs_41;

  Var_55 = mercury__string__f_43_43_2_f_0((MR_String) "proc_table_info", (MR_String) "->MR_pt_tablenode;\n");
  Var_53 = mercury__string__f_43_43_2_f_0((MR_String) "&", Var_55);
  Var_51 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_53);
  Var_49 = mercury__string__f_43_43_2_f_0((MR_String) "cur_node", Var_51);
  InfoToPtrCodeStr_33 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_49);
  transform_hlds__table_gen__generate_get_table_info_goal_8_p_0(PredId_19, ProcId_20, Context_22, (MR_String) "proc_table_info", InfoArg_28, &GetTableInfoGoal_34, STATE_VARIABLE_VarTable_0_44, &STATE_VARIABLE_VarTable_59_59);
  switch (Statistics_21) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      MaybeStatsRef_35 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 0:
      {
        MR_String StatsRef_86;
        MR_String Var_88;
        MR_String Var_90;
        MR_String Var_92;

        Var_92 = mercury__string__f_43_43_2_f_0((MR_String) "MR_TABLE_CALL_TABLE", (MR_String) "][MR_TABLE_STATS_CURR]");
        Var_90 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_92);
        Var_88 = mercury__string__f_43_43_2_f_0((MR_String) "->MR_pt_stats", Var_90);
        StatsRef_86 = mercury__string__f_43_43_2_f_0((MR_String) "proc_table_info", Var_88);
        {
          MaybeStatsRef_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeStatsRef_35, 0) = ((MR_Box) (StatsRef_86));
        }
      }
      break;
  }
  ModuleInfo_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TableInfo_0_46, (MR_Integer) 0))));
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_94, &Globals_95);
  libs__globals__lookup_bool_option_3_p_0(Globals_95, (MR_Integer) 345, &TableDebug_96);
  switch (TableDebug_96) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      DebugArgStr_36 = (MR_String) "MR_FALSE";
      break;
    case (MR_Integer) 1:
      DebugArgStr_36 = (MR_String) "MR_TRUE";
      break;
  }
  ProcInfo_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TableInfo_0_46, (MR_Integer) 2))));
  hlds__hlds_pred__proc_info_get_table_attributes_2_p_0(ProcInfo_100, &MaybeAttributes_101);
  if ((MaybeAttributes_101 == (MR_Word) ((MR_Unsigned) 0U)))
    BackArgStr_37 = (MR_String) "MR_FALSE";
  else
  {
    MR_Word Attributes_102 = ((MR_Word) ((MR_hl_field(1, MaybeAttributes_101, (MR_Integer) 0))));
    MR_Word MaybeSizeLimit_103 = ((MR_Word) ((MR_hl_field(0, Attributes_102, (MR_Integer) 1))));

    if ((MaybeSizeLimit_103 == (MR_Word) ((MR_Unsigned) 0U)))
      BackArgStr_37 = (MR_String) "MR_FALSE";
    else
      BackArgStr_37 = (MR_String) "MR_TRUE";
  }
  transform_hlds__table_gen__generate_table_lookup_goals_13_p_0(NumberedVars_18, MaybeStatsRef_35, DebugArgStr_36, BackArgStr_37, Context_22, STATE_VARIABLE_VarTable_59_59, &STATE_VARIABLE_VarTable_61_61, STATE_VARIABLE_TableInfo_0_46, STATE_VARIABLE_TableInfo_47, InputSteps_25, LookupArgs_29, &LookupPrefixGoals_38, &LookupCodeStr_39);
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (GetTableInfoGoal_34));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  *PrefixGoals_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_63, LookupPrefixGoals_38);
  transform_hlds__table_gen__maybe_record_overall_stats_11_p_0(PredId_19, ProcId_20, Context_22, (MR_String) "proc_table_info", (MR_String) "cur_node", MaybeStatsRef_35, STATE_VARIABLE_VarTable_61_61, &STATE_VARIABLE_VarTable_67_67, &_StatsPrefixGoals_40, &_StatsExtraArgs_41, &StatsCodeStr_42);
  Var_68 = mercury__string__f_43_43_2_f_0(LookupCodeStr_39, StatsCodeStr_42);
  *MainCodeStr_31 = mercury__string__f_43_43_2_f_0(InfoToPtrCodeStr_33, Var_68);
  TB_111 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_114, 0) = ((MR_Box) (TB_111));
    MR_hl_field(1, Var_114, 1) = ((MR_Box) ((MR_String) "ml_trie_node"));
  }
  {
    Var_112 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_112, 0) = ((MR_Box) (Var_114));
    MR_hl_field(0, Var_112, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  parse_tree__prog_type__construct_type_3_p_0(Var_112, (MR_Word) ((MR_Unsigned) 0U), &Var_69);
  transform_hlds__table_gen__generate_new_table_var_6_p_0((MR_String) "CallTableTipVar", Var_69, (MR_Integer) 1, STATE_VARIABLE_VarTable_67_67, STATE_VARIABLE_VarTable_45, CallTableTipVar_26);
  Var_74 = parse_tree__prog_mode__out_mode_0_f_0();
  {
    Var_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_73, 0) = ((MR_Box) ((MR_String) "CallTableTipVar"));
    MR_hl_field(0, Var_73, 1) = ((MR_Box) (Var_74));
  }
  {
    Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
  }
  Var_75 = transform_hlds__table_gen__trie_node_type_0_f_0();
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *CallTableTipArg_27 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (*CallTableTipVar_26));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_72));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_75));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  Var_81 = mercury__string__f_43_43_2_f_0((MR_String) "cur_node", (MR_String) ";\n");
  Var_79 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_81);
  Var_78 = mercury__string__f_43_43_2_f_0((MR_String) "CallTableTipVar", Var_79);
  *CallTableTipVarCodeStr_32 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_78);
}

static MR_Word MR_CALL 
transform_hlds__table_gen__trie_node_type_0_f_0(void)
{
  MR_Word Type_2;
  MR_Word TB_3;
  MR_Word Var_4;
  MR_Word Var_6;

  TB_3 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_6, 0) = ((MR_Box) (TB_3));
    MR_hl_field(1, Var_6, 1) = ((MR_Box) ((MR_String) "ml_trie_node"));
  }
  {
    Var_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_4, 0) = ((MR_Box) (Var_6));
    MR_hl_field(0, Var_4, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  parse_tree__prog_type__construct_type_3_p_0(Var_4, (MR_Word) ((MR_Unsigned) 0U), &Type_2);
  return Type_2;
}

static void MR_CALL 
transform_hlds__table_gen__generate_new_table_var_6_p_0(
  MR_String Name_7,
  MR_Word Type_8,
  MR_Word IsDummy_9,
  MR_Word STATE_VARIABLE_VarTable_0_13,
  MR_Word * STATE_VARIABLE_VarTable_14,
  MR_Word * Var_11)
{
  MR_Word Entry_12;

  {
    Entry_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entry_12, 0) = ((MR_Box) (Name_7));
    MR_hl_field(0, Entry_12, 1) = ((MR_Box) (Type_8));
    MR_hl_field(0, Entry_12, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_9));
  }
  parse_tree__var_table__add_var_entry_4_p_0(Entry_12, Var_11, STATE_VARIABLE_VarTable_0_13, STATE_VARIABLE_VarTable_14);
}

static void MR_CALL 
transform_hlds__table_gen__generate_table_lookup_goals_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word MaybeStatsRef_2,
  MR_String DebugArgStr_3,
  MR_String BackArgStr_4,
  MR_Word Context_5,
  MR_Word STATE_VARIABLE_VarTable_0_6,
  MR_Word * STATE_VARIABLE_VarTable_7,
  MR_Word STATE_VARIABLE_TableInfo_0_8,
  MR_Word * STATE_VARIABLE_TableInfo_9,
  MR_Word * HeadVar__10_10,
  MR_Word * HeadVar__11_11,
  MR_Word * HeadVar__12_12,
  MR_String * HeadVar__13_13)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__10_10 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__11_11 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__12_12 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__13_13 = (MR_String) "";
    *STATE_VARIABLE_TableInfo_9 = STATE_VARIABLE_TableInfo_0_8;
    *STATE_VARIABLE_VarTable_7 = STATE_VARIABLE_VarTable_0_6;
  }
  else
  {
    MR_Word VarModePos_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word NumberedVars_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word StepDesc_32;
    MR_Word StepDescs_33;
    MR_Word ForeignArgs_34;
    MR_Word RestForeignArgs_35;
    MR_Word PrefixGoals_36;
    MR_Word RestPrefixGoals_37;
    MR_String CodeStr_38;
    MR_String RestCodeStr_39;
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, VarModePos_24, (MR_Integer) 0))));
    MR_Integer VarSeqNum_42 = ((MR_Integer) ((MR_hl_field(0, VarModePos_24, (MR_Integer) 2))));
    MR_Word ArgMethod_43 = ((MR_Word) ((MR_hl_field(0, VarModePos_24, (MR_Integer) 3))));
    MR_Word ModuleInfo_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TableInfo_0_8, (MR_Integer) 0))));
    MR_Word VarEntry_45;
    MR_String VarName_46;
    MR_Word VarType_47;
    MR_Word CtorCat_48;
    MR_Word Step_49;
    MR_Word STATE_VARIABLE_VarTable_58_58;
    MR_Word STATE_VARIABLE_TableInfo_59_59;

    parse_tree__var_table__lookup_var_entry_3_p_0(STATE_VARIABLE_VarTable_0_6, Var_40, &VarEntry_45);
    VarName_46 = parse_tree__var_table__var_entry_name_2_f_0(Var_40, VarEntry_45);
    VarType_47 = ((MR_Word) ((MR_hl_field(0, VarEntry_45, (MR_Integer) 1))));
    CtorCat_48 = check_hlds__type_util__classify_type_2_f_0(ModuleInfo_44, VarType_47);
    switch (ArgMethod_43) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        transform_hlds__table_gen__gen_lookup_call_for_type_17_p_0(ArgMethod_43, CtorCat_48, VarType_47, Var_40, VarSeqNum_42, MaybeStatsRef_2, DebugArgStr_3, BackArgStr_4, Context_5, STATE_VARIABLE_VarTable_0_6, &STATE_VARIABLE_VarTable_58_58, STATE_VARIABLE_TableInfo_0_8, &STATE_VARIABLE_TableInfo_59_59, &Step_49, &ForeignArgs_34, &PrefixGoals_36, &CodeStr_38);
        break;
      case (MR_Integer) 2:
        {
          MR_String Var_55;
          MR_String Var_56;
          MR_String Var_67;

          Step_49 = (MR_Word) ((MR_Unsigned) 28U);
          ForeignArgs_34 = (MR_Word) ((MR_Unsigned) 0U);
          PrefixGoals_36 = (MR_Word) ((MR_Unsigned) 0U);
          Var_67 = mercury__string__int_to_string_1_f_0(VarSeqNum_42);
          Var_56 = mercury__string__f_43_43_2_f_0((MR_String) "arg", Var_67);
          Var_55 = mercury__string__f_43_43_2_f_0(Var_56, (MR_String) " */\n");
          CodeStr_38 = mercury__string__f_43_43_2_f_0((MR_String) "\t/* promise_implied for ", Var_55);
          STATE_VARIABLE_VarTable_58_58 = STATE_VARIABLE_VarTable_0_6;
          STATE_VARIABLE_TableInfo_59_59 = STATE_VARIABLE_TableInfo_0_8;
        }
        break;
    }
    {
      StepDesc_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, StepDesc_32, 0) = ((MR_Box) (VarName_46));
      MR_hl_field(0, StepDesc_32, 1) = ((MR_Box) (Step_49));
    }
    transform_hlds__table_gen__generate_table_lookup_goals_13_p_0(NumberedVars_25, MaybeStatsRef_2, DebugArgStr_3, BackArgStr_4, Context_5, STATE_VARIABLE_VarTable_58_58, STATE_VARIABLE_VarTable_7, STATE_VARIABLE_TableInfo_59_59, STATE_VARIABLE_TableInfo_9, &StepDescs_33, &RestForeignArgs_35, &RestPrefixGoals_37, &RestCodeStr_39);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__10_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (StepDesc_32));
      MR_hl_field(1, base, 1) = ((MR_Box) (StepDescs_33));
    }
    *HeadVar__11_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), ForeignArgs_34, RestForeignArgs_35);
    *HeadVar__12_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), PrefixGoals_36, RestPrefixGoals_37);
    *HeadVar__13_13 = mercury__string__f_43_43_2_f_0(CodeStr_38, RestCodeStr_39);
  }
}

static void MR_CALL 
transform_hlds__table_gen__gen_lookup_call_for_type_17_p_0(
  MR_Word ArgTablingMethod0_18,
  MR_Word CtorCat_19,
  MR_Word Type_20,
  MR_Word ArgVar_21,
  MR_Integer VarSeqNum_22,
  MR_Word MaybeStatsRef_23,
  MR_String DebugArgStr_24,
  MR_String BackArgStr_25,
  MR_Word Context_26,
  MR_Word STATE_VARIABLE_VarTable_0_62,
  MR_Word * STATE_VARIABLE_VarTable_63,
  MR_Word STATE_VARIABLE_TableInfo_0_64,
  MR_Word * STATE_VARIABLE_TableInfo_65,
  MR_Word * Step_29,
  MR_Word * ExtraArgs_30,
  MR_Word * PrefixGoals_31,
  MR_String * CodeStr_32)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TableInfo_0_64, (MR_Integer) 0))));
  MR_String ArgName_34;
  MR_Word ForeignArg_35;
  MR_String MaybeStepStatsArgStr_41;
  MR_String LookupCodeStr_47;
  MR_String UpdateCurNodeCodeStr_57;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_String Var_223;
  MR_String Var_224;
  MR_String Var_225;
  MR_String Var_227;
  MR_String Var_228;

  ArgName_34 = transform_hlds__table_gen__arg_name_1_f_0(VarSeqNum_22);
  Var_68 = parse_tree__prog_mode__in_mode_0_f_0();
  {
    Var_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_67, 0) = ((MR_Box) (ArgName_34));
    MR_hl_field(0, Var_67, 1) = ((MR_Box) (Var_68));
  }
  {
    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
  }
  {
    ForeignArg_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ForeignArg_35, 0) = ((MR_Box) (ArgVar_21));
    MR_hl_field(0, ForeignArg_35, 1) = ((MR_Box) (Var_66));
    MR_hl_field(0, ForeignArg_35, 2) = ((MR_Box) (Type_20));
    MR_hl_field(0, ForeignArg_35, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  MaybeStepStatsArgStr_41 = transform_hlds__table_gen__maybe_step_stats_arg_addr_2_f_0(MaybeStatsRef_23, VarSeqNum_22);
  switch (MR_tag((MR_Word) CtorCat_19)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(CtorCat_19)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (ArgTablingMethod0_18) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              transform_hlds__table_gen__gen_general_lookup_call_18_p_0((MR_Integer) 1, (MR_String) "_addr", Type_20, ForeignArg_35, ArgName_34, VarSeqNum_22, MaybeStatsRef_23, DebugArgStr_24, BackArgStr_25, Context_26, STATE_VARIABLE_VarTable_0_62, STATE_VARIABLE_VarTable_63, STATE_VARIABLE_TableInfo_0_64, STATE_VARIABLE_TableInfo_65, Step_29, ExtraArgs_30, PrefixGoals_31, &LookupCodeStr_47);
              break;
            case (MR_Integer) 2:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/17", (MR_String) "arg_promise_implied");
                return;
              }
              break;
            case (MR_Integer) 0:
              transform_hlds__table_gen__gen_general_lookup_call_18_p_0((MR_Integer) 0, (MR_String) "", Type_20, ForeignArg_35, ArgName_34, VarSeqNum_22, MaybeStatsRef_23, DebugArgStr_24, BackArgStr_25, Context_26, STATE_VARIABLE_VarTable_0_62, STATE_VARIABLE_VarTable_63, STATE_VARIABLE_TableInfo_0_64, STATE_VARIABLE_TableInfo_65, Step_29, ExtraArgs_30, PrefixGoals_31, &LookupCodeStr_47);
              break;
          }
          break;
        case (MR_Integer) 1:
          switch (ArgTablingMethod0_18) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              transform_hlds__table_gen__gen_general_lookup_call_18_p_0((MR_Integer) 1, (MR_String) "_addr", Type_20, ForeignArg_35, ArgName_34, VarSeqNum_22, MaybeStatsRef_23, DebugArgStr_24, BackArgStr_25, Context_26, STATE_VARIABLE_VarTable_0_62, STATE_VARIABLE_VarTable_63, STATE_VARIABLE_TableInfo_0_64, STATE_VARIABLE_TableInfo_65, Step_29, ExtraArgs_30, PrefixGoals_31, &LookupCodeStr_47);
              break;
            case (MR_Integer) 2:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/17", (MR_String) "arg_promise_implied");
                return;
              }
              break;
            case (MR_Integer) 0:
              transform_hlds__table_gen__gen_general_lookup_call_18_p_0((MR_Integer) 0, (MR_String) "", Type_20, ForeignArg_35, ArgName_34, VarSeqNum_22, MaybeStatsRef_23, DebugArgStr_24, BackArgStr_25, Context_26, STATE_VARIABLE_VarTable_0_62, STATE_VARIABLE_VarTable_63, STATE_VARIABLE_TableInfo_0_64, STATE_VARIABLE_TableInfo_65, Step_29, ExtraArgs_30, PrefixGoals_31, &LookupCodeStr_47);
              break;
          }
          break;
        case (MR_Integer) 2:
          switch (ArgTablingMethod0_18) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/17", (MR_String) "tabling dummies by addr");
                return;
              }
              break;
            case (MR_Integer) 2:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/17", (MR_String) "arg_promise_implied");
                return;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_String Var_189;
                MR_String Var_190;
                MR_String Var_191;
                MR_String Var_193;
                MR_String Var_194;

                *Step_29 = (MR_Word) ((MR_Unsigned) 0U);
                *PrefixGoals_31 = (MR_Word) ((MR_Unsigned) 0U);
                *ExtraArgs_30 = (MR_Word) ((MR_Unsigned) 0U);
                Var_190 = transform_hlds__table_gen__next_table_node_name_0_f_0();
                Var_194 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
                Var_193 = mercury__string__f_43_43_2_f_0(Var_194, (MR_String) ";\n");
                Var_191 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_193);
                Var_189 = mercury__string__f_43_43_2_f_0(Var_190, Var_191);
                LookupCodeStr_47 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_189);
                *STATE_VARIABLE_VarTable_63 = STATE_VARIABLE_VarTable_0_62;
                *STATE_VARIABLE_TableInfo_65 = STATE_VARIABLE_TableInfo_0_64;
              }
              break;
          }
          break;
        case (MR_Integer) 3:
          switch (ArgTablingMethod0_18) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              transform_hlds__table_gen__gen_general_lookup_call_18_p_0((MR_Integer) 1, (MR_String) "_addr", Type_20, ForeignArg_35, ArgName_34, VarSeqNum_22, MaybeStatsRef_23, DebugArgStr_24, BackArgStr_25, Context_26, STATE_VARIABLE_VarTable_0_62, STATE_VARIABLE_VarTable_63, STATE_VARIABLE_TableInfo_0_64, STATE_VARIABLE_TableInfo_65, Step_29, ExtraArgs_30, PrefixGoals_31, &LookupCodeStr_47);
              break;
            case (MR_Integer) 2:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/17", (MR_String) "arg_promise_implied");
                return;
              }
              break;
            case (MR_Integer) 0:
              transform_hlds__table_gen__gen_general_lookup_call_18_p_0((MR_Integer) 0, (MR_String) "", Type_20, ForeignArg_35, ArgName_34, VarSeqNum_22, MaybeStatsRef_23, DebugArgStr_24, BackArgStr_25, Context_26, STATE_VARIABLE_VarTable_0_62, STATE_VARIABLE_VarTable_63, STATE_VARIABLE_TableInfo_0_64, STATE_VARIABLE_TableInfo_65, Step_29, ExtraArgs_30, PrefixGoals_31, &LookupCodeStr_47);
              break;
          }
          break;
        case (MR_Integer) 4:
          {
            succeeded = (ArgTablingMethod0_18 == (MR_Integer) 1);
            if (succeeded)
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/17", (MR_String) "void");
                return;
              }
            else
              switch (ArgTablingMethod0_18) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/17", (MR_String) "void");
                    return;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/17", (MR_String) "arg_promise_implied");
                    return;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/17", (MR_String) "void");
                    return;
                  }
                  break;
              }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_381 = ((MR_Word) ((MR_hl_field(1, CtorCat_19, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) Var_381)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(Var_381)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (ArgTablingMethod0_18) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    transform_hlds__table_gen__gen_general_lookup_call_18_p_0((MR_Integer) 1, (MR_String) "_addr", Type_20, ForeignArg_35, ArgName_34, VarSeqNum_22, MaybeStatsRef_23, DebugArgStr_24, BackArgStr_25, Context_26, STATE_VARIABLE_VarTable_0_62, STATE_VARIABLE_VarTable_63, STATE_VARIABLE_TableInfo_0_64, STATE_VARIABLE_TableInfo_65, Step_29, ExtraArgs_30, PrefixGoals_31, &LookupCodeStr_47);
                    break;
                  case (MR_Integer) 2:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/17", (MR_String) "arg_promise_implied");
                      return;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_String Var_330;
                      MR_String Var_331;
                      MR_String Var_333;
                      MR_String Var_334;
                      MR_String Var_336;
                      MR_String Var_337;
                      MR_String Var_339;
                      MR_String Var_340;
                      MR_String Var_342;
                      MR_String Var_343;
                      MR_String Var_344;
                      MR_String Var_346;
                      MR_String Var_347;
                      MR_String Var_349;
                      MR_String Var_350;
                      MR_String LookupMacroName_352;

                      *Step_29 = (MR_Word) ((MR_Unsigned) 12U);
                      LookupMacroName_352 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_lookup_insert_", (MR_String) "float");
                      *PrefixGoals_31 = (MR_Word) ((MR_Unsigned) 0U);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ExtraArgs_30 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (ForeignArg_35));
                        MR_hl_field(1, base, 1) = ((MR_Box) (*PrefixGoals_31));
                      }
                      Var_343 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
                      Var_350 = transform_hlds__table_gen__next_table_node_name_0_f_0();
                      Var_349 = mercury__string__f_43_43_2_f_0(Var_350, (MR_String) ");\n");
                      Var_347 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_349);
                      Var_346 = mercury__string__f_43_43_2_f_0(ArgName_34, Var_347);
                      Var_344 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_346);
                      Var_342 = mercury__string__f_43_43_2_f_0(Var_343, Var_344);
                      Var_340 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_342);
                      Var_339 = mercury__string__f_43_43_2_f_0(BackArgStr_25, Var_340);
                      Var_337 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_339);
                      Var_336 = mercury__string__f_43_43_2_f_0(DebugArgStr_24, Var_337);
                      Var_334 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_336);
                      Var_333 = mercury__string__f_43_43_2_f_0(MaybeStepStatsArgStr_41, Var_334);
                      Var_331 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_333);
                      Var_330 = mercury__string__f_43_43_2_f_0(LookupMacroName_352, Var_331);
                      LookupCodeStr_47 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_330);
                      *STATE_VARIABLE_VarTable_63 = STATE_VARIABLE_VarTable_0_62;
                      *STATE_VARIABLE_TableInfo_65 = STATE_VARIABLE_TableInfo_0_64;
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgTablingMethod_38;

                  succeeded = (ArgTablingMethod0_18 == (MR_Integer) 1);
                  if (succeeded)
                    ArgTablingMethod_38 = (MR_Integer) 0;
                  else
                    ArgTablingMethod_38 = ArgTablingMethod0_18;
                  switch (ArgTablingMethod_38) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/17", (MR_String) "tabling chars by addr");
                        return;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/17", (MR_String) "arg_promise_implied");
                        return;
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_String Var_276;
                        MR_String Var_277;
                        MR_String Var_279;
                        MR_String Var_280;
                        MR_String Var_282;
                        MR_String Var_283;
                        MR_String Var_285;
                        MR_String Var_286;
                        MR_String Var_288;
                        MR_String Var_289;
                        MR_String Var_290;
                        MR_String Var_292;
                        MR_String Var_293;
                        MR_String Var_295;
                        MR_String Var_296;
                        MR_String LookupMacroName_298;

                        *Step_29 = (MR_Word) ((MR_Unsigned) 4U);
                        LookupMacroName_298 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_lookup_insert_", (MR_String) "char");
                        *PrefixGoals_31 = (MR_Word) ((MR_Unsigned) 0U);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *ExtraArgs_30 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) (ForeignArg_35));
                          MR_hl_field(1, base, 1) = ((MR_Box) (*PrefixGoals_31));
                        }
                        Var_289 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
                        Var_296 = transform_hlds__table_gen__next_table_node_name_0_f_0();
                        Var_295 = mercury__string__f_43_43_2_f_0(Var_296, (MR_String) ");\n");
                        Var_293 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_295);
                        Var_292 = mercury__string__f_43_43_2_f_0(ArgName_34, Var_293);
                        Var_290 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_292);
                        Var_288 = mercury__string__f_43_43_2_f_0(Var_289, Var_290);
                        Var_286 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_288);
                        Var_285 = mercury__string__f_43_43_2_f_0(BackArgStr_25, Var_286);
                        Var_283 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_285);
                        Var_282 = mercury__string__f_43_43_2_f_0(DebugArgStr_24, Var_283);
                        Var_280 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_282);
                        Var_279 = mercury__string__f_43_43_2_f_0(MaybeStepStatsArgStr_41, Var_280);
                        Var_277 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_279);
                        Var_276 = mercury__string__f_43_43_2_f_0(LookupMacroName_298, Var_277);
                        LookupCodeStr_47 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_276);
                        *STATE_VARIABLE_VarTable_63 = STATE_VARIABLE_VarTable_0_62;
                        *STATE_VARIABLE_TableInfo_65 = STATE_VARIABLE_TableInfo_0_64;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                switch (ArgTablingMethod0_18) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    transform_hlds__table_gen__gen_general_lookup_call_18_p_0((MR_Integer) 1, (MR_String) "_addr", Type_20, ForeignArg_35, ArgName_34, VarSeqNum_22, MaybeStatsRef_23, DebugArgStr_24, BackArgStr_25, Context_26, STATE_VARIABLE_VarTable_0_62, STATE_VARIABLE_VarTable_63, STATE_VARIABLE_TableInfo_0_64, STATE_VARIABLE_TableInfo_65, Step_29, ExtraArgs_30, PrefixGoals_31, &LookupCodeStr_47);
                    break;
                  case (MR_Integer) 2:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/17", (MR_String) "arg_promise_implied");
                      return;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_String Var_303;
                      MR_String Var_304;
                      MR_String Var_306;
                      MR_String Var_307;
                      MR_String Var_309;
                      MR_String Var_310;
                      MR_String Var_312;
                      MR_String Var_313;
                      MR_String Var_315;
                      MR_String Var_316;
                      MR_String Var_317;
                      MR_String Var_319;
                      MR_String Var_320;
                      MR_String Var_322;
                      MR_String Var_323;
                      MR_String LookupMacroName_325;

                      *Step_29 = (MR_Word) ((MR_Unsigned) 8U);
                      LookupMacroName_325 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_lookup_insert_", (MR_String) "string");
                      *PrefixGoals_31 = (MR_Word) ((MR_Unsigned) 0U);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ExtraArgs_30 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (ForeignArg_35));
                        MR_hl_field(1, base, 1) = ((MR_Box) (*PrefixGoals_31));
                      }
                      Var_316 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
                      Var_323 = transform_hlds__table_gen__next_table_node_name_0_f_0();
                      Var_322 = mercury__string__f_43_43_2_f_0(Var_323, (MR_String) ");\n");
                      Var_320 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_322);
                      Var_319 = mercury__string__f_43_43_2_f_0(ArgName_34, Var_320);
                      Var_317 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_319);
                      Var_315 = mercury__string__f_43_43_2_f_0(Var_316, Var_317);
                      Var_313 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_315);
                      Var_312 = mercury__string__f_43_43_2_f_0(BackArgStr_25, Var_313);
                      Var_310 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_312);
                      Var_309 = mercury__string__f_43_43_2_f_0(DebugArgStr_24, Var_310);
                      Var_307 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_309);
                      Var_306 = mercury__string__f_43_43_2_f_0(MaybeStepStatsArgStr_41, Var_307);
                      Var_304 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_306);
                      Var_303 = mercury__string__f_43_43_2_f_0(LookupMacroName_325, Var_304);
                      LookupCodeStr_47 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_303);
                      *STATE_VARIABLE_VarTable_63 = STATE_VARIABLE_VarTable_0_62;
                      *STATE_VARIABLE_TableInfo_65 = STATE_VARIABLE_TableInfo_0_64;
                    }
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgTablingMethod_471;

              succeeded = (ArgTablingMethod0_18 == (MR_Integer) 1);
              if (succeeded)
                ArgTablingMethod_471 = (MR_Integer) 0;
              else
                ArgTablingMethod_471 = ArgTablingMethod0_18;
              switch (ArgTablingMethod_471) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/17", (MR_String) "tabling integer type by addr");
                    return;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/17", (MR_String) "arg_promise_implied");
                    return;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word IntType_49 = ((MR_Unsigned) ((MR_hl_field(1, Var_381, (MR_Integer) 0))) & (MR_Integer) 15);
                    MR_String Var_164;
                    MR_String Var_165;
                    MR_String Var_167;
                    MR_String Var_168;
                    MR_String Var_170;
                    MR_String Var_171;
                    MR_String Var_173;
                    MR_String Var_174;
                    MR_String Var_176;
                    MR_String Var_177;
                    MR_String Var_178;
                    MR_String Var_180;
                    MR_String Var_181;
                    MR_String Var_183;
                    MR_String Var_184;
                    MR_String LookupMacroName_255;
                    MR_String CatString_256;

                    parse_tree__prog_data__int_type_to_string_2_p_0(IntType_49, &CatString_256);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Step_29 = base;
                      MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (IntType_49));
                    }
                    LookupMacroName_255 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_lookup_insert_", CatString_256);
                    *PrefixGoals_31 = (MR_Word) ((MR_Unsigned) 0U);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *ExtraArgs_30 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (ForeignArg_35));
                      MR_hl_field(1, base, 1) = ((MR_Box) (*PrefixGoals_31));
                    }
                    Var_177 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
                    Var_184 = transform_hlds__table_gen__next_table_node_name_0_f_0();
                    Var_183 = mercury__string__f_43_43_2_f_0(Var_184, (MR_String) ");\n");
                    Var_181 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_183);
                    Var_180 = mercury__string__f_43_43_2_f_0(ArgName_34, Var_181);
                    Var_178 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_180);
                    Var_176 = mercury__string__f_43_43_2_f_0(Var_177, Var_178);
                    Var_174 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_176);
                    Var_173 = mercury__string__f_43_43_2_f_0(BackArgStr_25, Var_174);
                    Var_171 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_173);
                    Var_170 = mercury__string__f_43_43_2_f_0(DebugArgStr_24, Var_171);
                    Var_168 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_170);
                    Var_167 = mercury__string__f_43_43_2_f_0(MaybeStepStatsArgStr_41, Var_168);
                    Var_165 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_167);
                    Var_164 = mercury__string__f_43_43_2_f_0(LookupMacroName_255, Var_165);
                    LookupCodeStr_47 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_164);
                    *STATE_VARIABLE_VarTable_63 = STATE_VARIABLE_VarTable_0_62;
                    *STATE_VARIABLE_TableInfo_65 = STATE_VARIABLE_TableInfo_0_64;
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
        MR_Word ArgTablingMethod_397;

        succeeded = (ArgTablingMethod0_18 == (MR_Integer) 1);
        if (succeeded)
          ArgTablingMethod_397 = (MR_Integer) 0;
        else
          ArgTablingMethod_397 = ArgTablingMethod0_18;
        switch (ArgTablingMethod_397) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/17", (MR_String) "tabling enums by addr");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/17", (MR_String) "arg_promise_implied");
              return;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word Var_384 = ((MR_Unsigned) ((MR_hl_field(2, CtorCat_19, (MR_Integer) 0))) & (MR_Integer) 1);

              switch (Var_384) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_String Var_108;
                    MR_String Var_109;
                    MR_String Var_111;
                    MR_String Var_112;
                    MR_String Var_114;
                    MR_String Var_115;
                    MR_String Var_117;
                    MR_String Var_118;
                    MR_String Var_120;
                    MR_String Var_121;
                    MR_String Var_122;
                    MR_String Var_124;
                    MR_String Var_125;
                    MR_String Var_127;
                    MR_String Var_128;
                    MR_String LookupMacroName_252;

                    *Step_29 = (MR_Word) ((MR_Unsigned) 16U);
                    LookupMacroName_252 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_lookup_insert_", (MR_String) "foreign_enum");
                    *PrefixGoals_31 = (MR_Word) ((MR_Unsigned) 0U);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *ExtraArgs_30 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (ForeignArg_35));
                      MR_hl_field(1, base, 1) = ((MR_Box) (*PrefixGoals_31));
                    }
                    Var_121 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
                    Var_128 = transform_hlds__table_gen__next_table_node_name_0_f_0();
                    Var_127 = mercury__string__f_43_43_2_f_0(Var_128, (MR_String) ");\n");
                    Var_125 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_127);
                    Var_124 = mercury__string__f_43_43_2_f_0(ArgName_34, Var_125);
                    Var_122 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_124);
                    Var_120 = mercury__string__f_43_43_2_f_0(Var_121, Var_122);
                    Var_118 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_120);
                    Var_117 = mercury__string__f_43_43_2_f_0(BackArgStr_25, Var_118);
                    Var_115 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_117);
                    Var_114 = mercury__string__f_43_43_2_f_0(DebugArgStr_24, Var_115);
                    Var_112 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_114);
                    Var_111 = mercury__string__f_43_43_2_f_0(MaybeStepStatsArgStr_41, Var_112);
                    Var_109 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_111);
                    Var_108 = mercury__string__f_43_43_2_f_0(LookupMacroName_252, Var_109);
                    LookupCodeStr_47 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_108);
                    *STATE_VARIABLE_VarTable_63 = STATE_VARIABLE_VarTable_0_62;
                    *STATE_VARIABLE_TableInfo_65 = STATE_VARIABLE_TableInfo_0_64;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word TypeCtor_42;
                    MR_Word TypeTable_43;
                    MR_Integer MaxIntTag_44;
                    MR_Integer EnumRange_45;
                    MR_String Var_78;
                    MR_String Var_79;
                    MR_String Var_81;
                    MR_String Var_82;
                    MR_String Var_84;
                    MR_String Var_85;
                    MR_String Var_87;
                    MR_String Var_88;
                    MR_String Var_90;
                    MR_String Var_91;
                    MR_String Var_92;
                    MR_String Var_94;
                    MR_String Var_95;
                    MR_String Var_96;
                    MR_String Var_98;
                    MR_String Var_99;
                    MR_String Var_101;
                    MR_String Var_102;

                    parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_20, &TypeCtor_42);
                    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_33, &TypeTable_43);
                    transform_hlds__table_gen__get_enum_max_int_tag_3_p_0(TypeTable_43, TypeCtor_42, &MaxIntTag_44);
                    EnumRange_45 = (MR_Integer) ((MR_Unsigned) MaxIntTag_44 + (MR_Unsigned) 1);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Step_29 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (EnumRange_45));
                    }
                    *PrefixGoals_31 = (MR_Word) ((MR_Unsigned) 0U);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *ExtraArgs_30 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (ForeignArg_35));
                      MR_hl_field(1, base, 1) = ((MR_Box) (*PrefixGoals_31));
                    }
                    Var_91 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
                    Var_95 = mercury__string__int_to_string_1_f_0(EnumRange_45);
                    Var_102 = transform_hlds__table_gen__next_table_node_name_0_f_0();
                    Var_101 = mercury__string__f_43_43_2_f_0(Var_102, (MR_String) ");\n");
                    Var_99 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_101);
                    Var_98 = mercury__string__f_43_43_2_f_0(ArgName_34, Var_99);
                    Var_96 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_98);
                    Var_94 = mercury__string__f_43_43_2_f_0(Var_95, Var_96);
                    Var_92 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_94);
                    Var_90 = mercury__string__f_43_43_2_f_0(Var_91, Var_92);
                    Var_88 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_90);
                    Var_87 = mercury__string__f_43_43_2_f_0(BackArgStr_25, Var_88);
                    Var_85 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_87);
                    Var_84 = mercury__string__f_43_43_2_f_0(DebugArgStr_24, Var_85);
                    Var_82 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_84);
                    Var_81 = mercury__string__f_43_43_2_f_0(MaybeStepStatsArgStr_41, Var_82);
                    Var_79 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_81);
                    Var_78 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_lookup_insert_enum", Var_79);
                    LookupCodeStr_47 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_78);
                    *STATE_VARIABLE_VarTable_63 = STATE_VARIABLE_VarTable_0_62;
                    *STATE_VARIABLE_TableInfo_65 = STATE_VARIABLE_TableInfo_0_64;
                  }
                  break;
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, CtorCat_19, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (ArgTablingMethod0_18) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              transform_hlds__table_gen__gen_general_lookup_call_18_p_0((MR_Integer) 1, (MR_String) "_addr", Type_20, ForeignArg_35, ArgName_34, VarSeqNum_22, MaybeStatsRef_23, DebugArgStr_24, BackArgStr_25, Context_26, STATE_VARIABLE_VarTable_0_62, STATE_VARIABLE_VarTable_63, STATE_VARIABLE_TableInfo_0_64, STATE_VARIABLE_TableInfo_65, Step_29, ExtraArgs_30, PrefixGoals_31, &LookupCodeStr_47);
              break;
            case (MR_Integer) 2:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/17", (MR_String) "arg_promise_implied");
                return;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word Var_385 = ((MR_Unsigned) ((MR_hl_field(3, CtorCat_19, (MR_Integer) 1))) & (MR_Integer) 3);

                switch (Var_385) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 3:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/17", (MR_String) "base_typeclass_info_type");
                      return;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_String Var_357;
                      MR_String Var_358;
                      MR_String Var_360;
                      MR_String Var_361;
                      MR_String Var_363;
                      MR_String Var_364;
                      MR_String Var_366;
                      MR_String Var_367;
                      MR_String Var_369;
                      MR_String Var_370;
                      MR_String Var_371;
                      MR_String Var_373;
                      MR_String Var_374;
                      MR_String Var_376;
                      MR_String Var_377;
                      MR_String LookupMacroName_379;

                      *Step_29 = (MR_Word) ((MR_Unsigned) 20U);
                      LookupMacroName_379 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_lookup_insert_", (MR_String) "typeinfo");
                      *PrefixGoals_31 = (MR_Word) ((MR_Unsigned) 0U);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ExtraArgs_30 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (ForeignArg_35));
                        MR_hl_field(1, base, 1) = ((MR_Box) (*PrefixGoals_31));
                      }
                      Var_370 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
                      Var_377 = transform_hlds__table_gen__next_table_node_name_0_f_0();
                      Var_376 = mercury__string__f_43_43_2_f_0(Var_377, (MR_String) ");\n");
                      Var_374 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_376);
                      Var_373 = mercury__string__f_43_43_2_f_0(ArgName_34, Var_374);
                      Var_371 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_373);
                      Var_369 = mercury__string__f_43_43_2_f_0(Var_370, Var_371);
                      Var_367 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_369);
                      Var_366 = mercury__string__f_43_43_2_f_0(BackArgStr_25, Var_367);
                      Var_364 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_366);
                      Var_363 = mercury__string__f_43_43_2_f_0(DebugArgStr_24, Var_364);
                      Var_361 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_363);
                      Var_360 = mercury__string__f_43_43_2_f_0(MaybeStepStatsArgStr_41, Var_361);
                      Var_358 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_360);
                      Var_357 = mercury__string__f_43_43_2_f_0(LookupMacroName_379, Var_358);
                      LookupCodeStr_47 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_357);
                      *STATE_VARIABLE_VarTable_63 = STATE_VARIABLE_VarTable_0_62;
                      *STATE_VARIABLE_TableInfo_65 = STATE_VARIABLE_TableInfo_0_64;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_String Var_135;
                      MR_String Var_136;
                      MR_String Var_138;
                      MR_String Var_139;
                      MR_String Var_141;
                      MR_String Var_142;
                      MR_String Var_144;
                      MR_String Var_145;
                      MR_String Var_147;
                      MR_String Var_148;
                      MR_String Var_149;
                      MR_String Var_151;
                      MR_String Var_152;
                      MR_String Var_154;
                      MR_String Var_155;
                      MR_String LookupMacroName_253;

                      *Step_29 = (MR_Word) ((MR_Unsigned) 20U);
                      LookupMacroName_253 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_lookup_insert_", (MR_String) "typeinfo");
                      *PrefixGoals_31 = (MR_Word) ((MR_Unsigned) 0U);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ExtraArgs_30 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (ForeignArg_35));
                        MR_hl_field(1, base, 1) = ((MR_Box) (*PrefixGoals_31));
                      }
                      Var_148 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
                      Var_155 = transform_hlds__table_gen__next_table_node_name_0_f_0();
                      Var_154 = mercury__string__f_43_43_2_f_0(Var_155, (MR_String) ");\n");
                      Var_152 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_154);
                      Var_151 = mercury__string__f_43_43_2_f_0(ArgName_34, Var_152);
                      Var_149 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_151);
                      Var_147 = mercury__string__f_43_43_2_f_0(Var_148, Var_149);
                      Var_145 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_147);
                      Var_144 = mercury__string__f_43_43_2_f_0(BackArgStr_25, Var_145);
                      Var_142 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_144);
                      Var_141 = mercury__string__f_43_43_2_f_0(DebugArgStr_24, Var_142);
                      Var_139 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_141);
                      Var_138 = mercury__string__f_43_43_2_f_0(MaybeStepStatsArgStr_41, Var_139);
                      Var_136 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_138);
                      Var_135 = mercury__string__f_43_43_2_f_0(LookupMacroName_253, Var_136);
                      LookupCodeStr_47 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_135);
                      *STATE_VARIABLE_VarTable_63 = STATE_VARIABLE_VarTable_0_62;
                      *STATE_VARIABLE_TableInfo_65 = STATE_VARIABLE_TableInfo_0_64;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/17", (MR_String) "typeclass_info_type");
                      return;
                    }
                    break;
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          switch (ArgTablingMethod0_18) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              transform_hlds__table_gen__gen_general_lookup_call_18_p_0((MR_Integer) 1, (MR_String) "_addr", Type_20, ForeignArg_35, ArgName_34, VarSeqNum_22, MaybeStatsRef_23, DebugArgStr_24, BackArgStr_25, Context_26, STATE_VARIABLE_VarTable_0_62, STATE_VARIABLE_VarTable_63, STATE_VARIABLE_TableInfo_0_64, STATE_VARIABLE_TableInfo_65, Step_29, ExtraArgs_30, PrefixGoals_31, &LookupCodeStr_47);
              break;
            case (MR_Integer) 2:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/17", (MR_String) "arg_promise_implied");
                return;
              }
              break;
            case (MR_Integer) 0:
              transform_hlds__table_gen__gen_general_lookup_call_18_p_0((MR_Integer) 0, (MR_String) "", Type_20, ForeignArg_35, ArgName_34, VarSeqNum_22, MaybeStatsRef_23, DebugArgStr_24, BackArgStr_25, Context_26, STATE_VARIABLE_VarTable_0_62, STATE_VARIABLE_VarTable_63, STATE_VARIABLE_TableInfo_0_64, STATE_VARIABLE_TableInfo_65, Step_29, ExtraArgs_30, PrefixGoals_31, &LookupCodeStr_47);
              break;
          }
          break;
      }
      break;
  }
  Var_224 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
  Var_228 = transform_hlds__table_gen__next_table_node_name_0_f_0();
  Var_227 = mercury__string__f_43_43_2_f_0(Var_228, (MR_String) ";\n");
  Var_225 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_227);
  Var_223 = mercury__string__f_43_43_2_f_0(Var_224, Var_225);
  UpdateCurNodeCodeStr_57 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_223);
  if ((MaybeStatsRef_23 == (MR_Word) ((MR_Unsigned) 0U)))
    *CodeStr_32 = mercury__string__f_43_43_2_f_0(LookupCodeStr_47, UpdateCurNodeCodeStr_57);
  else
  {
    MR_String StatsRef_58 = ((MR_String) ((MR_hl_field(1, MaybeStatsRef_23, (MR_Integer) 0))));
    MR_String StepStatsArgStr_59;
    MR_String NextVarName_60;
    MR_String LookupStatsCodeStr_61;
    MR_String Var_231;
    MR_String Var_232;
    MR_String Var_234;
    MR_String Var_236;
    MR_String Var_238;
    MR_String Var_239;
    MR_String Var_241;
    MR_String Var_243;
    MR_String Var_245;
    MR_String Var_246;
    MR_String Var_248;
    MR_String Var_251;

    StepStatsArgStr_59 = transform_hlds__table_gen__step_stats_arg_addr_2_f_0(StatsRef_58, VarSeqNum_22);
    NextVarName_60 = transform_hlds__table_gen__next_table_node_name_0_f_0();
    Var_248 = mercury__string__f_43_43_2_f_0((MR_String) "\t", (MR_String) "}\n");
    Var_246 = mercury__string__f_43_43_2_f_0((MR_String) ".MR_tss_num_lookups_is_dupl++;\n", Var_248);
    Var_245 = mercury__string__f_43_43_2_f_0(StepStatsArgStr_59, Var_246);
    Var_243 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", Var_245);
    Var_241 = mercury__string__f_43_43_2_f_0((MR_String) "{\n", Var_243);
    Var_239 = mercury__string__f_43_43_2_f_0((MR_String) "))", Var_241);
    Var_238 = mercury__string__f_43_43_2_f_0(NextVarName_60, Var_239);
    Var_236 = mercury__string__f_43_43_2_f_0((MR_String) "if (MR_trie_node_seen_before(", Var_238);
    Var_234 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_236);
    Var_232 = mercury__string__f_43_43_2_f_0((MR_String) ".MR_tss_num_lookups++;\n", Var_234);
    Var_231 = mercury__string__f_43_43_2_f_0(StepStatsArgStr_59, Var_232);
    LookupStatsCodeStr_61 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_231);
    Var_251 = mercury__string__f_43_43_2_f_0(LookupStatsCodeStr_61, UpdateCurNodeCodeStr_57);
    *CodeStr_32 = mercury__string__f_43_43_2_f_0(LookupCodeStr_47, Var_251);
  }
}

static MR_String MR_CALL 
transform_hlds__table_gen__arg_name_1_f_0(
  MR_Integer VarSeqNum_3)
{
  MR_String HeadVar__2_2;
  MR_String Var_5;

  Var_5 = mercury__string__int_to_string_1_f_0(VarSeqNum_3);
  HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "arg", Var_5);
  return HeadVar__2_2;
}

static MR_String MR_CALL 
transform_hlds__table_gen__next_table_node_name_0_f_0(void)
{
  return (MR_String) "next_node";
}

static MR_String MR_CALL 
transform_hlds__table_gen__cur_table_node_name_0_f_0(void)
{
  return (MR_String) "cur_node";
}

static MR_String MR_CALL 
transform_hlds__table_gen__step_stats_arg_addr_2_f_0(
  MR_String StatsRef_4,
  MR_Integer SeqNum_5)
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

static MR_String MR_CALL 
transform_hlds__table_gen__maybe_step_stats_arg_addr_2_f_0(
  MR_Word MaybeStatsRef_4,
  MR_Integer SeqNum_5)
{
  MR_String ArgStr_6;

  if ((MaybeStatsRef_4 == (MR_Word) ((MR_Unsigned) 0U)))
    ArgStr_6 = (MR_String) "NULL";
  else
  {
    MR_String StatsRef_7 = ((MR_String) ((MR_hl_field(1, MaybeStatsRef_4, (MR_Integer) 0))));
    MR_String Var_9;
    MR_String Var_10;
    MR_String Var_12;
    MR_String Var_14;
    MR_String Var_16;
    MR_String Var_17;

    Var_17 = mercury__string__int_to_string_1_f_0(SeqNum_5);
    Var_16 = mercury__string__f_43_43_2_f_0(Var_17, (MR_String) "]");
    Var_14 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_16);
    Var_12 = mercury__string__f_43_43_2_f_0((MR_String) ".MR_ts_steps", Var_14);
    Var_10 = mercury__string__f_43_43_2_f_0(StatsRef_7, Var_12);
    Var_9 = mercury__string__f_43_43_2_f_0(Var_10, (MR_String) ")");
    ArgStr_6 = mercury__string__f_43_43_2_f_0((MR_String) "&(", Var_9);
  }
  return ArgStr_6;
}

static void MR_CALL 
transform_hlds__table_gen__get_enum_max_int_tag_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Integer conv1_STATE_VARIABLE_MaxIntTag_9;

  transform_hlds__table_gen__max_enum_int_tag_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv1_STATE_VARIABLE_MaxIntTag_9);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_MaxIntTag_9));
}

static void MR_CALL 
transform_hlds__table_gen__get_enum_max_int_tag_3_p_0(
  MR_Word TypeTable_4,
  MR_Word TypeCtor_5,
  MR_Integer * MaxIntTag_6)
{
  MR_bool succeeded;
  MR_Word TypeDefn_7;
  MR_Word TypeBody_8;
  MR_Word MaybeSuperType_11;
  MR_Word Var_25;
  MR_Word TypeBodyDu_9;
  MR_Word MaybeCanonical_12;
  MR_Word MaybeRepn_13;
  MR_Word Repn_15;
  MR_Word Var_19;

  hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_4, TypeCtor_5, &TypeDefn_7);
  hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_7, &TypeBody_8);
  succeeded = ((MR_tag((MR_Word) TypeBody_8)) == (MR_Integer) 0);
  if (succeeded)
  {
    TypeBodyDu_9 = (MR_Word) ((MR_Word) (TypeBody_8));
    MaybeSuperType_11 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_9, (MR_Integer) 1))));
    MaybeCanonical_12 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_9, (MR_Integer) 2))));
    MaybeRepn_13 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_9, (MR_Integer) 3))));
    succeeded = (MaybeCanonical_12 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (MaybeRepn_13 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Repn_15 = ((MR_Word) ((MR_hl_field(1, MaybeRepn_13, (MR_Integer) 0))));
        Var_25 = ((MR_Word) ((MR_hl_field(0, Repn_15, (MR_Integer) 0))));
        Var_19 = ((MR_Word) ((MR_hl_field(0, Repn_15, (MR_Integer) 3))));
        succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
  }
  if (succeeded)
    if ((MaybeSuperType_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word LastCtorRepn_17;
      MR_Box conv0_LastCtorRepn_17;

      mercury__list__det_last_2_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), Var_25, &conv0_LastCtorRepn_17);
      LastCtorRepn_17 = ((MR_Word) (conv0_LastCtorRepn_17));
      transform_hlds__table_gen__max_enum_int_tag_3_p_0(LastCtorRepn_17, (MR_Integer) 0, MaxIntTag_6);
    }
    else
    {
      MR_Box conv2_MaxIntTag_6;

      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[6]), Var_25, ((MR_Box) ((MR_Integer) 0)), &conv2_MaxIntTag_6);
      *MaxIntTag_6 = ((MR_Integer) (conv2_MaxIntTag_6));
    }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.get_enum_max_int_tag\'/3", (MR_String) "enum type is not du_type\?");
      return;
    }
}

static void MR_CALL 
transform_hlds__table_gen__max_enum_int_tag_3_p_0(
  MR_Word CtorRepn_4,
  MR_Integer STATE_VARIABLE_MaxIntTag_0_8,
  MR_Integer * STATE_VARIABLE_MaxIntTag_9)
{
  MR_bool succeeded;
  MR_Word ConsTag_6 = ((MR_Word) ((MR_hl_field(0, CtorRepn_4, (MR_Integer) 3))));
  MR_Integer IntTagVal_7;
  MR_Word Var_10;

  succeeded = ((MR_tag((MR_Word) ConsTag_6)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_10 = ((MR_Word) ((MR_hl_field(1, ConsTag_6, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) Var_10)) == (MR_Integer) 0);
    if (succeeded)
      IntTagVal_7 = ((MR_Integer) ((MR_hl_field(0, Var_10, (MR_Integer) 0))));
  }
  if (succeeded)
    *STATE_VARIABLE_MaxIntTag_9 = mercury__int__max_2_f_0(STATE_VARIABLE_MaxIntTag_0_8, IntTagVal_7);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.max_enum_int_tag\'/3", (MR_String) "enum has non-int tag");
      return;
    }
}

static void MR_CALL 
transform_hlds__table_gen__gen_general_lookup_call_18_p_0(
  MR_Word IsAddr_19,
  MR_String MaybeAddrString_20,
  MR_Word Type_21,
  MR_Word ForeignArg_22,
  MR_String ArgName_23,
  MR_Integer VarSeqNum_24,
  MR_Word MaybeStatsRef_25,
  MR_String DebugArgStr_26,
  MR_String BackArgStr_27,
  MR_Word Context_28,
  MR_Word STATE_VARIABLE_VarTable_0_46,
  MR_Word * STATE_VARIABLE_VarTable_47,
  MR_Word STATE_VARIABLE_TableInfo_0_48,
  MR_Word * STATE_VARIABLE_TableInfo_49,
  MR_Word * Step_31,
  MR_Word * ExtraArgs_32,
  MR_Word * PrefixGoals_33,
  MR_String * LookupCodeStr_34)
{
  MR_bool succeeded;
  MR_Word TypeVars_35;
  MR_String MaybePolyString_36;
  MR_Word IsPoly_37;
  MR_String LookupMacroName_40;
  MR_Word TypeInfoVar_41;
  MR_String TypeInfoArgName_42;
  MR_Word TypeInfoType_43;
  MR_Word ForeignTypeInfoArg_44;
  MR_String StepStatsArgStr_45;
  MR_String Var_51;
  MR_String Var_55;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_60;
  MR_String Var_63;
  MR_String Var_64;
  MR_String Var_66;
  MR_String Var_67;
  MR_String Var_69;
  MR_String Var_70;
  MR_String Var_72;
  MR_String Var_73;
  MR_String Var_75;
  MR_String Var_77;
  MR_String Var_79;
  MR_String Var_80;
  MR_String Var_82;
  MR_String Var_83;
  MR_String Var_85;
  MR_Word TypeInfoVars_88;
  MR_Word Var_90;
  MR_Word ModuleInfo0_95;
  MR_Word PredInfo0_96;
  MR_Word ProcInfo0_97;
  MR_Word ProcInfo1_98;
  MR_Word ModuleInfo_99;
  MR_Word PredInfo_100;
  MR_Word ProcInfo_101;
  MR_Word TypeInfoVar0_89;
  MR_Word Var_92;

  parse_tree__prog_type__type_vars_in_type_2_p_0(Type_21, &TypeVars_35);
  if ((TypeVars_35 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybePolyString_36 = (MR_String) "";
    IsPoly_37 = (MR_Integer) 0;
  }
  else
  {
    MaybePolyString_36 = (MR_String) "_poly";
    IsPoly_37 = (MR_Integer) 1;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *Step_31 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) (Type_21));
    MR_hl_field(3, base, 1) = (MR_Box) (((((MR_Unsigned) (IsPoly_37) << 1)) | (MR_Unsigned) (IsAddr_19)));
  }
  Var_51 = mercury__string__f_43_43_2_f_0(MaybePolyString_36, MaybeAddrString_20);
  LookupMacroName_40 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_lookup_insert_gen", Var_51);
  {
    Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_90, 0) = ((MR_Box) (Type_21));
    MR_hl_field(1, Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  ModuleInfo0_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TableInfo_0_48, (MR_Integer) 0))));
  PredInfo0_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TableInfo_0_48, (MR_Integer) 1))));
  ProcInfo0_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TableInfo_0_48, (MR_Integer) 2))));
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(STATE_VARIABLE_VarTable_0_46, ProcInfo0_97, &ProcInfo1_98);
  check_hlds__polymorphism_type_info__polymorphism_make_type_info_vars_mi_10_p_0(Var_90, Context_28, &TypeInfoVars_88, PrefixGoals_33, ModuleInfo0_95, &ModuleInfo_99, PredInfo0_96, &PredInfo_100, ProcInfo1_98, &ProcInfo_101);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_101, STATE_VARIABLE_VarTable_47);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_TableInfo_49 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleInfo_99));
    MR_hl_field(0, base, 1) = ((MR_Box) (PredInfo_100));
    MR_hl_field(0, base, 2) = ((MR_Box) (ProcInfo_101));
  }
  succeeded = (TypeInfoVars_88 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    TypeInfoVar0_89 = ((MR_Word) ((MR_hl_field(1, TypeInfoVars_88, (MR_Integer) 0))));
    Var_92 = ((MR_Word) ((MR_hl_field(1, TypeInfoVars_88, (MR_Integer) 1))));
    succeeded = (Var_92 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
    TypeInfoVar_41 = TypeInfoVar0_89;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.table_gen_make_type_info_var\'/8", (MR_String) "list length != 1");
      return;
    }
  Var_55 = mercury__string__int_to_string_1_f_0(VarSeqNum_24);
  TypeInfoArgName_42 = mercury__string__f_43_43_2_f_0((MR_String) "input_typeinfo", Var_55);
  parse_tree__var_table__lookup_var_type_3_p_0(*STATE_VARIABLE_VarTable_47, TypeInfoVar_41, &TypeInfoType_43);
  Var_58 = parse_tree__prog_mode__in_mode_0_f_0();
  {
    Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_57, 0) = ((MR_Box) (TypeInfoArgName_42));
    MR_hl_field(0, Var_57, 1) = ((MR_Box) (Var_58));
  }
  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
  }
  {
    ForeignTypeInfoArg_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ForeignTypeInfoArg_44, 0) = ((MR_Box) (TypeInfoVar_41));
    MR_hl_field(0, ForeignTypeInfoArg_44, 1) = ((MR_Box) (Var_56));
    MR_hl_field(0, ForeignTypeInfoArg_44, 2) = ((MR_Box) (TypeInfoType_43));
    MR_hl_field(0, ForeignTypeInfoArg_44, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_60, 0) = ((MR_Box) (ForeignArg_22));
    MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *ExtraArgs_32 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (ForeignTypeInfoArg_44));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_60));
  }
  if ((MaybeStatsRef_25 == (MR_Word) ((MR_Unsigned) 0U)))
    StepStatsArgStr_45 = (MR_String) "NULL";
  else
  {
    MR_String StatsRef_102 = ((MR_String) ((MR_hl_field(1, MaybeStatsRef_25, (MR_Integer) 0))));
    MR_String Var_104;
    MR_String Var_105;
    MR_String Var_107;
    MR_String Var_109;
    MR_String Var_111;
    MR_String Var_112;

    Var_112 = mercury__string__int_to_string_1_f_0(VarSeqNum_24);
    Var_111 = mercury__string__f_43_43_2_f_0(Var_112, (MR_String) "]");
    Var_109 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_111);
    Var_107 = mercury__string__f_43_43_2_f_0((MR_String) ".MR_ts_steps", Var_109);
    Var_105 = mercury__string__f_43_43_2_f_0(StatsRef_102, Var_107);
    Var_104 = mercury__string__f_43_43_2_f_0(Var_105, (MR_String) ")");
    StepStatsArgStr_45 = mercury__string__f_43_43_2_f_0((MR_String) "&(", Var_104);
  }
  Var_85 = mercury__string__f_43_43_2_f_0((MR_String) "next_node", (MR_String) ");\n");
  Var_83 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_85);
  Var_82 = mercury__string__f_43_43_2_f_0(ArgName_23, Var_83);
  Var_80 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_82);
  Var_79 = mercury__string__f_43_43_2_f_0(TypeInfoArgName_42, Var_80);
  Var_77 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_79);
  Var_75 = mercury__string__f_43_43_2_f_0((MR_String) "cur_node", Var_77);
  Var_73 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_75);
  Var_72 = mercury__string__f_43_43_2_f_0(BackArgStr_27, Var_73);
  Var_70 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_72);
  Var_69 = mercury__string__f_43_43_2_f_0(DebugArgStr_26, Var_70);
  Var_67 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_69);
  Var_66 = mercury__string__f_43_43_2_f_0(StepStatsArgStr_45, Var_67);
  Var_64 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_66);
  Var_63 = mercury__string__f_43_43_2_f_0(LookupMacroName_40, Var_64);
  *LookupCodeStr_34 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_63);
}

static void MR_CALL 
transform_hlds__table_gen__generate_get_table_info_goal_8_p_0(
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word Context_11,
  MR_String InfoVarName_12,
  MR_Word * Arg_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_VarTable_0_22,
  MR_Word * STATE_VARIABLE_VarTable_23)
{
  MR_Word ProcTableInfoVar_16;
  MR_Word ShroudedPredProcId_17;
  MR_Word InfoConsId_18;
  MR_Word GoalExpr_19;
  MR_Word GoalInfo0_20;
  MR_Word GoalInfo_21;
  MR_Word Var_25;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word TB_36;
  MR_Word Var_37;
  MR_Word Var_39;
  MR_Word Entry_42;
  MR_Word TB_43;
  MR_Word Var_44;
  MR_Word Var_46;

  TB_36 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (TB_36));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_String) "ml_proc_table_info"));
  }
  {
    Var_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_37, 0) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_37, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  parse_tree__prog_type__construct_type_3_p_0(Var_37, (MR_Word) ((MR_Unsigned) 0U), &Var_25);
  {
    Entry_42 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entry_42, 0) = ((MR_Box) ((MR_String) "ProcTableInfo"));
    MR_hl_field(0, Entry_42, 1) = ((MR_Box) (Var_25));
    MR_hl_field(0, Entry_42, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  parse_tree__var_table__add_var_entry_4_p_0(Entry_42, &ProcTableInfoVar_16, STATE_VARIABLE_VarTable_0_22, STATE_VARIABLE_VarTable_23);
  Var_30 = parse_tree__prog_mode__in_mode_0_f_0();
  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_29, 0) = ((MR_Box) (InfoVarName_12));
    MR_hl_field(0, Var_29, 1) = ((MR_Box) (Var_30));
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
  }
  TB_43 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (TB_43));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_String) "ml_proc_table_info"));
  }
  {
    Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_44, 0) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_44, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  parse_tree__prog_type__construct_type_3_p_0(Var_44, (MR_Word) ((MR_Unsigned) 0U), &Var_31);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *Arg_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ProcTableInfoVar_16));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_33, 0) = ((MR_Box) (PredId_9));
    MR_hl_field(0, Var_33, 1) = ((MR_Box) (ProcId_10));
  }
  ShroudedPredProcId_17 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(Var_33);
  InfoConsId_18 = (MR_Word) (MR_mkword(2, (MR_Word) (ShroudedPredProcId_17)));
  hlds__make_goal__make_const_construction_4_p_0(Context_11, ProcTableInfoVar_16, InfoConsId_18, &Var_34);
  GoalExpr_19 = ((MR_Word) ((MR_hl_field(0, Var_34, (MR_Integer) 0))));
  GoalInfo0_20 = ((MR_Word) ((MR_hl_field(0, Var_34, (MR_Integer) 1))));
  hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, GoalInfo0_20, &GoalInfo_21);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_19));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_21));
  }
}

static void MR_CALL 
transform_hlds__table_gen__maybe_record_overall_stats_11_p_0(
  MR_Word PredId_12,
  MR_Integer ProcId_13,
  MR_Word Context_14,
  MR_String InfoVarName_15,
  MR_String TipVarName_16,
  MR_Word MaybeStatsRef_17,
  MR_Word STATE_VARIABLE_VarTable_0_25,
  MR_Word * STATE_VARIABLE_VarTable_26,
  MR_Word * PrefixGoals_19,
  MR_Word * Args_20,
  MR_String * StatsCodeStr_21)
{
  if ((MaybeStatsRef_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *PrefixGoals_19 = (MR_Word) ((MR_Unsigned) 0U);
    *Args_20 = (MR_Word) ((MR_Unsigned) 0U);
    *StatsCodeStr_21 = (MR_String) "";
    *STATE_VARIABLE_VarTable_26 = STATE_VARIABLE_VarTable_0_25;
  }
  else
  {
    MR_String StatsRef_22 = ((MR_String) ((MR_hl_field(1, MaybeStatsRef_17, (MR_Integer) 0))));
    MR_Word Arg_23;
    MR_Word Goal_24;
    MR_String Var_31;
    MR_String Var_32;
    MR_String Var_34;
    MR_String Var_36;
    MR_String Var_38;
    MR_String Var_39;
    MR_String Var_41;
    MR_String Var_43;
    MR_String Var_45;
    MR_String Var_46;
    MR_String Var_48;
    MR_Word ProcTableInfoVar_51;
    MR_Word ShroudedPredProcId_52;
    MR_Word InfoConsId_53;
    MR_Word GoalExpr_54;
    MR_Word GoalInfo0_55;
    MR_Word GoalInfo_56;
    MR_Word Var_58;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word TB_68;
    MR_Word Var_69;
    MR_Word Var_71;
    MR_Word Entry_74;
    MR_Word TB_75;
    MR_Word Var_76;
    MR_Word Var_78;

    TB_68 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_71, 0) = ((MR_Box) (TB_68));
      MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_String) "ml_proc_table_info"));
    }
    {
      Var_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_69, 0) = ((MR_Box) (Var_71));
      MR_hl_field(0, Var_69, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__prog_type__construct_type_3_p_0(Var_69, (MR_Word) ((MR_Unsigned) 0U), &Var_58);
    {
      Entry_74 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Entry_74, 0) = ((MR_Box) ((MR_String) "ProcTableInfo"));
      MR_hl_field(0, Entry_74, 1) = ((MR_Box) (Var_58));
      MR_hl_field(0, Entry_74, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    }
    parse_tree__var_table__add_var_entry_4_p_0(Entry_74, &ProcTableInfoVar_51, STATE_VARIABLE_VarTable_0_25, STATE_VARIABLE_VarTable_26);
    Var_62 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_61, 0) = ((MR_Box) (InfoVarName_15));
      MR_hl_field(0, Var_61, 1) = ((MR_Box) (Var_62));
    }
    {
      Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_60, 0) = ((MR_Box) (Var_61));
    }
    TB_75 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_78, 0) = ((MR_Box) (TB_75));
      MR_hl_field(1, Var_78, 1) = ((MR_Box) ((MR_String) "ml_proc_table_info"));
    }
    {
      Var_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_76, 0) = ((MR_Box) (Var_78));
      MR_hl_field(0, Var_76, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__prog_type__construct_type_3_p_0(Var_76, (MR_Word) ((MR_Unsigned) 0U), &Var_63);
    {
      Arg_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Arg_23, 0) = ((MR_Box) (ProcTableInfoVar_51));
      MR_hl_field(0, Arg_23, 1) = ((MR_Box) (Var_60));
      MR_hl_field(0, Arg_23, 2) = ((MR_Box) (Var_63));
      MR_hl_field(0, Arg_23, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    {
      Var_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_65, 0) = ((MR_Box) (PredId_12));
      MR_hl_field(0, Var_65, 1) = ((MR_Box) (ProcId_13));
    }
    ShroudedPredProcId_52 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(Var_65);
    InfoConsId_53 = (MR_Word) (MR_mkword(2, (MR_Word) (ShroudedPredProcId_52)));
    hlds__make_goal__make_const_construction_4_p_0(Context_14, ProcTableInfoVar_51, InfoConsId_53, &Var_66);
    GoalExpr_54 = ((MR_Word) ((MR_hl_field(0, Var_66, (MR_Integer) 0))));
    GoalInfo0_55 = ((MR_Word) ((MR_hl_field(0, Var_66, (MR_Integer) 1))));
    hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, GoalInfo0_55, &GoalInfo_56);
    {
      Goal_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_24, 0) = ((MR_Box) (GoalExpr_54));
      MR_hl_field(0, Goal_24, 1) = ((MR_Box) (GoalInfo_56));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *PrefixGoals_19 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_24));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Args_20 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Arg_23));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_48 = mercury__string__f_43_43_2_f_0((MR_String) "\t", (MR_String) "}\n");
    Var_46 = mercury__string__f_43_43_2_f_0((MR_String) ".MR_ts_num_lookups_is_dupl++;\n", Var_48);
    Var_45 = mercury__string__f_43_43_2_f_0(StatsRef_22, Var_46);
    Var_43 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", Var_45);
    Var_41 = mercury__string__f_43_43_2_f_0((MR_String) "{\n", Var_43);
    Var_39 = mercury__string__f_43_43_2_f_0((MR_String) ")) ", Var_41);
    Var_38 = mercury__string__f_43_43_2_f_0(TipVarName_16, Var_39);
    Var_36 = mercury__string__f_43_43_2_f_0((MR_String) "if (MR_trie_node_seen_before(", Var_38);
    Var_34 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_36);
    Var_32 = mercury__string__f_43_43_2_f_0((MR_String) ".MR_ts_num_lookups++;\n", Var_34);
    Var_31 = mercury__string__f_43_43_2_f_0(StatsRef_22, Var_32);
    *StatsCodeStr_21 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_31);
  }
}

static void MR_CALL 
transform_hlds__table_gen__general_cannot_table_reason_spec_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Integer ProcId_9,
  MR_Word TabledMethod_10,
  MR_Word Reason_11,
  MR_Word * Spec_12)
{
  switch (MR_tag((MR_Word) TabledMethod_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String TabledMethodStr_14;
        MR_Word PredInfo_15;
        MR_Word ProcPieces_16;
        MR_Word Context_17;
        MR_Word Pieces_18;
        MR_Word Var_23;
        MR_Word Var_24;
        MR_Word Var_27;
        MR_Word Var_28;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word Var_42;

        TabledMethodStr_14 = parse_tree__prog_out__tabled_eval_method_to_string_1_f_0(TabledMethod_10);
        hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, PredId_8, &PredInfo_15);
        {
          Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_23, 0) = ((MR_Box) (PredId_8));
          MR_hl_field(0, Var_23, 1) = ((MR_Box) (ProcId_9));
        }
        ProcPieces_16 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(ModuleInfo_7, (MR_Integer) 0, Var_23);
        hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_15, &Context_17);
        {
          Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 32U));
          MR_hl_field(3, Var_28, 1) = ((MR_Box) (TabledMethodStr_14));
        }
        {
          Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
          MR_hl_field(1, Var_27, 1) = ((MR_Box) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[20])));
        }
        {
          Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_24, 0) = ((MR_Box) (MR_mkword(3, &transform_hlds__table_gen_scalar_common_1[18])));
          MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_27));
        }
        Var_42 = ((&transform_hlds__table_gen_vector_common_4[4 + Reason_11]))->transform_hlds__table_gen__vector_common_type_4_0__vct_4_f_0;
        Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[24])), Var_42);
        Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ProcPieces_16, Var_34);
        Pieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_24, Var_33);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *Spec_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "predicate \140transform_hlds.table_gen.general_cannot_table_reason_spec\'/6"));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(1, base, 2) = ((MR_Box) ((MR_Unsigned) 104U));
          MR_hl_field(1, base, 3) = ((MR_Box) (Context_17));
          MR_hl_field(1, base, 4) = ((MR_Box) (Pieces_18));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String TabledMethodStr_14;
        MR_Word PredInfo_15;
        MR_Word ProcPieces_16;
        MR_Word Context_17;
        MR_Word Pieces_18;
        MR_Word Var_23;
        MR_Word Var_24;
        MR_Word Var_27;
        MR_Word Var_28;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word Var_42;

        TabledMethodStr_14 = parse_tree__prog_out__tabled_eval_method_to_string_1_f_0(TabledMethod_10);
        hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, PredId_8, &PredInfo_15);
        {
          Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_23, 0) = ((MR_Box) (PredId_8));
          MR_hl_field(0, Var_23, 1) = ((MR_Box) (ProcId_9));
        }
        ProcPieces_16 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(ModuleInfo_7, (MR_Integer) 0, Var_23);
        hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_15, &Context_17);
        {
          Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 32U));
          MR_hl_field(3, Var_28, 1) = ((MR_Box) (TabledMethodStr_14));
        }
        {
          Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
          MR_hl_field(1, Var_27, 1) = ((MR_Box) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[20])));
        }
        {
          Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_24, 0) = ((MR_Box) (MR_mkword(3, &transform_hlds__table_gen_scalar_common_1[18])));
          MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_27));
        }
        Var_42 = ((&transform_hlds__table_gen_vector_common_4[4 + Reason_11]))->transform_hlds__table_gen__vector_common_type_4_0__vct_4_f_0;
        Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[24])), Var_42);
        Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ProcPieces_16, Var_34);
        Pieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_24, Var_33);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *Spec_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "predicate \140transform_hlds.table_gen.general_cannot_table_reason_spec\'/6"));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(1, base, 2) = ((MR_Box) ((MR_Unsigned) 104U));
          MR_hl_field(1, base, 3) = ((MR_Box) (Context_17));
          MR_hl_field(1, base, 4) = ((MR_Box) (Pieces_18));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_59;
        MR_Word PredInfo_71;
        MR_Word Context_72;
        MR_Word Pieces_73;

        hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, PredId_8, &PredInfo_71);
        hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_71, &Context_72);
        Var_59 = ((&transform_hlds__table_gen_vector_common_4[0 + Reason_11]))->transform_hlds__table_gen__vector_common_type_4_0__vct_4_f_0;
        Pieces_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[17])), Var_59);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *Spec_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "predicate \140transform_hlds.table_gen.general_cannot_table_reason_spec\'/6"));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(1, base, 2) = ((MR_Box) ((MR_Unsigned) 104U));
          MR_hl_field(1, base, 3) = ((MR_Box) (Context_72));
          MR_hl_field(1, base, 4) = ((MR_Box) (Pieces_73));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Var_67 = ((&transform_hlds__table_gen_vector_common_4[8 + Reason_11]))->transform_hlds__table_gen__vector_common_type_4_0__vct_4_f_0;
        MR_Word Pieces_74;

        Pieces_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__table_gen_scalar_common_1[26])), Var_67);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *Spec_12 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) ((MR_String) "predicate \140transform_hlds.table_gen.general_cannot_table_reason_spec\'/6"));
          MR_hl_field(2, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, base, 2) = ((MR_Box) ((MR_Unsigned) 104U));
          MR_hl_field(2, base, 3) = ((MR_Box) (Pieces_74));
        }
      }
      break;
  }
}

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____call_or_answer_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__table_gen____Unify____call_or_answer_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__table_gen____Compare____call_or_answer_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__table_gen____Compare____call_or_answer_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____general_cannot_table_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__table_gen____Unify____general_cannot_table_reason_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__table_gen____Compare____general_cannot_table_reason_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__table_gen____Compare____general_cannot_table_reason_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____generator_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__table_gen____Unify____generator_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__table_gen____Compare____generator_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__table_gen____Compare____generator_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____maybe_specified_method_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__table_gen____Unify____maybe_specified_method_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__table_gen____Compare____maybe_specified_method_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__table_gen____Compare____maybe_specified_method_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____mm_cannot_table_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__table_gen____Unify____mm_cannot_table_reason_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__table_gen____Compare____mm_cannot_table_reason_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__table_gen____Compare____mm_cannot_table_reason_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____table_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__table_gen____Unify____table_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__table_gen____Compare____table_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__table_gen____Compare____table_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____var_mode_method_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__table_gen____Unify____var_mode_method_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__table_gen____Compare____var_mode_method_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__table_gen____Compare____var_mode_method_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____var_mode_pos_method_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = transform_hlds__table_gen____Unify____var_mode_pos_method_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__table_gen____Compare____var_mode_pos_method_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__table_gen____Compare____var_mode_pos_method_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____var_mode_pos_method_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__table_gen____Unify____var_mode_pos_method_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__table_gen____Compare____var_mode_pos_method_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__table_gen____Compare____var_mode_pos_method_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
	MR_register_type_ctor_info(&transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_general_cannot_table_reason_0);
	MR_register_type_ctor_info(&transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_generator_map_0);
	MR_register_type_ctor_info(&transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_maybe_specified_method_0);
	MR_register_type_ctor_info(&transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_mm_cannot_table_reason_0);
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
