/*
** Automatically generated from `ml_unify_gen_util.m'
** by the Mercury compiler,
** version rotd-2018-08-16
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


// :- module ml_backend.ml_unify_gen_util.
// :- implementation.

/*
INIT mercury__ml_backend__ml_unify_gen_util__init
ENDINIT
*/

#include "ml_backend.ml_unify_gen_util.mih"


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
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
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
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_type_gen.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
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




static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__ti_arg_type_and_width_1hlds__const_struct__type_ctor_info_const_struct_arg_0;

static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen_util____vpti_func_2__pseudo_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__field_types_arg_type_and_width_1_0[3];

static const MR_DuFunctorDesc ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_functor_desc_arg_type_and_width_1_0;

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_stag_ordered_arg_type_and_width_1_0[1];

static const MR_DuPtagLayout ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_ptag_ordered_arg_type_and_width_1[1];

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_name_ordered_arg_type_and_width_1[1];

static const MR_Integer ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__functor_number_map_arg_type_and_width_1[1];

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__ti_arg_type_and_width_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_functor_desc_assign_dir_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_functor_desc_assign_dir_0_1;

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_functor_desc_assign_dir_0_2;

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_functor_desc_assign_dir_0_3;

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_value_ordered_assign_dir_0[4];

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_name_ordered_assign_dir_0[4];

static const MR_Integer ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__functor_number_map_assign_dir_0[4];

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__field_types_cons_id_or_closure_0_0[1];

static const MR_DuFunctorDesc ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_functor_desc_cons_id_or_closure_0_0;

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__field_types_cons_id_or_closure_0_1[1];

static const MR_DuFunctorDesc ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_functor_desc_cons_id_or_closure_0_1;

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_stag_ordered_cons_id_or_closure_0_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_stag_ordered_cons_id_or_closure_0_1[1];

static const MR_DuPtagLayout ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_ptag_ordered_cons_id_or_closure_0[2];

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_name_ordered_cons_id_or_closure_0[2];

static const MR_Integer ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__functor_number_map_cons_id_or_closure_0[2];

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen_util__maybe__ti_maybe_1hlds__hlds_data__type_ctor_info_ptag_0;

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__field_types_field_gen_0_0[4];

static const MR_DuFunctorDesc ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_functor_desc_field_gen_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_stag_ordered_field_gen_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_ptag_ordered_field_gen_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_name_ordered_field_gen_0[1];

static const MR_Integer ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__functor_number_map_field_gen_0[1];

static const MR_DuFunctorDesc ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_functor_desc_field_via_0_0;

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__field_types_field_via_0_1[2];

static const MR_DuFunctorDesc ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_functor_desc_field_via_0_1;

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_stag_ordered_field_via_0_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_stag_ordered_field_via_0_1[1];

static const MR_DuPtagLayout ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_ptag_ordered_field_via_0[2];

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_name_ordered_field_via_0[2];

static const MR_Integer ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__functor_number_map_field_via_0[2];

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_functor_desc_may_have_extra_args_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_functor_desc_may_have_extra_args_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_value_ordered_may_have_extra_args_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_name_ordered_may_have_extra_args_0[2];

static const MR_Integer ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__functor_number_map_may_have_extra_args_0[2];

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_functor_desc_ml_maybe_zero_const_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_functor_desc_ml_maybe_zero_const_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_value_ordered_ml_maybe_zero_const_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_name_ordered_ml_maybe_zero_const_0[2];

static const MR_Integer ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__functor_number_map_ml_maybe_zero_const_0[2];

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_util__IntroducedFrom__pred__decide_field_gen__527__1_2_p_0(
  MR_Word TypeCtor_21,
  MR_Word VarTypeCtor_24);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_util__IntroducedFrom__pred__associate_cons_id_args_with_types_widths__366__2_2_p_0(
  MR_Word MayHaveExtraArgs_10,
  MR_Word HeadVar__2_36);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_util__IntroducedFrom__pred__associate_cons_id_args_with_types_widths__366__1_2_p_0(
  MR_Word MayHaveExtraArgs_10,
  MR_Word HeadVar__2_36);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_util__decide_field_gen_6_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_util__associate_cons_id_args_with_types_widths_7_p_1_1(
  MR_Box closure_arg);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_util__associate_maybe_cons_id_args_with_types_widths_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_util__associate_cons_id_args_with_types_widths_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_101_99_105_102_105_101_100_95_97_114_103_95_116_121_112_101_115_95_97_110_100_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word Type_1,
  MR_Integer CurOffset_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ml_backend__ml_unify_gen_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_116_121_112_101_95_97_110_100_95_97_108_108_111_99_97_116_101_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word ArgToType_1,
  MR_Integer CurOffset_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ml_backend__ml_unify_gen_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_114_103_115_95_116_121_112_101_115_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ml_backend__ml_unify_gen_util__allocate_consecutive_full_word_ctor_arg_repns_lookup_4_p_0(
  MR_Word Info_1,
  MR_Integer CurOffset_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ml_backend__ml_unify_gen_util__allocate_consecutive_full_word_ctor_arg_repns_boxed_3_p_0(
  MR_Integer CurOffset_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_util____Unify____arg_const_type_and_width_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen_util____Compare____arg_const_type_and_width_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_util____Unify____arg_to_type_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_unify_gen_util____Compare____arg_to_type_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_util____Unify____arg_type_and_width_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_unify_gen_util____Compare____arg_type_and_width_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_util____Unify____arg_var_type_and_width_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen_util____Compare____arg_var_type_and_width_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_util____Unify____assign_dir_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen_util____Compare____assign_dir_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_util____Unify____cons_id_or_closure_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen_util____Compare____cons_id_or_closure_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_util____Unify____field_gen_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen_util____Compare____field_gen_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_util____Unify____field_via_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen_util____Compare____field_via_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_util____Unify____may_have_extra_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen_util____Compare____may_have_extra_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_util____Unify____ml_maybe_zero_const_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen_util____Compare____ml_maybe_zero_const_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_unify_gen_util_scalar_common_1[11][2];

static /* final */ const MR_Box ml_backend__ml_unify_gen_util_scalar_common_2[1][3];

static /* final */ const MR_Box ml_backend__ml_unify_gen_util_scalar_common_3[2][5];

static /* final */ const MR_Box ml_backend__ml_unify_gen_util_scalar_common_4[1][6];

static /* final */ const MR_Box ml_backend__ml_unify_gen_util_scalar_common_5[2][1];




static /* final */ const MR_Box ml_backend__ml_unify_gen_util_scalar_common_1[11][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_arg_type_and_width_1)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_arg_type_and_width_1)),
    ((MR_Box) (&ml_backend__ml_unify_gen_util_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_util_scalar_common_5[0])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_util_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_util_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ml_backend__ml_unify_gen_util_scalar_common_1[0])),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_util_scalar_common_3[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_may_have_extra_args_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_may_have_extra_args_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_util_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_unify_gen_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_util_scalar_common_5[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_util_scalar_common_1[4])))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ml_backend__ml_unify_gen_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__ti_arg_type_and_width_1hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_arg_type_and_width_1,
  {
    (MR_TypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0)
  }
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_arg_const_type_and_width_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_unify_gen_util____Unify____arg_const_type_and_width_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen_util____Compare____arg_const_type_and_width_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen_util",
  (MR_String) "arg_const_type_and_width",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__ti_arg_type_and_width_1hlds__const_struct__type_ctor_info_const_struct_arg_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen_util____vpti_func_2__pseudo_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_arg_to_type_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (ml_backend__ml_unify_gen_util____Unify____arg_to_type_1_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen_util____Compare____arg_to_type_1_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen_util",
  (MR_String) "arg_to_type",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&ml_backend__ml_unify_gen_util____vpti_func_2__pseudo_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__field_types_arg_type_and_width_1_0[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0)
};

static const MR_DuFunctorDesc ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_functor_desc_arg_type_and_width_1_0 = {
  (MR_String) "arg_type_and_width",
  (MR_Integer) 3,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__field_types_arg_type_and_width_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_stag_ordered_arg_type_and_width_1_0[1] = {
  &ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_functor_desc_arg_type_and_width_1_0
};

static const MR_DuPtagLayout ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_ptag_ordered_arg_type_and_width_1[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_stag_ordered_arg_type_and_width_1_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_name_ordered_arg_type_and_width_1[1] = {
  &ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_functor_desc_arg_type_and_width_1_0
};

static const MR_Integer ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__functor_number_map_arg_type_and_width_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_arg_type_and_width_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_unify_gen_util____Unify____arg_type_and_width_1_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen_util____Compare____arg_type_and_width_1_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen_util",
  (MR_String) "arg_type_and_width",
  {     ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_name_ordered_arg_type_and_width_1 },
  {     ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_ptag_ordered_arg_type_and_width_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__functor_number_map_arg_type_and_width_1
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__ti_arg_type_and_width_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_arg_type_and_width_1,
  {
    (MR_TypeInfo) (&ml_backend__ml_unify_gen_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_arg_var_type_and_width_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_unify_gen_util____Unify____arg_var_type_and_width_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen_util____Compare____arg_var_type_and_width_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen_util",
  (MR_String) "arg_var_type_and_width",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__ti_arg_type_and_width_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_functor_desc_assign_dir_0_0 = {
  (MR_String) "assign_nondummy_left",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_functor_desc_assign_dir_0_1 = {
  (MR_String) "assign_nondummy_right",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_functor_desc_assign_dir_0_2 = {
  (MR_String) "assign_nondummy_unused",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_functor_desc_assign_dir_0_3 = {
  (MR_String) "assign_dummy",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_value_ordered_assign_dir_0[4] = {
  &ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_functor_desc_assign_dir_0_0,
  &ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_functor_desc_assign_dir_0_1,
  &ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_functor_desc_assign_dir_0_2,
  &ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_functor_desc_assign_dir_0_3
};

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_name_ordered_assign_dir_0[4] = {
  &ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_functor_desc_assign_dir_0_3,
  &ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_functor_desc_assign_dir_0_0,
  &ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_functor_desc_assign_dir_0_1,
  &ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_functor_desc_assign_dir_0_2
};

static const MR_Integer ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__functor_number_map_assign_dir_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_assign_dir_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_unify_gen_util____Unify____assign_dir_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen_util____Compare____assign_dir_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen_util",
  (MR_String) "assign_dir",
  {     ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_name_ordered_assign_dir_0 },
  {     ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_value_ordered_assign_dir_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__functor_number_map_assign_dir_0
};

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__field_types_cons_id_or_closure_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)
};

static const MR_DuFunctorDesc ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_functor_desc_cons_id_or_closure_0_0 = {
  (MR_String) "ordinary_cons_id",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__field_types_cons_id_or_closure_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__field_types_cons_id_or_closure_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_functor_desc_cons_id_or_closure_0_1 = {
  (MR_String) "closure_object",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__field_types_cons_id_or_closure_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_stag_ordered_cons_id_or_closure_0_0[1] = {
  &ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_functor_desc_cons_id_or_closure_0_0
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_stag_ordered_cons_id_or_closure_0_1[1] = {
  &ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_functor_desc_cons_id_or_closure_0_1
};

static const MR_DuPtagLayout ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_ptag_ordered_cons_id_or_closure_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_stag_ordered_cons_id_or_closure_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_stag_ordered_cons_id_or_closure_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_name_ordered_cons_id_or_closure_0[2] = {
  &ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_functor_desc_cons_id_or_closure_0_1,
  &ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_functor_desc_cons_id_or_closure_0_0
};

static const MR_Integer ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__functor_number_map_cons_id_or_closure_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_cons_id_or_closure_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_unify_gen_util____Unify____cons_id_or_closure_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen_util____Compare____cons_id_or_closure_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen_util",
  (MR_String) "cons_id_or_closure",
  {     ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_name_ordered_cons_id_or_closure_0 },
  {     ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_ptag_ordered_cons_id_or_closure_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__functor_number_map_cons_id_or_closure_0
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen_util__maybe__ti_maybe_1hlds__hlds_data__type_ctor_info_ptag_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0)
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__field_types_field_gen_0_0[4] = {
  (MR_PseudoTypeInfo) (&ml_backend__ml_unify_gen_util__maybe__ti_maybe_1hlds__hlds_data__type_ctor_info_ptag_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_field_via_0)
};

static const MR_DuFunctorDesc ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_functor_desc_field_gen_0_0 = {
  (MR_String) "field_gen",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__field_types_field_gen_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_stag_ordered_field_gen_0_0[1] = {
  &ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_functor_desc_field_gen_0_0
};

static const MR_DuPtagLayout ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_ptag_ordered_field_gen_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_stag_ordered_field_gen_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_name_ordered_field_gen_0[1] = {
  &ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_functor_desc_field_gen_0_0
};

static const MR_Integer ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__functor_number_map_field_gen_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_field_gen_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_unify_gen_util____Unify____field_gen_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen_util____Compare____field_gen_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen_util",
  (MR_String) "field_gen",
  {     ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_name_ordered_field_gen_0 },
  {     ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_ptag_ordered_field_gen_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__functor_number_map_field_gen_0
};

static const MR_DuFunctorDesc ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_functor_desc_field_via_0_0 = {
  (MR_String) "field_via_offset",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__field_types_field_via_0_1[2] = {
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)
};

static const MR_DuFunctorDesc ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_functor_desc_field_via_0_1 = {
  (MR_String) "field_via_name",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__field_types_field_via_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_stag_ordered_field_via_0_0[1] = {
  &ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_functor_desc_field_via_0_0
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_stag_ordered_field_via_0_1[1] = {
  &ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_functor_desc_field_via_0_1
};

static const MR_DuPtagLayout ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_ptag_ordered_field_via_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL_REST_OF_WORD,
    ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_stag_ordered_field_via_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_stag_ordered_field_via_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_name_ordered_field_via_0[2] = {
  &ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_functor_desc_field_via_0_1,
  &ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_functor_desc_field_via_0_0
};

static const MR_Integer ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__functor_number_map_field_via_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_field_via_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_unify_gen_util____Unify____field_via_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen_util____Compare____field_via_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen_util",
  (MR_String) "field_via",
  {     ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_name_ordered_field_via_0 },
  {     ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__du_ptag_ordered_field_via_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__functor_number_map_field_via_0
};

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_functor_desc_may_have_extra_args_0_0 = {
  (MR_String) "may_not_have_extra_args",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_functor_desc_may_have_extra_args_0_1 = {
  (MR_String) "may_have_extra_args",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_value_ordered_may_have_extra_args_0[2] = {
  &ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_functor_desc_may_have_extra_args_0_0,
  &ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_functor_desc_may_have_extra_args_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_name_ordered_may_have_extra_args_0[2] = {
  &ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_functor_desc_may_have_extra_args_0_1,
  &ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_functor_desc_may_have_extra_args_0_0
};

static const MR_Integer ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__functor_number_map_may_have_extra_args_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_may_have_extra_args_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_unify_gen_util____Unify____may_have_extra_args_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen_util____Compare____may_have_extra_args_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen_util",
  (MR_String) "may_have_extra_args",
  {     ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_name_ordered_may_have_extra_args_0 },
  {     ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_value_ordered_may_have_extra_args_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__functor_number_map_may_have_extra_args_0
};

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_functor_desc_ml_maybe_zero_const_0_0 = {
  (MR_String) "ml_is_not_zero_const",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_functor_desc_ml_maybe_zero_const_0_1 = {
  (MR_String) "ml_is_zero_const",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_value_ordered_ml_maybe_zero_const_0[2] = {
  &ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_functor_desc_ml_maybe_zero_const_0_0,
  &ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_functor_desc_ml_maybe_zero_const_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_name_ordered_ml_maybe_zero_const_0[2] = {
  &ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_functor_desc_ml_maybe_zero_const_0_0,
  &ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_functor_desc_ml_maybe_zero_const_0_1
};

static const MR_Integer ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__functor_number_map_ml_maybe_zero_const_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_ml_maybe_zero_const_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_unify_gen_util____Unify____ml_maybe_zero_const_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen_util____Compare____ml_maybe_zero_const_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen_util",
  (MR_String) "ml_maybe_zero_const",
  {     ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_name_ordered_ml_maybe_zero_const_0 },
  {     ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__enum_value_ordered_ml_maybe_zero_const_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__functor_number_map_ml_maybe_zero_const_0
};

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_util__IntroducedFrom__pred__decide_field_gen__527__1_2_p_0(
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
ml_backend__ml_unify_gen_util__IntroducedFrom__pred__associate_cons_id_args_with_types_widths__366__2_2_p_0(
  MR_Word MayHaveExtraArgs_10,
  MR_Word HeadVar__2_36)
{
  {
    MR_bool succeeded = (MayHaveExtraArgs_10 == HeadVar__2_36);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_util__IntroducedFrom__pred__associate_cons_id_args_with_types_widths__366__1_2_p_0(
  MR_Word MayHaveExtraArgs_10,
  MR_Word HeadVar__2_36)
{
  {
    MR_bool succeeded = (MayHaveExtraArgs_10 == HeadVar__2_36);

    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_unify_gen_util____Compare____ml_maybe_zero_const_0_0(
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

MR_bool MR_CALL 
ml_backend__ml_unify_gen_util____Unify____ml_maybe_zero_const_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_unify_gen_util____Compare____may_have_extra_args_0_0(
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

MR_bool MR_CALL 
ml_backend__ml_unify_gen_util____Unify____may_have_extra_args_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_unify_gen_util____Compare____field_gen_0_0(
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

      mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_util_scalar_common_1[3]), &Var_12, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
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
            ml_backend__ml_unify_gen_util____Compare____field_via_0_0(HeadVar__1_1, ArgX4_10, ArgY4_11);
        }
      }
    }
  }
}

void MR_CALL 
ml_backend__ml_unify_gen_util____Compare____field_via_0_0(
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
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
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

MR_bool MR_CALL 
ml_backend__ml_unify_gen_util____Unify____field_gen_0_0(
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_util_scalar_common_1[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
            succeeded = ml_backend__ml_unify_gen_util____Unify____field_via_0_0(ArgX4_9, ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
ml_backend__ml_unify_gen_util____Unify____field_via_0_0(
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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
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

void MR_CALL 
ml_backend__ml_unify_gen_util____Compare____cons_id_or_closure_0_0(
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

MR_bool MR_CALL 
ml_backend__ml_unify_gen_util____Unify____cons_id_or_closure_0_0(
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

void MR_CALL 
ml_backend__ml_unify_gen_util____Compare____assign_dir_0_0(
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

MR_bool MR_CALL 
ml_backend__ml_unify_gen_util____Unify____assign_dir_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_unify_gen_util____Compare____arg_var_type_and_width_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_util_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
ml_backend__ml_unify_gen_util____Unify____arg_var_type_and_width_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = ml_backend__ml_unify_gen_util____Unify____arg_type_and_width_1_0((MR_Word) (&ml_backend__ml_unify_gen_util_scalar_common_1[0]), Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_unify_gen_util____Compare____arg_type_and_width_1_0(
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

void MR_CALL 
ml_backend__ml_unify_gen_util____Compare____arg_to_type_1_0(
  MR_Word TypeInfo_for_Arg_6,
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

MR_bool MR_CALL 
ml_backend__ml_unify_gen_util____Unify____arg_to_type_1_0(
  MR_Word TypeInfo_for_Arg_5,
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

void MR_CALL 
ml_backend__ml_unify_gen_util____Compare____arg_const_type_and_width_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_util_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
ml_backend__ml_unify_gen_util____Unify____arg_const_type_and_width_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = ml_backend__ml_unify_gen_util____Unify____arg_type_and_width_1_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

MR_bool MR_CALL 
ml_backend__ml_unify_gen_util____Unify____arg_type_and_width_1_0(
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

void MR_CALL 
ml_backend__ml_unify_gen_util__ml_compute_assign_direction_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ArgMode_7,
  MR_Word ArgType_8,
  MR_Word FieldType_9,
  MR_Word * Dir_10)
{
  {
    MR_bool succeeded;
    MR_Word Var_15;

    Var_15 = check_hlds__type_util__is_either_type_a_dummy_3_f_0(ModuleInfo_6, ArgType_8, FieldType_9);
    succeeded = (Var_15 == (MR_Integer) 0);
    if (succeeded)
      *Dir_10 = (MR_Integer) 3;
    else
    {
      MR_Word LeftFromToInsts_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_7, (MR_Integer) 0))));
      MR_Word RightFromToInsts_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_7, (MR_Integer) 1))));
      MR_Word LeftTopMode_13;
      MR_Word RightTopMode_14;

      check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_6, LeftFromToInsts_11, ArgType_8, &LeftTopMode_13);
      check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_6, RightFromToInsts_12, ArgType_8, &RightTopMode_14);
      switch (LeftTopMode_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (RightTopMode_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_util.ml_compute_assign_direction\'/5", (MR_String) "test in arg of [de]construction");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              *Dir_10 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_util.ml_compute_assign_direction\'/5", (MR_String) "some strange unify");
                  return;
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          switch (RightTopMode_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *Dir_10 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_util.ml_compute_assign_direction\'/5", (MR_String) "some strange unify");
                  return;
                }
              }
              break;
          }
          break;
        case (MR_Integer) 2:
          switch (RightTopMode_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_util.ml_compute_assign_direction\'/5", (MR_String) "some strange unify");
                  return;
                }
              }
              break;
            case (MR_Integer) 2:
              *Dir_10 = (MR_Integer) 2;
              break;
          }
          break;
      }
    }
  }
}

MR_Word MR_CALL 
ml_backend__ml_unify_gen_util__ml_right_shift_rval_2_f_0(
  MR_Word Rval_4,
  MR_Word Shift_5)
{
  {
    MR_bool succeeded;
    MR_Word ShiftedRval_6;
    MR_Integer ShiftInt_7 = (MR_Integer) (Shift_5);

    succeeded = (ShiftInt_7 == (MR_Integer) 0);
    if (!(succeeded))
    {
      MR_Word Const_8;
      MR_Word Var_9;

      succeeded = ((((MR_tag((MR_Word) Rval_4)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 0))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Const_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1))));
        Var_9 = ml_backend__ml_unify_gen_util__ml_is_zero_const_1_f_0(Const_8);
        succeeded = (Var_9 == (MR_Integer) 1);
      }
    }
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
        MR_hl_field(MR_mktag(3), ShiftedRval_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_util_scalar_common_1[10])));
        MR_hl_field(MR_mktag(3), ShiftedRval_6, 2) = ((MR_Box) (Rval_4));
        MR_hl_field(MR_mktag(3), ShiftedRval_6, 3) = ((MR_Box) (Var_12));
      }
    }
    return ShiftedRval_6;
  }
}

MR_Word MR_CALL 
ml_backend__ml_unify_gen_util__ml_left_shift_rval_3_f_0(
  MR_Word Rval_5,
  MR_Word Shift_6,
  MR_Word Fill_7)
{
  {
    MR_bool succeeded;
    MR_Word ShiftedRval_8;
    MR_Integer ShiftInt_9 = (MR_Integer) (Shift_6);
    MR_Word CastRval_10;
    MR_Word Rval1_24;
    MR_Word Var_26;
    MR_Word Var_13;

    switch (Fill_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 5:
      case (MR_Integer) 6:
      case (MR_Integer) 4:
        Rval1_24 = Rval_5;
        break;
      case (MR_Integer) 2:
        {
          MR_Word ToMLDSType_25;

          ToMLDSType_25 = ml_backend__ml_util__mlds_int_type_uint16_0_f_0();
          {
            Rval1_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Rval1_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), Rval1_24, 1) = ((MR_Box) (ToMLDSType_25));
            MR_hl_field(MR_mktag(3), Rval1_24, 2) = ((MR_Box) (Rval_5));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ToMLDSType_27;

          ToMLDSType_27 = ml_backend__ml_util__mlds_int_type_uint32_0_f_0();
          {
            Rval1_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Rval1_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), Rval1_24, 1) = ((MR_Box) (ToMLDSType_27));
            MR_hl_field(MR_mktag(3), Rval1_24, 2) = ((MR_Box) (Rval_5));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ToMLDSType_28;

          ToMLDSType_28 = ml_backend__ml_util__mlds_int_type_uint8_0_f_0();
          {
            Rval1_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Rval1_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), Rval1_24, 1) = ((MR_Box) (ToMLDSType_28));
            MR_hl_field(MR_mktag(3), Rval1_24, 2) = ((MR_Box) (Rval_5));
          }
        }
        break;
    }
    Var_26 = ml_backend__ml_util__mlds_int_type_uint_0_f_0();
    {
      CastRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CastRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), CastRval_10, 1) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(3), CastRval_10, 2) = ((MR_Box) (Rval1_24));
    }
    succeeded = ((((MR_tag((MR_Word) Rval_5)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 0))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 1))));
      succeeded = ((((MR_tag((MR_Word) Var_13)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_13, (MR_Integer) 0))) == (MR_Integer) 20)));
      if (succeeded)
      {
      }
    }
    if (succeeded)
      ShiftedRval_8 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_util_scalar_common_1[8]));
    else
    {
      succeeded = (ShiftInt_9 == (MR_Integer) 0);
      if (!(succeeded))
      {
        MR_Word Const_12;
        MR_Word Var_16;

        succeeded = ((((MR_tag((MR_Word) Rval_5)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 0))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Const_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 1))));
          Var_16 = ml_backend__ml_unify_gen_util__ml_is_zero_const_1_f_0(Const_12);
          succeeded = (Var_16 == (MR_Integer) 1);
        }
      }
      if (succeeded)
        ShiftedRval_8 = CastRval_10;
      else
      {
        MR_Word Var_19;
        MR_Word Var_20;

        {
          Var_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_20, 0) = ((MR_Box) (ShiftInt_9));
        }
        {
          Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), Var_19, 1) = ((MR_Box) (Var_20));
        }
        {
          ShiftedRval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ShiftedRval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(3), ShiftedRval_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_util_scalar_common_1[9])));
          MR_hl_field(MR_mktag(3), ShiftedRval_8, 2) = ((MR_Box) (CastRval_10));
          MR_hl_field(MR_mktag(3), ShiftedRval_8, 3) = ((MR_Box) (Var_19));
        }
      }
    }
    return ShiftedRval_8;
  }
}

MR_Word MR_CALL 
ml_backend__ml_unify_gen_util__ml_is_zero_const_1_f_0(
  MR_Word Const_3)
{
  {
    MR_bool succeeded;
    MR_Word IsZero_4;

    switch (MR_tag((MR_Word) Const_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        IsZero_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        IsZero_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Int_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Const_3, (MR_Integer) 0))));

          succeeded = (Int_5 == (MR_Integer) 0);
          if (succeeded)
            IsZero_4 = (MR_Integer) 1;
          else
            IsZero_4 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Const_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Unsigned Uint_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Const_3, (MR_Integer) 1))));

              succeeded = (Uint_6 == (MR_Unsigned) 0U);
              if (succeeded)
                IsZero_4 = (MR_Integer) 1;
              else
                IsZero_4 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 1:
            {
              int8_t Int8_7 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_3, (MR_Integer) 1)));

              succeeded = (Int8_7 == INT8_C(0));
              if (succeeded)
                IsZero_4 = (MR_Integer) 1;
              else
                IsZero_4 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 2:
            {
              uint8_t Uint8_8 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_3, (MR_Integer) 1)));

              succeeded = (Uint8_8 == UINT8_C(0));
              if (succeeded)
                IsZero_4 = (MR_Integer) 1;
              else
                IsZero_4 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 3:
            {
              int16_t Int16_9 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_3, (MR_Integer) 1)));

              succeeded = (Int16_9 == INT16_C(0));
              if (succeeded)
                IsZero_4 = (MR_Integer) 1;
              else
                IsZero_4 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 4:
            {
              uint16_t Uint16_10 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_3, (MR_Integer) 1)));

              succeeded = (Uint16_10 == UINT16_C(0));
              if (succeeded)
                IsZero_4 = (MR_Integer) 1;
              else
                IsZero_4 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 5:
            {
              int32_t Int32_11 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_3, (MR_Integer) 1)));

              succeeded = (Int32_11 == INT32_C(0));
              if (succeeded)
                IsZero_4 = (MR_Integer) 1;
              else
                IsZero_4 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 6:
            {
              uint32_t Uint32_12 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_3, (MR_Integer) 1)));

              succeeded = (Uint32_12 == UINT32_C(0));
              if (succeeded)
                IsZero_4 = (MR_Integer) 1;
              else
                IsZero_4 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 7:
            {
              int64_t Int64_13 = MR_unbox_int64((MR_hl_field(MR_mktag(3), Const_3, (MR_Integer) 1)));

              succeeded = (Int64_13 == INT64_C(0));
              if (succeeded)
                IsZero_4 = (MR_Integer) 1;
              else
                IsZero_4 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 8:
            {
              uint64_t Uint64_14 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), Const_3, (MR_Integer) 1)));

              succeeded = (Uint64_14 == UINT64_C(0));
              if (succeeded)
                IsZero_4 = (MR_Integer) 1;
              else
                IsZero_4 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
          case (MR_Integer) 13:
          case (MR_Integer) 14:
          case (MR_Integer) 15:
          case (MR_Integer) 16:
          case (MR_Integer) 17:
          case (MR_Integer) 18:
          case (MR_Integer) 19:
          case (MR_Integer) 20:
            IsZero_4 = (MR_Integer) 0;
            break;
        }
        break;
    }
    return IsZero_4;
  }
}

MR_Word MR_CALL 
ml_backend__ml_unify_gen_util__ml_bitwise_mask_2_f_0(
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
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_util_scalar_common_1[6])));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 2) = ((MR_Box) (Rval_4));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 3) = ((MR_Box) (Var_8));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
ml_backend__ml_unify_gen_util__ml_bitwise_or_rvals_1_f_0(
  MR_Word Rvals_3)
{
  {
    MR_Word OrAllRval_4;

    if ((Rvals_3 == (MR_Word) ((MR_Unsigned) 0U)))
      OrAllRval_4 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_util_scalar_common_1[4]));
    else
    {
      MR_Word HeadRval_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Rvals_3, (MR_Integer) 0))));
      MR_Word TailRvals_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Rvals_3, (MR_Integer) 1))));

      OrAllRval_4 = ml_backend__ml_unify_gen_util__ml_bitwise_or_some_rvals_2_f_0(HeadRval_5, TailRvals_6);
    }
    return OrAllRval_4;
  }
}

MR_Word MR_CALL 
ml_backend__ml_unify_gen_util__ml_bitwise_or_some_rvals_2_f_0(
  MR_Word HeadRval_4,
  MR_Word TailRvals_5)
{
  {
    MR_Word OrAllRval_6;

    if ((TailRvals_5 == (MR_Word) ((MR_Unsigned) 0U)))
      OrAllRval_6 = HeadRval_4;
    else
    {
      MR_Word HeadTailRval_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailRvals_5, (MR_Integer) 0))));
      MR_Word TailTailRvals_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailRvals_5, (MR_Integer) 1))));
      MR_Word TailOrAllRval_9;

      TailOrAllRval_9 = ml_backend__ml_unify_gen_util__ml_bitwise_or_some_rvals_2_f_0(HeadTailRval_7, TailTailRvals_8);
      OrAllRval_6 = ml_backend__ml_unify_gen_util__ml_bitwise_or_two_rvals_2_f_0(HeadRval_4, TailOrAllRval_9);
    }
    return OrAllRval_6;
  }
}

MR_Word MR_CALL 
ml_backend__ml_unify_gen_util__ml_bitwise_or_two_rvals_2_f_0(
  MR_Word RvalA_4,
  MR_Word RvalB_5)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) RvalA_4)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalA_4, (MR_Integer) 0))) == (MR_Integer) 2)));
    MR_Word OrRval_6;
    MR_Word UnboxRvalA_10;
    MR_Word STATE_VARIABLE_MaybeType_17_17;
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
      STATE_VARIABLE_MaybeType_17_17 = (MR_Word) ((MR_Unsigned) 0U);
    }
    succeeded = ((((MR_tag((MR_Word) RvalB_5)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalB_5, (MR_Integer) 0))) == (MR_Integer) 2)));
    if (succeeded)
    {
      TypeB_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RvalB_5, (MR_Integer) 1))));
      UnboxRvalB0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RvalB_5, (MR_Integer) 2))));
      {
        MR_Word UnboxRval_14;
        MR_Word Var_29;

        succeeded = ((((MR_tag((MR_Word) RvalA_4)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalA_4, (MR_Integer) 0))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RvalA_4, (MR_Integer) 1))));
          if (((MR_tag((MR_Word) Var_29)) == (MR_Integer) 2))
          {
            MR_Integer Var_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_29, (MR_Integer) 0))));

            succeeded = (Var_22 == (MR_Integer) 0);
          }
          else
          if (((((MR_tag((MR_Word) Var_29)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_29, (MR_Integer) 0))) == (MR_Integer) 0))))
          {
            MR_Unsigned Var_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_29, (MR_Integer) 1))));

            succeeded = (Var_20 == (MR_Unsigned) 0U);
          }
          else
            succeeded = MR_FALSE;
        }
        if (succeeded)
          UnboxRval_14 = UnboxRvalB0_12;
        else
        {
          {
            UnboxRval_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), UnboxRval_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), UnboxRval_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_util_scalar_common_1[5])));
            MR_hl_field(MR_mktag(3), UnboxRval_14, 2) = ((MR_Box) (UnboxRvalA_10));
            MR_hl_field(MR_mktag(3), UnboxRval_14, 3) = ((MR_Box) (UnboxRvalB0_12));
          }
        }
        {
          OrRval_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), OrRval_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), OrRval_6, 1) = ((MR_Box) (TypeB_11));
          MR_hl_field(MR_mktag(3), OrRval_6, 2) = ((MR_Box) (UnboxRval_14));
        }
      }
    }
    else
    {
      MR_Word UnboxRval_63;
      MR_Word Var_37;

      succeeded = ((((MR_tag((MR_Word) RvalA_4)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalA_4, (MR_Integer) 0))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RvalA_4, (MR_Integer) 1))));
        if (((MR_tag((MR_Word) Var_37)) == (MR_Integer) 2))
        {
          MR_Integer Var_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_37, (MR_Integer) 0))));

          succeeded = (Var_31 == (MR_Integer) 0);
        }
        else
        if (((((MR_tag((MR_Word) Var_37)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_37, (MR_Integer) 0))) == (MR_Integer) 0))))
        {
          MR_Unsigned Var_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_37, (MR_Integer) 1))));

          succeeded = (Var_32 == (MR_Unsigned) 0U);
        }
        else
          succeeded = MR_FALSE;
      }
      if (succeeded)
        UnboxRval_63 = RvalB_5;
      else
      {
        MR_Word Var_44;

        succeeded = ((((MR_tag((MR_Word) RvalB_5)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalB_5, (MR_Integer) 0))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RvalB_5, (MR_Integer) 1))));
          if (((MR_tag((MR_Word) Var_44)) == (MR_Integer) 2))
          {
            MR_Integer Var_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_44, (MR_Integer) 0))));

            succeeded = (Var_38 == (MR_Integer) 0);
          }
          else
          if (((((MR_tag((MR_Word) Var_44)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_44, (MR_Integer) 0))) == (MR_Integer) 0))))
          {
            MR_Unsigned Var_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_44, (MR_Integer) 1))));

            succeeded = (Var_39 == (MR_Unsigned) 0U);
          }
          else
            succeeded = MR_FALSE;
        }
        if (succeeded)
          UnboxRval_63 = UnboxRvalA_10;
        else
        {
          {
            UnboxRval_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), UnboxRval_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), UnboxRval_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_util_scalar_common_1[5])));
            MR_hl_field(MR_mktag(3), UnboxRval_63, 2) = ((MR_Box) (UnboxRvalA_10));
            MR_hl_field(MR_mktag(3), UnboxRval_63, 3) = ((MR_Box) (RvalB_5));
          }
        }
      }
      if ((STATE_VARIABLE_MaybeType_17_17 == (MR_Word) ((MR_Unsigned) 0U)))
        OrRval_6 = UnboxRval_63;
      else
      {
        MR_Word BoxType_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeType_17_17, (MR_Integer) 0))));

        {
          OrRval_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), OrRval_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), OrRval_6, 1) = ((MR_Box) (BoxType_60));
          MR_hl_field(MR_mktag(3), OrRval_6, 2) = ((MR_Box) (UnboxRval_63));
        }
      }
    }
    return OrRval_6;
  }
}

void MR_CALL 
ml_backend__ml_unify_gen_util__ml_gen_secondary_tag_rval_5_p_0(
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
            MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (&ml_backend__ml_unify_gen_util_scalar_common_5[1]));
            MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) ((MR_Unsigned) 24U));
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
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Unsigned) 8U));
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
                  mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_unify_gen_util.ml_gen_hl_tag_field_id\'/3", (MR_String) "non-du type");
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

                if ((MaybeRepn_43 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_unify_gen_util.ml_gen_hl_tag_field_id\'/3", (MR_String) "MaybeRepn = no");
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
                  mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_unify_gen_util.ml_gen_hl_tag_field_id\'/3", (MR_String) "non-du type");
                  return;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_unify_gen_util.ml_gen_hl_tag_field_id\'/3", (MR_String) "non-du type");
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
            MR_hl_field(MR_mktag(0), QualifiedFieldName_61, 2) = ((MR_Box) ((MR_Unsigned) 4U));
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
            MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) ((MR_Unsigned) 8U));
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

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_util__decide_field_gen_6_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_util__IntroducedFrom__pred__decide_field_gen__527__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_unify_gen_util__decide_field_gen_6_p_0(
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
        FieldVia_17 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_18;

          succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(VarType_9, &Var_18);
          if (succeeded)
            FieldVia_17 = (MR_Word) ((MR_Unsigned) 0U);
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
                  MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_util_scalar_common_3[1]));
                  MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (ml_backend__ml_unify_gen_util__decide_field_gen_6_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (TypeCtor_21));
                  MR_hl_field(MR_mktag(0), Var_36, 4) = ((MR_Box) (VarTypeCtor_24));
                }
                mercury__require__expect_3_p_0(Var_36, (MR_String) "predicate \140ml_backend.ml_unify_gen_util.decide_field_gen\'/6", (MR_String) "TypeCtor != VarTypeCtor");
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
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_util.decide_field_gen\'/6", (MR_String) "unexpected cons_id");
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

void MR_CALL 
ml_backend__ml_unify_gen_util__ml_tag_ptag_and_initial_offset_3_p_0(
  MR_Word ConsTag_4,
  MR_Word * Ptag_5,
  MR_Word * InitOffset_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) ConsTag_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_util.ml_tag_ptag_and_initial_offset\'/3", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              *Ptag_5 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0))));
              *InitOffset_6 = (MR_Word) (((MR_Box) ((MR_Integer) 0)));
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_util.ml_tag_ptag_and_initial_offset\'/3", (MR_String) "unexpected tag");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 13:
          case (MR_Integer) 15:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_util.ml_tag_ptag_and_initial_offset\'/3", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubTag_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_4, (MR_Integer) 2))));
              MR_Word next_value_of_ConsTag_4 = SubTag_11;

              // direct tailcall eliminated
              ;
              ConsTag_4 = next_value_of_ConsTag_4;
              continue;
            }
            break;
          case (MR_Integer) 11:
            {
              *Ptag_5 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_4, (MR_Integer) 1))));
              *InitOffset_6 = (MR_Word) (((MR_Box) ((MR_Integer) 0)));
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word RemoteSectag_7;
              MR_Word AddedBy_9;

              *Ptag_5 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_4, (MR_Integer) 1))));
              RemoteSectag_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_4, (MR_Integer) 2))));
              AddedBy_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RemoteSectag_7, (MR_Integer) 1))));
              switch (AddedBy_9) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *InitOffset_6 = (MR_Word) (((MR_Box) ((MR_Integer) 0)));
                  break;
                case (MR_Integer) 0:
                  *InitOffset_6 = (MR_Word) (((MR_Box) ((MR_Integer) 1)));
                  break;
              }
            }
            break;
          case (MR_Integer) 14:
            {
              *Ptag_5 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_4, (MR_Integer) 1))));
              *InitOffset_6 = (MR_Word) (((MR_Box) ((MR_Integer) 0)));
            }
            break;
        }
        break;
    }
    break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_util__associate_cons_id_args_with_types_widths_7_p_1_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_util__IntroducedFrom__pred__associate_cons_id_args_with_types_widths__366__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_unify_gen_util__associate_cons_id_args_with_types_widths_7_p_1(
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
          ml_backend__ml_unify_gen_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_114_103_115_95_116_121_112_101_115_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(Args_13, ConsArgRepns_19, ArgsTypesWidths_14);
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
            MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_util_scalar_common_3[0]));
            MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (ml_backend__ml_unify_gen_util__associate_cons_id_args_with_types_widths_7_p_1_1));
            MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (MayHaveExtraArgs_10));
            MR_hl_field(MR_mktag(0), Var_33, 4) = ((MR_Box) ((MR_Integer) 1));
          }
          mercury__require__expect_3_p_0(Var_33, (MR_String) "predicate \140ml_backend.ml_unify_gen_util.associate_cons_id_args_with_types_widths\'/7", (MR_String) "extra args in static struct");
          mercury__list__det_split_list_4_p_0(TypeInfo_for_Arg_56, NumExtraArgs_20, Args_13, &ExtraArgs_21, &NonExtraArgs_22);
          Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 3))));
          succeeded = ((((MR_tag((MR_Word) Var_37)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_37, (MR_Integer) 0))) == (MR_Integer) 12)));
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
          ml_backend__ml_unify_gen_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_116_121_112_101_95_97_110_100_95_97_108_108_111_99_97_116_101_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_4_p_0(ArgToType_9, InitOffset_27, ExtraArgs_21, &ExtraArgsTypesWidths_28);
          ml_backend__ml_unify_gen_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_114_103_115_95_116_121_112_101_115_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(NonExtraArgs_22, ConsArgRepns_19, &NonExtraArgsTypesWidths_29);
          {
            TypeInfo_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_60_60, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_arg_type_and_width_1));
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
          ml_backend__ml_unify_gen_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_101_99_105_102_105_101_100_95_97_114_103_95_116_121_112_101_115_95_97_110_100_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_4_p_0(Var_38, (MR_Integer) 0, Args_13, ArgsTypesWidths_14);
        }
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_util.associate_cons_id_args_with_types_widths\'/7", (MR_String) "get_cons_defn failed");
            return;
          }
        }
      }
    }
    else
    {
      ml_backend__ml_unify_gen_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_116_121_112_101_95_97_110_100_95_97_108_108_111_99_97_116_101_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_4_p_0(ArgToType_9, (MR_Integer) 0, Args_13, ArgsTypesWidths_14);
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_util__associate_maybe_cons_id_args_with_types_widths_5_p_0_1(
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

void MR_CALL 
ml_backend__ml_unify_gen_util__associate_maybe_cons_id_args_with_types_widths_5_p_0(
  MR_Word Info_6,
  MR_Word VarType_7,
  MR_Word ConsIdOrClosure_8,
  MR_Word ArgVars_9,
  MR_Word * ArgVarsTypesWidths_10)
{
  if (((MR_tag((MR_Word) ConsIdOrClosure_8)) == (MR_Integer) 1))
  {
    MR_Integer InitOffset_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ConsIdOrClosure_8, (MR_Integer) 0))));
    MR_Word Var_15;

    Var_15 = ml_backend__ml_code_util__ml_make_boxed_type_0_f_0();
    ml_backend__ml_unify_gen_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_101_99_105_102_105_101_100_95_97_114_103_95_116_121_112_101_115_95_97_110_100_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_4_p_0(Var_15, InitOffset_14, ArgVars_9, ArgVarsTypesWidths_10);
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
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_util_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (ml_backend__ml_unify_gen_util__associate_maybe_cons_id_args_with_types_widths_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (VarTypes_13));
    }
    ml_backend__ml_unify_gen_util__associate_cons_id_args_with_types_widths_7_p_0((MR_Word) (&ml_backend__ml_unify_gen_util_scalar_common_1[0]), ModuleInfo_12, Var_16, (MR_Integer) 1, VarType_7, ConsId_11, ArgVars_9, ArgVarsTypesWidths_10);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_util__associate_cons_id_args_with_types_widths_7_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_util__IntroducedFrom__pred__associate_cons_id_args_with_types_widths__366__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_unify_gen_util__associate_cons_id_args_with_types_widths_7_p_0(
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
          ml_backend__ml_unify_gen_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_114_103_115_95_116_121_112_101_115_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(Args_13, ConsArgRepns_19, ArgsTypesWidths_14);
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
            MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_util_scalar_common_3[0]));
            MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (ml_backend__ml_unify_gen_util__associate_cons_id_args_with_types_widths_7_p_0_1));
            MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (MayHaveExtraArgs_10));
            MR_hl_field(MR_mktag(0), Var_33, 4) = ((MR_Box) ((MR_Integer) 1));
          }
          mercury__require__expect_3_p_0(Var_33, (MR_String) "predicate \140ml_backend.ml_unify_gen_util.associate_cons_id_args_with_types_widths\'/7", (MR_String) "extra args in static struct");
          mercury__list__det_split_list_4_p_0(TypeInfo_for_Arg_56, NumExtraArgs_20, Args_13, &ExtraArgs_21, &NonExtraArgs_22);
          Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_18, (MR_Integer) 3))));
          succeeded = ((((MR_tag((MR_Word) Var_37)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_37, (MR_Integer) 0))) == (MR_Integer) 12)));
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
          ml_backend__ml_unify_gen_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_116_121_112_101_95_97_110_100_95_97_108_108_111_99_97_116_101_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_4_p_0(ArgToType_9, InitOffset_27, ExtraArgs_21, &ExtraArgsTypesWidths_28);
          ml_backend__ml_unify_gen_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_114_103_115_95_116_121_112_101_115_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(NonExtraArgs_22, ConsArgRepns_19, &NonExtraArgsTypesWidths_29);
          {
            TypeInfo_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_60_60, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_arg_type_and_width_1));
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
          ml_backend__ml_unify_gen_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_101_99_105_102_105_101_100_95_97_114_103_95_116_121_112_101_115_95_97_110_100_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_4_p_0(Var_38, (MR_Integer) 0, Args_13, ArgsTypesWidths_14);
        }
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_util.associate_cons_id_args_with_types_widths\'/7", (MR_String) "get_cons_defn failed");
            return;
          }
        }
      }
    }
    else
    {
      ml_backend__ml_unify_gen_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_116_121_112_101_95_97_110_100_95_97_108_108_111_99_97_116_101_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_4_p_0(ArgToType_9, (MR_Integer) 0, Args_13, ArgsTypesWidths_14);
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_101_99_105_102_105_101_100_95_97_114_103_95_116_121_112_101_115_95_97_110_100_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word Type_1,
  MR_Integer CurOffset_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
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
    ml_backend__ml_unify_gen_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_101_99_105_102_105_101_100_95_97_114_103_95_116_121_112_101_115_95_97_110_100_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_4_p_0(Type_1, Var_16, Args_10, &ArgsTypesWidths_12);
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
ml_backend__ml_unify_gen_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_116_121_112_101_95_97_110_100_95_97_108_108_111_99_97_116_101_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word ArgToType_1,
  MR_Integer CurOffset_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
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
    ml_backend__ml_unify_gen_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_116_121_112_101_95_97_110_100_95_97_108_108_111_99_97_116_101_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_4_p_0(ArgToType_1, Var_17, Args_10, &ArgsTypesWidths_12);
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
ml_backend__ml_unify_gen_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_114_103_115_95_116_121_112_101_115_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_util.zip_args_types_widths\'/3", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Box Var_30 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_util.zip_args_types_widths\'/3", (MR_String) "length mismatch");
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
      ml_backend__ml_unify_gen_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_97_114_103_115_95_116_121_112_101_115_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(Var_29, ConsArgRepns_17, &ArgsTypesWidth_19);
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

void MR_CALL 
ml_backend__ml_unify_gen_util__ml_field_names_and_types_6_p_0(
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
      ml_backend__ml_unify_gen_util__allocate_consecutive_full_word_ctor_arg_repns_boxed_3_p_0(InitOffsetInt_13, ArgVars_11, ArgVarRepns_12);
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
      mercury__list__length_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_util_scalar_common_1[0]), ArgVars_11, &NumArgVars_18);
      mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), CtorArgRepns_17, &NumCtorArgs_19);
      NumExtraArgVars_20 = (MR_Integer) ((MR_Unsigned) NumArgVars_18 - (MR_Unsigned) NumCtorArgs_19);
      succeeded = (NumExtraArgVars_20 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word ExtraArgVars_21;
        MR_Word NonExtraArgVars_22;
        MR_Word ExtraArgVarRepns_23;
        MR_Word NonExtraArgVarRepns_24;

        mercury__list__split_upto_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_util_scalar_common_1[0]), NumExtraArgVars_20, ArgVars_11, &ExtraArgVars_21, &NonExtraArgVars_22);
        ml_backend__ml_unify_gen_util__allocate_consecutive_full_word_ctor_arg_repns_lookup_4_p_0(Info_7, InitOffsetInt_13, ExtraArgVars_21, &ExtraArgVarRepns_23);
        mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_util_scalar_common_1[0]), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), NonExtraArgVars_22, CtorArgRepns_17, &NonExtraArgVarRepns_24);
        *ArgVarRepns_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_unify_gen_util_scalar_common_2[0]), ExtraArgVarRepns_23, NonExtraArgVarRepns_24);
      }
      else
        mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_util_scalar_common_1[0]), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), ArgVars_11, CtorArgRepns_17, ArgVarRepns_12);
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_util__allocate_consecutive_full_word_ctor_arg_repns_lookup_4_p_0(
  MR_Word Info_1,
  MR_Integer CurOffset_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
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
      MR_hl_field(MR_mktag(0), ArgRepn_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
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
    ml_backend__ml_unify_gen_util__allocate_consecutive_full_word_ctor_arg_repns_lookup_4_p_0(Info_1, Var_20, Vars_10, &VarArgRepns_12);
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
ml_backend__ml_unify_gen_util__allocate_consecutive_full_word_ctor_arg_repns_boxed_3_p_0(
  MR_Integer CurOffset_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
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
      MR_hl_field(MR_mktag(0), ArgRepn_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
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
    ml_backend__ml_unify_gen_util__allocate_consecutive_full_word_ctor_arg_repns_boxed_3_p_0(Var_17, Vars_7, &VarArgRepns_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (VarArgRepn_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (VarArgRepns_9));
    }
  }
}

void MR_CALL 
ml_backend__ml_unify_gen_util__ml_type_as_field_5_p_0(
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
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
      *BoxedFieldType_10 = FieldType_8;
  }
}

void MR_CALL 
ml_backend__ml_unify_gen_util__ml_cons_id_to_tag_3_p_0(
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
ml_backend__ml_unify_gen_util____Unify____arg_const_type_and_width_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unify_gen_util____Unify____arg_const_type_and_width_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_util____Compare____arg_const_type_and_width_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_unify_gen_util____Compare____arg_const_type_and_width_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_util____Unify____arg_to_type_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unify_gen_util____Unify____arg_to_type_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_util____Compare____arg_to_type_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_unify_gen_util____Compare____arg_to_type_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_util____Unify____arg_type_and_width_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unify_gen_util____Unify____arg_type_and_width_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_util____Compare____arg_type_and_width_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_unify_gen_util____Compare____arg_type_and_width_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_util____Unify____arg_var_type_and_width_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unify_gen_util____Unify____arg_var_type_and_width_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_util____Compare____arg_var_type_and_width_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_unify_gen_util____Compare____arg_var_type_and_width_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_util____Unify____assign_dir_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unify_gen_util____Unify____assign_dir_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_util____Compare____assign_dir_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_unify_gen_util____Compare____assign_dir_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_util____Unify____cons_id_or_closure_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unify_gen_util____Unify____cons_id_or_closure_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_util____Compare____cons_id_or_closure_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_unify_gen_util____Compare____cons_id_or_closure_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_util____Unify____field_gen_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unify_gen_util____Unify____field_gen_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_util____Compare____field_gen_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_unify_gen_util____Compare____field_gen_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_util____Unify____field_via_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unify_gen_util____Unify____field_via_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_util____Compare____field_via_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_unify_gen_util____Compare____field_via_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_util____Unify____may_have_extra_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unify_gen_util____Unify____may_have_extra_args_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_util____Compare____may_have_extra_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_unify_gen_util____Compare____may_have_extra_args_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_util____Unify____ml_maybe_zero_const_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unify_gen_util____Unify____ml_maybe_zero_const_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_util____Compare____ml_maybe_zero_const_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_unify_gen_util____Compare____ml_maybe_zero_const_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ml_backend__ml_unify_gen_util__init(void)
{
}

void mercury__ml_backend__ml_unify_gen_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_arg_const_type_and_width_0);
	MR_register_type_ctor_info(&ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_arg_to_type_1);
	MR_register_type_ctor_info(&ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_arg_type_and_width_1);
	MR_register_type_ctor_info(&ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_arg_var_type_and_width_0);
	MR_register_type_ctor_info(&ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_assign_dir_0);
	MR_register_type_ctor_info(&ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_cons_id_or_closure_0);
	MR_register_type_ctor_info(&ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_field_gen_0);
	MR_register_type_ctor_info(&ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_field_via_0);
	MR_register_type_ctor_info(&ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_may_have_extra_args_0);
	MR_register_type_ctor_info(&ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_ml_maybe_zero_const_0);
}

void mercury__ml_backend__ml_unify_gen_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_unify_gen_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.ml_unify_gen_util.
