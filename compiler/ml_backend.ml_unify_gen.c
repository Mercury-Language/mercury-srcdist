/*
** Automatically generated from `ml_unify_gen.m'
** by the Mercury compiler,
** version 2018-05-11
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




static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__pti_arg_type_and_width_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__ti_arg_type_and_width_1hlds__const_struct__type_ctor_info_const_struct_arg_0;

static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen____vpti_func_2__pseudo_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_arg_type_and_width_1_0[3];

static const MR_DuFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_arg_type_and_width_1_0;

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_arg_type_and_width_1_0[1];

static const MR_DuPtagLayout ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_ptag_ordered_arg_type_and_width_1[1];

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_name_ordered_arg_type_and_width_1[1];

static const MR_Integer ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_arg_type_and_width_1[1];

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__ti_arg_type_and_width_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_cons_id_or_closure_0_0[1];

static const MR_DuFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_cons_id_or_closure_0_0;

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_cons_id_or_closure_0_1[1];

static const MR_DuFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_cons_id_or_closure_0_1;

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_cons_id_or_closure_0_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_cons_id_or_closure_0_1[1];

static const MR_DuPtagLayout ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_ptag_ordered_cons_id_or_closure_0[2];

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_name_ordered_cons_id_or_closure_0[2];

static const MR_Integer ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_cons_id_or_closure_0[2];

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

static const MR_ConstString ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_names_take_addr_info_0_0[4];

static const MR_DuFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_take_addr_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_take_addr_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_ptag_ordered_take_addr_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_name_ordered_take_addr_info_0[1];

static const MR_Integer ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_take_addr_info_0[1];

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__construct_static_ground_term__3098__1_1_f_0(
  MR_Word LambdaHeadVar__1_43);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__cons_id_arg_types_and_widths__3007__2_2_p_0(
  MR_Word MayHaveExtraArgs_10,
  MR_Word HeadVar__2_35);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__cons_id_arg_types_and_widths__3007__1_2_p_0(
  MR_Word MayHaveExtraArgs_10,
  MR_Word HeadVar__2_35);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_const_static_compound__2751__1_1_f_0(
  MR_Word LambdaHeadVar__1_38);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_109_108_95_103_101_110_95_99_111_110_115_116_95_115_116_97_116_105_99_95_99_111_109_112_111_117_110_100_95_95_50_55_53_49_95_95_49_95_95_91_49_93_95_48_1_f_0(void);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_const_struct_tag__2704__1_2_p_0(
  MR_Word AddedBy_35,
  MR_Word HeadVar__2_76);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_const_struct_tag__2688__1_2_p_0(
  MR_Word AddedBy_35,
  MR_Word HeadVar__2_80);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2426__6_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_191);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2496__1_2_p_0(
  MR_Word AddedBy_71,
  MR_Word HeadVar__2_82);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2481__1_2_p_0(
  MR_Word AddedBy_71,
  MR_Word HeadVar__2_86);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2426__5_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_178);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2426__4_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_167);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2426__3_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_156);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2426__2_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_145);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2426__1_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_119);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_extra_arg_assign__1251__1_2_p_0(
  MR_Word HighLevelData_28,
  MR_Word HeadVar__2_42);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_calc_field_offset__1231__1_1_f_0(
  MR_Word LambdaHeadVar__1_18);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1190__1_2_p_0(
  MR_Word Offset_94,
  MR_Word HeadVar__2_132);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1181__1_2_p_0(
  MR_Word ArgWidth_72,
  MR_Word HeadVar__2_127);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1170__2_2_p_0(
  MR_Integer CurOffset_77,
  MR_Integer CellOffsetInt_177);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1162__1_2_p_0(
  MR_Integer CurOffset_77,
  MR_Integer CellOffsetInt_151);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1170__1_2_p_0(
  MR_Integer CurOffset_77,
  MR_Integer CellOffsetInt_153);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1150__1_2_p_0(
  MR_Integer CurOffset_77,
  MR_Integer CellOffsetInt_78);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1156__1_2_p_0(
  MR_Integer CurOffset_77,
  MR_Integer CellOffsetInt_149);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_box_extra_const_rval_list_lld__1058__1_2_p_0(
  MR_Word Width_22,
  MR_Word HeadVar__2_29);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__749__1_2_p_0(
  MR_Integer PrimaryTag_47,
  MR_Integer LambdaHeadVar__1_80);

static void MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__731__1_3_p_0(
  MR_Word STATE_VARIABLE_Info_0_72,
  MR_Word LambdaHeadVar__1_77,
  MR_Integer * LambdaHeadVar__2_78);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_new_object_statically__695__1_1_f_0(
  MR_Word LambdaHeadVar__1_51);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_new_object_dynamically__634__1_1_f_0(
  MR_Word LambdaHeadVar__1_73);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_compound__510__1_2_p_0(
  MR_Word AddedBy_30,
  MR_Word HeadVar__2_44);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_compound__495__1_2_p_0(
  MR_Word AddedBy_30,
  MR_Word HeadVar__2_48);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object__549__1_2_p_0(
  MR_Word TakeAddr_23,
  MR_Word HeadVar__2_48);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object__537__1_2_p_0(
  MR_Word ExplicitSecTag_18,
  MR_Word HeadVar__2_41);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__198__1_2_p_0(
  MR_Word CodeModel_8,
  MR_Word HeadVar__2_74);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__230__1_2_p_0(
  MR_Word MaybeSizeProfInfo_37,
  MR_Word HeadVar__2_69);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__218__1_2_p_0(
  MR_Word CodeModel_8,
  MR_Word HeadVar__2_65);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__166__1_2_p_0(
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
ml_backend__ml_unify_gen____Compare____cons_id_or_closure_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____cons_id_or_closure_0_0(
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

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__is_apw_full_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_struct_6_p_0(
  MR_Word Info_7,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ConstStructMap_0_19,
  MR_Word * STATE_VARIABLE_ConstStructMap_20,
  MR_Word STATE_VARIABLE_GlobalData_0_21,
  MR_Word * STATE_VARIABLE_GlobalData_22);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_struct_tag_11_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_struct_tag_11_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_struct_tag_11_p_0(
  MR_Word Info_12,
  MR_Integer ConstNum_13,
  MR_Word Type_14,
  MR_Word MLDS_Type_15,
  MR_Word ConsId_16,
  MR_Word ConsTag_17,
  MR_Word Args_18,
  MR_Word STATE_VARIABLE_ConstStructMap_0_67,
  MR_Word * STATE_VARIABLE_ConstStructMap_68,
  MR_Word STATE_VARIABLE_GlobalData_0_69,
  MR_Word * STATE_VARIABLE_GlobalData_70);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_struct_arg_7_p_0(
  MR_Word Info_8,
  MR_Word ConstStructMap_9,
  MR_Word ConstArg_10,
  MR_Word PosWidth_11,
  MR_Word * RvalTypeWidth_12,
  MR_Word STATE_VARIABLE_GlobalData_0_25,
  MR_Word * STATE_VARIABLE_GlobalData_26);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_8(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_7(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_6(
  MR_Box closure_arg);

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
  MR_Word ArgVars_25,
  MR_Word Context_26,
  MR_Word STATE_VARIABLE_GlobalData_0_75,
  MR_Word * STATE_VARIABLE_GlobalData_76,
  MR_Word STATE_VARIABLE_GroundTermMap_0_77,
  MR_Word * STATE_VARIABLE_GroundTermMap_78);

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

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__cons_id_arg_types_and_widths_7_p_1_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__cons_id_arg_types_and_widths_7_p_1(
  MR_Word TypeInfo_for_Arg_53,
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
  MR_Word STATE_VARIABLE_GlobalData_0_25,
  MR_Word * STATE_VARIABLE_GlobalData_26,
  MR_Word STATE_VARIABLE_GroundTermMap_0_27,
  MR_Word * STATE_VARIABLE_GroundTermMap_28);

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
  MR_Word ArgVars_11,
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
  MR_Word ArgVars_11,
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
ml_backend__ml_unify_gen__ml_gen_unify_args_13_p_0(
  MR_Word ConsId_14,
  MR_Word ArgVars_15,
  MR_Word Modes_16,
  MR_Word CtorArgRepns_17,
  MR_Word VarType_18,
  MR_Word VarLval_19,
  MR_Word Offset_20,
  MR_Integer ArgNum_21,
  MR_Word Tag_22,
  MR_Word Context_23,
  MR_Word * Stmts_24,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unify_args_loop_14_p_0(
  MR_Word ConsId_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word VarType_5,
  MR_Word VarLval_6,
  MR_Word CurOffset_7,
  MR_Integer CurArgNum_8,
  MR_Word Tag_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Stmts_0_11,
  MR_Word * STATE_VARIABLE_Stmts_12,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

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
  MR_Word STATE_VARIABLE_Info_0_102,
  MR_Word * STATE_VARIABLE_Info_103);

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

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_compound_13_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_compound_13_p_0_1(
  MR_Box closure_arg);

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
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_14_p_0_2(
  MR_Box closure_arg);

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
  MR_Word ConsIdOrClosure_18,
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
  MR_Word STATE_VARIABLE_Info_0_72,
  MR_Word * STATE_VARIABLE_Info_73);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_101_119_95_111_98_106_101_99_116_95_100_121_110_97_109_105_99_97_108_108_121_95_95_91_53_93_95_48_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_101_119_95_111_98_106_101_99_116_95_100_121_110_97_109_105_99_97_108_108_121_95_95_91_53_93_95_48_16_p_0(
  MR_Word ConsIdOrClosure_17,
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
  MR_Word STATE_VARIABLE_Info_0_66,
  MR_Word * STATE_VARIABLE_Info_67);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_expand_or_pack_into_words_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_unify_gen__maybe_shift_and_accumulate_or_rval_5_p_0(
  MR_Word Rval_6,
  MR_Word Shift_7,
  MR_Word Fill_8,
  MR_Word STATE_VARIABLE_RevOrRvals_0_18,
  MR_Word * STATE_VARIABLE_RevOrRvals_19);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_cons_args_12_p_0_7(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_cons_args_12_p_0_6(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_cons_args_12_p_0_5(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_cons_args_12_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_cons_args_12_p_0_3(
  MR_Box closure_arg);

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
  MR_Integer PrevOffset0_6,
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
ml_backend__ml_unify_gen__ml_gen_unify_args_for_reuse_15_p_0(
  MR_Word ConsId_16,
  MR_Word ArgVars_17,
  MR_Word Modes_18,
  MR_Word CtorArgRepns_19,
  MR_Word TakeAddr_20,
  MR_Word VarType_21,
  MR_Word VarLval_22,
  MR_Word CurOffset_23,
  MR_Integer CurArgNum_24,
  MR_Word Tag_25,
  MR_Word Context_26,
  MR_Word * Stmts_27,
  MR_Word * TakeAddrInfos_28,
  MR_Word STATE_VARIABLE_Info_0_50,
  MR_Word * STATE_VARIABLE_Info_51);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_next_field_offset_4_p_0(
  MR_Word CurArg_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unify_arg_14_p_0(
  MR_Word ConsId_15,
  MR_Word ArgVar_16,
  MR_Word Mode_17,
  MR_Word CtorArgRepn_18,
  MR_Word VarType_19,
  MR_Word VarLval_20,
  MR_Word Offset_21,
  MR_Integer ArgNum_22,
  MR_Word Tag_23,
  MR_Word Context_24,
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
  MR_Word STATE_VARIABLE_Stmts_0_53,
  MR_Word * STATE_VARIABLE_Stmts_54);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_bitwise_or_2_f_0(
  MR_Word RvalA_4,
  MR_Word RvalB_5);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_lshift_3_f_0(
  MR_Word Rval_5,
  MR_Word Shift_6,
  MR_Word Fill_7);

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
  MR_Word STATE_VARIABLE_Stmts_0_58,
  MR_Word * STATE_VARIABLE_Stmts_59);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_bitwise_and_2_f_0(
  MR_Word Rval_4,
  MR_Integer Mask_5);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_rshift_2_f_0(
  MR_Word Rval_4,
  MR_Word Shift_5);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_field_offset_pair_3_p_0(
  MR_Word FieldLval_4,
  MR_Word * FieldLvalA_5,
  MR_Word * FieldLvalB_6);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_field_names_and_types_6_p_0(
  MR_Word Info_7,
  MR_Word Type_8,
  MR_Word ConsId_9,
  MR_Word InitOffset_10,
  MR_Word ArgVars_11,
  MR_Word * CtorArgRepns_12);

static void MR_CALL 
ml_backend__ml_unify_gen__allocate_consecutive_full_word_ctor_arg_repns_3_p_0(
  MR_Integer CurOffset_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_tag_offset_and_argnum_4_p_0(
  MR_Word Tag_5,
  MR_Integer * Ptag_6,
  MR_Word * InitOffset_7,
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
  MR_Word ConsIdOrClosure_14,
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
  MR_Word ConsIdOrClosure_21,
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

static void MR_CALL 
ml_backend__ml_unify_gen__ml_cast_away_any_sign_extend_bits_3_p_0(
  MR_Word Fill_4,
  MR_Word Rval0_5,
  MR_Word * Rval_6);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__get_const_type_for_cons_id_5_f_0(
  MR_Word Target_7,
  MR_Word HighLevelData_8,
  MR_Word MLDS_Type_9,
  MR_Word UsesBaseClass_10,
  MR_Word ConsIdOrClosure_11);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0_2(
  MR_Box closure_arg);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0(
  MR_Word Info_6,
  MR_Word VarType_7,
  MR_Word ConsIdOrClosure_8,
  MR_Word ArgVars_9,
  MR_Word * ArgVarsTypesWidths_10);

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_101_99_105_102_105_101_100_95_97_114_103_95_116_121_112_101_115_95_97_110_100_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word Type_1,
  MR_Integer CurOffset_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_116_121_112_101_95_97_110_100_95_97_108_108_111_99_97_116_101_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word ArgToType_1,
  MR_Integer CurOffset_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

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
ml_backend__ml_unify_gen____Unify____cons_id_or_closure_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____cons_id_or_closure_0_0_10001(
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


static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_1[26][2];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_2[7][3];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_3[16][5];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_4[2][6];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_5[39][1];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_6[7][4];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_7[1][9];




static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_1[26][2] = {
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
    ((MR_Box) (((MR_Box) ((MR_Integer) 0)))),
    ((MR_Box) (((MR_Box) ((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[21])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 20)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[13])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 4))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 6))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 8))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 5))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 7))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 9))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_2[7][3] = {
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
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[3])),
    ((MR_Box) (ml_backend__ml_unify_gen__construct_static_ground_term_14_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[4])),
    ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_statically_13_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[6])),
    ((MR_Box) (ml_backend__ml_unify_gen__ml_calc_field_offset_3_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[9])),
    ((MR_Box) (ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_101_119_95_111_98_106_101_99_116_95_100_121_110_97_109_105_99_97_108_108_121_95_95_91_53_93_95_48_16_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[15])),
    ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_3[16][5] = {
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
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[1])),
    ((MR_Box) (ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0_2)),
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
    ((MR_Box) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__pti_arg_type_and_width_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
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
    ((MR_Box) (&ml_backend__ml_unify_gen__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_sectag_added_by_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_sectag_added_by_0))
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

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_4[2][6] = {
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
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_5[39][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 4))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_5[0])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_5[0])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 5))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_5[3])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_5[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_6[1])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 6))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_5[7])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_5[7])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Integer) 7))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_5[10])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_5[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_6[3])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_5[14])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_5[14])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_5[17])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_5[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_6[5])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_6[0])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_6[2])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_6[4])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14))))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15))))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17))))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18))))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[10])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_6[7][4] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_5[2])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_5[5])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_5[9])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_5[12])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_5[16])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_5[19])))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_7[1][9] = {
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

static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen____vpti_func_2__pseudo_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
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
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0
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

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_cons_id_or_closure_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
};

static const MR_DuFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_cons_id_or_closure_0_0 = {
  (MR_String) "ordinary_cons_id",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_cons_id_or_closure_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_cons_id_or_closure_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_cons_id_or_closure_0_1 = {
  (MR_String) "closure_object",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_cons_id_or_closure_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_cons_id_or_closure_0_0[1] = {
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_cons_id_or_closure_0_0
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_cons_id_or_closure_0_1[1] = {
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_cons_id_or_closure_0_1
};

static const MR_DuPtagLayout ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_ptag_ordered_cons_id_or_closure_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_cons_id_or_closure_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_cons_id_or_closure_0_1
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_name_ordered_cons_id_or_closure_0[2] = {
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_cons_id_or_closure_0_1,
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_cons_id_or_closure_0_0
};

static const MR_Integer ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_cons_id_or_closure_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_cons_id_or_closure_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_unify_gen____Unify____cons_id_or_closure_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen____Compare____cons_id_or_closure_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen",
  (MR_String) "cons_id_or_closure",
  {     ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_name_ordered_cons_id_or_closure_0 },
  {     ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_ptag_ordered_cons_id_or_closure_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_cons_id_or_closure_0
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
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0
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

static const MR_ConstString ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_names_take_addr_info_0_0[4] = {
  (MR_String) "tai_address_var",
  (MR_String) "tai_offset",
  (MR_String) "tai_field_var_type",
  (MR_String) "tai_maybe_boxed_field_type"
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
  ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_names_take_addr_info_0_0,
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
ml_backend__ml_unify_gen__IntroducedFrom__func__construct_static_ground_term__3098__1_1_f_0(
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
ml_backend__ml_unify_gen__IntroducedFrom__pred__cons_id_arg_types_and_widths__3007__2_2_p_0(
  MR_Word MayHaveExtraArgs_10,
  MR_Word HeadVar__2_35)
{
  {
    MR_bool succeeded = (MayHaveExtraArgs_10 == HeadVar__2_35);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__cons_id_arg_types_and_widths__3007__1_2_p_0(
  MR_Word MayHaveExtraArgs_10,
  MR_Word HeadVar__2_35)
{
  {
    MR_bool succeeded = (MayHaveExtraArgs_10 == HeadVar__2_35);

    return succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_const_static_compound__2751__1_1_f_0(
  MR_Word LambdaHeadVar__1_38)
{
  {
    MR_Word LambdaHeadVar__2_39;

    LambdaHeadVar__2_39 = ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_109_108_95_103_101_110_95_99_111_110_115_116_95_115_116_97_116_105_99_95_99_111_109_112_111_117_110_100_95_95_50_55_53_49_95_95_49_95_95_91_49_93_95_48_1_f_0();
    return LambdaHeadVar__2_39;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_109_108_95_103_101_110_95_99_111_110_115_116_95_115_116_97_116_105_99_95_99_111_109_112_111_117_110_100_95_95_50_55_53_49_95_95_49_95_95_91_49_93_95_48_1_f_0(void)
{
  {
    MR_Word LambdaHeadVar__2_39;

    LambdaHeadVar__2_39 = parse_tree__builtin_lib_types__void_type_0_f_0();
    return LambdaHeadVar__2_39;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_const_struct_tag__2704__1_2_p_0(
  MR_Word AddedBy_35,
  MR_Word HeadVar__2_76)
{
  {
    MR_bool succeeded = (AddedBy_35 == HeadVar__2_76);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_const_struct_tag__2688__1_2_p_0(
  MR_Word AddedBy_35,
  MR_Word HeadVar__2_80)
{
  {
    MR_bool succeeded = (AddedBy_35 == HeadVar__2_80);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2426__6_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_191)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[4], ((MR_Box) (ArgVars_25)), ((MR_Box) (HeadVar__2_191)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2496__1_2_p_0(
  MR_Word AddedBy_71,
  MR_Word HeadVar__2_82)
{
  {
    MR_bool succeeded = (AddedBy_71 == HeadVar__2_82);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2481__1_2_p_0(
  MR_Word AddedBy_71,
  MR_Word HeadVar__2_86)
{
  {
    MR_bool succeeded = (AddedBy_71 == HeadVar__2_86);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2426__5_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_178)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[4], ((MR_Box) (ArgVars_25)), ((MR_Box) (HeadVar__2_178)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2426__4_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_167)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[4], ((MR_Box) (ArgVars_25)), ((MR_Box) (HeadVar__2_167)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2426__3_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_156)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[4], ((MR_Box) (ArgVars_25)), ((MR_Box) (HeadVar__2_156)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2426__2_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_145)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[4], ((MR_Box) (ArgVars_25)), ((MR_Box) (HeadVar__2_145)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2426__1_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_119)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[4], ((MR_Box) (ArgVars_25)), ((MR_Box) (HeadVar__2_119)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_extra_arg_assign__1251__1_2_p_0(
  MR_Word HighLevelData_28,
  MR_Word HeadVar__2_42)
{
  {
    MR_bool succeeded = (HighLevelData_28 == HeadVar__2_42);

    return succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_calc_field_offset__1231__1_1_f_0(
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
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1190__1_2_p_0(
  MR_Word Offset_94,
  MR_Word HeadVar__2_132)
{
  {
    MR_bool succeeded;
    MR_Integer Var_181 = (MR_Integer) Offset_94;
    MR_Integer Var_182 = (MR_Integer) HeadVar__2_132;

    succeeded = (Var_181 == Var_182);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1181__1_2_p_0(
  MR_Word ArgWidth_72,
  MR_Word HeadVar__2_127)
{
  {
    MR_bool succeeded = (ArgWidth_72 == HeadVar__2_127);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1170__2_2_p_0(
  MR_Integer CurOffset_77,
  MR_Integer CellOffsetInt_177)
{
  {
    MR_bool succeeded = (CurOffset_77 == CellOffsetInt_177);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1162__1_2_p_0(
  MR_Integer CurOffset_77,
  MR_Integer CellOffsetInt_151)
{
  {
    MR_bool succeeded = (CurOffset_77 == CellOffsetInt_151);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1170__1_2_p_0(
  MR_Integer CurOffset_77,
  MR_Integer CellOffsetInt_153)
{
  {
    MR_bool succeeded = (CurOffset_77 == CellOffsetInt_153);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1150__1_2_p_0(
  MR_Integer CurOffset_77,
  MR_Integer CellOffsetInt_78)
{
  {
    MR_bool succeeded = (CurOffset_77 == CellOffsetInt_78);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1156__1_2_p_0(
  MR_Integer CurOffset_77,
  MR_Integer CellOffsetInt_149)
{
  {
    MR_bool succeeded = (CurOffset_77 == CellOffsetInt_149);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_box_extra_const_rval_list_lld__1058__1_2_p_0(
  MR_Word Width_22,
  MR_Word HeadVar__2_29)
{
  {
    MR_bool succeeded = (Width_22 == HeadVar__2_29);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__749__1_2_p_0(
  MR_Integer PrimaryTag_47,
  MR_Integer LambdaHeadVar__1_80)
{
  {
    MR_bool succeeded = (LambdaHeadVar__1_80 == PrimaryTag_47);

    succeeded = !(succeeded);
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__731__1_3_p_0(
  MR_Word STATE_VARIABLE_Info_0_72,
  MR_Word LambdaHeadVar__1_77,
  MR_Integer * LambdaHeadVar__2_78)
{
  {
    MR_Word ReuseConsIdTag_41;
    MR_Word _ReuseOffSet_42;
    MR_Integer _ReuseArgNum_43;

    ml_backend__ml_unify_gen__ml_cons_id_to_tag_3_p_0(STATE_VARIABLE_Info_0_72, LambdaHeadVar__1_77, &ReuseConsIdTag_41);
    ml_backend__ml_unify_gen__ml_tag_offset_and_argnum_4_p_0(ReuseConsIdTag_41, LambdaHeadVar__2_78, &_ReuseOffSet_42, &_ReuseArgNum_43);
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_new_object_statically__695__1_1_f_0(
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
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_new_object_dynamically__634__1_1_f_0(
  MR_Word LambdaHeadVar__1_73)
{
  {
    MR_Word LambdaHeadVar__2_74;
    MR_Word Rv_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_73, (MR_Integer) 0)));
    MR_Word T_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_73, (MR_Integer) 1)));
    MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_73, (MR_Integer) 2)));

    {
      LambdaHeadVar__2_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_74, 0) = ((MR_Box) (Rv_77));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_74, 1) = ((MR_Box) (T_78));
    }
    return LambdaHeadVar__2_74;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_compound__510__1_2_p_0(
  MR_Word AddedBy_30,
  MR_Word HeadVar__2_44)
{
  {
    MR_bool succeeded = (AddedBy_30 == HeadVar__2_44);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_compound__495__1_2_p_0(
  MR_Word AddedBy_30,
  MR_Word HeadVar__2_48)
{
  {
    MR_bool succeeded = (AddedBy_30 == HeadVar__2_48);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object__549__1_2_p_0(
  MR_Word TakeAddr_23,
  MR_Word HeadVar__2_48)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[1], ((MR_Box) (TakeAddr_23)), ((MR_Box) (HeadVar__2_48)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object__537__1_2_p_0(
  MR_Word ExplicitSecTag_18,
  MR_Word HeadVar__2_41)
{
  {
    MR_bool succeeded = (ExplicitSecTag_18 == HeadVar__2_41);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__198__1_2_p_0(
  MR_Word CodeModel_8,
  MR_Word HeadVar__2_74)
{
  {
    MR_bool succeeded = (CodeModel_8 == HeadVar__2_74);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__230__1_2_p_0(
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
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__218__1_2_p_0(
  MR_Word CodeModel_8,
  MR_Word HeadVar__2_65)
{
  {
    MR_bool succeeded = (CodeModel_8 == HeadVar__2_65);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__166__1_2_p_0(
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
          parse_tree__prog_data____Compare____arg_pos_width_0_0(HeadVar__1_1, ArgX3_8, ArgY3_9);
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
          succeeded = parse_tree__prog_data____Unify____arg_pos_width_0_0(ArgX3_7, ArgY3_8);
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
ml_backend__ml_unify_gen____Compare____cons_id_or_closure_0_0(
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
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Integer Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Integer ArgY1_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

        mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_16, ArgY1_11);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));

        parse_tree__prog_data____Compare____cons_id_0_0(HeadVar__1_1, Var_17, ArgY1_5);
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____cons_id_or_closure_0_0(
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
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Integer ArgX1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        succeeded = (ArgX1_5 == ArgY1_6);
      }
    }
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
        succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX1_3, ArgY1_4);
      }
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
          parse_tree__prog_data____Compare____arg_pos_width_0_0(HeadVar__1_1, ArgX3_8, ArgY3_9);
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
          succeeded = parse_tree__prog_data____Unify____arg_pos_width_0_0(ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__is_apw_full_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Var_2;
    MR_Word Var_3;

    if (succeeded)
    {
      Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    }
    return succeeded;
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

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_struct_tag_11_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_const_struct_tag__2704__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_struct_tag_11_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_const_struct_tag__2688__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
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
  MR_Word STATE_VARIABLE_ConstStructMap_0_67,
  MR_Word * STATE_VARIABLE_ConstStructMap_68,
  MR_Word STATE_VARIABLE_GlobalData_0_69,
  MR_Word * STATE_VARIABLE_GlobalData_70)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) ConsTag_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_17)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0(Info_12, ConstNum_13, Type_14, MLDS_Type_15, ConsId_16, ConsTag_17, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Args_18, STATE_VARIABLE_ConstStructMap_0_67, STATE_VARIABLE_ConstStructMap_68, STATE_VARIABLE_GlobalData_0_69, STATE_VARIABLE_GlobalData_70);
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_tag\'/11", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            if ((Args_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_tag\'/11", (MR_String) "no_tag arity != 1");
                return;
              }
            }
            else
            {
              MR_Word Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 1)));
              MR_Word Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 0)));

              if ((Var_114 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word ArgRvalTypeWidth_23;
                MR_Word ArgRval_24;
                MR_Word Rval_27;
                MR_Word GroundTerm_28;
                MR_Word _RvalMLDSType_25;
                MR_Word _Width_26;

                ml_backend__ml_unify_gen__ml_gen_const_struct_arg_7_p_0(Info_12, STATE_VARIABLE_ConstStructMap_0_67, Var_115, (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_1[6]), &ArgRvalTypeWidth_23, STATE_VARIABLE_GlobalData_0_69, STATE_VARIABLE_GlobalData_70);
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
                mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ConstNum_13, ((MR_Box) (GroundTerm_28)), STATE_VARIABLE_ConstStructMap_0_67, STATE_VARIABLE_ConstStructMap_68);
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
              MR_Integer Ptag_112 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1)));

              ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0(Info_12, ConstNum_13, Type_14, MLDS_Type_15, ConsId_16, ConsTag_17, Ptag_112, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Args_18, STATE_VARIABLE_ConstStructMap_0_67, STATE_VARIABLE_ConstStructMap_68, STATE_VARIABLE_GlobalData_0_69, STATE_VARIABLE_GlobalData_70);
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
              MR_Word Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 1)));
              MR_Word Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 0)));

              if ((Var_114 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word ArgRvalTypeWidth_23;
                MR_Word ArgRval_24;
                MR_Word Rval_27;
                MR_Word GroundTerm_28;
                MR_Word _RvalMLDSType_25;
                MR_Word _Width_26;

                ml_backend__ml_unify_gen__ml_gen_const_struct_arg_7_p_0(Info_12, STATE_VARIABLE_ConstStructMap_0_67, Var_115, (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_1[6]), &ArgRvalTypeWidth_23, STATE_VARIABLE_GlobalData_0_69, STATE_VARIABLE_GlobalData_70);
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
                mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ConstNum_13, ((MR_Box) (GroundTerm_28)), STATE_VARIABLE_ConstStructMap_0_67, STATE_VARIABLE_ConstStructMap_68);
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
              MR_Word AddedBy_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 3)));
              MR_Word Target_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 1)))) & (MR_Integer) 3);
              MR_Word UsesConstructors_37;
              MR_Word Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 0)));
              MR_Word Var_99 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

              UsesConstructors_37 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(Target_36);
              switch (UsesConstructors_37) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word StagRval0_38;
                    MR_Word HighLevelData_39;
                    MR_Word StagRval_40;
                    MR_Word Var_77;
                    MR_Word Var_81;
                    MR_Word Var_100;
                    MR_Word Var_101;

                    {
                      Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[11]));
                      MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_const_struct_tag_11_p_0_1));
                      MR_hl_field(MR_mktag(0), Var_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_77, 3) = ((MR_Box) (AddedBy_35));
                      MR_hl_field(MR_mktag(0), Var_77, 4) = ((MR_Box) ((MR_Integer) 0));
                    }
                    mercury__require__expect_3_p_0(Var_77, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_tag\'/11", (MR_String) "AddedBy != sectag_added_by_unify");
                    {
                      Var_81 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_81, 0) = ((MR_Box) (Stag_34));
                    }
                    {
                      StagRval0_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), StagRval0_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), StagRval0_38, 1) = ((MR_Box) (Var_81));
                    }
                    Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 0)));
                    Var_101 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 1)))) & (MR_Integer) 3);
                    HighLevelData_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                    switch (HighLevelData_39) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          {
                            StagRval_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), StagRval_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), StagRval_40, 1) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_5[38]));
                            MR_hl_field(MR_mktag(3), StagRval_40, 2) = ((MR_Box) (StagRval0_38));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        StagRval_40 = StagRval0_38;
                        break;
                    }
                    {
                      ExtraRvals_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ExtraRvals_33, 0) = ((MR_Box) (StagRval_40));
                      MR_hl_field(MR_mktag(1), ExtraRvals_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_73;

                    {
                      Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[11]));
                      MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_const_struct_tag_11_p_0_2));
                      MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (AddedBy_35));
                      MR_hl_field(MR_mktag(0), Var_73, 4) = ((MR_Box) ((MR_Integer) 1));
                    }
                    mercury__require__expect_3_p_0(Var_73, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_tag\'/11", (MR_String) "AddedBy != sectag_added_by_constructor");
                    ExtraRvals_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
                  break;
              }
              ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0(Info_12, ConstNum_13, Type_14, MLDS_Type_15, ConsId_16, ConsTag_17, Ptag_32, ExtraRvals_33, Args_18, STATE_VARIABLE_ConstStructMap_0_67, STATE_VARIABLE_ConstStructMap_68, STATE_VARIABLE_GlobalData_0_69, STATE_VARIABLE_GlobalData_70);
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_struct_arg_7_p_0(
  MR_Word Info_8,
  MR_Word ConstStructMap_9,
  MR_Word ConstArg_10,
  MR_Word PosWidth_11,
  MR_Word * RvalTypeWidth_12,
  MR_Word STATE_VARIABLE_GlobalData_0_25,
  MR_Word * STATE_VARIABLE_GlobalData_26)
{
  {
    MR_Word ModuleInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
    MR_Word Rval0_17;
    MR_Word MLDS_Type_19;
    MR_Word Width_23;
    MR_Word Rval_24;
    MR_Word Var_27;
    MR_Word Var_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) & (MR_Integer) 3);
    MR_Word Var_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

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
    Width_23 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(PosWidth_11);
    Var_27 = mercury__term__context_init_0_f_0();
    ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_14, Var_27, MLDS_Type_19, Width_23, Rval0_17, &Rval_24, STATE_VARIABLE_GlobalData_0_25, STATE_VARIABLE_GlobalData_26);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *RvalTypeWidth_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_24));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MLDS_Type_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (PosWidth_11));
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_39;

    conv0_LambdaHeadVar__2_39 = ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_const_static_compound__2751__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_39));
    return wrapper_arg_2;
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

    ml_backend__ml_unify_gen__cons_id_arg_types_and_widths_7_p_1((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0, ModuleInfo_26, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[6], (MR_Integer) 0, VarType_16, ConsId_18, Args_22, &ArgsTypesWidths_29);
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
      Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (ConsId_18));
    }
    ml_backend__ml_unify_gen__construct_static_ground_term_14_p_0(ModuleInfo_26, Target_25, HighLevelData_30, Var_44, VarType_16, MLDS_Type_17, Var_45, UsesBaseClass_32, Ptag_20, ExtraRvals_21, RvalsTypesWidths_31, &GroundTerm_33, STATE_VARIABLE_GlobalData_43_43, STATE_VARIABLE_GlobalData_37);
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ConstNum_15, ((MR_Box) (GroundTerm_33)), STATE_VARIABLE_ConstStructMap_0_34, STATE_VARIABLE_ConstStructMap_35);
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
    MR_Word PosWidth_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgTypeWidth_14, (MR_Integer) 2)));
    MR_Word STATE_VARIABLE_GlobalData_24_24;
    MR_Word ModuleInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 0)));
    MR_Word Rval0_37;
    MR_Word MLDS_Type_39;
    MR_Word Width_43;
    MR_Word Rval_44;
    MR_Word Var_45;
    MR_Word _Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgTypeWidth_14, (MR_Integer) 1)));
    MR_Word Var_47 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 1)))) & (MR_Integer) 3);
    MR_Word Var_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

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
    Width_43 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(PosWidth_21);
    Var_45 = mercury__term__context_init_0_f_0();
    ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_34, Var_45, MLDS_Type_39, Width_43, Rval0_37, &Rval_44, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_24_24);
    {
      RvalTypeWidth_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RvalTypeWidth_16, 0) = ((MR_Box) (Rval_44));
      MR_hl_field(MR_mktag(0), RvalTypeWidth_16, 1) = ((MR_Box) (MLDS_Type_39));
      MR_hl_field(MR_mktag(0), RvalTypeWidth_16, 2) = ((MR_Box) (PosWidth_21));
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
  switch (MR_tag((MR_Word) ConsTag_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ConsTag_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 2:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_arg_tag\'/4", (MR_String) "unexpected tag");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word RvalConst_66;

            RvalConst_66 = ml_backend__ml_unify_gen__int_tag_to_mlds_rval_const_3_f_0(Type_6, MLDS_Type_7, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_5[21]);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (RvalConst_66));
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String String_12 = ((MR_String) (MR_hl_field(MR_mktag(1), ConsTag_5, (MR_Integer) 0)));
        MR_Word Var_63;

        {
          Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
          MR_hl_field(MR_mktag(3), Var_63, 1) = ((MR_Box) (String_12));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Rval_8 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_63));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Float Float_11 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_5, (MR_Integer) 0)));
        MR_Word Var_64;

        {
          Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
          MR_hl_field(MR_mktag(3), Var_64, 1) = MR_box_float(Float_11);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Rval_8 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_64));
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

            RvalConst_10 = ml_backend__ml_unify_gen__int_tag_to_mlds_rval_const_3_f_0(Type_6, MLDS_Type_7, IntTag_9);
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
            MR_Word Var_55;

            {
              Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
              MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (ForeignLang_15));
              MR_hl_field(MR_mktag(3), Var_55, 2) = ((MR_Box) (ForeignTag_16));
              MR_hl_field(MR_mktag(3), Var_55, 3) = ((MR_Box) (MLDS_Type_7));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_55));
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
            MR_Word Var_52;
            MR_Word Var_53;

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
              Var_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_52, 0) = ((MR_Box) (MLDS_Type_7));
            }
            {
              Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (Const_24));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_52));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_53));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word ClassId_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 2)));
            MR_String Instance_26 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 3)));
            MR_Word TCName_27;
            MR_Word Var_48;
            MR_Word Var_49;
            MR_Word Var_50;
            MR_Word ModuleName_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1)));
            MR_Word MLDS_Module_68;
            MR_Word RttiId_69;
            MR_Word Const_70;

            MLDS_Module_68 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_67);
            TCName_27 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_25);
            {
              Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (ModuleName_67));
              MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Instance_26));
            }
            {
              RttiId_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), RttiId_69, 0) = ((MR_Box) (TCName_27));
              MR_hl_field(MR_mktag(1), RttiId_69, 1) = ((MR_Box) (Var_48));
            }
            {
              Const_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Const_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
              MR_hl_field(MR_mktag(3), Const_70, 1) = ((MR_Box) (MLDS_Module_68));
              MR_hl_field(MR_mktag(3), Const_70, 2) = ((MR_Box) (RttiId_69));
            }
            {
              Var_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_49, 0) = ((MR_Box) (MLDS_Type_7));
            }
            {
              Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) (Const_70));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_49));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_50));
            }
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Integer Ptag_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1)));
            MR_Integer Stag_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 2)));
            MR_Word Var_56;
            MR_Word Var_57;
            MR_Word Var_58;
            MR_Word Var_61;
            MR_Word Var_62;

            {
              Var_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_56, 0) = ((MR_Box) (MLDS_Type_7));
            }
            {
              Var_62 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_62, 0) = ((MR_Box) (Stag_14));
            }
            {
              Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (Var_62));
            }
            {
              Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_5[35])));
              MR_hl_field(MR_mktag(3), Var_58, 2) = ((MR_Box) (Var_61));
            }
            {
              Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (Ptag_13));
              MR_hl_field(MR_mktag(3), Var_57, 2) = ((MR_Box) (Var_58));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_56));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_57));
            }
          }
          break;
      }
      break;
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
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 271, &HighLevelData_11);
    {
      Info_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info_12, 0) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), Info_12, 1) = ((MR_Box) ((Target_7 | ((HighLevelData_11 << (MR_Integer) 2)))));
    }
    hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ModuleInfo_6, &ConstStructDb_13);
    hlds__const_struct__const_struct_db_get_structs_2_p_0(ConstStructDb_13, &ConstStructs_14);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_7[0]));
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
      MR_Word ArgVars_56;
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
          ArgVars_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_52, (MR_Integer) 2)));
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
        ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0(ModuleInfo_1, Target_2, HighLevelData_3, VarTypes_4, Var_54, VarType_61, MLDS_Type_62, ConsId_55, ConsTag_63, ArgVars_56, Context_64, STATE_VARIABLE_GlobalData_0_6, &STATE_VARIABLE_GlobalData_32_32, STATE_VARIABLE_GroundTermMap_0_8, &STATE_VARIABLE_GroundTermMap_33_33);
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
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_8(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2426__6_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_7(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2496__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_6(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2481__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_5(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2426__5_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2426__4_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2426__3_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2426__2_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2426__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
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
  MR_Word ArgVars_25,
  MR_Word Context_26,
  MR_Word STATE_VARIABLE_GlobalData_0_75,
  MR_Word * STATE_VARIABLE_GlobalData_76,
  MR_Word STATE_VARIABLE_GroundTermMap_0_77,
  MR_Word * STATE_VARIABLE_GroundTermMap_78)
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
              ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0(ModuleInfo_16, Target_17, HighLevelData_18, VarTypes_19, Var_20, VarType_21, MLDS_Type_22, ConsId_23, ConsTag_24, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ArgVars_25, Context_26, STATE_VARIABLE_GlobalData_0_75, STATE_VARIABLE_GlobalData_76, STATE_VARIABLE_GroundTermMap_0_77, STATE_VARIABLE_GroundTermMap_78);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ConstRval_31;
              MR_Word ConstGroundTerm_38;
              MR_Word Var_116;
              MR_Word IntConst_122;

              IntConst_122 = ml_backend__ml_unify_gen__int_tag_to_mlds_rval_const_3_f_0(VarType_21, MLDS_Type_22, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_5[21]);
              {
                ConstRval_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstRval_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstRval_31, 1) = ((MR_Box) (IntConst_122));
              }
              {
                Var_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_116, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[14]));
                MR_hl_field(MR_mktag(0), Var_116, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_1));
                MR_hl_field(MR_mktag(0), Var_116, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_116, 3) = ((MR_Box) (ArgVars_25));
                MR_hl_field(MR_mktag(0), Var_116, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_116, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
              {
                ConstGroundTerm_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstGroundTerm_38, 0) = ((MR_Box) (ConstRval_31));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_38, 1) = ((MR_Box) (VarType_21));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_38, 2) = ((MR_Box) (MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (Var_20)), ((MR_Box) (ConstGroundTerm_38)), STATE_VARIABLE_GroundTermMap_0_77, STATE_VARIABLE_GroundTermMap_78);
              *STATE_VARIABLE_GlobalData_76 = STATE_VARIABLE_GlobalData_0_75;
            }
            break;
          case (MR_Integer) 2:
            if ((ArgVars_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "no_tag arity != 1");
                return;
              }
            }
            else
            {
              MR_Word Var_197 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgVars_25, (MR_Integer) 1)));
              MR_Word Var_198 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgVars_25, (MR_Integer) 0)));

              if ((Var_197 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word TypeInfo_130_130 = (MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2];
                MR_Word TypeCtorInfo_131_131 = (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;
                MR_Word ArgGroundTerm_57;
                MR_Word ArgRval_58;
                MR_Word MLDS_ArgType_60;
                MR_Word Rval0_61;
                MR_Word Rval_62;
                MR_Word GroundTerm_63;
                MR_Word STATE_VARIABLE_GroundTermMap_99_99;
                MR_Box conv0_ArgGroundTerm_57;
                MR_Word _ArgType_59;

                mercury__map__det_remove_4_p_0(TypeInfo_130_130, TypeCtorInfo_131_131, ((MR_Box) (Var_198)), &conv0_ArgGroundTerm_57, STATE_VARIABLE_GroundTermMap_0_77, &STATE_VARIABLE_GroundTermMap_99_99);
                ArgGroundTerm_57 = ((MR_Word) conv0_ArgGroundTerm_57);
                ArgRval_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_57, (MR_Integer) 0)));
                _ArgType_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_57, (MR_Integer) 1)));
                MLDS_ArgType_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_57, (MR_Integer) 2)));
                ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_16, Context_26, MLDS_ArgType_60, (MR_Integer) 2, ArgRval_58, &Rval0_61, STATE_VARIABLE_GlobalData_0_75, STATE_VARIABLE_GlobalData_76);
                Rval_62 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(MLDS_Type_22, ConsTag_24, Rval0_61);
                {
                  GroundTerm_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), GroundTerm_63, 0) = ((MR_Box) (Rval_62));
                  MR_hl_field(MR_mktag(0), GroundTerm_63, 1) = ((MR_Box) (VarType_21));
                  MR_hl_field(MR_mktag(0), GroundTerm_63, 2) = ((MR_Box) (MLDS_Type_22));
                }
                mercury__map__det_insert_4_p_0(TypeInfo_130_130, TypeCtorInfo_131_131, ((MR_Box) (Var_20)), ((MR_Box) (GroundTerm_63)), STATE_VARIABLE_GroundTermMap_99_99, STATE_VARIABLE_GroundTermMap_78);
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
          MR_Word Var_113;
          MR_Word ConstRval_186;
          MR_Word ConstGroundTerm_187;
          MR_Word Var_188;

          {
            Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
            MR_hl_field(MR_mktag(3), Var_113, 1) = ((MR_Box) (String_33));
          }
          {
            ConstRval_186 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ConstRval_186, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ConstRval_186, 1) = ((MR_Box) (Var_113));
          }
          {
            Var_188 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_188, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[14]));
            MR_hl_field(MR_mktag(0), Var_188, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_8));
            MR_hl_field(MR_mktag(0), Var_188, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_188, 3) = ((MR_Box) (ArgVars_25));
            MR_hl_field(MR_mktag(0), Var_188, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          mercury__require__expect_3_p_0(Var_188, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
          {
            ConstGroundTerm_187 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ConstGroundTerm_187, 0) = ((MR_Box) (ConstRval_186));
            MR_hl_field(MR_mktag(0), ConstGroundTerm_187, 1) = ((MR_Box) (VarType_21));
            MR_hl_field(MR_mktag(0), ConstGroundTerm_187, 2) = ((MR_Box) (MLDS_Type_22));
          }
          mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (Var_20)), ((MR_Box) (ConstGroundTerm_187)), STATE_VARIABLE_GroundTermMap_0_77, STATE_VARIABLE_GroundTermMap_78);
          *STATE_VARIABLE_GlobalData_76 = STATE_VARIABLE_GlobalData_0_75;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float Float_32 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_24, (MR_Integer) 0)));
          MR_Word Var_114;
          MR_Word ConstRval_140;
          MR_Word ConstGroundTerm_141;
          MR_Word Var_142;

          {
            Var_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
            MR_hl_field(MR_mktag(3), Var_114, 1) = MR_box_float(Float_32);
          }
          {
            ConstRval_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ConstRval_140, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ConstRval_140, 1) = ((MR_Box) (Var_114));
          }
          {
            Var_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_142, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[14]));
            MR_hl_field(MR_mktag(0), Var_142, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_2));
            MR_hl_field(MR_mktag(0), Var_142, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_142, 3) = ((MR_Box) (ArgVars_25));
            MR_hl_field(MR_mktag(0), Var_142, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          mercury__require__expect_3_p_0(Var_142, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
          {
            ConstGroundTerm_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ConstGroundTerm_141, 0) = ((MR_Box) (ConstRval_140));
            MR_hl_field(MR_mktag(0), ConstGroundTerm_141, 1) = ((MR_Box) (VarType_21));
            MR_hl_field(MR_mktag(0), ConstGroundTerm_141, 2) = ((MR_Box) (MLDS_Type_22));
          }
          mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (Var_20)), ((MR_Box) (ConstGroundTerm_141)), STATE_VARIABLE_GroundTermMap_0_77, STATE_VARIABLE_GroundTermMap_78);
          *STATE_VARIABLE_GlobalData_76 = STATE_VARIABLE_GlobalData_0_75;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word IntTag_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 1)));
              MR_Word IntConst_30;
              MR_Word ConstRval_162;
              MR_Word ConstGroundTerm_163;
              MR_Word Var_164;

              IntConst_30 = ml_backend__ml_unify_gen__int_tag_to_mlds_rval_const_3_f_0(VarType_21, MLDS_Type_22, IntTag_29);
              {
                ConstRval_162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstRval_162, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstRval_162, 1) = ((MR_Box) (IntConst_30));
              }
              {
                Var_164 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_164, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[14]));
                MR_hl_field(MR_mktag(0), Var_164, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_4));
                MR_hl_field(MR_mktag(0), Var_164, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_164, 3) = ((MR_Box) (ArgVars_25));
                MR_hl_field(MR_mktag(0), Var_164, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_164, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
              {
                ConstGroundTerm_163 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstGroundTerm_163, 0) = ((MR_Box) (ConstRval_162));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_163, 1) = ((MR_Box) (VarType_21));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_163, 2) = ((MR_Box) (MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (Var_20)), ((MR_Box) (ConstGroundTerm_163)), STATE_VARIABLE_GroundTermMap_0_77, STATE_VARIABLE_GroundTermMap_78);
              *STATE_VARIABLE_GlobalData_76 = STATE_VARIABLE_GlobalData_0_75;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ForeignLang_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 1)));
              MR_String ForeignTag_37 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 2)));
              MR_Word Var_105;
              MR_Word ConstRval_151;
              MR_Word ConstGroundTerm_152;
              MR_Word Var_153;

              {
                Var_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                MR_hl_field(MR_mktag(3), Var_105, 1) = ((MR_Box) (ForeignLang_36));
                MR_hl_field(MR_mktag(3), Var_105, 2) = ((MR_Box) (ForeignTag_37));
                MR_hl_field(MR_mktag(3), Var_105, 3) = ((MR_Box) (MLDS_Type_22));
              }
              {
                ConstRval_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstRval_151, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstRval_151, 1) = ((MR_Box) (Var_105));
              }
              {
                Var_153 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_153, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[14]));
                MR_hl_field(MR_mktag(0), Var_153, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_3));
                MR_hl_field(MR_mktag(0), Var_153, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_153, 3) = ((MR_Box) (ArgVars_25));
                MR_hl_field(MR_mktag(0), Var_153, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_153, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
              {
                ConstGroundTerm_152 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstGroundTerm_152, 0) = ((MR_Box) (ConstRval_151));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_152, 1) = ((MR_Box) (VarType_21));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_152, 2) = ((MR_Box) (MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (Var_20)), ((MR_Box) (ConstGroundTerm_152)), STATE_VARIABLE_GroundTermMap_0_77, STATE_VARIABLE_GroundTermMap_78);
              *STATE_VARIABLE_GlobalData_76 = STATE_VARIABLE_GlobalData_0_75;
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
              MR_Integer Ptag_196 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 1)));

              ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0(ModuleInfo_16, Target_17, HighLevelData_18, VarTypes_19, Var_20, VarType_21, MLDS_Type_22, ConsId_23, ConsTag_24, Ptag_196, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ArgVars_25, Context_26, STATE_VARIABLE_GlobalData_0_75, STATE_VARIABLE_GlobalData_76, STATE_VARIABLE_GroundTermMap_0_77, STATE_VARIABLE_GroundTermMap_78);
            }
            break;
          case (MR_Integer) 12:
            if ((ArgVars_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "no_tag arity != 1");
                return;
              }
            }
            else
            {
              MR_Word Var_197 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgVars_25, (MR_Integer) 1)));
              MR_Word Var_198 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgVars_25, (MR_Integer) 0)));

              if ((Var_197 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word TypeInfo_130_130 = (MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2];
                MR_Word TypeCtorInfo_131_131 = (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;
                MR_Word ArgGroundTerm_57;
                MR_Word ArgRval_58;
                MR_Word MLDS_ArgType_60;
                MR_Word Rval0_61;
                MR_Word Rval_62;
                MR_Word GroundTerm_63;
                MR_Word STATE_VARIABLE_GroundTermMap_99_99;
                MR_Box conv0_ArgGroundTerm_57;
                MR_Word _ArgType_59;

                mercury__map__det_remove_4_p_0(TypeInfo_130_130, TypeCtorInfo_131_131, ((MR_Box) (Var_198)), &conv0_ArgGroundTerm_57, STATE_VARIABLE_GroundTermMap_0_77, &STATE_VARIABLE_GroundTermMap_99_99);
                ArgGroundTerm_57 = ((MR_Word) conv0_ArgGroundTerm_57);
                ArgRval_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_57, (MR_Integer) 0)));
                _ArgType_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_57, (MR_Integer) 1)));
                MLDS_ArgType_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_57, (MR_Integer) 2)));
                ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_16, Context_26, MLDS_ArgType_60, (MR_Integer) 2, ArgRval_58, &Rval0_61, STATE_VARIABLE_GlobalData_0_75, STATE_VARIABLE_GlobalData_76);
                Rval_62 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(MLDS_Type_22, ConsTag_24, Rval0_61);
                {
                  GroundTerm_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), GroundTerm_63, 0) = ((MR_Box) (Rval_62));
                  MR_hl_field(MR_mktag(0), GroundTerm_63, 1) = ((MR_Box) (VarType_21));
                  MR_hl_field(MR_mktag(0), GroundTerm_63, 2) = ((MR_Box) (MLDS_Type_22));
                }
                mercury__map__det_insert_4_p_0(TypeInfo_130_130, TypeCtorInfo_131_131, ((MR_Box) (Var_20)), ((MR_Box) (GroundTerm_63)), STATE_VARIABLE_GroundTermMap_99_99, STATE_VARIABLE_GroundTermMap_78);
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
              MR_Word AddedBy_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 3)));
              MR_Word UsesConstructors_72;
              MR_Integer Stag_123 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 2)));
              MR_Integer Ptag_125 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 1)));

              UsesConstructors_72 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(Target_17);
              switch (UsesConstructors_72) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word StagRval0_73;
                    MR_Word StagRval_74;
                    MR_Word Var_83;
                    MR_Word Var_87;

                    {
                      Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[11]));
                      MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_6));
                      MR_hl_field(MR_mktag(0), Var_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_83, 3) = ((MR_Box) (AddedBy_71));
                      MR_hl_field(MR_mktag(0), Var_83, 4) = ((MR_Box) ((MR_Integer) 0));
                    }
                    mercury__require__expect_3_p_0(Var_83, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "AddedBy != sectag_added_by_unify");
                    {
                      Var_87 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_87, 0) = ((MR_Box) (Stag_123));
                    }
                    {
                      StagRval0_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), StagRval0_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), StagRval0_73, 1) = ((MR_Box) (Var_87));
                    }
                    switch (HighLevelData_18) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          {
                            StagRval_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), StagRval_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), StagRval_74, 1) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_5[38]));
                            MR_hl_field(MR_mktag(3), StagRval_74, 2) = ((MR_Box) (StagRval0_73));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        StagRval_74 = StagRval0_73;
                        break;
                    }
                    {
                      ExtraRvals_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ExtraRvals_70, 0) = ((MR_Box) (StagRval_74));
                      MR_hl_field(MR_mktag(1), ExtraRvals_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_79;

                    {
                      Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[11]));
                      MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_7));
                      MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_79, 3) = ((MR_Box) (AddedBy_71));
                      MR_hl_field(MR_mktag(0), Var_79, 4) = ((MR_Box) ((MR_Integer) 1));
                    }
                    mercury__require__expect_3_p_0(Var_79, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "AddedBy != sectag_added_by_constructor");
                    ExtraRvals_70 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
                  break;
              }
              ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0(ModuleInfo_16, Target_17, HighLevelData_18, VarTypes_19, Var_20, VarType_21, MLDS_Type_22, ConsId_23, ConsTag_24, Ptag_125, ExtraRvals_70, ArgVars_25, Context_26, STATE_VARIABLE_GlobalData_0_75, STATE_VARIABLE_GlobalData_76, STATE_VARIABLE_GroundTermMap_0_77, STATE_VARIABLE_GroundTermMap_78);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Integer Ptag_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 1)));
              MR_Integer Stag_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 2)));
              MR_Word Var_106;
              MR_Word Var_107;
              MR_Word Var_108;
              MR_Word Var_111;
              MR_Word Var_112;
              MR_Word ConstRval_173;
              MR_Word ConstGroundTerm_174;
              MR_Word Var_175;

              {
                Var_106 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_106, 0) = ((MR_Box) (MLDS_Type_22));
              }
              {
                Var_112 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_112, 0) = ((MR_Box) (Stag_35));
              }
              {
                Var_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_111, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_111, 1) = ((MR_Box) (Var_112));
              }
              {
                Var_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Var_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_5[35])));
                MR_hl_field(MR_mktag(3), Var_108, 2) = ((MR_Box) (Var_111));
              }
              {
                Var_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_107, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_107, 1) = ((MR_Box) (Ptag_34));
                MR_hl_field(MR_mktag(3), Var_107, 2) = ((MR_Box) (Var_108));
              }
              {
                ConstRval_173 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstRval_173, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ConstRval_173, 1) = ((MR_Box) (Var_106));
                MR_hl_field(MR_mktag(3), ConstRval_173, 2) = ((MR_Box) (Var_107));
              }
              {
                Var_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_175, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[14]));
                MR_hl_field(MR_mktag(0), Var_175, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_5));
                MR_hl_field(MR_mktag(0), Var_175, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_175, 3) = ((MR_Box) (ArgVars_25));
                MR_hl_field(MR_mktag(0), Var_175, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_175, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
              {
                ConstGroundTerm_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstGroundTerm_174, 0) = ((MR_Box) (ConstRval_173));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_174, 1) = ((MR_Box) (VarType_21));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_174, 2) = ((MR_Box) (MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (Var_20)), ((MR_Box) (ConstGroundTerm_174)), STATE_VARIABLE_GroundTermMap_0_77, STATE_VARIABLE_GroundTermMap_78);
              *STATE_VARIABLE_GlobalData_76 = STATE_VARIABLE_GlobalData_0_75;
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
    MR_Word TypeInfo_52_52;
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
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0_1));
      MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (VarTypes_21));
    }
    TypeInfo_52_52 = (MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2];
    ml_backend__ml_unify_gen__cons_id_arg_types_and_widths_7_p_1(TypeInfo_52_52, ModuleInfo_18, Var_41, (MR_Integer) 0, VarType_23, ConsId_25, ArgVars_29, &ArgVarsTypesWidths_33);
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
      Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (ConsId_25));
    }
    ml_backend__ml_unify_gen__construct_static_ground_term_14_p_0(ModuleInfo_18, Target_19, HighLevelData_20, Context_30, VarType_23, MLDS_Type_24, Var_47, UsesBaseClass_35, Ptag_27, ExtraRvals_28, ArgRvalsTypesWidths_34, &GroundTerm_36, STATE_VARIABLE_GlobalData_45_45, STATE_VARIABLE_GlobalData_38);
    mercury__map__det_insert_4_p_0(TypeInfo_52_52, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (Var_22)), ((MR_Box) (GroundTerm_36)), STATE_VARIABLE_GroundTermMap_46_46, STATE_VARIABLE_GroundTermMap_40);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__cons_id_arg_types_and_widths_7_p_1_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__cons_id_arg_types_and_widths__3007__2_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__cons_id_arg_types_and_widths_7_p_1(
  MR_Word TypeInfo_for_Arg_53,
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
        MR_Integer Var_30;
        MR_Integer Var_31;
        MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 0)));
        MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 1)));
        MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 2)));
        MR_Integer Var_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 4)));
        MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 5)));

        Var_30 = mercury__list__length_1_f_0(TypeInfo_for_Arg_53, Args_13);
        Var_31 = mercury__list__length_1_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0, ConsArgRepns_19);
        NumExtraArgs_20 = (MR_Integer) ((MR_Unsigned) Var_30 - (MR_Unsigned) Var_31);
        succeeded = (NumExtraArgs_20 == (MR_Integer) 0);
        if (succeeded)
          ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_114_103_115_95_116_121_112_101_115_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(Args_13, ConsArgRepns_19, ArgsTypesWidths_14);
        else
        {
          MR_Word TypeInfo_57_57;
          MR_Word ExtraArgs_21;
          MR_Word NonExtraArgs_22;
          MR_Integer InitOffset_26;
          MR_Word ExtraArgsTypesWidths_27;
          MR_Word NonExtraArgsTypesWidths_28;
          MR_Word Var_32;
          MR_Word AddedBy_25;
          MR_Word Var_36;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word Var_50;
          MR_Integer Var_51;
          MR_Word Var_52;
          MR_Integer Var_23;
          MR_Integer Var_24;
          MR_Word conv0_ArgsTypesWidths_14;

          {
            Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[1]));
            MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (ml_backend__ml_unify_gen__cons_id_arg_types_and_widths_7_p_1_1));
            MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (MayHaveExtraArgs_10));
            MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) ((MR_Integer) 1));
          }
          mercury__require__expect_3_p_0(Var_32, (MR_String) "predicate \140ml_backend.ml_unify_gen.cons_id_arg_types_and_widths\'/7", (MR_String) "extra args in static struct");
          mercury__list__det_split_list_4_p_0(TypeInfo_for_Arg_53, NumExtraArgs_20, Args_13, &ExtraArgs_21, &NonExtraArgs_22);
          Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 0)));
          Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 1)));
          Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 2)));
          Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 3)));
          Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 4)));
          Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 5)));
          succeeded = ((((MR_tag((MR_Word) Var_36)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_36, (MR_Integer) 0)))) == (MR_Integer) 13)));
          if (succeeded)
          {
            Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_36, (MR_Integer) 1)));
            Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_36, (MR_Integer) 2)));
            AddedBy_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_36, (MR_Integer) 3)));
            succeeded = (AddedBy_25 == (MR_Integer) 0);
          }
          if (succeeded)
            InitOffset_26 = (MR_Integer) 1;
          else
            InitOffset_26 = (MR_Integer) 0;
          ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_116_121_112_101_95_97_110_100_95_97_108_108_111_99_97_116_101_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_4_p_0(ArgToType_9, InitOffset_26, ExtraArgs_21, &ExtraArgsTypesWidths_27);
          ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_114_103_115_95_116_121_112_101_115_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(NonExtraArgs_22, ConsArgRepns_19, &NonExtraArgsTypesWidths_28);
          {
            TypeInfo_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_57_57, 0) = ((MR_Box) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_arg_type_and_width_1));
            MR_hl_field(MR_mktag(0), TypeInfo_57_57, 1) = ((MR_Box) (TypeInfo_for_Arg_53));
          }
          conv0_ArgsTypesWidths_14 = mercury__list__f_43_43_2_f_0(TypeInfo_57_57, (MR_Word) ExtraArgsTypesWidths_27, (MR_Word) NonExtraArgsTypesWidths_28);
          *ArgsTypesWidths_14 = (MR_Word) conv0_ArgsTypesWidths_14;
        }
      }
      else
      {
        MR_Word Var_29;

        succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(VarType_11, &Var_29);
        if (succeeded)
        {
          MR_Word Var_37;

          Var_37 = ml_backend__ml_code_util__ml_make_boxed_type_0_f_0();
          ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_101_99_105_102_105_101_100_95_97_114_103_95_116_121_112_101_115_95_97_110_100_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_4_p_0(Var_37, (MR_Integer) 0, Args_13, ArgsTypesWidths_14);
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
      ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_116_121_112_101_95_97_110_100_95_97_108_108_111_99_97_116_101_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_4_p_0(ArgToType_9, (MR_Integer) 0, Args_13, ArgsTypesWidths_14);
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
    MR_Word ArgPosWidth_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgVarTypeWidth_19, (MR_Integer) 2)));
    MR_Word ArgGroundTerm_46;
    MR_Word ArgRval0_47;
    MR_Word MLDS_ArgType_49;
    MR_Word ArgWidth_50;
    MR_Word ArgRval_51;
    MR_Word _ConsArgType_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgVarTypeWidth_19, (MR_Integer) 1)));
    MR_Box conv0_ArgGroundTerm_46;
    MR_Word _ArgType_48;

    mercury__map__det_remove_4_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (ArgVar_43)), &conv0_ArgGroundTerm_46, STATE_VARIABLE_GroundTermMap_0_7, &STATE_VARIABLE_GroundTermMap_30_30);
    ArgGroundTerm_46 = ((MR_Word) conv0_ArgGroundTerm_46);
    ArgRval0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_46, (MR_Integer) 0)));
    _ArgType_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_46, (MR_Integer) 1)));
    MLDS_ArgType_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_46, (MR_Integer) 2)));
    ArgWidth_50 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_45);
    ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_1, Context_2, MLDS_ArgType_49, ArgWidth_50, ArgRval0_47, &ArgRval_51, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_29_29);
    {
      RvalTypeWidth_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RvalTypeWidth_21, 0) = ((MR_Box) (ArgRval_51));
      MR_hl_field(MR_mktag(0), RvalTypeWidth_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      MR_hl_field(MR_mktag(0), RvalTypeWidth_21, 2) = ((MR_Box) (ArgPosWidth_45));
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
  MR_Word STATE_VARIABLE_GlobalData_0_25,
  MR_Word * STATE_VARIABLE_GlobalData_26,
  MR_Word STATE_VARIABLE_GroundTermMap_0_27,
  MR_Word * STATE_VARIABLE_GroundTermMap_28)
{
  {
    MR_bool succeeded;
    MR_Word ArgVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgVarTypeWidth_11, (MR_Integer) 0)));
    MR_Word ConsArgType_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgVarTypeWidth_11, (MR_Integer) 1)));
    MR_Word ArgPosWidth_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgVarTypeWidth_11, (MR_Integer) 2)));
    MR_Word ArgGroundTerm_18;
    MR_Word ArgRval0_19;
    MR_Word ArgType_20;
    MR_Word ArgWidth_22;
    MR_Word ArgRval_24;
    MR_Box conv0_ArgGroundTerm_18;
    MR_Word _MLDS_ArgType_21;

    mercury__map__det_remove_4_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (ArgVar_15)), &conv0_ArgGroundTerm_18, STATE_VARIABLE_GroundTermMap_0_27, STATE_VARIABLE_GroundTermMap_28);
    ArgGroundTerm_18 = ((MR_Word) conv0_ArgGroundTerm_18);
    ArgRval0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_18, (MR_Integer) 0)));
    ArgType_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_18, (MR_Integer) 1)));
    _MLDS_ArgType_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_18, (MR_Integer) 2)));
    ArgWidth_22 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_17);
    succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ModuleInfo_9, ConsArgType_16, ArgWidth_22);
    if (succeeded)
    {
      MR_Word TypeCtorInfo_15_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
      MR_Word TypeVarSet0_40;
      MR_Word MLDS_ArgType_56;
      MR_Word TypeVar_41;
      MR_Word _TypeVarSet_42;

      mercury__varset__init_1_p_0(TypeCtorInfo_15_44, &TypeVarSet0_40);
      mercury__varset__new_var_3_p_0(TypeCtorInfo_15_44, &TypeVar_41, TypeVarSet0_40, &_TypeVarSet_42);
      MLDS_ArgType_56 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_9, ArgType_20);
      ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_9, Context_10, MLDS_ArgType_56, (MR_Integer) 2, ArgRval0_19, &ArgRval_24, STATE_VARIABLE_GlobalData_0_25, STATE_VARIABLE_GlobalData_26);
    }
    else
      switch (MR_tag((MR_Word) ConsArgType_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MLDS_ArgType_76;

            MLDS_ArgType_76 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_9, ArgType_20);
            ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_9, Context_10, MLDS_ArgType_76, (MR_Integer) 2, ArgRval0_19, &ArgRval_24, STATE_VARIABLE_GlobalData_0_25, STATE_VARIABLE_GlobalData_26);
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_9, ArgType_20, ConsArgType_16, (MR_Integer) 0, ArgRval0_19, &ArgRval_24);
            *STATE_VARIABLE_GlobalData_26 = STATE_VARIABLE_GlobalData_0_25;
          }
          break;
        case (MR_Integer) 3:
          {
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_9, ArgType_20, ConsArgType_16, (MR_Integer) 0, ArgRval0_19, &ArgRval_24);
            *STATE_VARIABLE_GlobalData_26 = STATE_VARIABLE_GlobalData_0_25;
          }
          break;
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *RvalTypeWidth_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ArgRval_24));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ArgPosWidth_17));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__198__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__230__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__218__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__166__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
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
            MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[12]));
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
              MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[13]));
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
                  MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_5[33])));
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
            MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[12]));
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
                MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[12]));
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
                    EqualityOp_23 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[15]);
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
  MR_Word ArgVars_11,
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
    ml_backend__ml_unify_gen__ml_gen_det_deconstruct_8_p_0(Var_9, ConsId_10, ArgVars_11, ArgModes_12, Context_13, &GetArgsStmts_19, STATE_VARIABLE_Info_28_28, STATE_VARIABLE_Info_25);
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
              TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[25]);
            }
            break;
          case (MR_Integer) 1:
            {
              TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[25]);
            }
            break;
          case (MR_Integer) 2:
            {
              TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[25]);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String String_11 = ((MR_String) (MR_hl_field(MR_mktag(1), Tag_7, (MR_Integer) 0)));
          MR_Word Var_95;
          MR_Word Var_96;

          {
            Var_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
            MR_hl_field(MR_mktag(3), Var_96, 1) = ((MR_Box) (String_11));
          }
          {
            Var_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_95, 1) = ((MR_Box) (Var_96));
          }
          {
            TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (Rval_9));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (Var_95));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float Float_12 = MR_unbox_float((MR_hl_field(MR_mktag(2), Tag_7, (MR_Integer) 0)));
          MR_Word Var_92;
          MR_Word Var_93;

          {
            Var_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
            MR_hl_field(MR_mktag(3), Var_93, 1) = MR_box_float(Float_12);
          }
          {
            Var_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_92, 1) = ((MR_Box) (Var_93));
          }
          {
            TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (Rval_9));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (Var_92));
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
              MR_Word Var_88;
              MR_Word ModuleInfo_97;

              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_6, &ModuleInfo_97);
              MLDS_Type_17 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_97, Type_8);
              {
                Var_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                MR_hl_field(MR_mktag(3), Var_88, 1) = ((MR_Box) (ForeignLang_15));
                MR_hl_field(MR_mktag(3), Var_88, 2) = ((MR_Box) (ForeignVal_16));
                MR_hl_field(MR_mktag(3), Var_88, 3) = ((MR_Box) (MLDS_Type_17));
              }
              {
                Const_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Const_18, 1) = ((MR_Box) (Var_88));
              }
              {
                TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[15])));
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
              MR_Integer UnsharedPtag_100 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 1)));
              MR_Word RvalTag_101;
              MR_Word UnsharedTag_102;
              MR_Word Var_107;
              MR_Word Var_108;

              {
                RvalTag_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), RvalTag_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), RvalTag_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_5[37])));
                MR_hl_field(MR_mktag(3), RvalTag_101, 2) = ((MR_Box) (Rval_9));
              }
              {
                Var_108 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_108, 0) = ((MR_Box) (UnsharedPtag_100));
              }
              {
                Var_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_107, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_107, 1) = ((MR_Box) (Var_108));
              }
              {
                UnsharedTag_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), UnsharedTag_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), UnsharedTag_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_5[22])));
                MR_hl_field(MR_mktag(3), UnsharedTag_102, 2) = ((MR_Box) (Var_107));
              }
              {
                TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[15])));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (RvalTag_101));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (UnsharedTag_102));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer UnsharedPtag_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 1)));
              MR_Word RvalTag_39;
              MR_Word UnsharedTag_40;
              MR_Word Var_79;
              MR_Word Var_80;

              {
                RvalTag_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), RvalTag_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), RvalTag_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_5[37])));
                MR_hl_field(MR_mktag(3), RvalTag_39, 2) = ((MR_Box) (Rval_9));
              }
              {
                Var_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_80, 0) = ((MR_Box) (UnsharedPtag_38));
              }
              {
                Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_79, 1) = ((MR_Box) (Var_80));
              }
              {
                UnsharedTag_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), UnsharedTag_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), UnsharedTag_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_5[22])));
                MR_hl_field(MR_mktag(3), UnsharedTag_40, 2) = ((MR_Box) (Var_79));
              }
              {
                TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[15])));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (RvalTag_39));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (UnsharedTag_40));
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Integer PrimaryTag_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 1)));
              MR_Integer SecondaryTag_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 2)));
              MR_Word SecondaryTagFieldRval_44;
              MR_Word SecondaryTagTestRval_45;
              MR_Integer NumPtagBits_46;
              MR_Word Var_62;
              MR_Word Var_64;
              MR_Word Var_65;
              MR_Word _AddedBy_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 3)));

              ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_p_0(Info_6, Type_8, Rval_9, PrimaryTag_41, &SecondaryTagFieldRval_44);
              Var_62 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[15]);
              {
                Var_65 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_65, 0) = ((MR_Box) (SecondaryTag_42));
              }
              {
                Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_64, 1) = ((MR_Box) (Var_65));
              }
              {
                SecondaryTagTestRval_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), SecondaryTagTestRval_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), SecondaryTagTestRval_45, 1) = ((MR_Box) (Var_62));
                MR_hl_field(MR_mktag(3), SecondaryTagTestRval_45, 2) = ((MR_Box) (SecondaryTagFieldRval_44));
                MR_hl_field(MR_mktag(3), SecondaryTagTestRval_45, 3) = ((MR_Box) (Var_64));
              }
              ml_backend__ml_gen_info__ml_gen_info_get_num_ptag_bits_2_p_0(Info_6, &NumPtagBits_46);
              succeeded = (NumPtagBits_46 == (MR_Integer) 0);
              if (succeeded)
                TagTestRval_10 = SecondaryTagTestRval_45;
              else
              {
                MR_Word RvalPTag_47;
                MR_Word PrimaryTagRval_48;
                MR_Word PrimaryTagTestRval_49;
                MR_Word Var_70;
                MR_Word Var_71;

                {
                  RvalPTag_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), RvalPTag_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), RvalPTag_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_5[37])));
                  MR_hl_field(MR_mktag(3), RvalPTag_47, 2) = ((MR_Box) (Rval_9));
                }
                {
                  Var_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_71, 0) = ((MR_Box) (PrimaryTag_41));
                }
                {
                  Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_70, 1) = ((MR_Box) (Var_71));
                }
                {
                  PrimaryTagRval_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), PrimaryTagRval_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), PrimaryTagRval_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_5[22])));
                  MR_hl_field(MR_mktag(3), PrimaryTagRval_48, 2) = ((MR_Box) (Var_70));
                }
                {
                  PrimaryTagTestRval_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), PrimaryTagTestRval_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), PrimaryTagTestRval_49, 1) = ((MR_Box) (Var_62));
                  MR_hl_field(MR_mktag(3), PrimaryTagTestRval_49, 2) = ((MR_Box) (RvalPTag_47));
                  MR_hl_field(MR_mktag(3), PrimaryTagTestRval_49, 3) = ((MR_Box) (PrimaryTagRval_48));
                }
                {
                  TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (PrimaryTagTestRval_49));
                  MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (SecondaryTagTestRval_45));
                }
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Integer Ptag_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 1)));
              MR_Integer Num_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 2)));
              MR_Word Var_54;
              MR_Word Var_55;
              MR_Word Var_56;
              MR_Word Var_57;
              MR_Word Var_60;
              MR_Word Var_61;
              MR_Word ModuleInfo_98;
              MR_Word MLDS_Type_99;

              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_6, &ModuleInfo_98);
              MLDS_Type_99 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_98, Type_8);
              {
                Var_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_55, 0) = ((MR_Box) (MLDS_Type_99));
              }
              {
                Var_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_61, 0) = ((MR_Box) (Num_51));
              }
              {
                Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (Var_61));
              }
              {
                Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_5[35])));
                MR_hl_field(MR_mktag(3), Var_57, 2) = ((MR_Box) (Var_60));
              }
              {
                Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (Ptag_50));
                MR_hl_field(MR_mktag(3), Var_56, 2) = ((MR_Box) (Var_57));
              }
              {
                Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Var_54, 1) = ((MR_Box) (Var_55));
                MR_hl_field(MR_mktag(3), Var_54, 2) = ((MR_Box) (Var_56));
              }
              {
                TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[15])));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (Rval_9));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (Var_54));
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
            MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[15])));
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
            MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[20])));
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
            MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[19])));
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
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[24])));
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
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[16])));
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
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[21])));
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
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[17])));
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
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[22])));
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
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[18])));
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
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[23])));
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
            MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_5[36]));
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
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_5[28])));
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
  MR_Word ArgVars_11,
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

    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_60, Var_9, &Type_16);
    ml_backend__ml_unify_gen__ml_cons_id_to_tag_3_p_0(STATE_VARIABLE_Info_0_60, ConsId_10, &Tag_17);
    switch (MR_tag((MR_Word) Tag_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Tag_17)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InitOffSet_57;
              MR_Integer ArgNum_58;
              MR_Word Fields_59;
              MR_Word VarLval_95;
              MR_Integer Var_56;

              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_60, Var_9, &VarLval_95);
              ml_backend__ml_unify_gen__ml_tag_offset_and_argnum_4_p_0(Tag_17, &Var_56, &InitOffSet_57, &ArgNum_58);
              ml_backend__ml_unify_gen__ml_field_names_and_types_6_p_0(STATE_VARIABLE_Info_0_60, Type_16, ConsId_10, InitOffSet_57, ArgVars_11, &Fields_59);
              ml_backend__ml_unify_gen__ml_gen_unify_args_13_p_0(ConsId_10, ArgVars_11, Modes_12, Fields_59, Type_16, VarLval_95, InitOffSet_57, ArgNum_58, Tag_17, Context_13, Stmts_14, STATE_VARIABLE_Info_0_60, STATE_VARIABLE_Info_61);
            }
            break;
          case (MR_Integer) 1:
            {
              *Stmts_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *STATE_VARIABLE_Info_61 = STATE_VARIABLE_Info_0_60;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgVar_44;
              MR_Word Mode_45;
              MR_Word Var_67;
              MR_Word Var_68;

              succeeded = ((MR_tag((MR_Word) ArgVars_11)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                ArgVar_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgVars_11, (MR_Integer) 0)));
                Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgVars_11, (MR_Integer) 1)));
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

                ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_60, ArgVar_44, &ArgType_46);
                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_60, ArgVar_44, &ArgLval_47);
                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_60, Var_9, &VarLval_48);
                ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_60, &ModuleInfo_49);
                ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_60, &HighLevelData_50);
                ml_backend__ml_unify_gen__ml_gen_sub_unify_11_p_0(ModuleInfo_49, HighLevelData_50, Mode_45, ArgLval_47, ArgType_46, VarLval_48, Type_16, (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_1[6]), Context_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Stmts_14);
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
              MR_Word InitOffSet_57;
              MR_Integer ArgNum_58;
              MR_Word Fields_59;
              MR_Word VarLval_95;
              MR_Integer Var_56;

              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_60, Var_9, &VarLval_95);
              ml_backend__ml_unify_gen__ml_tag_offset_and_argnum_4_p_0(Tag_17, &Var_56, &InitOffSet_57, &ArgNum_58);
              ml_backend__ml_unify_gen__ml_field_names_and_types_6_p_0(STATE_VARIABLE_Info_0_60, Type_16, ConsId_10, InitOffSet_57, ArgVars_11, &Fields_59);
              ml_backend__ml_unify_gen__ml_gen_unify_args_13_p_0(ConsId_10, ArgVars_11, Modes_12, Fields_59, Type_16, VarLval_95, InitOffSet_57, ArgNum_58, Tag_17, Context_13, Stmts_14, STATE_VARIABLE_Info_0_60, STATE_VARIABLE_Info_61);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer Ptag_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_17, (MR_Integer) 1)));
              MR_Word ArgVar_83;
              MR_Word Mode_84;
              MR_Word Var_63;
              MR_Word Var_64;

              succeeded = ((MR_tag((MR_Word) ArgVars_11)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                ArgVar_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgVars_11, (MR_Integer) 0)));
                Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgVars_11, (MR_Integer) 1)));
                succeeded = (Var_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Modes_12)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Mode_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_12, (MR_Integer) 0)));
                    Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_12, (MR_Integer) 1)));
                    succeeded = (Var_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              }
              if (succeeded)
              {
                MR_Word ArgType_79;
                MR_Word ArgLval_80;
                MR_Word VarLval_81;
                MR_Word ModuleInfo_82;

                ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_60, ArgVar_83, &ArgType_79);
                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_60, ArgVar_83, &ArgLval_80);
                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_60, Var_9, &VarLval_81);
                ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_60, &ModuleInfo_82);
                ml_backend__ml_unify_gen__ml_gen_direct_arg_deconstruct_9_p_0(ModuleInfo_82, Mode_84, Ptag_51, ArgLval_80, ArgType_79, VarLval_81, Type_16, Context_13, Stmts_14);
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
ml_backend__ml_unify_gen__ml_gen_unify_args_13_p_0(
  MR_Word ConsId_14,
  MR_Word ArgVars_15,
  MR_Word Modes_16,
  MR_Word CtorArgRepns_17,
  MR_Word VarType_18,
  MR_Word VarLval_19,
  MR_Word Offset_20,
  MR_Integer ArgNum_21,
  MR_Word Tag_22,
  MR_Word Context_23,
  MR_Word * Stmts_24,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  {
    MR_bool succeeded;
    MR_Word Stmts0_26;
    MR_Word STATE_VARIABLE_Info_30_30;

    succeeded = ml_backend__ml_unify_gen__ml_gen_unify_args_loop_14_p_0(ConsId_14, ArgVars_15, Modes_16, CtorArgRepns_17, VarType_18, VarLval_19, Offset_20, ArgNum_21, Tag_22, Context_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Stmts0_26, STATE_VARIABLE_Info_0_27, &STATE_VARIABLE_Info_30_30);
    if (succeeded)
    {
      *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_30_30;
      *Stmts_24 = Stmts0_26;
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unify_args\'/13", (MR_String) "length mismatch");
        return;
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unify_args_loop_14_p_0(
  MR_Word ConsId_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word VarType_5,
  MR_Word VarLval_6,
  MR_Word CurOffset_7,
  MR_Integer CurArgNum_8,
  MR_Word Tag_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Stmts_0_11,
  MR_Word * STATE_VARIABLE_Stmts_12,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      succeeded = (HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        *STATE_VARIABLE_Info_14 = STATE_VARIABLE_Info_0_13;
        *STATE_VARIABLE_Stmts_12 = STATE_VARIABLE_Stmts_0_11;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word ArgVar_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Mode_32;
      MR_Word Modes_33;
      MR_Word CtorArgRepn_34;
      MR_Word CtorArgRepns_35;
      MR_Word NextOffset_44;
      MR_Integer NextArgNum_45;
      MR_Integer Var_50;
      MR_Word STATE_VARIABLE_Stmts_51_51;
      MR_Word STATE_VARIABLE_Info_52_52;

      succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Mode_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        Modes_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          CtorArgRepn_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
          CtorArgRepns_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
          ml_backend__ml_unify_gen__ml_next_field_offset_4_p_0(CtorArgRepn_34, CtorArgRepns_35, CurOffset_7, &NextOffset_44);
          Var_50 = (MR_Integer) 1;
          NextArgNum_45 = (MR_Integer) ((MR_Unsigned) CurArgNum_8 + (MR_Unsigned) Var_50);
          succeeded = ml_backend__ml_unify_gen__ml_gen_unify_args_loop_14_p_0(ConsId_1, ArgVars_31, Modes_33, CtorArgRepns_35, VarType_5, VarLval_6, NextOffset_44, NextArgNum_45, Tag_9, Context_10, STATE_VARIABLE_Stmts_0_11, &STATE_VARIABLE_Stmts_51_51, STATE_VARIABLE_Info_0_13, &STATE_VARIABLE_Info_52_52);
          if (succeeded)
          {
            ml_backend__ml_unify_gen__ml_gen_unify_arg_14_p_0(ConsId_1, ArgVar_30, Mode_32, CtorArgRepn_34, VarType_5, VarLval_6, CurOffset_7, CurArgNum_8, Tag_9, Context_10, STATE_VARIABLE_Stmts_51_51, STATE_VARIABLE_Stmts_12, STATE_VARIABLE_Info_52_52, STATE_VARIABLE_Info_14);
            succeeded = MR_TRUE;
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
  MR_Word STATE_VARIABLE_Info_0_102,
  MR_Word * STATE_VARIABLE_Info_103)
{
  {
    MR_bool succeeded;
    MR_Word VarType_20;
    MR_Word Tag_21;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_102, Var_11, &VarType_20);
    ml_backend__ml_unify_gen__ml_cons_id_to_tag_3_p_0(STATE_VARIABLE_Info_0_102, ConsId_12, &Tag_21);
    switch (MR_tag((MR_Word) Tag_21)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Tag_21)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word UsesBaseClass_203;

              UsesBaseClass_203 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(Tag_21);
              ml_backend__ml_unify_gen__ml_gen_compound_13_p_0(ConsId_12, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), UsesBaseClass_203, Var_11, Args_13, ArgModes_14, TakeAddr_15, HowToConstruct_16, Context_17, Stmts_18, STATE_VARIABLE_Info_0_102, STATE_VARIABLE_Info_103);
            }
            break;
          case (MR_Integer) 1:
            if ((Args_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word VarLval_176;
              MR_Word ModuleInfo_177;
              MR_Word MLDS_Type_178;
              MR_Word Rval_179;
              MR_Word GroundTerm_180;
              MR_Word Stmt_181;

              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_102, Var_11, &VarLval_176);
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_102, &ModuleInfo_177);
              MLDS_Type_178 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_177, VarType_20);
              switch (MR_tag((MR_Word) Tag_21)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    Rval_179 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_5[21], VarType_20, MLDS_Type_178);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String String_76 = ((MR_String) (MR_hl_field(MR_mktag(1), Tag_21, (MR_Integer) 0)));
                    MR_Word Var_128;

                    {
                      Var_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                      MR_hl_field(MR_mktag(3), Var_128, 1) = ((MR_Box) (String_76));
                    }
                    {
                      Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (Var_128));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Float Float_75 = MR_unbox_float((MR_hl_field(MR_mktag(2), Tag_21, (MR_Integer) 0)));
                    MR_Word Var_129;

                    {
                      Var_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                      MR_hl_field(MR_mktag(3), Var_129, 1) = MR_box_float(Float_75);
                    }
                    {
                      Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (Var_129));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word IntTag_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 1)));

                        Rval_179 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0(IntTag_74, VarType_20, MLDS_Type_178);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ForeignLang_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 1)));
                        MR_String ForeignTag_78 = ((MR_String) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 2)));
                        MR_Word Var_127;

                        {
                          Var_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                          MR_hl_field(MR_mktag(3), Var_127, 1) = ((MR_Box) (ForeignLang_77));
                          MR_hl_field(MR_mktag(3), Var_127, 2) = ((MR_Box) (ForeignTag_78));
                          MR_hl_field(MR_mktag(3), Var_127, 3) = ((MR_Box) (MLDS_Type_178));
                        }
                        {
                          Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (Var_127));
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word ModuleName0_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 1)));
                        MR_String TypeName_82 = ((MR_String) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 2)));
                        MR_Integer TypeArity_83 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 3)));
                        MR_Word ModuleName_84;
                        MR_Word MLDS_Module_85;
                        MR_Word RttiTypeCtor_86;
                        MR_Word RttiId_87;
                        MR_Word Const_88;
                        MR_Word Var_118;
                        MR_Word Var_119;

                        ModuleName_84 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_81);
                        MLDS_Module_85 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_84);
                        {
                          RttiTypeCtor_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_86, 0) = ((MR_Box) (ModuleName_84));
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_86, 1) = ((MR_Box) (TypeName_82));
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_86, 2) = ((MR_Box) (TypeArity_83));
                        }
                        {
                          RttiId_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), RttiId_87, 0) = ((MR_Box) (RttiTypeCtor_86));
                          MR_hl_field(MR_mktag(0), RttiId_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
                        }
                        {
                          Const_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Const_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                          MR_hl_field(MR_mktag(3), Const_88, 1) = ((MR_Box) (MLDS_Module_85));
                          MR_hl_field(MR_mktag(3), Const_88, 2) = ((MR_Box) (RttiId_87));
                        }
                        {
                          Var_118 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), Var_118, 0) = ((MR_Box) (MLDS_Type_178));
                        }
                        {
                          Var_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Var_119, 1) = ((MR_Box) (Const_88));
                        }
                        {
                          Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (Var_118));
                          MR_hl_field(MR_mktag(3), Rval_179, 2) = ((MR_Box) (Var_119));
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word ClassId_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 2)));
                        MR_String Instance_90 = ((MR_String) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 3)));
                        MR_Word TCName_91;
                        MR_Word Var_114;
                        MR_Word Var_115;
                        MR_Word Var_116;
                        MR_Word ModuleName_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 1)));
                        MR_Word MLDS_Module_168;
                        MR_Word RttiId_169;
                        MR_Word Const_170;

                        MLDS_Module_168 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_167);
                        TCName_91 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_89);
                        {
                          Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (ModuleName_167));
                          MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Instance_90));
                        }
                        {
                          RttiId_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), RttiId_169, 0) = ((MR_Box) (TCName_91));
                          MR_hl_field(MR_mktag(1), RttiId_169, 1) = ((MR_Box) (Var_114));
                        }
                        {
                          Const_170 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Const_170, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                          MR_hl_field(MR_mktag(3), Const_170, 1) = ((MR_Box) (MLDS_Module_168));
                          MR_hl_field(MR_mktag(3), Const_170, 2) = ((MR_Box) (RttiId_169));
                        }
                        {
                          Var_115 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), Var_115, 0) = ((MR_Box) (MLDS_Type_178));
                        }
                        {
                          Var_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Var_116, 1) = ((MR_Box) (Const_170));
                        }
                        {
                          Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (Var_115));
                          MR_hl_field(MR_mktag(3), Rval_179, 2) = ((MR_Box) (Var_116));
                        }
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word PredLabel_92;
                        MR_Word PredModule_93;
                        MR_Word ProcLabel_94;
                        MR_Word QualProcLabel_95;
                        MR_Word Var_110;
                        MR_Word Var_112;
                        MR_Word Var_113;
                        MR_Word PredId_171 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 1)));
                        MR_Integer ProcId_172 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 2)));
                        MR_Word Const_173;

                        {
                          Var_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_110, 0) = ((MR_Box) (PredId_171));
                          MR_hl_field(MR_mktag(0), Var_110, 1) = ((MR_Box) (ProcId_172));
                        }
                        ml_backend__ml_code_util__ml_gen_pred_label_4_p_0(ModuleInfo_177, Var_110, &PredLabel_92, &PredModule_93);
                        {
                          ProcLabel_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ProcLabel_94, 0) = ((MR_Box) (PredLabel_92));
                          MR_hl_field(MR_mktag(0), ProcLabel_94, 1) = ((MR_Box) (ProcId_172));
                        }
                        {
                          QualProcLabel_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), QualProcLabel_95, 0) = ((MR_Box) (PredModule_93));
                          MR_hl_field(MR_mktag(0), QualProcLabel_95, 1) = ((MR_Box) (ProcLabel_94));
                        }
                        {
                          Const_173 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Const_173, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
                          MR_hl_field(MR_mktag(3), Const_173, 1) = ((MR_Box) (QualProcLabel_95));
                          MR_hl_field(MR_mktag(3), Const_173, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          Var_112 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), Var_112, 0) = ((MR_Box) (MLDS_Type_178));
                        }
                        {
                          Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Var_113, 1) = ((MR_Box) (Const_173));
                        }
                        {
                          Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (Var_112));
                          MR_hl_field(MR_mktag(3), Rval_179, 2) = ((MR_Box) (Var_113));
                        }
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct\'/10", (MR_String) "deep_profiling_proc_layout_tag NYI");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 10:
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct\'/10", (MR_String) "table_io_entry_tag NYI");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 14:
                      {
                        MR_Integer Bits1_79 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 1)));
                        MR_Integer Num1_80 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 2)));
                        MR_Word Var_120;
                        MR_Word Var_121;
                        MR_Word Var_122;
                        MR_Word Var_125;
                        MR_Word Var_126;

                        {
                          Var_120 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), Var_120, 0) = ((MR_Box) (MLDS_Type_178));
                        }
                        {
                          Var_126 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), Var_126, 0) = ((MR_Box) (Num1_80));
                        }
                        {
                          Var_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Var_125, 1) = ((MR_Box) (Var_126));
                        }
                        {
                          Var_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), Var_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_5[35])));
                          MR_hl_field(MR_mktag(3), Var_122, 2) = ((MR_Box) (Var_125));
                        }
                        {
                          Var_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), Var_121, 1) = ((MR_Box) (Bits1_79));
                          MR_hl_field(MR_mktag(3), Var_121, 2) = ((MR_Box) (Var_122));
                        }
                        {
                          Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (Var_120));
                          MR_hl_field(MR_mktag(3), Rval_179, 2) = ((MR_Box) (Var_121));
                        }
                      }
                      break;
                  }
                  break;
              }
              {
                GroundTerm_180 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_180, 0) = ((MR_Box) (Rval_179));
                MR_hl_field(MR_mktag(0), GroundTerm_180, 1) = ((MR_Box) (VarType_20));
                MR_hl_field(MR_mktag(0), GroundTerm_180, 2) = ((MR_Box) (MLDS_Type_178));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_11, GroundTerm_180, STATE_VARIABLE_Info_0_102, STATE_VARIABLE_Info_103);
              Stmt_181 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_176, Rval_179, Context_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_181));
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
              MR_Word ArgVar_23;
              MR_Word ArgMode_24;
              MR_Word Var_139;
              MR_Word Var_140;

              succeeded = ((MR_tag((MR_Word) Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                ArgVar_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0)));
                Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1)));
                succeeded = (Var_139 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) ArgModes_14)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgMode_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgModes_14, (MR_Integer) 0)));
                    Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgModes_14, (MR_Integer) 1)));
                    succeeded = (Var_140 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              }
              if (succeeded)
              {
                MR_Word VarLval_25;
                MR_Word ModuleInfo_26;
                MR_Word MLDS_Type_27;
                MR_Word ArgGroundTerm_28;

                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_102, Var_11, &VarLval_25);
                ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_102, &ModuleInfo_26);
                MLDS_Type_27 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_26, VarType_20);
                succeeded = ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(STATE_VARIABLE_Info_0_102, ArgVar_23, &ArgGroundTerm_28);
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
                  MR_Word STATE_VARIABLE_Info_142_142;
                  MR_Word _ArgType_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_28, (MR_Integer) 1)));

                  ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_102, &GlobalData0_32);
                  ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_26, Context_17, MLDS_ArgType_31, (MR_Integer) 2, ArgRval_29, &Rval0_33, GlobalData0_32, &GlobalData_34);
                  ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_34, STATE_VARIABLE_Info_0_102, &STATE_VARIABLE_Info_142_142);
                  Rval_35 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(MLDS_Type_27, Tag_21, Rval0_33);
                  {
                    GroundTerm_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), GroundTerm_36, 0) = ((MR_Box) (Rval_35));
                    MR_hl_field(MR_mktag(0), GroundTerm_36, 1) = ((MR_Box) (VarType_20));
                    MR_hl_field(MR_mktag(0), GroundTerm_36, 2) = ((MR_Box) (MLDS_Type_27));
                  }
                  ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_11, GroundTerm_36, STATE_VARIABLE_Info_142_142, STATE_VARIABLE_Info_103);
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

                  ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_102, ArgVar_23, &ArgLval_38);
                  ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_102, ArgVar_23, &ArgType_39);
                  if ((Tag_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
                  {
                    MR_Word ArgRval_151;
                    MR_Word Rval_152;
                    MR_Word Stmt_153;

                    {
                      ArgRval_151 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ArgRval_151, 0) = ((MR_Box) (ArgLval_38));
                    }
                    ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_26, ArgType_39, VarType_20, (MR_Integer) 0, ArgRval_151, &Rval_152);
                    Stmt_153 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_25, Rval_152, Context_17);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *Stmts_18 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_153));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  else
                  {
                    MR_Integer Ptag_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 1)));

                    ml_backend__ml_unify_gen__ml_gen_direct_arg_construct_9_p_0(ModuleInfo_26, ArgMode_24, Ptag_40, ArgLval_38, ArgType_39, VarLval_25, VarType_20, Context_17, Stmts_18);
                  }
                  *STATE_VARIABLE_Info_103 = STATE_VARIABLE_Info_0_102;
                }
              }
              else
              if ((Tag_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
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
          MR_Word VarLval_176;
          MR_Word ModuleInfo_177;
          MR_Word MLDS_Type_178;
          MR_Word Rval_179;
          MR_Word GroundTerm_180;
          MR_Word Stmt_181;

          ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_102, Var_11, &VarLval_176);
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_102, &ModuleInfo_177);
          MLDS_Type_178 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_177, VarType_20);
          switch (MR_tag((MR_Word) Tag_21)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                Rval_179 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_5[21], VarType_20, MLDS_Type_178);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String String_76 = ((MR_String) (MR_hl_field(MR_mktag(1), Tag_21, (MR_Integer) 0)));
                MR_Word Var_128;

                {
                  Var_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                  MR_hl_field(MR_mktag(3), Var_128, 1) = ((MR_Box) (String_76));
                }
                {
                  Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (Var_128));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Float Float_75 = MR_unbox_float((MR_hl_field(MR_mktag(2), Tag_21, (MR_Integer) 0)));
                MR_Word Var_129;

                {
                  Var_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                  MR_hl_field(MR_mktag(3), Var_129, 1) = MR_box_float(Float_75);
                }
                {
                  Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (Var_129));
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word IntTag_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 1)));

                    Rval_179 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0(IntTag_74, VarType_20, MLDS_Type_178);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ForeignLang_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 1)));
                    MR_String ForeignTag_78 = ((MR_String) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 2)));
                    MR_Word Var_127;

                    {
                      Var_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                      MR_hl_field(MR_mktag(3), Var_127, 1) = ((MR_Box) (ForeignLang_77));
                      MR_hl_field(MR_mktag(3), Var_127, 2) = ((MR_Box) (ForeignTag_78));
                      MR_hl_field(MR_mktag(3), Var_127, 3) = ((MR_Box) (MLDS_Type_178));
                    }
                    {
                      Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (Var_127));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word ModuleName0_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 1)));
                    MR_String TypeName_82 = ((MR_String) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 2)));
                    MR_Integer TypeArity_83 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 3)));
                    MR_Word ModuleName_84;
                    MR_Word MLDS_Module_85;
                    MR_Word RttiTypeCtor_86;
                    MR_Word RttiId_87;
                    MR_Word Const_88;
                    MR_Word Var_118;
                    MR_Word Var_119;

                    ModuleName_84 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_81);
                    MLDS_Module_85 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_84);
                    {
                      RttiTypeCtor_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), RttiTypeCtor_86, 0) = ((MR_Box) (ModuleName_84));
                      MR_hl_field(MR_mktag(0), RttiTypeCtor_86, 1) = ((MR_Box) (TypeName_82));
                      MR_hl_field(MR_mktag(0), RttiTypeCtor_86, 2) = ((MR_Box) (TypeArity_83));
                    }
                    {
                      RttiId_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), RttiId_87, 0) = ((MR_Box) (RttiTypeCtor_86));
                      MR_hl_field(MR_mktag(0), RttiId_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
                    }
                    {
                      Const_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Const_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                      MR_hl_field(MR_mktag(3), Const_88, 1) = ((MR_Box) (MLDS_Module_85));
                      MR_hl_field(MR_mktag(3), Const_88, 2) = ((MR_Box) (RttiId_87));
                    }
                    {
                      Var_118 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_118, 0) = ((MR_Box) (MLDS_Type_178));
                    }
                    {
                      Var_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Var_119, 1) = ((MR_Box) (Const_88));
                    }
                    {
                      Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (Var_118));
                      MR_hl_field(MR_mktag(3), Rval_179, 2) = ((MR_Box) (Var_119));
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word ClassId_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 2)));
                    MR_String Instance_90 = ((MR_String) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 3)));
                    MR_Word TCName_91;
                    MR_Word Var_114;
                    MR_Word Var_115;
                    MR_Word Var_116;
                    MR_Word ModuleName_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 1)));
                    MR_Word MLDS_Module_168;
                    MR_Word RttiId_169;
                    MR_Word Const_170;

                    MLDS_Module_168 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_167);
                    TCName_91 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_89);
                    {
                      Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (ModuleName_167));
                      MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Instance_90));
                    }
                    {
                      RttiId_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), RttiId_169, 0) = ((MR_Box) (TCName_91));
                      MR_hl_field(MR_mktag(1), RttiId_169, 1) = ((MR_Box) (Var_114));
                    }
                    {
                      Const_170 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Const_170, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                      MR_hl_field(MR_mktag(3), Const_170, 1) = ((MR_Box) (MLDS_Module_168));
                      MR_hl_field(MR_mktag(3), Const_170, 2) = ((MR_Box) (RttiId_169));
                    }
                    {
                      Var_115 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_115, 0) = ((MR_Box) (MLDS_Type_178));
                    }
                    {
                      Var_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Var_116, 1) = ((MR_Box) (Const_170));
                    }
                    {
                      Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (Var_115));
                      MR_hl_field(MR_mktag(3), Rval_179, 2) = ((MR_Box) (Var_116));
                    }
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    MR_Word PredLabel_92;
                    MR_Word PredModule_93;
                    MR_Word ProcLabel_94;
                    MR_Word QualProcLabel_95;
                    MR_Word Var_110;
                    MR_Word Var_112;
                    MR_Word Var_113;
                    MR_Word PredId_171 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 1)));
                    MR_Integer ProcId_172 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 2)));
                    MR_Word Const_173;

                    {
                      Var_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_110, 0) = ((MR_Box) (PredId_171));
                      MR_hl_field(MR_mktag(0), Var_110, 1) = ((MR_Box) (ProcId_172));
                    }
                    ml_backend__ml_code_util__ml_gen_pred_label_4_p_0(ModuleInfo_177, Var_110, &PredLabel_92, &PredModule_93);
                    {
                      ProcLabel_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ProcLabel_94, 0) = ((MR_Box) (PredLabel_92));
                      MR_hl_field(MR_mktag(0), ProcLabel_94, 1) = ((MR_Box) (ProcId_172));
                    }
                    {
                      QualProcLabel_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), QualProcLabel_95, 0) = ((MR_Box) (PredModule_93));
                      MR_hl_field(MR_mktag(0), QualProcLabel_95, 1) = ((MR_Box) (ProcLabel_94));
                    }
                    {
                      Const_173 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Const_173, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
                      MR_hl_field(MR_mktag(3), Const_173, 1) = ((MR_Box) (QualProcLabel_95));
                      MR_hl_field(MR_mktag(3), Const_173, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      Var_112 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_112, 0) = ((MR_Box) (MLDS_Type_178));
                    }
                    {
                      Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Var_113, 1) = ((MR_Box) (Const_173));
                    }
                    {
                      Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (Var_112));
                      MR_hl_field(MR_mktag(3), Rval_179, 2) = ((MR_Box) (Var_113));
                    }
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct\'/10", (MR_String) "deep_profiling_proc_layout_tag NYI");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 10:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct\'/10", (MR_String) "table_io_entry_tag NYI");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 14:
                  {
                    MR_Integer Bits1_79 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 1)));
                    MR_Integer Num1_80 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 2)));
                    MR_Word Var_120;
                    MR_Word Var_121;
                    MR_Word Var_122;
                    MR_Word Var_125;
                    MR_Word Var_126;

                    {
                      Var_120 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_120, 0) = ((MR_Box) (MLDS_Type_178));
                    }
                    {
                      Var_126 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_126, 0) = ((MR_Box) (Num1_80));
                    }
                    {
                      Var_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Var_125, 1) = ((MR_Box) (Var_126));
                    }
                    {
                      Var_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), Var_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_5[35])));
                      MR_hl_field(MR_mktag(3), Var_122, 2) = ((MR_Box) (Var_125));
                    }
                    {
                      Var_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), Var_121, 1) = ((MR_Box) (Bits1_79));
                      MR_hl_field(MR_mktag(3), Var_121, 2) = ((MR_Box) (Var_122));
                    }
                    {
                      Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (Var_120));
                      MR_hl_field(MR_mktag(3), Rval_179, 2) = ((MR_Box) (Var_121));
                    }
                  }
                  break;
              }
              break;
          }
          {
            GroundTerm_180 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), GroundTerm_180, 0) = ((MR_Box) (Rval_179));
            MR_hl_field(MR_mktag(0), GroundTerm_180, 1) = ((MR_Box) (VarType_20));
            MR_hl_field(MR_mktag(0), GroundTerm_180, 2) = ((MR_Box) (MLDS_Type_178));
          }
          ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_11, GroundTerm_180, STATE_VARIABLE_Info_0_102, STATE_VARIABLE_Info_103);
          Stmt_181 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_176, Rval_179, Context_17);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Stmts_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_181));
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
              MR_Word VarLval_176;
              MR_Word ModuleInfo_177;
              MR_Word MLDS_Type_178;
              MR_Word Rval_179;
              MR_Word GroundTerm_180;
              MR_Word Stmt_181;

              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_102, Var_11, &VarLval_176);
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_102, &ModuleInfo_177);
              MLDS_Type_178 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_177, VarType_20);
              switch (MR_tag((MR_Word) Tag_21)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    Rval_179 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_5[21], VarType_20, MLDS_Type_178);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String String_76 = ((MR_String) (MR_hl_field(MR_mktag(1), Tag_21, (MR_Integer) 0)));
                    MR_Word Var_128;

                    {
                      Var_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                      MR_hl_field(MR_mktag(3), Var_128, 1) = ((MR_Box) (String_76));
                    }
                    {
                      Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (Var_128));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Float Float_75 = MR_unbox_float((MR_hl_field(MR_mktag(2), Tag_21, (MR_Integer) 0)));
                    MR_Word Var_129;

                    {
                      Var_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                      MR_hl_field(MR_mktag(3), Var_129, 1) = MR_box_float(Float_75);
                    }
                    {
                      Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (Var_129));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word IntTag_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 1)));

                        Rval_179 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0(IntTag_74, VarType_20, MLDS_Type_178);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ForeignLang_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 1)));
                        MR_String ForeignTag_78 = ((MR_String) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 2)));
                        MR_Word Var_127;

                        {
                          Var_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                          MR_hl_field(MR_mktag(3), Var_127, 1) = ((MR_Box) (ForeignLang_77));
                          MR_hl_field(MR_mktag(3), Var_127, 2) = ((MR_Box) (ForeignTag_78));
                          MR_hl_field(MR_mktag(3), Var_127, 3) = ((MR_Box) (MLDS_Type_178));
                        }
                        {
                          Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (Var_127));
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word ModuleName0_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 1)));
                        MR_String TypeName_82 = ((MR_String) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 2)));
                        MR_Integer TypeArity_83 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 3)));
                        MR_Word ModuleName_84;
                        MR_Word MLDS_Module_85;
                        MR_Word RttiTypeCtor_86;
                        MR_Word RttiId_87;
                        MR_Word Const_88;
                        MR_Word Var_118;
                        MR_Word Var_119;

                        ModuleName_84 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_81);
                        MLDS_Module_85 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_84);
                        {
                          RttiTypeCtor_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_86, 0) = ((MR_Box) (ModuleName_84));
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_86, 1) = ((MR_Box) (TypeName_82));
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_86, 2) = ((MR_Box) (TypeArity_83));
                        }
                        {
                          RttiId_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), RttiId_87, 0) = ((MR_Box) (RttiTypeCtor_86));
                          MR_hl_field(MR_mktag(0), RttiId_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
                        }
                        {
                          Const_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Const_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                          MR_hl_field(MR_mktag(3), Const_88, 1) = ((MR_Box) (MLDS_Module_85));
                          MR_hl_field(MR_mktag(3), Const_88, 2) = ((MR_Box) (RttiId_87));
                        }
                        {
                          Var_118 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), Var_118, 0) = ((MR_Box) (MLDS_Type_178));
                        }
                        {
                          Var_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Var_119, 1) = ((MR_Box) (Const_88));
                        }
                        {
                          Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (Var_118));
                          MR_hl_field(MR_mktag(3), Rval_179, 2) = ((MR_Box) (Var_119));
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word ClassId_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 2)));
                        MR_String Instance_90 = ((MR_String) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 3)));
                        MR_Word TCName_91;
                        MR_Word Var_114;
                        MR_Word Var_115;
                        MR_Word Var_116;
                        MR_Word ModuleName_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 1)));
                        MR_Word MLDS_Module_168;
                        MR_Word RttiId_169;
                        MR_Word Const_170;

                        MLDS_Module_168 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_167);
                        TCName_91 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_89);
                        {
                          Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (ModuleName_167));
                          MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Instance_90));
                        }
                        {
                          RttiId_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), RttiId_169, 0) = ((MR_Box) (TCName_91));
                          MR_hl_field(MR_mktag(1), RttiId_169, 1) = ((MR_Box) (Var_114));
                        }
                        {
                          Const_170 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Const_170, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                          MR_hl_field(MR_mktag(3), Const_170, 1) = ((MR_Box) (MLDS_Module_168));
                          MR_hl_field(MR_mktag(3), Const_170, 2) = ((MR_Box) (RttiId_169));
                        }
                        {
                          Var_115 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), Var_115, 0) = ((MR_Box) (MLDS_Type_178));
                        }
                        {
                          Var_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Var_116, 1) = ((MR_Box) (Const_170));
                        }
                        {
                          Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (Var_115));
                          MR_hl_field(MR_mktag(3), Rval_179, 2) = ((MR_Box) (Var_116));
                        }
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word PredLabel_92;
                        MR_Word PredModule_93;
                        MR_Word ProcLabel_94;
                        MR_Word QualProcLabel_95;
                        MR_Word Var_110;
                        MR_Word Var_112;
                        MR_Word Var_113;
                        MR_Word PredId_171 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 1)));
                        MR_Integer ProcId_172 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 2)));
                        MR_Word Const_173;

                        {
                          Var_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_110, 0) = ((MR_Box) (PredId_171));
                          MR_hl_field(MR_mktag(0), Var_110, 1) = ((MR_Box) (ProcId_172));
                        }
                        ml_backend__ml_code_util__ml_gen_pred_label_4_p_0(ModuleInfo_177, Var_110, &PredLabel_92, &PredModule_93);
                        {
                          ProcLabel_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ProcLabel_94, 0) = ((MR_Box) (PredLabel_92));
                          MR_hl_field(MR_mktag(0), ProcLabel_94, 1) = ((MR_Box) (ProcId_172));
                        }
                        {
                          QualProcLabel_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), QualProcLabel_95, 0) = ((MR_Box) (PredModule_93));
                          MR_hl_field(MR_mktag(0), QualProcLabel_95, 1) = ((MR_Box) (ProcLabel_94));
                        }
                        {
                          Const_173 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Const_173, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
                          MR_hl_field(MR_mktag(3), Const_173, 1) = ((MR_Box) (QualProcLabel_95));
                          MR_hl_field(MR_mktag(3), Const_173, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          Var_112 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), Var_112, 0) = ((MR_Box) (MLDS_Type_178));
                        }
                        {
                          Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Var_113, 1) = ((MR_Box) (Const_173));
                        }
                        {
                          Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (Var_112));
                          MR_hl_field(MR_mktag(3), Rval_179, 2) = ((MR_Box) (Var_113));
                        }
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct\'/10", (MR_String) "deep_profiling_proc_layout_tag NYI");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 10:
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct\'/10", (MR_String) "table_io_entry_tag NYI");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 14:
                      {
                        MR_Integer Bits1_79 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 1)));
                        MR_Integer Num1_80 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 2)));
                        MR_Word Var_120;
                        MR_Word Var_121;
                        MR_Word Var_122;
                        MR_Word Var_125;
                        MR_Word Var_126;

                        {
                          Var_120 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), Var_120, 0) = ((MR_Box) (MLDS_Type_178));
                        }
                        {
                          Var_126 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), Var_126, 0) = ((MR_Box) (Num1_80));
                        }
                        {
                          Var_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Var_125, 1) = ((MR_Box) (Var_126));
                        }
                        {
                          Var_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), Var_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_5[35])));
                          MR_hl_field(MR_mktag(3), Var_122, 2) = ((MR_Box) (Var_125));
                        }
                        {
                          Var_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), Var_121, 1) = ((MR_Box) (Bits1_79));
                          MR_hl_field(MR_mktag(3), Var_121, 2) = ((MR_Box) (Var_122));
                        }
                        {
                          Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (Var_120));
                          MR_hl_field(MR_mktag(3), Rval_179, 2) = ((MR_Box) (Var_121));
                        }
                      }
                      break;
                  }
                  break;
              }
              {
                GroundTerm_180 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_180, 0) = ((MR_Box) (Rval_179));
                MR_hl_field(MR_mktag(0), GroundTerm_180, 1) = ((MR_Box) (VarType_20));
                MR_hl_field(MR_mktag(0), GroundTerm_180, 2) = ((MR_Box) (MLDS_Type_178));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_11, GroundTerm_180, STATE_VARIABLE_Info_0_102, STATE_VARIABLE_Info_103);
              Stmt_181 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_176, Rval_179, Context_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_181));
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

              ml_backend__ml_closure_gen__ml_gen_closure_10_p_0(PredId_46, ProcId_47, Var_11, Args_13, ArgModes_14, HowToConstruct_16, Context_17, Stmts_18, STATE_VARIABLE_Info_0_102, STATE_VARIABLE_Info_103);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer ConstNum_207 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 1)));
              MR_Word ConstStructMap_208;
              MR_Word GroundTerm0_209;
              MR_Word VarLval_213;
              MR_Word ModuleInfo_214;
              MR_Word MLDS_Type_215;
              MR_Word Rval_216;
              MR_Word GroundTerm_217;
              MR_Word Stmt_218;
              MR_Box conv1_GroundTerm0_209;
              MR_Word _Type_205;
              MR_Word _MLDS_Type_206;

              ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_102, &ConstStructMap_208);
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ConstStructMap_208, ConstNum_207, &conv1_GroundTerm0_209);
              GroundTerm0_209 = ((MR_Word) conv1_GroundTerm0_209);
              Rval_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm0_209, (MR_Integer) 0)));
              _Type_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm0_209, (MR_Integer) 1)));
              _MLDS_Type_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm0_209, (MR_Integer) 2)));
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_102, Var_11, &VarLval_213);
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_102, &ModuleInfo_214);
              MLDS_Type_215 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_214, VarType_20);
              {
                GroundTerm_217 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_217, 0) = ((MR_Box) (Rval_216));
                MR_hl_field(MR_mktag(0), GroundTerm_217, 1) = ((MR_Box) (VarType_20));
                MR_hl_field(MR_mktag(0), GroundTerm_217, 2) = ((MR_Box) (MLDS_Type_215));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_11, GroundTerm_217, STATE_VARIABLE_Info_0_102, STATE_VARIABLE_Info_103);
              Stmt_218 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_213, Rval_216, Context_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_218));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Integer ConstNum_223 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 1)));
              MR_Word ConstStructMap_224;
              MR_Word GroundTerm0_225;
              MR_Word VarLval_229;
              MR_Word ModuleInfo_230;
              MR_Word MLDS_Type_231;
              MR_Word Rval_232;
              MR_Word GroundTerm_233;
              MR_Word Stmt_234;
              MR_Box conv2_GroundTerm0_225;
              MR_Word _Type_221;
              MR_Word _MLDS_Type_222;

              ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_102, &ConstStructMap_224);
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ConstStructMap_224, ConstNum_223, &conv2_GroundTerm0_225);
              GroundTerm0_225 = ((MR_Word) conv2_GroundTerm0_225);
              Rval_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm0_225, (MR_Integer) 0)));
              _Type_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm0_225, (MR_Integer) 1)));
              _MLDS_Type_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm0_225, (MR_Integer) 2)));
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_102, Var_11, &VarLval_229);
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_102, &ModuleInfo_230);
              MLDS_Type_231 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_230, VarType_20);
              {
                GroundTerm_233 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_233, 0) = ((MR_Box) (Rval_232));
                MR_hl_field(MR_mktag(0), GroundTerm_233, 1) = ((MR_Box) (VarType_20));
                MR_hl_field(MR_mktag(0), GroundTerm_233, 2) = ((MR_Box) (MLDS_Type_231));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_11, GroundTerm_233, STATE_VARIABLE_Info_0_102, STATE_VARIABLE_Info_103);
              Stmt_234 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_229, Rval_232, Context_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_234));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Integer ConstNum_49 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 1)));
              MR_Word ConstStructMap_51;
              MR_Word GroundTerm0_52;
              MR_Word VarLval_161;
              MR_Word ModuleInfo_162;
              MR_Word MLDS_Type_163;
              MR_Word Rval_164;
              MR_Word GroundTerm_165;
              MR_Word Stmt_166;
              MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 2)));
              MR_Box conv0_GroundTerm0_52;
              MR_Word _Type_53;
              MR_Word _MLDS_Type_54;

              ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_102, &ConstStructMap_51);
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ConstStructMap_51, ConstNum_49, &conv0_GroundTerm0_52);
              GroundTerm0_52 = ((MR_Word) conv0_GroundTerm0_52);
              Rval_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm0_52, (MR_Integer) 0)));
              _Type_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm0_52, (MR_Integer) 1)));
              _MLDS_Type_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm0_52, (MR_Integer) 2)));
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_102, Var_11, &VarLval_161);
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_102, &ModuleInfo_162);
              MLDS_Type_163 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_162, VarType_20);
              {
                GroundTerm_165 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_165, 0) = ((MR_Box) (Rval_164));
                MR_hl_field(MR_mktag(0), GroundTerm_165, 1) = ((MR_Box) (VarType_20));
                MR_hl_field(MR_mktag(0), GroundTerm_165, 2) = ((MR_Box) (MLDS_Type_163));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_11, GroundTerm_165, STATE_VARIABLE_Info_0_102, STATE_VARIABLE_Info_103);
              Stmt_166 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_161, Rval_164, Context_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_166));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word UsesBaseClass_238;
              MR_Integer Ptag_239 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 1)));

              UsesBaseClass_238 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(Tag_21);
              ml_backend__ml_unify_gen__ml_gen_compound_13_p_0(ConsId_12, Ptag_239, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), UsesBaseClass_238, Var_11, Args_13, ArgModes_14, TakeAddr_15, HowToConstruct_16, Context_17, Stmts_18, STATE_VARIABLE_Info_0_102, STATE_VARIABLE_Info_103);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word ArgVar_23;
              MR_Word ArgMode_24;
              MR_Word Var_139;
              MR_Word Var_140;

              succeeded = ((MR_tag((MR_Word) Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                ArgVar_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0)));
                Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1)));
                succeeded = (Var_139 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) ArgModes_14)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgMode_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgModes_14, (MR_Integer) 0)));
                    Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgModes_14, (MR_Integer) 1)));
                    succeeded = (Var_140 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              }
              if (succeeded)
              {
                MR_Word VarLval_25;
                MR_Word ModuleInfo_26;
                MR_Word MLDS_Type_27;
                MR_Word ArgGroundTerm_28;

                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_102, Var_11, &VarLval_25);
                ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_102, &ModuleInfo_26);
                MLDS_Type_27 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_26, VarType_20);
                succeeded = ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(STATE_VARIABLE_Info_0_102, ArgVar_23, &ArgGroundTerm_28);
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
                  MR_Word STATE_VARIABLE_Info_142_142;
                  MR_Word _ArgType_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_28, (MR_Integer) 1)));

                  ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_102, &GlobalData0_32);
                  ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_26, Context_17, MLDS_ArgType_31, (MR_Integer) 2, ArgRval_29, &Rval0_33, GlobalData0_32, &GlobalData_34);
                  ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_34, STATE_VARIABLE_Info_0_102, &STATE_VARIABLE_Info_142_142);
                  Rval_35 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(MLDS_Type_27, Tag_21, Rval0_33);
                  {
                    GroundTerm_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), GroundTerm_36, 0) = ((MR_Box) (Rval_35));
                    MR_hl_field(MR_mktag(0), GroundTerm_36, 1) = ((MR_Box) (VarType_20));
                    MR_hl_field(MR_mktag(0), GroundTerm_36, 2) = ((MR_Box) (MLDS_Type_27));
                  }
                  ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_11, GroundTerm_36, STATE_VARIABLE_Info_142_142, STATE_VARIABLE_Info_103);
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

                  ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_102, ArgVar_23, &ArgLval_38);
                  ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_102, ArgVar_23, &ArgType_39);
                  if ((Tag_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
                  {
                    MR_Word ArgRval_151;
                    MR_Word Rval_152;
                    MR_Word Stmt_153;

                    {
                      ArgRval_151 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ArgRval_151, 0) = ((MR_Box) (ArgLval_38));
                    }
                    ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_26, ArgType_39, VarType_20, (MR_Integer) 0, ArgRval_151, &Rval_152);
                    Stmt_153 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_25, Rval_152, Context_17);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *Stmts_18 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_153));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  else
                  {
                    MR_Integer Ptag_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 1)));

                    ml_backend__ml_unify_gen__ml_gen_direct_arg_construct_9_p_0(ModuleInfo_26, ArgMode_24, Ptag_40, ArgLval_38, ArgType_39, VarLval_25, VarType_20, Context_17, Stmts_18);
                  }
                  *STATE_VARIABLE_Info_103 = STATE_VARIABLE_Info_0_102;
                }
              }
              else
              if ((Tag_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
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
              MR_Word MaybeStag_42;
              MR_Integer Stag_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 2)));
              MR_Word AddedBy_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 3)));
              MR_Word UsesBaseClass_45;
              MR_Tuple Var_137;
              MR_Integer Ptag_160 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_21, (MR_Integer) 1)));

              {
                Var_137 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_137, 0) = ((MR_Box) (Stag_43));
                MR_hl_field(MR_mktag(0), Var_137, 1) = ((MR_Box) (AddedBy_44));
              }
              {
                MaybeStag_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeStag_42, 0) = ((MR_Box) (Var_137));
              }
              UsesBaseClass_45 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(Tag_21);
              ml_backend__ml_unify_gen__ml_gen_compound_13_p_0(ConsId_12, Ptag_160, MaybeStag_42, UsesBaseClass_45, Var_11, Args_13, ArgModes_14, TakeAddr_15, HowToConstruct_16, Context_17, Stmts_18, STATE_VARIABLE_Info_0_102, STATE_VARIABLE_Info_103);
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

    if ((Tag_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
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

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_compound_13_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_compound__510__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_compound_13_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_compound__495__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
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
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39)
{
  {
    MR_bool succeeded;
    MR_Word CompilationTarget_26;
    MR_Word MaybeCtorName_27;
    MR_Word ExplicitSecTag_32;
    MR_Word ExtraRvalsTypesWidths_37;
    MR_Word Var_58;

    ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_38, &CompilationTarget_26);
    switch (UsesBaseClass_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word CtorName_28;
          MR_Word ConsId_71;
          MR_Word ModuleName_72;
          MR_Word ConsSymName_65;
          MR_Integer ConsArity_66;
          MR_Word TypeCtor_67;
          MR_Word SymModuleName_68;
          MR_String Var_69;

          succeeded = ((((MR_tag((MR_Word) ConsId_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_14, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            ConsSymName_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_14, (MR_Integer) 1)));
            ConsArity_66 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_14, (MR_Integer) 2)));
            TypeCtor_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_14, (MR_Integer) 3)));
            succeeded = ((MR_tag((MR_Word) ConsSymName_65)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              SymModuleName_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConsSymName_65, (MR_Integer) 0)));
              Var_69 = ((MR_String) (MR_hl_field(MR_mktag(1), ConsSymName_65, (MR_Integer) 1)));
            }
          }
          if (succeeded)
          {
            MR_String ConsName_70;

            ConsName_70 = ml_backend__ml_type_gen__ml_gen_du_ctor_name_4_f_0(CompilationTarget_26, TypeCtor_67, ConsSymName_65, ConsArity_66);
            {
              ConsId_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ConsId_71, 0) = ((MR_Box) (ConsName_70));
              MR_hl_field(MR_mktag(0), ConsId_71, 1) = ((MR_Box) (ConsArity_66));
            }
            ModuleName_72 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(SymModuleName_68);
          }
          else
          {
            MR_String ConsName_77;

            ConsName_77 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ConsId_14);
            {
              ConsId_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ConsId_71, 0) = ((MR_Box) (ConsName_77));
              MR_hl_field(MR_mktag(0), ConsId_71, 1) = ((MR_Box) ((MR_Integer) 0));
            }
            ModuleName_72 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_5[34]);
          }
          {
            CtorName_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CtorName_28, 0) = ((MR_Box) (ModuleName_72));
            MR_hl_field(MR_mktag(0), CtorName_28, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), CtorName_28, 2) = ((MR_Box) (ConsId_71));
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
      ExplicitSecTag_32 = (MR_Integer) 0;
      ExtraRvalsTypesWidths_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Integer Stag_29;
      MR_Word AddedBy_30;
      MR_Word UsesConstructors_31;
      MR_Tuple Var_40 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), MaybeStag_16, (MR_Integer) 0)));

      Stag_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_40, (MR_Integer) 0)));
      AddedBy_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_40, (MR_Integer) 1)));
      UsesConstructors_31 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(CompilationTarget_26);
      switch (UsesConstructors_31) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word StagRval0_33;
            MR_Word StagRval_35;
            MR_Word Var_45;
            MR_Word Var_49;
            MR_Word Var_51;

            {
              Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[11]));
              MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_compound_13_p_0_1));
              MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (AddedBy_30));
              MR_hl_field(MR_mktag(0), Var_45, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            mercury__require__expect_3_p_0(Var_45, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_compound\'/13", (MR_String) "AddedBy != sectag_added_by_unify");
            ExplicitSecTag_32 = (MR_Integer) 1;
            {
              Var_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_49, 0) = ((MR_Box) (Stag_29));
            }
            {
              StagRval0_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), StagRval0_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), StagRval0_33, 1) = ((MR_Box) (Var_49));
            }
            {
              StagRval_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), StagRval_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), StagRval_35, 1) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_5[28]));
              MR_hl_field(MR_mktag(3), StagRval_35, 2) = ((MR_Box) (StagRval0_33));
            }
            {
              Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (StagRval_35));
              MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
              MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_1[6])));
            }
            {
              ExtraRvalsTypesWidths_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ExtraRvalsTypesWidths_37, 0) = ((MR_Box) (Var_51));
              MR_hl_field(MR_mktag(1), ExtraRvalsTypesWidths_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_41;

            {
              Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[11]));
              MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_compound_13_p_0_2));
              MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (AddedBy_30));
              MR_hl_field(MR_mktag(0), Var_41, 4) = ((MR_Box) ((MR_Integer) 1));
            }
            mercury__require__expect_3_p_0(Var_41, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_compound\'/13", (MR_String) "AddedBy != sectag_added_by_constructor");
            ExplicitSecTag_32 = (MR_Integer) 0;
            ExtraRvalsTypesWidths_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
          break;
      }
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (ConsId_14));
    }
    ml_backend__ml_unify_gen__ml_gen_new_object_14_p_0(Var_58, MaybeCtorName_27, Ptag_15, ExplicitSecTag_32, Var_18, ExtraRvalsTypesWidths_37, ArgVars_19, ArgModes_20, TakeAddr_21, HowToConstruct_22, Context_23, Stmts_24, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_14_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object__549__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_14_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object__537__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
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
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37)
{
  {
    MR_bool succeeded;
    MR_Word VarType_28;
    MR_Word MLDS_Type_29;
    MR_Word VarLval_30;
    MR_Word ConsIdOrClosure_32;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_36, Var_19, &VarType_28);
    ml_backend__ml_code_util__ml_gen_type_3_p_0(STATE_VARIABLE_Info_0_36, VarType_28, &MLDS_Type_29);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_36, Var_19, &VarLval_30);
    if ((MaybeConsId_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer NumExtras_33;
      MR_Word Var_38;

      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[5]));
        MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_14_p_0_1));
        MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (ExplicitSecTag_18));
        MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) ((MR_Integer) 0));
      }
      mercury__require__expect_3_p_0(Var_38, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_new_object\'/14", (MR_String) "sectag on closure");
      mercury__list__length_2_p_0((MR_Word) &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_mlds_rval_type_and_width_0, ExtraRvalsTypesWidths_20, &NumExtras_33);
      {
        ConsIdOrClosure_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ConsIdOrClosure_32, 0) = ((MR_Box) (NumExtras_33));
      }
    }
    else
    {
      MR_Word ConsId_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeConsId_15, (MR_Integer) 0)));

      {
        ConsIdOrClosure_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ConsIdOrClosure_32, 0) = ((MR_Box) (ConsId_31));
      }
    }
    switch (MR_tag((MR_Word) HowToConstruct_24)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HowToConstruct_24)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_45;

              {
                Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[10]));
                MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_14_p_0_2));
                MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (TakeAddr_23));
                MR_hl_field(MR_mktag(0), Var_45, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_45, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_new_object\'/14", (MR_String) "cannot take address of static object\'s field");
              ml_backend__ml_unify_gen__ml_gen_new_object_statically_13_p_0(ConsIdOrClosure_32, MaybeCtorName_16, Ptag_17, Var_19, VarLval_30, VarType_28, MLDS_Type_29, ExtraRvalsTypesWidths_20, ArgVars_21, Context_25, Stmts_26, STATE_VARIABLE_Info_0_36, STATE_VARIABLE_Info_37);
            }
            break;
          case (MR_Integer) 1:
            ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_101_119_95_111_98_106_101_99_116_95_100_121_110_97_109_105_99_97_108_108_121_95_95_91_53_93_95_48_16_p_0(ConsIdOrClosure_32, MaybeCtorName_16, Ptag_17, ExplicitSecTag_18, VarLval_30, VarType_28, MLDS_Type_29, ExtraRvalsTypesWidths_20, ArgVars_21, ArgModes_22, TakeAddr_23, Context_25, Stmts_26, STATE_VARIABLE_Info_0_36, STATE_VARIABLE_Info_37);
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CellToReuse_34 = (MR_Word) MR_body(((MR_Word) HowToConstruct_24), (MR_Integer) 1);

          ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_17_p_0(ConsIdOrClosure_32, MaybeCtorName_16, Ptag_17, ExplicitSecTag_18, Var_19, VarLval_30, VarType_28, MLDS_Type_29, ExtraRvalsTypesWidths_20, ArgVars_21, ArgModes_22, TakeAddr_23, CellToReuse_34, Context_25, Stmts_26, STATE_VARIABLE_Info_0_36, STATE_VARIABLE_Info_37);
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__749__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) wrapper_arg_1));
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
    MR_Integer conv0_LambdaHeadVar__2_78;

    ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__731__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_LambdaHeadVar__2_78);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_78));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_17_p_0(
  MR_Word ConsIdOrClosure_18,
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
  MR_Word STATE_VARIABLE_Info_0_72,
  MR_Word * STATE_VARIABLE_Info_73)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_112_112;
    MR_Word TypeCtorInfo_113_113;
    MR_Word ReuseVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), CellToReuse_30, (MR_Integer) 0)));
    MR_Word ReuseConsIds_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), CellToReuse_30, (MR_Integer) 1)));
    MR_Word ConsId_37;
    MR_Word ReusePrimaryTags0_44;
    MR_Word ReusePrimaryTags_45;
    MR_Word ConsIdTag_46;
    MR_Integer PrimaryTag_47;
    MR_Word InitOffSet_48;
    MR_Integer ArgNum_49;
    MR_Word Fields_50;
    MR_Word Var1Lval_51;
    MR_Word Var2Lval_52;
    MR_Word DifferentTags_54;
    MR_Word Var2Rval_55;
    MR_Word CastVar2Rval_60;
    MR_Word HeapTestStmt_61;
    MR_Word ExtraRvalStmts_62;
    MR_Word FieldStmts_63;
    MR_Word TakeAddrInfos_64;
    MR_Word MaybePtag_65;
    MR_Word TakeAddrStmts_66;
    MR_Word ThenStmts_67;
    MR_Word ThenStmt_68;
    MR_Word DynamicStmts_69;
    MR_Word ElseStmt_70;
    MR_Word IfStmt_71;
    MR_Word Var_76;
    MR_Word Var_79;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word STATE_VARIABLE_Info_94_94;
    MR_Word STATE_VARIABLE_Info_95_95;
    MR_Word Var_96;
    MR_Word Var_99;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word _NeedsUpdates_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), CellToReuse_30, (MR_Integer) 2)));

    if (((MR_tag((MR_Word) ConsIdOrClosure_18)) == (MR_mktag((MR_Integer) 1))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_new_object_reuse_cell\'/17", (MR_String) "attempt to reuse closure");
        return;
      }
    }
    else
      ConsId_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsIdOrClosure_18, (MR_Integer) 0)));
    {
      Var_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_17_p_0_1));
      MR_hl_field(MR_mktag(0), Var_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_76, 3) = ((MR_Box) (STATE_VARIABLE_Info_0_72));
    }
    TypeCtorInfo_112_112 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, TypeCtorInfo_112_112, Var_76, ReuseConsIds_35, &ReusePrimaryTags0_44);
    mercury__list__remove_dups_2_p_0(TypeCtorInfo_112_112, ReusePrimaryTags0_44, &ReusePrimaryTags_45);
    ml_backend__ml_unify_gen__ml_cons_id_to_tag_3_p_0(STATE_VARIABLE_Info_0_72, ConsId_37, &ConsIdTag_46);
    ml_backend__ml_unify_gen__ml_tag_offset_and_argnum_4_p_0(ConsIdTag_46, &PrimaryTag_47, &InitOffSet_48, &ArgNum_49);
    ml_backend__ml_unify_gen__ml_field_names_and_types_6_p_0(STATE_VARIABLE_Info_0_72, VarType_24, ConsId_37, InitOffSet_48, ArgVars_27, &Fields_50);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_72, Var_22, &Var1Lval_51);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_72, ReuseVar_34, &Var2Lval_52);
    {
      Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[7]));
      MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_17_p_0_2));
      MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_79, 3) = ((MR_Box) (PrimaryTag_47));
    }
    mercury__list__filter_3_p_0(TypeCtorInfo_112_112, Var_79, ReusePrimaryTags_45, &DifferentTags_54);
    if ((DifferentTags_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        Var2Rval_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var2Rval_55, 0) = ((MR_Box) (Var2Lval_52));
      }
    else
    {
      MR_Word Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), DifferentTags_54, (MR_Integer) 1)));
      MR_Integer Var_115 = ((MR_Integer) (MR_hl_field(MR_mktag(1), DifferentTags_54, (MR_Integer) 0)));

      if ((Var_114 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word Var_87;
        MR_Word Var_89;
        MR_Word Var_90;

        {
          Var_89 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_89, 0) = ((MR_Box) (Var2Lval_52));
        }
        Var_90 = ml_backend__ml_unify_gen__ml_gen_mktag_1_f_0(Var_115);
        {
          Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
          MR_hl_field(MR_mktag(3), Var_87, 2) = ((MR_Box) (Var_89));
          MR_hl_field(MR_mktag(3), Var_87, 3) = ((MR_Box) (Var_90));
        }
        {
          Var2Rval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var2Rval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var2Rval_55, 1) = ((MR_Box) (PrimaryTag_47));
          MR_hl_field(MR_mktag(3), Var2Rval_55, 2) = ((MR_Box) (Var_87));
        }
      }
      else
      {
        MR_Word Var_82;
        MR_Word Var_85;

        {
          Var_85 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_85, 0) = ((MR_Box) (Var2Lval_52));
        }
        {
          Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_5[33])));
          MR_hl_field(MR_mktag(3), Var_82, 2) = ((MR_Box) (Var_85));
        }
        {
          Var2Rval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var2Rval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var2Rval_55, 1) = ((MR_Box) (PrimaryTag_47));
          MR_hl_field(MR_mktag(3), Var2Rval_55, 2) = ((MR_Box) (Var_82));
        }
      }
    }
    {
      Var_91 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_91, 0) = ((MR_Box) (MLDS_Type_25));
    }
    {
      CastVar2Rval_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CastVar2Rval_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), CastVar2Rval_60, 1) = ((MR_Box) (Var_91));
      MR_hl_field(MR_mktag(3), CastVar2Rval_60, 2) = ((MR_Box) (Var2Rval_55));
    }
    {
      Var_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_92, 1) = ((MR_Box) (Var1Lval_51));
      MR_hl_field(MR_mktag(3), Var_92, 2) = ((MR_Box) (CastVar2Rval_60));
    }
    {
      HeapTestStmt_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeapTestStmt_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), HeapTestStmt_61, 1) = ((MR_Box) (Var_92));
      MR_hl_field(MR_mktag(3), HeapTestStmt_61, 2) = ((MR_Box) (Context_31));
    }
    ml_backend__ml_unify_gen__ml_gen_extra_arg_assign_9_p_0(ExtraRvalsTypesWidths_26, VarType_24, VarLval_23, (MR_Integer) 0, ConsIdTag_46, Context_31, &ExtraRvalStmts_62, STATE_VARIABLE_Info_0_72, &STATE_VARIABLE_Info_94_94);
    ml_backend__ml_unify_gen__ml_gen_unify_args_for_reuse_15_p_0(ConsId_37, ArgVars_27, ArgModes_28, Fields_50, TakeAddr_29, VarType_24, VarLval_23, InitOffSet_48, ArgNum_49, ConsIdTag_46, Context_31, &FieldStmts_63, &TakeAddrInfos_64, STATE_VARIABLE_Info_94_94, &STATE_VARIABLE_Info_95_95);
    {
      MaybePtag_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePtag_65, 0) = ((MR_Box) (Ptag_20));
    }
    ml_backend__ml_unify_gen__ml_gen_field_take_address_assigns_7_p_0(TakeAddrInfos_64, VarLval_23, MLDS_Type_25, MaybePtag_65, Context_31, STATE_VARIABLE_Info_95_95, &TakeAddrStmts_66);
    TypeCtorInfo_113_113 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0;
    Var_96 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_113_113, FieldStmts_63, TakeAddrStmts_66);
    ThenStmts_67 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_113_113, ExtraRvalStmts_62, Var_96);
    {
      ThenStmt_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ThenStmt_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ThenStmt_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ThenStmt_68, 2) = ((MR_Box) (ThenStmts_67));
      MR_hl_field(MR_mktag(0), ThenStmt_68, 3) = ((MR_Box) (Context_31));
    }
    {
      Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (ConsId_37));
    }
    ml_backend__ml_unify_gen__ml_gen_new_object_14_p_0(Var_99, MaybeCtorName_19, Ptag_20, ExplicitSecTag_21, Var_22, ExtraRvalsTypesWidths_26, ArgVars_27, ArgModes_28, TakeAddr_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), Context_31, &DynamicStmts_69, STATE_VARIABLE_Info_95_95, STATE_VARIABLE_Info_73);
    {
      ElseStmt_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ElseStmt_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ElseStmt_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ElseStmt_70, 2) = ((MR_Box) (DynamicStmts_69));
      MR_hl_field(MR_mktag(0), ElseStmt_70, 3) = ((MR_Box) (Context_31));
    }
    {
      Var_104 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_104, 0) = ((MR_Box) (Var1Lval_51));
    }
    {
      Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (ElseStmt_70));
    }
    {
      IfStmt_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), IfStmt_71, 0) = ((MR_Box) (Var_104));
      MR_hl_field(MR_mktag(2), IfStmt_71, 1) = ((MR_Box) (ThenStmt_68));
      MR_hl_field(MR_mktag(2), IfStmt_71, 2) = ((MR_Box) (Var_105));
      MR_hl_field(MR_mktag(2), IfStmt_71, 3) = ((MR_Box) (Context_31));
    }
    {
      Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (IfStmt_71));
      MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_32 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeapTestStmt_61));
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
    MR_Word conv0_LambdaHeadVar__2_74;

    conv0_LambdaHeadVar__2_74 = ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_new_object_dynamically__634__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_74));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_101_119_95_111_98_106_101_99_116_95_100_121_110_97_109_105_99_97_108_108_121_95_95_91_53_93_95_48_16_p_0(
  MR_Word ConsIdOrClosure_17,
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
  MR_Word STATE_VARIABLE_Info_0_66,
  MR_Word * STATE_VARIABLE_Info_67)
{
  {
    MR_Word TypeCtorInfo_80_80;
    MR_Word ArgVarsTypesWidths_32;
    MR_Word UseAtomicCells_33;
    MR_Word MayUseAtomic0_34;
    MR_Integer NumExtraRvals_36;
    MR_Integer PrevOffset_37;
    MR_Word TakeAddrInfos_38;
    MR_Word ArgRvalsTypesWidths0_39;
    MR_Word MayUseAtomic_40;
    MR_Word PackedArgRvalsTypesWidths_41;
    MR_Word ArgRvalsTypesWidths_42;
    MR_Integer Size_43;
    MR_Word SizeInWordsRval_44;
    MR_Word ProfileMemory_45;
    MR_Word MaybeAllocId_56;
    MR_Word ArgRvalsTypes_61;
    MR_Word MakeNewObject_62;
    MR_Word MakeNewObjStmt_63;
    MR_Word MaybePtag_64;
    MR_Word TakeAddrStmts_65;
    MR_Word Var_70;
    MR_Word Var_75;

    ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0(STATE_VARIABLE_Info_0_66, VarType_23, ConsIdOrClosure_17, ArgVars_26, &ArgVarsTypesWidths_32);
    ml_backend__ml_gen_info__ml_gen_info_get_use_atomic_cells_2_p_0(STATE_VARIABLE_Info_0_66, &UseAtomicCells_33);
    switch (UseAtomicCells_33) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MayUseAtomic0_34 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        MayUseAtomic0_34 = (MR_Integer) 0;
        break;
    }
    TypeCtorInfo_80_80 = (MR_Word) &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_mlds_rval_type_and_width_0;
    NumExtraRvals_36 = mercury__list__length_1_f_0(TypeCtorInfo_80_80, ExtraRvalsTypesWidths_25);
    PrevOffset_37 = (MR_Integer) ((MR_Unsigned) NumExtraRvals_36 - (MR_Unsigned) (MR_Integer) 1);
    ml_backend__ml_unify_gen__ml_gen_cons_args_12_p_0(STATE_VARIABLE_Info_0_66, ArgVarsTypesWidths_32, ArgModes_27, NumExtraRvals_36, (MR_Integer) 1, PrevOffset_37, ArgVarsTypesWidths_32, TakeAddr_28, &TakeAddrInfos_38, &ArgRvalsTypesWidths0_39, MayUseAtomic0_34, &MayUseAtomic_40);
    ml_backend__ml_unify_gen__ml_expand_or_pack_into_words_2_p_0(ArgRvalsTypesWidths0_39, &PackedArgRvalsTypesWidths_41);
    ArgRvalsTypesWidths_42 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_80_80, ExtraRvalsTypesWidths_25, PackedArgRvalsTypesWidths_41);
    mercury__list__length_2_p_0(TypeCtorInfo_80_80, ArgRvalsTypesWidths_42, &Size_43);
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_70, 0) = ((MR_Box) (Size_43));
    }
    {
      SizeInWordsRval_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SizeInWordsRval_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), SizeInWordsRval_44, 1) = ((MR_Box) (Var_70));
    }
    ml_backend__ml_gen_info__ml_gen_info_get_profile_memory_2_p_0(STATE_VARIABLE_Info_0_66, &ProfileMemory_45);
    switch (ProfileMemory_45) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MaybeAllocId_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *STATE_VARIABLE_Info_67 = STATE_VARIABLE_Info_0_66;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModuleInfo_46;
          MR_Word PredProcId_47;
          MR_Word ProcLabel_49;
          MR_Word GlobalData0_50;
          MR_Word MaybeConsId_52;
          MR_Word AllocId_54;
          MR_Word GlobalData_55;
          MR_Word Var_71;
          MR_Word _Module_48;

          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_66, &ModuleInfo_46);
          ml_backend__ml_gen_info__ml_gen_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_0_66, &PredProcId_47);
          ml_backend__ml_code_util__ml_gen_proc_label_4_p_0(ModuleInfo_46, PredProcId_47, &_Module_48, &ProcLabel_49);
          ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_66, &GlobalData0_50);
          if (((MR_tag((MR_Word) ConsIdOrClosure_17)) == (MR_mktag((MR_Integer) 1))))
            MaybeConsId_52 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
          {
            MR_Word ConsId_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsIdOrClosure_17, (MR_Integer) 0)));

            {
              MaybeConsId_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeConsId_52, 0) = ((MR_Box) (ConsId_51));
            }
          }
          Var_71 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ProcLabel_49);
          ml_backend__ml_global_data__ml_gen_alloc_site_7_p_0(Var_71, MaybeConsId_52, Size_43, Context_29, &AllocId_54, GlobalData0_50, &GlobalData_55);
          ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_55, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
          {
            MaybeAllocId_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeAllocId_56, 0) = ((MR_Box) (AllocId_54));
          }
        }
        break;
    }
    ArgRvalsTypes_61 = mercury__list__map_2_f_0(TypeCtorInfo_80_80, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_typed_rval_0, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[5], ArgRvalsTypesWidths_42);
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (SizeInWordsRval_44));
    }
    {
      MakeNewObject_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MakeNewObject_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), MakeNewObject_62, 1) = ((MR_Box) (VarLval_22));
      MR_hl_field(MR_mktag(3), MakeNewObject_62, 2) = ((MR_Box) (Ptag_19));
      MR_hl_field(MR_mktag(3), MakeNewObject_62, 3) = ((MR_Box) (ExplicitSecTag_20));
      MR_hl_field(MR_mktag(3), MakeNewObject_62, 4) = ((MR_Box) (MLDS_Type_24));
      MR_hl_field(MR_mktag(3), MakeNewObject_62, 5) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(3), MakeNewObject_62, 6) = ((MR_Box) (MaybeCtorName_18));
      MR_hl_field(MR_mktag(3), MakeNewObject_62, 7) = ((MR_Box) (ArgRvalsTypes_61));
      MR_hl_field(MR_mktag(3), MakeNewObject_62, 8) = ((MR_Box) (MayUseAtomic_40));
      MR_hl_field(MR_mktag(3), MakeNewObject_62, 9) = ((MR_Box) (MaybeAllocId_56));
    }
    {
      MakeNewObjStmt_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MakeNewObjStmt_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), MakeNewObjStmt_63, 1) = ((MR_Box) (MakeNewObject_62));
      MR_hl_field(MR_mktag(3), MakeNewObjStmt_63, 2) = ((MR_Box) (Context_29));
    }
    {
      MaybePtag_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePtag_64, 0) = ((MR_Box) (Ptag_19));
    }
    ml_backend__ml_unify_gen__ml_gen_field_take_address_assigns_7_p_0(TakeAddrInfos_38, VarLval_22, MLDS_Type_24, MaybePtag_64, Context_29, *STATE_VARIABLE_Info_67, &TakeAddrStmts_65);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_30 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MakeNewObjStmt_63));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TakeAddrStmts_65));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_expand_or_pack_into_words_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word RvalTypeWidth_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word RvalsTypesWidths_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Rval_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), RvalTypeWidth_3, (MR_Integer) 0)));
      MR_Word Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), RvalTypeWidth_3, (MR_Integer) 1)));
      MR_Word PosWidth_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), RvalTypeWidth_3, (MR_Integer) 2)));

      switch (MR_tag((MR_Word) PosWidth_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = RvalsTypesWidths_4;

            // direct tailcall eliminated
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TailPackedRvalsTypesWidths_11;

            ml_backend__ml_unify_gen__ml_expand_or_pack_into_words_2_p_0(RvalsTypesWidths_4, &TailPackedRvalsTypesWidths_11);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RvalTypeWidth_3));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailPackedRvalsTypesWidths_11));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer AOOffset_12;
            MR_Integer CellOffset_13;
            MR_Word DoubleWordKind_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), PosWidth_8, (MR_Integer) 2)));
            MR_Word SubstType_16;
            MR_Word RvalA_17;
            MR_Word RvalB_18;
            MR_Word RvalTypeWidthA_19;
            MR_Word RvalTypeWidthB_20;
            MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), PosWidth_8, (MR_Integer) 0)));
            MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), PosWidth_8, (MR_Integer) 1)));
            MR_Word Var_61;
            MR_Word Var_64;
            MR_Word Var_65;
            MR_Integer Var_66;
            MR_Word Var_68;
            MR_Integer Var_69;
            MR_Word Var_71;
            MR_Word TailPackedRvalsTypesWidths_72;
            MR_Word Var_46;
            MR_Word Var_15;

            AOOffset_12 = (MR_Integer) Var_44;
            CellOffset_13 = (MR_Integer) Var_45;
            ml_backend__ml_unify_gen__ml_expand_or_pack_into_words_2_p_0(RvalsTypesWidths_4, &TailPackedRvalsTypesWidths_72);
            succeeded = ((((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));
              succeeded = ((((MR_tag((MR_Word) Var_46)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_46, (MR_Integer) 0)))) == (MR_Integer) 20)));
              if (succeeded)
                Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_46, (MR_Integer) 1)));
            }
            if (succeeded)
            {
              SubstType_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
              RvalA_17 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[14]);
              RvalB_18 = RvalA_17;
            }
            else
            {
              SubstType_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
              switch (DoubleWordKind_14) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      RvalA_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), RvalA_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), RvalA_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_5[26])));
                      MR_hl_field(MR_mktag(3), RvalA_17, 2) = ((MR_Box) (Rval_6));
                    }
                    {
                      RvalB_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), RvalB_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), RvalB_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_5[27])));
                      MR_hl_field(MR_mktag(3), RvalB_18, 2) = ((MR_Box) (Rval_6));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      RvalA_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), RvalA_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), RvalA_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_5[29])));
                      MR_hl_field(MR_mktag(3), RvalA_17, 2) = ((MR_Box) (Rval_6));
                    }
                    {
                      RvalB_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), RvalB_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), RvalB_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_5[30])));
                      MR_hl_field(MR_mktag(3), RvalB_18, 2) = ((MR_Box) (Rval_6));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    {
                      RvalA_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), RvalA_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), RvalA_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_5[31])));
                      MR_hl_field(MR_mktag(3), RvalA_17, 2) = ((MR_Box) (Rval_6));
                    }
                    {
                      RvalB_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), RvalB_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), RvalB_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_5[32])));
                      MR_hl_field(MR_mktag(3), RvalB_18, 2) = ((MR_Box) (Rval_6));
                    }
                  }
                  break;
              }
            }
            {
              Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_44));
              MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_45));
            }
            {
              RvalTypeWidthA_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), RvalTypeWidthA_19, 0) = ((MR_Box) (RvalA_17));
              MR_hl_field(MR_mktag(0), RvalTypeWidthA_19, 1) = ((MR_Box) (SubstType_16));
              MR_hl_field(MR_mktag(0), RvalTypeWidthA_19, 2) = ((MR_Box) (Var_61));
            }
            Var_66 = (MR_Integer) ((MR_Unsigned) AOOffset_12 + (MR_Unsigned) (MR_Integer) 1);
            Var_65 = (MR_Word) Var_66;
            Var_69 = (MR_Integer) ((MR_Unsigned) CellOffset_13 + (MR_Unsigned) (MR_Integer) 1);
            Var_68 = (MR_Word) Var_69;
            {
              Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
              MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_68));
            }
            {
              RvalTypeWidthB_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), RvalTypeWidthB_20, 0) = ((MR_Box) (RvalB_18));
              MR_hl_field(MR_mktag(0), RvalTypeWidthB_20, 1) = ((MR_Box) (SubstType_16));
              MR_hl_field(MR_mktag(0), RvalTypeWidthB_20, 2) = ((MR_Box) (Var_64));
            }
            {
              Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (RvalTypeWidthB_20));
              MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (TailPackedRvalsTypesWidths_72));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RvalTypeWidthA_19));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_71));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PosWidth_8, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Fill_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), PosWidth_8, (MR_Integer) 5)));
                MR_Word RevOrRvals0_24;
                MR_Word LeftOverRvalsTypesWidths_25;
                MR_Word OrAllRval_26;
                MR_Word PackedRvalTypeWidth_27;
                MR_Word Var_43;
                MR_Word TailPackedRvalsTypesWidths_73;
                MR_Word AOOffset_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), PosWidth_8, (MR_Integer) 1)));
                MR_Word CellOffset_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), PosWidth_8, (MR_Integer) 2)));
                MR_Word RevOrRvals_80;
                MR_Word OrRvals_81;
                MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), PosWidth_8, (MR_Integer) 3)));
                MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), PosWidth_8, (MR_Integer) 4)));

                ml_backend__ml_unify_gen__maybe_shift_and_accumulate_or_rval_5_p_0(Rval_6, (MR_Word) ((MR_Box) ((MR_Integer) 0)), Fill_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &RevOrRvals0_24);
                ml_backend__ml_unify_gen__ml_pack_into_one_word_loop_4_p_0(RvalsTypesWidths_4, &LeftOverRvalsTypesWidths_25, RevOrRvals0_24, &RevOrRvals_80);
                mercury__list__reverse_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, RevOrRvals_80, &OrRvals_81);
                if ((OrRvals_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  OrAllRval_26 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[10]);
                }
                else
                {
                  MR_Word HeadOrRval_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), OrRvals_81, (MR_Integer) 0)));
                  MR_Word TailOrRvals_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), OrRvals_81, (MR_Integer) 1)));

                  ml_backend__ml_unify_gen__or_packed_rvals_3_p_0(HeadOrRval_82, TailOrRvals_83, &OrAllRval_26);
                }
                {
                  Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (AOOffset_74));
                  MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (CellOffset_75));
                }
                {
                  PackedRvalTypeWidth_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), PackedRvalTypeWidth_27, 0) = ((MR_Box) (OrAllRval_26));
                  MR_hl_field(MR_mktag(0), PackedRvalTypeWidth_27, 1) = ((MR_Box) (Type_7));
                  MR_hl_field(MR_mktag(0), PackedRvalTypeWidth_27, 2) = ((MR_Box) (Var_43));
                }
                ml_backend__ml_unify_gen__ml_expand_or_pack_into_words_2_p_0(LeftOverRvalsTypesWidths_25, &TailPackedRvalsTypesWidths_73);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__2_2 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PackedRvalTypeWidth_27));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailPackedRvalsTypesWidths_73));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_expand_or_pack_into_words\'/2", (MR_String) "apw_partial_shifted");
                  return;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_expand_or_pack_into_words\'/2", (MR_String) "apw_none_shifted");
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
ml_backend__ml_unify_gen__maybe_shift_and_accumulate_or_rval_5_p_0(
  MR_Word Rval_6,
  MR_Word Shift_7,
  MR_Word Fill_8,
  MR_Word STATE_VARIABLE_RevOrRvals_0_18,
  MR_Word * STATE_VARIABLE_RevOrRvals_19)
{
  {
    MR_bool succeeded;
    MR_Integer ShiftInt_10 = (MR_Integer) Shift_7;
    MR_Word CastRval_11;
    MR_Word RvalConst_12;

    ml_backend__ml_unify_gen__ml_cast_away_any_sign_extend_bits_3_p_0(Fill_8, Rval_6, &CastRval_11);
    succeeded = ((((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      RvalConst_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));
      if (((MR_tag((MR_Word) RvalConst_12)) == (MR_mktag((MR_Integer) 2))))
      {
        MR_Integer Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), RvalConst_12, (MR_Integer) 0)));

        succeeded = (Var_20 == (MR_Integer) 0);
      }
      else
      if (((((MR_tag((MR_Word) RvalConst_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalConst_12, (MR_Integer) 0)))) == (MR_Integer) 20))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
    if (succeeded)
      *STATE_VARIABLE_RevOrRvals_19 = STATE_VARIABLE_RevOrRvals_0_18;
    else
    {
      MR_Word ShiftedRval_14;

      succeeded = (ShiftInt_10 == (MR_Integer) 0);
      if (succeeded)
        ShiftedRval_14 = CastRval_11;
      else
      {
        MR_Word SubRval_16;
        MR_Word Var_21;
        MR_Word Type_15;

        succeeded = ((((MR_tag((MR_Word) CastRval_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CastRval_11, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), CastRval_11, (MR_Integer) 1)));
          SubRval_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), CastRval_11, (MR_Integer) 2)));
          succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_mktag((MR_Integer) 0)));
          if (succeeded)
            Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0)));
        }
        if (succeeded)
        {
          MR_Word ShiftedSubRval_17;
          MR_Word Var_24;
          MR_Word Var_25;

          {
            Var_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_25, 0) = ((MR_Box) (ShiftInt_10));
          }
          {
            Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (Var_25));
          }
          {
            ShiftedSubRval_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ShiftedSubRval_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), ShiftedSubRval_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[8])));
            MR_hl_field(MR_mktag(3), ShiftedSubRval_17, 2) = ((MR_Box) (SubRval_16));
            MR_hl_field(MR_mktag(3), ShiftedSubRval_17, 3) = ((MR_Box) (Var_24));
          }
          {
            ShiftedRval_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ShiftedRval_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), ShiftedRval_14, 1) = ((MR_Box) (Var_21));
            MR_hl_field(MR_mktag(3), ShiftedRval_14, 2) = ((MR_Box) (ShiftedSubRval_17));
          }
        }
        else
        {
          MR_Word Var_29;
          MR_Word Var_30;

          {
            Var_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_30, 0) = ((MR_Box) (ShiftInt_10));
          }
          {
            Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (Var_30));
          }
          {
            ShiftedRval_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ShiftedRval_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), ShiftedRval_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[8])));
            MR_hl_field(MR_mktag(3), ShiftedRval_14, 2) = ((MR_Box) (CastRval_11));
            MR_hl_field(MR_mktag(3), ShiftedRval_14, 3) = ((MR_Box) (Var_29));
          }
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_RevOrRvals_19 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ShiftedRval_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevOrRvals_0_18));
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_cons_args_12_p_0_7(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1190__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_cons_args_12_p_0_6(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1181__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_cons_args_12_p_0_5(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1170__2_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_cons_args_12_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1162__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_cons_args_12_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1170__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_cons_args_12_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1150__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1156__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
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
  MR_Integer PrevOffset0_6,
  MR_Word AllArgVarsTypesWidths_7,
  MR_Word STATE_VARIABLE_TakeAddr_0_8,
  MR_Word * HeadVar__9_9,
  MR_Word * HeadVar__10_10,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_11,
  MR_Word * STATE_VARIABLE_MayUseAtomic_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
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
      MR_Word Var_179 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_180 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

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
        MR_Word ArgVar_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_180, (MR_Integer) 0)));
        MR_Word ConsArgType_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_180, (MR_Integer) 1)));
        MR_Word ArgPosWidth_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_180, (MR_Integer) 2)));
        MR_Word Lval_68;
        MR_Word ArgType_69;
        MR_Word ModuleInfo_70;
        MR_Word HighLevelData_71;
        MR_Word ArgWidth_72;
        MR_Word BoxedArgType_73;
        MR_Word MLDS_Type_74;
        MR_Integer CurOffset_77;
        MR_Integer PrevOffset_79;
        MR_Word STATE_VARIABLE_MayUseAtomic_104_104;
        MR_Word STATE_VARIABLE_TakeAddr_123_123;
        MR_Integer Var_169;

        ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_1, ArgVar_65, &Lval_68);
        ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_1, ArgVar_65, &ArgType_69);
        ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_1, &ModuleInfo_70);
        check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(ModuleInfo_70, ArgType_69, STATE_VARIABLE_MayUseAtomic_0_11, &STATE_VARIABLE_MayUseAtomic_104_104);
        ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(Info_1, &HighLevelData_71);
        ArgWidth_72 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_67);
        ml_backend__ml_unify_gen__ml_type_as_field_5_p_0(ModuleInfo_70, HighLevelData_71, ConsArgType_66, ArgWidth_72, &BoxedArgType_73);
        MLDS_Type_74 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_70, BoxedArgType_73);
        switch (MR_tag((MR_Word) ArgPosWidth_67)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              CurOffset_77 = (MR_Integer) -1;
              PrevOffset_79 = PrevOffset0_6;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word CellOffset_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgPosWidth_67, (MR_Integer) 1)));
              MR_Integer CellOffsetInt_78;
              MR_Word Var_119;
              MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgPosWidth_67, (MR_Integer) 0)));

              CurOffset_77 = (MR_Integer) ((MR_Unsigned) PrevOffset0_6 + (MR_Unsigned) (MR_Integer) 1);
              CellOffsetInt_78 = (MR_Integer) CellOffset_76;
              {
                Var_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_119, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[7]));
                MR_hl_field(MR_mktag(0), Var_119, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_cons_args_12_p_0_2));
                MR_hl_field(MR_mktag(0), Var_119, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_119, 3) = ((MR_Box) (CurOffset_77));
                MR_hl_field(MR_mktag(0), Var_119, 4) = ((MR_Box) (CellOffsetInt_78));
              }
              mercury__require__expect_3_p_0(Var_119, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_cons_args\'/12", (MR_String) "full");
              PrevOffset_79 = (MR_Integer) ((MR_Unsigned) PrevOffset0_6 + (MR_Unsigned) (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_114;
              MR_Word CellOffset_148 = ((MR_Word) (MR_hl_field(MR_mktag(2), ArgPosWidth_67, (MR_Integer) 1)));
              MR_Integer CellOffsetInt_149;
              MR_Word Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(2), ArgPosWidth_67, (MR_Integer) 0)));
              MR_Word Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(2), ArgPosWidth_67, (MR_Integer) 2)));

              CurOffset_77 = (MR_Integer) ((MR_Unsigned) PrevOffset0_6 + (MR_Unsigned) (MR_Integer) 1);
              CellOffsetInt_149 = (MR_Integer) CellOffset_148;
              {
                Var_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[7]));
                MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_cons_args_12_p_0_1));
                MR_hl_field(MR_mktag(0), Var_114, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_114, 3) = ((MR_Box) (CurOffset_77));
                MR_hl_field(MR_mktag(0), Var_114, 4) = ((MR_Box) (CellOffsetInt_149));
              }
              mercury__require__expect_3_p_0(Var_114, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_cons_args\'/12", (MR_String) "double");
              PrevOffset_79 = (MR_Integer) ((MR_Unsigned) PrevOffset0_6 + (MR_Unsigned) (MR_Integer) 2);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_109;
                  MR_Word CellOffset_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 2)));
                  MR_Integer CellOffsetInt_151;
                  MR_Word Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 1)));
                  MR_Word Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 3)));
                  MR_Word Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 4)));
                  MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 5)));

                  CurOffset_77 = (MR_Integer) ((MR_Unsigned) PrevOffset0_6 + (MR_Unsigned) (MR_Integer) 1);
                  CellOffsetInt_151 = (MR_Integer) CellOffset_150;
                  {
                    Var_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_109, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[7]));
                    MR_hl_field(MR_mktag(0), Var_109, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_cons_args_12_p_0_4));
                    MR_hl_field(MR_mktag(0), Var_109, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_109, 3) = ((MR_Box) (CurOffset_77));
                    MR_hl_field(MR_mktag(0), Var_109, 4) = ((MR_Box) (CellOffsetInt_151));
                  }
                  mercury__require__expect_3_p_0(Var_109, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_cons_args\'/12", (MR_String) "first");
                  PrevOffset_79 = (MR_Integer) ((MR_Unsigned) PrevOffset0_6 + (MR_Unsigned) (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_173;
                  MR_Word CellOffset_176 = ((MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 2)));
                  MR_Integer CellOffsetInt_177;
                  MR_Word Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 1)));
                  MR_Word Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 3)));
                  MR_Word Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 4)));
                  MR_Word Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 5)));
                  MR_Word Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 6)));

                  CurOffset_77 = PrevOffset0_6;
                  CellOffsetInt_177 = (MR_Integer) CellOffset_176;
                  {
                    Var_173 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_173, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[7]));
                    MR_hl_field(MR_mktag(0), Var_173, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_cons_args_12_p_0_5));
                    MR_hl_field(MR_mktag(0), Var_173, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_173, 3) = ((MR_Box) (CurOffset_77));
                    MR_hl_field(MR_mktag(0), Var_173, 4) = ((MR_Box) (CellOffsetInt_177));
                  }
                  mercury__require__expect_3_p_0(Var_173, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_cons_args\'/12", (MR_String) "shifted");
                  PrevOffset_79 = PrevOffset0_6;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_105;
                  MR_Word CellOffset_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 2)));
                  MR_Integer CellOffsetInt_153;
                  MR_Word Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 1)));

                  CurOffset_77 = PrevOffset0_6;
                  CellOffsetInt_153 = (MR_Integer) CellOffset_152;
                  {
                    Var_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_105, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[7]));
                    MR_hl_field(MR_mktag(0), Var_105, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_cons_args_12_p_0_3));
                    MR_hl_field(MR_mktag(0), Var_105, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_105, 3) = ((MR_Box) (CurOffset_77));
                    MR_hl_field(MR_mktag(0), Var_105, 4) = ((MR_Box) (CellOffsetInt_153));
                  }
                  mercury__require__expect_3_p_0(Var_105, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_cons_args\'/12", (MR_String) "shifted");
                  PrevOffset_79 = PrevOffset0_6;
                }
                break;
            }
            break;
        }
        succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_TakeAddr_0_8)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_169 = ((MR_Integer) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TakeAddr_0_8, (MR_Integer) 0)));
          STATE_VARIABLE_TakeAddr_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TakeAddr_0_8, (MR_Integer) 1)));
          succeeded = (CurArgNum_5 == Var_169);
        }
        if (succeeded)
        {
          MR_Word Rval_92;
          MR_Word RvalMLDSTypeWidth_93;
          MR_Word Offset_94;
          MR_Word OrigMLDS_Type_95;
          MR_Word TakeAddrInfo_96;
          MR_Word TakeAddrInfosTail_97;
          MR_Word TailRvalsMLDSTypesWidths_98;
          MR_Word Var_124;
          MR_Word Var_128;
          MR_Word Var_129;
          MR_Word Var_132;
          MR_Integer Var_133;

          {
            Var_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_124, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[0]));
            MR_hl_field(MR_mktag(0), Var_124, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_cons_args_12_p_0_6));
            MR_hl_field(MR_mktag(0), Var_124, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_124, 3) = ((MR_Box) (ArgWidth_72));
            MR_hl_field(MR_mktag(0), Var_124, 4) = ((MR_Box) ((MR_Integer) 2));
          }
          mercury__require__expect_3_p_0(Var_124, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_cons_args\'/12", (MR_String) "taking address of non word-sized argument");
          {
            Var_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
            MR_hl_field(MR_mktag(3), Var_128, 1) = ((MR_Box) (MLDS_Type_74));
          }
          {
            Rval_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Rval_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Rval_92, 1) = ((MR_Box) (Var_128));
          }
          {
            RvalMLDSTypeWidth_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), RvalMLDSTypeWidth_93, 0) = ((MR_Box) (Rval_92));
            MR_hl_field(MR_mktag(0), RvalMLDSTypeWidth_93, 1) = ((MR_Box) (MLDS_Type_74));
            MR_hl_field(MR_mktag(0), RvalMLDSTypeWidth_93, 2) = ((MR_Box) (ArgPosWidth_67));
          }
          Offset_94 = ml_backend__ml_unify_gen__ml_calc_field_offset_3_f_0(NumExtraArgs_4, AllArgVarsTypesWidths_7, CurArgNum_5);
          Var_132 = (MR_Word) CurOffset_77;
          {
            Var_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_129, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[8]));
            MR_hl_field(MR_mktag(0), Var_129, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_cons_args_12_p_0_7));
            MR_hl_field(MR_mktag(0), Var_129, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_129, 3) = ((MR_Box) (Offset_94));
            MR_hl_field(MR_mktag(0), Var_129, 4) = ((MR_Box) (Var_132));
          }
          mercury__require__expect_3_p_0(Var_129, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_cons_args\'/12", (MR_String) "Offset != CurOffset");
          OrigMLDS_Type_95 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_70, ConsArgType_66);
          {
            TakeAddrInfo_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TakeAddrInfo_96, 0) = ((MR_Box) (ArgVar_65));
            MR_hl_field(MR_mktag(0), TakeAddrInfo_96, 1) = ((MR_Box) (Offset_94));
            MR_hl_field(MR_mktag(0), TakeAddrInfo_96, 2) = ((MR_Box) (OrigMLDS_Type_95));
            MR_hl_field(MR_mktag(0), TakeAddrInfo_96, 3) = ((MR_Box) (MLDS_Type_74));
          }
          Var_133 = (MR_Integer) ((MR_Unsigned) CurArgNum_5 + (MR_Unsigned) (MR_Integer) 1);
          ml_backend__ml_unify_gen__ml_gen_cons_args_12_p_0(Info_1, Var_179, ArgModes_56, NumExtraArgs_4, Var_133, PrevOffset_79, AllArgVarsTypesWidths_7, STATE_VARIABLE_TakeAddr_123_123, &TakeAddrInfosTail_97, &TailRvalsMLDSTypesWidths_98, STATE_VARIABLE_MayUseAtomic_104_104, STATE_VARIABLE_MayUseAtomic_12);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__9_9 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TakeAddrInfo_96));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TakeAddrInfosTail_97));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__10_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RvalMLDSTypeWidth_93));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailRvalsMLDSTypesWidths_98));
          }
        }
        else
        {
          succeeded = (ArgPosWidth_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
          {
            MR_Integer Var_136 = (MR_Integer) ((MR_Unsigned) CurArgNum_5 + (MR_Unsigned) (MR_Integer) 1);
            MR_Word next_value_of_HeadVar__2_2 = Var_179;
            MR_Word next_value_of_HeadVar__3_3 = ArgModes_56;
            MR_Integer next_value_of_CurArgNum_5 = Var_136;
            MR_Integer next_value_of_PrevOffset0_6 = PrevOffset_79;
            MR_Word next_value_of_STATE_VARIABLE_MayUseAtomic_0_11 = STATE_VARIABLE_MayUseAtomic_104_104;

            // direct tailcall eliminated
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            CurArgNum_5 = next_value_of_CurArgNum_5;
            PrevOffset0_6 = next_value_of_PrevOffset0_6;
            STATE_VARIABLE_MayUseAtomic_0_11 = next_value_of_STATE_VARIABLE_MayUseAtomic_0_11;
            continue;
          }
          else
          {
            MR_Word RHSInsts_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgMode_55, (MR_Integer) 1)));
            MR_Integer Var_144;
            MR_Word Rval_154;
            MR_Word RvalMLDSTypeWidth_155;
            MR_Word TailRvalsMLDSTypesWidths_156;
            MR_Word _LHSInsts_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgMode_55, (MR_Integer) 0)));
            MR_Word Var_140;
            MR_Word Var_170;

            check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_70, RHSInsts_100, ArgType_69, &Var_170);
            succeeded = ((MR_Integer) 0 == Var_170);
            if (succeeded)
            {
              Var_140 = check_hlds__type_util__is_either_type_a_dummy_3_f_0(ModuleInfo_70, ArgType_69, ConsArgType_66);
              succeeded = (Var_140 == (MR_Integer) 1);
            }
            if (succeeded)
            {
              MR_Word Var_142;

              {
                Var_142 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_142, 0) = ((MR_Box) (Lval_68));
              }
              ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_70, ArgType_69, BoxedArgType_73, (MR_Integer) 0, Var_142, &Rval_154);
            }
            else
            {
              MR_Word Var_143;

              {
                Var_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
                MR_hl_field(MR_mktag(3), Var_143, 1) = ((MR_Box) (MLDS_Type_74));
              }
              {
                Rval_154 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Rval_154, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Rval_154, 1) = ((MR_Box) (Var_143));
              }
            }
            {
              RvalMLDSTypeWidth_155 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), RvalMLDSTypeWidth_155, 0) = ((MR_Box) (Rval_154));
              MR_hl_field(MR_mktag(0), RvalMLDSTypeWidth_155, 1) = ((MR_Box) (MLDS_Type_74));
              MR_hl_field(MR_mktag(0), RvalMLDSTypeWidth_155, 2) = ((MR_Box) (ArgPosWidth_67));
            }
            Var_144 = (MR_Integer) ((MR_Unsigned) CurArgNum_5 + (MR_Unsigned) (MR_Integer) 1);
            ml_backend__ml_unify_gen__ml_gen_cons_args_12_p_0(Info_1, Var_179, ArgModes_56, NumExtraArgs_4, Var_144, PrevOffset_79, AllArgVarsTypesWidths_7, STATE_VARIABLE_TakeAddr_0_8, HeadVar__9_9, &TailRvalsMLDSTypesWidths_156, STATE_VARIABLE_MayUseAtomic_104_104, STATE_VARIABLE_MayUseAtomic_12);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__10_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RvalMLDSTypeWidth_155));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailRvalsMLDSTypesWidths_156));
            }
          }
        }
      }
    }
    break;
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

    conv0_LambdaHeadVar__2_19 = ml_backend__ml_unify_gen__IntroducedFrom__func__ml_calc_field_offset__1231__1_1_f_0(((MR_Word) wrapper_arg_1));
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
    MR_Integer Var_15 = (MR_Integer) ((MR_Unsigned) ArgNum_7 - (MR_Unsigned) (MR_Integer) 1);

    succeeded = mercury__list__take_3_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[3], Var_15, ArgVarsTypesWidths_6, &ArgVarsTypesWidthsBeforeArg_9);
    if (succeeded)
    {
      MR_Word PosWidthsBeforeArg_10;
      MR_Integer WordsBeforeArg_14;
      MR_Integer Var_20;

      PosWidthsBeforeArg_10 = mercury__list__map_2_f_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[3], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[4], ArgVarsTypesWidthsBeforeArg_9);
      WordsBeforeArg_14 = backend_libs__arg_pack__count_distinct_words_1_f_0(PosWidthsBeforeArg_10);
      Var_20 = (MR_Integer) ((MR_Unsigned) NumExtraArgs_5 + (MR_Unsigned) WordsBeforeArg_14);
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
ml_backend__ml_unify_gen__ml_gen_unify_args_for_reuse_15_p_0(
  MR_Word ConsId_16,
  MR_Word ArgVars_17,
  MR_Word Modes_18,
  MR_Word CtorArgRepns_19,
  MR_Word TakeAddr_20,
  MR_Word VarType_21,
  MR_Word VarLval_22,
  MR_Word CurOffset_23,
  MR_Integer CurArgNum_24,
  MR_Word Tag_25,
  MR_Word Context_26,
  MR_Word * Stmts_27,
  MR_Word * TakeAddrInfos_28,
  MR_Word STATE_VARIABLE_Info_0_50,
  MR_Word * STATE_VARIABLE_Info_51)
{
  {
    MR_bool succeeded = (ArgVars_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (succeeded)
    {
      succeeded = (Modes_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
        succeeded = (CtorArgRepns_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
    {
      *Stmts_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *TakeAddrInfos_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_Info_51 = STATE_VARIABLE_Info_0_50;
    }
    else
    {
      MR_Word ArgVar_30;
      MR_Word TailArgVars_31;
      MR_Word Mode_32;
      MR_Word TailModes_33;
      MR_Word CtorArgRepn_34;
      MR_Word TailCtorArgRepns_35;

      succeeded = ((MR_tag((MR_Word) ArgVars_17)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgVar_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgVars_17, (MR_Integer) 0)));
        TailArgVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgVars_17, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Modes_18)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Mode_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_18, (MR_Integer) 0)));
          TailModes_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_18, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) CtorArgRepns_19)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            CtorArgRepn_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), CtorArgRepns_19, (MR_Integer) 0)));
            TailCtorArgRepns_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), CtorArgRepns_19, (MR_Integer) 1)));
          }
        }
      }
      if (succeeded)
      {
        MR_Word NextOffset_36;
        MR_Integer NextArgNum_37;
        MR_Word TailTakeAddr_38;
        MR_Integer Var_64;

        ml_backend__ml_unify_gen__ml_next_field_offset_4_p_0(CtorArgRepn_34, TailCtorArgRepns_35, CurOffset_23, &NextOffset_36);
        NextArgNum_37 = (MR_Integer) ((MR_Unsigned) CurArgNum_24 + (MR_Unsigned) (MR_Integer) 1);
        succeeded = ((MR_tag((MR_Word) TakeAddr_20)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_64 = ((MR_Integer) (MR_hl_field(MR_mktag(1), TakeAddr_20, (MR_Integer) 0)));
          TailTakeAddr_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), TakeAddr_20, (MR_Integer) 1)));
          succeeded = (CurArgNum_24 == Var_64);
        }
        if (succeeded)
        {
          MR_Word TakeAddrInfosTail_39;
          MR_Word ModuleInfo_40;
          MR_Word HighLevelData_41;
          MR_Word FieldType_42;
          MR_Word FieldPosWidth_43;
          MR_Word FieldWidth_44;
          MR_Word BoxedFieldType_45;
          MR_Word MLDS_FieldType_46;
          MR_Word MLDS_BoxedFieldType_47;
          MR_Word TakeAddrInfo_48;
          MR_Word Var_58;
          MR_Word Var_60;

          ml_backend__ml_unify_gen__ml_gen_unify_args_for_reuse_15_p_0(ConsId_16, TailArgVars_31, TailModes_33, TailCtorArgRepns_35, TailTakeAddr_38, VarType_21, VarLval_22, NextOffset_36, NextArgNum_37, Tag_25, Context_26, Stmts_27, &TakeAddrInfosTail_39, STATE_VARIABLE_Info_0_50, STATE_VARIABLE_Info_51);
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(*STATE_VARIABLE_Info_51, &ModuleInfo_40);
          ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(*STATE_VARIABLE_Info_51, &HighLevelData_41);
          Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorArgRepn_34, (MR_Integer) 0)));
          FieldType_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorArgRepn_34, (MR_Integer) 1)));
          FieldPosWidth_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorArgRepn_34, (MR_Integer) 2)));
          Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorArgRepn_34, (MR_Integer) 3)));
          FieldWidth_44 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(FieldPosWidth_43);
          switch (HighLevelData_41) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                succeeded = (FieldWidth_44 == (MR_Integer) 3);
                succeeded = !(succeeded);
              }
              break;
            case (MR_Integer) 1:
              succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ModuleInfo_40, FieldType_42, FieldWidth_44);
              break;
          }
          if (succeeded)
          {
            MR_Word TypeCtorInfo_15_74 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
            MR_Word TypeVarSet0_70;
            MR_Word TypeVar_71;
            MR_Word _TypeVarSet_72;

            mercury__varset__init_1_p_0(TypeCtorInfo_15_74, &TypeVarSet0_70);
            mercury__varset__new_var_3_p_0(TypeCtorInfo_15_74, &TypeVar_71, TypeVarSet0_70, &_TypeVarSet_72);
            {
              BoxedFieldType_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), BoxedFieldType_45, 0) = ((MR_Box) (TypeVar_71));
              MR_hl_field(MR_mktag(0), BoxedFieldType_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          else
            BoxedFieldType_45 = FieldType_42;
          ml_backend__ml_code_util__ml_gen_type_3_p_0(*STATE_VARIABLE_Info_51, FieldType_42, &MLDS_FieldType_46);
          ml_backend__ml_code_util__ml_gen_type_3_p_0(*STATE_VARIABLE_Info_51, BoxedFieldType_45, &MLDS_BoxedFieldType_47);
          {
            TakeAddrInfo_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TakeAddrInfo_48, 0) = ((MR_Box) (ArgVar_30));
            MR_hl_field(MR_mktag(0), TakeAddrInfo_48, 1) = ((MR_Box) (CurOffset_23));
            MR_hl_field(MR_mktag(0), TakeAddrInfo_48, 2) = ((MR_Box) (MLDS_FieldType_46));
            MR_hl_field(MR_mktag(0), TakeAddrInfo_48, 3) = ((MR_Box) (MLDS_BoxedFieldType_47));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *TakeAddrInfos_28 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TakeAddrInfo_48));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TakeAddrInfosTail_39));
          }
        }
        else
        {
          MR_Word Stmts0_49;
          MR_Word STATE_VARIABLE_Info_54_54;

          ml_backend__ml_unify_gen__ml_gen_unify_args_for_reuse_15_p_0(ConsId_16, TailArgVars_31, TailModes_33, TailCtorArgRepns_35, TakeAddr_20, VarType_21, VarLval_22, NextOffset_36, NextArgNum_37, Tag_25, Context_26, &Stmts0_49, TakeAddrInfos_28, STATE_VARIABLE_Info_0_50, &STATE_VARIABLE_Info_54_54);
          ml_backend__ml_unify_gen__ml_gen_unify_arg_14_p_0(ConsId_16, ArgVar_30, Mode_32, CtorArgRepn_34, VarType_21, VarLval_22, CurOffset_23, CurArgNum_24, Tag_25, Context_26, Stmts0_49, Stmts_27, STATE_VARIABLE_Info_54_54, STATE_VARIABLE_Info_51);
        }
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unify_args_for_reuse\'/15", (MR_String) "length mismatch");
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
        *HeadVar__4_4 = HeadVar__3_3;
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) NextWidth_18)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Int_32 = (MR_Integer) HeadVar__3_3;
              MR_Integer Var_121 = (MR_Integer) ((MR_Unsigned) Int_32 + (MR_Unsigned) (MR_Integer) 1);

              *HeadVar__4_4 = (MR_Word) Var_121;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Integer Int_32 = (MR_Integer) HeadVar__3_3;
              MR_Integer Var_121 = (MR_Integer) ((MR_Unsigned) Int_32 + (MR_Unsigned) (MR_Integer) 1);

              *HeadVar__4_4 = (MR_Word) Var_121;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), NextWidth_18, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer Int_32 = (MR_Integer) HeadVar__3_3;
                  MR_Integer Var_121 = (MR_Integer) ((MR_Unsigned) Int_32 + (MR_Unsigned) (MR_Integer) 1);

                  *HeadVar__4_4 = (MR_Word) Var_121;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_next_field_offset\'/4", (MR_String) "shifted follows full");
                    return;
                  }
                }
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) NextWidth_18)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Var_117;
              MR_Integer Int_123 = (MR_Integer) HeadVar__3_3;

              Var_117 = (MR_Integer) ((MR_Unsigned) Int_123 + (MR_Unsigned) (MR_Integer) 2);
              *HeadVar__4_4 = (MR_Word) Var_117;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Integer Var_117;
              MR_Integer Int_123 = (MR_Integer) HeadVar__3_3;

              Var_117 = (MR_Integer) ((MR_Unsigned) Int_123 + (MR_Unsigned) (MR_Integer) 2);
              *HeadVar__4_4 = (MR_Word) Var_117;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), NextWidth_18, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer Var_117;
                  MR_Integer Int_123 = (MR_Integer) HeadVar__3_3;

                  Var_117 = (MR_Integer) ((MR_Unsigned) Int_123 + (MR_Unsigned) (MR_Integer) 2);
                  *HeadVar__4_4 = (MR_Word) Var_117;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_next_field_offset\'/4", (MR_String) "shifted follows double");
                    return;
                  }
                }
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CurWidth_14, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) NextWidth_18)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_next_field_offset\'/4", (MR_String) "partial_first not followed by partial_shifted");
                    return;
                  }
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_next_field_offset\'/4", (MR_String) "partial_first not followed by partial_shifted");
                    return;
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), NextWidth_18, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_next_field_offset\'/4", (MR_String) "partial_first not followed by partial_shifted");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    *HeadVar__4_4 = HeadVar__3_3;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) NextWidth_18)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer Var_111;
                  MR_Integer Int_126 = (MR_Integer) HeadVar__3_3;

                  Var_111 = (MR_Integer) ((MR_Unsigned) Int_126 + (MR_Unsigned) (MR_Integer) 1);
                  *HeadVar__4_4 = (MR_Word) Var_111;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  MR_Integer Var_111;
                  MR_Integer Int_126 = (MR_Integer) HeadVar__3_3;

                  Var_111 = (MR_Integer) ((MR_Unsigned) Int_126 + (MR_Unsigned) (MR_Integer) 1);
                  *HeadVar__4_4 = (MR_Word) Var_111;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), NextWidth_18, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Integer Var_111;
                      MR_Integer Int_126 = (MR_Integer) HeadVar__3_3;

                      Var_111 = (MR_Integer) ((MR_Unsigned) Int_126 + (MR_Unsigned) (MR_Integer) 1);
                      *HeadVar__4_4 = (MR_Word) Var_111;
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    *HeadVar__4_4 = HeadVar__3_3;
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unify_arg_14_p_0(
  MR_Word ConsId_15,
  MR_Word ArgVar_16,
  MR_Word Mode_17,
  MR_Word CtorArgRepn_18,
  MR_Word VarType_19,
  MR_Word VarLval_20,
  MR_Word Offset_21,
  MR_Integer ArgNum_22,
  MR_Word Tag_23,
  MR_Word Context_24,
  MR_Word STATE_VARIABLE_Stmts_0_49,
  MR_Word * STATE_VARIABLE_Stmts_50,
  MR_Word STATE_VARIABLE_Info_0_51,
  MR_Word * STATE_VARIABLE_Info_52)
{
  {
    MR_bool succeeded;
    MR_Word MaybeFieldName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorArgRepn_18, (MR_Integer) 0)));
    MR_Word FieldType_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorArgRepn_18, (MR_Integer) 1)));
    MR_Word FieldPosWidth_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorArgRepn_18, (MR_Integer) 2)));
    MR_Word HighLevelData_30;
    MR_Word FieldId_32;
    MR_Word ModuleInfo_40;
    MR_Word FieldWidth_41;
    MR_Word BoxedFieldType_42;
    MR_Word MLDS_VarType_43;
    MR_Word MLDS_BoxedFieldType_44;
    MR_Word MaybePrimaryTag_45;
    MR_Word FieldLval_46;
    MR_Word ArgLval_47;
    MR_Word ArgType_48;
    MR_Word Var_59;
    MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorArgRepn_18, (MR_Integer) 3)));

    ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_51, &HighLevelData_30);
    switch (HighLevelData_30) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer OffsetInt_31 = (MR_Integer) Offset_21;
          MR_Word Var_57;
          MR_Word Var_58;

          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_58, 0) = ((MR_Box) (OffsetInt_31));
          }
          {
            Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (Var_58));
          }
          {
            FieldId_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FieldId_32, 0) = ((MR_Box) (Var_57));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Target_33;
          MR_Word Var_34;

          ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_51, &Target_33);
          succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(VarType_19, &Var_34);
          if (succeeded)
          {
            MR_Word Var_53;
            MR_Word Var_54;
            MR_Integer OffsetInt_61 = (MR_Integer) Offset_21;

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
              FieldId_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FieldId_32, 0) = ((MR_Box) (Var_53));
            }
          }
          else
          {
            MR_Word ConsName_35;
            MR_Integer ConsArity_36;
            MR_Word TypeCtor_37;

            succeeded = ((((MR_tag((MR_Word) ConsId_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_15, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              ConsName_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_15, (MR_Integer) 1)));
              ConsArity_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_15, (MR_Integer) 2)));
              TypeCtor_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_15, (MR_Integer) 3)));
              {
                MR_String UnqualConsName_38;
                MR_Word FieldName_39;

                UnqualConsName_38 = ml_backend__ml_type_gen__ml_gen_du_ctor_name_4_f_0(Target_33, TypeCtor_37, ConsName_35, ConsArity_36);
                FieldName_39 = ml_backend__ml_code_util__ml_gen_hld_field_name_2_f_0(MaybeFieldName_27, ArgNum_22);
                FieldId_32 = ml_backend__ml_unify_gen__ml_gen_field_id_6_f_0(Target_33, VarType_19, Tag_23, UnqualConsName_38, ConsArity_36, FieldName_39);
              }
            }
            else
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unify_arg\'/14", (MR_String) "invalid cons_id");
                return;
              }
            }
          }
        }
        break;
    }
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_51, &ModuleInfo_40);
    FieldWidth_41 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(FieldPosWidth_29);
    switch (HighLevelData_30) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          succeeded = (FieldWidth_41 == (MR_Integer) 3);
          succeeded = !(succeeded);
        }
        break;
      case (MR_Integer) 1:
        succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ModuleInfo_40, FieldType_28, FieldWidth_41);
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
        BoxedFieldType_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), BoxedFieldType_42, 0) = ((MR_Box) (TypeVar_79));
        MR_hl_field(MR_mktag(0), BoxedFieldType_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    else
      BoxedFieldType_42 = FieldType_28;
    ml_backend__ml_code_util__ml_gen_type_3_p_0(STATE_VARIABLE_Info_0_51, VarType_19, &MLDS_VarType_43);
    ml_backend__ml_code_util__ml_gen_type_3_p_0(STATE_VARIABLE_Info_0_51, BoxedFieldType_42, &MLDS_BoxedFieldType_44);
    MaybePrimaryTag_45 = hlds__hlds_data__get_primary_tag_1_f_0(Tag_23);
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_59, 0) = ((MR_Box) (VarLval_20));
    }
    {
      FieldLval_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FieldLval_46, 0) = ((MR_Box) (MaybePrimaryTag_45));
      MR_hl_field(MR_mktag(0), FieldLval_46, 1) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), FieldLval_46, 2) = ((MR_Box) (FieldId_32));
      MR_hl_field(MR_mktag(0), FieldLval_46, 3) = ((MR_Box) (MLDS_BoxedFieldType_44));
      MR_hl_field(MR_mktag(0), FieldLval_46, 4) = ((MR_Box) (MLDS_VarType_43));
    }
    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_51, ArgVar_16, &ArgLval_47);
    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_51, ArgVar_16, &ArgType_48);
    ml_backend__ml_unify_gen__ml_gen_sub_unify_11_p_0(ModuleInfo_40, HighLevelData_30, Mode_17, ArgLval_47, ArgType_48, FieldLval_46, BoxedFieldType_42, FieldPosWidth_29, Context_24, STATE_VARIABLE_Stmts_0_49, STATE_VARIABLE_Stmts_50);
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
  MR_Word STATE_VARIABLE_Stmts_0_53,
  MR_Word * STATE_VARIABLE_Stmts_54)
{
  {
    MR_bool succeeded;
    MR_Word ArgRval_20;
    MR_Word Var_56;

    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_56, 0) = ((MR_Box) (ArgLval_13));
    }
    ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_11, ArgType_14, FieldType_16, (MR_Integer) 0, Var_56, &ArgRval_20);
    switch (MR_tag((MR_Word) FieldWidth_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Stmts_54 = STATE_VARIABLE_Stmts_0_53;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Stmt_23;

          Stmt_23 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLval_15, ArgRval_20, Context_18);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Stmts_54 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_23));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Stmts_0_53));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word FieldLvalA_27;
          MR_Word FieldLvalB_28;

          succeeded = ml_backend__ml_unify_gen__ml_field_offset_pair_3_p_0(FieldLval_15, &FieldLvalA_27, &FieldLvalB_28);
          if (succeeded)
          {
            MR_Word FloatWordA_29;
            MR_Word FloatWordB_30;
            MR_Word IntFieldType_31;
            MR_Word ArgRvalA_32;
            MR_Word ArgRvalB_33;
            MR_Word StmtA_34;
            MR_Word StmtB_35;
            MR_Word Var_68;
            MR_Word Var_70;
            MR_Word Var_72;
            MR_Word Var_75;

            {
              FloatWordA_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), FloatWordA_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), FloatWordA_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_5[26])));
              MR_hl_field(MR_mktag(3), FloatWordA_29, 2) = ((MR_Box) (ArgRval_20));
            }
            {
              FloatWordB_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), FloatWordB_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), FloatWordB_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_5[27])));
              MR_hl_field(MR_mktag(3), FloatWordB_30, 2) = ((MR_Box) (ArgRval_20));
            }
            Var_68 = parse_tree__builtin_lib_types__int_type_0_f_0();
            ml_backend__ml_unify_gen__ml_type_as_field_5_p_0(ModuleInfo_11, HighLevelData_12, Var_68, (MR_Integer) 2, &IntFieldType_31);
            Var_70 = parse_tree__builtin_lib_types__int_type_0_f_0();
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_11, Var_70, IntFieldType_31, (MR_Integer) 0, FloatWordA_29, &ArgRvalA_32);
            Var_72 = parse_tree__builtin_lib_types__int_type_0_f_0();
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_11, Var_72, IntFieldType_31, (MR_Integer) 0, FloatWordB_30, &ArgRvalB_33);
            StmtA_34 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLvalA_27, ArgRvalA_32, Context_18);
            StmtB_35 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLvalB_28, ArgRvalB_33, Context_18);
            {
              Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (StmtB_35));
              MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (STATE_VARIABLE_Stmts_0_53));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Stmts_54 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (StmtA_34));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_75));
            }
          }
          else
          {
            MR_Word Stmt_78;

            Stmt_78 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLval_15, ArgRval_20, Context_18);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Stmts_54 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_78));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Stmts_0_53));
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_17, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Mask_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_17, (MR_Integer) 4)));
              MR_Word Fill_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_17, (MR_Integer) 5)));
              MR_Integer MaskInt_46 = (MR_Integer) Mask_39;
              MR_Word CastVal_47;
              MR_Word MaskOld_48;
              MR_Word ShiftNew_49;
              MR_Word Combined_50;
              MR_Word Var_60;
              MR_Integer Var_61;
              MR_Integer Var_62;
              MR_Word Stmt_81;
              MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_17, (MR_Integer) 1)));
              MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_17, (MR_Integer) 2)));
              MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_17, (MR_Integer) 3)));

              {
                Var_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_60, 0) = ((MR_Box) (FieldLval_15));
              }
              {
                CastVal_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CastVal_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), CastVal_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_5[28])));
                MR_hl_field(MR_mktag(3), CastVal_47, 2) = ((MR_Box) (Var_60));
              }
              Var_62 = mercury__int__f_60_60_2_f_0(MaskInt_46, (MR_Integer) 0);
              Var_61 = ~(Var_62);
              MaskOld_48 = ml_backend__ml_unify_gen__ml_bitwise_and_2_f_0(CastVal_47, Var_61);
              ShiftNew_49 = ml_backend__ml_unify_gen__ml_lshift_3_f_0(ArgRval_20, (MR_Word) ((MR_Box) ((MR_Integer) 0)), Fill_40);
              Combined_50 = ml_backend__ml_unify_gen__ml_bitwise_or_2_f_0(MaskOld_48, ShiftNew_49);
              Stmt_81 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLval_15, Combined_50, Context_18);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Stmts_54 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_81));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Stmts_0_53));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Mask_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_17, (MR_Integer) 5)));
              MR_Word Fill_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_17, (MR_Integer) 6)));
              MR_Word Shift_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_17, (MR_Integer) 3)));
              MR_Integer ShiftInt_85 = (MR_Integer) Shift_84;
              MR_Integer MaskInt_86 = (MR_Integer) Mask_82;
              MR_Word CastVal_87;
              MR_Word MaskOld_88;
              MR_Word ShiftNew_89;
              MR_Word Combined_90;
              MR_Word Var_93;
              MR_Integer Var_94;
              MR_Integer Var_95;
              MR_Word Stmt_96;
              MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_17, (MR_Integer) 1)));
              MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_17, (MR_Integer) 2)));
              MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_17, (MR_Integer) 4)));

              {
                Var_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_93, 0) = ((MR_Box) (FieldLval_15));
              }
              {
                CastVal_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CastVal_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), CastVal_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_5[28])));
                MR_hl_field(MR_mktag(3), CastVal_87, 2) = ((MR_Box) (Var_93));
              }
              Var_95 = mercury__int__f_60_60_2_f_0(MaskInt_86, ShiftInt_85);
              Var_94 = ~(Var_95);
              MaskOld_88 = ml_backend__ml_unify_gen__ml_bitwise_and_2_f_0(CastVal_87, Var_94);
              ShiftNew_89 = ml_backend__ml_unify_gen__ml_lshift_3_f_0(ArgRval_20, Shift_84, Fill_83);
              Combined_90 = ml_backend__ml_unify_gen__ml_bitwise_or_2_f_0(MaskOld_88, ShiftNew_89);
              Stmt_96 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLval_15, Combined_90, Context_18);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Stmts_54 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_96));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Stmts_0_53));
              }
            }
            break;
          case (MR_Integer) 2:
            *STATE_VARIABLE_Stmts_54 = STATE_VARIABLE_Stmts_0_53;
            break;
        }
        break;
    }
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
ml_backend__ml_unify_gen__ml_lshift_3_f_0(
  MR_Word Rval_5,
  MR_Word Shift_6,
  MR_Word Fill_7)
{
  {
    MR_bool succeeded;
    MR_Word ShiftedRval_8;
    MR_Integer ShiftInt_9 = (MR_Integer) Shift_6;
    MR_Word CastRval_10;
    MR_Word Var_15;
    MR_Word Var_11;

    ml_backend__ml_unify_gen__ml_cast_away_any_sign_extend_bits_3_p_0(Fill_7, Rval_5, &CastRval_10);
    succeeded = ((((MR_tag((MR_Word) Rval_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 1)));
      succeeded = ((((MR_tag((MR_Word) Var_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_15, (MR_Integer) 0)))) == (MR_Integer) 20)));
      if (succeeded)
        Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_15, (MR_Integer) 1)));
    }
    if (succeeded)
    {
      ShiftedRval_8 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[10]);
    }
    else
    {
      MR_Word Var_18;
      MR_Integer Var_19;

      succeeded = ((((MR_tag((MR_Word) Rval_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 2)));
        if (succeeded)
        {
          Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Var_18, (MR_Integer) 0)));
          succeeded = (Var_19 == (MR_Integer) 0);
        }
      }
      if (succeeded)
        ShiftedRval_8 = CastRval_10;
      else
      {
        succeeded = (ShiftInt_9 == (MR_Integer) 0);
        if (succeeded)
          ShiftedRval_8 = CastRval_10;
        else
        {
          MR_Word SubRval_13;
          MR_Word Var_20;
          MR_Word Type_12;

          succeeded = ((((MR_tag((MR_Word) CastRval_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CastRval_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), CastRval_10, (MR_Integer) 1)));
            SubRval_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), CastRval_10, (MR_Integer) 2)));
            succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_mktag((MR_Integer) 0)));
            if (succeeded)
              Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 0)));
          }
          if (succeeded)
          {
            MR_Word ShiftedSubRval_14;
            MR_Word Var_23;
            MR_Word Var_24;

            {
              Var_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_24, 0) = ((MR_Box) (ShiftInt_9));
            }
            {
              Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (Var_24));
            }
            {
              ShiftedSubRval_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ShiftedSubRval_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), ShiftedSubRval_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[8])));
              MR_hl_field(MR_mktag(3), ShiftedSubRval_14, 2) = ((MR_Box) (SubRval_13));
              MR_hl_field(MR_mktag(3), ShiftedSubRval_14, 3) = ((MR_Box) (Var_23));
            }
            {
              ShiftedRval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ShiftedRval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), ShiftedRval_8, 1) = ((MR_Box) (Var_20));
              MR_hl_field(MR_mktag(3), ShiftedRval_8, 2) = ((MR_Box) (ShiftedSubRval_14));
            }
          }
          else
          {
            MR_Word Var_28;
            MR_Word Var_29;

            {
              Var_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_29, 0) = ((MR_Box) (ShiftInt_9));
            }
            {
              Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (Var_29));
            }
            {
              ShiftedRval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ShiftedRval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), ShiftedRval_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[8])));
              MR_hl_field(MR_mktag(3), ShiftedRval_8, 2) = ((MR_Box) (CastRval_10));
              MR_hl_field(MR_mktag(3), ShiftedRval_8, 3) = ((MR_Box) (Var_28));
            }
          }
        }
      }
    }
    return ShiftedRval_8;
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
          succeeded = (FieldWidth_9 == (MR_Integer) 3);
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
  MR_Word STATE_VARIABLE_Stmts_0_58,
  MR_Word * STATE_VARIABLE_Stmts_59)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) FieldWidth_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Stmts_59 = STATE_VARIABLE_Stmts_0_58;
        break;
      case (MR_Integer) 1:
        {
          MR_Word FieldRval_31;
          MR_Word ToAssignRval_34;
          MR_Word Stmt_50;
          MR_Word Var_67;

          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_67, 0) = ((MR_Box) (FieldLval_13));
          }
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, FieldType_14, ArgType_12, (MR_Integer) 0, Var_67, &FieldRval_31);
          switch (MR_tag((MR_Word) FieldWidth_15)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              ToAssignRval_34 = FieldRval_31;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Mask_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 4)));
                    MR_Word Fill_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 5)));
                    MR_Integer MaskInt_44 = (MR_Integer) Mask_38;
                    MR_Word MaskedRval_45;
                    MR_Word Var_69;
                    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 1)));
                    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 2)));
                    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 3)));

                    Var_69 = ml_backend__ml_unify_gen__ml_rshift_2_f_0(FieldRval_31, (MR_Word) ((MR_Box) ((MR_Integer) 0)));
                    MaskedRval_45 = ml_backend__ml_unify_gen__ml_bitwise_and_2_f_0(Var_69, MaskInt_44);
                    switch (Fill_39) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        ToAssignRval_34 = MaskedRval_45;
                        break;
                      case (MR_Integer) 2:
                        {
                          {
                            ToAssignRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ToAssignRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), ToAssignRval_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[23])));
                            MR_hl_field(MR_mktag(3), ToAssignRval_34, 2) = ((MR_Box) (MaskedRval_45));
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          {
                            ToAssignRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ToAssignRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), ToAssignRval_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[24])));
                            MR_hl_field(MR_mktag(3), ToAssignRval_34, 2) = ((MR_Box) (MaskedRval_45));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          {
                            ToAssignRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ToAssignRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), ToAssignRval_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[25])));
                            MR_hl_field(MR_mktag(3), ToAssignRval_34, 2) = ((MR_Box) (MaskedRval_45));
                          }
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          {
                            ToAssignRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ToAssignRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), ToAssignRval_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[6])));
                            MR_hl_field(MR_mktag(3), ToAssignRval_34, 2) = ((MR_Box) (MaskedRval_45));
                          }
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          {
                            ToAssignRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ToAssignRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), ToAssignRval_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[13])));
                            MR_hl_field(MR_mktag(3), ToAssignRval_34, 2) = ((MR_Box) (MaskedRval_45));
                          }
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          {
                            ToAssignRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ToAssignRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), ToAssignRval_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[20])));
                            MR_hl_field(MR_mktag(3), ToAssignRval_34, 2) = ((MR_Box) (MaskedRval_45));
                          }
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Mask_173 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 5)));
                    MR_Word Fill_174 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 6)));
                    MR_Word Shift_175 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 3)));
                    MR_Integer MaskInt_176 = (MR_Integer) Mask_173;
                    MR_Word MaskedRval_177;
                    MR_Word Var_182;
                    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 1)));
                    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 2)));
                    MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 4)));

                    Var_182 = ml_backend__ml_unify_gen__ml_rshift_2_f_0(FieldRval_31, Shift_175);
                    MaskedRval_177 = ml_backend__ml_unify_gen__ml_bitwise_and_2_f_0(Var_182, MaskInt_176);
                    switch (Fill_174) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        ToAssignRval_34 = MaskedRval_177;
                        break;
                      case (MR_Integer) 2:
                        {
                          {
                            ToAssignRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ToAssignRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), ToAssignRval_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[23])));
                            MR_hl_field(MR_mktag(3), ToAssignRval_34, 2) = ((MR_Box) (MaskedRval_177));
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          {
                            ToAssignRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ToAssignRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), ToAssignRval_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[24])));
                            MR_hl_field(MR_mktag(3), ToAssignRval_34, 2) = ((MR_Box) (MaskedRval_177));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          {
                            ToAssignRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ToAssignRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), ToAssignRval_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[25])));
                            MR_hl_field(MR_mktag(3), ToAssignRval_34, 2) = ((MR_Box) (MaskedRval_177));
                          }
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          {
                            ToAssignRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ToAssignRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), ToAssignRval_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[6])));
                            MR_hl_field(MR_mktag(3), ToAssignRval_34, 2) = ((MR_Box) (MaskedRval_177));
                          }
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          {
                            ToAssignRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ToAssignRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), ToAssignRval_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[13])));
                            MR_hl_field(MR_mktag(3), ToAssignRval_34, 2) = ((MR_Box) (MaskedRval_177));
                          }
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          {
                            ToAssignRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ToAssignRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), ToAssignRval_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[20])));
                            MR_hl_field(MR_mktag(3), ToAssignRval_34, 2) = ((MR_Box) (MaskedRval_177));
                          }
                        }
                        break;
                    }
                  }
                  break;
              }
              break;
          }
          Stmt_50 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_11, ToAssignRval_34, Context_16);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Stmts_59 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_50));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Stmts_0_58));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word FieldRval_75;
          MR_Word Stmt_76;
          MR_Word FieldLvalA_54;
          MR_Word FieldLvalB_55;

          succeeded = ml_backend__ml_unify_gen__ml_field_offset_pair_3_p_0(FieldLval_13, &FieldLvalA_54, &FieldLvalB_55);
          if (succeeded)
          {
            MR_Word Var_61;
            MR_Word Var_62;

            {
              Var_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_61, 0) = ((MR_Box) (FieldLvalA_54));
            }
            {
              Var_62 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_62, 0) = ((MR_Box) (FieldLvalB_55));
            }
            {
              FieldRval_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), FieldRval_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), FieldRval_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22))));
              MR_hl_field(MR_mktag(3), FieldRval_75, 2) = ((MR_Box) (Var_61));
              MR_hl_field(MR_mktag(3), FieldRval_75, 3) = ((MR_Box) (Var_62));
            }
          }
          else
          {
            MR_Word Var_64;

            {
              Var_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_64, 0) = ((MR_Box) (FieldLval_13));
            }
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, FieldType_14, ArgType_12, (MR_Integer) 0, Var_64, &FieldRval_75);
          }
          Stmt_76 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_11, FieldRval_75, Context_16);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Stmts_59 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_76));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Stmts_0_58));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              MR_Word FieldRval_31;
              MR_Word ToAssignRval_34;
              MR_Word Stmt_50;
              MR_Word Var_67;

              {
                Var_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_67, 0) = ((MR_Box) (FieldLval_13));
              }
              ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, FieldType_14, ArgType_12, (MR_Integer) 0, Var_67, &FieldRval_31);
              switch (MR_tag((MR_Word) FieldWidth_15)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  ToAssignRval_34 = FieldRval_31;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word Mask_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 4)));
                        MR_Word Fill_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 5)));
                        MR_Integer MaskInt_44 = (MR_Integer) Mask_38;
                        MR_Word MaskedRval_45;
                        MR_Word Var_69;
                        MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 1)));
                        MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 2)));
                        MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 3)));

                        Var_69 = ml_backend__ml_unify_gen__ml_rshift_2_f_0(FieldRval_31, (MR_Word) ((MR_Box) ((MR_Integer) 0)));
                        MaskedRval_45 = ml_backend__ml_unify_gen__ml_bitwise_and_2_f_0(Var_69, MaskInt_44);
                        switch (Fill_39) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            ToAssignRval_34 = MaskedRval_45;
                            break;
                          case (MR_Integer) 2:
                            {
                              {
                                ToAssignRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), ToAssignRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                MR_hl_field(MR_mktag(3), ToAssignRval_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[23])));
                                MR_hl_field(MR_mktag(3), ToAssignRval_34, 2) = ((MR_Box) (MaskedRval_45));
                              }
                            }
                            break;
                          case (MR_Integer) 3:
                            {
                              {
                                ToAssignRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), ToAssignRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                MR_hl_field(MR_mktag(3), ToAssignRval_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[24])));
                                MR_hl_field(MR_mktag(3), ToAssignRval_34, 2) = ((MR_Box) (MaskedRval_45));
                              }
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              {
                                ToAssignRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), ToAssignRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                MR_hl_field(MR_mktag(3), ToAssignRval_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[25])));
                                MR_hl_field(MR_mktag(3), ToAssignRval_34, 2) = ((MR_Box) (MaskedRval_45));
                              }
                            }
                            break;
                          case (MR_Integer) 5:
                            {
                              {
                                ToAssignRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), ToAssignRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                MR_hl_field(MR_mktag(3), ToAssignRval_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[6])));
                                MR_hl_field(MR_mktag(3), ToAssignRval_34, 2) = ((MR_Box) (MaskedRval_45));
                              }
                            }
                            break;
                          case (MR_Integer) 6:
                            {
                              {
                                ToAssignRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), ToAssignRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                MR_hl_field(MR_mktag(3), ToAssignRval_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[13])));
                                MR_hl_field(MR_mktag(3), ToAssignRval_34, 2) = ((MR_Box) (MaskedRval_45));
                              }
                            }
                            break;
                          case (MR_Integer) 4:
                            {
                              {
                                ToAssignRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), ToAssignRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                MR_hl_field(MR_mktag(3), ToAssignRval_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[20])));
                                MR_hl_field(MR_mktag(3), ToAssignRval_34, 2) = ((MR_Box) (MaskedRval_45));
                              }
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Mask_173 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 5)));
                        MR_Word Fill_174 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 6)));
                        MR_Word Shift_175 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 3)));
                        MR_Integer MaskInt_176 = (MR_Integer) Mask_173;
                        MR_Word MaskedRval_177;
                        MR_Word Var_182;
                        MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 1)));
                        MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 2)));
                        MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 4)));

                        Var_182 = ml_backend__ml_unify_gen__ml_rshift_2_f_0(FieldRval_31, Shift_175);
                        MaskedRval_177 = ml_backend__ml_unify_gen__ml_bitwise_and_2_f_0(Var_182, MaskInt_176);
                        switch (Fill_174) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            ToAssignRval_34 = MaskedRval_177;
                            break;
                          case (MR_Integer) 2:
                            {
                              {
                                ToAssignRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), ToAssignRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                MR_hl_field(MR_mktag(3), ToAssignRval_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[23])));
                                MR_hl_field(MR_mktag(3), ToAssignRval_34, 2) = ((MR_Box) (MaskedRval_177));
                              }
                            }
                            break;
                          case (MR_Integer) 3:
                            {
                              {
                                ToAssignRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), ToAssignRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                MR_hl_field(MR_mktag(3), ToAssignRval_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[24])));
                                MR_hl_field(MR_mktag(3), ToAssignRval_34, 2) = ((MR_Box) (MaskedRval_177));
                              }
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              {
                                ToAssignRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), ToAssignRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                MR_hl_field(MR_mktag(3), ToAssignRval_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[25])));
                                MR_hl_field(MR_mktag(3), ToAssignRval_34, 2) = ((MR_Box) (MaskedRval_177));
                              }
                            }
                            break;
                          case (MR_Integer) 5:
                            {
                              {
                                ToAssignRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), ToAssignRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                MR_hl_field(MR_mktag(3), ToAssignRval_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[6])));
                                MR_hl_field(MR_mktag(3), ToAssignRval_34, 2) = ((MR_Box) (MaskedRval_177));
                              }
                            }
                            break;
                          case (MR_Integer) 6:
                            {
                              {
                                ToAssignRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), ToAssignRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                MR_hl_field(MR_mktag(3), ToAssignRval_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[13])));
                                MR_hl_field(MR_mktag(3), ToAssignRval_34, 2) = ((MR_Box) (MaskedRval_177));
                              }
                            }
                            break;
                          case (MR_Integer) 4:
                            {
                              {
                                ToAssignRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), ToAssignRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                MR_hl_field(MR_mktag(3), ToAssignRval_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[20])));
                                MR_hl_field(MR_mktag(3), ToAssignRval_34, 2) = ((MR_Box) (MaskedRval_177));
                              }
                            }
                            break;
                        }
                      }
                      break;
                  }
                  break;
              }
              Stmt_50 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_11, ToAssignRval_34, Context_16);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Stmts_59 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_50));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Stmts_0_58));
              }
            }
            break;
          case (MR_Integer) 2:
            *STATE_VARIABLE_Stmts_59 = STATE_VARIABLE_Stmts_0_58;
            break;
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
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[12])));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 2) = ((MR_Box) (Rval_4));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 3) = ((MR_Box) (Var_8));
    }
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_rshift_2_f_0(
  MR_Word Rval_4,
  MR_Word Shift_5)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Rval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
    MR_Word ShiftedRval_6;
    MR_Integer ShiftInt_7 = (MR_Integer) Shift_5;
    MR_Word Var_8;
    MR_Integer Var_9;

    if (succeeded)
    {
      Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1)));
      succeeded = ((MR_tag((MR_Word) Var_8)) == (MR_mktag((MR_Integer) 2)));
      if (succeeded)
      {
        Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Var_8, (MR_Integer) 0)));
        succeeded = (Var_9 == (MR_Integer) 0);
      }
    }
    if (succeeded)
      ShiftedRval_6 = Rval_4;
    else
    {
      succeeded = (ShiftInt_7 == (MR_Integer) 0);
      if (succeeded)
        ShiftedRval_6 = Rval_4;
      else
      {
        MR_Word Var_12;
        MR_Word Var_13;

        {
          Var_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_13, 0) = ((MR_Box) (ShiftInt_7));
        }
        {
          Var_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), Var_12, 1) = ((MR_Box) (Var_13));
        }
        {
          ShiftedRval_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ShiftedRval_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), ShiftedRval_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[11])));
          MR_hl_field(MR_mktag(3), ShiftedRval_6, 2) = ((MR_Box) (Rval_4));
          MR_hl_field(MR_mktag(3), ShiftedRval_6, 3) = ((MR_Box) (Var_12));
        }
      }
    }
    return ShiftedRval_6;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_field_offset_pair_3_p_0(
  MR_Word FieldLval_4,
  MR_Word * FieldLvalA_5,
  MR_Word * FieldLvalB_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) FieldLval_4)) == (MR_mktag((MR_Integer) 0)));
    MR_Word Ptag_7;
    MR_Word Address_8;
    MR_Word FieldIdA_9;
    MR_Word PtrType_11;
    MR_Word FieldOffsetA_12;
    MR_Word Var_10;
    MR_Integer Offset_13;
    MR_Word Var_16;

    if (succeeded)
    {
      Ptag_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldLval_4, (MR_Integer) 0)));
      Address_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldLval_4, (MR_Integer) 1)));
      FieldIdA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldLval_4, (MR_Integer) 2)));
      Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldLval_4, (MR_Integer) 3)));
      PtrType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldLval_4, (MR_Integer) 4)));
      succeeded = ((MR_tag((MR_Word) FieldIdA_9)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        FieldOffsetA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldIdA_9, (MR_Integer) 0)));
        succeeded = ((((MR_tag((MR_Word) FieldOffsetA_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldOffsetA_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldOffsetA_12, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_mktag((MR_Integer) 2)));
          if (succeeded)
            Offset_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Var_16, (MR_Integer) 0)));
        }
        if (succeeded)
        {
          MR_Word FieldIdB_14;
          MR_Word SubstType_15;
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
          SubstType_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            *FieldLvalA_5 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Ptag_7));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Address_8));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (FieldIdA_9));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (SubstType_15));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (PtrType_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            *FieldLvalB_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Ptag_7));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Address_8));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (FieldIdB_14));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (SubstType_15));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (PtrType_11));
          }
        }
        else
        {
          mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_field_offset_pair\'/3", (MR_String) "unexpected field offset");
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_field_names_and_types_6_p_0(
  MR_Word Info_7,
  MR_Word Type_8,
  MR_Word ConsId_9,
  MR_Word InitOffset_10,
  MR_Word ArgVars_11,
  MR_Word * CtorArgRepns_12)
{
  {
    MR_bool succeeded;
    MR_Integer InitOffsetInt_13 = (MR_Integer) InitOffset_10;
    MR_Word Var_14;

    succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(Type_8, &Var_14);
    if (succeeded)
    {
      MR_Integer TupleArity_15;
      MR_Word FieldTypes_16;

      mercury__list__length_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], ArgVars_11, &TupleArity_15);
      FieldTypes_16 = ml_backend__ml_code_util__ml_make_boxed_types_1_f_0(TupleArity_15);
      ml_backend__ml_unify_gen__allocate_consecutive_full_word_ctor_arg_repns_3_p_0(InitOffsetInt_13, FieldTypes_16, CtorArgRepns_12);
    }
    else
    {
      MR_Word TypeInfo_33_33;
      MR_Word TypeCtorInfo_34_34;
      MR_Word ModuleInfo_17;
      MR_Word ConsRepnDefn_18;
      MR_Word CtorArgRepns0_19;
      MR_Integer NumArgVars_20;
      MR_Integer NumCtorArgs_21;
      MR_Integer NumExtraArgVars_22;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Integer Var_30;
      MR_Word Var_31;

      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_7, &ModuleInfo_17);
      check_hlds__type_util__get_cons_repn_defn_det_3_p_0(ModuleInfo_17, ConsId_9, &ConsRepnDefn_18);
      Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 0)));
      Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 1)));
      Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 2)));
      CtorArgRepns0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 3)));
      Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 4)));
      Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 5)));
      TypeInfo_33_33 = (MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2];
      NumArgVars_20 = mercury__list__length_1_f_0(TypeInfo_33_33, ArgVars_11);
      TypeCtorInfo_34_34 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0;
      NumCtorArgs_21 = mercury__list__length_1_f_0(TypeCtorInfo_34_34, CtorArgRepns0_19);
      NumExtraArgVars_22 = (MR_Integer) ((MR_Unsigned) NumArgVars_20 - (MR_Unsigned) NumCtorArgs_21);
      succeeded = (NumExtraArgVars_22 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word ExtraArgVars_23;
        MR_Word ExtraArgTypes_24;
        MR_Word ExtraCtorArgRepns_25;

        ExtraArgVars_23 = mercury__list__take_upto_2_f_0(TypeInfo_33_33, NumExtraArgVars_22, ArgVars_11);
        ml_backend__ml_code_util__ml_variable_types_3_p_0(Info_7, ExtraArgVars_23, &ExtraArgTypes_24);
        ml_backend__ml_unify_gen__allocate_consecutive_full_word_ctor_arg_repns_3_p_0(InitOffsetInt_13, ExtraArgTypes_24, &ExtraCtorArgRepns_25);
        *CtorArgRepns_12 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_34_34, ExtraCtorArgRepns_25, CtorArgRepns0_19);
      }
      else
        *CtorArgRepns_12 = CtorArgRepns0_19;
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__allocate_consecutive_full_word_ctor_arg_repns_3_p_0(
  MR_Integer CurOffset_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word Types_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word ArgRepn_8;
    MR_Word ArgRepns_9;
    MR_Word Var_11;
    MR_Word Var_12 = (MR_Word) CurOffset_1;
    MR_Word Var_13 = (MR_Word) CurOffset_1;
    MR_Word Var_14;
    MR_Integer Var_15;

    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_13));
    }
    Var_14 = mercury__term__context_init_0_f_0();
    {
      ArgRepn_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ArgRepn_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ArgRepn_8, 1) = ((MR_Box) (Type_6));
      MR_hl_field(MR_mktag(0), ArgRepn_8, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), ArgRepn_8, 3) = ((MR_Box) (Var_14));
    }
    Var_15 = (MR_Integer) ((MR_Unsigned) CurOffset_1 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__ml_unify_gen__allocate_consecutive_full_word_ctor_arg_repns_3_p_0(Var_15, Types_7, &ArgRepns_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgRepn_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgRepns_9));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_tag_offset_and_argnum_4_p_0(
  MR_Word Tag_5,
  MR_Integer * Ptag_6,
  MR_Word * InitOffset_7,
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
              *InitOffset_7 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
              *ArgNum_8 = (MR_Integer) 1;
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
              MR_Word SubTag_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_5, (MR_Integer) 2)));
              MR_Integer Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_5, (MR_Integer) 1)));
              MR_Word next_value_of_Tag_5 = SubTag_14;

              // direct tailcall eliminated
              Tag_5 = next_value_of_Tag_5;
              continue;
            }
            break;
          case (MR_Integer) 11:
            {
              *Ptag_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_5, (MR_Integer) 1)));
              *InitOffset_7 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
              *ArgNum_8 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 12:
            {
              *Ptag_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_5, (MR_Integer) 1)));
              *InitOffset_7 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
              *ArgNum_8 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word AddedBy_12;
              MR_Integer _SecondaryTag_11;

              *Ptag_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_5, (MR_Integer) 1)));
              _SecondaryTag_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_5, (MR_Integer) 2)));
              AddedBy_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_5, (MR_Integer) 3)));
              switch (AddedBy_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    *InitOffset_7 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    *InitOffset_7 = (MR_Word) ((MR_Box) ((MR_Integer) 1));
                  }
                  break;
              }
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

    succeeded = ml_backend__ml_unify_gen__is_apw_full_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_extra_arg_assign__1251__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
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
      MR_Word ArgPosWidth_34;
      MR_Integer NextOffset_35;
      MR_Word FieldLval_36;
      MR_Word Var_39;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_49;

      ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_8, &HighLevelData_28);
      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[5]));
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
      ArgPosWidth_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExtraRvalTypeWidth_18, (MR_Integer) 2)));
      {
        Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_6[6]));
        MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_extra_arg_assign_9_p_0_2));
        MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (ArgPosWidth_34));
      }
      mercury__require__expect_3_p_0(Var_45, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_extra_arg_assign\'/9", (MR_String) "ArgPosWidth != apw_full(_)");
      NextOffset_35 = (MR_Integer) ((MR_Unsigned) CurOffset_4 + (MR_Unsigned) (MR_Integer) 1);
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_49, 0) = ((MR_Box) (VarLval_3));
      }
      {
        FieldLval_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FieldLval_36, 0) = ((MR_Box) (MaybePrimaryTag_31));
        MR_hl_field(MR_mktag(0), FieldLval_36, 1) = ((MR_Box) (Var_49));
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
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_5[22])));
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

    conv0_LambdaHeadVar__2_52 = ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_new_object_statically__695__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_52));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_13_p_0(
  MR_Word ConsIdOrClosure_14,
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

    ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0(STATE_VARIABLE_Info_0_44, VarType_19, ConsIdOrClosure_14, ArgVars_22, &ArgVarsTypesWidths_26);
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
    ml_backend__ml_unify_gen__construct_static_ground_term_14_p_0(ModuleInfo_28, Target_38, HighLevelData_29, Context_23, VarType_19, MLDS_Type_20, ConsIdOrClosure_14, UsesBaseClass_33, Ptag_16, ExtraArgRvals_34, ArgRvalsTypesWidths_31, &GroundTerm_39, STATE_VARIABLE_GlobalData_49_49, &STATE_VARIABLE_GlobalData_53_53);
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

    conv0_LambdaHeadVar__2_44 = ml_backend__ml_unify_gen__IntroducedFrom__func__construct_static_ground_term__3098__1_1_f_0(((MR_Word) wrapper_arg_1));
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
  MR_Word ConsIdOrClosure_21,
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
    ConstType_32 = ml_backend__ml_unify_gen__get_const_type_for_cons_id_5_f_0(Target_16, HighLevelData_17, MLDS_Type_20, UsesBaseClass_22, ConsIdOrClosure_21);
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
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word RvalTypeWidth_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word RvalsTypesWidths_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Rval_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), RvalTypeWidth_3, (MR_Integer) 0)));
      MR_Word PosWidth_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), RvalTypeWidth_3, (MR_Integer) 2)));
      MR_Word _Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), RvalTypeWidth_3, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) PosWidth_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = RvalsTypesWidths_4;

            // direct tailcall eliminated
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word HeadInit_14;
            MR_Word TailInits_15;

            {
              HeadInit_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), HeadInit_14, 0) = ((MR_Box) (Rval_6));
            }
            ml_backend__ml_unify_gen__ml_pack_ground_term_args_into_word_inits_2_p_0(RvalsTypesWidths_4, &TailInits_15);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadInit_14));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailInits_15));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PosWidth_8, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Fill_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), PosWidth_8, (MR_Integer) 5)));
                MR_Word RevOrRvals0_21;
                MR_Word LeftOverRvalsTypesWidths_22;
                MR_Word OrAllRval_23;
                MR_Word Var_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                MR_Word HeadInit_39;
                MR_Word TailInits_40;
                MR_Word CastRval_48;
                MR_Word RevOrRvals_71;
                MR_Word OrRvals_72;
                MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), PosWidth_8, (MR_Integer) 1)));
                MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), PosWidth_8, (MR_Integer) 2)));
                MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), PosWidth_8, (MR_Integer) 3)));
                MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), PosWidth_8, (MR_Integer) 4)));
                MR_Word RvalConst_49;

                ml_backend__ml_unify_gen__ml_cast_away_any_sign_extend_bits_3_p_0(Fill_20, Rval_6, &CastRval_48);
                succeeded = ((((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  RvalConst_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));
                  if (((MR_tag((MR_Word) RvalConst_49)) == (MR_mktag((MR_Integer) 2))))
                  {
                    MR_Integer Var_55 = ((MR_Integer) (MR_hl_field(MR_mktag(2), RvalConst_49, (MR_Integer) 0)));

                    succeeded = (Var_55 == (MR_Integer) 0);
                  }
                  else
                  if (((((MR_tag((MR_Word) RvalConst_49)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalConst_49, (MR_Integer) 0)))) == (MR_Integer) 20))))
                    succeeded = MR_TRUE;
                  else
                    succeeded = MR_FALSE;
                }
                if (succeeded)
                  RevOrRvals0_21 = Var_37;
                else
                {
                  MR_Word ShiftedRval_51;

                  succeeded = MR_TRUE;
                  if (succeeded)
                    ShiftedRval_51 = CastRval_48;
                  else
                  {
                    MR_Word SubRval_53;
                    MR_Word Var_56;
                    MR_Word Type_52;

                    succeeded = ((((MR_tag((MR_Word) CastRval_48)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CastRval_48, (MR_Integer) 0)))) == (MR_Integer) 2)));
                    if (succeeded)
                    {
                      Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), CastRval_48, (MR_Integer) 1)));
                      SubRval_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), CastRval_48, (MR_Integer) 2)));
                      succeeded = ((MR_tag((MR_Word) Var_56)) == (MR_mktag((MR_Integer) 0)));
                      if (succeeded)
                        Type_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_56, (MR_Integer) 0)));
                    }
                    if (succeeded)
                    {
                      MR_Word ShiftedSubRval_54;

                      {
                        ShiftedSubRval_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ShiftedSubRval_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                        MR_hl_field(MR_mktag(3), ShiftedSubRval_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[8])));
                        MR_hl_field(MR_mktag(3), ShiftedSubRval_54, 2) = ((MR_Box) (SubRval_53));
                        MR_hl_field(MR_mktag(3), ShiftedSubRval_54, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[10])));
                      }
                      {
                        ShiftedRval_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ShiftedRval_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), ShiftedRval_51, 1) = ((MR_Box) (Var_56));
                        MR_hl_field(MR_mktag(3), ShiftedRval_51, 2) = ((MR_Box) (ShiftedSubRval_54));
                      }
                    }
                    else
                    {
                      {
                        ShiftedRval_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ShiftedRval_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                        MR_hl_field(MR_mktag(3), ShiftedRval_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[8])));
                        MR_hl_field(MR_mktag(3), ShiftedRval_51, 2) = ((MR_Box) (CastRval_48));
                        MR_hl_field(MR_mktag(3), ShiftedRval_51, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[10])));
                      }
                    }
                  }
                  {
                    RevOrRvals0_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), RevOrRvals0_21, 0) = ((MR_Box) (ShiftedRval_51));
                    MR_hl_field(MR_mktag(1), RevOrRvals0_21, 1) = ((MR_Box) (Var_37));
                  }
                }
                ml_backend__ml_unify_gen__ml_pack_into_one_word_loop_4_p_0(RvalsTypesWidths_4, &LeftOverRvalsTypesWidths_22, RevOrRvals0_21, &RevOrRvals_71);
                mercury__list__reverse_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, RevOrRvals_71, &OrRvals_72);
                if ((OrRvals_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  OrAllRval_23 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[10]);
                }
                else
                {
                  MR_Word HeadOrRval_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), OrRvals_72, (MR_Integer) 0)));
                  MR_Word TailOrRvals_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), OrRvals_72, (MR_Integer) 1)));

                  ml_backend__ml_unify_gen__or_packed_rvals_3_p_0(HeadOrRval_73, TailOrRvals_74, &OrAllRval_23);
                }
                {
                  HeadInit_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), HeadInit_39, 0) = ((MR_Box) (OrAllRval_23));
                }
                ml_backend__ml_unify_gen__ml_pack_ground_term_args_into_word_inits_2_p_0(LeftOverRvalsTypesWidths_22, &TailInits_40);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__2_2 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadInit_39));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailInits_40));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_pack_ground_term_args_into_word_inits\'/2", (MR_String) "apw_partial_shifted");
                  return;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_pack_ground_term_args_into_word_inits\'/2", (MR_String) "apw_none_shifted");
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
      MR_Word PosWidth_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), RvalTypeWidth_8, (MR_Integer) 2)));
      MR_Word _Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), RvalTypeWidth_8, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) PosWidth_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__2_2 = HeadVar__1_1;
            *STATE_VARIABLE_RevOrRvals_4 = STATE_VARIABLE_RevOrRvals_0_3;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            *HeadVar__2_2 = HeadVar__1_1;
            *STATE_VARIABLE_RevOrRvals_4 = STATE_VARIABLE_RevOrRvals_0_3;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PosWidth_14, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *HeadVar__2_2 = HeadVar__1_1;
                *STATE_VARIABLE_RevOrRvals_4 = STATE_VARIABLE_RevOrRvals_0_3;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Shift_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), PosWidth_14, (MR_Integer) 3)));
                MR_Word Fill_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), PosWidth_14, (MR_Integer) 6)));
                MR_Word STATE_VARIABLE_RevOrRvals_35_37;
                MR_Integer ShiftInt_44 = (MR_Integer) Shift_27;
                MR_Word CastRval_45;
                MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), PosWidth_14, (MR_Integer) 1)));
                MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), PosWidth_14, (MR_Integer) 2)));
                MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), PosWidth_14, (MR_Integer) 4)));
                MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), PosWidth_14, (MR_Integer) 5)));
                MR_Word RvalConst_46;
                MR_Word next_value_of_HeadVar__1_1;
                MR_Word next_value_of_STATE_VARIABLE_RevOrRvals_0_3;

                ml_backend__ml_unify_gen__ml_cast_away_any_sign_extend_bits_3_p_0(Fill_30, Rval_12, &CastRval_45);
                succeeded = ((((MR_tag((MR_Word) Rval_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  RvalConst_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 1)));
                  if (((MR_tag((MR_Word) RvalConst_46)) == (MR_mktag((MR_Integer) 2))))
                  {
                    MR_Integer Var_52 = ((MR_Integer) (MR_hl_field(MR_mktag(2), RvalConst_46, (MR_Integer) 0)));

                    succeeded = (Var_52 == (MR_Integer) 0);
                  }
                  else
                  if (((((MR_tag((MR_Word) RvalConst_46)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalConst_46, (MR_Integer) 0)))) == (MR_Integer) 20))))
                    succeeded = MR_TRUE;
                  else
                    succeeded = MR_FALSE;
                }
                if (succeeded)
                  STATE_VARIABLE_RevOrRvals_35_37 = STATE_VARIABLE_RevOrRvals_0_3;
                else
                {
                  MR_Word ShiftedRval_48;

                  succeeded = (ShiftInt_44 == (MR_Integer) 0);
                  if (succeeded)
                    ShiftedRval_48 = CastRval_45;
                  else
                  {
                    MR_Word SubRval_50;
                    MR_Word Var_53;
                    MR_Word Type_49;

                    succeeded = ((((MR_tag((MR_Word) CastRval_45)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CastRval_45, (MR_Integer) 0)))) == (MR_Integer) 2)));
                    if (succeeded)
                    {
                      Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), CastRval_45, (MR_Integer) 1)));
                      SubRval_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), CastRval_45, (MR_Integer) 2)));
                      succeeded = ((MR_tag((MR_Word) Var_53)) == (MR_mktag((MR_Integer) 0)));
                      if (succeeded)
                        Type_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_53, (MR_Integer) 0)));
                    }
                    if (succeeded)
                    {
                      MR_Word ShiftedSubRval_51;
                      MR_Word Var_56;
                      MR_Word Var_57;

                      {
                        Var_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), Var_57, 0) = ((MR_Box) (ShiftInt_44));
                      }
                      {
                        Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (Var_57));
                      }
                      {
                        ShiftedSubRval_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ShiftedSubRval_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                        MR_hl_field(MR_mktag(3), ShiftedSubRval_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[8])));
                        MR_hl_field(MR_mktag(3), ShiftedSubRval_51, 2) = ((MR_Box) (SubRval_50));
                        MR_hl_field(MR_mktag(3), ShiftedSubRval_51, 3) = ((MR_Box) (Var_56));
                      }
                      {
                        ShiftedRval_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ShiftedRval_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), ShiftedRval_48, 1) = ((MR_Box) (Var_53));
                        MR_hl_field(MR_mktag(3), ShiftedRval_48, 2) = ((MR_Box) (ShiftedSubRval_51));
                      }
                    }
                    else
                    {
                      MR_Word Var_61;
                      MR_Word Var_62;

                      {
                        Var_62 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), Var_62, 0) = ((MR_Box) (ShiftInt_44));
                      }
                      {
                        Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (Var_62));
                      }
                      {
                        ShiftedRval_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ShiftedRval_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                        MR_hl_field(MR_mktag(3), ShiftedRval_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[8])));
                        MR_hl_field(MR_mktag(3), ShiftedRval_48, 2) = ((MR_Box) (CastRval_45));
                        MR_hl_field(MR_mktag(3), ShiftedRval_48, 3) = ((MR_Box) (Var_61));
                      }
                    }
                  }
                  {
                    STATE_VARIABLE_RevOrRvals_35_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevOrRvals_35_37, 0) = ((MR_Box) (ShiftedRval_48));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevOrRvals_35_37, 1) = ((MR_Box) (STATE_VARIABLE_RevOrRvals_0_3));
                  }
                }
                // direct tailcall eliminated
                next_value_of_HeadVar__1_1 = RvalsTypesWidths_9;
                next_value_of_STATE_VARIABLE_RevOrRvals_0_3 = STATE_VARIABLE_RevOrRvals_35_37;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                STATE_VARIABLE_RevOrRvals_0_3 = next_value_of_STATE_VARIABLE_RevOrRvals_0_3;
                continue;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word next_value_of_HeadVar__1_1 = RvalsTypesWidths_9;

                // direct tailcall eliminated
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
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
ml_backend__ml_unify_gen__ml_cast_away_any_sign_extend_bits_3_p_0(
  MR_Word Fill_4,
  MR_Word Rval0_5,
  MR_Word * Rval_6)
{
  {
    MR_bool succeeded;

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
          MR_Word SubRval_15;
          MR_Word Var_22;
          MR_Word Var_25;

          succeeded = ((((MR_tag((MR_Word) Rval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval0_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval0_5, (MR_Integer) 1)));
            SubRval_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval0_5, (MR_Integer) 2)));
            succeeded = ((MR_tag((MR_Word) Var_22)) == (MR_mktag((MR_Integer) 0)));
            if (succeeded)
            {
              Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 0)));
              succeeded = ml_backend__mlds____Unify____mlds_type_0_0((MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_6[0]), Var_25);
            }
          }
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[6])));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubRval_15));
            }
          }
          else
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[6])));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval0_5));
            }
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word SubRval_30;
          MR_Word Var_26;
          MR_Word Var_27;

          succeeded = ((((MR_tag((MR_Word) Rval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval0_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval0_5, (MR_Integer) 1)));
            SubRval_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval0_5, (MR_Integer) 2)));
            succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_mktag((MR_Integer) 0)));
            if (succeeded)
            {
              Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 0)));
              succeeded = ml_backend__mlds____Unify____mlds_type_0_0((MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_6[2]), Var_27);
            }
          }
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[13])));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubRval_30));
            }
          }
          else
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[13])));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval0_5));
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SubRval_58;
          MR_Word Var_54;
          MR_Word Var_55;

          succeeded = ((((MR_tag((MR_Word) Rval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval0_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval0_5, (MR_Integer) 1)));
            SubRval_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval0_5, (MR_Integer) 2)));
            succeeded = ((MR_tag((MR_Word) Var_54)) == (MR_mktag((MR_Integer) 0)));
            if (succeeded)
            {
              Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_54, (MR_Integer) 0)));
              succeeded = ml_backend__mlds____Unify____mlds_type_0_0((MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_6[4]), Var_55);
            }
          }
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[20])));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubRval_58));
            }
          }
          else
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[20])));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval0_5));
            }
          }
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__get_const_type_for_cons_id_5_f_0(
  MR_Word Target_7,
  MR_Word HighLevelData_8,
  MR_Word MLDS_Type_9,
  MR_Word UsesBaseClass_10,
  MR_Word ConsIdOrClosure_11)
{
  {
    MR_bool succeeded;
    MR_Word ConstType_12;

    switch (HighLevelData_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ConstType_12 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[7]);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorCategory_15;
          MR_Word Var_13;
          MR_Word Var_14;
          MR_Word Var_16;

          succeeded = (Target_7 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = ((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 1)));
              Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 2)));
              TypeCtorCategory_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 3)));
              succeeded = ((((MR_tag((MR_Word) TypeCtorCategory_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeCtorCategory_15, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
                Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeCtorCategory_15, (MR_Integer) 1)));
            }
          }
          if (succeeded)
          {
            ConstType_12 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[7]);
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
              succeeded = ((MR_tag((MR_Word) ConsIdOrClosure_11)) == (MR_mktag((MR_Integer) 0)));
              if (succeeded)
              {
                ConsId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsIdOrClosure_11, (MR_Integer) 0)));
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
                    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 3)));
                    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 2)));
                    MR_Word Var_26;

                    succeeded = ((((MR_tag((MR_Word) Var_47)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_47, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_47, (MR_Integer) 1)));
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
              MR_Word Var_38;
              MR_Word Var_39;

              succeeded = ((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                MercuryType_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 1)));
                Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 2)));
                Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 3)));
                succeeded = ((((MR_tag((MR_Word) Var_51)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_51, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_51, (MR_Integer) 1)));
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
                  Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 2)));
                  Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 3)));
                  succeeded = (Var_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                }
                if (succeeded)
                {
                  ConstType_12 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[7]);
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
                    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 2)));
                    Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 3)));
                    succeeded = (Var_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  if (succeeded)
                  {
                    ConstType_12 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[7]);
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

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__cons_id_arg_types_and_widths__3007__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0_1(
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
ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0(
  MR_Word Info_6,
  MR_Word VarType_7,
  MR_Word ConsIdOrClosure_8,
  MR_Word ArgVars_9,
  MR_Word * ArgVarsTypesWidths_10)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) ConsIdOrClosure_8)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Integer InitOffset_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ConsIdOrClosure_8, (MR_Integer) 0)));
      MR_Word Var_15;

      Var_15 = ml_backend__ml_code_util__ml_make_boxed_type_0_f_0();
      ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_101_99_105_102_105_101_100_95_97_114_103_95_116_121_112_101_115_95_97_110_100_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_4_p_0(Var_15, InitOffset_14, ArgVars_9, ArgVarsTypesWidths_10);
    }
    else
    {
      MR_Word TypeInfo_20_20;
      MR_Word ConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsIdOrClosure_8, (MR_Integer) 0)));
      MR_Word ModuleInfo_12;
      MR_Word VarTypes_13;
      MR_Word Var_16;
      MR_Word Var_29;
      MR_Integer Var_30;
      MR_Word Var_31;

      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_6, &ModuleInfo_12);
      ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(Info_6, &VarTypes_13);
      {
        Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (VarTypes_13));
      }
      TypeInfo_20_20 = (MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2];
      succeeded = ((((MR_tag((MR_Word) ConsId_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_11, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_11, (MR_Integer) 1)));
        Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_11, (MR_Integer) 2)));
        Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_11, (MR_Integer) 3)));
        succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(VarType_7);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word ConsRepnDefn_32;

        succeeded = check_hlds__type_util__get_cons_repn_defn_3_p_0(ModuleInfo_12, ConsId_11, &ConsRepnDefn_32);
        if (succeeded)
        {
          MR_Word ConsArgRepns_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_32, (MR_Integer) 3)));
          MR_Integer NumExtraArgs_34;
          MR_Integer Var_44;
          MR_Integer Var_45;
          MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_32, (MR_Integer) 0)));
          MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_32, (MR_Integer) 1)));
          MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_32, (MR_Integer) 2)));
          MR_Integer Var_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ConsRepnDefn_32, (MR_Integer) 4)));
          MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_32, (MR_Integer) 5)));

          Var_44 = mercury__list__length_1_f_0(TypeInfo_20_20, ArgVars_9);
          Var_45 = mercury__list__length_1_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0, ConsArgRepns_33);
          NumExtraArgs_34 = (MR_Integer) ((MR_Unsigned) Var_44 - (MR_Unsigned) Var_45);
          succeeded = (NumExtraArgs_34 == (MR_Integer) 0);
          if (succeeded)
            ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_114_103_115_95_116_121_112_101_115_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(ArgVars_9, ConsArgRepns_33, ArgVarsTypesWidths_10);
          else
          {
            MR_Word ExtraArgs_35;
            MR_Word NonExtraArgs_36;
            MR_Integer InitOffset_40;
            MR_Word ExtraArgsTypesWidths_41;
            MR_Word NonExtraArgsTypesWidths_42;
            MR_Word AddedBy_39;
            MR_Word Var_50;
            MR_Word Var_62;
            MR_Word Var_63;
            MR_Word Var_64;
            MR_Integer Var_65;
            MR_Word Var_66;
            MR_Integer Var_37;
            MR_Integer Var_38;

            mercury__require__expect_3_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_3[2], (MR_String) "predicate \140ml_backend.ml_unify_gen.cons_id_arg_types_and_widths\'/7", (MR_String) "extra args in static struct");
            mercury__list__det_split_list_4_p_0(TypeInfo_20_20, NumExtraArgs_34, ArgVars_9, &ExtraArgs_35, &NonExtraArgs_36);
            Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_32, (MR_Integer) 0)));
            Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_32, (MR_Integer) 1)));
            Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_32, (MR_Integer) 2)));
            Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_32, (MR_Integer) 3)));
            Var_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ConsRepnDefn_32, (MR_Integer) 4)));
            Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_32, (MR_Integer) 5)));
            succeeded = ((((MR_tag((MR_Word) Var_50)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_50, (MR_Integer) 0)))) == (MR_Integer) 13)));
            if (succeeded)
            {
              Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_50, (MR_Integer) 1)));
              Var_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_50, (MR_Integer) 2)));
              AddedBy_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_50, (MR_Integer) 3)));
              succeeded = (AddedBy_39 == (MR_Integer) 0);
            }
            if (succeeded)
              InitOffset_40 = (MR_Integer) 1;
            else
              InitOffset_40 = (MR_Integer) 0;
            ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_116_121_112_101_95_97_110_100_95_97_108_108_111_99_97_116_101_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_4_p_0(Var_16, InitOffset_40, ExtraArgs_35, &ExtraArgsTypesWidths_41);
            ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_114_103_115_95_116_121_112_101_115_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(NonExtraArgs_36, ConsArgRepns_33, &NonExtraArgsTypesWidths_42);
            *ArgVarsTypesWidths_10 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[3], ExtraArgsTypesWidths_41, NonExtraArgsTypesWidths_42);
          }
        }
        else
        {
          MR_Word Var_43;

          succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(VarType_7, &Var_43);
          if (succeeded)
          {
            MR_Word Var_51;

            Var_51 = ml_backend__ml_code_util__ml_make_boxed_type_0_f_0();
            ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_101_99_105_102_105_101_100_95_97_114_103_95_116_121_112_101_115_95_97_110_100_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_4_p_0(Var_51, (MR_Integer) 0, ArgVars_9, ArgVarsTypesWidths_10);
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
        ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_116_121_112_101_95_97_110_100_95_97_108_108_111_99_97_116_101_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_4_p_0(Var_16, (MR_Integer) 0, ArgVars_9, ArgVarsTypesWidths_10);
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_101_99_105_102_105_101_100_95_97_114_103_95_116_121_112_101_115_95_97_110_100_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word Type_1,
  MR_Integer CurOffset_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Box Arg_9 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
    MR_Word Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word ArgTypeWidth_11;
    MR_Word ArgsTypesWidths_12;
    MR_Word PosWidth_13;
    MR_Word Var_14 = (MR_Word) CurOffset_2;
    MR_Word Var_15 = (MR_Word) CurOffset_2;
    MR_Integer Var_16;

    {
      PosWidth_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PosWidth_13, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(1), PosWidth_13, 1) = ((MR_Box) (Var_15));
    }
    {
      ArgTypeWidth_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ArgTypeWidth_11, 0) = Arg_9;
      MR_hl_field(MR_mktag(0), ArgTypeWidth_11, 1) = ((MR_Box) (Type_1));
      MR_hl_field(MR_mktag(0), ArgTypeWidth_11, 2) = ((MR_Box) (PosWidth_13));
    }
    Var_16 = (MR_Integer) ((MR_Unsigned) CurOffset_2 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_101_99_105_102_105_101_100_95_97_114_103_95_116_121_112_101_115_95_97_110_100_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_4_p_0(Type_1, Var_16, Args_10, &ArgsTypesWidths_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgTypeWidth_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgsTypesWidths_12));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_116_121_112_101_95_97_110_100_95_97_108_108_111_99_97_116_101_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word ArgToType_1,
  MR_Integer CurOffset_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Box Arg_9 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
    MR_Word Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word ArgTypeWidth_11;
    MR_Word ArgsTypesWidths_12;
    MR_Word PosWidth_13;
    MR_Word Var_14 = (MR_Word) CurOffset_2;
    MR_Word Var_15 = (MR_Word) CurOffset_2;
    MR_Word Var_16;
    MR_Integer Var_17;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_Box conv1_Var_16;

    {
      PosWidth_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PosWidth_13, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(1), PosWidth_13, 1) = ((MR_Box) (Var_15));
    }
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), ArgToType_1, (MR_Integer) 1)));
    conv1_Var_16 = func_0(((MR_Box) ArgToType_1), Arg_9);
    Var_16 = ((MR_Word) conv1_Var_16);
    {
      ArgTypeWidth_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ArgTypeWidth_11, 0) = Arg_9;
      MR_hl_field(MR_mktag(0), ArgTypeWidth_11, 1) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), ArgTypeWidth_11, 2) = ((MR_Box) (PosWidth_13));
    }
    Var_17 = (MR_Integer) ((MR_Unsigned) CurOffset_2 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_116_121_112_101_95_97_110_100_95_97_108_108_111_99_97_116_101_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_4_p_0(ArgToType_1, Var_17, Args_10, &ArgsTypesWidths_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgTypeWidth_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgsTypesWidths_12));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_box_extra_const_rval_list_lld__1058__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
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
      MR_Word PosWidth_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), RvalTypeWidth_14, (MR_Integer) 2)));
      MR_Word Width_22;
      MR_Word BoxedRval_23;
      MR_Word Var_26;
      MR_Word STATE_VARIABLE_GlobalData_30_30;

      Width_22 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(PosWidth_21);
      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_box_extra_const_rval_list_lld_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (Width_22));
        MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) ((MR_Integer) 2));
      }
      mercury__require__expect_3_p_0(Var_26, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_box_extra_const_rval_list_lld\'/6", (MR_String) "Width != aw_full_word");
      ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_1, Context_2, MLDS_Type_20, Width_22, Rval_19, &BoxedRval_23, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_30_30);
      {
        BoxedRvalTypeWidth_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 0) = ((MR_Box) (BoxedRval_23));
        MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 1) = ((MR_Box) (MLDS_Type_20));
        MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 2) = ((MR_Box) (PosWidth_21));
      }
      ml_backend__ml_unify_gen__ml_gen_box_extra_const_rval_list_lld_6_p_0(ModuleInfo_1, Context_2, RvalsTypesWidths_15, &BoxedRvalsTypesWidths_17, STATE_VARIABLE_GlobalData_30_30, STATE_VARIABLE_GlobalData_6);
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
    MR_Word ArgPosWidth_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgVarTypeWidth_14, (MR_Integer) 2)));
    MR_Word GroundTerm_22;
    MR_Word Rval_23;
    MR_Word MLDS_Type_25;
    MR_Word ModuleInfo_26;
    MR_Word Width_27;
    MR_Word BoxedRval_28;
    MR_Word STATE_VARIABLE_GlobalData_31_31;
    MR_Word _ArgVarType_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgVarTypeWidth_14, (MR_Integer) 1)));
    MR_Word _MercuryType_24;

    ml_backend__ml_gen_info__ml_gen_info_lookup_const_var_3_p_0(Info_1, ArgVar_19, &GroundTerm_22);
    Rval_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_22, (MR_Integer) 0)));
    _MercuryType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_22, (MR_Integer) 1)));
    MLDS_Type_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_22, (MR_Integer) 2)));
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_1, &ModuleInfo_26);
    Width_27 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_21);
    ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_26, Context_2, MLDS_Type_25, Width_27, Rval_23, &BoxedRval_28, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_31_31);
    {
      BoxedRvalTypeWidth_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 0) = ((MR_Box) (BoxedRval_28));
      MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 2) = ((MR_Box) (ArgPosWidth_21));
    }
    ml_backend__ml_unify_gen__ml_gen_box_const_rval_list_lld_6_p_0(Info_1, Context_2, ArgVarsTypesWidths_15, &BoxedRvalsTypesWidths_17, STATE_VARIABLE_GlobalData_31_31, STATE_VARIABLE_GlobalData_6);
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
      MR_Word ConsArgPosWidth_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgVarTypeWidth_14, (MR_Integer) 2)));
      MR_Word ArgType_22;
      MR_Word ArgRval_23;
      MR_Word ModuleInfo_24;
      MR_Word ConsWidth_26;
      MR_Word FieldRval_28;
      MR_Word STATE_VARIABLE_GlobalData_31_31;
      MR_Word GroundTerm_37;
      MR_Word Var_38;
      MR_Word Var_39;

      ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_1, ArgVar_19, &ArgType_22);
      ml_backend__ml_gen_info__ml_gen_info_lookup_const_var_3_p_0(Info_1, ArgVar_19, &GroundTerm_37);
      ArgRval_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_37, (MR_Integer) 0)));
      Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_37, (MR_Integer) 1)));
      Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_37, (MR_Integer) 2)));
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_1, &ModuleInfo_24);
      ConsWidth_26 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ConsArgPosWidth_21);
      succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ModuleInfo_24, ConsArgType_20, ConsWidth_26);
      if (succeeded)
      {
        MR_Word TypeCtorInfo_15_49 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
        MR_Word TypeVarSet0_45;
        MR_Word MLDS_ArgType_61;
        MR_Word TypeVar_46;
        MR_Word _TypeVarSet_47;

        mercury__varset__init_1_p_0(TypeCtorInfo_15_49, &TypeVarSet0_45);
        mercury__varset__new_var_3_p_0(TypeCtorInfo_15_49, &TypeVar_46, TypeVarSet0_45, &_TypeVarSet_47);
        MLDS_ArgType_61 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_24, ArgType_22);
        ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_24, Context_2, MLDS_ArgType_61, (MR_Integer) 2, ArgRval_23, &FieldRval_28, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_31_31);
      }
      else
        switch (MR_tag((MR_Word) ConsArgType_20)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word MLDS_ArgType_81;

              MLDS_ArgType_81 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_24, ArgType_22);
              ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_24, Context_2, MLDS_ArgType_81, (MR_Integer) 2, ArgRval_23, &FieldRval_28, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_31_31);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_24, ArgType_22, ConsArgType_20, (MR_Integer) 0, ArgRval_23, &FieldRval_28);
              STATE_VARIABLE_GlobalData_31_31 = STATE_VARIABLE_GlobalData_0_5;
            }
            break;
          case (MR_Integer) 3:
            {
              ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_24, ArgType_22, ConsArgType_20, (MR_Integer) 0, ArgRval_23, &FieldRval_28);
              STATE_VARIABLE_GlobalData_31_31 = STATE_VARIABLE_GlobalData_0_5;
            }
            break;
        }
      {
        FieldRvalTypeWidth_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FieldRvalTypeWidth_16, 0) = ((MR_Box) (FieldRval_28));
        MR_hl_field(MR_mktag(0), FieldRvalTypeWidth_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
        MR_hl_field(MR_mktag(0), FieldRvalTypeWidth_16, 2) = ((MR_Box) (ConsArgPosWidth_21));
      }
      ml_backend__ml_unify_gen__ml_gen_box_or_unbox_const_rval_list_hld_6_p_0(Info_1, Context_2, ArgVarsTypesWidths_15, &FieldRvalsTypesWidths_17, STATE_VARIABLE_GlobalData_31_31, STATE_VARIABLE_GlobalData_6);
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
ml_backend__ml_unify_gen____Unify____cons_id_or_closure_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unify_gen____Unify____cons_id_or_closure_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____cons_id_or_closure_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_unify_gen____Compare____cons_id_or_closure_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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
	MR_register_type_ctor_info(&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_cons_id_or_closure_0);
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
