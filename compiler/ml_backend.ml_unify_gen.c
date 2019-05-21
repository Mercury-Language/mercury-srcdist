/*
** Automatically generated from `ml_unify_gen.m'
** by the Mercury compiler,
** version rotd-2018-04-02
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


// :- module ml_backend.ml_unify_gen.
// :- implementation.

/*
INIT mercury__ml_backend__ml_unify_gen__init
ENDINIT
*/

#include "ml_backend.ml_unify_gen.mih"


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
#include "backend_libs.arg_pack.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.foreign.mih"
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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "ml_backend.ml_closure_gen.mih"
#include "ml_backend.ml_code_gen.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_type_gen.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__pti_arg_type_and_width_1__pseudo_1;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen____vpti_func_2__pseudo_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__pti_arg_type_and_width_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__ti_arg_type_and_width_1hlds__const_struct__type_ctor_info_const_struct_arg_0;

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_arg_type_and_width_1_0[3];

static const MR_DuFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_arg_type_and_width_1_0;

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_arg_type_and_width_1_0[1];

static const MR_DuPtagLayout ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_ptag_ordered_arg_type_and_width_1[1];

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_name_ordered_arg_type_and_width_1[1];

static const MR_Integer ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_arg_type_and_width_1[1];

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__ti_arg_type_and_width_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_Integer ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_field_offset_0[1];

static const MR_NotagFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__notag_functor_desc_field_offset_0;

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_functor_desc_may_have_extra_args_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_functor_desc_may_have_extra_args_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_value_ordered_may_have_extra_args_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_name_ordered_may_have_extra_args_0[2];

static const MR_Integer ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_may_have_extra_args_0[2];

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_ml_const_struct_info_0_0[3];

static const MR_ConstString ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_names_ml_const_struct_info_0_0[3];

static const MR_DuArgLocn ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_locns_ml_const_struct_info_0_0[3];

static const MR_DuFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_ml_const_struct_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_ml_const_struct_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_ptag_ordered_ml_const_struct_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_name_ordered_ml_const_struct_info_0[1];

static const MR_Integer ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_ml_const_struct_info_0[1];

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_mlds_rval_type_and_width_0_0[3];

static const MR_DuFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_mlds_rval_type_and_width_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_mlds_rval_type_and_width_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_ptag_ordered_mlds_rval_type_and_width_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_name_ordered_mlds_rval_type_and_width_0[1];

static const MR_Integer ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_mlds_rval_type_and_width_0[1];

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_take_addr_info_0_0[4];

static const MR_DuFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_take_addr_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_take_addr_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_ptag_ordered_take_addr_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_name_ordered_take_addr_info_0[1];

static const MR_Integer ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_take_addr_info_0[1];

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__construct_static_ground_term__2946__1_1_f_0(
  MR_Word LambdaHeadVar__1_43);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__cons_id_arg_types_and_widths__2847__2_2_p_0(
  MR_Word MayHaveExtraArgs_10,
  MR_Word HeadVar__2_31);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__cons_id_arg_types_and_widths__2847__1_2_p_0(
  MR_Word MayHaveExtraArgs_10,
  MR_Word HeadVar__2_31);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_const_static_compound__2602__1_1_f_0(
  MR_Word LambdaHeadVar__1_38);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_109_108_95_103_101_110_95_99_111_110_115_116_95_115_116_97_116_105_99_95_99_111_109_112_111_117_110_100_95_95_50_54_48_50_95_95_49_95_95_91_49_93_95_48_1_f_0(void);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2296__5_2_p_0(
  MR_Word Args_25,
  MR_Word HeadVar__2_166);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2296__4_2_p_0(
  MR_Word Args_25,
  MR_Word HeadVar__2_153);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2296__3_2_p_0(
  MR_Word Args_25,
  MR_Word HeadVar__2_142);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2296__2_2_p_0(
  MR_Word Args_25,
  MR_Word HeadVar__2_131);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2296__1_2_p_0(
  MR_Word Args_25,
  MR_Word HeadVar__2_109);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_field_names_and_types__1370__1_1_f_0(
  MR_Word LambdaHeadVar__1_24);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_extra_arg_assign__1215__1_2_p_0(
  MR_Word ArgWidth_34,
  MR_Word HeadVar__2_48);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_extra_arg_assign__1209__1_2_p_0(
  MR_Word HighLevelData_28,
  MR_Word HeadVar__2_42);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_calc_field_offset__1189__1_1_f_0(
  MR_Word LambdaHeadVar__1_18);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1153__1_2_p_0(
  MR_Word Offset_80,
  MR_Word HeadVar__2_101);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1147__1_2_p_0(
  MR_Word ArgWidth_68,
  MR_Word HeadVar__2_96);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_box_extra_const_rval_list_lld__1049__1_2_p_0(
  MR_Word Width_21,
  MR_Word HeadVar__2_28);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__743__1_2_p_0(
  MR_Integer PrimaryTag_49,
  MR_Integer LambdaHeadVar__1_81);

static void MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__725__1_3_p_0(
  MR_Word STATE_VARIABLE_Info_0_73,
  MR_Word LambdaHeadVar__1_78,
  MR_Integer * LambdaHeadVar__2_79);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_new_object_statically__689__1_1_f_0(
  MR_Word LambdaHeadVar__1_51);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_new_object_dynamically__628__1_1_f_0(
  MR_Word LambdaHeadVar__1_69);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object__550__1_2_p_0(
  MR_Word TakeAddr_23,
  MR_Word HeadVar__2_41);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__197__1_2_p_0(
  MR_Word CodeModel_8,
  MR_Word HeadVar__2_74);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__229__1_2_p_0(
  MR_Word MaybeSizeProfInfo_37,
  MR_Word HeadVar__2_69);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__217__1_2_p_0(
  MR_Word CodeModel_8,
  MR_Word HeadVar__2_65);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__165__1_2_p_0(
  MR_Word CodeModel_8,
  MR_Word HeadVar__2_86);

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____take_addr_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____take_addr_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____ml_const_struct_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____ml_const_struct_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____may_have_extra_args_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____may_have_extra_args_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____field_offset_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____field_offset_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____arg_var_type_and_width_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____arg_var_type_and_width_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____arg_type_and_width_1_0(
  MR_Word TypeInfo_for_Arg_14,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____arg_to_type_1_0(
  MR_Word TypeInfo_for_Arg_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_117_110_105_102_121_95_103_101_110_95_95_97_114_103_95_116_111_95_116_121_112_101_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____arg_to_type_1_0(
  MR_Word TypeInfo_for_Arg_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_117_110_105_102_121_95_103_101_110_95_95_97_114_103_95_116_111_95_116_121_112_101_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____arg_const_type_and_width_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____arg_const_type_and_width_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____arg_type_and_width_1_0(
  MR_Word TypeInfo_for_Arg_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_unify_gen__lookup_type_and_specify_width_4_p_0(
  MR_Word TypeInfo_for_Arg_10,
  MR_Word ArgToType_5,
  MR_Word Width_6,
  MR_Box Arg_7,
  MR_Word * ArgTypeWidth_8);

static void MR_CALL 
ml_backend__ml_unify_gen__specify_type_and_width_4_p_0(
  MR_Word TypeInfo_for_Arg_9,
  MR_Word Type_5,
  MR_Word Width_6,
  MR_Box Arg_7,
  MR_Word * ArgTypeWidth_8);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_struct_6_p_0(
  MR_Word Info_7,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ConstStructMap_0_19,
  MR_Word * STATE_VARIABLE_ConstStructMap_20,
  MR_Word STATE_VARIABLE_GlobalData_0_21,
  MR_Word * STATE_VARIABLE_GlobalData_22);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_struct_tag_11_p_0(
  MR_Word Info_12,
  MR_Integer ConstNum_13,
  MR_Word Type_14,
  MR_Word MLDS_Type_15,
  MR_Word ConsId_16,
  MR_Word ConsTag_17,
  MR_Word Args_18,
  MR_Word STATE_VARIABLE_ConstStructMap_0_66,
  MR_Word * STATE_VARIABLE_ConstStructMap_67,
  MR_Word STATE_VARIABLE_GlobalData_0_68,
  MR_Word * STATE_VARIABLE_GlobalData_69);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_struct_arg_7_p_0(
  MR_Word Info_8,
  MR_Word ConstStructMap_9,
  MR_Word ConstArg_10,
  MR_Word Width_11,
  MR_Word * RvalTypeWidth_12,
  MR_Word STATE_VARIABLE_GlobalData_0_24,
  MR_Word * STATE_VARIABLE_GlobalData_25);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0(
  MR_Word Info_14,
  MR_Integer ConstNum_15,
  MR_Word VarType_16,
  MR_Word MLDS_Type_17,
  MR_Word ConsId_18,
  MR_Word ConsTag_19,
  MR_Integer Ptag_20,
  MR_Word ExtraRvals_21,
  MR_Word Args_22,
  MR_Word STATE_VARIABLE_ConstStructMap_0_34,
  MR_Word * STATE_VARIABLE_ConstStructMap_35,
  MR_Word STATE_VARIABLE_GlobalData_0_36,
  MR_Word * STATE_VARIABLE_GlobalData_37);

static void MR_CALL 
ml_backend__ml_unify_gen__cons_id_arg_types_and_widths__ho2_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen__cons_id_arg_types_and_widths__ho2_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen__cons_id_arg_types_and_widths__ho2_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__cons_id_arg_types_and_widths__ho2_7_p_0_2(
  MR_Box closure_arg);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__cons_id_arg_types_and_widths__ho2_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen__cons_id_arg_types_and_widths__ho2_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word MayHaveExtraArgs_10,
  MR_Word VarType_11,
  MR_Word ConsId_12,
  MR_Word Args_13,
  MR_Word * ArgsTypesWidths_14);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_struct_args_6_p_0(
  MR_Word Info_1,
  MR_Word ConstStructMap_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_GlobalData_0_5,
  MR_Word * STATE_VARIABLE_GlobalData_6);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_struct_arg_tag_4_p_0(
  MR_Word ConsTag_5,
  MR_Word Type_6,
  MR_Word MLDS_Type_7,
  MR_Word * Rval_8);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_structs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjuncts_9_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Target_2,
  MR_Word HighLevelData_3,
  MR_Word VarTypes_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_GlobalData_0_6,
  MR_Word * STATE_VARIABLE_GlobalData_7,
  MR_Word STATE_VARIABLE_GroundTermMap_0_8,
  MR_Word * STATE_VARIABLE_GroundTermMap_9);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_5(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0(
  MR_Word ModuleInfo_16,
  MR_Word Target_17,
  MR_Word HighLevelData_18,
  MR_Word VarTypes_19,
  MR_Word Var_20,
  MR_Word VarType_21,
  MR_Word MLDS_Type_22,
  MR_Word ConsId_23,
  MR_Word ConsTag_24,
  MR_Word Args_25,
  MR_Word Context_26,
  MR_Word STATE_VARIABLE_GlobalData_0_74,
  MR_Word * STATE_VARIABLE_GlobalData_75,
  MR_Word STATE_VARIABLE_GroundTermMap_0_76,
  MR_Word * STATE_VARIABLE_GroundTermMap_77);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__int_tag_to_mlds_rval_const_3_f_0(
  MR_Word Type_5,
  MR_Word MLDS_Type_6,
  MR_Word IntTag_7);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0(
  MR_Word ModuleInfo_18,
  MR_Word Target_19,
  MR_Word HighLevelData_20,
  MR_Word VarTypes_21,
  MR_Word Var_22,
  MR_Word VarType_23,
  MR_Word MLDS_Type_24,
  MR_Word ConsId_25,
  MR_Word ConsTag_26,
  MR_Integer Ptag_27,
  MR_Word ExtraRvals_28,
  MR_Word ArgVars_29,
  MR_Word Context_30,
  MR_Word STATE_VARIABLE_GlobalData_0_37,
  MR_Word * STATE_VARIABLE_GlobalData_38,
  MR_Word STATE_VARIABLE_GroundTermMap_0_39,
  MR_Word * STATE_VARIABLE_GroundTermMap_40);

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_95_105_100_95_97_114_103_95_116_121_112_101_115_95_97_110_100_95_119_105_100_116_104_115_95_95_104_111_51_95_95_91_49_93_95_48_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_95_105_100_95_97_114_103_95_116_121_112_101_115_95_97_110_100_95_119_105_100_116_104_115_95_95_104_111_51_95_95_91_49_93_95_48_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_95_105_100_95_97_114_103_95_116_121_112_101_115_95_97_110_100_95_119_105_100_116_104_115_95_95_104_111_51_95_95_91_49_93_95_48_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_95_105_100_95_97_114_103_95_116_121_112_101_115_95_97_110_100_95_119_105_100_116_104_115_95_95_104_111_51_95_95_91_49_93_95_48_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_95_105_100_95_97_114_103_95_116_121_112_101_115_95_97_110_100_95_119_105_100_116_104_115_95_95_104_111_51_95_95_91_49_93_95_48_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word ArgToType_9,
  MR_Word MayHaveExtraArgs_10,
  MR_Word VarType_11,
  MR_Word ConsId_12,
  MR_Word Args_13,
  MR_Word * ArgsTypesWidths_14);

static void MR_CALL 
ml_backend__ml_unify_gen__construct_ground_term_initializers_lld_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Context_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_GlobalData_0_5,
  MR_Word * STATE_VARIABLE_GlobalData_6,
  MR_Word STATE_VARIABLE_GroundTermMap_0_7,
  MR_Word * STATE_VARIABLE_GroundTermMap_8);

static void MR_CALL 
ml_backend__ml_unify_gen__construct_ground_term_initializers_hld_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Context_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_GlobalData_0_5,
  MR_Word * STATE_VARIABLE_GlobalData_6,
  MR_Word STATE_VARIABLE_GroundTermMap_0_7,
  MR_Word * STATE_VARIABLE_GroundTermMap_8);

static void MR_CALL 
ml_backend__ml_unify_gen__construct_ground_term_initializer_hld_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word Context_10,
  MR_Word ArgVarTypeWidth_11,
  MR_Word * RvalTypeWidth_12,
  MR_Word STATE_VARIABLE_GlobalData_0_24,
  MR_Word * STATE_VARIABLE_GlobalData_25,
  MR_Word STATE_VARIABLE_GroundTermMap_0_26,
  MR_Word * STATE_VARIABLE_GroundTermMap_27);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_semi_deconstruct_8_p_0(
  MR_Word Var_9,
  MR_Word ConsId_10,
  MR_Word Args_11,
  MR_Word ArgModes_12,
  MR_Word Context_13,
  MR_Word * Stmts_14,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_gen_tag_test_rval_4_f_0(
  MR_Word Info_6,
  MR_Word Tag_7,
  MR_Word Type_8,
  MR_Word Rval_9);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_gen_int_tag_test_rval_4_f_0(
  MR_Word IntTag_6,
  MR_Word Type_7,
  MR_Word ModuleInfo_8,
  MR_Word Rval_9);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_det_deconstruct_8_p_0(
  MR_Word Var_9,
  MR_Word ConsId_10,
  MR_Word Args_11,
  MR_Word Modes_12,
  MR_Word Context_13,
  MR_Word * Stmts_14,
  MR_Word STATE_VARIABLE_Info_0_60,
  MR_Word * STATE_VARIABLE_Info_61);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_direct_arg_deconstruct_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ArgMode_11,
  MR_Integer Ptag_12,
  MR_Word ArgLval_13,
  MR_Word ArgType_14,
  MR_Word VarLval_15,
  MR_Word VarType_16,
  MR_Word Context_17,
  MR_Word * Stmts_18);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unify_args_14_p_0(
  MR_Word ConsId_15,
  MR_Word Args_16,
  MR_Word Modes_17,
  MR_Word ArgTypes_18,
  MR_Word CtorArgRepns_19,
  MR_Word VarType_20,
  MR_Word VarLval_21,
  MR_Word Offset_22,
  MR_Integer ArgNum_23,
  MR_Word Tag_24,
  MR_Word Context_25,
  MR_Word * Stmts_26,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unify_args_loop_15_p_0(
  MR_Word ConsId_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word VarType_6,
  MR_Word VarLval_7,
  MR_Word Offset_8,
  MR_Integer ArgNum_9,
  MR_Word Tag_10,
  MR_Word Context_11,
  MR_Word STATE_VARIABLE_Stmts_0_12,
  MR_Word * STATE_VARIABLE_Stmts_13,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_construct_10_p_0(
  MR_Word Var_11,
  MR_Word ConsId_12,
  MR_Word Args_13,
  MR_Word ArgModes_14,
  MR_Word TakeAddr_15,
  MR_Word HowToConstruct_16,
  MR_Word Context_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_76,
  MR_Word * STATE_VARIABLE_Info_77);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_direct_arg_construct_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ArgMode_11,
  MR_Integer Ptag_12,
  MR_Word ArgLval_13,
  MR_Word ArgType_14,
  MR_Word VarLval_15,
  MR_Word VarType_16,
  MR_Word Context_17,
  MR_Word * Stmts_18);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(
  MR_Word Type_5,
  MR_Word Tag_6,
  MR_Word Rval_7);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_compound_13_p_0(
  MR_Word ConsId_14,
  MR_Integer Ptag_15,
  MR_Word MaybeStag_16,
  MR_Word UsesBaseClass_17,
  MR_Word Var_18,
  MR_Word ArgVars_19,
  MR_Word ArgModes_20,
  MR_Word TakeAddr_21,
  MR_Word HowToConstruct_22,
  MR_Word Context_23,
  MR_Word * Stmts_24,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_14_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_17_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_17_p_0(
  MR_Word MaybeConsId_18,
  MR_Word MaybeCtorName_19,
  MR_Integer Ptag_20,
  MR_Word ExplicitSecTag_21,
  MR_Word Var_22,
  MR_Word VarLval_23,
  MR_Word VarType_24,
  MR_Word MLDS_Type_25,
  MR_Word ExtraRvalsTypesWidths_26,
  MR_Word ArgVars_27,
  MR_Word ArgModes_28,
  MR_Word TakeAddr_29,
  MR_Word CellToReuse_30,
  MR_Word Context_31,
  MR_Word * Stmts_32,
  MR_Word STATE_VARIABLE_Info_0_73,
  MR_Word * STATE_VARIABLE_Info_74);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_101_119_95_111_98_106_101_99_116_95_100_121_110_97_109_105_99_97_108_108_121_95_95_91_53_93_95_48_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_101_119_95_111_98_106_101_99_116_95_100_121_110_97_109_105_99_97_108_108_121_95_95_91_53_93_95_48_16_p_0(
  MR_Word MaybeConsId_17,
  MR_Word MaybeCtorName_18,
  MR_Integer Ptag_19,
  MR_Word ExplicitSecTag_20,
  MR_Word VarLval_22,
  MR_Word VarType_23,
  MR_Word MLDS_Type_24,
  MR_Word ExtraRvalsTypesWidths_25,
  MR_Word ArgVars_26,
  MR_Word ArgModes_27,
  MR_Word TakeAddr_28,
  MR_Word Context_29,
  MR_Word * Stmts_30,
  MR_Word STATE_VARIABLE_Info_0_63,
  MR_Word * STATE_VARIABLE_Info_64);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_expand_or_pack_into_words_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_cons_args_12_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_cons_args_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_cons_args_12_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer NumExtraArgs_4,
  MR_Integer CurArgNum_5,
  MR_Integer CurOffset_6,
  MR_Word AllArgVarsTypesWidths_7,
  MR_Word STATE_VARIABLE_TakeAddr_0_8,
  MR_Word * HeadVar__9_9,
  MR_Word * HeadVar__10_10,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_11,
  MR_Word * STATE_VARIABLE_MayUseAtomic_12);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_calc_field_offset_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_calc_field_offset_3_f_0(
  MR_Integer NumExtraArgs_5,
  MR_Word ArgVarsTypesWidths_6,
  MR_Integer ArgNum_7);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_cons_id_to_tag_3_p_0(
  MR_Word Info_4,
  MR_Word ConsId_5,
  MR_Word * Tag_6);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unify_args_for_reuse_16_p_0(
  MR_Word ConsId_17,
  MR_Word Args_18,
  MR_Word Modes_19,
  MR_Word ArgTypes_20,
  MR_Word CtorArgRepns_21,
  MR_Word TakeAddr_22,
  MR_Word VarType_23,
  MR_Word VarLval_24,
  MR_Word Offset_25,
  MR_Integer ArgNum_26,
  MR_Word Tag_27,
  MR_Word Context_28,
  MR_Word * Stmts_29,
  MR_Word * TakeAddrInfos_30,
  MR_Word STATE_VARIABLE_Info_0_53,
  MR_Word * STATE_VARIABLE_Info_54);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_next_field_offset_4_p_0(
  MR_Word CurArg_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unify_arg_15_p_0(
  MR_Word ConsId_16,
  MR_Word ArgVar_17,
  MR_Word Mode_18,
  MR_Word ArgType_19,
  MR_Word CtorArgRepn_20,
  MR_Word VarType_21,
  MR_Word VarLval_22,
  MR_Word Offset_23,
  MR_Integer ArgNum_24,
  MR_Word Tag_25,
  MR_Word Context_26,
  MR_Word STATE_VARIABLE_Stmts_0_49,
  MR_Word * STATE_VARIABLE_Stmts_50,
  MR_Word STATE_VARIABLE_Info_0_51,
  MR_Word * STATE_VARIABLE_Info_52);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_gen_field_id_6_f_0(
  MR_Word Target_8,
  MR_Word Type_9,
  MR_Word Tag_10,
  MR_String ConsName_11,
  MR_Integer ConsArity_12,
  MR_Word FieldName_13);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_sub_unify_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word HighLevelData_13,
  MR_Word ArgMode_14,
  MR_Word ArgLval_15,
  MR_Word ArgType_16,
  MR_Word FieldLval_17,
  MR_Word FieldType_18,
  MR_Word FieldWidth_19,
  MR_Word Context_20,
  MR_Word STATE_VARIABLE_Stmts_0_26,
  MR_Word * STATE_VARIABLE_Stmts_27);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_sub_unify_assign_left_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word HighLevelData_12,
  MR_Word ArgLval_13,
  MR_Word ArgType_14,
  MR_Word FieldLval_15,
  MR_Word FieldType_16,
  MR_Word FieldWidth_17,
  MR_Word Context_18,
  MR_Word STATE_VARIABLE_Stmts_0_37,
  MR_Word * STATE_VARIABLE_Stmts_38);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_bitwise_and_2_f_0(
  MR_Word Rval_4,
  MR_Integer Mask_5);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_bitwise_or_2_f_0(
  MR_Word RvalA_4,
  MR_Word RvalB_5);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_lshift_2_f_0(
  MR_Word Rval0_4,
  MR_Integer Shift_5);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_type_as_field_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word HighLevelData_7,
  MR_Word FieldType_8,
  MR_Word FieldWidth_9,
  MR_Word * BoxedFieldType_10);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_sub_unify_assign_right_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ArgLval_11,
  MR_Word ArgType_12,
  MR_Word FieldLval_13,
  MR_Word FieldType_14,
  MR_Word FieldWidth_15,
  MR_Word Context_16,
  MR_Word STATE_VARIABLE_Stmts_0_28,
  MR_Word * STATE_VARIABLE_Stmts_29);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_field_names_and_types_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_field_names_and_types_5_p_0(
  MR_Word Info_6,
  MR_Word Type_7,
  MR_Word ConsId_8,
  MR_Word ArgTypes_9,
  MR_Word * CtorArgRepns_10);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_tag_offset_and_argnum_4_p_0(
  MR_Word Tag_5,
  MR_Integer * Ptag_6,
  MR_Word * Offset_7,
  MR_Integer * ArgNum_8);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_extra_arg_assign_9_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_extra_arg_assign_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_extra_arg_assign_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word VarType_2,
  MR_Word VarLval_3,
  MR_Integer CurOffset_4,
  MR_Word ConsIdTag_5,
  MR_Word Context_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_gen_mktag_1_f_0(
  MR_Integer Ptag_3);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_field_take_address_assigns_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CellLval_2,
  MR_Word CellType_3,
  MR_Word MaybePtag_4,
  MR_Word Context_5,
  MR_Word Info_6,
  MR_Word * HeadVar__7_7);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_13_p_0(
  MR_Word MaybeConsId_14,
  MR_Word MaybeCtorName_15,
  MR_Integer Ptag_16,
  MR_Word Var_17,
  MR_Word VarLval_18,
  MR_Word VarType_19,
  MR_Word MLDS_Type_20,
  MR_Word ExtraRvalsTypesWidths_21,
  MR_Word ArgVars_22,
  MR_Word Context_23,
  MR_Word * Stmts_24,
  MR_Word STATE_VARIABLE_Info_0_44,
  MR_Word * STATE_VARIABLE_Info_45);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__construct_static_ground_term_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen__construct_static_ground_term_14_p_0(
  MR_Word ModuleInfo_15,
  MR_Word Target_16,
  MR_Word HighLevelData_17,
  MR_Word Context_18,
  MR_Word VarType_19,
  MR_Word MLDS_Type_20,
  MR_Word MaybeConsId_21,
  MR_Word UsesBaseClass_22,
  MR_Integer Ptag_23,
  MR_Word ExtraRvals_24,
  MR_Word RvalsTypesWidths_25,
  MR_Word * GroundTerm_26,
  MR_Word STATE_VARIABLE_GlobalData_0_40,
  MR_Word * STATE_VARIABLE_GlobalData_41);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_pack_ground_term_args_into_word_inits_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_unify_gen__or_packed_rvals_3_p_0(
  MR_Word HeadRval_4,
  MR_Word TailRvals_5,
  MR_Word * OrAllRval_6);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_pack_into_one_word_loop_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevOrRvals_0_3,
  MR_Word * STATE_VARIABLE_RevOrRvals_4);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__get_const_type_for_cons_id_5_f_0(
  MR_Word Target_7,
  MR_Word HighLevelData_8,
  MR_Word MLDS_Type_9,
  MR_Word UsesBaseClass_10,
  MR_Word MaybeConsId_11);

static void MR_CALL 
ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0_3(
  MR_Box closure_arg);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0(
  MR_Word Info_6,
  MR_Word VarType_7,
  MR_Word MaybeConsId_8,
  MR_Word ArgVars_9,
  MR_Word * ArgVarsTypesWidths_10);

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_114_103_115_95_116_121_112_101_115_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_box_extra_const_rval_list_lld_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_box_extra_const_rval_list_lld_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Context_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_GlobalData_0_5,
  MR_Word * STATE_VARIABLE_GlobalData_6);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_box_const_rval_list_lld_6_p_0(
  MR_Word Info_1,
  MR_Word Context_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_GlobalData_0_5,
  MR_Word * STATE_VARIABLE_GlobalData_6);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_box_or_unbox_const_rval_list_hld_6_p_0(
  MR_Word Info_1,
  MR_Word Context_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_GlobalData_0_5,
  MR_Word * STATE_VARIABLE_GlobalData_6);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_constant_6_p_0(
  MR_Word Tag_7,
  MR_Word VarType_8,
  MR_Word MLDS_VarType_9,
  MR_Word * Rval_10,
  MR_Word STATE_VARIABLE_Info_0_52,
  MR_Word * STATE_VARIABLE_Info_53);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____arg_const_type_and_width_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____arg_const_type_and_width_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____arg_to_type_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____arg_to_type_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____arg_type_and_width_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____arg_type_and_width_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____arg_var_type_and_width_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____arg_var_type_and_width_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____field_offset_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____field_offset_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____may_have_extra_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____may_have_extra_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____ml_const_struct_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____ml_const_struct_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____mlds_rval_type_and_width_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____mlds_rval_type_and_width_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____take_addr_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____take_addr_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_1[25][2];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_2[8][3];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_3[11][1];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_4[16][5];

static /* final */ const MR_Integer ml_backend__ml_unify_gen_scalar_common_5[1][2];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_6[2][8];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_7[4][6];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_8[1][9];




static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_1[25][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_term_size_value_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_arg_type_and_width_1)),
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_1[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_1[2]))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_arg_type_and_width_1)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_3[1])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 20)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 4))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 6))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 8))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 5))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 7))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 9))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_2[8][3] = {
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
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[3])),
    ((MR_Box) (ml_backend__ml_unify_gen__construct_static_ground_term_14_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[4])),
    ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_statically_13_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[6])),
    ((MR_Box) (ml_backend__ml_unify_gen__ml_field_names_and_types_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[7])),
    ((MR_Box) (ml_backend__ml_unify_gen__ml_calc_field_offset_3_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[9])),
    ((MR_Box) (ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_101_119_95_111_98_106_101_99_116_95_100_121_110_97_109_105_99_97_108_108_121_95_95_91_53_93_95_48_16_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[15])),
    ((MR_Box) (ml_backend__ml_unify_gen__cons_id_arg_types_and_widths__ho2_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_3[11][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_4[16][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_may_have_extra_args_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_may_have_extra_args_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[1])),
    ((MR_Box) (ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_mlds_rval_type_and_width_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__pti_arg_type_and_width_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_field_offset_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_field_offset_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_mlds_rval_type_and_width_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_typed_rval_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0))
  },
  /* row 13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0))
  },
  /* row 14 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 15 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Integer ml_backend__ml_unify_gen_scalar_common_5[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_6[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_5[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__pti_arg_type_and_width_1__pseudo_1))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_5[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen____vpti_func_2__pseudo_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__pti_arg_type_and_width_1__pseudo_1))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_7[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_unify_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_6[1])),
    ((MR_Box) (ml_backend__ml_unify_gen__cons_id_arg_types_and_widths__ho2_7_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_2[7])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_6[1])),
    ((MR_Box) (ml_backend__ml_unify_gen__cons_id_arg_types_and_widths__ho2_7_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_2[7])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_8[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_ml_const_struct_info_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__pti_arg_type_and_width_1__pseudo_1 = {
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_arg_type_and_width_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen____vpti_func_2__pseudo_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__pti_arg_type_and_width_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_arg_type_and_width_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_term_size_value_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__ti_arg_type_and_width_1hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_arg_type_and_width_1,
  {
    (MR_TypeInfo) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0
  }
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_arg_const_type_and_width_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_unify_gen____Unify____arg_const_type_and_width_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen____Compare____arg_const_type_and_width_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen",
  (MR_String) "arg_const_type_and_width",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__ti_arg_type_and_width_1hlds__const_struct__type_ctor_info_const_struct_arg_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_arg_to_type_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (ml_backend__ml_unify_gen____Unify____arg_to_type_1_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen____Compare____arg_to_type_1_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen",
  (MR_String) "arg_to_type",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ml_backend__ml_unify_gen____vpti_func_2__pseudo_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_arg_type_and_width_1_0[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0
};

static const MR_DuFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_arg_type_and_width_1_0 = {
  (MR_String) "arg_type_and_width",
  (MR_Integer) 3,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_arg_type_and_width_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_arg_type_and_width_1_0[1] = {
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_arg_type_and_width_1_0
};

static const MR_DuPtagLayout ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_ptag_ordered_arg_type_and_width_1[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_arg_type_and_width_1_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_name_ordered_arg_type_and_width_1[1] = {
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_arg_type_and_width_1_0
};

static const MR_Integer ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_arg_type_and_width_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_arg_type_and_width_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_unify_gen____Unify____arg_type_and_width_1_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen____Compare____arg_type_and_width_1_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen",
  (MR_String) "arg_type_and_width",
  {     ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_name_ordered_arg_type_and_width_1 },
  {     ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_ptag_ordered_arg_type_and_width_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_arg_type_and_width_1
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__ti_arg_type_and_width_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_arg_type_and_width_1,
  {
    (MR_TypeInfo) &ml_backend__ml_unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_arg_var_type_and_width_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_unify_gen____Unify____arg_var_type_and_width_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen____Compare____arg_var_type_and_width_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen",
  (MR_String) "arg_var_type_and_width",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__ti_arg_type_and_width_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_Integer ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_field_offset_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__notag_functor_desc_field_offset_0 = {
  (MR_String) "offset",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_field_offset_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (ml_backend__ml_unify_gen____Unify____field_offset_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen____Compare____field_offset_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen",
  (MR_String) "field_offset",
  {     &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__notag_functor_desc_field_offset_0 },
  {     &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__notag_functor_desc_field_offset_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_field_offset_0
};

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_functor_desc_may_have_extra_args_0_0 = {
  (MR_String) "may_not_have_extra_args",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_functor_desc_may_have_extra_args_0_1 = {
  (MR_String) "may_have_extra_args",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_value_ordered_may_have_extra_args_0[2] = {
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_functor_desc_may_have_extra_args_0_0,
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_functor_desc_may_have_extra_args_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_name_ordered_may_have_extra_args_0[2] = {
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_functor_desc_may_have_extra_args_0_1,
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_functor_desc_may_have_extra_args_0_0
};

static const MR_Integer ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_may_have_extra_args_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_may_have_extra_args_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_unify_gen____Unify____may_have_extra_args_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen____Compare____may_have_extra_args_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen",
  (MR_String) "may_have_extra_args",
  {     ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_name_ordered_may_have_extra_args_0 },
  {     ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_value_ordered_may_have_extra_args_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_may_have_extra_args_0
};

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_ml_const_struct_info_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_target_lang_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

static const MR_ConstString ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_names_ml_const_struct_info_0_0[3] = {
  (MR_String) "mcsi_module_info",
  (MR_String) "mcsi_target",
  (MR_String) "mcsi_high_level_data"
};

static const MR_DuArgLocn ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_locns_ml_const_struct_info_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 2,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_ml_const_struct_info_0_0 = {
  (MR_String) "ml_const_struct_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_ml_const_struct_info_0_0,
  ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_names_ml_const_struct_info_0_0,
  ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_locns_ml_const_struct_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_ml_const_struct_info_0_0[1] = {
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_ml_const_struct_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_ptag_ordered_ml_const_struct_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_ml_const_struct_info_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_name_ordered_ml_const_struct_info_0[1] = {
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_ml_const_struct_info_0_0
};

static const MR_Integer ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_ml_const_struct_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_ml_const_struct_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_unify_gen____Unify____ml_const_struct_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen____Compare____ml_const_struct_info_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen",
  (MR_String) "ml_const_struct_info",
  {     ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_name_ordered_ml_const_struct_info_0 },
  {     ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_ptag_ordered_ml_const_struct_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_ml_const_struct_info_0
};

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_mlds_rval_type_and_width_0_0[3] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0
};

static const MR_DuFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_mlds_rval_type_and_width_0_0 = {
  (MR_String) "rval_type_and_width",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_mlds_rval_type_and_width_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_mlds_rval_type_and_width_0_0[1] = {
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_mlds_rval_type_and_width_0_0
};

static const MR_DuPtagLayout ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_ptag_ordered_mlds_rval_type_and_width_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_mlds_rval_type_and_width_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_name_ordered_mlds_rval_type_and_width_0[1] = {
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_mlds_rval_type_and_width_0_0
};

static const MR_Integer ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_mlds_rval_type_and_width_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_mlds_rval_type_and_width_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_unify_gen____Unify____mlds_rval_type_and_width_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen____Compare____mlds_rval_type_and_width_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen",
  (MR_String) "mlds_rval_type_and_width",
  {     ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_name_ordered_mlds_rval_type_and_width_0 },
  {     ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_ptag_ordered_mlds_rval_type_and_width_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_mlds_rval_type_and_width_0
};

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_take_addr_info_0_0[4] = {
  (MR_PseudoTypeInfo) &ml_backend__ml_unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_field_offset_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0
};

static const MR_DuFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_take_addr_info_0_0 = {
  (MR_String) "take_addr_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_take_addr_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_take_addr_info_0_0[1] = {
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_take_addr_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_ptag_ordered_take_addr_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_take_addr_info_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_name_ordered_take_addr_info_0[1] = {
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_take_addr_info_0_0
};

static const MR_Integer ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_take_addr_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_take_addr_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_unify_gen____Unify____take_addr_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen____Compare____take_addr_info_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen",
  (MR_String) "take_addr_info",
  {     ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_name_ordered_take_addr_info_0 },
  {     ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_ptag_ordered_take_addr_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_take_addr_info_0
};

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__construct_static_ground_term__2946__1_1_f_0(
  MR_Word LambdaHeadVar__1_43)
{
  {
    MR_Word LambdaHeadVar__2_44;

    {
      LambdaHeadVar__2_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_44, 0) = ((MR_Box) (LambdaHeadVar__1_43));
    }
    return LambdaHeadVar__2_44;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__cons_id_arg_types_and_widths__2847__2_2_p_0(
  MR_Word MayHaveExtraArgs_10,
  MR_Word HeadVar__2_31)
{
  {
    MR_bool succeeded = (MayHaveExtraArgs_10 == HeadVar__2_31);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__cons_id_arg_types_and_widths__2847__1_2_p_0(
  MR_Word MayHaveExtraArgs_10,
  MR_Word HeadVar__2_31)
{
  {
    MR_bool succeeded = (MayHaveExtraArgs_10 == HeadVar__2_31);

    return succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_const_static_compound__2602__1_1_f_0(
  MR_Word LambdaHeadVar__1_38)
{
  {
    MR_Word LambdaHeadVar__2_39;

    LambdaHeadVar__2_39 = ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_109_108_95_103_101_110_95_99_111_110_115_116_95_115_116_97_116_105_99_95_99_111_109_112_111_117_110_100_95_95_50_54_48_50_95_95_49_95_95_91_49_93_95_48_1_f_0();
    return LambdaHeadVar__2_39;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_109_108_95_103_101_110_95_99_111_110_115_116_95_115_116_97_116_105_99_95_99_111_109_112_111_117_110_100_95_95_50_54_48_50_95_95_49_95_95_91_49_93_95_48_1_f_0(void)
{
  {
    MR_Word LambdaHeadVar__2_39;

    LambdaHeadVar__2_39 = parse_tree__builtin_lib_types__void_type_0_f_0();
    return LambdaHeadVar__2_39;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2296__5_2_p_0(
  MR_Word Args_25,
  MR_Word HeadVar__2_166)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[4], ((MR_Box) (Args_25)), ((MR_Box) (HeadVar__2_166)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2296__4_2_p_0(
  MR_Word Args_25,
  MR_Word HeadVar__2_153)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[4], ((MR_Box) (Args_25)), ((MR_Box) (HeadVar__2_153)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2296__3_2_p_0(
  MR_Word Args_25,
  MR_Word HeadVar__2_142)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[4], ((MR_Box) (Args_25)), ((MR_Box) (HeadVar__2_142)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2296__2_2_p_0(
  MR_Word Args_25,
  MR_Word HeadVar__2_131)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[4], ((MR_Box) (Args_25)), ((MR_Box) (HeadVar__2_131)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2296__1_2_p_0(
  MR_Word Args_25,
  MR_Word HeadVar__2_109)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[4], ((MR_Box) (Args_25)), ((MR_Box) (HeadVar__2_109)));
    return succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_field_names_and_types__1370__1_1_f_0(
  MR_Word LambdaHeadVar__1_24)
{
  {
    MR_Word LambdaHeadVar__2_25;
    MR_Word Var_28;

    Var_28 = mercury__term__context_init_0_f_0();
    {
      LambdaHeadVar__2_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_25, 1) = ((MR_Box) (LambdaHeadVar__1_24));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_25, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_25, 3) = ((MR_Box) (Var_28));
    }
    return LambdaHeadVar__2_25;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_extra_arg_assign__1215__1_2_p_0(
  MR_Word ArgWidth_34,
  MR_Word HeadVar__2_48)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____arg_width_0_0(ArgWidth_34, HeadVar__2_48);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_extra_arg_assign__1209__1_2_p_0(
  MR_Word HighLevelData_28,
  MR_Word HeadVar__2_42)
{
  {
    MR_bool succeeded = (HighLevelData_28 == HeadVar__2_42);

    return succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_calc_field_offset__1189__1_1_f_0(
  MR_Word LambdaHeadVar__1_18)
{
  {
    MR_Word LambdaHeadVar__2_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_18, (MR_Integer) 2)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_18, (MR_Integer) 0)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_18, (MR_Integer) 1)));

    return LambdaHeadVar__2_19;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1153__1_2_p_0(
  MR_Word Offset_80,
  MR_Word HeadVar__2_101)
{
  {
    MR_bool succeeded;
    MR_Integer Var_121 = (MR_Integer) Offset_80;
    MR_Integer Var_122 = (MR_Integer) HeadVar__2_101;

    succeeded = (Var_121 == Var_122);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1147__1_2_p_0(
  MR_Word ArgWidth_68,
  MR_Word HeadVar__2_96)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____arg_width_0_0(ArgWidth_68, HeadVar__2_96);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_box_extra_const_rval_list_lld__1049__1_2_p_0(
  MR_Word Width_21,
  MR_Word HeadVar__2_28)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____arg_width_0_0(Width_21, HeadVar__2_28);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__743__1_2_p_0(
  MR_Integer PrimaryTag_49,
  MR_Integer LambdaHeadVar__1_81)
{
  {
    MR_bool succeeded = (LambdaHeadVar__1_81 == PrimaryTag_49);

    succeeded = !(succeeded);
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__725__1_3_p_0(
  MR_Word STATE_VARIABLE_Info_0_73,
  MR_Word LambdaHeadVar__1_78,
  MR_Integer * LambdaHeadVar__2_79)
{
  {
    MR_Word ReuseConsIdTag_41;
    MR_Word _ReuseOffSet_42;
    MR_Integer _ReuseArgNum_43;

    ml_backend__ml_unify_gen__ml_cons_id_to_tag_3_p_0(STATE_VARIABLE_Info_0_73, LambdaHeadVar__1_78, &ReuseConsIdTag_41);
    ml_backend__ml_unify_gen__ml_tag_offset_and_argnum_4_p_0(ReuseConsIdTag_41, LambdaHeadVar__2_79, &_ReuseOffSet_42, &_ReuseArgNum_43);
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_new_object_statically__689__1_1_f_0(
  MR_Word LambdaHeadVar__1_51)
{
  {
    MR_Word LambdaHeadVar__2_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_51, (MR_Integer) 0)));
    MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_51, (MR_Integer) 1)));
    MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_51, (MR_Integer) 2)));

    return LambdaHeadVar__2_52;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_new_object_dynamically__628__1_1_f_0(
  MR_Word LambdaHeadVar__1_69)
{
  {
    MR_Word LambdaHeadVar__2_70;
    MR_Word Rv_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_69, (MR_Integer) 0)));
    MR_Word T_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_69, (MR_Integer) 1)));
    MR_Word Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_69, (MR_Integer) 2)));

    {
      LambdaHeadVar__2_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_70, 0) = ((MR_Box) (Rv_73));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_70, 1) = ((MR_Box) (T_74));
    }
    return LambdaHeadVar__2_70;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object__550__1_2_p_0(
  MR_Word TakeAddr_23,
  MR_Word HeadVar__2_41)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[1], ((MR_Box) (TakeAddr_23)), ((MR_Box) (HeadVar__2_41)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__197__1_2_p_0(
  MR_Word CodeModel_8,
  MR_Word HeadVar__2_74)
{
  {
    MR_bool succeeded = (CodeModel_8 == HeadVar__2_74);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__229__1_2_p_0(
  MR_Word MaybeSizeProfInfo_37,
  MR_Word HeadVar__2_69)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[0], ((MR_Box) (MaybeSizeProfInfo_37)), ((MR_Box) (HeadVar__2_69)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__217__1_2_p_0(
  MR_Word CodeModel_8,
  MR_Word HeadVar__2_65)
{
  {
    MR_bool succeeded = (CodeModel_8 == HeadVar__2_65);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__165__1_2_p_0(
  MR_Word CodeModel_8,
  MR_Word HeadVar__2_86)
{
  {
    MR_bool succeeded = (CodeModel_8 == HeadVar__2_86);

    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____take_addr_info_0_0(
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
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word Var_12;

      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], &Var_12, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;
        MR_Integer Var_21 = (MR_Integer) ArgX2_6;
        MR_Integer Var_22 = (MR_Integer) ArgY2_7;

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

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____take_addr_info_0_0(
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
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Integer CastX_18;
      MR_Integer CastY_19;

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        CastX_18 = (MR_Integer) ArgX2_5;
        CastY_19 = (MR_Integer) ArgY2_6;
        succeeded = (CastX_18 == CastY_19);
        if (succeeded)
          succeeded = MR_TRUE;
        else
        {
          MR_Integer ArgX1_16 = (MR_Integer) ArgX2_5;
          MR_Integer ArgY1_17 = (MR_Integer) ArgY2_6;

          succeeded = (ArgX1_16 == ArgY1_17);
        }
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

void MR_CALL 
ml_backend__ml_unify_gen____Compare____mlds_rval_type_and_width_0_0(
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

      ml_backend__mlds____Compare____mlds_rval_0_0(&Var_10, ArgX1_4, ArgY1_5);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        ml_backend__mlds____Compare____mlds_type_0_0(&Var_11, ArgX2_6, ArgY2_7);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
          parse_tree__prog_data____Compare____arg_width_0_0(HeadVar__1_1, ArgX3_8, ArgY3_9);
      }
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____mlds_rval_type_and_width_0_0(
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
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));

      succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
          succeeded = parse_tree__prog_data____Unify____arg_width_0_0(ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____ml_const_struct_info_0_0(
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
      MR_Word ArgX2_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 3);
      MR_Word ArgY2_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)))) & (MR_Integer) 3);
      MR_Word ArgX3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY3_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word Var_10;

      hlds__hlds_module____Compare____module_info_0_0(&Var_10, ArgX1_4, ArgY1_5);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;
        MR_Integer Var_17 = (MR_Integer) ArgX2_6;
        MR_Integer Var_18 = (MR_Integer) ArgY2_7;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_11, Var_17, Var_18);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          MR_Integer Var_19 = (MR_Integer) ArgX3_8;
          MR_Integer Var_20 = (MR_Integer) ArgY3_9;

          mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_19, Var_20);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____ml_const_struct_info_0_0(
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
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 3);
      MR_Word ArgY2_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 3);
      MR_Word ArgX3_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____may_have_extra_args_0_0(
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

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____may_have_extra_args_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____field_offset_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_7 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = (MR_Integer) HeadVar__2_2;
      MR_Integer ArgY1_5 = (MR_Integer) HeadVar__3_3;

      mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____field_offset_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = (MR_Integer) HeadVar__1_1;
      MR_Integer ArgY1_4 = (MR_Integer) HeadVar__2_2;

      succeeded = (ArgX1_3 == ArgY1_4);
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____arg_var_type_and_width_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[3], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____arg_var_type_and_width_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = ml_backend__ml_unify_gen____Unify____arg_type_and_width_1_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____arg_type_and_width_1_0(
  MR_Word TypeInfo_for_Arg_14,
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
      MR_Box ArgX1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
      MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word Var_10;

      mercury__builtin__compare_3_p_0(TypeInfo_for_Arg_14, &Var_10, ArgX1_4, ArgY1_5);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        parse_tree__prog_data____Compare____mer_type_0_0(&Var_11, ArgX2_6, ArgY2_7);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
          parse_tree__prog_data____Compare____arg_width_0_0(HeadVar__1_1, ArgX3_8, ArgY3_9);
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____arg_to_type_1_0(
  MR_Word TypeInfo_for_Arg_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_117_110_105_102_121_95_103_101_110_95_95_97_114_103_95_116_111_95_116_121_112_101_95_49_95_95_91_49_93_95_48_3_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
}

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_117_110_105_102_121_95_103_101_110_95_95_97_114_103_95_116_111_95_116_121_112_101_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) Cast_HeadVar1_4, (MR_Word) Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____arg_to_type_1_0(
  MR_Word TypeInfo_for_Arg_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_117_110_105_102_121_95_103_101_110_95_95_97_114_103_95_116_111_95_116_121_112_101_95_49_95_95_91_49_93_95_48_2_p_0(HeadVar__1_1, HeadVar__2_2);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_117_110_105_102_121_95_103_101_110_95_95_97_114_103_95_116_111_95_116_121_112_101_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) Cast_HeadVar1_3, (MR_Word) Cast_HeadVar2_4);
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____arg_const_type_and_width_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[5], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____arg_const_type_and_width_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = ml_backend__ml_unify_gen____Unify____arg_type_and_width_1_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0, Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____arg_type_and_width_1_0(
  MR_Word TypeInfo_for_Arg_11,
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
      MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Arg_11, ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
          succeeded = parse_tree__prog_data____Unify____arg_width_0_0(ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__lookup_type_and_specify_width_4_p_0(
  MR_Word TypeInfo_for_Arg_10,
  MR_Word ArgToType_5,
  MR_Word Width_6,
  MR_Box Arg_7,
  MR_Word * ArgTypeWidth_8)
{
  {
    MR_Word Var_9;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), ArgToType_5, (MR_Integer) 1)));
    MR_Box conv1_Var_9;

    conv1_Var_9 = func_0(((MR_Box) ArgToType_5), Arg_7);
    Var_9 = ((MR_Word) conv1_Var_9);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *ArgTypeWidth_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = Arg_7;
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Width_6));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__specify_type_and_width_4_p_0(
  MR_Word TypeInfo_for_Arg_9,
  MR_Word Type_5,
  MR_Word Width_6,
  MR_Box Arg_7,
  MR_Word * ArgTypeWidth_8)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
    *ArgTypeWidth_8 = base;
    MR_hl_field(MR_mktag(0), base, 0) = Arg_7;
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Type_5));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Width_6));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_struct_6_p_0(
  MR_Word Info_7,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ConstStructMap_0_19,
  MR_Word * STATE_VARIABLE_ConstStructMap_20,
  MR_Word STATE_VARIABLE_GlobalData_0_21,
  MR_Word * STATE_VARIABLE_GlobalData_22)
{
  {
    MR_Integer ConstNum_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word ConstStruct_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word ConsId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstStruct_9, (MR_Integer) 0)));
    MR_Word Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstStruct_9, (MR_Integer) 1)));
    MR_Word Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstStruct_9, (MR_Integer) 2)));
    MR_Word ModuleInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0)));
    MR_Word MLDS_Type_17;
    MR_Word ConsTag_18;
    MR_Word _Inst_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstStruct_9, (MR_Integer) 3)));
    MR_Word Var_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)))) & (MR_Integer) 3);
    MR_Word Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

    MLDS_Type_17 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_16, Type_14);
    ConsTag_18 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_16, ConsId_12);
    ml_backend__ml_unify_gen__ml_gen_const_struct_tag_11_p_0(Info_7, ConstNum_8, Type_14, MLDS_Type_17, ConsId_12, ConsTag_18, Args_13, STATE_VARIABLE_ConstStructMap_0_19, STATE_VARIABLE_ConstStructMap_20, STATE_VARIABLE_GlobalData_0_21, STATE_VARIABLE_GlobalData_22);
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_struct_tag_11_p_0(
  MR_Word Info_12,
  MR_Integer ConstNum_13,
  MR_Word Type_14,
  MR_Word MLDS_Type_15,
  MR_Word ConsId_16,
  MR_Word ConsTag_17,
  MR_Word Args_18,
  MR_Word STATE_VARIABLE_ConstStructMap_0_66,
  MR_Word * STATE_VARIABLE_ConstStructMap_67,
  MR_Word STATE_VARIABLE_GlobalData_0_68,
  MR_Word * STATE_VARIABLE_GlobalData_69)
{
  switch (MR_tag((MR_Word) ConsTag_17)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ConsTag_17)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0(Info_12, ConstNum_13, Type_14, MLDS_Type_15, ConsId_16, ConsTag_17, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Args_18, STATE_VARIABLE_ConstStructMap_0_66, STATE_VARIABLE_ConstStructMap_67, STATE_VARIABLE_GlobalData_0_68, STATE_VARIABLE_GlobalData_69);
          }
          break;
        case (MR_Integer) 1:
          if ((Args_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_tag\'/11", (MR_String) "no_tag arity != 1");
              return;
            }
          }
          else
          {
            MR_Word Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 1)));
            MR_Word Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 0)));

            if ((Var_99 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word ArgRvalTypeWidth_23;
              MR_Word ArgRval_24;
              MR_Word Rval_27;
              MR_Word GroundTerm_28;
              MR_Word _RvalMLDSType_25;
              MR_Word _Width_26;

              ml_backend__ml_unify_gen__ml_gen_const_struct_arg_7_p_0(Info_12, STATE_VARIABLE_ConstStructMap_0_66, Var_100, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ArgRvalTypeWidth_23, STATE_VARIABLE_GlobalData_0_68, STATE_VARIABLE_GlobalData_69);
              ArgRval_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgRvalTypeWidth_23, (MR_Integer) 0)));
              _RvalMLDSType_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgRvalTypeWidth_23, (MR_Integer) 1)));
              _Width_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgRvalTypeWidth_23, (MR_Integer) 2)));
              Rval_27 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(MLDS_Type_15, ConsTag_17, ArgRval_24);
              {
                GroundTerm_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_28, 0) = ((MR_Box) (Rval_27));
                MR_hl_field(MR_mktag(0), GroundTerm_28, 1) = ((MR_Box) (Type_14));
                MR_hl_field(MR_mktag(0), GroundTerm_28, 2) = ((MR_Box) (MLDS_Type_15));
              }
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ConstNum_13, ((MR_Box) (GroundTerm_28)), STATE_VARIABLE_ConstStructMap_0_66, STATE_VARIABLE_ConstStructMap_67);
            }
            else
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_tag\'/11", (MR_String) "no_tag arity != 1");
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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_tag\'/11", (MR_String) "unexpected tag");
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
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_tag\'/11", (MR_String) "unexpected tag");
              return;
            }
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Integer Ptag_97 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1)));

            ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0(Info_12, ConstNum_13, Type_14, MLDS_Type_15, ConsId_16, ConsTag_17, Ptag_97, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Args_18, STATE_VARIABLE_ConstStructMap_0_66, STATE_VARIABLE_ConstStructMap_67, STATE_VARIABLE_GlobalData_0_68, STATE_VARIABLE_GlobalData_69);
          }
          break;
        case (MR_Integer) 12:
          if ((Args_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_tag\'/11", (MR_String) "no_tag arity != 1");
              return;
            }
          }
          else
          {
            MR_Word Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 1)));
            MR_Word Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 0)));

            if ((Var_99 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word ArgRvalTypeWidth_23;
              MR_Word ArgRval_24;
              MR_Word Rval_27;
              MR_Word GroundTerm_28;
              MR_Word _RvalMLDSType_25;
              MR_Word _Width_26;

              ml_backend__ml_unify_gen__ml_gen_const_struct_arg_7_p_0(Info_12, STATE_VARIABLE_ConstStructMap_0_66, Var_100, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ArgRvalTypeWidth_23, STATE_VARIABLE_GlobalData_0_68, STATE_VARIABLE_GlobalData_69);
              ArgRval_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgRvalTypeWidth_23, (MR_Integer) 0)));
              _RvalMLDSType_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgRvalTypeWidth_23, (MR_Integer) 1)));
              _Width_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgRvalTypeWidth_23, (MR_Integer) 2)));
              Rval_27 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(MLDS_Type_15, ConsTag_17, ArgRval_24);
              {
                GroundTerm_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_28, 0) = ((MR_Box) (Rval_27));
                MR_hl_field(MR_mktag(0), GroundTerm_28, 1) = ((MR_Box) (Type_14));
                MR_hl_field(MR_mktag(0), GroundTerm_28, 2) = ((MR_Box) (MLDS_Type_15));
              }
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ConstNum_13, ((MR_Box) (GroundTerm_28)), STATE_VARIABLE_ConstStructMap_0_66, STATE_VARIABLE_ConstStructMap_67);
            }
            else
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_tag\'/11", (MR_String) "no_tag arity != 1");
                return;
              }
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Integer Ptag_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1)));
            MR_Word ExtraRvals_33;
            MR_Integer Stag_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 2)));
            MR_Word Target_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 1)))) & (MR_Integer) 3);
            MR_Word UsesConstructors_36;
            MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 0)));
            MR_Word Var_86 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

            UsesConstructors_36 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(Target_35);
            switch (UsesConstructors_36) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word StagRval0_37;
                  MR_Word HighLevelData_38;
                  MR_Word StagRval_39;
                  MR_Word Var_72;
                  MR_Word Var_87;
                  MR_Word Var_88;

                  {
                    Var_72 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_72, 0) = ((MR_Box) (Stag_34));
                  }
                  {
                    StagRval0_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), StagRval0_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), StagRval0_37, 1) = ((MR_Box) (Var_72));
                  }
                  Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 0)));
                  Var_88 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 1)))) & (MR_Integer) 3);
                  HighLevelData_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                  switch (HighLevelData_38) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        {
                          StagRval_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), StagRval_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), StagRval_39, 1) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[10]));
                          MR_hl_field(MR_mktag(3), StagRval_39, 2) = ((MR_Box) (StagRval0_37));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      StagRval_39 = StagRval0_37;
                      break;
                  }
                  {
                    ExtraRvals_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ExtraRvals_33, 0) = ((MR_Box) (StagRval_39));
                    MR_hl_field(MR_mktag(1), ExtraRvals_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
                break;
              case (MR_Integer) 1:
                ExtraRvals_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
            }
            ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0(Info_12, ConstNum_13, Type_14, MLDS_Type_15, ConsId_16, ConsTag_17, Ptag_32, ExtraRvals_33, Args_18, STATE_VARIABLE_ConstStructMap_0_66, STATE_VARIABLE_ConstStructMap_67, STATE_VARIABLE_GlobalData_0_68, STATE_VARIABLE_GlobalData_69);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_struct_arg_7_p_0(
  MR_Word Info_8,
  MR_Word ConstStructMap_9,
  MR_Word ConstArg_10,
  MR_Word Width_11,
  MR_Word * RvalTypeWidth_12,
  MR_Word STATE_VARIABLE_GlobalData_0_24,
  MR_Word * STATE_VARIABLE_GlobalData_25)
{
  {
    MR_Word ModuleInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
    MR_Word Rval0_17;
    MR_Word MLDS_Type_19;
    MR_Word Rval_23;
    MR_Word Var_26;
    MR_Word Var_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) & (MR_Integer) 3);
    MR_Word Var_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

    if (((MR_tag((MR_Word) ConstArg_10)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Integer StructNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ConstArg_10, (MR_Integer) 0)));
      MR_Word GroundTerm_16;
      MR_Box conv0_GroundTerm_16;
      MR_Word _MerType_18;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ConstStructMap_9, StructNum_15, &conv0_GroundTerm_16);
      GroundTerm_16 = ((MR_Word) conv0_GroundTerm_16);
      Rval0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_16, (MR_Integer) 0)));
      _MerType_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_16, (MR_Integer) 1)));
      MLDS_Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_16, (MR_Integer) 2)));
    }
    else
    {
      MR_Word ConsId_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConstArg_10, (MR_Integer) 0)));
      MR_Word Type_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConstArg_10, (MR_Integer) 1)));
      MR_Word ConsTag_22;

      ConsTag_22 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_14, ConsId_20);
      MLDS_Type_19 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_14, Type_21);
      ml_backend__ml_unify_gen__ml_gen_const_struct_arg_tag_4_p_0(ConsTag_22, Type_21, MLDS_Type_19, &Rval0_17);
    }
    Var_26 = mercury__term__context_init_0_f_0();
    ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_14, Var_26, MLDS_Type_19, Width_11, Rval0_17, &Rval_23, STATE_VARIABLE_GlobalData_0_24, STATE_VARIABLE_GlobalData_25);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *RvalTypeWidth_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_23));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MLDS_Type_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Width_11));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0(
  MR_Word Info_14,
  MR_Integer ConstNum_15,
  MR_Word VarType_16,
  MR_Word MLDS_Type_17,
  MR_Word ConsId_18,
  MR_Word ConsTag_19,
  MR_Integer Ptag_20,
  MR_Word ExtraRvals_21,
  MR_Word Args_22,
  MR_Word STATE_VARIABLE_ConstStructMap_0_34,
  MR_Word * STATE_VARIABLE_ConstStructMap_35,
  MR_Word STATE_VARIABLE_GlobalData_0_36,
  MR_Word * STATE_VARIABLE_GlobalData_37)
{
  {
    MR_bool succeeded;
    MR_Word Target_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 1)))) & (MR_Integer) 3);
    MR_Word ModuleInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 0)));
    MR_Word ArgsTypesWidths_29;
    MR_Word HighLevelData_30;
    MR_Word RvalsTypesWidths_31;
    MR_Word UsesBaseClass_32;
    MR_Word GroundTerm_33;
    MR_Word STATE_VARIABLE_GlobalData_43_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_54;
    MR_Word Var_55;

    ml_backend__ml_unify_gen__cons_id_arg_types_and_widths__ho2_7_p_0(ModuleInfo_26, (MR_Integer) 0, VarType_16, ConsId_18, Args_22, &ArgsTypesWidths_29);
    Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 0)));
    Var_55 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 1)))) & (MR_Integer) 3);
    HighLevelData_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    switch (HighLevelData_30) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 1:
        succeeded = (Target_25 == (MR_Integer) 2);
        break;
    }
    if (!(succeeded))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_static_compound\'/13", (MR_String) "Constant structures are not supported for this grade");
        return;
      }
    }
    ml_backend__ml_unify_gen__ml_gen_const_struct_args_6_p_0(Info_14, STATE_VARIABLE_ConstStructMap_0_34, ArgsTypesWidths_29, &RvalsTypesWidths_31, STATE_VARIABLE_GlobalData_0_36, &STATE_VARIABLE_GlobalData_43_43);
    UsesBaseClass_32 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(ConsTag_19);
    Var_44 = mercury__term__context_init_0_f_0();
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (ConsId_18));
    }
    ml_backend__ml_unify_gen__construct_static_ground_term_14_p_0(ModuleInfo_26, Target_25, HighLevelData_30, Var_44, VarType_16, MLDS_Type_17, Var_45, UsesBaseClass_32, Ptag_20, ExtraRvals_21, RvalsTypesWidths_31, &GroundTerm_33, STATE_VARIABLE_GlobalData_43_43, STATE_VARIABLE_GlobalData_37);
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ConstNum_15, ((MR_Box) (GroundTerm_33)), STATE_VARIABLE_ConstStructMap_0_34, STATE_VARIABLE_ConstStructMap_35);
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__cons_id_arg_types_and_widths__ho2_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_ArgTypeWidth_8;

    ml_backend__ml_unify_gen__lookup_type_and_specify_width_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), wrapper_arg_1, &conv3_ArgTypeWidth_8);
    *wrapper_arg_2 = ((MR_Box) (conv3_ArgTypeWidth_8));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__cons_id_arg_types_and_widths__ho2_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_ArgTypeWidth_8;

    ml_backend__ml_unify_gen__specify_type_and_width_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), wrapper_arg_1, &conv2_ArgTypeWidth_8);
    *wrapper_arg_2 = ((MR_Box) (conv2_ArgTypeWidth_8));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__cons_id_arg_types_and_widths__ho2_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_ArgTypeWidth_8;

    ml_backend__ml_unify_gen__lookup_type_and_specify_width_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), wrapper_arg_1, &conv1_ArgTypeWidth_8);
    *wrapper_arg_2 = ((MR_Box) (conv1_ArgTypeWidth_8));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__cons_id_arg_types_and_widths__ho2_7_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__cons_id_arg_types_and_widths__2847__2_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__cons_id_arg_types_and_widths__ho2_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_39;

    conv0_LambdaHeadVar__2_39 = ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_const_static_compound__2602__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_39));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__cons_id_arg_types_and_widths__ho2_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word MayHaveExtraArgs_10,
  MR_Word VarType_11,
  MR_Word ConsId_12,
  MR_Word Args_13,
  MR_Word * ArgsTypesWidths_14)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) ConsId_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word TypeInfo_for_Arg_44 = (MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0;
    MR_Word Var_15;
    MR_Integer Var_16;
    MR_Word Var_17;

    if (succeeded)
    {
      Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_12, (MR_Integer) 1)));
      Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_12, (MR_Integer) 2)));
      Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_12, (MR_Integer) 3)));
      succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(VarType_11);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word ConsRepnDefn_18;

      succeeded = check_hlds__type_util__get_cons_repn_defn_3_p_0(ModuleInfo_8, ConsId_12, &ConsRepnDefn_18);
      if (succeeded)
      {
        MR_Word ConsArgRepns_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 3)));
        MR_Integer NumExtraArgs_20;
        MR_Integer Var_26;
        MR_Integer Var_27;
        MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 0)));
        MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 1)));
        MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 2)));
        MR_Integer Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 4)));
        MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 5)));

        Var_26 = mercury__list__length_1_f_0(TypeInfo_for_Arg_44, Args_13);
        Var_27 = mercury__list__length_1_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0, ConsArgRepns_19);
        NumExtraArgs_20 = (Var_26 - Var_27);
        succeeded = (NumExtraArgs_20 == (MR_Integer) 0);
        if (succeeded)
          ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_114_103_115_95_116_121_112_101_115_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(Args_13, ConsArgRepns_19, ArgsTypesWidths_14);
        else
        {
          MR_Word TypeInfo_50_50;
          MR_Word ExtraArgs_21;
          MR_Word NonExtraArgs_22;
          MR_Word ExtraArgsTypesWidths_23;
          MR_Word NonExtraArgsTypesWidths_24;
          MR_Word Var_28;

          {
            Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (ml_backend__ml_unify_gen__cons_id_arg_types_and_widths__ho2_7_p_0_2));
            MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (MayHaveExtraArgs_10));
            MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) ((MR_Integer) 1));
          }
          mercury__require__expect_3_p_0(Var_28, (MR_String) "predicate \140ml_backend.ml_unify_gen.cons_id_arg_types_and_widths\'/7", (MR_String) "extra args in static struct");
          mercury__list__det_split_list_4_p_0(TypeInfo_for_Arg_44, NumExtraArgs_20, Args_13, &ExtraArgs_21, &NonExtraArgs_22);
          TypeInfo_50_50 = (MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[5];
          mercury__list__map_3_p_0(TypeInfo_for_Arg_44, TypeInfo_50_50, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_7[2], ExtraArgs_21, &ExtraArgsTypesWidths_23);
          ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_114_103_115_95_116_121_112_101_115_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(NonExtraArgs_22, ConsArgRepns_19, &NonExtraArgsTypesWidths_24);
          *ArgsTypesWidths_14 = mercury__list__f_43_43_2_f_0(TypeInfo_50_50, ExtraArgsTypesWidths_23, NonExtraArgsTypesWidths_24);
        }
      }
      else
      {
        MR_Word Var_25;

        succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(VarType_11, &Var_25);
        if (succeeded)
        {
          MR_Word Var_34;
          MR_Word Var_58;

          Var_34 = ml_backend__ml_code_util__ml_make_boxed_type_0_f_0();
          {
            Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (ml_backend__ml_unify_gen__cons_id_arg_types_and_widths__ho2_7_p_0_4));
            MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (TypeInfo_for_Arg_44));
            MR_hl_field(MR_mktag(0), Var_58, 4) = ((MR_Box) (Var_34));
            MR_hl_field(MR_mktag(0), Var_58, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          mercury__list__map_3_p_0(TypeInfo_for_Arg_44, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[5], Var_58, Args_13, ArgsTypesWidths_14);
        }
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.cons_id_arg_types_and_widths\'/7", (MR_String) "get_cons_defn failed");
            return;
          }
        }
      }
    }
    else
    {
      mercury__list__map_3_p_0(TypeInfo_for_Arg_44, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[5], (MR_Word) &ml_backend__ml_unify_gen_scalar_common_7[3], Args_13, ArgsTypesWidths_14);
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_struct_args_6_p_0(
  MR_Word Info_1,
  MR_Word ConstStructMap_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_GlobalData_0_5,
  MR_Word * STATE_VARIABLE_GlobalData_6)
{
  if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_GlobalData_6 = STATE_VARIABLE_GlobalData_0_5;
  }
  else
  {
    MR_Word ArgTypeWidth_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
    MR_Word ArgsTypesWidths_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word RvalTypeWidth_16;
    MR_Word RvalsTypesWidths_17;
    MR_Word ConstArg_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgTypeWidth_14, (MR_Integer) 0)));
    MR_Word Width_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgTypeWidth_14, (MR_Integer) 2)));
    MR_Word STATE_VARIABLE_GlobalData_24_24;
    MR_Word ModuleInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 0)));
    MR_Word Rval0_37;
    MR_Word MLDS_Type_39;
    MR_Word Rval_43;
    MR_Word Var_44;
    MR_Word _Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgTypeWidth_14, (MR_Integer) 1)));
    MR_Word Var_46 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 1)))) & (MR_Integer) 3);
    MR_Word Var_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

    if (((MR_tag((MR_Word) ConstArg_19)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Integer StructNum_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ConstArg_19, (MR_Integer) 0)));
      MR_Word GroundTerm_36;
      MR_Box conv0_GroundTerm_36;
      MR_Word _MerType_38;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ConstStructMap_2, StructNum_35, &conv0_GroundTerm_36);
      GroundTerm_36 = ((MR_Word) conv0_GroundTerm_36);
      Rval0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_36, (MR_Integer) 0)));
      _MerType_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_36, (MR_Integer) 1)));
      MLDS_Type_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_36, (MR_Integer) 2)));
    }
    else
    {
      MR_Word ConsId_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConstArg_19, (MR_Integer) 0)));
      MR_Word Type_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConstArg_19, (MR_Integer) 1)));
      MR_Word ConsTag_42;

      ConsTag_42 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_34, ConsId_40);
      MLDS_Type_39 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_34, Type_41);
      ml_backend__ml_unify_gen__ml_gen_const_struct_arg_tag_4_p_0(ConsTag_42, Type_41, MLDS_Type_39, &Rval0_37);
    }
    Var_44 = mercury__term__context_init_0_f_0();
    ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_34, Var_44, MLDS_Type_39, Width_21, Rval0_37, &Rval_43, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_24_24);
    {
      RvalTypeWidth_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RvalTypeWidth_16, 0) = ((MR_Box) (Rval_43));
      MR_hl_field(MR_mktag(0), RvalTypeWidth_16, 1) = ((MR_Box) (MLDS_Type_39));
      MR_hl_field(MR_mktag(0), RvalTypeWidth_16, 2) = ((MR_Box) (Width_21));
    }
    ml_backend__ml_unify_gen__ml_gen_const_struct_args_6_p_0(Info_1, ConstStructMap_2, ArgsTypesWidths_15, &RvalsTypesWidths_17, STATE_VARIABLE_GlobalData_24_24, STATE_VARIABLE_GlobalData_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RvalTypeWidth_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RvalsTypesWidths_17));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_struct_arg_tag_4_p_0(
  MR_Word ConsTag_5,
  MR_Word Type_6,
  MR_Word MLDS_Type_7,
  MR_Word * Rval_8)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) ConsTag_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_arg_tag\'/4", (MR_String) "unexpected tag");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String String_12 = ((MR_String) (MR_hl_field(MR_mktag(1), ConsTag_5, (MR_Integer) 0)));
          MR_Word Var_61;

          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
            MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (String_12));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Rval_8 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_61));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float Float_11 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_5, (MR_Integer) 0)));
          MR_Word Var_62;

          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
            MR_hl_field(MR_mktag(3), Var_62, 1) = MR_box_float(Float_11);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Rval_8 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_62));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word IntTag_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1)));
              MR_Word RvalConst_10;

              switch (MR_tag((MR_Word) IntTag_9)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Integer Int_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), IntTag_9, (MR_Integer) 0)));
                    MR_Word Var_81;

                    Var_81 = parse_tree__builtin_lib_types__int_type_0_f_0();
                    succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_6, Var_81);
                    if (succeeded)
                      {
                        RvalConst_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), RvalConst_10, 0) = ((MR_Box) (Int_71));
                      }
                    else
                    {
                      MR_Word Var_82;

                      Var_82 = parse_tree__builtin_lib_types__char_type_0_f_0();
                      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_6, Var_82);
                      if (succeeded)
                        {
                          RvalConst_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), RvalConst_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                          MR_hl_field(MR_mktag(3), RvalConst_10, 1) = ((MR_Box) (Int_71));
                        }
                      else
                        {
                          RvalConst_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), RvalConst_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                          MR_hl_field(MR_mktag(3), RvalConst_10, 1) = ((MR_Box) (Int_71));
                          MR_hl_field(MR_mktag(3), RvalConst_10, 2) = ((MR_Box) (MLDS_Type_7));
                        }
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Unsigned UInt_72 = ((MR_Unsigned) (MR_hl_field(MR_mktag(1), IntTag_9, (MR_Integer) 0)));

                    {
                      RvalConst_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), RvalConst_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), RvalConst_10, 1) = ((MR_Box) (UInt_72));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    int8_t Int8_73 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(2), IntTag_9, (MR_Integer) 0)));

                    {
                      RvalConst_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), RvalConst_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), RvalConst_10, 1) = ((MR_Box) (MR_Word) (Int8_73));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_9, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        uint8_t UInt8_74 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_9, (MR_Integer) 1)));

                        {
                          RvalConst_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), RvalConst_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), RvalConst_10, 1) = ((MR_Box) (MR_Word) (UInt8_74));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        int16_t Int16_75 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_9, (MR_Integer) 1)));

                        {
                          RvalConst_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), RvalConst_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                          MR_hl_field(MR_mktag(3), RvalConst_10, 1) = ((MR_Box) (MR_Word) (Int16_75));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        uint16_t UInt16_76 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_9, (MR_Integer) 1)));

                        {
                          RvalConst_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), RvalConst_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), RvalConst_10, 1) = ((MR_Box) (MR_Word) (UInt16_76));
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        int32_t Int32_77 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_9, (MR_Integer) 1)));

                        {
                          RvalConst_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), RvalConst_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), RvalConst_10, 1) = ((MR_Box) (MR_Word) (Int32_77));
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        uint32_t UInt32_78 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_9, (MR_Integer) 1)));

                        {
                          RvalConst_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), RvalConst_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                          MR_hl_field(MR_mktag(3), RvalConst_10, 1) = ((MR_Box) (MR_Word) (UInt32_78));
                        }
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        int64_t Int64_79 = MR_unbox_int64((MR_hl_field(MR_mktag(3), IntTag_9, (MR_Integer) 1)));

                        {
                          RvalConst_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), RvalConst_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                          MR_hl_field(MR_mktag(3), RvalConst_10, 1) = MR_box_int64(Int64_79);
                        }
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        uint64_t UInt64_80 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), IntTag_9, (MR_Integer) 1)));

                        {
                          RvalConst_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), RvalConst_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                          MR_hl_field(MR_mktag(3), RvalConst_10, 1) = MR_box_uint64(UInt64_80);
                        }
                      }
                      break;
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Rval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (RvalConst_10));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ForeignLang_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1)));
              MR_String ForeignTag_16 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 2)));
              MR_Word Var_53;

              {
                Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (ForeignLang_15));
                MR_hl_field(MR_mktag(3), Var_53, 2) = ((MR_Box) (ForeignTag_16));
                MR_hl_field(MR_mktag(3), Var_53, 3) = ((MR_Box) (MLDS_Type_7));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Rval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_53));
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
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_arg_tag\'/4", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ModuleName0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1)));
              MR_String TypeName_18 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 2)));
              MR_Integer TypeArity_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 3)));
              MR_Word ModuleName_20;
              MR_Word MLDS_Module_21;
              MR_Word RttiTypeCtor_22;
              MR_Word RttiId_23;
              MR_Word Const_24;
              MR_Word Var_51;
              MR_Word Var_52;

              ModuleName_20 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_17);
              MLDS_Module_21 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_20);
              {
                RttiTypeCtor_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RttiTypeCtor_22, 0) = ((MR_Box) (ModuleName_20));
                MR_hl_field(MR_mktag(0), RttiTypeCtor_22, 1) = ((MR_Box) (TypeName_18));
                MR_hl_field(MR_mktag(0), RttiTypeCtor_22, 2) = ((MR_Box) (TypeArity_19));
              }
              {
                RttiId_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RttiId_23, 0) = ((MR_Box) (RttiTypeCtor_22));
                MR_hl_field(MR_mktag(0), RttiId_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
              }
              {
                Const_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                MR_hl_field(MR_mktag(3), Const_24, 1) = ((MR_Box) (MLDS_Module_21));
                MR_hl_field(MR_mktag(3), Const_24, 2) = ((MR_Box) (RttiId_23));
              }
              {
                Var_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_51, 0) = ((MR_Box) (MLDS_Type_7));
              }
              {
                Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (Const_24));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *Rval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_51));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_52));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ClassId_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 2)));
              MR_String Instance_26 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 3)));
              MR_Word TCName_27;
              MR_Word Var_47;
              MR_Word Var_48;
              MR_Word Var_49;
              MR_Word ModuleName_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1)));
              MR_Word MLDS_Module_64;
              MR_Word RttiId_65;
              MR_Word Const_66;

              MLDS_Module_64 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_63);
              TCName_27 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_25);
              {
                Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (ModuleName_63));
                MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Instance_26));
              }
              {
                RttiId_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), RttiId_65, 0) = ((MR_Box) (TCName_27));
                MR_hl_field(MR_mktag(1), RttiId_65, 1) = ((MR_Box) (Var_47));
              }
              {
                Const_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                MR_hl_field(MR_mktag(3), Const_66, 1) = ((MR_Box) (MLDS_Module_64));
                MR_hl_field(MR_mktag(3), Const_66, 2) = ((MR_Box) (RttiId_65));
              }
              {
                Var_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_48, 0) = ((MR_Box) (MLDS_Type_7));
              }
              {
                Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (Const_66));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *Rval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_48));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_49));
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Integer Ptag_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1)));
              MR_Integer Stag_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 2)));
              MR_Word Var_54;
              MR_Word Var_55;
              MR_Word Var_56;
              MR_Word Var_59;
              MR_Word Var_60;

              {
                Var_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_54, 0) = ((MR_Box) (MLDS_Type_7));
              }
              {
                Var_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_60, 0) = ((MR_Box) (Stag_14));
              }
              {
                Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (Var_60));
              }
              {
                Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_3[0])));
                MR_hl_field(MR_mktag(3), Var_56, 2) = ((MR_Box) (Var_59));
              }
              {
                Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (Ptag_13));
                MR_hl_field(MR_mktag(3), Var_55, 2) = ((MR_Box) (Var_56));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *Rval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_54));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_55));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_structs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ConstStructMap_20;
    MR_Word conv0_STATE_VARIABLE_GlobalData_22;

    ml_backend__ml_unify_gen__ml_gen_const_struct_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_STATE_VARIABLE_ConstStructMap_20, ((MR_Word) wrapper_arg_4), &conv0_STATE_VARIABLE_GlobalData_22);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ConstStructMap_20));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_GlobalData_22));
  }
}

void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_structs_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Target_7,
  MR_Word * ConstStructMap_8,
  MR_Word STATE_VARIABLE_GlobalData_0_15,
  MR_Word * STATE_VARIABLE_GlobalData_16)
{
  {
    MR_Word Globals_10;
    MR_Word HighLevelData_11;
    MR_Word Info_12;
    MR_Word ConstStructDb_13;
    MR_Word ConstStructs_14;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Box conv3_ConstStructMap_8;
    MR_Box conv2_STATE_VARIABLE_GlobalData_16;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 267, &HighLevelData_11);
    {
      Info_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info_12, 0) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), Info_12, 1) = ((MR_Box) ((Target_7 | ((HighLevelData_11 << (MR_Integer) 2)))));
    }
    hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ModuleInfo_6, &ConstStructDb_13);
    hlds__const_struct__const_struct_db_get_structs_2_p_0(ConstStructDb_13, &ConstStructs_14);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_const_structs_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Info_12));
    }
    Var_19 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0);
    mercury__list__foldl2_6_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[0], (MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[1], (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, Var_18, ConstStructs_14, ((MR_Box) (Var_19)), &conv3_ConstStructMap_8, ((MR_Box) (STATE_VARIABLE_GlobalData_0_15)), &conv2_STATE_VARIABLE_GlobalData_16);
    *ConstStructMap_8 = ((MR_Word) conv3_ConstStructMap_8);
    *STATE_VARIABLE_GlobalData_16 = ((MR_Word) conv2_STATE_VARIABLE_GlobalData_16);
  }
}

void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_5_p_0(
  MR_Word TermVar_6,
  MR_Word Goal_7,
  MR_Word * Stmts_8,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_7, (MR_Integer) 0)));
    MR_Word GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_7, (MR_Integer) 1)));
    MR_Word NonLocals_12;
    MR_Word NonLocalList_13;

    NonLocals_12 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_11);
    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, NonLocals_12, &NonLocalList_13);
    if ((NonLocalList_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *Stmts_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_Info_34 = STATE_VARIABLE_Info_0_33;
    }
    else
    {
      MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), NonLocalList_13, (MR_Integer) 1)));
      MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), NonLocalList_13, (MR_Integer) 0)));

      if ((Var_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], ((MR_Box) (Var_52)), ((MR_Box) (TermVar_6)));
        if (succeeded)
        {
          MR_Word Conjuncts_15;
          MR_Word Var_39;

          succeeded = ((((MR_tag((MR_Word) GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
            Conjuncts_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
            succeeded = (Var_39 == (MR_Integer) 0);
          }
          if (succeeded)
          {
            MR_Word TypeInfo_49_49;
            MR_Word TypeCtorInfo_50_50;
            MR_Word ModuleInfo_16;
            MR_Word Target_17;
            MR_Word HighLevelData_18;
            MR_Word VarTypes_19;
            MR_Word GlobalData0_20;
            MR_Word GlobalData_21;
            MR_Word GroundTermMap_22;
            MR_Word TermVarGroundTerm_23;
            MR_Word TermVarLval_24;
            MR_Word TermVarRval_25;
            MR_Word Context_28;
            MR_Word Stmt_29;
            MR_Word Var_40;
            MR_Word STATE_VARIABLE_Info_41_41;
            MR_Box conv0_TermVarGroundTerm_23;
            MR_Word Var_26;
            MR_Word Var_27;

            ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_33, &ModuleInfo_16);
            ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_33, &Target_17);
            ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_33, &HighLevelData_18);
            ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_33, &VarTypes_19);
            ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_33, &GlobalData0_20);
            TypeInfo_49_49 = (MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2];
            TypeCtorInfo_50_50 = (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;
            Var_40 = mercury__map__init_0_f_0(TypeInfo_49_49, TypeCtorInfo_50_50);
            ml_backend__ml_unify_gen__ml_gen_ground_term_conjuncts_9_p_0(ModuleInfo_16, Target_17, HighLevelData_18, VarTypes_19, Conjuncts_15, GlobalData0_20, &GlobalData_21, Var_40, &GroundTermMap_22);
            ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_21, STATE_VARIABLE_Info_0_33, &STATE_VARIABLE_Info_41_41);
            mercury__map__lookup_3_p_0(TypeInfo_49_49, TypeCtorInfo_50_50, GroundTermMap_22, ((MR_Box) (TermVar_6)), &conv0_TermVarGroundTerm_23);
            TermVarGroundTerm_23 = ((MR_Word) conv0_TermVarGroundTerm_23);
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(TermVar_6, TermVarGroundTerm_23, STATE_VARIABLE_Info_41_41, STATE_VARIABLE_Info_34);
            ml_backend__ml_code_util__ml_gen_var_3_p_0(*STATE_VARIABLE_Info_34, TermVar_6, &TermVarLval_24);
            TermVarRval_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), TermVarGroundTerm_23, (MR_Integer) 0)));
            Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), TermVarGroundTerm_23, (MR_Integer) 1)));
            Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), TermVarGroundTerm_23, (MR_Integer) 2)));
            Context_28 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
            Stmt_29 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(TermVarLval_24, TermVarRval_25, Context_28);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_29));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term\'/5", (MR_String) "malformed goal");
              return;
            }
          }
        }
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term\'/5", (MR_String) "unexpected nonlocal");
            return;
          }
        }
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term\'/5", (MR_String) "unexpected nonlocals");
          return;
        }
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjuncts_9_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Target_2,
  MR_Word HighLevelData_3,
  MR_Word VarTypes_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_GlobalData_0_6,
  MR_Word * STATE_VARIABLE_GlobalData_7,
  MR_Word STATE_VARIABLE_GroundTermMap_0_8,
  MR_Word * STATE_VARIABLE_GroundTermMap_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_GroundTermMap_9 = STATE_VARIABLE_GroundTermMap_0_8;
      *STATE_VARIABLE_GlobalData_7 = STATE_VARIABLE_GlobalData_0_6;
    }
    else
    {
      MR_Word Goal_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0)));
      MR_Word Goals_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_GlobalData_32_32;
      MR_Word STATE_VARIABLE_GroundTermMap_33_33;
      MR_Word GoalExpr_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_24, (MR_Integer) 0)));
      MR_Word GoalInfo_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_24, (MR_Integer) 1)));
      MR_Word Var_54;
      MR_Word ConsId_55;
      MR_Word Args_56;
      MR_Word Unify_52;
      MR_Word SubInfo_60;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_53;
      MR_Word Var_57;
      MR_Word _HowToConstruct_58;
      MR_Word Var_59;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_GlobalData_0_6;
      MR_Word next_value_of_STATE_VARIABLE_GroundTermMap_0_8;

      succeeded = ((MR_tag((MR_Word) GoalExpr_47)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_47, (MR_Integer) 0)));
        Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_47, (MR_Integer) 1)));
        Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_47, (MR_Integer) 2)));
        Unify_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_47, (MR_Integer) 3)));
        Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_47, (MR_Integer) 4)));
        succeeded = ((MR_tag((MR_Word) Unify_52)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_52, (MR_Integer) 0)));
          ConsId_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_52, (MR_Integer) 1)));
          Args_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_52, (MR_Integer) 2)));
          Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_52, (MR_Integer) 3)));
          _HowToConstruct_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_52, (MR_Integer) 4)));
          Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_52, (MR_Integer) 5)));
          SubInfo_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_52, (MR_Integer) 6)));
          succeeded = (SubInfo_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
      if (succeeded)
      {
        MR_Word VarType_61;
        MR_Word MLDS_Type_62;
        MR_Word ConsTag_63;
        MR_Word Context_64;

        hlds__vartypes__lookup_var_type_3_p_0(VarTypes_4, Var_54, &VarType_61);
        MLDS_Type_62 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_1, VarType_61);
        ConsTag_63 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_1, ConsId_55);
        Context_64 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_48);
        ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0(ModuleInfo_1, Target_2, HighLevelData_3, VarTypes_4, Var_54, VarType_61, MLDS_Type_62, ConsId_55, ConsTag_63, Args_56, Context_64, STATE_VARIABLE_GlobalData_0_6, &STATE_VARIABLE_GlobalData_32_32, STATE_VARIABLE_GroundTermMap_0_8, &STATE_VARIABLE_GroundTermMap_33_33);
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct\'/9", (MR_String) "malformed goal");
          return;
        }
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__5_5 = Goals_25;
      next_value_of_STATE_VARIABLE_GlobalData_0_6 = STATE_VARIABLE_GlobalData_32_32;
      next_value_of_STATE_VARIABLE_GroundTermMap_0_8 = STATE_VARIABLE_GroundTermMap_33_33;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_GlobalData_0_6 = next_value_of_STATE_VARIABLE_GlobalData_0_6;
      STATE_VARIABLE_GroundTermMap_0_8 = next_value_of_STATE_VARIABLE_GroundTermMap_0_8;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_5(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2296__5_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2296__4_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2296__3_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2296__2_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2296__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0(
  MR_Word ModuleInfo_16,
  MR_Word Target_17,
  MR_Word HighLevelData_18,
  MR_Word VarTypes_19,
  MR_Word Var_20,
  MR_Word VarType_21,
  MR_Word MLDS_Type_22,
  MR_Word ConsId_23,
  MR_Word ConsTag_24,
  MR_Word Args_25,
  MR_Word Context_26,
  MR_Word STATE_VARIABLE_GlobalData_0_74,
  MR_Word * STATE_VARIABLE_GlobalData_75,
  MR_Word STATE_VARIABLE_GroundTermMap_0_76,
  MR_Word * STATE_VARIABLE_GroundTermMap_77)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) ConsTag_24)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_24)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0(ModuleInfo_16, Target_17, HighLevelData_18, VarTypes_19, Var_20, VarType_21, MLDS_Type_22, ConsId_23, ConsTag_24, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Args_25, Context_26, STATE_VARIABLE_GlobalData_0_74, STATE_VARIABLE_GlobalData_75, STATE_VARIABLE_GroundTermMap_0_76, STATE_VARIABLE_GroundTermMap_77);
            }
            break;
          case (MR_Integer) 1:
            if ((Args_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "no_tag arity != 1");
                return;
              }
            }
            else
            {
              MR_Word Var_172 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_25, (MR_Integer) 1)));
              MR_Word Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_25, (MR_Integer) 0)));

              if ((Var_172 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word TypeInfo_118_118 = (MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2];
                MR_Word TypeCtorInfo_119_119 = (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;
                MR_Word ArgGroundTerm_57;
                MR_Word ArgRval_58;
                MR_Word MLDS_ArgType_60;
                MR_Word Rval0_61;
                MR_Word Rval_62;
                MR_Word GroundTerm_63;
                MR_Word STATE_VARIABLE_GroundTermMap_90_90;
                MR_Box conv0_ArgGroundTerm_57;
                MR_Word _ArgType_59;

                mercury__map__det_remove_4_p_0(TypeInfo_118_118, TypeCtorInfo_119_119, ((MR_Box) (Var_173)), &conv0_ArgGroundTerm_57, STATE_VARIABLE_GroundTermMap_0_76, &STATE_VARIABLE_GroundTermMap_90_90);
                ArgGroundTerm_57 = ((MR_Word) conv0_ArgGroundTerm_57);
                ArgRval_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_57, (MR_Integer) 0)));
                _ArgType_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_57, (MR_Integer) 1)));
                MLDS_ArgType_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_57, (MR_Integer) 2)));
                ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_16, Context_26, MLDS_ArgType_60, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ArgRval_58, &Rval0_61, STATE_VARIABLE_GlobalData_0_74, STATE_VARIABLE_GlobalData_75);
                Rval_62 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(MLDS_Type_22, ConsTag_24, Rval0_61);
                {
                  GroundTerm_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), GroundTerm_63, 0) = ((MR_Box) (Rval_62));
                  MR_hl_field(MR_mktag(0), GroundTerm_63, 1) = ((MR_Box) (VarType_21));
                  MR_hl_field(MR_mktag(0), GroundTerm_63, 2) = ((MR_Box) (MLDS_Type_22));
                }
                mercury__map__det_insert_4_p_0(TypeInfo_118_118, TypeCtorInfo_119_119, ((MR_Box) (Var_20)), ((MR_Box) (GroundTerm_63)), STATE_VARIABLE_GroundTermMap_90_90, STATE_VARIABLE_GroundTermMap_77);
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "no_tag arity != 1");
                  return;
                }
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String String_33 = ((MR_String) (MR_hl_field(MR_mktag(1), ConsTag_24, (MR_Integer) 0)));
          MR_Word Var_104;
          MR_Word ConstRval_161;
          MR_Word ConstGroundTerm_162;
          MR_Word Var_163;

          {
            Var_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
            MR_hl_field(MR_mktag(3), Var_104, 1) = ((MR_Box) (String_33));
          }
          {
            ConstRval_161 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ConstRval_161, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ConstRval_161, 1) = ((MR_Box) (Var_104));
          }
          {
            Var_163 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_163, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[14]));
            MR_hl_field(MR_mktag(0), Var_163, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_5));
            MR_hl_field(MR_mktag(0), Var_163, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_163, 3) = ((MR_Box) (Args_25));
            MR_hl_field(MR_mktag(0), Var_163, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          mercury__require__expect_3_p_0(Var_163, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
          {
            ConstGroundTerm_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ConstGroundTerm_162, 0) = ((MR_Box) (ConstRval_161));
            MR_hl_field(MR_mktag(0), ConstGroundTerm_162, 1) = ((MR_Box) (VarType_21));
            MR_hl_field(MR_mktag(0), ConstGroundTerm_162, 2) = ((MR_Box) (MLDS_Type_22));
          }
          mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (Var_20)), ((MR_Box) (ConstGroundTerm_162)), STATE_VARIABLE_GroundTermMap_0_76, STATE_VARIABLE_GroundTermMap_77);
          *STATE_VARIABLE_GlobalData_75 = STATE_VARIABLE_GlobalData_0_74;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ConstRval_31;
          MR_Float Float_32 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_24, (MR_Integer) 0)));
          MR_Word ConstGroundTerm_38;
          MR_Word Var_105;
          MR_Word Var_106;

          {
            Var_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
            MR_hl_field(MR_mktag(3), Var_105, 1) = MR_box_float(Float_32);
          }
          {
            ConstRval_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ConstRval_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ConstRval_31, 1) = ((MR_Box) (Var_105));
          }
          {
            Var_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_106, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[14]));
            MR_hl_field(MR_mktag(0), Var_106, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_1));
            MR_hl_field(MR_mktag(0), Var_106, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_106, 3) = ((MR_Box) (Args_25));
            MR_hl_field(MR_mktag(0), Var_106, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          mercury__require__expect_3_p_0(Var_106, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
          {
            ConstGroundTerm_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ConstGroundTerm_38, 0) = ((MR_Box) (ConstRval_31));
            MR_hl_field(MR_mktag(0), ConstGroundTerm_38, 1) = ((MR_Box) (VarType_21));
            MR_hl_field(MR_mktag(0), ConstGroundTerm_38, 2) = ((MR_Box) (MLDS_Type_22));
          }
          mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (Var_20)), ((MR_Box) (ConstGroundTerm_38)), STATE_VARIABLE_GroundTermMap_0_76, STATE_VARIABLE_GroundTermMap_77);
          *STATE_VARIABLE_GlobalData_75 = STATE_VARIABLE_GlobalData_0_74;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word IntTag_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 1)));
              MR_Word IntConst_30;
              MR_Word ConstRval_137;
              MR_Word ConstGroundTerm_138;
              MR_Word Var_139;

              IntConst_30 = ml_backend__ml_unify_gen__int_tag_to_mlds_rval_const_3_f_0(VarType_21, MLDS_Type_22, IntTag_29);
              {
                ConstRval_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstRval_137, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstRval_137, 1) = ((MR_Box) (IntConst_30));
              }
              {
                Var_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_139, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[14]));
                MR_hl_field(MR_mktag(0), Var_139, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_3));
                MR_hl_field(MR_mktag(0), Var_139, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_139, 3) = ((MR_Box) (Args_25));
                MR_hl_field(MR_mktag(0), Var_139, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_139, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
              {
                ConstGroundTerm_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstGroundTerm_138, 0) = ((MR_Box) (ConstRval_137));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_138, 1) = ((MR_Box) (VarType_21));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_138, 2) = ((MR_Box) (MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (Var_20)), ((MR_Box) (ConstGroundTerm_138)), STATE_VARIABLE_GroundTermMap_0_76, STATE_VARIABLE_GroundTermMap_77);
              *STATE_VARIABLE_GlobalData_75 = STATE_VARIABLE_GlobalData_0_74;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ForeignLang_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 1)));
              MR_String ForeignTag_37 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 2)));
              MR_Word Var_96;
              MR_Word ConstRval_126;
              MR_Word ConstGroundTerm_127;
              MR_Word Var_128;

              {
                Var_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                MR_hl_field(MR_mktag(3), Var_96, 1) = ((MR_Box) (ForeignLang_36));
                MR_hl_field(MR_mktag(3), Var_96, 2) = ((MR_Box) (ForeignTag_37));
                MR_hl_field(MR_mktag(3), Var_96, 3) = ((MR_Box) (MLDS_Type_22));
              }
              {
                ConstRval_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstRval_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstRval_126, 1) = ((MR_Box) (Var_96));
              }
              {
                Var_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_128, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[14]));
                MR_hl_field(MR_mktag(0), Var_128, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_2));
                MR_hl_field(MR_mktag(0), Var_128, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_128, 3) = ((MR_Box) (Args_25));
                MR_hl_field(MR_mktag(0), Var_128, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_128, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
              {
                ConstGroundTerm_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstGroundTerm_127, 0) = ((MR_Box) (ConstRval_126));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_127, 1) = ((MR_Box) (VarType_21));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_127, 2) = ((MR_Box) (MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (Var_20)), ((MR_Box) (ConstGroundTerm_127)), STATE_VARIABLE_GroundTermMap_0_76, STATE_VARIABLE_GroundTermMap_77);
              *STATE_VARIABLE_GlobalData_75 = STATE_VARIABLE_GlobalData_0_74;
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "pred_closure_tag");
                return;
              }
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
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "bad constant");
                return;
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Integer Ptag_171 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 1)));

              ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0(ModuleInfo_16, Target_17, HighLevelData_18, VarTypes_19, Var_20, VarType_21, MLDS_Type_22, ConsId_23, ConsTag_24, Ptag_171, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Args_25, Context_26, STATE_VARIABLE_GlobalData_0_74, STATE_VARIABLE_GlobalData_75, STATE_VARIABLE_GroundTermMap_0_76, STATE_VARIABLE_GroundTermMap_77);
            }
            break;
          case (MR_Integer) 12:
            if ((Args_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "no_tag arity != 1");
                return;
              }
            }
            else
            {
              MR_Word Var_172 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_25, (MR_Integer) 1)));
              MR_Word Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_25, (MR_Integer) 0)));

              if ((Var_172 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word TypeInfo_118_118 = (MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2];
                MR_Word TypeCtorInfo_119_119 = (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;
                MR_Word ArgGroundTerm_57;
                MR_Word ArgRval_58;
                MR_Word MLDS_ArgType_60;
                MR_Word Rval0_61;
                MR_Word Rval_62;
                MR_Word GroundTerm_63;
                MR_Word STATE_VARIABLE_GroundTermMap_90_90;
                MR_Box conv0_ArgGroundTerm_57;
                MR_Word _ArgType_59;

                mercury__map__det_remove_4_p_0(TypeInfo_118_118, TypeCtorInfo_119_119, ((MR_Box) (Var_173)), &conv0_ArgGroundTerm_57, STATE_VARIABLE_GroundTermMap_0_76, &STATE_VARIABLE_GroundTermMap_90_90);
                ArgGroundTerm_57 = ((MR_Word) conv0_ArgGroundTerm_57);
                ArgRval_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_57, (MR_Integer) 0)));
                _ArgType_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_57, (MR_Integer) 1)));
                MLDS_ArgType_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_57, (MR_Integer) 2)));
                ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_16, Context_26, MLDS_ArgType_60, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ArgRval_58, &Rval0_61, STATE_VARIABLE_GlobalData_0_74, STATE_VARIABLE_GlobalData_75);
                Rval_62 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(MLDS_Type_22, ConsTag_24, Rval0_61);
                {
                  GroundTerm_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), GroundTerm_63, 0) = ((MR_Box) (Rval_62));
                  MR_hl_field(MR_mktag(0), GroundTerm_63, 1) = ((MR_Box) (VarType_21));
                  MR_hl_field(MR_mktag(0), GroundTerm_63, 2) = ((MR_Box) (MLDS_Type_22));
                }
                mercury__map__det_insert_4_p_0(TypeInfo_118_118, TypeCtorInfo_119_119, ((MR_Box) (Var_20)), ((MR_Box) (GroundTerm_63)), STATE_VARIABLE_GroundTermMap_90_90, STATE_VARIABLE_GroundTermMap_77);
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "no_tag arity != 1");
                  return;
                }
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word ExtraRvals_70;
              MR_Word UsesConstructors_71;
              MR_Integer Stag_111 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 2)));
              MR_Integer Ptag_113 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 1)));

              UsesConstructors_71 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(Target_17);
              switch (UsesConstructors_71) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word StagRval0_72;
                    MR_Word StagRval_73;
                    MR_Word Var_78;

                    {
                      Var_78 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_78, 0) = ((MR_Box) (Stag_111));
                    }
                    {
                      StagRval0_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), StagRval0_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), StagRval0_72, 1) = ((MR_Box) (Var_78));
                    }
                    switch (HighLevelData_18) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          {
                            StagRval_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), StagRval_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), StagRval_73, 1) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[10]));
                            MR_hl_field(MR_mktag(3), StagRval_73, 2) = ((MR_Box) (StagRval0_72));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        StagRval_73 = StagRval0_72;
                        break;
                    }
                    {
                      ExtraRvals_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ExtraRvals_70, 0) = ((MR_Box) (StagRval_73));
                      MR_hl_field(MR_mktag(1), ExtraRvals_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  ExtraRvals_70 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  break;
              }
              ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0(ModuleInfo_16, Target_17, HighLevelData_18, VarTypes_19, Var_20, VarType_21, MLDS_Type_22, ConsId_23, ConsTag_24, Ptag_113, ExtraRvals_70, Args_25, Context_26, STATE_VARIABLE_GlobalData_0_74, STATE_VARIABLE_GlobalData_75, STATE_VARIABLE_GroundTermMap_0_76, STATE_VARIABLE_GroundTermMap_77);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Integer Ptag_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 1)));
              MR_Integer Stag_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 2)));
              MR_Word Var_97;
              MR_Word Var_98;
              MR_Word Var_99;
              MR_Word Var_102;
              MR_Word Var_103;
              MR_Word ConstRval_148;
              MR_Word ConstGroundTerm_149;
              MR_Word Var_150;

              {
                Var_97 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_97, 0) = ((MR_Box) (MLDS_Type_22));
              }
              {
                Var_103 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_103, 0) = ((MR_Box) (Stag_35));
              }
              {
                Var_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_102, 1) = ((MR_Box) (Var_103));
              }
              {
                Var_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Var_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_3[0])));
                MR_hl_field(MR_mktag(3), Var_99, 2) = ((MR_Box) (Var_102));
              }
              {
                Var_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_98, 1) = ((MR_Box) (Ptag_34));
                MR_hl_field(MR_mktag(3), Var_98, 2) = ((MR_Box) (Var_99));
              }
              {
                ConstRval_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstRval_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ConstRval_148, 1) = ((MR_Box) (Var_97));
                MR_hl_field(MR_mktag(3), ConstRval_148, 2) = ((MR_Box) (Var_98));
              }
              {
                Var_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_150, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[14]));
                MR_hl_field(MR_mktag(0), Var_150, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_4));
                MR_hl_field(MR_mktag(0), Var_150, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_150, 3) = ((MR_Box) (Args_25));
                MR_hl_field(MR_mktag(0), Var_150, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_150, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
              {
                ConstGroundTerm_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstGroundTerm_149, 0) = ((MR_Box) (ConstRval_148));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_149, 1) = ((MR_Box) (VarType_21));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_149, 2) = ((MR_Box) (MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (Var_20)), ((MR_Box) (ConstGroundTerm_149)), STATE_VARIABLE_GroundTermMap_0_76, STATE_VARIABLE_GroundTermMap_77);
              *STATE_VARIABLE_GlobalData_75 = STATE_VARIABLE_GlobalData_0_74;
            }
            break;
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__int_tag_to_mlds_rval_const_3_f_0(
  MR_Word Type_5,
  MR_Word MLDS_Type_6,
  MR_Word IntTag_7)
{
  {
    MR_bool succeeded;
    MR_Word Const_8;

    switch (MR_tag((MR_Word) IntTag_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer Int_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), IntTag_7, (MR_Integer) 0)));
          MR_Word Var_19;

          Var_19 = parse_tree__builtin_lib_types__int_type_0_f_0();
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_5, Var_19);
          if (succeeded)
            {
              Const_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Const_8, 0) = ((MR_Box) (Int_9));
            }
          else
          {
            MR_Word Var_20;

            Var_20 = parse_tree__builtin_lib_types__char_type_0_f_0();
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_5, Var_20);
            if (succeeded)
              {
                Const_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                MR_hl_field(MR_mktag(3), Const_8, 1) = ((MR_Box) (Int_9));
              }
            else
              {
                Const_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), Const_8, 1) = ((MR_Box) (Int_9));
                MR_hl_field(MR_mktag(3), Const_8, 2) = ((MR_Box) (MLDS_Type_6));
              }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Unsigned UInt_10 = ((MR_Unsigned) (MR_hl_field(MR_mktag(1), IntTag_7, (MR_Integer) 0)));

          {
            Const_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Const_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Const_8, 1) = ((MR_Box) (UInt_10));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          int8_t Int8_11 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(2), IntTag_7, (MR_Integer) 0)));

          {
            Const_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Const_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Const_8, 1) = ((MR_Box) (MR_Word) (Int8_11));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              uint8_t UInt8_12 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_7, (MR_Integer) 1)));

              {
                Const_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Const_8, 1) = ((MR_Box) (MR_Word) (UInt8_12));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              int16_t Int16_13 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_7, (MR_Integer) 1)));

              {
                Const_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), Const_8, 1) = ((MR_Box) (MR_Word) (Int16_13));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              uint16_t UInt16_14 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_7, (MR_Integer) 1)));

              {
                Const_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), Const_8, 1) = ((MR_Box) (MR_Word) (UInt16_14));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              int32_t Int32_15 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_7, (MR_Integer) 1)));

              {
                Const_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), Const_8, 1) = ((MR_Box) (MR_Word) (Int32_15));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              uint32_t UInt32_16 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_7, (MR_Integer) 1)));

              {
                Const_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), Const_8, 1) = ((MR_Box) (MR_Word) (UInt32_16));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              int64_t Int64_17 = MR_unbox_int64((MR_hl_field(MR_mktag(3), IntTag_7, (MR_Integer) 1)));

              {
                Const_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), Const_8, 1) = MR_box_int64(Int64_17);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              uint64_t UInt64_18 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), IntTag_7, (MR_Integer) 1)));

              {
                Const_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), Const_8, 1) = MR_box_uint64(UInt64_18);
              }
            }
            break;
        }
        break;
    }
    return Const_8;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = hlds__vartypes__lookup_var_type_func_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0(
  MR_Word ModuleInfo_18,
  MR_Word Target_19,
  MR_Word HighLevelData_20,
  MR_Word VarTypes_21,
  MR_Word Var_22,
  MR_Word VarType_23,
  MR_Word MLDS_Type_24,
  MR_Word ConsId_25,
  MR_Word ConsTag_26,
  MR_Integer Ptag_27,
  MR_Word ExtraRvals_28,
  MR_Word ArgVars_29,
  MR_Word Context_30,
  MR_Word STATE_VARIABLE_GlobalData_0_37,
  MR_Word * STATE_VARIABLE_GlobalData_38,
  MR_Word STATE_VARIABLE_GroundTermMap_0_39,
  MR_Word * STATE_VARIABLE_GroundTermMap_40)
{
  {
    MR_Word ArgVarsTypesWidths_33;
    MR_Word ArgRvalsTypesWidths_34;
    MR_Word UsesBaseClass_35;
    MR_Word GroundTerm_36;
    MR_Word Var_41;
    MR_Word STATE_VARIABLE_GlobalData_45_45;
    MR_Word STATE_VARIABLE_GroundTermMap_46_46;
    MR_Word Var_47;

    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0_1));
      MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (VarTypes_21));
    }
    ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_95_105_100_95_97_114_103_95_116_121_112_101_115_95_97_110_100_95_119_105_100_116_104_115_95_95_104_111_51_95_95_91_49_93_95_48_7_p_0(ModuleInfo_18, Var_41, (MR_Integer) 0, VarType_23, ConsId_25, ArgVars_29, &ArgVarsTypesWidths_33);
    switch (HighLevelData_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_unify_gen__construct_ground_term_initializers_lld_8_p_0(ModuleInfo_18, Context_30, ArgVarsTypesWidths_33, &ArgRvalsTypesWidths_34, STATE_VARIABLE_GlobalData_0_37, &STATE_VARIABLE_GlobalData_45_45, STATE_VARIABLE_GroundTermMap_0_39, &STATE_VARIABLE_GroundTermMap_46_46);
        break;
      case (MR_Integer) 1:
        ml_backend__ml_unify_gen__construct_ground_term_initializers_hld_8_p_0(ModuleInfo_18, Context_30, ArgVarsTypesWidths_33, &ArgRvalsTypesWidths_34, STATE_VARIABLE_GlobalData_0_37, &STATE_VARIABLE_GlobalData_45_45, STATE_VARIABLE_GroundTermMap_0_39, &STATE_VARIABLE_GroundTermMap_46_46);
        break;
    }
    UsesBaseClass_35 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(ConsTag_26);
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (ConsId_25));
    }
    ml_backend__ml_unify_gen__construct_static_ground_term_14_p_0(ModuleInfo_18, Target_19, HighLevelData_20, Context_30, VarType_23, MLDS_Type_24, Var_47, UsesBaseClass_35, Ptag_27, ExtraRvals_28, ArgRvalsTypesWidths_34, &GroundTerm_36, STATE_VARIABLE_GlobalData_45_45, STATE_VARIABLE_GlobalData_38);
    mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (Var_22)), ((MR_Box) (GroundTerm_36)), STATE_VARIABLE_GroundTermMap_46_46, STATE_VARIABLE_GroundTermMap_40);
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_95_105_100_95_97_114_103_95_116_121_112_101_115_95_97_110_100_95_119_105_100_116_104_115_95_95_104_111_51_95_95_91_49_93_95_48_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_ArgTypeWidth_8;

    ml_backend__ml_unify_gen__lookup_type_and_specify_width_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), wrapper_arg_1, &conv2_ArgTypeWidth_8);
    *wrapper_arg_2 = ((MR_Box) (conv2_ArgTypeWidth_8));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_95_105_100_95_97_114_103_95_116_121_112_101_115_95_97_110_100_95_119_105_100_116_104_115_95_95_104_111_51_95_95_91_49_93_95_48_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_ArgTypeWidth_8;

    ml_backend__ml_unify_gen__specify_type_and_width_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), wrapper_arg_1, &conv1_ArgTypeWidth_8);
    *wrapper_arg_2 = ((MR_Box) (conv1_ArgTypeWidth_8));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_95_105_100_95_97_114_103_95_116_121_112_101_115_95_97_110_100_95_119_105_100_116_104_115_95_95_104_111_51_95_95_91_49_93_95_48_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_ArgTypeWidth_8;

    ml_backend__ml_unify_gen__lookup_type_and_specify_width_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), wrapper_arg_1, &conv0_ArgTypeWidth_8);
    *wrapper_arg_2 = ((MR_Box) (conv0_ArgTypeWidth_8));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_95_105_100_95_97_114_103_95_116_121_112_101_115_95_97_110_100_95_119_105_100_116_104_115_95_95_104_111_51_95_95_91_49_93_95_48_7_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__cons_id_arg_types_and_widths__2847__2_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_95_105_100_95_97_114_103_95_116_121_112_101_115_95_97_110_100_95_119_105_100_116_104_115_95_95_104_111_51_95_95_91_49_93_95_48_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word ArgToType_9,
  MR_Word MayHaveExtraArgs_10,
  MR_Word VarType_11,
  MR_Word ConsId_12,
  MR_Word Args_13,
  MR_Word * ArgsTypesWidths_14)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) ConsId_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word TypeInfo_for_Arg_44 = (MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2];
    MR_Word Var_15;
    MR_Integer Var_16;
    MR_Word Var_17;

    if (succeeded)
    {
      Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_12, (MR_Integer) 1)));
      Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_12, (MR_Integer) 2)));
      Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_12, (MR_Integer) 3)));
      succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(VarType_11);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word ConsRepnDefn_18;

      succeeded = check_hlds__type_util__get_cons_repn_defn_3_p_0(ModuleInfo_8, ConsId_12, &ConsRepnDefn_18);
      if (succeeded)
      {
        MR_Word ConsArgRepns_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 3)));
        MR_Integer NumExtraArgs_20;
        MR_Integer Var_26;
        MR_Integer Var_27;
        MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 0)));
        MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 1)));
        MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 2)));
        MR_Integer Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 4)));
        MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 5)));

        Var_26 = mercury__list__length_1_f_0(TypeInfo_for_Arg_44, Args_13);
        Var_27 = mercury__list__length_1_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0, ConsArgRepns_19);
        NumExtraArgs_20 = (Var_26 - Var_27);
        succeeded = (NumExtraArgs_20 == (MR_Integer) 0);
        if (succeeded)
          ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_114_103_115_95_116_121_112_101_115_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(Args_13, ConsArgRepns_19, ArgsTypesWidths_14);
        else
        {
          MR_Word TypeInfo_50_50;
          MR_Word ExtraArgs_21;
          MR_Word NonExtraArgs_22;
          MR_Word ExtraArgsTypesWidths_23;
          MR_Word NonExtraArgsTypesWidths_24;
          MR_Word Var_28;
          MR_Word Var_32;

          {
            Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_95_105_100_95_97_114_103_95_116_121_112_101_115_95_97_110_100_95_119_105_100_116_104_115_95_95_104_111_51_95_95_91_49_93_95_48_7_p_0_1));
            MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (MayHaveExtraArgs_10));
            MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) ((MR_Integer) 1));
          }
          mercury__require__expect_3_p_0(Var_28, (MR_String) "predicate \140ml_backend.ml_unify_gen.cons_id_arg_types_and_widths\'/7", (MR_String) "extra args in static struct");
          mercury__list__det_split_list_4_p_0(TypeInfo_for_Arg_44, NumExtraArgs_20, Args_13, &ExtraArgs_21, &NonExtraArgs_22);
          {
            Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_6[1]));
            MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_95_105_100_95_97_114_103_95_116_121_112_101_115_95_97_110_100_95_119_105_100_116_104_115_95_95_104_111_51_95_95_91_49_93_95_48_7_p_0_2));
            MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (TypeInfo_for_Arg_44));
            MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) (ArgToType_9));
            MR_hl_field(MR_mktag(0), Var_32, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          TypeInfo_50_50 = (MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[3];
          mercury__list__map_3_p_0(TypeInfo_for_Arg_44, TypeInfo_50_50, Var_32, ExtraArgs_21, &ExtraArgsTypesWidths_23);
          ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_114_103_115_95_116_121_112_101_115_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(NonExtraArgs_22, ConsArgRepns_19, &NonExtraArgsTypesWidths_24);
          *ArgsTypesWidths_14 = mercury__list__f_43_43_2_f_0(TypeInfo_50_50, ExtraArgsTypesWidths_23, NonExtraArgsTypesWidths_24);
        }
      }
      else
      {
        MR_Word Var_25;

        succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(VarType_11, &Var_25);
        if (succeeded)
        {
          MR_Word Var_34;
          MR_Word Var_59;

          Var_34 = ml_backend__ml_code_util__ml_make_boxed_type_0_f_0();
          {
            Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_95_105_100_95_97_114_103_95_116_121_112_101_115_95_97_110_100_95_119_105_100_116_104_115_95_95_104_111_51_95_95_91_49_93_95_48_7_p_0_3));
            MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (TypeInfo_for_Arg_44));
            MR_hl_field(MR_mktag(0), Var_59, 4) = ((MR_Box) (Var_34));
            MR_hl_field(MR_mktag(0), Var_59, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          mercury__list__map_3_p_0(TypeInfo_for_Arg_44, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[3], Var_59, Args_13, ArgsTypesWidths_14);
        }
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.cons_id_arg_types_and_widths\'/7", (MR_String) "get_cons_defn failed");
            return;
          }
        }
      }
    }
    else
    {
      MR_Word Var_37;

      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_6[1]));
        MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_95_105_100_95_97_114_103_95_116_121_112_101_115_95_97_110_100_95_119_105_100_116_104_115_95_95_104_111_51_95_95_91_49_93_95_48_7_p_0_4));
        MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (TypeInfo_for_Arg_44));
        MR_hl_field(MR_mktag(0), Var_37, 4) = ((MR_Box) (ArgToType_9));
        MR_hl_field(MR_mktag(0), Var_37, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      mercury__list__map_3_p_0(TypeInfo_for_Arg_44, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[3], Var_37, Args_13, ArgsTypesWidths_14);
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__construct_ground_term_initializers_lld_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Context_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_GlobalData_0_5,
  MR_Word * STATE_VARIABLE_GlobalData_6,
  MR_Word STATE_VARIABLE_GroundTermMap_0_7,
  MR_Word * STATE_VARIABLE_GroundTermMap_8)
{
  if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_GroundTermMap_8 = STATE_VARIABLE_GroundTermMap_0_7;
    *STATE_VARIABLE_GlobalData_6 = STATE_VARIABLE_GlobalData_0_5;
  }
  else
  {
    MR_Word ArgVarTypeWidth_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
    MR_Word ArgVarsTypesWidths_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word RvalTypeWidth_21;
    MR_Word RvalsTypesWidths_22;
    MR_Word STATE_VARIABLE_GlobalData_29_29;
    MR_Word STATE_VARIABLE_GroundTermMap_30_30;
    MR_Word ArgVar_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgVarTypeWidth_19, (MR_Integer) 0)));
    MR_Word ArgWidth_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgVarTypeWidth_19, (MR_Integer) 2)));
    MR_Word ArgGroundTerm_46;
    MR_Word ArgRval0_47;
    MR_Word MLDS_ArgType_49;
    MR_Word ArgRval_50;
    MR_Word _ConsArgType_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgVarTypeWidth_19, (MR_Integer) 1)));
    MR_Box conv0_ArgGroundTerm_46;
    MR_Word _ArgType_48;

    mercury__map__det_remove_4_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (ArgVar_43)), &conv0_ArgGroundTerm_46, STATE_VARIABLE_GroundTermMap_0_7, &STATE_VARIABLE_GroundTermMap_30_30);
    ArgGroundTerm_46 = ((MR_Word) conv0_ArgGroundTerm_46);
    ArgRval0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_46, (MR_Integer) 0)));
    _ArgType_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_46, (MR_Integer) 1)));
    MLDS_ArgType_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_46, (MR_Integer) 2)));
    ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_1, Context_2, MLDS_ArgType_49, ArgWidth_45, ArgRval0_47, &ArgRval_50, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_29_29);
    {
      RvalTypeWidth_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RvalTypeWidth_21, 0) = ((MR_Box) (ArgRval_50));
      MR_hl_field(MR_mktag(0), RvalTypeWidth_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      MR_hl_field(MR_mktag(0), RvalTypeWidth_21, 2) = ((MR_Box) (ArgWidth_45));
    }
    ml_backend__ml_unify_gen__construct_ground_term_initializers_lld_8_p_0(ModuleInfo_1, Context_2, ArgVarsTypesWidths_20, &RvalsTypesWidths_22, STATE_VARIABLE_GlobalData_29_29, STATE_VARIABLE_GlobalData_6, STATE_VARIABLE_GroundTermMap_30_30, STATE_VARIABLE_GroundTermMap_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RvalTypeWidth_21));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RvalsTypesWidths_22));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__construct_ground_term_initializers_hld_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Context_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_GlobalData_0_5,
  MR_Word * STATE_VARIABLE_GlobalData_6,
  MR_Word STATE_VARIABLE_GroundTermMap_0_7,
  MR_Word * STATE_VARIABLE_GroundTermMap_8)
{
  if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_GroundTermMap_8 = STATE_VARIABLE_GroundTermMap_0_7;
    *STATE_VARIABLE_GlobalData_6 = STATE_VARIABLE_GlobalData_0_5;
  }
  else
  {
    MR_Word ArgVarTypeWidth_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
    MR_Word ArgVarsTypesWidths_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word RvalTypeWidth_21;
    MR_Word RvalsTypesWidths_22;
    MR_Word STATE_VARIABLE_GlobalData_29_29;
    MR_Word STATE_VARIABLE_GroundTermMap_30_30;

    ml_backend__ml_unify_gen__construct_ground_term_initializer_hld_8_p_0(ModuleInfo_1, Context_2, ArgVarTypeWidth_19, &RvalTypeWidth_21, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_29_29, STATE_VARIABLE_GroundTermMap_0_7, &STATE_VARIABLE_GroundTermMap_30_30);
    ml_backend__ml_unify_gen__construct_ground_term_initializers_hld_8_p_0(ModuleInfo_1, Context_2, ArgVarsTypesWidths_20, &RvalsTypesWidths_22, STATE_VARIABLE_GlobalData_29_29, STATE_VARIABLE_GlobalData_6, STATE_VARIABLE_GroundTermMap_30_30, STATE_VARIABLE_GroundTermMap_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RvalTypeWidth_21));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RvalsTypesWidths_22));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__construct_ground_term_initializer_hld_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word Context_10,
  MR_Word ArgVarTypeWidth_11,
  MR_Word * RvalTypeWidth_12,
  MR_Word STATE_VARIABLE_GlobalData_0_24,
  MR_Word * STATE_VARIABLE_GlobalData_25,
  MR_Word STATE_VARIABLE_GroundTermMap_0_26,
  MR_Word * STATE_VARIABLE_GroundTermMap_27)
{
  {
    MR_bool succeeded;
    MR_Word ArgVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgVarTypeWidth_11, (MR_Integer) 0)));
    MR_Word ConsArgType_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgVarTypeWidth_11, (MR_Integer) 1)));
    MR_Word ArgWidth_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgVarTypeWidth_11, (MR_Integer) 2)));
    MR_Word ArgGroundTerm_18;
    MR_Word ArgRval0_19;
    MR_Word ArgType_20;
    MR_Word ArgRval_23;
    MR_Box conv0_ArgGroundTerm_18;
    MR_Word _MLDS_ArgType_21;

    mercury__map__det_remove_4_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (ArgVar_15)), &conv0_ArgGroundTerm_18, STATE_VARIABLE_GroundTermMap_0_26, STATE_VARIABLE_GroundTermMap_27);
    ArgGroundTerm_18 = ((MR_Word) conv0_ArgGroundTerm_18);
    ArgRval0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_18, (MR_Integer) 0)));
    ArgType_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_18, (MR_Integer) 1)));
    _MLDS_ArgType_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_18, (MR_Integer) 2)));
    succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ModuleInfo_9, ConsArgType_16, ArgWidth_17);
    if (succeeded)
    {
      MR_Word TypeCtorInfo_15_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
      MR_Word TypeVarSet0_39;
      MR_Word MLDS_ArgType_55;
      MR_Word TypeVar_40;
      MR_Word _TypeVarSet_41;

      mercury__varset__init_1_p_0(TypeCtorInfo_15_43, &TypeVarSet0_39);
      mercury__varset__new_var_3_p_0(TypeCtorInfo_15_43, &TypeVar_40, TypeVarSet0_39, &_TypeVarSet_41);
      MLDS_ArgType_55 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_9, ArgType_20);
      ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_9, Context_10, MLDS_ArgType_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ArgRval0_19, &ArgRval_23, STATE_VARIABLE_GlobalData_0_24, STATE_VARIABLE_GlobalData_25);
    }
    else
      switch (MR_tag((MR_Word) ConsArgType_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MLDS_ArgType_75;

            MLDS_ArgType_75 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_9, ArgType_20);
            ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_9, Context_10, MLDS_ArgType_75, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ArgRval0_19, &ArgRval_23, STATE_VARIABLE_GlobalData_0_24, STATE_VARIABLE_GlobalData_25);
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_9, ArgType_20, ConsArgType_16, (MR_Integer) 0, ArgRval0_19, &ArgRval_23);
            *STATE_VARIABLE_GlobalData_25 = STATE_VARIABLE_GlobalData_0_24;
          }
          break;
        case (MR_Integer) 3:
          {
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_9, ArgType_20, ConsArgType_16, (MR_Integer) 0, ArgRval0_19, &ArgRval_23);
            *STATE_VARIABLE_GlobalData_25 = STATE_VARIABLE_GlobalData_0_24;
          }
          break;
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *RvalTypeWidth_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ArgRval_23));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ArgWidth_17));
    }
  }
}

void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_known_tag_test_5_p_0(
  MR_Word Var_6,
  MR_Word TaggedConsId_7,
  MR_Word * TagTestExpr_8,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  {
    MR_Word VarLval_10;
    MR_Word Type_11;
    MR_Word Tag_13;
    MR_Word Var_16;
    MR_Word _ConsId_12;

    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_14, Var_6, &VarLval_10);
    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_14, Var_6, &Type_11);
    _ConsId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), TaggedConsId_7, (MR_Integer) 0)));
    Tag_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), TaggedConsId_7, (MR_Integer) 1)));
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_16, 0) = ((MR_Box) (VarLval_10));
    }
    *TagTestExpr_8 = ml_backend__ml_unify_gen__ml_gen_tag_test_rval_4_f_0(STATE_VARIABLE_Info_0_14, Tag_13, Type_11, Var_16);
    *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__197__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__229__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__217__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__165__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_6_p_0(
  MR_Word Unification_7,
  MR_Word CodeModel_8,
  MR_Word Context_9,
  MR_Word * Stmts_10,
  MR_Word STATE_VARIABLE_Info_0_49,
  MR_Word * STATE_VARIABLE_Info_50)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Unification_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_7, (MR_Integer) 0)));
          MR_Word ConsId_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_7, (MR_Integer) 1)));
          MR_Word Args_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_7, (MR_Integer) 2)));
          MR_Word ArgModes_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_7, (MR_Integer) 3)));
          MR_Word HowToConstruct_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_7, (MR_Integer) 4)));
          MR_Word SubInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_7, (MR_Integer) 6)));
          MR_Word TakeAddr_35;
          MR_Word Var_62;
          MR_Word _CellIsUnique_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_7, (MR_Integer) 5)));

          {
            Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[12]));
            MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_2));
            MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (CodeModel_8));
            MR_hl_field(MR_mktag(0), Var_62, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_62, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unification\'/6", (MR_String) "construct not det");
          if ((SubInfo_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            TakeAddr_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
          {
            MR_Word MaybeTakeAddr_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), SubInfo_34, (MR_Integer) 0)));
            MR_Word MaybeSizeProfInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), SubInfo_34, (MR_Integer) 1)));
            MR_Word Var_66;

            if ((MaybeTakeAddr_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              TakeAddr_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              TakeAddr_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTakeAddr_36, (MR_Integer) 0)));
            {
              Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[13]));
              MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_3));
              MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (MaybeSizeProfInfo_37));
              MR_hl_field(MR_mktag(0), Var_66, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            mercury__require__expect_3_p_0(Var_66, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unification\'/6", (MR_String) "term size profiling not yet supported");
          }
          ml_backend__ml_unify_gen__ml_gen_construct_10_p_0(Var_28, ConsId_29, Args_30, ArgModes_31, TakeAddr_35, HowToConstruct_32, Context_9, Stmts_10, STATE_VARIABLE_Info_0_49, STATE_VARIABLE_Info_50);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CanFail_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_7, (MR_Integer) 4)));
          MR_Word CanCGC_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_7, (MR_Integer) 5)));
          MR_Word ExpectedCodeModel_40;
          MR_Word UnifyStmts_41;
          MR_Word Stmts0_45;
          MR_Word STATE_VARIABLE_Info_54_54;
          MR_Word Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_7, (MR_Integer) 0)));
          MR_Word ConsId_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_7, (MR_Integer) 1)));
          MR_Word Args_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_7, (MR_Integer) 2)));
          MR_Word ArgModes_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_7, (MR_Integer) 3)));

          switch (CanFail_38) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ExpectedCodeModel_40 = (MR_Integer) 1;
                ml_backend__ml_unify_gen__ml_gen_semi_deconstruct_8_p_0(Var_92, ConsId_93, Args_94, ArgModes_95, Context_9, &UnifyStmts_41, STATE_VARIABLE_Info_0_49, &STATE_VARIABLE_Info_54_54);
              }
              break;
            case (MR_Integer) 1:
              {
                ExpectedCodeModel_40 = (MR_Integer) 0;
                ml_backend__ml_unify_gen__ml_gen_det_deconstruct_8_p_0(Var_92, ConsId_93, Args_94, ArgModes_95, Context_9, &UnifyStmts_41, STATE_VARIABLE_Info_0_49, &STATE_VARIABLE_Info_54_54);
              }
              break;
          }
          switch (CanCGC_39) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word VarLval_42;
                MR_Word Delete_43;
                MR_Word CGCStmt_44;
                MR_Word Var_55;
                MR_Word Var_58;
                MR_Word Var_59;

                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_54_54, Var_92, &VarLval_42);
                {
                  Var_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_58, 0) = ((MR_Box) (VarLval_42));
                }
                {
                  Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_3[6])));
                  MR_hl_field(MR_mktag(3), Var_55, 2) = ((MR_Box) (Var_58));
                }
                {
                  Delete_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Delete_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Delete_43, 1) = ((MR_Box) (Var_55));
                }
                {
                  CGCStmt_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), CGCStmt_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                  MR_hl_field(MR_mktag(3), CGCStmt_44, 1) = ((MR_Box) (Delete_43));
                  MR_hl_field(MR_mktag(3), CGCStmt_44, 2) = ((MR_Box) (Context_9));
                }
                {
                  Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (CGCStmt_44));
                  MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                Stmts0_45 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, UnifyStmts_41, Var_59);
              }
              break;
            case (MR_Integer) 1:
              Stmts0_45 = UnifyStmts_41;
              break;
          }
          ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_p_0(CodeModel_8, ExpectedCodeModel_40, Context_9, Stmts0_45, Stmts_10, STATE_VARIABLE_Info_54_54, STATE_VARIABLE_Info_50);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TargetVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), Unification_7, (MR_Integer) 0)));
          MR_Word SourceVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), Unification_7, (MR_Integer) 1)));
          MR_Word Type_14;
          MR_Word ModuleInfo_15;
          MR_Word IsDummyType_16;
          MR_Word Var_83;
          MR_Word GroundTerm_20;

          {
            Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[12]));
            MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_1));
            MR_hl_field(MR_mktag(0), Var_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_83, 3) = ((MR_Box) (CodeModel_8));
            MR_hl_field(MR_mktag(0), Var_83, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_83, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unification\'/6", (MR_String) "assign not det");
          ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_49, TargetVar_12, &Type_14);
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_49, &ModuleInfo_15);
          IsDummyType_16 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_15, Type_14);
          switch (IsDummyType_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *Stmts_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
            case (MR_Integer) 1:
              {
                MR_Word TargetLval_17;
                MR_Word SourceLval_18;
                MR_Word Stmt_19;
                MR_Word Var_87;

                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_49, TargetVar_12, &TargetLval_17);
                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_49, SourceVar_13, &SourceLval_18);
                {
                  Var_87 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_87, 0) = ((MR_Box) (SourceLval_18));
                }
                Stmt_19 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(TargetLval_17, Var_87, Context_9);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *Stmts_10 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_19));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
              break;
          }
          succeeded = ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(STATE_VARIABLE_Info_0_49, SourceVar_13, &GroundTerm_20);
          if (succeeded)
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(TargetVar_12, GroundTerm_20, STATE_VARIABLE_Info_0_49, STATE_VARIABLE_Info_50);
          else
            *STATE_VARIABLE_Info_50 = STATE_VARIABLE_Info_0_49;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Unification_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word VarA_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), Unification_7, (MR_Integer) 1)));
              MR_Word VarB_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), Unification_7, (MR_Integer) 2)));
              MR_Word EqualityOp_23;
              MR_Word VarALval_25;
              MR_Word VarBLval_26;
              MR_Word Test_27;
              MR_Word Var_71;
              MR_Word Var_79;
              MR_Word Var_80;
              MR_Word Type_90;
              MR_Word Stmt_91;
              MR_Word Var_75;

              {
                Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[12]));
                MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_4));
                MR_hl_field(MR_mktag(0), Var_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_71, 3) = ((MR_Box) (CodeModel_8));
                MR_hl_field(MR_mktag(0), Var_71, 4) = ((MR_Box) ((MR_Integer) 1));
              }
              mercury__require__expect_3_p_0(Var_71, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unification\'/6", (MR_String) "simple_test not semidet");
              ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_49, VarA_21, &Type_90);
              succeeded = ((MR_tag((MR_Word) Type_90)) == (MR_mktag((MR_Integer) 2)));
              if (succeeded)
              {
                Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), Type_90, (MR_Integer) 0)));
                succeeded = (Var_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              }
              if (succeeded)
                EqualityOp_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
              else
              {
                MR_Word Var_76;

                succeeded = ((MR_tag((MR_Word) Type_90)) == (MR_mktag((MR_Integer) 2)));
                if (succeeded)
                {
                  Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(2), Type_90, (MR_Integer) 0)));
                  succeeded = (Var_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                if (succeeded)
                  EqualityOp_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16));
                else
                {
                  MR_Word IntType_24;
                  MR_Word Var_77;

                  succeeded = ((MR_tag((MR_Word) Type_90)) == (MR_mktag((MR_Integer) 2)));
                  if (succeeded)
                  {
                    Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), Type_90, (MR_Integer) 0)));
                    succeeded = ((MR_tag((MR_Word) Var_77)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                      IntType_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_77, (MR_Integer) 0)));
                  }
                  if (succeeded)
                    {
                      EqualityOp_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), EqualityOp_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                      MR_hl_field(MR_mktag(3), EqualityOp_23, 1) = ((MR_Box) (IntType_24));
                    }
                  else
                  {
                    EqualityOp_23 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[14]);
                  }
                }
              }
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_49, VarA_21, &VarALval_25);
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_49, VarB_22, &VarBLval_26);
              {
                Var_79 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_79, 0) = ((MR_Box) (VarALval_25));
              }
              {
                Var_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_80, 0) = ((MR_Box) (VarBLval_26));
              }
              {
                Test_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Test_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), Test_27, 1) = ((MR_Box) (EqualityOp_23));
                MR_hl_field(MR_mktag(3), Test_27, 2) = ((MR_Box) (Var_79));
                MR_hl_field(MR_mktag(3), Test_27, 3) = ((MR_Box) (Var_80));
              }
              ml_backend__ml_code_util__ml_gen_set_success_5_p_0(Test_27, Context_9, &Stmt_91, STATE_VARIABLE_Info_0_49, STATE_VARIABLE_Info_50);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_91));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unification\'/6", (MR_String) "complicated unify");
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
ml_backend__ml_unify_gen__ml_gen_semi_deconstruct_8_p_0(
  MR_Word Var_9,
  MR_Word ConsId_10,
  MR_Word Args_11,
  MR_Word ArgModes_12,
  MR_Word Context_13,
  MR_Word * Stmts_14,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  {
    MR_Word TagTestExpr_16;
    MR_Word SetTagTestResult_17;
    MR_Word SucceededExpr_18;
    MR_Word GetArgsStmts_19;
    MR_Word STATE_VARIABLE_Info_27_27;
    MR_Word STATE_VARIABLE_Info_28_28;
    MR_Word VarLval_42;
    MR_Word Type_43;
    MR_Word Tag_44;
    MR_Word Var_45;
    MR_Word ModuleInfo_49;

    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_24, Var_9, &VarLval_42);
    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_24, Var_9, &Type_43);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_24, &ModuleInfo_49);
    Tag_44 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_49, ConsId_10);
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_45, 0) = ((MR_Box) (VarLval_42));
    }
    TagTestExpr_16 = ml_backend__ml_unify_gen__ml_gen_tag_test_rval_4_f_0(STATE_VARIABLE_Info_0_24, Tag_44, Type_43, Var_45);
    ml_backend__ml_code_util__ml_gen_set_success_5_p_0(TagTestExpr_16, Context_13, &SetTagTestResult_17, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_27_27);
    ml_backend__ml_code_util__ml_gen_test_success_3_p_0(&SucceededExpr_18, STATE_VARIABLE_Info_27_27, &STATE_VARIABLE_Info_28_28);
    ml_backend__ml_unify_gen__ml_gen_det_deconstruct_8_p_0(Var_9, ConsId_10, Args_11, ArgModes_12, Context_13, &GetArgsStmts_19, STATE_VARIABLE_Info_28_28, STATE_VARIABLE_Info_25);
    if ((GetArgsStmts_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *Stmts_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SetTagTestResult_17));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    else
    {
      MR_Word GetArgs_22;
      MR_Word IfStmt_23;
      MR_Word Var_33;

      GetArgs_22 = ml_backend__ml_code_util__ml_gen_block_4_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), GetArgsStmts_19, Context_13);
      {
        IfStmt_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), IfStmt_23, 0) = ((MR_Box) (SucceededExpr_18));
        MR_hl_field(MR_mktag(2), IfStmt_23, 1) = ((MR_Box) (GetArgs_22));
        MR_hl_field(MR_mktag(2), IfStmt_23, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(2), IfStmt_23, 3) = ((MR_Box) (Context_13));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (IfStmt_23));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *Stmts_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SetTagTestResult_17));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_33));
      }
    }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_gen_tag_test_rval_4_f_0(
  MR_Word Info_6,
  MR_Word Tag_7,
  MR_Word Type_8,
  MR_Word Rval_9)
{
  {
    MR_bool succeeded;
    MR_Word TagTestRval_10;

    switch (MR_tag((MR_Word) Tag_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Tag_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[24]);
            }
            break;
          case (MR_Integer) 1:
            {
              TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[24]);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String String_11 = ((MR_String) (MR_hl_field(MR_mktag(1), Tag_7, (MR_Integer) 0)));
          MR_Word Var_93;
          MR_Word Var_94;

          {
            Var_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
            MR_hl_field(MR_mktag(3), Var_94, 1) = ((MR_Box) (String_11));
          }
          {
            Var_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_93, 1) = ((MR_Box) (Var_94));
          }
          {
            TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (Rval_9));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (Var_93));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float Float_12 = MR_unbox_float((MR_hl_field(MR_mktag(2), Tag_7, (MR_Integer) 0)));
          MR_Word Var_90;
          MR_Word Var_91;

          {
            Var_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
            MR_hl_field(MR_mktag(3), Var_91, 1) = MR_box_float(Float_12);
          }
          {
            Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_90, 1) = ((MR_Box) (Var_91));
          }
          {
            TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (Rval_9));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (Var_90));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word IntTag_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 1)));
              MR_Word ModuleInfo_14;

              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_6, &ModuleInfo_14);
              TagTestRval_10 = ml_backend__ml_unify_gen__ml_gen_int_tag_test_rval_4_f_0(IntTag_13, Type_8, ModuleInfo_14, Rval_9);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ForeignLang_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 1)));
              MR_String ForeignVal_16 = ((MR_String) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 2)));
              MR_Word MLDS_Type_17;
              MR_Word Const_18;
              MR_Word Var_86;
              MR_Word ModuleInfo_95;

              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_6, &ModuleInfo_95);
              MLDS_Type_17 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_95, Type_8);
              {
                Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                MR_hl_field(MR_mktag(3), Var_86, 1) = ((MR_Box) (ForeignLang_15));
                MR_hl_field(MR_mktag(3), Var_86, 2) = ((MR_Box) (ForeignVal_16));
                MR_hl_field(MR_mktag(3), Var_86, 3) = ((MR_Box) (MLDS_Type_17));
              }
              {
                Const_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Const_18, 1) = ((MR_Box) (Var_86));
              }
              {
                TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[14])));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (Rval_9));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (Const_18));
              }
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
              mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_unify_gen.ml_gen_tag_test_rval\'/4", (MR_String) "bad tag");
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Integer UnsharedPtag_98 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 1)));
              MR_Word RvalTag_99;
              MR_Word UnsharedTag_100;
              MR_Word Var_105;
              MR_Word Var_106;

              {
                RvalTag_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), RvalTag_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), RvalTag_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_3[9])));
                MR_hl_field(MR_mktag(3), RvalTag_99, 2) = ((MR_Box) (Rval_9));
              }
              {
                Var_106 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_106, 0) = ((MR_Box) (UnsharedPtag_98));
              }
              {
                Var_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_105, 1) = ((MR_Box) (Var_106));
              }
              {
                UnsharedTag_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), UnsharedTag_100, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), UnsharedTag_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_3[2])));
                MR_hl_field(MR_mktag(3), UnsharedTag_100, 2) = ((MR_Box) (Var_105));
              }
              {
                TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[14])));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (RvalTag_99));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (UnsharedTag_100));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer UnsharedPtag_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 1)));
              MR_Word RvalTag_39;
              MR_Word UnsharedTag_40;
              MR_Word Var_78;
              MR_Word Var_79;

              {
                RvalTag_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), RvalTag_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), RvalTag_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_3[9])));
                MR_hl_field(MR_mktag(3), RvalTag_39, 2) = ((MR_Box) (Rval_9));
              }
              {
                Var_79 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_79, 0) = ((MR_Box) (UnsharedPtag_38));
              }
              {
                Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_78, 1) = ((MR_Box) (Var_79));
              }
              {
                UnsharedTag_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), UnsharedTag_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), UnsharedTag_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_3[2])));
                MR_hl_field(MR_mktag(3), UnsharedTag_40, 2) = ((MR_Box) (Var_78));
              }
              {
                TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[14])));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (RvalTag_39));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (UnsharedTag_40));
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Integer PrimaryTag_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 1)));
              MR_Integer SecondaryTag_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 2)));
              MR_Word SecondaryTagFieldRval_43;
              MR_Word SecondaryTagTestRval_44;
              MR_Integer NumPtagBits_45;
              MR_Word Var_61;
              MR_Word Var_63;
              MR_Word Var_64;

              ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_p_0(Info_6, Type_8, Rval_9, PrimaryTag_41, &SecondaryTagFieldRval_43);
              Var_61 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[14]);
              {
                Var_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_64, 0) = ((MR_Box) (SecondaryTag_42));
              }
              {
                Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_63, 1) = ((MR_Box) (Var_64));
              }
              {
                SecondaryTagTestRval_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), SecondaryTagTestRval_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), SecondaryTagTestRval_44, 1) = ((MR_Box) (Var_61));
                MR_hl_field(MR_mktag(3), SecondaryTagTestRval_44, 2) = ((MR_Box) (SecondaryTagFieldRval_43));
                MR_hl_field(MR_mktag(3), SecondaryTagTestRval_44, 3) = ((MR_Box) (Var_63));
              }
              ml_backend__ml_gen_info__ml_gen_info_get_num_ptag_bits_2_p_0(Info_6, &NumPtagBits_45);
              succeeded = (NumPtagBits_45 == (MR_Integer) 0);
              if (succeeded)
                TagTestRval_10 = SecondaryTagTestRval_44;
              else
              {
                MR_Word RvalPTag_46;
                MR_Word PrimaryTagRval_47;
                MR_Word PrimaryTagTestRval_48;
                MR_Word Var_69;
                MR_Word Var_70;

                {
                  RvalPTag_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), RvalPTag_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), RvalPTag_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_3[9])));
                  MR_hl_field(MR_mktag(3), RvalPTag_46, 2) = ((MR_Box) (Rval_9));
                }
                {
                  Var_70 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_70, 0) = ((MR_Box) (PrimaryTag_41));
                }
                {
                  Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_69, 1) = ((MR_Box) (Var_70));
                }
                {
                  PrimaryTagRval_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), PrimaryTagRval_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), PrimaryTagRval_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_3[2])));
                  MR_hl_field(MR_mktag(3), PrimaryTagRval_47, 2) = ((MR_Box) (Var_69));
                }
                {
                  PrimaryTagTestRval_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), PrimaryTagTestRval_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), PrimaryTagTestRval_48, 1) = ((MR_Box) (Var_61));
                  MR_hl_field(MR_mktag(3), PrimaryTagTestRval_48, 2) = ((MR_Box) (RvalPTag_46));
                  MR_hl_field(MR_mktag(3), PrimaryTagTestRval_48, 3) = ((MR_Box) (PrimaryTagRval_47));
                }
                {
                  TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (PrimaryTagTestRval_48));
                  MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (SecondaryTagTestRval_44));
                }
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Integer Ptag_49 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 1)));
              MR_Integer Num_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 2)));
              MR_Word Var_53;
              MR_Word Var_54;
              MR_Word Var_55;
              MR_Word Var_56;
              MR_Word Var_59;
              MR_Word Var_60;
              MR_Word ModuleInfo_96;
              MR_Word MLDS_Type_97;

              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_6, &ModuleInfo_96);
              MLDS_Type_97 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_96, Type_8);
              {
                Var_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_54, 0) = ((MR_Box) (MLDS_Type_97));
              }
              {
                Var_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_60, 0) = ((MR_Box) (Num_50));
              }
              {
                Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (Var_60));
              }
              {
                Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_3[0])));
                MR_hl_field(MR_mktag(3), Var_56, 2) = ((MR_Box) (Var_59));
              }
              {
                Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (Ptag_49));
                MR_hl_field(MR_mktag(3), Var_55, 2) = ((MR_Box) (Var_56));
              }
              {
                Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (Var_54));
                MR_hl_field(MR_mktag(3), Var_53, 2) = ((MR_Box) (Var_55));
              }
              {
                TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[14])));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (Rval_9));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (Var_53));
              }
            }
            break;
        }
        break;
    }
    return TagTestRval_10;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_gen_int_tag_test_rval_4_f_0(
  MR_Word IntTag_6,
  MR_Word Type_7,
  MR_Word ModuleInfo_8,
  MR_Word Rval_9)
{
  {
    MR_bool succeeded;
    MR_Word TagTestRval_10;

    switch (MR_tag((MR_Word) IntTag_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer Int_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), IntTag_6, (MR_Integer) 0)));
          MR_Word ConstRval_12;
          MR_Word Var_64;

          Var_64 = parse_tree__builtin_lib_types__int_type_0_f_0();
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_7, Var_64);
          if (succeeded)
          {
            MR_Word Var_59;

            {
              Var_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_59, 0) = ((MR_Box) (Int_11));
            }
            {
              ConstRval_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ConstRval_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ConstRval_12, 1) = ((MR_Box) (Var_59));
            }
          }
          else
          {
            MR_Word Var_65;

            Var_65 = parse_tree__builtin_lib_types__char_type_0_f_0();
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_7, Var_65);
            if (succeeded)
            {
              MR_Word Var_60;

              {
                Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (Int_11));
              }
              {
                ConstRval_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstRval_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstRval_12, 1) = ((MR_Box) (Var_60));
              }
            }
            else
            {
              MR_Word MLDS_Type_13;
              MR_Word Var_61;

              MLDS_Type_13 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_8, Type_7);
              {
                Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (Int_11));
                MR_hl_field(MR_mktag(3), Var_61, 2) = ((MR_Box) (MLDS_Type_13));
              }
              {
                ConstRval_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstRval_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstRval_12, 1) = ((MR_Box) (Var_61));
              }
            }
          }
          {
            TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[14])));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (Rval_9));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (ConstRval_12));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Unsigned UInt_14 = ((MR_Unsigned) (MR_hl_field(MR_mktag(1), IntTag_6, (MR_Integer) 0)));
          MR_Word Var_57;
          MR_Word Var_58;

          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (UInt_14));
          }
          {
            Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (Var_58));
          }
          {
            TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[19])));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (Rval_9));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (Var_57));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          int8_t Int8_15 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(2), IntTag_6, (MR_Integer) 0)));
          MR_Word Var_53;
          MR_Word Var_54;

          {
            Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_54, 1) = ((MR_Box) (MR_Word) (Int8_15));
          }
          {
            Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (Var_54));
          }
          {
            TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[18])));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (Rval_9));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (Var_53));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              uint8_t UInt8_16 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_6, (MR_Integer) 1)));
              MR_Word Var_49;
              MR_Word Var_50;

              {
                Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) (MR_Word) (UInt8_16));
              }
              {
                Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (Var_50));
              }
              {
                TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[23])));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (Rval_9));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (Var_49));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              int16_t Int16_17 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_6, (MR_Integer) 1)));
              MR_Word Var_45;
              MR_Word Var_46;

              {
                Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (MR_Word) (Int16_17));
              }
              {
                Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (Var_46));
              }
              {
                TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[15])));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (Rval_9));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (Var_45));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              uint16_t UInt16_18 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_6, (MR_Integer) 1)));
              MR_Word Var_41;
              MR_Word Var_42;

              {
                Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (MR_Word) (UInt16_18));
              }
              {
                Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (Var_42));
              }
              {
                TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[20])));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (Rval_9));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (Var_41));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              int32_t Int32_19 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_6, (MR_Integer) 1)));
              MR_Word Var_37;
              MR_Word Var_38;

              {
                Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (MR_Word) (Int32_19));
              }
              {
                Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (Var_38));
              }
              {
                TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[16])));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (Rval_9));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (Var_37));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              uint32_t UInt32_20 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_6, (MR_Integer) 1)));
              MR_Word Var_33;
              MR_Word Var_34;

              {
                Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (MR_Word) (UInt32_20));
              }
              {
                Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (Var_34));
              }
              {
                TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[21])));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (Rval_9));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (Var_33));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              int64_t Int64_21 = MR_unbox_int64((MR_hl_field(MR_mktag(3), IntTag_6, (MR_Integer) 1)));
              MR_Word Var_29;
              MR_Word Var_30;

              {
                Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), Var_30, 1) = MR_box_int64(Int64_21);
              }
              {
                Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (Var_30));
              }
              {
                TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[17])));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (Rval_9));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (Var_29));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              uint64_t UInt64_22 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), IntTag_6, (MR_Integer) 1)));
              MR_Word Var_25;
              MR_Word Var_26;

              {
                Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), Var_26, 1) = MR_box_uint64(UInt64_22);
              }
              {
                Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (Var_26));
              }
              {
                TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[22])));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (Rval_9));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (Var_25));
              }
            }
            break;
        }
        break;
    }
    return TagTestRval_10;
  }
}

void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_p_0(
  MR_Word Info_6,
  MR_Word VarType_7,
  MR_Word Rval_8,
  MR_Integer PrimaryTag_9,
  MR_Word * StagFieldRval_10)
{
  {
    MR_bool succeeded;
    MR_Word HighLevelData_11;
    MR_Word ModuleInfo_12;
    MR_Word MLDS_VarType_13;

    ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(Info_6, &HighLevelData_11);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_6, &ModuleInfo_12);
    MLDS_VarType_13 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_12, VarType_7);
    switch (HighLevelData_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_21;
          MR_Word Var_22;
          MR_Word Var_23;

          {
            Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (PrimaryTag_9));
          }
          {
            Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (Var_23));
            MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (Rval_8));
            MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[8]));
            MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
            MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (MLDS_VarType_13));
          }
          {
            Var_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_21, 0) = ((MR_Box) (Var_22));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *StagFieldRval_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_3[5])));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_21));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Target_14;
          MR_Word FieldId_15;
          MR_Word Var_16;
          MR_Word Var_17;
          MR_Word TypeCtor_33;
          MR_Word QualifiedTypeName_34;
          MR_Integer TypeArity_35;
          MR_Word MLDS_Module_36;
          MR_Word TypeQualKind_37;
          MR_String TypeName_38;
          MR_Word TypeTable_39;
          MR_Word TypeDefn_40;
          MR_Word TypeDefnBody_41;
          MR_Word ClassQualifier_50;
          MR_Word ClassQualKind_51;
          MR_String ClassName_52;
          MR_Integer ClassArity_53;
          MR_Word QualClassName_58;
          MR_Word ClassId_59;
          MR_Word ClassPtrType_60;
          MR_Word FieldQualifier_61;
          MR_Word QualifiedFieldName_62;
          MR_Word Var_70;

          ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(Info_6, &Target_14);
          parse_tree__prog_type__type_to_ctor_det_2_p_0(VarType_7, &TypeCtor_33);
          ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_33, &QualifiedTypeName_34, &TypeArity_35);
          MLDS_Module_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualifiedTypeName_34, (MR_Integer) 0)));
          TypeQualKind_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualifiedTypeName_34, (MR_Integer) 1)));
          TypeName_38 = ((MR_String) (MR_hl_field(MR_mktag(0), QualifiedTypeName_34, (MR_Integer) 2)));
          hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_12, &TypeTable_39);
          hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_39, TypeCtor_33, &TypeDefn_40);
          hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_40, &TypeDefnBody_41);
          switch (MR_tag((MR_Word) TypeDefnBody_41)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_unify_gen.ml_gen_hl_tag_field_id\'/3", (MR_String) "non-du type");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word MaybeRepn_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeDefnBody_41, (MR_Integer) 2)));
                MR_Word Repn_46;
                MR_Word CtorRepns_47;
                MR_Integer NumWith_48;
                MR_Integer NumWithout_49;
                MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeDefnBody_41, (MR_Integer) 0)));
                MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeDefnBody_41, (MR_Integer) 1)));
                MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeDefnBody_41, (MR_Integer) 3)));
                MR_Word Var_73;
                MR_Word Var_74;
                MR_Word Var_75;
                MR_Word Var_76;
                MR_Integer Var_68;

                if ((MaybeRepn_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_unify_gen.ml_gen_hl_tag_field_id\'/3", (MR_String) "MaybeRepn = no");
                    return;
                  }
                }
                else
                  Repn_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeRepn_44, (MR_Integer) 0)));
                CtorRepns_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn_46, (MR_Integer) 0)));
                Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn_46, (MR_Integer) 1)));
                Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn_46, (MR_Integer) 2)));
                Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn_46, (MR_Integer) 3)));
                Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn_46, (MR_Integer) 4)));
                ml_backend__ml_type_gen__ctors_with_and_without_secondary_tag_3_p_0(CtorRepns_47, &NumWith_48, &NumWithout_49);
                succeeded = (NumWith_48 > (MR_Integer) 0);
                if (succeeded)
                {
                  Var_68 = (MR_Integer) 0;
                  succeeded = (NumWithout_49 > Var_68);
                }
                if (succeeded)
                {
                  ClassQualifier_50 = ml_backend__mlds__mlds_append_class_qualifier_module_qual_3_f_0(MLDS_Module_36, TypeName_38, TypeArity_35);
                  ClassQualKind_51 = TypeQualKind_37;
                  ClassName_52 = (MR_String) "tag_type";
                  ClassArity_53 = (MR_Integer) 0;
                }
                else
                {
                  ClassQualifier_50 = MLDS_Module_36;
                  ClassQualKind_51 = (MR_Integer) 0;
                  ClassName_52 = TypeName_38;
                  ClassArity_53 = TypeArity_35;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_unify_gen.ml_gen_hl_tag_field_id\'/3", (MR_String) "non-du type");
                  return;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_unify_gen.ml_gen_hl_tag_field_id\'/3", (MR_String) "non-du type");
                  return;
                }
              }
              break;
          }
          {
            QualClassName_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), QualClassName_58, 0) = ((MR_Box) (ClassQualifier_50));
            MR_hl_field(MR_mktag(0), QualClassName_58, 1) = ((MR_Box) (ClassQualKind_51));
            MR_hl_field(MR_mktag(0), QualClassName_58, 2) = ((MR_Box) (ClassName_52));
          }
          {
            ClassId_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ClassId_59, 0) = ((MR_Box) (QualClassName_58));
            MR_hl_field(MR_mktag(0), ClassId_59, 1) = ((MR_Box) (ClassArity_53));
            MR_hl_field(MR_mktag(0), ClassId_59, 2) = ((MR_Box) ((MR_Integer) 0));
          }
          Var_70 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ClassId_59);
          {
            ClassPtrType_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ClassPtrType_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), ClassPtrType_60, 1) = ((MR_Box) (Var_70));
          }
          FieldQualifier_61 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(Target_14, ClassQualifier_50, ClassQualKind_51, ClassName_52, ClassArity_53);
          {
            QualifiedFieldName_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), QualifiedFieldName_62, 0) = ((MR_Box) (FieldQualifier_61));
            MR_hl_field(MR_mktag(0), QualifiedFieldName_62, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), QualifiedFieldName_62, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          }
          {
            FieldId_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), FieldId_15, 0) = ((MR_Box) (QualifiedFieldName_62));
            MR_hl_field(MR_mktag(1), FieldId_15, 1) = ((MR_Box) (ClassPtrType_60));
          }
          {
            Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (PrimaryTag_9));
          }
          {
            Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (Var_17));
            MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (Rval_8));
            MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (FieldId_15));
            MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
            MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (MLDS_VarType_13));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *StagFieldRval_10 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_16));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_det_deconstruct_8_p_0(
  MR_Word Var_9,
  MR_Word ConsId_10,
  MR_Word Args_11,
  MR_Word Modes_12,
  MR_Word Context_13,
  MR_Word * Stmts_14,
  MR_Word STATE_VARIABLE_Info_0_60,
  MR_Word * STATE_VARIABLE_Info_61)
{
  {
    MR_bool succeeded;
    MR_Word Type_16;
    MR_Word Tag_17;
    MR_Word ModuleInfo_95;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_60, Var_9, &Type_16);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_60, &ModuleInfo_95);
    Tag_17 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_95, ConsId_10);
    switch (MR_tag((MR_Word) Tag_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Tag_17)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgTypes_55;
              MR_Word Fields_56;
              MR_Word OffSet_58;
              MR_Integer ArgNum_59;
              MR_Word VarLval_91;
              MR_Integer Var_57;

              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_60, Var_9, &VarLval_91);
              ml_backend__ml_code_util__ml_variable_types_3_p_0(STATE_VARIABLE_Info_0_60, Args_11, &ArgTypes_55);
              ml_backend__ml_unify_gen__ml_field_names_and_types_5_p_0(STATE_VARIABLE_Info_0_60, Type_16, ConsId_10, ArgTypes_55, &Fields_56);
              ml_backend__ml_unify_gen__ml_tag_offset_and_argnum_4_p_0(Tag_17, &Var_57, &OffSet_58, &ArgNum_59);
              ml_backend__ml_unify_gen__ml_gen_unify_args_14_p_0(ConsId_10, Args_11, Modes_12, ArgTypes_55, Fields_56, Type_16, VarLval_91, OffSet_58, ArgNum_59, Tag_17, Context_13, Stmts_14, STATE_VARIABLE_Info_0_60, STATE_VARIABLE_Info_61);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Arg_44;
              MR_Word Mode_45;
              MR_Word Var_67;
              MR_Word Var_68;

              succeeded = ((MR_tag((MR_Word) Args_11)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Arg_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_11, (MR_Integer) 0)));
                Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_11, (MR_Integer) 1)));
                succeeded = (Var_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Modes_12)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Mode_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_12, (MR_Integer) 0)));
                    Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_12, (MR_Integer) 1)));
                    succeeded = (Var_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              }
              if (succeeded)
              {
                MR_Word ArgType_46;
                MR_Word ArgLval_47;
                MR_Word VarLval_48;
                MR_Word ModuleInfo_49;
                MR_Word HighLevelData_50;

                ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_60, Arg_44, &ArgType_46);
                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_60, Arg_44, &ArgLval_47);
                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_60, Var_9, &VarLval_48);
                ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_60, &ModuleInfo_49);
                ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_60, &HighLevelData_50);
                ml_backend__ml_unify_gen__ml_gen_sub_unify_11_p_0(ModuleInfo_49, HighLevelData_50, Mode_45, ArgLval_47, ArgType_46, VarLval_48, Type_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Context_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Stmts_14);
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_det_deconstruct\'/8", (MR_String) "no_tag: arity != 1");
                  return;
                }
              }
              *STATE_VARIABLE_Info_61 = STATE_VARIABLE_Info_0_60;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *Stmts_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *STATE_VARIABLE_Info_61 = STATE_VARIABLE_Info_0_60;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Tag_17, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 14:
            {
              *Stmts_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *STATE_VARIABLE_Info_61 = STATE_VARIABLE_Info_0_60;
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
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_det_deconstruct\'/8", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 11:
          case (MR_Integer) 13:
            {
              MR_Word ArgTypes_55;
              MR_Word Fields_56;
              MR_Word OffSet_58;
              MR_Integer ArgNum_59;
              MR_Word VarLval_91;
              MR_Integer Var_57;

              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_60, Var_9, &VarLval_91);
              ml_backend__ml_code_util__ml_variable_types_3_p_0(STATE_VARIABLE_Info_0_60, Args_11, &ArgTypes_55);
              ml_backend__ml_unify_gen__ml_field_names_and_types_5_p_0(STATE_VARIABLE_Info_0_60, Type_16, ConsId_10, ArgTypes_55, &Fields_56);
              ml_backend__ml_unify_gen__ml_tag_offset_and_argnum_4_p_0(Tag_17, &Var_57, &OffSet_58, &ArgNum_59);
              ml_backend__ml_unify_gen__ml_gen_unify_args_14_p_0(ConsId_10, Args_11, Modes_12, ArgTypes_55, Fields_56, Type_16, VarLval_91, OffSet_58, ArgNum_59, Tag_17, Context_13, Stmts_14, STATE_VARIABLE_Info_0_60, STATE_VARIABLE_Info_61);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer Ptag_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_17, (MR_Integer) 1)));
              MR_Word Arg_79;
              MR_Word Mode_80;
              MR_Word Var_63;
              MR_Word Var_64;

              succeeded = ((MR_tag((MR_Word) Args_11)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Arg_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_11, (MR_Integer) 0)));
                Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_11, (MR_Integer) 1)));
                succeeded = (Var_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Modes_12)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Mode_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_12, (MR_Integer) 0)));
                    Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_12, (MR_Integer) 1)));
                    succeeded = (Var_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              }
              if (succeeded)
              {
                MR_Word ArgType_75;
                MR_Word ArgLval_76;
                MR_Word VarLval_77;
                MR_Word ModuleInfo_78;

                ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_60, Arg_79, &ArgType_75);
                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_60, Arg_79, &ArgLval_76);
                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_60, Var_9, &VarLval_77);
                ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_60, &ModuleInfo_78);
                ml_backend__ml_unify_gen__ml_gen_direct_arg_deconstruct_9_p_0(ModuleInfo_78, Mode_80, Ptag_51, ArgLval_76, ArgType_75, VarLval_77, Type_16, Context_13, Stmts_14);
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_det_deconstruct\'/8", (MR_String) "direct_arg_tag: arity != 1");
                  return;
                }
              }
              *STATE_VARIABLE_Info_61 = STATE_VARIABLE_Info_0_60;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_direct_arg_deconstruct_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ArgMode_11,
  MR_Integer Ptag_12,
  MR_Word ArgLval_13,
  MR_Word ArgType_14,
  MR_Word VarLval_15,
  MR_Word VarType_16,
  MR_Word Context_17,
  MR_Word * Stmts_18)
{
  {
    MR_bool succeeded;
    MR_Word LeftFromToInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgMode_11, (MR_Integer) 0)));
    MR_Word RightFromToInsts_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgMode_11, (MR_Integer) 1)));
    MR_Word LeftTopFunctorMode_21;
    MR_Word RightTopFunctorMode_22;
    MR_Word Var_28;

    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_10, LeftFromToInsts_19, ArgType_14, &LeftTopFunctorMode_21);
    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_10, RightFromToInsts_20, ArgType_14, &RightTopFunctorMode_22);
    Var_28 = check_hlds__type_util__is_either_type_a_dummy_3_f_0(ModuleInfo_10, ArgType_14, VarType_16);
    succeeded = (Var_28 == (MR_Integer) 0);
    if (succeeded)
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_direct_arg_deconstruct\'/9", (MR_String) "dummy unify");
        return;
      }
    }
    else
    {
    }
    switch (LeftTopFunctorMode_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (RightTopFunctorMode_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_direct_arg_deconstruct\'/9", (MR_String) "test in arg of [de]construction");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word VarRval_23;
              MR_Word MLDS_Type_24;
              MR_Word CastRval_25;
              MR_Word Stmt_26;
              MR_Word Var_43;
              MR_Word Var_44;
              MR_Word Var_45;
              MR_Word Var_47;
              MR_Word Var_48;

              {
                Var_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_43, 0) = ((MR_Box) (VarLval_15));
              }
              ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, VarType_16, ArgType_14, (MR_Integer) 0, Var_43, &VarRval_23);
              MLDS_Type_24 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_10, ArgType_14);
              {
                Var_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_44, 0) = ((MR_Box) (MLDS_Type_24));
              }
              {
                Var_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_48, 0) = ((MR_Box) (Ptag_12));
              }
              {
                Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (Var_48));
              }
              {
                Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                MR_hl_field(MR_mktag(3), Var_45, 2) = ((MR_Box) (VarRval_23));
                MR_hl_field(MR_mktag(3), Var_45, 3) = ((MR_Box) (Var_47));
              }
              {
                CastRval_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CastRval_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), CastRval_25, 1) = ((MR_Box) (Var_44));
                MR_hl_field(MR_mktag(3), CastRval_25, 2) = ((MR_Box) (Var_45));
              }
              Stmt_26 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_13, CastRval_25, Context_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_26));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_direct_arg_deconstruct\'/9", (MR_String) "some strange unify");
                return;
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
              MR_Word ArgRval_27;
              MR_Word Var_36;
              MR_Word Var_37;
              MR_Word Var_38;
              MR_Word MLDS_Type_52;
              MR_Word CastRval_53;
              MR_Word Stmt_54;

              {
                Var_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_36, 0) = ((MR_Box) (ArgLval_13));
              }
              ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, ArgType_14, VarType_16, (MR_Integer) 0, Var_36, &ArgRval_27);
              MLDS_Type_52 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_10, VarType_16);
              {
                Var_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_37, 0) = ((MR_Box) (MLDS_Type_52));
              }
              {
                Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (Ptag_12));
                MR_hl_field(MR_mktag(3), Var_38, 2) = ((MR_Box) (ArgRval_27));
              }
              {
                CastRval_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CastRval_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), CastRval_53, 1) = ((MR_Box) (Var_37));
                MR_hl_field(MR_mktag(3), CastRval_53, 2) = ((MR_Box) (Var_38));
              }
              Stmt_54 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_15, CastRval_53, Context_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_54));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_direct_arg_deconstruct\'/9", (MR_String) "some strange unify");
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
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_direct_arg_deconstruct\'/9", (MR_String) "some strange unify");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            *Stmts_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unify_args_14_p_0(
  MR_Word ConsId_15,
  MR_Word Args_16,
  MR_Word Modes_17,
  MR_Word ArgTypes_18,
  MR_Word CtorArgRepns_19,
  MR_Word VarType_20,
  MR_Word VarLval_21,
  MR_Word Offset_22,
  MR_Integer ArgNum_23,
  MR_Word Tag_24,
  MR_Word Context_25,
  MR_Word * Stmts_26,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30)
{
  {
    MR_bool succeeded;
    MR_Word Stmts0_28;
    MR_Word STATE_VARIABLE_Info_32_32;

    succeeded = ml_backend__ml_unify_gen__ml_gen_unify_args_loop_15_p_0(ConsId_15, Args_16, Modes_17, ArgTypes_18, CtorArgRepns_19, VarType_20, VarLval_21, Offset_22, ArgNum_23, Tag_24, Context_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Stmts0_28, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_32_32);
    if (succeeded)
    {
      *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_32_32;
      *Stmts_26 = Stmts0_28;
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unify_args\'/14", (MR_String) "length mismatch");
        return;
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unify_args_loop_15_p_0(
  MR_Word ConsId_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word VarType_6,
  MR_Word VarLval_7,
  MR_Word Offset_8,
  MR_Integer ArgNum_9,
  MR_Word Tag_10,
  MR_Word Context_11,
  MR_Word STATE_VARIABLE_Stmts_0_12,
  MR_Word * STATE_VARIABLE_Stmts_13,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
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
          *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
          *STATE_VARIABLE_Stmts_13 = STATE_VARIABLE_Stmts_0_12;
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      MR_Word Arg_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Args_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Mode_33;
      MR_Word Modes_34;
      MR_Word ArgType_35;
      MR_Word ArgTypes_36;
      MR_Word CtorArgRepn_37;
      MR_Word CtorArgRepns_38;
      MR_Word Offset1_47;
      MR_Integer ArgNum1_48;
      MR_Integer Var_53;
      MR_Word STATE_VARIABLE_Stmts_54_54;
      MR_Word STATE_VARIABLE_Info_55_55;

      succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Mode_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        Modes_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          ArgType_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
          ArgTypes_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) HeadVar__5_5)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            CtorArgRepn_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0)));
            CtorArgRepns_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1)));
            ml_backend__ml_unify_gen__ml_next_field_offset_4_p_0(CtorArgRepn_37, CtorArgRepns_38, Offset_8, &Offset1_47);
            Var_53 = (MR_Integer) 1;
            ArgNum1_48 = (ArgNum_9 + Var_53);
            succeeded = ml_backend__ml_unify_gen__ml_gen_unify_args_loop_15_p_0(ConsId_1, Args_32, Modes_34, ArgTypes_36, CtorArgRepns_38, VarType_6, VarLval_7, Offset1_47, ArgNum1_48, Tag_10, Context_11, STATE_VARIABLE_Stmts_0_12, &STATE_VARIABLE_Stmts_54_54, STATE_VARIABLE_Info_0_14, &STATE_VARIABLE_Info_55_55);
            if (succeeded)
            {
              ml_backend__ml_unify_gen__ml_gen_unify_arg_15_p_0(ConsId_1, Arg_31, Mode_33, ArgType_35, CtorArgRepn_37, VarType_6, VarLval_7, Offset_8, ArgNum_9, Tag_10, Context_11, STATE_VARIABLE_Stmts_54_54, STATE_VARIABLE_Stmts_13, STATE_VARIABLE_Info_55_55, STATE_VARIABLE_Info_15);
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
ml_backend__ml_unify_gen__ml_gen_construct_10_p_0(
  MR_Word Var_11,
  MR_Word ConsId_12,
  MR_Word Args_13,
  MR_Word ArgModes_14,
  MR_Word TakeAddr_15,
  MR_Word HowToConstruct_16,
  MR_Word Context_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_76,
  MR_Word * STATE_VARIABLE_Info_77)
{
  {
    MR_bool succeeded;
    MR_Word Type_20;
    MR_Word Tag_21;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_76, Var_11, &Type_20);
    ml_backend__ml_unify_gen__ml_cons_id_to_tag_3_p_0(STATE_VARIABLE_Info_0_76, ConsId_12, &Tag_21);
    switch (MR_tag((MR_Word) Tag_21)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Tag_21)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word UsesBaseClass_136;

              UsesBaseClass_136 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(Tag_21);
              ml_backend__ml_unify_gen__ml_gen_compound_13_p_0(ConsId_12, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), UsesBaseClass_136, Var_11, Args_13, ArgModes_14, TakeAddr_15, HowToConstruct_16, Context_17, Stmts_18, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgVar_23;
              MR_Word ArgMode_24;
              MR_Word Var_87;
              MR_Word Var_88;

              succeeded = ((MR_tag((MR_Word) Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                ArgVar_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0)));
                Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1)));
                succeeded = (Var_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) ArgModes_14)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgMode_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgModes_14, (MR_Integer) 0)));
                    Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgModes_14, (MR_Integer) 1)));
                    succeeded = (Var_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              }
              if (succeeded)
              {
                MR_Word VarLval_25;
                MR_Word ModuleInfo_26;
                MR_Word MLDS_Type_27;
                MR_Word ArgGroundTerm_28;

                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_76, Var_11, &VarLval_25);
                ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_76, &ModuleInfo_26);
                MLDS_Type_27 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_26, Type_20);
                succeeded = ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(STATE_VARIABLE_Info_0_76, ArgVar_23, &ArgGroundTerm_28);
                if (succeeded)
                {
                  MR_Word ArgRval_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_28, (MR_Integer) 0)));
                  MR_Word MLDS_ArgType_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_28, (MR_Integer) 2)));
                  MR_Word GlobalData0_32;
                  MR_Word Rval0_33;
                  MR_Word GlobalData_34;
                  MR_Word Rval_35;
                  MR_Word GroundTerm_36;
                  MR_Word Stmt_37;
                  MR_Word STATE_VARIABLE_Info_90_90;
                  MR_Word _ArgType_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_28, (MR_Integer) 1)));

                  ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_76, &GlobalData0_32);
                  ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_26, Context_17, MLDS_ArgType_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ArgRval_29, &Rval0_33, GlobalData0_32, &GlobalData_34);
                  ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_34, STATE_VARIABLE_Info_0_76, &STATE_VARIABLE_Info_90_90);
                  Rval_35 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(MLDS_Type_27, Tag_21, Rval0_33);
                  {
                    GroundTerm_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), GroundTerm_36, 0) = ((MR_Box) (Rval_35));
                    MR_hl_field(MR_mktag(0), GroundTerm_36, 1) = ((MR_Box) (Type_20));
                    MR_hl_field(MR_mktag(0), GroundTerm_36, 2) = ((MR_Box) (MLDS_Type_27));
                  }
                  ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_11, GroundTerm_36, STATE_VARIABLE_Info_90_90, STATE_VARIABLE_Info_77);
                  Stmt_37 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_25, Rval_35, Context_17);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *Stmts_18 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_37));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
                else
                {
                  MR_Word ArgLval_38;
                  MR_Word ArgType_39;

                  ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_76, ArgVar_23, &ArgLval_38);
                  ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_76, ArgVar_23, &ArgType_39);
                  if ((Tag_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
                  {
                    MR_Word ArgRval_99;
                    MR_Word Rval_100;
                    MR_Word Stmt_101;

                    {
                      ArgRval_99 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ArgRval_99, 0) = ((MR_Box) (ArgLval_38));
                    }
                    ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_26, ArgType_39, Type_20, (MR_Integer) 0, ArgRval_99, &Rval_100);
                    Stmt_101 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_25, Rval_100, Context_17);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *Stmts_18 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_101));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  else
                  {
                    MR_Integer Ptag_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 1)));
                    MR_Word VarType_41;

                    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_76, Var_11, &VarType_41);
                    ml_backend__ml_unify_gen__ml_gen_direct_arg_construct_9_p_0(ModuleInfo_26, ArgMode_24, Ptag_40, ArgLval_38, ArgType_39, VarLval_25, VarType_41, Context_17, Stmts_18);
                  }
                  *STATE_VARIABLE_Info_77 = STATE_VARIABLE_Info_0_76;
                }
              }
              else
              if ((Tag_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct\'/10", (MR_String) "no_tag: arity != 1");
                  return;
                }
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct\'/10", (MR_String) "direct_arg_tag: arity != 1");
                  return;
                }
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        if ((Args_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word STATE_VARIABLE_Info_80_80;
          MR_Word VarLval_115;
          MR_Word ModuleInfo_116;
          MR_Word MLDS_Type_117;
          MR_Word Rval_118;
          MR_Word GroundTerm_119;
          MR_Word Stmt_120;

          ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_76, Var_11, &VarLval_115);
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_76, &ModuleInfo_116);
          MLDS_Type_117 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_116, Type_20);
          ml_backend__ml_unify_gen__ml_gen_constant_6_p_0(Tag_21, Type_20, MLDS_Type_117, &Rval_118, STATE_VARIABLE_Info_0_76, &STATE_VARIABLE_Info_80_80);
          {
            GroundTerm_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), GroundTerm_119, 0) = ((MR_Box) (Rval_118));
            MR_hl_field(MR_mktag(0), GroundTerm_119, 1) = ((MR_Box) (Type_20));
            MR_hl_field(MR_mktag(0), GroundTerm_119, 2) = ((MR_Box) (MLDS_Type_117));
          }
          ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_11, GroundTerm_119, STATE_VARIABLE_Info_80_80, STATE_VARIABLE_Info_77);
          Stmt_120 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_115, Rval_118, Context_17);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Stmts_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_120));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct\'/10", (MR_String) "bad constant term");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 14:
            if ((Args_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word STATE_VARIABLE_Info_80_80;
              MR_Word VarLval_115;
              MR_Word ModuleInfo_116;
              MR_Word MLDS_Type_117;
              MR_Word Rval_118;
              MR_Word GroundTerm_119;
              MR_Word Stmt_120;

              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_76, Var_11, &VarLval_115);
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_76, &ModuleInfo_116);
              MLDS_Type_117 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_116, Type_20);
              ml_backend__ml_unify_gen__ml_gen_constant_6_p_0(Tag_21, Type_20, MLDS_Type_117, &Rval_118, STATE_VARIABLE_Info_0_76, &STATE_VARIABLE_Info_80_80);
              {
                GroundTerm_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_119, 0) = ((MR_Box) (Rval_118));
                MR_hl_field(MR_mktag(0), GroundTerm_119, 1) = ((MR_Box) (Type_20));
                MR_hl_field(MR_mktag(0), GroundTerm_119, 2) = ((MR_Box) (MLDS_Type_117));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_11, GroundTerm_119, STATE_VARIABLE_Info_80_80, STATE_VARIABLE_Info_77);
              Stmt_120 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_115, Rval_118, Context_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_120));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            else
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct\'/10", (MR_String) "bad constant term");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word PredId_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 1)));
              MR_Integer ProcId_47 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 2)));

              ml_backend__ml_closure_gen__ml_gen_closure_10_p_0(PredId_46, ProcId_47, Var_11, Args_13, ArgModes_14, HowToConstruct_16, Context_17, Stmts_18, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer ConstNum_140 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 1)));
              MR_Word ConstStructMap_141;
              MR_Word GroundTerm0_142;
              MR_Word VarLval_146;
              MR_Word ModuleInfo_147;
              MR_Word MLDS_Type_148;
              MR_Word Rval_149;
              MR_Word GroundTerm_150;
              MR_Word Stmt_151;
              MR_Box conv1_GroundTerm0_142;
              MR_Word _Type_138;
              MR_Word _MLDS_Type_139;

              ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_76, &ConstStructMap_141);
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ConstStructMap_141, ConstNum_140, &conv1_GroundTerm0_142);
              GroundTerm0_142 = ((MR_Word) conv1_GroundTerm0_142);
              Rval_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm0_142, (MR_Integer) 0)));
              _Type_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm0_142, (MR_Integer) 1)));
              _MLDS_Type_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm0_142, (MR_Integer) 2)));
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_76, Var_11, &VarLval_146);
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_76, &ModuleInfo_147);
              MLDS_Type_148 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_147, Type_20);
              {
                GroundTerm_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_150, 0) = ((MR_Box) (Rval_149));
                MR_hl_field(MR_mktag(0), GroundTerm_150, 1) = ((MR_Box) (Type_20));
                MR_hl_field(MR_mktag(0), GroundTerm_150, 2) = ((MR_Box) (MLDS_Type_148));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_11, GroundTerm_150, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77);
              Stmt_151 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_146, Rval_149, Context_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_151));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Integer ConstNum_156 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 1)));
              MR_Word ConstStructMap_157;
              MR_Word GroundTerm0_158;
              MR_Word VarLval_162;
              MR_Word ModuleInfo_163;
              MR_Word MLDS_Type_164;
              MR_Word Rval_165;
              MR_Word GroundTerm_166;
              MR_Word Stmt_167;
              MR_Box conv2_GroundTerm0_158;
              MR_Word _Type_154;
              MR_Word _MLDS_Type_155;

              ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_76, &ConstStructMap_157);
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ConstStructMap_157, ConstNum_156, &conv2_GroundTerm0_158);
              GroundTerm0_158 = ((MR_Word) conv2_GroundTerm0_158);
              Rval_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm0_158, (MR_Integer) 0)));
              _Type_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm0_158, (MR_Integer) 1)));
              _MLDS_Type_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm0_158, (MR_Integer) 2)));
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_76, Var_11, &VarLval_162);
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_76, &ModuleInfo_163);
              MLDS_Type_164 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_163, Type_20);
              {
                GroundTerm_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_166, 0) = ((MR_Box) (Rval_165));
                MR_hl_field(MR_mktag(0), GroundTerm_166, 1) = ((MR_Box) (Type_20));
                MR_hl_field(MR_mktag(0), GroundTerm_166, 2) = ((MR_Box) (MLDS_Type_164));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_11, GroundTerm_166, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77);
              Stmt_167 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_162, Rval_165, Context_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_167));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Integer ConstNum_49 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 1)));
              MR_Word ConstStructMap_51;
              MR_Word GroundTerm0_52;
              MR_Word VarLval_109;
              MR_Word ModuleInfo_110;
              MR_Word MLDS_Type_111;
              MR_Word Rval_112;
              MR_Word GroundTerm_113;
              MR_Word Stmt_114;
              MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 2)));
              MR_Box conv0_GroundTerm0_52;
              MR_Word _Type_53;
              MR_Word _MLDS_Type_54;

              ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_76, &ConstStructMap_51);
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ConstStructMap_51, ConstNum_49, &conv0_GroundTerm0_52);
              GroundTerm0_52 = ((MR_Word) conv0_GroundTerm0_52);
              Rval_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm0_52, (MR_Integer) 0)));
              _Type_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm0_52, (MR_Integer) 1)));
              _MLDS_Type_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm0_52, (MR_Integer) 2)));
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_76, Var_11, &VarLval_109);
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_76, &ModuleInfo_110);
              MLDS_Type_111 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_110, Type_20);
              {
                GroundTerm_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_113, 0) = ((MR_Box) (Rval_112));
                MR_hl_field(MR_mktag(0), GroundTerm_113, 1) = ((MR_Box) (Type_20));
                MR_hl_field(MR_mktag(0), GroundTerm_113, 2) = ((MR_Box) (MLDS_Type_111));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_11, GroundTerm_113, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77);
              Stmt_114 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_109, Rval_112, Context_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_114));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word UsesBaseClass_171;
              MR_Integer Ptag_172 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 1)));

              UsesBaseClass_171 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(Tag_21);
              ml_backend__ml_unify_gen__ml_gen_compound_13_p_0(ConsId_12, Ptag_172, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), UsesBaseClass_171, Var_11, Args_13, ArgModes_14, TakeAddr_15, HowToConstruct_16, Context_17, Stmts_18, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word ArgVar_23;
              MR_Word ArgMode_24;
              MR_Word Var_87;
              MR_Word Var_88;

              succeeded = ((MR_tag((MR_Word) Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                ArgVar_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0)));
                Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1)));
                succeeded = (Var_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) ArgModes_14)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgMode_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgModes_14, (MR_Integer) 0)));
                    Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgModes_14, (MR_Integer) 1)));
                    succeeded = (Var_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              }
              if (succeeded)
              {
                MR_Word VarLval_25;
                MR_Word ModuleInfo_26;
                MR_Word MLDS_Type_27;
                MR_Word ArgGroundTerm_28;

                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_76, Var_11, &VarLval_25);
                ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_76, &ModuleInfo_26);
                MLDS_Type_27 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_26, Type_20);
                succeeded = ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(STATE_VARIABLE_Info_0_76, ArgVar_23, &ArgGroundTerm_28);
                if (succeeded)
                {
                  MR_Word ArgRval_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_28, (MR_Integer) 0)));
                  MR_Word MLDS_ArgType_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_28, (MR_Integer) 2)));
                  MR_Word GlobalData0_32;
                  MR_Word Rval0_33;
                  MR_Word GlobalData_34;
                  MR_Word Rval_35;
                  MR_Word GroundTerm_36;
                  MR_Word Stmt_37;
                  MR_Word STATE_VARIABLE_Info_90_90;
                  MR_Word _ArgType_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_28, (MR_Integer) 1)));

                  ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_76, &GlobalData0_32);
                  ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_26, Context_17, MLDS_ArgType_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ArgRval_29, &Rval0_33, GlobalData0_32, &GlobalData_34);
                  ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_34, STATE_VARIABLE_Info_0_76, &STATE_VARIABLE_Info_90_90);
                  Rval_35 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(MLDS_Type_27, Tag_21, Rval0_33);
                  {
                    GroundTerm_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), GroundTerm_36, 0) = ((MR_Box) (Rval_35));
                    MR_hl_field(MR_mktag(0), GroundTerm_36, 1) = ((MR_Box) (Type_20));
                    MR_hl_field(MR_mktag(0), GroundTerm_36, 2) = ((MR_Box) (MLDS_Type_27));
                  }
                  ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_11, GroundTerm_36, STATE_VARIABLE_Info_90_90, STATE_VARIABLE_Info_77);
                  Stmt_37 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_25, Rval_35, Context_17);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *Stmts_18 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_37));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
                else
                {
                  MR_Word ArgLval_38;
                  MR_Word ArgType_39;

                  ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_76, ArgVar_23, &ArgLval_38);
                  ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_76, ArgVar_23, &ArgType_39);
                  if ((Tag_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
                  {
                    MR_Word ArgRval_99;
                    MR_Word Rval_100;
                    MR_Word Stmt_101;

                    {
                      ArgRval_99 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ArgRval_99, 0) = ((MR_Box) (ArgLval_38));
                    }
                    ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_26, ArgType_39, Type_20, (MR_Integer) 0, ArgRval_99, &Rval_100);
                    Stmt_101 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_25, Rval_100, Context_17);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *Stmts_18 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_101));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  else
                  {
                    MR_Integer Ptag_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 1)));
                    MR_Word VarType_41;

                    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_76, Var_11, &VarType_41);
                    ml_backend__ml_unify_gen__ml_gen_direct_arg_construct_9_p_0(ModuleInfo_26, ArgMode_24, Ptag_40, ArgLval_38, ArgType_39, VarLval_25, VarType_41, Context_17, Stmts_18);
                  }
                  *STATE_VARIABLE_Info_77 = STATE_VARIABLE_Info_0_76;
                }
              }
              else
              if ((Tag_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct\'/10", (MR_String) "no_tag: arity != 1");
                  return;
                }
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct\'/10", (MR_String) "direct_arg_tag: arity != 1");
                  return;
                }
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word MaybeStag_43;
              MR_Integer Stag_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 2)));
              MR_Word UsesBaseClass_45;
              MR_Integer Ptag_108 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 1)));

              {
                MaybeStag_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeStag_43, 0) = ((MR_Box) (Stag_44));
              }
              UsesBaseClass_45 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(Tag_21);
              ml_backend__ml_unify_gen__ml_gen_compound_13_p_0(ConsId_12, Ptag_108, MaybeStag_43, UsesBaseClass_45, Var_11, Args_13, ArgModes_14, TakeAddr_15, HowToConstruct_16, Context_17, Stmts_18, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77);
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_direct_arg_construct_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ArgMode_11,
  MR_Integer Ptag_12,
  MR_Word ArgLval_13,
  MR_Word ArgType_14,
  MR_Word VarLval_15,
  MR_Word VarType_16,
  MR_Word Context_17,
  MR_Word * Stmts_18)
{
  {
    MR_bool succeeded;
    MR_Word LeftFromToInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgMode_11, (MR_Integer) 0)));
    MR_Word RightFromToInsts_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgMode_11, (MR_Integer) 1)));
    MR_Word LeftTopFunctorMode_21;
    MR_Word RightTopFunctorMode_22;
    MR_Word Var_28;

    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_10, LeftFromToInsts_19, ArgType_14, &LeftTopFunctorMode_21);
    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_10, RightFromToInsts_20, ArgType_14, &RightTopFunctorMode_22);
    Var_28 = check_hlds__type_util__is_either_type_a_dummy_3_f_0(ModuleInfo_10, ArgType_14, VarType_16);
    succeeded = (Var_28 == (MR_Integer) 0);
    if (succeeded)
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_direct_arg_construct\'/9", (MR_String) "dummy unify");
        return;
      }
    }
    else
    {
    }
    switch (LeftTopFunctorMode_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (RightTopFunctorMode_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_direct_arg_construct\'/9", (MR_String) "test in arg of [de]construction");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_direct_arg_construct\'/9", (MR_String) "left-to-right data flow in construction");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_direct_arg_construct\'/9", (MR_String) "some strange unify");
                return;
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
              MR_Word ArgRval_23;
              MR_Word MLDS_Type_24;
              MR_Word CastRval_25;
              MR_Word Stmt_26;
              MR_Word Var_42;
              MR_Word Var_43;
              MR_Word Var_44;

              {
                Var_42 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_42, 0) = ((MR_Box) (ArgLval_13));
              }
              ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, ArgType_14, VarType_16, (MR_Integer) 0, Var_42, &ArgRval_23);
              MLDS_Type_24 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_10, VarType_16);
              {
                Var_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_43, 0) = ((MR_Box) (MLDS_Type_24));
              }
              {
                Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (Ptag_12));
                MR_hl_field(MR_mktag(3), Var_44, 2) = ((MR_Box) (ArgRval_23));
              }
              {
                CastRval_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CastRval_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), CastRval_25, 1) = ((MR_Box) (Var_43));
                MR_hl_field(MR_mktag(3), CastRval_25, 2) = ((MR_Box) (Var_44));
              }
              Stmt_26 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_15, CastRval_25, Context_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_26));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_direct_arg_construct\'/9", (MR_String) "some strange unify");
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
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_direct_arg_construct\'/9", (MR_String) "some strange unify");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word MLDS_ArgType_27;
              MR_Word Var_34;
              MR_Word Var_35;
              MR_Word Var_36;
              MR_Word Var_37;
              MR_Word ArgRval_52;
              MR_Word MLDS_Type_53;
              MR_Word CastRval_54;
              MR_Word Stmt_55;

              MLDS_ArgType_27 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_10, ArgType_14);
              {
                Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
                MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (MLDS_ArgType_27));
              }
              {
                Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (Var_35));
              }
              ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, ArgType_14, VarType_16, (MR_Integer) 0, Var_34, &ArgRval_52);
              MLDS_Type_53 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_10, VarType_16);
              {
                Var_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_36, 0) = ((MR_Box) (MLDS_Type_53));
              }
              {
                Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (Ptag_12));
                MR_hl_field(MR_mktag(3), Var_37, 2) = ((MR_Box) (ArgRval_52));
              }
              {
                CastRval_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CastRval_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), CastRval_54, 1) = ((MR_Box) (Var_36));
                MR_hl_field(MR_mktag(3), CastRval_54, 2) = ((MR_Box) (Var_37));
              }
              Stmt_55 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_15, CastRval_54, Context_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_55));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(
  MR_Word Type_5,
  MR_Word Tag_6,
  MR_Word Rval_7)
{
  {
    MR_Word CastRval_8;
    MR_Word TagRval_9;
    MR_Word Var_11;

    if ((Tag_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
      TagRval_9 = Rval_7;
    else
    {
      MR_Integer Ptag_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_6, (MR_Integer) 1)));

      {
        TagRval_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), TagRval_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), TagRval_9, 1) = ((MR_Box) (Ptag_10));
        MR_hl_field(MR_mktag(3), TagRval_9, 2) = ((MR_Box) (Rval_7));
      }
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_11, 0) = ((MR_Box) (Type_5));
    }
    {
      CastRval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CastRval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), CastRval_8, 1) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(3), CastRval_8, 2) = ((MR_Box) (TagRval_9));
    }
    return CastRval_8;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_compound_13_p_0(
  MR_Word ConsId_14,
  MR_Integer Ptag_15,
  MR_Word MaybeStag_16,
  MR_Word UsesBaseClass_17,
  MR_Word Var_18,
  MR_Word ArgVars_19,
  MR_Word ArgModes_20,
  MR_Word TakeAddr_21,
  MR_Word HowToConstruct_22,
  MR_Word Context_23,
  MR_Word * Stmts_24,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38)
{
  {
    MR_bool succeeded;
    MR_Word CompilationTarget_26;
    MR_Word MaybeCtorName_27;
    MR_Word ExplicitSecTag_31;
    MR_Word ExtraRvalsTypesWidths_36;
    MR_Word Var_44;

    ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_37, &CompilationTarget_26);
    switch (UsesBaseClass_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word CtorName_28;
          MR_Word ConsId_55;
          MR_Word ModuleName_56;
          MR_Word ConsSymName_49;
          MR_Integer ConsArity_50;
          MR_Word TypeCtor_51;
          MR_Word SymModuleName_52;
          MR_String Var_53;

          succeeded = ((((MR_tag((MR_Word) ConsId_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_14, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            ConsSymName_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_14, (MR_Integer) 1)));
            ConsArity_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_14, (MR_Integer) 2)));
            TypeCtor_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_14, (MR_Integer) 3)));
            succeeded = ((MR_tag((MR_Word) ConsSymName_49)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              SymModuleName_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConsSymName_49, (MR_Integer) 0)));
              Var_53 = ((MR_String) (MR_hl_field(MR_mktag(1), ConsSymName_49, (MR_Integer) 1)));
            }
          }
          if (succeeded)
          {
            MR_String ConsName_54;

            ConsName_54 = ml_backend__ml_type_gen__ml_gen_du_ctor_name_4_f_0(CompilationTarget_26, TypeCtor_51, ConsSymName_49, ConsArity_50);
            {
              ConsId_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ConsId_55, 0) = ((MR_Box) (ConsName_54));
              MR_hl_field(MR_mktag(0), ConsId_55, 1) = ((MR_Box) (ConsArity_50));
            }
            ModuleName_56 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(SymModuleName_52);
          }
          else
          {
            MR_String ConsName_61;

            ConsName_61 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ConsId_14);
            {
              ConsId_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ConsId_55, 0) = ((MR_Box) (ConsName_61));
              MR_hl_field(MR_mktag(0), ConsId_55, 1) = ((MR_Box) ((MR_Integer) 0));
            }
            ModuleName_56 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_3[7]);
          }
          {
            CtorName_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CtorName_28, 0) = ((MR_Box) (ModuleName_56));
            MR_hl_field(MR_mktag(0), CtorName_28, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), CtorName_28, 2) = ((MR_Box) (ConsId_55));
          }
          {
            MaybeCtorName_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeCtorName_27, 0) = ((MR_Box) (CtorName_28));
          }
        }
        break;
      case (MR_Integer) 1:
        MaybeCtorName_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
    }
    if ((MaybeStag_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      ExplicitSecTag_31 = (MR_Integer) 0;
      ExtraRvalsTypesWidths_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Integer Stag_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybeStag_16, (MR_Integer) 0)));
      MR_Word UsesConstructors_30;

      UsesConstructors_30 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(CompilationTarget_26);
      switch (UsesConstructors_30) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word StagRval0_32;
            MR_Word StagRval_34;
            MR_Word Var_39;
            MR_Word Var_41;

            ExplicitSecTag_31 = (MR_Integer) 1;
            {
              Var_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_39, 0) = ((MR_Box) (Stag_29));
            }
            {
              StagRval0_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), StagRval0_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), StagRval0_32, 1) = ((MR_Box) (Var_39));
            }
            {
              StagRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), StagRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), StagRval_34, 1) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[5]));
              MR_hl_field(MR_mktag(3), StagRval_34, 2) = ((MR_Box) (StagRval0_32));
            }
            {
              Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (StagRval_34));
              MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
              MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              ExtraRvalsTypesWidths_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ExtraRvalsTypesWidths_36, 0) = ((MR_Box) (Var_41));
              MR_hl_field(MR_mktag(1), ExtraRvalsTypesWidths_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            ExplicitSecTag_31 = (MR_Integer) 0;
            ExtraRvalsTypesWidths_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
          break;
      }
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (ConsId_14));
    }
    ml_backend__ml_unify_gen__ml_gen_new_object_14_p_0(Var_44, MaybeCtorName_27, Ptag_15, ExplicitSecTag_31, Var_18, ExtraRvalsTypesWidths_36, ArgVars_19, ArgModes_20, TakeAddr_21, HowToConstruct_22, Context_23, Stmts_24, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_14_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object__550__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_14_p_0(
  MR_Word MaybeConsId_15,
  MR_Word MaybeCtorName_16,
  MR_Integer Ptag_17,
  MR_Word ExplicitSecTag_18,
  MR_Word Var_19,
  MR_Word ExtraRvalsTypesWidths_20,
  MR_Word ArgVars_21,
  MR_Word ArgModes_22,
  MR_Word TakeAddr_23,
  MR_Word HowToConstruct_24,
  MR_Word Context_25,
  MR_Word * Stmts_26,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34)
{
  {
    MR_bool succeeded;
    MR_Word VarType_28;
    MR_Word MLDS_Type_29;
    MR_Word VarLval_30;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_33, Var_19, &VarType_28);
    ml_backend__ml_code_util__ml_gen_type_3_p_0(STATE_VARIABLE_Info_0_33, VarType_28, &MLDS_Type_29);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_33, Var_19, &VarLval_30);
    switch (MR_tag((MR_Word) HowToConstruct_24)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HowToConstruct_24)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_38;

              {
                Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[11]));
                MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_14_p_0_1));
                MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (TakeAddr_23));
                MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_38, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_new_object\'/14", (MR_String) "cannot take address of static object\'s field");
              ml_backend__ml_unify_gen__ml_gen_new_object_statically_13_p_0(MaybeConsId_15, MaybeCtorName_16, Ptag_17, Var_19, VarLval_30, VarType_28, MLDS_Type_29, ExtraRvalsTypesWidths_20, ArgVars_21, Context_25, Stmts_26, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34);
            }
            break;
          case (MR_Integer) 1:
            ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_101_119_95_111_98_106_101_99_116_95_100_121_110_97_109_105_99_97_108_108_121_95_95_91_53_93_95_48_16_p_0(MaybeConsId_15, MaybeCtorName_16, Ptag_17, ExplicitSecTag_18, VarLval_30, VarType_28, MLDS_Type_29, ExtraRvalsTypesWidths_20, ArgVars_21, ArgModes_22, TakeAddr_23, Context_25, Stmts_26, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34);
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CellToReuse_31 = (MR_Word) MR_body(((MR_Word) HowToConstruct_24), (MR_Integer) 1);

          ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_17_p_0(MaybeConsId_15, MaybeCtorName_16, Ptag_17, ExplicitSecTag_18, Var_19, VarLval_30, VarType_28, MLDS_Type_29, ExtraRvalsTypesWidths_20, ArgVars_21, ArgModes_22, TakeAddr_23, CellToReuse_31, Context_25, Stmts_26, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34);
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_new_object\'/14", (MR_String) "construct_in_region NYI");
            return;
          }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_17_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__743__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_LambdaHeadVar__2_79;

    ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__725__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_LambdaHeadVar__2_79);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_79));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_17_p_0(
  MR_Word MaybeConsId_18,
  MR_Word MaybeCtorName_19,
  MR_Integer Ptag_20,
  MR_Word ExplicitSecTag_21,
  MR_Word Var_22,
  MR_Word VarLval_23,
  MR_Word VarType_24,
  MR_Word MLDS_Type_25,
  MR_Word ExtraRvalsTypesWidths_26,
  MR_Word ArgVars_27,
  MR_Word ArgModes_28,
  MR_Word TakeAddr_29,
  MR_Word CellToReuse_30,
  MR_Word Context_31,
  MR_Word * Stmts_32,
  MR_Word STATE_VARIABLE_Info_0_73,
  MR_Word * STATE_VARIABLE_Info_74)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_112_112;
    MR_Word TypeCtorInfo_113_113;
    MR_Word ReuseVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), CellToReuse_30, (MR_Integer) 0)));
    MR_Word ReuseConsIds_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), CellToReuse_30, (MR_Integer) 1)));
    MR_Word ConsId_38;
    MR_Word ReusePrimaryTags0_44;
    MR_Word ReusePrimaryTags_45;
    MR_Word ConsIdTag_46;
    MR_Word ArgTypes_47;
    MR_Word Fields_48;
    MR_Integer PrimaryTag_49;
    MR_Word OffSet_50;
    MR_Integer ArgNum_51;
    MR_Word Var1Lval_52;
    MR_Word Var2Lval_53;
    MR_Word DifferentTags_55;
    MR_Word Var2Rval_56;
    MR_Word CastVar2Rval_61;
    MR_Word HeapTestStmt_62;
    MR_Word ExtraRvalStmts_63;
    MR_Word FieldStmts_64;
    MR_Word TakeAddrInfos_65;
    MR_Word MaybePtag_66;
    MR_Word TakeAddrStmts_67;
    MR_Word ThenStmts_68;
    MR_Word ThenStmt_69;
    MR_Word DynamicStmts_70;
    MR_Word ElseStmt_71;
    MR_Word IfStmt_72;
    MR_Word Var_77;
    MR_Word Var_80;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word STATE_VARIABLE_Info_95_95;
    MR_Word STATE_VARIABLE_Info_96_96;
    MR_Word Var_97;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word _NeedsUpdates_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), CellToReuse_30, (MR_Integer) 2)));

    if ((MaybeConsId_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_new_object_reuse_cell\'/17", (MR_String) "unknown cons id");
        return;
      }
    }
    else
      ConsId_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeConsId_18, (MR_Integer) 0)));
    {
      Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_17_p_0_1));
      MR_hl_field(MR_mktag(0), Var_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_77, 3) = ((MR_Box) (STATE_VARIABLE_Info_0_73));
    }
    TypeCtorInfo_112_112 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, TypeCtorInfo_112_112, Var_77, ReuseConsIds_35, &ReusePrimaryTags0_44);
    mercury__list__remove_dups_2_p_0(TypeCtorInfo_112_112, ReusePrimaryTags0_44, &ReusePrimaryTags_45);
    ml_backend__ml_unify_gen__ml_cons_id_to_tag_3_p_0(STATE_VARIABLE_Info_0_73, ConsId_38, &ConsIdTag_46);
    ml_backend__ml_code_util__ml_variable_types_3_p_0(STATE_VARIABLE_Info_0_73, ArgVars_27, &ArgTypes_47);
    ml_backend__ml_unify_gen__ml_field_names_and_types_5_p_0(STATE_VARIABLE_Info_0_73, VarType_24, ConsId_38, ArgTypes_47, &Fields_48);
    ml_backend__ml_unify_gen__ml_tag_offset_and_argnum_4_p_0(ConsIdTag_46, &PrimaryTag_49, &OffSet_50, &ArgNum_51);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_73, Var_22, &Var1Lval_52);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_73, ReuseVar_34, &Var2Lval_53);
    {
      Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[10]));
      MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_17_p_0_2));
      MR_hl_field(MR_mktag(0), Var_80, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_80, 3) = ((MR_Box) (PrimaryTag_49));
    }
    mercury__list__filter_3_p_0(TypeCtorInfo_112_112, Var_80, ReusePrimaryTags_45, &DifferentTags_55);
    if ((DifferentTags_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        Var2Rval_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var2Rval_56, 0) = ((MR_Box) (Var2Lval_53));
      }
    else
    {
      MR_Word Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), DifferentTags_55, (MR_Integer) 1)));
      MR_Integer Var_115 = ((MR_Integer) (MR_hl_field(MR_mktag(1), DifferentTags_55, (MR_Integer) 0)));

      if ((Var_114 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word Var_88;
        MR_Word Var_90;
        MR_Word Var_91;

        {
          Var_90 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_90, 0) = ((MR_Box) (Var2Lval_53));
        }
        Var_91 = ml_backend__ml_unify_gen__ml_gen_mktag_1_f_0(Var_115);
        {
          Var_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), Var_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
          MR_hl_field(MR_mktag(3), Var_88, 2) = ((MR_Box) (Var_90));
          MR_hl_field(MR_mktag(3), Var_88, 3) = ((MR_Box) (Var_91));
        }
        {
          Var2Rval_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var2Rval_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var2Rval_56, 1) = ((MR_Box) (PrimaryTag_49));
          MR_hl_field(MR_mktag(3), Var2Rval_56, 2) = ((MR_Box) (Var_88));
        }
      }
      else
      {
        MR_Word Var_83;
        MR_Word Var_86;

        {
          Var_86 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_86, 0) = ((MR_Box) (Var2Lval_53));
        }
        {
          Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_3[6])));
          MR_hl_field(MR_mktag(3), Var_83, 2) = ((MR_Box) (Var_86));
        }
        {
          Var2Rval_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var2Rval_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var2Rval_56, 1) = ((MR_Box) (PrimaryTag_49));
          MR_hl_field(MR_mktag(3), Var2Rval_56, 2) = ((MR_Box) (Var_83));
        }
      }
    }
    {
      Var_92 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_92, 0) = ((MR_Box) (MLDS_Type_25));
    }
    {
      CastVar2Rval_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CastVar2Rval_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), CastVar2Rval_61, 1) = ((MR_Box) (Var_92));
      MR_hl_field(MR_mktag(3), CastVar2Rval_61, 2) = ((MR_Box) (Var2Rval_56));
    }
    {
      Var_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_93, 1) = ((MR_Box) (Var1Lval_52));
      MR_hl_field(MR_mktag(3), Var_93, 2) = ((MR_Box) (CastVar2Rval_61));
    }
    {
      HeapTestStmt_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeapTestStmt_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), HeapTestStmt_62, 1) = ((MR_Box) (Var_93));
      MR_hl_field(MR_mktag(3), HeapTestStmt_62, 2) = ((MR_Box) (Context_31));
    }
    ml_backend__ml_unify_gen__ml_gen_extra_arg_assign_9_p_0(ExtraRvalsTypesWidths_26, VarType_24, VarLval_23, (MR_Integer) 0, ConsIdTag_46, Context_31, &ExtraRvalStmts_63, STATE_VARIABLE_Info_0_73, &STATE_VARIABLE_Info_95_95);
    ml_backend__ml_unify_gen__ml_gen_unify_args_for_reuse_16_p_0(ConsId_38, ArgVars_27, ArgModes_28, ArgTypes_47, Fields_48, TakeAddr_29, VarType_24, VarLval_23, OffSet_50, ArgNum_51, ConsIdTag_46, Context_31, &FieldStmts_64, &TakeAddrInfos_65, STATE_VARIABLE_Info_95_95, &STATE_VARIABLE_Info_96_96);
    {
      MaybePtag_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePtag_66, 0) = ((MR_Box) (Ptag_20));
    }
    ml_backend__ml_unify_gen__ml_gen_field_take_address_assigns_7_p_0(TakeAddrInfos_65, VarLval_23, MLDS_Type_25, MaybePtag_66, Context_31, STATE_VARIABLE_Info_96_96, &TakeAddrStmts_67);
    TypeCtorInfo_113_113 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0;
    Var_97 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_113_113, FieldStmts_64, TakeAddrStmts_67);
    ThenStmts_68 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_113_113, ExtraRvalStmts_63, Var_97);
    {
      ThenStmt_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ThenStmt_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ThenStmt_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ThenStmt_69, 2) = ((MR_Box) (ThenStmts_68));
      MR_hl_field(MR_mktag(0), ThenStmt_69, 3) = ((MR_Box) (Context_31));
    }
    ml_backend__ml_unify_gen__ml_gen_new_object_14_p_0(MaybeConsId_18, MaybeCtorName_19, Ptag_20, ExplicitSecTag_21, Var_22, ExtraRvalsTypesWidths_26, ArgVars_27, ArgModes_28, TakeAddr_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), Context_31, &DynamicStmts_70, STATE_VARIABLE_Info_96_96, STATE_VARIABLE_Info_74);
    {
      ElseStmt_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ElseStmt_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ElseStmt_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ElseStmt_71, 2) = ((MR_Box) (DynamicStmts_70));
      MR_hl_field(MR_mktag(0), ElseStmt_71, 3) = ((MR_Box) (Context_31));
    }
    {
      Var_104 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_104, 0) = ((MR_Box) (Var1Lval_52));
    }
    {
      Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (ElseStmt_71));
    }
    {
      IfStmt_72 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), IfStmt_72, 0) = ((MR_Box) (Var_104));
      MR_hl_field(MR_mktag(2), IfStmt_72, 1) = ((MR_Box) (ThenStmt_69));
      MR_hl_field(MR_mktag(2), IfStmt_72, 2) = ((MR_Box) (Var_105));
      MR_hl_field(MR_mktag(2), IfStmt_72, 3) = ((MR_Box) (Context_31));
    }
    {
      Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (IfStmt_72));
      MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_32 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeapTestStmt_62));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_106));
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_101_119_95_111_98_106_101_99_116_95_100_121_110_97_109_105_99_97_108_108_121_95_95_91_53_93_95_48_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_70;

    conv0_LambdaHeadVar__2_70 = ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_new_object_dynamically__628__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_70));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_101_119_95_111_98_106_101_99_116_95_100_121_110_97_109_105_99_97_108_108_121_95_95_91_53_93_95_48_16_p_0(
  MR_Word MaybeConsId_17,
  MR_Word MaybeCtorName_18,
  MR_Integer Ptag_19,
  MR_Word ExplicitSecTag_20,
  MR_Word VarLval_22,
  MR_Word VarType_23,
  MR_Word MLDS_Type_24,
  MR_Word ExtraRvalsTypesWidths_25,
  MR_Word ArgVars_26,
  MR_Word ArgModes_27,
  MR_Word TakeAddr_28,
  MR_Word Context_29,
  MR_Word * Stmts_30,
  MR_Word STATE_VARIABLE_Info_0_63,
  MR_Word * STATE_VARIABLE_Info_64)
{
  {
    MR_Word TypeCtorInfo_76_76;
    MR_Word ArgVarsTypesWidths_32;
    MR_Word UseAtomicCells_34;
    MR_Word MayUseAtomic0_35;
    MR_Integer OffsetOfFirstField_37;
    MR_Word TakeAddrInfos_38;
    MR_Word ArgRvalsTypesWidths0_39;
    MR_Word MayUseAtomic_40;
    MR_Word PackedArgRvalsTypesWidths_41;
    MR_Word ArgRvalsTypesWidths_42;
    MR_Integer Size_43;
    MR_Word SizeInWordsRval_44;
    MR_Word ProfileMemory_45;
    MR_Word MaybeAllocId_53;
    MR_Word ArgRvalsTypes_58;
    MR_Word MakeNewObject_59;
    MR_Word MakeNewObjStmt_60;
    MR_Word MaybePtag_61;
    MR_Word TakeAddrStmts_62;
    MR_Word Var_66;
    MR_Word Var_71;

    ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0(STATE_VARIABLE_Info_0_63, VarType_23, MaybeConsId_17, ArgVars_26, &ArgVarsTypesWidths_32);
    TypeCtorInfo_76_76 = (MR_Word) &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_mlds_rval_type_and_width_0;
    OffsetOfFirstField_37 = mercury__list__length_1_f_0(TypeCtorInfo_76_76, ExtraRvalsTypesWidths_25);
    ml_backend__ml_gen_info__ml_gen_info_get_use_atomic_cells_2_p_0(STATE_VARIABLE_Info_0_63, &UseAtomicCells_34);
    switch (UseAtomicCells_34) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MayUseAtomic0_35 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        MayUseAtomic0_35 = (MR_Integer) 0;
        break;
    }
    ml_backend__ml_unify_gen__ml_gen_cons_args_12_p_0(STATE_VARIABLE_Info_0_63, ArgVarsTypesWidths_32, ArgModes_27, OffsetOfFirstField_37, (MR_Integer) 1, OffsetOfFirstField_37, ArgVarsTypesWidths_32, TakeAddr_28, &TakeAddrInfos_38, &ArgRvalsTypesWidths0_39, MayUseAtomic0_35, &MayUseAtomic_40);
    ml_backend__ml_unify_gen__ml_expand_or_pack_into_words_2_p_0(ArgRvalsTypesWidths0_39, &PackedArgRvalsTypesWidths_41);
    ArgRvalsTypesWidths_42 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_76_76, ExtraRvalsTypesWidths_25, PackedArgRvalsTypesWidths_41);
    mercury__list__length_2_p_0(TypeCtorInfo_76_76, ArgRvalsTypesWidths_42, &Size_43);
    {
      Var_66 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_66, 0) = ((MR_Box) (Size_43));
    }
    {
      SizeInWordsRval_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SizeInWordsRval_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), SizeInWordsRval_44, 1) = ((MR_Box) (Var_66));
    }
    ml_backend__ml_gen_info__ml_gen_info_get_profile_memory_2_p_0(STATE_VARIABLE_Info_0_63, &ProfileMemory_45);
    switch (ProfileMemory_45) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MaybeAllocId_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *STATE_VARIABLE_Info_64 = STATE_VARIABLE_Info_0_63;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModuleInfo_46;
          MR_Word PredProcId_47;
          MR_Word ProcLabel_49;
          MR_Word GlobalData0_50;
          MR_Word AllocId_51;
          MR_Word GlobalData_52;
          MR_Word Var_67;
          MR_Word _Module_48;

          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_63, &ModuleInfo_46);
          ml_backend__ml_gen_info__ml_gen_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_0_63, &PredProcId_47);
          ml_backend__ml_code_util__ml_gen_proc_label_4_p_0(ModuleInfo_46, PredProcId_47, &_Module_48, &ProcLabel_49);
          ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_63, &GlobalData0_50);
          Var_67 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ProcLabel_49);
          ml_backend__ml_global_data__ml_gen_alloc_site_7_p_0(Var_67, MaybeConsId_17, Size_43, Context_29, &AllocId_51, GlobalData0_50, &GlobalData_52);
          ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_52, STATE_VARIABLE_Info_0_63, STATE_VARIABLE_Info_64);
          {
            MaybeAllocId_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeAllocId_53, 0) = ((MR_Box) (AllocId_51));
          }
        }
        break;
    }
    ArgRvalsTypes_58 = mercury__list__map_2_f_0(TypeCtorInfo_76_76, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_typed_rval_0, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[6], ArgRvalsTypesWidths_42);
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (SizeInWordsRval_44));
    }
    {
      MakeNewObject_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MakeNewObject_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), MakeNewObject_59, 1) = ((MR_Box) (VarLval_22));
      MR_hl_field(MR_mktag(3), MakeNewObject_59, 2) = ((MR_Box) (Ptag_19));
      MR_hl_field(MR_mktag(3), MakeNewObject_59, 3) = ((MR_Box) (ExplicitSecTag_20));
      MR_hl_field(MR_mktag(3), MakeNewObject_59, 4) = ((MR_Box) (MLDS_Type_24));
      MR_hl_field(MR_mktag(3), MakeNewObject_59, 5) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(3), MakeNewObject_59, 6) = ((MR_Box) (MaybeCtorName_18));
      MR_hl_field(MR_mktag(3), MakeNewObject_59, 7) = ((MR_Box) (ArgRvalsTypes_58));
      MR_hl_field(MR_mktag(3), MakeNewObject_59, 8) = ((MR_Box) (MayUseAtomic_40));
      MR_hl_field(MR_mktag(3), MakeNewObject_59, 9) = ((MR_Box) (MaybeAllocId_53));
    }
    {
      MakeNewObjStmt_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MakeNewObjStmt_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), MakeNewObjStmt_60, 1) = ((MR_Box) (MakeNewObject_59));
      MR_hl_field(MR_mktag(3), MakeNewObjStmt_60, 2) = ((MR_Box) (Context_29));
    }
    {
      MaybePtag_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePtag_61, 0) = ((MR_Box) (Ptag_19));
    }
    ml_backend__ml_unify_gen__ml_gen_field_take_address_assigns_7_p_0(TakeAddrInfos_38, VarLval_22, MLDS_Type_24, MaybePtag_61, Context_29, *STATE_VARIABLE_Info_64, &TakeAddrStmts_62);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_30 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MakeNewObjStmt_60));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TakeAddrStmts_62));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_expand_or_pack_into_words_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word RvalTypeWidth_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word RvalsTypesWidths_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Rval_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), RvalTypeWidth_3, (MR_Integer) 0)));
      MR_Word Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), RvalTypeWidth_3, (MR_Integer) 1)));
      MR_Word Width_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), RvalTypeWidth_3, (MR_Integer) 2)));

      switch (MR_tag((MR_Word) Width_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Width_8)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word TailPackedRvalsTypesWidths_9;

                ml_backend__ml_unify_gen__ml_expand_or_pack_into_words_2_p_0(RvalsTypesWidths_4, &TailPackedRvalsTypesWidths_9);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__2_2 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RvalTypeWidth_3));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailPackedRvalsTypesWidths_9));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word SubstType_11;
                MR_Word RvalA_12;
                MR_Word RvalB_13;
                MR_Word RvalTypeWidthA_14;
                MR_Word RvalTypeWidthB_15;
                MR_Word Var_34;
                MR_Word TailPackedRvalsTypesWidths_35;
                MR_Word Var_25;
                MR_Word Var_10;

                ml_backend__ml_unify_gen__ml_expand_or_pack_into_words_2_p_0(RvalsTypesWidths_4, &TailPackedRvalsTypesWidths_35);
                succeeded = ((((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));
                  succeeded = ((((MR_tag((MR_Word) Var_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_25, (MR_Integer) 0)))) == (MR_Integer) 20)));
                  if (succeeded)
                    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_25, (MR_Integer) 1)));
                }
                if (succeeded)
                {
                  SubstType_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
                  RvalA_12 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[13]);
                  RvalB_13 = RvalA_12;
                }
                else
                {
                  SubstType_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
                  {
                    RvalA_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), RvalA_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), RvalA_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_3[3])));
                    MR_hl_field(MR_mktag(3), RvalA_12, 2) = ((MR_Box) (Rval_6));
                  }
                  {
                    RvalB_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), RvalB_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), RvalB_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_3[4])));
                    MR_hl_field(MR_mktag(3), RvalB_13, 2) = ((MR_Box) (Rval_6));
                  }
                }
                {
                  RvalTypeWidthA_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), RvalTypeWidthA_14, 0) = ((MR_Box) (RvalA_12));
                  MR_hl_field(MR_mktag(0), RvalTypeWidthA_14, 1) = ((MR_Box) (SubstType_11));
                  MR_hl_field(MR_mktag(0), RvalTypeWidthA_14, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  RvalTypeWidthB_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), RvalTypeWidthB_15, 0) = ((MR_Box) (RvalB_13));
                  MR_hl_field(MR_mktag(0), RvalTypeWidthB_15, 1) = ((MR_Box) (SubstType_11));
                  MR_hl_field(MR_mktag(0), RvalTypeWidthB_15, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (RvalTypeWidthB_15));
                  MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (TailPackedRvalsTypesWidths_35));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__2_2 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RvalTypeWidthA_14));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_34));
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word LeftOverRvalsTypesWidths_17;
            MR_Word OrAllRval_18;
            MR_Word PackedRvalTypeWidth_19;
            MR_Word TailPackedRvalsTypesWidths_36;
            MR_Word RevOrRvals0_41;
            MR_Word RevOrRvals_42;
            MR_Word OrRvals_43;
            MR_Word Var_46;
            MR_Word Var_59;
            MR_Word Var_55;

            succeeded = ((((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));
              succeeded = ((((MR_tag((MR_Word) Var_59)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_59, (MR_Integer) 0)))) == (MR_Integer) 20)));
              if (succeeded)
                Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_59, (MR_Integer) 1)));
            }
            if (succeeded)
            {
              Var_46 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[7]);
            }
            else
            {
              succeeded = MR_TRUE;
              if (succeeded)
                Var_46 = Rval_6;
              else
              {
                MR_Word SubRval0_57;
                MR_Word Var_62;
                MR_Word Type_56;

                succeeded = ((((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));
                  SubRval0_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2)));
                  succeeded = ((MR_tag((MR_Word) Var_62)) == (MR_mktag((MR_Integer) 0)));
                  if (succeeded)
                    Type_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 0)));
                }
                if (succeeded)
                {
                  MR_Word SubRval_58;

                  {
                    SubRval_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), SubRval_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), SubRval_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[8])));
                    MR_hl_field(MR_mktag(3), SubRval_58, 2) = ((MR_Box) (SubRval0_57));
                    MR_hl_field(MR_mktag(3), SubRval_58, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[7])));
                  }
                  {
                    Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (Var_62));
                    MR_hl_field(MR_mktag(3), Var_46, 2) = ((MR_Box) (SubRval_58));
                  }
                }
                else
                {
                  {
                    Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[8])));
                    MR_hl_field(MR_mktag(3), Var_46, 2) = ((MR_Box) (Rval_6));
                    MR_hl_field(MR_mktag(3), Var_46, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[7])));
                  }
                }
              }
            }
            {
              RevOrRvals0_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), RevOrRvals0_41, 0) = ((MR_Box) (Var_46));
              MR_hl_field(MR_mktag(1), RevOrRvals0_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            ml_backend__ml_unify_gen__ml_pack_into_one_word_loop_4_p_0(RvalsTypesWidths_4, &LeftOverRvalsTypesWidths_17, RevOrRvals0_41, &RevOrRvals_42);
            mercury__list__reverse_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, RevOrRvals_42, &OrRvals_43);
            if ((OrRvals_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_pack_into_one_word\'/4", (MR_String) "OrRvals = []");
                return;
              }
            }
            else
            {
              MR_Word HeadOrRval_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), OrRvals_43, (MR_Integer) 0)));
              MR_Word TailOrRvals_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), OrRvals_43, (MR_Integer) 1)));

              ml_backend__ml_unify_gen__or_packed_rvals_3_p_0(HeadOrRval_44, TailOrRvals_45, &OrAllRval_18);
            }
            {
              PackedRvalTypeWidth_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PackedRvalTypeWidth_19, 0) = ((MR_Box) (OrAllRval_18));
              MR_hl_field(MR_mktag(0), PackedRvalTypeWidth_19, 1) = ((MR_Box) (Type_7));
              MR_hl_field(MR_mktag(0), PackedRvalTypeWidth_19, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            ml_backend__ml_unify_gen__ml_expand_or_pack_into_words_2_p_0(LeftOverRvalsTypesWidths_17, &TailPackedRvalsTypesWidths_36);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PackedRvalTypeWidth_19));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailPackedRvalsTypesWidths_36));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_expand_or_pack_into_words\'/2", (MR_String) "partial_word_shifted");
              return;
            }
          }
          break;
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_cons_args_12_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1153__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_cons_args_12_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1147__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_cons_args_12_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer NumExtraArgs_4,
  MR_Integer CurArgNum_5,
  MR_Integer CurOffset_6,
  MR_Word AllArgVarsTypesWidths_7,
  MR_Word STATE_VARIABLE_TakeAddr_0_8,
  MR_Word * HeadVar__9_9,
  MR_Word * HeadVar__10_10,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_11,
  MR_Word * STATE_VARIABLE_MayUseAtomic_12)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *HeadVar__9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *HeadVar__10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *STATE_VARIABLE_MayUseAtomic_12 = STATE_VARIABLE_MayUseAtomic_0_11;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_cons_args\'/12", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_cons_args\'/12", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word ArgMode_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ArgModes_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word RvalMLDSTypeWidth_63;
        MR_Word RvalsMLDSTypesWidths_64;
        MR_Word ArgVar_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_120, (MR_Integer) 0)));
        MR_Word ConsArgType_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_120, (MR_Integer) 1)));
        MR_Word ArgWidth_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_120, (MR_Integer) 2)));
        MR_Word Lval_69;
        MR_Word ArgType_70;
        MR_Word ModuleInfo_71;
        MR_Integer NextOffset_73;
        MR_Word HighLevelData_76;
        MR_Word BoxedArgType_77;
        MR_Word MLDS_Type_78;
        MR_Word STATE_VARIABLE_MayUseAtomic_89_89;
        MR_Word STATE_VARIABLE_TakeAddr_92_92;
        MR_Integer Var_117;

        ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_1, ArgVar_66, &Lval_69);
        ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_1, ArgVar_66, &ArgType_70);
        ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_1, &ModuleInfo_71);
        check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(ModuleInfo_71, ArgType_70, STATE_VARIABLE_MayUseAtomic_0_11, &STATE_VARIABLE_MayUseAtomic_89_89);
        switch (MR_tag((MR_Word) ArgWidth_68)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ArgWidth_68)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  NextOffset_73 = (CurOffset_6 + (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                {
                  NextOffset_73 = (CurOffset_6 + (MR_Integer) 2);
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              NextOffset_73 = (CurOffset_6 + (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 2:
            NextOffset_73 = CurOffset_6;
            break;
        }
        ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(Info_1, &HighLevelData_76);
        ml_backend__ml_unify_gen__ml_type_as_field_5_p_0(ModuleInfo_71, HighLevelData_76, ConsArgType_67, ArgWidth_68, &BoxedArgType_77);
        MLDS_Type_78 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_71, BoxedArgType_77);
        succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_TakeAddr_0_8)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_117 = ((MR_Integer) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TakeAddr_0_8, (MR_Integer) 0)));
          STATE_VARIABLE_TakeAddr_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TakeAddr_0_8, (MR_Integer) 1)));
          succeeded = (CurArgNum_5 == Var_117);
        }
        if (succeeded)
        {
          MR_Word Rval_79;
          MR_Word Offset_80;
          MR_Word OrigMLDS_Type_81;
          MR_Word TakeAddrInfo_82;
          MR_Word TakeAddrInfosTail_83;
          MR_Word Var_93;
          MR_Word Var_97;
          MR_Word Var_98;
          MR_Word Var_101;
          MR_Integer Var_102;

          {
            Var_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_93, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), Var_93, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_cons_args_12_p_0_1));
            MR_hl_field(MR_mktag(0), Var_93, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_93, 3) = ((MR_Box) (ArgWidth_68));
            MR_hl_field(MR_mktag(0), Var_93, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          mercury__require__expect_3_p_0(Var_93, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_cons_args\'/12", (MR_String) "taking address of non word-sized argument");
          {
            Var_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
            MR_hl_field(MR_mktag(3), Var_97, 1) = ((MR_Box) (MLDS_Type_78));
          }
          {
            Rval_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Rval_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Rval_79, 1) = ((MR_Box) (Var_97));
          }
          {
            RvalMLDSTypeWidth_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), RvalMLDSTypeWidth_63, 0) = ((MR_Box) (Rval_79));
            MR_hl_field(MR_mktag(0), RvalMLDSTypeWidth_63, 1) = ((MR_Box) (MLDS_Type_78));
            MR_hl_field(MR_mktag(0), RvalMLDSTypeWidth_63, 2) = ((MR_Box) (ArgWidth_68));
          }
          Offset_80 = ml_backend__ml_unify_gen__ml_calc_field_offset_3_f_0(NumExtraArgs_4, AllArgVarsTypesWidths_7, CurArgNum_5);
          Var_101 = (MR_Word) CurOffset_6;
          {
            Var_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_98, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[8]));
            MR_hl_field(MR_mktag(0), Var_98, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_cons_args_12_p_0_2));
            MR_hl_field(MR_mktag(0), Var_98, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_98, 3) = ((MR_Box) (Offset_80));
            MR_hl_field(MR_mktag(0), Var_98, 4) = ((MR_Box) (Var_101));
          }
          mercury__require__expect_3_p_0(Var_98, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_cons_args\'/12", (MR_String) "Offset != CurOffset");
          OrigMLDS_Type_81 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_71, ConsArgType_67);
          {
            TakeAddrInfo_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TakeAddrInfo_82, 0) = ((MR_Box) (ArgVar_66));
            MR_hl_field(MR_mktag(0), TakeAddrInfo_82, 1) = ((MR_Box) (Offset_80));
            MR_hl_field(MR_mktag(0), TakeAddrInfo_82, 2) = ((MR_Box) (OrigMLDS_Type_81));
            MR_hl_field(MR_mktag(0), TakeAddrInfo_82, 3) = ((MR_Box) (MLDS_Type_78));
          }
          Var_102 = (CurArgNum_5 + (MR_Integer) 1);
          ml_backend__ml_unify_gen__ml_gen_cons_args_12_p_0(Info_1, Var_119, ArgModes_56, NumExtraArgs_4, Var_102, NextOffset_73, AllArgVarsTypesWidths_7, STATE_VARIABLE_TakeAddr_92_92, &TakeAddrInfosTail_83, &RvalsMLDSTypesWidths_64, STATE_VARIABLE_MayUseAtomic_89_89, STATE_VARIABLE_MayUseAtomic_12);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__9_9 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TakeAddrInfo_82));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TakeAddrInfosTail_83));
          }
        }
        else
        {
          MR_Word RHSInsts_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgMode_55, (MR_Integer) 1)));
          MR_Integer Var_110;
          MR_Word Rval_114;
          MR_Word _LHSInsts_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgMode_55, (MR_Integer) 0)));
          MR_Word Var_106;
          MR_Word Var_118;

          check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_71, RHSInsts_85, ArgType_70, &Var_118);
          succeeded = ((MR_Integer) 0 == Var_118);
          if (succeeded)
          {
            Var_106 = check_hlds__type_util__is_either_type_a_dummy_3_f_0(ModuleInfo_71, ArgType_70, ConsArgType_67);
            succeeded = (Var_106 == (MR_Integer) 1);
          }
          if (succeeded)
          {
            MR_Word Var_108;

            {
              Var_108 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_108, 0) = ((MR_Box) (Lval_69));
            }
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_71, ArgType_70, BoxedArgType_77, (MR_Integer) 0, Var_108, &Rval_114);
          }
          else
          {
            MR_Word Var_109;

            {
              Var_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
              MR_hl_field(MR_mktag(3), Var_109, 1) = ((MR_Box) (MLDS_Type_78));
            }
            {
              Rval_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Rval_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), Rval_114, 1) = ((MR_Box) (Var_109));
            }
          }
          {
            RvalMLDSTypeWidth_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), RvalMLDSTypeWidth_63, 0) = ((MR_Box) (Rval_114));
            MR_hl_field(MR_mktag(0), RvalMLDSTypeWidth_63, 1) = ((MR_Box) (MLDS_Type_78));
            MR_hl_field(MR_mktag(0), RvalMLDSTypeWidth_63, 2) = ((MR_Box) (ArgWidth_68));
          }
          Var_110 = (CurArgNum_5 + (MR_Integer) 1);
          ml_backend__ml_unify_gen__ml_gen_cons_args_12_p_0(Info_1, Var_119, ArgModes_56, NumExtraArgs_4, Var_110, NextOffset_73, AllArgVarsTypesWidths_7, STATE_VARIABLE_TakeAddr_0_8, HeadVar__9_9, &RvalsMLDSTypesWidths_64, STATE_VARIABLE_MayUseAtomic_89_89, STATE_VARIABLE_MayUseAtomic_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__10_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RvalMLDSTypeWidth_63));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RvalsMLDSTypesWidths_64));
        }
      }
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_calc_field_offset_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_19;

    conv0_LambdaHeadVar__2_19 = ml_backend__ml_unify_gen__IntroducedFrom__func__ml_calc_field_offset__1189__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_19));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_calc_field_offset_3_f_0(
  MR_Integer NumExtraArgs_5,
  MR_Word ArgVarsTypesWidths_6,
  MR_Integer ArgNum_7)
{
  {
    MR_bool succeeded;
    MR_Word Offset_8;
    MR_Word ArgVarsTypesWidthsBeforeArg_9;
    MR_Integer Var_15 = (ArgNum_7 - (MR_Integer) 1);

    succeeded = mercury__list__take_3_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[3], Var_15, ArgVarsTypesWidths_6, &ArgVarsTypesWidthsBeforeArg_9);
    if (succeeded)
    {
      MR_Word WidthsBeforeArg_10;
      MR_Integer WordsBeforeArg_14;
      MR_Integer Var_20;

      WidthsBeforeArg_10 = mercury__list__map_2_f_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[3], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[5], ArgVarsTypesWidthsBeforeArg_9);
      WordsBeforeArg_14 = backend_libs__arg_pack__count_distinct_words_1_f_0(WidthsBeforeArg_10);
      Var_20 = (NumExtraArgs_5 + WordsBeforeArg_14);
      Offset_8 = (MR_Word) Var_20;
    }
    else
    {
      mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_unify_gen.ml_calc_field_offset\'/3", (MR_String) "more fields than arg_widths");
    }
    return Offset_8;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_cons_id_to_tag_3_p_0(
  MR_Word Info_4,
  MR_Word ConsId_5,
  MR_Word * Tag_6)
{
  {
    MR_Word ModuleInfo_7;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_4, &ModuleInfo_7);
    *Tag_6 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_7, ConsId_5);
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unify_args_for_reuse_16_p_0(
  MR_Word ConsId_17,
  MR_Word Args_18,
  MR_Word Modes_19,
  MR_Word ArgTypes_20,
  MR_Word CtorArgRepns_21,
  MR_Word TakeAddr_22,
  MR_Word VarType_23,
  MR_Word VarLval_24,
  MR_Word Offset_25,
  MR_Integer ArgNum_26,
  MR_Word Tag_27,
  MR_Word Context_28,
  MR_Word * Stmts_29,
  MR_Word * TakeAddrInfos_30,
  MR_Word STATE_VARIABLE_Info_0_53,
  MR_Word * STATE_VARIABLE_Info_54)
{
  {
    MR_bool succeeded = (Args_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (succeeded)
    {
      succeeded = (Modes_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        succeeded = (ArgTypes_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
          succeeded = (CtorArgRepns_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    if (succeeded)
    {
      *Stmts_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *TakeAddrInfos_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_Info_54 = STATE_VARIABLE_Info_0_53;
    }
    else
    {
      MR_Word Arg_32;
      MR_Word Args1_33;
      MR_Word Mode_34;
      MR_Word Modes1_35;
      MR_Word ArgType_36;
      MR_Word ArgTypes1_37;
      MR_Word CtorArgRepn_38;
      MR_Word CtorArgRepns1_39;

      succeeded = ((MR_tag((MR_Word) Args_18)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Arg_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 0)));
        Args1_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Modes_19)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Mode_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_19, (MR_Integer) 0)));
          Modes1_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_19, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) ArgTypes_20)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            ArgType_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_20, (MR_Integer) 0)));
            ArgTypes1_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_20, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) CtorArgRepns_21)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              CtorArgRepn_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), CtorArgRepns_21, (MR_Integer) 0)));
              CtorArgRepns1_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), CtorArgRepns_21, (MR_Integer) 1)));
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word Offset1_40;
        MR_Integer ArgNum1_41;
        MR_Word TakeAddr1_42;
        MR_Integer Var_67;

        ml_backend__ml_unify_gen__ml_next_field_offset_4_p_0(CtorArgRepn_38, CtorArgRepns1_39, Offset_25, &Offset1_40);
        ArgNum1_41 = (ArgNum_26 + (MR_Integer) 1);
        succeeded = ((MR_tag((MR_Word) TakeAddr_22)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_67 = ((MR_Integer) (MR_hl_field(MR_mktag(1), TakeAddr_22, (MR_Integer) 0)));
          TakeAddr1_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), TakeAddr_22, (MR_Integer) 1)));
          succeeded = (ArgNum_26 == Var_67);
        }
        if (succeeded)
        {
          MR_Word TakeAddrInfos0_43;
          MR_Word ModuleInfo_44;
          MR_Word HighLevelData_45;
          MR_Word FieldType_46;
          MR_Word FieldWidth_47;
          MR_Word BoxedFieldType_48;
          MR_Word MLDS_FieldType_49;
          MR_Word MLDS_BoxedFieldType_50;
          MR_Word TakeAddrInfo_51;
          MR_Word Var_61;
          MR_Word Var_63;

          ml_backend__ml_unify_gen__ml_gen_unify_args_for_reuse_16_p_0(ConsId_17, Args1_33, Modes1_35, ArgTypes1_37, CtorArgRepns1_39, TakeAddr1_42, VarType_23, VarLval_24, Offset1_40, ArgNum1_41, Tag_27, Context_28, Stmts_29, &TakeAddrInfos0_43, STATE_VARIABLE_Info_0_53, STATE_VARIABLE_Info_54);
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(*STATE_VARIABLE_Info_54, &ModuleInfo_44);
          ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(*STATE_VARIABLE_Info_54, &HighLevelData_45);
          Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorArgRepn_38, (MR_Integer) 0)));
          FieldType_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorArgRepn_38, (MR_Integer) 1)));
          FieldWidth_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorArgRepn_38, (MR_Integer) 2)));
          Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorArgRepn_38, (MR_Integer) 3)));
          switch (HighLevelData_45) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                succeeded = (FieldWidth_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                succeeded = !(succeeded);
              }
              break;
            case (MR_Integer) 1:
              succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ModuleInfo_44, FieldType_46, FieldWidth_47);
              break;
          }
          if (succeeded)
          {
            MR_Word TypeCtorInfo_15_77 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
            MR_Word TypeVarSet0_73;
            MR_Word TypeVar_74;
            MR_Word _TypeVarSet_75;

            mercury__varset__init_1_p_0(TypeCtorInfo_15_77, &TypeVarSet0_73);
            mercury__varset__new_var_3_p_0(TypeCtorInfo_15_77, &TypeVar_74, TypeVarSet0_73, &_TypeVarSet_75);
            {
              BoxedFieldType_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), BoxedFieldType_48, 0) = ((MR_Box) (TypeVar_74));
              MR_hl_field(MR_mktag(0), BoxedFieldType_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          else
            BoxedFieldType_48 = FieldType_46;
          ml_backend__ml_code_util__ml_gen_type_3_p_0(*STATE_VARIABLE_Info_54, FieldType_46, &MLDS_FieldType_49);
          ml_backend__ml_code_util__ml_gen_type_3_p_0(*STATE_VARIABLE_Info_54, BoxedFieldType_48, &MLDS_BoxedFieldType_50);
          {
            TakeAddrInfo_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TakeAddrInfo_51, 0) = ((MR_Box) (Arg_32));
            MR_hl_field(MR_mktag(0), TakeAddrInfo_51, 1) = ((MR_Box) (Offset_25));
            MR_hl_field(MR_mktag(0), TakeAddrInfo_51, 2) = ((MR_Box) (MLDS_FieldType_49));
            MR_hl_field(MR_mktag(0), TakeAddrInfo_51, 3) = ((MR_Box) (MLDS_BoxedFieldType_50));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *TakeAddrInfos_30 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TakeAddrInfo_51));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TakeAddrInfos0_43));
          }
        }
        else
        {
          MR_Word Stmts0_52;
          MR_Word STATE_VARIABLE_Info_57_57;

          ml_backend__ml_unify_gen__ml_gen_unify_args_for_reuse_16_p_0(ConsId_17, Args1_33, Modes1_35, ArgTypes1_37, CtorArgRepns1_39, TakeAddr_22, VarType_23, VarLval_24, Offset1_40, ArgNum1_41, Tag_27, Context_28, &Stmts0_52, TakeAddrInfos_30, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_57_57);
          ml_backend__ml_unify_gen__ml_gen_unify_arg_15_p_0(ConsId_17, Arg_32, Mode_34, ArgType_36, CtorArgRepn_38, VarType_23, VarLval_24, Offset_25, ArgNum_26, Tag_27, Context_28, Stmts0_52, Stmts_29, STATE_VARIABLE_Info_57_57, STATE_VARIABLE_Info_54);
        }
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unify_args_for_reuse\'/16", (MR_String) "length mismatch");
          return;
        }
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_next_field_offset_4_p_0(
  MR_Word CurArg_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__4_4 = HeadVar__3_3;
  else
  {
    MR_Word NextArg_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word CurWidth_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), CurArg_1, (MR_Integer) 2)));
    MR_Word NextWidth_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), NextArg_8, (MR_Integer) 2)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), CurArg_1, (MR_Integer) 0)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), CurArg_1, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), CurArg_1, (MR_Integer) 3)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), NextArg_8, (MR_Integer) 0)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), NextArg_8, (MR_Integer) 1)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), NextArg_8, (MR_Integer) 3)));

    switch (MR_tag((MR_Word) CurWidth_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(CurWidth_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) NextWidth_18)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer Int_21 = (MR_Integer) HeadVar__3_3;
                  MR_Integer Var_46 = (Int_21 + (MR_Integer) 1);

                  *HeadVar__4_4 = (MR_Word) Var_46;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer Int_21 = (MR_Integer) HeadVar__3_3;
                  MR_Integer Var_46 = (Int_21 + (MR_Integer) 1);

                  *HeadVar__4_4 = (MR_Word) Var_46;
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_next_field_offset\'/4", (MR_String) "partial_word_shifted follows full_word");
                    return;
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) NextWidth_18)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer Var_42;
                  MR_Integer Int_48 = (MR_Integer) HeadVar__3_3;

                  Var_42 = (Int_48 + (MR_Integer) 2);
                  *HeadVar__4_4 = (MR_Word) Var_42;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer Var_42;
                  MR_Integer Int_48 = (MR_Integer) HeadVar__3_3;

                  Var_42 = (Int_48 + (MR_Integer) 2);
                  *HeadVar__4_4 = (MR_Word) Var_42;
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_next_field_offset\'/4", (MR_String) "partial_word_shifted follows double_word");
                    return;
                  }
                }
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) NextWidth_18)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_next_field_offset\'/4", (MR_String) "partial_word_first not followed by partial_word_shifted");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_next_field_offset\'/4", (MR_String) "partial_word_first not followed by partial_word_shifted");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            *HeadVar__4_4 = HeadVar__3_3;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) NextWidth_18)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Var_36;
              MR_Integer Int_51 = (MR_Integer) HeadVar__3_3;

              Var_36 = (Int_51 + (MR_Integer) 1);
              *HeadVar__4_4 = (MR_Word) Var_36;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer Var_36;
              MR_Integer Int_51 = (MR_Integer) HeadVar__3_3;

              Var_36 = (Int_51 + (MR_Integer) 1);
              *HeadVar__4_4 = (MR_Word) Var_36;
            }
            break;
          case (MR_Integer) 2:
            *HeadVar__4_4 = HeadVar__3_3;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unify_arg_15_p_0(
  MR_Word ConsId_16,
  MR_Word ArgVar_17,
  MR_Word Mode_18,
  MR_Word ArgType_19,
  MR_Word CtorArgRepn_20,
  MR_Word VarType_21,
  MR_Word VarLval_22,
  MR_Word Offset_23,
  MR_Integer ArgNum_24,
  MR_Word Tag_25,
  MR_Word Context_26,
  MR_Word STATE_VARIABLE_Stmts_0_49,
  MR_Word * STATE_VARIABLE_Stmts_50,
  MR_Word STATE_VARIABLE_Info_0_51,
  MR_Word * STATE_VARIABLE_Info_52)
{
  {
    MR_bool succeeded;
    MR_Word MaybeFieldName_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorArgRepn_20, (MR_Integer) 0)));
    MR_Word FieldType_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorArgRepn_20, (MR_Integer) 1)));
    MR_Word FieldWidth_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorArgRepn_20, (MR_Integer) 2)));
    MR_Word HighLevelData_32;
    MR_Word FieldId_34;
    MR_Word ModuleInfo_42;
    MR_Word BoxedFieldType_43;
    MR_Word MLDS_VarType_44;
    MR_Word MLDS_BoxedFieldType_45;
    MR_Word MaybePrimaryTag_46;
    MR_Word FieldLval_47;
    MR_Word ArgLval_48;
    MR_Word Var_59;
    MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorArgRepn_20, (MR_Integer) 3)));

    ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_51, &HighLevelData_32);
    switch (HighLevelData_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer OffsetInt_33 = (MR_Integer) Offset_23;
          MR_Word Var_57;
          MR_Word Var_58;

          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_58, 0) = ((MR_Box) (OffsetInt_33));
          }
          {
            Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (Var_58));
          }
          {
            FieldId_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FieldId_34, 0) = ((MR_Box) (Var_57));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Target_35;
          MR_Word Var_36;

          ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_51, &Target_35);
          succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(VarType_21, &Var_36);
          if (succeeded)
          {
            MR_Word Var_53;
            MR_Word Var_54;
            MR_Integer OffsetInt_61 = (MR_Integer) Offset_23;

            {
              Var_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_54, 0) = ((MR_Box) (OffsetInt_61));
            }
            {
              Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (Var_54));
            }
            {
              FieldId_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FieldId_34, 0) = ((MR_Box) (Var_53));
            }
          }
          else
          {
            MR_Word ConsName_37;
            MR_Integer ConsArity_38;
            MR_Word TypeCtor_39;

            succeeded = ((((MR_tag((MR_Word) ConsId_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_16, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              ConsName_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_16, (MR_Integer) 1)));
              ConsArity_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_16, (MR_Integer) 2)));
              TypeCtor_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_16, (MR_Integer) 3)));
              {
                MR_String UnqualConsName_40;
                MR_Word FieldName_41;

                UnqualConsName_40 = ml_backend__ml_type_gen__ml_gen_du_ctor_name_4_f_0(Target_35, TypeCtor_39, ConsName_37, ConsArity_38);
                FieldName_41 = ml_backend__ml_code_util__ml_gen_hld_field_name_2_f_0(MaybeFieldName_29, ArgNum_24);
                FieldId_34 = ml_backend__ml_unify_gen__ml_gen_field_id_6_f_0(Target_35, VarType_21, Tag_25, UnqualConsName_40, ConsArity_38, FieldName_41);
              }
            }
            else
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unify_arg\'/15", (MR_String) "invalid cons_id");
                return;
              }
            }
          }
        }
        break;
    }
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_51, &ModuleInfo_42);
    switch (HighLevelData_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          succeeded = (FieldWidth_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          succeeded = !(succeeded);
        }
        break;
      case (MR_Integer) 1:
        succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ModuleInfo_42, FieldType_30, FieldWidth_31);
        break;
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_15_82 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
      MR_Word TypeVarSet0_78;
      MR_Word TypeVar_79;
      MR_Word _TypeVarSet_80;

      mercury__varset__init_1_p_0(TypeCtorInfo_15_82, &TypeVarSet0_78);
      mercury__varset__new_var_3_p_0(TypeCtorInfo_15_82, &TypeVar_79, TypeVarSet0_78, &_TypeVarSet_80);
      {
        BoxedFieldType_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), BoxedFieldType_43, 0) = ((MR_Box) (TypeVar_79));
        MR_hl_field(MR_mktag(0), BoxedFieldType_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    else
      BoxedFieldType_43 = FieldType_30;
    ml_backend__ml_code_util__ml_gen_type_3_p_0(STATE_VARIABLE_Info_0_51, VarType_21, &MLDS_VarType_44);
    ml_backend__ml_code_util__ml_gen_type_3_p_0(STATE_VARIABLE_Info_0_51, BoxedFieldType_43, &MLDS_BoxedFieldType_45);
    MaybePrimaryTag_46 = hlds__hlds_data__get_primary_tag_1_f_0(Tag_25);
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_59, 0) = ((MR_Box) (VarLval_22));
    }
    {
      FieldLval_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FieldLval_47, 0) = ((MR_Box) (MaybePrimaryTag_46));
      MR_hl_field(MR_mktag(0), FieldLval_47, 1) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), FieldLval_47, 2) = ((MR_Box) (FieldId_34));
      MR_hl_field(MR_mktag(0), FieldLval_47, 3) = ((MR_Box) (MLDS_BoxedFieldType_45));
      MR_hl_field(MR_mktag(0), FieldLval_47, 4) = ((MR_Box) (MLDS_VarType_44));
    }
    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_51, ArgVar_17, &ArgLval_48);
    ml_backend__ml_unify_gen__ml_gen_sub_unify_11_p_0(ModuleInfo_42, HighLevelData_32, Mode_18, ArgLval_48, ArgType_19, FieldLval_47, BoxedFieldType_43, FieldWidth_31, Context_26, STATE_VARIABLE_Stmts_0_49, STATE_VARIABLE_Stmts_50);
    *STATE_VARIABLE_Info_52 = STATE_VARIABLE_Info_0_51;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_gen_field_id_6_f_0(
  MR_Word Target_8,
  MR_Word Type_9,
  MR_Word Tag_10,
  MR_String ConsName_11,
  MR_Integer ConsArity_12,
  MR_Word FieldName_13)
{
  {
    MR_Word FieldId_14;
    MR_Word TypeCtor_15;
    MR_Word QualTypeName_16;
    MR_Integer TypeArity_17;
    MR_Word MLDS_Module_18;
    MR_Word QualKind_19;
    MR_String TypeName_20;
    MR_Word TypeQualifier_21;
    MR_Word UsesBaseClass_22;
    MR_Word ClassPtrType_24;
    MR_Word QualifiedFieldName_25;

    parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_9, &TypeCtor_15);
    ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_15, &QualTypeName_16, &TypeArity_17);
    MLDS_Module_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualTypeName_16, (MR_Integer) 0)));
    QualKind_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualTypeName_16, (MR_Integer) 1)));
    TypeName_20 = ((MR_String) (MR_hl_field(MR_mktag(0), QualTypeName_16, (MR_Integer) 2)));
    TypeQualifier_21 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(Target_8, MLDS_Module_18, QualKind_19, TypeName_20, TypeArity_17);
    UsesBaseClass_22 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(Tag_10);
    switch (UsesBaseClass_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word QualConsName_26;
          MR_Word FieldQualifier_27;
          MR_Word Var_30;
          MR_Word ClassId_36;

          {
            QualConsName_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), QualConsName_26, 0) = ((MR_Box) (TypeQualifier_21));
            MR_hl_field(MR_mktag(0), QualConsName_26, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), QualConsName_26, 2) = ((MR_Box) (ConsName_11));
          }
          {
            ClassId_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ClassId_36, 0) = ((MR_Box) (QualConsName_26));
            MR_hl_field(MR_mktag(0), ClassId_36, 1) = ((MR_Box) (ConsArity_12));
            MR_hl_field(MR_mktag(0), ClassId_36, 2) = ((MR_Box) ((MR_Integer) 0));
          }
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ClassId_36);
          {
            ClassPtrType_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ClassPtrType_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), ClassPtrType_24, 1) = ((MR_Box) (Var_30));
          }
          FieldQualifier_27 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(Target_8, TypeQualifier_21, (MR_Integer) 1, ConsName_11, ConsArity_12);
          {
            QualifiedFieldName_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), QualifiedFieldName_25, 0) = ((MR_Box) (FieldQualifier_27));
            MR_hl_field(MR_mktag(0), QualifiedFieldName_25, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), QualifiedFieldName_25, 2) = ((MR_Box) (FieldName_13));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ClassId_23;
          MR_Word Var_34;

          {
            ClassId_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ClassId_23, 0) = ((MR_Box) (QualTypeName_16));
            MR_hl_field(MR_mktag(0), ClassId_23, 1) = ((MR_Box) (TypeArity_17));
            MR_hl_field(MR_mktag(0), ClassId_23, 2) = ((MR_Box) ((MR_Integer) 0));
          }
          Var_34 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ClassId_23);
          {
            ClassPtrType_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ClassPtrType_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), ClassPtrType_24, 1) = ((MR_Box) (Var_34));
          }
          {
            QualifiedFieldName_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), QualifiedFieldName_25, 0) = ((MR_Box) (TypeQualifier_21));
            MR_hl_field(MR_mktag(0), QualifiedFieldName_25, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), QualifiedFieldName_25, 2) = ((MR_Box) (FieldName_13));
          }
        }
        break;
    }
    {
      FieldId_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), FieldId_14, 0) = ((MR_Box) (QualifiedFieldName_25));
      MR_hl_field(MR_mktag(1), FieldId_14, 1) = ((MR_Box) (ClassPtrType_24));
    }
    return FieldId_14;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_sub_unify_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word HighLevelData_13,
  MR_Word ArgMode_14,
  MR_Word ArgLval_15,
  MR_Word ArgType_16,
  MR_Word FieldLval_17,
  MR_Word FieldType_18,
  MR_Word FieldWidth_19,
  MR_Word Context_20,
  MR_Word STATE_VARIABLE_Stmts_0_26,
  MR_Word * STATE_VARIABLE_Stmts_27)
{
  {
    MR_bool succeeded;
    MR_Word LeftFromToInsts_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgMode_14, (MR_Integer) 0)));
    MR_Word RightFromToInsts_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgMode_14, (MR_Integer) 1)));
    MR_Word LeftTopFunctorMode_24;
    MR_Word RightTopFunctorMode_25;
    MR_Word Var_28;

    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_12, LeftFromToInsts_22, ArgType_16, &LeftTopFunctorMode_24);
    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_12, RightFromToInsts_23, ArgType_16, &RightTopFunctorMode_25);
    Var_28 = check_hlds__type_util__is_either_type_a_dummy_3_f_0(ModuleInfo_12, ArgType_16, FieldType_18);
    succeeded = (Var_28 == (MR_Integer) 0);
    if (succeeded)
      *STATE_VARIABLE_Stmts_27 = STATE_VARIABLE_Stmts_0_26;
    else
      switch (LeftTopFunctorMode_24) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (RightTopFunctorMode_25) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_sub_unify\'/11", (MR_String) "test in arg of [de]construction");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              ml_backend__ml_unify_gen__ml_gen_sub_unify_assign_right_9_p_0(ModuleInfo_12, ArgLval_15, ArgType_16, FieldLval_17, FieldType_18, FieldWidth_19, Context_20, STATE_VARIABLE_Stmts_0_26, STATE_VARIABLE_Stmts_27);
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_sub_unify\'/11", (MR_String) "some strange unify");
                  return;
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          switch (RightTopFunctorMode_25) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ml_backend__ml_unify_gen__ml_gen_sub_unify_assign_left_10_p_0(ModuleInfo_12, HighLevelData_13, ArgLval_15, ArgType_16, FieldLval_17, FieldType_18, FieldWidth_19, Context_20, STATE_VARIABLE_Stmts_0_26, STATE_VARIABLE_Stmts_27);
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_sub_unify\'/11", (MR_String) "some strange unify");
                  return;
                }
              }
              break;
          }
          break;
        case (MR_Integer) 2:
          {
            switch (RightTopFunctorMode_25) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_sub_unify\'/11", (MR_String) "some strange unify");
                    return;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                }
                break;
            }
            *STATE_VARIABLE_Stmts_27 = STATE_VARIABLE_Stmts_0_26;
          }
          break;
      }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_sub_unify_assign_left_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word HighLevelData_12,
  MR_Word ArgLval_13,
  MR_Word ArgType_14,
  MR_Word FieldLval_15,
  MR_Word FieldType_16,
  MR_Word FieldWidth_17,
  MR_Word Context_18,
  MR_Word STATE_VARIABLE_Stmts_0_37,
  MR_Word * STATE_VARIABLE_Stmts_38)
{
  {
    MR_bool succeeded;
    MR_Word ArgRval_20;
    MR_Word Var_40;

    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_40, 0) = ((MR_Box) (ArgLval_13));
    }
    ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_11, ArgType_14, FieldType_16, (MR_Integer) 0, Var_40, &ArgRval_20);
    switch (MR_tag((MR_Word) FieldWidth_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(FieldWidth_17)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Stmt_21;

              Stmt_21 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLval_15, ArgRval_20, Context_18);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Stmts_38 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_21));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Stmts_0_37));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word FieldLvalA_22;
              MR_Word FieldLvalB_23;
              MR_Word Ptag_80;
              MR_Word Address_81;
              MR_Word FieldIdA_82;
              MR_Word PtrType_84;
              MR_Word FieldOffsetA_85;
              MR_Word Var_83;
              MR_Integer Offset_86;
              MR_Word Var_89;

              succeeded = ((MR_tag((MR_Word) FieldLval_15)) == (MR_mktag((MR_Integer) 0)));
              if (succeeded)
              {
                Ptag_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldLval_15, (MR_Integer) 0)));
                Address_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldLval_15, (MR_Integer) 1)));
                FieldIdA_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldLval_15, (MR_Integer) 2)));
                Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldLval_15, (MR_Integer) 3)));
                PtrType_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldLval_15, (MR_Integer) 4)));
                succeeded = ((MR_tag((MR_Word) FieldIdA_82)) == (MR_mktag((MR_Integer) 0)));
                if (succeeded)
                {
                  FieldOffsetA_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldIdA_82, (MR_Integer) 0)));
                  succeeded = ((((MR_tag((MR_Word) FieldOffsetA_85)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldOffsetA_85, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldOffsetA_85, (MR_Integer) 1)));
                    succeeded = ((MR_tag((MR_Word) Var_89)) == (MR_mktag((MR_Integer) 2)));
                    if (succeeded)
                      Offset_86 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Var_89, (MR_Integer) 0)));
                  }
                  if (succeeded)
                  {
                    MR_Word FieldIdB_87;
                    MR_Word SubstType_88;
                    MR_Word Var_90;
                    MR_Word Var_91;
                    MR_Integer Var_92 = (Offset_86 + (MR_Integer) 1);

                    {
                      Var_91 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_91, 0) = ((MR_Box) (Var_92));
                    }
                    {
                      Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Var_90, 1) = ((MR_Box) (Var_91));
                    }
                    {
                      FieldIdB_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), FieldIdB_87, 0) = ((MR_Box) (Var_90));
                    }
                    SubstType_88 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
                    {
                      FieldLvalA_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), FieldLvalA_22, 0) = ((MR_Box) (Ptag_80));
                      MR_hl_field(MR_mktag(0), FieldLvalA_22, 1) = ((MR_Box) (Address_81));
                      MR_hl_field(MR_mktag(0), FieldLvalA_22, 2) = ((MR_Box) (FieldIdA_82));
                      MR_hl_field(MR_mktag(0), FieldLvalA_22, 3) = ((MR_Box) (SubstType_88));
                      MR_hl_field(MR_mktag(0), FieldLvalA_22, 4) = ((MR_Box) (PtrType_84));
                    }
                    {
                      FieldLvalB_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), FieldLvalB_23, 0) = ((MR_Box) (Ptag_80));
                      MR_hl_field(MR_mktag(0), FieldLvalB_23, 1) = ((MR_Box) (Address_81));
                      MR_hl_field(MR_mktag(0), FieldLvalB_23, 2) = ((MR_Box) (FieldIdB_87));
                      MR_hl_field(MR_mktag(0), FieldLvalB_23, 3) = ((MR_Box) (SubstType_88));
                      MR_hl_field(MR_mktag(0), FieldLvalB_23, 4) = ((MR_Box) (PtrType_84));
                    }
                  }
                  else
                  {
                    {
                      mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_field_offset_pair\'/3", (MR_String) "unexpected field offset");
                      return;
                    }
                  }
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
              {
                MR_Word FloatWordA_24;
                MR_Word FloatWordB_25;
                MR_Word IntFieldType_26;
                MR_Word ArgRvalA_27;
                MR_Word ArgRvalB_28;
                MR_Word StmtA_29;
                MR_Word StmtB_30;
                MR_Word Var_51;
                MR_Word Var_53;
                MR_Word Var_55;
                MR_Word Var_58;

                {
                  FloatWordA_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), FloatWordA_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), FloatWordA_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_3[3])));
                  MR_hl_field(MR_mktag(3), FloatWordA_24, 2) = ((MR_Box) (ArgRval_20));
                }
                {
                  FloatWordB_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), FloatWordB_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), FloatWordB_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_3[4])));
                  MR_hl_field(MR_mktag(3), FloatWordB_25, 2) = ((MR_Box) (ArgRval_20));
                }
                Var_51 = parse_tree__builtin_lib_types__int_type_0_f_0();
                ml_backend__ml_unify_gen__ml_type_as_field_5_p_0(ModuleInfo_11, HighLevelData_12, Var_51, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &IntFieldType_26);
                Var_53 = parse_tree__builtin_lib_types__int_type_0_f_0();
                ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_11, Var_53, IntFieldType_26, (MR_Integer) 0, FloatWordA_24, &ArgRvalA_27);
                Var_55 = parse_tree__builtin_lib_types__int_type_0_f_0();
                ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_11, Var_55, IntFieldType_26, (MR_Integer) 0, FloatWordB_25, &ArgRvalB_28);
                StmtA_29 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLvalA_22, ArgRvalA_27, Context_18);
                StmtB_30 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLvalB_23, ArgRvalB_28, Context_18);
                {
                  Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (StmtB_30));
                  MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (STATE_VARIABLE_Stmts_0_37));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Stmts_38 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (StmtA_29));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_58));
                }
              }
              else
              {
                MR_Word Stmt_61;

                Stmt_61 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLval_15, ArgRval_20, Context_18);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Stmts_38 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_61));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Stmts_0_37));
                }
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Mask_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), FieldWidth_17, (MR_Integer) 0)));
          MR_Word CastVal_33;
          MR_Word MaskOld_34;
          MR_Word ShiftNew_35;
          MR_Word Combined_36;
          MR_Word Var_43;
          MR_Integer Var_44;
          MR_Integer Var_45;
          MR_Word Stmt_64;

          {
            Var_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_43, 0) = ((MR_Box) (FieldLval_15));
          }
          {
            CastVal_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CastVal_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), CastVal_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_3[5])));
            MR_hl_field(MR_mktag(3), CastVal_33, 2) = ((MR_Box) (Var_43));
          }
          Var_45 = mercury__int__f_60_60_2_f_0(Mask_31, (MR_Integer) 0);
          Var_44 = ~(Var_45);
          MaskOld_34 = ml_backend__ml_unify_gen__ml_bitwise_and_2_f_0(CastVal_33, Var_44);
          ShiftNew_35 = ml_backend__ml_unify_gen__ml_lshift_2_f_0(ArgRval_20, (MR_Integer) 0);
          Combined_36 = ml_backend__ml_unify_gen__ml_bitwise_or_2_f_0(MaskOld_34, ShiftNew_35);
          Stmt_64 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLval_15, Combined_36, Context_18);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Stmts_38 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_64));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Stmts_0_37));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Mask_65 = ((MR_Integer) (MR_hl_field(MR_mktag(2), FieldWidth_17, (MR_Integer) 1)));
          MR_Integer Shift_66 = ((MR_Integer) (MR_hl_field(MR_mktag(2), FieldWidth_17, (MR_Integer) 0)));
          MR_Word CastVal_67;
          MR_Word MaskOld_68;
          MR_Word ShiftNew_69;
          MR_Word Combined_70;
          MR_Word Var_73;
          MR_Integer Var_74;
          MR_Integer Var_75;
          MR_Word Stmt_76;

          {
            Var_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_73, 0) = ((MR_Box) (FieldLval_15));
          }
          {
            CastVal_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CastVal_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), CastVal_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_3[5])));
            MR_hl_field(MR_mktag(3), CastVal_67, 2) = ((MR_Box) (Var_73));
          }
          Var_75 = mercury__int__f_60_60_2_f_0(Mask_65, Shift_66);
          Var_74 = ~(Var_75);
          MaskOld_68 = ml_backend__ml_unify_gen__ml_bitwise_and_2_f_0(CastVal_67, Var_74);
          ShiftNew_69 = ml_backend__ml_unify_gen__ml_lshift_2_f_0(ArgRval_20, Shift_66);
          Combined_70 = ml_backend__ml_unify_gen__ml_bitwise_or_2_f_0(MaskOld_68, ShiftNew_69);
          Stmt_76 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLval_15, Combined_70, Context_18);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Stmts_38 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_76));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Stmts_0_37));
          }
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_bitwise_and_2_f_0(
  MR_Word Rval_4,
  MR_Integer Mask_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_8;
    MR_Word Var_9;

    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_9, 0) = ((MR_Box) (Mask_5));
    }
    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_8, 1) = ((MR_Box) (Var_9));
    }
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[10])));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 2) = ((MR_Box) (Rval_4));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 3) = ((MR_Box) (Var_8));
    }
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_bitwise_or_2_f_0(
  MR_Word RvalA_4,
  MR_Word RvalB_5)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) RvalA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalA_4, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word Rval_6;
    MR_Word UnboxRvalA_10;
    MR_Word STATE_VARIABLE_MaybeType_18_18;
    MR_Word Var_21;
    MR_Word TypeA_8;
    MR_Word UnboxRvalA0_9;
    MR_Word Var_17;
    MR_Word UnboxRvalB0_12;
    MR_Word Var_19;
    MR_Word TypeB_11;

    if (succeeded)
    {
      Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), RvalA_4, (MR_Integer) 1)));
      UnboxRvalA0_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), RvalA_4, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
        TypeA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0)));
    }
    if (succeeded)
    {
      UnboxRvalA_10 = UnboxRvalA0_9;
      {
        STATE_VARIABLE_MaybeType_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeType_18_18, 0) = ((MR_Box) (TypeA_8));
      }
    }
    else
    {
      UnboxRvalA_10 = RvalA_4;
      STATE_VARIABLE_MaybeType_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    Var_21 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[9]);
    succeeded = ((((MR_tag((MR_Word) RvalB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalB_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), RvalB_5, (MR_Integer) 1)));
      UnboxRvalB0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), RvalB_5, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
        TypeB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0)));
    }
    if (succeeded)
    {
      MR_Word UnboxRval_14;

      {
        UnboxRval_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), UnboxRval_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), UnboxRval_14, 1) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(3), UnboxRval_14, 2) = ((MR_Box) (UnboxRvalA_10));
        MR_hl_field(MR_mktag(3), UnboxRval_14, 3) = ((MR_Box) (UnboxRvalB0_12));
      }
      {
        Rval_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Rval_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), Rval_6, 1) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(3), Rval_6, 2) = ((MR_Box) (UnboxRval_14));
      }
    }
    else
    {
      MR_Word UnboxRval_29;

      {
        UnboxRval_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), UnboxRval_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), UnboxRval_29, 1) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(3), UnboxRval_29, 2) = ((MR_Box) (UnboxRvalA_10));
        MR_hl_field(MR_mktag(3), UnboxRval_29, 3) = ((MR_Box) (RvalB_5));
      }
      if ((STATE_VARIABLE_MaybeType_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        Rval_6 = UnboxRval_29;
      else
      {
        MR_Word BoxType_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeType_18_18, (MR_Integer) 0)));
        MR_Word Var_25;

        {
          Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (BoxType_24));
        }
        {
          Rval_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Rval_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), Rval_6, 1) = ((MR_Box) (Var_25));
          MR_hl_field(MR_mktag(3), Rval_6, 2) = ((MR_Box) (UnboxRval_29));
        }
      }
    }
    return Rval_6;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_lshift_2_f_0(
  MR_Word Rval0_4,
  MR_Integer Shift_5)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Rval0_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval0_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
    MR_Word Rval_6;
    MR_Word Var_11;
    MR_Word Var_7;

    if (succeeded)
    {
      Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval0_4, (MR_Integer) 1)));
      succeeded = ((((MR_tag((MR_Word) Var_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_11, (MR_Integer) 0)))) == (MR_Integer) 20)));
      if (succeeded)
        Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_11, (MR_Integer) 1)));
    }
    if (succeeded)
    {
      Rval_6 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[7]);
    }
    else
    {
      succeeded = (Shift_5 == (MR_Integer) 0);
      if (succeeded)
        Rval_6 = Rval0_4;
      else
      {
        MR_Word SubRval0_9;
        MR_Word Var_14;
        MR_Word Type_8;

        succeeded = ((((MR_tag((MR_Word) Rval0_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval0_4, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval0_4, (MR_Integer) 1)));
          SubRval0_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval0_4, (MR_Integer) 2)));
          succeeded = ((MR_tag((MR_Word) Var_14)) == (MR_mktag((MR_Integer) 0)));
          if (succeeded)
            Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0)));
        }
        if (succeeded)
        {
          MR_Word SubRval_10;
          MR_Word Var_17;
          MR_Word Var_18;

          {
            Var_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_18, 0) = ((MR_Box) (Shift_5));
          }
          {
            Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (Var_18));
          }
          {
            SubRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), SubRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), SubRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[8])));
            MR_hl_field(MR_mktag(3), SubRval_10, 2) = ((MR_Box) (SubRval0_9));
            MR_hl_field(MR_mktag(3), SubRval_10, 3) = ((MR_Box) (Var_17));
          }
          {
            Rval_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Rval_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), Rval_6, 1) = ((MR_Box) (Var_14));
            MR_hl_field(MR_mktag(3), Rval_6, 2) = ((MR_Box) (SubRval_10));
          }
        }
        else
        {
          MR_Word Var_22;
          MR_Word Var_23;

          {
            Var_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_23, 0) = ((MR_Box) (Shift_5));
          }
          {
            Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (Var_23));
          }
          {
            Rval_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Rval_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), Rval_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[8])));
            MR_hl_field(MR_mktag(3), Rval_6, 2) = ((MR_Box) (Rval0_4));
            MR_hl_field(MR_mktag(3), Rval_6, 3) = ((MR_Box) (Var_22));
          }
        }
      }
    }
    return Rval_6;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_type_as_field_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word HighLevelData_7,
  MR_Word FieldType_8,
  MR_Word FieldWidth_9,
  MR_Word * BoxedFieldType_10)
{
  {
    MR_bool succeeded;

    switch (HighLevelData_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          succeeded = (FieldWidth_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          succeeded = !(succeeded);
        }
        break;
      case (MR_Integer) 1:
        succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ModuleInfo_6, FieldType_8, FieldWidth_9);
        break;
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_15_15 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
      MR_Word TypeVarSet0_11;
      MR_Word TypeVar_12;
      MR_Word _TypeVarSet_13;

      mercury__varset__init_1_p_0(TypeCtorInfo_15_15, &TypeVarSet0_11);
      mercury__varset__new_var_3_p_0(TypeCtorInfo_15_15, &TypeVar_12, TypeVarSet0_11, &_TypeVarSet_13);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *BoxedFieldType_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeVar_12));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    else
      *BoxedFieldType_10 = FieldType_8;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_sub_unify_assign_right_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ArgLval_11,
  MR_Word ArgType_12,
  MR_Word FieldLval_13,
  MR_Word FieldType_14,
  MR_Word FieldWidth_15,
  MR_Word Context_16,
  MR_Word STATE_VARIABLE_Stmts_0_28,
  MR_Word * STATE_VARIABLE_Stmts_29)
{
  {
    MR_bool succeeded;
    MR_Word Stmt_22;

    switch (MR_tag((MR_Word) FieldWidth_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(FieldWidth_15)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word FieldRval_21;
              MR_Word Var_36;

              {
                Var_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_36, 0) = ((MR_Box) (FieldLval_13));
              }
              ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, FieldType_14, ArgType_12, (MR_Integer) 0, Var_36, &FieldRval_21);
              switch (MR_tag((MR_Word) FieldWidth_15)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Stmt_22 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_11, FieldRval_21, Context_16);
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Integer Mask_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), FieldWidth_15, (MR_Integer) 0)));
                    MR_Word UnpackRval_24;
                    MR_Word Var_65;
                    MR_Word Var_66;

                    {
                      Var_66 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_66, 0) = ((MR_Box) (Mask_23));
                    }
                    {
                      Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (Var_66));
                    }
                    {
                      UnpackRval_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), UnpackRval_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(3), UnpackRval_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[10])));
                      MR_hl_field(MR_mktag(3), UnpackRval_24, 2) = ((MR_Box) (FieldRval_21));
                      MR_hl_field(MR_mktag(3), UnpackRval_24, 3) = ((MR_Box) (Var_65));
                    }
                    Stmt_22 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_11, UnpackRval_24, Context_16);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Integer Shift_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), FieldWidth_15, (MR_Integer) 0)));
                    MR_Word Var_37;
                    MR_Integer Mask_39 = ((MR_Integer) (MR_hl_field(MR_mktag(2), FieldWidth_15, (MR_Integer) 1)));
                    MR_Word UnpackRval_40;
                    MR_Word Var_77;
                    MR_Word Var_78;

                    succeeded = (Shift_25 == (MR_Integer) 0);
                    if (succeeded)
                      Var_37 = FieldRval_21;
                    else
                    {
                      MR_Word Var_71;
                      MR_Word Var_72;

                      {
                        Var_72 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), Var_72, 0) = ((MR_Box) (Shift_25));
                      }
                      {
                        Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (Var_72));
                      }
                      {
                        Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                        MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[11])));
                        MR_hl_field(MR_mktag(3), Var_37, 2) = ((MR_Box) (FieldRval_21));
                        MR_hl_field(MR_mktag(3), Var_37, 3) = ((MR_Box) (Var_71));
                      }
                    }
                    {
                      Var_78 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_78, 0) = ((MR_Box) (Mask_39));
                    }
                    {
                      Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Var_77, 1) = ((MR_Box) (Var_78));
                    }
                    {
                      UnpackRval_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), UnpackRval_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(3), UnpackRval_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[10])));
                      MR_hl_field(MR_mktag(3), UnpackRval_40, 2) = ((MR_Box) (Var_37));
                      MR_hl_field(MR_mktag(3), UnpackRval_40, 3) = ((MR_Box) (Var_77));
                    }
                    Stmt_22 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_11, UnpackRval_40, Context_16);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word FieldRval_41;
              MR_Word FieldLvalA_26;
              MR_Word FieldLvalB_27;
              MR_Word Ptag_45;
              MR_Word Address_46;
              MR_Word FieldIdA_47;
              MR_Word PtrType_49;
              MR_Word FieldOffsetA_50;
              MR_Word Var_48;
              MR_Integer Offset_51;
              MR_Word Var_54;

              succeeded = ((MR_tag((MR_Word) FieldLval_13)) == (MR_mktag((MR_Integer) 0)));
              if (succeeded)
              {
                Ptag_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldLval_13, (MR_Integer) 0)));
                Address_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldLval_13, (MR_Integer) 1)));
                FieldIdA_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldLval_13, (MR_Integer) 2)));
                Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldLval_13, (MR_Integer) 3)));
                PtrType_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldLval_13, (MR_Integer) 4)));
                succeeded = ((MR_tag((MR_Word) FieldIdA_47)) == (MR_mktag((MR_Integer) 0)));
                if (succeeded)
                {
                  FieldOffsetA_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldIdA_47, (MR_Integer) 0)));
                  succeeded = ((((MR_tag((MR_Word) FieldOffsetA_50)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldOffsetA_50, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldOffsetA_50, (MR_Integer) 1)));
                    succeeded = ((MR_tag((MR_Word) Var_54)) == (MR_mktag((MR_Integer) 2)));
                    if (succeeded)
                      Offset_51 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Var_54, (MR_Integer) 0)));
                  }
                  if (succeeded)
                  {
                    MR_Word FieldIdB_52;
                    MR_Word SubstType_53;
                    MR_Word Var_55;
                    MR_Word Var_56;
                    MR_Integer Var_57 = (Offset_51 + (MR_Integer) 1);

                    {
                      Var_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_56, 0) = ((MR_Box) (Var_57));
                    }
                    {
                      Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (Var_56));
                    }
                    {
                      FieldIdB_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), FieldIdB_52, 0) = ((MR_Box) (Var_55));
                    }
                    SubstType_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
                    {
                      FieldLvalA_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), FieldLvalA_26, 0) = ((MR_Box) (Ptag_45));
                      MR_hl_field(MR_mktag(0), FieldLvalA_26, 1) = ((MR_Box) (Address_46));
                      MR_hl_field(MR_mktag(0), FieldLvalA_26, 2) = ((MR_Box) (FieldIdA_47));
                      MR_hl_field(MR_mktag(0), FieldLvalA_26, 3) = ((MR_Box) (SubstType_53));
                      MR_hl_field(MR_mktag(0), FieldLvalA_26, 4) = ((MR_Box) (PtrType_49));
                    }
                    {
                      FieldLvalB_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), FieldLvalB_27, 0) = ((MR_Box) (Ptag_45));
                      MR_hl_field(MR_mktag(0), FieldLvalB_27, 1) = ((MR_Box) (Address_46));
                      MR_hl_field(MR_mktag(0), FieldLvalB_27, 2) = ((MR_Box) (FieldIdB_52));
                      MR_hl_field(MR_mktag(0), FieldLvalB_27, 3) = ((MR_Box) (SubstType_53));
                      MR_hl_field(MR_mktag(0), FieldLvalB_27, 4) = ((MR_Box) (PtrType_49));
                    }
                  }
                  else
                  {
                    {
                      mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_field_offset_pair\'/3", (MR_String) "unexpected field offset");
                      return;
                    }
                  }
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
              {
                MR_Word Var_31;
                MR_Word Var_32;

                {
                  Var_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_31, 0) = ((MR_Box) (FieldLvalA_26));
                }
                {
                  Var_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_32, 0) = ((MR_Box) (FieldLvalB_27));
                }
                {
                  FieldRval_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), FieldRval_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), FieldRval_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22))));
                  MR_hl_field(MR_mktag(3), FieldRval_41, 2) = ((MR_Box) (Var_31));
                  MR_hl_field(MR_mktag(3), FieldRval_41, 3) = ((MR_Box) (Var_32));
                }
              }
              else
              {
                MR_Word Var_34;

                {
                  Var_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_34, 0) = ((MR_Box) (FieldLval_13));
                }
                ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, FieldType_14, ArgType_12, (MR_Integer) 0, Var_34, &FieldRval_41);
              }
              Stmt_22 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_11, FieldRval_41, Context_16);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word FieldRval_21;
          MR_Word Var_36;

          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_36, 0) = ((MR_Box) (FieldLval_13));
          }
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, FieldType_14, ArgType_12, (MR_Integer) 0, Var_36, &FieldRval_21);
          switch (MR_tag((MR_Word) FieldWidth_15)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Stmt_22 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_11, FieldRval_21, Context_16);
              break;
            case (MR_Integer) 1:
              {
                MR_Integer Mask_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), FieldWidth_15, (MR_Integer) 0)));
                MR_Word UnpackRval_24;
                MR_Word Var_65;
                MR_Word Var_66;

                {
                  Var_66 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_66, 0) = ((MR_Box) (Mask_23));
                }
                {
                  Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (Var_66));
                }
                {
                  UnpackRval_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), UnpackRval_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), UnpackRval_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[10])));
                  MR_hl_field(MR_mktag(3), UnpackRval_24, 2) = ((MR_Box) (FieldRval_21));
                  MR_hl_field(MR_mktag(3), UnpackRval_24, 3) = ((MR_Box) (Var_65));
                }
                Stmt_22 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_11, UnpackRval_24, Context_16);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer Shift_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), FieldWidth_15, (MR_Integer) 0)));
                MR_Word Var_37;
                MR_Integer Mask_39 = ((MR_Integer) (MR_hl_field(MR_mktag(2), FieldWidth_15, (MR_Integer) 1)));
                MR_Word UnpackRval_40;
                MR_Word Var_77;
                MR_Word Var_78;

                succeeded = (Shift_25 == (MR_Integer) 0);
                if (succeeded)
                  Var_37 = FieldRval_21;
                else
                {
                  MR_Word Var_71;
                  MR_Word Var_72;

                  {
                    Var_72 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_72, 0) = ((MR_Box) (Shift_25));
                  }
                  {
                    Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (Var_72));
                  }
                  {
                    Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[11])));
                    MR_hl_field(MR_mktag(3), Var_37, 2) = ((MR_Box) (FieldRval_21));
                    MR_hl_field(MR_mktag(3), Var_37, 3) = ((MR_Box) (Var_71));
                  }
                }
                {
                  Var_78 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_78, 0) = ((MR_Box) (Mask_39));
                }
                {
                  Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_77, 1) = ((MR_Box) (Var_78));
                }
                {
                  UnpackRval_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), UnpackRval_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), UnpackRval_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[10])));
                  MR_hl_field(MR_mktag(3), UnpackRval_40, 2) = ((MR_Box) (Var_37));
                  MR_hl_field(MR_mktag(3), UnpackRval_40, 3) = ((MR_Box) (Var_77));
                }
                Stmt_22 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_11, UnpackRval_40, Context_16);
              }
              break;
          }
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Stmts_29 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_22));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Stmts_0_28));
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_field_names_and_types_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_25;

    conv0_LambdaHeadVar__2_25 = ml_backend__ml_unify_gen__IntroducedFrom__func__ml_field_names_and_types__1370__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_25));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_field_names_and_types_5_p_0(
  MR_Word Info_6,
  MR_Word Type_7,
  MR_Word ConsId_8,
  MR_Word ArgTypes_9,
  MR_Word * CtorArgRepns_10)
{
  {
    MR_bool succeeded;
    MR_Word MakeUnnamedField_11 = (MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[4];
    MR_Word Var_13;

    succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(Type_7, &Var_13);
    if (succeeded)
    {
      MR_Word TypeCtorInfo_35_35 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
      MR_Integer TupleArity_14;
      MR_Word FieldTypes_15;

      mercury__list__length_2_p_0(TypeCtorInfo_35_35, ArgTypes_9, &TupleArity_14);
      FieldTypes_15 = ml_backend__ml_code_util__ml_make_boxed_types_1_f_0(TupleArity_14);
      *CtorArgRepns_10 = mercury__list__map_2_f_0(TypeCtorInfo_35_35, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0, MakeUnnamedField_11, FieldTypes_15);
    }
    else
    {
      MR_Word TypeCtorInfo_37_37;
      MR_Word TypeCtorInfo_38_38;
      MR_Word ModuleInfo_16;
      MR_Word ConsRepnDefn_17;
      MR_Word CtorArgRepns0_18;
      MR_Integer NumArgs_19;
      MR_Integer NumFieldTypes0_20;
      MR_Integer NumExtraTypes_21;
      MR_Word ExtraFieldTypes_22;
      MR_Word ExtraCtorArgRepns_23;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Integer Var_33;
      MR_Word Var_34;

      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_6, &ModuleInfo_16);
      check_hlds__type_util__get_cons_repn_defn_det_3_p_0(ModuleInfo_16, ConsId_8, &ConsRepnDefn_17);
      Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_17, (MR_Integer) 0)));
      Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_17, (MR_Integer) 1)));
      Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_17, (MR_Integer) 2)));
      CtorArgRepns0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_17, (MR_Integer) 3)));
      Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ConsRepnDefn_17, (MR_Integer) 4)));
      Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_17, (MR_Integer) 5)));
      TypeCtorInfo_37_37 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
      NumArgs_19 = mercury__list__length_1_f_0(TypeCtorInfo_37_37, ArgTypes_9);
      TypeCtorInfo_38_38 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0;
      NumFieldTypes0_20 = mercury__list__length_1_f_0(TypeCtorInfo_38_38, CtorArgRepns0_18);
      NumExtraTypes_21 = (NumArgs_19 - NumFieldTypes0_20);
      ExtraFieldTypes_22 = mercury__list__take_upto_2_f_0(TypeCtorInfo_37_37, NumExtraTypes_21, ArgTypes_9);
      ExtraCtorArgRepns_23 = mercury__list__map_2_f_0(TypeCtorInfo_37_37, TypeCtorInfo_38_38, MakeUnnamedField_11, ExtraFieldTypes_22);
      *CtorArgRepns_10 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_38_38, ExtraCtorArgRepns_23, CtorArgRepns0_18);
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_tag_offset_and_argnum_4_p_0(
  MR_Word Tag_5,
  MR_Integer * Ptag_6,
  MR_Word * Offset_7,
  MR_Integer * ArgNum_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    switch (MR_tag((MR_Word) Tag_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Tag_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *Ptag_6 = (MR_Integer) 0;
              *Offset_7 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
              *ArgNum_8 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_tag_offset_and_argnum\'/4", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_tag_offset_and_argnum\'/4", (MR_String) "unexpected tag");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Tag_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 14:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_tag_offset_and_argnum\'/4", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word SubTag_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_5, (MR_Integer) 2)));
              MR_Integer Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_5, (MR_Integer) 1)));
              MR_Word next_value_of_Tag_5 = SubTag_13;

              // direct tailcall eliminated
              Tag_5 = next_value_of_Tag_5;
              continue;
            }
            break;
          case (MR_Integer) 11:
            {
              *Ptag_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_5, (MR_Integer) 1)));
              *Offset_7 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
              *ArgNum_8 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 12:
            {
              *Ptag_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_5, (MR_Integer) 1)));
              *Offset_7 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
              *ArgNum_8 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Integer _SecondaryTag_11;

              *Ptag_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_5, (MR_Integer) 1)));
              _SecondaryTag_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_5, (MR_Integer) 2)));
              *Offset_7 = (MR_Word) ((MR_Box) ((MR_Integer) 1));
              *ArgNum_8 = (MR_Integer) 1;
            }
            break;
        }
        break;
    }
    break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_extra_arg_assign_9_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_extra_arg_assign__1215__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_extra_arg_assign_9_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_extra_arg_assign__1209__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_extra_arg_assign_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word VarType_2,
  MR_Word VarLval_3,
  MR_Integer CurOffset_4,
  MR_Word ConsIdTag_5,
  MR_Word Context_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
    }
    else
    {
      MR_Word ExtraRvalTypeWidth_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ExtraRvalsTypesWidths_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Stmt_25;
      MR_Word Stmts_26;
      MR_Word HighLevelData_28;
      MR_Word MLDS_VarType_29;
      MR_Word FieldId_30;
      MR_Word MaybePrimaryTag_31;
      MR_Word ExtraRval_32;
      MR_Word ExtraType_33;
      MR_Word ArgWidth_34;
      MR_Integer NextOffset_35;
      MR_Word FieldLval_36;
      MR_Word Var_39;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_50;

      ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_8, &HighLevelData_28);
      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[5]));
        MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_extra_arg_assign_9_p_0_1));
        MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (HighLevelData_28));
        MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) ((MR_Integer) 0));
      }
      mercury__require__expect_3_p_0(Var_39, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_extra_arg_assign\'/9", (MR_String) "high-level data");
      ml_backend__ml_code_util__ml_gen_type_3_p_0(STATE_VARIABLE_Info_0_8, VarType_2, &MLDS_VarType_29);
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_44, 0) = ((MR_Box) (CurOffset_4));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (Var_44));
      }
      {
        FieldId_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FieldId_30, 0) = ((MR_Box) (Var_43));
      }
      MaybePrimaryTag_31 = hlds__hlds_data__get_primary_tag_1_f_0(ConsIdTag_5);
      ExtraRval_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExtraRvalTypeWidth_18, (MR_Integer) 0)));
      ExtraType_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExtraRvalTypeWidth_18, (MR_Integer) 1)));
      ArgWidth_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExtraRvalTypeWidth_18, (MR_Integer) 2)));
      {
        Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_extra_arg_assign_9_p_0_2));
        MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (ArgWidth_34));
        MR_hl_field(MR_mktag(0), Var_45, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      mercury__require__expect_3_p_0(Var_45, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_extra_arg_assign\'/9", (MR_String) "ArgWidth != full_word");
      NextOffset_35 = (CurOffset_4 + (MR_Integer) 1);
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_50, 0) = ((MR_Box) (VarLval_3));
      }
      {
        FieldLval_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FieldLval_36, 0) = ((MR_Box) (MaybePrimaryTag_31));
        MR_hl_field(MR_mktag(0), FieldLval_36, 1) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(0), FieldLval_36, 2) = ((MR_Box) (FieldId_30));
        MR_hl_field(MR_mktag(0), FieldLval_36, 3) = ((MR_Box) (ExtraType_33));
        MR_hl_field(MR_mktag(0), FieldLval_36, 4) = ((MR_Box) (MLDS_VarType_29));
      }
      Stmt_25 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLval_36, ExtraRval_32, Context_6);
      ml_backend__ml_unify_gen__ml_gen_extra_arg_assign_9_p_0(ExtraRvalsTypesWidths_19, VarType_2, VarLval_3, NextOffset_35, ConsIdTag_5, Context_6, &Stmts_26, STATE_VARIABLE_Info_0_8, STATE_VARIABLE_Info_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__7_7 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_25));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Stmts_26));
      }
    }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_gen_mktag_1_f_0(
  MR_Integer Ptag_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_6;
    MR_Word Var_7;

    {
      Var_7 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_7, 0) = ((MR_Box) (Ptag_3));
    }
    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_6, 1) = ((MR_Box) (Var_7));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_3[2])));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 2) = ((MR_Box) (Var_6));
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_field_take_address_assigns_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CellLval_2,
  MR_Word CellType_3,
  MR_Word MaybePtag_4,
  MR_Word Context_5,
  MR_Word Info_6,
  MR_Word * HeadVar__7_7)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word TakeAddrInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word TakeAddrInfos_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Assign_20;
    MR_Word Assigns_21;
    MR_Word AddrVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), TakeAddrInfo_13, (MR_Integer) 0)));
    MR_Word Offset_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), TakeAddrInfo_13, (MR_Integer) 1)));
    MR_Word FieldType_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), TakeAddrInfo_13, (MR_Integer) 3)));
    MR_Word HighLevelData_26;
    MR_Word _ConsArgType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), TakeAddrInfo_13, (MR_Integer) 2)));

    ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(Info_6, &HighLevelData_26);
    switch (HighLevelData_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer OffsetInt_27 = (MR_Integer) Offset_23;
          MR_Word SourceRval_28;
          MR_Word AddrLval_29;
          MR_Word AddrVarType_30;
          MR_Word ModuleInfo_31;
          MR_Word MLDS_AddrVarType_32;
          MR_Word CastSourceRval_33;
          MR_Word Var_35;
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word Var_39;
          MR_Word Var_40;

          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_36, 0) = ((MR_Box) (CellLval_2));
          }
          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_39, 0) = ((MR_Box) (OffsetInt_27));
          }
          {
            Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (Var_39));
          }
          {
            Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (Var_38));
          }
          {
            Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (MaybePtag_4));
            MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (Var_36));
            MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) (Var_37));
            MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (FieldType_25));
            MR_hl_field(MR_mktag(0), Var_35, 4) = ((MR_Box) (CellType_3));
          }
          {
            SourceRval_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), SourceRval_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), SourceRval_28, 1) = ((MR_Box) (Var_35));
          }
          ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_6, AddrVar_22, &AddrLval_29);
          ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_6, AddrVar_22, &AddrVarType_30);
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_6, &ModuleInfo_31);
          MLDS_AddrVarType_32 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_31, AddrVarType_30);
          {
            Var_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_40, 0) = ((MR_Box) (MLDS_AddrVarType_32));
          }
          {
            CastSourceRval_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CastSourceRval_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), CastSourceRval_33, 1) = ((MR_Box) (Var_40));
            MR_hl_field(MR_mktag(3), CastSourceRval_33, 2) = ((MR_Box) (SourceRval_28));
          }
          Assign_20 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(AddrLval_29, CastSourceRval_33, Context_5);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_34;
          MR_Word AddrLval_41;

          ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_6, AddrVar_22, &AddrLval_41);
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_34, 0) = ((MR_Box) (CellLval_2));
          }
          Assign_20 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(AddrLval_41, Var_34, Context_5);
        }
        break;
    }
    ml_backend__ml_unify_gen__ml_gen_field_take_address_assigns_7_p_0(TakeAddrInfos_14, CellLval_2, CellType_3, MaybePtag_4, Context_5, Info_6, &Assigns_21);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__7_7 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Assign_20));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Assigns_21));
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_52;

    conv0_LambdaHeadVar__2_52 = ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_new_object_statically__689__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_52));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_13_p_0(
  MR_Word MaybeConsId_14,
  MR_Word MaybeCtorName_15,
  MR_Integer Ptag_16,
  MR_Word Var_17,
  MR_Word VarLval_18,
  MR_Word VarType_19,
  MR_Word MLDS_Type_20,
  MR_Word ExtraRvalsTypesWidths_21,
  MR_Word ArgVars_22,
  MR_Word Context_23,
  MR_Word * Stmts_24,
  MR_Word STATE_VARIABLE_Info_0_44,
  MR_Word * STATE_VARIABLE_Info_45)
{
  {
    MR_Word ArgVarsTypesWidths_26;
    MR_Word ModuleInfo_28;
    MR_Word HighLevelData_29;
    MR_Word ExtraArgRvalsTypesWidths_30;
    MR_Word ArgRvalsTypesWidths_31;
    MR_Word UsesBaseClass_33;
    MR_Word ExtraArgRvals_34;
    MR_Word Target_38;
    MR_Word GroundTerm_39;
    MR_Word Rval_40;
    MR_Word AssignStmt_43;
    MR_Word STATE_VARIABLE_GlobalData_46_46;
    MR_Word STATE_VARIABLE_GlobalData_49_49;
    MR_Word STATE_VARIABLE_GlobalData_53_53;
    MR_Word STATE_VARIABLE_Info_54_54;
    MR_Word Var_41;
    MR_Word Var_42;

    ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0(STATE_VARIABLE_Info_0_44, VarType_19, MaybeConsId_14, ArgVars_22, &ArgVarsTypesWidths_26);
    ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_44, &STATE_VARIABLE_GlobalData_46_46);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_44, &ModuleInfo_28);
    ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_44, &HighLevelData_29);
    switch (HighLevelData_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word STATE_VARIABLE_GlobalData_48_48;

          ml_backend__ml_unify_gen__ml_gen_box_extra_const_rval_list_lld_6_p_0(ModuleInfo_28, Context_23, ExtraRvalsTypesWidths_21, &ExtraArgRvalsTypesWidths_30, STATE_VARIABLE_GlobalData_46_46, &STATE_VARIABLE_GlobalData_48_48);
          ml_backend__ml_unify_gen__ml_gen_box_const_rval_list_lld_6_p_0(STATE_VARIABLE_Info_0_44, Context_23, ArgVarsTypesWidths_26, &ArgRvalsTypesWidths_31, STATE_VARIABLE_GlobalData_48_48, &STATE_VARIABLE_GlobalData_49_49);
        }
        break;
      case (MR_Integer) 1:
        {
          ml_backend__ml_unify_gen__ml_gen_box_or_unbox_const_rval_list_hld_6_p_0(STATE_VARIABLE_Info_0_44, Context_23, ArgVarsTypesWidths_26, &ArgRvalsTypesWidths_31, STATE_VARIABLE_GlobalData_46_46, &STATE_VARIABLE_GlobalData_49_49);
          ExtraArgRvalsTypesWidths_30 = ExtraRvalsTypesWidths_21;
        }
        break;
    }
    if ((MaybeCtorName_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      UsesBaseClass_33 = (MR_Integer) 1;
    else
      UsesBaseClass_33 = (MR_Integer) 0;
    ExtraArgRvals_34 = mercury__list__map_2_f_0((MR_Word) &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_mlds_rval_type_and_width_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[3], ExtraArgRvalsTypesWidths_30);
    ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_44, &Target_38);
    ml_backend__ml_unify_gen__construct_static_ground_term_14_p_0(ModuleInfo_28, Target_38, HighLevelData_29, Context_23, VarType_19, MLDS_Type_20, MaybeConsId_14, UsesBaseClass_33, Ptag_16, ExtraArgRvals_34, ArgRvalsTypesWidths_31, &GroundTerm_39, STATE_VARIABLE_GlobalData_49_49, &STATE_VARIABLE_GlobalData_53_53);
    ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(STATE_VARIABLE_GlobalData_53_53, STATE_VARIABLE_Info_0_44, &STATE_VARIABLE_Info_54_54);
    ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_17, GroundTerm_39, STATE_VARIABLE_Info_54_54, STATE_VARIABLE_Info_45);
    Rval_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_39, (MR_Integer) 0)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_39, (MR_Integer) 1)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_39, (MR_Integer) 2)));
    AssignStmt_43 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_18, Rval_40, Context_23);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_24 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (AssignStmt_43));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__construct_static_ground_term_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_44;

    conv0_LambdaHeadVar__2_44 = ml_backend__ml_unify_gen__IntroducedFrom__func__construct_static_ground_term__2946__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_44));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__construct_static_ground_term_14_p_0(
  MR_Word ModuleInfo_15,
  MR_Word Target_16,
  MR_Word HighLevelData_17,
  MR_Word Context_18,
  MR_Word VarType_19,
  MR_Word MLDS_Type_20,
  MR_Word MaybeConsId_21,
  MR_Word UsesBaseClass_22,
  MR_Integer Ptag_23,
  MR_Word ExtraRvals_24,
  MR_Word RvalsTypesWidths_25,
  MR_Word * GroundTerm_26,
  MR_Word STATE_VARIABLE_GlobalData_0_40,
  MR_Word * STATE_VARIABLE_GlobalData_41)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_50_50;
    MR_Word NonExtraInits_28;
    MR_Word ExtraInits_29;
    MR_Word AllInits_31;
    MR_Word ConstType_32;
    MR_Word Initializer_34;
    MR_Word ModuleName_35;
    MR_Word MLDS_ModuleName_36;
    MR_Word ConstDataAddrRval_37;
    MR_Word TaggedRval_38;
    MR_Word Rval_39;
    MR_Word Var_47;
    MR_Word Var_33;

    ml_backend__ml_unify_gen__ml_pack_ground_term_args_into_word_inits_2_p_0(RvalsTypesWidths_25, &NonExtraInits_28);
    TypeCtorInfo_50_50 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
    ExtraInits_29 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, TypeCtorInfo_50_50, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[2], ExtraRvals_24);
    AllInits_31 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_50_50, ExtraInits_29, NonExtraInits_28);
    ConstType_32 = ml_backend__ml_unify_gen__get_const_type_for_cons_id_5_f_0(Target_16, HighLevelData_17, MLDS_Type_20, UsesBaseClass_22, MaybeConsId_21);
    succeeded = ((((MR_tag((MR_Word) ConstType_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConstType_32, (MR_Integer) 0)))) == (MR_Integer) 4)));
    if (succeeded)
    {
      Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConstType_32, (MR_Integer) 1)));
      {
        Initializer_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Initializer_34, 0) = ((MR_Box) (AllInits_31));
      }
    }
    else
      {
        Initializer_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Initializer_34, 0) = ((MR_Box) (ConstType_32));
        MR_hl_field(MR_mktag(2), Initializer_34, 1) = ((MR_Box) (AllInits_31));
      }
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_15, &ModuleName_35);
    MLDS_ModuleName_36 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_35);
    ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_p_0(MLDS_ModuleName_36, (MR_Integer) 0, ConstType_32, Initializer_34, Context_18, &ConstDataAddrRval_37, STATE_VARIABLE_GlobalData_0_40, STATE_VARIABLE_GlobalData_41);
    succeeded = (Ptag_23 == (MR_Integer) 0);
    if (succeeded)
      TaggedRval_38 = ConstDataAddrRval_37;
    else
      {
        TaggedRval_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), TaggedRval_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), TaggedRval_38, 1) = ((MR_Box) (Ptag_23));
        MR_hl_field(MR_mktag(3), TaggedRval_38, 2) = ((MR_Box) (ConstDataAddrRval_37));
      }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_47, 0) = ((MR_Box) (MLDS_Type_20));
    }
    {
      Rval_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Rval_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), Rval_39, 1) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(3), Rval_39, 2) = ((MR_Box) (TaggedRval_38));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *GroundTerm_26 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_39));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarType_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MLDS_Type_20));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_pack_ground_term_args_into_word_inits_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word RvalTypeWidth_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word RvalsTypesWidths_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Init_5;
      MR_Word Inits_6;
      MR_Word Rval_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), RvalTypeWidth_3, (MR_Integer) 0)));
      MR_Word Width_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), RvalTypeWidth_3, (MR_Integer) 2)));
      MR_Word _Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), RvalTypeWidth_3, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) Width_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              Init_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Init_5, 0) = ((MR_Box) (Rval_7));
            }
            ml_backend__ml_unify_gen__ml_pack_ground_term_args_into_word_inits_2_p_0(RvalsTypesWidths_4, &Inits_6);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word LeftOverRvalsTypesWidths_11;
            MR_Word OrAllRval_12;
            MR_Word RevOrRvals0_21;
            MR_Word RevOrRvals_22;
            MR_Word OrRvals_23;
            MR_Word Var_26;
            MR_Word Var_39;
            MR_Word Var_35;

            succeeded = ((((MR_tag((MR_Word) Rval_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1)));
              succeeded = ((((MR_tag((MR_Word) Var_39)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_39, (MR_Integer) 0)))) == (MR_Integer) 20)));
              if (succeeded)
                Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_39, (MR_Integer) 1)));
            }
            if (succeeded)
            {
              Var_26 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[7]);
            }
            else
            {
              succeeded = MR_TRUE;
              if (succeeded)
                Var_26 = Rval_7;
              else
              {
                MR_Word SubRval0_37;
                MR_Word Var_42;
                MR_Word Type_36;

                succeeded = ((((MR_tag((MR_Word) Rval_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1)));
                  SubRval0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 2)));
                  succeeded = ((MR_tag((MR_Word) Var_42)) == (MR_mktag((MR_Integer) 0)));
                  if (succeeded)
                    Type_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 0)));
                }
                if (succeeded)
                {
                  MR_Word SubRval_38;

                  {
                    SubRval_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), SubRval_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), SubRval_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[8])));
                    MR_hl_field(MR_mktag(3), SubRval_38, 2) = ((MR_Box) (SubRval0_37));
                    MR_hl_field(MR_mktag(3), SubRval_38, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[7])));
                  }
                  {
                    Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (Var_42));
                    MR_hl_field(MR_mktag(3), Var_26, 2) = ((MR_Box) (SubRval_38));
                  }
                }
                else
                {
                  {
                    Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[8])));
                    MR_hl_field(MR_mktag(3), Var_26, 2) = ((MR_Box) (Rval_7));
                    MR_hl_field(MR_mktag(3), Var_26, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[7])));
                  }
                }
              }
            }
            {
              RevOrRvals0_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), RevOrRvals0_21, 0) = ((MR_Box) (Var_26));
              MR_hl_field(MR_mktag(1), RevOrRvals0_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            ml_backend__ml_unify_gen__ml_pack_into_one_word_loop_4_p_0(RvalsTypesWidths_4, &LeftOverRvalsTypesWidths_11, RevOrRvals0_21, &RevOrRvals_22);
            mercury__list__reverse_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, RevOrRvals_22, &OrRvals_23);
            if ((OrRvals_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_pack_into_one_word\'/4", (MR_String) "OrRvals = []");
                return;
              }
            }
            else
            {
              MR_Word HeadOrRval_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), OrRvals_23, (MR_Integer) 0)));
              MR_Word TailOrRvals_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), OrRvals_23, (MR_Integer) 1)));

              ml_backend__ml_unify_gen__or_packed_rvals_3_p_0(HeadOrRval_24, TailOrRvals_25, &OrAllRval_12);
            }
            {
              Init_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Init_5, 0) = ((MR_Box) (OrAllRval_12));
            }
            ml_backend__ml_unify_gen__ml_pack_ground_term_args_into_word_inits_2_p_0(LeftOverRvalsTypesWidths_11, &Inits_6);
          }
          break;
        case (MR_Integer) 2:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_pack_ground_term_args_into_word_inits\'/2", (MR_String) "partial_word_shifted");
              return;
            }
          }
          break;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Init_5));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Inits_6));
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__or_packed_rvals_3_p_0(
  MR_Word HeadRval_4,
  MR_Word TailRvals_5,
  MR_Word * OrAllRval_6)
{
  {
    MR_bool succeeded;

    if ((TailRvals_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *OrAllRval_6 = HeadRval_4;
    else
    {
      MR_Word HeadTailRval_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), TailRvals_5, (MR_Integer) 0)));
      MR_Word TailTailRvals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), TailRvals_5, (MR_Integer) 1)));
      MR_Word TailOrAllRval_9;
      MR_Word UnboxRvalA_16;
      MR_Word STATE_VARIABLE_MaybeType_18_24;
      MR_Word Var_27;
      MR_Word TypeA_14;
      MR_Word UnboxRvalA0_15;
      MR_Word Var_23;
      MR_Word UnboxRvalB0_18;
      MR_Word Var_25;
      MR_Word TypeB_17;

      ml_backend__ml_unify_gen__or_packed_rvals_3_p_0(HeadTailRval_7, TailTailRvals_8, &TailOrAllRval_9);
      succeeded = ((((MR_tag((MR_Word) HeadRval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadRval_4, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadRval_4, (MR_Integer) 1)));
        UnboxRvalA0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadRval_4, (MR_Integer) 2)));
        succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
          TypeA_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0)));
      }
      if (succeeded)
      {
        UnboxRvalA_16 = UnboxRvalA0_15;
        {
          STATE_VARIABLE_MaybeType_18_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeType_18_24, 0) = ((MR_Box) (TypeA_14));
        }
      }
      else
      {
        UnboxRvalA_16 = HeadRval_4;
        STATE_VARIABLE_MaybeType_18_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      Var_27 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[9]);
      succeeded = ((((MR_tag((MR_Word) TailOrAllRval_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TailOrAllRval_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), TailOrAllRval_9, (MR_Integer) 1)));
        UnboxRvalB0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), TailOrAllRval_9, (MR_Integer) 2)));
        succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
          TypeB_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0)));
      }
      if (succeeded)
      {
        MR_Word UnboxRval_20;

        {
          UnboxRval_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), UnboxRval_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), UnboxRval_20, 1) = ((MR_Box) (Var_27));
          MR_hl_field(MR_mktag(3), UnboxRval_20, 2) = ((MR_Box) (UnboxRvalA_16));
          MR_hl_field(MR_mktag(3), UnboxRval_20, 3) = ((MR_Box) (UnboxRvalB0_18));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *OrAllRval_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_25));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (UnboxRval_20));
        }
      }
      else
      {
        MR_Word UnboxRval_35;

        {
          UnboxRval_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), UnboxRval_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), UnboxRval_35, 1) = ((MR_Box) (Var_27));
          MR_hl_field(MR_mktag(3), UnboxRval_35, 2) = ((MR_Box) (UnboxRvalA_16));
          MR_hl_field(MR_mktag(3), UnboxRval_35, 3) = ((MR_Box) (TailOrAllRval_9));
        }
        if ((STATE_VARIABLE_MaybeType_18_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *OrAllRval_6 = UnboxRval_35;
        else
        {
          MR_Word BoxType_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeType_18_24, (MR_Integer) 0)));
          MR_Word Var_31;

          {
            Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (BoxType_30));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *OrAllRval_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_31));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (UnboxRval_35));
          }
        }
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_pack_into_one_word_loop_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevOrRvals_0_3,
  MR_Word * STATE_VARIABLE_RevOrRvals_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_RevOrRvals_4 = STATE_VARIABLE_RevOrRvals_0_3;
    }
    else
    {
      MR_Word RvalTypeWidth_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word RvalsTypesWidths_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Rval_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), RvalTypeWidth_8, (MR_Integer) 0)));
      MR_Word Width_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), RvalTypeWidth_8, (MR_Integer) 2)));
      MR_Word _Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), RvalTypeWidth_8, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) Width_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__2_2 = HeadVar__1_1;
            *STATE_VARIABLE_RevOrRvals_4 = STATE_VARIABLE_RevOrRvals_0_3;
          }
          break;
        case (MR_Integer) 1:
          {
            *HeadVar__2_2 = HeadVar__1_1;
            *STATE_VARIABLE_RevOrRvals_4 = STATE_VARIABLE_RevOrRvals_0_3;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer Shift_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Width_14, (MR_Integer) 0)));
            MR_Word ShiftedRval_17;
            MR_Word STATE_VARIABLE_RevOrRvals_20_20;
            MR_Integer _Mask_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Width_14, (MR_Integer) 1)));
            MR_Word Var_31;
            MR_Word Var_27;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_STATE_VARIABLE_RevOrRvals_0_3;

            succeeded = ((((MR_tag((MR_Word) Rval_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 1)));
              succeeded = ((((MR_tag((MR_Word) Var_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_31, (MR_Integer) 0)))) == (MR_Integer) 20)));
              if (succeeded)
                Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_31, (MR_Integer) 1)));
            }
            if (succeeded)
            {
              ShiftedRval_17 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[7]);
            }
            else
            {
              succeeded = (Shift_16 == (MR_Integer) 0);
              if (succeeded)
                ShiftedRval_17 = Rval_12;
              else
              {
                MR_Word SubRval0_29;
                MR_Word Var_34;
                MR_Word Type_28;

                succeeded = ((((MR_tag((MR_Word) Rval_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 1)));
                  SubRval0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 2)));
                  succeeded = ((MR_tag((MR_Word) Var_34)) == (MR_mktag((MR_Integer) 0)));
                  if (succeeded)
                    Type_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 0)));
                }
                if (succeeded)
                {
                  MR_Word SubRval_30;
                  MR_Word Var_37;
                  MR_Word Var_38;

                  {
                    Var_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_38, 0) = ((MR_Box) (Shift_16));
                  }
                  {
                    Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (Var_38));
                  }
                  {
                    SubRval_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), SubRval_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), SubRval_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[8])));
                    MR_hl_field(MR_mktag(3), SubRval_30, 2) = ((MR_Box) (SubRval0_29));
                    MR_hl_field(MR_mktag(3), SubRval_30, 3) = ((MR_Box) (Var_37));
                  }
                  {
                    ShiftedRval_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ShiftedRval_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), ShiftedRval_17, 1) = ((MR_Box) (Var_34));
                    MR_hl_field(MR_mktag(3), ShiftedRval_17, 2) = ((MR_Box) (SubRval_30));
                  }
                }
                else
                {
                  MR_Word Var_42;
                  MR_Word Var_43;

                  {
                    Var_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_43, 0) = ((MR_Box) (Shift_16));
                  }
                  {
                    Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (Var_43));
                  }
                  {
                    ShiftedRval_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ShiftedRval_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), ShiftedRval_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[8])));
                    MR_hl_field(MR_mktag(3), ShiftedRval_17, 2) = ((MR_Box) (Rval_12));
                    MR_hl_field(MR_mktag(3), ShiftedRval_17, 3) = ((MR_Box) (Var_42));
                  }
                }
              }
            }
            {
              STATE_VARIABLE_RevOrRvals_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevOrRvals_20_20, 0) = ((MR_Box) (ShiftedRval_17));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevOrRvals_20_20, 1) = ((MR_Box) (STATE_VARIABLE_RevOrRvals_0_3));
            }
            // direct tailcall eliminated
            next_value_of_HeadVar__1_1 = RvalsTypesWidths_9;
            next_value_of_STATE_VARIABLE_RevOrRvals_0_3 = STATE_VARIABLE_RevOrRvals_20_20;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            STATE_VARIABLE_RevOrRvals_0_3 = next_value_of_STATE_VARIABLE_RevOrRvals_0_3;
            continue;
          }
          break;
      }
    }
    break;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__get_const_type_for_cons_id_5_f_0(
  MR_Word Target_7,
  MR_Word HighLevelData_8,
  MR_Word MLDS_Type_9,
  MR_Word UsesBaseClass_10,
  MR_Word MaybeConsId_11)
{
  {
    MR_bool succeeded;
    MR_Word ConstType_12;

    switch (HighLevelData_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ConstType_12 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[6]);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorCategory_14;
          MR_Word Var_13;
          MR_Word Var_15;
          MR_Word Var_16;

          succeeded = (Target_7 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = ((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 1)));
              TypeCtorCategory_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 2)));
              Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 3)));
              succeeded = ((((MR_tag((MR_Word) TypeCtorCategory_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeCtorCategory_14, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
                Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeCtorCategory_14, (MR_Integer) 1)));
            }
          }
          if (succeeded)
          {
            ConstType_12 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[6]);
          }
          else
          {
            MR_Word CtorSymName_18;
            MR_Integer CtorArity_19;
            MR_Word QualTypeName_21;
            MR_Integer TypeArity_22;
            MR_Word ConsId_17;
            MR_Word _TypeCtor_20;

            succeeded = (UsesBaseClass_10 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) MaybeConsId_11)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                ConsId_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeConsId_11, (MR_Integer) 0)));
                succeeded = ((((MR_tag((MR_Word) ConsId_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  CtorSymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_17, (MR_Integer) 1)));
                  CtorArity_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_17, (MR_Integer) 2)));
                  _TypeCtor_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_17, (MR_Integer) 3)));
                  if (((MR_tag((MR_Word) MLDS_Type_9)) == (MR_mktag((MR_Integer) 1))))
                  {
                    MR_Word Var_48 = (MR_Word) MR_body(((MR_Word) MLDS_Type_9), (MR_Integer) 1);
                    MR_Word Var_23;

                    QualTypeName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 0)));
                    TypeArity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 1)));
                    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 2)));
                    succeeded = MR_TRUE;
                  }
                  else
                  if (((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0)))) == (MR_Integer) 0))))
                  {
                    MR_Word MercuryType_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 1)));
                    MR_Word TypeCtor_27;
                    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 2)));
                    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 3)));
                    MR_Word Var_25;

                    succeeded = ((((MR_tag((MR_Word) Var_47)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_47, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_47, (MR_Integer) 1)));
                      succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(MercuryType_24, &TypeCtor_27);
                      if (succeeded)
                      {
                        ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_27, &QualTypeName_21, &TypeArity_22);
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  else
                    succeeded = MR_FALSE;
                }
              }
            }
            if (succeeded)
            {
              MR_String UnqualTypeName_30 = ((MR_String) (MR_hl_field(MR_mktag(0), QualTypeName_21, (MR_Integer) 2)));
              MR_String CtorName_31;
              MR_Word MLDS_Module_32;
              MR_String TypeName_34;
              MR_Word ClassQualifier_35;
              MR_Word QualClassName_36;
              MR_Word ClassId_37;
              MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualTypeName_21, (MR_Integer) 0)));
              MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualTypeName_21, (MR_Integer) 1)));
              MR_Word _QualKind_33;

              CtorName_31 = ml_backend__ml_type_gen__ml_gen_du_ctor_name_unqual_type_5_f_0(Target_7, UnqualTypeName_30, TypeArity_22, CtorSymName_18, CtorArity_19);
              MLDS_Module_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualTypeName_21, (MR_Integer) 0)));
              _QualKind_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualTypeName_21, (MR_Integer) 1)));
              TypeName_34 = ((MR_String) (MR_hl_field(MR_mktag(0), QualTypeName_21, (MR_Integer) 2)));
              ClassQualifier_35 = ml_backend__mlds__mlds_append_class_qualifier_module_qual_3_f_0(MLDS_Module_32, TypeName_34, TypeArity_22);
              {
                QualClassName_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), QualClassName_36, 0) = ((MR_Box) (ClassQualifier_35));
                MR_hl_field(MR_mktag(0), QualClassName_36, 1) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), QualClassName_36, 2) = ((MR_Box) (CtorName_31));
              }
              {
                ClassId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ClassId_37, 0) = ((MR_Box) (QualClassName_36));
                MR_hl_field(MR_mktag(0), ClassId_37, 1) = ((MR_Box) (CtorArity_19));
                MR_hl_field(MR_mktag(0), ClassId_37, 2) = ((MR_Box) ((MR_Integer) 0));
              }
              ConstType_12 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ClassId_37);
            }
            else
            {
              MR_Word TypeCtor_61;
              MR_Word Var_51;
              MR_Word MercuryType_58;
              MR_Word Var_39;
              MR_Word Var_38;

              succeeded = ((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                MercuryType_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 1)));
                Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 2)));
                Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 3)));
                succeeded = ((((MR_tag((MR_Word) Var_51)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_51, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_51, (MR_Integer) 1)));
                  succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(MercuryType_58, &TypeCtor_61);
                }
              }
              if (succeeded)
              {
                MR_Word ClassName_40;
                MR_Integer ClassArity_41;
                MR_Word ClassId_59;

                ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_61, &ClassName_40, &ClassArity_41);
                {
                  ClassId_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ClassId_59, 0) = ((MR_Box) (ClassName_40));
                  MR_hl_field(MR_mktag(0), ClassId_59, 1) = ((MR_Box) (ClassArity_41));
                  MR_hl_field(MR_mktag(0), ClassId_59, 2) = ((MR_Box) ((MR_Integer) 0));
                }
                ConstType_12 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ClassId_59);
              }
              else
              {
                MR_Word Var_53;
                MR_Word Var_42;
                MR_Word Var_43;

                succeeded = ((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 1)));
                  Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 2)));
                  Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 3)));
                  succeeded = (Var_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                }
                if (succeeded)
                {
                  ConstType_12 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[6]);
                }
                else
                {
                  MR_Word Var_55;
                  MR_Word Var_44;
                  MR_Word Var_45;

                  succeeded = ((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 1)));
                    Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 2)));
                    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 3)));
                    succeeded = (Var_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  if (succeeded)
                  {
                    ConstType_12 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[6]);
                  }
                  else
                    ConstType_12 = MLDS_Type_9;
                }
              }
            }
          }
        }
        break;
    }
    return ConstType_12;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_ArgTypeWidth_8;

    ml_backend__ml_unify_gen__lookup_type_and_specify_width_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), wrapper_arg_1, &conv4_ArgTypeWidth_8);
    *wrapper_arg_2 = ((MR_Box) (conv4_ArgTypeWidth_8));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_ArgTypeWidth_8;

    ml_backend__ml_unify_gen__specify_type_and_width_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), wrapper_arg_1, &conv3_ArgTypeWidth_8);
    *wrapper_arg_2 = ((MR_Box) (conv3_ArgTypeWidth_8));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_ArgTypeWidth_8;

    ml_backend__ml_unify_gen__lookup_type_and_specify_width_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), wrapper_arg_1, &conv2_ArgTypeWidth_8);
    *wrapper_arg_2 = ((MR_Box) (conv2_ArgTypeWidth_8));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__cons_id_arg_types_and_widths__2847__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    conv1_HeadVar__3_3 = hlds__vartypes__lookup_var_type_func_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_ArgTypeWidth_8;

    ml_backend__ml_unify_gen__specify_type_and_width_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), wrapper_arg_1, &conv0_ArgTypeWidth_8);
    *wrapper_arg_2 = ((MR_Box) (conv0_ArgTypeWidth_8));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0(
  MR_Word Info_6,
  MR_Word VarType_7,
  MR_Word MaybeConsId_8,
  MR_Word ArgVars_9,
  MR_Word * ArgVarsTypesWidths_10)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_11;
    MR_Word VarTypes_12;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_6, &ModuleInfo_11);
    ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(Info_6, &VarTypes_12);
    if ((MaybeConsId_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word TypeInfo_20_20;
      MR_Word Var_14;
      MR_Word Var_24;

      Var_14 = ml_backend__ml_code_util__ml_make_boxed_type_0_f_0();
      TypeInfo_20_20 = (MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2];
      {
        Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (TypeInfo_20_20));
        MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (Var_14));
        MR_hl_field(MR_mktag(0), Var_24, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      mercury__list__map_3_p_0(TypeInfo_20_20, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[3], Var_24, ArgVars_9, ArgVarsTypesWidths_10);
    }
    else
    {
      MR_Word TypeInfo_for_Arg_66;
      MR_Word ConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeConsId_8, (MR_Integer) 0)));
      MR_Word Var_15;
      MR_Word Var_37;
      MR_Integer Var_38;
      MR_Word Var_39;

      {
        Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_7[0]));
        MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0_2));
        MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (VarTypes_12));
      }
      TypeInfo_for_Arg_66 = (MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2];
      succeeded = ((((MR_tag((MR_Word) ConsId_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_13, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_13, (MR_Integer) 1)));
        Var_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_13, (MR_Integer) 2)));
        Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_13, (MR_Integer) 3)));
        succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(VarType_7);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word ConsRepnDefn_40;

        succeeded = check_hlds__type_util__get_cons_repn_defn_3_p_0(ModuleInfo_11, ConsId_13, &ConsRepnDefn_40);
        if (succeeded)
        {
          MR_Word ConsArgRepns_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_40, (MR_Integer) 3)));
          MR_Integer NumExtraArgs_42;
          MR_Integer Var_48;
          MR_Integer Var_49;
          MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_40, (MR_Integer) 0)));
          MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_40, (MR_Integer) 1)));
          MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_40, (MR_Integer) 2)));
          MR_Integer Var_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ConsRepnDefn_40, (MR_Integer) 4)));
          MR_Word Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_40, (MR_Integer) 5)));

          Var_48 = mercury__list__length_1_f_0(TypeInfo_for_Arg_66, ArgVars_9);
          Var_49 = mercury__list__length_1_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0, ConsArgRepns_41);
          NumExtraArgs_42 = (Var_48 - Var_49);
          succeeded = (NumExtraArgs_42 == (MR_Integer) 0);
          if (succeeded)
            ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_114_103_115_95_116_121_112_101_115_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(ArgVars_9, ConsArgRepns_41, ArgVarsTypesWidths_10);
          else
          {
            MR_Word TypeInfo_50_72;
            MR_Word ExtraArgs_43;
            MR_Word NonExtraArgs_44;
            MR_Word ExtraArgsTypesWidths_45;
            MR_Word NonExtraArgsTypesWidths_46;
            MR_Word Var_54;

            mercury__require__expect_3_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_4[2], (MR_String) "predicate \140ml_backend.ml_unify_gen.cons_id_arg_types_and_widths\'/7", (MR_String) "extra args in static struct");
            mercury__list__det_split_list_4_p_0(TypeInfo_for_Arg_66, NumExtraArgs_42, ArgVars_9, &ExtraArgs_43, &NonExtraArgs_44);
            {
              Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_6[1]));
              MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0_4));
              MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (TypeInfo_for_Arg_66));
              MR_hl_field(MR_mktag(0), Var_54, 4) = ((MR_Box) (Var_15));
              MR_hl_field(MR_mktag(0), Var_54, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            TypeInfo_50_72 = (MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[3];
            mercury__list__map_3_p_0(TypeInfo_for_Arg_66, TypeInfo_50_72, Var_54, ExtraArgs_43, &ExtraArgsTypesWidths_45);
            ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_114_103_115_95_116_121_112_101_115_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(NonExtraArgs_44, ConsArgRepns_41, &NonExtraArgsTypesWidths_46);
            *ArgVarsTypesWidths_10 = mercury__list__f_43_43_2_f_0(TypeInfo_50_72, ExtraArgsTypesWidths_45, NonExtraArgsTypesWidths_46);
          }
        }
        else
        {
          MR_Word Var_47;

          succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(VarType_7, &Var_47);
          if (succeeded)
          {
            MR_Word Var_56;
            MR_Word Var_80;

            Var_56 = ml_backend__ml_code_util__ml_make_boxed_type_0_f_0();
            {
              Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_6[0]));
              MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0_5));
              MR_hl_field(MR_mktag(0), Var_80, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), Var_80, 3) = ((MR_Box) (TypeInfo_for_Arg_66));
              MR_hl_field(MR_mktag(0), Var_80, 4) = ((MR_Box) (Var_56));
              MR_hl_field(MR_mktag(0), Var_80, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            mercury__list__map_3_p_0(TypeInfo_for_Arg_66, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[3], Var_80, ArgVars_9, ArgVarsTypesWidths_10);
          }
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.cons_id_arg_types_and_widths\'/7", (MR_String) "get_cons_defn failed");
              return;
            }
          }
        }
      }
      else
      {
        MR_Word Var_59;

        {
          Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_6[1]));
          MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0_6));
          MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (TypeInfo_for_Arg_66));
          MR_hl_field(MR_mktag(0), Var_59, 4) = ((MR_Box) (Var_15));
          MR_hl_field(MR_mktag(0), Var_59, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        mercury__list__map_3_p_0(TypeInfo_for_Arg_66, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[3], Var_59, ArgVars_9, ArgVarsTypesWidths_10);
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_114_103_115_95_116_121_112_101_115_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.zip_args_types_widths\'/3", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Box Var_30 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.zip_args_types_widths\'/3", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word ConsArgRepn_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ConsArgRepns_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgTypeWidth_18;
      MR_Word ArgsTypesWidth_19;
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsArgRepn_16, (MR_Integer) 1)));
      MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsArgRepn_16, (MR_Integer) 2)));
      MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsArgRepn_16, (MR_Integer) 0)));
      MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsArgRepn_16, (MR_Integer) 3)));

      {
        ArgTypeWidth_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ArgTypeWidth_18, 0) = Var_30;
        MR_hl_field(MR_mktag(0), ArgTypeWidth_18, 1) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(0), ArgTypeWidth_18, 2) = ((MR_Box) (Var_23));
      }
      ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_114_103_115_95_116_121_112_101_115_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(Var_29, ConsArgRepns_17, &ArgsTypesWidth_19);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgTypeWidth_18));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgsTypesWidth_19));
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_box_extra_const_rval_list_lld_6_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_box_extra_const_rval_list_lld__1049__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_box_extra_const_rval_list_lld_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Context_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_GlobalData_0_5,
  MR_Word * STATE_VARIABLE_GlobalData_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_GlobalData_6 = STATE_VARIABLE_GlobalData_0_5;
    }
    else
    {
      MR_Word RvalTypeWidth_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word RvalsTypesWidths_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word BoxedRvalTypeWidth_16;
      MR_Word BoxedRvalsTypesWidths_17;
      MR_Word Rval_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), RvalTypeWidth_14, (MR_Integer) 0)));
      MR_Word MLDS_Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), RvalTypeWidth_14, (MR_Integer) 1)));
      MR_Word Width_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), RvalTypeWidth_14, (MR_Integer) 2)));
      MR_Word BoxedRval_22;
      MR_Word Var_25;
      MR_Word STATE_VARIABLE_GlobalData_29_29;

      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_box_extra_const_rval_list_lld_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (Width_21));
        MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      mercury__require__expect_3_p_0(Var_25, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_box_extra_const_rval_list_lld\'/6", (MR_String) "Width != full_word");
      ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_1, Context_2, MLDS_Type_20, Width_21, Rval_19, &BoxedRval_22, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_29_29);
      {
        BoxedRvalTypeWidth_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 0) = ((MR_Box) (BoxedRval_22));
        MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 1) = ((MR_Box) (MLDS_Type_20));
        MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 2) = ((MR_Box) (Width_21));
      }
      ml_backend__ml_unify_gen__ml_gen_box_extra_const_rval_list_lld_6_p_0(ModuleInfo_1, Context_2, RvalsTypesWidths_15, &BoxedRvalsTypesWidths_17, STATE_VARIABLE_GlobalData_29_29, STATE_VARIABLE_GlobalData_6);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BoxedRvalTypeWidth_16));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (BoxedRvalsTypesWidths_17));
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_box_const_rval_list_lld_6_p_0(
  MR_Word Info_1,
  MR_Word Context_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_GlobalData_0_5,
  MR_Word * STATE_VARIABLE_GlobalData_6)
{
  if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_GlobalData_6 = STATE_VARIABLE_GlobalData_0_5;
  }
  else
  {
    MR_Word ArgVarTypeWidth_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
    MR_Word ArgVarsTypesWidths_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word BoxedRvalTypeWidth_16;
    MR_Word BoxedRvalsTypesWidths_17;
    MR_Word ArgVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgVarTypeWidth_14, (MR_Integer) 0)));
    MR_Word ArgWidth_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgVarTypeWidth_14, (MR_Integer) 2)));
    MR_Word GroundTerm_22;
    MR_Word Rval_23;
    MR_Word MLDS_Type_25;
    MR_Word ModuleInfo_26;
    MR_Word BoxedRval_27;
    MR_Word STATE_VARIABLE_GlobalData_30_30;
    MR_Word _ArgVarType_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgVarTypeWidth_14, (MR_Integer) 1)));
    MR_Word _MercuryType_24;

    ml_backend__ml_gen_info__ml_gen_info_lookup_const_var_3_p_0(Info_1, ArgVar_19, &GroundTerm_22);
    Rval_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_22, (MR_Integer) 0)));
    _MercuryType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_22, (MR_Integer) 1)));
    MLDS_Type_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_22, (MR_Integer) 2)));
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_1, &ModuleInfo_26);
    ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_26, Context_2, MLDS_Type_25, ArgWidth_21, Rval_23, &BoxedRval_27, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_30_30);
    {
      BoxedRvalTypeWidth_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 0) = ((MR_Box) (BoxedRval_27));
      MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 2) = ((MR_Box) (ArgWidth_21));
    }
    ml_backend__ml_unify_gen__ml_gen_box_const_rval_list_lld_6_p_0(Info_1, Context_2, ArgVarsTypesWidths_15, &BoxedRvalsTypesWidths_17, STATE_VARIABLE_GlobalData_30_30, STATE_VARIABLE_GlobalData_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BoxedRvalTypeWidth_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (BoxedRvalsTypesWidths_17));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_box_or_unbox_const_rval_list_hld_6_p_0(
  MR_Word Info_1,
  MR_Word Context_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_GlobalData_0_5,
  MR_Word * STATE_VARIABLE_GlobalData_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_GlobalData_6 = STATE_VARIABLE_GlobalData_0_5;
    }
    else
    {
      MR_Word ArgVarTypeWidth_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgVarsTypesWidths_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word FieldRvalTypeWidth_16;
      MR_Word FieldRvalsTypesWidths_17;
      MR_Word ArgVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgVarTypeWidth_14, (MR_Integer) 0)));
      MR_Word ConsArgType_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgVarTypeWidth_14, (MR_Integer) 1)));
      MR_Word ConsArgWidth_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgVarTypeWidth_14, (MR_Integer) 2)));
      MR_Word ArgType_22;
      MR_Word ArgRval_23;
      MR_Word ModuleInfo_24;
      MR_Word FieldRval_27;
      MR_Word STATE_VARIABLE_GlobalData_30_30;
      MR_Word GroundTerm_36;
      MR_Word Var_37;
      MR_Word Var_38;

      ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_1, ArgVar_19, &ArgType_22);
      ml_backend__ml_gen_info__ml_gen_info_lookup_const_var_3_p_0(Info_1, ArgVar_19, &GroundTerm_36);
      ArgRval_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_36, (MR_Integer) 0)));
      Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_36, (MR_Integer) 1)));
      Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_36, (MR_Integer) 2)));
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_1, &ModuleInfo_24);
      succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ModuleInfo_24, ConsArgType_20, ConsArgWidth_21);
      if (succeeded)
      {
        MR_Word TypeCtorInfo_15_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
        MR_Word TypeVarSet0_44;
        MR_Word MLDS_ArgType_60;
        MR_Word TypeVar_45;
        MR_Word _TypeVarSet_46;

        mercury__varset__init_1_p_0(TypeCtorInfo_15_48, &TypeVarSet0_44);
        mercury__varset__new_var_3_p_0(TypeCtorInfo_15_48, &TypeVar_45, TypeVarSet0_44, &_TypeVarSet_46);
        MLDS_ArgType_60 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_24, ArgType_22);
        ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_24, Context_2, MLDS_ArgType_60, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ArgRval_23, &FieldRval_27, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_30_30);
      }
      else
        switch (MR_tag((MR_Word) ConsArgType_20)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word MLDS_ArgType_80;

              MLDS_ArgType_80 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_24, ArgType_22);
              ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_24, Context_2, MLDS_ArgType_80, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ArgRval_23, &FieldRval_27, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_30_30);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_24, ArgType_22, ConsArgType_20, (MR_Integer) 0, ArgRval_23, &FieldRval_27);
              STATE_VARIABLE_GlobalData_30_30 = STATE_VARIABLE_GlobalData_0_5;
            }
            break;
          case (MR_Integer) 3:
            {
              ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_24, ArgType_22, ConsArgType_20, (MR_Integer) 0, ArgRval_23, &FieldRval_27);
              STATE_VARIABLE_GlobalData_30_30 = STATE_VARIABLE_GlobalData_0_5;
            }
            break;
        }
      {
        FieldRvalTypeWidth_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FieldRvalTypeWidth_16, 0) = ((MR_Box) (FieldRval_27));
        MR_hl_field(MR_mktag(0), FieldRvalTypeWidth_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
        MR_hl_field(MR_mktag(0), FieldRvalTypeWidth_16, 2) = ((MR_Box) (ConsArgWidth_21));
      }
      ml_backend__ml_unify_gen__ml_gen_box_or_unbox_const_rval_list_hld_6_p_0(Info_1, Context_2, ArgVarsTypesWidths_15, &FieldRvalsTypesWidths_17, STATE_VARIABLE_GlobalData_30_30, STATE_VARIABLE_GlobalData_6);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FieldRvalTypeWidth_16));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (FieldRvalsTypesWidths_17));
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_constant_6_p_0(
  MR_Word Tag_7,
  MR_Word VarType_8,
  MR_Word MLDS_VarType_9,
  MR_Word * Rval_10,
  MR_Word STATE_VARIABLE_Info_0_52,
  MR_Word * STATE_VARIABLE_Info_53)
{
  {
    switch (MR_tag((MR_Word) Tag_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_constant\'/6", (MR_String) "unexpected tag");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String String_14 = ((MR_String) (MR_hl_field(MR_mktag(1), Tag_7, (MR_Integer) 0)));
          MR_Word Var_78;

          {
            Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
            MR_hl_field(MR_mktag(3), Var_78, 1) = ((MR_Box) (String_14));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Rval_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_78));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float Float_13 = MR_unbox_float((MR_hl_field(MR_mktag(2), Tag_7, (MR_Integer) 0)));
          MR_Word Var_79;

          {
            Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
            MR_hl_field(MR_mktag(3), Var_79, 1) = MR_box_float(Float_13);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Rval_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_79));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word IntTag_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 1)));

              *Rval_10 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0(IntTag_12, VarType_8, MLDS_VarType_9);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ForeignLang_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 1)));
              MR_String ForeignTag_16 = ((MR_String) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 2)));
              MR_Word Var_77;

              {
                Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                MR_hl_field(MR_mktag(3), Var_77, 1) = ((MR_Box) (ForeignLang_15));
                MR_hl_field(MR_mktag(3), Var_77, 2) = ((MR_Box) (ForeignTag_16));
                MR_hl_field(MR_mktag(3), Var_77, 3) = ((MR_Box) (MLDS_VarType_9));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Rval_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_77));
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
          case (MR_Integer) 13:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_constant\'/6", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ModuleName0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 1)));
              MR_String TypeName_20 = ((MR_String) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 2)));
              MR_Integer TypeArity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 3)));
              MR_Word ModuleName_22;
              MR_Word MLDS_Module_23;
              MR_Word RttiTypeCtor_24;
              MR_Word RttiId_25;
              MR_Word Const_26;
              MR_Word Var_68;
              MR_Word Var_69;

              ModuleName_22 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_19);
              MLDS_Module_23 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_22);
              {
                RttiTypeCtor_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RttiTypeCtor_24, 0) = ((MR_Box) (ModuleName_22));
                MR_hl_field(MR_mktag(0), RttiTypeCtor_24, 1) = ((MR_Box) (TypeName_20));
                MR_hl_field(MR_mktag(0), RttiTypeCtor_24, 2) = ((MR_Box) (TypeArity_21));
              }
              {
                RttiId_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RttiId_25, 0) = ((MR_Box) (RttiTypeCtor_24));
                MR_hl_field(MR_mktag(0), RttiId_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
              }
              {
                Const_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                MR_hl_field(MR_mktag(3), Const_26, 1) = ((MR_Box) (MLDS_Module_23));
                MR_hl_field(MR_mktag(3), Const_26, 2) = ((MR_Box) (RttiId_25));
              }
              {
                Var_68 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_68, 0) = ((MR_Box) (MLDS_VarType_9));
              }
              {
                Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_69, 1) = ((MR_Box) (Const_26));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *Rval_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_68));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_69));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ClassId_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 2)));
              MR_String Instance_28 = ((MR_String) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 3)));
              MR_Word TCName_29;
              MR_Word Var_64;
              MR_Word Var_65;
              MR_Word Var_66;
              MR_Word ModuleName_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 1)));
              MR_Word MLDS_Module_81;
              MR_Word RttiId_82;
              MR_Word Const_83;

              MLDS_Module_81 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_80);
              TCName_29 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_27);
              {
                Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (ModuleName_80));
                MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Instance_28));
              }
              {
                RttiId_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), RttiId_82, 0) = ((MR_Box) (TCName_29));
                MR_hl_field(MR_mktag(1), RttiId_82, 1) = ((MR_Box) (Var_64));
              }
              {
                Const_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                MR_hl_field(MR_mktag(3), Const_83, 1) = ((MR_Box) (MLDS_Module_81));
                MR_hl_field(MR_mktag(3), Const_83, 2) = ((MR_Box) (RttiId_82));
              }
              {
                Var_65 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_65, 0) = ((MR_Box) (MLDS_VarType_9));
              }
              {
                Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (Const_83));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *Rval_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_65));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_66));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word PredId_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 1)));
              MR_Integer ProcId_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 2)));
              MR_Word ModuleInfo_32;
              MR_Word PredLabel_33;
              MR_Word PredModule_34;
              MR_Word ProcLabel_35;
              MR_Word QualProcLabel_36;
              MR_Word Var_60;
              MR_Word Var_62;
              MR_Word Var_63;
              MR_Word Const_84;

              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_52, &ModuleInfo_32);
              {
                Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (PredId_30));
                MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (ProcId_31));
              }
              ml_backend__ml_code_util__ml_gen_pred_label_4_p_0(ModuleInfo_32, Var_60, &PredLabel_33, &PredModule_34);
              {
                ProcLabel_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ProcLabel_35, 0) = ((MR_Box) (PredLabel_33));
                MR_hl_field(MR_mktag(0), ProcLabel_35, 1) = ((MR_Box) (ProcId_31));
              }
              {
                QualProcLabel_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), QualProcLabel_36, 0) = ((MR_Box) (PredModule_34));
                MR_hl_field(MR_mktag(0), QualProcLabel_36, 1) = ((MR_Box) (ProcLabel_35));
              }
              {
                Const_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
                MR_hl_field(MR_mktag(3), Const_84, 1) = ((MR_Box) (QualProcLabel_36));
                MR_hl_field(MR_mktag(3), Const_84, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_62 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_62, 0) = ((MR_Box) (MLDS_VarType_9));
              }
              {
                Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_63, 1) = ((MR_Box) (Const_84));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *Rval_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_62));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_63));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_constant\'/6", (MR_String) "deep_profiling_proc_layout_tag NYI");
                return;
              }
            }
            break;
          case (MR_Integer) 10:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_constant\'/6", (MR_String) "table_io_entry_tag NYI");
                return;
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Integer Bits1_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 1)));
              MR_Integer Num1_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 2)));
              MR_Word Var_70;
              MR_Word Var_71;
              MR_Word Var_72;
              MR_Word Var_75;
              MR_Word Var_76;

              {
                Var_70 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_70, 0) = ((MR_Box) (MLDS_VarType_9));
              }
              {
                Var_76 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_76, 0) = ((MR_Box) (Num1_18));
              }
              {
                Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (Var_76));
              }
              {
                Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_3[0])));
                MR_hl_field(MR_mktag(3), Var_72, 2) = ((MR_Box) (Var_75));
              }
              {
                Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (Bits1_17));
                MR_hl_field(MR_mktag(3), Var_71, 2) = ((MR_Box) (Var_72));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *Rval_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_70));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_71));
              }
            }
            break;
        }
        break;
    }
    *STATE_VARIABLE_Info_53 = STATE_VARIABLE_Info_0_52;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____arg_const_type_and_width_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unify_gen____Unify____arg_const_type_and_width_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____arg_const_type_and_width_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_unify_gen____Compare____arg_const_type_and_width_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____arg_to_type_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unify_gen____Unify____arg_to_type_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____arg_to_type_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_unify_gen____Compare____arg_to_type_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____arg_type_and_width_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unify_gen____Unify____arg_type_and_width_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____arg_type_and_width_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_unify_gen____Compare____arg_type_and_width_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____arg_var_type_and_width_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unify_gen____Unify____arg_var_type_and_width_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____arg_var_type_and_width_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_unify_gen____Compare____arg_var_type_and_width_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____field_offset_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unify_gen____Unify____field_offset_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____field_offset_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_unify_gen____Compare____field_offset_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____may_have_extra_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unify_gen____Unify____may_have_extra_args_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____may_have_extra_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_unify_gen____Compare____may_have_extra_args_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____ml_const_struct_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unify_gen____Unify____ml_const_struct_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____ml_const_struct_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_unify_gen____Compare____ml_const_struct_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____mlds_rval_type_and_width_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unify_gen____Unify____mlds_rval_type_and_width_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____mlds_rval_type_and_width_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_unify_gen____Compare____mlds_rval_type_and_width_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____take_addr_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unify_gen____Unify____take_addr_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____take_addr_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_unify_gen____Compare____take_addr_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ml_backend__ml_unify_gen__init(void)
{
}

void mercury__ml_backend__ml_unify_gen__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_arg_const_type_and_width_0);
	MR_register_type_ctor_info(&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_arg_to_type_1);
	MR_register_type_ctor_info(&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_arg_type_and_width_1);
	MR_register_type_ctor_info(&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_arg_var_type_and_width_0);
	MR_register_type_ctor_info(&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_field_offset_0);
	MR_register_type_ctor_info(&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_may_have_extra_args_0);
	MR_register_type_ctor_info(&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_ml_const_struct_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_mlds_rval_type_and_width_0);
	MR_register_type_ctor_info(&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_take_addr_info_0);
}

void mercury__ml_backend__ml_unify_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_unify_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.ml_unify_gen.
