/*
** Automatically generated from `ml_unify_gen.m'
** by the Mercury compiler,
** version rotd-2018-05-24
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

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__pti_arg_type_and_width_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

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

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_functor_desc_assign_dir_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_functor_desc_assign_dir_0_1;

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_functor_desc_assign_dir_0_2;

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_functor_desc_assign_dir_0_3;

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_value_ordered_assign_dir_0[4];

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_name_ordered_assign_dir_0[4];

static const MR_Integer ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_assign_dir_0[4];

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_cons_id_or_closure_0_0[1];

static const MR_DuFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_cons_id_or_closure_0_0;

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_cons_id_or_closure_0_1[1];

static const MR_DuFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_cons_id_or_closure_0_1;

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_cons_id_or_closure_0_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_cons_id_or_closure_0_1[1];

static const MR_DuPtagLayout ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_ptag_ordered_cons_id_or_closure_0[2];

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_name_ordered_cons_id_or_closure_0[2];

static const MR_Integer ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_cons_id_or_closure_0[2];

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_field_gen_0_0[4];

static const MR_DuFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_field_gen_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_field_gen_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_ptag_ordered_field_gen_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_name_ordered_field_gen_0[1];

static const MR_Integer ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_field_gen_0[1];

static const MR_Integer ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_field_offset_0[1];

static const MR_NotagFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__notag_functor_desc_field_offset_0;

static const MR_DuFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_field_via_0_0;

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_field_via_0_1[2];

static const MR_DuFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_field_via_0_1;

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_field_via_0_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_field_via_0_1[1];

static const MR_DuPtagLayout ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_ptag_ordered_field_via_0[2];

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_name_ordered_field_via_0[2];

static const MR_Integer ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_field_via_0[2];

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
ml_backend__ml_unify_gen__IntroducedFrom__func__construct_static_ground_term__2994__1_1_f_0(
  MR_Word LambdaHeadVar__1_43);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__cons_id_arg_types_and_widths__2903__2_2_p_0(
  MR_Word MayHaveExtraArgs_10,
  MR_Word HeadVar__2_35);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__cons_id_arg_types_and_widths__2903__1_2_p_0(
  MR_Word MayHaveExtraArgs_10,
  MR_Word HeadVar__2_35);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_const_static_compound__2647__1_1_f_0(
  MR_Word LambdaHeadVar__1_38);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_109_108_95_103_101_110_95_99_111_110_115_116_95_115_116_97_116_105_99_95_99_111_109_112_111_117_110_100_95_95_50_54_52_55_95_95_49_95_95_91_49_93_95_48_1_f_0(void);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_const_struct_tag__2600__1_2_p_0(
  MR_Word AddedBy_35,
  MR_Word HeadVar__2_76);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_const_struct_tag__2584__1_2_p_0(
  MR_Word AddedBy_35,
  MR_Word HeadVar__2_80);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2322__6_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_188);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2392__1_2_p_0(
  MR_Word AddedBy_71,
  MR_Word HeadVar__2_82);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2377__1_2_p_0(
  MR_Word AddedBy_71,
  MR_Word HeadVar__2_86);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2322__5_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_175);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2322__4_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_164);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2322__3_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_153);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2322__2_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_142);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2322__1_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_116);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__decide_field_gen__1586__1_2_p_0(
  MR_Word TypeCtor_21,
  MR_Word VarTypeCtor_24);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unify_args_for_reuse__1485__1_2_p_0(
  MR_Word TakeAddr_4,
  MR_Word HeadVar__2_23);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_extra_arg_assigns__1249__1_2_p_0(
  MR_Word HighLevelData_28,
  MR_Word HeadVar__2_40);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_calc_field_offset__1229__1_1_f_0(
  MR_Word LambdaHeadVar__1_18);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1188__1_2_p_0(
  MR_Word Offset_94,
  MR_Word HeadVar__2_132);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1179__1_2_p_0(
  MR_Word ArgWidth_72,
  MR_Word HeadVar__2_127);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1168__2_2_p_0(
  MR_Integer CurOffset_77,
  MR_Integer CellOffsetInt_177);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1160__1_2_p_0(
  MR_Integer CurOffset_77,
  MR_Integer CellOffsetInt_151);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1168__1_2_p_0(
  MR_Integer CurOffset_77,
  MR_Integer CellOffsetInt_153);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1148__1_2_p_0(
  MR_Integer CurOffset_77,
  MR_Integer CellOffsetInt_78);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1154__1_2_p_0(
  MR_Integer CurOffset_77,
  MR_Integer CellOffsetInt_149);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_box_extra_const_rval_list_lld__1056__1_2_p_0(
  MR_Word Width_22,
  MR_Word HeadVar__2_29);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__745__1_2_p_0(
  MR_Integer PrimaryTag_42,
  MR_Integer LambdaHeadVar__1_77);

static void MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__726__1_3_p_0(
  MR_Word STATE_VARIABLE_Info_0_69,
  MR_Word LambdaHeadVar__1_74,
  MR_Integer * LambdaHeadVar__2_75);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_new_object_statically__689__1_1_f_0(
  MR_Word LambdaHeadVar__1_48);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_new_object_dynamically__628__1_1_f_0(
  MR_Word LambdaHeadVar__1_70);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_compound__512__1_2_p_0(
  MR_Word AddedBy_30,
  MR_Word HeadVar__2_44);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_compound__497__1_2_p_0(
  MR_Word AddedBy_30,
  MR_Word HeadVar__2_48);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object__545__1_2_p_0(
  MR_Word TakeAddr_23,
  MR_Word HeadVar__2_45);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object__534__1_2_p_0(
  MR_Word ExplicitSecTag_18,
  MR_Word HeadVar__2_38);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__200__1_2_p_0(
  MR_Word CodeModel_8,
  MR_Word HeadVar__2_73);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__232__1_2_p_0(
  MR_Word MaybeSizeProfInfo_37,
  MR_Word HeadVar__2_68);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__220__1_2_p_0(
  MR_Word CodeModel_8,
  MR_Word HeadVar__2_64);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__168__1_2_p_0(
  MR_Word CodeModel_8,
  MR_Word HeadVar__2_85);

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
ml_backend__ml_unify_gen____Compare____field_gen_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____field_via_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____field_gen_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____field_via_0_0(
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
ml_backend__ml_unify_gen____Compare____assign_dir_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____assign_dir_0_0(
  MR_Word HeadVar__2_1,
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
ml_backend__ml_unify_gen__ml_gen_const_struct_arg_7_p_0(
  MR_Word Info_8,
  MR_Word ConstStructMap_9,
  MR_Word ConstArg_10,
  MR_Word PosWidth_11,
  MR_Word * RvalTypeWidth_12,
  MR_Word STATE_VARIABLE_GlobalData_0_25,
  MR_Word * STATE_VARIABLE_GlobalData_26);

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
  MR_Word ConsTag_7,
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
  MR_Word STATE_VARIABLE_Info_0_61,
  MR_Word * STATE_VARIABLE_Info_62);

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
ml_backend__ml_unify_gen__ml_gen_unify_args_10_p_0(
  MR_Word FieldGen_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word CurOffset_4,
  MR_Integer CurArgNum_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_Stmts_0_7,
  MR_Word * STATE_VARIABLE_Stmts_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_construct_10_p_0(
  MR_Word Var_11,
  MR_Word ConsId_12,
  MR_Word ArgVars_13,
  MR_Word ArgModes_14,
  MR_Word TakeAddr_15,
  MR_Word HowToConstruct_16,
  MR_Word Context_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_101,
  MR_Word * STATE_VARIABLE_Info_102);

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
  MR_Word ConsTag_6,
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
ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_14_p_0(
  MR_Word ConsIdOrClosure_15,
  MR_Word MaybeCtorName_16,
  MR_Integer Ptag_17,
  MR_Word ExplicitSecTag_18,
  MR_Word Var_19,
  MR_Word ExtraRvalsTypesWidths_20,
  MR_Word ArgVars_21,
  MR_Word ArgModes_22,
  MR_Word TakeAddr_23,
  MR_Word CellToReuse_24,
  MR_Word Context_25,
  MR_Word * Stmts_26,
  MR_Word STATE_VARIABLE_Info_0_69,
  MR_Word * STATE_VARIABLE_Info_70);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_cons_id_to_tag_3_p_0(
  MR_Word Info_4,
  MR_Word ConsId_5,
  MR_Word * ConsTag_6);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__decide_field_gen_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__decide_field_gen_6_p_0(
  MR_Word Info_7,
  MR_Word VarLval_8,
  MR_Word VarType_9,
  MR_Word ConsId_10,
  MR_Word ConsTag_11,
  MR_Word * FieldGen_12);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unify_args_for_reuse_11_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unify_args_for_reuse_11_p_0(
  MR_Word FieldGen_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word TakeAddr_4,
  MR_Word CurOffset_5,
  MR_Integer CurArgNum_6,
  MR_Word Context_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_next_field_offset_4_p_0(
  MR_Word CurArg_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unify_arg_10_p_0(
  MR_Word FieldGen_11,
  MR_Word HeadVar__2_2,
  MR_Word Mode_14,
  MR_Word Offset_15,
  MR_Integer ArgNum_16,
  MR_Word Context_17,
  MR_Word STATE_VARIABLE_Stmts_0_41,
  MR_Word * STATE_VARIABLE_Stmts_42,
  MR_Word STATE_VARIABLE_Info_0_43,
  MR_Word * STATE_VARIABLE_Info_44);

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
  MR_Word STATE_VARIABLE_Stmts_0_23,
  MR_Word * STATE_VARIABLE_Stmts_24);

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
ml_backend__ml_unify_gen__ml_gen_sub_unify_assign_right_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ArgLval_11,
  MR_Word ArgType_12,
  MR_Word FieldLval_13,
  MR_Word FieldType_14,
  MR_Word FieldWidth_15,
  MR_Word Context_16,
  MR_Word STATE_VARIABLE_Stmts_0_56,
  MR_Word * STATE_VARIABLE_Stmts_57);

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
ml_backend__ml_unify_gen__ml_gen_take_addr_of_arg_4_p_0(
  MR_Word Info_5,
  MR_Word ArgVarRepn_6,
  MR_Word CurOffset_7,
  MR_Word * TakeAddrInfo_8);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_field_names_and_types_6_p_0(
  MR_Word Info_7,
  MR_Word Type_8,
  MR_Word ConsId_9,
  MR_Word InitOffset_10,
  MR_Word ArgVars_11,
  MR_Word * ArgVarRepns_12);

static void MR_CALL 
ml_backend__ml_unify_gen__allocate_consecutive_full_word_ctor_arg_repns_lookup_4_p_0(
  MR_Word Info_1,
  MR_Integer CurOffset_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ml_backend__ml_unify_gen__allocate_consecutive_full_word_ctor_arg_repns_boxed_3_p_0(
  MR_Integer CurOffset_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_tag_initial_offset_and_argnum_4_p_0(
  MR_Word ConsTag_5,
  MR_Integer * Ptag_6,
  MR_Word * InitOffset_7,
  MR_Integer * ArgNum_8);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_extra_arg_assigns_9_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_extra_arg_assigns_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_extra_arg_assigns_9_p_0(
  MR_Word VarLval_1,
  MR_Word MLDS_VarType_2,
  MR_Word MaybePrimaryTag_3,
  MR_Integer CurOffset_4,
  MR_Word HeadVar__5_5,
  MR_Word Context_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_gen_mktag_1_f_0(
  MR_Integer Ptag_3);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_10_p_0(
  MR_Word ConsIdOrClosure_11,
  MR_Word MaybeCtorName_12,
  MR_Integer Ptag_13,
  MR_Word Var_14,
  MR_Word ExtraRvalsTypesWidths_15,
  MR_Word ArgVars_16,
  MR_Word Context_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42);

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

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__get_const_type_for_cons_id_5_f_0(
  MR_Word Target_7,
  MR_Word HighLevelData_8,
  MR_Word MLDS_Type_9,
  MR_Word UsesBaseClass_10,
  MR_Word ConsIdOrClosure_11);

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

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_dynamically_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_dynamically_13_p_0(
  MR_Word ConsIdOrClosure_14,
  MR_Word MaybeCtorName_15,
  MR_Integer Ptag_16,
  MR_Word ExplicitSecTag_17,
  MR_Word Var_18,
  MR_Word ExtraRvalsTypesWidths_19,
  MR_Word ArgVars_20,
  MR_Word ArgModes_21,
  MR_Word TakeAddr_22,
  MR_Word Context_23,
  MR_Word * Stmts_24,
  MR_Word STATE_VARIABLE_Info_0_63,
  MR_Word * STATE_VARIABLE_Info_64);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_expand_or_pack_into_words_2_p_0(
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
ml_backend__ml_unify_gen__maybe_shift_and_accumulate_or_rval_5_p_0(
  MR_Word Rval_6,
  MR_Word Shift_7,
  MR_Word Fill_8,
  MR_Word STATE_VARIABLE_RevOrRvals_0_18,
  MR_Word * STATE_VARIABLE_RevOrRvals_19);

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
ml_backend__ml_unify_gen__ml_type_as_field_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word HighLevelData_7,
  MR_Word FieldType_8,
  MR_Word FieldWidth_9,
  MR_Word * BoxedFieldType_10);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_field_take_address_assigns_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CellLval_2,
  MR_Word CellType_3,
  MR_Word MaybePtag_4,
  MR_Word Context_5,
  MR_Word Info_6,
  MR_Word * HeadVar__7_7);

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
ml_backend__ml_unify_gen____Unify____assign_dir_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____assign_dir_0_0_10001(
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
ml_backend__ml_unify_gen____Unify____field_gen_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____field_gen_0_0_10001(
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
ml_backend__ml_unify_gen____Unify____field_via_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____field_via_0_0_10001(
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


static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_1[27][2];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_2[8][3];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_3[17][5];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_4[2][6];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_5[3][1];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_6[1][4];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_7[1][9];




static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_1[27][2] = {
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
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 7 */
  {
    ((MR_Box) (((MR_Box) ((MR_Integer) 0)))),
    ((MR_Box) (((MR_Box) ((MR_Integer) 0))))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 20)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[10])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[0])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 4))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 6))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 8))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 5))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 7))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 9))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 26 */
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
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_1[2])),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[0])),
    ((MR_Box) (ml_backend__ml_unify_gen__ml_calc_field_offset_3_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[6])),
    ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_dynamically_13_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[7])),
    ((MR_Box) (ml_backend__ml_unify_gen__construct_static_ground_term_14_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[8])),
    ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_statically_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[16])),
    ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_3[17][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__pti_arg_type_and_width_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_field_offset_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_field_offset_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_may_have_extra_args_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_may_have_extra_args_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[4])),
    ((MR_Box) (ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_mlds_rval_type_and_width_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_typed_rval_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_mlds_rval_type_and_width_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_sectag_added_by_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_sectag_added_by_0))
  },
  /* row 13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0))
  },
  /* row 14 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0))
  },
  /* row 15 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 16 */
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

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_5[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[12])))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_6[1][4] = {
  /* row 0 */
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
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__pti_arg_type_and_width_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_arg_type_and_width_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__ml_unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ml_backend__ml_unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_term_size_value_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__ml_unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__ti_arg_type_and_width_1hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_arg_type_and_width_1,
  {
    (MR_TypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0)
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
  {     (MR_PseudoTypeInfo) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__ti_arg_type_and_width_1hlds__const_struct__type_ctor_info_const_struct_arg_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen____vpti_func_2__pseudo_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
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
  {     (MR_PseudoTypeInfo) (&ml_backend__ml_unify_gen____vpti_func_2__pseudo_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_arg_type_and_width_1_0[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0)
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
    (MR_TypeInfo) (&ml_backend__ml_unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
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
  {     (MR_PseudoTypeInfo) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__ti_arg_type_and_width_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_functor_desc_assign_dir_0_0 = {
  (MR_String) "assign_nondummy_left",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_functor_desc_assign_dir_0_1 = {
  (MR_String) "assign_nondummy_right",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_functor_desc_assign_dir_0_2 = {
  (MR_String) "assign_nondummy_unused",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_functor_desc_assign_dir_0_3 = {
  (MR_String) "assign_dummy",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_value_ordered_assign_dir_0[4] = {
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_functor_desc_assign_dir_0_0,
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_functor_desc_assign_dir_0_1,
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_functor_desc_assign_dir_0_2,
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_functor_desc_assign_dir_0_3
};

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_name_ordered_assign_dir_0[4] = {
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_functor_desc_assign_dir_0_3,
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_functor_desc_assign_dir_0_0,
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_functor_desc_assign_dir_0_1,
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_functor_desc_assign_dir_0_2
};

static const MR_Integer ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_assign_dir_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_assign_dir_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_unify_gen____Unify____assign_dir_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen____Compare____assign_dir_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen",
  (MR_String) "assign_dir",
  {     ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_name_ordered_assign_dir_0 },
  {     ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_value_ordered_assign_dir_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_assign_dir_0
};

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_cons_id_or_closure_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)
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
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
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

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_field_gen_0_0[4] = {
  (MR_PseudoTypeInfo) (&ml_backend__ml_unify_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_field_via_0)
};

static const MR_DuFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_field_gen_0_0 = {
  (MR_String) "field_gen",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_field_gen_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_field_gen_0_0[1] = {
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_field_gen_0_0
};

static const MR_DuPtagLayout ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_ptag_ordered_field_gen_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_field_gen_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_name_ordered_field_gen_0[1] = {
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_field_gen_0_0
};

static const MR_Integer ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_field_gen_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_field_gen_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_unify_gen____Unify____field_gen_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen____Compare____field_gen_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen",
  (MR_String) "field_gen",
  {     ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_name_ordered_field_gen_0 },
  {     ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_ptag_ordered_field_gen_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_field_gen_0
};

static const MR_Integer ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_field_offset_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__notag_functor_desc_field_offset_0 = {
  (MR_String) "offset",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
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

static const MR_DuFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_field_via_0_0 = {
  (MR_String) "field_via_offset",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_field_via_0_1[2] = {
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)
};

static const MR_DuFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_field_via_0_1 = {
  (MR_String) "field_via_name",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_field_via_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_field_via_0_0[1] = {
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_field_via_0_0
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_field_via_0_1[1] = {
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_field_via_0_1
};

static const MR_DuPtagLayout ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_ptag_ordered_field_via_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_field_via_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_field_via_0_1
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_name_ordered_field_via_0[2] = {
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_field_via_0_1,
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_field_via_0_0
};

static const MR_Integer ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_field_via_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_field_via_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_unify_gen____Unify____field_via_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen____Compare____field_via_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen",
  (MR_String) "field_via",
  {     ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_name_ordered_field_via_0 },
  {     ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_ptag_ordered_field_via_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_field_via_0
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
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_target_lang_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
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
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0)
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
  (MR_PseudoTypeInfo) (&ml_backend__ml_unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_field_offset_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)
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
ml_backend__ml_unify_gen__IntroducedFrom__func__construct_static_ground_term__2994__1_1_f_0(
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
ml_backend__ml_unify_gen__IntroducedFrom__pred__cons_id_arg_types_and_widths__2903__2_2_p_0(
  MR_Word MayHaveExtraArgs_10,
  MR_Word HeadVar__2_35)
{
  {
    MR_bool succeeded = (MayHaveExtraArgs_10 == HeadVar__2_35);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__cons_id_arg_types_and_widths__2903__1_2_p_0(
  MR_Word MayHaveExtraArgs_10,
  MR_Word HeadVar__2_35)
{
  {
    MR_bool succeeded = (MayHaveExtraArgs_10 == HeadVar__2_35);

    return succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_const_static_compound__2647__1_1_f_0(
  MR_Word LambdaHeadVar__1_38)
{
  {
    MR_Word LambdaHeadVar__2_39;

    LambdaHeadVar__2_39 = ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_109_108_95_103_101_110_95_99_111_110_115_116_95_115_116_97_116_105_99_95_99_111_109_112_111_117_110_100_95_95_50_54_52_55_95_95_49_95_95_91_49_93_95_48_1_f_0();
    return LambdaHeadVar__2_39;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_109_108_95_103_101_110_95_99_111_110_115_116_95_115_116_97_116_105_99_95_99_111_109_112_111_117_110_100_95_95_50_54_52_55_95_95_49_95_95_91_49_93_95_48_1_f_0(void)
{
  {
    MR_Word LambdaHeadVar__2_39;

    LambdaHeadVar__2_39 = parse_tree__builtin_lib_types__void_type_0_f_0();
    return LambdaHeadVar__2_39;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_const_struct_tag__2600__1_2_p_0(
  MR_Word AddedBy_35,
  MR_Word HeadVar__2_76)
{
  {
    MR_bool succeeded = (AddedBy_35 == HeadVar__2_76);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_const_struct_tag__2584__1_2_p_0(
  MR_Word AddedBy_35,
  MR_Word HeadVar__2_80)
{
  {
    MR_bool succeeded = (AddedBy_35 == HeadVar__2_80);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2322__6_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_188)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[4]), ((MR_Box) (ArgVars_25)), ((MR_Box) (HeadVar__2_188)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2392__1_2_p_0(
  MR_Word AddedBy_71,
  MR_Word HeadVar__2_82)
{
  {
    MR_bool succeeded = (AddedBy_71 == HeadVar__2_82);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2377__1_2_p_0(
  MR_Word AddedBy_71,
  MR_Word HeadVar__2_86)
{
  {
    MR_bool succeeded = (AddedBy_71 == HeadVar__2_86);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2322__5_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_175)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[4]), ((MR_Box) (ArgVars_25)), ((MR_Box) (HeadVar__2_175)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2322__4_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_164)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[4]), ((MR_Box) (ArgVars_25)), ((MR_Box) (HeadVar__2_164)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2322__3_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_153)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[4]), ((MR_Box) (ArgVars_25)), ((MR_Box) (HeadVar__2_153)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2322__2_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_142)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[4]), ((MR_Box) (ArgVars_25)), ((MR_Box) (HeadVar__2_142)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2322__1_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_116)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[4]), ((MR_Box) (ArgVars_25)), ((MR_Box) (HeadVar__2_116)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__decide_field_gen__1586__1_2_p_0(
  MR_Word TypeCtor_21,
  MR_Word VarTypeCtor_24)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor_21, VarTypeCtor_24);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unify_args_for_reuse__1485__1_2_p_0(
  MR_Word TakeAddr_4,
  MR_Word HeadVar__2_23)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[1]), ((MR_Box) (TakeAddr_4)), ((MR_Box) (HeadVar__2_23)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_extra_arg_assigns__1249__1_2_p_0(
  MR_Word HighLevelData_28,
  MR_Word HeadVar__2_40)
{
  {
    MR_bool succeeded = (HighLevelData_28 == HeadVar__2_40);

    return succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_calc_field_offset__1229__1_1_f_0(
  MR_Word LambdaHeadVar__1_18)
{
  {
    MR_Word LambdaHeadVar__2_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_18, (MR_Integer) 2))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_18, (MR_Integer) 0))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_18, (MR_Integer) 1))));

    return LambdaHeadVar__2_19;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1188__1_2_p_0(
  MR_Word Offset_94,
  MR_Word HeadVar__2_132)
{
  {
    MR_bool succeeded;
    MR_Integer Var_181 = (MR_Integer) (Offset_94);
    MR_Integer Var_182 = (MR_Integer) (HeadVar__2_132);

    succeeded = (Var_181 == Var_182);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1179__1_2_p_0(
  MR_Word ArgWidth_72,
  MR_Word HeadVar__2_127)
{
  {
    MR_bool succeeded = (ArgWidth_72 == HeadVar__2_127);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1168__2_2_p_0(
  MR_Integer CurOffset_77,
  MR_Integer CellOffsetInt_177)
{
  {
    MR_bool succeeded = (CurOffset_77 == CellOffsetInt_177);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1160__1_2_p_0(
  MR_Integer CurOffset_77,
  MR_Integer CellOffsetInt_151)
{
  {
    MR_bool succeeded = (CurOffset_77 == CellOffsetInt_151);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1168__1_2_p_0(
  MR_Integer CurOffset_77,
  MR_Integer CellOffsetInt_153)
{
  {
    MR_bool succeeded = (CurOffset_77 == CellOffsetInt_153);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1148__1_2_p_0(
  MR_Integer CurOffset_77,
  MR_Integer CellOffsetInt_78)
{
  {
    MR_bool succeeded = (CurOffset_77 == CellOffsetInt_78);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1154__1_2_p_0(
  MR_Integer CurOffset_77,
  MR_Integer CellOffsetInt_149)
{
  {
    MR_bool succeeded = (CurOffset_77 == CellOffsetInt_149);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_box_extra_const_rval_list_lld__1056__1_2_p_0(
  MR_Word Width_22,
  MR_Word HeadVar__2_29)
{
  {
    MR_bool succeeded = (Width_22 == HeadVar__2_29);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__745__1_2_p_0(
  MR_Integer PrimaryTag_42,
  MR_Integer LambdaHeadVar__1_77)
{
  {
    MR_bool succeeded = (LambdaHeadVar__1_77 == PrimaryTag_42);

    succeeded = !(succeeded);
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__726__1_3_p_0(
  MR_Word STATE_VARIABLE_Info_0_69,
  MR_Word LambdaHeadVar__1_74,
  MR_Integer * LambdaHeadVar__2_75)
{
  {
    MR_Word ReuseConsTag_35;
    MR_Word _ReuseOffSet_36;
    MR_Integer _ReuseArgNum_37;

    ml_backend__ml_unify_gen__ml_cons_id_to_tag_3_p_0(STATE_VARIABLE_Info_0_69, LambdaHeadVar__1_74, &ReuseConsTag_35);
    ml_backend__ml_unify_gen__ml_tag_initial_offset_and_argnum_4_p_0(ReuseConsTag_35, LambdaHeadVar__2_75, &_ReuseOffSet_36, &_ReuseArgNum_37);
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_new_object_statically__689__1_1_f_0(
  MR_Word LambdaHeadVar__1_48)
{
  {
    MR_Word LambdaHeadVar__2_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_48, (MR_Integer) 0))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_48, (MR_Integer) 1))));
    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_48, (MR_Integer) 2))));

    return LambdaHeadVar__2_49;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_new_object_dynamically__628__1_1_f_0(
  MR_Word LambdaHeadVar__1_70)
{
  {
    MR_Word LambdaHeadVar__2_71;
    MR_Word Rv_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_70, (MR_Integer) 0))));
    MR_Word T_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_70, (MR_Integer) 1))));
    MR_Word Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_70, (MR_Integer) 2))));

    {
      LambdaHeadVar__2_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_71, 0) = ((MR_Box) (Rv_74));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_71, 1) = ((MR_Box) (T_75));
    }
    return LambdaHeadVar__2_71;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_compound__512__1_2_p_0(
  MR_Word AddedBy_30,
  MR_Word HeadVar__2_44)
{
  {
    MR_bool succeeded = (AddedBy_30 == HeadVar__2_44);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_compound__497__1_2_p_0(
  MR_Word AddedBy_30,
  MR_Word HeadVar__2_48)
{
  {
    MR_bool succeeded = (AddedBy_30 == HeadVar__2_48);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object__545__1_2_p_0(
  MR_Word TakeAddr_23,
  MR_Word HeadVar__2_45)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[1]), ((MR_Box) (TakeAddr_23)), ((MR_Box) (HeadVar__2_45)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object__534__1_2_p_0(
  MR_Word ExplicitSecTag_18,
  MR_Word HeadVar__2_38)
{
  {
    MR_bool succeeded = (ExplicitSecTag_18 == HeadVar__2_38);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__200__1_2_p_0(
  MR_Word CodeModel_8,
  MR_Word HeadVar__2_73)
{
  {
    MR_bool succeeded = (CodeModel_8 == HeadVar__2_73);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__232__1_2_p_0(
  MR_Word MaybeSizeProfInfo_37,
  MR_Word HeadVar__2_68)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[0]), ((MR_Box) (MaybeSizeProfInfo_37)), ((MR_Box) (HeadVar__2_68)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__220__1_2_p_0(
  MR_Word CodeModel_8,
  MR_Word HeadVar__2_64)
{
  {
    MR_bool succeeded = (CodeModel_8 == HeadVar__2_64);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__168__1_2_p_0(
  MR_Word CodeModel_8,
  MR_Word HeadVar__2_85)
{
  {
    MR_bool succeeded = (CodeModel_8 == HeadVar__2_85);

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

      mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), &Var_12, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
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

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____take_addr_info_0_0(
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
      MR_Integer CastX_18;
      MR_Integer CastY_19;

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        CastX_18 = (MR_Integer) (ArgX2_5);
        CastY_19 = (MR_Integer) (ArgY2_6);
        succeeded = (CastX_18 == CastY_19);
        if (succeeded)
          succeeded = MR_TRUE;
        else
        {
          MR_Integer ArgX1_16 = (MR_Integer) (ArgX2_5);
          MR_Integer ArgY1_17 = (MR_Integer) (ArgY2_6);

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
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_Word ArgY2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_Word ArgX3_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY3_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word Var_10;

      hlds__hlds_module____Compare____module_info_0_0(&Var_10, ArgX1_4, ArgY1_5);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;
        MR_Integer Var_17 = (MR_Integer) (ArgX2_6);
        MR_Integer Var_18 = (MR_Integer) (ArgY2_7);

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_11, Var_17, Var_18);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          MR_Integer Var_19 = (MR_Integer) (ArgX3_8);
          MR_Integer Var_20 = (MR_Integer) (ArgY3_9);

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
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);

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
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

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
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = (MR_Integer) (HeadVar__2_2);
      MR_Integer ArgY1_5 = (MR_Integer) (HeadVar__3_3);

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
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer ArgY1_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (ArgX1_3 == ArgY1_4);
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____field_gen_0_0(
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

      mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[6]), &Var_12, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;

        ml_backend__mlds____Compare____mlds_rval_0_0(&Var_13, ArgX2_6, ArgY2_7);
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
            ml_backend__ml_unify_gen____Compare____field_via_0_0(HeadVar__1_1, ArgX4_10, ArgY4_11);
        }
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____field_via_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__3_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word Var_12;

        ml_backend__mlds____Compare____mlds_module_name_0_0(&Var_12, Var_18, ArgY1_9);
        succeeded = (Var_12 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_12;
        else
          ml_backend__mlds____Compare____mlds_type_0_0(HeadVar__1_1, Var_17, ArgY2_11);
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____field_gen_0_0(
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[6]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
            succeeded = ml_backend__ml_unify_gen____Unify____field_via_0_0(ArgX4_9, ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____field_via_0_0(
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
    if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ArgX1_5, ArgY1_6);
        if (succeeded)
          succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ArgX2_7, ArgY2_8);
      }
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
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Integer ArgY1_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_16, ArgY1_11);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

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
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = (ArgX1_5 == ArgY1_6);
      }
    }
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX1_3, ArgY1_4);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____assign_dir_0_0(
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
ml_backend__ml_unify_gen____Unify____assign_dir_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

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

    mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    succeeded = ml_backend__ml_unify_gen____Unify____arg_type_and_width_1_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), Cast_HeadVar1_3, Cast_HeadVar2_4);
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
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Box ArgX1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
      MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
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

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
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

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
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

    mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    succeeded = ml_backend__ml_unify_gen____Unify____arg_type_and_width_1_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
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
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

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
      Var_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Var_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
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
    MR_Integer ConstNum_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ConstStruct_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ConsId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstStruct_9, (MR_Integer) 0))));
    MR_Word Args_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstStruct_9, (MR_Integer) 1))));
    MR_Word Type_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstStruct_9, (MR_Integer) 2))));
    MR_Word ModuleInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
    MR_Word MLDS_Type_17;
    MR_Word ConsTag_18;
    MR_Word _Inst_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstStruct_9, (MR_Integer) 3))));
    MR_Word Var_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);

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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_const_struct_tag__2600__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_const_struct_tag__2584__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
              ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0(Info_12, ConstNum_13, Type_14, MLDS_Type_15, ConsId_16, ConsTag_17, (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))), Args_18, STATE_VARIABLE_ConstStructMap_0_67, STATE_VARIABLE_ConstStructMap_68, STATE_VARIABLE_GlobalData_0_69, STATE_VARIABLE_GlobalData_70);
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
            if ((Args_18 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_tag\'/11", (MR_String) "no_tag arity != 1");
                return;
              }
            }
            else
            {
              MR_Word Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 1))));
              MR_Word Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 0))));

              if ((Var_113 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word ArgRvalTypeWidth_23;
                MR_Word ArgRval_24;
                MR_Word Rval_27;
                MR_Word GroundTerm_28;
                MR_Word _RvalMLDSType_25;
                MR_Word _Width_26;

                ml_backend__ml_unify_gen__ml_gen_const_struct_arg_7_p_0(Info_12, STATE_VARIABLE_ConstStructMap_0_67, Var_114, (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_1[7])), &ArgRvalTypeWidth_23, STATE_VARIABLE_GlobalData_0_69, STATE_VARIABLE_GlobalData_70);
                ArgRval_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgRvalTypeWidth_23, (MR_Integer) 0))));
                _RvalMLDSType_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgRvalTypeWidth_23, (MR_Integer) 1))));
                _Width_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgRvalTypeWidth_23, (MR_Integer) 2))));
                Rval_27 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(MLDS_Type_15, ConsTag_17, ArgRval_24);
                {
                  GroundTerm_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), GroundTerm_28, 0) = ((MR_Box) (Rval_27));
                  MR_hl_field(MR_mktag(0), GroundTerm_28, 1) = ((MR_Box) (Type_14));
                  MR_hl_field(MR_mktag(0), GroundTerm_28, 2) = ((MR_Box) (MLDS_Type_15));
                }
                mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstNum_13, ((MR_Box) (GroundTerm_28)), STATE_VARIABLE_ConstStructMap_0_67, STATE_VARIABLE_ConstStructMap_68);
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
              MR_Integer Ptag_111 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1))));

              ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0(Info_12, ConstNum_13, Type_14, MLDS_Type_15, ConsId_16, ConsTag_17, Ptag_111, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))), Args_18, STATE_VARIABLE_ConstStructMap_0_67, STATE_VARIABLE_ConstStructMap_68, STATE_VARIABLE_GlobalData_0_69, STATE_VARIABLE_GlobalData_70);
            }
            break;
          case (MR_Integer) 12:
            if ((Args_18 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_tag\'/11", (MR_String) "no_tag arity != 1");
                return;
              }
            }
            else
            {
              MR_Word Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 1))));
              MR_Word Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 0))));

              if ((Var_113 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word ArgRvalTypeWidth_23;
                MR_Word ArgRval_24;
                MR_Word Rval_27;
                MR_Word GroundTerm_28;
                MR_Word _RvalMLDSType_25;
                MR_Word _Width_26;

                ml_backend__ml_unify_gen__ml_gen_const_struct_arg_7_p_0(Info_12, STATE_VARIABLE_ConstStructMap_0_67, Var_114, (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_1[7])), &ArgRvalTypeWidth_23, STATE_VARIABLE_GlobalData_0_69, STATE_VARIABLE_GlobalData_70);
                ArgRval_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgRvalTypeWidth_23, (MR_Integer) 0))));
                _RvalMLDSType_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgRvalTypeWidth_23, (MR_Integer) 1))));
                _Width_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgRvalTypeWidth_23, (MR_Integer) 2))));
                Rval_27 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(MLDS_Type_15, ConsTag_17, ArgRval_24);
                {
                  GroundTerm_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), GroundTerm_28, 0) = ((MR_Box) (Rval_27));
                  MR_hl_field(MR_mktag(0), GroundTerm_28, 1) = ((MR_Box) (Type_14));
                  MR_hl_field(MR_mktag(0), GroundTerm_28, 2) = ((MR_Box) (MLDS_Type_15));
                }
                mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstNum_13, ((MR_Box) (GroundTerm_28)), STATE_VARIABLE_ConstStructMap_0_67, STATE_VARIABLE_ConstStructMap_68);
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
              MR_Integer Ptag_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1))));
              MR_Word ExtraRvals_33;
              MR_Integer Stag_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 2))));
              MR_Word AddedBy_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 3))));
              MR_Word Target_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word UsesConstructors_37;
              MR_Word Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 0))));
              MR_Word Var_98 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);

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
                    MR_Word Var_99;
                    MR_Word Var_100;

                    {
                      Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[12]));
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
                    Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 0))));
                    Var_100 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 1))) & (MR_Integer) 3);
                    HighLevelData_39 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                    switch (HighLevelData_39) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          {
                            StagRval_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), StagRval_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), StagRval_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
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
                      MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[12]));
                      MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_const_struct_tag_11_p_0_2));
                      MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (AddedBy_35));
                      MR_hl_field(MR_mktag(0), Var_73, 4) = ((MR_Box) ((MR_Integer) 1));
                    }
                    mercury__require__expect_3_p_0(Var_73, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_tag\'/11", (MR_String) "AddedBy != sectag_added_by_constructor");
                    ExtraRvals_33 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
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

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_39;

    conv0_LambdaHeadVar__2_39 = ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_const_static_compound__2647__1_1_f_0(((MR_Word) (wrapper_arg_1)));
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
    MR_Word Target_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ModuleInfo_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 0))));
    MR_Word ArgsTypesWidths_29;
    MR_Word HighLevelData_30;
    MR_Word RvalsTypesWidths_31;
    MR_Word UsesBaseClass_32;
    MR_Word GroundTerm_33;
    MR_Word STATE_VARIABLE_GlobalData_43_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_51 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_54;
    MR_Word Var_55;

    ml_backend__ml_unify_gen__cons_id_arg_types_and_widths_7_p_1((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), ModuleInfo_26, (MR_Word) (&ml_backend__ml_unify_gen_scalar_common_2[7]), (MR_Integer) 0, VarType_16, ConsId_18, Args_22, &ArgsTypesWidths_29);
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 0))));
    Var_55 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 1))) & (MR_Integer) 3);
    HighLevelData_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);
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
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstNum_15, ((MR_Box) (GroundTerm_33)), STATE_VARIABLE_ConstStructMap_0_34, STATE_VARIABLE_ConstStructMap_35);
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
  if ((HeadVar__3_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__4_4 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    *STATE_VARIABLE_GlobalData_6 = STATE_VARIABLE_GlobalData_0_5;
  }
  else
  {
    MR_Word ArgTypeWidth_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgsTypesWidths_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word RvalTypeWidth_16;
    MR_Word RvalsTypesWidths_17;
    MR_Word ConstArg_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypeWidth_14, (MR_Integer) 0))));
    MR_Word PosWidth_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypeWidth_14, (MR_Integer) 2))));
    MR_Word STATE_VARIABLE_GlobalData_24_24;
    MR_Word _Type_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypeWidth_14, (MR_Integer) 1))));

    ml_backend__ml_unify_gen__ml_gen_const_struct_arg_7_p_0(Info_1, ConstStructMap_2, ConstArg_19, PosWidth_21, &RvalTypeWidth_16, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_24_24);
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
    MR_Word ModuleInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0))));
    MR_Word Rval0_17;
    MR_Word MLDS_Type_19;
    MR_Word Width_23;
    MR_Word Rval_24;
    MR_Word Var_27;
    MR_Word Var_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);

    if (((MR_tag((MR_Word) ConstArg_10)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Integer StructNum_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ConstArg_10, (MR_Integer) 0))));
      MR_Word GroundTerm_16;
      MR_Box conv0_GroundTerm_16;
      MR_Word _MerType_18;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_9, StructNum_15, &conv0_GroundTerm_16);
      GroundTerm_16 = ((MR_Word) (conv0_GroundTerm_16));
      Rval0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm_16, (MR_Integer) 0))));
      _MerType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm_16, (MR_Integer) 1))));
      MLDS_Type_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm_16, (MR_Integer) 2))));
    }
    else
    {
      MR_Word ConsId_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConstArg_10, (MR_Integer) 0))));
      MR_Word Type_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConstArg_10, (MR_Integer) 1))));
      MR_Word ConsTag_22;

      ConsTag_22 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_14, ConsId_20);
      MLDS_Type_19 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_14, Type_21);
      switch (MR_tag((MR_Word) ConsTag_22)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ConsTag_22)) {
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
                MR_Word RvalConst_90;

                RvalConst_90 = ml_backend__ml_unify_gen__int_tag_to_mlds_rval_const_3_f_0(Type_21, MLDS_Type_19, (MR_Word) (&ml_backend__ml_unify_gen_scalar_common_5[0]));
                {
                  Rval0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval0_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Rval0_17, 1) = ((MR_Box) (RvalConst_90));
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String String_40 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConsTag_22, (MR_Integer) 0))));
            MR_Word Var_87;

            {
              Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
              MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (String_40));
            }
            {
              Rval0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Rval0_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), Rval0_17, 1) = ((MR_Box) (Var_87));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Float Float_39 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_22, (MR_Integer) 0)));
            MR_Word Var_88;

            {
              Var_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
              MR_hl_field(MR_mktag(3), Var_88, 1) = MR_box_float(Float_39);
            }
            {
              Rval0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Rval0_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), Rval0_17, 1) = ((MR_Box) (Var_88));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word IntTag_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                MR_Word RvalConst_38;

                RvalConst_38 = ml_backend__ml_unify_gen__int_tag_to_mlds_rval_const_3_f_0(Type_21, MLDS_Type_19, IntTag_37);
                {
                  Rval0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval0_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Rval0_17, 1) = ((MR_Box) (RvalConst_38));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ForeignLang_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                MR_String ForeignTag_44 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                MR_Word Var_81;

                {
                  Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                  MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (ForeignLang_43));
                  MR_hl_field(MR_mktag(3), Var_81, 2) = ((MR_Box) (ForeignTag_44));
                  MR_hl_field(MR_mktag(3), Var_81, 3) = ((MR_Box) (MLDS_Type_19));
                }
                {
                  Rval0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval0_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Rval0_17, 1) = ((MR_Box) (Var_81));
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
                MR_Word ModuleName0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                MR_String TypeName_46 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                MR_Integer TypeArity_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
                MR_Word ModuleName_48;
                MR_Word MLDS_Module_49;
                MR_Word RttiTypeCtor_50;
                MR_Word RttiId_51;
                MR_Word Const_52;
                MR_Word Var_79;

                ModuleName_48 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_45);
                MLDS_Module_49 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_48);
                {
                  RttiTypeCtor_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), RttiTypeCtor_50, 0) = ((MR_Box) (ModuleName_48));
                  MR_hl_field(MR_mktag(0), RttiTypeCtor_50, 1) = ((MR_Box) (TypeName_46));
                  MR_hl_field(MR_mktag(0), RttiTypeCtor_50, 2) = ((MR_Box) (TypeArity_47));
                }
                {
                  RttiId_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), RttiId_51, 0) = ((MR_Box) (RttiTypeCtor_50));
                  MR_hl_field(MR_mktag(0), RttiId_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
                }
                {
                  Const_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Const_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                  MR_hl_field(MR_mktag(3), Const_52, 1) = ((MR_Box) (MLDS_Module_49));
                  MR_hl_field(MR_mktag(3), Const_52, 2) = ((MR_Box) (RttiId_51));
                }
                {
                  Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_79, 1) = ((MR_Box) (Const_52));
                }
                {
                  Rval0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval0_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), Rval0_17, 1) = ((MR_Box) (MLDS_Type_19));
                  MR_hl_field(MR_mktag(3), Rval0_17, 2) = ((MR_Box) (Var_79));
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ClassId_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                MR_String Instance_54 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
                MR_Word TCName_55;
                MR_Word Var_76;
                MR_Word Var_77;
                MR_Word ModuleName_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                MR_Word MLDS_Module_92;
                MR_Word RttiId_93;
                MR_Word Const_94;

                MLDS_Module_92 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_91);
                TCName_55 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_53);
                {
                  Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (ModuleName_91));
                  MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Instance_54));
                }
                {
                  RttiId_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), RttiId_93, 0) = ((MR_Box) (TCName_55));
                  MR_hl_field(MR_mktag(1), RttiId_93, 1) = ((MR_Box) (Var_76));
                }
                {
                  Const_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Const_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                  MR_hl_field(MR_mktag(3), Const_94, 1) = ((MR_Box) (MLDS_Module_92));
                  MR_hl_field(MR_mktag(3), Const_94, 2) = ((MR_Box) (RttiId_93));
                }
                {
                  Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_77, 1) = ((MR_Box) (Const_94));
                }
                {
                  Rval0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval0_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), Rval0_17, 1) = ((MR_Box) (MLDS_Type_19));
                  MR_hl_field(MR_mktag(3), Rval0_17, 2) = ((MR_Box) (Var_77));
                }
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Integer Ptag_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                MR_Integer Stag_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                MR_Word Var_82;
                MR_Word Var_83;
                MR_Word Var_85;
                MR_Word Var_86;

                {
                  Var_86 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_86, 0) = ((MR_Box) (Stag_42));
                }
                {
                  Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) (Var_86));
                }
                {
                  Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                  MR_hl_field(MR_mktag(3), Var_83, 2) = ((MR_Box) (Var_85));
                }
                {
                  Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (Ptag_41));
                  MR_hl_field(MR_mktag(3), Var_82, 2) = ((MR_Box) (Var_83));
                }
                {
                  Rval0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval0_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), Rval0_17, 1) = ((MR_Box) (MLDS_Type_19));
                  MR_hl_field(MR_mktag(3), Rval0_17, 2) = ((MR_Box) (Var_82));
                }
              }
              break;
          }
          break;
      }
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

    ml_backend__ml_unify_gen__ml_gen_const_struct_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ConstStructMap_20, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_GlobalData_22);
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
      MR_hl_field(MR_mktag(0), Info_12, 1) = (MR_Box) (((MR_Unsigned) (((MR_Box) (Target_7))) | (((MR_Unsigned) (((MR_Box) (HighLevelData_11))) << (MR_Integer) 2))));
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
    Var_19 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0));
    mercury__list__foldl2_6_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_2[0]), (MR_Word) (&ml_backend__ml_unify_gen_scalar_common_2[1]), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0), Var_18, ConstStructs_14, ((MR_Box) (Var_19)), &conv3_ConstStructMap_8, ((MR_Box) (STATE_VARIABLE_GlobalData_0_15)), &conv2_STATE_VARIABLE_GlobalData_16);
    *ConstStructMap_8 = ((MR_Word) (conv3_ConstStructMap_8));
    *STATE_VARIABLE_GlobalData_16 = ((MR_Word) (conv2_STATE_VARIABLE_GlobalData_16));
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
    MR_Word GoalExpr_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_7, (MR_Integer) 0))));
    MR_Word GoalInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_7, (MR_Integer) 1))));
    MR_Word NonLocals_12;
    MR_Word NonLocalList_13;

    NonLocals_12 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_11);
    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_12, &NonLocalList_13);
    if ((NonLocalList_13 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *Stmts_8 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
      *STATE_VARIABLE_Info_34 = STATE_VARIABLE_Info_0_33;
    }
    else
    {
      MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonLocalList_13, (MR_Integer) 1))));
      MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonLocalList_13, (MR_Integer) 0))));

      if ((Var_51 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), ((MR_Box) (Var_52)), ((MR_Box) (TermVar_6)));
        if (succeeded)
        {
          MR_Word Conjuncts_15;
          MR_Word Var_39;

          succeeded = ((((MR_tag((MR_Word) GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 0))) == (MR_Integer) 2)));
          if (succeeded)
          {
            Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));
            Conjuncts_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
            succeeded = (Var_39 == (MR_Integer) 0);
          }
          if (succeeded)
          {
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
            Var_40 = mercury__map__init_0_f_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0));
            ml_backend__ml_unify_gen__ml_gen_ground_term_conjuncts_9_p_0(ModuleInfo_16, Target_17, HighLevelData_18, VarTypes_19, Conjuncts_15, GlobalData0_20, &GlobalData_21, Var_40, &GroundTermMap_22);
            ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_21, STATE_VARIABLE_Info_0_33, &STATE_VARIABLE_Info_41_41);
            mercury__map__lookup_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), GroundTermMap_22, ((MR_Box) (TermVar_6)), &conv0_TermVarGroundTerm_23);
            TermVarGroundTerm_23 = ((MR_Word) (conv0_TermVarGroundTerm_23));
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(TermVar_6, TermVarGroundTerm_23, STATE_VARIABLE_Info_41_41, STATE_VARIABLE_Info_34);
            ml_backend__ml_code_util__ml_gen_var_3_p_0(*STATE_VARIABLE_Info_34, TermVar_6, &TermVarLval_24);
            TermVarRval_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermVarGroundTerm_23, (MR_Integer) 0))));
            Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermVarGroundTerm_23, (MR_Integer) 1))));
            Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermVarGroundTerm_23, (MR_Integer) 2))));
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
    if ((HeadVar__5_5 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_GroundTermMap_9 = STATE_VARIABLE_GroundTermMap_0_8;
      *STATE_VARIABLE_GlobalData_7 = STATE_VARIABLE_GlobalData_0_6;
    }
    else
    {
      MR_Word Goal_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Goals_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_GlobalData_32_32;
      MR_Word STATE_VARIABLE_GroundTermMap_33_33;
      MR_Word GoalExpr_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_24, (MR_Integer) 0))));
      MR_Word GoalInfo_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_24, (MR_Integer) 1))));
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
        Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_47, (MR_Integer) 0))));
        Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_47, (MR_Integer) 1))));
        Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_47, (MR_Integer) 2))));
        Unify_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_47, (MR_Integer) 3))));
        Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_47, (MR_Integer) 4))));
        succeeded = ((MR_tag((MR_Word) Unify_52)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_52, (MR_Integer) 0))));
          ConsId_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_52, (MR_Integer) 1))));
          ArgVars_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_52, (MR_Integer) 2))));
          Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_52, (MR_Integer) 3))));
          _HowToConstruct_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_52, (MR_Integer) 4))));
          Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_52, (MR_Integer) 5))));
          SubInfo_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_52, (MR_Integer) 6))));
          succeeded = (SubInfo_60 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2322__6_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2392__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2377__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2322__5_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2322__4_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2322__3_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2322__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2322__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
              ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0(ModuleInfo_16, Target_17, HighLevelData_18, VarTypes_19, Var_20, VarType_21, MLDS_Type_22, ConsId_23, ConsTag_24, (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))), ArgVars_25, Context_26, STATE_VARIABLE_GlobalData_0_75, STATE_VARIABLE_GlobalData_76, STATE_VARIABLE_GroundTermMap_0_77, STATE_VARIABLE_GroundTermMap_78);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ConstRval_31;
              MR_Word ConstGroundTerm_38;
              MR_Word Var_113;
              MR_Word IntConst_119;

              IntConst_119 = ml_backend__ml_unify_gen__int_tag_to_mlds_rval_const_3_f_0(VarType_21, MLDS_Type_22, (MR_Word) (&ml_backend__ml_unify_gen_scalar_common_5[0]));
              {
                ConstRval_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstRval_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstRval_31, 1) = ((MR_Box) (IntConst_119));
              }
              {
                Var_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_113, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[15]));
                MR_hl_field(MR_mktag(0), Var_113, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_1));
                MR_hl_field(MR_mktag(0), Var_113, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_113, 3) = ((MR_Box) (ArgVars_25));
                MR_hl_field(MR_mktag(0), Var_113, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_113, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
              {
                ConstGroundTerm_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstGroundTerm_38, 0) = ((MR_Box) (ConstRval_31));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_38, 1) = ((MR_Box) (VarType_21));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_38, 2) = ((MR_Box) (MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (Var_20)), ((MR_Box) (ConstGroundTerm_38)), STATE_VARIABLE_GroundTermMap_0_77, STATE_VARIABLE_GroundTermMap_78);
              *STATE_VARIABLE_GlobalData_76 = STATE_VARIABLE_GlobalData_0_75;
            }
            break;
          case (MR_Integer) 2:
            if ((ArgVars_25 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "no_tag arity != 1");
                return;
              }
            }
            else
            {
              MR_Word Var_194 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_25, (MR_Integer) 1))));
              MR_Word Var_195 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_25, (MR_Integer) 0))));

              if ((Var_194 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word ArgGroundTerm_57;
                MR_Word ArgRval_58;
                MR_Word MLDS_ArgType_60;
                MR_Word Rval0_61;
                MR_Word Rval_62;
                MR_Word GroundTerm_63;
                MR_Word STATE_VARIABLE_GroundTermMap_98_98;
                MR_Box conv0_ArgGroundTerm_57;
                MR_Word _ArgType_59;

                mercury__map__det_remove_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (Var_195)), &conv0_ArgGroundTerm_57, STATE_VARIABLE_GroundTermMap_0_77, &STATE_VARIABLE_GroundTermMap_98_98);
                ArgGroundTerm_57 = ((MR_Word) (conv0_ArgGroundTerm_57));
                ArgRval_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_57, (MR_Integer) 0))));
                _ArgType_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_57, (MR_Integer) 1))));
                MLDS_ArgType_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_57, (MR_Integer) 2))));
                ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_16, Context_26, MLDS_ArgType_60, (MR_Integer) 2, ArgRval_58, &Rval0_61, STATE_VARIABLE_GlobalData_0_75, STATE_VARIABLE_GlobalData_76);
                Rval_62 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(MLDS_Type_22, ConsTag_24, Rval0_61);
                {
                  GroundTerm_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), GroundTerm_63, 0) = ((MR_Box) (Rval_62));
                  MR_hl_field(MR_mktag(0), GroundTerm_63, 1) = ((MR_Box) (VarType_21));
                  MR_hl_field(MR_mktag(0), GroundTerm_63, 2) = ((MR_Box) (MLDS_Type_22));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (Var_20)), ((MR_Box) (GroundTerm_63)), STATE_VARIABLE_GroundTermMap_98_98, STATE_VARIABLE_GroundTermMap_78);
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
          MR_String String_33 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConsTag_24, (MR_Integer) 0))));
          MR_Word Var_110;
          MR_Word ConstRval_183;
          MR_Word ConstGroundTerm_184;
          MR_Word Var_185;

          {
            Var_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
            MR_hl_field(MR_mktag(3), Var_110, 1) = ((MR_Box) (String_33));
          }
          {
            ConstRval_183 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ConstRval_183, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ConstRval_183, 1) = ((MR_Box) (Var_110));
          }
          {
            Var_185 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_185, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[15]));
            MR_hl_field(MR_mktag(0), Var_185, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_8));
            MR_hl_field(MR_mktag(0), Var_185, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_185, 3) = ((MR_Box) (ArgVars_25));
            MR_hl_field(MR_mktag(0), Var_185, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          mercury__require__expect_3_p_0(Var_185, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
          {
            ConstGroundTerm_184 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ConstGroundTerm_184, 0) = ((MR_Box) (ConstRval_183));
            MR_hl_field(MR_mktag(0), ConstGroundTerm_184, 1) = ((MR_Box) (VarType_21));
            MR_hl_field(MR_mktag(0), ConstGroundTerm_184, 2) = ((MR_Box) (MLDS_Type_22));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (Var_20)), ((MR_Box) (ConstGroundTerm_184)), STATE_VARIABLE_GroundTermMap_0_77, STATE_VARIABLE_GroundTermMap_78);
          *STATE_VARIABLE_GlobalData_76 = STATE_VARIABLE_GlobalData_0_75;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float Float_32 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_24, (MR_Integer) 0)));
          MR_Word Var_111;
          MR_Word ConstRval_137;
          MR_Word ConstGroundTerm_138;
          MR_Word Var_139;

          {
            Var_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_111, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
            MR_hl_field(MR_mktag(3), Var_111, 1) = MR_box_float(Float_32);
          }
          {
            ConstRval_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ConstRval_137, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ConstRval_137, 1) = ((MR_Box) (Var_111));
          }
          {
            Var_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_139, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[15]));
            MR_hl_field(MR_mktag(0), Var_139, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_2));
            MR_hl_field(MR_mktag(0), Var_139, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_139, 3) = ((MR_Box) (ArgVars_25));
            MR_hl_field(MR_mktag(0), Var_139, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          mercury__require__expect_3_p_0(Var_139, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
          {
            ConstGroundTerm_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ConstGroundTerm_138, 0) = ((MR_Box) (ConstRval_137));
            MR_hl_field(MR_mktag(0), ConstGroundTerm_138, 1) = ((MR_Box) (VarType_21));
            MR_hl_field(MR_mktag(0), ConstGroundTerm_138, 2) = ((MR_Box) (MLDS_Type_22));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (Var_20)), ((MR_Box) (ConstGroundTerm_138)), STATE_VARIABLE_GroundTermMap_0_77, STATE_VARIABLE_GroundTermMap_78);
          *STATE_VARIABLE_GlobalData_76 = STATE_VARIABLE_GlobalData_0_75;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word IntTag_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 1))));
              MR_Word IntConst_30;
              MR_Word ConstRval_159;
              MR_Word ConstGroundTerm_160;
              MR_Word Var_161;

              IntConst_30 = ml_backend__ml_unify_gen__int_tag_to_mlds_rval_const_3_f_0(VarType_21, MLDS_Type_22, IntTag_29);
              {
                ConstRval_159 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstRval_159, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstRval_159, 1) = ((MR_Box) (IntConst_30));
              }
              {
                Var_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_161, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[15]));
                MR_hl_field(MR_mktag(0), Var_161, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_4));
                MR_hl_field(MR_mktag(0), Var_161, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_161, 3) = ((MR_Box) (ArgVars_25));
                MR_hl_field(MR_mktag(0), Var_161, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_161, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
              {
                ConstGroundTerm_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstGroundTerm_160, 0) = ((MR_Box) (ConstRval_159));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_160, 1) = ((MR_Box) (VarType_21));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_160, 2) = ((MR_Box) (MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (Var_20)), ((MR_Box) (ConstGroundTerm_160)), STATE_VARIABLE_GroundTermMap_0_77, STATE_VARIABLE_GroundTermMap_78);
              *STATE_VARIABLE_GlobalData_76 = STATE_VARIABLE_GlobalData_0_75;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ForeignLang_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 1))));
              MR_String ForeignTag_37 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 2))));
              MR_Word Var_104;
              MR_Word ConstRval_148;
              MR_Word ConstGroundTerm_149;
              MR_Word Var_150;

              {
                Var_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                MR_hl_field(MR_mktag(3), Var_104, 1) = ((MR_Box) (ForeignLang_36));
                MR_hl_field(MR_mktag(3), Var_104, 2) = ((MR_Box) (ForeignTag_37));
                MR_hl_field(MR_mktag(3), Var_104, 3) = ((MR_Box) (MLDS_Type_22));
              }
              {
                ConstRval_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstRval_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstRval_148, 1) = ((MR_Box) (Var_104));
              }
              {
                Var_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_150, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[15]));
                MR_hl_field(MR_mktag(0), Var_150, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_3));
                MR_hl_field(MR_mktag(0), Var_150, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_150, 3) = ((MR_Box) (ArgVars_25));
                MR_hl_field(MR_mktag(0), Var_150, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_150, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
              {
                ConstGroundTerm_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstGroundTerm_149, 0) = ((MR_Box) (ConstRval_148));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_149, 1) = ((MR_Box) (VarType_21));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_149, 2) = ((MR_Box) (MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (Var_20)), ((MR_Box) (ConstGroundTerm_149)), STATE_VARIABLE_GroundTermMap_0_77, STATE_VARIABLE_GroundTermMap_78);
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
              MR_Integer Ptag_193 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 1))));

              ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0(ModuleInfo_16, Target_17, HighLevelData_18, VarTypes_19, Var_20, VarType_21, MLDS_Type_22, ConsId_23, ConsTag_24, Ptag_193, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))), ArgVars_25, Context_26, STATE_VARIABLE_GlobalData_0_75, STATE_VARIABLE_GlobalData_76, STATE_VARIABLE_GroundTermMap_0_77, STATE_VARIABLE_GroundTermMap_78);
            }
            break;
          case (MR_Integer) 12:
            if ((ArgVars_25 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "no_tag arity != 1");
                return;
              }
            }
            else
            {
              MR_Word Var_194 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_25, (MR_Integer) 1))));
              MR_Word Var_195 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_25, (MR_Integer) 0))));

              if ((Var_194 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word ArgGroundTerm_57;
                MR_Word ArgRval_58;
                MR_Word MLDS_ArgType_60;
                MR_Word Rval0_61;
                MR_Word Rval_62;
                MR_Word GroundTerm_63;
                MR_Word STATE_VARIABLE_GroundTermMap_98_98;
                MR_Box conv0_ArgGroundTerm_57;
                MR_Word _ArgType_59;

                mercury__map__det_remove_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (Var_195)), &conv0_ArgGroundTerm_57, STATE_VARIABLE_GroundTermMap_0_77, &STATE_VARIABLE_GroundTermMap_98_98);
                ArgGroundTerm_57 = ((MR_Word) (conv0_ArgGroundTerm_57));
                ArgRval_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_57, (MR_Integer) 0))));
                _ArgType_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_57, (MR_Integer) 1))));
                MLDS_ArgType_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_57, (MR_Integer) 2))));
                ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_16, Context_26, MLDS_ArgType_60, (MR_Integer) 2, ArgRval_58, &Rval0_61, STATE_VARIABLE_GlobalData_0_75, STATE_VARIABLE_GlobalData_76);
                Rval_62 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(MLDS_Type_22, ConsTag_24, Rval0_61);
                {
                  GroundTerm_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), GroundTerm_63, 0) = ((MR_Box) (Rval_62));
                  MR_hl_field(MR_mktag(0), GroundTerm_63, 1) = ((MR_Box) (VarType_21));
                  MR_hl_field(MR_mktag(0), GroundTerm_63, 2) = ((MR_Box) (MLDS_Type_22));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (Var_20)), ((MR_Box) (GroundTerm_63)), STATE_VARIABLE_GroundTermMap_98_98, STATE_VARIABLE_GroundTermMap_78);
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
              MR_Word AddedBy_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 3))));
              MR_Word UsesConstructors_72;
              MR_Integer Stag_120 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 2))));
              MR_Integer Ptag_122 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 1))));

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
                      MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[12]));
                      MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_6));
                      MR_hl_field(MR_mktag(0), Var_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_83, 3) = ((MR_Box) (AddedBy_71));
                      MR_hl_field(MR_mktag(0), Var_83, 4) = ((MR_Box) ((MR_Integer) 0));
                    }
                    mercury__require__expect_3_p_0(Var_83, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "AddedBy != sectag_added_by_unify");
                    {
                      Var_87 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_87, 0) = ((MR_Box) (Stag_120));
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
                            MR_hl_field(MR_mktag(3), StagRval_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
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
                      MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[12]));
                      MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_7));
                      MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_79, 3) = ((MR_Box) (AddedBy_71));
                      MR_hl_field(MR_mktag(0), Var_79, 4) = ((MR_Box) ((MR_Integer) 1));
                    }
                    mercury__require__expect_3_p_0(Var_79, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "AddedBy != sectag_added_by_constructor");
                    ExtraRvals_70 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  }
                  break;
              }
              ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0(ModuleInfo_16, Target_17, HighLevelData_18, VarTypes_19, Var_20, VarType_21, MLDS_Type_22, ConsId_23, ConsTag_24, Ptag_122, ExtraRvals_70, ArgVars_25, Context_26, STATE_VARIABLE_GlobalData_0_75, STATE_VARIABLE_GlobalData_76, STATE_VARIABLE_GroundTermMap_0_77, STATE_VARIABLE_GroundTermMap_78);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Integer Ptag_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 1))));
              MR_Integer Stag_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 2))));
              MR_Word Var_105;
              MR_Word Var_106;
              MR_Word Var_108;
              MR_Word Var_109;
              MR_Word ConstRval_170;
              MR_Word ConstGroundTerm_171;
              MR_Word Var_172;

              {
                Var_109 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_109, 0) = ((MR_Box) (Stag_35));
              }
              {
                Var_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_108, 1) = ((MR_Box) (Var_109));
              }
              {
                Var_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), Var_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                MR_hl_field(MR_mktag(3), Var_106, 2) = ((MR_Box) (Var_108));
              }
              {
                Var_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_105, 1) = ((MR_Box) (Ptag_34));
                MR_hl_field(MR_mktag(3), Var_105, 2) = ((MR_Box) (Var_106));
              }
              {
                ConstRval_170 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstRval_170, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), ConstRval_170, 1) = ((MR_Box) (MLDS_Type_22));
                MR_hl_field(MR_mktag(3), ConstRval_170, 2) = ((MR_Box) (Var_105));
              }
              {
                Var_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_172, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[15]));
                MR_hl_field(MR_mktag(0), Var_172, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_5));
                MR_hl_field(MR_mktag(0), Var_172, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_172, 3) = ((MR_Box) (ArgVars_25));
                MR_hl_field(MR_mktag(0), Var_172, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_172, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
              {
                ConstGroundTerm_171 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstGroundTerm_171, 0) = ((MR_Box) (ConstRval_170));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_171, 1) = ((MR_Box) (VarType_21));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_171, 2) = ((MR_Box) (MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (Var_20)), ((MR_Box) (ConstGroundTerm_171)), STATE_VARIABLE_GroundTermMap_0_77, STATE_VARIABLE_GroundTermMap_78);
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
          MR_Integer Int_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), IntTag_7, (MR_Integer) 0))));
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
          MR_Unsigned UInt_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), IntTag_7, (MR_Integer) 0))));

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

    conv0_HeadVar__3_3 = hlds__vartypes__lookup_var_type_func_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0_1));
      MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (VarTypes_21));
    }
    ml_backend__ml_unify_gen__cons_id_arg_types_and_widths_7_p_1((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), ModuleInfo_18, Var_41, (MR_Integer) 0, VarType_23, ConsId_25, ArgVars_29, &ArgVarsTypesWidths_33);
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
    mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (Var_22)), ((MR_Box) (GroundTerm_36)), STATE_VARIABLE_GroundTermMap_46_46, STATE_VARIABLE_GroundTermMap_40);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__cons_id_arg_types_and_widths_7_p_1_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__cons_id_arg_types_and_widths__2903__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
    MR_bool succeeded = ((((MR_tag((MR_Word) ConsId_12)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_12, (MR_Integer) 0))) == (MR_Integer) 2)));
    MR_Word Var_15;
    MR_Integer Var_16;
    MR_Word Var_17;

    if (succeeded)
    {
      Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_12, (MR_Integer) 1))));
      Var_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_12, (MR_Integer) 2))));
      Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_12, (MR_Integer) 3))));
      succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(VarType_11);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word ConsRepnDefn_18;

      succeeded = check_hlds__type_util__get_cons_repn_defn_3_p_0(ModuleInfo_8, ConsId_12, &ConsRepnDefn_18);
      if (succeeded)
      {
        MR_Word ConsArgRepns_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 3))));
        MR_Integer NumExtraArgs_20;
        MR_Integer Var_30;
        MR_Integer Var_31;
        MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 0))));
        MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 1))));
        MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 2))));
        MR_Integer Var_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 4))));
        MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 5))));

        Var_30 = mercury__list__length_1_f_0(TypeInfo_for_Arg_53, Args_13);
        Var_31 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), ConsArgRepns_19);
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
            MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[4]));
            MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (ml_backend__ml_unify_gen__cons_id_arg_types_and_widths_7_p_1_1));
            MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (MayHaveExtraArgs_10));
            MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) ((MR_Integer) 1));
          }
          mercury__require__expect_3_p_0(Var_32, (MR_String) "predicate \140ml_backend.ml_unify_gen.cons_id_arg_types_and_widths\'/7", (MR_String) "extra args in static struct");
          mercury__list__det_split_list_4_p_0(TypeInfo_for_Arg_53, NumExtraArgs_20, Args_13, &ExtraArgs_21, &NonExtraArgs_22);
          Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 0))));
          Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 1))));
          Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 2))));
          Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 3))));
          Var_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 4))));
          Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 5))));
          succeeded = ((((MR_tag((MR_Word) Var_36)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_36, (MR_Integer) 0))) == (MR_Integer) 13)));
          if (succeeded)
          {
            Var_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_36, (MR_Integer) 1))));
            Var_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_36, (MR_Integer) 2))));
            AddedBy_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_36, (MR_Integer) 3))));
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
          conv0_ArgsTypesWidths_14 = mercury__list__f_43_43_2_f_0(TypeInfo_57_57, (MR_Word) (ExtraArgsTypesWidths_27), (MR_Word) (NonExtraArgsTypesWidths_28));
          *ArgsTypesWidths_14 = (MR_Word) (conv0_ArgsTypesWidths_14);
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
  if ((HeadVar__3_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__4_4 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    *STATE_VARIABLE_GroundTermMap_8 = STATE_VARIABLE_GroundTermMap_0_7;
    *STATE_VARIABLE_GlobalData_6 = STATE_VARIABLE_GlobalData_0_5;
  }
  else
  {
    MR_Word ArgVarTypeWidth_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgVarsTypesWidths_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word RvalTypeWidth_21;
    MR_Word RvalsTypesWidths_22;
    MR_Word STATE_VARIABLE_GlobalData_29_29;
    MR_Word STATE_VARIABLE_GroundTermMap_30_30;
    MR_Word ArgVar_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarTypeWidth_19, (MR_Integer) 0))));
    MR_Word ArgPosWidth_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarTypeWidth_19, (MR_Integer) 2))));
    MR_Word ArgGroundTerm_46;
    MR_Word ArgRval0_47;
    MR_Word MLDS_ArgType_49;
    MR_Word ArgWidth_50;
    MR_Word ArgRval_51;
    MR_Word _ConsArgType_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarTypeWidth_19, (MR_Integer) 1))));
    MR_Box conv0_ArgGroundTerm_46;
    MR_Word _ArgType_48;

    mercury__map__det_remove_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (ArgVar_43)), &conv0_ArgGroundTerm_46, STATE_VARIABLE_GroundTermMap_0_7, &STATE_VARIABLE_GroundTermMap_30_30);
    ArgGroundTerm_46 = ((MR_Word) (conv0_ArgGroundTerm_46));
    ArgRval0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_46, (MR_Integer) 0))));
    _ArgType_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_46, (MR_Integer) 1))));
    MLDS_ArgType_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_46, (MR_Integer) 2))));
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
  if ((HeadVar__3_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__4_4 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    *STATE_VARIABLE_GroundTermMap_8 = STATE_VARIABLE_GroundTermMap_0_7;
    *STATE_VARIABLE_GlobalData_6 = STATE_VARIABLE_GlobalData_0_5;
  }
  else
  {
    MR_Word ArgVarTypeWidth_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgVarsTypesWidths_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
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
    MR_Word ArgVar_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarTypeWidth_11, (MR_Integer) 0))));
    MR_Word ConsArgType_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarTypeWidth_11, (MR_Integer) 1))));
    MR_Word ArgPosWidth_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarTypeWidth_11, (MR_Integer) 2))));
    MR_Word ArgGroundTerm_18;
    MR_Word ArgRval0_19;
    MR_Word ArgType_20;
    MR_Word ArgWidth_22;
    MR_Word ArgRval_24;
    MR_Box conv0_ArgGroundTerm_18;
    MR_Word _MLDS_ArgType_21;

    mercury__map__det_remove_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (ArgVar_15)), &conv0_ArgGroundTerm_18, STATE_VARIABLE_GroundTermMap_0_27, STATE_VARIABLE_GroundTermMap_28);
    ArgGroundTerm_18 = ((MR_Word) (conv0_ArgGroundTerm_18));
    ArgRval0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_18, (MR_Integer) 0))));
    ArgType_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_18, (MR_Integer) 1))));
    _MLDS_ArgType_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_18, (MR_Integer) 2))));
    ArgWidth_22 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_17);
    succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ModuleInfo_9, ConsArgType_16, ArgWidth_22);
    if (succeeded)
    {
      MR_Word TypeVarSet0_40;
      MR_Word MLDS_ArgType_56;
      MR_Word TypeVar_41;
      MR_Word _TypeVarSet_42;

      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet0_40);
      mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVar_41, TypeVarSet0_40, &_TypeVarSet_42);
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
    MR_Word ConsTag_13;
    MR_Word Var_16;
    MR_Word _ConsId_12;

    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_14, Var_6, &VarLval_10);
    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_14, Var_6, &Type_11);
    _ConsId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedConsId_7, (MR_Integer) 0))));
    ConsTag_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedConsId_7, (MR_Integer) 1))));
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_16, 0) = ((MR_Box) (VarLval_10));
    }
    *TagTestExpr_8 = ml_backend__ml_unify_gen__ml_gen_tag_test_rval_4_f_0(STATE_VARIABLE_Info_0_14, ConsTag_13, Type_11, Var_16);
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__200__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__232__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__220__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__168__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
          MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_7, (MR_Integer) 0))));
          MR_Word ConsId_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_7, (MR_Integer) 1))));
          MR_Word Args_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_7, (MR_Integer) 2))));
          MR_Word ArgModes_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_7, (MR_Integer) 3))));
          MR_Word HowToConstruct_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_7, (MR_Integer) 4))));
          MR_Word SubInfo_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_7, (MR_Integer) 6))));
          MR_Word TakeAddr_35;
          MR_Word Var_61;
          MR_Word _CellIsUnique_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_7, (MR_Integer) 5))));

          {
            Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[13]));
            MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_2));
            MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (CodeModel_8));
            MR_hl_field(MR_mktag(0), Var_61, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_61, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unification\'/6", (MR_String) "construct not det");
          if ((SubInfo_34 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            TakeAddr_35 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          else
          {
            MR_Word MaybeTakeAddr_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_34, (MR_Integer) 0))));
            MR_Word MaybeSizeProfInfo_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_34, (MR_Integer) 1))));
            MR_Word Var_65;

            if ((MaybeTakeAddr_36 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              TakeAddr_35 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            else
              TakeAddr_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTakeAddr_36, (MR_Integer) 0))));
            {
              Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[14]));
              MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_3));
              MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (MaybeSizeProfInfo_37));
              MR_hl_field(MR_mktag(0), Var_65, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            mercury__require__expect_3_p_0(Var_65, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unification\'/6", (MR_String) "term size profiling not yet supported");
          }
          ml_backend__ml_unify_gen__ml_gen_construct_10_p_0(Var_28, ConsId_29, Args_30, ArgModes_31, TakeAddr_35, HowToConstruct_32, Context_9, Stmts_10, STATE_VARIABLE_Info_0_49, STATE_VARIABLE_Info_50);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CanFail_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_7, (MR_Integer) 4))));
          MR_Word CanCGC_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_7, (MR_Integer) 5))));
          MR_Word ExpectedCodeModel_40;
          MR_Word UnifyStmts_41;
          MR_Word Stmts0_45;
          MR_Word STATE_VARIABLE_Info_54_54;
          MR_Word Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_7, (MR_Integer) 0))));
          MR_Word ConsId_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_7, (MR_Integer) 1))));
          MR_Word Args_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_7, (MR_Integer) 2))));
          MR_Word ArgModes_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_7, (MR_Integer) 3))));

          switch (CanFail_38) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ExpectedCodeModel_40 = (MR_Integer) 1;
                ml_backend__ml_unify_gen__ml_gen_semi_deconstruct_8_p_0(Var_91, ConsId_92, Args_93, ArgModes_94, Context_9, &UnifyStmts_41, STATE_VARIABLE_Info_0_49, &STATE_VARIABLE_Info_54_54);
              }
              break;
            case (MR_Integer) 1:
              {
                ExpectedCodeModel_40 = (MR_Integer) 0;
                ml_backend__ml_unify_gen__ml_gen_det_deconstruct_8_p_0(Var_91, ConsId_92, Args_93, ArgModes_94, Context_9, &UnifyStmts_41, STATE_VARIABLE_Info_0_49, &STATE_VARIABLE_Info_54_54);
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
                MR_Word Var_57;
                MR_Word Var_58;

                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_54_54, Var_91, &VarLval_42);
                {
                  Var_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_57, 0) = ((MR_Box) (VarLval_42));
                }
                {
                  Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  MR_hl_field(MR_mktag(3), Var_55, 2) = ((MR_Box) (Var_57));
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
                  Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (CGCStmt_44));
                  MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                Stmts0_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), UnifyStmts_41, Var_58);
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
          MR_Word TargetVar_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_7, (MR_Integer) 0))));
          MR_Word SourceVar_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_7, (MR_Integer) 1))));
          MR_Word Type_14;
          MR_Word ModuleInfo_15;
          MR_Word IsDummyType_16;
          MR_Word Var_82;
          MR_Word GroundTerm_20;

          {
            Var_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[13]));
            MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_1));
            MR_hl_field(MR_mktag(0), Var_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_82, 3) = ((MR_Box) (CodeModel_8));
            MR_hl_field(MR_mktag(0), Var_82, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_82, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unification\'/6", (MR_String) "assign not det");
          ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_49, TargetVar_12, &Type_14);
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_49, &ModuleInfo_15);
          IsDummyType_16 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_15, Type_14);
          switch (IsDummyType_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *Stmts_10 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              break;
            case (MR_Integer) 1:
              {
                MR_Word TargetLval_17;
                MR_Word SourceLval_18;
                MR_Word Stmt_19;
                MR_Word Var_86;

                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_49, TargetVar_12, &TargetLval_17);
                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_49, SourceVar_13, &SourceLval_18);
                {
                  Var_86 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_86, 0) = ((MR_Box) (SourceLval_18));
                }
                Stmt_19 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(TargetLval_17, Var_86, Context_9);
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
              MR_Word VarA_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_7, (MR_Integer) 1))));
              MR_Word VarB_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_7, (MR_Integer) 2))));
              MR_Word EqualityOp_23;
              MR_Word VarALval_25;
              MR_Word VarBLval_26;
              MR_Word Test_27;
              MR_Word Var_70;
              MR_Word Var_78;
              MR_Word Var_79;
              MR_Word Type_89;
              MR_Word Stmt_90;
              MR_Word Var_74;

              {
                Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[13]));
                MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_4));
                MR_hl_field(MR_mktag(0), Var_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_70, 3) = ((MR_Box) (CodeModel_8));
                MR_hl_field(MR_mktag(0), Var_70, 4) = ((MR_Box) ((MR_Integer) 1));
              }
              mercury__require__expect_3_p_0(Var_70, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unification\'/6", (MR_String) "simple_test not semidet");
              ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_49, VarA_21, &Type_89);
              succeeded = ((MR_tag((MR_Word) Type_89)) == (MR_mktag((MR_Integer) 2)));
              if (succeeded)
              {
                Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_89, (MR_Integer) 0))));
                succeeded = (Var_74 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              }
              if (succeeded)
                EqualityOp_23 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)));
              else
              {
                MR_Word Var_75;

                succeeded = ((MR_tag((MR_Word) Type_89)) == (MR_mktag((MR_Integer) 2)));
                if (succeeded)
                {
                  Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_89, (MR_Integer) 0))));
                  succeeded = (Var_75 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                if (succeeded)
                  EqualityOp_23 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)));
                else
                {
                  MR_Word IntType_24;
                  MR_Word Var_76;

                  succeeded = ((MR_tag((MR_Word) Type_89)) == (MR_mktag((MR_Integer) 2)));
                  if (succeeded)
                  {
                    Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_89, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) Var_76)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                      IntType_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_76, (MR_Integer) 0))));
                  }
                  if (succeeded)
                    {
                      EqualityOp_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), EqualityOp_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                      MR_hl_field(MR_mktag(3), EqualityOp_23, 1) = ((MR_Box) (IntType_24));
                    }
                  else
                  {
                    EqualityOp_23 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[16]));
                  }
                }
              }
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_49, VarA_21, &VarALval_25);
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_49, VarB_22, &VarBLval_26);
              {
                Var_78 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_78, 0) = ((MR_Box) (VarALval_25));
              }
              {
                Var_79 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_79, 0) = ((MR_Box) (VarBLval_26));
              }
              {
                Test_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Test_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), Test_27, 1) = ((MR_Box) (EqualityOp_23));
                MR_hl_field(MR_mktag(3), Test_27, 2) = ((MR_Box) (Var_78));
                MR_hl_field(MR_mktag(3), Test_27, 3) = ((MR_Box) (Var_79));
              }
              ml_backend__ml_code_util__ml_gen_set_success_5_p_0(Test_27, Context_9, &Stmt_90, STATE_VARIABLE_Info_0_49, STATE_VARIABLE_Info_50);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_90));
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
    MR_Word ConsTag_44;
    MR_Word Var_45;
    MR_Word ModuleInfo_49;

    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_24, Var_9, &VarLval_42);
    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_24, Var_9, &Type_43);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_24, &ModuleInfo_49);
    ConsTag_44 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_49, ConsId_10);
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_45, 0) = ((MR_Box) (VarLval_42));
    }
    TagTestExpr_16 = ml_backend__ml_unify_gen__ml_gen_tag_test_rval_4_f_0(STATE_VARIABLE_Info_0_24, ConsTag_44, Type_43, Var_45);
    ml_backend__ml_code_util__ml_gen_set_success_5_p_0(TagTestExpr_16, Context_13, &SetTagTestResult_17, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_27_27);
    ml_backend__ml_code_util__ml_gen_test_success_3_p_0(&SucceededExpr_18, STATE_VARIABLE_Info_27_27, &STATE_VARIABLE_Info_28_28);
    ml_backend__ml_unify_gen__ml_gen_det_deconstruct_8_p_0(Var_9, ConsId_10, ArgVars_11, ArgModes_12, Context_13, &GetArgsStmts_19, STATE_VARIABLE_Info_28_28, STATE_VARIABLE_Info_25);
    if ((GetArgsStmts_19 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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

      GetArgs_22 = ml_backend__ml_code_util__ml_gen_block_4_f_0((MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))), (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))), GetArgsStmts_19, Context_13);
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
  MR_Word ConsTag_7,
  MR_Word Type_8,
  MR_Word Rval_9)
{
  {
    MR_bool succeeded;
    MR_Word TagTestRval_10;

    switch (MR_tag((MR_Word) ConsTag_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              TagTestRval_10 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[26]));
            }
            break;
          case (MR_Integer) 1:
            {
              TagTestRval_10 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[26]));
            }
            break;
          case (MR_Integer) 2:
            {
              TagTestRval_10 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[26]));
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String String_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConsTag_7, (MR_Integer) 0))));
          MR_Word Var_89;
          MR_Word Var_90;

          {
            Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
            MR_hl_field(MR_mktag(3), Var_90, 1) = ((MR_Box) (String_11));
          }
          {
            Var_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_89, 1) = ((MR_Box) (Var_90));
          }
          {
            TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (Rval_9));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (Var_89));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float Float_12 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_7, (MR_Integer) 0)));
          MR_Word Var_86;
          MR_Word Var_87;

          {
            Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
            MR_hl_field(MR_mktag(3), Var_87, 1) = MR_box_float(Float_12);
          }
          {
            Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_86, 1) = ((MR_Box) (Var_87));
          }
          {
            TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (Rval_9));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (Var_86));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word IntTag_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 1))));
              MR_Word ModuleInfo_14;

              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_6, &ModuleInfo_14);
              TagTestRval_10 = ml_backend__ml_unify_gen__ml_gen_int_tag_test_rval_4_f_0(IntTag_13, Type_8, ModuleInfo_14, Rval_9);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ForeignLang_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 1))));
              MR_String ForeignVal_16 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 2))));
              MR_Word MLDS_Type_17;
              MR_Word Const_18;
              MR_Word Var_82;
              MR_Word ModuleInfo_91;

              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_6, &ModuleInfo_91);
              MLDS_Type_17 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_91, Type_8);
              {
                Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (ForeignLang_15));
                MR_hl_field(MR_mktag(3), Var_82, 2) = ((MR_Box) (ForeignVal_16));
                MR_hl_field(MR_mktag(3), Var_82, 3) = ((MR_Box) (MLDS_Type_17));
              }
              {
                Const_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Const_18, 1) = ((MR_Box) (Var_82));
              }
              {
                TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[16])));
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
              MR_Integer UnsharedPtag_94 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 1))));
              MR_Word RvalTag_95;
              MR_Word UnsharedTag_96;
              MR_Word Var_99;
              MR_Word Var_100;

              {
                RvalTag_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), RvalTag_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), RvalTag_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                MR_hl_field(MR_mktag(3), RvalTag_95, 2) = ((MR_Box) (Rval_9));
              }
              {
                Var_100 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_100, 0) = ((MR_Box) (UnsharedPtag_94));
              }
              {
                Var_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_99, 1) = ((MR_Box) (Var_100));
              }
              {
                UnsharedTag_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), UnsharedTag_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), UnsharedTag_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(3), UnsharedTag_96, 2) = ((MR_Box) (Var_99));
              }
              {
                TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[16])));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (RvalTag_95));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (UnsharedTag_96));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer UnsharedPtag_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 1))));
              MR_Word RvalTag_39;
              MR_Word UnsharedTag_40;
              MR_Word Var_73;
              MR_Word Var_74;

              {
                RvalTag_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), RvalTag_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), RvalTag_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                MR_hl_field(MR_mktag(3), RvalTag_39, 2) = ((MR_Box) (Rval_9));
              }
              {
                Var_74 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_74, 0) = ((MR_Box) (UnsharedPtag_38));
              }
              {
                Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (Var_74));
              }
              {
                UnsharedTag_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), UnsharedTag_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), UnsharedTag_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(3), UnsharedTag_40, 2) = ((MR_Box) (Var_73));
              }
              {
                TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[16])));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (RvalTag_39));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (UnsharedTag_40));
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Integer PrimaryTag_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 1))));
              MR_Integer SecondaryTag_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 2))));
              MR_Word SecondaryTagFieldRval_44;
              MR_Word SecondaryTagTestRval_45;
              MR_Integer NumPtagBits_46;
              MR_Word Var_60;
              MR_Word Var_62;
              MR_Word Var_63;
              MR_Word _AddedBy_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 3))));

              ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_p_0(Info_6, Type_8, Rval_9, PrimaryTag_41, &SecondaryTagFieldRval_44);
              Var_60 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[16]));
              {
                Var_63 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_63, 0) = ((MR_Box) (SecondaryTag_42));
              }
              {
                Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_62, 1) = ((MR_Box) (Var_63));
              }
              {
                SecondaryTagTestRval_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), SecondaryTagTestRval_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), SecondaryTagTestRval_45, 1) = ((MR_Box) (Var_60));
                MR_hl_field(MR_mktag(3), SecondaryTagTestRval_45, 2) = ((MR_Box) (SecondaryTagFieldRval_44));
                MR_hl_field(MR_mktag(3), SecondaryTagTestRval_45, 3) = ((MR_Box) (Var_62));
              }
              ml_backend__ml_gen_info__ml_gen_info_get_num_ptag_bits_2_p_0(Info_6, &NumPtagBits_46);
              succeeded = (NumPtagBits_46 == (MR_Integer) 0);
              if (succeeded)
                TagTestRval_10 = SecondaryTagTestRval_45;
              else
              {
                MR_Word RvalPtag_47;
                MR_Word PrimaryTagRval_48;
                MR_Word PrimaryTagTestRval_49;
                MR_Word Var_66;
                MR_Word Var_67;

                {
                  RvalPtag_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), RvalPtag_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), RvalPtag_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                  MR_hl_field(MR_mktag(3), RvalPtag_47, 2) = ((MR_Box) (Rval_9));
                }
                {
                  Var_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_67, 0) = ((MR_Box) (PrimaryTag_41));
                }
                {
                  Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (Var_67));
                }
                {
                  PrimaryTagRval_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), PrimaryTagRval_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), PrimaryTagRval_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(3), PrimaryTagRval_48, 2) = ((MR_Box) (Var_66));
                }
                {
                  PrimaryTagTestRval_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), PrimaryTagTestRval_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                  MR_hl_field(MR_mktag(3), PrimaryTagTestRval_49, 1) = ((MR_Box) (Var_60));
                  MR_hl_field(MR_mktag(3), PrimaryTagTestRval_49, 2) = ((MR_Box) (RvalPtag_47));
                  MR_hl_field(MR_mktag(3), PrimaryTagTestRval_49, 3) = ((MR_Box) (PrimaryTagRval_48));
                }
                {
                  TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                  MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (PrimaryTagTestRval_49));
                  MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (SecondaryTagTestRval_45));
                }
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Integer Ptag_50 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 1))));
              MR_Integer Num_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 2))));
              MR_Word Var_54;
              MR_Word Var_55;
              MR_Word Var_56;
              MR_Word Var_58;
              MR_Word Var_59;
              MR_Word ModuleInfo_92;
              MR_Word MLDS_Type_93;

              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_6, &ModuleInfo_92);
              MLDS_Type_93 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_92, Type_8);
              {
                Var_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_59, 0) = ((MR_Box) (Num_51));
              }
              {
                Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (Var_59));
              }
              {
                Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                MR_hl_field(MR_mktag(3), Var_56, 2) = ((MR_Box) (Var_58));
              }
              {
                Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (Ptag_50));
                MR_hl_field(MR_mktag(3), Var_55, 2) = ((MR_Box) (Var_56));
              }
              {
                Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), Var_54, 1) = ((MR_Box) (MLDS_Type_93));
                MR_hl_field(MR_mktag(3), Var_54, 2) = ((MR_Box) (Var_55));
              }
              {
                TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[16])));
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
          MR_Integer Int_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), IntTag_6, (MR_Integer) 0))));
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
            MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[16])));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (Rval_9));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (ConstRval_12));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Unsigned UInt_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), IntTag_6, (MR_Integer) 0))));
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
            MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[21])));
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
            MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[20])));
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
                MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[25])));
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
                MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[17])));
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
                MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[22])));
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
                MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[18])));
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
                MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[23])));
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
                MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[19])));
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
                MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[24])));
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
          MR_Word Var_20;
          MR_Word Var_21;
          MR_Word Var_22;

          {
            Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (PrimaryTag_9));
          }
          {
            Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (Var_22));
            MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (Rval_8));
            MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_5[2]));
            MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
            MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (MLDS_VarType_13));
          }
          {
            Var_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_20, 0) = ((MR_Box) (Var_21));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *StagFieldRval_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_20));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Target_14;
          MR_Word FieldId_15;
          MR_Word Var_16;
          MR_Word Var_17;
          MR_Word TypeCtor_32;
          MR_Word QualifiedTypeName_33;
          MR_Integer TypeArity_34;
          MR_Word MLDS_Module_35;
          MR_Word TypeQualKind_36;
          MR_String TypeName_37;
          MR_Word TypeTable_38;
          MR_Word TypeDefn_39;
          MR_Word TypeDefnBody_40;
          MR_Word ClassQualifier_49;
          MR_Word ClassQualKind_50;
          MR_String ClassName_51;
          MR_Integer ClassArity_52;
          MR_Word QualClassName_57;
          MR_Word ClassId_58;
          MR_Word ClassPtrType_59;
          MR_Word FieldQualifier_60;
          MR_Word QualifiedFieldName_61;
          MR_Word Var_69;

          ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(Info_6, &Target_14);
          parse_tree__prog_type__type_to_ctor_det_2_p_0(VarType_7, &TypeCtor_32);
          ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_32, &QualifiedTypeName_33, &TypeArity_34);
          MLDS_Module_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualifiedTypeName_33, (MR_Integer) 0))));
          TypeQualKind_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualifiedTypeName_33, (MR_Integer) 1))));
          TypeName_37 = ((MR_String) ((MR_hl_field(MR_mktag(0), QualifiedTypeName_33, (MR_Integer) 2))));
          hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_12, &TypeTable_38);
          hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_38, TypeCtor_32, &TypeDefn_39);
          hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_39, &TypeDefnBody_40);
          switch (MR_tag((MR_Word) TypeDefnBody_40)) {
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
                MR_Word MaybeRepn_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeDefnBody_40, (MR_Integer) 2))));
                MR_Word Repn_45;
                MR_Word CtorRepns_46;
                MR_Integer NumWith_47;
                MR_Integer NumWithout_48;
                MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeDefnBody_40, (MR_Integer) 0))));
                MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeDefnBody_40, (MR_Integer) 1))));
                MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeDefnBody_40, (MR_Integer) 3))));
                MR_Word Var_72;
                MR_Word Var_73;
                MR_Word Var_74;
                MR_Word Var_75;
                MR_Integer Var_67;

                if ((MaybeRepn_43 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_unify_gen.ml_gen_hl_tag_field_id\'/3", (MR_String) "MaybeRepn = no");
                    return;
                  }
                }
                else
                  Repn_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRepn_43, (MR_Integer) 0))));
                CtorRepns_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn_45, (MR_Integer) 0))));
                Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn_45, (MR_Integer) 1))));
                Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn_45, (MR_Integer) 2))));
                Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn_45, (MR_Integer) 3))));
                Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn_45, (MR_Integer) 4))));
                ml_backend__ml_type_gen__ctors_with_and_without_secondary_tag_3_p_0(CtorRepns_46, &NumWith_47, &NumWithout_48);
                succeeded = (NumWith_47 > (MR_Integer) 0);
                if (succeeded)
                {
                  Var_67 = (MR_Integer) 0;
                  succeeded = (NumWithout_48 > Var_67);
                }
                if (succeeded)
                {
                  ClassQualifier_49 = ml_backend__mlds__mlds_append_class_qualifier_module_qual_3_f_0(MLDS_Module_35, TypeName_37, TypeArity_34);
                  ClassQualKind_50 = TypeQualKind_36;
                  ClassName_51 = (MR_String) "tag_type";
                  ClassArity_52 = (MR_Integer) 0;
                }
                else
                {
                  ClassQualifier_49 = MLDS_Module_35;
                  ClassQualKind_50 = (MR_Integer) 0;
                  ClassName_51 = TypeName_37;
                  ClassArity_52 = TypeArity_34;
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
            QualClassName_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), QualClassName_57, 0) = ((MR_Box) (ClassQualifier_49));
            MR_hl_field(MR_mktag(0), QualClassName_57, 1) = ((MR_Box) (ClassQualKind_50));
            MR_hl_field(MR_mktag(0), QualClassName_57, 2) = ((MR_Box) (ClassName_51));
          }
          {
            ClassId_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ClassId_58, 0) = ((MR_Box) (QualClassName_57));
            MR_hl_field(MR_mktag(0), ClassId_58, 1) = ((MR_Box) (ClassArity_52));
            MR_hl_field(MR_mktag(0), ClassId_58, 2) = ((MR_Box) ((MR_Integer) 0));
          }
          Var_69 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ClassId_58)));
          {
            ClassPtrType_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ClassPtrType_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), ClassPtrType_59, 1) = ((MR_Box) (Var_69));
          }
          FieldQualifier_60 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(Target_14, ClassQualifier_49, ClassQualKind_50, ClassName_51, ClassArity_52);
          {
            QualifiedFieldName_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), QualifiedFieldName_61, 0) = ((MR_Box) (FieldQualifier_60));
            MR_hl_field(MR_mktag(0), QualifiedFieldName_61, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), QualifiedFieldName_61, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          }
          {
            FieldId_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), FieldId_15, 0) = ((MR_Box) (QualifiedFieldName_61));
            MR_hl_field(MR_mktag(1), FieldId_15, 1) = ((MR_Box) (ClassPtrType_59));
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
  MR_Word STATE_VARIABLE_Info_0_61,
  MR_Word * STATE_VARIABLE_Info_62)
{
  {
    MR_bool succeeded;
    MR_Word VarType_16;
    MR_Word ConsTag_17;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_61, Var_9, &VarType_16);
    ml_backend__ml_unify_gen__ml_cons_id_to_tag_3_p_0(STATE_VARIABLE_Info_0_61, ConsId_10, &ConsTag_17);
    switch (MR_tag((MR_Word) ConsTag_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_17)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word FieldGen_56;
              MR_Word InitOffSet_58;
              MR_Integer ArgNum_59;
              MR_Word ArgVarRepns_60;
              MR_Word VarLval_97;
              MR_Integer Var_57;

              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_61, Var_9, &VarLval_97);
              ml_backend__ml_unify_gen__decide_field_gen_6_p_0(STATE_VARIABLE_Info_0_61, VarLval_97, VarType_16, ConsId_10, ConsTag_17, &FieldGen_56);
              ml_backend__ml_unify_gen__ml_tag_initial_offset_and_argnum_4_p_0(ConsTag_17, &Var_57, &InitOffSet_58, &ArgNum_59);
              ml_backend__ml_unify_gen__ml_field_names_and_types_6_p_0(STATE_VARIABLE_Info_0_61, VarType_16, ConsId_10, InitOffSet_58, ArgVars_11, &ArgVarRepns_60);
              ml_backend__ml_unify_gen__ml_gen_unify_args_10_p_0(FieldGen_56, ArgVarRepns_60, Modes_12, InitOffSet_58, ArgNum_59, Context_13, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))), Stmts_14, STATE_VARIABLE_Info_0_61, STATE_VARIABLE_Info_62);
            }
            break;
          case (MR_Integer) 1:
            {
              *Stmts_14 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              *STATE_VARIABLE_Info_62 = STATE_VARIABLE_Info_0_61;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgVar_44;
              MR_Word Mode_45;
              MR_Word Var_69;
              MR_Word Var_70;

              succeeded = ((MR_tag((MR_Word) ArgVars_11)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                ArgVar_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_11, (MR_Integer) 0))));
                Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_11, (MR_Integer) 1))));
                succeeded = (Var_69 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Modes_12)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Mode_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modes_12, (MR_Integer) 0))));
                    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modes_12, (MR_Integer) 1))));
                    succeeded = (Var_70 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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

                ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_61, ArgVar_44, &ArgType_46);
                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_61, ArgVar_44, &ArgLval_47);
                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_61, Var_9, &VarLval_48);
                ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_61, &ModuleInfo_49);
                ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_61, &HighLevelData_50);
                ml_backend__ml_unify_gen__ml_gen_sub_unify_11_p_0(ModuleInfo_49, HighLevelData_50, Mode_45, ArgLval_47, ArgType_46, VarLval_48, VarType_16, (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_1[7])), Context_13, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))), Stmts_14);
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_det_deconstruct\'/8", (MR_String) "no_tag: arity != 1");
                  return;
                }
              }
              *STATE_VARIABLE_Info_62 = STATE_VARIABLE_Info_0_61;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *Stmts_14 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          *STATE_VARIABLE_Info_62 = STATE_VARIABLE_Info_0_61;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 14:
            {
              *Stmts_14 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              *STATE_VARIABLE_Info_62 = STATE_VARIABLE_Info_0_61;
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
              MR_Word FieldGen_56;
              MR_Word InitOffSet_58;
              MR_Integer ArgNum_59;
              MR_Word ArgVarRepns_60;
              MR_Word VarLval_97;
              MR_Integer Var_57;

              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_61, Var_9, &VarLval_97);
              ml_backend__ml_unify_gen__decide_field_gen_6_p_0(STATE_VARIABLE_Info_0_61, VarLval_97, VarType_16, ConsId_10, ConsTag_17, &FieldGen_56);
              ml_backend__ml_unify_gen__ml_tag_initial_offset_and_argnum_4_p_0(ConsTag_17, &Var_57, &InitOffSet_58, &ArgNum_59);
              ml_backend__ml_unify_gen__ml_field_names_and_types_6_p_0(STATE_VARIABLE_Info_0_61, VarType_16, ConsId_10, InitOffSet_58, ArgVars_11, &ArgVarRepns_60);
              ml_backend__ml_unify_gen__ml_gen_unify_args_10_p_0(FieldGen_56, ArgVarRepns_60, Modes_12, InitOffSet_58, ArgNum_59, Context_13, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))), Stmts_14, STATE_VARIABLE_Info_0_61, STATE_VARIABLE_Info_62);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer Ptag_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1))));
              MR_Word ArgVar_85;
              MR_Word Mode_86;
              MR_Word Var_65;
              MR_Word Var_66;

              succeeded = ((MR_tag((MR_Word) ArgVars_11)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                ArgVar_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_11, (MR_Integer) 0))));
                Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_11, (MR_Integer) 1))));
                succeeded = (Var_65 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Modes_12)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Mode_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modes_12, (MR_Integer) 0))));
                    Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modes_12, (MR_Integer) 1))));
                    succeeded = (Var_66 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              }
              if (succeeded)
              {
                MR_Word ArgType_81;
                MR_Word ArgLval_82;
                MR_Word VarLval_83;
                MR_Word ModuleInfo_84;

                ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_61, ArgVar_85, &ArgType_81);
                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_61, ArgVar_85, &ArgLval_82);
                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_61, Var_9, &VarLval_83);
                ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_61, &ModuleInfo_84);
                ml_backend__ml_unify_gen__ml_gen_direct_arg_deconstruct_9_p_0(ModuleInfo_84, Mode_86, Ptag_51, ArgLval_82, ArgType_81, VarLval_83, VarType_16, Context_13, Stmts_14);
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_det_deconstruct\'/8", (MR_String) "direct_arg_tag: arity != 1");
                  return;
                }
              }
              *STATE_VARIABLE_Info_62 = STATE_VARIABLE_Info_0_61;
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
    MR_Word LeftFromToInsts_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_11, (MR_Integer) 0))));
    MR_Word RightFromToInsts_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_11, (MR_Integer) 1))));
    MR_Word LeftTopMode_48;
    MR_Word RightTopMode_49;
    MR_Word Var_50;

    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_10, LeftFromToInsts_46, ArgType_14, &LeftTopMode_48);
    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_10, RightFromToInsts_47, ArgType_14, &RightTopMode_49);
    Var_50 = check_hlds__type_util__is_either_type_a_dummy_3_f_0(ModuleInfo_10, ArgType_14, VarType_16);
    succeeded = (Var_50 == (MR_Integer) 0);
    if (succeeded)
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_direct_arg_deconstruct\'/9", (MR_String) "dummy unify");
        return;
      }
    }
    else
    {
      MR_Word Dir_59;

      switch (LeftTopMode_48) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (RightTopMode_49) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.compute_assign_direction\'/5", (MR_String) "test in arg of [de]construction");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              Dir_59 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.compute_assign_direction\'/5", (MR_String) "some strange unify");
                  return;
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          switch (RightTopMode_49) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Dir_59 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.compute_assign_direction\'/5", (MR_String) "some strange unify");
                  return;
                }
              }
              break;
          }
          break;
        case (MR_Integer) 2:
          switch (RightTopMode_49) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.compute_assign_direction\'/5", (MR_String) "some strange unify");
                  return;
                }
              }
              break;
            case (MR_Integer) 2:
              Dir_59 = (MR_Integer) 2;
              break;
          }
          break;
      }
      switch (Dir_59) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgRval_24;
            MR_Word Var_28;
            MR_Word Var_29;
            MR_Word MLDS_Type_38;
            MR_Word CastRval_39;
            MR_Word Stmt_40;

            {
              Var_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_28, 0) = ((MR_Box) (ArgLval_13));
            }
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, ArgType_14, VarType_16, (MR_Integer) 0, Var_28, &ArgRval_24);
            MLDS_Type_38 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_10, VarType_16);
            {
              Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (Ptag_12));
              MR_hl_field(MR_mktag(3), Var_29, 2) = ((MR_Box) (ArgRval_24));
            }
            {
              CastRval_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), CastRval_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), CastRval_39, 1) = ((MR_Box) (MLDS_Type_38));
              MR_hl_field(MR_mktag(3), CastRval_39, 2) = ((MR_Box) (Var_29));
            }
            Stmt_40 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_15, CastRval_39, Context_17);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_18 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_40));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word VarRval_20;
            MR_Word MLDS_Type_21;
            MR_Word CastRval_22;
            MR_Word Stmt_23;
            MR_Word Var_32;
            MR_Word Var_33;
            MR_Word Var_35;
            MR_Word Var_36;

            {
              Var_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_32, 0) = ((MR_Box) (VarLval_15));
            }
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, VarType_16, ArgType_14, (MR_Integer) 0, Var_32, &VarRval_20);
            MLDS_Type_21 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_10, ArgType_14);
            {
              Var_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_36, 0) = ((MR_Box) (Ptag_12));
            }
            {
              Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (Var_36));
            }
            {
              Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
              MR_hl_field(MR_mktag(3), Var_33, 2) = ((MR_Box) (VarRval_20));
              MR_hl_field(MR_mktag(3), Var_33, 3) = ((MR_Box) (Var_35));
            }
            {
              CastRval_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), CastRval_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), CastRval_22, 1) = ((MR_Box) (MLDS_Type_21));
              MR_hl_field(MR_mktag(3), CastRval_22, 2) = ((MR_Box) (Var_33));
            }
            Stmt_23 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_13, CastRval_22, Context_17);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_18 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_23));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          break;
        case (MR_Integer) 2:
          *Stmts_18 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          break;
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unify_args_10_p_0(
  MR_Word FieldGen_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word CurOffset_4,
  MR_Integer CurArgNum_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_Stmts_0_7,
  MR_Word * STATE_VARIABLE_Stmts_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  if ((HeadVar__2_2 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    if ((HeadVar__3_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
      *STATE_VARIABLE_Stmts_8 = STATE_VARIABLE_Stmts_0_7;
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unify_args\'/10", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unify_args\'/10", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word Mode_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Modes_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word NextOffset_59;
      MR_Integer NextArgNum_60;
      MR_Word STATE_VARIABLE_Stmts_66_66;
      MR_Word STATE_VARIABLE_Info_67_67;

      ml_backend__ml_unify_gen__ml_next_field_offset_4_p_0(Var_71, Var_70, CurOffset_4, &NextOffset_59);
      NextArgNum_60 = (MR_Integer) ((MR_Unsigned) CurArgNum_5 + (MR_Unsigned) (MR_Integer) 1);
      ml_backend__ml_unify_gen__ml_gen_unify_args_10_p_0(FieldGen_1, Var_70, Modes_53, NextOffset_59, NextArgNum_60, Context_6, STATE_VARIABLE_Stmts_0_7, &STATE_VARIABLE_Stmts_66_66, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_67_67);
      ml_backend__ml_unify_gen__ml_gen_unify_arg_10_p_0(FieldGen_1, Var_71, Mode_52, CurOffset_4, CurArgNum_5, Context_6, STATE_VARIABLE_Stmts_66_66, STATE_VARIABLE_Stmts_8, STATE_VARIABLE_Info_67_67, STATE_VARIABLE_Info_10);
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_construct_10_p_0(
  MR_Word Var_11,
  MR_Word ConsId_12,
  MR_Word ArgVars_13,
  MR_Word ArgModes_14,
  MR_Word TakeAddr_15,
  MR_Word HowToConstruct_16,
  MR_Word Context_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_101,
  MR_Word * STATE_VARIABLE_Info_102)
{
  {
    MR_bool succeeded;
    MR_Word VarType_20;
    MR_Word ConsTag_21;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_101, Var_11, &VarType_20);
    ml_backend__ml_unify_gen__ml_cons_id_to_tag_3_p_0(STATE_VARIABLE_Info_0_101, ConsId_12, &ConsTag_21);
    switch (MR_tag((MR_Word) ConsTag_21)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_21)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word UsesBaseClass_202;

              UsesBaseClass_202 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(ConsTag_21);
              ml_backend__ml_unify_gen__ml_gen_compound_13_p_0(ConsId_12, (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))), UsesBaseClass_202, Var_11, ArgVars_13, ArgModes_14, TakeAddr_15, HowToConstruct_16, Context_17, Stmts_18, STATE_VARIABLE_Info_0_101, STATE_VARIABLE_Info_102);
            }
            break;
          case (MR_Integer) 1:
            if ((ArgVars_13 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word VarLval_172;
              MR_Word ModuleInfo_173;
              MR_Word MLDS_Type_174;
              MR_Word Rval_175;
              MR_Word GroundTerm_176;
              MR_Word Stmt_177;

              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_101, Var_11, &VarLval_172);
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_101, &ModuleInfo_173);
              MLDS_Type_174 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_173, VarType_20);
              switch (MR_tag((MR_Word) ConsTag_21)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    Rval_175 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_5[0]), VarType_20, MLDS_Type_174);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String String_76 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConsTag_21, (MR_Integer) 0))));
                    MR_Word Var_122;

                    {
                      Var_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                      MR_hl_field(MR_mktag(3), Var_122, 1) = ((MR_Box) (String_76));
                    }
                    {
                      Rval_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Rval_175, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Rval_175, 1) = ((MR_Box) (Var_122));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Float Float_75 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_21, (MR_Integer) 0)));
                    MR_Word Var_123;

                    {
                      Var_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                      MR_hl_field(MR_mktag(3), Var_123, 1) = MR_box_float(Float_75);
                    }
                    {
                      Rval_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Rval_175, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Rval_175, 1) = ((MR_Box) (Var_123));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word IntTag_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 1))));

                        Rval_175 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0(IntTag_74, VarType_20, MLDS_Type_174);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ForeignLang_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 1))));
                        MR_String ForeignTag_78 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 2))));
                        MR_Word Var_121;

                        {
                          Var_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                          MR_hl_field(MR_mktag(3), Var_121, 1) = ((MR_Box) (ForeignLang_77));
                          MR_hl_field(MR_mktag(3), Var_121, 2) = ((MR_Box) (ForeignTag_78));
                          MR_hl_field(MR_mktag(3), Var_121, 3) = ((MR_Box) (MLDS_Type_174));
                        }
                        {
                          Rval_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Rval_175, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Rval_175, 1) = ((MR_Box) (Var_121));
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word ModuleName0_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 1))));
                        MR_String TypeName_81 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 2))));
                        MR_Integer TypeArity_82 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 3))));
                        MR_Word ModuleName_83;
                        MR_Word MLDS_Module_84;
                        MR_Word RttiTypeCtor_85;
                        MR_Word RttiId_86;
                        MR_Word Const_87;
                        MR_Word Var_115;

                        ModuleName_83 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_80);
                        MLDS_Module_84 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_83);
                        {
                          RttiTypeCtor_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_85, 0) = ((MR_Box) (ModuleName_83));
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_85, 1) = ((MR_Box) (TypeName_81));
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_85, 2) = ((MR_Box) (TypeArity_82));
                        }
                        {
                          RttiId_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), RttiId_86, 0) = ((MR_Box) (RttiTypeCtor_85));
                          MR_hl_field(MR_mktag(0), RttiId_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
                        }
                        {
                          Const_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Const_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                          MR_hl_field(MR_mktag(3), Const_87, 1) = ((MR_Box) (MLDS_Module_84));
                          MR_hl_field(MR_mktag(3), Const_87, 2) = ((MR_Box) (RttiId_86));
                        }
                        {
                          Var_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Var_115, 1) = ((MR_Box) (Const_87));
                        }
                        {
                          Rval_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Rval_175, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), Rval_175, 1) = ((MR_Box) (MLDS_Type_174));
                          MR_hl_field(MR_mktag(3), Rval_175, 2) = ((MR_Box) (Var_115));
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word ClassId_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 2))));
                        MR_String Instance_89 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 3))));
                        MR_Word TCName_90;
                        MR_Word Var_112;
                        MR_Word Var_113;
                        MR_Word ModuleName_162 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 1))));
                        MR_Word MLDS_Module_163;
                        MR_Word RttiId_164;
                        MR_Word Const_165;

                        MLDS_Module_163 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_162);
                        TCName_90 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_88);
                        {
                          Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (ModuleName_162));
                          MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) (Instance_89));
                        }
                        {
                          RttiId_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), RttiId_164, 0) = ((MR_Box) (TCName_90));
                          MR_hl_field(MR_mktag(1), RttiId_164, 1) = ((MR_Box) (Var_112));
                        }
                        {
                          Const_165 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Const_165, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                          MR_hl_field(MR_mktag(3), Const_165, 1) = ((MR_Box) (MLDS_Module_163));
                          MR_hl_field(MR_mktag(3), Const_165, 2) = ((MR_Box) (RttiId_164));
                        }
                        {
                          Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Var_113, 1) = ((MR_Box) (Const_165));
                        }
                        {
                          Rval_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Rval_175, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), Rval_175, 1) = ((MR_Box) (MLDS_Type_174));
                          MR_hl_field(MR_mktag(3), Rval_175, 2) = ((MR_Box) (Var_113));
                        }
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word PredLabel_91;
                        MR_Word PredModule_92;
                        MR_Word ProcLabel_93;
                        MR_Word QualProcLabel_94;
                        MR_Word Var_109;
                        MR_Word Var_111;
                        MR_Word PredId_166 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 1))));
                        MR_Integer ProcId_167 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 2))));
                        MR_Word Const_168;

                        {
                          Var_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_109, 0) = ((MR_Box) (PredId_166));
                          MR_hl_field(MR_mktag(0), Var_109, 1) = ((MR_Box) (ProcId_167));
                        }
                        ml_backend__ml_code_util__ml_gen_pred_label_4_p_0(ModuleInfo_173, Var_109, &PredLabel_91, &PredModule_92);
                        {
                          ProcLabel_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ProcLabel_93, 0) = ((MR_Box) (PredLabel_91));
                          MR_hl_field(MR_mktag(0), ProcLabel_93, 1) = ((MR_Box) (ProcId_167));
                        }
                        {
                          QualProcLabel_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), QualProcLabel_94, 0) = ((MR_Box) (PredModule_92));
                          MR_hl_field(MR_mktag(0), QualProcLabel_94, 1) = ((MR_Box) (ProcLabel_93));
                        }
                        {
                          Const_168 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Const_168, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
                          MR_hl_field(MR_mktag(3), Const_168, 1) = ((MR_Box) (QualProcLabel_94));
                          MR_hl_field(MR_mktag(3), Const_168, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          Var_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_111, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Var_111, 1) = ((MR_Box) (Const_168));
                        }
                        {
                          Rval_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Rval_175, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), Rval_175, 1) = ((MR_Box) (MLDS_Type_174));
                          MR_hl_field(MR_mktag(3), Rval_175, 2) = ((MR_Box) (Var_111));
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
                        MR_Integer SecTag_79 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 2))));
                        MR_Word Var_116;
                        MR_Word Var_117;
                        MR_Word Var_119;
                        MR_Word Var_120;
                        MR_Integer Ptag_161 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 1))));

                        {
                          Var_120 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), Var_120, 0) = ((MR_Box) (SecTag_79));
                        }
                        {
                          Var_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Var_119, 1) = ((MR_Box) (Var_120));
                        }
                        {
                          Var_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), Var_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                          MR_hl_field(MR_mktag(3), Var_117, 2) = ((MR_Box) (Var_119));
                        }
                        {
                          Var_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), Var_116, 1) = ((MR_Box) (Ptag_161));
                          MR_hl_field(MR_mktag(3), Var_116, 2) = ((MR_Box) (Var_117));
                        }
                        {
                          Rval_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Rval_175, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), Rval_175, 1) = ((MR_Box) (MLDS_Type_174));
                          MR_hl_field(MR_mktag(3), Rval_175, 2) = ((MR_Box) (Var_116));
                        }
                      }
                      break;
                  }
                  break;
              }
              {
                GroundTerm_176 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_176, 0) = ((MR_Box) (Rval_175));
                MR_hl_field(MR_mktag(0), GroundTerm_176, 1) = ((MR_Box) (VarType_20));
                MR_hl_field(MR_mktag(0), GroundTerm_176, 2) = ((MR_Box) (MLDS_Type_174));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_11, GroundTerm_176, STATE_VARIABLE_Info_0_101, STATE_VARIABLE_Info_102);
              Stmt_177 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_172, Rval_175, Context_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_177));
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
              MR_Word Var_133;
              MR_Word Var_134;

              succeeded = ((MR_tag((MR_Word) ArgVars_13)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                ArgVar_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_13, (MR_Integer) 0))));
                Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_13, (MR_Integer) 1))));
                succeeded = (Var_133 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) ArgModes_14)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgMode_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_14, (MR_Integer) 0))));
                    Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_14, (MR_Integer) 1))));
                    succeeded = (Var_134 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              }
              if (succeeded)
              {
                MR_Word VarLval_25;
                MR_Word ModuleInfo_26;
                MR_Word MLDS_Type_27;
                MR_Word ArgGroundTerm_28;

                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_101, Var_11, &VarLval_25);
                ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_101, &ModuleInfo_26);
                MLDS_Type_27 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_26, VarType_20);
                succeeded = ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(STATE_VARIABLE_Info_0_101, ArgVar_23, &ArgGroundTerm_28);
                if (succeeded)
                {
                  MR_Word ArgRval_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_28, (MR_Integer) 0))));
                  MR_Word MLDS_ArgType_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_28, (MR_Integer) 2))));
                  MR_Word GlobalData0_32;
                  MR_Word Rval0_33;
                  MR_Word GlobalData_34;
                  MR_Word Rval_35;
                  MR_Word GroundTerm_36;
                  MR_Word Stmt_37;
                  MR_Word STATE_VARIABLE_Info_136_136;
                  MR_Word _ArgType_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_28, (MR_Integer) 1))));

                  ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_101, &GlobalData0_32);
                  ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_26, Context_17, MLDS_ArgType_31, (MR_Integer) 2, ArgRval_29, &Rval0_33, GlobalData0_32, &GlobalData_34);
                  ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_34, STATE_VARIABLE_Info_0_101, &STATE_VARIABLE_Info_136_136);
                  Rval_35 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(MLDS_Type_27, ConsTag_21, Rval0_33);
                  {
                    GroundTerm_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), GroundTerm_36, 0) = ((MR_Box) (Rval_35));
                    MR_hl_field(MR_mktag(0), GroundTerm_36, 1) = ((MR_Box) (VarType_20));
                    MR_hl_field(MR_mktag(0), GroundTerm_36, 2) = ((MR_Box) (MLDS_Type_27));
                  }
                  ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_11, GroundTerm_36, STATE_VARIABLE_Info_136_136, STATE_VARIABLE_Info_102);
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

                  ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_101, ArgVar_23, &ArgLval_38);
                  ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_101, ArgVar_23, &ArgType_39);
                  if ((ConsTag_21 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
                  {
                    MR_Word ArgRval_145;
                    MR_Word Rval_146;
                    MR_Word Stmt_147;

                    {
                      ArgRval_145 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ArgRval_145, 0) = ((MR_Box) (ArgLval_38));
                    }
                    ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_26, ArgType_39, VarType_20, (MR_Integer) 0, ArgRval_145, &Rval_146);
                    Stmt_147 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_25, Rval_146, Context_17);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *Stmts_18 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_147));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  else
                  {
                    MR_Integer Ptag_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 1))));

                    ml_backend__ml_unify_gen__ml_gen_direct_arg_construct_9_p_0(ModuleInfo_26, ArgMode_24, Ptag_40, ArgLval_38, ArgType_39, VarLval_25, VarType_20, Context_17, Stmts_18);
                  }
                  *STATE_VARIABLE_Info_102 = STATE_VARIABLE_Info_0_101;
                }
              }
              else
              if ((ConsTag_21 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
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
        if ((ArgVars_13 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word VarLval_172;
          MR_Word ModuleInfo_173;
          MR_Word MLDS_Type_174;
          MR_Word Rval_175;
          MR_Word GroundTerm_176;
          MR_Word Stmt_177;

          ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_101, Var_11, &VarLval_172);
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_101, &ModuleInfo_173);
          MLDS_Type_174 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_173, VarType_20);
          switch (MR_tag((MR_Word) ConsTag_21)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                Rval_175 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_5[0]), VarType_20, MLDS_Type_174);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String String_76 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConsTag_21, (MR_Integer) 0))));
                MR_Word Var_122;

                {
                  Var_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                  MR_hl_field(MR_mktag(3), Var_122, 1) = ((MR_Box) (String_76));
                }
                {
                  Rval_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval_175, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Rval_175, 1) = ((MR_Box) (Var_122));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Float Float_75 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_21, (MR_Integer) 0)));
                MR_Word Var_123;

                {
                  Var_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                  MR_hl_field(MR_mktag(3), Var_123, 1) = MR_box_float(Float_75);
                }
                {
                  Rval_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval_175, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Rval_175, 1) = ((MR_Box) (Var_123));
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word IntTag_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 1))));

                    Rval_175 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0(IntTag_74, VarType_20, MLDS_Type_174);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ForeignLang_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 1))));
                    MR_String ForeignTag_78 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 2))));
                    MR_Word Var_121;

                    {
                      Var_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                      MR_hl_field(MR_mktag(3), Var_121, 1) = ((MR_Box) (ForeignLang_77));
                      MR_hl_field(MR_mktag(3), Var_121, 2) = ((MR_Box) (ForeignTag_78));
                      MR_hl_field(MR_mktag(3), Var_121, 3) = ((MR_Box) (MLDS_Type_174));
                    }
                    {
                      Rval_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Rval_175, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Rval_175, 1) = ((MR_Box) (Var_121));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word ModuleName0_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 1))));
                    MR_String TypeName_81 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 2))));
                    MR_Integer TypeArity_82 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 3))));
                    MR_Word ModuleName_83;
                    MR_Word MLDS_Module_84;
                    MR_Word RttiTypeCtor_85;
                    MR_Word RttiId_86;
                    MR_Word Const_87;
                    MR_Word Var_115;

                    ModuleName_83 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_80);
                    MLDS_Module_84 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_83);
                    {
                      RttiTypeCtor_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), RttiTypeCtor_85, 0) = ((MR_Box) (ModuleName_83));
                      MR_hl_field(MR_mktag(0), RttiTypeCtor_85, 1) = ((MR_Box) (TypeName_81));
                      MR_hl_field(MR_mktag(0), RttiTypeCtor_85, 2) = ((MR_Box) (TypeArity_82));
                    }
                    {
                      RttiId_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), RttiId_86, 0) = ((MR_Box) (RttiTypeCtor_85));
                      MR_hl_field(MR_mktag(0), RttiId_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
                    }
                    {
                      Const_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Const_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                      MR_hl_field(MR_mktag(3), Const_87, 1) = ((MR_Box) (MLDS_Module_84));
                      MR_hl_field(MR_mktag(3), Const_87, 2) = ((MR_Box) (RttiId_86));
                    }
                    {
                      Var_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Var_115, 1) = ((MR_Box) (Const_87));
                    }
                    {
                      Rval_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Rval_175, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), Rval_175, 1) = ((MR_Box) (MLDS_Type_174));
                      MR_hl_field(MR_mktag(3), Rval_175, 2) = ((MR_Box) (Var_115));
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word ClassId_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 2))));
                    MR_String Instance_89 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 3))));
                    MR_Word TCName_90;
                    MR_Word Var_112;
                    MR_Word Var_113;
                    MR_Word ModuleName_162 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 1))));
                    MR_Word MLDS_Module_163;
                    MR_Word RttiId_164;
                    MR_Word Const_165;

                    MLDS_Module_163 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_162);
                    TCName_90 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_88);
                    {
                      Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (ModuleName_162));
                      MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) (Instance_89));
                    }
                    {
                      RttiId_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), RttiId_164, 0) = ((MR_Box) (TCName_90));
                      MR_hl_field(MR_mktag(1), RttiId_164, 1) = ((MR_Box) (Var_112));
                    }
                    {
                      Const_165 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Const_165, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                      MR_hl_field(MR_mktag(3), Const_165, 1) = ((MR_Box) (MLDS_Module_163));
                      MR_hl_field(MR_mktag(3), Const_165, 2) = ((MR_Box) (RttiId_164));
                    }
                    {
                      Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Var_113, 1) = ((MR_Box) (Const_165));
                    }
                    {
                      Rval_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Rval_175, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), Rval_175, 1) = ((MR_Box) (MLDS_Type_174));
                      MR_hl_field(MR_mktag(3), Rval_175, 2) = ((MR_Box) (Var_113));
                    }
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    MR_Word PredLabel_91;
                    MR_Word PredModule_92;
                    MR_Word ProcLabel_93;
                    MR_Word QualProcLabel_94;
                    MR_Word Var_109;
                    MR_Word Var_111;
                    MR_Word PredId_166 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 1))));
                    MR_Integer ProcId_167 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 2))));
                    MR_Word Const_168;

                    {
                      Var_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_109, 0) = ((MR_Box) (PredId_166));
                      MR_hl_field(MR_mktag(0), Var_109, 1) = ((MR_Box) (ProcId_167));
                    }
                    ml_backend__ml_code_util__ml_gen_pred_label_4_p_0(ModuleInfo_173, Var_109, &PredLabel_91, &PredModule_92);
                    {
                      ProcLabel_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ProcLabel_93, 0) = ((MR_Box) (PredLabel_91));
                      MR_hl_field(MR_mktag(0), ProcLabel_93, 1) = ((MR_Box) (ProcId_167));
                    }
                    {
                      QualProcLabel_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), QualProcLabel_94, 0) = ((MR_Box) (PredModule_92));
                      MR_hl_field(MR_mktag(0), QualProcLabel_94, 1) = ((MR_Box) (ProcLabel_93));
                    }
                    {
                      Const_168 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Const_168, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
                      MR_hl_field(MR_mktag(3), Const_168, 1) = ((MR_Box) (QualProcLabel_94));
                      MR_hl_field(MR_mktag(3), Const_168, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      Var_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_111, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Var_111, 1) = ((MR_Box) (Const_168));
                    }
                    {
                      Rval_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Rval_175, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), Rval_175, 1) = ((MR_Box) (MLDS_Type_174));
                      MR_hl_field(MR_mktag(3), Rval_175, 2) = ((MR_Box) (Var_111));
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
                    MR_Integer SecTag_79 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 2))));
                    MR_Word Var_116;
                    MR_Word Var_117;
                    MR_Word Var_119;
                    MR_Word Var_120;
                    MR_Integer Ptag_161 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 1))));

                    {
                      Var_120 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_120, 0) = ((MR_Box) (SecTag_79));
                    }
                    {
                      Var_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Var_119, 1) = ((MR_Box) (Var_120));
                    }
                    {
                      Var_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), Var_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                      MR_hl_field(MR_mktag(3), Var_117, 2) = ((MR_Box) (Var_119));
                    }
                    {
                      Var_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), Var_116, 1) = ((MR_Box) (Ptag_161));
                      MR_hl_field(MR_mktag(3), Var_116, 2) = ((MR_Box) (Var_117));
                    }
                    {
                      Rval_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Rval_175, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), Rval_175, 1) = ((MR_Box) (MLDS_Type_174));
                      MR_hl_field(MR_mktag(3), Rval_175, 2) = ((MR_Box) (Var_116));
                    }
                  }
                  break;
              }
              break;
          }
          {
            GroundTerm_176 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), GroundTerm_176, 0) = ((MR_Box) (Rval_175));
            MR_hl_field(MR_mktag(0), GroundTerm_176, 1) = ((MR_Box) (VarType_20));
            MR_hl_field(MR_mktag(0), GroundTerm_176, 2) = ((MR_Box) (MLDS_Type_174));
          }
          ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_11, GroundTerm_176, STATE_VARIABLE_Info_0_101, STATE_VARIABLE_Info_102);
          Stmt_177 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_172, Rval_175, Context_17);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Stmts_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_177));
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
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 14:
            if ((ArgVars_13 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word VarLval_172;
              MR_Word ModuleInfo_173;
              MR_Word MLDS_Type_174;
              MR_Word Rval_175;
              MR_Word GroundTerm_176;
              MR_Word Stmt_177;

              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_101, Var_11, &VarLval_172);
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_101, &ModuleInfo_173);
              MLDS_Type_174 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_173, VarType_20);
              switch (MR_tag((MR_Word) ConsTag_21)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    Rval_175 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_5[0]), VarType_20, MLDS_Type_174);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String String_76 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConsTag_21, (MR_Integer) 0))));
                    MR_Word Var_122;

                    {
                      Var_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                      MR_hl_field(MR_mktag(3), Var_122, 1) = ((MR_Box) (String_76));
                    }
                    {
                      Rval_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Rval_175, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Rval_175, 1) = ((MR_Box) (Var_122));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Float Float_75 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_21, (MR_Integer) 0)));
                    MR_Word Var_123;

                    {
                      Var_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                      MR_hl_field(MR_mktag(3), Var_123, 1) = MR_box_float(Float_75);
                    }
                    {
                      Rval_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Rval_175, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Rval_175, 1) = ((MR_Box) (Var_123));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word IntTag_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 1))));

                        Rval_175 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0(IntTag_74, VarType_20, MLDS_Type_174);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ForeignLang_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 1))));
                        MR_String ForeignTag_78 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 2))));
                        MR_Word Var_121;

                        {
                          Var_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                          MR_hl_field(MR_mktag(3), Var_121, 1) = ((MR_Box) (ForeignLang_77));
                          MR_hl_field(MR_mktag(3), Var_121, 2) = ((MR_Box) (ForeignTag_78));
                          MR_hl_field(MR_mktag(3), Var_121, 3) = ((MR_Box) (MLDS_Type_174));
                        }
                        {
                          Rval_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Rval_175, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Rval_175, 1) = ((MR_Box) (Var_121));
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word ModuleName0_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 1))));
                        MR_String TypeName_81 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 2))));
                        MR_Integer TypeArity_82 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 3))));
                        MR_Word ModuleName_83;
                        MR_Word MLDS_Module_84;
                        MR_Word RttiTypeCtor_85;
                        MR_Word RttiId_86;
                        MR_Word Const_87;
                        MR_Word Var_115;

                        ModuleName_83 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_80);
                        MLDS_Module_84 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_83);
                        {
                          RttiTypeCtor_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_85, 0) = ((MR_Box) (ModuleName_83));
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_85, 1) = ((MR_Box) (TypeName_81));
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_85, 2) = ((MR_Box) (TypeArity_82));
                        }
                        {
                          RttiId_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), RttiId_86, 0) = ((MR_Box) (RttiTypeCtor_85));
                          MR_hl_field(MR_mktag(0), RttiId_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
                        }
                        {
                          Const_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Const_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                          MR_hl_field(MR_mktag(3), Const_87, 1) = ((MR_Box) (MLDS_Module_84));
                          MR_hl_field(MR_mktag(3), Const_87, 2) = ((MR_Box) (RttiId_86));
                        }
                        {
                          Var_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Var_115, 1) = ((MR_Box) (Const_87));
                        }
                        {
                          Rval_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Rval_175, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), Rval_175, 1) = ((MR_Box) (MLDS_Type_174));
                          MR_hl_field(MR_mktag(3), Rval_175, 2) = ((MR_Box) (Var_115));
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word ClassId_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 2))));
                        MR_String Instance_89 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 3))));
                        MR_Word TCName_90;
                        MR_Word Var_112;
                        MR_Word Var_113;
                        MR_Word ModuleName_162 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 1))));
                        MR_Word MLDS_Module_163;
                        MR_Word RttiId_164;
                        MR_Word Const_165;

                        MLDS_Module_163 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_162);
                        TCName_90 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_88);
                        {
                          Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (ModuleName_162));
                          MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) (Instance_89));
                        }
                        {
                          RttiId_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), RttiId_164, 0) = ((MR_Box) (TCName_90));
                          MR_hl_field(MR_mktag(1), RttiId_164, 1) = ((MR_Box) (Var_112));
                        }
                        {
                          Const_165 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Const_165, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                          MR_hl_field(MR_mktag(3), Const_165, 1) = ((MR_Box) (MLDS_Module_163));
                          MR_hl_field(MR_mktag(3), Const_165, 2) = ((MR_Box) (RttiId_164));
                        }
                        {
                          Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Var_113, 1) = ((MR_Box) (Const_165));
                        }
                        {
                          Rval_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Rval_175, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), Rval_175, 1) = ((MR_Box) (MLDS_Type_174));
                          MR_hl_field(MR_mktag(3), Rval_175, 2) = ((MR_Box) (Var_113));
                        }
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word PredLabel_91;
                        MR_Word PredModule_92;
                        MR_Word ProcLabel_93;
                        MR_Word QualProcLabel_94;
                        MR_Word Var_109;
                        MR_Word Var_111;
                        MR_Word PredId_166 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 1))));
                        MR_Integer ProcId_167 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 2))));
                        MR_Word Const_168;

                        {
                          Var_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_109, 0) = ((MR_Box) (PredId_166));
                          MR_hl_field(MR_mktag(0), Var_109, 1) = ((MR_Box) (ProcId_167));
                        }
                        ml_backend__ml_code_util__ml_gen_pred_label_4_p_0(ModuleInfo_173, Var_109, &PredLabel_91, &PredModule_92);
                        {
                          ProcLabel_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ProcLabel_93, 0) = ((MR_Box) (PredLabel_91));
                          MR_hl_field(MR_mktag(0), ProcLabel_93, 1) = ((MR_Box) (ProcId_167));
                        }
                        {
                          QualProcLabel_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), QualProcLabel_94, 0) = ((MR_Box) (PredModule_92));
                          MR_hl_field(MR_mktag(0), QualProcLabel_94, 1) = ((MR_Box) (ProcLabel_93));
                        }
                        {
                          Const_168 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Const_168, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
                          MR_hl_field(MR_mktag(3), Const_168, 1) = ((MR_Box) (QualProcLabel_94));
                          MR_hl_field(MR_mktag(3), Const_168, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          Var_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_111, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Var_111, 1) = ((MR_Box) (Const_168));
                        }
                        {
                          Rval_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Rval_175, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), Rval_175, 1) = ((MR_Box) (MLDS_Type_174));
                          MR_hl_field(MR_mktag(3), Rval_175, 2) = ((MR_Box) (Var_111));
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
                        MR_Integer SecTag_79 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 2))));
                        MR_Word Var_116;
                        MR_Word Var_117;
                        MR_Word Var_119;
                        MR_Word Var_120;
                        MR_Integer Ptag_161 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 1))));

                        {
                          Var_120 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), Var_120, 0) = ((MR_Box) (SecTag_79));
                        }
                        {
                          Var_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Var_119, 1) = ((MR_Box) (Var_120));
                        }
                        {
                          Var_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), Var_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                          MR_hl_field(MR_mktag(3), Var_117, 2) = ((MR_Box) (Var_119));
                        }
                        {
                          Var_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), Var_116, 1) = ((MR_Box) (Ptag_161));
                          MR_hl_field(MR_mktag(3), Var_116, 2) = ((MR_Box) (Var_117));
                        }
                        {
                          Rval_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Rval_175, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), Rval_175, 1) = ((MR_Box) (MLDS_Type_174));
                          MR_hl_field(MR_mktag(3), Rval_175, 2) = ((MR_Box) (Var_116));
                        }
                      }
                      break;
                  }
                  break;
              }
              {
                GroundTerm_176 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_176, 0) = ((MR_Box) (Rval_175));
                MR_hl_field(MR_mktag(0), GroundTerm_176, 1) = ((MR_Box) (VarType_20));
                MR_hl_field(MR_mktag(0), GroundTerm_176, 2) = ((MR_Box) (MLDS_Type_174));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_11, GroundTerm_176, STATE_VARIABLE_Info_0_101, STATE_VARIABLE_Info_102);
              Stmt_177 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_172, Rval_175, Context_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_177));
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
              MR_Word PredId_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 1))));
              MR_Integer ProcId_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 2))));

              ml_backend__ml_closure_gen__ml_gen_closure_10_p_0(PredId_46, ProcId_47, Var_11, ArgVars_13, ArgModes_14, HowToConstruct_16, Context_17, Stmts_18, STATE_VARIABLE_Info_0_101, STATE_VARIABLE_Info_102);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer ConstNum_206 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 1))));
              MR_Word ConstStructMap_207;
              MR_Word GroundTerm0_208;
              MR_Word VarLval_212;
              MR_Word ModuleInfo_213;
              MR_Word MLDS_Type_214;
              MR_Word Rval_215;
              MR_Word GroundTerm_216;
              MR_Word Stmt_217;
              MR_Box conv1_GroundTerm0_208;
              MR_Word _Type_204;
              MR_Word _MLDS_Type_205;

              ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_101, &ConstStructMap_207);
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_207, ConstNum_206, &conv1_GroundTerm0_208);
              GroundTerm0_208 = ((MR_Word) (conv1_GroundTerm0_208));
              Rval_215 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_208, (MR_Integer) 0))));
              _Type_204 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_208, (MR_Integer) 1))));
              _MLDS_Type_205 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_208, (MR_Integer) 2))));
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_101, Var_11, &VarLval_212);
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_101, &ModuleInfo_213);
              MLDS_Type_214 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_213, VarType_20);
              {
                GroundTerm_216 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_216, 0) = ((MR_Box) (Rval_215));
                MR_hl_field(MR_mktag(0), GroundTerm_216, 1) = ((MR_Box) (VarType_20));
                MR_hl_field(MR_mktag(0), GroundTerm_216, 2) = ((MR_Box) (MLDS_Type_214));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_11, GroundTerm_216, STATE_VARIABLE_Info_0_101, STATE_VARIABLE_Info_102);
              Stmt_217 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_212, Rval_215, Context_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_217));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Integer ConstNum_222 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 1))));
              MR_Word ConstStructMap_223;
              MR_Word GroundTerm0_224;
              MR_Word VarLval_228;
              MR_Word ModuleInfo_229;
              MR_Word MLDS_Type_230;
              MR_Word Rval_231;
              MR_Word GroundTerm_232;
              MR_Word Stmt_233;
              MR_Box conv2_GroundTerm0_224;
              MR_Word _Type_220;
              MR_Word _MLDS_Type_221;

              ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_101, &ConstStructMap_223);
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_223, ConstNum_222, &conv2_GroundTerm0_224);
              GroundTerm0_224 = ((MR_Word) (conv2_GroundTerm0_224));
              Rval_231 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_224, (MR_Integer) 0))));
              _Type_220 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_224, (MR_Integer) 1))));
              _MLDS_Type_221 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_224, (MR_Integer) 2))));
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_101, Var_11, &VarLval_228);
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_101, &ModuleInfo_229);
              MLDS_Type_230 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_229, VarType_20);
              {
                GroundTerm_232 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_232, 0) = ((MR_Box) (Rval_231));
                MR_hl_field(MR_mktag(0), GroundTerm_232, 1) = ((MR_Box) (VarType_20));
                MR_hl_field(MR_mktag(0), GroundTerm_232, 2) = ((MR_Box) (MLDS_Type_230));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_11, GroundTerm_232, STATE_VARIABLE_Info_0_101, STATE_VARIABLE_Info_102);
              Stmt_233 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_228, Rval_231, Context_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_233));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Integer ConstNum_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 1))));
              MR_Word ConstStructMap_51;
              MR_Word GroundTerm0_52;
              MR_Word VarLval_155;
              MR_Word ModuleInfo_156;
              MR_Word MLDS_Type_157;
              MR_Word Rval_158;
              MR_Word GroundTerm_159;
              MR_Word Stmt_160;
              MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 2))));
              MR_Box conv0_GroundTerm0_52;
              MR_Word _Type_53;
              MR_Word _MLDS_Type_54;

              ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_101, &ConstStructMap_51);
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_51, ConstNum_49, &conv0_GroundTerm0_52);
              GroundTerm0_52 = ((MR_Word) (conv0_GroundTerm0_52));
              Rval_158 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_52, (MR_Integer) 0))));
              _Type_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_52, (MR_Integer) 1))));
              _MLDS_Type_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_52, (MR_Integer) 2))));
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_101, Var_11, &VarLval_155);
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_101, &ModuleInfo_156);
              MLDS_Type_157 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_156, VarType_20);
              {
                GroundTerm_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_159, 0) = ((MR_Box) (Rval_158));
                MR_hl_field(MR_mktag(0), GroundTerm_159, 1) = ((MR_Box) (VarType_20));
                MR_hl_field(MR_mktag(0), GroundTerm_159, 2) = ((MR_Box) (MLDS_Type_157));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_11, GroundTerm_159, STATE_VARIABLE_Info_0_101, STATE_VARIABLE_Info_102);
              Stmt_160 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_155, Rval_158, Context_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_160));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word UsesBaseClass_237;
              MR_Integer Ptag_238 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 1))));

              UsesBaseClass_237 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(ConsTag_21);
              ml_backend__ml_unify_gen__ml_gen_compound_13_p_0(ConsId_12, Ptag_238, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))), UsesBaseClass_237, Var_11, ArgVars_13, ArgModes_14, TakeAddr_15, HowToConstruct_16, Context_17, Stmts_18, STATE_VARIABLE_Info_0_101, STATE_VARIABLE_Info_102);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word ArgVar_23;
              MR_Word ArgMode_24;
              MR_Word Var_133;
              MR_Word Var_134;

              succeeded = ((MR_tag((MR_Word) ArgVars_13)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                ArgVar_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_13, (MR_Integer) 0))));
                Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_13, (MR_Integer) 1))));
                succeeded = (Var_133 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) ArgModes_14)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgMode_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_14, (MR_Integer) 0))));
                    Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_14, (MR_Integer) 1))));
                    succeeded = (Var_134 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              }
              if (succeeded)
              {
                MR_Word VarLval_25;
                MR_Word ModuleInfo_26;
                MR_Word MLDS_Type_27;
                MR_Word ArgGroundTerm_28;

                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_101, Var_11, &VarLval_25);
                ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_101, &ModuleInfo_26);
                MLDS_Type_27 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_26, VarType_20);
                succeeded = ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(STATE_VARIABLE_Info_0_101, ArgVar_23, &ArgGroundTerm_28);
                if (succeeded)
                {
                  MR_Word ArgRval_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_28, (MR_Integer) 0))));
                  MR_Word MLDS_ArgType_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_28, (MR_Integer) 2))));
                  MR_Word GlobalData0_32;
                  MR_Word Rval0_33;
                  MR_Word GlobalData_34;
                  MR_Word Rval_35;
                  MR_Word GroundTerm_36;
                  MR_Word Stmt_37;
                  MR_Word STATE_VARIABLE_Info_136_136;
                  MR_Word _ArgType_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_28, (MR_Integer) 1))));

                  ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_101, &GlobalData0_32);
                  ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_26, Context_17, MLDS_ArgType_31, (MR_Integer) 2, ArgRval_29, &Rval0_33, GlobalData0_32, &GlobalData_34);
                  ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_34, STATE_VARIABLE_Info_0_101, &STATE_VARIABLE_Info_136_136);
                  Rval_35 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(MLDS_Type_27, ConsTag_21, Rval0_33);
                  {
                    GroundTerm_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), GroundTerm_36, 0) = ((MR_Box) (Rval_35));
                    MR_hl_field(MR_mktag(0), GroundTerm_36, 1) = ((MR_Box) (VarType_20));
                    MR_hl_field(MR_mktag(0), GroundTerm_36, 2) = ((MR_Box) (MLDS_Type_27));
                  }
                  ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_11, GroundTerm_36, STATE_VARIABLE_Info_136_136, STATE_VARIABLE_Info_102);
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

                  ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_101, ArgVar_23, &ArgLval_38);
                  ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_101, ArgVar_23, &ArgType_39);
                  if ((ConsTag_21 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
                  {
                    MR_Word ArgRval_145;
                    MR_Word Rval_146;
                    MR_Word Stmt_147;

                    {
                      ArgRval_145 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ArgRval_145, 0) = ((MR_Box) (ArgLval_38));
                    }
                    ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_26, ArgType_39, VarType_20, (MR_Integer) 0, ArgRval_145, &Rval_146);
                    Stmt_147 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_25, Rval_146, Context_17);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *Stmts_18 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_147));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  else
                  {
                    MR_Integer Ptag_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 1))));

                    ml_backend__ml_unify_gen__ml_gen_direct_arg_construct_9_p_0(ModuleInfo_26, ArgMode_24, Ptag_40, ArgLval_38, ArgType_39, VarLval_25, VarType_20, Context_17, Stmts_18);
                  }
                  *STATE_VARIABLE_Info_102 = STATE_VARIABLE_Info_0_101;
                }
              }
              else
              if ((ConsTag_21 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
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
              MR_Integer Stag_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 2))));
              MR_Word AddedBy_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 3))));
              MR_Word UsesBaseClass_45;
              MR_Tuple Var_131;
              MR_Integer Ptag_154 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 1))));

              {
                Var_131 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_131, 0) = ((MR_Box) (Stag_43));
                MR_hl_field(MR_mktag(0), Var_131, 1) = ((MR_Box) (AddedBy_44));
              }
              {
                MaybeStag_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeStag_42, 0) = ((MR_Box) (Var_131));
              }
              UsesBaseClass_45 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(ConsTag_21);
              ml_backend__ml_unify_gen__ml_gen_compound_13_p_0(ConsId_12, Ptag_154, MaybeStag_42, UsesBaseClass_45, Var_11, ArgVars_13, ArgModes_14, TakeAddr_15, HowToConstruct_16, Context_17, Stmts_18, STATE_VARIABLE_Info_0_101, STATE_VARIABLE_Info_102);
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
    MR_Word LeftFromToInsts_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_11, (MR_Integer) 0))));
    MR_Word RightFromToInsts_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_11, (MR_Integer) 1))));
    MR_Word LeftTopMode_49;
    MR_Word RightTopMode_50;
    MR_Word Var_51;

    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_10, LeftFromToInsts_47, ArgType_14, &LeftTopMode_49);
    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_10, RightFromToInsts_48, ArgType_14, &RightTopMode_50);
    Var_51 = check_hlds__type_util__is_either_type_a_dummy_3_f_0(ModuleInfo_10, ArgType_14, VarType_16);
    succeeded = (Var_51 == (MR_Integer) 0);
    if (succeeded)
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_direct_arg_construct\'/9", (MR_String) "dummy unify");
        return;
      }
    }
    else
    {
      MR_Word Dir_60;

      switch (LeftTopMode_49) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (RightTopMode_50) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.compute_assign_direction\'/5", (MR_String) "test in arg of [de]construction");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              Dir_60 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.compute_assign_direction\'/5", (MR_String) "some strange unify");
                  return;
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          switch (RightTopMode_50) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Dir_60 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.compute_assign_direction\'/5", (MR_String) "some strange unify");
                  return;
                }
              }
              break;
          }
          break;
        case (MR_Integer) 2:
          switch (RightTopMode_50) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.compute_assign_direction\'/5", (MR_String) "some strange unify");
                  return;
                }
              }
              break;
            case (MR_Integer) 2:
              Dir_60 = (MR_Integer) 2;
              break;
          }
          break;
      }
      switch (Dir_60) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgRval_20;
            MR_Word MLDS_Type_21;
            MR_Word CastRval_22;
            MR_Word Stmt_23;
            MR_Word Var_33;
            MR_Word Var_34;

            {
              Var_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_33, 0) = ((MR_Box) (ArgLval_13));
            }
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, ArgType_14, VarType_16, (MR_Integer) 0, Var_33, &ArgRval_20);
            MLDS_Type_21 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_10, VarType_16);
            {
              Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (Ptag_12));
              MR_hl_field(MR_mktag(3), Var_34, 2) = ((MR_Box) (ArgRval_20));
            }
            {
              CastRval_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), CastRval_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), CastRval_22, 1) = ((MR_Box) (MLDS_Type_21));
              MR_hl_field(MR_mktag(3), CastRval_22, 2) = ((MR_Box) (Var_34));
            }
            Stmt_23 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_15, CastRval_22, Context_17);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_18 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_23));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
            MR_Word MLDS_ArgType_24;
            MR_Word Var_28;
            MR_Word Var_29;
            MR_Word Var_30;
            MR_Word ArgRval_38;
            MR_Word MLDS_Type_39;
            MR_Word CastRval_40;
            MR_Word Stmt_41;

            MLDS_ArgType_24 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_10, ArgType_14);
            {
              Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
              MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (MLDS_ArgType_24));
            }
            {
              Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (Var_29));
            }
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, ArgType_14, VarType_16, (MR_Integer) 0, Var_28, &ArgRval_38);
            MLDS_Type_39 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_10, VarType_16);
            {
              Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (Ptag_12));
              MR_hl_field(MR_mktag(3), Var_30, 2) = ((MR_Box) (ArgRval_38));
            }
            {
              CastRval_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), CastRval_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), CastRval_40, 1) = ((MR_Box) (MLDS_Type_39));
              MR_hl_field(MR_mktag(3), CastRval_40, 2) = ((MR_Box) (Var_30));
            }
            Stmt_41 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_15, CastRval_40, Context_17);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_18 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_41));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          break;
      }
    }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(
  MR_Word Type_5,
  MR_Word ConsTag_6,
  MR_Word Rval_7)
{
  {
    MR_Word CastRval_8;
    MR_Word TagRval_9;

    if ((ConsTag_6 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
      TagRval_9 = Rval_7;
    else
    {
      MR_Integer Ptag_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_6, (MR_Integer) 1))));

      {
        TagRval_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), TagRval_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), TagRval_9, 1) = ((MR_Box) (Ptag_10));
        MR_hl_field(MR_mktag(3), TagRval_9, 2) = ((MR_Box) (Rval_7));
      }
    }
    {
      CastRval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CastRval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), CastRval_8, 1) = ((MR_Box) (Type_5));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_compound__512__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_compound__497__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
    MR_Word Var_57;

    ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_38, &CompilationTarget_26);
    switch (UsesBaseClass_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word CtorName_28;
          MR_Word ConsId_70;
          MR_Word ModuleName_71;
          MR_Word ConsSymName_64;
          MR_Integer ConsArity_65;
          MR_Word TypeCtor_66;
          MR_Word SymModuleName_67;
          MR_String Var_68;

          succeeded = ((((MR_tag((MR_Word) ConsId_14)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_14, (MR_Integer) 0))) == (MR_Integer) 2)));
          if (succeeded)
          {
            ConsSymName_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_14, (MR_Integer) 1))));
            ConsArity_65 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_14, (MR_Integer) 2))));
            TypeCtor_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_14, (MR_Integer) 3))));
            succeeded = ((MR_tag((MR_Word) ConsSymName_64)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              SymModuleName_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsSymName_64, (MR_Integer) 0))));
              Var_68 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConsSymName_64, (MR_Integer) 1))));
            }
          }
          if (succeeded)
          {
            MR_String ConsName_69;

            ConsName_69 = ml_backend__ml_type_gen__ml_gen_du_ctor_name_4_f_0(CompilationTarget_26, TypeCtor_66, ConsSymName_64, ConsArity_65);
            {
              ConsId_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ConsId_70, 0) = ((MR_Box) (ConsName_69));
              MR_hl_field(MR_mktag(0), ConsId_70, 1) = ((MR_Box) (ConsArity_65));
            }
            ModuleName_71 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(SymModuleName_67);
          }
          else
          {
            MR_String ConsName_76;

            ConsName_76 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ConsId_14);
            {
              ConsId_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ConsId_70, 0) = ((MR_Box) (ConsName_76));
              MR_hl_field(MR_mktag(0), ConsId_70, 1) = ((MR_Box) ((MR_Integer) 0));
            }
            ModuleName_71 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_5[1]));
          }
          {
            CtorName_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CtorName_28, 0) = ((MR_Box) (ModuleName_71));
            MR_hl_field(MR_mktag(0), CtorName_28, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), CtorName_28, 2) = ((MR_Box) (ConsId_70));
          }
          {
            MaybeCtorName_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeCtorName_27, 0) = ((MR_Box) (CtorName_28));
          }
        }
        break;
      case (MR_Integer) 1:
        MaybeCtorName_27 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        break;
    }
    if ((MaybeStag_16 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      ExplicitSecTag_32 = (MR_Integer) 0;
      ExtraRvalsTypesWidths_37 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    else
    {
      MR_Integer Stag_29;
      MR_Word AddedBy_30;
      MR_Word UsesConstructors_31;
      MR_Tuple Var_40 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeStag_16, (MR_Integer) 0))));

      Stag_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_40, (MR_Integer) 0))));
      AddedBy_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_40, (MR_Integer) 1))));
      UsesConstructors_31 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(CompilationTarget_26);
      switch (UsesConstructors_31) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word StagRval0_33;
            MR_Word StagRval_35;
            MR_Word Var_45;
            MR_Word Var_49;
            MR_Word Var_50;

            {
              Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[12]));
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
              MR_hl_field(MR_mktag(3), StagRval_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
              MR_hl_field(MR_mktag(3), StagRval_35, 2) = ((MR_Box) (StagRval0_33));
            }
            {
              Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (StagRval_35));
              MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
              MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_1[7])));
            }
            {
              ExtraRvalsTypesWidths_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ExtraRvalsTypesWidths_37, 0) = ((MR_Box) (Var_50));
              MR_hl_field(MR_mktag(1), ExtraRvalsTypesWidths_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_41;

            {
              Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[12]));
              MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_compound_13_p_0_2));
              MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (AddedBy_30));
              MR_hl_field(MR_mktag(0), Var_41, 4) = ((MR_Box) ((MR_Integer) 1));
            }
            mercury__require__expect_3_p_0(Var_41, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_compound\'/13", (MR_String) "AddedBy != sectag_added_by_constructor");
            ExplicitSecTag_32 = (MR_Integer) 0;
            ExtraRvalsTypesWidths_37 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
          break;
      }
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (ConsId_14));
    }
    ml_backend__ml_unify_gen__ml_gen_new_object_14_p_0(Var_57, MaybeCtorName_27, Ptag_15, ExplicitSecTag_32, Var_18, ExtraRvalsTypesWidths_37, ArgVars_19, ArgModes_20, TakeAddr_21, HowToConstruct_22, Context_23, Stmts_24, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_14_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object__545__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object__534__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
    MR_Word ConsIdOrClosure_29;

    if ((MaybeConsId_15 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer NumExtras_30;
      MR_Word Var_35;

      {
        Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[9]));
        MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_14_p_0_1));
        MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (ExplicitSecTag_18));
        MR_hl_field(MR_mktag(0), Var_35, 4) = ((MR_Box) ((MR_Integer) 0));
      }
      mercury__require__expect_3_p_0(Var_35, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_new_object\'/14", (MR_String) "sectag on closure");
      mercury__list__length_2_p_0((MR_Word) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_mlds_rval_type_and_width_0), ExtraRvalsTypesWidths_20, &NumExtras_30);
      {
        ConsIdOrClosure_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ConsIdOrClosure_29, 0) = ((MR_Box) (NumExtras_30));
      }
    }
    else
    {
      MR_Word ConsId_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeConsId_15, (MR_Integer) 0))));

      {
        ConsIdOrClosure_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ConsIdOrClosure_29, 0) = ((MR_Box) (ConsId_28));
      }
    }
    switch (MR_tag((MR_Word) HowToConstruct_24)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HowToConstruct_24)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_42;

              {
                Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[10]));
                MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_14_p_0_2));
                MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (TakeAddr_23));
                MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_42, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_new_object\'/14", (MR_String) "cannot take address of static object\'s field");
              ml_backend__ml_unify_gen__ml_gen_new_object_statically_10_p_0(ConsIdOrClosure_29, MaybeCtorName_16, Ptag_17, Var_19, ExtraRvalsTypesWidths_20, ArgVars_21, Context_25, Stmts_26, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34);
            }
            break;
          case (MR_Integer) 1:
            ml_backend__ml_unify_gen__ml_gen_new_object_dynamically_13_p_0(ConsIdOrClosure_29, MaybeCtorName_16, Ptag_17, ExplicitSecTag_18, Var_19, ExtraRvalsTypesWidths_20, ArgVars_21, ArgModes_22, TakeAddr_23, Context_25, Stmts_26, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34);
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CellToReuse_31 = (MR_Word) (MR_body((MR_Word) (HowToConstruct_24), (MR_Integer) 1));

          ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_14_p_0(ConsIdOrClosure_29, MaybeCtorName_16, Ptag_17, ExplicitSecTag_18, Var_19, ExtraRvalsTypesWidths_20, ArgVars_21, ArgModes_22, TakeAddr_23, CellToReuse_31, Context_25, Stmts_26, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34);
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
ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__745__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_LambdaHeadVar__2_75;

    ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__726__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_75);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_75));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_14_p_0(
  MR_Word ConsIdOrClosure_15,
  MR_Word MaybeCtorName_16,
  MR_Integer Ptag_17,
  MR_Word ExplicitSecTag_18,
  MR_Word Var_19,
  MR_Word ExtraRvalsTypesWidths_20,
  MR_Word ArgVars_21,
  MR_Word ArgModes_22,
  MR_Word TakeAddr_23,
  MR_Word CellToReuse_24,
  MR_Word Context_25,
  MR_Word * Stmts_26,
  MR_Word STATE_VARIABLE_Info_0_69,
  MR_Word * STATE_VARIABLE_Info_70)
{
  {
    MR_bool succeeded;
    MR_Word ReuseVar_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellToReuse_24, (MR_Integer) 0))));
    MR_Word ReuseConsIds_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellToReuse_24, (MR_Integer) 1))));
    MR_Word ConsId_31;
    MR_Word ReusePrimaryTags0_38;
    MR_Word ReusePrimaryTags_39;
    MR_Word VarType_40;
    MR_Word ConsTag_41;
    MR_Integer PrimaryTag_42;
    MR_Word InitOffSet_43;
    MR_Integer ArgNum_44;
    MR_Word ArgVarRepns_45;
    MR_Word ReuseVarLval_46;
    MR_Word DifferentTags_48;
    MR_Word ReuseVarRval_49;
    MR_Word VarLval_54;
    MR_Word CastReuseVarRval_55;
    MR_Word MLDS_VarType_56;
    MR_Word HeapTestStmt_57;
    MR_Word MaybePtag_58;
    MR_Word ExtraRvalStmts_59;
    MR_Word FieldGen_60;
    MR_Word FieldStmts_61;
    MR_Word TakeAddrInfos_62;
    MR_Word TakeAddrStmts_63;
    MR_Word ThenStmts_64;
    MR_Word ThenStmt_65;
    MR_Word DynamicStmts_66;
    MR_Word ElseStmt_67;
    MR_Word IfStmt_68;
    MR_Word Var_73;
    MR_Word Var_76;
    MR_Word Var_87;
    MR_Word STATE_VARIABLE_Info_89_89;
    MR_Word STATE_VARIABLE_Info_90_90;
    MR_Word Var_91;
    MR_Word Var_94;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word _NeedsUpdates_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellToReuse_24, (MR_Integer) 2))));

    if (((MR_tag((MR_Word) ConsIdOrClosure_15)) == (MR_mktag((MR_Integer) 1))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_new_object_reuse_cell\'/14", (MR_String) "attempt to reuse closure");
        return;
      }
    }
    else
      ConsId_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsIdOrClosure_15, (MR_Integer) 0))));
    {
      Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_14_p_0_1));
      MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (STATE_VARIABLE_Info_0_69));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_73, ReuseConsIds_29, &ReusePrimaryTags0_38);
    mercury__list__remove_dups_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ReusePrimaryTags0_38, &ReusePrimaryTags_39);
    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_69, Var_19, &VarType_40);
    ml_backend__ml_unify_gen__ml_cons_id_to_tag_3_p_0(STATE_VARIABLE_Info_0_69, ConsId_31, &ConsTag_41);
    ml_backend__ml_unify_gen__ml_tag_initial_offset_and_argnum_4_p_0(ConsTag_41, &PrimaryTag_42, &InitOffSet_43, &ArgNum_44);
    ml_backend__ml_unify_gen__ml_field_names_and_types_6_p_0(STATE_VARIABLE_Info_0_69, VarType_40, ConsId_31, InitOffSet_43, ArgVars_21, &ArgVarRepns_45);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_69, ReuseVar_28, &ReuseVarLval_46);
    {
      Var_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_14_p_0_2));
      MR_hl_field(MR_mktag(0), Var_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_76, 3) = ((MR_Box) (PrimaryTag_42));
    }
    mercury__list__filter_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_76, ReusePrimaryTags_39, &DifferentTags_48);
    if ((DifferentTags_48 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ReuseVarRval_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), ReuseVarRval_49, 0) = ((MR_Box) (ReuseVarLval_46));
      }
    else
    {
      MR_Word Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DifferentTags_48, (MR_Integer) 1))));
      MR_Integer Var_110 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), DifferentTags_48, (MR_Integer) 0))));

      if ((Var_109 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word Var_83;
        MR_Word Var_85;
        MR_Word Var_86;

        {
          Var_85 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_85, 0) = ((MR_Box) (ReuseVarLval_46));
        }
        Var_86 = ml_backend__ml_unify_gen__ml_gen_mktag_1_f_0(Var_110);
        {
          Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
          MR_hl_field(MR_mktag(3), Var_83, 2) = ((MR_Box) (Var_85));
          MR_hl_field(MR_mktag(3), Var_83, 3) = ((MR_Box) (Var_86));
        }
        {
          ReuseVarRval_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ReuseVarRval_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ReuseVarRval_49, 1) = ((MR_Box) (PrimaryTag_42));
          MR_hl_field(MR_mktag(3), ReuseVarRval_49, 2) = ((MR_Box) (Var_83));
        }
      }
      else
      {
        MR_Word Var_79;
        MR_Word Var_81;

        {
          Var_81 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_81, 0) = ((MR_Box) (ReuseVarLval_46));
        }
        {
          Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), Var_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(3), Var_79, 2) = ((MR_Box) (Var_81));
        }
        {
          ReuseVarRval_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ReuseVarRval_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ReuseVarRval_49, 1) = ((MR_Box) (PrimaryTag_42));
          MR_hl_field(MR_mktag(3), ReuseVarRval_49, 2) = ((MR_Box) (Var_79));
        }
      }
    }
    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_69, Var_19, &VarLval_54);
    ml_backend__ml_code_util__ml_gen_type_3_p_0(STATE_VARIABLE_Info_0_69, VarType_40, &MLDS_VarType_56);
    {
      CastReuseVarRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CastReuseVarRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), CastReuseVarRval_55, 1) = ((MR_Box) (MLDS_VarType_56));
      MR_hl_field(MR_mktag(3), CastReuseVarRval_55, 2) = ((MR_Box) (ReuseVarRval_49));
    }
    {
      Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (VarLval_54));
      MR_hl_field(MR_mktag(3), Var_87, 2) = ((MR_Box) (CastReuseVarRval_55));
    }
    {
      HeapTestStmt_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeapTestStmt_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), HeapTestStmt_57, 1) = ((MR_Box) (Var_87));
      MR_hl_field(MR_mktag(3), HeapTestStmt_57, 2) = ((MR_Box) (Context_25));
    }
    {
      MaybePtag_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePtag_58, 0) = ((MR_Box) (Ptag_17));
    }
    ml_backend__ml_unify_gen__ml_gen_extra_arg_assigns_9_p_0(VarLval_54, MLDS_VarType_56, MaybePtag_58, (MR_Integer) 0, ExtraRvalsTypesWidths_20, Context_25, &ExtraRvalStmts_59, STATE_VARIABLE_Info_0_69, &STATE_VARIABLE_Info_89_89);
    ml_backend__ml_unify_gen__decide_field_gen_6_p_0(STATE_VARIABLE_Info_89_89, VarLval_54, VarType_40, ConsId_31, ConsTag_41, &FieldGen_60);
    ml_backend__ml_unify_gen__ml_gen_unify_args_for_reuse_11_p_0(FieldGen_60, ArgVarRepns_45, ArgModes_22, TakeAddr_23, InitOffSet_43, ArgNum_44, Context_25, &FieldStmts_61, &TakeAddrInfos_62, STATE_VARIABLE_Info_89_89, &STATE_VARIABLE_Info_90_90);
    ml_backend__ml_unify_gen__ml_gen_field_take_address_assigns_7_p_0(TakeAddrInfos_62, VarLval_54, MLDS_VarType_56, MaybePtag_58, Context_25, STATE_VARIABLE_Info_90_90, &TakeAddrStmts_63);
    Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), FieldStmts_61, TakeAddrStmts_63);
    ThenStmts_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ExtraRvalStmts_59, Var_91);
    {
      ThenStmt_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ThenStmt_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ThenStmt_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ThenStmt_65, 2) = ((MR_Box) (ThenStmts_64));
      MR_hl_field(MR_mktag(0), ThenStmt_65, 3) = ((MR_Box) (Context_25));
    }
    {
      Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (ConsId_31));
    }
    ml_backend__ml_unify_gen__ml_gen_new_object_14_p_0(Var_94, MaybeCtorName_16, Ptag_17, ExplicitSecTag_18, Var_19, ExtraRvalsTypesWidths_20, ArgVars_21, ArgModes_22, TakeAddr_23, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))), Context_25, &DynamicStmts_66, STATE_VARIABLE_Info_90_90, STATE_VARIABLE_Info_70);
    {
      ElseStmt_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ElseStmt_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ElseStmt_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ElseStmt_67, 2) = ((MR_Box) (DynamicStmts_66));
      MR_hl_field(MR_mktag(0), ElseStmt_67, 3) = ((MR_Box) (Context_25));
    }
    {
      Var_99 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_99, 0) = ((MR_Box) (VarLval_54));
    }
    {
      Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (ElseStmt_67));
    }
    {
      IfStmt_68 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), IfStmt_68, 0) = ((MR_Box) (Var_99));
      MR_hl_field(MR_mktag(2), IfStmt_68, 1) = ((MR_Box) (ThenStmt_65));
      MR_hl_field(MR_mktag(2), IfStmt_68, 2) = ((MR_Box) (Var_100));
      MR_hl_field(MR_mktag(2), IfStmt_68, 3) = ((MR_Box) (Context_25));
    }
    {
      Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (IfStmt_68));
      MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_26 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeapTestStmt_57));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_101));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_cons_id_to_tag_3_p_0(
  MR_Word Info_4,
  MR_Word ConsId_5,
  MR_Word * ConsTag_6)
{
  {
    MR_Word ModuleInfo_7;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_4, &ModuleInfo_7);
    *ConsTag_6 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_7, ConsId_5);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__decide_field_gen_6_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__decide_field_gen__1586__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__decide_field_gen_6_p_0(
  MR_Word Info_7,
  MR_Word VarLval_8,
  MR_Word VarType_9,
  MR_Word ConsId_10,
  MR_Word ConsTag_11,
  MR_Word * FieldGen_12)
{
  {
    MR_bool succeeded;
    MR_Word MaybePrimaryTag_13;
    MR_Word AddrRval_14;
    MR_Word AddrType_15;
    MR_Word HighLevelData_16;
    MR_Word FieldVia_17;

    MaybePrimaryTag_13 = hlds__hlds_data__get_maybe_primary_tag_1_f_0(ConsTag_11);
    {
      AddrRval_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), AddrRval_14, 0) = ((MR_Box) (VarLval_8));
    }
    ml_backend__ml_code_util__ml_gen_type_3_p_0(Info_7, VarType_9, &AddrType_15);
    ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(Info_7, &HighLevelData_16);
    switch (HighLevelData_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        FieldVia_17 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_18;

          succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(VarType_9, &Var_18);
          if (succeeded)
            FieldVia_17 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          else
          {
            MR_Word ConsSymName_19;
            MR_Integer ConsArity_20;
            MR_Word TypeCtor_21;

            succeeded = ((((MR_tag((MR_Word) ConsId_10)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 0))) == (MR_Integer) 2)));
            if (succeeded)
            {
              ConsSymName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 1))));
              ConsArity_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 2))));
              TypeCtor_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 3))));
              {
                MR_Word Target_22;
                MR_String ConsName_23;
                MR_Word VarTypeCtor_24;
                MR_Word QualTypeName_25;
                MR_Integer TypeArity_26;
                MR_Word MLDS_Module_27;
                MR_Word QualKind_28;
                MR_String TypeName_29;
                MR_Word TypeQualifier_30;
                MR_Word UsesBaseClass_31;
                MR_Word ClassId_32;
                MR_Word FieldQualifier_33;
                MR_Word ClassPtrType_35;
                MR_Word Var_36;
                MR_Word Var_43;

                ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(Info_7, &Target_22);
                ConsName_23 = ml_backend__ml_type_gen__ml_gen_du_ctor_name_4_f_0(Target_22, TypeCtor_21, ConsSymName_19, ConsArity_20);
                parse_tree__prog_type__type_to_ctor_det_2_p_0(VarType_9, &VarTypeCtor_24);
                {
                  Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[11]));
                  MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (ml_backend__ml_unify_gen__decide_field_gen_6_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (TypeCtor_21));
                  MR_hl_field(MR_mktag(0), Var_36, 4) = ((MR_Box) (VarTypeCtor_24));
                }
                mercury__require__expect_3_p_0(Var_36, (MR_String) "predicate \140ml_backend.ml_unify_gen.decide_field_gen\'/6", (MR_String) "TypeCtor != VarTypeCtor");
                ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_21, &QualTypeName_25, &TypeArity_26);
                MLDS_Module_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualTypeName_25, (MR_Integer) 0))));
                QualKind_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualTypeName_25, (MR_Integer) 1))));
                TypeName_29 = ((MR_String) ((MR_hl_field(MR_mktag(0), QualTypeName_25, (MR_Integer) 2))));
                TypeQualifier_30 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(Target_22, MLDS_Module_27, QualKind_28, TypeName_29, TypeArity_26);
                UsesBaseClass_31 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(ConsTag_11);
                switch (UsesBaseClass_31) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word QualConsName_34;

                      {
                        QualConsName_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), QualConsName_34, 0) = ((MR_Box) (TypeQualifier_30));
                        MR_hl_field(MR_mktag(0), QualConsName_34, 1) = ((MR_Box) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(0), QualConsName_34, 2) = ((MR_Box) (ConsName_23));
                      }
                      {
                        ClassId_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ClassId_32, 0) = ((MR_Box) (QualConsName_34));
                        MR_hl_field(MR_mktag(0), ClassId_32, 1) = ((MR_Box) (ConsArity_20));
                        MR_hl_field(MR_mktag(0), ClassId_32, 2) = ((MR_Box) ((MR_Integer) 0));
                      }
                      FieldQualifier_33 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(Target_22, TypeQualifier_30, (MR_Integer) 1, ConsName_23, ConsArity_20);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        ClassId_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ClassId_32, 0) = ((MR_Box) (QualTypeName_25));
                        MR_hl_field(MR_mktag(0), ClassId_32, 1) = ((MR_Box) (TypeArity_26));
                        MR_hl_field(MR_mktag(0), ClassId_32, 2) = ((MR_Box) ((MR_Integer) 0));
                      }
                      FieldQualifier_33 = TypeQualifier_30;
                    }
                    break;
                }
                Var_43 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ClassId_32)));
                {
                  ClassPtrType_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ClassPtrType_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                  MR_hl_field(MR_mktag(3), ClassPtrType_35, 1) = ((MR_Box) (Var_43));
                }
                {
                  FieldVia_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), FieldVia_17, 0) = ((MR_Box) (FieldQualifier_33));
                  MR_hl_field(MR_mktag(1), FieldVia_17, 1) = ((MR_Box) (ClassPtrType_35));
                }
              }
            }
            else
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.decide_field_gen\'/6", (MR_String) "unexpected cons_id");
                return;
              }
            }
          }
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *FieldGen_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybePrimaryTag_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (AddrRval_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (AddrType_15));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (FieldVia_17));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unify_args_for_reuse_11_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unify_args_for_reuse__1485__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unify_args_for_reuse_11_p_0(
  MR_Word FieldGen_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word TakeAddr_4,
  MR_Word CurOffset_5,
  MR_Integer CurArgNum_6,
  MR_Word Context_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__3_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word Var_20;

        *HeadVar__8_8 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        *HeadVar__9_9 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        {
          Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[10]));
          MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_unify_args_for_reuse_11_p_0_1));
          MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (TakeAddr_4));
          MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        mercury__require__expect_3_p_0(Var_20, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unify_args_for_reuse\'/11", (MR_String) "TakeAddr != []");
        *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_0_10;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unify_args_for_reuse\'/11", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unify_args_for_reuse\'/11", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word Mode_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word Modes_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word NextOffset_64;
        MR_Integer NextArgNum_65;
        MR_Word TailTakeAddr_66;
        MR_Integer Var_77;

        ml_backend__ml_unify_gen__ml_next_field_offset_4_p_0(Var_79, Var_78, CurOffset_5, &NextOffset_64);
        NextArgNum_65 = (MR_Integer) ((MR_Unsigned) CurArgNum_6 + (MR_Unsigned) (MR_Integer) 1);
        succeeded = ((MR_tag((MR_Word) TakeAddr_4)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_77 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), TakeAddr_4, (MR_Integer) 0))));
          TailTakeAddr_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TakeAddr_4, (MR_Integer) 1))));
          succeeded = (CurArgNum_6 == Var_77);
        }
        if (succeeded)
        {
          MR_Word TakeAddrInfosTail_67;
          MR_Word TakeAddrInfo_68;

          ml_backend__ml_unify_gen__ml_gen_unify_args_for_reuse_11_p_0(FieldGen_1, Var_78, Modes_56, TailTakeAddr_66, NextOffset_64, NextArgNum_65, Context_7, HeadVar__8_8, &TakeAddrInfosTail_67, STATE_VARIABLE_Info_0_10, STATE_VARIABLE_Info_11);
          ml_backend__ml_unify_gen__ml_gen_take_addr_of_arg_4_p_0(*STATE_VARIABLE_Info_11, Var_79, CurOffset_5, &TakeAddrInfo_68);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__9_9 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TakeAddrInfo_68));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TakeAddrInfosTail_67));
          }
        }
        else
        {
          MR_Word Stmts0_69;
          MR_Word STATE_VARIABLE_Info_74_74;

          ml_backend__ml_unify_gen__ml_gen_unify_args_for_reuse_11_p_0(FieldGen_1, Var_78, Modes_56, TakeAddr_4, NextOffset_64, NextArgNum_65, Context_7, &Stmts0_69, HeadVar__9_9, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_74_74);
          ml_backend__ml_unify_gen__ml_gen_unify_arg_10_p_0(FieldGen_1, Var_79, Mode_55, CurOffset_5, CurArgNum_6, Context_7, Stmts0_69, HeadVar__8_8, STATE_VARIABLE_Info_74_74, STATE_VARIABLE_Info_11);
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
  if ((HeadVar__2_2 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__4_4 = HeadVar__3_3;
  else
  {
    MR_Word NextArg_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word CurWidth_15;
    MR_Word NextWidth_20;
    MR_Word Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CurArg_1, (MR_Integer) 1))));
    MR_Word Var_114;
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CurArg_1, (MR_Integer) 0))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_113, (MR_Integer) 0))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_113, (MR_Integer) 1))));
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_21;

    CurWidth_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_113, (MR_Integer) 2))));
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_113, (MR_Integer) 3))));
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NextArg_8, (MR_Integer) 0))));
    Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NextArg_8, (MR_Integer) 1))));
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_114, (MR_Integer) 0))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_114, (MR_Integer) 1))));
    NextWidth_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_114, (MR_Integer) 2))));
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_114, (MR_Integer) 3))));
    switch (MR_tag((MR_Word) CurWidth_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *HeadVar__4_4 = HeadVar__3_3;
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) NextWidth_20)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Int_34 = (MR_Integer) (HeadVar__3_3);
              MR_Integer Var_125 = (MR_Integer) ((MR_Unsigned) Int_34 + (MR_Unsigned) (MR_Integer) 1);

              *HeadVar__4_4 = (MR_Word) (Var_125);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Integer Int_34 = (MR_Integer) (HeadVar__3_3);
              MR_Integer Var_125 = (MR_Integer) ((MR_Unsigned) Int_34 + (MR_Unsigned) (MR_Integer) 1);

              *HeadVar__4_4 = (MR_Word) (Var_125);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), NextWidth_20, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer Int_34 = (MR_Integer) (HeadVar__3_3);
                  MR_Integer Var_125 = (MR_Integer) ((MR_Unsigned) Int_34 + (MR_Unsigned) (MR_Integer) 1);

                  *HeadVar__4_4 = (MR_Word) (Var_125);
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
        switch (MR_tag((MR_Word) NextWidth_20)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Var_121;
              MR_Integer Int_127 = (MR_Integer) (HeadVar__3_3);

              Var_121 = (MR_Integer) ((MR_Unsigned) Int_127 + (MR_Unsigned) (MR_Integer) 2);
              *HeadVar__4_4 = (MR_Word) (Var_121);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Integer Var_121;
              MR_Integer Int_127 = (MR_Integer) (HeadVar__3_3);

              Var_121 = (MR_Integer) ((MR_Unsigned) Int_127 + (MR_Unsigned) (MR_Integer) 2);
              *HeadVar__4_4 = (MR_Word) (Var_121);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), NextWidth_20, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer Var_121;
                  MR_Integer Int_127 = (MR_Integer) (HeadVar__3_3);

                  Var_121 = (MR_Integer) ((MR_Unsigned) Int_127 + (MR_Unsigned) (MR_Integer) 2);
                  *HeadVar__4_4 = (MR_Word) (Var_121);
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
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CurWidth_15, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) NextWidth_20)) {
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
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), NextWidth_20, (MR_Integer) 0)))) {
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
            switch (MR_tag((MR_Word) NextWidth_20)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer Var_115;
                  MR_Integer Int_130 = (MR_Integer) (HeadVar__3_3);

                  Var_115 = (MR_Integer) ((MR_Unsigned) Int_130 + (MR_Unsigned) (MR_Integer) 1);
                  *HeadVar__4_4 = (MR_Word) (Var_115);
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  MR_Integer Var_115;
                  MR_Integer Int_130 = (MR_Integer) (HeadVar__3_3);

                  Var_115 = (MR_Integer) ((MR_Unsigned) Int_130 + (MR_Unsigned) (MR_Integer) 1);
                  *HeadVar__4_4 = (MR_Word) (Var_115);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), NextWidth_20, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Integer Var_115;
                      MR_Integer Int_130 = (MR_Integer) (HeadVar__3_3);

                      Var_115 = (MR_Integer) ((MR_Unsigned) Int_130 + (MR_Unsigned) (MR_Integer) 1);
                      *HeadVar__4_4 = (MR_Word) (Var_115);
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
ml_backend__ml_unify_gen__ml_gen_unify_arg_10_p_0(
  MR_Word FieldGen_11,
  MR_Word HeadVar__2_2,
  MR_Word Mode_14,
  MR_Word Offset_15,
  MR_Integer ArgNum_16,
  MR_Word Context_17,
  MR_Word STATE_VARIABLE_Stmts_0_41,
  MR_Word * STATE_VARIABLE_Stmts_42,
  MR_Word STATE_VARIABLE_Info_0_43,
  MR_Word * STATE_VARIABLE_Info_44)
{
  {
    MR_bool succeeded;
    MR_Word ArgVar_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word CtorArgRepn_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word MaybePrimaryTag_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_11, (MR_Integer) 0))));
    MR_Word AddrRval_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_11, (MR_Integer) 1))));
    MR_Word AddrType_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_11, (MR_Integer) 2))));
    MR_Word FieldVia_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_11, (MR_Integer) 3))));
    MR_Word FieldId_25;
    MR_Word ModuleInfo_31;
    MR_Word HighLevelData_32;
    MR_Word FieldPosWidth_33;
    MR_Word FieldWidth_34;
    MR_Word FieldType_35;
    MR_Word BoxedFieldType_36;
    MR_Word MLDS_BoxedFieldType_37;
    MR_Word FieldLval_38;
    MR_Word ArgLval_39;
    MR_Word ArgType_40;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;

    if ((FieldVia_23 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer OffsetInt_24 = (MR_Integer) (Offset_15);
      MR_Word Var_46;
      MR_Word Var_47;

      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_47, 0) = ((MR_Box) (OffsetInt_24));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (Var_47));
      }
      {
        FieldId_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FieldId_25, 0) = ((MR_Box) (Var_46));
      }
    }
    else
    {
      MR_Word FieldQualifier_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldVia_23, (MR_Integer) 0))));
      MR_Word ClassPtrType_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldVia_23, (MR_Integer) 1))));
      MR_Word MaybeFieldName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_13, (MR_Integer) 0))));
      MR_Word FieldName_29;
      MR_Word QualifiedFieldName_30;
      MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_13, (MR_Integer) 1))));
      MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_13, (MR_Integer) 2))));
      MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_13, (MR_Integer) 3))));

      FieldName_29 = ml_backend__ml_code_util__ml_gen_hld_field_name_2_f_0(MaybeFieldName_28, ArgNum_16);
      {
        QualifiedFieldName_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), QualifiedFieldName_30, 0) = ((MR_Box) (FieldQualifier_26));
        MR_hl_field(MR_mktag(0), QualifiedFieldName_30, 1) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), QualifiedFieldName_30, 2) = ((MR_Box) (FieldName_29));
      }
      {
        FieldId_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FieldId_25, 0) = ((MR_Box) (QualifiedFieldName_30));
        MR_hl_field(MR_mktag(1), FieldId_25, 1) = ((MR_Box) (ClassPtrType_27));
      }
    }
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_43, &ModuleInfo_31);
    ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_43, &HighLevelData_32);
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_13, (MR_Integer) 0))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_13, (MR_Integer) 1))));
    FieldPosWidth_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_13, (MR_Integer) 2))));
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_13, (MR_Integer) 3))));
    FieldWidth_34 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(FieldPosWidth_33);
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_13, (MR_Integer) 0))));
    FieldType_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_13, (MR_Integer) 1))));
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_13, (MR_Integer) 2))));
    Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_13, (MR_Integer) 3))));
    switch (HighLevelData_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          succeeded = (FieldWidth_34 == (MR_Integer) 3);
          succeeded = !(succeeded);
        }
        break;
      case (MR_Integer) 1:
        succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ModuleInfo_31, FieldType_35, FieldWidth_34);
        break;
    }
    if (succeeded)
    {
      MR_Word TypeVarSet0_63;
      MR_Word TypeVar_64;
      MR_Word _TypeVarSet_65;

      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet0_63);
      mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVar_64, TypeVarSet0_63, &_TypeVarSet_65);
      {
        BoxedFieldType_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), BoxedFieldType_36, 0) = ((MR_Box) (TypeVar_64));
        MR_hl_field(MR_mktag(0), BoxedFieldType_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    else
      BoxedFieldType_36 = FieldType_35;
    ml_backend__ml_code_util__ml_gen_type_3_p_0(STATE_VARIABLE_Info_0_43, BoxedFieldType_36, &MLDS_BoxedFieldType_37);
    {
      FieldLval_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FieldLval_38, 0) = ((MR_Box) (MaybePrimaryTag_20));
      MR_hl_field(MR_mktag(0), FieldLval_38, 1) = ((MR_Box) (AddrRval_21));
      MR_hl_field(MR_mktag(0), FieldLval_38, 2) = ((MR_Box) (FieldId_25));
      MR_hl_field(MR_mktag(0), FieldLval_38, 3) = ((MR_Box) (MLDS_BoxedFieldType_37));
      MR_hl_field(MR_mktag(0), FieldLval_38, 4) = ((MR_Box) (AddrType_22));
    }
    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_43, ArgVar_12, &ArgLval_39);
    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_43, ArgVar_12, &ArgType_40);
    ml_backend__ml_unify_gen__ml_gen_sub_unify_11_p_0(ModuleInfo_31, HighLevelData_32, Mode_14, ArgLval_39, ArgType_40, FieldLval_38, BoxedFieldType_36, FieldPosWidth_33, Context_17, STATE_VARIABLE_Stmts_0_41, STATE_VARIABLE_Stmts_42);
    *STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_0_43;
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
  MR_Word STATE_VARIABLE_Stmts_0_23,
  MR_Word * STATE_VARIABLE_Stmts_24)
{
  {
    MR_bool succeeded;
    MR_Word LeftFromToInsts_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_14, (MR_Integer) 0))));
    MR_Word RightFromToInsts_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_14, (MR_Integer) 1))));
    MR_Word LeftTopMode_34;
    MR_Word RightTopMode_35;
    MR_Word Var_36;

    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_12, LeftFromToInsts_32, ArgType_16, &LeftTopMode_34);
    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_12, RightFromToInsts_33, ArgType_16, &RightTopMode_35);
    Var_36 = check_hlds__type_util__is_either_type_a_dummy_3_f_0(ModuleInfo_12, ArgType_16, FieldType_18);
    succeeded = (Var_36 == (MR_Integer) 0);
    if (succeeded)
      *STATE_VARIABLE_Stmts_24 = STATE_VARIABLE_Stmts_0_23;
    else
    {
      MR_Word Dir_45;

      switch (LeftTopMode_34) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (RightTopMode_35) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.compute_assign_direction\'/5", (MR_String) "test in arg of [de]construction");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              Dir_45 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.compute_assign_direction\'/5", (MR_String) "some strange unify");
                  return;
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          switch (RightTopMode_35) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Dir_45 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.compute_assign_direction\'/5", (MR_String) "some strange unify");
                  return;
                }
              }
              break;
          }
          break;
        case (MR_Integer) 2:
          switch (RightTopMode_35) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.compute_assign_direction\'/5", (MR_String) "some strange unify");
                  return;
                }
              }
              break;
            case (MR_Integer) 2:
              Dir_45 = (MR_Integer) 2;
              break;
          }
          break;
      }
      switch (Dir_45) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          ml_backend__ml_unify_gen__ml_gen_sub_unify_assign_left_10_p_0(ModuleInfo_12, HighLevelData_13, ArgLval_15, ArgType_16, FieldLval_17, FieldType_18, FieldWidth_19, Context_20, STATE_VARIABLE_Stmts_0_23, STATE_VARIABLE_Stmts_24);
          break;
        case (MR_Integer) 1:
          ml_backend__ml_unify_gen__ml_gen_sub_unify_assign_right_9_p_0(ModuleInfo_12, ArgLval_15, ArgType_16, FieldLval_17, FieldType_18, FieldWidth_19, Context_20, STATE_VARIABLE_Stmts_0_23, STATE_VARIABLE_Stmts_24);
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_Stmts_24 = STATE_VARIABLE_Stmts_0_23;
          break;
      }
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

    switch (MR_tag((MR_Word) FieldWidth_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Stmts_54 = STATE_VARIABLE_Stmts_0_53;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgRval_22;
          MR_Word Stmt_23;
          MR_Word Var_77;

          {
            Var_77 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_77, 0) = ((MR_Box) (ArgLval_13));
          }
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_11, ArgType_14, FieldType_16, (MR_Integer) 0, Var_77, &ArgRval_22);
          Stmt_23 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLval_15, ArgRval_22, Context_18);
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
          MR_Word Var_64;
          MR_Word ArgRval_81;
          MR_Word FieldLvalA_27;
          MR_Word FieldLvalB_28;

          {
            Var_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_64, 0) = ((MR_Box) (ArgLval_13));
          }
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_11, ArgType_14, FieldType_16, (MR_Integer) 0, Var_64, &ArgRval_81);
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
            MR_Word Var_67;
            MR_Word Var_69;
            MR_Word Var_71;
            MR_Word Var_74;

            {
              FloatWordA_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), FloatWordA_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), FloatWordA_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
              MR_hl_field(MR_mktag(3), FloatWordA_29, 2) = ((MR_Box) (ArgRval_81));
            }
            {
              FloatWordB_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), FloatWordB_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), FloatWordB_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14))));
              MR_hl_field(MR_mktag(3), FloatWordB_30, 2) = ((MR_Box) (ArgRval_81));
            }
            Var_67 = parse_tree__builtin_lib_types__int_type_0_f_0();
            ml_backend__ml_unify_gen__ml_type_as_field_5_p_0(ModuleInfo_11, HighLevelData_12, Var_67, (MR_Integer) 2, &IntFieldType_31);
            Var_69 = parse_tree__builtin_lib_types__int_type_0_f_0();
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_11, Var_69, IntFieldType_31, (MR_Integer) 0, FloatWordA_29, &ArgRvalA_32);
            Var_71 = parse_tree__builtin_lib_types__int_type_0_f_0();
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_11, Var_71, IntFieldType_31, (MR_Integer) 0, FloatWordB_30, &ArgRvalB_33);
            StmtA_34 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLvalA_27, ArgRvalA_32, Context_18);
            StmtB_35 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLvalB_28, ArgRvalB_33, Context_18);
            {
              Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (StmtB_35));
              MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (STATE_VARIABLE_Stmts_0_53));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Stmts_54 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (StmtA_34));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_74));
            }
          }
          else
          {
            MR_Word Stmt_79;

            Stmt_79 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLval_15, ArgRval_81, Context_18);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Stmts_54 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_79));
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
              MR_Word Mask_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldWidth_17, (MR_Integer) 4))));
              MR_Word Fill_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldWidth_17, (MR_Integer) 5))));
              MR_Integer MaskInt_46;
              MR_Word CastFieldRVal_47;
              MR_Word OldFieldBits_48;
              MR_Word NewFieldBits_49;
              MR_Word UpdatedFieldBits_50;
              MR_Word Var_56;
              MR_Word Var_57;
              MR_Integer Var_58;
              MR_Integer Var_59;
              MR_Word Var_61;
              MR_Word ArgRval_83;
              MR_Word Stmt_84;
              MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldWidth_17, (MR_Integer) 1))));
              MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldWidth_17, (MR_Integer) 2))));
              MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldWidth_17, (MR_Integer) 3))));

              {
                ArgRval_83 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ArgRval_83, 0) = ((MR_Box) (ArgLval_13));
              }
              MaskInt_46 = (MR_Integer) (Mask_39);
              Var_56 = ml_backend__ml_util__mlds_int_type_uint_0_f_0();
              {
                Var_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_57, 0) = ((MR_Box) (FieldLval_15));
              }
              {
                CastFieldRVal_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CastFieldRVal_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), CastFieldRVal_47, 1) = ((MR_Box) (Var_56));
                MR_hl_field(MR_mktag(3), CastFieldRVal_47, 2) = ((MR_Box) (Var_57));
              }
              Var_59 = mercury__int__f_60_60_2_f_0(MaskInt_46, (MR_Integer) 0);
              Var_58 = ~(Var_59);
              OldFieldBits_48 = ml_backend__ml_unify_gen__ml_bitwise_and_2_f_0(CastFieldRVal_47, Var_58);
              NewFieldBits_49 = ml_backend__ml_unify_gen__ml_lshift_3_f_0(ArgRval_83, (MR_Word) (((MR_Box) ((MR_Integer) 0))), Fill_40);
              Var_61 = ml_backend__ml_unify_gen__ml_bitwise_or_2_f_0(OldFieldBits_48, NewFieldBits_49);
              {
                UpdatedFieldBits_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), UpdatedFieldBits_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), UpdatedFieldBits_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
                MR_hl_field(MR_mktag(3), UpdatedFieldBits_50, 2) = ((MR_Box) (Var_61));
              }
              Stmt_84 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLval_15, UpdatedFieldBits_50, Context_18);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Stmts_54 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_84));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Stmts_0_53));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Mask_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldWidth_17, (MR_Integer) 5))));
              MR_Word Fill_86 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldWidth_17, (MR_Integer) 6))));
              MR_Word Shift_87 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldWidth_17, (MR_Integer) 3))));
              MR_Integer ShiftInt_88;
              MR_Integer MaskInt_89;
              MR_Word CastFieldRVal_90;
              MR_Word OldFieldBits_91;
              MR_Word NewFieldBits_92;
              MR_Word UpdatedFieldBits_93;
              MR_Word Var_94;
              MR_Word Var_95;
              MR_Integer Var_96;
              MR_Integer Var_97;
              MR_Word Var_99;
              MR_Word ArgRval_100;
              MR_Word Stmt_101;
              MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldWidth_17, (MR_Integer) 1))));
              MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldWidth_17, (MR_Integer) 2))));
              MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldWidth_17, (MR_Integer) 4))));

              {
                ArgRval_100 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ArgRval_100, 0) = ((MR_Box) (ArgLval_13));
              }
              ShiftInt_88 = (MR_Integer) (Shift_87);
              MaskInt_89 = (MR_Integer) (Mask_85);
              Var_94 = ml_backend__ml_util__mlds_int_type_uint_0_f_0();
              {
                Var_95 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_95, 0) = ((MR_Box) (FieldLval_15));
              }
              {
                CastFieldRVal_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CastFieldRVal_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), CastFieldRVal_90, 1) = ((MR_Box) (Var_94));
                MR_hl_field(MR_mktag(3), CastFieldRVal_90, 2) = ((MR_Box) (Var_95));
              }
              Var_97 = mercury__int__f_60_60_2_f_0(MaskInt_89, ShiftInt_88);
              Var_96 = ~(Var_97);
              OldFieldBits_91 = ml_backend__ml_unify_gen__ml_bitwise_and_2_f_0(CastFieldRVal_90, Var_96);
              NewFieldBits_92 = ml_backend__ml_unify_gen__ml_lshift_3_f_0(ArgRval_100, Shift_87, Fill_86);
              Var_99 = ml_backend__ml_unify_gen__ml_bitwise_or_2_f_0(OldFieldBits_91, NewFieldBits_92);
              {
                UpdatedFieldBits_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), UpdatedFieldBits_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), UpdatedFieldBits_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
                MR_hl_field(MR_mktag(3), UpdatedFieldBits_93, 2) = ((MR_Box) (Var_99));
              }
              Stmt_101 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLval_15, UpdatedFieldBits_93, Context_18);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Stmts_54 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_101));
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
    MR_bool succeeded = ((((MR_tag((MR_Word) RvalA_4)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalA_4, (MR_Integer) 0))) == (MR_Integer) 2)));
    MR_Word Rval_6;
    MR_Word UnboxRvalA_10;
    MR_Word STATE_VARIABLE_MaybeType_17_17;
    MR_Word Var_19;
    MR_Word TypeA_8;
    MR_Word UnboxRvalA0_9;
    MR_Word TypeB_11;
    MR_Word UnboxRvalB0_12;

    if (succeeded)
    {
      TypeA_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RvalA_4, (MR_Integer) 1))));
      UnboxRvalA0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RvalA_4, (MR_Integer) 2))));
      UnboxRvalA_10 = UnboxRvalA0_9;
      {
        STATE_VARIABLE_MaybeType_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeType_17_17, 0) = ((MR_Box) (TypeA_8));
      }
    }
    else
    {
      UnboxRvalA_10 = RvalA_4;
      STATE_VARIABLE_MaybeType_17_17 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    Var_19 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[9]));
    succeeded = ((((MR_tag((MR_Word) RvalB_5)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalB_5, (MR_Integer) 0))) == (MR_Integer) 2)));
    if (succeeded)
    {
      TypeB_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RvalB_5, (MR_Integer) 1))));
      UnboxRvalB0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RvalB_5, (MR_Integer) 2))));
      {
        MR_Word UnboxRval_14;

        {
          UnboxRval_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), UnboxRval_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(3), UnboxRval_14, 1) = ((MR_Box) (Var_19));
          MR_hl_field(MR_mktag(3), UnboxRval_14, 2) = ((MR_Box) (UnboxRvalA_10));
          MR_hl_field(MR_mktag(3), UnboxRval_14, 3) = ((MR_Box) (UnboxRvalB0_12));
        }
        {
          Rval_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Rval_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), Rval_6, 1) = ((MR_Box) (TypeB_11));
          MR_hl_field(MR_mktag(3), Rval_6, 2) = ((MR_Box) (UnboxRval_14));
        }
      }
    }
    else
    {
      MR_Word UnboxRval_24;

      {
        UnboxRval_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), UnboxRval_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
        MR_hl_field(MR_mktag(3), UnboxRval_24, 1) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(3), UnboxRval_24, 2) = ((MR_Box) (UnboxRvalA_10));
        MR_hl_field(MR_mktag(3), UnboxRval_24, 3) = ((MR_Box) (RvalB_5));
      }
      if ((STATE_VARIABLE_MaybeType_17_17 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        Rval_6 = UnboxRval_24;
      else
      {
        MR_Word BoxType_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeType_17_17, (MR_Integer) 0))));

        {
          Rval_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Rval_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), Rval_6, 1) = ((MR_Box) (BoxType_21));
          MR_hl_field(MR_mktag(3), Rval_6, 2) = ((MR_Box) (UnboxRval_24));
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
    MR_Integer ShiftInt_9 = (MR_Integer) (Shift_6);
    MR_Word CastRval_10;
    MR_Word Rval1_31;
    MR_Word UnsignedMLDSType_35;
    MR_Word Var_15;
    MR_Word Var_11;

    switch (Fill_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 5:
      case (MR_Integer) 6:
      case (MR_Integer) 4:
        Rval1_31 = Rval_5;
        break;
      case (MR_Integer) 2:
        {
          MR_Word FromMLDSType_32;
          MR_Word ToMLDSType_33;
          MR_Word SubRval_34;
          MR_Word Var_36;

          FromMLDSType_32 = ml_backend__ml_util__mlds_int_type_int16_0_f_0();
          ToMLDSType_33 = ml_backend__ml_util__mlds_int_type_uint16_0_f_0();
          succeeded = ((((MR_tag((MR_Word) Rval_5)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 0))) == (MR_Integer) 2)));
          if (succeeded)
          {
            Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 1))));
            SubRval_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 2))));
            succeeded = ml_backend__mlds____Unify____mlds_type_0_0(FromMLDSType_32, Var_36);
          }
          if (succeeded)
            {
              Rval1_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Rval1_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), Rval1_31, 1) = ((MR_Box) (ToMLDSType_33));
              MR_hl_field(MR_mktag(3), Rval1_31, 2) = ((MR_Box) (SubRval_34));
            }
          else
            {
              Rval1_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Rval1_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), Rval1_31, 1) = ((MR_Box) (ToMLDSType_33));
              MR_hl_field(MR_mktag(3), Rval1_31, 2) = ((MR_Box) (Rval_5));
            }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word FromMLDSType_40;
          MR_Word ToMLDSType_41;
          MR_Word SubRval_38;
          MR_Word Var_37;

          FromMLDSType_40 = ml_backend__ml_util__mlds_int_type_int32_0_f_0();
          ToMLDSType_41 = ml_backend__ml_util__mlds_int_type_uint32_0_f_0();
          succeeded = ((((MR_tag((MR_Word) Rval_5)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 0))) == (MR_Integer) 2)));
          if (succeeded)
          {
            Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 1))));
            SubRval_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 2))));
            succeeded = ml_backend__mlds____Unify____mlds_type_0_0(FromMLDSType_40, Var_37);
          }
          if (succeeded)
            {
              Rval1_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Rval1_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), Rval1_31, 1) = ((MR_Box) (ToMLDSType_41));
              MR_hl_field(MR_mktag(3), Rval1_31, 2) = ((MR_Box) (SubRval_38));
            }
          else
            {
              Rval1_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Rval1_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), Rval1_31, 1) = ((MR_Box) (ToMLDSType_41));
              MR_hl_field(MR_mktag(3), Rval1_31, 2) = ((MR_Box) (Rval_5));
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word FromMLDSType_47;
          MR_Word ToMLDSType_48;
          MR_Word SubRval_45;
          MR_Word Var_44;

          FromMLDSType_47 = ml_backend__ml_util__mlds_int_type_int8_0_f_0();
          ToMLDSType_48 = ml_backend__ml_util__mlds_int_type_uint8_0_f_0();
          succeeded = ((((MR_tag((MR_Word) Rval_5)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 0))) == (MR_Integer) 2)));
          if (succeeded)
          {
            Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 1))));
            SubRval_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 2))));
            succeeded = ml_backend__mlds____Unify____mlds_type_0_0(FromMLDSType_47, Var_44);
          }
          if (succeeded)
            {
              Rval1_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Rval1_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), Rval1_31, 1) = ((MR_Box) (ToMLDSType_48));
              MR_hl_field(MR_mktag(3), Rval1_31, 2) = ((MR_Box) (SubRval_45));
            }
          else
            {
              Rval1_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Rval1_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), Rval1_31, 1) = ((MR_Box) (ToMLDSType_48));
              MR_hl_field(MR_mktag(3), Rval1_31, 2) = ((MR_Box) (Rval_5));
            }
        }
        break;
    }
    UnsignedMLDSType_35 = ml_backend__ml_util__mlds_int_type_uint_0_f_0();
    {
      CastRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CastRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), CastRval_10, 1) = ((MR_Box) (UnsignedMLDSType_35));
      MR_hl_field(MR_mktag(3), CastRval_10, 2) = ((MR_Box) (Rval1_31));
    }
    succeeded = ((((MR_tag((MR_Word) Rval_5)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 0))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 1))));
      succeeded = ((((MR_tag((MR_Word) Var_15)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_15, (MR_Integer) 0))) == (MR_Integer) 20)));
      if (succeeded)
        Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_15, (MR_Integer) 1))));
    }
    if (succeeded)
    {
      ShiftedRval_8 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[12]));
    }
    else
    {
      MR_Word Var_18;
      MR_Integer Var_19;

      succeeded = ((((MR_tag((MR_Word) Rval_5)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 0))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 2)));
        if (succeeded)
        {
          Var_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_18, (MR_Integer) 0))));
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
          MR_Word Var_26;
          MR_Word Var_27;

          {
            Var_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_27, 0) = ((MR_Box) (ShiftInt_9));
          }
          {
            Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (Var_27));
          }
          {
            ShiftedRval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ShiftedRval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), ShiftedRval_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[8])));
            MR_hl_field(MR_mktag(3), ShiftedRval_8, 2) = ((MR_Box) (CastRval_10));
            MR_hl_field(MR_mktag(3), ShiftedRval_8, 3) = ((MR_Box) (Var_26));
          }
        }
      }
    }
    return ShiftedRval_8;
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
  MR_Word STATE_VARIABLE_Stmts_0_56,
  MR_Word * STATE_VARIABLE_Stmts_57)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) FieldWidth_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Stmts_57 = STATE_VARIABLE_Stmts_0_56;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ToAssignRval_33;
          MR_Word Stmt_48;

          switch (MR_tag((MR_Word) FieldWidth_15)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Var_68;

                {
                  Var_68 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_68, 0) = ((MR_Box) (FieldLval_13));
                }
                ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, FieldType_14, ArgType_12, (MR_Integer) 0, Var_68, &ToAssignRval_33);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Mask_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 4))));
                    MR_Word Fill_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 5))));
                    MR_Word UnsignedMLDSType_43;
                    MR_Word FieldRval_44;
                    MR_Integer MaskInt_45;
                    MR_Word MaskedRval_46;
                    MR_Word Var_65;
                    MR_Word Var_66;
                    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 1))));
                    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 2))));
                    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 3))));

                    UnsignedMLDSType_43 = ml_backend__ml_util__mlds_int_type_uint_0_f_0();
                    {
                      Var_65 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_65, 0) = ((MR_Box) (FieldLval_13));
                    }
                    {
                      FieldRval_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), FieldRval_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), FieldRval_44, 1) = ((MR_Box) (UnsignedMLDSType_43));
                      MR_hl_field(MR_mktag(3), FieldRval_44, 2) = ((MR_Box) (Var_65));
                    }
                    MaskInt_45 = (MR_Integer) (Mask_37);
                    Var_66 = ml_backend__ml_unify_gen__ml_rshift_2_f_0(FieldRval_44, (MR_Word) (((MR_Box) ((MR_Integer) 0))));
                    MaskedRval_46 = ml_backend__ml_unify_gen__ml_bitwise_and_2_f_0(Var_66, MaskInt_45);
                    switch (Fill_38) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        ToAssignRval_33 = MaskedRval_46;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word CastMLDSType_47;

                          CastMLDSType_47 = ml_backend__ml_util__mlds_int_type_int16_0_f_0();
                          {
                            ToAssignRval_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ToAssignRval_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                            MR_hl_field(MR_mktag(3), ToAssignRval_33, 1) = ((MR_Box) (CastMLDSType_47));
                            MR_hl_field(MR_mktag(3), ToAssignRval_33, 2) = ((MR_Box) (MaskedRval_46));
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word CastMLDSType_72;

                          CastMLDSType_72 = ml_backend__ml_util__mlds_int_type_int32_0_f_0();
                          {
                            ToAssignRval_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ToAssignRval_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                            MR_hl_field(MR_mktag(3), ToAssignRval_33, 1) = ((MR_Box) (CastMLDSType_72));
                            MR_hl_field(MR_mktag(3), ToAssignRval_33, 2) = ((MR_Box) (MaskedRval_46));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word CastMLDSType_73;

                          CastMLDSType_73 = ml_backend__ml_util__mlds_int_type_int8_0_f_0();
                          {
                            ToAssignRval_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ToAssignRval_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                            MR_hl_field(MR_mktag(3), ToAssignRval_33, 1) = ((MR_Box) (CastMLDSType_73));
                            MR_hl_field(MR_mktag(3), ToAssignRval_33, 2) = ((MR_Box) (MaskedRval_46));
                          }
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          MR_Word CastMLDSType_74;

                          CastMLDSType_74 = ml_backend__ml_util__mlds_int_type_uint16_0_f_0();
                          {
                            ToAssignRval_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ToAssignRval_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                            MR_hl_field(MR_mktag(3), ToAssignRval_33, 1) = ((MR_Box) (CastMLDSType_74));
                            MR_hl_field(MR_mktag(3), ToAssignRval_33, 2) = ((MR_Box) (MaskedRval_46));
                          }
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          MR_Word CastMLDSType_75;

                          CastMLDSType_75 = ml_backend__ml_util__mlds_int_type_uint32_0_f_0();
                          {
                            ToAssignRval_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ToAssignRval_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                            MR_hl_field(MR_mktag(3), ToAssignRval_33, 1) = ((MR_Box) (CastMLDSType_75));
                            MR_hl_field(MR_mktag(3), ToAssignRval_33, 2) = ((MR_Box) (MaskedRval_46));
                          }
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Word CastMLDSType_76;

                          CastMLDSType_76 = ml_backend__ml_util__mlds_int_type_uint8_0_f_0();
                          {
                            ToAssignRval_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ToAssignRval_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                            MR_hl_field(MR_mktag(3), ToAssignRval_33, 1) = ((MR_Box) (CastMLDSType_76));
                            MR_hl_field(MR_mktag(3), ToAssignRval_33, 2) = ((MR_Box) (MaskedRval_46));
                          }
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Mask_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 5))));
                    MR_Word Fill_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 6))));
                    MR_Word Shift_86 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 3))));
                    MR_Word UnsignedMLDSType_87;
                    MR_Word FieldRval_88;
                    MR_Integer MaskInt_89;
                    MR_Word MaskedRval_90;
                    MR_Word Var_92;
                    MR_Word Var_93;
                    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 1))));
                    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 2))));
                    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 4))));

                    UnsignedMLDSType_87 = ml_backend__ml_util__mlds_int_type_uint_0_f_0();
                    {
                      Var_92 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_92, 0) = ((MR_Box) (FieldLval_13));
                    }
                    {
                      FieldRval_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), FieldRval_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), FieldRval_88, 1) = ((MR_Box) (UnsignedMLDSType_87));
                      MR_hl_field(MR_mktag(3), FieldRval_88, 2) = ((MR_Box) (Var_92));
                    }
                    MaskInt_89 = (MR_Integer) (Mask_84);
                    Var_93 = ml_backend__ml_unify_gen__ml_rshift_2_f_0(FieldRval_88, Shift_86);
                    MaskedRval_90 = ml_backend__ml_unify_gen__ml_bitwise_and_2_f_0(Var_93, MaskInt_89);
                    switch (Fill_85) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        ToAssignRval_33 = MaskedRval_90;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word CastMLDSType_77;

                          CastMLDSType_77 = ml_backend__ml_util__mlds_int_type_int16_0_f_0();
                          {
                            ToAssignRval_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ToAssignRval_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                            MR_hl_field(MR_mktag(3), ToAssignRval_33, 1) = ((MR_Box) (CastMLDSType_77));
                            MR_hl_field(MR_mktag(3), ToAssignRval_33, 2) = ((MR_Box) (MaskedRval_90));
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word CastMLDSType_78;

                          CastMLDSType_78 = ml_backend__ml_util__mlds_int_type_int32_0_f_0();
                          {
                            ToAssignRval_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ToAssignRval_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                            MR_hl_field(MR_mktag(3), ToAssignRval_33, 1) = ((MR_Box) (CastMLDSType_78));
                            MR_hl_field(MR_mktag(3), ToAssignRval_33, 2) = ((MR_Box) (MaskedRval_90));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word CastMLDSType_79;

                          CastMLDSType_79 = ml_backend__ml_util__mlds_int_type_int8_0_f_0();
                          {
                            ToAssignRval_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ToAssignRval_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                            MR_hl_field(MR_mktag(3), ToAssignRval_33, 1) = ((MR_Box) (CastMLDSType_79));
                            MR_hl_field(MR_mktag(3), ToAssignRval_33, 2) = ((MR_Box) (MaskedRval_90));
                          }
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          MR_Word CastMLDSType_80;

                          CastMLDSType_80 = ml_backend__ml_util__mlds_int_type_uint16_0_f_0();
                          {
                            ToAssignRval_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ToAssignRval_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                            MR_hl_field(MR_mktag(3), ToAssignRval_33, 1) = ((MR_Box) (CastMLDSType_80));
                            MR_hl_field(MR_mktag(3), ToAssignRval_33, 2) = ((MR_Box) (MaskedRval_90));
                          }
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          MR_Word CastMLDSType_81;

                          CastMLDSType_81 = ml_backend__ml_util__mlds_int_type_uint32_0_f_0();
                          {
                            ToAssignRval_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ToAssignRval_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                            MR_hl_field(MR_mktag(3), ToAssignRval_33, 1) = ((MR_Box) (CastMLDSType_81));
                            MR_hl_field(MR_mktag(3), ToAssignRval_33, 2) = ((MR_Box) (MaskedRval_90));
                          }
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Word CastMLDSType_82;

                          CastMLDSType_82 = ml_backend__ml_util__mlds_int_type_uint8_0_f_0();
                          {
                            ToAssignRval_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ToAssignRval_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                            MR_hl_field(MR_mktag(3), ToAssignRval_33, 1) = ((MR_Box) (CastMLDSType_82));
                            MR_hl_field(MR_mktag(3), ToAssignRval_33, 2) = ((MR_Box) (MaskedRval_90));
                          }
                        }
                        break;
                    }
                  }
                  break;
              }
              break;
          }
          Stmt_48 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_11, ToAssignRval_33, Context_16);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Stmts_57 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_48));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Stmts_0_56));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word FieldRval_70;
          MR_Word Stmt_71;
          MR_Word FieldLvalA_52;
          MR_Word FieldLvalB_53;

          succeeded = ml_backend__ml_unify_gen__ml_field_offset_pair_3_p_0(FieldLval_13, &FieldLvalA_52, &FieldLvalB_53);
          if (succeeded)
          {
            MR_Word Var_59;
            MR_Word Var_60;

            {
              Var_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_59, 0) = ((MR_Box) (FieldLvalA_52));
            }
            {
              Var_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_60, 0) = ((MR_Box) (FieldLvalB_53));
            }
            {
              FieldRval_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), FieldRval_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(3), FieldRval_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22))));
              MR_hl_field(MR_mktag(3), FieldRval_70, 2) = ((MR_Box) (Var_59));
              MR_hl_field(MR_mktag(3), FieldRval_70, 3) = ((MR_Box) (Var_60));
            }
          }
          else
          {
            MR_Word Var_62;

            {
              Var_62 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_62, 0) = ((MR_Box) (FieldLval_13));
            }
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, FieldType_14, ArgType_12, (MR_Integer) 0, Var_62, &FieldRval_70);
          }
          Stmt_71 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_11, FieldRval_70, Context_16);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Stmts_57 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_71));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Stmts_0_56));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              MR_Word ToAssignRval_33;
              MR_Word Stmt_48;

              switch (MR_tag((MR_Word) FieldWidth_15)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word Var_68;

                    {
                      Var_68 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_68, 0) = ((MR_Box) (FieldLval_13));
                    }
                    ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, FieldType_14, ArgType_12, (MR_Integer) 0, Var_68, &ToAssignRval_33);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word Mask_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 4))));
                        MR_Word Fill_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 5))));
                        MR_Word UnsignedMLDSType_43;
                        MR_Word FieldRval_44;
                        MR_Integer MaskInt_45;
                        MR_Word MaskedRval_46;
                        MR_Word Var_65;
                        MR_Word Var_66;
                        MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 1))));
                        MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 2))));
                        MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 3))));

                        UnsignedMLDSType_43 = ml_backend__ml_util__mlds_int_type_uint_0_f_0();
                        {
                          Var_65 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), Var_65, 0) = ((MR_Box) (FieldLval_13));
                        }
                        {
                          FieldRval_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), FieldRval_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), FieldRval_44, 1) = ((MR_Box) (UnsignedMLDSType_43));
                          MR_hl_field(MR_mktag(3), FieldRval_44, 2) = ((MR_Box) (Var_65));
                        }
                        MaskInt_45 = (MR_Integer) (Mask_37);
                        Var_66 = ml_backend__ml_unify_gen__ml_rshift_2_f_0(FieldRval_44, (MR_Word) (((MR_Box) ((MR_Integer) 0))));
                        MaskedRval_46 = ml_backend__ml_unify_gen__ml_bitwise_and_2_f_0(Var_66, MaskInt_45);
                        switch (Fill_38) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            ToAssignRval_33 = MaskedRval_46;
                            break;
                          case (MR_Integer) 2:
                            {
                              MR_Word CastMLDSType_47;

                              CastMLDSType_47 = ml_backend__ml_util__mlds_int_type_int16_0_f_0();
                              {
                                ToAssignRval_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), ToAssignRval_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                                MR_hl_field(MR_mktag(3), ToAssignRval_33, 1) = ((MR_Box) (CastMLDSType_47));
                                MR_hl_field(MR_mktag(3), ToAssignRval_33, 2) = ((MR_Box) (MaskedRval_46));
                              }
                            }
                            break;
                          case (MR_Integer) 3:
                            {
                              MR_Word CastMLDSType_72;

                              CastMLDSType_72 = ml_backend__ml_util__mlds_int_type_int32_0_f_0();
                              {
                                ToAssignRval_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), ToAssignRval_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                                MR_hl_field(MR_mktag(3), ToAssignRval_33, 1) = ((MR_Box) (CastMLDSType_72));
                                MR_hl_field(MR_mktag(3), ToAssignRval_33, 2) = ((MR_Box) (MaskedRval_46));
                              }
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word CastMLDSType_73;

                              CastMLDSType_73 = ml_backend__ml_util__mlds_int_type_int8_0_f_0();
                              {
                                ToAssignRval_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), ToAssignRval_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                                MR_hl_field(MR_mktag(3), ToAssignRval_33, 1) = ((MR_Box) (CastMLDSType_73));
                                MR_hl_field(MR_mktag(3), ToAssignRval_33, 2) = ((MR_Box) (MaskedRval_46));
                              }
                            }
                            break;
                          case (MR_Integer) 5:
                            {
                              MR_Word CastMLDSType_74;

                              CastMLDSType_74 = ml_backend__ml_util__mlds_int_type_uint16_0_f_0();
                              {
                                ToAssignRval_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), ToAssignRval_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                                MR_hl_field(MR_mktag(3), ToAssignRval_33, 1) = ((MR_Box) (CastMLDSType_74));
                                MR_hl_field(MR_mktag(3), ToAssignRval_33, 2) = ((MR_Box) (MaskedRval_46));
                              }
                            }
                            break;
                          case (MR_Integer) 6:
                            {
                              MR_Word CastMLDSType_75;

                              CastMLDSType_75 = ml_backend__ml_util__mlds_int_type_uint32_0_f_0();
                              {
                                ToAssignRval_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), ToAssignRval_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                                MR_hl_field(MR_mktag(3), ToAssignRval_33, 1) = ((MR_Box) (CastMLDSType_75));
                                MR_hl_field(MR_mktag(3), ToAssignRval_33, 2) = ((MR_Box) (MaskedRval_46));
                              }
                            }
                            break;
                          case (MR_Integer) 4:
                            {
                              MR_Word CastMLDSType_76;

                              CastMLDSType_76 = ml_backend__ml_util__mlds_int_type_uint8_0_f_0();
                              {
                                ToAssignRval_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), ToAssignRval_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                                MR_hl_field(MR_mktag(3), ToAssignRval_33, 1) = ((MR_Box) (CastMLDSType_76));
                                MR_hl_field(MR_mktag(3), ToAssignRval_33, 2) = ((MR_Box) (MaskedRval_46));
                              }
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Mask_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 5))));
                        MR_Word Fill_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 6))));
                        MR_Word Shift_86 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 3))));
                        MR_Word UnsignedMLDSType_87;
                        MR_Word FieldRval_88;
                        MR_Integer MaskInt_89;
                        MR_Word MaskedRval_90;
                        MR_Word Var_92;
                        MR_Word Var_93;
                        MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 1))));
                        MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 2))));
                        MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldWidth_15, (MR_Integer) 4))));

                        UnsignedMLDSType_87 = ml_backend__ml_util__mlds_int_type_uint_0_f_0();
                        {
                          Var_92 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), Var_92, 0) = ((MR_Box) (FieldLval_13));
                        }
                        {
                          FieldRval_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), FieldRval_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), FieldRval_88, 1) = ((MR_Box) (UnsignedMLDSType_87));
                          MR_hl_field(MR_mktag(3), FieldRval_88, 2) = ((MR_Box) (Var_92));
                        }
                        MaskInt_89 = (MR_Integer) (Mask_84);
                        Var_93 = ml_backend__ml_unify_gen__ml_rshift_2_f_0(FieldRval_88, Shift_86);
                        MaskedRval_90 = ml_backend__ml_unify_gen__ml_bitwise_and_2_f_0(Var_93, MaskInt_89);
                        switch (Fill_85) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            ToAssignRval_33 = MaskedRval_90;
                            break;
                          case (MR_Integer) 2:
                            {
                              MR_Word CastMLDSType_77;

                              CastMLDSType_77 = ml_backend__ml_util__mlds_int_type_int16_0_f_0();
                              {
                                ToAssignRval_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), ToAssignRval_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                                MR_hl_field(MR_mktag(3), ToAssignRval_33, 1) = ((MR_Box) (CastMLDSType_77));
                                MR_hl_field(MR_mktag(3), ToAssignRval_33, 2) = ((MR_Box) (MaskedRval_90));
                              }
                            }
                            break;
                          case (MR_Integer) 3:
                            {
                              MR_Word CastMLDSType_78;

                              CastMLDSType_78 = ml_backend__ml_util__mlds_int_type_int32_0_f_0();
                              {
                                ToAssignRval_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), ToAssignRval_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                                MR_hl_field(MR_mktag(3), ToAssignRval_33, 1) = ((MR_Box) (CastMLDSType_78));
                                MR_hl_field(MR_mktag(3), ToAssignRval_33, 2) = ((MR_Box) (MaskedRval_90));
                              }
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word CastMLDSType_79;

                              CastMLDSType_79 = ml_backend__ml_util__mlds_int_type_int8_0_f_0();
                              {
                                ToAssignRval_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), ToAssignRval_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                                MR_hl_field(MR_mktag(3), ToAssignRval_33, 1) = ((MR_Box) (CastMLDSType_79));
                                MR_hl_field(MR_mktag(3), ToAssignRval_33, 2) = ((MR_Box) (MaskedRval_90));
                              }
                            }
                            break;
                          case (MR_Integer) 5:
                            {
                              MR_Word CastMLDSType_80;

                              CastMLDSType_80 = ml_backend__ml_util__mlds_int_type_uint16_0_f_0();
                              {
                                ToAssignRval_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), ToAssignRval_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                                MR_hl_field(MR_mktag(3), ToAssignRval_33, 1) = ((MR_Box) (CastMLDSType_80));
                                MR_hl_field(MR_mktag(3), ToAssignRval_33, 2) = ((MR_Box) (MaskedRval_90));
                              }
                            }
                            break;
                          case (MR_Integer) 6:
                            {
                              MR_Word CastMLDSType_81;

                              CastMLDSType_81 = ml_backend__ml_util__mlds_int_type_uint32_0_f_0();
                              {
                                ToAssignRval_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), ToAssignRval_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                                MR_hl_field(MR_mktag(3), ToAssignRval_33, 1) = ((MR_Box) (CastMLDSType_81));
                                MR_hl_field(MR_mktag(3), ToAssignRval_33, 2) = ((MR_Box) (MaskedRval_90));
                              }
                            }
                            break;
                          case (MR_Integer) 4:
                            {
                              MR_Word CastMLDSType_82;

                              CastMLDSType_82 = ml_backend__ml_util__mlds_int_type_uint8_0_f_0();
                              {
                                ToAssignRval_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), ToAssignRval_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                                MR_hl_field(MR_mktag(3), ToAssignRval_33, 1) = ((MR_Box) (CastMLDSType_82));
                                MR_hl_field(MR_mktag(3), ToAssignRval_33, 2) = ((MR_Box) (MaskedRval_90));
                              }
                            }
                            break;
                        }
                      }
                      break;
                  }
                  break;
              }
              Stmt_48 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_11, ToAssignRval_33, Context_16);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Stmts_57 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_48));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Stmts_0_56));
              }
            }
            break;
          case (MR_Integer) 2:
            *STATE_VARIABLE_Stmts_57 = STATE_VARIABLE_Stmts_0_56;
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
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[15])));
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
    MR_bool succeeded = ((((MR_tag((MR_Word) Rval_4)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 0))) == (MR_Integer) 1)));
    MR_Word ShiftedRval_6;
    MR_Integer ShiftInt_7 = (MR_Integer) (Shift_5);
    MR_Word Var_8;
    MR_Integer Var_9;

    if (succeeded)
    {
      Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_8)) == (MR_mktag((MR_Integer) 2)));
      if (succeeded)
      {
        Var_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_8, (MR_Integer) 0))));
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
          MR_hl_field(MR_mktag(3), ShiftedRval_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(3), ShiftedRval_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[14])));
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
      Ptag_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldLval_4, (MR_Integer) 0))));
      Address_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldLval_4, (MR_Integer) 1))));
      FieldIdA_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldLval_4, (MR_Integer) 2))));
      Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldLval_4, (MR_Integer) 3))));
      PtrType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldLval_4, (MR_Integer) 4))));
      succeeded = ((MR_tag((MR_Word) FieldIdA_9)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        FieldOffsetA_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldIdA_9, (MR_Integer) 0))));
        succeeded = ((((MR_tag((MR_Word) FieldOffsetA_12)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldOffsetA_12, (MR_Integer) 0))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldOffsetA_12, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_mktag((MR_Integer) 2)));
          if (succeeded)
            Offset_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_16, (MR_Integer) 0))));
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
          SubstType_15 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)));
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
ml_backend__ml_unify_gen__ml_gen_take_addr_of_arg_4_p_0(
  MR_Word Info_5,
  MR_Word ArgVarRepn_6,
  MR_Word CurOffset_7,
  MR_Word * TakeAddrInfo_8)
{
  {
    MR_bool succeeded;
    MR_Word ArgVar_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarRepn_6, (MR_Integer) 0))));
    MR_Word CtorArgRepn_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarRepn_6, (MR_Integer) 1))));
    MR_Word ModuleInfo_11;
    MR_Word HighLevelData_12;
    MR_Word FieldType_13;
    MR_Word FieldPosWidth_14;
    MR_Word FieldWidth_15;
    MR_Word BoxedFieldType_16;
    MR_Word MLDS_FieldType_17;
    MR_Word MLDS_BoxedFieldType_18;
    MR_Word Var_19;
    MR_Word Var_21;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_5, &ModuleInfo_11);
    ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(Info_5, &HighLevelData_12);
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_10, (MR_Integer) 0))));
    FieldType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_10, (MR_Integer) 1))));
    FieldPosWidth_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_10, (MR_Integer) 2))));
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_10, (MR_Integer) 3))));
    FieldWidth_15 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(FieldPosWidth_14);
    switch (HighLevelData_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          succeeded = (FieldWidth_15 == (MR_Integer) 3);
          succeeded = !(succeeded);
        }
        break;
      case (MR_Integer) 1:
        succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ModuleInfo_11, FieldType_13, FieldWidth_15);
        break;
    }
    if (succeeded)
    {
      MR_Word TypeVarSet0_30;
      MR_Word TypeVar_31;
      MR_Word _TypeVarSet_32;

      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet0_30);
      mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVar_31, TypeVarSet0_30, &_TypeVarSet_32);
      {
        BoxedFieldType_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), BoxedFieldType_16, 0) = ((MR_Box) (TypeVar_31));
        MR_hl_field(MR_mktag(0), BoxedFieldType_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    else
      BoxedFieldType_16 = FieldType_13;
    ml_backend__ml_code_util__ml_gen_type_3_p_0(Info_5, FieldType_13, &MLDS_FieldType_17);
    ml_backend__ml_code_util__ml_gen_type_3_p_0(Info_5, BoxedFieldType_16, &MLDS_BoxedFieldType_18);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *TakeAddrInfo_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ArgVar_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (CurOffset_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MLDS_FieldType_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MLDS_BoxedFieldType_18));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_field_names_and_types_6_p_0(
  MR_Word Info_7,
  MR_Word Type_8,
  MR_Word ConsId_9,
  MR_Word InitOffset_10,
  MR_Word ArgVars_11,
  MR_Word * ArgVarRepns_12)
{
  {
    MR_bool succeeded;
    MR_Integer InitOffsetInt_13 = (MR_Integer) (InitOffset_10);
    MR_Word Var_14;

    succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(Type_8, &Var_14);
    if (succeeded)
      ml_backend__ml_unify_gen__allocate_consecutive_full_word_ctor_arg_repns_boxed_3_p_0(InitOffsetInt_13, ArgVars_11, ArgVarRepns_12);
    else
    {
      MR_Word ModuleInfo_15;
      MR_Word ConsRepnDefn_16;
      MR_Word CtorArgRepns_17;
      MR_Integer NumArgVars_18;
      MR_Integer NumCtorArgs_19;
      MR_Integer NumExtraArgVars_20;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Integer Var_29;
      MR_Word Var_30;

      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_7, &ModuleInfo_15);
      check_hlds__type_util__get_cons_repn_defn_det_3_p_0(ModuleInfo_15, ConsId_9, &ConsRepnDefn_16);
      Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_16, (MR_Integer) 0))));
      Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_16, (MR_Integer) 1))));
      Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_16, (MR_Integer) 2))));
      CtorArgRepns_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_16, (MR_Integer) 3))));
      Var_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_16, (MR_Integer) 4))));
      Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_16, (MR_Integer) 5))));
      mercury__list__length_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), ArgVars_11, &NumArgVars_18);
      mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), CtorArgRepns_17, &NumCtorArgs_19);
      NumExtraArgVars_20 = (MR_Integer) ((MR_Unsigned) NumArgVars_18 - (MR_Unsigned) NumCtorArgs_19);
      succeeded = (NumExtraArgVars_20 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word ExtraArgVars_21;
        MR_Word NonExtraArgVars_22;
        MR_Word ExtraArgVarRepns_23;
        MR_Word NonExtraArgVarRepns_24;

        mercury__list__split_upto_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), NumExtraArgVars_20, ArgVars_11, &ExtraArgVars_21, &NonExtraArgVars_22);
        ml_backend__ml_unify_gen__allocate_consecutive_full_word_ctor_arg_repns_lookup_4_p_0(Info_7, InitOffsetInt_13, ExtraArgVars_21, &ExtraArgVarRepns_23);
        mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), NonExtraArgVars_22, CtorArgRepns_17, &NonExtraArgVarRepns_24);
        *ArgVarRepns_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_2[2]), ExtraArgVarRepns_23, NonExtraArgVarRepns_24);
      }
      else
        mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), ArgVars_11, CtorArgRepns_17, ArgVarRepns_12);
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__allocate_consecutive_full_word_ctor_arg_repns_lookup_4_p_0(
  MR_Word Info_1,
  MR_Integer CurOffset_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__4_4 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
  else
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Vars_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word VarArgRepn_11;
    MR_Word VarArgRepns_12;
    MR_Word Type_13;
    MR_Word ArgPosWidth_14;
    MR_Word ArgRepn_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_19;
    MR_Integer Var_20;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_1, Var_9, &Type_13);
    Var_16 = (MR_Word) (CurOffset_2);
    Var_17 = (MR_Word) (CurOffset_2);
    {
      ArgPosWidth_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ArgPosWidth_14, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(1), ArgPosWidth_14, 1) = ((MR_Box) (Var_17));
    }
    Var_19 = mercury__term__context_init_0_f_0();
    {
      ArgRepn_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ArgRepn_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ArgRepn_15, 1) = ((MR_Box) (Type_13));
      MR_hl_field(MR_mktag(0), ArgRepn_15, 2) = ((MR_Box) (ArgPosWidth_14));
      MR_hl_field(MR_mktag(0), ArgRepn_15, 3) = ((MR_Box) (Var_19));
    }
    {
      VarArgRepn_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), VarArgRepn_11, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), VarArgRepn_11, 1) = ((MR_Box) (ArgRepn_15));
    }
    Var_20 = (MR_Integer) ((MR_Unsigned) CurOffset_2 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__ml_unify_gen__allocate_consecutive_full_word_ctor_arg_repns_lookup_4_p_0(Info_1, Var_20, Vars_10, &VarArgRepns_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (VarArgRepn_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (VarArgRepns_12));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__allocate_consecutive_full_word_ctor_arg_repns_boxed_3_p_0(
  MR_Integer CurOffset_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__3_3 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Vars_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word VarArgRepn_8;
    MR_Word VarArgRepns_9;
    MR_Word Type_10;
    MR_Word ArgPosWidth_11;
    MR_Word ArgRepn_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_16;
    MR_Integer Var_17;

    Type_10 = ml_backend__ml_code_util__ml_make_boxed_type_0_f_0();
    Var_13 = (MR_Word) (CurOffset_1);
    Var_14 = (MR_Word) (CurOffset_1);
    {
      ArgPosWidth_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ArgPosWidth_11, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(1), ArgPosWidth_11, 1) = ((MR_Box) (Var_14));
    }
    Var_16 = mercury__term__context_init_0_f_0();
    {
      ArgRepn_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ArgRepn_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ArgRepn_12, 1) = ((MR_Box) (Type_10));
      MR_hl_field(MR_mktag(0), ArgRepn_12, 2) = ((MR_Box) (ArgPosWidth_11));
      MR_hl_field(MR_mktag(0), ArgRepn_12, 3) = ((MR_Box) (Var_16));
    }
    {
      VarArgRepn_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), VarArgRepn_8, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), VarArgRepn_8, 1) = ((MR_Box) (ArgRepn_12));
    }
    Var_17 = (MR_Integer) ((MR_Unsigned) CurOffset_1 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__ml_unify_gen__allocate_consecutive_full_word_ctor_arg_repns_boxed_3_p_0(Var_17, Vars_7, &VarArgRepns_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (VarArgRepn_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (VarArgRepns_9));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_tag_initial_offset_and_argnum_4_p_0(
  MR_Word ConsTag_5,
  MR_Integer * Ptag_6,
  MR_Word * InitOffset_7,
  MR_Integer * ArgNum_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    switch (MR_tag((MR_Word) ConsTag_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *Ptag_6 = (MR_Integer) 0;
              *InitOffset_7 = (MR_Word) (((MR_Box) ((MR_Integer) 0)));
              *ArgNum_8 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_tag_initial_offset_and_argnum\'/4", (MR_String) "unexpected tag");
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
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_tag_initial_offset_and_argnum\'/4", (MR_String) "unexpected tag");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 0)))) {
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
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_tag_initial_offset_and_argnum\'/4", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word SubTag_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 2))));
              MR_Integer Var_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1))));
              MR_Word next_value_of_ConsTag_5 = SubTag_14;

              // direct tailcall eliminated
              ConsTag_5 = next_value_of_ConsTag_5;
              continue;
            }
            break;
          case (MR_Integer) 11:
            {
              *Ptag_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1))));
              *InitOffset_7 = (MR_Word) (((MR_Box) ((MR_Integer) 0)));
              *ArgNum_8 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 12:
            {
              *Ptag_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1))));
              *InitOffset_7 = (MR_Word) (((MR_Box) ((MR_Integer) 0)));
              *ArgNum_8 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word AddedBy_12;
              MR_Integer _SecondaryTag_11;

              *Ptag_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1))));
              _SecondaryTag_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 2))));
              AddedBy_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 3))));
              switch (AddedBy_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    *InitOffset_7 = (MR_Word) (((MR_Box) ((MR_Integer) 0)));
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    *InitOffset_7 = (MR_Word) (((MR_Box) ((MR_Integer) 1)));
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
ml_backend__ml_unify_gen__ml_gen_extra_arg_assigns_9_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__is_apw_full_1_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_extra_arg_assigns_9_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_extra_arg_assigns__1249__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_extra_arg_assigns_9_p_0(
  MR_Word VarLval_1,
  MR_Word MLDS_VarType_2,
  MR_Word MaybePrimaryTag_3,
  MR_Integer CurOffset_4,
  MR_Word HeadVar__5_5,
  MR_Word Context_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_bool succeeded;

    if ((HeadVar__5_5 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__7_7 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
      *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
    }
    else
    {
      MR_Word ExtraRvalTypeWidth_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ExtraRvalsTypesWidths_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Stmt_25;
      MR_Word Stmts_26;
      MR_Word HighLevelData_28;
      MR_Word FieldId_29;
      MR_Word ExtraRval_30;
      MR_Word ExtraType_31;
      MR_Word ArgPosWidth_32;
      MR_Integer NextOffset_33;
      MR_Word FieldLval_34;
      MR_Word Var_37;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_47;

      ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_8, &HighLevelData_28);
      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[9]));
        MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_extra_arg_assigns_9_p_0_1));
        MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (HighLevelData_28));
        MR_hl_field(MR_mktag(0), Var_37, 4) = ((MR_Box) ((MR_Integer) 0));
      }
      mercury__require__expect_3_p_0(Var_37, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_extra_arg_assigns\'/9", (MR_String) "high-level data");
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_42, 0) = ((MR_Box) (CurOffset_4));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (Var_42));
      }
      {
        FieldId_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FieldId_29, 0) = ((MR_Box) (Var_41));
      }
      ExtraRval_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExtraRvalTypeWidth_22, (MR_Integer) 0))));
      ExtraType_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExtraRvalTypeWidth_22, (MR_Integer) 1))));
      ArgPosWidth_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExtraRvalTypeWidth_22, (MR_Integer) 2))));
      {
        Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_extra_arg_assigns_9_p_0_2));
        MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (ArgPosWidth_32));
      }
      mercury__require__expect_3_p_0(Var_43, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_extra_arg_assigns\'/9", (MR_String) "ArgPosWidth != apw_full(_)");
      NextOffset_33 = (MR_Integer) ((MR_Unsigned) CurOffset_4 + (MR_Unsigned) (MR_Integer) 1);
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_47, 0) = ((MR_Box) (VarLval_1));
      }
      {
        FieldLval_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FieldLval_34, 0) = ((MR_Box) (MaybePrimaryTag_3));
        MR_hl_field(MR_mktag(0), FieldLval_34, 1) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(0), FieldLval_34, 2) = ((MR_Box) (FieldId_29));
        MR_hl_field(MR_mktag(0), FieldLval_34, 3) = ((MR_Box) (ExtraType_31));
        MR_hl_field(MR_mktag(0), FieldLval_34, 4) = ((MR_Box) (MLDS_VarType_2));
      }
      Stmt_25 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLval_34, ExtraRval_30, Context_6);
      ml_backend__ml_unify_gen__ml_gen_extra_arg_assigns_9_p_0(VarLval_1, MLDS_VarType_2, MaybePrimaryTag_3, NextOffset_33, ExtraRvalsTypesWidths_23, Context_6, &Stmts_26, STATE_VARIABLE_Info_0_8, STATE_VARIABLE_Info_9);
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
    MR_Word Var_5;
    MR_Word Var_6;

    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_6, 0) = ((MR_Box) (Ptag_3));
    }
    {
      Var_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_5, 1) = ((MR_Box) (Var_6));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 2) = ((MR_Box) (Var_5));
    }
    return HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_49;

    conv0_LambdaHeadVar__2_49 = ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_new_object_statically__689__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_49));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_10_p_0(
  MR_Word ConsIdOrClosure_11,
  MR_Word MaybeCtorName_12,
  MR_Integer Ptag_13,
  MR_Word Var_14,
  MR_Word ExtraRvalsTypesWidths_15,
  MR_Word ArgVars_16,
  MR_Word Context_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42)
{
  {
    MR_Word VarType_20;
    MR_Word ArgVarsTypesWidths_21;
    MR_Word ModuleInfo_23;
    MR_Word HighLevelData_24;
    MR_Word ExtraArgRvalsTypesWidths_25;
    MR_Word ArgRvalsTypesWidths_26;
    MR_Word UsesBaseClass_28;
    MR_Word ExtraArgRvals_29;
    MR_Word Target_33;
    MR_Word MLDS_VarType_34;
    MR_Word GroundTerm_35;
    MR_Word VarLval_36;
    MR_Word Rval_37;
    MR_Word AssignStmt_40;
    MR_Word STATE_VARIABLE_GlobalData_43_43;
    MR_Word STATE_VARIABLE_GlobalData_46_46;
    MR_Word STATE_VARIABLE_GlobalData_50_50;
    MR_Word STATE_VARIABLE_Info_51_51;
    MR_Word Var_38;
    MR_Word Var_39;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_41, Var_14, &VarType_20);
    ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0(STATE_VARIABLE_Info_0_41, VarType_20, ConsIdOrClosure_11, ArgVars_16, &ArgVarsTypesWidths_21);
    ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_GlobalData_43_43);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_41, &ModuleInfo_23);
    ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_41, &HighLevelData_24);
    switch (HighLevelData_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word STATE_VARIABLE_GlobalData_45_45;

          ml_backend__ml_unify_gen__ml_gen_box_extra_const_rval_list_lld_6_p_0(ModuleInfo_23, Context_17, ExtraRvalsTypesWidths_15, &ExtraArgRvalsTypesWidths_25, STATE_VARIABLE_GlobalData_43_43, &STATE_VARIABLE_GlobalData_45_45);
          ml_backend__ml_unify_gen__ml_gen_box_const_rval_list_lld_6_p_0(STATE_VARIABLE_Info_0_41, Context_17, ArgVarsTypesWidths_21, &ArgRvalsTypesWidths_26, STATE_VARIABLE_GlobalData_45_45, &STATE_VARIABLE_GlobalData_46_46);
        }
        break;
      case (MR_Integer) 1:
        {
          ml_backend__ml_unify_gen__ml_gen_box_or_unbox_const_rval_list_hld_6_p_0(STATE_VARIABLE_Info_0_41, Context_17, ArgVarsTypesWidths_21, &ArgRvalsTypesWidths_26, STATE_VARIABLE_GlobalData_43_43, &STATE_VARIABLE_GlobalData_46_46);
          ExtraArgRvalsTypesWidths_25 = ExtraRvalsTypesWidths_15;
        }
        break;
    }
    if ((MaybeCtorName_12 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      UsesBaseClass_28 = (MR_Integer) 1;
    else
      UsesBaseClass_28 = (MR_Integer) 0;
    ExtraArgRvals_29 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_mlds_rval_type_and_width_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__ml_unify_gen_scalar_common_2[6]), ExtraArgRvalsTypesWidths_25);
    ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_41, &Target_33);
    ml_backend__ml_code_util__ml_gen_type_3_p_0(STATE_VARIABLE_Info_0_41, VarType_20, &MLDS_VarType_34);
    ml_backend__ml_unify_gen__construct_static_ground_term_14_p_0(ModuleInfo_23, Target_33, HighLevelData_24, Context_17, VarType_20, MLDS_VarType_34, ConsIdOrClosure_11, UsesBaseClass_28, Ptag_13, ExtraArgRvals_29, ArgRvalsTypesWidths_26, &GroundTerm_35, STATE_VARIABLE_GlobalData_46_46, &STATE_VARIABLE_GlobalData_50_50);
    ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(STATE_VARIABLE_GlobalData_50_50, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_51_51);
    ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_14, GroundTerm_35, STATE_VARIABLE_Info_51_51, STATE_VARIABLE_Info_42);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(*STATE_VARIABLE_Info_42, Var_14, &VarLval_36);
    Rval_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm_35, (MR_Integer) 0))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm_35, (MR_Integer) 1))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm_35, (MR_Integer) 2))));
    AssignStmt_40 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_36, Rval_37, Context_17);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_18 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (AssignStmt_40));
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

    conv0_LambdaHeadVar__2_44 = ml_backend__ml_unify_gen__IntroducedFrom__func__construct_static_ground_term__2994__1_1_f_0(((MR_Word) (wrapper_arg_1)));
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
    MR_Word Var_33;

    ml_backend__ml_unify_gen__ml_pack_ground_term_args_into_word_inits_2_p_0(RvalsTypesWidths_25, &NonExtraInits_28);
    ExtraInits_29 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_unify_gen_scalar_common_2[5]), ExtraRvals_24);
    AllInits_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), ExtraInits_29, NonExtraInits_28);
    ConstType_32 = ml_backend__ml_unify_gen__get_const_type_for_cons_id_5_f_0(Target_16, HighLevelData_17, MLDS_Type_20, UsesBaseClass_22, ConsIdOrClosure_21);
    succeeded = ((((MR_tag((MR_Word) ConstType_32)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConstType_32, (MR_Integer) 0))) == (MR_Integer) 4)));
    if (succeeded)
    {
      Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConstType_32, (MR_Integer) 1))));
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
      Rval_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Rval_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), Rval_39, 1) = ((MR_Box) (MLDS_Type_20));
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
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    else
    {
      MR_Word RvalTypeWidth_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word RvalsTypesWidths_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Rval_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_3, (MR_Integer) 0))));
      MR_Word PosWidth_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_3, (MR_Integer) 2))));
      MR_Word _Type_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_3, (MR_Integer) 1))));

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
                MR_Word Fill_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_8, (MR_Integer) 5))));
                MR_Word RevOrRvals0_21;
                MR_Word LeftOverRvalsTypesWidths_22;
                MR_Word OrAllRval_23;
                MR_Word HeadInit_39;
                MR_Word TailInits_40;
                MR_Word RevOrRvals_45;
                MR_Word OrRvals_46;
                MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_8, (MR_Integer) 1))));
                MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_8, (MR_Integer) 2))));
                MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_8, (MR_Integer) 3))));
                MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_8, (MR_Integer) 4))));

                ml_backend__ml_unify_gen__maybe_shift_and_accumulate_or_rval_5_p_0(Rval_6, (MR_Word) (((MR_Box) ((MR_Integer) 0))), Fill_20, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))), &RevOrRvals0_21);
                ml_backend__ml_unify_gen__ml_pack_into_one_word_loop_4_p_0(RvalsTypesWidths_4, &LeftOverRvalsTypesWidths_22, RevOrRvals0_21, &RevOrRvals_45);
                mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), RevOrRvals_45, &OrRvals_46);
                if ((OrRvals_46 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  OrAllRval_23 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[12]));
                }
                else
                {
                  MR_Word HeadOrRval_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OrRvals_46, (MR_Integer) 0))));
                  MR_Word TailOrRvals_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OrRvals_46, (MR_Integer) 1))));
                  MR_Word OrAllRval_49;

                  ml_backend__ml_unify_gen__or_packed_rvals_3_p_0(HeadOrRval_47, TailOrRvals_48, &OrAllRval_49);
                  {
                    OrAllRval_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), OrAllRval_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(3), OrAllRval_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
                    MR_hl_field(MR_mktag(3), OrAllRval_23, 2) = ((MR_Box) (OrAllRval_49));
                  }
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
          ConstType_12 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[13]));
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
            succeeded = ((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0))) == (MR_Integer) 0)));
            if (succeeded)
            {
              Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 1))));
              Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 2))));
              TypeCtorCategory_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 3))));
              succeeded = ((((MR_tag((MR_Word) TypeCtorCategory_15)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeCtorCategory_15, (MR_Integer) 0))) == (MR_Integer) 0)));
              if (succeeded)
                Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeCtorCategory_15, (MR_Integer) 1))));
            }
          }
          if (succeeded)
          {
            ConstType_12 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[13]));
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
                ConsId_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsIdOrClosure_11, (MR_Integer) 0))));
                succeeded = ((((MR_tag((MR_Word) ConsId_17)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_17, (MR_Integer) 0))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  CtorSymName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_17, (MR_Integer) 1))));
                  CtorArity_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_17, (MR_Integer) 2))));
                  _TypeCtor_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_17, (MR_Integer) 3))));
                  if (((MR_tag((MR_Word) MLDS_Type_9)) == (MR_mktag((MR_Integer) 1))))
                  {
                    MR_Word Var_48 = (MR_Word) (MR_body((MR_Word) (MLDS_Type_9), (MR_Integer) 1));
                    MR_Word Var_23;

                    QualTypeName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 0))));
                    TypeArity_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 1))));
                    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 2))));
                    succeeded = MR_TRUE;
                  }
                  else
                  if (((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0))) == (MR_Integer) 0))))
                  {
                    MR_Word MercuryType_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 1))));
                    MR_Word TypeCtor_27;
                    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 3))));
                    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 2))));
                    MR_Word Var_26;

                    succeeded = ((((MR_tag((MR_Word) Var_47)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_47, (MR_Integer) 0))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_47, (MR_Integer) 1))));
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
              MR_String UnqualTypeName_30 = ((MR_String) ((MR_hl_field(MR_mktag(0), QualTypeName_21, (MR_Integer) 2))));
              MR_String CtorName_31;
              MR_Word MLDS_Module_32;
              MR_String TypeName_34;
              MR_Word ClassQualifier_35;
              MR_Word QualClassName_36;
              MR_Word ClassId_37;
              MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualTypeName_21, (MR_Integer) 0))));
              MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualTypeName_21, (MR_Integer) 1))));
              MR_Word _QualKind_33;

              CtorName_31 = ml_backend__ml_type_gen__ml_gen_du_ctor_name_unqual_type_5_f_0(Target_7, UnqualTypeName_30, TypeArity_22, CtorSymName_18, CtorArity_19);
              MLDS_Module_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualTypeName_21, (MR_Integer) 0))));
              _QualKind_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualTypeName_21, (MR_Integer) 1))));
              TypeName_34 = ((MR_String) ((MR_hl_field(MR_mktag(0), QualTypeName_21, (MR_Integer) 2))));
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
              ConstType_12 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ClassId_37)));
            }
            else
            {
              MR_Word TypeCtor_61;
              MR_Word Var_51;
              MR_Word MercuryType_58;
              MR_Word Var_38;
              MR_Word Var_39;

              succeeded = ((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0))) == (MR_Integer) 0)));
              if (succeeded)
              {
                MercuryType_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 1))));
                Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 2))));
                Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 3))));
                succeeded = ((((MR_tag((MR_Word) Var_51)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_51, (MR_Integer) 0))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_51, (MR_Integer) 1))));
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
                ConstType_12 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ClassId_59)));
              }
              else
              {
                MR_Word Var_53;
                MR_Word Var_42;
                MR_Word Var_43;

                succeeded = ((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 1))));
                  Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 2))));
                  Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 3))));
                  succeeded = (Var_53 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                }
                if (succeeded)
                {
                  ConstType_12 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[13]));
                }
                else
                {
                  MR_Word Var_55;
                  MR_Word Var_44;
                  MR_Word Var_45;

                  succeeded = ((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 1))));
                    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 2))));
                    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 3))));
                    succeeded = (Var_55 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  if (succeeded)
                  {
                    ConstType_12 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[13]));
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
ml_backend__ml_unify_gen__ml_gen_box_extra_const_rval_list_lld_6_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_box_extra_const_rval_list_lld__1056__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    if ((HeadVar__3_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__4_4 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
      *STATE_VARIABLE_GlobalData_6 = STATE_VARIABLE_GlobalData_0_5;
    }
    else
    {
      MR_Word RvalTypeWidth_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word RvalsTypesWidths_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word BoxedRvalTypeWidth_16;
      MR_Word BoxedRvalsTypesWidths_17;
      MR_Word Rval_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_14, (MR_Integer) 0))));
      MR_Word MLDS_Type_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_14, (MR_Integer) 1))));
      MR_Word PosWidth_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_14, (MR_Integer) 2))));
      MR_Word Width_22;
      MR_Word BoxedRval_23;
      MR_Word Var_26;
      MR_Word STATE_VARIABLE_GlobalData_30_30;

      Width_22 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(PosWidth_21);
      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[2]));
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
  if ((HeadVar__3_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__4_4 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    *STATE_VARIABLE_GlobalData_6 = STATE_VARIABLE_GlobalData_0_5;
  }
  else
  {
    MR_Word ArgVarTypeWidth_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgVarsTypesWidths_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word BoxedRvalTypeWidth_16;
    MR_Word BoxedRvalsTypesWidths_17;
    MR_Word ArgVar_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarTypeWidth_14, (MR_Integer) 0))));
    MR_Word ArgPosWidth_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarTypeWidth_14, (MR_Integer) 2))));
    MR_Word GroundTerm_22;
    MR_Word Rval_23;
    MR_Word MLDS_Type_25;
    MR_Word ModuleInfo_26;
    MR_Word Width_27;
    MR_Word BoxedRval_28;
    MR_Word STATE_VARIABLE_GlobalData_31_31;
    MR_Word _ArgVarType_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarTypeWidth_14, (MR_Integer) 1))));
    MR_Word _MercuryType_24;

    ml_backend__ml_gen_info__ml_gen_info_lookup_const_var_3_p_0(Info_1, ArgVar_19, &GroundTerm_22);
    Rval_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm_22, (MR_Integer) 0))));
    _MercuryType_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm_22, (MR_Integer) 1))));
    MLDS_Type_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm_22, (MR_Integer) 2))));
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

    if ((HeadVar__3_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__4_4 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
      *STATE_VARIABLE_GlobalData_6 = STATE_VARIABLE_GlobalData_0_5;
    }
    else
    {
      MR_Word ArgVarTypeWidth_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgVarsTypesWidths_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word FieldRvalTypeWidth_16;
      MR_Word FieldRvalsTypesWidths_17;
      MR_Word ArgVar_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarTypeWidth_14, (MR_Integer) 0))));
      MR_Word ConsArgType_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarTypeWidth_14, (MR_Integer) 1))));
      MR_Word ConsArgPosWidth_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarTypeWidth_14, (MR_Integer) 2))));
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
      ArgRval_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm_37, (MR_Integer) 0))));
      Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm_37, (MR_Integer) 1))));
      Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm_37, (MR_Integer) 2))));
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_1, &ModuleInfo_24);
      ConsWidth_26 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ConsArgPosWidth_21);
      succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ModuleInfo_24, ConsArgType_20, ConsWidth_26);
      if (succeeded)
      {
        MR_Word TypeVarSet0_45;
        MR_Word MLDS_ArgType_61;
        MR_Word TypeVar_46;
        MR_Word _TypeVarSet_47;

        mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet0_45);
        mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVar_46, TypeVarSet0_45, &_TypeVarSet_47);
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

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_dynamically_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_71;

    conv0_LambdaHeadVar__2_71 = ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_new_object_dynamically__628__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_71));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_dynamically_13_p_0(
  MR_Word ConsIdOrClosure_14,
  MR_Word MaybeCtorName_15,
  MR_Integer Ptag_16,
  MR_Word ExplicitSecTag_17,
  MR_Word Var_18,
  MR_Word ExtraRvalsTypesWidths_19,
  MR_Word ArgVars_20,
  MR_Word ArgModes_21,
  MR_Word TakeAddr_22,
  MR_Word Context_23,
  MR_Word * Stmts_24,
  MR_Word STATE_VARIABLE_Info_0_63,
  MR_Word * STATE_VARIABLE_Info_64)
{
  {
    MR_Word VarType_26;
    MR_Word ArgVarsTypesWidths_27;
    MR_Word UseAtomicCells_28;
    MR_Word MayUseAtomic0_29;
    MR_Integer NumExtraRvals_31;
    MR_Integer PrevOffset_32;
    MR_Word TakeAddrInfos_33;
    MR_Word ArgRvalsTypesWidths0_34;
    MR_Word MayUseAtomic_35;
    MR_Word PackedArgRvalsTypesWidths_36;
    MR_Word ArgRvalsTypesWidths_37;
    MR_Integer Size_38;
    MR_Word SizeInWordsRval_39;
    MR_Word ProfileMemory_40;
    MR_Word MaybeAllocId_51;
    MR_Word VarLval_52;
    MR_Word ArgRvalsTypes_57;
    MR_Word MLDS_VarType_58;
    MR_Word MakeNewObject_59;
    MR_Word MakeNewObjStmt_60;
    MR_Word MaybePtag_61;
    MR_Word TakeAddrStmts_62;
    MR_Word Var_67;
    MR_Word Var_72;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_63, Var_18, &VarType_26);
    ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0(STATE_VARIABLE_Info_0_63, VarType_26, ConsIdOrClosure_14, ArgVars_20, &ArgVarsTypesWidths_27);
    ml_backend__ml_gen_info__ml_gen_info_get_use_atomic_cells_2_p_0(STATE_VARIABLE_Info_0_63, &UseAtomicCells_28);
    switch (UseAtomicCells_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MayUseAtomic0_29 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        MayUseAtomic0_29 = (MR_Integer) 0;
        break;
    }
    NumExtraRvals_31 = mercury__list__length_1_f_0((MR_Word) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_mlds_rval_type_and_width_0), ExtraRvalsTypesWidths_19);
    PrevOffset_32 = (MR_Integer) ((MR_Unsigned) NumExtraRvals_31 - (MR_Unsigned) (MR_Integer) 1);
    ml_backend__ml_unify_gen__ml_gen_cons_args_12_p_0(STATE_VARIABLE_Info_0_63, ArgVarsTypesWidths_27, ArgModes_21, NumExtraRvals_31, (MR_Integer) 1, PrevOffset_32, ArgVarsTypesWidths_27, TakeAddr_22, &TakeAddrInfos_33, &ArgRvalsTypesWidths0_34, MayUseAtomic0_29, &MayUseAtomic_35);
    ml_backend__ml_unify_gen__ml_expand_or_pack_into_words_2_p_0(ArgRvalsTypesWidths0_34, &PackedArgRvalsTypesWidths_36);
    ArgRvalsTypesWidths_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_mlds_rval_type_and_width_0), ExtraRvalsTypesWidths_19, PackedArgRvalsTypesWidths_36);
    mercury__list__length_2_p_0((MR_Word) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_mlds_rval_type_and_width_0), ArgRvalsTypesWidths_37, &Size_38);
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_67, 0) = ((MR_Box) (Size_38));
    }
    {
      SizeInWordsRval_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SizeInWordsRval_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), SizeInWordsRval_39, 1) = ((MR_Box) (Var_67));
    }
    ml_backend__ml_gen_info__ml_gen_info_get_profile_memory_2_p_0(STATE_VARIABLE_Info_0_63, &ProfileMemory_40);
    switch (ProfileMemory_40) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MaybeAllocId_51 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          *STATE_VARIABLE_Info_64 = STATE_VARIABLE_Info_0_63;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModuleInfo_41;
          MR_Word PredProcId_42;
          MR_Word ProcLabel_44;
          MR_Word GlobalData0_45;
          MR_Word MaybeConsId_47;
          MR_Word AllocId_49;
          MR_Word GlobalData_50;
          MR_Word Var_68;
          MR_Word _Module_43;

          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_63, &ModuleInfo_41);
          ml_backend__ml_gen_info__ml_gen_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_0_63, &PredProcId_42);
          ml_backend__ml_code_util__ml_gen_proc_label_4_p_0(ModuleInfo_41, PredProcId_42, &_Module_43, &ProcLabel_44);
          ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_63, &GlobalData0_45);
          if (((MR_tag((MR_Word) ConsIdOrClosure_14)) == (MR_mktag((MR_Integer) 1))))
            MaybeConsId_47 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          else
          {
            MR_Word ConsId_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsIdOrClosure_14, (MR_Integer) 0))));

            {
              MaybeConsId_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeConsId_47, 0) = ((MR_Box) (ConsId_46));
            }
          }
          Var_68 = (MR_Word) (MR_mkword(MR_mktag(0), (MR_Word) (ProcLabel_44)));
          ml_backend__ml_global_data__ml_gen_alloc_site_7_p_0(Var_68, MaybeConsId_47, Size_38, Context_23, &AllocId_49, GlobalData0_45, &GlobalData_50);
          ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_50, STATE_VARIABLE_Info_0_63, STATE_VARIABLE_Info_64);
          {
            MaybeAllocId_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeAllocId_51, 0) = ((MR_Box) (AllocId_49));
          }
        }
        break;
    }
    ml_backend__ml_code_util__ml_gen_var_3_p_0(*STATE_VARIABLE_Info_64, Var_18, &VarLval_52);
    ArgRvalsTypes_57 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_mlds_rval_type_and_width_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_typed_rval_0), (MR_Word) (&ml_backend__ml_unify_gen_scalar_common_2[4]), ArgRvalsTypesWidths_37);
    ml_backend__ml_code_util__ml_gen_type_3_p_0(*STATE_VARIABLE_Info_64, VarType_26, &MLDS_VarType_58);
    {
      Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (SizeInWordsRval_39));
    }
    {
      MakeNewObject_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MakeNewObject_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), MakeNewObject_59, 1) = ((MR_Box) (VarLval_52));
      MR_hl_field(MR_mktag(3), MakeNewObject_59, 2) = ((MR_Box) (Ptag_16));
      MR_hl_field(MR_mktag(3), MakeNewObject_59, 3) = ((MR_Box) (ExplicitSecTag_17));
      MR_hl_field(MR_mktag(3), MakeNewObject_59, 4) = ((MR_Box) (MLDS_VarType_58));
      MR_hl_field(MR_mktag(3), MakeNewObject_59, 5) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(3), MakeNewObject_59, 6) = ((MR_Box) (MaybeCtorName_15));
      MR_hl_field(MR_mktag(3), MakeNewObject_59, 7) = ((MR_Box) (ArgRvalsTypes_57));
      MR_hl_field(MR_mktag(3), MakeNewObject_59, 8) = ((MR_Box) (MayUseAtomic_35));
      MR_hl_field(MR_mktag(3), MakeNewObject_59, 9) = ((MR_Box) (MaybeAllocId_51));
    }
    {
      MakeNewObjStmt_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MakeNewObjStmt_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), MakeNewObjStmt_60, 1) = ((MR_Box) (MakeNewObject_59));
      MR_hl_field(MR_mktag(3), MakeNewObjStmt_60, 2) = ((MR_Box) (Context_23));
    }
    {
      MaybePtag_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePtag_61, 0) = ((MR_Box) (Ptag_16));
    }
    ml_backend__ml_unify_gen__ml_gen_field_take_address_assigns_7_p_0(TakeAddrInfos_33, VarLval_52, MLDS_VarType_58, MaybePtag_61, Context_23, *STATE_VARIABLE_Info_64, &TakeAddrStmts_62);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_24 = base;
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
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    else
    {
      MR_Word RvalTypeWidth_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word RvalsTypesWidths_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Rval_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_3, (MR_Integer) 0))));
      MR_Word Type_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_3, (MR_Integer) 1))));
      MR_Word PosWidth_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_3, (MR_Integer) 2))));

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
            MR_Word DoubleWordKind_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), PosWidth_8, (MR_Integer) 2))));
            MR_Word SubstType_16;
            MR_Word RvalA_17;
            MR_Word RvalB_18;
            MR_Word RvalTypeWidthA_19;
            MR_Word RvalTypeWidthB_20;
            MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(2), PosWidth_8, (MR_Integer) 0))));
            MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(2), PosWidth_8, (MR_Integer) 1))));
            MR_Word Var_55;
            MR_Word Var_58;
            MR_Word Var_59;
            MR_Integer Var_60;
            MR_Word Var_62;
            MR_Integer Var_63;
            MR_Word Var_65;
            MR_Word TailPackedRvalsTypesWidths_66;
            MR_Word Var_46;
            MR_Word Var_15;

            AOOffset_12 = (MR_Integer) (Var_44);
            CellOffset_13 = (MR_Integer) (Var_45);
            ml_backend__ml_unify_gen__ml_expand_or_pack_into_words_2_p_0(RvalsTypesWidths_4, &TailPackedRvalsTypesWidths_66);
            succeeded = ((((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
              succeeded = ((((MR_tag((MR_Word) Var_46)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_46, (MR_Integer) 0))) == (MR_Integer) 20)));
              if (succeeded)
                Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_46, (MR_Integer) 1))));
            }
            if (succeeded)
            {
              SubstType_16 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)));
              RvalA_17 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[11]));
              RvalB_18 = RvalA_17;
            }
            else
            {
              SubstType_16 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)));
              switch (DoubleWordKind_14) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      RvalA_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), RvalA_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), RvalA_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
                      MR_hl_field(MR_mktag(3), RvalA_17, 2) = ((MR_Box) (Rval_6));
                    }
                    {
                      RvalB_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), RvalB_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), RvalB_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14))));
                      MR_hl_field(MR_mktag(3), RvalB_18, 2) = ((MR_Box) (Rval_6));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      RvalA_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), RvalA_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), RvalA_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15))));
                      MR_hl_field(MR_mktag(3), RvalA_17, 2) = ((MR_Box) (Rval_6));
                    }
                    {
                      RvalB_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), RvalB_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), RvalB_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
                      MR_hl_field(MR_mktag(3), RvalB_18, 2) = ((MR_Box) (Rval_6));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    {
                      RvalA_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), RvalA_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), RvalA_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17))));
                      MR_hl_field(MR_mktag(3), RvalA_17, 2) = ((MR_Box) (Rval_6));
                    }
                    {
                      RvalB_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), RvalB_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), RvalB_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18))));
                      MR_hl_field(MR_mktag(3), RvalB_18, 2) = ((MR_Box) (Rval_6));
                    }
                  }
                  break;
              }
            }
            {
              Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_44));
              MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_45));
            }
            {
              RvalTypeWidthA_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), RvalTypeWidthA_19, 0) = ((MR_Box) (RvalA_17));
              MR_hl_field(MR_mktag(0), RvalTypeWidthA_19, 1) = ((MR_Box) (SubstType_16));
              MR_hl_field(MR_mktag(0), RvalTypeWidthA_19, 2) = ((MR_Box) (Var_55));
            }
            Var_60 = (MR_Integer) ((MR_Unsigned) AOOffset_12 + (MR_Unsigned) (MR_Integer) 1);
            Var_59 = (MR_Word) (Var_60);
            Var_63 = (MR_Integer) ((MR_Unsigned) CellOffset_13 + (MR_Unsigned) (MR_Integer) 1);
            Var_62 = (MR_Word) (Var_63);
            {
              Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
              MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_62));
            }
            {
              RvalTypeWidthB_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), RvalTypeWidthB_20, 0) = ((MR_Box) (RvalB_18));
              MR_hl_field(MR_mktag(0), RvalTypeWidthB_20, 1) = ((MR_Box) (SubstType_16));
              MR_hl_field(MR_mktag(0), RvalTypeWidthB_20, 2) = ((MR_Box) (Var_58));
            }
            {
              Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (RvalTypeWidthB_20));
              MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (TailPackedRvalsTypesWidths_66));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RvalTypeWidthA_19));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_65));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PosWidth_8, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Fill_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_8, (MR_Integer) 5))));
                MR_Word RevOrRvals0_24;
                MR_Word LeftOverRvalsTypesWidths_25;
                MR_Word OrAllRval_26;
                MR_Word PackedRvalTypeWidth_27;
                MR_Word Var_43;
                MR_Word TailPackedRvalsTypesWidths_67;
                MR_Word AOOffset_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_8, (MR_Integer) 1))));
                MR_Word CellOffset_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_8, (MR_Integer) 2))));
                MR_Word RevOrRvals_74;
                MR_Word OrRvals_75;
                MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_8, (MR_Integer) 3))));
                MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_8, (MR_Integer) 4))));

                ml_backend__ml_unify_gen__maybe_shift_and_accumulate_or_rval_5_p_0(Rval_6, (MR_Word) (((MR_Box) ((MR_Integer) 0))), Fill_23, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))), &RevOrRvals0_24);
                ml_backend__ml_unify_gen__ml_pack_into_one_word_loop_4_p_0(RvalsTypesWidths_4, &LeftOverRvalsTypesWidths_25, RevOrRvals0_24, &RevOrRvals_74);
                mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), RevOrRvals_74, &OrRvals_75);
                if ((OrRvals_75 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  OrAllRval_26 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[12]));
                }
                else
                {
                  MR_Word HeadOrRval_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OrRvals_75, (MR_Integer) 0))));
                  MR_Word TailOrRvals_77 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OrRvals_75, (MR_Integer) 1))));
                  MR_Word OrAllRval_78;

                  ml_backend__ml_unify_gen__or_packed_rvals_3_p_0(HeadOrRval_76, TailOrRvals_77, &OrAllRval_78);
                  {
                    OrAllRval_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), OrAllRval_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(3), OrAllRval_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
                    MR_hl_field(MR_mktag(3), OrAllRval_26, 2) = ((MR_Box) (OrAllRval_78));
                  }
                }
                {
                  Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (AOOffset_68));
                  MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (CellOffset_69));
                }
                {
                  PackedRvalTypeWidth_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), PackedRvalTypeWidth_27, 0) = ((MR_Box) (OrAllRval_26));
                  MR_hl_field(MR_mktag(0), PackedRvalTypeWidth_27, 1) = ((MR_Box) (Type_7));
                  MR_hl_field(MR_mktag(0), PackedRvalTypeWidth_27, 2) = ((MR_Box) (Var_43));
                }
                ml_backend__ml_unify_gen__ml_expand_or_pack_into_words_2_p_0(LeftOverRvalsTypesWidths_25, &TailPackedRvalsTypesWidths_67);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__2_2 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PackedRvalTypeWidth_27));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailPackedRvalsTypesWidths_67));
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
ml_backend__ml_unify_gen__or_packed_rvals_3_p_0(
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
      MR_Word UnboxRvalA_16;
      MR_Word STATE_VARIABLE_MaybeType_17_23;
      MR_Word Var_25;
      MR_Word TypeA_14;
      MR_Word UnboxRvalA0_15;
      MR_Word TypeB_17;
      MR_Word UnboxRvalB0_18;

      ml_backend__ml_unify_gen__or_packed_rvals_3_p_0(HeadTailRval_7, TailTailRvals_8, &TailOrAllRval_9);
      succeeded = ((((MR_tag((MR_Word) HeadRval_4)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadRval_4, (MR_Integer) 0))) == (MR_Integer) 2)));
      if (succeeded)
      {
        TypeA_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadRval_4, (MR_Integer) 1))));
        UnboxRvalA0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadRval_4, (MR_Integer) 2))));
        UnboxRvalA_16 = UnboxRvalA0_15;
        {
          STATE_VARIABLE_MaybeType_17_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeType_17_23, 0) = ((MR_Box) (TypeA_14));
        }
      }
      else
      {
        UnboxRvalA_16 = HeadRval_4;
        STATE_VARIABLE_MaybeType_17_23 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
      }
      Var_25 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[9]));
      succeeded = ((((MR_tag((MR_Word) TailOrAllRval_9)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TailOrAllRval_9, (MR_Integer) 0))) == (MR_Integer) 2)));
      if (succeeded)
      {
        TypeB_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TailOrAllRval_9, (MR_Integer) 1))));
        UnboxRvalB0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TailOrAllRval_9, (MR_Integer) 2))));
        {
          MR_Word UnboxRval_20;

          {
            UnboxRval_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), UnboxRval_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), UnboxRval_20, 1) = ((MR_Box) (Var_25));
            MR_hl_field(MR_mktag(3), UnboxRval_20, 2) = ((MR_Box) (UnboxRvalA_16));
            MR_hl_field(MR_mktag(3), UnboxRval_20, 3) = ((MR_Box) (UnboxRvalB0_18));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *OrAllRval_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (TypeB_17));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (UnboxRval_20));
          }
        }
      }
      else
      {
        MR_Word UnboxRval_30;

        {
          UnboxRval_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), UnboxRval_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(3), UnboxRval_30, 1) = ((MR_Box) (Var_25));
          MR_hl_field(MR_mktag(3), UnboxRval_30, 2) = ((MR_Box) (UnboxRvalA_16));
          MR_hl_field(MR_mktag(3), UnboxRval_30, 3) = ((MR_Box) (TailOrAllRval_9));
        }
        if ((STATE_VARIABLE_MaybeType_17_23 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *OrAllRval_6 = UnboxRval_30;
        else
        {
          MR_Word BoxType_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeType_17_23, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *OrAllRval_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (BoxType_27));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (UnboxRval_30));
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
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
      *STATE_VARIABLE_RevOrRvals_4 = STATE_VARIABLE_RevOrRvals_0_3;
    }
    else
    {
      MR_Word RvalTypeWidth_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word RvalsTypesWidths_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Rval_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_8, (MR_Integer) 0))));
      MR_Word PosWidth_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_8, (MR_Integer) 2))));
      MR_Word _Type_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_8, (MR_Integer) 1))));

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
                MR_Word Shift_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_14, (MR_Integer) 3))));
                MR_Word Fill_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_14, (MR_Integer) 6))));
                MR_Word STATE_VARIABLE_RevOrRvals_35_37;
                MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_14, (MR_Integer) 1))));
                MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_14, (MR_Integer) 2))));
                MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_14, (MR_Integer) 4))));
                MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_14, (MR_Integer) 5))));
                MR_Word next_value_of_HeadVar__1_1;
                MR_Word next_value_of_STATE_VARIABLE_RevOrRvals_0_3;

                ml_backend__ml_unify_gen__maybe_shift_and_accumulate_or_rval_5_p_0(Rval_12, Shift_27, Fill_30, STATE_VARIABLE_RevOrRvals_0_3, &STATE_VARIABLE_RevOrRvals_35_37);
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
ml_backend__ml_unify_gen__maybe_shift_and_accumulate_or_rval_5_p_0(
  MR_Word Rval_6,
  MR_Word Shift_7,
  MR_Word Fill_8,
  MR_Word STATE_VARIABLE_RevOrRvals_0_18,
  MR_Word * STATE_VARIABLE_RevOrRvals_19)
{
  {
    MR_bool succeeded;
    MR_Integer ShiftInt_10 = (MR_Integer) (Shift_7);
    MR_Word CastRval_11;
    MR_Word Rval1_33;
    MR_Word UnsignedMLDSType_37;
    MR_Word RvalConst_12;

    switch (Fill_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 5:
      case (MR_Integer) 6:
      case (MR_Integer) 4:
        Rval1_33 = Rval_6;
        break;
      case (MR_Integer) 2:
        {
          MR_Word FromMLDSType_34;
          MR_Word ToMLDSType_35;
          MR_Word SubRval_36;
          MR_Word Var_38;

          FromMLDSType_34 = ml_backend__ml_util__mlds_int_type_int16_0_f_0();
          ToMLDSType_35 = ml_backend__ml_util__mlds_int_type_uint16_0_f_0();
          succeeded = ((((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))) == (MR_Integer) 2)));
          if (succeeded)
          {
            Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
            SubRval_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
            succeeded = ml_backend__mlds____Unify____mlds_type_0_0(FromMLDSType_34, Var_38);
          }
          if (succeeded)
            {
              Rval1_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Rval1_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), Rval1_33, 1) = ((MR_Box) (ToMLDSType_35));
              MR_hl_field(MR_mktag(3), Rval1_33, 2) = ((MR_Box) (SubRval_36));
            }
          else
            {
              Rval1_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Rval1_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), Rval1_33, 1) = ((MR_Box) (ToMLDSType_35));
              MR_hl_field(MR_mktag(3), Rval1_33, 2) = ((MR_Box) (Rval_6));
            }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word FromMLDSType_42;
          MR_Word ToMLDSType_43;
          MR_Word SubRval_40;
          MR_Word Var_39;

          FromMLDSType_42 = ml_backend__ml_util__mlds_int_type_int32_0_f_0();
          ToMLDSType_43 = ml_backend__ml_util__mlds_int_type_uint32_0_f_0();
          succeeded = ((((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))) == (MR_Integer) 2)));
          if (succeeded)
          {
            Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
            SubRval_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
            succeeded = ml_backend__mlds____Unify____mlds_type_0_0(FromMLDSType_42, Var_39);
          }
          if (succeeded)
            {
              Rval1_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Rval1_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), Rval1_33, 1) = ((MR_Box) (ToMLDSType_43));
              MR_hl_field(MR_mktag(3), Rval1_33, 2) = ((MR_Box) (SubRval_40));
            }
          else
            {
              Rval1_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Rval1_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), Rval1_33, 1) = ((MR_Box) (ToMLDSType_43));
              MR_hl_field(MR_mktag(3), Rval1_33, 2) = ((MR_Box) (Rval_6));
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word FromMLDSType_49;
          MR_Word ToMLDSType_50;
          MR_Word SubRval_47;
          MR_Word Var_46;

          FromMLDSType_49 = ml_backend__ml_util__mlds_int_type_int8_0_f_0();
          ToMLDSType_50 = ml_backend__ml_util__mlds_int_type_uint8_0_f_0();
          succeeded = ((((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))) == (MR_Integer) 2)));
          if (succeeded)
          {
            Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
            SubRval_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
            succeeded = ml_backend__mlds____Unify____mlds_type_0_0(FromMLDSType_49, Var_46);
          }
          if (succeeded)
            {
              Rval1_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Rval1_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), Rval1_33, 1) = ((MR_Box) (ToMLDSType_50));
              MR_hl_field(MR_mktag(3), Rval1_33, 2) = ((MR_Box) (SubRval_47));
            }
          else
            {
              Rval1_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Rval1_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), Rval1_33, 1) = ((MR_Box) (ToMLDSType_50));
              MR_hl_field(MR_mktag(3), Rval1_33, 2) = ((MR_Box) (Rval_6));
            }
        }
        break;
    }
    UnsignedMLDSType_37 = ml_backend__ml_util__mlds_int_type_uint_0_f_0();
    {
      CastRval_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CastRval_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), CastRval_11, 1) = ((MR_Box) (UnsignedMLDSType_37));
      MR_hl_field(MR_mktag(3), CastRval_11, 2) = ((MR_Box) (Rval1_33));
    }
    succeeded = ((((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))) == (MR_Integer) 1)));
    if (succeeded)
    {
      RvalConst_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
      if (((MR_tag((MR_Word) RvalConst_12)) == (MR_mktag((MR_Integer) 2))))
      {
        MR_Integer Var_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), RvalConst_12, (MR_Integer) 0))));

        succeeded = (Var_20 == (MR_Integer) 0);
      }
      else
      if (((((MR_tag((MR_Word) RvalConst_12)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalConst_12, (MR_Integer) 0))) == (MR_Integer) 20))))
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
        MR_Word Var_27;
        MR_Word Var_28;

        {
          Var_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_28, 0) = ((MR_Box) (ShiftInt_10));
        }
        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (Var_28));
        }
        {
          ShiftedRval_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ShiftedRval_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(3), ShiftedRval_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[8])));
          MR_hl_field(MR_mktag(3), ShiftedRval_14, 2) = ((MR_Box) (CastRval_11));
          MR_hl_field(MR_mktag(3), ShiftedRval_14, 3) = ((MR_Box) (Var_27));
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
ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__cons_id_arg_types_and_widths__2903__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    conv0_HeadVar__3_3 = hlds__vartypes__lookup_var_type_func_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
      MR_Integer InitOffset_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ConsIdOrClosure_8, (MR_Integer) 0))));
      MR_Word Var_15;

      Var_15 = ml_backend__ml_code_util__ml_make_boxed_type_0_f_0();
      ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_101_99_105_102_105_101_100_95_97_114_103_95_116_121_112_101_115_95_97_110_100_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_4_p_0(Var_15, InitOffset_14, ArgVars_9, ArgVarsTypesWidths_10);
    }
    else
    {
      MR_Word ConsId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsIdOrClosure_8, (MR_Integer) 0))));
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
      succeeded = ((((MR_tag((MR_Word) ConsId_11)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_11, (MR_Integer) 0))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_11, (MR_Integer) 1))));
        Var_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_11, (MR_Integer) 2))));
        Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_11, (MR_Integer) 3))));
        succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(VarType_7);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word ConsRepnDefn_32;

        succeeded = check_hlds__type_util__get_cons_repn_defn_3_p_0(ModuleInfo_12, ConsId_11, &ConsRepnDefn_32);
        if (succeeded)
        {
          MR_Word ConsArgRepns_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_32, (MR_Integer) 3))));
          MR_Integer NumExtraArgs_34;
          MR_Integer Var_44;
          MR_Integer Var_45;
          MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_32, (MR_Integer) 0))));
          MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_32, (MR_Integer) 1))));
          MR_Word Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_32, (MR_Integer) 2))));
          MR_Integer Var_60 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_32, (MR_Integer) 4))));
          MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_32, (MR_Integer) 5))));

          Var_44 = mercury__list__length_1_f_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), ArgVars_9);
          Var_45 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), ConsArgRepns_33);
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

            mercury__require__expect_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_3[5]), (MR_String) "predicate \140ml_backend.ml_unify_gen.cons_id_arg_types_and_widths\'/7", (MR_String) "extra args in static struct");
            mercury__list__det_split_list_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), NumExtraArgs_34, ArgVars_9, &ExtraArgs_35, &NonExtraArgs_36);
            Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_32, (MR_Integer) 0))));
            Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_32, (MR_Integer) 1))));
            Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_32, (MR_Integer) 2))));
            Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_32, (MR_Integer) 3))));
            Var_65 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_32, (MR_Integer) 4))));
            Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_32, (MR_Integer) 5))));
            succeeded = ((((MR_tag((MR_Word) Var_50)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_50, (MR_Integer) 0))) == (MR_Integer) 13)));
            if (succeeded)
            {
              Var_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_50, (MR_Integer) 1))));
              Var_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_50, (MR_Integer) 2))));
              AddedBy_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_50, (MR_Integer) 3))));
              succeeded = (AddedBy_39 == (MR_Integer) 0);
            }
            if (succeeded)
              InitOffset_40 = (MR_Integer) 1;
            else
              InitOffset_40 = (MR_Integer) 0;
            ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_116_121_112_101_95_97_110_100_95_97_108_108_111_99_97_116_101_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_4_p_0(Var_16, InitOffset_40, ExtraArgs_35, &ExtraArgsTypesWidths_41);
            ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_114_103_115_95_116_121_112_101_115_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(NonExtraArgs_36, ConsArgRepns_33, &NonExtraArgsTypesWidths_42);
            *ArgVarsTypesWidths_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[3]), ExtraArgsTypesWidths_41, NonExtraArgsTypesWidths_42);
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
  if ((HeadVar__3_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__4_4 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
  else
  {
    MR_Box Arg_9 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
    MR_Word Args_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgTypeWidth_11;
    MR_Word ArgsTypesWidths_12;
    MR_Word PosWidth_13;
    MR_Word Var_14 = (MR_Word) (CurOffset_2);
    MR_Word Var_15 = (MR_Word) (CurOffset_2);
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
  if ((HeadVar__3_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__4_4 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
  else
  {
    MR_Box Arg_9 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
    MR_Word Args_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgTypeWidth_11;
    MR_Word ArgsTypesWidths_12;
    MR_Word PosWidth_13;
    MR_Word Var_14 = (MR_Word) (CurOffset_2);
    MR_Word Var_15 = (MR_Word) (CurOffset_2);
    MR_Word Var_16;
    MR_Integer Var_17;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_Box conv1_Var_16;

    {
      PosWidth_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PosWidth_13, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(1), PosWidth_13, 1) = ((MR_Box) (Var_15));
    }
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ArgToType_1, (MR_Integer) 1))));
    conv1_Var_16 = func_0(((MR_Box) (ArgToType_1)), Arg_9);
    Var_16 = ((MR_Word) (conv1_Var_16));
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
  if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    if ((HeadVar__2_2 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__3_3 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.zip_args_types_widths\'/3", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Box Var_30 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));

    if ((HeadVar__2_2 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.zip_args_types_widths\'/3", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word ConsArgRepn_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ConsArgRepns_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgTypeWidth_18;
      MR_Word ArgsTypesWidth_19;
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsArgRepn_16, (MR_Integer) 1))));
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsArgRepn_16, (MR_Integer) 2))));
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsArgRepn_16, (MR_Integer) 0))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsArgRepn_16, (MR_Integer) 3))));

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
ml_backend__ml_unify_gen__ml_gen_cons_args_12_p_0_7(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1188__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1179__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1168__2_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1160__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1168__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1148__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args__1154__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
    if ((HeadVar__2_2 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__3_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *HeadVar__9_9 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        *HeadVar__10_10 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
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
      MR_Word Var_179 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_180 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_cons_args\'/12", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word ArgMode_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgModes_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgVar_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_180, (MR_Integer) 0))));
        MR_Word ConsArgType_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_180, (MR_Integer) 1))));
        MR_Word ArgPosWidth_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_180, (MR_Integer) 2))));
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
              MR_Word CellOffset_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgPosWidth_67, (MR_Integer) 1))));
              MR_Integer CellOffsetInt_78;
              MR_Word Var_119;
              MR_Word Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgPosWidth_67, (MR_Integer) 0))));

              CurOffset_77 = (MR_Integer) ((MR_Unsigned) PrevOffset0_6 + (MR_Unsigned) (MR_Integer) 1);
              CellOffsetInt_78 = (MR_Integer) (CellOffset_76);
              {
                Var_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_119, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[1]));
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
              MR_Word CellOffset_148 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgPosWidth_67, (MR_Integer) 1))));
              MR_Integer CellOffsetInt_149;
              MR_Word Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgPosWidth_67, (MR_Integer) 0))));
              MR_Word Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgPosWidth_67, (MR_Integer) 2))));

              CurOffset_77 = (MR_Integer) ((MR_Unsigned) PrevOffset0_6 + (MR_Unsigned) (MR_Integer) 1);
              CellOffsetInt_149 = (MR_Integer) (CellOffset_148);
              {
                Var_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[1]));
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
                  MR_Word CellOffset_150 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 2))));
                  MR_Integer CellOffsetInt_151;
                  MR_Word Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 1))));
                  MR_Word Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 3))));
                  MR_Word Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 4))));
                  MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 5))));

                  CurOffset_77 = (MR_Integer) ((MR_Unsigned) PrevOffset0_6 + (MR_Unsigned) (MR_Integer) 1);
                  CellOffsetInt_151 = (MR_Integer) (CellOffset_150);
                  {
                    Var_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_109, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[1]));
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
                  MR_Word CellOffset_176 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 2))));
                  MR_Integer CellOffsetInt_177;
                  MR_Word Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 1))));
                  MR_Word Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 3))));
                  MR_Word Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 4))));
                  MR_Word Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 5))));
                  MR_Word Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 6))));

                  CurOffset_77 = PrevOffset0_6;
                  CellOffsetInt_177 = (MR_Integer) (CellOffset_176);
                  {
                    Var_173 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_173, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[1]));
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
                  MR_Word CellOffset_152 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 2))));
                  MR_Integer CellOffsetInt_153;
                  MR_Word Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 1))));

                  CurOffset_77 = PrevOffset0_6;
                  CellOffsetInt_153 = (MR_Integer) (CellOffset_152);
                  {
                    Var_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_105, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[1]));
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
          Var_169 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_TakeAddr_0_8, (MR_Integer) 0))));
          STATE_VARIABLE_TakeAddr_123_123 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_TakeAddr_0_8, (MR_Integer) 1))));
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
            MR_hl_field(MR_mktag(0), Var_124, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[2]));
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
          Var_132 = (MR_Word) (CurOffset_77);
          {
            Var_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_129, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[3]));
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
          succeeded = (ArgPosWidth_67 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
            MR_Word RHSInsts_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_55, (MR_Integer) 1))));
            MR_Integer Var_144;
            MR_Word Rval_154;
            MR_Word RvalMLDSTypeWidth_155;
            MR_Word TailRvalsMLDSTypesWidths_156;
            MR_Word _LHSInsts_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_55, (MR_Integer) 0))));
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

    conv0_LambdaHeadVar__2_19 = ml_backend__ml_unify_gen__IntroducedFrom__func__ml_calc_field_offset__1229__1_1_f_0(((MR_Word) (wrapper_arg_1)));
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

    succeeded = mercury__list__take_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[3]), Var_15, ArgVarsTypesWidths_6, &ArgVarsTypesWidthsBeforeArg_9);
    if (succeeded)
    {
      MR_Word PosWidthsBeforeArg_10;
      MR_Integer WordsBeforeArg_14;
      MR_Integer Var_20;

      PosWidthsBeforeArg_10 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[3]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0), (MR_Word) (&ml_backend__ml_unify_gen_scalar_common_2[3]), ArgVarsTypesWidthsBeforeArg_9);
      WordsBeforeArg_14 = backend_libs__arg_pack__count_distinct_words_1_f_0(PosWidthsBeforeArg_10);
      Var_20 = (MR_Integer) ((MR_Unsigned) NumExtraArgs_5 + (MR_Unsigned) WordsBeforeArg_14);
      Offset_8 = (MR_Word) (Var_20);
    }
    else
    {
      mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_unify_gen.ml_calc_field_offset\'/3", (MR_String) "more fields than arg_widths");
    }
    return Offset_8;
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
      MR_Word TypeVarSet0_11;
      MR_Word TypeVar_12;
      MR_Word _TypeVarSet_13;

      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet0_11);
      mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVar_12, TypeVarSet0_11, &_TypeVarSet_13);
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
ml_backend__ml_unify_gen__ml_gen_field_take_address_assigns_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CellLval_2,
  MR_Word CellType_3,
  MR_Word MaybePtag_4,
  MR_Word Context_5,
  MR_Word Info_6,
  MR_Word * HeadVar__7_7)
{
  if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__7_7 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
  else
  {
    MR_Word TakeAddrInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word TakeAddrInfos_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Assign_20;
    MR_Word Assigns_21;
    MR_Word AddrVar_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TakeAddrInfo_13, (MR_Integer) 0))));
    MR_Word Offset_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TakeAddrInfo_13, (MR_Integer) 1))));
    MR_Word FieldType_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TakeAddrInfo_13, (MR_Integer) 3))));
    MR_Word HighLevelData_26;
    MR_Word _ConsArgType_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TakeAddrInfo_13, (MR_Integer) 2))));

    ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(Info_6, &HighLevelData_26);
    switch (HighLevelData_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer OffsetInt_27 = (MR_Integer) (Offset_23);
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
            MR_hl_field(MR_mktag(3), SourceRval_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), SourceRval_28, 1) = ((MR_Box) (Var_35));
          }
          ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_6, AddrVar_22, &AddrLval_29);
          ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_6, AddrVar_22, &AddrVarType_30);
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_6, &ModuleInfo_31);
          MLDS_AddrVarType_32 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_31, AddrVarType_30);
          {
            CastSourceRval_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CastSourceRval_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), CastSourceRval_33, 1) = ((MR_Box) (MLDS_AddrVarType_32));
            MR_hl_field(MR_mktag(3), CastSourceRval_33, 2) = ((MR_Box) (SourceRval_28));
          }
          Assign_20 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(AddrLval_29, CastSourceRval_33, Context_5);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_34;
          MR_Word AddrLval_40;

          ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_6, AddrVar_22, &AddrLval_40);
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_34, 0) = ((MR_Box) (CellLval_2));
          }
          Assign_20 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(AddrLval_40, Var_34, Context_5);
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

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____arg_const_type_and_width_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unify_gen____Unify____arg_const_type_and_width_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    ml_backend__ml_unify_gen____Compare____arg_const_type_and_width_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

    succeeded = ml_backend__ml_unify_gen____Unify____arg_to_type_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

    ml_backend__ml_unify_gen____Compare____arg_to_type_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
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

    succeeded = ml_backend__ml_unify_gen____Unify____arg_type_and_width_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

    ml_backend__ml_unify_gen____Compare____arg_type_and_width_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
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

    succeeded = ml_backend__ml_unify_gen____Unify____arg_var_type_and_width_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    ml_backend__ml_unify_gen____Compare____arg_var_type_and_width_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____assign_dir_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unify_gen____Unify____assign_dir_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____assign_dir_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_unify_gen____Compare____assign_dir_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

    succeeded = ml_backend__ml_unify_gen____Unify____cons_id_or_closure_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    ml_backend__ml_unify_gen____Compare____cons_id_or_closure_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____field_gen_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unify_gen____Unify____field_gen_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____field_gen_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_unify_gen____Compare____field_gen_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

    succeeded = ml_backend__ml_unify_gen____Unify____field_offset_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    ml_backend__ml_unify_gen____Compare____field_offset_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____field_via_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unify_gen____Unify____field_via_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____field_via_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_unify_gen____Compare____field_via_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

    succeeded = ml_backend__ml_unify_gen____Unify____may_have_extra_args_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    ml_backend__ml_unify_gen____Compare____may_have_extra_args_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

    succeeded = ml_backend__ml_unify_gen____Unify____ml_const_struct_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    ml_backend__ml_unify_gen____Compare____ml_const_struct_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

    succeeded = ml_backend__ml_unify_gen____Unify____mlds_rval_type_and_width_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    ml_backend__ml_unify_gen____Compare____mlds_rval_type_and_width_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

    succeeded = ml_backend__ml_unify_gen____Unify____take_addr_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    ml_backend__ml_unify_gen____Compare____take_addr_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
	MR_register_type_ctor_info(&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_assign_dir_0);
	MR_register_type_ctor_info(&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_cons_id_or_closure_0);
	MR_register_type_ctor_info(&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_field_gen_0);
	MR_register_type_ctor_info(&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_field_offset_0);
	MR_register_type_ctor_info(&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_field_via_0);
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
