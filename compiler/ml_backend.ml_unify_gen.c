/*
** Automatically generated from `ml_unify_gen.m'
** by the Mercury compiler,
** version rotd=2018-06-06
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

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__list__pti_list_1__plain_ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0;

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

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_functor_desc_do_all_partials_assign_right_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_functor_desc_do_all_partials_assign_right_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_value_ordered_do_all_partials_assign_right_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_name_ordered_do_all_partials_assign_right_0[2];

static const MR_Integer ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_do_all_partials_assign_right_0[2];

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

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen__maybe__ti_maybe_1ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0;

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_mlds_rval_type_and_width_0_0[4];

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
ml_backend__ml_unify_gen__IntroducedFrom__func__construct_static_ground_term__3234__1_1_f_0(
  MR_Word LambdaHeadVar__1_43);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__cons_id_arg_types_and_widths__3143__2_2_p_0(
  MR_Word MayHaveExtraArgs_10,
  MR_Word HeadVar__2_35);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__cons_id_arg_types_and_widths__3143__1_2_p_0(
  MR_Word MayHaveExtraArgs_10,
  MR_Word HeadVar__2_35);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_const_static_compound__2887__1_1_f_0(
  MR_Word LambdaHeadVar__1_38);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_109_108_95_103_101_110_95_99_111_110_115_116_95_115_116_97_116_105_99_95_99_111_109_112_111_117_110_100_95_95_50_56_56_55_95_95_49_95_95_91_49_93_95_48_1_f_0(void);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_const_struct_tag__2840__1_2_p_0(
  MR_Word AddedBy_36,
  MR_Word HeadVar__2_77);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_const_struct_tag__2824__1_2_p_0(
  MR_Word AddedBy_36,
  MR_Word HeadVar__2_81);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2562__6_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_188);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2632__1_2_p_0(
  MR_Word AddedBy_71,
  MR_Word HeadVar__2_82);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2617__1_2_p_0(
  MR_Word AddedBy_71,
  MR_Word HeadVar__2_86);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2562__5_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_175);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2562__4_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_164);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2562__3_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_153);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2562__2_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_142);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2562__1_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_116);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word_loop__1784__2_2_p_0(
  MR_Word HeadPackedArgVars_99,
  MR_Word HeadVar__2_128);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word_loop__1784__1_2_p_0(
  MR_Word HeadPackedArgVars_99,
  MR_Word HeadVar__2_128);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word__1708__2_2_p_0(
  MR_Integer CurOffsetInt_57,
  MR_Integer CellOffsetInt_58);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word__1708__1_2_p_0(
  MR_Integer CurOffsetInt_57,
  MR_Integer CellOffsetInt_58);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__1605__2_2_p_0(
  MR_Word TakeAddr_7,
  MR_Word HeadVar__2_24);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__1605__1_2_p_0(
  MR_Word TakeAddr_7,
  MR_Word HeadVar__2_24);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__decide_field_gen__1563__1_2_p_0(
  MR_Word TypeCtor_21,
  MR_Word VarTypeCtor_24);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_extra_arg_assigns__1303__1_2_p_0(
  MR_Word HighLevelData_28,
  MR_Word HeadVar__2_41);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_calc_field_offset__1283__1_1_f_0(
  MR_Word LambdaHeadVar__1_18);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_construct_args__1222__1_2_p_0(
  MR_Word Offset_94,
  MR_Word HeadVar__2_151);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_construct_args__1212__1_2_p_0(
  MR_Word ArgWidth_72,
  MR_Word HeadVar__2_145);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_construct_args__1201__2_2_p_0(
  MR_Integer CurOffset_77,
  MR_Integer CellOffsetInt_197);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_construct_args__1193__1_2_p_0(
  MR_Integer CurOffset_77,
  MR_Integer CellOffsetInt_171);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_construct_args__1201__1_2_p_0(
  MR_Integer CurOffset_77,
  MR_Integer CellOffsetInt_173);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_construct_args__1181__1_2_p_0(
  MR_Integer CurOffset_77,
  MR_Integer CellOffsetInt_78);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_construct_args__1187__1_2_p_0(
  MR_Integer CurOffset_77,
  MR_Integer CellOffsetInt_169);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_box_extra_const_rval_list_lld__1086__1_2_p_0(
  MR_Word Width_23,
  MR_Word HeadVar__2_30);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__772__1_2_p_0(
  MR_Integer PrimaryTag_44,
  MR_Integer LambdaHeadVar__1_81);

static void MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__753__1_3_p_0(
  MR_Word STATE_VARIABLE_Info_0_73,
  MR_Word LambdaHeadVar__1_78,
  MR_Integer * LambdaHeadVar__2_79);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_new_object_statically__715__1_1_f_0(
  MR_Word LambdaHeadVar__1_49);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_new_object_dynamically__654__1_1_f_0(
  MR_Word LambdaHeadVar__1_71);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_construct_compound__535__1_2_p_0(
  MR_Word AddedBy_32,
  MR_Word HeadVar__2_46);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_construct_compound__520__1_2_p_0(
  MR_Word AddedBy_32,
  MR_Word HeadVar__2_50);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object__569__1_2_p_0(
  MR_Word TakeAddr_24,
  MR_Word HeadVar__2_47);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object__557__1_2_p_0(
  MR_Word ExplicitSecTag_19,
  MR_Word HeadVar__2_40);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__213__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_75);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__246__1_2_p_0(
  MR_Word MaybeSizeProfInfo_39,
  MR_Word HeadVar__2_70);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__234__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_66);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__180__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_87);

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
ml_backend__ml_unify_gen____Compare____do_all_partials_assign_right_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____do_all_partials_assign_right_0_0(
  MR_Word HeadVar__2_1,
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
  MR_Word STATE_VARIABLE_ConstStructMap_0_68,
  MR_Word * STATE_VARIABLE_ConstStructMap_69,
  MR_Word STATE_VARIABLE_GlobalData_0_70,
  MR_Word * STATE_VARIABLE_GlobalData_71);

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
ml_backend__ml_unify_gen__ml_gen_unification_7_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_7_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_7_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_semi_deconstruct_9_p_0(
  MR_Word Var_10,
  MR_Word ConsId_11,
  MR_Word ArgVars_12,
  MR_Word ArgModes_13,
  MR_Word Context_14,
  MR_Word * Defns_15,
  MR_Word * Stmts_16,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27);

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
ml_backend__ml_unify_gen__ml_gen_det_deconstruct_9_p_0(
  MR_Word Var_10,
  MR_Word ConsId_11,
  MR_Word ArgVars_12,
  MR_Word Modes_13,
  MR_Word Context_14,
  MR_Word * Defns_15,
  MR_Word * Stmts_16,
  MR_Word STATE_VARIABLE_Info_0_60,
  MR_Word * STATE_VARIABLE_Info_61);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_no_tag_6_p_0(
  MR_Word Info_7,
  MR_Word Mode_8,
  MR_Word ArgVar_9,
  MR_Word Var_10,
  MR_Word Context_11,
  MR_Word * Stmts_12);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_direct_arg_7_p_0(
  MR_Word Info_8,
  MR_Integer Ptag_9,
  MR_Word Mode_10,
  MR_Word ArgVar_11,
  MR_Word Var_12,
  MR_Word Context_13,
  MR_Word * Stmts_14);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_12_p_0(
  MR_Word FieldGen_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word CurOffset_4,
  MR_Integer CurArgNum_5,
  MR_Word Context_6,
  MR_Word TakeAddr_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word * HeadVar__10_10,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_95_91_49_52_93_95_48_18_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_95_91_49_52_93_95_48_18_p_0(
  MR_Word FieldGen_19,
  MR_Word ArgVar_20,
  MR_Word CtorArgRepn_21,
  MR_Word Mode_22,
  MR_Word ArgVarRepns_23,
  MR_Word Modes_24,
  MR_Word * LeftOverArgVarRepns_25,
  MR_Word * LeftOverModes_26,
  MR_Word CurOffset_27,
  MR_Word * LeftOverOffset_28,
  MR_Integer CurArgNum_29,
  MR_Integer * LeftOverArgNum_30,
  MR_Word Context_31,
  MR_Word * Defns_33,
  MR_Word * Stmts_34,
  MR_Word STATE_VARIABLE_Info_0_70,
  MR_Word * STATE_VARIABLE_Info_71);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_49_49_93_95_48_17_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_49_49_93_95_48_17_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word CurOffset_6,
  MR_Word * LeftOverOffset_7,
  MR_Integer CurArgNum_8,
  MR_Integer * LeftOverArgNum_9,
  MR_Word HeadVar__10_10,
  MR_Word STATE_VARIABLE_AllPartialsRight_0_12,
  MR_Word * STATE_VARIABLE_AllPartialsRight_13,
  MR_Word * HeadVar__14_14,
  MR_Word * HeadVar__15_15,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_construct_11_p_0(
  MR_Word Var_12,
  MR_Word ConsId_13,
  MR_Word ArgVars_14,
  MR_Word ArgModes_15,
  MR_Word TakeAddr_16,
  MR_Word HowToConstruct_17,
  MR_Word Context_18,
  MR_Word * Defns_19,
  MR_Word * Stmts_20,
  MR_Word STATE_VARIABLE_Info_0_103,
  MR_Word * STATE_VARIABLE_Info_104);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_construct_direct_arg_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Integer Ptag_11,
  MR_Word ArgMode_12,
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
ml_backend__ml_unify_gen__ml_gen_construct_compound_14_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_construct_compound_14_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_construct_compound_14_p_0(
  MR_Word ConsId_15,
  MR_Integer Ptag_16,
  MR_Word MaybeStag_17,
  MR_Word UsesBaseClass_18,
  MR_Word Var_19,
  MR_Word ArgVars_20,
  MR_Word ArgModes_21,
  MR_Word TakeAddr_22,
  MR_Word HowToConstruct_23,
  MR_Word Context_24,
  MR_Word * Defns_25,
  MR_Word * Stmts_26,
  MR_Word STATE_VARIABLE_Info_0_40,
  MR_Word * STATE_VARIABLE_Info_41);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_15_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_15_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_15_p_0(
  MR_Word ConsIdOrClosure_16,
  MR_Word MaybeCtorName_17,
  MR_Integer Ptag_18,
  MR_Word ExplicitSecTag_19,
  MR_Word Var_20,
  MR_Word ExtraRvalsTypesWidths_21,
  MR_Word ArgVars_22,
  MR_Word ArgModes_23,
  MR_Word TakeAddr_24,
  MR_Word CellToReuse_25,
  MR_Word Context_26,
  MR_Word * Defns_27,
  MR_Word * Stmts_28,
  MR_Word STATE_VARIABLE_Info_0_73,
  MR_Word * STATE_VARIABLE_Info_74);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_cons_id_to_tag_3_p_0(
  MR_Word Info_4,
  MR_Word ConsId_5,
  MR_Word * ConsTag_6);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_12_p_1_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_12_p_1_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_12_p_1(
  MR_Word FieldGen_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word CurOffset_4,
  MR_Integer CurArgNum_5,
  MR_Word Context_6,
  MR_Word TakeAddr_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word * HeadVar__10_10,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_take_addr_of_arg_5_p_0(
  MR_Word Info_6,
  MR_Word ArgVar_7,
  MR_Word CtorArgRepn_8,
  MR_Word CurOffset_9,
  MR_Word * TakeAddrInfo_10);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_in_word_18_p_1_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_in_word_18_p_1(
  MR_Word FieldGen_19,
  MR_Word ArgVar_20,
  MR_Word CtorArgRepn_21,
  MR_Word Mode_22,
  MR_Word ArgVarRepns_23,
  MR_Word Modes_24,
  MR_Word * LeftOverArgVarRepns_25,
  MR_Word * LeftOverModes_26,
  MR_Word CurOffset_27,
  MR_Word * LeftOverOffset_28,
  MR_Integer CurArgNum_29,
  MR_Integer * LeftOverArgNum_30,
  MR_Word Context_31,
  MR_Word TakeAddr_32,
  MR_Word * Defns_33,
  MR_Word * Stmts_34,
  MR_Word STATE_VARIABLE_Info_0_70,
  MR_Word * STATE_VARIABLE_Info_71);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_in_word_loop_17_p_1_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_in_word_loop_17_p_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word CurOffset_6,
  MR_Word * LeftOverOffset_7,
  MR_Integer CurArgNum_8,
  MR_Integer * LeftOverArgNum_9,
  MR_Word HeadVar__10_10,
  MR_Word HeadVar__11_11,
  MR_Word STATE_VARIABLE_AllPartialsRight_0_12,
  MR_Word * STATE_VARIABLE_AllPartialsRight_13,
  MR_Word * HeadVar__14_14,
  MR_Word * HeadVar__15_15,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_next_field_offset_4_p_0(
  MR_Word CurArgRepn_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_arg_11_p_0(
  MR_Word FieldGen_12,
  MR_Word ArgVar_13,
  MR_Word CtorArgRepn_14,
  MR_Word Mode_15,
  MR_Word Offset_16,
  MR_Integer ArgNum_17,
  MR_Word Context_18,
  MR_Word * PackedArgVars_19,
  MR_Word * Stmts_20,
  MR_Word STATE_VARIABLE_Info_0_44,
  MR_Word * STATE_VARIABLE_Info_45);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_arg_unify_assign_left_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word HighLevelData_11,
  MR_Word FieldLval_12,
  MR_Word FieldType_13,
  MR_Word FieldPosWidth_14,
  MR_Word ArgLval_15,
  MR_Word ArgType_16,
  MR_Word Context_17,
  MR_Word * Stmts_18);

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
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_arg_unify_assign_right_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word FieldLval_12,
  MR_Word FieldType_13,
  MR_Word FieldPosWidth_14,
  MR_Word ArgVar_15,
  MR_Word ArgLval_16,
  MR_Word ArgType_17,
  MR_Word Context_18,
  MR_Word * PackedArgVars_19,
  MR_Word * Stmts_20);

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
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43);

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
  MR_Word STATE_VARIABLE_Info_0_64,
  MR_Word * STATE_VARIABLE_Info_65);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_expand_or_pack_into_words_3_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_pack_into_one_word_8_p_0(
  MR_Word RvalsTypesWidths_9,
  MR_Word * LeftOverRvalsTypesWidths_10,
  MR_Word RevOrRvals0_11,
  MR_Word * BoxedOrAllRval_12,
  MR_Word STATE_VARIABLE_RevPackedArgVars_0_20,
  MR_Word * STATE_VARIABLE_RevPackedArgVars_21,
  MR_Word STATE_VARIABLE_AllPartialsHavePackedArgVars_0_22,
  MR_Word * STATE_VARIABLE_AllPartialsHavePackedArgVars_23);

static void MR_CALL 
ml_backend__ml_unify_gen__or_packed_rvals_3_p_0(
  MR_Word HeadRval_4,
  MR_Word TailRvals_5,
  MR_Word * OrAllRval_6);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_pack_into_one_word_loop_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevOrRvals_0_3,
  MR_Word * STATE_VARIABLE_RevOrRvals_4,
  MR_Word STATE_VARIABLE_RevPackedArgVars_0_5,
  MR_Word * STATE_VARIABLE_RevPackedArgVars_6,
  MR_Word STATE_VARIABLE_AllPartialsHavePackedArgVars_0_7,
  MR_Word * STATE_VARIABLE_AllPartialsHavePackedArgVars_8);

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
ml_backend__ml_unify_gen__ml_gen_dynamic_construct_args_12_p_0_7(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_construct_args_12_p_0_6(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_construct_args_12_p_0_5(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_construct_args_12_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_construct_args_12_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_construct_args_12_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_construct_args_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_construct_args_12_p_0(
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
ml_backend__ml_unify_gen____Unify____do_all_partials_assign_right_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____do_all_partials_assign_right_0_0_10001(
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


static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_1[29][2];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_2[8][3];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_3[18][5];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_4[2][6];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_5[3][1];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_6[1][4];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_7[1][9];




static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_1[29][2] = {
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
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_1[2]))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_arg_type_and_width_1)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0))
  },
  /* row 9 */
  {
    ((MR_Box) (((MR_Box) ((MR_Integer) 0)))),
    ((MR_Box) (((MR_Box) ((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_5[0])))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 4))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 6))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 8))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 5))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 7))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 9))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 28 */
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
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[17])),
    ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_3[18][5] = {
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen__list__pti_list_1__plain_ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__list__pti_list_1__plain_ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_sectag_added_by_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_sectag_added_by_0))
  },
  /* row 14 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0))
  },
  /* row 15 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0))
  },
  /* row 16 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 17 */
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

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__list__pti_list_1__plain_ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0)
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

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_functor_desc_do_all_partials_assign_right_0_0 = {
  (MR_String) "not_all_partials_assign_right",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_functor_desc_do_all_partials_assign_right_0_1 = {
  (MR_String) "all_partials_assign_right",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_value_ordered_do_all_partials_assign_right_0[2] = {
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_functor_desc_do_all_partials_assign_right_0_0,
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_functor_desc_do_all_partials_assign_right_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_name_ordered_do_all_partials_assign_right_0[2] = {
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_functor_desc_do_all_partials_assign_right_0_1,
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_functor_desc_do_all_partials_assign_right_0_0
};

static const MR_Integer ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_do_all_partials_assign_right_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_do_all_partials_assign_right_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_unify_gen____Unify____do_all_partials_assign_right_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen____Compare____do_all_partials_assign_right_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen",
  (MR_String) "do_all_partials_assign_right",
  {     ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_name_ordered_do_all_partials_assign_right_0 },
  {     ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__enum_value_ordered_do_all_partials_assign_right_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_do_all_partials_assign_right_0
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

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen__maybe__ti_maybe_1ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0)
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_mlds_rval_type_and_width_0_0[4] = {
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_unify_gen__maybe__ti_maybe_1ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0)
};

static const MR_DuFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_mlds_rval_type_and_width_0_0 = {
  (MR_String) "rval_type_and_width",
  (MR_Integer) 4,
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
ml_backend__ml_unify_gen__IntroducedFrom__func__construct_static_ground_term__3234__1_1_f_0(
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
ml_backend__ml_unify_gen__IntroducedFrom__pred__cons_id_arg_types_and_widths__3143__2_2_p_0(
  MR_Word MayHaveExtraArgs_10,
  MR_Word HeadVar__2_35)
{
  {
    MR_bool succeeded = (MayHaveExtraArgs_10 == HeadVar__2_35);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__cons_id_arg_types_and_widths__3143__1_2_p_0(
  MR_Word MayHaveExtraArgs_10,
  MR_Word HeadVar__2_35)
{
  {
    MR_bool succeeded = (MayHaveExtraArgs_10 == HeadVar__2_35);

    return succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_const_static_compound__2887__1_1_f_0(
  MR_Word LambdaHeadVar__1_38)
{
  {
    MR_Word LambdaHeadVar__2_39;

    LambdaHeadVar__2_39 = ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_109_108_95_103_101_110_95_99_111_110_115_116_95_115_116_97_116_105_99_95_99_111_109_112_111_117_110_100_95_95_50_56_56_55_95_95_49_95_95_91_49_93_95_48_1_f_0();
    return LambdaHeadVar__2_39;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_109_108_95_103_101_110_95_99_111_110_115_116_95_115_116_97_116_105_99_95_99_111_109_112_111_117_110_100_95_95_50_56_56_55_95_95_49_95_95_91_49_93_95_48_1_f_0(void)
{
  {
    MR_Word LambdaHeadVar__2_39;

    LambdaHeadVar__2_39 = parse_tree__builtin_lib_types__void_type_0_f_0();
    return LambdaHeadVar__2_39;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_const_struct_tag__2840__1_2_p_0(
  MR_Word AddedBy_36,
  MR_Word HeadVar__2_77)
{
  {
    MR_bool succeeded = (AddedBy_36 == HeadVar__2_77);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_const_struct_tag__2824__1_2_p_0(
  MR_Word AddedBy_36,
  MR_Word HeadVar__2_81)
{
  {
    MR_bool succeeded = (AddedBy_36 == HeadVar__2_81);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2562__6_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_188)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[5]), ((MR_Box) (ArgVars_25)), ((MR_Box) (HeadVar__2_188)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2632__1_2_p_0(
  MR_Word AddedBy_71,
  MR_Word HeadVar__2_82)
{
  {
    MR_bool succeeded = (AddedBy_71 == HeadVar__2_82);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2617__1_2_p_0(
  MR_Word AddedBy_71,
  MR_Word HeadVar__2_86)
{
  {
    MR_bool succeeded = (AddedBy_71 == HeadVar__2_86);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2562__5_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_175)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[5]), ((MR_Box) (ArgVars_25)), ((MR_Box) (HeadVar__2_175)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2562__4_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_164)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[5]), ((MR_Box) (ArgVars_25)), ((MR_Box) (HeadVar__2_164)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2562__3_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_153)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[5]), ((MR_Box) (ArgVars_25)), ((MR_Box) (HeadVar__2_153)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2562__2_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_142)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[5]), ((MR_Box) (ArgVars_25)), ((MR_Box) (HeadVar__2_142)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2562__1_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_116)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[5]), ((MR_Box) (ArgVars_25)), ((MR_Box) (HeadVar__2_116)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word_loop__1784__2_2_p_0(
  MR_Word HeadPackedArgVars_99,
  MR_Word HeadVar__2_128)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[4]), ((MR_Box) (HeadPackedArgVars_99)), ((MR_Box) (HeadVar__2_128)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word_loop__1784__1_2_p_0(
  MR_Word HeadPackedArgVars_99,
  MR_Word HeadVar__2_128)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[4]), ((MR_Box) (HeadPackedArgVars_99)), ((MR_Box) (HeadVar__2_128)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word__1708__2_2_p_0(
  MR_Integer CurOffsetInt_57,
  MR_Integer CellOffsetInt_58)
{
  {
    MR_bool succeeded = (CurOffsetInt_57 == CellOffsetInt_58);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word__1708__1_2_p_0(
  MR_Integer CurOffsetInt_57,
  MR_Integer CellOffsetInt_58)
{
  {
    MR_bool succeeded = (CurOffsetInt_57 == CellOffsetInt_58);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__1605__2_2_p_0(
  MR_Word TakeAddr_7,
  MR_Word HeadVar__2_24)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[1]), ((MR_Box) (TakeAddr_7)), ((MR_Box) (HeadVar__2_24)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__1605__1_2_p_0(
  MR_Word TakeAddr_7,
  MR_Word HeadVar__2_24)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[1]), ((MR_Box) (TakeAddr_7)), ((MR_Box) (HeadVar__2_24)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__decide_field_gen__1563__1_2_p_0(
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
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_extra_arg_assigns__1303__1_2_p_0(
  MR_Word HighLevelData_28,
  MR_Word HeadVar__2_41)
{
  {
    MR_bool succeeded = (HighLevelData_28 == HeadVar__2_41);

    return succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_calc_field_offset__1283__1_1_f_0(
  MR_Word LambdaHeadVar__1_18)
{
  {
    MR_Word LambdaHeadVar__2_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_18, (MR_Integer) 2))));

    return LambdaHeadVar__2_19;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_construct_args__1222__1_2_p_0(
  MR_Word Offset_94,
  MR_Word HeadVar__2_151)
{
  {
    MR_bool succeeded;
    MR_Integer Var_205 = (MR_Integer) (Offset_94);
    MR_Integer Var_206 = (MR_Integer) (HeadVar__2_151);

    succeeded = (Var_205 == Var_206);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_construct_args__1212__1_2_p_0(
  MR_Word ArgWidth_72,
  MR_Word HeadVar__2_145)
{
  {
    MR_bool succeeded = (ArgWidth_72 == HeadVar__2_145);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_construct_args__1201__2_2_p_0(
  MR_Integer CurOffset_77,
  MR_Integer CellOffsetInt_197)
{
  {
    MR_bool succeeded = (CurOffset_77 == CellOffsetInt_197);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_construct_args__1193__1_2_p_0(
  MR_Integer CurOffset_77,
  MR_Integer CellOffsetInt_171)
{
  {
    MR_bool succeeded = (CurOffset_77 == CellOffsetInt_171);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_construct_args__1201__1_2_p_0(
  MR_Integer CurOffset_77,
  MR_Integer CellOffsetInt_173)
{
  {
    MR_bool succeeded = (CurOffset_77 == CellOffsetInt_173);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_construct_args__1181__1_2_p_0(
  MR_Integer CurOffset_77,
  MR_Integer CellOffsetInt_78)
{
  {
    MR_bool succeeded = (CurOffset_77 == CellOffsetInt_78);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_construct_args__1187__1_2_p_0(
  MR_Integer CurOffset_77,
  MR_Integer CellOffsetInt_169)
{
  {
    MR_bool succeeded = (CurOffset_77 == CellOffsetInt_169);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_box_extra_const_rval_list_lld__1086__1_2_p_0(
  MR_Word Width_23,
  MR_Word HeadVar__2_30)
{
  {
    MR_bool succeeded = (Width_23 == HeadVar__2_30);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__772__1_2_p_0(
  MR_Integer PrimaryTag_44,
  MR_Integer LambdaHeadVar__1_81)
{
  {
    MR_bool succeeded = (LambdaHeadVar__1_81 == PrimaryTag_44);

    succeeded = !(succeeded);
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__753__1_3_p_0(
  MR_Word STATE_VARIABLE_Info_0_73,
  MR_Word LambdaHeadVar__1_78,
  MR_Integer * LambdaHeadVar__2_79)
{
  {
    MR_Word ReuseConsTag_37;
    MR_Word _ReuseOffSet_38;
    MR_Integer _ReuseArgNum_39;

    ml_backend__ml_unify_gen__ml_cons_id_to_tag_3_p_0(STATE_VARIABLE_Info_0_73, LambdaHeadVar__1_78, &ReuseConsTag_37);
    ml_backend__ml_unify_gen__ml_tag_initial_offset_and_argnum_4_p_0(ReuseConsTag_37, LambdaHeadVar__2_79, &_ReuseOffSet_38, &_ReuseArgNum_39);
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_new_object_statically__715__1_1_f_0(
  MR_Word LambdaHeadVar__1_49)
{
  {
    MR_Word LambdaHeadVar__2_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_49, (MR_Integer) 0))));

    return LambdaHeadVar__2_50;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_new_object_dynamically__654__1_1_f_0(
  MR_Word LambdaHeadVar__1_71)
{
  {
    MR_Word LambdaHeadVar__2_72;
    MR_Word Rv_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_71, (MR_Integer) 0))));
    MR_Word T_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_71, (MR_Integer) 1))));

    {
      LambdaHeadVar__2_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_72, 0) = ((MR_Box) (Rv_76));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_72, 1) = ((MR_Box) (T_77));
    }
    return LambdaHeadVar__2_72;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_construct_compound__535__1_2_p_0(
  MR_Word AddedBy_32,
  MR_Word HeadVar__2_46)
{
  {
    MR_bool succeeded = (AddedBy_32 == HeadVar__2_46);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_construct_compound__520__1_2_p_0(
  MR_Word AddedBy_32,
  MR_Word HeadVar__2_50)
{
  {
    MR_bool succeeded = (AddedBy_32 == HeadVar__2_50);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object__569__1_2_p_0(
  MR_Word TakeAddr_24,
  MR_Word HeadVar__2_47)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[1]), ((MR_Box) (TakeAddr_24)), ((MR_Box) (HeadVar__2_47)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object__557__1_2_p_0(
  MR_Word ExplicitSecTag_19,
  MR_Word HeadVar__2_40)
{
  {
    MR_bool succeeded = (ExplicitSecTag_19 == HeadVar__2_40);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__213__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_75)
{
  {
    MR_bool succeeded = (CodeModel_9 == HeadVar__2_75);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__246__1_2_p_0(
  MR_Word MaybeSizeProfInfo_39,
  MR_Word HeadVar__2_70)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[0]), ((MR_Box) (MaybeSizeProfInfo_39)), ((MR_Box) (HeadVar__2_70)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__234__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_66)
{
  {
    MR_bool succeeded = (CodeModel_9 == HeadVar__2_66);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__180__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_87)
{
  {
    MR_bool succeeded = (CodeModel_9 == HeadVar__2_87);

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

      ml_backend__mlds____Compare____mlds_rval_0_0(&Var_12, ArgX1_4, ArgY1_5);
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;

        ml_backend__mlds____Compare____mlds_type_0_0(&Var_13, ArgX2_6, ArgY2_7);
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;

          parse_tree__prog_data____Compare____arg_pos_width_0_0(&Var_14, ArgX3_8, ArgY3_9);
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
          {
            mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
          }
        }
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
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_16_16;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

      succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = parse_tree__prog_data____Unify____arg_pos_width_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            TypeInfo_16_16 = (MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[8]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          }
        }
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
      MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
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
      MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

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

      mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[7]), &Var_12, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[7]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
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
ml_backend__ml_unify_gen____Compare____do_all_partials_assign_right_0_0(
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
ml_backend__ml_unify_gen____Unify____do_all_partials_assign_right_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

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

    mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    if (succeeded)
    {
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
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)));

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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_const_struct_tag__2840__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_const_struct_tag__2824__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
  MR_Word STATE_VARIABLE_ConstStructMap_0_68,
  MR_Word * STATE_VARIABLE_ConstStructMap_69,
  MR_Word STATE_VARIABLE_GlobalData_0_70,
  MR_Word * STATE_VARIABLE_GlobalData_71)
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
              ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0(Info_12, ConstNum_13, Type_14, MLDS_Type_15, ConsId_16, ConsTag_17, (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))), Args_18, STATE_VARIABLE_ConstStructMap_0_68, STATE_VARIABLE_ConstStructMap_69, STATE_VARIABLE_GlobalData_0_70, STATE_VARIABLE_GlobalData_71);
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
              MR_Word Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 1))));
              MR_Word Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 0))));

              if ((Var_114 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word ArgRvalTypeWidth_23;
                MR_Word ArgRval_24;
                MR_Word Rval_28;
                MR_Word GroundTerm_29;

                ml_backend__ml_unify_gen__ml_gen_const_struct_arg_7_p_0(Info_12, STATE_VARIABLE_ConstStructMap_0_68, Var_115, (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_1[9])), &ArgRvalTypeWidth_23, STATE_VARIABLE_GlobalData_0_70, STATE_VARIABLE_GlobalData_71);
                ArgRval_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgRvalTypeWidth_23, (MR_Integer) 0))));
                Rval_28 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(MLDS_Type_15, ConsTag_17, ArgRval_24);
                {
                  GroundTerm_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), GroundTerm_29, 0) = ((MR_Box) (Rval_28));
                  MR_hl_field(MR_mktag(0), GroundTerm_29, 1) = ((MR_Box) (Type_14));
                  MR_hl_field(MR_mktag(0), GroundTerm_29, 2) = ((MR_Box) (MLDS_Type_15));
                }
                mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstNum_13, ((MR_Box) (GroundTerm_29)), STATE_VARIABLE_ConstStructMap_0_68, STATE_VARIABLE_ConstStructMap_69);
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
              MR_Integer Ptag_112 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1))));

              ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0(Info_12, ConstNum_13, Type_14, MLDS_Type_15, ConsId_16, ConsTag_17, Ptag_112, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))), Args_18, STATE_VARIABLE_ConstStructMap_0_68, STATE_VARIABLE_ConstStructMap_69, STATE_VARIABLE_GlobalData_0_70, STATE_VARIABLE_GlobalData_71);
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
              MR_Word Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 1))));
              MR_Word Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 0))));

              if ((Var_114 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word ArgRvalTypeWidth_23;
                MR_Word ArgRval_24;
                MR_Word Rval_28;
                MR_Word GroundTerm_29;

                ml_backend__ml_unify_gen__ml_gen_const_struct_arg_7_p_0(Info_12, STATE_VARIABLE_ConstStructMap_0_68, Var_115, (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_1[9])), &ArgRvalTypeWidth_23, STATE_VARIABLE_GlobalData_0_70, STATE_VARIABLE_GlobalData_71);
                ArgRval_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgRvalTypeWidth_23, (MR_Integer) 0))));
                Rval_28 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(MLDS_Type_15, ConsTag_17, ArgRval_24);
                {
                  GroundTerm_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), GroundTerm_29, 0) = ((MR_Box) (Rval_28));
                  MR_hl_field(MR_mktag(0), GroundTerm_29, 1) = ((MR_Box) (Type_14));
                  MR_hl_field(MR_mktag(0), GroundTerm_29, 2) = ((MR_Box) (MLDS_Type_15));
                }
                mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstNum_13, ((MR_Box) (GroundTerm_29)), STATE_VARIABLE_ConstStructMap_0_68, STATE_VARIABLE_ConstStructMap_69);
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
              MR_Integer Ptag_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1))));
              MR_Word ExtraRvals_34;
              MR_Integer Stag_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 2))));
              MR_Word AddedBy_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 3))));
              MR_Word Target_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word UsesConstructors_38;
              MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 1)));

              UsesConstructors_38 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(Target_37);
              switch (UsesConstructors_38) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word StagRval0_39;
                    MR_Word HighLevelData_40;
                    MR_Word StagRval_41;
                    MR_Word Var_78;
                    MR_Word Var_82;
                    MR_Unsigned packed_args_1;

                    {
                      Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[13]));
                      MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_const_struct_tag_11_p_0_1));
                      MR_hl_field(MR_mktag(0), Var_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_78, 3) = ((MR_Box) (AddedBy_36));
                      MR_hl_field(MR_mktag(0), Var_78, 4) = ((MR_Box) ((MR_Integer) 0));
                    }
                    mercury__require__expect_3_p_0(Var_78, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_tag\'/11", (MR_String) "AddedBy != sectag_added_by_unify");
                    {
                      Var_82 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_82, 0) = ((MR_Box) (Stag_35));
                    }
                    {
                      StagRval0_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), StagRval0_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), StagRval0_39, 1) = ((MR_Box) (Var_82));
                    }
                    packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 1)));
                    HighLevelData_40 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                    switch (HighLevelData_40) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          {
                            StagRval_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), StagRval_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), StagRval_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
                            MR_hl_field(MR_mktag(3), StagRval_41, 2) = ((MR_Box) (StagRval0_39));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        StagRval_41 = StagRval0_39;
                        break;
                    }
                    {
                      ExtraRvals_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ExtraRvals_34, 0) = ((MR_Box) (StagRval_41));
                      MR_hl_field(MR_mktag(1), ExtraRvals_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_74;

                    {
                      Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[13]));
                      MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_const_struct_tag_11_p_0_2));
                      MR_hl_field(MR_mktag(0), Var_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_74, 3) = ((MR_Box) (AddedBy_36));
                      MR_hl_field(MR_mktag(0), Var_74, 4) = ((MR_Box) ((MR_Integer) 1));
                    }
                    mercury__require__expect_3_p_0(Var_74, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_tag\'/11", (MR_String) "AddedBy != sectag_added_by_constructor");
                    ExtraRvals_34 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  }
                  break;
              }
              ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0(Info_12, ConstNum_13, Type_14, MLDS_Type_15, ConsId_16, ConsTag_17, Ptag_33, ExtraRvals_34, Args_18, STATE_VARIABLE_ConstStructMap_0_68, STATE_VARIABLE_ConstStructMap_69, STATE_VARIABLE_GlobalData_0_70, STATE_VARIABLE_GlobalData_71);
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

    conv0_LambdaHeadVar__2_39 = ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_const_static_compound__2887__1_1_f_0(((MR_Word) (wrapper_arg_1)));
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
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 1)));
    MR_Unsigned packed_args_1;

    ml_backend__ml_unify_gen__cons_id_arg_types_and_widths_7_p_1((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), ModuleInfo_26, (MR_Word) (&ml_backend__ml_unify_gen_scalar_common_2[7]), (MR_Integer) 0, VarType_16, ConsId_18, Args_22, &ArgsTypesWidths_29);
    packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 1)));
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
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));

    if (((MR_tag((MR_Word) ConstArg_10)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Integer StructNum_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ConstArg_10, (MR_Integer) 0))));
      MR_Word GroundTerm_16;
      MR_Box conv0_GroundTerm_16;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_9, StructNum_15, &conv0_GroundTerm_16);
      GroundTerm_16 = ((MR_Word) (conv0_GroundTerm_16));
      Rval0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm_16, (MR_Integer) 0))));
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
                MR_Word RvalConst_91;

                RvalConst_91 = ml_backend__ml_unify_gen__int_tag_to_mlds_rval_const_3_f_0(Type_21, MLDS_Type_19, (MR_Word) (&ml_backend__ml_unify_gen_scalar_common_5[0]));
                {
                  Rval0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval0_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Rval0_17, 1) = ((MR_Box) (RvalConst_91));
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String String_41 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConsTag_22, (MR_Integer) 0))));
            MR_Word Var_88;

            {
              Var_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
              MR_hl_field(MR_mktag(3), Var_88, 1) = ((MR_Box) (String_41));
            }
            {
              Rval0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Rval0_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), Rval0_17, 1) = ((MR_Box) (Var_88));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Float Float_40 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_22, (MR_Integer) 0)));
            MR_Word Var_89;

            {
              Var_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
              MR_hl_field(MR_mktag(3), Var_89, 1) = MR_box_float(Float_40);
            }
            {
              Rval0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Rval0_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), Rval0_17, 1) = ((MR_Box) (Var_89));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word IntTag_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                MR_Word RvalConst_39;

                RvalConst_39 = ml_backend__ml_unify_gen__int_tag_to_mlds_rval_const_3_f_0(Type_21, MLDS_Type_19, IntTag_38);
                {
                  Rval0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval0_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Rval0_17, 1) = ((MR_Box) (RvalConst_39));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ForeignLang_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                MR_String ForeignTag_45 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                MR_Word Var_82;

                {
                  Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                  MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (ForeignLang_44));
                  MR_hl_field(MR_mktag(3), Var_82, 2) = ((MR_Box) (ForeignTag_45));
                  MR_hl_field(MR_mktag(3), Var_82, 3) = ((MR_Box) (MLDS_Type_19));
                }
                {
                  Rval0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval0_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Rval0_17, 1) = ((MR_Box) (Var_82));
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
                MR_Word ModuleName0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                MR_String TypeName_47 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                MR_Integer TypeArity_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
                MR_Word ModuleName_49;
                MR_Word MLDS_Module_50;
                MR_Word RttiTypeCtor_51;
                MR_Word RttiId_52;
                MR_Word Const_53;
                MR_Word Var_80;

                ModuleName_49 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_46);
                MLDS_Module_50 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_49);
                {
                  RttiTypeCtor_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), RttiTypeCtor_51, 0) = ((MR_Box) (ModuleName_49));
                  MR_hl_field(MR_mktag(0), RttiTypeCtor_51, 1) = ((MR_Box) (TypeName_47));
                  MR_hl_field(MR_mktag(0), RttiTypeCtor_51, 2) = ((MR_Box) (TypeArity_48));
                }
                {
                  RttiId_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), RttiId_52, 0) = ((MR_Box) (RttiTypeCtor_51));
                  MR_hl_field(MR_mktag(0), RttiId_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
                }
                {
                  Const_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Const_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                  MR_hl_field(MR_mktag(3), Const_53, 1) = ((MR_Box) (MLDS_Module_50));
                  MR_hl_field(MR_mktag(3), Const_53, 2) = ((MR_Box) (RttiId_52));
                }
                {
                  Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_80, 1) = ((MR_Box) (Const_53));
                }
                {
                  Rval0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval0_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), Rval0_17, 1) = ((MR_Box) (MLDS_Type_19));
                  MR_hl_field(MR_mktag(3), Rval0_17, 2) = ((MR_Box) (Var_80));
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ClassId_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                MR_String Instance_55 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
                MR_Word TCName_56;
                MR_Word Var_77;
                MR_Word Var_78;
                MR_Word ModuleName_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                MR_Word MLDS_Module_93;
                MR_Word RttiId_94;
                MR_Word Const_95;

                MLDS_Module_93 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_92);
                TCName_56 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_54);
                {
                  Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (ModuleName_92));
                  MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Instance_55));
                }
                {
                  RttiId_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), RttiId_94, 0) = ((MR_Box) (TCName_56));
                  MR_hl_field(MR_mktag(1), RttiId_94, 1) = ((MR_Box) (Var_77));
                }
                {
                  Const_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Const_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                  MR_hl_field(MR_mktag(3), Const_95, 1) = ((MR_Box) (MLDS_Module_93));
                  MR_hl_field(MR_mktag(3), Const_95, 2) = ((MR_Box) (RttiId_94));
                }
                {
                  Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_78, 1) = ((MR_Box) (Const_95));
                }
                {
                  Rval0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval0_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), Rval0_17, 1) = ((MR_Box) (MLDS_Type_19));
                  MR_hl_field(MR_mktag(3), Rval0_17, 2) = ((MR_Box) (Var_78));
                }
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Integer Ptag_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                MR_Integer Stag_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                MR_Word Var_83;
                MR_Word Var_84;
                MR_Word Var_86;
                MR_Word Var_87;

                {
                  Var_87 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_87, 0) = ((MR_Box) (Stag_43));
                }
                {
                  Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_86, 1) = ((MR_Box) (Var_87));
                }
                {
                  Var_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                  MR_hl_field(MR_mktag(3), Var_84, 2) = ((MR_Box) (Var_86));
                }
                {
                  Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (Ptag_42));
                  MR_hl_field(MR_mktag(3), Var_83, 2) = ((MR_Box) (Var_84));
                }
                {
                  Rval0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval0_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), Rval0_17, 1) = ((MR_Box) (MLDS_Type_19));
                  MR_hl_field(MR_mktag(3), Rval0_17, 2) = ((MR_Box) (Var_83));
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
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *RvalTypeWidth_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_24));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MLDS_Type_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (PosWidth_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
    ;
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
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_GlobalData_0_6;
      MR_Word next_value_of_STATE_VARIABLE_GroundTermMap_0_8;

      succeeded = ((MR_tag((MR_Word) GoalExpr_47)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Unify_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_47, (MR_Integer) 3))));
        succeeded = ((MR_tag((MR_Word) Unify_52)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_52, (MR_Integer) 0))));
          ConsId_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_52, (MR_Integer) 1))));
          ArgVars_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_52, (MR_Integer) 2))));
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
      ;
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2562__6_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2632__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2617__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2562__5_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2562__4_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2562__3_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2562__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2562__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
                MR_hl_field(MR_mktag(0), Var_113, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[16]));
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

                mercury__map__det_remove_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (Var_195)), &conv0_ArgGroundTerm_57, STATE_VARIABLE_GroundTermMap_0_77, &STATE_VARIABLE_GroundTermMap_98_98);
                ArgGroundTerm_57 = ((MR_Word) (conv0_ArgGroundTerm_57));
                ArgRval_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_57, (MR_Integer) 0))));
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
            MR_hl_field(MR_mktag(0), Var_185, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[16]));
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
            MR_hl_field(MR_mktag(0), Var_139, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[16]));
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
                MR_hl_field(MR_mktag(0), Var_161, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[16]));
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
                MR_hl_field(MR_mktag(0), Var_150, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[16]));
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

                mercury__map__det_remove_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (Var_195)), &conv0_ArgGroundTerm_57, STATE_VARIABLE_GroundTermMap_0_77, &STATE_VARIABLE_GroundTermMap_98_98);
                ArgGroundTerm_57 = ((MR_Word) (conv0_ArgGroundTerm_57));
                ArgRval_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_57, (MR_Integer) 0))));
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
                      MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[13]));
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
                      MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[13]));
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
                MR_hl_field(MR_mktag(0), Var_172, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[16]));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__cons_id_arg_types_and_widths__3143__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    if (succeeded)
    {
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
          Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 2))));
          succeeded = ((((MR_tag((MR_Word) Var_36)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_36, (MR_Integer) 0))) == (MR_Integer) 13)));
          if (succeeded)
          {
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
    MR_Box conv0_ArgGroundTerm_46;

    mercury__map__det_remove_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (ArgVar_43)), &conv0_ArgGroundTerm_46, STATE_VARIABLE_GroundTermMap_0_7, &STATE_VARIABLE_GroundTermMap_30_30);
    ArgGroundTerm_46 = ((MR_Word) (conv0_ArgGroundTerm_46));
    ArgRval0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_46, (MR_Integer) 0))));
    MLDS_ArgType_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_46, (MR_Integer) 2))));
    ArgWidth_50 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_45);
    ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_1, Context_2, MLDS_ArgType_49, ArgWidth_50, ArgRval0_47, &ArgRval_51, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_29_29);
    {
      RvalTypeWidth_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RvalTypeWidth_21, 0) = ((MR_Box) (ArgRval_51));
      MR_hl_field(MR_mktag(0), RvalTypeWidth_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      MR_hl_field(MR_mktag(0), RvalTypeWidth_21, 2) = ((MR_Box) (ArgPosWidth_45));
      MR_hl_field(MR_mktag(0), RvalTypeWidth_21, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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

    mercury__map__det_remove_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (ArgVar_15)), &conv0_ArgGroundTerm_18, STATE_VARIABLE_GroundTermMap_0_27, STATE_VARIABLE_GroundTermMap_28);
    ArgGroundTerm_18 = ((MR_Word) (conv0_ArgGroundTerm_18));
    ArgRval0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_18, (MR_Integer) 0))));
    ArgType_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_18, (MR_Integer) 1))));
    ArgWidth_22 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_17);
    succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ModuleInfo_9, ConsArgType_16, ArgWidth_22);
    if (succeeded)
    {
      MR_Word TypeVarSet0_41;
      MR_Word MLDS_ArgType_57;
      MR_Word TypeVar_42;
      MR_Word _TypeVarSet_43;

      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet0_41);
      mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVar_42, TypeVarSet0_41, &_TypeVarSet_43);
      MLDS_ArgType_57 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_9, ArgType_20);
      ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_9, Context_10, MLDS_ArgType_57, (MR_Integer) 2, ArgRval0_19, &ArgRval_24, STATE_VARIABLE_GlobalData_0_25, STATE_VARIABLE_GlobalData_26);
    }
    else
      switch (MR_tag((MR_Word) ConsArgType_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MLDS_ArgType_77;

            MLDS_ArgType_77 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_9, ArgType_20);
            ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_9, Context_10, MLDS_ArgType_77, (MR_Integer) 2, ArgRval0_19, &ArgRval_24, STATE_VARIABLE_GlobalData_0_25, STATE_VARIABLE_GlobalData_26);
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
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *RvalTypeWidth_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ArgRval_24));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ArgPosWidth_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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

    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_14, Var_6, &VarLval_10);
    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_14, Var_6, &Type_11);
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
ml_backend__ml_unify_gen__ml_gen_unification_7_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__213__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_7_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__246__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_7_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__234__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_7_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__180__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_7_p_0(
  MR_Word Unification_8,
  MR_Word CodeModel_9,
  MR_Word Context_10,
  MR_Word * Defns_11,
  MR_Word * Stmts_12,
  MR_Word STATE_VARIABLE_Info_0_51,
  MR_Word * STATE_VARIABLE_Info_52)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Unification_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_8, (MR_Integer) 0))));
          MR_Word ConsId_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_8, (MR_Integer) 1))));
          MR_Word Args_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_8, (MR_Integer) 2))));
          MR_Word ArgModes_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_8, (MR_Integer) 3))));
          MR_Word HowToConstruct_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_8, (MR_Integer) 4))));
          MR_Word SubInfo_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_8, (MR_Integer) 6))));
          MR_Word TakeAddr_37;
          MR_Word Var_63;

          {
            Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[14]));
            MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_unification_7_p_0_2));
            MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (CodeModel_9));
            MR_hl_field(MR_mktag(0), Var_63, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_63, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unification\'/7", (MR_String) "construct not det");
          if ((SubInfo_36 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            TakeAddr_37 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          else
          {
            MR_Word MaybeTakeAddr_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_36, (MR_Integer) 0))));
            MR_Word MaybeSizeProfInfo_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_36, (MR_Integer) 1))));
            MR_Word Var_67;

            if ((MaybeTakeAddr_38 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              TakeAddr_37 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            else
              TakeAddr_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTakeAddr_38, (MR_Integer) 0))));
            {
              Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[15]));
              MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_unification_7_p_0_3));
              MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (MaybeSizeProfInfo_39));
              MR_hl_field(MR_mktag(0), Var_67, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            mercury__require__expect_3_p_0(Var_67, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unification\'/7", (MR_String) "term size profiling not yet supported");
          }
          ml_backend__ml_unify_gen__ml_gen_construct_11_p_0(Var_30, ConsId_31, Args_32, ArgModes_33, TakeAddr_37, HowToConstruct_34, Context_10, Defns_11, Stmts_12, STATE_VARIABLE_Info_0_51, STATE_VARIABLE_Info_52);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CanFail_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_8, (MR_Integer) 4))));
          MR_Word CanCGC_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_8, (MR_Integer) 5))));
          MR_Word ExpectedCodeModel_42;
          MR_Word UnifyStmts_43;
          MR_Word Stmts0_47;
          MR_Word STATE_VARIABLE_Info_56_56;
          MR_Word Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_8, (MR_Integer) 0))));
          MR_Word ConsId_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_8, (MR_Integer) 1))));
          MR_Word Args_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_8, (MR_Integer) 2))));
          MR_Word ArgModes_96 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_8, (MR_Integer) 3))));

          switch (CanFail_40) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ExpectedCodeModel_42 = (MR_Integer) 1;
                ml_backend__ml_unify_gen__ml_gen_semi_deconstruct_9_p_0(Var_93, ConsId_94, Args_95, ArgModes_96, Context_10, Defns_11, &UnifyStmts_43, STATE_VARIABLE_Info_0_51, &STATE_VARIABLE_Info_56_56);
              }
              break;
            case (MR_Integer) 1:
              {
                ExpectedCodeModel_42 = (MR_Integer) 0;
                ml_backend__ml_unify_gen__ml_gen_det_deconstruct_9_p_0(Var_93, ConsId_94, Args_95, ArgModes_96, Context_10, Defns_11, &UnifyStmts_43, STATE_VARIABLE_Info_0_51, &STATE_VARIABLE_Info_56_56);
              }
              break;
          }
          switch (CanCGC_41) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word VarLval_44;
                MR_Word Delete_45;
                MR_Word CGCStmt_46;
                MR_Word Var_57;
                MR_Word Var_59;
                MR_Word Var_60;

                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_56_56, Var_93, &VarLval_44);
                {
                  Var_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_59, 0) = ((MR_Box) (VarLval_44));
                }
                {
                  Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  MR_hl_field(MR_mktag(3), Var_57, 2) = ((MR_Box) (Var_59));
                }
                {
                  Delete_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Delete_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Delete_45, 1) = ((MR_Box) (Var_57));
                }
                {
                  CGCStmt_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), CGCStmt_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                  MR_hl_field(MR_mktag(3), CGCStmt_46, 1) = ((MR_Box) (Delete_45));
                  MR_hl_field(MR_mktag(3), CGCStmt_46, 2) = ((MR_Box) (Context_10));
                }
                {
                  Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (CGCStmt_46));
                  MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                Stmts0_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), UnifyStmts_43, Var_60);
              }
              break;
            case (MR_Integer) 1:
              Stmts0_47 = UnifyStmts_43;
              break;
          }
          ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_p_0(CodeModel_9, ExpectedCodeModel_42, Context_10, Stmts0_47, Stmts_12, STATE_VARIABLE_Info_56_56, STATE_VARIABLE_Info_52);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TargetVar_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_8, (MR_Integer) 0))));
          MR_Word SourceVar_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_8, (MR_Integer) 1))));
          MR_Word Type_16;
          MR_Word ModuleInfo_17;
          MR_Word IsDummyType_18;
          MR_Word Var_84;
          MR_Word GroundTerm_22;

          {
            Var_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[14]));
            MR_hl_field(MR_mktag(0), Var_84, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_unification_7_p_0_1));
            MR_hl_field(MR_mktag(0), Var_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_84, 3) = ((MR_Box) (CodeModel_9));
            MR_hl_field(MR_mktag(0), Var_84, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_84, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unification\'/7", (MR_String) "assign not det");
          ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_51, TargetVar_14, &Type_16);
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_51, &ModuleInfo_17);
          IsDummyType_18 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_17, Type_16);
          switch (IsDummyType_18) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *Stmts_12 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              break;
            case (MR_Integer) 1:
              {
                MR_Word TargetLval_19;
                MR_Word SourceLval_20;
                MR_Word Stmt_21;
                MR_Word Var_88;

                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_51, TargetVar_14, &TargetLval_19);
                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_51, SourceVar_15, &SourceLval_20);
                {
                  Var_88 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_88, 0) = ((MR_Box) (SourceLval_20));
                }
                Stmt_21 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(TargetLval_19, Var_88, Context_10);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *Stmts_12 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_21));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
              break;
          }
          succeeded = ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(STATE_VARIABLE_Info_0_51, SourceVar_15, &GroundTerm_22);
          if (succeeded)
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(TargetVar_14, GroundTerm_22, STATE_VARIABLE_Info_0_51, STATE_VARIABLE_Info_52);
          else
            *STATE_VARIABLE_Info_52 = STATE_VARIABLE_Info_0_51;
          *Defns_11 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Unification_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word VarA_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_8, (MR_Integer) 1))));
              MR_Word VarB_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_8, (MR_Integer) 2))));
              MR_Word EqualityOp_25;
              MR_Word VarALval_27;
              MR_Word VarBLval_28;
              MR_Word Test_29;
              MR_Word Var_72;
              MR_Word Var_80;
              MR_Word Var_81;
              MR_Word Type_91;
              MR_Word Stmt_92;
              MR_Word Var_76;

              {
                Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[14]));
                MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_unification_7_p_0_4));
                MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (CodeModel_9));
                MR_hl_field(MR_mktag(0), Var_72, 4) = ((MR_Box) ((MR_Integer) 1));
              }
              mercury__require__expect_3_p_0(Var_72, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unification\'/7", (MR_String) "simple_test not semidet");
              ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_51, VarA_23, &Type_91);
              succeeded = ((MR_tag((MR_Word) Type_91)) == (MR_mktag((MR_Integer) 2)));
              if (succeeded)
              {
                Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_91, (MR_Integer) 0))));
                succeeded = (Var_76 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              }
              if (succeeded)
                EqualityOp_25 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)));
              else
              {
                MR_Word Var_77;

                succeeded = ((MR_tag((MR_Word) Type_91)) == (MR_mktag((MR_Integer) 2)));
                if (succeeded)
                {
                  Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_91, (MR_Integer) 0))));
                  succeeded = (Var_77 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                if (succeeded)
                  EqualityOp_25 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)));
                else
                {
                  MR_Word IntType_26;
                  MR_Word Var_78;

                  succeeded = ((MR_tag((MR_Word) Type_91)) == (MR_mktag((MR_Integer) 2)));
                  if (succeeded)
                  {
                    Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_91, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) Var_78)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                      IntType_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_78, (MR_Integer) 0))));
                  }
                  if (succeeded)
                    {
                      EqualityOp_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), EqualityOp_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                      MR_hl_field(MR_mktag(3), EqualityOp_25, 1) = ((MR_Box) (IntType_26));
                    }
                  else
                    EqualityOp_25 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[18]));
                }
              }
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_51, VarA_23, &VarALval_27);
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_51, VarB_24, &VarBLval_28);
              {
                Var_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_80, 0) = ((MR_Box) (VarALval_27));
              }
              {
                Var_81 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_81, 0) = ((MR_Box) (VarBLval_28));
              }
              {
                Test_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Test_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), Test_29, 1) = ((MR_Box) (EqualityOp_25));
                MR_hl_field(MR_mktag(3), Test_29, 2) = ((MR_Box) (Var_80));
                MR_hl_field(MR_mktag(3), Test_29, 3) = ((MR_Box) (Var_81));
              }
              ml_backend__ml_code_util__ml_gen_set_success_5_p_0(Test_29, Context_10, &Stmt_92, STATE_VARIABLE_Info_0_51, STATE_VARIABLE_Info_52);
              *Defns_11 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_12 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_92));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unification\'/7", (MR_String) "complicated unify");
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
ml_backend__ml_unify_gen__ml_gen_semi_deconstruct_9_p_0(
  MR_Word Var_10,
  MR_Word ConsId_11,
  MR_Word ArgVars_12,
  MR_Word ArgModes_13,
  MR_Word Context_14,
  MR_Word * Defns_15,
  MR_Word * Stmts_16,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27)
{
  {
    MR_Word TagTestExpr_18;
    MR_Word SetTagTestResult_19;
    MR_Word SucceededExpr_20;
    MR_Word GetArgsStmts_21;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Info_30_30;
    MR_Word VarLval_44;
    MR_Word Type_45;
    MR_Word ConsTag_46;
    MR_Word Var_47;
    MR_Word ModuleInfo_51;

    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_26, Var_10, &VarLval_44);
    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_26, Var_10, &Type_45);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_26, &ModuleInfo_51);
    ConsTag_46 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_51, ConsId_11);
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_47, 0) = ((MR_Box) (VarLval_44));
    }
    TagTestExpr_18 = ml_backend__ml_unify_gen__ml_gen_tag_test_rval_4_f_0(STATE_VARIABLE_Info_0_26, ConsTag_46, Type_45, Var_47);
    ml_backend__ml_code_util__ml_gen_set_success_5_p_0(TagTestExpr_18, Context_14, &SetTagTestResult_19, STATE_VARIABLE_Info_0_26, &STATE_VARIABLE_Info_29_29);
    ml_backend__ml_code_util__ml_gen_test_success_3_p_0(&SucceededExpr_20, STATE_VARIABLE_Info_29_29, &STATE_VARIABLE_Info_30_30);
    ml_backend__ml_unify_gen__ml_gen_det_deconstruct_9_p_0(Var_10, ConsId_11, ArgVars_12, ArgModes_13, Context_14, Defns_15, &GetArgsStmts_21, STATE_VARIABLE_Info_30_30, STATE_VARIABLE_Info_27);
    if ((GetArgsStmts_21 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *Stmts_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SetTagTestResult_19));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    else
    {
      MR_Word GetArgs_24;
      MR_Word IfStmt_25;
      MR_Word Var_35;

      GetArgs_24 = ml_backend__ml_code_util__ml_gen_block_4_f_0((MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))), (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))), GetArgsStmts_21, Context_14);
      {
        IfStmt_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), IfStmt_25, 0) = ((MR_Box) (SucceededExpr_20));
        MR_hl_field(MR_mktag(2), IfStmt_25, 1) = ((MR_Box) (GetArgs_24));
        MR_hl_field(MR_mktag(2), IfStmt_25, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(2), IfStmt_25, 3) = ((MR_Box) (Context_14));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (IfStmt_25));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *Stmts_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SetTagTestResult_19));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_35));
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
            TagTestRval_10 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[28]));
            break;
          case (MR_Integer) 1:
            TagTestRval_10 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[28]));
            break;
          case (MR_Integer) 2:
            TagTestRval_10 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[28]));
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
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[18])));
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
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[18])));
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
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[18])));
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

              ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_p_0(Info_6, Type_8, Rval_9, PrimaryTag_41, &SecondaryTagFieldRval_44);
              Var_60 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[18]));
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
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[18])));
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
            MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[18])));
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
            MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[23])));
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
            MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[22])));
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
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[27])));
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
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[19])));
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
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[24])));
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
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[20])));
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
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[25])));
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
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[21])));
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
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[26])));
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
            MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (MLDS_VarType_13));
            MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_5[2]));
            MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
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
            MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (MLDS_VarType_13));
            MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (FieldId_15));
            MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
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
ml_backend__ml_unify_gen__ml_gen_det_deconstruct_9_p_0(
  MR_Word Var_10,
  MR_Word ConsId_11,
  MR_Word ArgVars_12,
  MR_Word Modes_13,
  MR_Word Context_14,
  MR_Word * Defns_15,
  MR_Word * Stmts_16,
  MR_Word STATE_VARIABLE_Info_0_60,
  MR_Word * STATE_VARIABLE_Info_61)
{
  {
    MR_bool succeeded;
    MR_Word ConsTag_18;
    MR_Word ModuleInfo_81;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_60, &ModuleInfo_81);
    ConsTag_18 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_81, ConsId_11);
    switch (MR_tag((MR_Word) ConsTag_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_18)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word VarType_52;
              MR_Word VarLval_53;
              MR_Word FieldGen_54;
              MR_Word InitOffSet_56;
              MR_Integer ArgNum_57;
              MR_Word ArgVarRepns_58;
              MR_Integer Var_55;
              MR_Word Var_59;

              ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_60, Var_10, &VarType_52);
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_60, Var_10, &VarLval_53);
              ml_backend__ml_unify_gen__decide_field_gen_6_p_0(STATE_VARIABLE_Info_0_60, VarLval_53, VarType_52, ConsId_11, ConsTag_18, &FieldGen_54);
              ml_backend__ml_unify_gen__ml_tag_initial_offset_and_argnum_4_p_0(ConsTag_18, &Var_55, &InitOffSet_56, &ArgNum_57);
              ml_backend__ml_unify_gen__ml_field_names_and_types_6_p_0(STATE_VARIABLE_Info_0_60, VarType_52, ConsId_11, InitOffSet_56, ArgVars_12, &ArgVarRepns_58);
              ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_12_p_0(FieldGen_54, ArgVarRepns_58, Modes_13, InitOffSet_56, ArgNum_57, Context_14, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))), &Var_59, Defns_15, Stmts_16, STATE_VARIABLE_Info_0_60, STATE_VARIABLE_Info_61);
            }
            break;
          case (MR_Integer) 1:
            {
              *Defns_15 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              *Stmts_16 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              *STATE_VARIABLE_Info_61 = STATE_VARIABLE_Info_0_60;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgVar_45;
              MR_Word Mode_46;
              MR_Word Var_68;
              MR_Word Var_69;

              succeeded = ((MR_tag((MR_Word) ArgVars_12)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                ArgVar_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_12, (MR_Integer) 0))));
                Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_12, (MR_Integer) 1))));
                succeeded = (Var_68 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Modes_13)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Mode_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modes_13, (MR_Integer) 0))));
                    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modes_13, (MR_Integer) 1))));
                    succeeded = (Var_69 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              }
              if (succeeded)
              {
                ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_no_tag_6_p_0(STATE_VARIABLE_Info_0_60, Mode_46, ArgVar_45, Var_10, Context_14, Stmts_16);
                *Defns_15 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_det_deconstruct\'/9", (MR_String) "no_tag: arity != 1");
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
          *Defns_15 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          *Stmts_16 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          *STATE_VARIABLE_Info_61 = STATE_VARIABLE_Info_0_60;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_18, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 14:
            {
              *Defns_15 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              *Stmts_16 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
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
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_det_deconstruct\'/9", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 11:
          case (MR_Integer) 13:
            {
              MR_Word VarType_52;
              MR_Word VarLval_53;
              MR_Word FieldGen_54;
              MR_Word InitOffSet_56;
              MR_Integer ArgNum_57;
              MR_Word ArgVarRepns_58;
              MR_Integer Var_55;
              MR_Word Var_59;

              ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_60, Var_10, &VarType_52);
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_60, Var_10, &VarLval_53);
              ml_backend__ml_unify_gen__decide_field_gen_6_p_0(STATE_VARIABLE_Info_0_60, VarLval_53, VarType_52, ConsId_11, ConsTag_18, &FieldGen_54);
              ml_backend__ml_unify_gen__ml_tag_initial_offset_and_argnum_4_p_0(ConsTag_18, &Var_55, &InitOffSet_56, &ArgNum_57);
              ml_backend__ml_unify_gen__ml_field_names_and_types_6_p_0(STATE_VARIABLE_Info_0_60, VarType_52, ConsId_11, InitOffSet_56, ArgVars_12, &ArgVarRepns_58);
              ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_12_p_0(FieldGen_54, ArgVarRepns_58, Modes_13, InitOffSet_56, ArgNum_57, Context_14, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))), &Var_59, Defns_15, Stmts_16, STATE_VARIABLE_Info_0_60, STATE_VARIABLE_Info_61);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer Ptag_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_18, (MR_Integer) 1))));
              MR_Word ArgVar_74;
              MR_Word Mode_75;
              MR_Word Var_64;
              MR_Word Var_65;

              succeeded = ((MR_tag((MR_Word) ArgVars_12)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                ArgVar_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_12, (MR_Integer) 0))));
                Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_12, (MR_Integer) 1))));
                succeeded = (Var_64 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Modes_13)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Mode_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modes_13, (MR_Integer) 0))));
                    Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modes_13, (MR_Integer) 1))));
                    succeeded = (Var_65 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              }
              if (succeeded)
              {
                ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_direct_arg_7_p_0(STATE_VARIABLE_Info_0_60, Ptag_47, Mode_75, ArgVar_74, Var_10, Context_14, Stmts_16);
                *Defns_15 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_det_deconstruct\'/9", (MR_String) "direct_arg_tag: arity != 1");
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
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_no_tag_6_p_0(
  MR_Word Info_7,
  MR_Word Mode_8,
  MR_Word ArgVar_9,
  MR_Word Var_10,
  MR_Word Context_11,
  MR_Word * Stmts_12)
{
  {
    MR_bool succeeded;
    MR_Word ArgType_13;
    MR_Word VarType_14;
    MR_Word ArgLval_15;
    MR_Word VarLval_16;
    MR_Word ModuleInfo_17;
    MR_Word HighLevelData_18;
    MR_Word FieldPosWidth_19;
    MR_Word LeftFromToInsts_31;
    MR_Word RightFromToInsts_32;
    MR_Word LeftTopMode_33;
    MR_Word RightTopMode_34;
    MR_Word Var_35;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_7, ArgVar_9, &ArgType_13);
    ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_7, Var_10, &VarType_14);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_7, ArgVar_9, &ArgLval_15);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_7, Var_10, &VarLval_16);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_7, &ModuleInfo_17);
    ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(Info_7, &HighLevelData_18);
    FieldPosWidth_19 = (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_1[9]));
    LeftFromToInsts_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_8, (MR_Integer) 0))));
    RightFromToInsts_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_8, (MR_Integer) 1))));
    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_17, LeftFromToInsts_31, ArgType_13, &LeftTopMode_33);
    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_17, RightFromToInsts_32, ArgType_13, &RightTopMode_34);
    Var_35 = check_hlds__type_util__is_either_type_a_dummy_3_f_0(ModuleInfo_17, ArgType_13, VarType_14);
    succeeded = (Var_35 == (MR_Integer) 0);
    if (succeeded)
      *Stmts_12 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    else
    {
      MR_Word Dir_44;

      switch (LeftTopMode_33) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (RightTopMode_34) {
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
              Dir_44 = (MR_Integer) 1;
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
          switch (RightTopMode_34) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Dir_44 = (MR_Integer) 0;
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
          switch (RightTopMode_34) {
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
              Dir_44 = (MR_Integer) 2;
              break;
          }
          break;
      }
      switch (Dir_44) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          *Stmts_12 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          break;
        case (MR_Integer) 0:
          ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_arg_unify_assign_left_9_p_0(ModuleInfo_17, HighLevelData_18, VarLval_16, VarType_14, FieldPosWidth_19, ArgLval_15, ArgType_13, Context_11, Stmts_12);
          break;
        case (MR_Integer) 1:
          {
            MR_Word _PackedArgVars_21;

            ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_arg_unify_assign_right_10_p_0(ModuleInfo_17, VarLval_16, VarType_14, FieldPosWidth_19, ArgVar_9, ArgLval_15, ArgType_13, Context_11, &_PackedArgVars_21, Stmts_12);
          }
          break;
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_direct_arg_7_p_0(
  MR_Word Info_8,
  MR_Integer Ptag_9,
  MR_Word Mode_10,
  MR_Word ArgVar_11,
  MR_Word Var_12,
  MR_Word Context_13,
  MR_Word * Stmts_14)
{
  {
    MR_bool succeeded;
    MR_Word ArgType_15;
    MR_Word VarType_16;
    MR_Word ArgLval_17;
    MR_Word VarLval_18;
    MR_Word ModuleInfo_19;
    MR_Word LeftFromToInsts_47;
    MR_Word RightFromToInsts_48;
    MR_Word LeftTopMode_49;
    MR_Word RightTopMode_50;
    MR_Word Var_51;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_8, ArgVar_11, &ArgType_15);
    ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_8, Var_12, &VarType_16);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_8, ArgVar_11, &ArgLval_17);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_8, Var_12, &VarLval_18);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_8, &ModuleInfo_19);
    LeftFromToInsts_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_10, (MR_Integer) 0))));
    RightFromToInsts_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_10, (MR_Integer) 1))));
    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_19, LeftFromToInsts_47, ArgType_15, &LeftTopMode_49);
    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_19, RightFromToInsts_48, ArgType_15, &RightTopMode_50);
    Var_51 = check_hlds__type_util__is_either_type_a_dummy_3_f_0(ModuleInfo_19, ArgType_15, VarType_16);
    succeeded = (Var_51 == (MR_Integer) 0);
    if (succeeded)
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_direct_arg\'/7", (MR_String) "dummy unify");
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
            MR_Word ArgRval_25;
            MR_Word Var_29;
            MR_Word Var_30;
            MR_Word MLDS_Type_39;
            MR_Word CastRval_40;
            MR_Word Stmt_41;

            {
              Var_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_29, 0) = ((MR_Box) (ArgLval_17));
            }
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_19, ArgType_15, VarType_16, (MR_Integer) 0, Var_29, &ArgRval_25);
            MLDS_Type_39 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_19, VarType_16);
            {
              Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (Ptag_9));
              MR_hl_field(MR_mktag(3), Var_30, 2) = ((MR_Box) (ArgRval_25));
            }
            {
              CastRval_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), CastRval_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), CastRval_40, 1) = ((MR_Box) (MLDS_Type_39));
              MR_hl_field(MR_mktag(3), CastRval_40, 2) = ((MR_Box) (Var_30));
            }
            Stmt_41 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_18, CastRval_40, Context_13);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_14 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_41));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word VarRval_21;
            MR_Word MLDS_Type_22;
            MR_Word CastRval_23;
            MR_Word Stmt_24;
            MR_Word Var_33;
            MR_Word Var_34;
            MR_Word Var_36;
            MR_Word Var_37;

            {
              Var_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_33, 0) = ((MR_Box) (VarLval_18));
            }
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_19, VarType_16, ArgType_15, (MR_Integer) 0, Var_33, &VarRval_21);
            MLDS_Type_22 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_19, ArgType_15);
            {
              Var_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_37, 0) = ((MR_Box) (Ptag_9));
            }
            {
              Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (Var_37));
            }
            {
              Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
              MR_hl_field(MR_mktag(3), Var_34, 2) = ((MR_Box) (VarRval_21));
              MR_hl_field(MR_mktag(3), Var_34, 3) = ((MR_Box) (Var_36));
            }
            {
              CastRval_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), CastRval_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), CastRval_23, 1) = ((MR_Box) (MLDS_Type_22));
              MR_hl_field(MR_mktag(3), CastRval_23, 2) = ((MR_Box) (Var_34));
            }
            Stmt_24 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_17, CastRval_23, Context_13);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_14 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_24));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          break;
        case (MR_Integer) 2:
          *Stmts_14 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          break;
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_12_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__1605__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_12_p_0(
  MR_Word FieldGen_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word CurOffset_4,
  MR_Integer CurArgNum_5,
  MR_Word Context_6,
  MR_Word TakeAddr_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word * HeadVar__10_10,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__3_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word Var_21;

        *HeadVar__8_8 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        *HeadVar__9_9 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        *HeadVar__10_10 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        {
          Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[12]));
          MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_12_p_0_1));
          MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (TakeAddr_7));
          MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        mercury__require__expect_3_p_0(Var_21, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_args\'/12", (MR_String) "TakeAddr != []");
        *STATE_VARIABLE_Info_12 = STATE_VARIABLE_Info_0_11;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_args\'/12", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_args\'/12", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word Mode_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word Modes_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgVar_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_116, (MR_Integer) 0))));
        MR_Word CtorArgRepn_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_116, (MR_Integer) 1))));
        MR_Word NextOffset_70;
        MR_Integer NextArgNum_71;
        MR_Word FieldPosWidth_72;
        MR_Word FieldVia_84;

        ml_backend__ml_unify_gen__ml_next_field_offset_4_p_0(CtorArgRepn_69, Var_115, CurOffset_4, &NextOffset_70);
        NextArgNum_71 = (MR_Integer) ((MR_Unsigned) CurArgNum_5 + (MR_Unsigned) (MR_Integer) 1);
        FieldPosWidth_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_69, (MR_Integer) 2))));
        succeeded = ((((MR_tag((MR_Word) FieldPosWidth_72)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldPosWidth_72, (MR_Integer) 0))) == (MR_Integer) 0)));
        if (succeeded)
        {
          FieldVia_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_1, (MR_Integer) 3))));
          succeeded = (FieldVia_84 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        if (succeeded)
        {
          MR_Word LeftOverArgVarRepns_85;
          MR_Word LeftOverModes_86;
          MR_Word LeftOverOffset_87;
          MR_Integer LeftOverArgNum_88;
          MR_Word HeadDefns_89;
          MR_Word HeadStmts_90;
          MR_Word TailDefns_91;
          MR_Word TailStmts_92;
          MR_Word STATE_VARIABLE_Info_101_101;

          ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_95_91_49_52_93_95_48_18_p_0(FieldGen_1, ArgVar_68, CtorArgRepn_69, Mode_58, Var_115, Modes_59, &LeftOverArgVarRepns_85, &LeftOverModes_86, CurOffset_4, &LeftOverOffset_87, CurArgNum_5, &LeftOverArgNum_88, Context_6, &HeadDefns_89, &HeadStmts_90, STATE_VARIABLE_Info_0_11, &STATE_VARIABLE_Info_101_101);
          ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_12_p_0(FieldGen_1, LeftOverArgVarRepns_85, LeftOverModes_86, LeftOverOffset_87, LeftOverArgNum_88, Context_6, TakeAddr_7, HeadVar__8_8, &TailDefns_91, &TailStmts_92, STATE_VARIABLE_Info_101_101, STATE_VARIABLE_Info_12);
          *HeadVar__9_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), HeadDefns_89, TailDefns_91);
          *HeadVar__10_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_90, TailStmts_92);
        }
        else
        {
          MR_Word STATE_VARIABLE_Info_103_103;
          MR_Word HeadStmts_105;
          MR_Word TailStmts_106;
          MR_Word _PackedArgVars_93;

          ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_arg_11_p_0(FieldGen_1, ArgVar_68, CtorArgRepn_69, Mode_58, CurOffset_4, CurArgNum_5, Context_6, &_PackedArgVars_93, &HeadStmts_105, STATE_VARIABLE_Info_0_11, &STATE_VARIABLE_Info_103_103);
          ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_12_p_0(FieldGen_1, Var_115, Modes_59, NextOffset_70, NextArgNum_71, Context_6, TakeAddr_7, HeadVar__8_8, HeadVar__9_9, &TailStmts_106, STATE_VARIABLE_Info_103_103, STATE_VARIABLE_Info_12);
          *HeadVar__10_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_105, TailStmts_106);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_95_91_49_52_93_95_48_18_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word__1708__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_95_91_49_52_93_95_48_18_p_0(
  MR_Word FieldGen_19,
  MR_Word ArgVar_20,
  MR_Word CtorArgRepn_21,
  MR_Word Mode_22,
  MR_Word ArgVarRepns_23,
  MR_Word Modes_24,
  MR_Word * LeftOverArgVarRepns_25,
  MR_Word * LeftOverModes_26,
  MR_Word CurOffset_27,
  MR_Word * LeftOverOffset_28,
  MR_Integer CurArgNum_29,
  MR_Integer * LeftOverArgNum_30,
  MR_Word Context_31,
  MR_Word * Defns_33,
  MR_Word * Stmts_34,
  MR_Word STATE_VARIABLE_Info_0_70,
  MR_Word * STATE_VARIABLE_Info_71)
{
  {
    MR_bool succeeded;
    MR_Word HeadPackedArgVars_36;
    MR_Word HeadStmts_37;
    MR_Word AllPartialsRight0_38;
    MR_Word NextOffset_41;
    MR_Integer NextArgNum_42;
    MR_Word AllPartialsRight_43;
    MR_Word TailPackedArgVars_44;
    MR_Word TailStmts_45;
    MR_Word STATE_VARIABLE_Info_72_72;
    MR_Word STATE_VARIABLE_Info_74_74;

    ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_arg_11_p_0(FieldGen_19, ArgVar_20, CtorArgRepn_21, Mode_22, CurOffset_27, CurArgNum_29, Context_31, &HeadPackedArgVars_36, &HeadStmts_37, STATE_VARIABLE_Info_0_70, &STATE_VARIABLE_Info_72_72);
    if ((HeadPackedArgVars_36 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      AllPartialsRight0_38 = (MR_Integer) 0;
    else
      AllPartialsRight0_38 = (MR_Integer) 1;
    ml_backend__ml_unify_gen__ml_next_field_offset_4_p_0(CtorArgRepn_21, ArgVarRepns_23, CurOffset_27, &NextOffset_41);
    NextArgNum_42 = (MR_Integer) ((MR_Unsigned) CurArgNum_29 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_49_49_93_95_48_17_p_0(FieldGen_19, ArgVarRepns_23, Modes_24, LeftOverArgVarRepns_25, LeftOverModes_26, NextOffset_41, LeftOverOffset_28, NextArgNum_42, LeftOverArgNum_30, Context_31, AllPartialsRight0_38, &AllPartialsRight_43, &TailPackedArgVars_44, &TailStmts_45, STATE_VARIABLE_Info_72_72, &STATE_VARIABLE_Info_74_74);
    switch (AllPartialsRight_43) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word PackedArgVars_46;
          MR_Word WordCompVar_47;
          MR_Word WordVar_48;
          MR_Word UnsignedType_49;
          MR_Word WordVarDefn_50;
          MR_Word FieldPosWidth_51;
          MR_Integer CellOffsetInt_58;
          MR_Word FieldId_59;
          MR_Word MaybePtag_60;
          MR_Word AddrRval_61;
          MR_Word AddrType_62;
          MR_Word FieldLval_64;
          MR_Word CastFieldRval_65;
          MR_Word WordVarLval_66;
          MR_Word WordAssignStmt_67;
          MR_Word PackedArgsMap0_68;
          MR_Word PackedArgsMap_69;
          MR_Word STATE_VARIABLE_Info_75_75;
          MR_Word Var_84;
          MR_Word Var_85;
          MR_Word Var_87;
          MR_Word Var_88;
          MR_Word Var_89;
          MR_Word CellOffset_53;

          PackedArgVars_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0), HeadPackedArgVars_36, TailPackedArgVars_44);
          ml_backend__ml_gen_info__ml_gen_info_new_packed_args_var_3_p_0(&WordCompVar_47, STATE_VARIABLE_Info_74_74, &STATE_VARIABLE_Info_75_75);
          {
            WordVar_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), WordVar_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
            MR_hl_field(MR_mktag(3), WordVar_48, 1) = ((MR_Box) (WordCompVar_47));
          }
          UnsignedType_49 = ml_backend__ml_util__mlds_int_type_uint_0_f_0();
          {
            WordVarDefn_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), WordVarDefn_50, 0) = ((MR_Box) (WordVar_48));
            MR_hl_field(MR_mktag(0), WordVarDefn_50, 1) = ((MR_Box) (Context_31));
            MR_hl_field(MR_mktag(0), WordVarDefn_50, 2) = ((MR_Box) (UnsignedType_49));
            MR_hl_field(MR_mktag(0), WordVarDefn_50, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), WordVarDefn_50, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Defns_33 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (WordVarDefn_50));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          FieldPosWidth_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_21, (MR_Integer) 2))));
          succeeded = ((((MR_tag((MR_Word) FieldPosWidth_51)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldPosWidth_51, (MR_Integer) 0))) == (MR_Integer) 0)));
          if (succeeded)
          {
            CellOffset_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldPosWidth_51, (MR_Integer) 2))));
            {
              MR_Integer CurOffsetInt_57 = (MR_Integer) (CurOffset_27);
              MR_Word Var_79;

              CellOffsetInt_58 = (MR_Integer) (CellOffset_53);
              {
                Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[1]));
                MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_95_91_49_52_93_95_48_18_p_0_1));
                MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_79, 3) = ((MR_Box) (CurOffsetInt_57));
                MR_hl_field(MR_mktag(0), Var_79, 4) = ((MR_Box) (CellOffsetInt_58));
              }
              mercury__require__expect_3_p_0(Var_79, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_args_in_word\'/18", (MR_String) "CurOffset != CellOffset");
            }
          }
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_args_in_word\'/18", (MR_String) "no apw_partial_first");
              return;
            }
          }
          {
            Var_85 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_85, 0) = ((MR_Box) (CellOffsetInt_58));
          }
          {
            Var_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_84, 1) = ((MR_Box) (Var_85));
          }
          {
            FieldId_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FieldId_59, 0) = ((MR_Box) (Var_84));
          }
          MaybePtag_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_19, (MR_Integer) 0))));
          AddrRval_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_19, (MR_Integer) 1))));
          AddrType_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_19, (MR_Integer) 2))));
          {
            FieldLval_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FieldLval_64, 0) = ((MR_Box) (MaybePtag_60));
            MR_hl_field(MR_mktag(0), FieldLval_64, 1) = ((MR_Box) (AddrRval_61));
            MR_hl_field(MR_mktag(0), FieldLval_64, 2) = ((MR_Box) (AddrType_62));
            MR_hl_field(MR_mktag(0), FieldLval_64, 3) = ((MR_Box) (FieldId_59));
            MR_hl_field(MR_mktag(0), FieldLval_64, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
          }
          {
            Var_87 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_87, 0) = ((MR_Box) (FieldLval_64));
          }
          {
            CastFieldRval_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CastFieldRval_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), CastFieldRval_65, 1) = ((MR_Box) (UnsignedType_49));
            MR_hl_field(MR_mktag(3), CastFieldRval_65, 2) = ((MR_Box) (Var_87));
          }
          {
            WordVarLval_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), WordVarLval_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), WordVarLval_66, 1) = ((MR_Box) (WordVar_48));
            MR_hl_field(MR_mktag(3), WordVarLval_66, 2) = ((MR_Box) (UnsignedType_49));
          }
          WordAssignStmt_67 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(WordVarLval_66, CastFieldRval_65, Context_31);
          {
            Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (WordAssignStmt_67));
            MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (HeadStmts_37));
          }
          *Stmts_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_88, TailStmts_45);
          ml_backend__ml_gen_info__ml_gen_info_get_packed_args_map_2_p_0(STATE_VARIABLE_Info_75_75, &PackedArgsMap0_68);
          {
            Var_89 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_89, 0) = ((MR_Box) (WordVarLval_66));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[4]), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), ((MR_Box) (PackedArgVars_46)), ((MR_Box) (Var_89)), PackedArgsMap0_68, &PackedArgsMap_69);
          ml_backend__ml_gen_info__ml_gen_info_set_packed_args_map_3_p_0(PackedArgsMap_69, STATE_VARIABLE_Info_75_75, STATE_VARIABLE_Info_71);
        }
        break;
      case (MR_Integer) 0:
        {
          *Defns_33 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          *Stmts_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_37, TailStmts_45);
          *STATE_VARIABLE_Info_71 = STATE_VARIABLE_Info_74_74;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_49_49_93_95_48_17_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word_loop__1784__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_49_49_93_95_48_17_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word CurOffset_6,
  MR_Word * LeftOverOffset_7,
  MR_Integer CurArgNum_8,
  MR_Integer * LeftOverArgNum_9,
  MR_Word HeadVar__10_10,
  MR_Word STATE_VARIABLE_AllPartialsRight_0_12,
  MR_Word * STATE_VARIABLE_AllPartialsRight_13,
  MR_Word * HeadVar__14_14,
  MR_Word * HeadVar__15_15,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__3_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *HeadVar__4_4 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        *HeadVar__5_5 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        *HeadVar__14_14 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        *HeadVar__15_15 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        *LeftOverOffset_7 = CurOffset_6;
        *LeftOverArgNum_9 = CurArgNum_8;
        *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_0_16;
        *STATE_VARIABLE_AllPartialsRight_13 = STATE_VARIABLE_AllPartialsRight_0_12;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_args_in_word_loop\'/17", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_154 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_155 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_args_in_word_loop\'/17", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word Mode_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word Modes_77 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgVar_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_155, (MR_Integer) 0))));
        MR_Word CtorArgRepn_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_155, (MR_Integer) 1))));
        MR_Word FieldPosWidth_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_91, (MR_Integer) 2))));

        switch (MR_tag((MR_Word) FieldPosWidth_92)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *HeadVar__4_4 = HeadVar__2_2;
              *HeadVar__5_5 = HeadVar__3_3;
              *LeftOverOffset_7 = CurOffset_6;
              *LeftOverArgNum_9 = CurArgNum_8;
              *HeadVar__14_14 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              *HeadVar__15_15 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              *STATE_VARIABLE_AllPartialsRight_13 = STATE_VARIABLE_AllPartialsRight_0_12;
              *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_0_16;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              *HeadVar__4_4 = HeadVar__2_2;
              *HeadVar__5_5 = HeadVar__3_3;
              *LeftOverOffset_7 = CurOffset_6;
              *LeftOverArgNum_9 = CurArgNum_8;
              *HeadVar__14_14 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              *HeadVar__15_15 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              *STATE_VARIABLE_AllPartialsRight_13 = STATE_VARIABLE_AllPartialsRight_0_12;
              *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_0_16;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldPosWidth_92, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *HeadVar__4_4 = HeadVar__2_2;
                  *HeadVar__5_5 = HeadVar__3_3;
                  *LeftOverOffset_7 = CurOffset_6;
                  *LeftOverArgNum_9 = CurArgNum_8;
                  *HeadVar__14_14 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  *HeadVar__15_15 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  *STATE_VARIABLE_AllPartialsRight_13 = STATE_VARIABLE_AllPartialsRight_0_12;
                  *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_0_16;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word HeadPackedArgVars_143;
                  MR_Word HeadStmts_144;
                  MR_Word NextOffset_145;
                  MR_Integer NextArgNum_146;
                  MR_Word TailPackedArgVars_147;
                  MR_Word TailStmts_148;
                  MR_Word STATE_VARIABLE_Info_129_149;
                  MR_Word STATE_VARIABLE_AllPartialsRight_130_150;

                  ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_arg_11_p_0(HeadVar__1_1, ArgVar_90, CtorArgRepn_91, Mode_76, CurOffset_6, CurArgNum_8, HeadVar__10_10, &HeadPackedArgVars_143, &HeadStmts_144, STATE_VARIABLE_Info_0_16, &STATE_VARIABLE_Info_129_149);
                  if ((HeadPackedArgVars_143 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    STATE_VARIABLE_AllPartialsRight_130_150 = (MR_Integer) 0;
                  else
                    STATE_VARIABLE_AllPartialsRight_130_150 = STATE_VARIABLE_AllPartialsRight_0_12;
                  ml_backend__ml_unify_gen__ml_next_field_offset_4_p_0(CtorArgRepn_91, Var_154, CurOffset_6, &NextOffset_145);
                  NextArgNum_146 = (MR_Integer) ((MR_Unsigned) CurArgNum_8 + (MR_Unsigned) (MR_Integer) 1);
                  ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_49_49_93_95_48_17_p_0(HeadVar__1_1, Var_154, Modes_77, HeadVar__4_4, HeadVar__5_5, NextOffset_145, LeftOverOffset_7, NextArgNum_146, LeftOverArgNum_9, HeadVar__10_10, STATE_VARIABLE_AllPartialsRight_130_150, STATE_VARIABLE_AllPartialsRight_13, &TailPackedArgVars_147, &TailStmts_148, STATE_VARIABLE_Info_129_149, STATE_VARIABLE_Info_17);
                  *HeadVar__14_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0), HeadPackedArgVars_143, TailPackedArgVars_147);
                  *HeadVar__15_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_144, TailStmts_148);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word HeadPackedArgVars_99;
                  MR_Word HeadStmts_100;
                  MR_Word NextOffset_106;
                  MR_Integer NextArgNum_107;
                  MR_Word TailPackedArgVars_108;
                  MR_Word TailStmts_109;
                  MR_Word Var_125;
                  MR_Word STATE_VARIABLE_Info_129_129;

                  ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_arg_11_p_0(HeadVar__1_1, ArgVar_90, CtorArgRepn_91, Mode_76, CurOffset_6, CurArgNum_8, HeadVar__10_10, &HeadPackedArgVars_99, &HeadStmts_100, STATE_VARIABLE_Info_0_16, &STATE_VARIABLE_Info_129_129);
                  {
                    Var_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_125, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[11]));
                    MR_hl_field(MR_mktag(0), Var_125, 1) = ((MR_Box) (ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_49_49_93_95_48_17_p_0_1));
                    MR_hl_field(MR_mktag(0), Var_125, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_125, 3) = ((MR_Box) (HeadPackedArgVars_99));
                    MR_hl_field(MR_mktag(0), Var_125, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  mercury__require__expect_3_p_0(Var_125, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_args_in_word_loop\'/17", (MR_String) "HeadPackedArgVars != [] for apw_none_shifted");
                  ml_backend__ml_unify_gen__ml_next_field_offset_4_p_0(CtorArgRepn_91, Var_154, CurOffset_6, &NextOffset_106);
                  NextArgNum_107 = (MR_Integer) ((MR_Unsigned) CurArgNum_8 + (MR_Unsigned) (MR_Integer) 1);
                  ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_49_49_93_95_48_17_p_0(HeadVar__1_1, Var_154, Modes_77, HeadVar__4_4, HeadVar__5_5, NextOffset_106, LeftOverOffset_7, NextArgNum_107, LeftOverArgNum_9, HeadVar__10_10, STATE_VARIABLE_AllPartialsRight_0_12, STATE_VARIABLE_AllPartialsRight_13, &TailPackedArgVars_108, &TailStmts_109, STATE_VARIABLE_Info_129_129, STATE_VARIABLE_Info_17);
                  *HeadVar__14_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0), HeadPackedArgVars_99, TailPackedArgVars_108);
                  *HeadVar__15_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_100, TailStmts_109);
                }
                break;
            }
            break;
        }
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_construct_11_p_0(
  MR_Word Var_12,
  MR_Word ConsId_13,
  MR_Word ArgVars_14,
  MR_Word ArgModes_15,
  MR_Word TakeAddr_16,
  MR_Word HowToConstruct_17,
  MR_Word Context_18,
  MR_Word * Defns_19,
  MR_Word * Stmts_20,
  MR_Word STATE_VARIABLE_Info_0_103,
  MR_Word * STATE_VARIABLE_Info_104)
{
  {
    MR_bool succeeded;
    MR_Word ConsTag_22;

    ml_backend__ml_unify_gen__ml_cons_id_to_tag_3_p_0(STATE_VARIABLE_Info_0_103, ConsId_13, &ConsTag_22);
    switch (MR_tag((MR_Word) ConsTag_22)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_22)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word UsesBaseClass_208;

              UsesBaseClass_208 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(ConsTag_22);
              ml_backend__ml_unify_gen__ml_gen_construct_compound_14_p_0(ConsId_13, (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))), UsesBaseClass_208, Var_12, ArgVars_14, ArgModes_15, TakeAddr_16, HowToConstruct_17, Context_18, Defns_19, Stmts_20, STATE_VARIABLE_Info_0_103, STATE_VARIABLE_Info_104);
            }
            break;
          case (MR_Integer) 1:
            {
              if ((ArgVars_14 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word VarType_175;
                MR_Word VarLval_176;
                MR_Word ModuleInfo_177;
                MR_Word MLDS_Type_178;
                MR_Word Rval_179;
                MR_Word GroundTerm_180;
                MR_Word Stmt_181;

                ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_103, Var_12, &VarType_175);
                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_103, Var_12, &VarLval_176);
                ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_103, &ModuleInfo_177);
                MLDS_Type_178 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_177, VarType_175);
                switch (MR_tag((MR_Word) ConsTag_22)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      Rval_179 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_5[0]), VarType_175, MLDS_Type_178);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_String String_78 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConsTag_22, (MR_Integer) 0))));
                      MR_Word Var_124;

                      {
                        Var_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                        MR_hl_field(MR_mktag(3), Var_124, 1) = ((MR_Box) (String_78));
                      }
                      {
                        Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (Var_124));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Float Float_77 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_22, (MR_Integer) 0)));
                      MR_Word Var_125;

                      {
                        Var_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                        MR_hl_field(MR_mktag(3), Var_125, 1) = MR_box_float(Float_77);
                      }
                      {
                        Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (Var_125));
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word IntTag_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));

                          Rval_179 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0(IntTag_76, VarType_175, MLDS_Type_178);
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ForeignLang_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                          MR_String ForeignTag_80 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                          MR_Word Var_123;

                          {
                            Var_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                            MR_hl_field(MR_mktag(3), Var_123, 1) = ((MR_Box) (ForeignLang_79));
                            MR_hl_field(MR_mktag(3), Var_123, 2) = ((MR_Box) (ForeignTag_80));
                            MR_hl_field(MR_mktag(3), Var_123, 3) = ((MR_Box) (MLDS_Type_178));
                          }
                          {
                            Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (Var_123));
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word ModuleName0_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                          MR_String TypeName_83 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                          MR_Integer TypeArity_84 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
                          MR_Word ModuleName_85;
                          MR_Word MLDS_Module_86;
                          MR_Word RttiTypeCtor_87;
                          MR_Word RttiId_88;
                          MR_Word Const_89;
                          MR_Word Var_117;

                          ModuleName_85 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_82);
                          MLDS_Module_86 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_85);
                          {
                            RttiTypeCtor_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), RttiTypeCtor_87, 0) = ((MR_Box) (ModuleName_85));
                            MR_hl_field(MR_mktag(0), RttiTypeCtor_87, 1) = ((MR_Box) (TypeName_83));
                            MR_hl_field(MR_mktag(0), RttiTypeCtor_87, 2) = ((MR_Box) (TypeArity_84));
                          }
                          {
                            RttiId_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), RttiId_88, 0) = ((MR_Box) (RttiTypeCtor_87));
                            MR_hl_field(MR_mktag(0), RttiId_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
                          }
                          {
                            Const_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Const_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                            MR_hl_field(MR_mktag(3), Const_89, 1) = ((MR_Box) (MLDS_Module_86));
                            MR_hl_field(MR_mktag(3), Const_89, 2) = ((MR_Box) (RttiId_88));
                          }
                          {
                            Var_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), Var_117, 1) = ((MR_Box) (Const_89));
                          }
                          {
                            Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                            MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (MLDS_Type_178));
                            MR_hl_field(MR_mktag(3), Rval_179, 2) = ((MR_Box) (Var_117));
                          }
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Word ClassId_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                          MR_String Instance_91 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
                          MR_Word TCName_92;
                          MR_Word Var_114;
                          MR_Word Var_115;
                          MR_Word ModuleName_165 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                          MR_Word MLDS_Module_166;
                          MR_Word RttiId_167;
                          MR_Word Const_168;

                          MLDS_Module_166 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_165);
                          TCName_92 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_90);
                          {
                            Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (ModuleName_165));
                            MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Instance_91));
                          }
                          {
                            RttiId_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), RttiId_167, 0) = ((MR_Box) (TCName_92));
                            MR_hl_field(MR_mktag(1), RttiId_167, 1) = ((MR_Box) (Var_114));
                          }
                          {
                            Const_168 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Const_168, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                            MR_hl_field(MR_mktag(3), Const_168, 1) = ((MR_Box) (MLDS_Module_166));
                            MR_hl_field(MR_mktag(3), Const_168, 2) = ((MR_Box) (RttiId_167));
                          }
                          {
                            Var_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), Var_115, 1) = ((MR_Box) (Const_168));
                          }
                          {
                            Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                            MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (MLDS_Type_178));
                            MR_hl_field(MR_mktag(3), Rval_179, 2) = ((MR_Box) (Var_115));
                          }
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          MR_Word PredLabel_93;
                          MR_Word PredModule_94;
                          MR_Word ProcLabel_95;
                          MR_Word QualProcLabel_96;
                          MR_Word Var_111;
                          MR_Word Var_113;
                          MR_Word PredId_169 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                          MR_Integer ProcId_170 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                          MR_Word Const_171;

                          {
                            Var_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Var_111, 0) = ((MR_Box) (PredId_169));
                            MR_hl_field(MR_mktag(0), Var_111, 1) = ((MR_Box) (ProcId_170));
                          }
                          ml_backend__ml_code_util__ml_gen_pred_label_4_p_0(ModuleInfo_177, Var_111, &PredLabel_93, &PredModule_94);
                          {
                            ProcLabel_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ProcLabel_95, 0) = ((MR_Box) (PredLabel_93));
                            MR_hl_field(MR_mktag(0), ProcLabel_95, 1) = ((MR_Box) (ProcId_170));
                          }
                          {
                            QualProcLabel_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), QualProcLabel_96, 0) = ((MR_Box) (PredModule_94));
                            MR_hl_field(MR_mktag(0), QualProcLabel_96, 1) = ((MR_Box) (ProcLabel_95));
                          }
                          {
                            Const_171 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Const_171, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
                            MR_hl_field(MR_mktag(3), Const_171, 1) = ((MR_Box) (QualProcLabel_96));
                            MR_hl_field(MR_mktag(3), Const_171, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                          {
                            Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), Var_113, 1) = ((MR_Box) (Const_171));
                          }
                          {
                            Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                            MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (MLDS_Type_178));
                            MR_hl_field(MR_mktag(3), Rval_179, 2) = ((MR_Box) (Var_113));
                          }
                        }
                        break;
                      case (MR_Integer) 9:
                        {
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct\'/11", (MR_String) "deep_profiling_proc_layout_tag NYI");
                            return;
                          }
                        }
                        break;
                      case (MR_Integer) 10:
                        {
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct\'/11", (MR_String) "table_io_entry_tag NYI");
                            return;
                          }
                        }
                        break;
                      case (MR_Integer) 14:
                        {
                          MR_Integer SecTag_81 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                          MR_Word Var_118;
                          MR_Word Var_119;
                          MR_Word Var_121;
                          MR_Word Var_122;
                          MR_Integer Ptag_164 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));

                          {
                            Var_122 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), Var_122, 0) = ((MR_Box) (SecTag_81));
                          }
                          {
                            Var_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), Var_121, 1) = ((MR_Box) (Var_122));
                          }
                          {
                            Var_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                            MR_hl_field(MR_mktag(3), Var_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                            MR_hl_field(MR_mktag(3), Var_119, 2) = ((MR_Box) (Var_121));
                          }
                          {
                            Var_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(3), Var_118, 1) = ((MR_Box) (Ptag_164));
                            MR_hl_field(MR_mktag(3), Var_118, 2) = ((MR_Box) (Var_119));
                          }
                          {
                            Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                            MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (MLDS_Type_178));
                            MR_hl_field(MR_mktag(3), Rval_179, 2) = ((MR_Box) (Var_118));
                          }
                        }
                        break;
                    }
                    break;
                }
                {
                  GroundTerm_180 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), GroundTerm_180, 0) = ((MR_Box) (Rval_179));
                  MR_hl_field(MR_mktag(0), GroundTerm_180, 1) = ((MR_Box) (VarType_175));
                  MR_hl_field(MR_mktag(0), GroundTerm_180, 2) = ((MR_Box) (MLDS_Type_178));
                }
                ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_12, GroundTerm_180, STATE_VARIABLE_Info_0_103, STATE_VARIABLE_Info_104);
                Stmt_181 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_176, Rval_179, Context_18);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *Stmts_20 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_181));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct\'/11", (MR_String) "bad constant term");
                  return;
                }
              }
              *Defns_19 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgVar_24;
              MR_Word ArgMode_25;
              MR_Word Var_135;
              MR_Word Var_136;

              succeeded = ((MR_tag((MR_Word) ArgVars_14)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                ArgVar_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_14, (MR_Integer) 0))));
                Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_14, (MR_Integer) 1))));
                succeeded = (Var_135 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) ArgModes_15)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgMode_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_15, (MR_Integer) 0))));
                    Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_15, (MR_Integer) 1))));
                    succeeded = (Var_136 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              }
              if (succeeded)
              {
                MR_Word VarType_26;
                MR_Word VarLval_27;
                MR_Word ModuleInfo_28;
                MR_Word MLDS_Type_29;
                MR_Word ArgGroundTerm_30;

                ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_103, Var_12, &VarType_26);
                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_103, Var_12, &VarLval_27);
                ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_103, &ModuleInfo_28);
                MLDS_Type_29 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_28, VarType_26);
                succeeded = ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(STATE_VARIABLE_Info_0_103, ArgVar_24, &ArgGroundTerm_30);
                if (succeeded)
                {
                  MR_Word ArgRval_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_30, (MR_Integer) 0))));
                  MR_Word MLDS_ArgType_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_30, (MR_Integer) 2))));
                  MR_Word GlobalData0_34;
                  MR_Word Rval0_35;
                  MR_Word GlobalData_36;
                  MR_Word Rval_37;
                  MR_Word GroundTerm_38;
                  MR_Word Stmt_39;
                  MR_Word STATE_VARIABLE_Info_138_138;

                  ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_103, &GlobalData0_34);
                  ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_28, Context_18, MLDS_ArgType_33, (MR_Integer) 2, ArgRval_31, &Rval0_35, GlobalData0_34, &GlobalData_36);
                  ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_36, STATE_VARIABLE_Info_0_103, &STATE_VARIABLE_Info_138_138);
                  Rval_37 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(MLDS_Type_29, ConsTag_22, Rval0_35);
                  {
                    GroundTerm_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), GroundTerm_38, 0) = ((MR_Box) (Rval_37));
                    MR_hl_field(MR_mktag(0), GroundTerm_38, 1) = ((MR_Box) (VarType_26));
                    MR_hl_field(MR_mktag(0), GroundTerm_38, 2) = ((MR_Box) (MLDS_Type_29));
                  }
                  ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_12, GroundTerm_38, STATE_VARIABLE_Info_138_138, STATE_VARIABLE_Info_104);
                  Stmt_39 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_27, Rval_37, Context_18);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *Stmts_20 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_39));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
                else
                {
                  MR_Word ArgLval_40;
                  MR_Word ArgType_41;

                  ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_103, ArgVar_24, &ArgLval_40);
                  ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_103, ArgVar_24, &ArgType_41);
                  if ((ConsTag_22 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
                  {
                    MR_Word ArgRval_147;
                    MR_Word Rval_148;
                    MR_Word Stmt_149;

                    {
                      ArgRval_147 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ArgRval_147, 0) = ((MR_Box) (ArgLval_40));
                    }
                    ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_28, ArgType_41, VarType_26, (MR_Integer) 0, ArgRval_147, &Rval_148);
                    Stmt_149 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_27, Rval_148, Context_18);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *Stmts_20 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_149));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  else
                  {
                    MR_Integer Ptag_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));

                    ml_backend__ml_unify_gen__ml_gen_dynamic_construct_direct_arg_9_p_0(ModuleInfo_28, Ptag_42, ArgMode_25, ArgLval_40, ArgType_41, VarLval_27, VarType_26, Context_18, Stmts_20);
                  }
                  *STATE_VARIABLE_Info_104 = STATE_VARIABLE_Info_0_103;
                }
              }
              else
              if ((ConsTag_22 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct\'/11", (MR_String) "no_tag: arity != 1");
                  return;
                }
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct\'/11", (MR_String) "direct_arg_tag: arity != 1");
                  return;
                }
              }
              *Defns_19 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          if ((ArgVars_14 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word VarType_175;
            MR_Word VarLval_176;
            MR_Word ModuleInfo_177;
            MR_Word MLDS_Type_178;
            MR_Word Rval_179;
            MR_Word GroundTerm_180;
            MR_Word Stmt_181;

            ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_103, Var_12, &VarType_175);
            ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_103, Var_12, &VarLval_176);
            ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_103, &ModuleInfo_177);
            MLDS_Type_178 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_177, VarType_175);
            switch (MR_tag((MR_Word) ConsTag_22)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  Rval_179 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_5[0]), VarType_175, MLDS_Type_178);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String String_78 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConsTag_22, (MR_Integer) 0))));
                  MR_Word Var_124;

                  {
                    Var_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                    MR_hl_field(MR_mktag(3), Var_124, 1) = ((MR_Box) (String_78));
                  }
                  {
                    Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (Var_124));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Float Float_77 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_22, (MR_Integer) 0)));
                  MR_Word Var_125;

                  {
                    Var_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                    MR_hl_field(MR_mktag(3), Var_125, 1) = MR_box_float(Float_77);
                  }
                  {
                    Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (Var_125));
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word IntTag_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));

                      Rval_179 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0(IntTag_76, VarType_175, MLDS_Type_178);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ForeignLang_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                      MR_String ForeignTag_80 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                      MR_Word Var_123;

                      {
                        Var_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                        MR_hl_field(MR_mktag(3), Var_123, 1) = ((MR_Box) (ForeignLang_79));
                        MR_hl_field(MR_mktag(3), Var_123, 2) = ((MR_Box) (ForeignTag_80));
                        MR_hl_field(MR_mktag(3), Var_123, 3) = ((MR_Box) (MLDS_Type_178));
                      }
                      {
                        Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (Var_123));
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word ModuleName0_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                      MR_String TypeName_83 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                      MR_Integer TypeArity_84 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
                      MR_Word ModuleName_85;
                      MR_Word MLDS_Module_86;
                      MR_Word RttiTypeCtor_87;
                      MR_Word RttiId_88;
                      MR_Word Const_89;
                      MR_Word Var_117;

                      ModuleName_85 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_82);
                      MLDS_Module_86 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_85);
                      {
                        RttiTypeCtor_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), RttiTypeCtor_87, 0) = ((MR_Box) (ModuleName_85));
                        MR_hl_field(MR_mktag(0), RttiTypeCtor_87, 1) = ((MR_Box) (TypeName_83));
                        MR_hl_field(MR_mktag(0), RttiTypeCtor_87, 2) = ((MR_Box) (TypeArity_84));
                      }
                      {
                        RttiId_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), RttiId_88, 0) = ((MR_Box) (RttiTypeCtor_87));
                        MR_hl_field(MR_mktag(0), RttiId_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
                      }
                      {
                        Const_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Const_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                        MR_hl_field(MR_mktag(3), Const_89, 1) = ((MR_Box) (MLDS_Module_86));
                        MR_hl_field(MR_mktag(3), Const_89, 2) = ((MR_Box) (RttiId_88));
                      }
                      {
                        Var_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), Var_117, 1) = ((MR_Box) (Const_89));
                      }
                      {
                        Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                        MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (MLDS_Type_178));
                        MR_hl_field(MR_mktag(3), Rval_179, 2) = ((MR_Box) (Var_117));
                      }
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_Word ClassId_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                      MR_String Instance_91 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
                      MR_Word TCName_92;
                      MR_Word Var_114;
                      MR_Word Var_115;
                      MR_Word ModuleName_165 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                      MR_Word MLDS_Module_166;
                      MR_Word RttiId_167;
                      MR_Word Const_168;

                      MLDS_Module_166 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_165);
                      TCName_92 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_90);
                      {
                        Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (ModuleName_165));
                        MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Instance_91));
                      }
                      {
                        RttiId_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), RttiId_167, 0) = ((MR_Box) (TCName_92));
                        MR_hl_field(MR_mktag(1), RttiId_167, 1) = ((MR_Box) (Var_114));
                      }
                      {
                        Const_168 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Const_168, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                        MR_hl_field(MR_mktag(3), Const_168, 1) = ((MR_Box) (MLDS_Module_166));
                        MR_hl_field(MR_mktag(3), Const_168, 2) = ((MR_Box) (RttiId_167));
                      }
                      {
                        Var_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), Var_115, 1) = ((MR_Box) (Const_168));
                      }
                      {
                        Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                        MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (MLDS_Type_178));
                        MR_hl_field(MR_mktag(3), Rval_179, 2) = ((MR_Box) (Var_115));
                      }
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      MR_Word PredLabel_93;
                      MR_Word PredModule_94;
                      MR_Word ProcLabel_95;
                      MR_Word QualProcLabel_96;
                      MR_Word Var_111;
                      MR_Word Var_113;
                      MR_Word PredId_169 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                      MR_Integer ProcId_170 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                      MR_Word Const_171;

                      {
                        Var_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_111, 0) = ((MR_Box) (PredId_169));
                        MR_hl_field(MR_mktag(0), Var_111, 1) = ((MR_Box) (ProcId_170));
                      }
                      ml_backend__ml_code_util__ml_gen_pred_label_4_p_0(ModuleInfo_177, Var_111, &PredLabel_93, &PredModule_94);
                      {
                        ProcLabel_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ProcLabel_95, 0) = ((MR_Box) (PredLabel_93));
                        MR_hl_field(MR_mktag(0), ProcLabel_95, 1) = ((MR_Box) (ProcId_170));
                      }
                      {
                        QualProcLabel_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), QualProcLabel_96, 0) = ((MR_Box) (PredModule_94));
                        MR_hl_field(MR_mktag(0), QualProcLabel_96, 1) = ((MR_Box) (ProcLabel_95));
                      }
                      {
                        Const_171 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Const_171, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
                        MR_hl_field(MR_mktag(3), Const_171, 1) = ((MR_Box) (QualProcLabel_96));
                        MR_hl_field(MR_mktag(3), Const_171, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), Var_113, 1) = ((MR_Box) (Const_171));
                      }
                      {
                        Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                        MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (MLDS_Type_178));
                        MR_hl_field(MR_mktag(3), Rval_179, 2) = ((MR_Box) (Var_113));
                      }
                    }
                    break;
                  case (MR_Integer) 9:
                    {
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct\'/11", (MR_String) "deep_profiling_proc_layout_tag NYI");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 10:
                    {
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct\'/11", (MR_String) "table_io_entry_tag NYI");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 14:
                    {
                      MR_Integer SecTag_81 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                      MR_Word Var_118;
                      MR_Word Var_119;
                      MR_Word Var_121;
                      MR_Word Var_122;
                      MR_Integer Ptag_164 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));

                      {
                        Var_122 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), Var_122, 0) = ((MR_Box) (SecTag_81));
                      }
                      {
                        Var_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), Var_121, 1) = ((MR_Box) (Var_122));
                      }
                      {
                        Var_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                        MR_hl_field(MR_mktag(3), Var_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                        MR_hl_field(MR_mktag(3), Var_119, 2) = ((MR_Box) (Var_121));
                      }
                      {
                        Var_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), Var_118, 1) = ((MR_Box) (Ptag_164));
                        MR_hl_field(MR_mktag(3), Var_118, 2) = ((MR_Box) (Var_119));
                      }
                      {
                        Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                        MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (MLDS_Type_178));
                        MR_hl_field(MR_mktag(3), Rval_179, 2) = ((MR_Box) (Var_118));
                      }
                    }
                    break;
                }
                break;
            }
            {
              GroundTerm_180 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), GroundTerm_180, 0) = ((MR_Box) (Rval_179));
              MR_hl_field(MR_mktag(0), GroundTerm_180, 1) = ((MR_Box) (VarType_175));
              MR_hl_field(MR_mktag(0), GroundTerm_180, 2) = ((MR_Box) (MLDS_Type_178));
            }
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_12, GroundTerm_180, STATE_VARIABLE_Info_0_103, STATE_VARIABLE_Info_104);
            Stmt_181 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_176, Rval_179, Context_18);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_20 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_181));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct\'/11", (MR_String) "bad constant term");
              return;
            }
          }
          *Defns_19 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 14:
            {
              if ((ArgVars_14 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word VarType_175;
                MR_Word VarLval_176;
                MR_Word ModuleInfo_177;
                MR_Word MLDS_Type_178;
                MR_Word Rval_179;
                MR_Word GroundTerm_180;
                MR_Word Stmt_181;

                ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_103, Var_12, &VarType_175);
                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_103, Var_12, &VarLval_176);
                ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_103, &ModuleInfo_177);
                MLDS_Type_178 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_177, VarType_175);
                switch (MR_tag((MR_Word) ConsTag_22)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      Rval_179 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_5[0]), VarType_175, MLDS_Type_178);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_String String_78 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConsTag_22, (MR_Integer) 0))));
                      MR_Word Var_124;

                      {
                        Var_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                        MR_hl_field(MR_mktag(3), Var_124, 1) = ((MR_Box) (String_78));
                      }
                      {
                        Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (Var_124));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Float Float_77 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_22, (MR_Integer) 0)));
                      MR_Word Var_125;

                      {
                        Var_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                        MR_hl_field(MR_mktag(3), Var_125, 1) = MR_box_float(Float_77);
                      }
                      {
                        Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (Var_125));
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word IntTag_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));

                          Rval_179 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0(IntTag_76, VarType_175, MLDS_Type_178);
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ForeignLang_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                          MR_String ForeignTag_80 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                          MR_Word Var_123;

                          {
                            Var_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                            MR_hl_field(MR_mktag(3), Var_123, 1) = ((MR_Box) (ForeignLang_79));
                            MR_hl_field(MR_mktag(3), Var_123, 2) = ((MR_Box) (ForeignTag_80));
                            MR_hl_field(MR_mktag(3), Var_123, 3) = ((MR_Box) (MLDS_Type_178));
                          }
                          {
                            Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (Var_123));
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word ModuleName0_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                          MR_String TypeName_83 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                          MR_Integer TypeArity_84 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
                          MR_Word ModuleName_85;
                          MR_Word MLDS_Module_86;
                          MR_Word RttiTypeCtor_87;
                          MR_Word RttiId_88;
                          MR_Word Const_89;
                          MR_Word Var_117;

                          ModuleName_85 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_82);
                          MLDS_Module_86 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_85);
                          {
                            RttiTypeCtor_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), RttiTypeCtor_87, 0) = ((MR_Box) (ModuleName_85));
                            MR_hl_field(MR_mktag(0), RttiTypeCtor_87, 1) = ((MR_Box) (TypeName_83));
                            MR_hl_field(MR_mktag(0), RttiTypeCtor_87, 2) = ((MR_Box) (TypeArity_84));
                          }
                          {
                            RttiId_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), RttiId_88, 0) = ((MR_Box) (RttiTypeCtor_87));
                            MR_hl_field(MR_mktag(0), RttiId_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
                          }
                          {
                            Const_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Const_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                            MR_hl_field(MR_mktag(3), Const_89, 1) = ((MR_Box) (MLDS_Module_86));
                            MR_hl_field(MR_mktag(3), Const_89, 2) = ((MR_Box) (RttiId_88));
                          }
                          {
                            Var_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), Var_117, 1) = ((MR_Box) (Const_89));
                          }
                          {
                            Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                            MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (MLDS_Type_178));
                            MR_hl_field(MR_mktag(3), Rval_179, 2) = ((MR_Box) (Var_117));
                          }
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Word ClassId_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                          MR_String Instance_91 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
                          MR_Word TCName_92;
                          MR_Word Var_114;
                          MR_Word Var_115;
                          MR_Word ModuleName_165 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                          MR_Word MLDS_Module_166;
                          MR_Word RttiId_167;
                          MR_Word Const_168;

                          MLDS_Module_166 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_165);
                          TCName_92 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_90);
                          {
                            Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (ModuleName_165));
                            MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Instance_91));
                          }
                          {
                            RttiId_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), RttiId_167, 0) = ((MR_Box) (TCName_92));
                            MR_hl_field(MR_mktag(1), RttiId_167, 1) = ((MR_Box) (Var_114));
                          }
                          {
                            Const_168 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Const_168, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                            MR_hl_field(MR_mktag(3), Const_168, 1) = ((MR_Box) (MLDS_Module_166));
                            MR_hl_field(MR_mktag(3), Const_168, 2) = ((MR_Box) (RttiId_167));
                          }
                          {
                            Var_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), Var_115, 1) = ((MR_Box) (Const_168));
                          }
                          {
                            Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                            MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (MLDS_Type_178));
                            MR_hl_field(MR_mktag(3), Rval_179, 2) = ((MR_Box) (Var_115));
                          }
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          MR_Word PredLabel_93;
                          MR_Word PredModule_94;
                          MR_Word ProcLabel_95;
                          MR_Word QualProcLabel_96;
                          MR_Word Var_111;
                          MR_Word Var_113;
                          MR_Word PredId_169 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                          MR_Integer ProcId_170 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                          MR_Word Const_171;

                          {
                            Var_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Var_111, 0) = ((MR_Box) (PredId_169));
                            MR_hl_field(MR_mktag(0), Var_111, 1) = ((MR_Box) (ProcId_170));
                          }
                          ml_backend__ml_code_util__ml_gen_pred_label_4_p_0(ModuleInfo_177, Var_111, &PredLabel_93, &PredModule_94);
                          {
                            ProcLabel_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ProcLabel_95, 0) = ((MR_Box) (PredLabel_93));
                            MR_hl_field(MR_mktag(0), ProcLabel_95, 1) = ((MR_Box) (ProcId_170));
                          }
                          {
                            QualProcLabel_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), QualProcLabel_96, 0) = ((MR_Box) (PredModule_94));
                            MR_hl_field(MR_mktag(0), QualProcLabel_96, 1) = ((MR_Box) (ProcLabel_95));
                          }
                          {
                            Const_171 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Const_171, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
                            MR_hl_field(MR_mktag(3), Const_171, 1) = ((MR_Box) (QualProcLabel_96));
                            MR_hl_field(MR_mktag(3), Const_171, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                          {
                            Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), Var_113, 1) = ((MR_Box) (Const_171));
                          }
                          {
                            Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                            MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (MLDS_Type_178));
                            MR_hl_field(MR_mktag(3), Rval_179, 2) = ((MR_Box) (Var_113));
                          }
                        }
                        break;
                      case (MR_Integer) 9:
                        {
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct\'/11", (MR_String) "deep_profiling_proc_layout_tag NYI");
                            return;
                          }
                        }
                        break;
                      case (MR_Integer) 10:
                        {
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct\'/11", (MR_String) "table_io_entry_tag NYI");
                            return;
                          }
                        }
                        break;
                      case (MR_Integer) 14:
                        {
                          MR_Integer SecTag_81 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                          MR_Word Var_118;
                          MR_Word Var_119;
                          MR_Word Var_121;
                          MR_Word Var_122;
                          MR_Integer Ptag_164 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));

                          {
                            Var_122 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), Var_122, 0) = ((MR_Box) (SecTag_81));
                          }
                          {
                            Var_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), Var_121, 1) = ((MR_Box) (Var_122));
                          }
                          {
                            Var_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                            MR_hl_field(MR_mktag(3), Var_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                            MR_hl_field(MR_mktag(3), Var_119, 2) = ((MR_Box) (Var_121));
                          }
                          {
                            Var_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(3), Var_118, 1) = ((MR_Box) (Ptag_164));
                            MR_hl_field(MR_mktag(3), Var_118, 2) = ((MR_Box) (Var_119));
                          }
                          {
                            Rval_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Rval_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                            MR_hl_field(MR_mktag(3), Rval_179, 1) = ((MR_Box) (MLDS_Type_178));
                            MR_hl_field(MR_mktag(3), Rval_179, 2) = ((MR_Box) (Var_118));
                          }
                        }
                        break;
                    }
                    break;
                }
                {
                  GroundTerm_180 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), GroundTerm_180, 0) = ((MR_Box) (Rval_179));
                  MR_hl_field(MR_mktag(0), GroundTerm_180, 1) = ((MR_Box) (VarType_175));
                  MR_hl_field(MR_mktag(0), GroundTerm_180, 2) = ((MR_Box) (MLDS_Type_178));
                }
                ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_12, GroundTerm_180, STATE_VARIABLE_Info_0_103, STATE_VARIABLE_Info_104);
                Stmt_181 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_176, Rval_179, Context_18);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *Stmts_20 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_181));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct\'/11", (MR_String) "bad constant term");
                  return;
                }
              }
              *Defns_19 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word PredId_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
              MR_Integer ProcId_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));

              ml_backend__ml_closure_gen__ml_gen_closure_11_p_0(PredId_48, ProcId_49, Var_12, ArgVars_14, ArgModes_15, HowToConstruct_17, Context_18, Defns_19, Stmts_20, STATE_VARIABLE_Info_0_103, STATE_VARIABLE_Info_104);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer ConstNum_212 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
              MR_Word ConstStructMap_213;
              MR_Word GroundTerm0_214;
              MR_Word VarType_218;
              MR_Word VarLval_219;
              MR_Word ModuleInfo_220;
              MR_Word MLDS_Type_221;
              MR_Word Rval_222;
              MR_Word GroundTerm_223;
              MR_Word Stmt_224;
              MR_Box conv1_GroundTerm0_214;

              ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_103, &ConstStructMap_213);
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_213, ConstNum_212, &conv1_GroundTerm0_214);
              GroundTerm0_214 = ((MR_Word) (conv1_GroundTerm0_214));
              Rval_222 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_214, (MR_Integer) 0))));
              ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_103, Var_12, &VarType_218);
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_103, Var_12, &VarLval_219);
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_103, &ModuleInfo_220);
              MLDS_Type_221 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_220, VarType_218);
              {
                GroundTerm_223 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_223, 0) = ((MR_Box) (Rval_222));
                MR_hl_field(MR_mktag(0), GroundTerm_223, 1) = ((MR_Box) (VarType_218));
                MR_hl_field(MR_mktag(0), GroundTerm_223, 2) = ((MR_Box) (MLDS_Type_221));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_12, GroundTerm_223, STATE_VARIABLE_Info_0_103, STATE_VARIABLE_Info_104);
              *Defns_19 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              Stmt_224 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_219, Rval_222, Context_18);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_20 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_224));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Integer ConstNum_229 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
              MR_Word ConstStructMap_230;
              MR_Word GroundTerm0_231;
              MR_Word VarType_235;
              MR_Word VarLval_236;
              MR_Word ModuleInfo_237;
              MR_Word MLDS_Type_238;
              MR_Word Rval_239;
              MR_Word GroundTerm_240;
              MR_Word Stmt_241;
              MR_Box conv2_GroundTerm0_231;

              ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_103, &ConstStructMap_230);
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_230, ConstNum_229, &conv2_GroundTerm0_231);
              GroundTerm0_231 = ((MR_Word) (conv2_GroundTerm0_231));
              Rval_239 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_231, (MR_Integer) 0))));
              ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_103, Var_12, &VarType_235);
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_103, Var_12, &VarLval_236);
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_103, &ModuleInfo_237);
              MLDS_Type_238 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_237, VarType_235);
              {
                GroundTerm_240 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_240, 0) = ((MR_Box) (Rval_239));
                MR_hl_field(MR_mktag(0), GroundTerm_240, 1) = ((MR_Box) (VarType_235));
                MR_hl_field(MR_mktag(0), GroundTerm_240, 2) = ((MR_Box) (MLDS_Type_238));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_12, GroundTerm_240, STATE_VARIABLE_Info_0_103, STATE_VARIABLE_Info_104);
              *Defns_19 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              Stmt_241 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_236, Rval_239, Context_18);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_20 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_241));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Integer ConstNum_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
              MR_Word ConstStructMap_53;
              MR_Word GroundTerm0_54;
              MR_Word VarType_157;
              MR_Word VarLval_158;
              MR_Word ModuleInfo_159;
              MR_Word MLDS_Type_160;
              MR_Word Rval_161;
              MR_Word GroundTerm_162;
              MR_Word Stmt_163;
              MR_Box conv0_GroundTerm0_54;

              ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_103, &ConstStructMap_53);
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_53, ConstNum_51, &conv0_GroundTerm0_54);
              GroundTerm0_54 = ((MR_Word) (conv0_GroundTerm0_54));
              Rval_161 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_54, (MR_Integer) 0))));
              ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_103, Var_12, &VarType_157);
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_103, Var_12, &VarLval_158);
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_103, &ModuleInfo_159);
              MLDS_Type_160 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_159, VarType_157);
              {
                GroundTerm_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_162, 0) = ((MR_Box) (Rval_161));
                MR_hl_field(MR_mktag(0), GroundTerm_162, 1) = ((MR_Box) (VarType_157));
                MR_hl_field(MR_mktag(0), GroundTerm_162, 2) = ((MR_Box) (MLDS_Type_160));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_12, GroundTerm_162, STATE_VARIABLE_Info_0_103, STATE_VARIABLE_Info_104);
              *Defns_19 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              Stmt_163 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_158, Rval_161, Context_18);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_20 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_163));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word UsesBaseClass_245;
              MR_Integer Ptag_246 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));

              UsesBaseClass_245 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(ConsTag_22);
              ml_backend__ml_unify_gen__ml_gen_construct_compound_14_p_0(ConsId_13, Ptag_246, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))), UsesBaseClass_245, Var_12, ArgVars_14, ArgModes_15, TakeAddr_16, HowToConstruct_17, Context_18, Defns_19, Stmts_20, STATE_VARIABLE_Info_0_103, STATE_VARIABLE_Info_104);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word ArgVar_24;
              MR_Word ArgMode_25;
              MR_Word Var_135;
              MR_Word Var_136;

              succeeded = ((MR_tag((MR_Word) ArgVars_14)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                ArgVar_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_14, (MR_Integer) 0))));
                Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_14, (MR_Integer) 1))));
                succeeded = (Var_135 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) ArgModes_15)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgMode_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_15, (MR_Integer) 0))));
                    Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_15, (MR_Integer) 1))));
                    succeeded = (Var_136 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              }
              if (succeeded)
              {
                MR_Word VarType_26;
                MR_Word VarLval_27;
                MR_Word ModuleInfo_28;
                MR_Word MLDS_Type_29;
                MR_Word ArgGroundTerm_30;

                ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_103, Var_12, &VarType_26);
                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_103, Var_12, &VarLval_27);
                ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_103, &ModuleInfo_28);
                MLDS_Type_29 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_28, VarType_26);
                succeeded = ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(STATE_VARIABLE_Info_0_103, ArgVar_24, &ArgGroundTerm_30);
                if (succeeded)
                {
                  MR_Word ArgRval_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_30, (MR_Integer) 0))));
                  MR_Word MLDS_ArgType_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_30, (MR_Integer) 2))));
                  MR_Word GlobalData0_34;
                  MR_Word Rval0_35;
                  MR_Word GlobalData_36;
                  MR_Word Rval_37;
                  MR_Word GroundTerm_38;
                  MR_Word Stmt_39;
                  MR_Word STATE_VARIABLE_Info_138_138;

                  ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_103, &GlobalData0_34);
                  ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_28, Context_18, MLDS_ArgType_33, (MR_Integer) 2, ArgRval_31, &Rval0_35, GlobalData0_34, &GlobalData_36);
                  ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_36, STATE_VARIABLE_Info_0_103, &STATE_VARIABLE_Info_138_138);
                  Rval_37 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(MLDS_Type_29, ConsTag_22, Rval0_35);
                  {
                    GroundTerm_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), GroundTerm_38, 0) = ((MR_Box) (Rval_37));
                    MR_hl_field(MR_mktag(0), GroundTerm_38, 1) = ((MR_Box) (VarType_26));
                    MR_hl_field(MR_mktag(0), GroundTerm_38, 2) = ((MR_Box) (MLDS_Type_29));
                  }
                  ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_12, GroundTerm_38, STATE_VARIABLE_Info_138_138, STATE_VARIABLE_Info_104);
                  Stmt_39 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_27, Rval_37, Context_18);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *Stmts_20 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_39));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
                else
                {
                  MR_Word ArgLval_40;
                  MR_Word ArgType_41;

                  ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_103, ArgVar_24, &ArgLval_40);
                  ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_103, ArgVar_24, &ArgType_41);
                  if ((ConsTag_22 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
                  {
                    MR_Word ArgRval_147;
                    MR_Word Rval_148;
                    MR_Word Stmt_149;

                    {
                      ArgRval_147 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ArgRval_147, 0) = ((MR_Box) (ArgLval_40));
                    }
                    ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_28, ArgType_41, VarType_26, (MR_Integer) 0, ArgRval_147, &Rval_148);
                    Stmt_149 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_27, Rval_148, Context_18);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *Stmts_20 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_149));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  else
                  {
                    MR_Integer Ptag_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));

                    ml_backend__ml_unify_gen__ml_gen_dynamic_construct_direct_arg_9_p_0(ModuleInfo_28, Ptag_42, ArgMode_25, ArgLval_40, ArgType_41, VarLval_27, VarType_26, Context_18, Stmts_20);
                  }
                  *STATE_VARIABLE_Info_104 = STATE_VARIABLE_Info_0_103;
                }
              }
              else
              if ((ConsTag_22 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct\'/11", (MR_String) "no_tag: arity != 1");
                  return;
                }
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct\'/11", (MR_String) "direct_arg_tag: arity != 1");
                  return;
                }
              }
              *Defns_19 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word MaybeStag_44;
              MR_Integer Stag_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
              MR_Word AddedBy_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
              MR_Word UsesBaseClass_47;
              MR_Tuple Var_133;
              MR_Integer Ptag_156 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));

              {
                Var_133 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_133, 0) = ((MR_Box) (Stag_45));
                MR_hl_field(MR_mktag(0), Var_133, 1) = ((MR_Box) (AddedBy_46));
              }
              {
                MaybeStag_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeStag_44, 0) = ((MR_Box) (Var_133));
              }
              UsesBaseClass_47 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(ConsTag_22);
              ml_backend__ml_unify_gen__ml_gen_construct_compound_14_p_0(ConsId_13, Ptag_156, MaybeStag_44, UsesBaseClass_47, Var_12, ArgVars_14, ArgModes_15, TakeAddr_16, HowToConstruct_17, Context_18, Defns_19, Stmts_20, STATE_VARIABLE_Info_0_103, STATE_VARIABLE_Info_104);
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_construct_direct_arg_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Integer Ptag_11,
  MR_Word ArgMode_12,
  MR_Word ArgLval_13,
  MR_Word ArgType_14,
  MR_Word VarLval_15,
  MR_Word VarType_16,
  MR_Word Context_17,
  MR_Word * Stmts_18)
{
  {
    MR_bool succeeded;
    MR_Word LeftFromToInsts_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_12, (MR_Integer) 0))));
    MR_Word RightFromToInsts_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_12, (MR_Integer) 1))));
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_construct_direct_arg\'/9", (MR_String) "dummy unify");
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
              MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (Ptag_11));
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
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_construct_direct_arg\'/9", (MR_String) "left-to-right data flow in construction");
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
              MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (Ptag_11));
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
ml_backend__ml_unify_gen__ml_gen_construct_compound_14_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_construct_compound__535__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_construct_compound_14_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_construct_compound__520__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_construct_compound_14_p_0(
  MR_Word ConsId_15,
  MR_Integer Ptag_16,
  MR_Word MaybeStag_17,
  MR_Word UsesBaseClass_18,
  MR_Word Var_19,
  MR_Word ArgVars_20,
  MR_Word ArgModes_21,
  MR_Word TakeAddr_22,
  MR_Word HowToConstruct_23,
  MR_Word Context_24,
  MR_Word * Defns_25,
  MR_Word * Stmts_26,
  MR_Word STATE_VARIABLE_Info_0_40,
  MR_Word * STATE_VARIABLE_Info_41)
{
  {
    MR_bool succeeded;
    MR_Word CompilationTarget_28;
    MR_Word MaybeCtorName_29;
    MR_Word ExplicitSecTag_34;
    MR_Word ExtraRvalsTypesWidths_39;
    MR_Word Var_60;

    ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_40, &CompilationTarget_28);
    switch (UsesBaseClass_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word CtorName_30;
          MR_Word ConsId_73;
          MR_Word ModuleName_74;
          MR_Word ConsSymName_67;
          MR_Integer ConsArity_68;
          MR_Word TypeCtor_69;
          MR_Word SymModuleName_70;

          succeeded = ((((MR_tag((MR_Word) ConsId_15)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_15, (MR_Integer) 0))) == (MR_Integer) 2)));
          if (succeeded)
          {
            ConsSymName_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_15, (MR_Integer) 1))));
            ConsArity_68 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_15, (MR_Integer) 2))));
            TypeCtor_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_15, (MR_Integer) 3))));
            succeeded = ((MR_tag((MR_Word) ConsSymName_67)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
              SymModuleName_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsSymName_67, (MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_String ConsName_72;

            ConsName_72 = ml_backend__ml_type_gen__ml_gen_du_ctor_name_4_f_0(CompilationTarget_28, TypeCtor_69, ConsSymName_67, ConsArity_68);
            {
              ConsId_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ConsId_73, 0) = ((MR_Box) (ConsName_72));
              MR_hl_field(MR_mktag(0), ConsId_73, 1) = ((MR_Box) (ConsArity_68));
            }
            ModuleName_74 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(SymModuleName_70);
          }
          else
          {
            MR_String ConsName_79;

            ConsName_79 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ConsId_15);
            {
              ConsId_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ConsId_73, 0) = ((MR_Box) (ConsName_79));
              MR_hl_field(MR_mktag(0), ConsId_73, 1) = ((MR_Box) ((MR_Integer) 0));
            }
            ModuleName_74 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_5[1]));
          }
          {
            CtorName_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CtorName_30, 0) = ((MR_Box) (ModuleName_74));
            MR_hl_field(MR_mktag(0), CtorName_30, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), CtorName_30, 2) = ((MR_Box) (ConsId_73));
          }
          {
            MaybeCtorName_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeCtorName_29, 0) = ((MR_Box) (CtorName_30));
          }
        }
        break;
      case (MR_Integer) 1:
        MaybeCtorName_29 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        break;
    }
    if ((MaybeStag_17 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      ExplicitSecTag_34 = (MR_Integer) 0;
      ExtraRvalsTypesWidths_39 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    else
    {
      MR_Integer Stag_31;
      MR_Word AddedBy_32;
      MR_Word UsesConstructors_33;
      MR_Tuple Var_42 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeStag_17, (MR_Integer) 0))));

      Stag_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 0))));
      AddedBy_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 1))));
      UsesConstructors_33 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(CompilationTarget_28);
      switch (UsesConstructors_33) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word StagRval0_35;
            MR_Word StagRval_37;
            MR_Word Var_47;
            MR_Word Var_51;
            MR_Word Var_52;

            {
              Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[13]));
              MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_construct_compound_14_p_0_1));
              MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (AddedBy_32));
              MR_hl_field(MR_mktag(0), Var_47, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            mercury__require__expect_3_p_0(Var_47, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct_compound\'/14", (MR_String) "AddedBy != sectag_added_by_unify");
            ExplicitSecTag_34 = (MR_Integer) 1;
            {
              Var_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_51, 0) = ((MR_Box) (Stag_31));
            }
            {
              StagRval0_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), StagRval0_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), StagRval0_35, 1) = ((MR_Box) (Var_51));
            }
            {
              StagRval_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), StagRval_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), StagRval_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
              MR_hl_field(MR_mktag(3), StagRval_37, 2) = ((MR_Box) (StagRval0_35));
            }
            {
              Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (StagRval_37));
              MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
              MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_1[9])));
              MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              ExtraRvalsTypesWidths_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ExtraRvalsTypesWidths_39, 0) = ((MR_Box) (Var_52));
              MR_hl_field(MR_mktag(1), ExtraRvalsTypesWidths_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_43;

            {
              Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[13]));
              MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_construct_compound_14_p_0_2));
              MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (AddedBy_32));
              MR_hl_field(MR_mktag(0), Var_43, 4) = ((MR_Box) ((MR_Integer) 1));
            }
            mercury__require__expect_3_p_0(Var_43, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct_compound\'/14", (MR_String) "AddedBy != sectag_added_by_constructor");
            ExplicitSecTag_34 = (MR_Integer) 0;
            ExtraRvalsTypesWidths_39 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
          break;
      }
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (ConsId_15));
    }
    ml_backend__ml_unify_gen__ml_gen_new_object_15_p_0(Var_60, MaybeCtorName_29, Ptag_16, ExplicitSecTag_34, Var_19, ExtraRvalsTypesWidths_39, ArgVars_20, ArgModes_21, TakeAddr_22, HowToConstruct_23, Context_24, Defns_25, Stmts_26, STATE_VARIABLE_Info_0_40, STATE_VARIABLE_Info_41);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_15_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object__569__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_15_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object__557__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_15_p_0(
  MR_Word MaybeConsId_16,
  MR_Word MaybeCtorName_17,
  MR_Integer Ptag_18,
  MR_Word ExplicitSecTag_19,
  MR_Word Var_20,
  MR_Word ExtraRvalsTypesWidths_21,
  MR_Word ArgVars_22,
  MR_Word ArgModes_23,
  MR_Word TakeAddr_24,
  MR_Word HowToConstruct_25,
  MR_Word Context_26,
  MR_Word * Defns_27,
  MR_Word * Stmts_28,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36)
{
  {
    MR_bool succeeded;
    MR_Word ConsIdOrClosure_31;

    if ((MaybeConsId_16 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer NumExtras_32;
      MR_Word Var_37;

      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[9]));
        MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_15_p_0_1));
        MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (ExplicitSecTag_19));
        MR_hl_field(MR_mktag(0), Var_37, 4) = ((MR_Box) ((MR_Integer) 0));
      }
      mercury__require__expect_3_p_0(Var_37, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_new_object\'/15", (MR_String) "sectag on closure");
      mercury__list__length_2_p_0((MR_Word) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_mlds_rval_type_and_width_0), ExtraRvalsTypesWidths_21, &NumExtras_32);
      {
        ConsIdOrClosure_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ConsIdOrClosure_31, 0) = ((MR_Box) (NumExtras_32));
      }
    }
    else
    {
      MR_Word ConsId_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeConsId_16, (MR_Integer) 0))));

      {
        ConsIdOrClosure_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ConsIdOrClosure_31, 0) = ((MR_Box) (ConsId_30));
      }
    }
    switch (MR_tag((MR_Word) HowToConstruct_25)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HowToConstruct_25)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_44;

              {
                Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[12]));
                MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_15_p_0_2));
                MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (TakeAddr_24));
                MR_hl_field(MR_mktag(0), Var_44, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_44, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_new_object\'/15", (MR_String) "cannot take address of static object\'s field");
              ml_backend__ml_unify_gen__ml_gen_new_object_statically_10_p_0(ConsIdOrClosure_31, MaybeCtorName_17, Ptag_18, Var_20, ExtraRvalsTypesWidths_21, ArgVars_22, Context_26, Stmts_28, STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36);
              *Defns_27 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
            break;
          case (MR_Integer) 1:
            {
              ml_backend__ml_unify_gen__ml_gen_new_object_dynamically_13_p_0(ConsIdOrClosure_31, MaybeCtorName_17, Ptag_18, ExplicitSecTag_19, Var_20, ExtraRvalsTypesWidths_21, ArgVars_22, ArgModes_23, TakeAddr_24, Context_26, Stmts_28, STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36);
              *Defns_27 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CellToReuse_33 = (MR_Word) (MR_body((MR_Word) (HowToConstruct_25), (MR_Integer) 1));

          ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_15_p_0(ConsIdOrClosure_31, MaybeCtorName_17, Ptag_18, ExplicitSecTag_19, Var_20, ExtraRvalsTypesWidths_21, ArgVars_22, ArgModes_23, TakeAddr_24, CellToReuse_33, Context_26, Defns_27, Stmts_28, STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36);
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_new_object\'/15", (MR_String) "construct_in_region NYI");
            return;
          }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__772__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_LambdaHeadVar__2_79;

    ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__753__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_79);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_79));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_15_p_0(
  MR_Word ConsIdOrClosure_16,
  MR_Word MaybeCtorName_17,
  MR_Integer Ptag_18,
  MR_Word ExplicitSecTag_19,
  MR_Word Var_20,
  MR_Word ExtraRvalsTypesWidths_21,
  MR_Word ArgVars_22,
  MR_Word ArgModes_23,
  MR_Word TakeAddr_24,
  MR_Word CellToReuse_25,
  MR_Word Context_26,
  MR_Word * Defns_27,
  MR_Word * Stmts_28,
  MR_Word STATE_VARIABLE_Info_0_73,
  MR_Word * STATE_VARIABLE_Info_74)
{
  {
    MR_bool succeeded;
    MR_Word ReuseVar_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellToReuse_25, (MR_Integer) 0))));
    MR_Word ReuseConsIds_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellToReuse_25, (MR_Integer) 1))));
    MR_Word ConsId_33;
    MR_Word ReusePrimaryTags0_40;
    MR_Word ReusePrimaryTags_41;
    MR_Word VarType_42;
    MR_Word ConsTag_43;
    MR_Integer PrimaryTag_44;
    MR_Word InitOffSet_45;
    MR_Integer ArgNum_46;
    MR_Word ArgVarRepns_47;
    MR_Word ReuseVarLval_48;
    MR_Word DifferentTags_50;
    MR_Word ReuseVarRval_51;
    MR_Word VarLval_56;
    MR_Word CastReuseVarRval_57;
    MR_Word MLDS_VarType_58;
    MR_Word HeapTestStmt_59;
    MR_Word MaybePtag_60;
    MR_Word ExtraRvalStmts_61;
    MR_Word FieldGen_62;
    MR_Word TakeAddrInfos_63;
    MR_Word FieldDefns_64;
    MR_Word FieldStmts_65;
    MR_Word TakeAddrStmts_66;
    MR_Word ThenStmts_67;
    MR_Word ThenStmt_68;
    MR_Word DynamicDefns_69;
    MR_Word DynamicStmts_70;
    MR_Word ElseStmt_71;
    MR_Word IfStmt_72;
    MR_Word Var_77;
    MR_Word Var_80;
    MR_Word Var_91;
    MR_Word STATE_VARIABLE_Info_93_93;
    MR_Word STATE_VARIABLE_Info_94_94;
    MR_Word Var_95;
    MR_Word Var_98;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_105;

    if (((MR_tag((MR_Word) ConsIdOrClosure_16)) == (MR_mktag((MR_Integer) 1))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_new_object_reuse_cell\'/15", (MR_String) "attempt to reuse closure");
        return;
      }
    }
    else
      ConsId_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsIdOrClosure_16, (MR_Integer) 0))));
    {
      Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_15_p_0_1));
      MR_hl_field(MR_mktag(0), Var_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_77, 3) = ((MR_Box) (STATE_VARIABLE_Info_0_73));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_77, ReuseConsIds_31, &ReusePrimaryTags0_40);
    mercury__list__remove_dups_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ReusePrimaryTags0_40, &ReusePrimaryTags_41);
    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_73, Var_20, &VarType_42);
    ml_backend__ml_unify_gen__ml_cons_id_to_tag_3_p_0(STATE_VARIABLE_Info_0_73, ConsId_33, &ConsTag_43);
    ml_backend__ml_unify_gen__ml_tag_initial_offset_and_argnum_4_p_0(ConsTag_43, &PrimaryTag_44, &InitOffSet_45, &ArgNum_46);
    ml_backend__ml_unify_gen__ml_field_names_and_types_6_p_0(STATE_VARIABLE_Info_0_73, VarType_42, ConsId_33, InitOffSet_45, ArgVars_22, &ArgVarRepns_47);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_73, ReuseVar_30, &ReuseVarLval_48);
    {
      Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_15_p_0_2));
      MR_hl_field(MR_mktag(0), Var_80, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_80, 3) = ((MR_Box) (PrimaryTag_44));
    }
    mercury__list__filter_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_80, ReusePrimaryTags_41, &DifferentTags_50);
    if ((DifferentTags_50 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ReuseVarRval_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), ReuseVarRval_51, 0) = ((MR_Box) (ReuseVarLval_48));
      }
    else
    {
      MR_Word Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DifferentTags_50, (MR_Integer) 1))));
      MR_Integer Var_115 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), DifferentTags_50, (MR_Integer) 0))));

      if ((Var_114 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word Var_87;
        MR_Word Var_89;
        MR_Word Var_90;

        {
          Var_89 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_89, 0) = ((MR_Box) (ReuseVarLval_48));
        }
        Var_90 = ml_backend__ml_unify_gen__ml_gen_mktag_1_f_0(Var_115);
        {
          Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
          MR_hl_field(MR_mktag(3), Var_87, 2) = ((MR_Box) (Var_89));
          MR_hl_field(MR_mktag(3), Var_87, 3) = ((MR_Box) (Var_90));
        }
        {
          ReuseVarRval_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ReuseVarRval_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ReuseVarRval_51, 1) = ((MR_Box) (PrimaryTag_44));
          MR_hl_field(MR_mktag(3), ReuseVarRval_51, 2) = ((MR_Box) (Var_87));
        }
      }
      else
      {
        MR_Word Var_83;
        MR_Word Var_85;

        {
          Var_85 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_85, 0) = ((MR_Box) (ReuseVarLval_48));
        }
        {
          Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(3), Var_83, 2) = ((MR_Box) (Var_85));
        }
        {
          ReuseVarRval_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ReuseVarRval_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ReuseVarRval_51, 1) = ((MR_Box) (PrimaryTag_44));
          MR_hl_field(MR_mktag(3), ReuseVarRval_51, 2) = ((MR_Box) (Var_83));
        }
      }
    }
    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_73, Var_20, &VarLval_56);
    ml_backend__ml_code_util__ml_gen_type_3_p_0(STATE_VARIABLE_Info_0_73, VarType_42, &MLDS_VarType_58);
    {
      CastReuseVarRval_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CastReuseVarRval_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), CastReuseVarRval_57, 1) = ((MR_Box) (MLDS_VarType_58));
      MR_hl_field(MR_mktag(3), CastReuseVarRval_57, 2) = ((MR_Box) (ReuseVarRval_51));
    }
    {
      Var_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_91, 1) = ((MR_Box) (VarLval_56));
      MR_hl_field(MR_mktag(3), Var_91, 2) = ((MR_Box) (CastReuseVarRval_57));
    }
    {
      HeapTestStmt_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeapTestStmt_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), HeapTestStmt_59, 1) = ((MR_Box) (Var_91));
      MR_hl_field(MR_mktag(3), HeapTestStmt_59, 2) = ((MR_Box) (Context_26));
    }
    {
      MaybePtag_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePtag_60, 0) = ((MR_Box) (Ptag_18));
    }
    ml_backend__ml_unify_gen__ml_gen_extra_arg_assigns_9_p_0(VarLval_56, MLDS_VarType_58, MaybePtag_60, (MR_Integer) 0, ExtraRvalsTypesWidths_21, Context_26, &ExtraRvalStmts_61, STATE_VARIABLE_Info_0_73, &STATE_VARIABLE_Info_93_93);
    ml_backend__ml_unify_gen__decide_field_gen_6_p_0(STATE_VARIABLE_Info_93_93, VarLval_56, VarType_42, ConsId_33, ConsTag_43, &FieldGen_62);
    ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_12_p_1(FieldGen_62, ArgVarRepns_47, ArgModes_23, InitOffSet_45, ArgNum_46, Context_26, TakeAddr_24, &TakeAddrInfos_63, &FieldDefns_64, &FieldStmts_65, STATE_VARIABLE_Info_93_93, &STATE_VARIABLE_Info_94_94);
    ml_backend__ml_unify_gen__ml_gen_field_take_address_assigns_7_p_0(TakeAddrInfos_63, VarLval_56, MLDS_VarType_58, MaybePtag_60, Context_26, STATE_VARIABLE_Info_94_94, &TakeAddrStmts_66);
    Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), FieldStmts_65, TakeAddrStmts_66);
    ThenStmts_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ExtraRvalStmts_61, Var_95);
    {
      ThenStmt_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ThenStmt_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ThenStmt_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ThenStmt_68, 2) = ((MR_Box) (ThenStmts_67));
      MR_hl_field(MR_mktag(0), ThenStmt_68, 3) = ((MR_Box) (Context_26));
    }
    {
      Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (ConsId_33));
    }
    ml_backend__ml_unify_gen__ml_gen_new_object_15_p_0(Var_98, MaybeCtorName_17, Ptag_18, ExplicitSecTag_19, Var_20, ExtraRvalsTypesWidths_21, ArgVars_22, ArgModes_23, TakeAddr_24, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))), Context_26, &DynamicDefns_69, &DynamicStmts_70, STATE_VARIABLE_Info_94_94, STATE_VARIABLE_Info_74);
    *Defns_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), FieldDefns_64, DynamicDefns_69);
    {
      ElseStmt_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ElseStmt_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ElseStmt_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ElseStmt_71, 2) = ((MR_Box) (DynamicStmts_70));
      MR_hl_field(MR_mktag(0), ElseStmt_71, 3) = ((MR_Box) (Context_26));
    }
    {
      Var_103 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_103, 0) = ((MR_Box) (VarLval_56));
    }
    {
      Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (ElseStmt_71));
    }
    {
      IfStmt_72 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), IfStmt_72, 0) = ((MR_Box) (Var_103));
      MR_hl_field(MR_mktag(2), IfStmt_72, 1) = ((MR_Box) (ThenStmt_68));
      MR_hl_field(MR_mktag(2), IfStmt_72, 2) = ((MR_Box) (Var_104));
      MR_hl_field(MR_mktag(2), IfStmt_72, 3) = ((MR_Box) (Context_26));
    }
    {
      Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (IfStmt_72));
      MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_28 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeapTestStmt_59));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_105));
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
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_12_p_1_2(
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
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_12_p_1_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__1605__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_12_p_1(
  MR_Word FieldGen_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word CurOffset_4,
  MR_Integer CurArgNum_5,
  MR_Word Context_6,
  MR_Word TakeAddr_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word * HeadVar__10_10,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__3_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word Var_21;

        *HeadVar__8_8 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        *HeadVar__9_9 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        *HeadVar__10_10 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        {
          Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[12]));
          MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_12_p_1_1));
          MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (TakeAddr_7));
          MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        mercury__require__expect_3_p_0(Var_21, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_args\'/12", (MR_String) "TakeAddr != []");
        *STATE_VARIABLE_Info_12 = STATE_VARIABLE_Info_0_11;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_args\'/12", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_args\'/12", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word Mode_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word Modes_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgVar_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_116, (MR_Integer) 0))));
        MR_Word CtorArgRepn_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_116, (MR_Integer) 1))));
        MR_Word NextOffset_70;
        MR_Integer NextArgNum_71;
        MR_Word FieldPosWidth_72;
        MR_Word TailTakeAddr_73;
        MR_Integer Var_114;

        ml_backend__ml_unify_gen__ml_next_field_offset_4_p_0(CtorArgRepn_69, Var_115, CurOffset_4, &NextOffset_70);
        NextArgNum_71 = (MR_Integer) ((MR_Unsigned) CurArgNum_5 + (MR_Unsigned) (MR_Integer) 1);
        FieldPosWidth_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_69, (MR_Integer) 2))));
        succeeded = ((MR_tag((MR_Word) TakeAddr_7)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_114 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), TakeAddr_7, (MR_Integer) 0))));
          TailTakeAddr_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TakeAddr_7, (MR_Integer) 1))));
          succeeded = (CurArgNum_5 == Var_114);
        }
        if (succeeded)
        {
          MR_Word TakeAddrInfo_74;
          MR_Word TakeAddrInfosTail_75;
          MR_Word Var_97;

          {
            Var_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_97, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), Var_97, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_12_p_1_2));
            MR_hl_field(MR_mktag(0), Var_97, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_97, 3) = ((MR_Box) (FieldPosWidth_72));
          }
          mercury__require__expect_3_p_0(Var_97, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_args\'/12", (MR_String) "taking address of something other than a full word");
          ml_backend__ml_unify_gen__ml_gen_take_addr_of_arg_5_p_0(STATE_VARIABLE_Info_0_11, ArgVar_68, CtorArgRepn_69, CurOffset_4, &TakeAddrInfo_74);
          ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_12_p_1(FieldGen_1, Var_115, Modes_59, NextOffset_70, NextArgNum_71, Context_6, TailTakeAddr_73, &TakeAddrInfosTail_75, HeadVar__9_9, HeadVar__10_10, STATE_VARIABLE_Info_0_11, STATE_VARIABLE_Info_12);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__8_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TakeAddrInfo_74));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TakeAddrInfosTail_75));
          }
        }
        else
        {
          MR_Word FieldVia_84;

          succeeded = ((((MR_tag((MR_Word) FieldPosWidth_72)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldPosWidth_72, (MR_Integer) 0))) == (MR_Integer) 0)));
          if (succeeded)
          {
            FieldVia_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_1, (MR_Integer) 3))));
            succeeded = (FieldVia_84 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Word LeftOverArgVarRepns_85;
            MR_Word LeftOverModes_86;
            MR_Word LeftOverOffset_87;
            MR_Integer LeftOverArgNum_88;
            MR_Word HeadDefns_89;
            MR_Word HeadStmts_90;
            MR_Word TailDefns_91;
            MR_Word TailStmts_92;
            MR_Word STATE_VARIABLE_Info_101_101;

            ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_in_word_18_p_1(FieldGen_1, ArgVar_68, CtorArgRepn_69, Mode_58, Var_115, Modes_59, &LeftOverArgVarRepns_85, &LeftOverModes_86, CurOffset_4, &LeftOverOffset_87, CurArgNum_5, &LeftOverArgNum_88, Context_6, TakeAddr_7, &HeadDefns_89, &HeadStmts_90, STATE_VARIABLE_Info_0_11, &STATE_VARIABLE_Info_101_101);
            ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_12_p_1(FieldGen_1, LeftOverArgVarRepns_85, LeftOverModes_86, LeftOverOffset_87, LeftOverArgNum_88, Context_6, TakeAddr_7, HeadVar__8_8, &TailDefns_91, &TailStmts_92, STATE_VARIABLE_Info_101_101, STATE_VARIABLE_Info_12);
            *HeadVar__9_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), HeadDefns_89, TailDefns_91);
            *HeadVar__10_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_90, TailStmts_92);
          }
          else
          {
            MR_Word STATE_VARIABLE_Info_103_103;
            MR_Word HeadStmts_105;
            MR_Word TailStmts_106;
            MR_Word _PackedArgVars_93;

            ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_arg_11_p_0(FieldGen_1, ArgVar_68, CtorArgRepn_69, Mode_58, CurOffset_4, CurArgNum_5, Context_6, &_PackedArgVars_93, &HeadStmts_105, STATE_VARIABLE_Info_0_11, &STATE_VARIABLE_Info_103_103);
            ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_12_p_1(FieldGen_1, Var_115, Modes_59, NextOffset_70, NextArgNum_71, Context_6, TakeAddr_7, HeadVar__8_8, HeadVar__9_9, &TailStmts_106, STATE_VARIABLE_Info_103_103, STATE_VARIABLE_Info_12);
            *HeadVar__10_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_105, TailStmts_106);
          }
        }
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_take_addr_of_arg_5_p_0(
  MR_Word Info_6,
  MR_Word ArgVar_7,
  MR_Word CtorArgRepn_8,
  MR_Word CurOffset_9,
  MR_Word * TakeAddrInfo_10)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_11;
    MR_Word HighLevelData_12;
    MR_Word FieldType_13;
    MR_Word FieldPosWidth_14;
    MR_Word FieldWidth_15;
    MR_Word BoxedFieldType_16;
    MR_Word MLDS_FieldType_17;
    MR_Word MLDS_BoxedFieldType_18;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_6, &ModuleInfo_11);
    ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(Info_6, &HighLevelData_12);
    FieldType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_8, (MR_Integer) 1))));
    FieldPosWidth_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_8, (MR_Integer) 2))));
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
    ml_backend__ml_code_util__ml_gen_type_3_p_0(Info_6, FieldType_13, &MLDS_FieldType_17);
    ml_backend__ml_code_util__ml_gen_type_3_p_0(Info_6, BoxedFieldType_16, &MLDS_BoxedFieldType_18);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *TakeAddrInfo_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ArgVar_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (CurOffset_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MLDS_FieldType_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MLDS_BoxedFieldType_18));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_in_word_18_p_1_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word__1708__2_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_in_word_18_p_1(
  MR_Word FieldGen_19,
  MR_Word ArgVar_20,
  MR_Word CtorArgRepn_21,
  MR_Word Mode_22,
  MR_Word ArgVarRepns_23,
  MR_Word Modes_24,
  MR_Word * LeftOverArgVarRepns_25,
  MR_Word * LeftOverModes_26,
  MR_Word CurOffset_27,
  MR_Word * LeftOverOffset_28,
  MR_Integer CurArgNum_29,
  MR_Integer * LeftOverArgNum_30,
  MR_Word Context_31,
  MR_Word TakeAddr_32,
  MR_Word * Defns_33,
  MR_Word * Stmts_34,
  MR_Word STATE_VARIABLE_Info_0_70,
  MR_Word * STATE_VARIABLE_Info_71)
{
  {
    MR_bool succeeded;
    MR_Word HeadPackedArgVars_36;
    MR_Word HeadStmts_37;
    MR_Word AllPartialsRight0_38;
    MR_Word NextOffset_41;
    MR_Integer NextArgNum_42;
    MR_Word AllPartialsRight_43;
    MR_Word TailPackedArgVars_44;
    MR_Word TailStmts_45;
    MR_Word STATE_VARIABLE_Info_72_72;
    MR_Word STATE_VARIABLE_Info_74_74;

    ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_arg_11_p_0(FieldGen_19, ArgVar_20, CtorArgRepn_21, Mode_22, CurOffset_27, CurArgNum_29, Context_31, &HeadPackedArgVars_36, &HeadStmts_37, STATE_VARIABLE_Info_0_70, &STATE_VARIABLE_Info_72_72);
    if ((HeadPackedArgVars_36 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      AllPartialsRight0_38 = (MR_Integer) 0;
    else
      AllPartialsRight0_38 = (MR_Integer) 1;
    ml_backend__ml_unify_gen__ml_next_field_offset_4_p_0(CtorArgRepn_21, ArgVarRepns_23, CurOffset_27, &NextOffset_41);
    NextArgNum_42 = (MR_Integer) ((MR_Unsigned) CurArgNum_29 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_in_word_loop_17_p_1(FieldGen_19, ArgVarRepns_23, Modes_24, LeftOverArgVarRepns_25, LeftOverModes_26, NextOffset_41, LeftOverOffset_28, NextArgNum_42, LeftOverArgNum_30, Context_31, TakeAddr_32, AllPartialsRight0_38, &AllPartialsRight_43, &TailPackedArgVars_44, &TailStmts_45, STATE_VARIABLE_Info_72_72, &STATE_VARIABLE_Info_74_74);
    switch (AllPartialsRight_43) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word PackedArgVars_46;
          MR_Word WordCompVar_47;
          MR_Word WordVar_48;
          MR_Word UnsignedType_49;
          MR_Word WordVarDefn_50;
          MR_Word FieldPosWidth_51;
          MR_Integer CellOffsetInt_58;
          MR_Word FieldId_59;
          MR_Word MaybePtag_60;
          MR_Word AddrRval_61;
          MR_Word AddrType_62;
          MR_Word FieldLval_64;
          MR_Word CastFieldRval_65;
          MR_Word WordVarLval_66;
          MR_Word WordAssignStmt_67;
          MR_Word PackedArgsMap0_68;
          MR_Word PackedArgsMap_69;
          MR_Word STATE_VARIABLE_Info_75_75;
          MR_Word Var_84;
          MR_Word Var_85;
          MR_Word Var_87;
          MR_Word Var_88;
          MR_Word Var_89;
          MR_Word CellOffset_53;

          PackedArgVars_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0), HeadPackedArgVars_36, TailPackedArgVars_44);
          ml_backend__ml_gen_info__ml_gen_info_new_packed_args_var_3_p_0(&WordCompVar_47, STATE_VARIABLE_Info_74_74, &STATE_VARIABLE_Info_75_75);
          {
            WordVar_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), WordVar_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
            MR_hl_field(MR_mktag(3), WordVar_48, 1) = ((MR_Box) (WordCompVar_47));
          }
          UnsignedType_49 = ml_backend__ml_util__mlds_int_type_uint_0_f_0();
          {
            WordVarDefn_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), WordVarDefn_50, 0) = ((MR_Box) (WordVar_48));
            MR_hl_field(MR_mktag(0), WordVarDefn_50, 1) = ((MR_Box) (Context_31));
            MR_hl_field(MR_mktag(0), WordVarDefn_50, 2) = ((MR_Box) (UnsignedType_49));
            MR_hl_field(MR_mktag(0), WordVarDefn_50, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), WordVarDefn_50, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Defns_33 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (WordVarDefn_50));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          FieldPosWidth_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_21, (MR_Integer) 2))));
          succeeded = ((((MR_tag((MR_Word) FieldPosWidth_51)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldPosWidth_51, (MR_Integer) 0))) == (MR_Integer) 0)));
          if (succeeded)
          {
            CellOffset_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldPosWidth_51, (MR_Integer) 2))));
            {
              MR_Integer CurOffsetInt_57 = (MR_Integer) (CurOffset_27);
              MR_Word Var_79;

              CellOffsetInt_58 = (MR_Integer) (CellOffset_53);
              {
                Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[1]));
                MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_in_word_18_p_1_1));
                MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_79, 3) = ((MR_Box) (CurOffsetInt_57));
                MR_hl_field(MR_mktag(0), Var_79, 4) = ((MR_Box) (CellOffsetInt_58));
              }
              mercury__require__expect_3_p_0(Var_79, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_args_in_word\'/18", (MR_String) "CurOffset != CellOffset");
            }
          }
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_args_in_word\'/18", (MR_String) "no apw_partial_first");
              return;
            }
          }
          {
            Var_85 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_85, 0) = ((MR_Box) (CellOffsetInt_58));
          }
          {
            Var_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_84, 1) = ((MR_Box) (Var_85));
          }
          {
            FieldId_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FieldId_59, 0) = ((MR_Box) (Var_84));
          }
          MaybePtag_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_19, (MR_Integer) 0))));
          AddrRval_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_19, (MR_Integer) 1))));
          AddrType_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_19, (MR_Integer) 2))));
          {
            FieldLval_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FieldLval_64, 0) = ((MR_Box) (MaybePtag_60));
            MR_hl_field(MR_mktag(0), FieldLval_64, 1) = ((MR_Box) (AddrRval_61));
            MR_hl_field(MR_mktag(0), FieldLval_64, 2) = ((MR_Box) (AddrType_62));
            MR_hl_field(MR_mktag(0), FieldLval_64, 3) = ((MR_Box) (FieldId_59));
            MR_hl_field(MR_mktag(0), FieldLval_64, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
          }
          {
            Var_87 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_87, 0) = ((MR_Box) (FieldLval_64));
          }
          {
            CastFieldRval_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CastFieldRval_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), CastFieldRval_65, 1) = ((MR_Box) (UnsignedType_49));
            MR_hl_field(MR_mktag(3), CastFieldRval_65, 2) = ((MR_Box) (Var_87));
          }
          {
            WordVarLval_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), WordVarLval_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), WordVarLval_66, 1) = ((MR_Box) (WordVar_48));
            MR_hl_field(MR_mktag(3), WordVarLval_66, 2) = ((MR_Box) (UnsignedType_49));
          }
          WordAssignStmt_67 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(WordVarLval_66, CastFieldRval_65, Context_31);
          {
            Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (WordAssignStmt_67));
            MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (HeadStmts_37));
          }
          *Stmts_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_88, TailStmts_45);
          ml_backend__ml_gen_info__ml_gen_info_get_packed_args_map_2_p_0(STATE_VARIABLE_Info_75_75, &PackedArgsMap0_68);
          {
            Var_89 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_89, 0) = ((MR_Box) (WordVarLval_66));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[4]), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), ((MR_Box) (PackedArgVars_46)), ((MR_Box) (Var_89)), PackedArgsMap0_68, &PackedArgsMap_69);
          ml_backend__ml_gen_info__ml_gen_info_set_packed_args_map_3_p_0(PackedArgsMap_69, STATE_VARIABLE_Info_75_75, STATE_VARIABLE_Info_71);
        }
        break;
      case (MR_Integer) 0:
        {
          *Defns_33 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          *Stmts_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_37, TailStmts_45);
          *STATE_VARIABLE_Info_71 = STATE_VARIABLE_Info_74_74;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_in_word_loop_17_p_1_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word_loop__1784__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_in_word_loop_17_p_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word CurOffset_6,
  MR_Word * LeftOverOffset_7,
  MR_Integer CurArgNum_8,
  MR_Integer * LeftOverArgNum_9,
  MR_Word HeadVar__10_10,
  MR_Word HeadVar__11_11,
  MR_Word STATE_VARIABLE_AllPartialsRight_0_12,
  MR_Word * STATE_VARIABLE_AllPartialsRight_13,
  MR_Word * HeadVar__14_14,
  MR_Word * HeadVar__15_15,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__3_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *HeadVar__4_4 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        *HeadVar__5_5 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        *HeadVar__14_14 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        *HeadVar__15_15 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        *LeftOverOffset_7 = CurOffset_6;
        *LeftOverArgNum_9 = CurArgNum_8;
        *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_0_16;
        *STATE_VARIABLE_AllPartialsRight_13 = STATE_VARIABLE_AllPartialsRight_0_12;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_args_in_word_loop\'/17", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_167 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_168 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_args_in_word_loop\'/17", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word Mode_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word Modes_77 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgVar_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_168, (MR_Integer) 0))));
        MR_Word CtorArgRepn_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_168, (MR_Integer) 1))));
        MR_Word FieldPosWidth_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_91, (MR_Integer) 2))));

        switch (MR_tag((MR_Word) FieldPosWidth_92)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *HeadVar__4_4 = HeadVar__2_2;
              *HeadVar__5_5 = HeadVar__3_3;
              *LeftOverOffset_7 = CurOffset_6;
              *LeftOverArgNum_9 = CurArgNum_8;
              *HeadVar__14_14 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              *HeadVar__15_15 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              *STATE_VARIABLE_AllPartialsRight_13 = STATE_VARIABLE_AllPartialsRight_0_12;
              *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_0_16;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              *HeadVar__4_4 = HeadVar__2_2;
              *HeadVar__5_5 = HeadVar__3_3;
              *LeftOverOffset_7 = CurOffset_6;
              *LeftOverArgNum_9 = CurArgNum_8;
              *HeadVar__14_14 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              *HeadVar__15_15 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              *STATE_VARIABLE_AllPartialsRight_13 = STATE_VARIABLE_AllPartialsRight_0_12;
              *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_0_16;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldPosWidth_92, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *HeadVar__4_4 = HeadVar__2_2;
                  *HeadVar__5_5 = HeadVar__3_3;
                  *LeftOverOffset_7 = CurOffset_6;
                  *LeftOverArgNum_9 = CurArgNum_8;
                  *HeadVar__14_14 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  *HeadVar__15_15 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  *STATE_VARIABLE_AllPartialsRight_13 = STATE_VARIABLE_AllPartialsRight_0_12;
                  *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_0_16;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word HeadPackedArgVars_152;
                  MR_Word HeadStmts_153;
                  MR_Word NextOffset_155;
                  MR_Integer NextArgNum_156;
                  MR_Word TailPackedArgVars_157;
                  MR_Word TailStmts_158;
                  MR_Word STATE_VARIABLE_Info_129_159;
                  MR_Word STATE_VARIABLE_AllPartialsRight_130_160;
                  MR_Integer Var_145;

                  ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_arg_11_p_0(HeadVar__1_1, ArgVar_90, CtorArgRepn_91, Mode_76, CurOffset_6, CurArgNum_8, HeadVar__10_10, &HeadPackedArgVars_152, &HeadStmts_153, STATE_VARIABLE_Info_0_16, &STATE_VARIABLE_Info_129_159);
                  if ((HeadPackedArgVars_152 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    STATE_VARIABLE_AllPartialsRight_130_160 = (MR_Integer) 0;
                  else
                    STATE_VARIABLE_AllPartialsRight_130_160 = STATE_VARIABLE_AllPartialsRight_0_12;
                  succeeded = ((MR_tag((MR_Word) HeadVar__11_11)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_145 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__11_11, (MR_Integer) 0))));
                    succeeded = (CurArgNum_8 == Var_145);
                  }
                  if (succeeded)
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_args_in_word_loop\'/17", (MR_String) "taking address of something other than a full word");
                      return;
                    }
                  }
                  ml_backend__ml_unify_gen__ml_next_field_offset_4_p_0(CtorArgRepn_91, Var_167, CurOffset_6, &NextOffset_155);
                  NextArgNum_156 = (MR_Integer) ((MR_Unsigned) CurArgNum_8 + (MR_Unsigned) (MR_Integer) 1);
                  ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_in_word_loop_17_p_1(HeadVar__1_1, Var_167, Modes_77, HeadVar__4_4, HeadVar__5_5, NextOffset_155, LeftOverOffset_7, NextArgNum_156, LeftOverArgNum_9, HeadVar__10_10, HeadVar__11_11, STATE_VARIABLE_AllPartialsRight_130_160, STATE_VARIABLE_AllPartialsRight_13, &TailPackedArgVars_157, &TailStmts_158, STATE_VARIABLE_Info_129_159, STATE_VARIABLE_Info_17);
                  *HeadVar__14_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0), HeadPackedArgVars_152, TailPackedArgVars_157);
                  *HeadVar__15_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_153, TailStmts_158);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word HeadPackedArgVars_99;
                  MR_Word HeadStmts_100;
                  MR_Word NextOffset_106;
                  MR_Integer NextArgNum_107;
                  MR_Word TailPackedArgVars_108;
                  MR_Word TailStmts_109;
                  MR_Word Var_125;
                  MR_Word STATE_VARIABLE_Info_129_129;
                  MR_Integer Var_142;

                  ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_arg_11_p_0(HeadVar__1_1, ArgVar_90, CtorArgRepn_91, Mode_76, CurOffset_6, CurArgNum_8, HeadVar__10_10, &HeadPackedArgVars_99, &HeadStmts_100, STATE_VARIABLE_Info_0_16, &STATE_VARIABLE_Info_129_129);
                  {
                    Var_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_125, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[11]));
                    MR_hl_field(MR_mktag(0), Var_125, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_in_word_loop_17_p_1_1));
                    MR_hl_field(MR_mktag(0), Var_125, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_125, 3) = ((MR_Box) (HeadPackedArgVars_99));
                    MR_hl_field(MR_mktag(0), Var_125, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  mercury__require__expect_3_p_0(Var_125, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_args_in_word_loop\'/17", (MR_String) "HeadPackedArgVars != [] for apw_none_shifted");
                  succeeded = ((MR_tag((MR_Word) HeadVar__11_11)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_142 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__11_11, (MR_Integer) 0))));
                    succeeded = (CurArgNum_8 == Var_142);
                  }
                  if (succeeded)
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_args_in_word_loop\'/17", (MR_String) "taking address of something other than a full word");
                      return;
                    }
                  }
                  ml_backend__ml_unify_gen__ml_next_field_offset_4_p_0(CtorArgRepn_91, Var_167, CurOffset_6, &NextOffset_106);
                  NextArgNum_107 = (MR_Integer) ((MR_Unsigned) CurArgNum_8 + (MR_Unsigned) (MR_Integer) 1);
                  ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_in_word_loop_17_p_1(HeadVar__1_1, Var_167, Modes_77, HeadVar__4_4, HeadVar__5_5, NextOffset_106, LeftOverOffset_7, NextArgNum_107, LeftOverArgNum_9, HeadVar__10_10, HeadVar__11_11, STATE_VARIABLE_AllPartialsRight_0_12, STATE_VARIABLE_AllPartialsRight_13, &TailPackedArgVars_108, &TailStmts_109, STATE_VARIABLE_Info_129_129, STATE_VARIABLE_Info_17);
                  *HeadVar__14_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0), HeadPackedArgVars_99, TailPackedArgVars_108);
                  *HeadVar__15_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_100, TailStmts_109);
                }
                break;
            }
            break;
        }
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_next_field_offset_4_p_0(
  MR_Word CurArgRepn_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__4_4 = HeadVar__3_3;
  else
  {
    MR_Word NextArg_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word CurWidth_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CurArgRepn_1, (MR_Integer) 2))));
    MR_Word NextWidth_19;
    MR_Word Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NextArg_8, (MR_Integer) 1))));

    NextWidth_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_112, (MR_Integer) 2))));
    switch (MR_tag((MR_Word) CurWidth_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *HeadVar__4_4 = HeadVar__3_3;
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) NextWidth_19)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Int_33 = (MR_Integer) (HeadVar__3_3);
              MR_Integer Var_123 = (MR_Integer) ((MR_Unsigned) Int_33 + (MR_Unsigned) (MR_Integer) 1);

              *HeadVar__4_4 = (MR_Word) (Var_123);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Integer Int_33 = (MR_Integer) (HeadVar__3_3);
              MR_Integer Var_123 = (MR_Integer) ((MR_Unsigned) Int_33 + (MR_Unsigned) (MR_Integer) 1);

              *HeadVar__4_4 = (MR_Word) (Var_123);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), NextWidth_19, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer Int_33 = (MR_Integer) (HeadVar__3_3);
                  MR_Integer Var_123 = (MR_Integer) ((MR_Unsigned) Int_33 + (MR_Unsigned) (MR_Integer) 1);

                  *HeadVar__4_4 = (MR_Word) (Var_123);
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
        switch (MR_tag((MR_Word) NextWidth_19)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Var_119;
              MR_Integer Int_125 = (MR_Integer) (HeadVar__3_3);

              Var_119 = (MR_Integer) ((MR_Unsigned) Int_125 + (MR_Unsigned) (MR_Integer) 2);
              *HeadVar__4_4 = (MR_Word) (Var_119);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Integer Var_119;
              MR_Integer Int_125 = (MR_Integer) (HeadVar__3_3);

              Var_119 = (MR_Integer) ((MR_Unsigned) Int_125 + (MR_Unsigned) (MR_Integer) 2);
              *HeadVar__4_4 = (MR_Word) (Var_119);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), NextWidth_19, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer Var_119;
                  MR_Integer Int_125 = (MR_Integer) (HeadVar__3_3);

                  Var_119 = (MR_Integer) ((MR_Unsigned) Int_125 + (MR_Unsigned) (MR_Integer) 2);
                  *HeadVar__4_4 = (MR_Word) (Var_119);
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
            switch (MR_tag((MR_Word) NextWidth_19)) {
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
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), NextWidth_19, (MR_Integer) 0)))) {
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
            switch (MR_tag((MR_Word) NextWidth_19)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer Var_113;
                  MR_Integer Int_128 = (MR_Integer) (HeadVar__3_3);

                  Var_113 = (MR_Integer) ((MR_Unsigned) Int_128 + (MR_Unsigned) (MR_Integer) 1);
                  *HeadVar__4_4 = (MR_Word) (Var_113);
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  MR_Integer Var_113;
                  MR_Integer Int_128 = (MR_Integer) (HeadVar__3_3);

                  Var_113 = (MR_Integer) ((MR_Unsigned) Int_128 + (MR_Unsigned) (MR_Integer) 1);
                  *HeadVar__4_4 = (MR_Word) (Var_113);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), NextWidth_19, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Integer Var_113;
                      MR_Integer Int_128 = (MR_Integer) (HeadVar__3_3);

                      Var_113 = (MR_Integer) ((MR_Unsigned) Int_128 + (MR_Unsigned) (MR_Integer) 1);
                      *HeadVar__4_4 = (MR_Word) (Var_113);
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
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_arg_11_p_0(
  MR_Word FieldGen_12,
  MR_Word ArgVar_13,
  MR_Word CtorArgRepn_14,
  MR_Word Mode_15,
  MR_Word Offset_16,
  MR_Integer ArgNum_17,
  MR_Word Context_18,
  MR_Word * PackedArgVars_19,
  MR_Word * Stmts_20,
  MR_Word STATE_VARIABLE_Info_0_44,
  MR_Word * STATE_VARIABLE_Info_45)
{
  {
    MR_bool succeeded;
    MR_Word MaybePrimaryTag_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_12, (MR_Integer) 0))));
    MR_Word AddrRval_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_12, (MR_Integer) 1))));
    MR_Word AddrType_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_12, (MR_Integer) 2))));
    MR_Word FieldVia_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_12, (MR_Integer) 3))));
    MR_Word FieldId_27;
    MR_Word ModuleInfo_33;
    MR_Word HighLevelData_34;
    MR_Word FieldPosWidth_35;
    MR_Word FieldWidth_36;
    MR_Word FieldRawType_37;
    MR_Word FieldType_38;
    MR_Word MLDS_FieldType_39;
    MR_Word FieldLval_40;
    MR_Word ArgLval_41;
    MR_Word ArgType_42;
    MR_Word LeftFromToInsts_73;
    MR_Word RightFromToInsts_74;
    MR_Word LeftTopMode_75;
    MR_Word RightTopMode_76;
    MR_Word Var_77;

    if ((FieldVia_25 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer OffsetInt_26 = (MR_Integer) (Offset_16);
      MR_Word Var_47;
      MR_Word Var_48;

      {
        Var_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_48, 0) = ((MR_Box) (OffsetInt_26));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (Var_48));
      }
      {
        FieldId_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FieldId_27, 0) = ((MR_Box) (Var_47));
      }
    }
    else
    {
      MR_Word FieldQualifier_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldVia_25, (MR_Integer) 0))));
      MR_Word ClassPtrType_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldVia_25, (MR_Integer) 1))));
      MR_Word MaybeFieldName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_14, (MR_Integer) 0))));
      MR_Word FieldName_31;
      MR_Word QualifiedFieldName_32;

      FieldName_31 = ml_backend__ml_code_util__ml_gen_hld_field_name_2_f_0(MaybeFieldName_30, ArgNum_17);
      {
        QualifiedFieldName_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), QualifiedFieldName_32, 0) = ((MR_Box) (FieldQualifier_28));
        MR_hl_field(MR_mktag(0), QualifiedFieldName_32, 1) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), QualifiedFieldName_32, 2) = ((MR_Box) (FieldName_31));
      }
      {
        FieldId_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FieldId_27, 0) = ((MR_Box) (QualifiedFieldName_32));
        MR_hl_field(MR_mktag(1), FieldId_27, 1) = ((MR_Box) (ClassPtrType_29));
      }
    }
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_44, &ModuleInfo_33);
    ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_44, &HighLevelData_34);
    FieldPosWidth_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_14, (MR_Integer) 2))));
    FieldWidth_36 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(FieldPosWidth_35);
    FieldRawType_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_14, (MR_Integer) 1))));
    switch (HighLevelData_34) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          succeeded = (FieldWidth_36 == (MR_Integer) 3);
          succeeded = !(succeeded);
        }
        break;
      case (MR_Integer) 1:
        succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ModuleInfo_33, FieldRawType_37, FieldWidth_36);
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
        FieldType_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FieldType_38, 0) = ((MR_Box) (TypeVar_64));
        MR_hl_field(MR_mktag(0), FieldType_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    else
      FieldType_38 = FieldRawType_37;
    ml_backend__ml_code_util__ml_gen_type_3_p_0(STATE_VARIABLE_Info_0_44, FieldType_38, &MLDS_FieldType_39);
    {
      FieldLval_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FieldLval_40, 0) = ((MR_Box) (MaybePrimaryTag_22));
      MR_hl_field(MR_mktag(0), FieldLval_40, 1) = ((MR_Box) (AddrRval_23));
      MR_hl_field(MR_mktag(0), FieldLval_40, 2) = ((MR_Box) (AddrType_24));
      MR_hl_field(MR_mktag(0), FieldLval_40, 3) = ((MR_Box) (FieldId_27));
      MR_hl_field(MR_mktag(0), FieldLval_40, 4) = ((MR_Box) (MLDS_FieldType_39));
    }
    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_44, ArgVar_13, &ArgLval_41);
    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_44, ArgVar_13, &ArgType_42);
    LeftFromToInsts_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_15, (MR_Integer) 0))));
    RightFromToInsts_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_15, (MR_Integer) 1))));
    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_33, LeftFromToInsts_73, ArgType_42, &LeftTopMode_75);
    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_33, RightFromToInsts_74, ArgType_42, &RightTopMode_76);
    Var_77 = check_hlds__type_util__is_either_type_a_dummy_3_f_0(ModuleInfo_33, ArgType_42, FieldType_38);
    succeeded = (Var_77 == (MR_Integer) 0);
    if (succeeded)
    {
      *PackedArgVars_19 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
      *Stmts_20 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    else
    {
      MR_Word Dir_86;

      switch (LeftTopMode_75) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (RightTopMode_76) {
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
              Dir_86 = (MR_Integer) 1;
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
          switch (RightTopMode_76) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Dir_86 = (MR_Integer) 0;
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
          switch (RightTopMode_76) {
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
              Dir_86 = (MR_Integer) 2;
              break;
          }
          break;
      }
      switch (Dir_86) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          {
            *PackedArgVars_19 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            *Stmts_20 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
          break;
        case (MR_Integer) 0:
          {
            *PackedArgVars_19 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_arg_unify_assign_left_9_p_0(ModuleInfo_33, HighLevelData_34, FieldLval_40, FieldType_38, FieldPosWidth_35, ArgLval_41, ArgType_42, Context_18, Stmts_20);
          }
          break;
        case (MR_Integer) 1:
          ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_arg_unify_assign_right_10_p_0(ModuleInfo_33, FieldLval_40, FieldType_38, FieldPosWidth_35, ArgVar_13, ArgLval_41, ArgType_42, Context_18, PackedArgVars_19, Stmts_20);
          break;
      }
    }
    *STATE_VARIABLE_Info_45 = STATE_VARIABLE_Info_0_44;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_arg_unify_assign_left_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word HighLevelData_11,
  MR_Word FieldLval_12,
  MR_Word FieldType_13,
  MR_Word FieldPosWidth_14,
  MR_Word ArgLval_15,
  MR_Word ArgType_16,
  MR_Word Context_17,
  MR_Word * Stmts_18)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) FieldPosWidth_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Stmts_18 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_61;
          MR_Word ArgRval_76;
          MR_Word Stmt_77;

          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_61, 0) = ((MR_Box) (ArgLval_15));
          }
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, ArgType_16, FieldType_13, (MR_Integer) 0, Var_61, &ArgRval_76);
          Stmt_77 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLval_12, ArgRval_76, Context_17);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Stmts_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_77));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgRval_22;
          MR_Word Var_64;
          MR_Word FieldLvalA_23;
          MR_Word FieldLvalB_24;

          {
            Var_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_64, 0) = ((MR_Box) (ArgLval_15));
          }
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, ArgType_16, FieldType_13, (MR_Integer) 0, Var_64, &ArgRval_22);
          succeeded = ml_backend__ml_unify_gen__ml_field_offset_pair_3_p_0(FieldLval_12, &FieldLvalA_23, &FieldLvalB_24);
          if (succeeded)
          {
            MR_Word FloatWordA_25;
            MR_Word FloatWordB_26;
            MR_Word IntFieldType_27;
            MR_Word ArgRvalA_28;
            MR_Word ArgRvalB_29;
            MR_Word StmtA_30;
            MR_Word StmtB_31;
            MR_Word Var_67;
            MR_Word Var_69;
            MR_Word Var_71;
            MR_Word Var_73;

            {
              FloatWordA_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), FloatWordA_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), FloatWordA_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
              MR_hl_field(MR_mktag(3), FloatWordA_25, 2) = ((MR_Box) (ArgRval_22));
            }
            {
              FloatWordB_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), FloatWordB_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), FloatWordB_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14))));
              MR_hl_field(MR_mktag(3), FloatWordB_26, 2) = ((MR_Box) (ArgRval_22));
            }
            Var_67 = parse_tree__builtin_lib_types__int_type_0_f_0();
            ml_backend__ml_unify_gen__ml_type_as_field_5_p_0(ModuleInfo_10, HighLevelData_11, Var_67, (MR_Integer) 2, &IntFieldType_27);
            Var_69 = parse_tree__builtin_lib_types__int_type_0_f_0();
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, Var_69, IntFieldType_27, (MR_Integer) 0, FloatWordA_25, &ArgRvalA_28);
            Var_71 = parse_tree__builtin_lib_types__int_type_0_f_0();
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, Var_71, IntFieldType_27, (MR_Integer) 0, FloatWordB_26, &ArgRvalB_29);
            StmtA_30 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLvalA_23, ArgRvalA_28, Context_17);
            StmtB_31 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLvalB_24, ArgRvalB_29, Context_17);
            {
              Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (StmtB_31));
              MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_18 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (StmtA_30));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_73));
            }
          }
          else
          {
            MR_Word Stmt_32;

            Stmt_32 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLval_12, ArgRval_22, Context_17);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_18 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_32));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldPosWidth_14, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Mask_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldPosWidth_14, (MR_Integer) 4))));
              MR_Word Fill_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldPosWidth_14, (MR_Integer) 5))));
              MR_Integer MaskInt_45;
              MR_Word CastFieldRVal_46;
              MR_Word OldFieldBits_47;
              MR_Word NewFieldBits_48;
              MR_Word UpdatedFieldBits_49;
              MR_Word Var_53;
              MR_Word Var_54;
              MR_Integer Var_55;
              MR_Integer Var_56;
              MR_Word Var_58;
              MR_Word ArgRval_78;
              MR_Word Stmt_79;

              {
                ArgRval_78 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ArgRval_78, 0) = ((MR_Box) (ArgLval_15));
              }
              MaskInt_45 = (MR_Integer) (Mask_38);
              Var_53 = ml_backend__ml_util__mlds_int_type_uint_0_f_0();
              {
                Var_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_54, 0) = ((MR_Box) (FieldLval_12));
              }
              {
                CastFieldRVal_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CastFieldRVal_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), CastFieldRVal_46, 1) = ((MR_Box) (Var_53));
                MR_hl_field(MR_mktag(3), CastFieldRVal_46, 2) = ((MR_Box) (Var_54));
              }
              Var_56 = mercury__int__f_60_60_2_f_0(MaskInt_45, (MR_Integer) 0);
              Var_55 = ~(Var_56);
              OldFieldBits_47 = ml_backend__ml_unify_gen__ml_bitwise_and_2_f_0(CastFieldRVal_46, Var_55);
              NewFieldBits_48 = ml_backend__ml_unify_gen__ml_lshift_3_f_0(ArgRval_78, (MR_Word) (((MR_Box) ((MR_Integer) 0))), Fill_39);
              Var_58 = ml_backend__ml_unify_gen__ml_bitwise_or_2_f_0(OldFieldBits_47, NewFieldBits_48);
              {
                UpdatedFieldBits_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), UpdatedFieldBits_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), UpdatedFieldBits_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
                MR_hl_field(MR_mktag(3), UpdatedFieldBits_49, 2) = ((MR_Box) (Var_58));
              }
              Stmt_79 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLval_12, UpdatedFieldBits_49, Context_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_79));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Mask_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldPosWidth_14, (MR_Integer) 5))));
              MR_Word Fill_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldPosWidth_14, (MR_Integer) 6))));
              MR_Word Shift_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldPosWidth_14, (MR_Integer) 3))));
              MR_Integer ShiftInt_83;
              MR_Integer MaskInt_84;
              MR_Word CastFieldRVal_85;
              MR_Word OldFieldBits_86;
              MR_Word NewFieldBits_87;
              MR_Word UpdatedFieldBits_88;
              MR_Word Var_89;
              MR_Word Var_90;
              MR_Integer Var_91;
              MR_Integer Var_92;
              MR_Word Var_94;
              MR_Word ArgRval_96;
              MR_Word Stmt_97;

              {
                ArgRval_96 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ArgRval_96, 0) = ((MR_Box) (ArgLval_15));
              }
              ShiftInt_83 = (MR_Integer) (Shift_82);
              MaskInt_84 = (MR_Integer) (Mask_80);
              Var_89 = ml_backend__ml_util__mlds_int_type_uint_0_f_0();
              {
                Var_90 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_90, 0) = ((MR_Box) (FieldLval_12));
              }
              {
                CastFieldRVal_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CastFieldRVal_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), CastFieldRVal_85, 1) = ((MR_Box) (Var_89));
                MR_hl_field(MR_mktag(3), CastFieldRVal_85, 2) = ((MR_Box) (Var_90));
              }
              Var_92 = mercury__int__f_60_60_2_f_0(MaskInt_84, ShiftInt_83);
              Var_91 = ~(Var_92);
              OldFieldBits_86 = ml_backend__ml_unify_gen__ml_bitwise_and_2_f_0(CastFieldRVal_85, Var_91);
              NewFieldBits_87 = ml_backend__ml_unify_gen__ml_lshift_3_f_0(ArgRval_96, Shift_82, Fill_81);
              Var_94 = ml_backend__ml_unify_gen__ml_bitwise_or_2_f_0(OldFieldBits_86, NewFieldBits_87);
              {
                UpdatedFieldBits_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), UpdatedFieldBits_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), UpdatedFieldBits_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
                MR_hl_field(MR_mktag(3), UpdatedFieldBits_88, 2) = ((MR_Box) (Var_94));
              }
              Stmt_97 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLval_12, UpdatedFieldBits_88, Context_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_97));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 2:
            *Stmts_18 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
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
    Var_19 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[11]));
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
      {
      }
    }
    if (succeeded)
      ShiftedRval_8 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[12]));
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
            MR_hl_field(MR_mktag(3), ShiftedRval_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[10])));
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
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_arg_unify_assign_right_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word FieldLval_12,
  MR_Word FieldType_13,
  MR_Word FieldPosWidth_14,
  MR_Word ArgVar_15,
  MR_Word ArgLval_16,
  MR_Word ArgType_17,
  MR_Word Context_18,
  MR_Word * PackedArgVars_19,
  MR_Word * Stmts_20)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) FieldPosWidth_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *PackedArgVars_19 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          *Stmts_20 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_52;
          MR_Word FieldRval_60;
          MR_Word Stmt_61;

          *PackedArgVars_19 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          {
            Var_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_52, 0) = ((MR_Box) (FieldLval_12));
          }
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_11, FieldType_13, ArgType_17, (MR_Integer) 0, Var_52, &FieldRval_60);
          Stmt_61 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_16, FieldRval_60, Context_18);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Stmts_20 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_61));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word FieldRval_26;
          MR_Word Stmt_27;
          MR_Word FieldLvalA_24;
          MR_Word FieldLvalB_25;

          *PackedArgVars_19 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          succeeded = ml_backend__ml_unify_gen__ml_field_offset_pair_3_p_0(FieldLval_12, &FieldLvalA_24, &FieldLvalB_25);
          if (succeeded)
          {
            MR_Word Var_55;
            MR_Word Var_56;

            {
              Var_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_55, 0) = ((MR_Box) (FieldLvalA_24));
            }
            {
              Var_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_56, 0) = ((MR_Box) (FieldLvalB_25));
            }
            {
              FieldRval_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), FieldRval_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(3), FieldRval_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22))));
              MR_hl_field(MR_mktag(3), FieldRval_26, 2) = ((MR_Box) (Var_55));
              MR_hl_field(MR_mktag(3), FieldRval_26, 3) = ((MR_Box) (Var_56));
            }
          }
          else
          {
            MR_Word Var_58;

            {
              Var_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_58, 0) = ((MR_Box) (FieldLval_12));
            }
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_11, FieldType_13, ArgType_17, (MR_Integer) 0, Var_58, &FieldRval_26);
          }
          Stmt_27 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_16, FieldRval_26, Context_18);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Stmts_20 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_27));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldPosWidth_14, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word NumBits_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldPosWidth_14, (MR_Integer) 3))));
              MR_Word Mask_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldPosWidth_14, (MR_Integer) 4))));
              MR_Word Fill_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldPosWidth_14, (MR_Integer) 5))));
              MR_Word Shift_35 = (MR_Word) (((MR_Box) ((MR_Integer) 0)));
              MR_Word PackedArgVar_38;
              MR_Word UnsignedMLDSType_39;
              MR_Integer MaskInt_40;
              MR_Word MaskedRval_41;
              MR_Word ToAssignRval_42;
              MR_Word Var_48;
              MR_Word Var_49;
              MR_Word FieldRval_62;
              MR_Word Stmt_63;
              MR_Word Var_96;
              MR_Word Var_97;

              {
                PackedArgVar_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), PackedArgVar_38, 0) = ((MR_Box) (ArgVar_15));
                MR_hl_field(MR_mktag(0), PackedArgVar_38, 1) = ((MR_Box) (Shift_35));
                MR_hl_field(MR_mktag(0), PackedArgVar_38, 2) = ((MR_Box) (NumBits_32));
                MR_hl_field(MR_mktag(0), PackedArgVar_38, 3) = ((MR_Box) (Fill_34));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *PackedArgVars_19 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PackedArgVar_38));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              UnsignedMLDSType_39 = ml_backend__ml_util__mlds_int_type_uint_0_f_0();
              {
                Var_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_48, 0) = ((MR_Box) (FieldLval_12));
              }
              {
                FieldRval_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), FieldRval_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), FieldRval_62, 1) = ((MR_Box) (UnsignedMLDSType_39));
                MR_hl_field(MR_mktag(3), FieldRval_62, 2) = ((MR_Box) (Var_48));
              }
              MaskInt_40 = (MR_Integer) (Mask_33);
              Var_49 = ml_backend__ml_unify_gen__ml_rshift_2_f_0(FieldRval_62, Shift_35);
              {
                Var_97 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_97, 0) = ((MR_Box) (MaskInt_40));
              }
              {
                Var_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_96, 1) = ((MR_Box) (Var_97));
              }
              {
                MaskedRval_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), MaskedRval_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), MaskedRval_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[17])));
                MR_hl_field(MR_mktag(3), MaskedRval_41, 2) = ((MR_Box) (Var_49));
                MR_hl_field(MR_mktag(3), MaskedRval_41, 3) = ((MR_Box) (Var_96));
              }
              switch (Fill_34) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ToAssignRval_42 = MaskedRval_41;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word CastMLDSType_43;

                    CastMLDSType_43 = ml_backend__ml_util__mlds_int_type_int16_0_f_0();
                    {
                      ToAssignRval_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ToAssignRval_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), ToAssignRval_42, 1) = ((MR_Box) (CastMLDSType_43));
                      MR_hl_field(MR_mktag(3), ToAssignRval_42, 2) = ((MR_Box) (MaskedRval_41));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word CastMLDSType_64;

                    CastMLDSType_64 = ml_backend__ml_util__mlds_int_type_int32_0_f_0();
                    {
                      ToAssignRval_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ToAssignRval_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), ToAssignRval_42, 1) = ((MR_Box) (CastMLDSType_64));
                      MR_hl_field(MR_mktag(3), ToAssignRval_42, 2) = ((MR_Box) (MaskedRval_41));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word CastMLDSType_65;

                    CastMLDSType_65 = ml_backend__ml_util__mlds_int_type_int8_0_f_0();
                    {
                      ToAssignRval_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ToAssignRval_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), ToAssignRval_42, 1) = ((MR_Box) (CastMLDSType_65));
                      MR_hl_field(MR_mktag(3), ToAssignRval_42, 2) = ((MR_Box) (MaskedRval_41));
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word CastMLDSType_66;

                    CastMLDSType_66 = ml_backend__ml_util__mlds_int_type_uint16_0_f_0();
                    {
                      ToAssignRval_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ToAssignRval_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), ToAssignRval_42, 1) = ((MR_Box) (CastMLDSType_66));
                      MR_hl_field(MR_mktag(3), ToAssignRval_42, 2) = ((MR_Box) (MaskedRval_41));
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word CastMLDSType_67;

                    CastMLDSType_67 = ml_backend__ml_util__mlds_int_type_uint32_0_f_0();
                    {
                      ToAssignRval_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ToAssignRval_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), ToAssignRval_42, 1) = ((MR_Box) (CastMLDSType_67));
                      MR_hl_field(MR_mktag(3), ToAssignRval_42, 2) = ((MR_Box) (MaskedRval_41));
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word CastMLDSType_68;

                    CastMLDSType_68 = ml_backend__ml_util__mlds_int_type_uint8_0_f_0();
                    {
                      ToAssignRval_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ToAssignRval_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), ToAssignRval_42, 1) = ((MR_Box) (CastMLDSType_68));
                      MR_hl_field(MR_mktag(3), ToAssignRval_42, 2) = ((MR_Box) (MaskedRval_41));
                    }
                  }
                  break;
              }
              Stmt_63 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_16, ToAssignRval_42, Context_18);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_20 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_63));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word NumBits_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldPosWidth_14, (MR_Integer) 4))));
              MR_Word Mask_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldPosWidth_14, (MR_Integer) 5))));
              MR_Word Fill_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldPosWidth_14, (MR_Integer) 6))));
              MR_Word Shift_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldPosWidth_14, (MR_Integer) 3))));
              MR_Word PackedArgVar_80;
              MR_Word UnsignedMLDSType_81;
              MR_Integer MaskInt_82;
              MR_Word MaskedRval_83;
              MR_Word ToAssignRval_84;
              MR_Word Var_87;
              MR_Word Var_88;
              MR_Word FieldRval_90;
              MR_Word Stmt_91;

              {
                PackedArgVar_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), PackedArgVar_80, 0) = ((MR_Box) (ArgVar_15));
                MR_hl_field(MR_mktag(0), PackedArgVar_80, 1) = ((MR_Box) (Shift_79));
                MR_hl_field(MR_mktag(0), PackedArgVar_80, 2) = ((MR_Box) (NumBits_76));
                MR_hl_field(MR_mktag(0), PackedArgVar_80, 3) = ((MR_Box) (Fill_78));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *PackedArgVars_19 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PackedArgVar_80));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              UnsignedMLDSType_81 = ml_backend__ml_util__mlds_int_type_uint_0_f_0();
              {
                Var_87 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_87, 0) = ((MR_Box) (FieldLval_12));
              }
              {
                FieldRval_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), FieldRval_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), FieldRval_90, 1) = ((MR_Box) (UnsignedMLDSType_81));
                MR_hl_field(MR_mktag(3), FieldRval_90, 2) = ((MR_Box) (Var_87));
              }
              MaskInt_82 = (MR_Integer) (Mask_77);
              Var_88 = ml_backend__ml_unify_gen__ml_rshift_2_f_0(FieldRval_90, Shift_79);
              MaskedRval_83 = ml_backend__ml_unify_gen__ml_bitwise_and_2_f_0(Var_88, MaskInt_82);
              switch (Fill_78) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ToAssignRval_84 = MaskedRval_83;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word CastMLDSType_69;

                    CastMLDSType_69 = ml_backend__ml_util__mlds_int_type_int16_0_f_0();
                    {
                      ToAssignRval_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ToAssignRval_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), ToAssignRval_84, 1) = ((MR_Box) (CastMLDSType_69));
                      MR_hl_field(MR_mktag(3), ToAssignRval_84, 2) = ((MR_Box) (MaskedRval_83));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word CastMLDSType_70;

                    CastMLDSType_70 = ml_backend__ml_util__mlds_int_type_int32_0_f_0();
                    {
                      ToAssignRval_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ToAssignRval_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), ToAssignRval_84, 1) = ((MR_Box) (CastMLDSType_70));
                      MR_hl_field(MR_mktag(3), ToAssignRval_84, 2) = ((MR_Box) (MaskedRval_83));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word CastMLDSType_71;

                    CastMLDSType_71 = ml_backend__ml_util__mlds_int_type_int8_0_f_0();
                    {
                      ToAssignRval_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ToAssignRval_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), ToAssignRval_84, 1) = ((MR_Box) (CastMLDSType_71));
                      MR_hl_field(MR_mktag(3), ToAssignRval_84, 2) = ((MR_Box) (MaskedRval_83));
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word CastMLDSType_72;

                    CastMLDSType_72 = ml_backend__ml_util__mlds_int_type_uint16_0_f_0();
                    {
                      ToAssignRval_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ToAssignRval_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), ToAssignRval_84, 1) = ((MR_Box) (CastMLDSType_72));
                      MR_hl_field(MR_mktag(3), ToAssignRval_84, 2) = ((MR_Box) (MaskedRval_83));
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word CastMLDSType_73;

                    CastMLDSType_73 = ml_backend__ml_util__mlds_int_type_uint32_0_f_0();
                    {
                      ToAssignRval_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ToAssignRval_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), ToAssignRval_84, 1) = ((MR_Box) (CastMLDSType_73));
                      MR_hl_field(MR_mktag(3), ToAssignRval_84, 2) = ((MR_Box) (MaskedRval_83));
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word CastMLDSType_74;

                    CastMLDSType_74 = ml_backend__ml_util__mlds_int_type_uint8_0_f_0();
                    {
                      ToAssignRval_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ToAssignRval_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), ToAssignRval_84, 1) = ((MR_Box) (CastMLDSType_74));
                      MR_hl_field(MR_mktag(3), ToAssignRval_84, 2) = ((MR_Box) (MaskedRval_83));
                    }
                  }
                  break;
              }
              Stmt_91 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_16, ToAssignRval_84, Context_18);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_20 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_91));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              *PackedArgVars_19 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              *Stmts_20 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
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
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[17])));
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
          MR_hl_field(MR_mktag(3), ShiftedRval_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[16])));
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
    MR_Word PtrRval_8;
    MR_Word PtrType_9;
    MR_Word FieldIdA_10;
    MR_Word FieldOffsetA_12;
    MR_Integer Offset_13;
    MR_Word Var_16;

    if (succeeded)
    {
      Ptag_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldLval_4, (MR_Integer) 0))));
      PtrRval_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldLval_4, (MR_Integer) 1))));
      PtrType_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldLval_4, (MR_Integer) 2))));
      FieldIdA_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldLval_4, (MR_Integer) 3))));
      succeeded = ((MR_tag((MR_Word) FieldIdA_10)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        FieldOffsetA_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldIdA_10, (MR_Integer) 0))));
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
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PtrRval_8));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (PtrType_9));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (FieldIdA_10));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (SubstType_15));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            *FieldLvalB_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Ptag_7));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PtrRval_8));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (PtrType_9));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (FieldIdB_14));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (SubstType_15));
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

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__decide_field_gen_6_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__decide_field_gen__1563__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
                  MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[10]));
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

      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_7, &ModuleInfo_15);
      check_hlds__type_util__get_cons_repn_defn_det_3_p_0(ModuleInfo_15, ConsId_9, &ConsRepnDefn_16);
      CtorArgRepns_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_16, (MR_Integer) 3))));
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
    ;
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
              MR_Word next_value_of_ConsTag_5 = SubTag_14;

              // direct tailcall eliminated
              ;
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

              *Ptag_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1))));
              AddedBy_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 3))));
              switch (AddedBy_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *InitOffset_7 = (MR_Word) (((MR_Box) ((MR_Integer) 0)));
                  break;
                case (MR_Integer) 0:
                  *InitOffset_7 = (MR_Word) (((MR_Box) ((MR_Integer) 1)));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_extra_arg_assigns__1303__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
      MR_Integer NextOffset_34;
      MR_Word FieldLval_35;
      MR_Word Var_38;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_48;

      ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_8, &HighLevelData_28);
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[9]));
        MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_extra_arg_assigns_9_p_0_1));
        MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (HighLevelData_28));
        MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) ((MR_Integer) 0));
      }
      mercury__require__expect_3_p_0(Var_38, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_extra_arg_assigns\'/9", (MR_String) "high-level data");
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_43, 0) = ((MR_Box) (CurOffset_4));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (Var_43));
      }
      {
        FieldId_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FieldId_29, 0) = ((MR_Box) (Var_42));
      }
      ExtraRval_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExtraRvalTypeWidth_22, (MR_Integer) 0))));
      ExtraType_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExtraRvalTypeWidth_22, (MR_Integer) 1))));
      ArgPosWidth_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExtraRvalTypeWidth_22, (MR_Integer) 2))));
      {
        Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_extra_arg_assigns_9_p_0_2));
        MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (ArgPosWidth_32));
      }
      mercury__require__expect_3_p_0(Var_44, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_extra_arg_assigns\'/9", (MR_String) "ArgPosWidth != apw_full(_)");
      NextOffset_34 = (MR_Integer) ((MR_Unsigned) CurOffset_4 + (MR_Unsigned) (MR_Integer) 1);
      {
        Var_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_48, 0) = ((MR_Box) (VarLval_1));
      }
      {
        FieldLval_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FieldLval_35, 0) = ((MR_Box) (MaybePrimaryTag_3));
        MR_hl_field(MR_mktag(0), FieldLval_35, 1) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(0), FieldLval_35, 2) = ((MR_Box) (MLDS_VarType_2));
        MR_hl_field(MR_mktag(0), FieldLval_35, 3) = ((MR_Box) (FieldId_29));
        MR_hl_field(MR_mktag(0), FieldLval_35, 4) = ((MR_Box) (ExtraType_31));
      }
      Stmt_25 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLval_35, ExtraRval_30, Context_6);
      ml_backend__ml_unify_gen__ml_gen_extra_arg_assigns_9_p_0(VarLval_1, MLDS_VarType_2, MaybePrimaryTag_3, NextOffset_34, ExtraRvalsTypesWidths_23, Context_6, &Stmts_26, STATE_VARIABLE_Info_0_8, STATE_VARIABLE_Info_9);
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
    MR_Word conv0_LambdaHeadVar__2_50;

    conv0_LambdaHeadVar__2_50 = ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_new_object_statically__715__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_50));
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
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43)
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
    MR_Word Target_34;
    MR_Word MLDS_VarType_35;
    MR_Word GroundTerm_36;
    MR_Word VarLval_37;
    MR_Word Rval_38;
    MR_Word AssignStmt_41;
    MR_Word STATE_VARIABLE_GlobalData_44_44;
    MR_Word STATE_VARIABLE_GlobalData_47_47;
    MR_Word STATE_VARIABLE_GlobalData_51_51;
    MR_Word STATE_VARIABLE_Info_52_52;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_42, Var_14, &VarType_20);
    ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0(STATE_VARIABLE_Info_0_42, VarType_20, ConsIdOrClosure_11, ArgVars_16, &ArgVarsTypesWidths_21);
    ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_42, &STATE_VARIABLE_GlobalData_44_44);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_42, &ModuleInfo_23);
    ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_42, &HighLevelData_24);
    switch (HighLevelData_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word STATE_VARIABLE_GlobalData_46_46;

          ml_backend__ml_unify_gen__ml_gen_box_extra_const_rval_list_lld_6_p_0(ModuleInfo_23, Context_17, ExtraRvalsTypesWidths_15, &ExtraArgRvalsTypesWidths_25, STATE_VARIABLE_GlobalData_44_44, &STATE_VARIABLE_GlobalData_46_46);
          ml_backend__ml_unify_gen__ml_gen_box_const_rval_list_lld_6_p_0(STATE_VARIABLE_Info_0_42, Context_17, ArgVarsTypesWidths_21, &ArgRvalsTypesWidths_26, STATE_VARIABLE_GlobalData_46_46, &STATE_VARIABLE_GlobalData_47_47);
        }
        break;
      case (MR_Integer) 1:
        {
          ml_backend__ml_unify_gen__ml_gen_box_or_unbox_const_rval_list_hld_6_p_0(STATE_VARIABLE_Info_0_42, Context_17, ArgVarsTypesWidths_21, &ArgRvalsTypesWidths_26, STATE_VARIABLE_GlobalData_44_44, &STATE_VARIABLE_GlobalData_47_47);
          ExtraArgRvalsTypesWidths_25 = ExtraRvalsTypesWidths_15;
        }
        break;
    }
    if ((MaybeCtorName_12 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      UsesBaseClass_28 = (MR_Integer) 1;
    else
      UsesBaseClass_28 = (MR_Integer) 0;
    ExtraArgRvals_29 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_mlds_rval_type_and_width_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__ml_unify_gen_scalar_common_2[6]), ExtraArgRvalsTypesWidths_25);
    ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_42, &Target_34);
    ml_backend__ml_code_util__ml_gen_type_3_p_0(STATE_VARIABLE_Info_0_42, VarType_20, &MLDS_VarType_35);
    ml_backend__ml_unify_gen__construct_static_ground_term_14_p_0(ModuleInfo_23, Target_34, HighLevelData_24, Context_17, VarType_20, MLDS_VarType_35, ConsIdOrClosure_11, UsesBaseClass_28, Ptag_13, ExtraArgRvals_29, ArgRvalsTypesWidths_26, &GroundTerm_36, STATE_VARIABLE_GlobalData_47_47, &STATE_VARIABLE_GlobalData_51_51);
    ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(STATE_VARIABLE_GlobalData_51_51, STATE_VARIABLE_Info_0_42, &STATE_VARIABLE_Info_52_52);
    ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_14, GroundTerm_36, STATE_VARIABLE_Info_52_52, STATE_VARIABLE_Info_43);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(*STATE_VARIABLE_Info_43, Var_14, &VarLval_37);
    Rval_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm_36, (MR_Integer) 0))));
    AssignStmt_41 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_37, Rval_38, Context_17);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_18 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (AssignStmt_41));
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

    conv0_LambdaHeadVar__2_44 = ml_backend__ml_unify_gen__IntroducedFrom__func__construct_static_ground_term__3234__1_1_f_0(((MR_Word) (wrapper_arg_1)));
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

    ml_backend__ml_unify_gen__ml_pack_ground_term_args_into_word_inits_2_p_0(RvalsTypesWidths_25, &NonExtraInits_28);
    ExtraInits_29 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_unify_gen_scalar_common_2[5]), ExtraRvals_24);
    AllInits_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), ExtraInits_29, NonExtraInits_28);
    ConstType_32 = ml_backend__ml_unify_gen__get_const_type_for_cons_id_5_f_0(Target_16, HighLevelData_17, MLDS_Type_20, UsesBaseClass_22, ConsIdOrClosure_21);
    succeeded = ((((MR_tag((MR_Word) ConstType_32)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConstType_32, (MR_Integer) 0))) == (MR_Integer) 4)));
    if (succeeded)
    {
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
    ;
    if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    else
    {
      MR_Word RvalTypeWidth_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word RvalsTypesWidths_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Rval_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_3, (MR_Integer) 0))));
      MR_Word PosWidth_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_3, (MR_Integer) 2))));

      switch (MR_tag((MR_Word) PosWidth_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = RvalsTypesWidths_4;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word HeadInit_15;
            MR_Word TailInits_16;

            {
              HeadInit_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), HeadInit_15, 0) = ((MR_Box) (Rval_6));
            }
            ml_backend__ml_unify_gen__ml_pack_ground_term_args_into_word_inits_2_p_0(RvalsTypesWidths_4, &TailInits_16);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadInit_15));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailInits_16));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PosWidth_8, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Fill_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_8, (MR_Integer) 5))));
                MR_Word RevOrRvals0_22;
                MR_Word LeftOverRvalsTypesWidths_23;
                MR_Word OrAllRval_24;
                MR_Word HeadInit_44;
                MR_Word TailInits_45;
                MR_Word RevOrRvals_56;
                MR_Word OrRvals_57;
                MR_Word Var_25;
                MR_Word Var_26;

                ml_backend__ml_unify_gen__maybe_shift_and_accumulate_or_rval_5_p_0(Rval_6, (MR_Word) (((MR_Box) ((MR_Integer) 0))), Fill_21, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))), &RevOrRvals0_22);
                ml_backend__ml_unify_gen__ml_pack_into_one_word_loop_8_p_0(RvalsTypesWidths_4, &LeftOverRvalsTypesWidths_23, RevOrRvals0_22, &RevOrRvals_56, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))), &Var_25, (MR_Integer) 0, &Var_26);
                mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), RevOrRvals_56, &OrRvals_57);
                if ((OrRvals_57 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  OrAllRval_24 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[12]));
                else
                {
                  MR_Word HeadOrRval_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OrRvals_57, (MR_Integer) 0))));
                  MR_Word TailOrRvals_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OrRvals_57, (MR_Integer) 1))));
                  MR_Word OrAllRval_60;

                  ml_backend__ml_unify_gen__or_packed_rvals_3_p_0(HeadOrRval_58, TailOrRvals_59, &OrAllRval_60);
                  {
                    OrAllRval_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), OrAllRval_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(3), OrAllRval_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
                    MR_hl_field(MR_mktag(3), OrAllRval_24, 2) = ((MR_Box) (OrAllRval_60));
                  }
                }
                {
                  HeadInit_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), HeadInit_44, 0) = ((MR_Box) (OrAllRval_24));
                }
                ml_backend__ml_unify_gen__ml_pack_ground_term_args_into_word_inits_2_p_0(LeftOverRvalsTypesWidths_23, &TailInits_45);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__2_2 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadInit_44));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailInits_45));
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
        ConstType_12 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[15]));
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorCategory_15;

          succeeded = (Target_7 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = ((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0))) == (MR_Integer) 0)));
            if (succeeded)
            {
              TypeCtorCategory_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 3))));
              succeeded = ((((MR_tag((MR_Word) TypeCtorCategory_15)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeCtorCategory_15, (MR_Integer) 0))) == (MR_Integer) 0)));
              if (succeeded)
              {
              }
            }
          }
          if (succeeded)
            ConstType_12 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[15]));
          else
          {
            MR_Word CtorSymName_18;
            MR_Integer CtorArity_19;
            MR_Word QualTypeName_21;
            MR_Integer TypeArity_22;
            MR_Word ConsId_17;

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
                  if (((MR_tag((MR_Word) MLDS_Type_9)) == (MR_mktag((MR_Integer) 1))))
                  {
                    MR_Word Var_48 = (MR_Word) (MR_body((MR_Word) (MLDS_Type_9), (MR_Integer) 1));

                    QualTypeName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 0))));
                    TypeArity_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 1))));
                    succeeded = MR_TRUE;
                  }
                  else
                  if (((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0))) == (MR_Integer) 0))))
                  {
                    MR_Word MercuryType_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 1))));
                    MR_Word TypeCtor_27;
                    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 3))));

                    succeeded = ((((MR_tag((MR_Word) Var_47)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_47, (MR_Integer) 0))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
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

              CtorName_31 = ml_backend__ml_type_gen__ml_gen_du_ctor_name_unqual_type_5_f_0(Target_7, UnqualTypeName_30, TypeArity_22, CtorSymName_18, CtorArity_19);
              MLDS_Module_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualTypeName_21, (MR_Integer) 0))));
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

              succeeded = ((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0))) == (MR_Integer) 0)));
              if (succeeded)
              {
                MercuryType_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 1))));
                Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 3))));
                succeeded = ((((MR_tag((MR_Word) Var_51)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_51, (MR_Integer) 0))) == (MR_Integer) 1)));
                if (succeeded)
                {
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

                succeeded = ((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 3))));
                  succeeded = (Var_53 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                }
                if (succeeded)
                  ConstType_12 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[15]));
                else
                {
                  MR_Word Var_55;

                  succeeded = ((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 3))));
                    succeeded = (Var_55 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  if (succeeded)
                    ConstType_12 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[15]));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_box_extra_const_rval_list_lld__1086__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
      MR_Word MaybePackedArgVar_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_14, (MR_Integer) 3))));
      MR_Word Width_23;
      MR_Word BoxedRval_24;
      MR_Word Var_27;
      MR_Word STATE_VARIABLE_GlobalData_31_31;

      Width_23 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(PosWidth_21);
      {
        Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[2]));
        MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_box_extra_const_rval_list_lld_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (Width_23));
        MR_hl_field(MR_mktag(0), Var_27, 4) = ((MR_Box) ((MR_Integer) 2));
      }
      mercury__require__expect_3_p_0(Var_27, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_box_extra_const_rval_list_lld\'/6", (MR_String) "Width != aw_full_word");
      ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_1, Context_2, MLDS_Type_20, Width_23, Rval_19, &BoxedRval_24, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_31_31);
      {
        BoxedRvalTypeWidth_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 0) = ((MR_Box) (BoxedRval_24));
        MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 1) = ((MR_Box) (MLDS_Type_20));
        MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 2) = ((MR_Box) (PosWidth_21));
        MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 3) = ((MR_Box) (MaybePackedArgVar_22));
      }
      ml_backend__ml_unify_gen__ml_gen_box_extra_const_rval_list_lld_6_p_0(ModuleInfo_1, Context_2, RvalsTypesWidths_15, &BoxedRvalsTypesWidths_17, STATE_VARIABLE_GlobalData_31_31, STATE_VARIABLE_GlobalData_6);
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

    ml_backend__ml_gen_info__ml_gen_info_lookup_const_var_3_p_0(Info_1, ArgVar_19, &GroundTerm_22);
    Rval_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm_22, (MR_Integer) 0))));
    MLDS_Type_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm_22, (MR_Integer) 2))));
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_1, &ModuleInfo_26);
    Width_27 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_21);
    ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_26, Context_2, MLDS_Type_25, Width_27, Rval_23, &BoxedRval_28, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_31_31);
    {
      BoxedRvalTypeWidth_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 0) = ((MR_Box) (BoxedRval_28));
      MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 2) = ((MR_Box) (ArgPosWidth_21));
      MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
      MR_Word GroundTerm_38;

      ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_1, ArgVar_19, &ArgType_22);
      ml_backend__ml_gen_info__ml_gen_info_lookup_const_var_3_p_0(Info_1, ArgVar_19, &GroundTerm_38);
      ArgRval_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm_38, (MR_Integer) 0))));
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_1, &ModuleInfo_24);
      ConsWidth_26 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ConsArgPosWidth_21);
      succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ModuleInfo_24, ConsArgType_20, ConsWidth_26);
      if (succeeded)
      {
        MR_Word TypeVarSet0_46;
        MR_Word MLDS_ArgType_62;
        MR_Word TypeVar_47;
        MR_Word _TypeVarSet_48;

        mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet0_46);
        mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVar_47, TypeVarSet0_46, &_TypeVarSet_48);
        MLDS_ArgType_62 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_24, ArgType_22);
        ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_24, Context_2, MLDS_ArgType_62, (MR_Integer) 2, ArgRval_23, &FieldRval_28, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_31_31);
      }
      else
        switch (MR_tag((MR_Word) ConsArgType_20)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word MLDS_ArgType_82;

              MLDS_ArgType_82 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_24, ArgType_22);
              ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_24, Context_2, MLDS_ArgType_82, (MR_Integer) 2, ArgRval_23, &FieldRval_28, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_31_31);
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
        FieldRvalTypeWidth_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FieldRvalTypeWidth_16, 0) = ((MR_Box) (FieldRval_28));
        MR_hl_field(MR_mktag(0), FieldRvalTypeWidth_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
        MR_hl_field(MR_mktag(0), FieldRvalTypeWidth_16, 2) = ((MR_Box) (ConsArgPosWidth_21));
        MR_hl_field(MR_mktag(0), FieldRvalTypeWidth_16, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
    MR_Word conv0_LambdaHeadVar__2_72;

    conv0_LambdaHeadVar__2_72 = ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_new_object_dynamically__654__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_72));
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
  MR_Word STATE_VARIABLE_Info_0_64,
  MR_Word * STATE_VARIABLE_Info_65)
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
    MR_Word ArgRvalsTypes_58;
    MR_Word MLDS_VarType_59;
    MR_Word MakeNewObject_60;
    MR_Word MakeNewObjStmt_61;
    MR_Word MaybePtag_62;
    MR_Word TakeAddrStmts_63;
    MR_Word Var_68;
    MR_Word Var_73;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_64, Var_18, &VarType_26);
    ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0(STATE_VARIABLE_Info_0_64, VarType_26, ConsIdOrClosure_14, ArgVars_20, &ArgVarsTypesWidths_27);
    ml_backend__ml_gen_info__ml_gen_info_get_use_atomic_cells_2_p_0(STATE_VARIABLE_Info_0_64, &UseAtomicCells_28);
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
    ml_backend__ml_unify_gen__ml_gen_dynamic_construct_args_12_p_0(STATE_VARIABLE_Info_0_64, ArgVarsTypesWidths_27, ArgModes_21, NumExtraRvals_31, (MR_Integer) 1, PrevOffset_32, ArgVarsTypesWidths_27, TakeAddr_22, &TakeAddrInfos_33, &ArgRvalsTypesWidths0_34, MayUseAtomic0_29, &MayUseAtomic_35);
    ml_backend__ml_unify_gen__ml_expand_or_pack_into_words_3_p_0(STATE_VARIABLE_Info_0_64, ArgRvalsTypesWidths0_34, &PackedArgRvalsTypesWidths_36);
    ArgRvalsTypesWidths_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_mlds_rval_type_and_width_0), ExtraRvalsTypesWidths_19, PackedArgRvalsTypesWidths_36);
    mercury__list__length_2_p_0((MR_Word) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_mlds_rval_type_and_width_0), ArgRvalsTypesWidths_37, &Size_38);
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_68, 0) = ((MR_Box) (Size_38));
    }
    {
      SizeInWordsRval_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SizeInWordsRval_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), SizeInWordsRval_39, 1) = ((MR_Box) (Var_68));
    }
    ml_backend__ml_gen_info__ml_gen_info_get_profile_memory_2_p_0(STATE_VARIABLE_Info_0_64, &ProfileMemory_40);
    switch (ProfileMemory_40) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MaybeAllocId_51 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          *STATE_VARIABLE_Info_65 = STATE_VARIABLE_Info_0_64;
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
          MR_Word Var_69;
          MR_Word _Module_43;

          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_64, &ModuleInfo_41);
          ml_backend__ml_gen_info__ml_gen_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_0_64, &PredProcId_42);
          ml_backend__ml_code_util__ml_gen_proc_label_4_p_0(ModuleInfo_41, PredProcId_42, &_Module_43, &ProcLabel_44);
          ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_64, &GlobalData0_45);
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
          Var_69 = (MR_Word) (MR_mkword(MR_mktag(0), (MR_Word) (ProcLabel_44)));
          ml_backend__ml_global_data__ml_gen_alloc_site_7_p_0(Var_69, MaybeConsId_47, Size_38, Context_23, &AllocId_49, GlobalData0_45, &GlobalData_50);
          ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_50, STATE_VARIABLE_Info_0_64, STATE_VARIABLE_Info_65);
          {
            MaybeAllocId_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeAllocId_51, 0) = ((MR_Box) (AllocId_49));
          }
        }
        break;
    }
    ml_backend__ml_code_util__ml_gen_var_3_p_0(*STATE_VARIABLE_Info_65, Var_18, &VarLval_52);
    ArgRvalsTypes_58 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_mlds_rval_type_and_width_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_typed_rval_0), (MR_Word) (&ml_backend__ml_unify_gen_scalar_common_2[4]), ArgRvalsTypesWidths_37);
    ml_backend__ml_code_util__ml_gen_type_3_p_0(*STATE_VARIABLE_Info_65, VarType_26, &MLDS_VarType_59);
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (SizeInWordsRval_39));
    }
    {
      MakeNewObject_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MakeNewObject_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), MakeNewObject_60, 1) = ((MR_Box) (VarLval_52));
      MR_hl_field(MR_mktag(3), MakeNewObject_60, 2) = ((MR_Box) (Ptag_16));
      MR_hl_field(MR_mktag(3), MakeNewObject_60, 3) = ((MR_Box) (ExplicitSecTag_17));
      MR_hl_field(MR_mktag(3), MakeNewObject_60, 4) = ((MR_Box) (MLDS_VarType_59));
      MR_hl_field(MR_mktag(3), MakeNewObject_60, 5) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(3), MakeNewObject_60, 6) = ((MR_Box) (MaybeCtorName_15));
      MR_hl_field(MR_mktag(3), MakeNewObject_60, 7) = ((MR_Box) (ArgRvalsTypes_58));
      MR_hl_field(MR_mktag(3), MakeNewObject_60, 8) = ((MR_Box) (MayUseAtomic_35));
      MR_hl_field(MR_mktag(3), MakeNewObject_60, 9) = ((MR_Box) (MaybeAllocId_51));
    }
    {
      MakeNewObjStmt_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MakeNewObjStmt_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), MakeNewObjStmt_61, 1) = ((MR_Box) (MakeNewObject_60));
      MR_hl_field(MR_mktag(3), MakeNewObjStmt_61, 2) = ((MR_Box) (Context_23));
    }
    {
      MaybePtag_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePtag_62, 0) = ((MR_Box) (Ptag_16));
    }
    ml_backend__ml_unify_gen__ml_gen_field_take_address_assigns_7_p_0(TakeAddrInfos_33, VarLval_52, MLDS_VarType_59, MaybePtag_62, Context_23, *STATE_VARIABLE_Info_65, &TakeAddrStmts_63);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_24 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MakeNewObjStmt_61));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TakeAddrStmts_63));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_expand_or_pack_into_words_3_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__3_3 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    else
    {
      MR_Word RvalTypeWidth_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word RvalsTypesWidths_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Rval_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_6, (MR_Integer) 0))));
      MR_Word Type_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_6, (MR_Integer) 1))));
      MR_Word PosWidth_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_6, (MR_Integer) 2))));
      MR_Word MaybePackedArgVar_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_6, (MR_Integer) 3))));

      switch (MR_tag((MR_Word) PosWidth_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__2_2 = RvalsTypesWidths_7;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TailPackedRvalsTypesWidths_15;

            ml_backend__ml_unify_gen__ml_expand_or_pack_into_words_3_p_0(Info_1, RvalsTypesWidths_7, &TailPackedRvalsTypesWidths_15);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RvalTypeWidth_6));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailPackedRvalsTypesWidths_15));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer AOOffset_16;
            MR_Integer CellOffset_17;
            MR_Word DoubleWordKind_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), PosWidth_11, (MR_Integer) 2))));
            MR_Word SubstType_20;
            MR_Word RvalA_21;
            MR_Word RvalB_22;
            MR_Word AOOffsetA_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), PosWidth_11, (MR_Integer) 0))));
            MR_Word AOOffsetB_24;
            MR_Word CellOffsetA_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), PosWidth_11, (MR_Integer) 1))));
            MR_Word CellOffsetB_26;
            MR_Word RvalTypeWidthA_27;
            MR_Word RvalTypeWidthB_28;
            MR_Integer Var_75;
            MR_Integer Var_77;
            MR_Word Var_79;
            MR_Word Var_81;
            MR_Word Var_83;
            MR_Word TailPackedRvalsTypesWidths_84;
            MR_Word Var_66;

            AOOffset_16 = (MR_Integer) (AOOffsetA_23);
            CellOffset_17 = (MR_Integer) (CellOffsetA_25);
            ml_backend__ml_unify_gen__ml_expand_or_pack_into_words_3_p_0(Info_1, RvalsTypesWidths_7, &TailPackedRvalsTypesWidths_84);
            succeeded = ((((MR_tag((MR_Word) Rval_9)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_9, (MR_Integer) 0))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_9, (MR_Integer) 1))));
              succeeded = ((((MR_tag((MR_Word) Var_66)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_66, (MR_Integer) 0))) == (MR_Integer) 20)));
              if (succeeded)
              {
              }
            }
            if (succeeded)
            {
              SubstType_20 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)));
              RvalA_21 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[14]));
              RvalB_22 = RvalA_21;
            }
            else
            {
              SubstType_20 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)));
              switch (DoubleWordKind_18) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      RvalA_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), RvalA_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), RvalA_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
                      MR_hl_field(MR_mktag(3), RvalA_21, 2) = ((MR_Box) (Rval_9));
                    }
                    {
                      RvalB_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), RvalB_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), RvalB_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14))));
                      MR_hl_field(MR_mktag(3), RvalB_22, 2) = ((MR_Box) (Rval_9));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      RvalA_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), RvalA_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), RvalA_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15))));
                      MR_hl_field(MR_mktag(3), RvalA_21, 2) = ((MR_Box) (Rval_9));
                    }
                    {
                      RvalB_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), RvalB_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), RvalB_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
                      MR_hl_field(MR_mktag(3), RvalB_22, 2) = ((MR_Box) (Rval_9));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    {
                      RvalA_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), RvalA_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), RvalA_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17))));
                      MR_hl_field(MR_mktag(3), RvalA_21, 2) = ((MR_Box) (Rval_9));
                    }
                    {
                      RvalB_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), RvalB_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), RvalB_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18))));
                      MR_hl_field(MR_mktag(3), RvalB_22, 2) = ((MR_Box) (Rval_9));
                    }
                  }
                  break;
              }
            }
            Var_75 = (MR_Integer) ((MR_Unsigned) AOOffset_16 + (MR_Unsigned) (MR_Integer) 1);
            AOOffsetB_24 = (MR_Word) (Var_75);
            Var_77 = (MR_Integer) ((MR_Unsigned) CellOffset_17 + (MR_Unsigned) (MR_Integer) 1);
            CellOffsetB_26 = (MR_Word) (Var_77);
            {
              Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (AOOffsetA_23));
              MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (CellOffsetA_25));
            }
            {
              RvalTypeWidthA_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), RvalTypeWidthA_27, 0) = ((MR_Box) (RvalA_21));
              MR_hl_field(MR_mktag(0), RvalTypeWidthA_27, 1) = ((MR_Box) (SubstType_20));
              MR_hl_field(MR_mktag(0), RvalTypeWidthA_27, 2) = ((MR_Box) (Var_79));
              MR_hl_field(MR_mktag(0), RvalTypeWidthA_27, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (AOOffsetB_24));
              MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (CellOffsetB_26));
            }
            {
              RvalTypeWidthB_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), RvalTypeWidthB_28, 0) = ((MR_Box) (RvalB_22));
              MR_hl_field(MR_mktag(0), RvalTypeWidthB_28, 1) = ((MR_Box) (SubstType_20));
              MR_hl_field(MR_mktag(0), RvalTypeWidthB_28, 2) = ((MR_Box) (Var_81));
              MR_hl_field(MR_mktag(0), RvalTypeWidthB_28, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (RvalTypeWidthB_28));
              MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (TailPackedRvalsTypesWidths_84));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RvalTypeWidthA_27));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_83));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PosWidth_11, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Fill_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_11, (MR_Integer) 5))));
                MR_Word RevOrRvals0_32;
                MR_Word RevPackedArgVars0_33;
                MR_Word AllPartialsHavePackedArgVars0_34;
                MR_Word LeftOverRvalsTypesWidths_36;
                MR_Word OrAllRval_37;
                MR_Word RevPackedArgVars_38;
                MR_Word AllPartialsHavePackedArgVars_39;
                MR_Word WordRval_40;
                MR_Word PackedRvalTypeWidth_44;
                MR_Word Var_62;
                MR_Word TailPackedRvalsTypesWidths_85;
                MR_Word AOOffset_86 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_11, (MR_Integer) 1))));
                MR_Word CellOffset_87 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_11, (MR_Integer) 2))));

                ml_backend__ml_unify_gen__maybe_shift_and_accumulate_or_rval_5_p_0(Rval_9, (MR_Word) (((MR_Box) ((MR_Integer) 0))), Fill_31, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))), &RevOrRvals0_32);
                if ((MaybePackedArgVar_12 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  RevPackedArgVars0_33 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  AllPartialsHavePackedArgVars0_34 = (MR_Integer) 0;
                }
                else
                {
                  MR_Word PackedArgVar_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePackedArgVar_12, (MR_Integer) 0))));

                  {
                    RevPackedArgVars0_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), RevPackedArgVars0_33, 0) = ((MR_Box) (PackedArgVar_35));
                    MR_hl_field(MR_mktag(1), RevPackedArgVars0_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  AllPartialsHavePackedArgVars0_34 = (MR_Integer) 1;
                }
                ml_backend__ml_unify_gen__ml_pack_into_one_word_8_p_0(RvalsTypesWidths_7, &LeftOverRvalsTypesWidths_36, RevOrRvals0_32, &OrAllRval_37, RevPackedArgVars0_33, &RevPackedArgVars_38, AllPartialsHavePackedArgVars0_34, &AllPartialsHavePackedArgVars_39);
                switch (AllPartialsHavePackedArgVars_39) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    WordRval_40 = OrAllRval_37;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word PackedArgVars_41;
                      MR_Word PackedArgsMap_42;
                      MR_Word OldWordRval_43;
                      MR_Box conv0_OldWordRval_43;

                      mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0), RevPackedArgVars_38, &PackedArgVars_41);
                      ml_backend__ml_gen_info__ml_gen_info_get_packed_args_map_2_p_0(Info_1, &PackedArgsMap_42);
                      succeeded = mercury__map__search_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[4]), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), PackedArgsMap_42, ((MR_Box) (PackedArgVars_41)), &conv0_OldWordRval_43);
                      if (succeeded)
                      {
                        OldWordRval_43 = ((MR_Word) (conv0_OldWordRval_43));
                        succeeded = MR_TRUE;
                      }
                      if (succeeded)
                      {
                        {
                          WordRval_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), WordRval_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), WordRval_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
                          MR_hl_field(MR_mktag(3), WordRval_40, 2) = ((MR_Box) (OldWordRval_43));
                        }
                      }
                      else
                        WordRval_40 = OrAllRval_37;
                    }
                    break;
                }
                {
                  Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (AOOffset_86));
                  MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (CellOffset_87));
                }
                {
                  PackedRvalTypeWidth_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), PackedRvalTypeWidth_44, 0) = ((MR_Box) (WordRval_40));
                  MR_hl_field(MR_mktag(0), PackedRvalTypeWidth_44, 1) = ((MR_Box) (Type_10));
                  MR_hl_field(MR_mktag(0), PackedRvalTypeWidth_44, 2) = ((MR_Box) (Var_62));
                  MR_hl_field(MR_mktag(0), PackedRvalTypeWidth_44, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                ml_backend__ml_unify_gen__ml_expand_or_pack_into_words_3_p_0(Info_1, LeftOverRvalsTypesWidths_36, &TailPackedRvalsTypesWidths_85);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PackedRvalTypeWidth_44));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailPackedRvalsTypesWidths_85));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_expand_or_pack_into_words\'/3", (MR_String) "apw_partial_shifted");
                  return;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_expand_or_pack_into_words\'/3", (MR_String) "apw_none_shifted");
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
ml_backend__ml_unify_gen__ml_pack_into_one_word_8_p_0(
  MR_Word RvalsTypesWidths_9,
  MR_Word * LeftOverRvalsTypesWidths_10,
  MR_Word RevOrRvals0_11,
  MR_Word * BoxedOrAllRval_12,
  MR_Word STATE_VARIABLE_RevPackedArgVars_0_20,
  MR_Word * STATE_VARIABLE_RevPackedArgVars_21,
  MR_Word STATE_VARIABLE_AllPartialsHavePackedArgVars_0_22,
  MR_Word * STATE_VARIABLE_AllPartialsHavePackedArgVars_23)
{
  {
    MR_Word RevOrRvals_15;
    MR_Word OrRvals_16;

    ml_backend__ml_unify_gen__ml_pack_into_one_word_loop_8_p_0(RvalsTypesWidths_9, LeftOverRvalsTypesWidths_10, RevOrRvals0_11, &RevOrRvals_15, STATE_VARIABLE_RevPackedArgVars_0_20, STATE_VARIABLE_RevPackedArgVars_21, STATE_VARIABLE_AllPartialsHavePackedArgVars_0_22, STATE_VARIABLE_AllPartialsHavePackedArgVars_23);
    mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), RevOrRvals_15, &OrRvals_16);
    if ((OrRvals_16 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *BoxedOrAllRval_12 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[12]));
    else
    {
      MR_Word HeadOrRval_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OrRvals_16, (MR_Integer) 0))));
      MR_Word TailOrRvals_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OrRvals_16, (MR_Integer) 1))));
      MR_Word OrAllRval_19;

      ml_backend__ml_unify_gen__or_packed_rvals_3_p_0(HeadOrRval_17, TailOrRvals_18, &OrAllRval_19);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        *BoxedOrAllRval_12 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (OrAllRval_19));
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
      Var_25 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[11]));
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
ml_backend__ml_unify_gen__ml_pack_into_one_word_loop_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevOrRvals_0_3,
  MR_Word * STATE_VARIABLE_RevOrRvals_4,
  MR_Word STATE_VARIABLE_RevPackedArgVars_0_5,
  MR_Word * STATE_VARIABLE_RevPackedArgVars_6,
  MR_Word STATE_VARIABLE_AllPartialsHavePackedArgVars_0_7,
  MR_Word * STATE_VARIABLE_AllPartialsHavePackedArgVars_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
      *STATE_VARIABLE_AllPartialsHavePackedArgVars_8 = STATE_VARIABLE_AllPartialsHavePackedArgVars_0_7;
      *STATE_VARIABLE_RevPackedArgVars_6 = STATE_VARIABLE_RevPackedArgVars_0_5;
      *STATE_VARIABLE_RevOrRvals_4 = STATE_VARIABLE_RevOrRvals_0_3;
    }
    else
    {
      MR_Word RvalTypeWidth_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word RvalsTypesWidths_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Rval_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_18, (MR_Integer) 0))));
      MR_Word PosWidth_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_18, (MR_Integer) 2))));
      MR_Word MaybePackedArgVar_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_18, (MR_Integer) 3))));

      switch (MR_tag((MR_Word) PosWidth_26)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__2_2 = HeadVar__1_1;
            *STATE_VARIABLE_RevOrRvals_4 = STATE_VARIABLE_RevOrRvals_0_3;
            *STATE_VARIABLE_RevPackedArgVars_6 = STATE_VARIABLE_RevPackedArgVars_0_5;
            *STATE_VARIABLE_AllPartialsHavePackedArgVars_8 = STATE_VARIABLE_AllPartialsHavePackedArgVars_0_7;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            *HeadVar__2_2 = HeadVar__1_1;
            *STATE_VARIABLE_RevOrRvals_4 = STATE_VARIABLE_RevOrRvals_0_3;
            *STATE_VARIABLE_RevPackedArgVars_6 = STATE_VARIABLE_RevPackedArgVars_0_5;
            *STATE_VARIABLE_AllPartialsHavePackedArgVars_8 = STATE_VARIABLE_AllPartialsHavePackedArgVars_0_7;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PosWidth_26, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *HeadVar__2_2 = HeadVar__1_1;
                *STATE_VARIABLE_RevOrRvals_4 = STATE_VARIABLE_RevOrRvals_0_3;
                *STATE_VARIABLE_RevPackedArgVars_6 = STATE_VARIABLE_RevPackedArgVars_0_5;
                *STATE_VARIABLE_AllPartialsHavePackedArgVars_8 = STATE_VARIABLE_AllPartialsHavePackedArgVars_0_7;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Shift_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_26, (MR_Integer) 3))));
                MR_Word Fill_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_26, (MR_Integer) 6))));
                MR_Word STATE_VARIABLE_RevOrRvals_53_59;
                MR_Word STATE_VARIABLE_RevPackedArgVars_54_60;
                MR_Word STATE_VARIABLE_AllPartialsHavePackedArgVars_55_61;
                MR_Word next_value_of_HeadVar__1_1;
                MR_Word next_value_of_STATE_VARIABLE_RevOrRvals_0_3;
                MR_Word next_value_of_STATE_VARIABLE_RevPackedArgVars_0_5;
                MR_Word next_value_of_STATE_VARIABLE_AllPartialsHavePackedArgVars_0_7;

                ml_backend__ml_unify_gen__maybe_shift_and_accumulate_or_rval_5_p_0(Rval_24, Shift_40, Fill_43, STATE_VARIABLE_RevOrRvals_0_3, &STATE_VARIABLE_RevOrRvals_53_59);
                if ((MaybePackedArgVar_27 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  STATE_VARIABLE_AllPartialsHavePackedArgVars_55_61 = (MR_Integer) 0;
                  STATE_VARIABLE_RevPackedArgVars_54_60 = STATE_VARIABLE_RevPackedArgVars_0_5;
                }
                else
                {
                  MR_Word PackedArgVar_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePackedArgVar_27, (MR_Integer) 0))));

                  {
                    STATE_VARIABLE_RevPackedArgVars_54_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPackedArgVars_54_60, 0) = ((MR_Box) (PackedArgVar_44));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPackedArgVars_54_60, 1) = ((MR_Box) (STATE_VARIABLE_RevPackedArgVars_0_5));
                  }
                  STATE_VARIABLE_AllPartialsHavePackedArgVars_55_61 = STATE_VARIABLE_AllPartialsHavePackedArgVars_0_7;
                }
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__1_1 = RvalsTypesWidths_19;
                next_value_of_STATE_VARIABLE_RevOrRvals_0_3 = STATE_VARIABLE_RevOrRvals_53_59;
                next_value_of_STATE_VARIABLE_RevPackedArgVars_0_5 = STATE_VARIABLE_RevPackedArgVars_54_60;
                next_value_of_STATE_VARIABLE_AllPartialsHavePackedArgVars_0_7 = STATE_VARIABLE_AllPartialsHavePackedArgVars_55_61;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                STATE_VARIABLE_RevOrRvals_0_3 = next_value_of_STATE_VARIABLE_RevOrRvals_0_3;
                STATE_VARIABLE_RevPackedArgVars_0_5 = next_value_of_STATE_VARIABLE_RevPackedArgVars_0_5;
                STATE_VARIABLE_AllPartialsHavePackedArgVars_0_7 = next_value_of_STATE_VARIABLE_AllPartialsHavePackedArgVars_0_7;
                continue;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word next_value_of_HeadVar__1_1 = RvalsTypesWidths_19;

                // direct tailcall eliminated
                ;
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
          MR_hl_field(MR_mktag(3), ShiftedRval_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[10])));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__cons_id_arg_types_and_widths__3143__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

            mercury__require__expect_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_3[5]), (MR_String) "predicate \140ml_backend.ml_unify_gen.cons_id_arg_types_and_widths\'/7", (MR_String) "extra args in static struct");
            mercury__list__det_split_list_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), NumExtraArgs_34, ArgVars_9, &ExtraArgs_35, &NonExtraArgs_36);
            Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_32, (MR_Integer) 2))));
            succeeded = ((((MR_tag((MR_Word) Var_50)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_50, (MR_Integer) 0))) == (MR_Integer) 13)));
            if (succeeded)
            {
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
ml_backend__ml_unify_gen__ml_gen_dynamic_construct_args_12_p_0_7(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_construct_args__1222__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_construct_args_12_p_0_6(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_construct_args__1212__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_construct_args_12_p_0_5(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_construct_args__1201__2_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_construct_args_12_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_construct_args__1193__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_construct_args_12_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_construct_args__1201__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_construct_args_12_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_construct_args__1181__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_construct_args_12_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_construct_args__1187__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_construct_args_12_p_0(
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
    ;
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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_construct_args\'/12", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_203 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_204 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_construct_args\'/12", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word ArgMode_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgModes_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgVar_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_204, (MR_Integer) 0))));
        MR_Word ConsArgType_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_204, (MR_Integer) 1))));
        MR_Word ArgPosWidth_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_204, (MR_Integer) 2))));
        MR_Word Lval_68;
        MR_Word ArgType_69;
        MR_Word ModuleInfo_70;
        MR_Word HighLevelData_71;
        MR_Word ArgWidth_72;
        MR_Word BoxedArgType_73;
        MR_Word MLDS_Type_74;
        MR_Integer CurOffset_77;
        MR_Integer PrevOffset_79;
        MR_Word STATE_VARIABLE_MayUseAtomic_122_122;
        MR_Word STATE_VARIABLE_TakeAddr_141_141;
        MR_Integer Var_189;

        ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_1, ArgVar_65, &Lval_68);
        ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_1, ArgVar_65, &ArgType_69);
        ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_1, &ModuleInfo_70);
        check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(ModuleInfo_70, ArgType_69, STATE_VARIABLE_MayUseAtomic_0_11, &STATE_VARIABLE_MayUseAtomic_122_122);
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
              MR_Word Var_137;

              CurOffset_77 = (MR_Integer) ((MR_Unsigned) PrevOffset0_6 + (MR_Unsigned) (MR_Integer) 1);
              CellOffsetInt_78 = (MR_Integer) (CellOffset_76);
              {
                Var_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_137, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[1]));
                MR_hl_field(MR_mktag(0), Var_137, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_dynamic_construct_args_12_p_0_2));
                MR_hl_field(MR_mktag(0), Var_137, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_137, 3) = ((MR_Box) (CurOffset_77));
                MR_hl_field(MR_mktag(0), Var_137, 4) = ((MR_Box) (CellOffsetInt_78));
              }
              mercury__require__expect_3_p_0(Var_137, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_construct_args\'/12", (MR_String) "full");
              PrevOffset_79 = (MR_Integer) ((MR_Unsigned) PrevOffset0_6 + (MR_Unsigned) (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_132;
              MR_Word CellOffset_168 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgPosWidth_67, (MR_Integer) 1))));
              MR_Integer CellOffsetInt_169;

              CurOffset_77 = (MR_Integer) ((MR_Unsigned) PrevOffset0_6 + (MR_Unsigned) (MR_Integer) 1);
              CellOffsetInt_169 = (MR_Integer) (CellOffset_168);
              {
                Var_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_132, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[1]));
                MR_hl_field(MR_mktag(0), Var_132, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_dynamic_construct_args_12_p_0_1));
                MR_hl_field(MR_mktag(0), Var_132, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_132, 3) = ((MR_Box) (CurOffset_77));
                MR_hl_field(MR_mktag(0), Var_132, 4) = ((MR_Box) (CellOffsetInt_169));
              }
              mercury__require__expect_3_p_0(Var_132, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_construct_args\'/12", (MR_String) "double");
              PrevOffset_79 = (MR_Integer) ((MR_Unsigned) PrevOffset0_6 + (MR_Unsigned) (MR_Integer) 2);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_127;
                  MR_Word CellOffset_170 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 2))));
                  MR_Integer CellOffsetInt_171;

                  CurOffset_77 = (MR_Integer) ((MR_Unsigned) PrevOffset0_6 + (MR_Unsigned) (MR_Integer) 1);
                  CellOffsetInt_171 = (MR_Integer) (CellOffset_170);
                  {
                    Var_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_127, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[1]));
                    MR_hl_field(MR_mktag(0), Var_127, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_dynamic_construct_args_12_p_0_4));
                    MR_hl_field(MR_mktag(0), Var_127, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_127, 3) = ((MR_Box) (CurOffset_77));
                    MR_hl_field(MR_mktag(0), Var_127, 4) = ((MR_Box) (CellOffsetInt_171));
                  }
                  mercury__require__expect_3_p_0(Var_127, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_construct_args\'/12", (MR_String) "first");
                  PrevOffset_79 = (MR_Integer) ((MR_Unsigned) PrevOffset0_6 + (MR_Unsigned) (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_193;
                  MR_Word CellOffset_196 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 2))));
                  MR_Integer CellOffsetInt_197;

                  CurOffset_77 = PrevOffset0_6;
                  CellOffsetInt_197 = (MR_Integer) (CellOffset_196);
                  {
                    Var_193 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_193, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[1]));
                    MR_hl_field(MR_mktag(0), Var_193, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_dynamic_construct_args_12_p_0_5));
                    MR_hl_field(MR_mktag(0), Var_193, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_193, 3) = ((MR_Box) (CurOffset_77));
                    MR_hl_field(MR_mktag(0), Var_193, 4) = ((MR_Box) (CellOffsetInt_197));
                  }
                  mercury__require__expect_3_p_0(Var_193, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_construct_args\'/12", (MR_String) "shifted");
                  PrevOffset_79 = PrevOffset0_6;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_123;
                  MR_Word CellOffset_172 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 2))));
                  MR_Integer CellOffsetInt_173;

                  CurOffset_77 = PrevOffset0_6;
                  CellOffsetInt_173 = (MR_Integer) (CellOffset_172);
                  {
                    Var_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_123, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[1]));
                    MR_hl_field(MR_mktag(0), Var_123, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_dynamic_construct_args_12_p_0_3));
                    MR_hl_field(MR_mktag(0), Var_123, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_123, 3) = ((MR_Box) (CurOffset_77));
                    MR_hl_field(MR_mktag(0), Var_123, 4) = ((MR_Box) (CellOffsetInt_173));
                  }
                  mercury__require__expect_3_p_0(Var_123, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_construct_args\'/12", (MR_String) "shifted");
                  PrevOffset_79 = PrevOffset0_6;
                }
                break;
            }
            break;
        }
        succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_TakeAddr_0_8)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_189 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_TakeAddr_0_8, (MR_Integer) 0))));
          STATE_VARIABLE_TakeAddr_141_141 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_TakeAddr_0_8, (MR_Integer) 1))));
          succeeded = (CurArgNum_5 == Var_189);
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
          MR_Word Var_142;
          MR_Word Var_146;
          MR_Word Var_148;
          MR_Word Var_151;
          MR_Integer Var_152;

          {
            Var_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_142, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[2]));
            MR_hl_field(MR_mktag(0), Var_142, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_dynamic_construct_args_12_p_0_6));
            MR_hl_field(MR_mktag(0), Var_142, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_142, 3) = ((MR_Box) (ArgWidth_72));
            MR_hl_field(MR_mktag(0), Var_142, 4) = ((MR_Box) ((MR_Integer) 2));
          }
          mercury__require__expect_3_p_0(Var_142, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_construct_args\'/12", (MR_String) "taking address of non word-sized argument");
          {
            Var_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_146, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
            MR_hl_field(MR_mktag(3), Var_146, 1) = ((MR_Box) (MLDS_Type_74));
          }
          {
            Rval_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Rval_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Rval_92, 1) = ((MR_Box) (Var_146));
          }
          {
            RvalMLDSTypeWidth_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), RvalMLDSTypeWidth_93, 0) = ((MR_Box) (Rval_92));
            MR_hl_field(MR_mktag(0), RvalMLDSTypeWidth_93, 1) = ((MR_Box) (MLDS_Type_74));
            MR_hl_field(MR_mktag(0), RvalMLDSTypeWidth_93, 2) = ((MR_Box) (ArgPosWidth_67));
            MR_hl_field(MR_mktag(0), RvalMLDSTypeWidth_93, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          Offset_94 = ml_backend__ml_unify_gen__ml_calc_field_offset_3_f_0(NumExtraArgs_4, AllArgVarsTypesWidths_7, CurArgNum_5);
          Var_151 = (MR_Word) (CurOffset_77);
          {
            Var_148 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_148, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[3]));
            MR_hl_field(MR_mktag(0), Var_148, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_dynamic_construct_args_12_p_0_7));
            MR_hl_field(MR_mktag(0), Var_148, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_148, 3) = ((MR_Box) (Offset_94));
            MR_hl_field(MR_mktag(0), Var_148, 4) = ((MR_Box) (Var_151));
          }
          mercury__require__expect_3_p_0(Var_148, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_construct_args\'/12", (MR_String) "Offset != CurOffset");
          OrigMLDS_Type_95 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_70, ConsArgType_66);
          {
            TakeAddrInfo_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TakeAddrInfo_96, 0) = ((MR_Box) (ArgVar_65));
            MR_hl_field(MR_mktag(0), TakeAddrInfo_96, 1) = ((MR_Box) (Offset_94));
            MR_hl_field(MR_mktag(0), TakeAddrInfo_96, 2) = ((MR_Box) (OrigMLDS_Type_95));
            MR_hl_field(MR_mktag(0), TakeAddrInfo_96, 3) = ((MR_Box) (MLDS_Type_74));
          }
          Var_152 = (MR_Integer) ((MR_Unsigned) CurArgNum_5 + (MR_Unsigned) (MR_Integer) 1);
          ml_backend__ml_unify_gen__ml_gen_dynamic_construct_args_12_p_0(Info_1, Var_203, ArgModes_56, NumExtraArgs_4, Var_152, PrevOffset_79, AllArgVarsTypesWidths_7, STATE_VARIABLE_TakeAddr_141_141, &TakeAddrInfosTail_97, &TailRvalsMLDSTypesWidths_98, STATE_VARIABLE_MayUseAtomic_122_122, STATE_VARIABLE_MayUseAtomic_12);
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
            MR_Integer Var_155 = (MR_Integer) ((MR_Unsigned) CurArgNum_5 + (MR_Unsigned) (MR_Integer) 1);
            MR_Word next_value_of_HeadVar__2_2 = Var_203;
            MR_Word next_value_of_HeadVar__3_3 = ArgModes_56;
            MR_Integer next_value_of_CurArgNum_5 = Var_155;
            MR_Integer next_value_of_PrevOffset0_6 = PrevOffset_79;
            MR_Word next_value_of_STATE_VARIABLE_MayUseAtomic_0_11 = STATE_VARIABLE_MayUseAtomic_122_122;

            // direct tailcall eliminated
            ;
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
            MR_Word MaybePackedArgVar_111;
            MR_Integer Var_164;
            MR_Word Rval_174;
            MR_Word RvalMLDSTypeWidth_175;
            MR_Word TailRvalsMLDSTypesWidths_176;
            MR_Word Var_159;
            MR_Word Var_190;

            check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_70, RHSInsts_100, ArgType_69, &Var_190);
            succeeded = ((MR_Integer) 0 == Var_190);
            if (succeeded)
            {
              Var_159 = check_hlds__type_util__is_either_type_a_dummy_3_f_0(ModuleInfo_70, ArgType_69, ConsArgType_66);
              succeeded = (Var_159 == (MR_Integer) 1);
            }
            if (succeeded)
            {
              MR_Word Var_161;

              {
                Var_161 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_161, 0) = ((MR_Box) (Lval_68));
              }
              ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_70, ArgType_69, BoxedArgType_73, (MR_Integer) 0, Var_161, &Rval_174);
            }
            else
            {
              MR_Word Var_162;

              {
                Var_162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_162, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
                MR_hl_field(MR_mktag(3), Var_162, 1) = ((MR_Box) (MLDS_Type_74));
              }
              {
                Rval_174 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Rval_174, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Rval_174, 1) = ((MR_Box) (Var_162));
              }
            }
            switch (MR_tag((MR_Word) ArgPosWidth_67)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                MaybePackedArgVar_111 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                MaybePackedArgVar_111 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word NumBits_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 3))));
                      MR_Word Fill_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 5))));
                      MR_Word PackedArgVar_110;

                      {
                        PackedArgVar_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), PackedArgVar_110, 0) = ((MR_Box) (ArgVar_65));
                        MR_hl_field(MR_mktag(0), PackedArgVar_110, 1) = ((MR_Box) (((MR_Box) ((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(0), PackedArgVar_110, 2) = ((MR_Box) (NumBits_103));
                        MR_hl_field(MR_mktag(0), PackedArgVar_110, 3) = ((MR_Box) (Fill_105));
                      }
                      {
                        MaybePackedArgVar_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), MaybePackedArgVar_111, 0) = ((MR_Box) (PackedArgVar_110));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word NumBits_199 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 4))));
                      MR_Word Fill_200 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 6))));
                      MR_Word Shift_201 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_67, (MR_Integer) 3))));
                      MR_Word PackedArgVar_202;

                      {
                        PackedArgVar_202 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), PackedArgVar_202, 0) = ((MR_Box) (ArgVar_65));
                        MR_hl_field(MR_mktag(0), PackedArgVar_202, 1) = ((MR_Box) (Shift_201));
                        MR_hl_field(MR_mktag(0), PackedArgVar_202, 2) = ((MR_Box) (NumBits_199));
                        MR_hl_field(MR_mktag(0), PackedArgVar_202, 3) = ((MR_Box) (Fill_200));
                      }
                      {
                        MaybePackedArgVar_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), MaybePackedArgVar_111, 0) = ((MR_Box) (PackedArgVar_202));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    MaybePackedArgVar_111 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                    break;
                }
                break;
            }
            {
              RvalMLDSTypeWidth_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), RvalMLDSTypeWidth_175, 0) = ((MR_Box) (Rval_174));
              MR_hl_field(MR_mktag(0), RvalMLDSTypeWidth_175, 1) = ((MR_Box) (MLDS_Type_74));
              MR_hl_field(MR_mktag(0), RvalMLDSTypeWidth_175, 2) = ((MR_Box) (ArgPosWidth_67));
              MR_hl_field(MR_mktag(0), RvalMLDSTypeWidth_175, 3) = ((MR_Box) (MaybePackedArgVar_111));
            }
            Var_164 = (MR_Integer) ((MR_Unsigned) CurArgNum_5 + (MR_Unsigned) (MR_Integer) 1);
            ml_backend__ml_unify_gen__ml_gen_dynamic_construct_args_12_p_0(Info_1, Var_203, ArgModes_56, NumExtraArgs_4, Var_164, PrevOffset_79, AllArgVarsTypesWidths_7, STATE_VARIABLE_TakeAddr_0_8, HeadVar__9_9, &TailRvalsMLDSTypesWidths_176, STATE_VARIABLE_MayUseAtomic_122_122, STATE_VARIABLE_MayUseAtomic_12);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__10_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RvalMLDSTypeWidth_175));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailRvalsMLDSTypesWidths_176));
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

    conv0_LambdaHeadVar__2_19 = ml_backend__ml_unify_gen__IntroducedFrom__func__ml_calc_field_offset__1283__1_1_f_0(((MR_Word) (wrapper_arg_1)));
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

    ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(Info_6, &HighLevelData_26);
    switch (HighLevelData_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer OffsetInt_27 = (MR_Integer) (Offset_23);
          MR_Word FieldId_28;
          MR_Word SourceRval_29;
          MR_Word AddrLval_30;
          MR_Word AddrVarType_31;
          MR_Word ModuleInfo_32;
          MR_Word MLDS_AddrVarType_33;
          MR_Word CastSourceRval_34;
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word Var_39;

          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_37, 0) = ((MR_Box) (OffsetInt_27));
          }
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (Var_37));
          }
          {
            FieldId_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FieldId_28, 0) = ((MR_Box) (Var_36));
          }
          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_39, 0) = ((MR_Box) (CellLval_2));
          }
          {
            Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (MaybePtag_4));
            MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (Var_39));
            MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) (CellType_3));
            MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (FieldId_28));
            MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) (FieldType_25));
          }
          {
            SourceRval_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), SourceRval_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), SourceRval_29, 1) = ((MR_Box) (Var_38));
          }
          ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_6, AddrVar_22, &AddrLval_30);
          ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_6, AddrVar_22, &AddrVarType_31);
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_6, &ModuleInfo_32);
          MLDS_AddrVarType_33 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_32, AddrVarType_31);
          {
            CastSourceRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CastSourceRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), CastSourceRval_34, 1) = ((MR_Box) (MLDS_AddrVarType_33));
            MR_hl_field(MR_mktag(3), CastSourceRval_34, 2) = ((MR_Box) (SourceRval_29));
          }
          Assign_20 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(AddrLval_30, CastSourceRval_34, Context_5);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_35;
          MR_Word AddrLval_40;

          ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_6, AddrVar_22, &AddrLval_40);
          {
            Var_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_35, 0) = ((MR_Box) (CellLval_2));
          }
          Assign_20 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(AddrLval_40, Var_35, Context_5);
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
ml_backend__ml_unify_gen____Unify____do_all_partials_assign_right_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unify_gen____Unify____do_all_partials_assign_right_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____do_all_partials_assign_right_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_unify_gen____Compare____do_all_partials_assign_right_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
	MR_register_type_ctor_info(&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_do_all_partials_assign_right_0);
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
