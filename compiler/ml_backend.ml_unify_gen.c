/*
** Automatically generated from `ml_unify_gen.m'
** by the Mercury compiler,
** version rotd-2018-06-26
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
#include "uint.mih"
#include "uint8.mih"
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

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen__maybe__ti_maybe_1hlds__hlds_data__type_ctor_info_ptag_0;

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_field_gen_0_0[4];

static const MR_DuFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_field_gen_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_field_gen_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_ptag_ordered_field_gen_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_name_ordered_field_gen_0[1];

static const MR_Integer ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_field_gen_0[1];

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
ml_backend__ml_unify_gen__IntroducedFrom__func__construct_static_ground_term__3208__1_1_f_0(
  MR_Word LambdaHeadVar__1_43);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__cons_id_arg_types_and_widths__3115__2_2_p_0(
  MR_Word MayHaveExtraArgs_10,
  MR_Word HeadVar__2_36);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__cons_id_arg_types_and_widths__3115__1_2_p_0(
  MR_Word MayHaveExtraArgs_10,
  MR_Word HeadVar__2_36);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_const_static_compound__2857__1_1_f_0(
  MR_Word LambdaHeadVar__1_38);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_109_108_95_103_101_110_95_99_111_110_115_116_95_115_116_97_116_105_99_95_99_111_109_112_111_117_110_100_95_95_50_56_53_55_95_95_49_95_95_91_49_93_95_48_1_f_0(void);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_const_struct_tag__2810__1_2_p_0(
  MR_Word AddedBy_37,
  MR_Word HeadVar__2_78);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_const_struct_tag__2793__1_2_p_0(
  MR_Word AddedBy_37,
  MR_Word HeadVar__2_82);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2528__6_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_190);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2600__1_2_p_0(
  MR_Word AddedBy_77,
  MR_Word HeadVar__2_88);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2584__1_2_p_0(
  MR_Word AddedBy_77,
  MR_Word HeadVar__2_92);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2528__5_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_177);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2528__4_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_166);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2528__3_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_155);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2528__2_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_144);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2528__1_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_122);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word_loop__1731__2_2_p_0(
  MR_Word HeadPackedArgVars_89,
  MR_Word HeadVar__2_117);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word_loop__1731__1_2_p_0(
  MR_Word HeadPackedArgVars_89,
  MR_Word HeadVar__2_117);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__1558__2_2_p_0(
  MR_Word TakeAddr_6,
  MR_Word HeadVar__2_22);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__1558__1_2_p_0(
  MR_Word TakeAddr_6,
  MR_Word HeadVar__2_22);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__decide_field_gen__1516__1_2_p_0(
  MR_Word TypeCtor_21,
  MR_Word VarTypeCtor_24);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_extra_arg_assigns__1258__1_2_p_0(
  MR_Word HighLevelData_28,
  MR_Word HeadVar__2_41);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_construct_args__1187__1_2_p_0(
  MR_Word ArgWidth_57,
  MR_Word HeadVar__2_109);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_box_extra_const_rval_list_lld__1088__1_2_p_0(
  MR_Word Width_23,
  MR_Word HeadVar__2_30);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__774__1_2_p_0(
  MR_Word PrimaryTag_44,
  MR_Word LambdaHeadVar__1_83);

static void MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__755__1_3_p_0(
  MR_Word STATE_VARIABLE_Info_0_75,
  MR_Word LambdaHeadVar__1_80,
  MR_Word * LambdaHeadVar__2_81);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_new_object_statically__717__1_1_f_0(
  MR_Word LambdaHeadVar__1_49);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_new_object_dynamically__656__1_1_f_0(
  MR_Word LambdaHeadVar__1_67);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_construct_compound__539__1_2_p_0(
  MR_Word AddedBy_33,
  MR_Word HeadVar__2_46);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_construct_compound__524__1_2_p_0(
  MR_Word AddedBy_33,
  MR_Word HeadVar__2_50);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object__573__1_2_p_0(
  MR_Word TakeAddr_24,
  MR_Word HeadVar__2_47);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object__561__1_2_p_0(
  MR_Word ExplicitSectag_19,
  MR_Word HeadVar__2_40);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__214__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_75);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__247__1_2_p_0(
  MR_Word MaybeSizeProfInfo_39,
  MR_Word HeadVar__2_70);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__235__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_66);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__181__1_2_p_0(
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
  MR_Word STATE_VARIABLE_ConstStructMap_0_69,
  MR_Word * STATE_VARIABLE_ConstStructMap_70,
  MR_Word STATE_VARIABLE_GlobalData_0_71,
  MR_Word * STATE_VARIABLE_GlobalData_72);

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
  MR_Word Ptag_20,
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
  MR_Word STATE_VARIABLE_GlobalData_0_81,
  MR_Word * STATE_VARIABLE_GlobalData_82,
  MR_Word STATE_VARIABLE_GroundTermMap_0_83,
  MR_Word * STATE_VARIABLE_GroundTermMap_84);

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
  MR_Word Ptag_27,
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
  MR_Word TypeInfo_for_Arg_56,
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
  MR_Word STATE_VARIABLE_Info_0_58,
  MR_Word * STATE_VARIABLE_Info_59);

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
  MR_Word Ptag_9,
  MR_Word Mode_10,
  MR_Word ArgVar_11,
  MR_Word Var_12,
  MR_Word Context_13,
  MR_Word * Stmts_14);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_11_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_11_p_0(
  MR_Word FieldGen_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer CurArgNum_4,
  MR_Word Context_5,
  MR_Word TakeAddr_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_95_91_49_50_93_95_48_16_p_0(
  MR_Word FieldGen_17,
  MR_Word ArgVar_18,
  MR_Word CtorArgRepn_19,
  MR_Word Mode_20,
  MR_Word ArgVarRepns_21,
  MR_Word Modes_22,
  MR_Word * LeftOverArgVarRepns_23,
  MR_Word * LeftOverModes_24,
  MR_Integer CurArgNum_25,
  MR_Integer * LeftOverArgNum_26,
  MR_Word Context_27,
  MR_Word * Defns_29,
  MR_Word * Stmts_30,
  MR_Word STATE_VARIABLE_Info_0_64,
  MR_Word * STATE_VARIABLE_Info_65);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_57_93_95_48_15_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_57_93_95_48_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Integer CurArgNum_6,
  MR_Integer * LeftOverArgNum_7,
  MR_Word HeadVar__8_8,
  MR_Word STATE_VARIABLE_AllPartialsRight_0_10,
  MR_Word * STATE_VARIABLE_AllPartialsRight_11,
  MR_Word * HeadVar__12_12,
  MR_Word * HeadVar__13_13,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

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
  MR_Word STATE_VARIABLE_Info_0_106,
  MR_Word * STATE_VARIABLE_Info_107);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_construct_direct_arg_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Ptag_11,
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
  MR_Word Ptag_16,
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
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42);

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
  MR_Word Ptag_18,
  MR_Word ExplicitSectag_19,
  MR_Word Var_20,
  MR_Word ExtraRvalsTypesWidths_21,
  MR_Word ArgVars_22,
  MR_Word ArgModes_23,
  MR_Word TakeAddr_24,
  MR_Word CellToReuse_25,
  MR_Word Context_26,
  MR_Word * Defns_27,
  MR_Word * Stmts_28,
  MR_Word STATE_VARIABLE_Info_0_75,
  MR_Word * STATE_VARIABLE_Info_76);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_cons_id_to_tag_3_p_0(
  MR_Word Info_4,
  MR_Word ConsId_5,
  MR_Word * ConsTag_6);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_11_p_1_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_11_p_1(
  MR_Word FieldGen_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer CurArgNum_4,
  MR_Word Context_5,
  MR_Word TakeAddr_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_take_addr_of_arg_5_p_0(
  MR_Word Info_6,
  MR_Word ArgVar_7,
  MR_Word CtorArgRepn_8,
  MR_Word CurOffset_9,
  MR_Word * TakeAddrInfo_10);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_in_word_16_p_1(
  MR_Word FieldGen_17,
  MR_Word ArgVar_18,
  MR_Word CtorArgRepn_19,
  MR_Word Mode_20,
  MR_Word ArgVarRepns_21,
  MR_Word Modes_22,
  MR_Word * LeftOverArgVarRepns_23,
  MR_Word * LeftOverModes_24,
  MR_Integer CurArgNum_25,
  MR_Integer * LeftOverArgNum_26,
  MR_Word Context_27,
  MR_Word TakeAddr_28,
  MR_Word * Defns_29,
  MR_Word * Stmts_30,
  MR_Word STATE_VARIABLE_Info_0_64,
  MR_Word * STATE_VARIABLE_Info_65);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_in_word_loop_15_p_1_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_in_word_loop_15_p_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Integer CurArgNum_6,
  MR_Integer * LeftOverArgNum_7,
  MR_Word HeadVar__8_8,
  MR_Word HeadVar__9_9,
  MR_Word STATE_VARIABLE_AllPartialsRight_0_10,
  MR_Word * STATE_VARIABLE_AllPartialsRight_11,
  MR_Word * HeadVar__12_12,
  MR_Word * HeadVar__13_13,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_arg_10_p_0(
  MR_Word FieldGen_11,
  MR_Word ArgVar_12,
  MR_Word CtorArgRepn_13,
  MR_Word Mode_14,
  MR_Integer ArgNum_15,
  MR_Word Context_16,
  MR_Word * PackedArgVars_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_56,
  MR_Word * STATE_VARIABLE_Info_57);

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
  MR_Word * Ptag_6,
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

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_10_p_0(
  MR_Word ConsIdOrClosure_11,
  MR_Word MaybeCtorName_12,
  MR_Word Ptag_13,
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
  MR_Word Ptag_23,
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
  MR_Word Ptag_16,
  MR_Word ExplicitSectag_17,
  MR_Word Var_18,
  MR_Word ExtraRvalsTypesWidths_19,
  MR_Word ArgVars_20,
  MR_Word ArgModes_21,
  MR_Word TakeAddr_22,
  MR_Word Context_23,
  MR_Word * Stmts_24,
  MR_Word STATE_VARIABLE_Info_0_62,
  MR_Word * STATE_VARIABLE_Info_63);

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
ml_backend__ml_unify_gen__ml_gen_dynamic_construct_args_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_construct_args_9_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer CurArgNum_4,
  MR_Word STATE_VARIABLE_TakeAddr_0_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_8,
  MR_Word * STATE_VARIABLE_MayUseAtomic_9);

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

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_2[7][3];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_3[16][5];

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
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0))
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
    ((MR_Box) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_arg_type_and_width_1)),
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_1[2]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0))
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
    ((MR_Box) ((MR_Integer) 24))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[13])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Integer) 24))
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
    ((MR_Box) ((MR_Integer) 0))
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
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_1[2])),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[3])),
    ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_dynamically_13_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[4])),
    ((MR_Box) (ml_backend__ml_unify_gen__construct_static_ground_term_14_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[5])),
    ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_statically_10_p_0_1)),
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
    ((MR_Box) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_mlds_rval_type_and_width_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_typed_rval_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_mlds_rval_type_and_width_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen__list__pti_list_1__plain_ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__list__pti_list_1__plain_ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0))
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
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0))
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

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen__maybe__ti_maybe_1hlds__hlds_data__type_ctor_info_ptag_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0)
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_field_gen_0_0[4] = {
  (MR_PseudoTypeInfo) (&ml_backend__ml_unify_gen__maybe__ti_maybe_1hlds__hlds_data__type_ctor_info_ptag_0),
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
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cell_offset_0),
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
ml_backend__ml_unify_gen__IntroducedFrom__func__construct_static_ground_term__3208__1_1_f_0(
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
ml_backend__ml_unify_gen__IntroducedFrom__pred__cons_id_arg_types_and_widths__3115__2_2_p_0(
  MR_Word MayHaveExtraArgs_10,
  MR_Word HeadVar__2_36)
{
  {
    MR_bool succeeded = (MayHaveExtraArgs_10 == HeadVar__2_36);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__cons_id_arg_types_and_widths__3115__1_2_p_0(
  MR_Word MayHaveExtraArgs_10,
  MR_Word HeadVar__2_36)
{
  {
    MR_bool succeeded = (MayHaveExtraArgs_10 == HeadVar__2_36);

    return succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_const_static_compound__2857__1_1_f_0(
  MR_Word LambdaHeadVar__1_38)
{
  {
    MR_Word LambdaHeadVar__2_39;

    LambdaHeadVar__2_39 = ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_109_108_95_103_101_110_95_99_111_110_115_116_95_115_116_97_116_105_99_95_99_111_109_112_111_117_110_100_95_95_50_56_53_55_95_95_49_95_95_91_49_93_95_48_1_f_0();
    return LambdaHeadVar__2_39;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_109_108_95_103_101_110_95_99_111_110_115_116_95_115_116_97_116_105_99_95_99_111_109_112_111_117_110_100_95_95_50_56_53_55_95_95_49_95_95_91_49_93_95_48_1_f_0(void)
{
  {
    MR_Word LambdaHeadVar__2_39;

    LambdaHeadVar__2_39 = parse_tree__builtin_lib_types__void_type_0_f_0();
    return LambdaHeadVar__2_39;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_const_struct_tag__2810__1_2_p_0(
  MR_Word AddedBy_37,
  MR_Word HeadVar__2_78)
{
  {
    MR_bool succeeded = (AddedBy_37 == HeadVar__2_78);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_const_struct_tag__2793__1_2_p_0(
  MR_Word AddedBy_37,
  MR_Word HeadVar__2_82)
{
  {
    MR_bool succeeded = (AddedBy_37 == HeadVar__2_82);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2528__6_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_190)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[4]), ((MR_Box) (ArgVars_25)), ((MR_Box) (HeadVar__2_190)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2600__1_2_p_0(
  MR_Word AddedBy_77,
  MR_Word HeadVar__2_88)
{
  {
    MR_bool succeeded = (AddedBy_77 == HeadVar__2_88);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2584__1_2_p_0(
  MR_Word AddedBy_77,
  MR_Word HeadVar__2_92)
{
  {
    MR_bool succeeded = (AddedBy_77 == HeadVar__2_92);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2528__5_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_177)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[4]), ((MR_Box) (ArgVars_25)), ((MR_Box) (HeadVar__2_177)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2528__4_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_166)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[4]), ((MR_Box) (ArgVars_25)), ((MR_Box) (HeadVar__2_166)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2528__3_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_155)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[4]), ((MR_Box) (ArgVars_25)), ((MR_Box) (HeadVar__2_155)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2528__2_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_144)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[4]), ((MR_Box) (ArgVars_25)), ((MR_Box) (HeadVar__2_144)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2528__1_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_122)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[4]), ((MR_Box) (ArgVars_25)), ((MR_Box) (HeadVar__2_122)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word_loop__1731__2_2_p_0(
  MR_Word HeadPackedArgVars_89,
  MR_Word HeadVar__2_117)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[3]), ((MR_Box) (HeadPackedArgVars_89)), ((MR_Box) (HeadVar__2_117)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word_loop__1731__1_2_p_0(
  MR_Word HeadPackedArgVars_89,
  MR_Word HeadVar__2_117)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[3]), ((MR_Box) (HeadPackedArgVars_89)), ((MR_Box) (HeadVar__2_117)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__1558__2_2_p_0(
  MR_Word TakeAddr_6,
  MR_Word HeadVar__2_22)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[1]), ((MR_Box) (TakeAddr_6)), ((MR_Box) (HeadVar__2_22)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__1558__1_2_p_0(
  MR_Word TakeAddr_6,
  MR_Word HeadVar__2_22)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[1]), ((MR_Box) (TakeAddr_6)), ((MR_Box) (HeadVar__2_22)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__decide_field_gen__1516__1_2_p_0(
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
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_extra_arg_assigns__1258__1_2_p_0(
  MR_Word HighLevelData_28,
  MR_Word HeadVar__2_41)
{
  {
    MR_bool succeeded = (HighLevelData_28 == HeadVar__2_41);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_construct_args__1187__1_2_p_0(
  MR_Word ArgWidth_57,
  MR_Word HeadVar__2_109)
{
  {
    MR_bool succeeded = (ArgWidth_57 == HeadVar__2_109);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_box_extra_const_rval_list_lld__1088__1_2_p_0(
  MR_Word Width_23,
  MR_Word HeadVar__2_30)
{
  {
    MR_bool succeeded = (Width_23 == HeadVar__2_30);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__774__1_2_p_0(
  MR_Word PrimaryTag_44,
  MR_Word LambdaHeadVar__1_83)
{
  {
    MR_bool succeeded;
    uint8_t Var_120 = (uint8_t) (LambdaHeadVar__1_83);
    uint8_t Var_121 = (uint8_t) (PrimaryTag_44);

    succeeded = (Var_120 == Var_121);
    succeeded = !(succeeded);
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__755__1_3_p_0(
  MR_Word STATE_VARIABLE_Info_0_75,
  MR_Word LambdaHeadVar__1_80,
  MR_Word * LambdaHeadVar__2_81)
{
  {
    MR_Word ReuseConsTag_37;
    MR_Word _ReuseOffSet_38;
    MR_Integer _ReuseArgNum_39;

    ml_backend__ml_unify_gen__ml_cons_id_to_tag_3_p_0(STATE_VARIABLE_Info_0_75, LambdaHeadVar__1_80, &ReuseConsTag_37);
    ml_backend__ml_unify_gen__ml_tag_initial_offset_and_argnum_4_p_0(ReuseConsTag_37, LambdaHeadVar__2_81, &_ReuseOffSet_38, &_ReuseArgNum_39);
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_new_object_statically__717__1_1_f_0(
  MR_Word LambdaHeadVar__1_49)
{
  {
    MR_Word LambdaHeadVar__2_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_49, (MR_Integer) 0))));

    return LambdaHeadVar__2_50;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_new_object_dynamically__656__1_1_f_0(
  MR_Word LambdaHeadVar__1_67)
{
  {
    MR_Word LambdaHeadVar__2_68;
    MR_Word Rv_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_67, (MR_Integer) 0))));
    MR_Word T_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_67, (MR_Integer) 1))));

    {
      LambdaHeadVar__2_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_68, 0) = ((MR_Box) (Rv_72));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_68, 1) = ((MR_Box) (T_73));
    }
    return LambdaHeadVar__2_68;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_construct_compound__539__1_2_p_0(
  MR_Word AddedBy_33,
  MR_Word HeadVar__2_46)
{
  {
    MR_bool succeeded = (AddedBy_33 == HeadVar__2_46);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_construct_compound__524__1_2_p_0(
  MR_Word AddedBy_33,
  MR_Word HeadVar__2_50)
{
  {
    MR_bool succeeded = (AddedBy_33 == HeadVar__2_50);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object__573__1_2_p_0(
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
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object__561__1_2_p_0(
  MR_Word ExplicitSectag_19,
  MR_Word HeadVar__2_40)
{
  {
    MR_bool succeeded = (ExplicitSectag_19 == HeadVar__2_40);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__214__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_75)
{
  {
    MR_bool succeeded = (CodeModel_9 == HeadVar__2_75);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__247__1_2_p_0(
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
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__235__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_66)
{
  {
    MR_bool succeeded = (CodeModel_9 == HeadVar__2_66);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__181__1_2_p_0(
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
      MR_Integer Var_17;
      MR_Integer Var_18;

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        Var_17 = (MR_Integer) (ArgX2_5);
        Var_18 = (MR_Integer) (ArgY2_6);
        succeeded = (Var_17 == Var_18);
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
    if ((HeadVar__2_2 == (MR_Word) ((MR_Integer) 0)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Integer) 0)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Integer) 0)))
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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Integer) 0)))
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

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
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
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
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

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
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
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
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

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
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

    mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1);

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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_const_struct_tag__2810__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_const_struct_tag__2793__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
  MR_Word STATE_VARIABLE_ConstStructMap_0_69,
  MR_Word * STATE_VARIABLE_ConstStructMap_70,
  MR_Word STATE_VARIABLE_GlobalData_0_71,
  MR_Word * STATE_VARIABLE_GlobalData_72)
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
              ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0(Info_12, ConstNum_13, Type_14, MLDS_Type_15, ConsId_16, ConsTag_17, (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0)))), (MR_Word) ((MR_Integer) 0), Args_18, STATE_VARIABLE_ConstStructMap_0_69, STATE_VARIABLE_ConstStructMap_70, STATE_VARIABLE_GlobalData_0_71, STATE_VARIABLE_GlobalData_72);
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
            if ((Args_18 == (MR_Word) ((MR_Integer) 0)))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_tag\'/11", (MR_String) "no_tag arity != 1");
                return;
              }
            }
            else
            {
              MR_Word Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 1))));
              MR_Word Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 0))));

              if ((Var_117 == (MR_Word) ((MR_Integer) 0)))
              {
                MR_Word ArgRvalTypeWidth_23;
                MR_Word ArgRval_24;
                MR_Word Rval_28;
                MR_Word GroundTerm_29;

                ml_backend__ml_unify_gen__ml_gen_const_struct_arg_7_p_0(Info_12, STATE_VARIABLE_ConstStructMap_0_69, Var_118, (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_1[9])), &ArgRvalTypeWidth_23, STATE_VARIABLE_GlobalData_0_71, STATE_VARIABLE_GlobalData_72);
                ArgRval_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgRvalTypeWidth_23, (MR_Integer) 0))));
                Rval_28 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(MLDS_Type_15, ConsTag_17, ArgRval_24);
                {
                  GroundTerm_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), GroundTerm_29, 0) = ((MR_Box) (Rval_28));
                  MR_hl_field(MR_mktag(0), GroundTerm_29, 1) = ((MR_Box) (Type_14));
                  MR_hl_field(MR_mktag(0), GroundTerm_29, 2) = ((MR_Box) (MLDS_Type_15));
                }
                mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstNum_13, ((MR_Box) (GroundTerm_29)), STATE_VARIABLE_ConstStructMap_0_69, STATE_VARIABLE_ConstStructMap_70);
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
              MR_Word Ptag_115 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1))));

              ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0(Info_12, ConstNum_13, Type_14, MLDS_Type_15, ConsId_16, ConsTag_17, Ptag_115, (MR_Word) ((MR_Integer) 0), Args_18, STATE_VARIABLE_ConstStructMap_0_69, STATE_VARIABLE_ConstStructMap_70, STATE_VARIABLE_GlobalData_0_71, STATE_VARIABLE_GlobalData_72);
            }
            break;
          case (MR_Integer) 12:
            if ((Args_18 == (MR_Word) ((MR_Integer) 0)))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_tag\'/11", (MR_String) "no_tag arity != 1");
                return;
              }
            }
            else
            {
              MR_Word Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 1))));
              MR_Word Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 0))));

              if ((Var_117 == (MR_Word) ((MR_Integer) 0)))
              {
                MR_Word ArgRvalTypeWidth_23;
                MR_Word ArgRval_24;
                MR_Word Rval_28;
                MR_Word GroundTerm_29;

                ml_backend__ml_unify_gen__ml_gen_const_struct_arg_7_p_0(Info_12, STATE_VARIABLE_ConstStructMap_0_69, Var_118, (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_1[9])), &ArgRvalTypeWidth_23, STATE_VARIABLE_GlobalData_0_71, STATE_VARIABLE_GlobalData_72);
                ArgRval_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgRvalTypeWidth_23, (MR_Integer) 0))));
                Rval_28 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(MLDS_Type_15, ConsTag_17, ArgRval_24);
                {
                  GroundTerm_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), GroundTerm_29, 0) = ((MR_Box) (Rval_28));
                  MR_hl_field(MR_mktag(0), GroundTerm_29, 1) = ((MR_Box) (Type_14));
                  MR_hl_field(MR_mktag(0), GroundTerm_29, 2) = ((MR_Box) (MLDS_Type_15));
                }
                mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstNum_13, ((MR_Box) (GroundTerm_29)), STATE_VARIABLE_ConstStructMap_0_69, STATE_VARIABLE_ConstStructMap_70);
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
              MR_Word Ptag_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1))));
              MR_Word ExtraRvals_34;
              MR_Word RemoteSectag_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 2))));
              MR_Unsigned SectagUint_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RemoteSectag_35, (MR_Integer) 0))));
              MR_Word AddedBy_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RemoteSectag_35, (MR_Integer) 1))));
              MR_Word Target_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word UsesConstructors_39;
              MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 1)));

              UsesConstructors_39 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(Target_38);
              switch (UsesConstructors_39) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word StagRval0_40;
                    MR_Word HighLevelData_41;
                    MR_Word StagRval_42;
                    MR_Word Var_79;
                    MR_Word Var_83;
                    MR_Integer Var_84;
                    MR_Unsigned packed_args_1;

                    {
                      Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[11]));
                      MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_const_struct_tag_11_p_0_1));
                      MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_79, 3) = ((MR_Box) (AddedBy_37));
                      MR_hl_field(MR_mktag(0), Var_79, 4) = ((MR_Box) ((MR_Integer) 0));
                    }
                    mercury__require__expect_3_p_0(Var_79, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_tag\'/11", (MR_String) "AddedBy != sectag_added_by_unify");
                    Var_84 = mercury__uint__cast_to_int_1_f_0(SectagUint_36);
                    {
                      Var_83 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_83, 0) = ((MR_Box) (Var_84));
                    }
                    {
                      StagRval0_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), StagRval0_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), StagRval0_40, 1) = ((MR_Box) (Var_83));
                    }
                    packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 1)));
                    HighLevelData_41 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                    switch (HighLevelData_41) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          {
                            StagRval_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), StagRval_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), StagRval_42, 1) = ((MR_Box) ((MR_Integer) 20));
                            MR_hl_field(MR_mktag(3), StagRval_42, 2) = ((MR_Box) (StagRval0_40));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        StagRval_42 = StagRval0_40;
                        break;
                    }
                    {
                      ExtraRvals_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ExtraRvals_34, 0) = ((MR_Box) (StagRval_42));
                      MR_hl_field(MR_mktag(1), ExtraRvals_34, 1) = ((MR_Box) ((MR_Integer) 0));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_75;

                    {
                      Var_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[11]));
                      MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_const_struct_tag_11_p_0_2));
                      MR_hl_field(MR_mktag(0), Var_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_75, 3) = ((MR_Box) (AddedBy_37));
                      MR_hl_field(MR_mktag(0), Var_75, 4) = ((MR_Box) ((MR_Integer) 1));
                    }
                    mercury__require__expect_3_p_0(Var_75, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_tag\'/11", (MR_String) "AddedBy != sectag_added_by_constructor");
                    ExtraRvals_34 = (MR_Word) ((MR_Integer) 0);
                  }
                  break;
              }
              ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0(Info_12, ConstNum_13, Type_14, MLDS_Type_15, ConsId_16, ConsTag_17, Ptag_33, ExtraRvals_34, Args_18, STATE_VARIABLE_ConstStructMap_0_69, STATE_VARIABLE_ConstStructMap_70, STATE_VARIABLE_GlobalData_0_71, STATE_VARIABLE_GlobalData_72);
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

    conv0_LambdaHeadVar__2_39 = ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_const_static_compound__2857__1_1_f_0(((MR_Word) (wrapper_arg_1)));
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
  MR_Word Ptag_20,
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

    ml_backend__ml_unify_gen__cons_id_arg_types_and_widths_7_p_1((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), ModuleInfo_26, (MR_Word) (&ml_backend__ml_unify_gen_scalar_common_2[6]), (MR_Integer) 0, VarType_16, ConsId_18, Args_22, &ArgsTypesWidths_29);
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
  if ((HeadVar__3_3 == (MR_Word) ((MR_Integer) 0)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Integer) 0);
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

    if (((MR_tag((MR_Word) ConstArg_10)) == (MR_Integer) 0))
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
                MR_Word ForeignLang_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                MR_String ForeignTag_48 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                MR_Word Var_84;

                {
                  Var_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                  MR_hl_field(MR_mktag(3), Var_84, 1) = ((MR_Box) (ForeignLang_47));
                  MR_hl_field(MR_mktag(3), Var_84, 2) = ((MR_Box) (ForeignTag_48));
                  MR_hl_field(MR_mktag(3), Var_84, 3) = ((MR_Box) (MLDS_Type_19));
                }
                {
                  Rval0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval0_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Rval0_17, 1) = ((MR_Box) (Var_84));
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
                MR_Word ModuleName0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                MR_String TypeName_50 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                MR_Integer TypeArity_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
                MR_Word ModuleName_52;
                MR_Word MLDS_Module_53;
                MR_Word RttiTypeCtor_54;
                MR_Word RttiId_55;
                MR_Word Const_56;
                MR_Word Var_82;

                ModuleName_52 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_49);
                MLDS_Module_53 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_52);
                {
                  RttiTypeCtor_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), RttiTypeCtor_54, 0) = ((MR_Box) (ModuleName_52));
                  MR_hl_field(MR_mktag(0), RttiTypeCtor_54, 1) = ((MR_Box) (TypeName_50));
                  MR_hl_field(MR_mktag(0), RttiTypeCtor_54, 2) = ((MR_Box) (TypeArity_51));
                }
                {
                  RttiId_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), RttiId_55, 0) = ((MR_Box) (RttiTypeCtor_54));
                  MR_hl_field(MR_mktag(0), RttiId_55, 1) = ((MR_Box) ((MR_Integer) 44));
                }
                {
                  Const_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Const_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                  MR_hl_field(MR_mktag(3), Const_56, 1) = ((MR_Box) (MLDS_Module_53));
                  MR_hl_field(MR_mktag(3), Const_56, 2) = ((MR_Box) (RttiId_55));
                }
                {
                  Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (Const_56));
                }
                {
                  Rval0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval0_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), Rval0_17, 1) = ((MR_Box) (MLDS_Type_19));
                  MR_hl_field(MR_mktag(3), Rval0_17, 2) = ((MR_Box) (Var_82));
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ClassId_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                MR_String Instance_58 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
                MR_Word TCName_59;
                MR_Word Var_79;
                MR_Word Var_80;
                MR_Word ModuleName_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                MR_Word MLDS_Module_93;
                MR_Word RttiId_94;
                MR_Word Const_95;

                MLDS_Module_93 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_92);
                TCName_59 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_57);
                {
                  Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (ModuleName_92));
                  MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Instance_58));
                }
                {
                  RttiId_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), RttiId_94, 0) = ((MR_Box) (TCName_59));
                  MR_hl_field(MR_mktag(1), RttiId_94, 1) = ((MR_Box) (Var_79));
                }
                {
                  Const_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Const_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                  MR_hl_field(MR_mktag(3), Const_95, 1) = ((MR_Box) (MLDS_Module_93));
                  MR_hl_field(MR_mktag(3), Const_95, 2) = ((MR_Box) (RttiId_94));
                }
                {
                  Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_80, 1) = ((MR_Box) (Const_95));
                }
                {
                  Rval0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval0_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), Rval0_17, 1) = ((MR_Box) (MLDS_Type_19));
                  MR_hl_field(MR_mktag(3), Rval0_17, 2) = ((MR_Box) (Var_80));
                }
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word LocalSectag_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                MR_Word LocalSectagSize_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalSectag_43, (MR_Integer) 1))));
                MR_Unsigned SectagWholeWordUint_46 = (MR_Unsigned) (LocalSectagSize_45);
                MR_Word Var_85;
                MR_Word Var_86;
                MR_Integer Var_87;

                Var_87 = mercury__uint__cast_to_int_1_f_0(SectagWholeWordUint_46);
                {
                  Var_86 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_86, 0) = ((MR_Box) (Var_87));
                }
                {
                  Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) (Var_86));
                }
                {
                  Rval0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval0_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), Rval0_17, 1) = ((MR_Box) (MLDS_Type_19));
                  MR_hl_field(MR_mktag(3), Rval0_17, 2) = ((MR_Box) (Var_85));
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
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Integer) 0));
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
    if ((NonLocalList_13 == (MR_Word) ((MR_Integer) 0)))
    {
      *Stmts_8 = (MR_Word) ((MR_Integer) 0);
      *STATE_VARIABLE_Info_34 = STATE_VARIABLE_Info_0_33;
    }
    else
    {
      MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonLocalList_13, (MR_Integer) 1))));
      MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonLocalList_13, (MR_Integer) 0))));

      if ((Var_51 == (MR_Word) ((MR_Integer) 0)))
      {
        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), ((MR_Box) (Var_52)), ((MR_Box) (TermVar_6)));
        if (succeeded)
        {
          MR_Word Conjuncts_15;
          MR_Word Var_39;

          succeeded = ((((MR_tag((MR_Word) GoalExpr_10)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 0))) == (MR_Integer) 2)));
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
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
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
    if ((HeadVar__5_5 == (MR_Word) ((MR_Integer) 0)))
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

      succeeded = ((MR_tag((MR_Word) GoalExpr_47)) == (MR_Integer) 1);
      if (succeeded)
      {
        Unify_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_47, (MR_Integer) 3))));
        succeeded = ((MR_tag((MR_Word) Unify_52)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_52, (MR_Integer) 0))));
          ConsId_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_52, (MR_Integer) 1))));
          ArgVars_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_52, (MR_Integer) 2))));
          SubInfo_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_52, (MR_Integer) 6))));
          succeeded = (SubInfo_60 == (MR_Word) ((MR_Integer) 0));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2528__6_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2600__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2584__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2528__5_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2528__4_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2528__3_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2528__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2528__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
  MR_Word STATE_VARIABLE_GlobalData_0_81,
  MR_Word * STATE_VARIABLE_GlobalData_82,
  MR_Word STATE_VARIABLE_GroundTermMap_0_83,
  MR_Word * STATE_VARIABLE_GroundTermMap_84)
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
              ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0(ModuleInfo_16, Target_17, HighLevelData_18, VarTypes_19, Var_20, VarType_21, MLDS_Type_22, ConsId_23, ConsTag_24, (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0)))), (MR_Word) ((MR_Integer) 0), ArgVars_25, Context_26, STATE_VARIABLE_GlobalData_0_81, STATE_VARIABLE_GlobalData_82, STATE_VARIABLE_GroundTermMap_0_83, STATE_VARIABLE_GroundTermMap_84);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ConstRval_31;
              MR_Word ConstGroundTerm_41;
              MR_Word Var_119;
              MR_Word IntConst_125;

              IntConst_125 = ml_backend__ml_unify_gen__int_tag_to_mlds_rval_const_3_f_0(VarType_21, MLDS_Type_22, (MR_Word) (&ml_backend__ml_unify_gen_scalar_common_5[0]));
              {
                ConstRval_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstRval_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstRval_31, 1) = ((MR_Box) (IntConst_125));
              }
              {
                Var_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_119, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[14]));
                MR_hl_field(MR_mktag(0), Var_119, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_1));
                MR_hl_field(MR_mktag(0), Var_119, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_119, 3) = ((MR_Box) (ArgVars_25));
                MR_hl_field(MR_mktag(0), Var_119, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_119, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
              {
                ConstGroundTerm_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstGroundTerm_41, 0) = ((MR_Box) (ConstRval_31));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_41, 1) = ((MR_Box) (VarType_21));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_41, 2) = ((MR_Box) (MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (Var_20)), ((MR_Box) (ConstGroundTerm_41)), STATE_VARIABLE_GroundTermMap_0_83, STATE_VARIABLE_GroundTermMap_84);
              *STATE_VARIABLE_GlobalData_82 = STATE_VARIABLE_GlobalData_0_81;
            }
            break;
          case (MR_Integer) 2:
            if ((ArgVars_25 == (MR_Word) ((MR_Integer) 0)))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "no_tag arity != 1");
                return;
              }
            }
            else
            {
              MR_Word Var_196 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_25, (MR_Integer) 1))));
              MR_Word Var_197 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_25, (MR_Integer) 0))));

              if ((Var_196 == (MR_Word) ((MR_Integer) 0)))
              {
                MR_Word ArgGroundTerm_60;
                MR_Word ArgRval_61;
                MR_Word MLDS_ArgType_63;
                MR_Word Rval0_64;
                MR_Word Rval_65;
                MR_Word GroundTerm_66;
                MR_Word STATE_VARIABLE_GroundTermMap_106_106;
                MR_Box conv0_ArgGroundTerm_60;

                mercury__map__det_remove_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (Var_197)), &conv0_ArgGroundTerm_60, STATE_VARIABLE_GroundTermMap_0_83, &STATE_VARIABLE_GroundTermMap_106_106);
                ArgGroundTerm_60 = ((MR_Word) (conv0_ArgGroundTerm_60));
                ArgRval_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_60, (MR_Integer) 0))));
                MLDS_ArgType_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_60, (MR_Integer) 2))));
                ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_16, Context_26, MLDS_ArgType_63, (MR_Integer) 2, ArgRval_61, &Rval0_64, STATE_VARIABLE_GlobalData_0_81, STATE_VARIABLE_GlobalData_82);
                Rval_65 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(MLDS_Type_22, ConsTag_24, Rval0_64);
                {
                  GroundTerm_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), GroundTerm_66, 0) = ((MR_Box) (Rval_65));
                  MR_hl_field(MR_mktag(0), GroundTerm_66, 1) = ((MR_Box) (VarType_21));
                  MR_hl_field(MR_mktag(0), GroundTerm_66, 2) = ((MR_Box) (MLDS_Type_22));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (Var_20)), ((MR_Box) (GroundTerm_66)), STATE_VARIABLE_GroundTermMap_106_106, STATE_VARIABLE_GroundTermMap_84);
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
          MR_Word Var_116;
          MR_Word ConstRval_185;
          MR_Word ConstGroundTerm_186;
          MR_Word Var_187;

          {
            Var_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
            MR_hl_field(MR_mktag(3), Var_116, 1) = ((MR_Box) (String_33));
          }
          {
            ConstRval_185 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ConstRval_185, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ConstRval_185, 1) = ((MR_Box) (Var_116));
          }
          {
            Var_187 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_187, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[14]));
            MR_hl_field(MR_mktag(0), Var_187, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_8));
            MR_hl_field(MR_mktag(0), Var_187, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_187, 3) = ((MR_Box) (ArgVars_25));
            MR_hl_field(MR_mktag(0), Var_187, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_187, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
          {
            ConstGroundTerm_186 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ConstGroundTerm_186, 0) = ((MR_Box) (ConstRval_185));
            MR_hl_field(MR_mktag(0), ConstGroundTerm_186, 1) = ((MR_Box) (VarType_21));
            MR_hl_field(MR_mktag(0), ConstGroundTerm_186, 2) = ((MR_Box) (MLDS_Type_22));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (Var_20)), ((MR_Box) (ConstGroundTerm_186)), STATE_VARIABLE_GroundTermMap_0_83, STATE_VARIABLE_GroundTermMap_84);
          *STATE_VARIABLE_GlobalData_82 = STATE_VARIABLE_GlobalData_0_81;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float Float_32 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_24, (MR_Integer) 0)));
          MR_Word Var_117;
          MR_Word ConstRval_139;
          MR_Word ConstGroundTerm_140;
          MR_Word Var_141;

          {
            Var_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
            MR_hl_field(MR_mktag(3), Var_117, 1) = MR_box_float(Float_32);
          }
          {
            ConstRval_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ConstRval_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ConstRval_139, 1) = ((MR_Box) (Var_117));
          }
          {
            Var_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_141, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[14]));
            MR_hl_field(MR_mktag(0), Var_141, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_2));
            MR_hl_field(MR_mktag(0), Var_141, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_141, 3) = ((MR_Box) (ArgVars_25));
            MR_hl_field(MR_mktag(0), Var_141, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_141, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
          {
            ConstGroundTerm_140 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ConstGroundTerm_140, 0) = ((MR_Box) (ConstRval_139));
            MR_hl_field(MR_mktag(0), ConstGroundTerm_140, 1) = ((MR_Box) (VarType_21));
            MR_hl_field(MR_mktag(0), ConstGroundTerm_140, 2) = ((MR_Box) (MLDS_Type_22));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (Var_20)), ((MR_Box) (ConstGroundTerm_140)), STATE_VARIABLE_GroundTermMap_0_83, STATE_VARIABLE_GroundTermMap_84);
          *STATE_VARIABLE_GlobalData_82 = STATE_VARIABLE_GlobalData_0_81;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word IntTag_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 1))));
              MR_Word IntConst_30;
              MR_Word ConstRval_161;
              MR_Word ConstGroundTerm_162;
              MR_Word Var_163;

              IntConst_30 = ml_backend__ml_unify_gen__int_tag_to_mlds_rval_const_3_f_0(VarType_21, MLDS_Type_22, IntTag_29);
              {
                ConstRval_161 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstRval_161, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstRval_161, 1) = ((MR_Box) (IntConst_30));
              }
              {
                Var_163 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_163, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[14]));
                MR_hl_field(MR_mktag(0), Var_163, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_4));
                MR_hl_field(MR_mktag(0), Var_163, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_163, 3) = ((MR_Box) (ArgVars_25));
                MR_hl_field(MR_mktag(0), Var_163, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_163, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
              {
                ConstGroundTerm_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstGroundTerm_162, 0) = ((MR_Box) (ConstRval_161));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_162, 1) = ((MR_Box) (VarType_21));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_162, 2) = ((MR_Box) (MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (Var_20)), ((MR_Box) (ConstGroundTerm_162)), STATE_VARIABLE_GroundTermMap_0_83, STATE_VARIABLE_GroundTermMap_84);
              *STATE_VARIABLE_GlobalData_82 = STATE_VARIABLE_GlobalData_0_81;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ForeignLang_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 1))));
              MR_String ForeignTag_40 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 2))));
              MR_Word Var_112;
              MR_Word ConstRval_150;
              MR_Word ConstGroundTerm_151;
              MR_Word Var_152;

              {
                Var_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                MR_hl_field(MR_mktag(3), Var_112, 1) = ((MR_Box) (ForeignLang_39));
                MR_hl_field(MR_mktag(3), Var_112, 2) = ((MR_Box) (ForeignTag_40));
                MR_hl_field(MR_mktag(3), Var_112, 3) = ((MR_Box) (MLDS_Type_22));
              }
              {
                ConstRval_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstRval_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstRval_150, 1) = ((MR_Box) (Var_112));
              }
              {
                Var_152 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_152, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[14]));
                MR_hl_field(MR_mktag(0), Var_152, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_3));
                MR_hl_field(MR_mktag(0), Var_152, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_152, 3) = ((MR_Box) (ArgVars_25));
                MR_hl_field(MR_mktag(0), Var_152, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_152, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
              {
                ConstGroundTerm_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstGroundTerm_151, 0) = ((MR_Box) (ConstRval_150));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_151, 1) = ((MR_Box) (VarType_21));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_151, 2) = ((MR_Box) (MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (Var_20)), ((MR_Box) (ConstGroundTerm_151)), STATE_VARIABLE_GroundTermMap_0_83, STATE_VARIABLE_GroundTermMap_84);
              *STATE_VARIABLE_GlobalData_82 = STATE_VARIABLE_GlobalData_0_81;
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
              MR_Word Ptag_194 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 1))));

              ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0(ModuleInfo_16, Target_17, HighLevelData_18, VarTypes_19, Var_20, VarType_21, MLDS_Type_22, ConsId_23, ConsTag_24, Ptag_194, (MR_Word) ((MR_Integer) 0), ArgVars_25, Context_26, STATE_VARIABLE_GlobalData_0_81, STATE_VARIABLE_GlobalData_82, STATE_VARIABLE_GroundTermMap_0_83, STATE_VARIABLE_GroundTermMap_84);
            }
            break;
          case (MR_Integer) 12:
            if ((ArgVars_25 == (MR_Word) ((MR_Integer) 0)))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "no_tag arity != 1");
                return;
              }
            }
            else
            {
              MR_Word Var_196 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_25, (MR_Integer) 1))));
              MR_Word Var_197 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_25, (MR_Integer) 0))));

              if ((Var_196 == (MR_Word) ((MR_Integer) 0)))
              {
                MR_Word ArgGroundTerm_60;
                MR_Word ArgRval_61;
                MR_Word MLDS_ArgType_63;
                MR_Word Rval0_64;
                MR_Word Rval_65;
                MR_Word GroundTerm_66;
                MR_Word STATE_VARIABLE_GroundTermMap_106_106;
                MR_Box conv0_ArgGroundTerm_60;

                mercury__map__det_remove_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (Var_197)), &conv0_ArgGroundTerm_60, STATE_VARIABLE_GroundTermMap_0_83, &STATE_VARIABLE_GroundTermMap_106_106);
                ArgGroundTerm_60 = ((MR_Word) (conv0_ArgGroundTerm_60));
                ArgRval_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_60, (MR_Integer) 0))));
                MLDS_ArgType_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_60, (MR_Integer) 2))));
                ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_16, Context_26, MLDS_ArgType_63, (MR_Integer) 2, ArgRval_61, &Rval0_64, STATE_VARIABLE_GlobalData_0_81, STATE_VARIABLE_GlobalData_82);
                Rval_65 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(MLDS_Type_22, ConsTag_24, Rval0_64);
                {
                  GroundTerm_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), GroundTerm_66, 0) = ((MR_Box) (Rval_65));
                  MR_hl_field(MR_mktag(0), GroundTerm_66, 1) = ((MR_Box) (VarType_21));
                  MR_hl_field(MR_mktag(0), GroundTerm_66, 2) = ((MR_Box) (MLDS_Type_22));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (Var_20)), ((MR_Box) (GroundTerm_66)), STATE_VARIABLE_GroundTermMap_106_106, STATE_VARIABLE_GroundTermMap_84);
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
              MR_Word Ptag_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 1))));
              MR_Word ExtraRvals_74;
              MR_Word RemoteSectag_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 2))));
              MR_Unsigned SectagUint_76 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RemoteSectag_75, (MR_Integer) 0))));
              MR_Word AddedBy_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RemoteSectag_75, (MR_Integer) 1))));
              MR_Word UsesConstructors_78;

              UsesConstructors_78 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(Target_17);
              switch (UsesConstructors_78) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word StagRval0_79;
                    MR_Word StagRval_80;
                    MR_Word Var_89;
                    MR_Word Var_93;
                    MR_Integer Var_94;

                    {
                      Var_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_89, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[11]));
                      MR_hl_field(MR_mktag(0), Var_89, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_6));
                      MR_hl_field(MR_mktag(0), Var_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_89, 3) = ((MR_Box) (AddedBy_77));
                      MR_hl_field(MR_mktag(0), Var_89, 4) = ((MR_Box) ((MR_Integer) 0));
                    }
                    mercury__require__expect_3_p_0(Var_89, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "AddedBy != sectag_added_by_unify");
                    Var_94 = mercury__uint__cast_to_int_1_f_0(SectagUint_76);
                    {
                      Var_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_93, 0) = ((MR_Box) (Var_94));
                    }
                    {
                      StagRval0_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), StagRval0_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), StagRval0_79, 1) = ((MR_Box) (Var_93));
                    }
                    switch (HighLevelData_18) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          {
                            StagRval_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), StagRval_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), StagRval_80, 1) = ((MR_Box) ((MR_Integer) 20));
                            MR_hl_field(MR_mktag(3), StagRval_80, 2) = ((MR_Box) (StagRval0_79));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        StagRval_80 = StagRval0_79;
                        break;
                    }
                    {
                      ExtraRvals_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ExtraRvals_74, 0) = ((MR_Box) (StagRval_80));
                      MR_hl_field(MR_mktag(1), ExtraRvals_74, 1) = ((MR_Box) ((MR_Integer) 0));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_85;

                    {
                      Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[11]));
                      MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_7));
                      MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (AddedBy_77));
                      MR_hl_field(MR_mktag(0), Var_85, 4) = ((MR_Box) ((MR_Integer) 1));
                    }
                    mercury__require__expect_3_p_0(Var_85, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "AddedBy != sectag_added_by_constructor");
                    ExtraRvals_74 = (MR_Word) ((MR_Integer) 0);
                  }
                  break;
              }
              ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0(ModuleInfo_16, Target_17, HighLevelData_18, VarTypes_19, Var_20, VarType_21, MLDS_Type_22, ConsId_23, ConsTag_24, Ptag_73, ExtraRvals_74, ArgVars_25, Context_26, STATE_VARIABLE_GlobalData_0_81, STATE_VARIABLE_GlobalData_82, STATE_VARIABLE_GroundTermMap_0_83, STATE_VARIABLE_GroundTermMap_84);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word LocalSectag_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 2))));
              MR_Word LocalSectagSize_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalSectag_35, (MR_Integer) 1))));
              MR_Unsigned SectagWholeWordUint_38 = (MR_Unsigned) (LocalSectagSize_37);
              MR_Word Var_113;
              MR_Word Var_114;
              MR_Integer Var_115;
              MR_Word ConstRval_172;
              MR_Word ConstGroundTerm_173;
              MR_Word Var_174;

              Var_115 = mercury__uint__cast_to_int_1_f_0(SectagWholeWordUint_38);
              {
                Var_114 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_114, 0) = ((MR_Box) (Var_115));
              }
              {
                Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_113, 1) = ((MR_Box) (Var_114));
              }
              {
                ConstRval_172 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstRval_172, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), ConstRval_172, 1) = ((MR_Box) (MLDS_Type_22));
                MR_hl_field(MR_mktag(3), ConstRval_172, 2) = ((MR_Box) (Var_113));
              }
              {
                Var_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_174, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[14]));
                MR_hl_field(MR_mktag(0), Var_174, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_5));
                MR_hl_field(MR_mktag(0), Var_174, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_174, 3) = ((MR_Box) (ArgVars_25));
                MR_hl_field(MR_mktag(0), Var_174, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_174, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
              {
                ConstGroundTerm_173 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstGroundTerm_173, 0) = ((MR_Box) (ConstRval_172));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_173, 1) = ((MR_Box) (VarType_21));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_173, 2) = ((MR_Box) (MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (Var_20)), ((MR_Box) (ConstGroundTerm_173)), STATE_VARIABLE_GroundTermMap_0_83, STATE_VARIABLE_GroundTermMap_84);
              *STATE_VARIABLE_GlobalData_82 = STATE_VARIABLE_GlobalData_0_81;
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
  MR_Word Ptag_27,
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__cons_id_arg_types_and_widths__3115__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__cons_id_arg_types_and_widths_7_p_1(
  MR_Word TypeInfo_for_Arg_56,
  MR_Word ModuleInfo_8,
  MR_Word ArgToType_9,
  MR_Word MayHaveExtraArgs_10,
  MR_Word VarType_11,
  MR_Word ConsId_12,
  MR_Word Args_13,
  MR_Word * ArgsTypesWidths_14)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) ConsId_12)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_12, (MR_Integer) 0))) == (MR_Integer) 2)));

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
        MR_Word ConsArgRepns_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 4))));
        MR_Integer NumExtraArgs_20;
        MR_Integer Var_31;
        MR_Integer Var_32;

        Var_31 = mercury__list__length_1_f_0(TypeInfo_for_Arg_56, Args_13);
        Var_32 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), ConsArgRepns_19);
        NumExtraArgs_20 = (MR_Integer) ((MR_Unsigned) Var_31 - (MR_Unsigned) Var_32);
        succeeded = (NumExtraArgs_20 == (MR_Integer) 0);
        if (succeeded)
          ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_114_103_115_95_116_121_112_101_115_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(Args_13, ConsArgRepns_19, ArgsTypesWidths_14);
        else
        {
          MR_Word TypeInfo_60_60;
          MR_Word ExtraArgs_21;
          MR_Word NonExtraArgs_22;
          MR_Integer InitOffset_27;
          MR_Word ExtraArgsTypesWidths_28;
          MR_Word NonExtraArgsTypesWidths_29;
          MR_Word Var_33;
          MR_Word RemoteSectag_24;
          MR_Word AddedBy_26;
          MR_Word Var_37;
          MR_Word conv0_ArgsTypesWidths_14;

          {
            Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[1]));
            MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (ml_backend__ml_unify_gen__cons_id_arg_types_and_widths_7_p_1_1));
            MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (MayHaveExtraArgs_10));
            MR_hl_field(MR_mktag(0), Var_33, 4) = ((MR_Box) ((MR_Integer) 1));
          }
          mercury__require__expect_3_p_0(Var_33, (MR_String) "predicate \140ml_backend.ml_unify_gen.cons_id_arg_types_and_widths\'/7", (MR_String) "extra args in static struct");
          mercury__list__det_split_list_4_p_0(TypeInfo_for_Arg_56, NumExtraArgs_20, Args_13, &ExtraArgs_21, &NonExtraArgs_22);
          Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 3))));
          succeeded = ((((MR_tag((MR_Word) Var_37)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_37, (MR_Integer) 0))) == (MR_Integer) 13)));
          if (succeeded)
          {
            RemoteSectag_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_37, (MR_Integer) 2))));
            AddedBy_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RemoteSectag_24, (MR_Integer) 1))));
            succeeded = (AddedBy_26 == (MR_Integer) 0);
          }
          if (succeeded)
            InitOffset_27 = (MR_Integer) 1;
          else
            InitOffset_27 = (MR_Integer) 0;
          ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_116_121_112_101_95_97_110_100_95_97_108_108_111_99_97_116_101_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_4_p_0(ArgToType_9, InitOffset_27, ExtraArgs_21, &ExtraArgsTypesWidths_28);
          ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_114_103_115_95_116_121_112_101_115_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(NonExtraArgs_22, ConsArgRepns_19, &NonExtraArgsTypesWidths_29);
          {
            TypeInfo_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_60_60, 0) = ((MR_Box) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_arg_type_and_width_1));
            MR_hl_field(MR_mktag(0), TypeInfo_60_60, 1) = ((MR_Box) (TypeInfo_for_Arg_56));
          }
          conv0_ArgsTypesWidths_14 = mercury__list__f_43_43_2_f_0(TypeInfo_60_60, (MR_Word) (ExtraArgsTypesWidths_28), (MR_Word) (NonExtraArgsTypesWidths_29));
          *ArgsTypesWidths_14 = (MR_Word) (conv0_ArgsTypesWidths_14);
        }
      }
      else
      {
        MR_Word Var_30;

        succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(VarType_11, &Var_30);
        if (succeeded)
        {
          MR_Word Var_38;

          Var_38 = ml_backend__ml_code_util__ml_make_boxed_type_0_f_0();
          ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_101_99_105_102_105_101_100_95_97_114_103_95_116_121_112_101_115_95_97_110_100_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_4_p_0(Var_38, (MR_Integer) 0, Args_13, ArgsTypesWidths_14);
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
  if ((HeadVar__3_3 == (MR_Word) ((MR_Integer) 0)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Integer) 0);
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
      MR_hl_field(MR_mktag(0), RvalTypeWidth_21, 1) = ((MR_Box) ((MR_Integer) 24));
      MR_hl_field(MR_mktag(0), RvalTypeWidth_21, 2) = ((MR_Box) (ArgPosWidth_45));
      MR_hl_field(MR_mktag(0), RvalTypeWidth_21, 3) = ((MR_Box) ((MR_Integer) 0));
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
  if ((HeadVar__3_3 == (MR_Word) ((MR_Integer) 0)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Integer) 0);
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
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 24));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ArgPosWidth_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Integer) 0));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__214__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__247__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__235__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__181__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
            MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[12]));
            MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_unification_7_p_0_2));
            MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (CodeModel_9));
            MR_hl_field(MR_mktag(0), Var_63, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_63, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unification\'/7", (MR_String) "construct not det");
          if ((SubInfo_36 == (MR_Word) ((MR_Integer) 0)))
            TakeAddr_37 = (MR_Word) ((MR_Integer) 0);
          else
          {
            MR_Word MaybeTakeAddr_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_36, (MR_Integer) 0))));
            MR_Word MaybeSizeProfInfo_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_36, (MR_Integer) 1))));
            MR_Word Var_67;

            if ((MaybeTakeAddr_38 == (MR_Word) ((MR_Integer) 0)))
              TakeAddr_37 = (MR_Word) ((MR_Integer) 0);
            else
              TakeAddr_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTakeAddr_38, (MR_Integer) 0))));
            {
              Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[13]));
              MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_unification_7_p_0_3));
              MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (MaybeSizeProfInfo_39));
              MR_hl_field(MR_mktag(0), Var_67, 4) = ((MR_Box) ((MR_Integer) 0));
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
                  MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) ((MR_Integer) 4));
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
                  MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Integer) 0));
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
            MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[12]));
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
              *Stmts_12 = (MR_Word) ((MR_Integer) 0);
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
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
                }
              }
              break;
          }
          succeeded = ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(STATE_VARIABLE_Info_0_51, SourceVar_15, &GroundTerm_22);
          if (succeeded)
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(TargetVar_14, GroundTerm_22, STATE_VARIABLE_Info_0_51, STATE_VARIABLE_Info_52);
          else
            *STATE_VARIABLE_Info_52 = STATE_VARIABLE_Info_0_51;
          *Defns_11 = (MR_Word) ((MR_Integer) 0);
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
                MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[12]));
                MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_unification_7_p_0_4));
                MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (CodeModel_9));
                MR_hl_field(MR_mktag(0), Var_72, 4) = ((MR_Box) ((MR_Integer) 1));
              }
              mercury__require__expect_3_p_0(Var_72, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unification\'/7", (MR_String) "simple_test not semidet");
              ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_51, VarA_23, &Type_91);
              succeeded = ((MR_tag((MR_Word) Type_91)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_91, (MR_Integer) 0))));
                succeeded = (Var_76 == (MR_Word) ((MR_Integer) 4));
              }
              if (succeeded)
                EqualityOp_25 = (MR_Word) ((MR_Integer) 16);
              else
              {
                MR_Word Var_77;

                succeeded = ((MR_tag((MR_Word) Type_91)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_91, (MR_Integer) 0))));
                  succeeded = (Var_77 == (MR_Word) ((MR_Integer) 0));
                }
                if (succeeded)
                  EqualityOp_25 = (MR_Word) ((MR_Integer) 64);
                else
                {
                  MR_Word IntType_26;
                  MR_Word Var_78;

                  succeeded = ((MR_tag((MR_Word) Type_91)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                    Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_91, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) Var_78)) == (MR_Integer) 1);
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
              *Defns_11 = (MR_Word) ((MR_Integer) 0);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_12 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_92));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
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
    if ((GetArgsStmts_21 == (MR_Word) ((MR_Integer) 0)))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *Stmts_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SetTagTestResult_19));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
      }
    }
    else
    {
      MR_Word GetArgs_24;
      MR_Word IfStmt_25;
      MR_Word Var_35;

      GetArgs_24 = ml_backend__ml_code_util__ml_gen_block_4_f_0((MR_Word) ((MR_Integer) 0), (MR_Word) ((MR_Integer) 0), GetArgsStmts_21, Context_14);
      {
        IfStmt_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), IfStmt_25, 0) = ((MR_Box) (SucceededExpr_20));
        MR_hl_field(MR_mktag(2), IfStmt_25, 1) = ((MR_Box) (GetArgs_24));
        MR_hl_field(MR_mktag(2), IfStmt_25, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(2), IfStmt_25, 3) = ((MR_Box) (Context_14));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (IfStmt_25));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Integer) 0));
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
            MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) ((MR_Integer) 16));
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
            MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) ((MR_Integer) 64));
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
              MR_Word Ptag_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 1))));
              MR_Word RvalTag_102;
              uint8_t PtagUint8_103;
              MR_Word PrimaryTagRval_104;
              MR_Word Var_106;
              MR_Integer Var_107;

              {
                RvalTag_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), RvalTag_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), RvalTag_102, 1) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), RvalTag_102, 2) = ((MR_Box) (Rval_9));
              }
              PtagUint8_103 = (uint8_t) (Ptag_101);
              Var_107 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_103);
              {
                Var_106 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_106, 0) = ((MR_Box) (Var_107));
              }
              {
                PrimaryTagRval_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), PrimaryTagRval_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), PrimaryTagRval_104, 1) = ((MR_Box) (Var_106));
              }
              {
                TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[18])));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (RvalTag_102));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (PrimaryTagRval_104));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word Ptag_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 1))));
              MR_Word RvalTag_39;
              uint8_t PtagUint8_40;
              MR_Word PrimaryTagRval_41;
              MR_Word Var_73;
              MR_Integer Var_74;

              {
                RvalTag_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), RvalTag_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), RvalTag_39, 1) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), RvalTag_39, 2) = ((MR_Box) (Rval_9));
              }
              PtagUint8_40 = (uint8_t) (Ptag_38);
              Var_74 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_40);
              {
                Var_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_73, 0) = ((MR_Box) (Var_74));
              }
              {
                PrimaryTagRval_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), PrimaryTagRval_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), PrimaryTagRval_41, 1) = ((MR_Box) (Var_73));
              }
              {
                TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[18])));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (RvalTag_39));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (PrimaryTagRval_41));
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word RemoteSectag_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 2))));
              MR_Word SecondaryTagFieldRval_43;
              MR_Unsigned SectagUint_44;
              MR_Word SecondaryTagTestRval_46;
              MR_Integer NumPtagBits_47;
              MR_Word Var_61;
              MR_Word Var_63;
              MR_Word Var_64;
              MR_Integer Var_65;
              MR_Word Ptag_96 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 1))));

              ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_p_0(Info_6, Type_8, Rval_9, Ptag_96, &SecondaryTagFieldRval_43);
              SectagUint_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RemoteSectag_42, (MR_Integer) 0))));
              Var_61 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[18]));
              Var_65 = mercury__uint__cast_to_int_1_f_0(SectagUint_44);
              {
                Var_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_64, 0) = ((MR_Box) (Var_65));
              }
              {
                Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_63, 1) = ((MR_Box) (Var_64));
              }
              {
                SecondaryTagTestRval_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), SecondaryTagTestRval_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), SecondaryTagTestRval_46, 1) = ((MR_Box) (Var_61));
                MR_hl_field(MR_mktag(3), SecondaryTagTestRval_46, 2) = ((MR_Box) (SecondaryTagFieldRval_43));
                MR_hl_field(MR_mktag(3), SecondaryTagTestRval_46, 3) = ((MR_Box) (Var_63));
              }
              ml_backend__ml_gen_info__ml_gen_info_get_num_ptag_bits_2_p_0(Info_6, &NumPtagBits_47);
              succeeded = (NumPtagBits_47 == (MR_Integer) 0);
              if (succeeded)
                TagTestRval_10 = SecondaryTagTestRval_46;
              else
              {
                MR_Word RvalPtag_48;
                MR_Word PrimaryTagTestRval_49;
                MR_Word Var_67;
                MR_Integer Var_68;
                uint8_t PtagUint8_92;
                MR_Word PrimaryTagRval_93;

                {
                  RvalPtag_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), RvalPtag_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), RvalPtag_48, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), RvalPtag_48, 2) = ((MR_Box) (Rval_9));
                }
                PtagUint8_92 = (uint8_t) (Ptag_96);
                Var_68 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_92);
                {
                  Var_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_67, 0) = ((MR_Box) (Var_68));
                }
                {
                  PrimaryTagRval_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), PrimaryTagRval_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), PrimaryTagRval_93, 1) = ((MR_Box) (Var_67));
                }
                {
                  PrimaryTagTestRval_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), PrimaryTagTestRval_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                  MR_hl_field(MR_mktag(3), PrimaryTagTestRval_49, 1) = ((MR_Box) (Var_61));
                  MR_hl_field(MR_mktag(3), PrimaryTagTestRval_49, 2) = ((MR_Box) (RvalPtag_48));
                  MR_hl_field(MR_mktag(3), PrimaryTagTestRval_49, 3) = ((MR_Box) (PrimaryTagRval_93));
                }
                {
                  TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                  MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (PrimaryTagTestRval_49));
                  MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (SecondaryTagTestRval_46));
                }
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word LocalSectag_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 2))));
              MR_Word LocalSectagSize_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalSectag_51, (MR_Integer) 1))));
              MR_Unsigned SectagWholeWordUint_54 = (MR_Unsigned) (LocalSectagSize_53);
              MR_Word Var_57;
              MR_Word Var_58;
              MR_Word Var_59;
              MR_Integer Var_60;
              MR_Word ModuleInfo_99;
              MR_Word MLDS_Type_100;

              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_6, &ModuleInfo_99);
              MLDS_Type_100 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_99, Type_8);
              Var_60 = mercury__uint__cast_to_int_1_f_0(SectagWholeWordUint_54);
              {
                Var_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_59, 0) = ((MR_Box) (Var_60));
              }
              {
                Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (Var_59));
              }
              {
                Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (MLDS_Type_100));
                MR_hl_field(MR_mktag(3), Var_57, 2) = ((MR_Box) (Var_58));
              }
              {
                TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[18])));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (Rval_9));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (Var_57));
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
  MR_Word PrimaryTag_9,
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
            MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) ((MR_Integer) 24));
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
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 8));
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

                if ((MaybeRepn_43 == (MR_Word) ((MR_Integer) 0)))
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
            MR_hl_field(MR_mktag(0), QualifiedFieldName_61, 2) = ((MR_Box) ((MR_Integer) 4));
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
            MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) ((MR_Integer) 8));
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
  MR_Word STATE_VARIABLE_Info_0_58,
  MR_Word * STATE_VARIABLE_Info_59)
{
  {
    MR_bool succeeded;
    MR_Word ConsTag_18;
    MR_Word ModuleInfo_80;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_58, &ModuleInfo_80);
    ConsTag_18 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_80, ConsId_11);
    switch (MR_tag((MR_Word) ConsTag_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_18)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word VarType_50;
              MR_Word VarLval_51;
              MR_Word FieldGen_52;
              MR_Word InitOffSet_54;
              MR_Integer ArgNum_55;
              MR_Word ArgVarRepns_56;
              MR_Word Var_53;
              MR_Word Var_57;

              ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_58, Var_10, &VarType_50);
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_58, Var_10, &VarLval_51);
              ml_backend__ml_unify_gen__decide_field_gen_6_p_0(STATE_VARIABLE_Info_0_58, VarLval_51, VarType_50, ConsId_11, ConsTag_18, &FieldGen_52);
              ml_backend__ml_unify_gen__ml_tag_initial_offset_and_argnum_4_p_0(ConsTag_18, &Var_53, &InitOffSet_54, &ArgNum_55);
              ml_backend__ml_unify_gen__ml_field_names_and_types_6_p_0(STATE_VARIABLE_Info_0_58, VarType_50, ConsId_11, InitOffSet_54, ArgVars_12, &ArgVarRepns_56);
              ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_11_p_0(FieldGen_52, ArgVarRepns_56, Modes_13, ArgNum_55, Context_14, (MR_Word) ((MR_Integer) 0), &Var_57, Defns_15, Stmts_16, STATE_VARIABLE_Info_0_58, STATE_VARIABLE_Info_59);
            }
            break;
          case (MR_Integer) 1:
            {
              *Defns_15 = (MR_Word) ((MR_Integer) 0);
              *Stmts_16 = (MR_Word) ((MR_Integer) 0);
              *STATE_VARIABLE_Info_59 = STATE_VARIABLE_Info_0_58;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgVar_45;
              MR_Word Mode_46;
              MR_Word Var_66;
              MR_Word Var_67;

              succeeded = ((MR_tag((MR_Word) ArgVars_12)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgVar_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_12, (MR_Integer) 0))));
                Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_12, (MR_Integer) 1))));
                succeeded = (Var_66 == (MR_Word) ((MR_Integer) 0));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Modes_13)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Mode_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modes_13, (MR_Integer) 0))));
                    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modes_13, (MR_Integer) 1))));
                    succeeded = (Var_67 == (MR_Word) ((MR_Integer) 0));
                  }
                }
              }
              if (succeeded)
              {
                ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_no_tag_6_p_0(STATE_VARIABLE_Info_0_58, Mode_46, ArgVar_45, Var_10, Context_14, Stmts_16);
                *Defns_15 = (MR_Word) ((MR_Integer) 0);
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_det_deconstruct\'/9", (MR_String) "no_tag: arity != 1");
                  return;
                }
              }
              *STATE_VARIABLE_Info_59 = STATE_VARIABLE_Info_0_58;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *Defns_15 = (MR_Word) ((MR_Integer) 0);
          *Stmts_16 = (MR_Word) ((MR_Integer) 0);
          *STATE_VARIABLE_Info_59 = STATE_VARIABLE_Info_0_58;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_18, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 14:
            {
              *Defns_15 = (MR_Word) ((MR_Integer) 0);
              *Stmts_16 = (MR_Word) ((MR_Integer) 0);
              *STATE_VARIABLE_Info_59 = STATE_VARIABLE_Info_0_58;
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
              MR_Word VarType_50;
              MR_Word VarLval_51;
              MR_Word FieldGen_52;
              MR_Word InitOffSet_54;
              MR_Integer ArgNum_55;
              MR_Word ArgVarRepns_56;
              MR_Word Var_53;
              MR_Word Var_57;

              ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_58, Var_10, &VarType_50);
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_58, Var_10, &VarLval_51);
              ml_backend__ml_unify_gen__decide_field_gen_6_p_0(STATE_VARIABLE_Info_0_58, VarLval_51, VarType_50, ConsId_11, ConsTag_18, &FieldGen_52);
              ml_backend__ml_unify_gen__ml_tag_initial_offset_and_argnum_4_p_0(ConsTag_18, &Var_53, &InitOffSet_54, &ArgNum_55);
              ml_backend__ml_unify_gen__ml_field_names_and_types_6_p_0(STATE_VARIABLE_Info_0_58, VarType_50, ConsId_11, InitOffSet_54, ArgVars_12, &ArgVarRepns_56);
              ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_11_p_0(FieldGen_52, ArgVarRepns_56, Modes_13, ArgNum_55, Context_14, (MR_Word) ((MR_Integer) 0), &Var_57, Defns_15, Stmts_16, STATE_VARIABLE_Info_0_58, STATE_VARIABLE_Info_59);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word Ptag_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_18, (MR_Integer) 1))));
              MR_Word ArgVar_72;
              MR_Word Mode_73;
              MR_Word Var_62;
              MR_Word Var_63;

              succeeded = ((MR_tag((MR_Word) ArgVars_12)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgVar_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_12, (MR_Integer) 0))));
                Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_12, (MR_Integer) 1))));
                succeeded = (Var_62 == (MR_Word) ((MR_Integer) 0));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Modes_13)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Mode_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modes_13, (MR_Integer) 0))));
                    Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modes_13, (MR_Integer) 1))));
                    succeeded = (Var_63 == (MR_Word) ((MR_Integer) 0));
                  }
                }
              }
              if (succeeded)
              {
                ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_direct_arg_7_p_0(STATE_VARIABLE_Info_0_58, Ptag_47, Mode_73, ArgVar_72, Var_10, Context_14, Stmts_16);
                *Defns_15 = (MR_Word) ((MR_Integer) 0);
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_det_deconstruct\'/9", (MR_String) "direct_arg_tag: arity != 1");
                  return;
                }
              }
              *STATE_VARIABLE_Info_59 = STATE_VARIABLE_Info_0_58;
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
      *Stmts_12 = (MR_Word) ((MR_Integer) 0);
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
          *Stmts_12 = (MR_Word) ((MR_Integer) 0);
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
  MR_Word Ptag_9,
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
    MR_Word LeftFromToInsts_49;
    MR_Word RightFromToInsts_50;
    MR_Word LeftTopMode_51;
    MR_Word RightTopMode_52;
    MR_Word Var_53;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_8, ArgVar_11, &ArgType_15);
    ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_8, Var_12, &VarType_16);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_8, ArgVar_11, &ArgLval_17);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_8, Var_12, &VarLval_18);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_8, &ModuleInfo_19);
    LeftFromToInsts_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_10, (MR_Integer) 0))));
    RightFromToInsts_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_10, (MR_Integer) 1))));
    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_19, LeftFromToInsts_49, ArgType_15, &LeftTopMode_51);
    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_19, RightFromToInsts_50, ArgType_15, &RightTopMode_52);
    Var_53 = check_hlds__type_util__is_either_type_a_dummy_3_f_0(ModuleInfo_19, ArgType_15, VarType_16);
    succeeded = (Var_53 == (MR_Integer) 0);
    if (succeeded)
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_direct_arg\'/7", (MR_String) "dummy unify");
        return;
      }
    }
    else
    {
      MR_Word Dir_62;

      switch (LeftTopMode_51) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (RightTopMode_52) {
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
              Dir_62 = (MR_Integer) 1;
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
          switch (RightTopMode_52) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Dir_62 = (MR_Integer) 0;
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
          switch (RightTopMode_52) {
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
              Dir_62 = (MR_Integer) 2;
              break;
          }
          break;
      }
      switch (Dir_62) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgRval_27;
            MR_Word Var_31;
            MR_Word Var_32;
            MR_Word MLDS_Type_41;
            MR_Word CastRval_42;
            MR_Word Stmt_43;

            {
              Var_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_31, 0) = ((MR_Box) (ArgLval_17));
            }
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_19, ArgType_15, VarType_16, (MR_Integer) 0, Var_31, &ArgRval_27);
            MLDS_Type_41 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_19, VarType_16);
            {
              Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (Ptag_9));
              MR_hl_field(MR_mktag(3), Var_32, 2) = ((MR_Box) (ArgRval_27));
            }
            {
              CastRval_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), CastRval_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), CastRval_42, 1) = ((MR_Box) (MLDS_Type_41));
              MR_hl_field(MR_mktag(3), CastRval_42, 2) = ((MR_Box) (Var_32));
            }
            Stmt_43 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_18, CastRval_42, Context_13);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_14 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_43));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word VarRval_21;
            MR_Word MLDS_Type_22;
            uint8_t PtagUint8_23;
            MR_Integer PtagInt_24;
            MR_Word CastRval_25;
            MR_Word Stmt_26;
            MR_Word Var_35;
            MR_Word Var_36;
            MR_Word Var_38;
            MR_Word Var_39;

            {
              Var_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_35, 0) = ((MR_Box) (VarLval_18));
            }
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_19, VarType_16, ArgType_15, (MR_Integer) 0, Var_35, &VarRval_21);
            MLDS_Type_22 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_19, ArgType_15);
            PtagUint8_23 = (uint8_t) (Ptag_9);
            PtagInt_24 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_23);
            {
              Var_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_39, 0) = ((MR_Box) (PtagInt_24));
            }
            {
              Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (Var_39));
            }
            {
              Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) ((MR_Integer) 8));
              MR_hl_field(MR_mktag(3), Var_36, 2) = ((MR_Box) (VarRval_21));
              MR_hl_field(MR_mktag(3), Var_36, 3) = ((MR_Box) (Var_38));
            }
            {
              CastRval_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), CastRval_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), CastRval_25, 1) = ((MR_Box) (MLDS_Type_22));
              MR_hl_field(MR_mktag(3), CastRval_25, 2) = ((MR_Box) (Var_36));
            }
            Stmt_26 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_17, CastRval_25, Context_13);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_14 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_26));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
            }
          }
          break;
        case (MR_Integer) 2:
          *Stmts_14 = (MR_Word) ((MR_Integer) 0);
          break;
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_11_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__1558__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_11_p_0(
  MR_Word FieldGen_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer CurArgNum_4,
  MR_Word Context_5,
  MR_Word TakeAddr_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Integer) 0)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Integer) 0)))
      {
        MR_Word Var_19;

        *HeadVar__7_7 = (MR_Word) ((MR_Integer) 0);
        *HeadVar__8_8 = (MR_Word) ((MR_Integer) 0);
        *HeadVar__9_9 = (MR_Word) ((MR_Integer) 0);
        {
          Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[9]));
          MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_11_p_0_1));
          MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (TakeAddr_6));
          MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        mercury__require__expect_3_p_0(Var_19, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_args\'/11", (MR_String) "TakeAddr != []");
        *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_0_10;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_args\'/11", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Integer) 0)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_args\'/11", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word Mode_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word Modes_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgVar_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_111, (MR_Integer) 0))));
        MR_Word CtorArgRepn_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_111, (MR_Integer) 1))));
        MR_Integer NextArgNum_65 = (MR_Integer) ((MR_Unsigned) CurArgNum_4 + (MR_Unsigned) (MR_Integer) 1);
        MR_Word FieldPosWidth_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_64, (MR_Integer) 2))));
        MR_Word FieldVia_81;

        succeeded = ((((MR_tag((MR_Word) FieldPosWidth_66)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldPosWidth_66, (MR_Integer) 0))) == (MR_Integer) 0)));
        if (succeeded)
        {
          FieldVia_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_1, (MR_Integer) 3))));
          succeeded = (FieldVia_81 == (MR_Word) ((MR_Integer) 0));
        }
        if (succeeded)
        {
          MR_Word LeftOverArgVarRepns_82;
          MR_Word LeftOverModes_83;
          MR_Integer LeftOverArgNum_84;
          MR_Word HeadDefns_85;
          MR_Word HeadStmts_86;
          MR_Word TailDefns_87;
          MR_Word TailStmts_88;
          MR_Word STATE_VARIABLE_Info_96_96;

          ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_95_91_49_50_93_95_48_16_p_0(FieldGen_1, ArgVar_63, CtorArgRepn_64, Mode_54, Var_110, Modes_55, &LeftOverArgVarRepns_82, &LeftOverModes_83, CurArgNum_4, &LeftOverArgNum_84, Context_5, &HeadDefns_85, &HeadStmts_86, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_96_96);
          ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_11_p_0(FieldGen_1, LeftOverArgVarRepns_82, LeftOverModes_83, LeftOverArgNum_84, Context_5, TakeAddr_6, HeadVar__7_7, &TailDefns_87, &TailStmts_88, STATE_VARIABLE_Info_96_96, STATE_VARIABLE_Info_11);
          *HeadVar__8_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), HeadDefns_85, TailDefns_87);
          *HeadVar__9_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_86, TailStmts_88);
        }
        else
        {
          MR_Word STATE_VARIABLE_Info_98_98;
          MR_Word HeadStmts_100;
          MR_Word TailStmts_101;
          MR_Word _PackedArgVars_89;

          ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_arg_10_p_0(FieldGen_1, ArgVar_63, CtorArgRepn_64, Mode_54, CurArgNum_4, Context_5, &_PackedArgVars_89, &HeadStmts_100, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_98_98);
          ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_11_p_0(FieldGen_1, Var_110, Modes_55, NextArgNum_65, Context_5, TakeAddr_6, HeadVar__7_7, HeadVar__8_8, &TailStmts_101, STATE_VARIABLE_Info_98_98, STATE_VARIABLE_Info_11);
          *HeadVar__9_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_100, TailStmts_101);
        }
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_95_91_49_50_93_95_48_16_p_0(
  MR_Word FieldGen_17,
  MR_Word ArgVar_18,
  MR_Word CtorArgRepn_19,
  MR_Word Mode_20,
  MR_Word ArgVarRepns_21,
  MR_Word Modes_22,
  MR_Word * LeftOverArgVarRepns_23,
  MR_Word * LeftOverModes_24,
  MR_Integer CurArgNum_25,
  MR_Integer * LeftOverArgNum_26,
  MR_Word Context_27,
  MR_Word * Defns_29,
  MR_Word * Stmts_30,
  MR_Word STATE_VARIABLE_Info_0_64,
  MR_Word * STATE_VARIABLE_Info_65)
{
  {
    MR_bool succeeded;
    MR_Word HeadPackedArgVars_32;
    MR_Word HeadStmts_33;
    MR_Word AllPartialsRight0_34;
    MR_Integer NextArgNum_37;
    MR_Word AllPartialsRight_38;
    MR_Word TailPackedArgVars_39;
    MR_Word TailStmts_40;
    MR_Word STATE_VARIABLE_Info_66_66;
    MR_Word STATE_VARIABLE_Info_68_68;

    ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_arg_10_p_0(FieldGen_17, ArgVar_18, CtorArgRepn_19, Mode_20, CurArgNum_25, Context_27, &HeadPackedArgVars_32, &HeadStmts_33, STATE_VARIABLE_Info_0_64, &STATE_VARIABLE_Info_66_66);
    if ((HeadPackedArgVars_32 == (MR_Word) ((MR_Integer) 0)))
      AllPartialsRight0_34 = (MR_Integer) 0;
    else
      AllPartialsRight0_34 = (MR_Integer) 1;
    NextArgNum_37 = (MR_Integer) ((MR_Unsigned) CurArgNum_25 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_57_93_95_48_15_p_0(FieldGen_17, ArgVarRepns_21, Modes_22, LeftOverArgVarRepns_23, LeftOverModes_24, NextArgNum_37, LeftOverArgNum_26, Context_27, AllPartialsRight0_34, &AllPartialsRight_38, &TailPackedArgVars_39, &TailStmts_40, STATE_VARIABLE_Info_66_66, &STATE_VARIABLE_Info_68_68);
    switch (AllPartialsRight_38) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word PackedArgVars_41;
          MR_Word WordCompVar_42;
          MR_Word WordVar_43;
          MR_Word UnsignedType_44;
          MR_Word WordVarDefn_45;
          MR_Word FieldPosWidth_46;
          MR_Integer CellOffsetInt_52;
          MR_Word FieldId_53;
          MR_Word MaybePtag_54;
          MR_Word AddrRval_55;
          MR_Word AddrType_56;
          MR_Word FieldLval_58;
          MR_Word CastFieldRval_59;
          MR_Word WordVarLval_60;
          MR_Word WordAssignStmt_61;
          MR_Word PackedArgsMap0_62;
          MR_Word PackedArgsMap_63;
          MR_Word STATE_VARIABLE_Info_69_69;
          MR_Word Var_75;
          MR_Word Var_76;
          MR_Word Var_78;
          MR_Word Var_79;
          MR_Word Var_80;
          MR_Word CellOffset_48;

          PackedArgVars_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0), HeadPackedArgVars_32, TailPackedArgVars_39);
          ml_backend__ml_gen_info__ml_gen_info_new_packed_args_var_3_p_0(&WordCompVar_42, STATE_VARIABLE_Info_68_68, &STATE_VARIABLE_Info_69_69);
          {
            WordVar_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), WordVar_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
            MR_hl_field(MR_mktag(3), WordVar_43, 1) = ((MR_Box) (WordCompVar_42));
          }
          UnsignedType_44 = ml_backend__ml_util__mlds_int_type_uint_0_f_0();
          {
            WordVarDefn_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), WordVarDefn_45, 0) = ((MR_Box) (WordVar_43));
            MR_hl_field(MR_mktag(0), WordVarDefn_45, 1) = ((MR_Box) (Context_27));
            MR_hl_field(MR_mktag(0), WordVarDefn_45, 2) = ((MR_Box) (UnsignedType_44));
            MR_hl_field(MR_mktag(0), WordVarDefn_45, 3) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), WordVarDefn_45, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Defns_29 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (WordVarDefn_45));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
          }
          FieldPosWidth_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_19, (MR_Integer) 2))));
          succeeded = ((((MR_tag((MR_Word) FieldPosWidth_46)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldPosWidth_46, (MR_Integer) 0))) == (MR_Integer) 0)));
          if (succeeded)
          {
            CellOffset_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldPosWidth_46, (MR_Integer) 2))));
            CellOffsetInt_52 = (MR_Integer) (CellOffset_48);
          }
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_args_in_word\'/16", (MR_String) "no apw_partial_first");
              return;
            }
          }
          {
            Var_76 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_76, 0) = ((MR_Box) (CellOffsetInt_52));
          }
          {
            Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (Var_76));
          }
          {
            FieldId_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FieldId_53, 0) = ((MR_Box) (Var_75));
          }
          MaybePtag_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_17, (MR_Integer) 0))));
          AddrRval_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_17, (MR_Integer) 1))));
          AddrType_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_17, (MR_Integer) 2))));
          {
            FieldLval_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FieldLval_58, 0) = ((MR_Box) (MaybePtag_54));
            MR_hl_field(MR_mktag(0), FieldLval_58, 1) = ((MR_Box) (AddrRval_55));
            MR_hl_field(MR_mktag(0), FieldLval_58, 2) = ((MR_Box) (AddrType_56));
            MR_hl_field(MR_mktag(0), FieldLval_58, 3) = ((MR_Box) (FieldId_53));
            MR_hl_field(MR_mktag(0), FieldLval_58, 4) = ((MR_Box) ((MR_Integer) 24));
          }
          {
            Var_78 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_78, 0) = ((MR_Box) (FieldLval_58));
          }
          {
            CastFieldRval_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CastFieldRval_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), CastFieldRval_59, 1) = ((MR_Box) (UnsignedType_44));
            MR_hl_field(MR_mktag(3), CastFieldRval_59, 2) = ((MR_Box) (Var_78));
          }
          {
            WordVarLval_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), WordVarLval_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), WordVarLval_60, 1) = ((MR_Box) (WordVar_43));
            MR_hl_field(MR_mktag(3), WordVarLval_60, 2) = ((MR_Box) (UnsignedType_44));
          }
          WordAssignStmt_61 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(WordVarLval_60, CastFieldRval_59, Context_27);
          {
            Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (WordAssignStmt_61));
            MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (HeadStmts_33));
          }
          *Stmts_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_79, TailStmts_40);
          ml_backend__ml_gen_info__ml_gen_info_get_packed_args_map_2_p_0(STATE_VARIABLE_Info_69_69, &PackedArgsMap0_62);
          {
            Var_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_80, 0) = ((MR_Box) (WordVarLval_60));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[3]), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), ((MR_Box) (PackedArgVars_41)), ((MR_Box) (Var_80)), PackedArgsMap0_62, &PackedArgsMap_63);
          ml_backend__ml_gen_info__ml_gen_info_set_packed_args_map_3_p_0(PackedArgsMap_63, STATE_VARIABLE_Info_69_69, STATE_VARIABLE_Info_65);
        }
        break;
      case (MR_Integer) 0:
        {
          *Defns_29 = (MR_Word) ((MR_Integer) 0);
          *Stmts_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_33, TailStmts_40);
          *STATE_VARIABLE_Info_65 = STATE_VARIABLE_Info_68_68;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_57_93_95_48_15_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word_loop__1731__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_57_93_95_48_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Integer CurArgNum_6,
  MR_Integer * LeftOverArgNum_7,
  MR_Word HeadVar__8_8,
  MR_Word STATE_VARIABLE_AllPartialsRight_0_10,
  MR_Word * STATE_VARIABLE_AllPartialsRight_11,
  MR_Word * HeadVar__12_12,
  MR_Word * HeadVar__13_13,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Integer) 0)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Integer) 0)))
      {
        *HeadVar__4_4 = (MR_Word) ((MR_Integer) 0);
        *HeadVar__5_5 = (MR_Word) ((MR_Integer) 0);
        *HeadVar__12_12 = (MR_Word) ((MR_Integer) 0);
        *HeadVar__13_13 = (MR_Word) ((MR_Integer) 0);
        *LeftOverArgNum_7 = CurArgNum_6;
        *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
        *STATE_VARIABLE_AllPartialsRight_11 = STATE_VARIABLE_AllPartialsRight_0_10;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_args_in_word_loop\'/15", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_142 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Integer) 0)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_args_in_word_loop\'/15", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word Mode_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word Modes_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgVar_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_143, (MR_Integer) 0))));
        MR_Word CtorArgRepn_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_143, (MR_Integer) 1))));
        MR_Word FieldPosWidth_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_81, (MR_Integer) 2))));

        switch (MR_tag((MR_Word) FieldPosWidth_82)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *HeadVar__4_4 = HeadVar__2_2;
              *HeadVar__5_5 = HeadVar__3_3;
              *LeftOverArgNum_7 = CurArgNum_6;
              *HeadVar__12_12 = (MR_Word) ((MR_Integer) 0);
              *HeadVar__13_13 = (MR_Word) ((MR_Integer) 0);
              *STATE_VARIABLE_AllPartialsRight_11 = STATE_VARIABLE_AllPartialsRight_0_10;
              *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              *HeadVar__4_4 = HeadVar__2_2;
              *HeadVar__5_5 = HeadVar__3_3;
              *LeftOverArgNum_7 = CurArgNum_6;
              *HeadVar__12_12 = (MR_Word) ((MR_Integer) 0);
              *HeadVar__13_13 = (MR_Word) ((MR_Integer) 0);
              *STATE_VARIABLE_AllPartialsRight_11 = STATE_VARIABLE_AllPartialsRight_0_10;
              *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldPosWidth_82, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *HeadVar__4_4 = HeadVar__2_2;
                  *HeadVar__5_5 = HeadVar__3_3;
                  *LeftOverArgNum_7 = CurArgNum_6;
                  *HeadVar__12_12 = (MR_Word) ((MR_Integer) 0);
                  *HeadVar__13_13 = (MR_Word) ((MR_Integer) 0);
                  *STATE_VARIABLE_AllPartialsRight_11 = STATE_VARIABLE_AllPartialsRight_0_10;
                  *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word HeadPackedArgVars_132;
                  MR_Word HeadStmts_133;
                  MR_Integer NextArgNum_134;
                  MR_Word TailPackedArgVars_135;
                  MR_Word TailStmts_136;
                  MR_Word STATE_VARIABLE_Info_118_137;
                  MR_Word STATE_VARIABLE_AllPartialsRight_119_138;

                  ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_arg_10_p_0(HeadVar__1_1, ArgVar_80, CtorArgRepn_81, Mode_68, CurArgNum_6, HeadVar__8_8, &HeadPackedArgVars_132, &HeadStmts_133, STATE_VARIABLE_Info_0_14, &STATE_VARIABLE_Info_118_137);
                  if ((HeadPackedArgVars_132 == (MR_Word) ((MR_Integer) 0)))
                    STATE_VARIABLE_AllPartialsRight_119_138 = (MR_Integer) 0;
                  else
                    STATE_VARIABLE_AllPartialsRight_119_138 = STATE_VARIABLE_AllPartialsRight_0_10;
                  NextArgNum_134 = (MR_Integer) ((MR_Unsigned) CurArgNum_6 + (MR_Unsigned) (MR_Integer) 1);
                  ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_57_93_95_48_15_p_0(HeadVar__1_1, Var_142, Modes_69, HeadVar__4_4, HeadVar__5_5, NextArgNum_134, LeftOverArgNum_7, HeadVar__8_8, STATE_VARIABLE_AllPartialsRight_119_138, STATE_VARIABLE_AllPartialsRight_11, &TailPackedArgVars_135, &TailStmts_136, STATE_VARIABLE_Info_118_137, STATE_VARIABLE_Info_15);
                  *HeadVar__12_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0), HeadPackedArgVars_132, TailPackedArgVars_135);
                  *HeadVar__13_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_133, TailStmts_136);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word HeadPackedArgVars_89;
                  MR_Word HeadStmts_90;
                  MR_Integer NextArgNum_96;
                  MR_Word TailPackedArgVars_97;
                  MR_Word TailStmts_98;
                  MR_Word Var_114;
                  MR_Word STATE_VARIABLE_Info_118_118;

                  ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_arg_10_p_0(HeadVar__1_1, ArgVar_80, CtorArgRepn_81, Mode_68, CurArgNum_6, HeadVar__8_8, &HeadPackedArgVars_89, &HeadStmts_90, STATE_VARIABLE_Info_0_14, &STATE_VARIABLE_Info_118_118);
                  {
                    Var_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[8]));
                    MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) (ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_57_93_95_48_15_p_0_1));
                    MR_hl_field(MR_mktag(0), Var_114, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_114, 3) = ((MR_Box) (HeadPackedArgVars_89));
                    MR_hl_field(MR_mktag(0), Var_114, 4) = ((MR_Box) ((MR_Integer) 0));
                  }
                  mercury__require__expect_3_p_0(Var_114, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_args_in_word_loop\'/15", (MR_String) "HeadPackedArgVars != [] for apw_none_shifted");
                  NextArgNum_96 = (MR_Integer) ((MR_Unsigned) CurArgNum_6 + (MR_Unsigned) (MR_Integer) 1);
                  ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_57_93_95_48_15_p_0(HeadVar__1_1, Var_142, Modes_69, HeadVar__4_4, HeadVar__5_5, NextArgNum_96, LeftOverArgNum_7, HeadVar__8_8, STATE_VARIABLE_AllPartialsRight_0_10, STATE_VARIABLE_AllPartialsRight_11, &TailPackedArgVars_97, &TailStmts_98, STATE_VARIABLE_Info_118_118, STATE_VARIABLE_Info_15);
                  *HeadVar__12_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0), HeadPackedArgVars_89, TailPackedArgVars_97);
                  *HeadVar__13_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_90, TailStmts_98);
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
  MR_Word STATE_VARIABLE_Info_0_106,
  MR_Word * STATE_VARIABLE_Info_107)
{
  {
    MR_bool succeeded;
    MR_Word ConsTag_22;

    ml_backend__ml_unify_gen__ml_cons_id_to_tag_3_p_0(STATE_VARIABLE_Info_0_106, ConsId_13, &ConsTag_22);
    switch (MR_tag((MR_Word) ConsTag_22)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_22)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word UsesBaseClass_204;

              UsesBaseClass_204 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(ConsTag_22);
              ml_backend__ml_unify_gen__ml_gen_construct_compound_14_p_0(ConsId_13, (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0)))), (MR_Word) ((MR_Integer) 0), UsesBaseClass_204, Var_12, ArgVars_14, ArgModes_15, TakeAddr_16, HowToConstruct_17, Context_18, Defns_19, Stmts_20, STATE_VARIABLE_Info_0_106, STATE_VARIABLE_Info_107);
            }
            break;
          case (MR_Integer) 1:
            {
              if ((ArgVars_14 == (MR_Word) ((MR_Integer) 0)))
              {
                MR_Word VarType_174;
                MR_Word VarLval_175;
                MR_Word ModuleInfo_176;
                MR_Word MLDS_Type_177;
                MR_Word Rval_178;
                MR_Word GroundTerm_179;
                MR_Word Stmt_180;

                ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_106, Var_12, &VarType_174);
                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_106, Var_12, &VarLval_175);
                ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_106, &ModuleInfo_176);
                MLDS_Type_177 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_176, VarType_174);
                switch (MR_tag((MR_Word) ConsTag_22)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      Rval_178 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_5[0]), VarType_174, MLDS_Type_177);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_String String_77 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConsTag_22, (MR_Integer) 0))));
                      MR_Word Var_125;

                      {
                        Var_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                        MR_hl_field(MR_mktag(3), Var_125, 1) = ((MR_Box) (String_77));
                      }
                      {
                        Rval_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Rval_178, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), Rval_178, 1) = ((MR_Box) (Var_125));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Float Float_76 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_22, (MR_Integer) 0)));
                      MR_Word Var_126;

                      {
                        Var_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                        MR_hl_field(MR_mktag(3), Var_126, 1) = MR_box_float(Float_76);
                      }
                      {
                        Rval_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Rval_178, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), Rval_178, 1) = ((MR_Box) (Var_126));
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word IntTag_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));

                          Rval_178 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0(IntTag_75, VarType_174, MLDS_Type_177);
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ForeignLang_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                          MR_String ForeignTag_79 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                          MR_Word Var_124;

                          {
                            Var_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                            MR_hl_field(MR_mktag(3), Var_124, 1) = ((MR_Box) (ForeignLang_78));
                            MR_hl_field(MR_mktag(3), Var_124, 2) = ((MR_Box) (ForeignTag_79));
                            MR_hl_field(MR_mktag(3), Var_124, 3) = ((MR_Box) (MLDS_Type_177));
                          }
                          {
                            Rval_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Rval_178, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), Rval_178, 1) = ((MR_Box) (Var_124));
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word ModuleName0_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                          MR_String TypeName_86 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                          MR_Integer TypeArity_87 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
                          MR_Word ModuleName_88;
                          MR_Word MLDS_Module_89;
                          MR_Word RttiTypeCtor_90;
                          MR_Word RttiId_91;
                          MR_Word Const_92;
                          MR_Word Var_120;

                          ModuleName_88 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_85);
                          MLDS_Module_89 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_88);
                          {
                            RttiTypeCtor_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), RttiTypeCtor_90, 0) = ((MR_Box) (ModuleName_88));
                            MR_hl_field(MR_mktag(0), RttiTypeCtor_90, 1) = ((MR_Box) (TypeName_86));
                            MR_hl_field(MR_mktag(0), RttiTypeCtor_90, 2) = ((MR_Box) (TypeArity_87));
                          }
                          {
                            RttiId_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), RttiId_91, 0) = ((MR_Box) (RttiTypeCtor_90));
                            MR_hl_field(MR_mktag(0), RttiId_91, 1) = ((MR_Box) ((MR_Integer) 44));
                          }
                          {
                            Const_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Const_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                            MR_hl_field(MR_mktag(3), Const_92, 1) = ((MR_Box) (MLDS_Module_89));
                            MR_hl_field(MR_mktag(3), Const_92, 2) = ((MR_Box) (RttiId_91));
                          }
                          {
                            Var_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), Var_120, 1) = ((MR_Box) (Const_92));
                          }
                          {
                            Rval_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Rval_178, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                            MR_hl_field(MR_mktag(3), Rval_178, 1) = ((MR_Box) (MLDS_Type_177));
                            MR_hl_field(MR_mktag(3), Rval_178, 2) = ((MR_Box) (Var_120));
                          }
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Word ClassId_93 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                          MR_String Instance_94 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
                          MR_Word TCName_95;
                          MR_Word Var_117;
                          MR_Word Var_118;
                          MR_Word ModuleName_165 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                          MR_Word MLDS_Module_166;
                          MR_Word RttiId_167;
                          MR_Word Const_168;

                          MLDS_Module_166 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_165);
                          TCName_95 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_93);
                          {
                            Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (ModuleName_165));
                            MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (Instance_94));
                          }
                          {
                            RttiId_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), RttiId_167, 0) = ((MR_Box) (TCName_95));
                            MR_hl_field(MR_mktag(1), RttiId_167, 1) = ((MR_Box) (Var_117));
                          }
                          {
                            Const_168 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Const_168, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                            MR_hl_field(MR_mktag(3), Const_168, 1) = ((MR_Box) (MLDS_Module_166));
                            MR_hl_field(MR_mktag(3), Const_168, 2) = ((MR_Box) (RttiId_167));
                          }
                          {
                            Var_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), Var_118, 1) = ((MR_Box) (Const_168));
                          }
                          {
                            Rval_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Rval_178, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                            MR_hl_field(MR_mktag(3), Rval_178, 1) = ((MR_Box) (MLDS_Type_177));
                            MR_hl_field(MR_mktag(3), Rval_178, 2) = ((MR_Box) (Var_118));
                          }
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          MR_Word PredLabel_96;
                          MR_Word PredModule_97;
                          MR_Word ProcLabel_98;
                          MR_Word QualProcLabel_99;
                          MR_Word Var_114;
                          MR_Word Var_116;
                          MR_Word PredId_169 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                          MR_Integer ProcId_170 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                          MR_Word Const_171;

                          {
                            Var_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (PredId_169));
                            MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) (ProcId_170));
                          }
                          ml_backend__ml_code_util__ml_gen_pred_label_4_p_0(ModuleInfo_176, Var_114, &PredLabel_96, &PredModule_97);
                          {
                            ProcLabel_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ProcLabel_98, 0) = ((MR_Box) (PredLabel_96));
                            MR_hl_field(MR_mktag(0), ProcLabel_98, 1) = ((MR_Box) (ProcId_170));
                          }
                          {
                            QualProcLabel_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), QualProcLabel_99, 0) = ((MR_Box) (PredModule_97));
                            MR_hl_field(MR_mktag(0), QualProcLabel_99, 1) = ((MR_Box) (ProcLabel_98));
                          }
                          {
                            Const_171 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Const_171, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
                            MR_hl_field(MR_mktag(3), Const_171, 1) = ((MR_Box) (QualProcLabel_99));
                            MR_hl_field(MR_mktag(3), Const_171, 2) = ((MR_Box) ((MR_Integer) 0));
                          }
                          {
                            Var_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), Var_116, 1) = ((MR_Box) (Const_171));
                          }
                          {
                            Rval_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Rval_178, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                            MR_hl_field(MR_mktag(3), Rval_178, 1) = ((MR_Box) (MLDS_Type_177));
                            MR_hl_field(MR_mktag(3), Rval_178, 2) = ((MR_Box) (Var_116));
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
                          MR_Word LocalSectag_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                          MR_Word LocalSectagSize_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalSectag_81, (MR_Integer) 1))));
                          MR_Unsigned SectagWholeWordUint_84 = (MR_Unsigned) (LocalSectagSize_83);
                          MR_Word Var_121;
                          MR_Word Var_122;
                          MR_Integer Var_123;

                          Var_123 = mercury__uint__cast_to_int_1_f_0(SectagWholeWordUint_84);
                          {
                            Var_122 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), Var_122, 0) = ((MR_Box) (Var_123));
                          }
                          {
                            Var_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), Var_121, 1) = ((MR_Box) (Var_122));
                          }
                          {
                            Rval_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Rval_178, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                            MR_hl_field(MR_mktag(3), Rval_178, 1) = ((MR_Box) (MLDS_Type_177));
                            MR_hl_field(MR_mktag(3), Rval_178, 2) = ((MR_Box) (Var_121));
                          }
                        }
                        break;
                    }
                    break;
                }
                {
                  GroundTerm_179 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), GroundTerm_179, 0) = ((MR_Box) (Rval_178));
                  MR_hl_field(MR_mktag(0), GroundTerm_179, 1) = ((MR_Box) (VarType_174));
                  MR_hl_field(MR_mktag(0), GroundTerm_179, 2) = ((MR_Box) (MLDS_Type_177));
                }
                ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_12, GroundTerm_179, STATE_VARIABLE_Info_0_106, STATE_VARIABLE_Info_107);
                Stmt_180 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_175, Rval_178, Context_18);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *Stmts_20 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_180));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
                }
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct\'/11", (MR_String) "bad constant term");
                  return;
                }
              }
              *Defns_19 = (MR_Word) ((MR_Integer) 0);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgVar_24;
              MR_Word ArgMode_25;
              MR_Word Var_136;
              MR_Word Var_137;

              succeeded = ((MR_tag((MR_Word) ArgVars_14)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgVar_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_14, (MR_Integer) 0))));
                Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_14, (MR_Integer) 1))));
                succeeded = (Var_136 == (MR_Word) ((MR_Integer) 0));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) ArgModes_15)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    ArgMode_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_15, (MR_Integer) 0))));
                    Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_15, (MR_Integer) 1))));
                    succeeded = (Var_137 == (MR_Word) ((MR_Integer) 0));
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

                ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_106, Var_12, &VarType_26);
                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_106, Var_12, &VarLval_27);
                ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_106, &ModuleInfo_28);
                MLDS_Type_29 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_28, VarType_26);
                succeeded = ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(STATE_VARIABLE_Info_0_106, ArgVar_24, &ArgGroundTerm_30);
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
                  MR_Word STATE_VARIABLE_Info_139_139;

                  ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_106, &GlobalData0_34);
                  ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_28, Context_18, MLDS_ArgType_33, (MR_Integer) 2, ArgRval_31, &Rval0_35, GlobalData0_34, &GlobalData_36);
                  ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_36, STATE_VARIABLE_Info_0_106, &STATE_VARIABLE_Info_139_139);
                  Rval_37 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(MLDS_Type_29, ConsTag_22, Rval0_35);
                  {
                    GroundTerm_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), GroundTerm_38, 0) = ((MR_Box) (Rval_37));
                    MR_hl_field(MR_mktag(0), GroundTerm_38, 1) = ((MR_Box) (VarType_26));
                    MR_hl_field(MR_mktag(0), GroundTerm_38, 2) = ((MR_Box) (MLDS_Type_29));
                  }
                  ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_12, GroundTerm_38, STATE_VARIABLE_Info_139_139, STATE_VARIABLE_Info_107);
                  Stmt_39 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_27, Rval_37, Context_18);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *Stmts_20 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_39));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
                  }
                }
                else
                {
                  MR_Word ArgLval_40;
                  MR_Word ArgType_41;

                  ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_106, ArgVar_24, &ArgLval_40);
                  ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_106, ArgVar_24, &ArgType_41);
                  if ((ConsTag_22 == (MR_Word) ((MR_Integer) 8)))
                  {
                    MR_Word ArgRval_148;
                    MR_Word Rval_149;
                    MR_Word Stmt_150;

                    {
                      ArgRval_148 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ArgRval_148, 0) = ((MR_Box) (ArgLval_40));
                    }
                    ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_28, ArgType_41, VarType_26, (MR_Integer) 0, ArgRval_148, &Rval_149);
                    Stmt_150 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_27, Rval_149, Context_18);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *Stmts_20 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_150));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
                    }
                  }
                  else
                  {
                    MR_Word Ptag_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));

                    ml_backend__ml_unify_gen__ml_gen_dynamic_construct_direct_arg_9_p_0(ModuleInfo_28, Ptag_42, ArgMode_25, ArgLval_40, ArgType_41, VarLval_27, VarType_26, Context_18, Stmts_20);
                  }
                  *STATE_VARIABLE_Info_107 = STATE_VARIABLE_Info_0_106;
                }
              }
              else
              if ((ConsTag_22 == (MR_Word) ((MR_Integer) 8)))
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
              *Defns_19 = (MR_Word) ((MR_Integer) 0);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          if ((ArgVars_14 == (MR_Word) ((MR_Integer) 0)))
          {
            MR_Word VarType_174;
            MR_Word VarLval_175;
            MR_Word ModuleInfo_176;
            MR_Word MLDS_Type_177;
            MR_Word Rval_178;
            MR_Word GroundTerm_179;
            MR_Word Stmt_180;

            ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_106, Var_12, &VarType_174);
            ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_106, Var_12, &VarLval_175);
            ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_106, &ModuleInfo_176);
            MLDS_Type_177 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_176, VarType_174);
            switch (MR_tag((MR_Word) ConsTag_22)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  Rval_178 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_5[0]), VarType_174, MLDS_Type_177);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String String_77 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConsTag_22, (MR_Integer) 0))));
                  MR_Word Var_125;

                  {
                    Var_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                    MR_hl_field(MR_mktag(3), Var_125, 1) = ((MR_Box) (String_77));
                  }
                  {
                    Rval_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Rval_178, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), Rval_178, 1) = ((MR_Box) (Var_125));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Float Float_76 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_22, (MR_Integer) 0)));
                  MR_Word Var_126;

                  {
                    Var_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                    MR_hl_field(MR_mktag(3), Var_126, 1) = MR_box_float(Float_76);
                  }
                  {
                    Rval_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Rval_178, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), Rval_178, 1) = ((MR_Box) (Var_126));
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word IntTag_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));

                      Rval_178 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0(IntTag_75, VarType_174, MLDS_Type_177);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ForeignLang_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                      MR_String ForeignTag_79 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                      MR_Word Var_124;

                      {
                        Var_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                        MR_hl_field(MR_mktag(3), Var_124, 1) = ((MR_Box) (ForeignLang_78));
                        MR_hl_field(MR_mktag(3), Var_124, 2) = ((MR_Box) (ForeignTag_79));
                        MR_hl_field(MR_mktag(3), Var_124, 3) = ((MR_Box) (MLDS_Type_177));
                      }
                      {
                        Rval_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Rval_178, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), Rval_178, 1) = ((MR_Box) (Var_124));
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word ModuleName0_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                      MR_String TypeName_86 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                      MR_Integer TypeArity_87 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
                      MR_Word ModuleName_88;
                      MR_Word MLDS_Module_89;
                      MR_Word RttiTypeCtor_90;
                      MR_Word RttiId_91;
                      MR_Word Const_92;
                      MR_Word Var_120;

                      ModuleName_88 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_85);
                      MLDS_Module_89 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_88);
                      {
                        RttiTypeCtor_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), RttiTypeCtor_90, 0) = ((MR_Box) (ModuleName_88));
                        MR_hl_field(MR_mktag(0), RttiTypeCtor_90, 1) = ((MR_Box) (TypeName_86));
                        MR_hl_field(MR_mktag(0), RttiTypeCtor_90, 2) = ((MR_Box) (TypeArity_87));
                      }
                      {
                        RttiId_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), RttiId_91, 0) = ((MR_Box) (RttiTypeCtor_90));
                        MR_hl_field(MR_mktag(0), RttiId_91, 1) = ((MR_Box) ((MR_Integer) 44));
                      }
                      {
                        Const_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Const_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                        MR_hl_field(MR_mktag(3), Const_92, 1) = ((MR_Box) (MLDS_Module_89));
                        MR_hl_field(MR_mktag(3), Const_92, 2) = ((MR_Box) (RttiId_91));
                      }
                      {
                        Var_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), Var_120, 1) = ((MR_Box) (Const_92));
                      }
                      {
                        Rval_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Rval_178, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                        MR_hl_field(MR_mktag(3), Rval_178, 1) = ((MR_Box) (MLDS_Type_177));
                        MR_hl_field(MR_mktag(3), Rval_178, 2) = ((MR_Box) (Var_120));
                      }
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_Word ClassId_93 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                      MR_String Instance_94 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
                      MR_Word TCName_95;
                      MR_Word Var_117;
                      MR_Word Var_118;
                      MR_Word ModuleName_165 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                      MR_Word MLDS_Module_166;
                      MR_Word RttiId_167;
                      MR_Word Const_168;

                      MLDS_Module_166 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_165);
                      TCName_95 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_93);
                      {
                        Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (ModuleName_165));
                        MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (Instance_94));
                      }
                      {
                        RttiId_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), RttiId_167, 0) = ((MR_Box) (TCName_95));
                        MR_hl_field(MR_mktag(1), RttiId_167, 1) = ((MR_Box) (Var_117));
                      }
                      {
                        Const_168 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Const_168, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                        MR_hl_field(MR_mktag(3), Const_168, 1) = ((MR_Box) (MLDS_Module_166));
                        MR_hl_field(MR_mktag(3), Const_168, 2) = ((MR_Box) (RttiId_167));
                      }
                      {
                        Var_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), Var_118, 1) = ((MR_Box) (Const_168));
                      }
                      {
                        Rval_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Rval_178, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                        MR_hl_field(MR_mktag(3), Rval_178, 1) = ((MR_Box) (MLDS_Type_177));
                        MR_hl_field(MR_mktag(3), Rval_178, 2) = ((MR_Box) (Var_118));
                      }
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      MR_Word PredLabel_96;
                      MR_Word PredModule_97;
                      MR_Word ProcLabel_98;
                      MR_Word QualProcLabel_99;
                      MR_Word Var_114;
                      MR_Word Var_116;
                      MR_Word PredId_169 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                      MR_Integer ProcId_170 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                      MR_Word Const_171;

                      {
                        Var_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (PredId_169));
                        MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) (ProcId_170));
                      }
                      ml_backend__ml_code_util__ml_gen_pred_label_4_p_0(ModuleInfo_176, Var_114, &PredLabel_96, &PredModule_97);
                      {
                        ProcLabel_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ProcLabel_98, 0) = ((MR_Box) (PredLabel_96));
                        MR_hl_field(MR_mktag(0), ProcLabel_98, 1) = ((MR_Box) (ProcId_170));
                      }
                      {
                        QualProcLabel_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), QualProcLabel_99, 0) = ((MR_Box) (PredModule_97));
                        MR_hl_field(MR_mktag(0), QualProcLabel_99, 1) = ((MR_Box) (ProcLabel_98));
                      }
                      {
                        Const_171 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Const_171, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
                        MR_hl_field(MR_mktag(3), Const_171, 1) = ((MR_Box) (QualProcLabel_99));
                        MR_hl_field(MR_mktag(3), Const_171, 2) = ((MR_Box) ((MR_Integer) 0));
                      }
                      {
                        Var_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), Var_116, 1) = ((MR_Box) (Const_171));
                      }
                      {
                        Rval_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Rval_178, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                        MR_hl_field(MR_mktag(3), Rval_178, 1) = ((MR_Box) (MLDS_Type_177));
                        MR_hl_field(MR_mktag(3), Rval_178, 2) = ((MR_Box) (Var_116));
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
                      MR_Word LocalSectag_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                      MR_Word LocalSectagSize_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalSectag_81, (MR_Integer) 1))));
                      MR_Unsigned SectagWholeWordUint_84 = (MR_Unsigned) (LocalSectagSize_83);
                      MR_Word Var_121;
                      MR_Word Var_122;
                      MR_Integer Var_123;

                      Var_123 = mercury__uint__cast_to_int_1_f_0(SectagWholeWordUint_84);
                      {
                        Var_122 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), Var_122, 0) = ((MR_Box) (Var_123));
                      }
                      {
                        Var_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), Var_121, 1) = ((MR_Box) (Var_122));
                      }
                      {
                        Rval_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Rval_178, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                        MR_hl_field(MR_mktag(3), Rval_178, 1) = ((MR_Box) (MLDS_Type_177));
                        MR_hl_field(MR_mktag(3), Rval_178, 2) = ((MR_Box) (Var_121));
                      }
                    }
                    break;
                }
                break;
            }
            {
              GroundTerm_179 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), GroundTerm_179, 0) = ((MR_Box) (Rval_178));
              MR_hl_field(MR_mktag(0), GroundTerm_179, 1) = ((MR_Box) (VarType_174));
              MR_hl_field(MR_mktag(0), GroundTerm_179, 2) = ((MR_Box) (MLDS_Type_177));
            }
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_12, GroundTerm_179, STATE_VARIABLE_Info_0_106, STATE_VARIABLE_Info_107);
            Stmt_180 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_175, Rval_178, Context_18);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_20 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_180));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
            }
          }
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct\'/11", (MR_String) "bad constant term");
              return;
            }
          }
          *Defns_19 = (MR_Word) ((MR_Integer) 0);
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
              if ((ArgVars_14 == (MR_Word) ((MR_Integer) 0)))
              {
                MR_Word VarType_174;
                MR_Word VarLval_175;
                MR_Word ModuleInfo_176;
                MR_Word MLDS_Type_177;
                MR_Word Rval_178;
                MR_Word GroundTerm_179;
                MR_Word Stmt_180;

                ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_106, Var_12, &VarType_174);
                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_106, Var_12, &VarLval_175);
                ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_106, &ModuleInfo_176);
                MLDS_Type_177 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_176, VarType_174);
                switch (MR_tag((MR_Word) ConsTag_22)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      Rval_178 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_5[0]), VarType_174, MLDS_Type_177);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_String String_77 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConsTag_22, (MR_Integer) 0))));
                      MR_Word Var_125;

                      {
                        Var_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                        MR_hl_field(MR_mktag(3), Var_125, 1) = ((MR_Box) (String_77));
                      }
                      {
                        Rval_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Rval_178, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), Rval_178, 1) = ((MR_Box) (Var_125));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Float Float_76 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_22, (MR_Integer) 0)));
                      MR_Word Var_126;

                      {
                        Var_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                        MR_hl_field(MR_mktag(3), Var_126, 1) = MR_box_float(Float_76);
                      }
                      {
                        Rval_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Rval_178, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), Rval_178, 1) = ((MR_Box) (Var_126));
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word IntTag_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));

                          Rval_178 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0(IntTag_75, VarType_174, MLDS_Type_177);
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ForeignLang_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                          MR_String ForeignTag_79 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                          MR_Word Var_124;

                          {
                            Var_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                            MR_hl_field(MR_mktag(3), Var_124, 1) = ((MR_Box) (ForeignLang_78));
                            MR_hl_field(MR_mktag(3), Var_124, 2) = ((MR_Box) (ForeignTag_79));
                            MR_hl_field(MR_mktag(3), Var_124, 3) = ((MR_Box) (MLDS_Type_177));
                          }
                          {
                            Rval_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Rval_178, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), Rval_178, 1) = ((MR_Box) (Var_124));
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word ModuleName0_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                          MR_String TypeName_86 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                          MR_Integer TypeArity_87 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
                          MR_Word ModuleName_88;
                          MR_Word MLDS_Module_89;
                          MR_Word RttiTypeCtor_90;
                          MR_Word RttiId_91;
                          MR_Word Const_92;
                          MR_Word Var_120;

                          ModuleName_88 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_85);
                          MLDS_Module_89 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_88);
                          {
                            RttiTypeCtor_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), RttiTypeCtor_90, 0) = ((MR_Box) (ModuleName_88));
                            MR_hl_field(MR_mktag(0), RttiTypeCtor_90, 1) = ((MR_Box) (TypeName_86));
                            MR_hl_field(MR_mktag(0), RttiTypeCtor_90, 2) = ((MR_Box) (TypeArity_87));
                          }
                          {
                            RttiId_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), RttiId_91, 0) = ((MR_Box) (RttiTypeCtor_90));
                            MR_hl_field(MR_mktag(0), RttiId_91, 1) = ((MR_Box) ((MR_Integer) 44));
                          }
                          {
                            Const_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Const_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                            MR_hl_field(MR_mktag(3), Const_92, 1) = ((MR_Box) (MLDS_Module_89));
                            MR_hl_field(MR_mktag(3), Const_92, 2) = ((MR_Box) (RttiId_91));
                          }
                          {
                            Var_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), Var_120, 1) = ((MR_Box) (Const_92));
                          }
                          {
                            Rval_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Rval_178, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                            MR_hl_field(MR_mktag(3), Rval_178, 1) = ((MR_Box) (MLDS_Type_177));
                            MR_hl_field(MR_mktag(3), Rval_178, 2) = ((MR_Box) (Var_120));
                          }
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Word ClassId_93 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                          MR_String Instance_94 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
                          MR_Word TCName_95;
                          MR_Word Var_117;
                          MR_Word Var_118;
                          MR_Word ModuleName_165 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                          MR_Word MLDS_Module_166;
                          MR_Word RttiId_167;
                          MR_Word Const_168;

                          MLDS_Module_166 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_165);
                          TCName_95 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_93);
                          {
                            Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (ModuleName_165));
                            MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (Instance_94));
                          }
                          {
                            RttiId_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), RttiId_167, 0) = ((MR_Box) (TCName_95));
                            MR_hl_field(MR_mktag(1), RttiId_167, 1) = ((MR_Box) (Var_117));
                          }
                          {
                            Const_168 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Const_168, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                            MR_hl_field(MR_mktag(3), Const_168, 1) = ((MR_Box) (MLDS_Module_166));
                            MR_hl_field(MR_mktag(3), Const_168, 2) = ((MR_Box) (RttiId_167));
                          }
                          {
                            Var_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), Var_118, 1) = ((MR_Box) (Const_168));
                          }
                          {
                            Rval_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Rval_178, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                            MR_hl_field(MR_mktag(3), Rval_178, 1) = ((MR_Box) (MLDS_Type_177));
                            MR_hl_field(MR_mktag(3), Rval_178, 2) = ((MR_Box) (Var_118));
                          }
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          MR_Word PredLabel_96;
                          MR_Word PredModule_97;
                          MR_Word ProcLabel_98;
                          MR_Word QualProcLabel_99;
                          MR_Word Var_114;
                          MR_Word Var_116;
                          MR_Word PredId_169 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                          MR_Integer ProcId_170 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                          MR_Word Const_171;

                          {
                            Var_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (PredId_169));
                            MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) (ProcId_170));
                          }
                          ml_backend__ml_code_util__ml_gen_pred_label_4_p_0(ModuleInfo_176, Var_114, &PredLabel_96, &PredModule_97);
                          {
                            ProcLabel_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ProcLabel_98, 0) = ((MR_Box) (PredLabel_96));
                            MR_hl_field(MR_mktag(0), ProcLabel_98, 1) = ((MR_Box) (ProcId_170));
                          }
                          {
                            QualProcLabel_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), QualProcLabel_99, 0) = ((MR_Box) (PredModule_97));
                            MR_hl_field(MR_mktag(0), QualProcLabel_99, 1) = ((MR_Box) (ProcLabel_98));
                          }
                          {
                            Const_171 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Const_171, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
                            MR_hl_field(MR_mktag(3), Const_171, 1) = ((MR_Box) (QualProcLabel_99));
                            MR_hl_field(MR_mktag(3), Const_171, 2) = ((MR_Box) ((MR_Integer) 0));
                          }
                          {
                            Var_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), Var_116, 1) = ((MR_Box) (Const_171));
                          }
                          {
                            Rval_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Rval_178, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                            MR_hl_field(MR_mktag(3), Rval_178, 1) = ((MR_Box) (MLDS_Type_177));
                            MR_hl_field(MR_mktag(3), Rval_178, 2) = ((MR_Box) (Var_116));
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
                          MR_Word LocalSectag_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                          MR_Word LocalSectagSize_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalSectag_81, (MR_Integer) 1))));
                          MR_Unsigned SectagWholeWordUint_84 = (MR_Unsigned) (LocalSectagSize_83);
                          MR_Word Var_121;
                          MR_Word Var_122;
                          MR_Integer Var_123;

                          Var_123 = mercury__uint__cast_to_int_1_f_0(SectagWholeWordUint_84);
                          {
                            Var_122 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), Var_122, 0) = ((MR_Box) (Var_123));
                          }
                          {
                            Var_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), Var_121, 1) = ((MR_Box) (Var_122));
                          }
                          {
                            Rval_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Rval_178, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                            MR_hl_field(MR_mktag(3), Rval_178, 1) = ((MR_Box) (MLDS_Type_177));
                            MR_hl_field(MR_mktag(3), Rval_178, 2) = ((MR_Box) (Var_121));
                          }
                        }
                        break;
                    }
                    break;
                }
                {
                  GroundTerm_179 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), GroundTerm_179, 0) = ((MR_Box) (Rval_178));
                  MR_hl_field(MR_mktag(0), GroundTerm_179, 1) = ((MR_Box) (VarType_174));
                  MR_hl_field(MR_mktag(0), GroundTerm_179, 2) = ((MR_Box) (MLDS_Type_177));
                }
                ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_12, GroundTerm_179, STATE_VARIABLE_Info_0_106, STATE_VARIABLE_Info_107);
                Stmt_180 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_175, Rval_178, Context_18);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *Stmts_20 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_180));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
                }
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct\'/11", (MR_String) "bad constant term");
                  return;
                }
              }
              *Defns_19 = (MR_Word) ((MR_Integer) 0);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word PredId_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
              MR_Integer ProcId_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));

              ml_backend__ml_closure_gen__ml_gen_closure_11_p_0(PredId_47, ProcId_48, Var_12, ArgVars_14, ArgModes_15, HowToConstruct_17, Context_18, Defns_19, Stmts_20, STATE_VARIABLE_Info_0_106, STATE_VARIABLE_Info_107);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer ConstNum_208 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
              MR_Word ConstStructMap_209;
              MR_Word GroundTerm0_210;
              MR_Word VarType_214;
              MR_Word VarLval_215;
              MR_Word ModuleInfo_216;
              MR_Word MLDS_Type_217;
              MR_Word Rval_218;
              MR_Word GroundTerm_219;
              MR_Word Stmt_220;
              MR_Box conv1_GroundTerm0_210;

              ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_106, &ConstStructMap_209);
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_209, ConstNum_208, &conv1_GroundTerm0_210);
              GroundTerm0_210 = ((MR_Word) (conv1_GroundTerm0_210));
              Rval_218 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_210, (MR_Integer) 0))));
              ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_106, Var_12, &VarType_214);
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_106, Var_12, &VarLval_215);
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_106, &ModuleInfo_216);
              MLDS_Type_217 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_216, VarType_214);
              {
                GroundTerm_219 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_219, 0) = ((MR_Box) (Rval_218));
                MR_hl_field(MR_mktag(0), GroundTerm_219, 1) = ((MR_Box) (VarType_214));
                MR_hl_field(MR_mktag(0), GroundTerm_219, 2) = ((MR_Box) (MLDS_Type_217));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_12, GroundTerm_219, STATE_VARIABLE_Info_0_106, STATE_VARIABLE_Info_107);
              *Defns_19 = (MR_Word) ((MR_Integer) 0);
              Stmt_220 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_215, Rval_218, Context_18);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_20 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_220));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Integer ConstNum_225 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
              MR_Word ConstStructMap_226;
              MR_Word GroundTerm0_227;
              MR_Word VarType_231;
              MR_Word VarLval_232;
              MR_Word ModuleInfo_233;
              MR_Word MLDS_Type_234;
              MR_Word Rval_235;
              MR_Word GroundTerm_236;
              MR_Word Stmt_237;
              MR_Box conv2_GroundTerm0_227;

              ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_106, &ConstStructMap_226);
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_226, ConstNum_225, &conv2_GroundTerm0_227);
              GroundTerm0_227 = ((MR_Word) (conv2_GroundTerm0_227));
              Rval_235 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_227, (MR_Integer) 0))));
              ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_106, Var_12, &VarType_231);
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_106, Var_12, &VarLval_232);
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_106, &ModuleInfo_233);
              MLDS_Type_234 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_233, VarType_231);
              {
                GroundTerm_236 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_236, 0) = ((MR_Box) (Rval_235));
                MR_hl_field(MR_mktag(0), GroundTerm_236, 1) = ((MR_Box) (VarType_231));
                MR_hl_field(MR_mktag(0), GroundTerm_236, 2) = ((MR_Box) (MLDS_Type_234));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_12, GroundTerm_236, STATE_VARIABLE_Info_0_106, STATE_VARIABLE_Info_107);
              *Defns_19 = (MR_Word) ((MR_Integer) 0);
              Stmt_237 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_232, Rval_235, Context_18);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_20 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_237));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Integer ConstNum_50 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
              MR_Word ConstStructMap_52;
              MR_Word GroundTerm0_53;
              MR_Word VarType_158;
              MR_Word VarLval_159;
              MR_Word ModuleInfo_160;
              MR_Word MLDS_Type_161;
              MR_Word Rval_162;
              MR_Word GroundTerm_163;
              MR_Word Stmt_164;
              MR_Box conv0_GroundTerm0_53;

              ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_106, &ConstStructMap_52);
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_52, ConstNum_50, &conv0_GroundTerm0_53);
              GroundTerm0_53 = ((MR_Word) (conv0_GroundTerm0_53));
              Rval_162 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_53, (MR_Integer) 0))));
              ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_106, Var_12, &VarType_158);
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_106, Var_12, &VarLval_159);
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_106, &ModuleInfo_160);
              MLDS_Type_161 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_160, VarType_158);
              {
                GroundTerm_163 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_163, 0) = ((MR_Box) (Rval_162));
                MR_hl_field(MR_mktag(0), GroundTerm_163, 1) = ((MR_Box) (VarType_158));
                MR_hl_field(MR_mktag(0), GroundTerm_163, 2) = ((MR_Box) (MLDS_Type_161));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_12, GroundTerm_163, STATE_VARIABLE_Info_0_106, STATE_VARIABLE_Info_107);
              *Defns_19 = (MR_Word) ((MR_Integer) 0);
              Stmt_164 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_159, Rval_162, Context_18);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_20 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_164));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word UsesBaseClass_241;
              MR_Word Ptag_242 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));

              UsesBaseClass_241 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(ConsTag_22);
              ml_backend__ml_unify_gen__ml_gen_construct_compound_14_p_0(ConsId_13, Ptag_242, (MR_Word) ((MR_Integer) 0), UsesBaseClass_241, Var_12, ArgVars_14, ArgModes_15, TakeAddr_16, HowToConstruct_17, Context_18, Defns_19, Stmts_20, STATE_VARIABLE_Info_0_106, STATE_VARIABLE_Info_107);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word ArgVar_24;
              MR_Word ArgMode_25;
              MR_Word Var_136;
              MR_Word Var_137;

              succeeded = ((MR_tag((MR_Word) ArgVars_14)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgVar_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_14, (MR_Integer) 0))));
                Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_14, (MR_Integer) 1))));
                succeeded = (Var_136 == (MR_Word) ((MR_Integer) 0));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) ArgModes_15)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    ArgMode_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_15, (MR_Integer) 0))));
                    Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_15, (MR_Integer) 1))));
                    succeeded = (Var_137 == (MR_Word) ((MR_Integer) 0));
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

                ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_106, Var_12, &VarType_26);
                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_106, Var_12, &VarLval_27);
                ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_106, &ModuleInfo_28);
                MLDS_Type_29 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_28, VarType_26);
                succeeded = ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(STATE_VARIABLE_Info_0_106, ArgVar_24, &ArgGroundTerm_30);
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
                  MR_Word STATE_VARIABLE_Info_139_139;

                  ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_106, &GlobalData0_34);
                  ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_28, Context_18, MLDS_ArgType_33, (MR_Integer) 2, ArgRval_31, &Rval0_35, GlobalData0_34, &GlobalData_36);
                  ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_36, STATE_VARIABLE_Info_0_106, &STATE_VARIABLE_Info_139_139);
                  Rval_37 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(MLDS_Type_29, ConsTag_22, Rval0_35);
                  {
                    GroundTerm_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), GroundTerm_38, 0) = ((MR_Box) (Rval_37));
                    MR_hl_field(MR_mktag(0), GroundTerm_38, 1) = ((MR_Box) (VarType_26));
                    MR_hl_field(MR_mktag(0), GroundTerm_38, 2) = ((MR_Box) (MLDS_Type_29));
                  }
                  ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_12, GroundTerm_38, STATE_VARIABLE_Info_139_139, STATE_VARIABLE_Info_107);
                  Stmt_39 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_27, Rval_37, Context_18);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *Stmts_20 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_39));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
                  }
                }
                else
                {
                  MR_Word ArgLval_40;
                  MR_Word ArgType_41;

                  ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_106, ArgVar_24, &ArgLval_40);
                  ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_106, ArgVar_24, &ArgType_41);
                  if ((ConsTag_22 == (MR_Word) ((MR_Integer) 8)))
                  {
                    MR_Word ArgRval_148;
                    MR_Word Rval_149;
                    MR_Word Stmt_150;

                    {
                      ArgRval_148 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ArgRval_148, 0) = ((MR_Box) (ArgLval_40));
                    }
                    ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_28, ArgType_41, VarType_26, (MR_Integer) 0, ArgRval_148, &Rval_149);
                    Stmt_150 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_27, Rval_149, Context_18);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *Stmts_20 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_150));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
                    }
                  }
                  else
                  {
                    MR_Word Ptag_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));

                    ml_backend__ml_unify_gen__ml_gen_dynamic_construct_direct_arg_9_p_0(ModuleInfo_28, Ptag_42, ArgMode_25, ArgLval_40, ArgType_41, VarLval_27, VarType_26, Context_18, Stmts_20);
                  }
                  *STATE_VARIABLE_Info_107 = STATE_VARIABLE_Info_0_106;
                }
              }
              else
              if ((ConsTag_22 == (MR_Word) ((MR_Integer) 8)))
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
              *Defns_19 = (MR_Word) ((MR_Integer) 0);
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word MaybeStag_44;
              MR_Word RemoteSectag_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
              MR_Word UsesBaseClass_46;
              MR_Word Ptag_157 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));

              {
                MaybeStag_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeStag_44, 0) = ((MR_Box) (RemoteSectag_45));
              }
              UsesBaseClass_46 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(ConsTag_22);
              ml_backend__ml_unify_gen__ml_gen_construct_compound_14_p_0(ConsId_13, Ptag_157, MaybeStag_44, UsesBaseClass_46, Var_12, ArgVars_14, ArgModes_15, TakeAddr_16, HowToConstruct_17, Context_18, Defns_19, Stmts_20, STATE_VARIABLE_Info_0_106, STATE_VARIABLE_Info_107);
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
  MR_Word Ptag_11,
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
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
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
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
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

    if ((ConsTag_6 == (MR_Word) ((MR_Integer) 8)))
      TagRval_9 = Rval_7;
    else
    {
      MR_Word Ptag_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_6, (MR_Integer) 1))));

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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_construct_compound__539__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_construct_compound__524__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_construct_compound_14_p_0(
  MR_Word ConsId_15,
  MR_Word Ptag_16,
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
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42)
{
  {
    MR_bool succeeded;
    MR_Word CompilationTarget_28;
    MR_Word MaybeCtorName_29;
    MR_Word ExplicitSectag_35;
    MR_Word ExtraRvalsTypesWidths_40;
    MR_Word Var_61;

    ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_41, &CompilationTarget_28);
    switch (UsesBaseClass_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word CtorName_30;
          MR_Word ConsId_74;
          MR_Word ModuleName_75;
          MR_Word ConsSymName_68;
          MR_Integer ConsArity_69;
          MR_Word TypeCtor_70;
          MR_Word SymModuleName_71;

          succeeded = ((((MR_tag((MR_Word) ConsId_15)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_15, (MR_Integer) 0))) == (MR_Integer) 2)));
          if (succeeded)
          {
            ConsSymName_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_15, (MR_Integer) 1))));
            ConsArity_69 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_15, (MR_Integer) 2))));
            TypeCtor_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_15, (MR_Integer) 3))));
            succeeded = ((MR_tag((MR_Word) ConsSymName_68)) == (MR_Integer) 1);
            if (succeeded)
              SymModuleName_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsSymName_68, (MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_String ConsName_73;

            ConsName_73 = ml_backend__ml_type_gen__ml_gen_du_ctor_name_4_f_0(CompilationTarget_28, TypeCtor_70, ConsSymName_68, ConsArity_69);
            {
              ConsId_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ConsId_74, 0) = ((MR_Box) (ConsName_73));
              MR_hl_field(MR_mktag(0), ConsId_74, 1) = ((MR_Box) (ConsArity_69));
            }
            ModuleName_75 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(SymModuleName_71);
          }
          else
          {
            MR_String ConsName_80;

            ConsName_80 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ConsId_15);
            {
              ConsId_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ConsId_74, 0) = ((MR_Box) (ConsName_80));
              MR_hl_field(MR_mktag(0), ConsId_74, 1) = ((MR_Box) ((MR_Integer) 0));
            }
            ModuleName_75 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_5[1]));
          }
          {
            CtorName_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CtorName_30, 0) = ((MR_Box) (ModuleName_75));
            MR_hl_field(MR_mktag(0), CtorName_30, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), CtorName_30, 2) = ((MR_Box) (ConsId_74));
          }
          {
            MaybeCtorName_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeCtorName_29, 0) = ((MR_Box) (CtorName_30));
          }
        }
        break;
      case (MR_Integer) 1:
        MaybeCtorName_29 = (MR_Word) ((MR_Integer) 0);
        break;
    }
    if ((MaybeStag_17 == (MR_Word) ((MR_Integer) 0)))
    {
      ExplicitSectag_35 = (MR_Integer) 0;
      ExtraRvalsTypesWidths_40 = (MR_Word) ((MR_Integer) 0);
    }
    else
    {
      MR_Word RemoteSectag_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeStag_17, (MR_Integer) 0))));
      MR_Unsigned SectagUint_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RemoteSectag_31, (MR_Integer) 0))));
      MR_Word AddedBy_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RemoteSectag_31, (MR_Integer) 1))));
      MR_Word UsesConstructors_34;

      UsesConstructors_34 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(CompilationTarget_28);
      switch (UsesConstructors_34) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word StagRval0_36;
            MR_Word StagRval_38;
            MR_Word Var_47;
            MR_Word Var_51;
            MR_Integer Var_52;
            MR_Word Var_53;

            {
              Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[11]));
              MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_construct_compound_14_p_0_1));
              MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (AddedBy_33));
              MR_hl_field(MR_mktag(0), Var_47, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            mercury__require__expect_3_p_0(Var_47, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct_compound\'/14", (MR_String) "AddedBy != sectag_added_by_unify");
            ExplicitSectag_35 = (MR_Integer) 1;
            Var_52 = mercury__uint__cast_to_int_1_f_0(SectagUint_32);
            {
              Var_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_51, 0) = ((MR_Box) (Var_52));
            }
            {
              StagRval0_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), StagRval0_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), StagRval0_36, 1) = ((MR_Box) (Var_51));
            }
            {
              StagRval_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), StagRval_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), StagRval_38, 1) = ((MR_Box) ((MR_Integer) 8));
              MR_hl_field(MR_mktag(3), StagRval_38, 2) = ((MR_Box) (StagRval0_36));
            }
            {
              Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (StagRval_38));
              MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) ((MR_Integer) 24));
              MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_1[9])));
              MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) ((MR_Integer) 0));
            }
            {
              ExtraRvalsTypesWidths_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ExtraRvalsTypesWidths_40, 0) = ((MR_Box) (Var_53));
              MR_hl_field(MR_mktag(1), ExtraRvalsTypesWidths_40, 1) = ((MR_Box) ((MR_Integer) 0));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_43;

            {
              Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[11]));
              MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_construct_compound_14_p_0_2));
              MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (AddedBy_33));
              MR_hl_field(MR_mktag(0), Var_43, 4) = ((MR_Box) ((MR_Integer) 1));
            }
            mercury__require__expect_3_p_0(Var_43, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct_compound\'/14", (MR_String) "AddedBy != sectag_added_by_constructor");
            ExplicitSectag_35 = (MR_Integer) 0;
            ExtraRvalsTypesWidths_40 = (MR_Word) ((MR_Integer) 0);
          }
          break;
      }
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (ConsId_15));
    }
    ml_backend__ml_unify_gen__ml_gen_new_object_15_p_0(Var_61, MaybeCtorName_29, Ptag_16, ExplicitSectag_35, Var_19, ExtraRvalsTypesWidths_40, ArgVars_20, ArgModes_21, TakeAddr_22, HowToConstruct_23, Context_24, Defns_25, Stmts_26, STATE_VARIABLE_Info_0_41, STATE_VARIABLE_Info_42);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_15_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object__573__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object__561__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_15_p_0(
  MR_Word MaybeConsId_16,
  MR_Word MaybeCtorName_17,
  MR_Word Ptag_18,
  MR_Word ExplicitSectag_19,
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

    if ((MaybeConsId_16 == (MR_Word) ((MR_Integer) 0)))
    {
      MR_Integer NumExtras_32;
      MR_Word Var_37;

      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[6]));
        MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_15_p_0_1));
        MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (ExplicitSectag_19));
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
                MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[9]));
                MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_15_p_0_2));
                MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (TakeAddr_24));
                MR_hl_field(MR_mktag(0), Var_44, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_44, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_new_object\'/15", (MR_String) "cannot take address of static object\'s field");
              ml_backend__ml_unify_gen__ml_gen_new_object_statically_10_p_0(ConsIdOrClosure_31, MaybeCtorName_17, Ptag_18, Var_20, ExtraRvalsTypesWidths_21, ArgVars_22, Context_26, Stmts_28, STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36);
              *Defns_27 = (MR_Word) ((MR_Integer) 0);
            }
            break;
          case (MR_Integer) 1:
            {
              ml_backend__ml_unify_gen__ml_gen_new_object_dynamically_13_p_0(ConsIdOrClosure_31, MaybeCtorName_17, Ptag_18, ExplicitSectag_19, Var_20, ExtraRvalsTypesWidths_21, ArgVars_22, ArgModes_23, TakeAddr_24, Context_26, Stmts_28, STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36);
              *Defns_27 = (MR_Word) ((MR_Integer) 0);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CellToReuse_33 = (MR_Word) (MR_body((MR_Word) (HowToConstruct_25), (MR_Integer) 1));

          ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_15_p_0(ConsIdOrClosure_31, MaybeCtorName_17, Ptag_18, ExplicitSectag_19, Var_20, ExtraRvalsTypesWidths_21, ArgVars_22, ArgModes_23, TakeAddr_24, CellToReuse_33, Context_26, Defns_27, Stmts_28, STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36);
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__774__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
    MR_Word conv0_LambdaHeadVar__2_81;

    ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__755__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_81);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_81));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_15_p_0(
  MR_Word ConsIdOrClosure_16,
  MR_Word MaybeCtorName_17,
  MR_Word Ptag_18,
  MR_Word ExplicitSectag_19,
  MR_Word Var_20,
  MR_Word ExtraRvalsTypesWidths_21,
  MR_Word ArgVars_22,
  MR_Word ArgModes_23,
  MR_Word TakeAddr_24,
  MR_Word CellToReuse_25,
  MR_Word Context_26,
  MR_Word * Defns_27,
  MR_Word * Stmts_28,
  MR_Word STATE_VARIABLE_Info_0_75,
  MR_Word * STATE_VARIABLE_Info_76)
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
    MR_Word PrimaryTag_44;
    MR_Word InitOffSet_45;
    MR_Integer ArgNum_46;
    MR_Word ArgVarRepns_47;
    MR_Word ReuseVarLval_48;
    MR_Word DifferentTags_50;
    MR_Word ReuseVarRval_51;
    MR_Word VarLval_58;
    MR_Word CastReuseVarRval_59;
    MR_Word MLDS_VarType_60;
    MR_Word HeapTestStmt_61;
    MR_Word MaybePtag_62;
    MR_Word ExtraRvalStmts_63;
    MR_Word FieldGen_64;
    MR_Word TakeAddrInfos_65;
    MR_Word FieldDefns_66;
    MR_Word FieldStmts_67;
    MR_Word TakeAddrStmts_68;
    MR_Word ThenStmts_69;
    MR_Word ThenStmt_70;
    MR_Word DynamicDefns_71;
    MR_Word DynamicStmts_72;
    MR_Word ElseStmt_73;
    MR_Word IfStmt_74;
    MR_Word Var_79;
    MR_Word Var_82;
    MR_Word Var_94;
    MR_Word STATE_VARIABLE_Info_96_96;
    MR_Word STATE_VARIABLE_Info_97_97;
    MR_Word Var_98;
    MR_Word Var_101;
    MR_Word Var_106;
    MR_Word Var_107;
    MR_Word Var_108;

    if (((MR_tag((MR_Word) ConsIdOrClosure_16)) == (MR_Integer) 1))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_new_object_reuse_cell\'/15", (MR_String) "attempt to reuse closure");
        return;
      }
    }
    else
      ConsId_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsIdOrClosure_16, (MR_Integer) 0))));
    {
      Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_15_p_0_1));
      MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_79, 3) = ((MR_Box) (STATE_VARIABLE_Info_0_75));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0), Var_79, ReuseConsIds_31, &ReusePrimaryTags0_40);
    mercury__list__remove_dups_2_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0), ReusePrimaryTags0_40, &ReusePrimaryTags_41);
    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_75, Var_20, &VarType_42);
    ml_backend__ml_unify_gen__ml_cons_id_to_tag_3_p_0(STATE_VARIABLE_Info_0_75, ConsId_33, &ConsTag_43);
    ml_backend__ml_unify_gen__ml_tag_initial_offset_and_argnum_4_p_0(ConsTag_43, &PrimaryTag_44, &InitOffSet_45, &ArgNum_46);
    ml_backend__ml_unify_gen__ml_field_names_and_types_6_p_0(STATE_VARIABLE_Info_0_75, VarType_42, ConsId_33, InitOffSet_45, ArgVars_22, &ArgVarRepns_47);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_75, ReuseVar_30, &ReuseVarLval_48);
    {
      Var_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[10]));
      MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_15_p_0_2));
      MR_hl_field(MR_mktag(0), Var_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_82, 3) = ((MR_Box) (PrimaryTag_44));
    }
    mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0), Var_82, ReusePrimaryTags_41, &DifferentTags_50);
    if ((DifferentTags_50 == (MR_Word) ((MR_Integer) 0)))
      {
        ReuseVarRval_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), ReuseVarRval_51, 0) = ((MR_Box) (ReuseVarLval_48));
      }
    else
    {
      MR_Word Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DifferentTags_50, (MR_Integer) 1))));
      MR_Word Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DifferentTags_50, (MR_Integer) 0))));

      if ((Var_117 == (MR_Word) ((MR_Integer) 0)))
      {
        uint8_t ReusePrimaryTagUint8_53 = (uint8_t) (Var_118);
        MR_Integer ReusePrimaryTagInt_54;
        MR_Word Var_89;
        MR_Word Var_91;
        MR_Word Var_92;
        MR_Word Var_93;

        ReusePrimaryTagInt_54 = mercury__uint8__cast_to_int_1_f_0(ReusePrimaryTagUint8_53);
        {
          Var_91 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_91, 0) = ((MR_Box) (ReuseVarLval_48));
        }
        {
          Var_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_93, 0) = ((MR_Box) (ReusePrimaryTagInt_54));
        }
        {
          Var_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), Var_92, 1) = ((MR_Box) (Var_93));
        }
        {
          Var_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(3), Var_89, 1) = ((MR_Box) ((MR_Integer) 8));
          MR_hl_field(MR_mktag(3), Var_89, 2) = ((MR_Box) (Var_91));
          MR_hl_field(MR_mktag(3), Var_89, 3) = ((MR_Box) (Var_92));
        }
        {
          ReuseVarRval_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ReuseVarRval_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ReuseVarRval_51, 1) = ((MR_Box) (PrimaryTag_44));
          MR_hl_field(MR_mktag(3), ReuseVarRval_51, 2) = ((MR_Box) (Var_89));
        }
      }
      else
      {
        MR_Word Var_85;
        MR_Word Var_87;

        {
          Var_87 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_87, 0) = ((MR_Box) (ReuseVarLval_48));
        }
        {
          Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(3), Var_85, 2) = ((MR_Box) (Var_87));
        }
        {
          ReuseVarRval_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ReuseVarRval_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ReuseVarRval_51, 1) = ((MR_Box) (PrimaryTag_44));
          MR_hl_field(MR_mktag(3), ReuseVarRval_51, 2) = ((MR_Box) (Var_85));
        }
      }
    }
    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_75, Var_20, &VarLval_58);
    ml_backend__ml_code_util__ml_gen_type_3_p_0(STATE_VARIABLE_Info_0_75, VarType_42, &MLDS_VarType_60);
    {
      CastReuseVarRval_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CastReuseVarRval_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), CastReuseVarRval_59, 1) = ((MR_Box) (MLDS_VarType_60));
      MR_hl_field(MR_mktag(3), CastReuseVarRval_59, 2) = ((MR_Box) (ReuseVarRval_51));
    }
    {
      Var_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_94, 1) = ((MR_Box) (VarLval_58));
      MR_hl_field(MR_mktag(3), Var_94, 2) = ((MR_Box) (CastReuseVarRval_59));
    }
    {
      HeapTestStmt_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeapTestStmt_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), HeapTestStmt_61, 1) = ((MR_Box) (Var_94));
      MR_hl_field(MR_mktag(3), HeapTestStmt_61, 2) = ((MR_Box) (Context_26));
    }
    {
      MaybePtag_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePtag_62, 0) = ((MR_Box) (Ptag_18));
    }
    ml_backend__ml_unify_gen__ml_gen_extra_arg_assigns_9_p_0(VarLval_58, MLDS_VarType_60, MaybePtag_62, (MR_Integer) 0, ExtraRvalsTypesWidths_21, Context_26, &ExtraRvalStmts_63, STATE_VARIABLE_Info_0_75, &STATE_VARIABLE_Info_96_96);
    ml_backend__ml_unify_gen__decide_field_gen_6_p_0(STATE_VARIABLE_Info_96_96, VarLval_58, VarType_42, ConsId_33, ConsTag_43, &FieldGen_64);
    ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_11_p_1(FieldGen_64, ArgVarRepns_47, ArgModes_23, ArgNum_46, Context_26, TakeAddr_24, &TakeAddrInfos_65, &FieldDefns_66, &FieldStmts_67, STATE_VARIABLE_Info_96_96, &STATE_VARIABLE_Info_97_97);
    ml_backend__ml_unify_gen__ml_gen_field_take_address_assigns_7_p_0(TakeAddrInfos_65, VarLval_58, MLDS_VarType_60, MaybePtag_62, Context_26, STATE_VARIABLE_Info_97_97, &TakeAddrStmts_68);
    Var_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), FieldStmts_67, TakeAddrStmts_68);
    ThenStmts_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ExtraRvalStmts_63, Var_98);
    {
      ThenStmt_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ThenStmt_70, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ThenStmt_70, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ThenStmt_70, 2) = ((MR_Box) (ThenStmts_69));
      MR_hl_field(MR_mktag(0), ThenStmt_70, 3) = ((MR_Box) (Context_26));
    }
    {
      Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (ConsId_33));
    }
    ml_backend__ml_unify_gen__ml_gen_new_object_15_p_0(Var_101, MaybeCtorName_17, Ptag_18, ExplicitSectag_19, Var_20, ExtraRvalsTypesWidths_21, ArgVars_22, ArgModes_23, TakeAddr_24, (MR_Word) ((MR_Integer) 4), Context_26, &DynamicDefns_71, &DynamicStmts_72, STATE_VARIABLE_Info_97_97, STATE_VARIABLE_Info_76);
    *Defns_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), FieldDefns_66, DynamicDefns_71);
    {
      ElseStmt_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ElseStmt_73, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ElseStmt_73, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ElseStmt_73, 2) = ((MR_Box) (DynamicStmts_72));
      MR_hl_field(MR_mktag(0), ElseStmt_73, 3) = ((MR_Box) (Context_26));
    }
    {
      Var_106 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_106, 0) = ((MR_Box) (VarLval_58));
    }
    {
      Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (ElseStmt_73));
    }
    {
      IfStmt_74 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), IfStmt_74, 0) = ((MR_Box) (Var_106));
      MR_hl_field(MR_mktag(2), IfStmt_74, 1) = ((MR_Box) (ThenStmt_70));
      MR_hl_field(MR_mktag(2), IfStmt_74, 2) = ((MR_Box) (Var_107));
      MR_hl_field(MR_mktag(2), IfStmt_74, 3) = ((MR_Box) (Context_26));
    }
    {
      Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (IfStmt_74));
      MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_28 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeapTestStmt_61));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_108));
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
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_11_p_1_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__1558__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_11_p_1(
  MR_Word FieldGen_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer CurArgNum_4,
  MR_Word Context_5,
  MR_Word TakeAddr_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Integer) 0)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Integer) 0)))
      {
        MR_Word Var_19;

        *HeadVar__7_7 = (MR_Word) ((MR_Integer) 0);
        *HeadVar__8_8 = (MR_Word) ((MR_Integer) 0);
        *HeadVar__9_9 = (MR_Word) ((MR_Integer) 0);
        {
          Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[9]));
          MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_11_p_1_1));
          MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (TakeAddr_6));
          MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        mercury__require__expect_3_p_0(Var_19, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_args\'/11", (MR_String) "TakeAddr != []");
        *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_0_10;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_args\'/11", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Integer) 0)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_args\'/11", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word Mode_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word Modes_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgVar_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_111, (MR_Integer) 0))));
        MR_Word CtorArgRepn_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_111, (MR_Integer) 1))));
        MR_Integer NextArgNum_65 = (MR_Integer) ((MR_Unsigned) CurArgNum_4 + (MR_Unsigned) (MR_Integer) 1);
        MR_Word FieldPosWidth_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_64, (MR_Integer) 2))));
        MR_Word TailTakeAddr_67;
        MR_Integer Var_109;

        succeeded = ((MR_tag((MR_Word) TakeAddr_6)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_109 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), TakeAddr_6, (MR_Integer) 0))));
          TailTakeAddr_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TakeAddr_6, (MR_Integer) 1))));
          succeeded = (CurArgNum_4 == Var_109);
        }
        if (succeeded)
        {
          MR_Word CellOffset_70;
          MR_Word TakeAddrInfo_71;
          MR_Word TakeAddrInfosTail_72;
          MR_Word CellOffsetPrime_69;

          succeeded = ((MR_tag((MR_Word) FieldPosWidth_66)) == (MR_Integer) 1);
          if (succeeded)
          {
            CellOffsetPrime_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldPosWidth_66, (MR_Integer) 1))));
            CellOffset_70 = CellOffsetPrime_69;
          }
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_args\'/11", (MR_String) "taking address of something other than a full word");
              return;
            }
          }
          ml_backend__ml_unify_gen__ml_gen_take_addr_of_arg_5_p_0(STATE_VARIABLE_Info_0_10, ArgVar_63, CtorArgRepn_64, CellOffset_70, &TakeAddrInfo_71);
          ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_11_p_1(FieldGen_1, Var_110, Modes_55, NextArgNum_65, Context_5, TailTakeAddr_67, &TakeAddrInfosTail_72, HeadVar__8_8, HeadVar__9_9, STATE_VARIABLE_Info_0_10, STATE_VARIABLE_Info_11);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__7_7 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TakeAddrInfo_71));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TakeAddrInfosTail_72));
          }
        }
        else
        {
          MR_Word FieldVia_81;

          succeeded = ((((MR_tag((MR_Word) FieldPosWidth_66)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldPosWidth_66, (MR_Integer) 0))) == (MR_Integer) 0)));
          if (succeeded)
          {
            FieldVia_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_1, (MR_Integer) 3))));
            succeeded = (FieldVia_81 == (MR_Word) ((MR_Integer) 0));
          }
          if (succeeded)
          {
            MR_Word LeftOverArgVarRepns_82;
            MR_Word LeftOverModes_83;
            MR_Integer LeftOverArgNum_84;
            MR_Word HeadDefns_85;
            MR_Word HeadStmts_86;
            MR_Word TailDefns_87;
            MR_Word TailStmts_88;
            MR_Word STATE_VARIABLE_Info_96_96;

            ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_in_word_16_p_1(FieldGen_1, ArgVar_63, CtorArgRepn_64, Mode_54, Var_110, Modes_55, &LeftOverArgVarRepns_82, &LeftOverModes_83, CurArgNum_4, &LeftOverArgNum_84, Context_5, TakeAddr_6, &HeadDefns_85, &HeadStmts_86, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_96_96);
            ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_11_p_1(FieldGen_1, LeftOverArgVarRepns_82, LeftOverModes_83, LeftOverArgNum_84, Context_5, TakeAddr_6, HeadVar__7_7, &TailDefns_87, &TailStmts_88, STATE_VARIABLE_Info_96_96, STATE_VARIABLE_Info_11);
            *HeadVar__8_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), HeadDefns_85, TailDefns_87);
            *HeadVar__9_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_86, TailStmts_88);
          }
          else
          {
            MR_Word STATE_VARIABLE_Info_98_98;
            MR_Word HeadStmts_100;
            MR_Word TailStmts_101;
            MR_Word _PackedArgVars_89;

            ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_arg_10_p_0(FieldGen_1, ArgVar_63, CtorArgRepn_64, Mode_54, CurArgNum_4, Context_5, &_PackedArgVars_89, &HeadStmts_100, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_98_98);
            ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_11_p_1(FieldGen_1, Var_110, Modes_55, NextArgNum_65, Context_5, TakeAddr_6, HeadVar__7_7, HeadVar__8_8, &TailStmts_101, STATE_VARIABLE_Info_98_98, STATE_VARIABLE_Info_11);
            *HeadVar__9_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_100, TailStmts_101);
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
        MR_hl_field(MR_mktag(0), BoxedFieldType_16, 1) = ((MR_Box) ((MR_Integer) 0));
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

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_in_word_16_p_1(
  MR_Word FieldGen_17,
  MR_Word ArgVar_18,
  MR_Word CtorArgRepn_19,
  MR_Word Mode_20,
  MR_Word ArgVarRepns_21,
  MR_Word Modes_22,
  MR_Word * LeftOverArgVarRepns_23,
  MR_Word * LeftOverModes_24,
  MR_Integer CurArgNum_25,
  MR_Integer * LeftOverArgNum_26,
  MR_Word Context_27,
  MR_Word TakeAddr_28,
  MR_Word * Defns_29,
  MR_Word * Stmts_30,
  MR_Word STATE_VARIABLE_Info_0_64,
  MR_Word * STATE_VARIABLE_Info_65)
{
  {
    MR_bool succeeded;
    MR_Word HeadPackedArgVars_32;
    MR_Word HeadStmts_33;
    MR_Word AllPartialsRight0_34;
    MR_Integer NextArgNum_37;
    MR_Word AllPartialsRight_38;
    MR_Word TailPackedArgVars_39;
    MR_Word TailStmts_40;
    MR_Word STATE_VARIABLE_Info_66_66;
    MR_Word STATE_VARIABLE_Info_68_68;

    ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_arg_10_p_0(FieldGen_17, ArgVar_18, CtorArgRepn_19, Mode_20, CurArgNum_25, Context_27, &HeadPackedArgVars_32, &HeadStmts_33, STATE_VARIABLE_Info_0_64, &STATE_VARIABLE_Info_66_66);
    if ((HeadPackedArgVars_32 == (MR_Word) ((MR_Integer) 0)))
      AllPartialsRight0_34 = (MR_Integer) 0;
    else
      AllPartialsRight0_34 = (MR_Integer) 1;
    NextArgNum_37 = (MR_Integer) ((MR_Unsigned) CurArgNum_25 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_in_word_loop_15_p_1(FieldGen_17, ArgVarRepns_21, Modes_22, LeftOverArgVarRepns_23, LeftOverModes_24, NextArgNum_37, LeftOverArgNum_26, Context_27, TakeAddr_28, AllPartialsRight0_34, &AllPartialsRight_38, &TailPackedArgVars_39, &TailStmts_40, STATE_VARIABLE_Info_66_66, &STATE_VARIABLE_Info_68_68);
    switch (AllPartialsRight_38) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word PackedArgVars_41;
          MR_Word WordCompVar_42;
          MR_Word WordVar_43;
          MR_Word UnsignedType_44;
          MR_Word WordVarDefn_45;
          MR_Word FieldPosWidth_46;
          MR_Integer CellOffsetInt_52;
          MR_Word FieldId_53;
          MR_Word MaybePtag_54;
          MR_Word AddrRval_55;
          MR_Word AddrType_56;
          MR_Word FieldLval_58;
          MR_Word CastFieldRval_59;
          MR_Word WordVarLval_60;
          MR_Word WordAssignStmt_61;
          MR_Word PackedArgsMap0_62;
          MR_Word PackedArgsMap_63;
          MR_Word STATE_VARIABLE_Info_69_69;
          MR_Word Var_75;
          MR_Word Var_76;
          MR_Word Var_78;
          MR_Word Var_79;
          MR_Word Var_80;
          MR_Word CellOffset_48;

          PackedArgVars_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0), HeadPackedArgVars_32, TailPackedArgVars_39);
          ml_backend__ml_gen_info__ml_gen_info_new_packed_args_var_3_p_0(&WordCompVar_42, STATE_VARIABLE_Info_68_68, &STATE_VARIABLE_Info_69_69);
          {
            WordVar_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), WordVar_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
            MR_hl_field(MR_mktag(3), WordVar_43, 1) = ((MR_Box) (WordCompVar_42));
          }
          UnsignedType_44 = ml_backend__ml_util__mlds_int_type_uint_0_f_0();
          {
            WordVarDefn_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), WordVarDefn_45, 0) = ((MR_Box) (WordVar_43));
            MR_hl_field(MR_mktag(0), WordVarDefn_45, 1) = ((MR_Box) (Context_27));
            MR_hl_field(MR_mktag(0), WordVarDefn_45, 2) = ((MR_Box) (UnsignedType_44));
            MR_hl_field(MR_mktag(0), WordVarDefn_45, 3) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), WordVarDefn_45, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Defns_29 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (WordVarDefn_45));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
          }
          FieldPosWidth_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_19, (MR_Integer) 2))));
          succeeded = ((((MR_tag((MR_Word) FieldPosWidth_46)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldPosWidth_46, (MR_Integer) 0))) == (MR_Integer) 0)));
          if (succeeded)
          {
            CellOffset_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldPosWidth_46, (MR_Integer) 2))));
            CellOffsetInt_52 = (MR_Integer) (CellOffset_48);
          }
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_args_in_word\'/16", (MR_String) "no apw_partial_first");
              return;
            }
          }
          {
            Var_76 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_76, 0) = ((MR_Box) (CellOffsetInt_52));
          }
          {
            Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (Var_76));
          }
          {
            FieldId_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FieldId_53, 0) = ((MR_Box) (Var_75));
          }
          MaybePtag_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_17, (MR_Integer) 0))));
          AddrRval_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_17, (MR_Integer) 1))));
          AddrType_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_17, (MR_Integer) 2))));
          {
            FieldLval_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FieldLval_58, 0) = ((MR_Box) (MaybePtag_54));
            MR_hl_field(MR_mktag(0), FieldLval_58, 1) = ((MR_Box) (AddrRval_55));
            MR_hl_field(MR_mktag(0), FieldLval_58, 2) = ((MR_Box) (AddrType_56));
            MR_hl_field(MR_mktag(0), FieldLval_58, 3) = ((MR_Box) (FieldId_53));
            MR_hl_field(MR_mktag(0), FieldLval_58, 4) = ((MR_Box) ((MR_Integer) 24));
          }
          {
            Var_78 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_78, 0) = ((MR_Box) (FieldLval_58));
          }
          {
            CastFieldRval_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CastFieldRval_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), CastFieldRval_59, 1) = ((MR_Box) (UnsignedType_44));
            MR_hl_field(MR_mktag(3), CastFieldRval_59, 2) = ((MR_Box) (Var_78));
          }
          {
            WordVarLval_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), WordVarLval_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), WordVarLval_60, 1) = ((MR_Box) (WordVar_43));
            MR_hl_field(MR_mktag(3), WordVarLval_60, 2) = ((MR_Box) (UnsignedType_44));
          }
          WordAssignStmt_61 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(WordVarLval_60, CastFieldRval_59, Context_27);
          {
            Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (WordAssignStmt_61));
            MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (HeadStmts_33));
          }
          *Stmts_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_79, TailStmts_40);
          ml_backend__ml_gen_info__ml_gen_info_get_packed_args_map_2_p_0(STATE_VARIABLE_Info_69_69, &PackedArgsMap0_62);
          {
            Var_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_80, 0) = ((MR_Box) (WordVarLval_60));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[3]), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), ((MR_Box) (PackedArgVars_41)), ((MR_Box) (Var_80)), PackedArgsMap0_62, &PackedArgsMap_63);
          ml_backend__ml_gen_info__ml_gen_info_set_packed_args_map_3_p_0(PackedArgsMap_63, STATE_VARIABLE_Info_69_69, STATE_VARIABLE_Info_65);
        }
        break;
      case (MR_Integer) 0:
        {
          *Defns_29 = (MR_Word) ((MR_Integer) 0);
          *Stmts_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_33, TailStmts_40);
          *STATE_VARIABLE_Info_65 = STATE_VARIABLE_Info_68_68;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_in_word_loop_15_p_1_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word_loop__1731__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_in_word_loop_15_p_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Integer CurArgNum_6,
  MR_Integer * LeftOverArgNum_7,
  MR_Word HeadVar__8_8,
  MR_Word HeadVar__9_9,
  MR_Word STATE_VARIABLE_AllPartialsRight_0_10,
  MR_Word * STATE_VARIABLE_AllPartialsRight_11,
  MR_Word * HeadVar__12_12,
  MR_Word * HeadVar__13_13,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Integer) 0)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Integer) 0)))
      {
        *HeadVar__4_4 = (MR_Word) ((MR_Integer) 0);
        *HeadVar__5_5 = (MR_Word) ((MR_Integer) 0);
        *HeadVar__12_12 = (MR_Word) ((MR_Integer) 0);
        *HeadVar__13_13 = (MR_Word) ((MR_Integer) 0);
        *LeftOverArgNum_7 = CurArgNum_6;
        *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
        *STATE_VARIABLE_AllPartialsRight_11 = STATE_VARIABLE_AllPartialsRight_0_10;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_args_in_word_loop\'/15", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_155 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_156 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Integer) 0)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_args_in_word_loop\'/15", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word Mode_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word Modes_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgVar_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_156, (MR_Integer) 0))));
        MR_Word CtorArgRepn_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_156, (MR_Integer) 1))));
        MR_Word FieldPosWidth_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_81, (MR_Integer) 2))));

        switch (MR_tag((MR_Word) FieldPosWidth_82)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *HeadVar__4_4 = HeadVar__2_2;
              *HeadVar__5_5 = HeadVar__3_3;
              *LeftOverArgNum_7 = CurArgNum_6;
              *HeadVar__12_12 = (MR_Word) ((MR_Integer) 0);
              *HeadVar__13_13 = (MR_Word) ((MR_Integer) 0);
              *STATE_VARIABLE_AllPartialsRight_11 = STATE_VARIABLE_AllPartialsRight_0_10;
              *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              *HeadVar__4_4 = HeadVar__2_2;
              *HeadVar__5_5 = HeadVar__3_3;
              *LeftOverArgNum_7 = CurArgNum_6;
              *HeadVar__12_12 = (MR_Word) ((MR_Integer) 0);
              *HeadVar__13_13 = (MR_Word) ((MR_Integer) 0);
              *STATE_VARIABLE_AllPartialsRight_11 = STATE_VARIABLE_AllPartialsRight_0_10;
              *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldPosWidth_82, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *HeadVar__4_4 = HeadVar__2_2;
                  *HeadVar__5_5 = HeadVar__3_3;
                  *LeftOverArgNum_7 = CurArgNum_6;
                  *HeadVar__12_12 = (MR_Word) ((MR_Integer) 0);
                  *HeadVar__13_13 = (MR_Word) ((MR_Integer) 0);
                  *STATE_VARIABLE_AllPartialsRight_11 = STATE_VARIABLE_AllPartialsRight_0_10;
                  *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word HeadPackedArgVars_141;
                  MR_Word HeadStmts_142;
                  MR_Integer NextArgNum_144;
                  MR_Word TailPackedArgVars_145;
                  MR_Word TailStmts_146;
                  MR_Word STATE_VARIABLE_Info_118_147;
                  MR_Word STATE_VARIABLE_AllPartialsRight_119_148;
                  MR_Integer Var_134;

                  ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_arg_10_p_0(HeadVar__1_1, ArgVar_80, CtorArgRepn_81, Mode_68, CurArgNum_6, HeadVar__8_8, &HeadPackedArgVars_141, &HeadStmts_142, STATE_VARIABLE_Info_0_14, &STATE_VARIABLE_Info_118_147);
                  if ((HeadPackedArgVars_141 == (MR_Word) ((MR_Integer) 0)))
                    STATE_VARIABLE_AllPartialsRight_119_148 = (MR_Integer) 0;
                  else
                    STATE_VARIABLE_AllPartialsRight_119_148 = STATE_VARIABLE_AllPartialsRight_0_10;
                  succeeded = ((MR_tag((MR_Word) HeadVar__9_9)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_134 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__9_9, (MR_Integer) 0))));
                    succeeded = (CurArgNum_6 == Var_134);
                  }
                  if (succeeded)
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_args_in_word_loop\'/15", (MR_String) "taking address of something other than a full word");
                      return;
                    }
                  }
                  NextArgNum_144 = (MR_Integer) ((MR_Unsigned) CurArgNum_6 + (MR_Unsigned) (MR_Integer) 1);
                  ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_in_word_loop_15_p_1(HeadVar__1_1, Var_155, Modes_69, HeadVar__4_4, HeadVar__5_5, NextArgNum_144, LeftOverArgNum_7, HeadVar__8_8, HeadVar__9_9, STATE_VARIABLE_AllPartialsRight_119_148, STATE_VARIABLE_AllPartialsRight_11, &TailPackedArgVars_145, &TailStmts_146, STATE_VARIABLE_Info_118_147, STATE_VARIABLE_Info_15);
                  *HeadVar__12_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0), HeadPackedArgVars_141, TailPackedArgVars_145);
                  *HeadVar__13_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_142, TailStmts_146);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word HeadPackedArgVars_89;
                  MR_Word HeadStmts_90;
                  MR_Integer NextArgNum_96;
                  MR_Word TailPackedArgVars_97;
                  MR_Word TailStmts_98;
                  MR_Word Var_114;
                  MR_Word STATE_VARIABLE_Info_118_118;
                  MR_Integer Var_131;

                  ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_arg_10_p_0(HeadVar__1_1, ArgVar_80, CtorArgRepn_81, Mode_68, CurArgNum_6, HeadVar__8_8, &HeadPackedArgVars_89, &HeadStmts_90, STATE_VARIABLE_Info_0_14, &STATE_VARIABLE_Info_118_118);
                  {
                    Var_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[8]));
                    MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_in_word_loop_15_p_1_1));
                    MR_hl_field(MR_mktag(0), Var_114, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_114, 3) = ((MR_Box) (HeadPackedArgVars_89));
                    MR_hl_field(MR_mktag(0), Var_114, 4) = ((MR_Box) ((MR_Integer) 0));
                  }
                  mercury__require__expect_3_p_0(Var_114, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_args_in_word_loop\'/15", (MR_String) "HeadPackedArgVars != [] for apw_none_shifted");
                  succeeded = ((MR_tag((MR_Word) HeadVar__9_9)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_131 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__9_9, (MR_Integer) 0))));
                    succeeded = (CurArgNum_6 == Var_131);
                  }
                  if (succeeded)
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_deconstruct_args_in_word_loop\'/15", (MR_String) "taking address of something other than a full word");
                      return;
                    }
                  }
                  NextArgNum_96 = (MR_Integer) ((MR_Unsigned) CurArgNum_6 + (MR_Unsigned) (MR_Integer) 1);
                  ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_args_in_word_loop_15_p_1(HeadVar__1_1, Var_155, Modes_69, HeadVar__4_4, HeadVar__5_5, NextArgNum_96, LeftOverArgNum_7, HeadVar__8_8, HeadVar__9_9, STATE_VARIABLE_AllPartialsRight_0_10, STATE_VARIABLE_AllPartialsRight_11, &TailPackedArgVars_97, &TailStmts_98, STATE_VARIABLE_Info_118_118, STATE_VARIABLE_Info_15);
                  *HeadVar__12_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0), HeadPackedArgVars_89, TailPackedArgVars_97);
                  *HeadVar__13_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_90, TailStmts_98);
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
ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_arg_10_p_0(
  MR_Word FieldGen_11,
  MR_Word ArgVar_12,
  MR_Word CtorArgRepn_13,
  MR_Word Mode_14,
  MR_Integer ArgNum_15,
  MR_Word Context_16,
  MR_Word * PackedArgVars_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_56,
  MR_Word * STATE_VARIABLE_Info_57)
{
  {
    MR_bool succeeded;
    MR_Word MaybePrimaryTag_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_11, (MR_Integer) 0))));
    MR_Word AddrRval_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_11, (MR_Integer) 1))));
    MR_Word AddrType_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_11, (MR_Integer) 2))));
    MR_Word FieldVia_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_11, (MR_Integer) 3))));
    MR_Word FieldPosWidth_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_13, (MR_Integer) 2))));
    MR_Word FieldId_40;
    MR_Word ModuleInfo_46;
    MR_Word HighLevelData_47;
    MR_Word FieldWidth_48;
    MR_Word FieldRawType_49;
    MR_Word FieldType_50;
    MR_Word MLDS_FieldType_51;
    MR_Word FieldLval_52;
    MR_Word ArgLval_53;
    MR_Word ArgType_54;
    MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_13, (MR_Integer) 0))));
    MR_Word LeftFromToInsts_89;
    MR_Word RightFromToInsts_90;
    MR_Word LeftTopMode_91;
    MR_Word RightTopMode_92;
    MR_Word Var_93;

    if ((FieldVia_23 == (MR_Word) ((MR_Integer) 0)))
    {
      MR_Integer CellOffsetInt_39;
      MR_Word Var_59;
      MR_Word Var_60;

      switch (MR_tag((MR_Word) FieldPosWidth_24)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          CellOffsetInt_39 = (MR_Integer) -1;
          break;
        case (MR_Integer) 1:
          {
            MR_Word CellOffset_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldPosWidth_24, (MR_Integer) 1))));

            CellOffsetInt_39 = (MR_Integer) (CellOffset_70);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word CellOffset_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), FieldPosWidth_24, (MR_Integer) 1))));

            CellOffsetInt_39 = (MR_Integer) (CellOffset_26);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldPosWidth_24, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word CellOffset_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldPosWidth_24, (MR_Integer) 2))));

                CellOffsetInt_39 = (MR_Integer) (CellOffset_72);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word CellOffset_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldPosWidth_24, (MR_Integer) 2))));

                CellOffsetInt_39 = (MR_Integer) (CellOffset_73);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word CellOffset_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldPosWidth_24, (MR_Integer) 2))));

                CellOffsetInt_39 = (MR_Integer) (CellOffset_71);
              }
              break;
          }
          break;
      }
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_60, 0) = ((MR_Box) (CellOffsetInt_39));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (Var_60));
      }
      {
        FieldId_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FieldId_40, 0) = ((MR_Box) (Var_59));
      }
    }
    else
    {
      MR_Word FieldQualifier_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldVia_23, (MR_Integer) 0))));
      MR_Word ClassPtrType_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldVia_23, (MR_Integer) 1))));
      MR_Word FieldName_44;
      MR_Word QualifiedFieldName_45;

      FieldName_44 = ml_backend__ml_code_util__ml_gen_hld_field_name_2_f_0(Var_61, ArgNum_15);
      {
        QualifiedFieldName_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), QualifiedFieldName_45, 0) = ((MR_Box) (FieldQualifier_41));
        MR_hl_field(MR_mktag(0), QualifiedFieldName_45, 1) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), QualifiedFieldName_45, 2) = ((MR_Box) (FieldName_44));
      }
      {
        FieldId_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FieldId_40, 0) = ((MR_Box) (QualifiedFieldName_45));
        MR_hl_field(MR_mktag(1), FieldId_40, 1) = ((MR_Box) (ClassPtrType_42));
      }
    }
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_56, &ModuleInfo_46);
    ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_56, &HighLevelData_47);
    FieldWidth_48 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(FieldPosWidth_24);
    FieldRawType_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_13, (MR_Integer) 1))));
    switch (HighLevelData_47) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          succeeded = (FieldWidth_48 == (MR_Integer) 3);
          succeeded = !(succeeded);
        }
        break;
      case (MR_Integer) 1:
        succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ModuleInfo_46, FieldRawType_49, FieldWidth_48);
        break;
    }
    if (succeeded)
    {
      MR_Word TypeVarSet0_79;
      MR_Word TypeVar_80;
      MR_Word _TypeVarSet_81;

      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet0_79);
      mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVar_80, TypeVarSet0_79, &_TypeVarSet_81);
      {
        FieldType_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FieldType_50, 0) = ((MR_Box) (TypeVar_80));
        MR_hl_field(MR_mktag(0), FieldType_50, 1) = ((MR_Box) ((MR_Integer) 0));
      }
    }
    else
      FieldType_50 = FieldRawType_49;
    ml_backend__ml_code_util__ml_gen_type_3_p_0(STATE_VARIABLE_Info_0_56, FieldType_50, &MLDS_FieldType_51);
    {
      FieldLval_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FieldLval_52, 0) = ((MR_Box) (MaybePrimaryTag_20));
      MR_hl_field(MR_mktag(0), FieldLval_52, 1) = ((MR_Box) (AddrRval_21));
      MR_hl_field(MR_mktag(0), FieldLval_52, 2) = ((MR_Box) (AddrType_22));
      MR_hl_field(MR_mktag(0), FieldLval_52, 3) = ((MR_Box) (FieldId_40));
      MR_hl_field(MR_mktag(0), FieldLval_52, 4) = ((MR_Box) (MLDS_FieldType_51));
    }
    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_56, ArgVar_12, &ArgLval_53);
    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_56, ArgVar_12, &ArgType_54);
    LeftFromToInsts_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_14, (MR_Integer) 0))));
    RightFromToInsts_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_14, (MR_Integer) 1))));
    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_46, LeftFromToInsts_89, ArgType_54, &LeftTopMode_91);
    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_46, RightFromToInsts_90, ArgType_54, &RightTopMode_92);
    Var_93 = check_hlds__type_util__is_either_type_a_dummy_3_f_0(ModuleInfo_46, ArgType_54, FieldType_50);
    succeeded = (Var_93 == (MR_Integer) 0);
    if (succeeded)
    {
      *PackedArgVars_17 = (MR_Word) ((MR_Integer) 0);
      *Stmts_18 = (MR_Word) ((MR_Integer) 0);
    }
    else
    {
      MR_Word Dir_102;

      switch (LeftTopMode_91) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (RightTopMode_92) {
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
              Dir_102 = (MR_Integer) 1;
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
          switch (RightTopMode_92) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Dir_102 = (MR_Integer) 0;
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
          switch (RightTopMode_92) {
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
              Dir_102 = (MR_Integer) 2;
              break;
          }
          break;
      }
      switch (Dir_102) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          {
            *PackedArgVars_17 = (MR_Word) ((MR_Integer) 0);
            *Stmts_18 = (MR_Word) ((MR_Integer) 0);
          }
          break;
        case (MR_Integer) 0:
          {
            *PackedArgVars_17 = (MR_Word) ((MR_Integer) 0);
            ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_arg_unify_assign_left_9_p_0(ModuleInfo_46, HighLevelData_47, FieldLval_52, FieldType_50, FieldPosWidth_24, ArgLval_53, ArgType_54, Context_16, Stmts_18);
          }
          break;
        case (MR_Integer) 1:
          ml_backend__ml_unify_gen__ml_gen_dynamic_deconstruct_arg_unify_assign_right_10_p_0(ModuleInfo_46, FieldLval_52, FieldType_50, FieldPosWidth_24, ArgVar_12, ArgLval_53, ArgType_54, Context_16, PackedArgVars_17, Stmts_18);
          break;
      }
    }
    *STATE_VARIABLE_Info_57 = STATE_VARIABLE_Info_0_56;
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
        *Stmts_18 = (MR_Word) ((MR_Integer) 0);
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
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
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
              MR_hl_field(MR_mktag(3), FloatWordA_25, 1) = ((MR_Box) ((MR_Integer) 44));
              MR_hl_field(MR_mktag(3), FloatWordA_25, 2) = ((MR_Box) (ArgRval_22));
            }
            {
              FloatWordB_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), FloatWordB_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), FloatWordB_26, 1) = ((MR_Box) ((MR_Integer) 48));
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
              MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Integer) 0));
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
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
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
                MR_hl_field(MR_mktag(3), UpdatedFieldBits_49, 1) = ((MR_Box) ((MR_Integer) 24));
                MR_hl_field(MR_mktag(3), UpdatedFieldBits_49, 2) = ((MR_Box) (Var_58));
              }
              Stmt_79 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLval_12, UpdatedFieldBits_49, Context_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_79));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
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
                MR_hl_field(MR_mktag(3), UpdatedFieldBits_88, 1) = ((MR_Box) ((MR_Integer) 24));
                MR_hl_field(MR_mktag(3), UpdatedFieldBits_88, 2) = ((MR_Box) (Var_94));
              }
              Stmt_97 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLval_12, UpdatedFieldBits_88, Context_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_97));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
              }
            }
            break;
          case (MR_Integer) 2:
            *Stmts_18 = (MR_Word) ((MR_Integer) 0);
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
    MR_bool succeeded = ((((MR_tag((MR_Word) RvalA_4)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalA_4, (MR_Integer) 0))) == (MR_Integer) 2)));
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
      STATE_VARIABLE_MaybeType_17_17 = (MR_Word) ((MR_Integer) 0);
    }
    Var_19 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[11]));
    succeeded = ((((MR_tag((MR_Word) RvalB_5)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalB_5, (MR_Integer) 0))) == (MR_Integer) 2)));
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
      if ((STATE_VARIABLE_MaybeType_17_17 == (MR_Word) ((MR_Integer) 0)))
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
          succeeded = ((((MR_tag((MR_Word) Rval_5)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 0))) == (MR_Integer) 2)));
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
          succeeded = ((((MR_tag((MR_Word) Rval_5)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 0))) == (MR_Integer) 2)));
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
          succeeded = ((((MR_tag((MR_Word) Rval_5)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 0))) == (MR_Integer) 2)));
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
    succeeded = ((((MR_tag((MR_Word) Rval_5)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 0))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 1))));
      succeeded = ((((MR_tag((MR_Word) Var_15)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_15, (MR_Integer) 0))) == (MR_Integer) 20)));
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

      succeeded = ((((MR_tag((MR_Word) Rval_5)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 0))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 2);
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
          *PackedArgVars_19 = (MR_Word) ((MR_Integer) 0);
          *Stmts_20 = (MR_Word) ((MR_Integer) 0);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_52;
          MR_Word FieldRval_60;
          MR_Word Stmt_61;

          *PackedArgVars_19 = (MR_Word) ((MR_Integer) 0);
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
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word FieldRval_26;
          MR_Word Stmt_27;
          MR_Word FieldLvalA_24;
          MR_Word FieldLvalB_25;

          *PackedArgVars_19 = (MR_Word) ((MR_Integer) 0);
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
              MR_hl_field(MR_mktag(3), FieldRval_26, 1) = ((MR_Box) ((MR_Integer) 88));
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
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
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
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
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
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
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
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
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
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              *PackedArgVars_19 = (MR_Word) ((MR_Integer) 0);
              *Stmts_20 = (MR_Word) ((MR_Integer) 0);
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
    MR_bool succeeded = ((((MR_tag((MR_Word) Rval_4)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 0))) == (MR_Integer) 1)));
    MR_Word ShiftedRval_6;
    MR_Integer ShiftInt_7 = (MR_Integer) (Shift_5);
    MR_Word Var_8;
    MR_Integer Var_9;

    if (succeeded)
    {
      Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_8)) == (MR_Integer) 2);
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
    MR_bool succeeded = ((MR_tag((MR_Word) FieldLval_4)) == (MR_Integer) 0);
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
      succeeded = ((MR_tag((MR_Word) FieldIdA_10)) == (MR_Integer) 0);
      if (succeeded)
      {
        FieldOffsetA_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldIdA_10, (MR_Integer) 0))));
        succeeded = ((((MR_tag((MR_Word) FieldOffsetA_12)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldOffsetA_12, (MR_Integer) 0))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldOffsetA_12, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 2);
          if (succeeded)
            Offset_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_16, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          MR_Word FieldIdB_14;
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
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            *FieldLvalA_5 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Ptag_7));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PtrRval_8));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (PtrType_9));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (FieldIdA_10));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Integer) 24));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            *FieldLvalB_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Ptag_7));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PtrRval_8));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (PtrType_9));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (FieldIdB_14));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Integer) 24));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__decide_field_gen__1516__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
        FieldVia_17 = (MR_Word) ((MR_Integer) 0);
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_18;

          succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(VarType_9, &Var_18);
          if (succeeded)
            FieldVia_17 = (MR_Word) ((MR_Integer) 0);
          else
          {
            MR_Word ConsSymName_19;
            MR_Integer ConsArity_20;
            MR_Word TypeCtor_21;

            succeeded = ((((MR_tag((MR_Word) ConsId_10)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 0))) == (MR_Integer) 2)));
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
                  MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[7]));
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
      CtorArgRepns_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_16, (MR_Integer) 4))));
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
  if ((HeadVar__3_3 == (MR_Word) ((MR_Integer) 0)))
    *HeadVar__4_4 = (MR_Word) ((MR_Integer) 0);
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
      MR_hl_field(MR_mktag(0), ArgRepn_15, 0) = ((MR_Box) ((MR_Integer) 0));
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Integer) 0)))
    *HeadVar__3_3 = (MR_Word) ((MR_Integer) 0);
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
      MR_hl_field(MR_mktag(0), ArgRepn_12, 0) = ((MR_Box) ((MR_Integer) 0));
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
  MR_Word * Ptag_6,
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
              *Ptag_6 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0))));
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
              MR_Word SubTag_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 2))));
              MR_Word next_value_of_ConsTag_5 = SubTag_13;

              // direct tailcall eliminated
              ;
              ConsTag_5 = next_value_of_ConsTag_5;
              continue;
            }
            break;
          case (MR_Integer) 11:
            {
              *Ptag_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1))));
              *InitOffset_7 = (MR_Word) (((MR_Box) ((MR_Integer) 0)));
              *ArgNum_8 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 12:
            {
              *Ptag_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1))));
              *InitOffset_7 = (MR_Word) (((MR_Box) ((MR_Integer) 0)));
              *ArgNum_8 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word RemoteSectag_9;
              MR_Word AddedBy_11;

              *Ptag_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1))));
              RemoteSectag_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 2))));
              AddedBy_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RemoteSectag_9, (MR_Integer) 1))));
              switch (AddedBy_11) {
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_extra_arg_assigns__1258__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    if ((HeadVar__5_5 == (MR_Word) ((MR_Integer) 0)))
    {
      *HeadVar__7_7 = (MR_Word) ((MR_Integer) 0);
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
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[6]));
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

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_50;

    conv0_LambdaHeadVar__2_50 = ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_new_object_statically__717__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_50));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_10_p_0(
  MR_Word ConsIdOrClosure_11,
  MR_Word MaybeCtorName_12,
  MR_Word Ptag_13,
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
    if ((MaybeCtorName_12 == (MR_Word) ((MR_Integer) 0)))
      UsesBaseClass_28 = (MR_Integer) 1;
    else
      UsesBaseClass_28 = (MR_Integer) 0;
    ExtraArgRvals_29 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_mlds_rval_type_and_width_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__ml_unify_gen_scalar_common_2[5]), ExtraArgRvalsTypesWidths_25);
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
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
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

    conv0_LambdaHeadVar__2_44 = ml_backend__ml_unify_gen__IntroducedFrom__func__construct_static_ground_term__3208__1_1_f_0(((MR_Word) (wrapper_arg_1)));
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
  MR_Word Ptag_23,
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
    uint8_t Var_47;

    ml_backend__ml_unify_gen__ml_pack_ground_term_args_into_word_inits_2_p_0(RvalsTypesWidths_25, &NonExtraInits_28);
    ExtraInits_29 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_unify_gen_scalar_common_2[4]), ExtraRvals_24);
    AllInits_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), ExtraInits_29, NonExtraInits_28);
    ConstType_32 = ml_backend__ml_unify_gen__get_const_type_for_cons_id_5_f_0(Target_16, HighLevelData_17, MLDS_Type_20, UsesBaseClass_22, ConsIdOrClosure_21);
    succeeded = ((((MR_tag((MR_Word) ConstType_32)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConstType_32, (MR_Integer) 0))) == (MR_Integer) 4)));
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
    Var_47 = (uint8_t) (Ptag_23);
    succeeded = (Var_47 == UINT8_C(0));
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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Integer) 0)))
      *HeadVar__2_2 = (MR_Word) ((MR_Integer) 0);
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

                ml_backend__ml_unify_gen__maybe_shift_and_accumulate_or_rval_5_p_0(Rval_6, (MR_Word) (((MR_Box) ((MR_Integer) 0))), Fill_21, (MR_Word) ((MR_Integer) 0), &RevOrRvals0_22);
                ml_backend__ml_unify_gen__ml_pack_into_one_word_loop_8_p_0(RvalsTypesWidths_4, &LeftOverRvalsTypesWidths_23, RevOrRvals0_22, &RevOrRvals_56, (MR_Word) ((MR_Integer) 0), &Var_25, (MR_Integer) 0, &Var_26);
                mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), RevOrRvals_56, &OrRvals_57);
                if ((OrRvals_57 == (MR_Word) ((MR_Integer) 0)))
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
                    MR_hl_field(MR_mktag(3), OrAllRval_24, 1) = ((MR_Box) ((MR_Integer) 24));
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
            succeeded = ((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0))) == (MR_Integer) 0)));
            if (succeeded)
            {
              TypeCtorCategory_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 3))));
              succeeded = ((((MR_tag((MR_Word) TypeCtorCategory_15)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeCtorCategory_15, (MR_Integer) 0))) == (MR_Integer) 0)));
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
              succeeded = ((MR_tag((MR_Word) ConsIdOrClosure_11)) == (MR_Integer) 0);
              if (succeeded)
              {
                ConsId_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsIdOrClosure_11, (MR_Integer) 0))));
                succeeded = ((((MR_tag((MR_Word) ConsId_17)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_17, (MR_Integer) 0))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  CtorSymName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_17, (MR_Integer) 1))));
                  CtorArity_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_17, (MR_Integer) 2))));
                  if (((MR_tag((MR_Word) MLDS_Type_9)) == (MR_Integer) 1))
                  {
                    MR_Word Var_48 = (MR_Word) (MR_body((MR_Word) (MLDS_Type_9), (MR_Integer) 1));

                    QualTypeName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 0))));
                    TypeArity_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 1))));
                    succeeded = MR_TRUE;
                  }
                  else
                  if (((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0))) == (MR_Integer) 0))))
                  {
                    MR_Word MercuryType_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 1))));
                    MR_Word TypeCtor_27;
                    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 3))));

                    succeeded = ((((MR_tag((MR_Word) Var_47)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_47, (MR_Integer) 0))) == (MR_Integer) 1)));
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

              succeeded = ((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0))) == (MR_Integer) 0)));
              if (succeeded)
              {
                MercuryType_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 1))));
                Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 3))));
                succeeded = ((((MR_tag((MR_Word) Var_51)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_51, (MR_Integer) 0))) == (MR_Integer) 1)));
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

                succeeded = ((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 3))));
                  succeeded = (Var_53 == (MR_Word) ((MR_Integer) 4));
                }
                if (succeeded)
                  ConstType_12 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[15]));
                else
                {
                  MR_Word Var_55;

                  succeeded = ((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 3))));
                    succeeded = (Var_55 == (MR_Word) ((MR_Integer) 0));
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_box_extra_const_rval_list_lld__1088__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    if ((HeadVar__3_3 == (MR_Word) ((MR_Integer) 0)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Integer) 0);
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
        MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[0]));
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
  if ((HeadVar__3_3 == (MR_Word) ((MR_Integer) 0)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Integer) 0);
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
      MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 1) = ((MR_Box) ((MR_Integer) 24));
      MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 2) = ((MR_Box) (ArgPosWidth_21));
      MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 3) = ((MR_Box) ((MR_Integer) 0));
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

    if ((HeadVar__3_3 == (MR_Word) ((MR_Integer) 0)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Integer) 0);
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
        MR_hl_field(MR_mktag(0), FieldRvalTypeWidth_16, 1) = ((MR_Box) ((MR_Integer) 24));
        MR_hl_field(MR_mktag(0), FieldRvalTypeWidth_16, 2) = ((MR_Box) (ConsArgPosWidth_21));
        MR_hl_field(MR_mktag(0), FieldRvalTypeWidth_16, 3) = ((MR_Box) ((MR_Integer) 0));
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
    MR_Word conv0_LambdaHeadVar__2_68;

    conv0_LambdaHeadVar__2_68 = ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_new_object_dynamically__656__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_68));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_dynamically_13_p_0(
  MR_Word ConsIdOrClosure_14,
  MR_Word MaybeCtorName_15,
  MR_Word Ptag_16,
  MR_Word ExplicitSectag_17,
  MR_Word Var_18,
  MR_Word ExtraRvalsTypesWidths_19,
  MR_Word ArgVars_20,
  MR_Word ArgModes_21,
  MR_Word TakeAddr_22,
  MR_Word Context_23,
  MR_Word * Stmts_24,
  MR_Word STATE_VARIABLE_Info_0_62,
  MR_Word * STATE_VARIABLE_Info_63)
{
  {
    MR_Word VarType_26;
    MR_Word ArgVarsTypesWidths_27;
    MR_Word UseAtomicCells_28;
    MR_Word MayUseAtomic0_29;
    MR_Word TakeAddrInfos_31;
    MR_Word ArgRvalsTypesWidths0_32;
    MR_Word MayUseAtomic_33;
    MR_Word PackedArgRvalsTypesWidths_34;
    MR_Word ArgRvalsTypesWidths_35;
    MR_Integer Size_36;
    MR_Word SizeInWordsRval_37;
    MR_Word ProfileMemory_38;
    MR_Word MaybeAllocId_49;
    MR_Word VarLval_50;
    MR_Word ArgRvalsTypes_56;
    MR_Word MLDS_VarType_57;
    MR_Word MakeNewObject_58;
    MR_Word MakeNewObjStmt_59;
    MR_Word MaybePtag_60;
    MR_Word TakeAddrStmts_61;
    MR_Word Var_64;
    MR_Word Var_69;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_62, Var_18, &VarType_26);
    ml_backend__ml_unify_gen__maybe_cons_id_arg_types_and_widths_5_p_0(STATE_VARIABLE_Info_0_62, VarType_26, ConsIdOrClosure_14, ArgVars_20, &ArgVarsTypesWidths_27);
    ml_backend__ml_gen_info__ml_gen_info_get_use_atomic_cells_2_p_0(STATE_VARIABLE_Info_0_62, &UseAtomicCells_28);
    switch (UseAtomicCells_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MayUseAtomic0_29 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        MayUseAtomic0_29 = (MR_Integer) 0;
        break;
    }
    ml_backend__ml_unify_gen__ml_gen_dynamic_construct_args_9_p_0(STATE_VARIABLE_Info_0_62, ArgVarsTypesWidths_27, ArgModes_21, (MR_Integer) 1, TakeAddr_22, &TakeAddrInfos_31, &ArgRvalsTypesWidths0_32, MayUseAtomic0_29, &MayUseAtomic_33);
    ml_backend__ml_unify_gen__ml_expand_or_pack_into_words_3_p_0(STATE_VARIABLE_Info_0_62, ArgRvalsTypesWidths0_32, &PackedArgRvalsTypesWidths_34);
    ArgRvalsTypesWidths_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_mlds_rval_type_and_width_0), ExtraRvalsTypesWidths_19, PackedArgRvalsTypesWidths_34);
    mercury__list__length_2_p_0((MR_Word) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_mlds_rval_type_and_width_0), ArgRvalsTypesWidths_35, &Size_36);
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_64, 0) = ((MR_Box) (Size_36));
    }
    {
      SizeInWordsRval_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SizeInWordsRval_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), SizeInWordsRval_37, 1) = ((MR_Box) (Var_64));
    }
    ml_backend__ml_gen_info__ml_gen_info_get_profile_memory_2_p_0(STATE_VARIABLE_Info_0_62, &ProfileMemory_38);
    switch (ProfileMemory_38) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MaybeAllocId_49 = (MR_Word) ((MR_Integer) 0);
          *STATE_VARIABLE_Info_63 = STATE_VARIABLE_Info_0_62;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModuleInfo_39;
          MR_Word PredProcId_40;
          MR_Word ProcLabel_42;
          MR_Word GlobalData0_43;
          MR_Word MaybeConsId_45;
          MR_Word AllocId_47;
          MR_Word GlobalData_48;
          MR_Word Var_65;
          MR_Word _Module_41;

          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_62, &ModuleInfo_39);
          ml_backend__ml_gen_info__ml_gen_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_0_62, &PredProcId_40);
          ml_backend__ml_code_util__ml_gen_proc_label_4_p_0(ModuleInfo_39, PredProcId_40, &_Module_41, &ProcLabel_42);
          ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_62, &GlobalData0_43);
          if (((MR_tag((MR_Word) ConsIdOrClosure_14)) == (MR_Integer) 1))
            MaybeConsId_45 = (MR_Word) ((MR_Integer) 0);
          else
          {
            MR_Word ConsId_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsIdOrClosure_14, (MR_Integer) 0))));

            {
              MaybeConsId_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeConsId_45, 0) = ((MR_Box) (ConsId_44));
            }
          }
          Var_65 = (MR_Word) (MR_mkword(MR_mktag(0), (MR_Word) (ProcLabel_42)));
          ml_backend__ml_global_data__ml_gen_alloc_site_7_p_0(Var_65, MaybeConsId_45, Size_36, Context_23, &AllocId_47, GlobalData0_43, &GlobalData_48);
          ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_48, STATE_VARIABLE_Info_0_62, STATE_VARIABLE_Info_63);
          {
            MaybeAllocId_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeAllocId_49, 0) = ((MR_Box) (AllocId_47));
          }
        }
        break;
    }
    ml_backend__ml_code_util__ml_gen_var_3_p_0(*STATE_VARIABLE_Info_63, Var_18, &VarLval_50);
    ArgRvalsTypes_56 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_mlds_rval_type_and_width_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_typed_rval_0), (MR_Word) (&ml_backend__ml_unify_gen_scalar_common_2[3]), ArgRvalsTypesWidths_35);
    ml_backend__ml_code_util__ml_gen_type_3_p_0(*STATE_VARIABLE_Info_63, VarType_26, &MLDS_VarType_57);
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (SizeInWordsRval_37));
    }
    {
      MakeNewObject_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MakeNewObject_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), MakeNewObject_58, 1) = ((MR_Box) (VarLval_50));
      MR_hl_field(MR_mktag(3), MakeNewObject_58, 2) = ((MR_Box) (Ptag_16));
      MR_hl_field(MR_mktag(3), MakeNewObject_58, 3) = ((MR_Box) (ExplicitSectag_17));
      MR_hl_field(MR_mktag(3), MakeNewObject_58, 4) = ((MR_Box) (MLDS_VarType_57));
      MR_hl_field(MR_mktag(3), MakeNewObject_58, 5) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(3), MakeNewObject_58, 6) = ((MR_Box) (MaybeCtorName_15));
      MR_hl_field(MR_mktag(3), MakeNewObject_58, 7) = ((MR_Box) (ArgRvalsTypes_56));
      MR_hl_field(MR_mktag(3), MakeNewObject_58, 8) = ((MR_Box) (MayUseAtomic_33));
      MR_hl_field(MR_mktag(3), MakeNewObject_58, 9) = ((MR_Box) (MaybeAllocId_49));
    }
    {
      MakeNewObjStmt_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MakeNewObjStmt_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), MakeNewObjStmt_59, 1) = ((MR_Box) (MakeNewObject_58));
      MR_hl_field(MR_mktag(3), MakeNewObjStmt_59, 2) = ((MR_Box) (Context_23));
    }
    {
      MaybePtag_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePtag_60, 0) = ((MR_Box) (Ptag_16));
    }
    ml_backend__ml_unify_gen__ml_gen_field_take_address_assigns_7_p_0(TakeAddrInfos_31, VarLval_50, MLDS_VarType_57, MaybePtag_60, Context_23, *STATE_VARIABLE_Info_63, &TakeAddrStmts_61);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_24 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MakeNewObjStmt_59));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TakeAddrStmts_61));
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
    if ((HeadVar__2_2 == (MR_Word) ((MR_Integer) 0)))
      *HeadVar__3_3 = (MR_Word) ((MR_Integer) 0);
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
            succeeded = ((((MR_tag((MR_Word) Rval_9)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_9, (MR_Integer) 0))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_9, (MR_Integer) 1))));
              succeeded = ((((MR_tag((MR_Word) Var_66)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_66, (MR_Integer) 0))) == (MR_Integer) 20)));
              if (succeeded)
              {
              }
            }
            if (succeeded)
            {
              SubstType_20 = (MR_Word) ((MR_Integer) 24);
              RvalA_21 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[14]));
              RvalB_22 = RvalA_21;
            }
            else
            {
              SubstType_20 = (MR_Word) ((MR_Integer) 8);
              switch (DoubleWordKind_18) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      RvalA_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), RvalA_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), RvalA_21, 1) = ((MR_Box) ((MR_Integer) 44));
                      MR_hl_field(MR_mktag(3), RvalA_21, 2) = ((MR_Box) (Rval_9));
                    }
                    {
                      RvalB_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), RvalB_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), RvalB_22, 1) = ((MR_Box) ((MR_Integer) 48));
                      MR_hl_field(MR_mktag(3), RvalB_22, 2) = ((MR_Box) (Rval_9));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      RvalA_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), RvalA_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), RvalA_21, 1) = ((MR_Box) ((MR_Integer) 52));
                      MR_hl_field(MR_mktag(3), RvalA_21, 2) = ((MR_Box) (Rval_9));
                    }
                    {
                      RvalB_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), RvalB_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), RvalB_22, 1) = ((MR_Box) ((MR_Integer) 56));
                      MR_hl_field(MR_mktag(3), RvalB_22, 2) = ((MR_Box) (Rval_9));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    {
                      RvalA_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), RvalA_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), RvalA_21, 1) = ((MR_Box) ((MR_Integer) 60));
                      MR_hl_field(MR_mktag(3), RvalA_21, 2) = ((MR_Box) (Rval_9));
                    }
                    {
                      RvalB_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), RvalB_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), RvalB_22, 1) = ((MR_Box) ((MR_Integer) 64));
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
              MR_hl_field(MR_mktag(0), RvalTypeWidthA_27, 3) = ((MR_Box) ((MR_Integer) 0));
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
              MR_hl_field(MR_mktag(0), RvalTypeWidthB_28, 3) = ((MR_Box) ((MR_Integer) 0));
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

                ml_backend__ml_unify_gen__maybe_shift_and_accumulate_or_rval_5_p_0(Rval_9, (MR_Word) (((MR_Box) ((MR_Integer) 0))), Fill_31, (MR_Word) ((MR_Integer) 0), &RevOrRvals0_32);
                if ((MaybePackedArgVar_12 == (MR_Word) ((MR_Integer) 0)))
                {
                  RevPackedArgVars0_33 = (MR_Word) ((MR_Integer) 0);
                  AllPartialsHavePackedArgVars0_34 = (MR_Integer) 0;
                }
                else
                {
                  MR_Word PackedArgVar_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePackedArgVar_12, (MR_Integer) 0))));

                  {
                    RevPackedArgVars0_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), RevPackedArgVars0_33, 0) = ((MR_Box) (PackedArgVar_35));
                    MR_hl_field(MR_mktag(1), RevPackedArgVars0_33, 1) = ((MR_Box) ((MR_Integer) 0));
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
                      succeeded = mercury__map__search_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[3]), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), PackedArgsMap_42, ((MR_Box) (PackedArgVars_41)), &conv0_OldWordRval_43);
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
                          MR_hl_field(MR_mktag(3), WordRval_40, 1) = ((MR_Box) ((MR_Integer) 24));
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
                  MR_hl_field(MR_mktag(0), PackedRvalTypeWidth_44, 3) = ((MR_Box) ((MR_Integer) 0));
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
    if ((OrRvals_16 == (MR_Word) ((MR_Integer) 0)))
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
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 24));
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

    if ((TailRvals_5 == (MR_Word) ((MR_Integer) 0)))
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
      succeeded = ((((MR_tag((MR_Word) HeadRval_4)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadRval_4, (MR_Integer) 0))) == (MR_Integer) 2)));
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
        STATE_VARIABLE_MaybeType_17_23 = (MR_Word) ((MR_Integer) 0);
      }
      Var_25 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[11]));
      succeeded = ((((MR_tag((MR_Word) TailOrAllRval_9)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TailOrAllRval_9, (MR_Integer) 0))) == (MR_Integer) 2)));
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
        if ((STATE_VARIABLE_MaybeType_17_23 == (MR_Word) ((MR_Integer) 0)))
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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Integer) 0)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Integer) 0);
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
                if ((MaybePackedArgVar_27 == (MR_Word) ((MR_Integer) 0)))
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
          succeeded = ((((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))) == (MR_Integer) 2)));
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
          succeeded = ((((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))) == (MR_Integer) 2)));
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
          succeeded = ((((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))) == (MR_Integer) 2)));
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
    succeeded = ((((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))) == (MR_Integer) 1)));
    if (succeeded)
    {
      RvalConst_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
      if (((MR_tag((MR_Word) RvalConst_12)) == (MR_Integer) 2))
      {
        MR_Integer Var_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), RvalConst_12, (MR_Integer) 0))));

        succeeded = (Var_20 == (MR_Integer) 0);
      }
      else
      if (((((MR_tag((MR_Word) RvalConst_12)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalConst_12, (MR_Integer) 0))) == (MR_Integer) 20))))
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

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__cons_id_arg_types_and_widths__3115__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    if (((MR_tag((MR_Word) ConsIdOrClosure_8)) == (MR_Integer) 1))
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
      succeeded = ((((MR_tag((MR_Word) ConsId_11)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_11, (MR_Integer) 0))) == (MR_Integer) 2)));
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
          MR_Word ConsArgRepns_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_32, (MR_Integer) 4))));
          MR_Integer NumExtraArgs_34;
          MR_Integer Var_45;
          MR_Integer Var_46;

          Var_45 = mercury__list__length_1_f_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), ArgVars_9);
          Var_46 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), ConsArgRepns_33);
          NumExtraArgs_34 = (MR_Integer) ((MR_Unsigned) Var_45 - (MR_Unsigned) Var_46);
          succeeded = (NumExtraArgs_34 == (MR_Integer) 0);
          if (succeeded)
            ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_114_103_115_95_116_121_112_101_115_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(ArgVars_9, ConsArgRepns_33, ArgVarsTypesWidths_10);
          else
          {
            MR_Word ExtraArgs_35;
            MR_Word NonExtraArgs_36;
            MR_Integer InitOffset_41;
            MR_Word ExtraArgsTypesWidths_42;
            MR_Word NonExtraArgsTypesWidths_43;
            MR_Word RemoteSectag_38;
            MR_Word AddedBy_40;
            MR_Word Var_51;

            mercury__require__expect_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_3[2]), (MR_String) "predicate \140ml_backend.ml_unify_gen.cons_id_arg_types_and_widths\'/7", (MR_String) "extra args in static struct");
            mercury__list__det_split_list_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[2]), NumExtraArgs_34, ArgVars_9, &ExtraArgs_35, &NonExtraArgs_36);
            Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_32, (MR_Integer) 3))));
            succeeded = ((((MR_tag((MR_Word) Var_51)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_51, (MR_Integer) 0))) == (MR_Integer) 13)));
            if (succeeded)
            {
              RemoteSectag_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_51, (MR_Integer) 2))));
              AddedBy_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RemoteSectag_38, (MR_Integer) 1))));
              succeeded = (AddedBy_40 == (MR_Integer) 0);
            }
            if (succeeded)
              InitOffset_41 = (MR_Integer) 1;
            else
              InitOffset_41 = (MR_Integer) 0;
            ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_116_121_112_101_95_97_110_100_95_97_108_108_111_99_97_116_101_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_4_p_0(Var_16, InitOffset_41, ExtraArgs_35, &ExtraArgsTypesWidths_42);
            ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_114_103_115_95_116_121_112_101_115_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(NonExtraArgs_36, ConsArgRepns_33, &NonExtraArgsTypesWidths_43);
            *ArgVarsTypesWidths_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[6]), ExtraArgsTypesWidths_42, NonExtraArgsTypesWidths_43);
          }
        }
        else
        {
          MR_Word Var_44;

          succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(VarType_7, &Var_44);
          if (succeeded)
          {
            MR_Word Var_52;

            Var_52 = ml_backend__ml_code_util__ml_make_boxed_type_0_f_0();
            ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_101_99_105_102_105_101_100_95_97_114_103_95_116_121_112_101_115_95_97_110_100_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_4_p_0(Var_52, (MR_Integer) 0, ArgVars_9, ArgVarsTypesWidths_10);
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
  if ((HeadVar__3_3 == (MR_Word) ((MR_Integer) 0)))
    *HeadVar__4_4 = (MR_Word) ((MR_Integer) 0);
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
  if ((HeadVar__3_3 == (MR_Word) ((MR_Integer) 0)))
    *HeadVar__4_4 = (MR_Word) ((MR_Integer) 0);
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Integer) 0)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Integer) 0)))
      *HeadVar__3_3 = (MR_Word) ((MR_Integer) 0);
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

    if ((HeadVar__2_2 == (MR_Word) ((MR_Integer) 0)))
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
ml_backend__ml_unify_gen__ml_gen_dynamic_construct_args_9_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_dynamic_construct_args__1187__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_dynamic_construct_args_9_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer CurArgNum_4,
  MR_Word STATE_VARIABLE_TakeAddr_0_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_8,
  MR_Word * STATE_VARIABLE_MayUseAtomic_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Integer) 0)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Integer) 0)))
      {
        *HeadVar__6_6 = (MR_Word) ((MR_Integer) 0);
        *HeadVar__7_7 = (MR_Word) ((MR_Integer) 0);
        *STATE_VARIABLE_MayUseAtomic_9 = STATE_VARIABLE_MayUseAtomic_0_8;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_construct_args\'/9", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_145 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Integer) 0)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_construct_args\'/9", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word ArgMode_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgModes_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgVar_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_145, (MR_Integer) 0))));
        MR_Word ConsArgType_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_145, (MR_Integer) 1))));
        MR_Word ArgPosWidth_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_145, (MR_Integer) 2))));
        MR_Word Lval_53;
        MR_Word ArgType_54;
        MR_Word ModuleInfo_55;
        MR_Word HighLevelData_56;
        MR_Word ArgWidth_57;
        MR_Word BoxedArgType_58;
        MR_Word MLDS_Type_59;
        MR_Word CellOffset_61;
        MR_Word STATE_VARIABLE_MayUseAtomic_103_103;
        MR_Word STATE_VARIABLE_TakeAddr_105_105;
        MR_Integer Var_138;

        ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_1, ArgVar_50, &Lval_53);
        ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_1, ArgVar_50, &ArgType_54);
        ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_1, &ModuleInfo_55);
        check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(ModuleInfo_55, ArgType_54, STATE_VARIABLE_MayUseAtomic_0_8, &STATE_VARIABLE_MayUseAtomic_103_103);
        ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(Info_1, &HighLevelData_56);
        ArgWidth_57 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_52);
        ml_backend__ml_unify_gen__ml_type_as_field_5_p_0(ModuleInfo_55, HighLevelData_56, ConsArgType_51, ArgWidth_57, &BoxedArgType_58);
        MLDS_Type_59 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_55, BoxedArgType_58);
        switch (MR_tag((MR_Word) ArgPosWidth_52)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            CellOffset_61 = (MR_Word) (((MR_Box) ((MR_Integer) -1)));
            break;
          case (MR_Integer) 1:
            CellOffset_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgPosWidth_52, (MR_Integer) 1))));
            break;
          case (MR_Integer) 2:
            CellOffset_61 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgPosWidth_52, (MR_Integer) 1))));
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                CellOffset_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 2))));
                break;
              case (MR_Integer) 1:
                CellOffset_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 2))));
                break;
              case (MR_Integer) 2:
                CellOffset_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 2))));
                break;
            }
            break;
        }
        succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_TakeAddr_0_5)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_138 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_TakeAddr_0_5, (MR_Integer) 0))));
          STATE_VARIABLE_TakeAddr_105_105 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_TakeAddr_0_5, (MR_Integer) 1))));
          succeeded = (CurArgNum_4 == Var_138);
        }
        if (succeeded)
        {
          MR_Word Rval_74;
          MR_Word RvalMLDSTypeWidth_75;
          MR_Word OrigMLDS_Type_76;
          MR_Word TakeAddrInfo_77;
          MR_Word TakeAddrInfosTail_78;
          MR_Word TailRvalsMLDSTypesWidths_79;
          MR_Word Var_106;
          MR_Word Var_110;
          MR_Integer Var_112;

          {
            Var_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_106, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[0]));
            MR_hl_field(MR_mktag(0), Var_106, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_dynamic_construct_args_9_p_0_1));
            MR_hl_field(MR_mktag(0), Var_106, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_106, 3) = ((MR_Box) (ArgWidth_57));
            MR_hl_field(MR_mktag(0), Var_106, 4) = ((MR_Box) ((MR_Integer) 2));
          }
          mercury__require__expect_3_p_0(Var_106, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_dynamic_construct_args\'/9", (MR_String) "taking address of non word-sized argument");
          {
            Var_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
            MR_hl_field(MR_mktag(3), Var_110, 1) = ((MR_Box) (MLDS_Type_59));
          }
          {
            Rval_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Rval_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Rval_74, 1) = ((MR_Box) (Var_110));
          }
          {
            RvalMLDSTypeWidth_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), RvalMLDSTypeWidth_75, 0) = ((MR_Box) (Rval_74));
            MR_hl_field(MR_mktag(0), RvalMLDSTypeWidth_75, 1) = ((MR_Box) (MLDS_Type_59));
            MR_hl_field(MR_mktag(0), RvalMLDSTypeWidth_75, 2) = ((MR_Box) (ArgPosWidth_52));
            MR_hl_field(MR_mktag(0), RvalMLDSTypeWidth_75, 3) = ((MR_Box) ((MR_Integer) 0));
          }
          OrigMLDS_Type_76 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_55, ConsArgType_51);
          {
            TakeAddrInfo_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TakeAddrInfo_77, 0) = ((MR_Box) (ArgVar_50));
            MR_hl_field(MR_mktag(0), TakeAddrInfo_77, 1) = ((MR_Box) (CellOffset_61));
            MR_hl_field(MR_mktag(0), TakeAddrInfo_77, 2) = ((MR_Box) (OrigMLDS_Type_76));
            MR_hl_field(MR_mktag(0), TakeAddrInfo_77, 3) = ((MR_Box) (MLDS_Type_59));
          }
          Var_112 = (MR_Integer) ((MR_Unsigned) CurArgNum_4 + (MR_Unsigned) (MR_Integer) 1);
          ml_backend__ml_unify_gen__ml_gen_dynamic_construct_args_9_p_0(Info_1, Var_144, ArgModes_44, Var_112, STATE_VARIABLE_TakeAddr_105_105, &TakeAddrInfosTail_78, &TailRvalsMLDSTypesWidths_79, STATE_VARIABLE_MayUseAtomic_103_103, STATE_VARIABLE_MayUseAtomic_9);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__6_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TakeAddrInfo_77));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TakeAddrInfosTail_78));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__7_7 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RvalMLDSTypeWidth_75));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailRvalsMLDSTypesWidths_79));
          }
        }
        else
        {
          succeeded = (ArgPosWidth_52 == (MR_Word) ((MR_Integer) 0));
          if (succeeded)
          {
            MR_Integer Var_115 = (MR_Integer) ((MR_Unsigned) CurArgNum_4 + (MR_Unsigned) (MR_Integer) 1);
            MR_Word next_value_of_HeadVar__2_2 = Var_144;
            MR_Word next_value_of_HeadVar__3_3 = ArgModes_44;
            MR_Integer next_value_of_CurArgNum_4 = Var_115;
            MR_Word next_value_of_STATE_VARIABLE_MayUseAtomic_0_8 = STATE_VARIABLE_MayUseAtomic_103_103;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            CurArgNum_4 = next_value_of_CurArgNum_4;
            STATE_VARIABLE_MayUseAtomic_0_8 = next_value_of_STATE_VARIABLE_MayUseAtomic_0_8;
            continue;
          }
          else
          {
            MR_Word RHSInsts_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_43, (MR_Integer) 1))));
            MR_Word MaybePackedArgVar_92;
            MR_Integer Var_124;
            MR_Word Rval_128;
            MR_Word RvalMLDSTypeWidth_129;
            MR_Word TailRvalsMLDSTypesWidths_130;
            MR_Word Var_119;
            MR_Word Var_139;

            check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_55, RHSInsts_81, ArgType_54, &Var_139);
            succeeded = ((MR_Integer) 0 == Var_139);
            if (succeeded)
            {
              Var_119 = check_hlds__type_util__is_either_type_a_dummy_3_f_0(ModuleInfo_55, ArgType_54, ConsArgType_51);
              succeeded = (Var_119 == (MR_Integer) 1);
            }
            if (succeeded)
            {
              MR_Word Var_121;

              {
                Var_121 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_121, 0) = ((MR_Box) (Lval_53));
              }
              ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_55, ArgType_54, BoxedArgType_58, (MR_Integer) 0, Var_121, &Rval_128);
            }
            else
            {
              MR_Word Var_122;

              {
                Var_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
                MR_hl_field(MR_mktag(3), Var_122, 1) = ((MR_Box) (MLDS_Type_59));
              }
              {
                Rval_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Rval_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Rval_128, 1) = ((MR_Box) (Var_122));
              }
            }
            switch (MR_tag((MR_Word) ArgPosWidth_52)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                MaybePackedArgVar_92 = (MR_Word) ((MR_Integer) 0);
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                MaybePackedArgVar_92 = (MR_Word) ((MR_Integer) 0);
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word NumBits_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 3))));
                      MR_Word Fill_86 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 5))));
                      MR_Word PackedArgVar_91;

                      {
                        PackedArgVar_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), PackedArgVar_91, 0) = ((MR_Box) (ArgVar_50));
                        MR_hl_field(MR_mktag(0), PackedArgVar_91, 1) = ((MR_Box) (((MR_Box) ((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(0), PackedArgVar_91, 2) = ((MR_Box) (NumBits_84));
                        MR_hl_field(MR_mktag(0), PackedArgVar_91, 3) = ((MR_Box) (Fill_86));
                      }
                      {
                        MaybePackedArgVar_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), MaybePackedArgVar_92, 0) = ((MR_Box) (PackedArgVar_91));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word NumBits_140 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 4))));
                      MR_Word Fill_141 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 6))));
                      MR_Word Shift_142 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 3))));
                      MR_Word PackedArgVar_143;

                      {
                        PackedArgVar_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), PackedArgVar_143, 0) = ((MR_Box) (ArgVar_50));
                        MR_hl_field(MR_mktag(0), PackedArgVar_143, 1) = ((MR_Box) (Shift_142));
                        MR_hl_field(MR_mktag(0), PackedArgVar_143, 2) = ((MR_Box) (NumBits_140));
                        MR_hl_field(MR_mktag(0), PackedArgVar_143, 3) = ((MR_Box) (Fill_141));
                      }
                      {
                        MaybePackedArgVar_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), MaybePackedArgVar_92, 0) = ((MR_Box) (PackedArgVar_143));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    MaybePackedArgVar_92 = (MR_Word) ((MR_Integer) 0);
                    break;
                }
                break;
            }
            {
              RvalMLDSTypeWidth_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), RvalMLDSTypeWidth_129, 0) = ((MR_Box) (Rval_128));
              MR_hl_field(MR_mktag(0), RvalMLDSTypeWidth_129, 1) = ((MR_Box) (MLDS_Type_59));
              MR_hl_field(MR_mktag(0), RvalMLDSTypeWidth_129, 2) = ((MR_Box) (ArgPosWidth_52));
              MR_hl_field(MR_mktag(0), RvalMLDSTypeWidth_129, 3) = ((MR_Box) (MaybePackedArgVar_92));
            }
            Var_124 = (MR_Integer) ((MR_Unsigned) CurArgNum_4 + (MR_Unsigned) (MR_Integer) 1);
            ml_backend__ml_unify_gen__ml_gen_dynamic_construct_args_9_p_0(Info_1, Var_144, ArgModes_44, Var_124, STATE_VARIABLE_TakeAddr_0_5, HeadVar__6_6, &TailRvalsMLDSTypesWidths_130, STATE_VARIABLE_MayUseAtomic_103_103, STATE_VARIABLE_MayUseAtomic_9);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__7_7 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RvalMLDSTypeWidth_129));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailRvalsMLDSTypesWidths_130));
            }
          }
        }
      }
    }
    break;
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
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Integer) 0)))
    *HeadVar__7_7 = (MR_Word) ((MR_Integer) 0);
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
