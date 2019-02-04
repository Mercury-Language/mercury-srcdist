/*
** Automatically generated from `state_var.m'
** by the Mercury compiler,
** version rotd-2017-06-22
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


/* :- module hlds.make_hlds.state_var. */
/* :- implementation. */

/*
INIT mercury__hlds__make_hlds__state_var__init
ENDINIT
*/

#include "hlds.make_hlds.state_var.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.make_hlds.mih"
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
#include "parse_tree.equiv_type.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.goal_expr_to_goal.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__state_var__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__state_var__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__make_hlds__state_var__type_ctor_info_svar_status_0;

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_hlds_goal_svar_state_0_0[2];

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_hlds_goal_svar_state_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_hlds_goal_svar_state_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_hlds_goal_svar_state_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_hlds_goal_svar_state_0[1];

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_hlds_goal_svar_state_0[1];

static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_readonly_context_kind_0_0;

static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_value_ordered_readonly_context_kind_0[1];

static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_name_ordered_readonly_context_kind_0[1];

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_readonly_context_kind_0[1];

static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_1;

static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_2;

static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_value_ordered_state_var_name_source_0[3];

static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_name_ordered_state_var_name_source_0[3];

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_state_var_name_source_0[3];

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_inner_atomic_scope_info_0_0[3];

static const MR_ConstString hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_inner_atomic_scope_info_0_0[3];

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_inner_atomic_scope_info_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_inner_atomic_scope_info_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_inner_atomic_scope_info_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_inner_atomic_scope_info_0[1];

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_inner_atomic_scope_info_0[1];

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_outer_atomic_scope_info_0_0[3];

static const MR_ConstString hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_outer_atomic_scope_info_0_0[3];

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_0;

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_1;

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_outer_atomic_scope_info_0_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_outer_atomic_scope_info_0_1[1];

static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_outer_atomic_scope_info_0[2];

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_outer_atomic_scope_info_0[2];

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_outer_atomic_scope_info_0[2];

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_state_0[1];

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__state_var__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__make_hlds__state_var__type_ctor_info_svar_status_0;

static const MR_NotagFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__notag_functor_desc_svar_state_0;

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_0;

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_1[1];

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_1;

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_2[3];

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_2;

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_3[1];

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_3;

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_4[2];

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_4;

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_1[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_2[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_3[2];

static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_status_0[4];

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_status_0[5];

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_status_0[5];

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__state_var__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__state_var__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_store_0_0[3];

static const MR_ConstString hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_store_0_0[3];

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_store_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_store_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_store_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_store_0[1];

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_store_0[1];

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____hlds_goal_svar_state_0_0_10001(
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____hlds_goal_svar_state_0_0_10001(
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____readonly_context_kind_0_0_10001(
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____readonly_context_kind_0_0_10001(
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____state_var_name_source_0_0_10001(
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____state_var_name_source_0_0_10001(
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_0_0_10001(
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_0_0_10001(
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_inner_atomic_scope_info_0_0_10001(
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_inner_atomic_scope_info_0_0_10001(
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_outer_atomic_scope_info_0_0_10001(
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_outer_atomic_scope_info_0_0_10001(
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_state_0_0_10001(
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_state_0_0_10001(
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_status_0_0_10001(
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_status_0_0_10001(
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_store_0_0_10001(
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_store_0_0_10001(
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_114_101_97_100_111_110_108_121_95_99_111_110_116_101_120_116_95_107_105_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_114_101_97_100_111_110_108_121_95_99_111_110_116_101_120_116_95_107_105_110_100_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__handle_state_vars_in_ite__1289__1_2_p_0(
  MR_Word hlds__make_hlds__state_var__StatusBefore_76,
  MR_Word hlds__make_hlds__state_var__StatusAfterThen_78);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__handle_arm_updated_state_vars__1071__1_2_p_0(
  MR_Word hlds__make_hlds__state_var__AfterAllArmsStatus_23,
  MR_Word hlds__make_hlds__state_var__AfterArmStatus_25);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__get_disjuncts_with_empty_states__962__1_1_p_0(
  MR_Word hlds__make_hlds__state_var__StatusMapAfterGoal_12);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1206__1_2_p_0(
  MR_Word hlds__make_hlds__state_var__SVarsBefore_38,
  MR_Word hlds__make_hlds__state_var__SVarsAfterElse_41);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1204__1_2_p_0(
  MR_Word hlds__make_hlds__state_var__SVarsBefore_38,
  MR_Word hlds__make_hlds__state_var__SVarsAfterThen_40);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1202__1_2_p_0(
  MR_Word hlds__make_hlds__state_var__SVarsBefore_38,
  MR_Word hlds__make_hlds__state_var__SVarsAfterCond_39);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_status_0_0(
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_status_0_0(
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____state_var_name_source_0_0(
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____state_var_name_source_0_0(
  MR_Word hlds__make_hlds__state_var__HeadVar__2_1,
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____readonly_context_kind_0_0(
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____readonly_context_kind_0_0(void);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__severity_is_error_1_p_0(
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1);

static void MR_CALL 
hlds__make_hlds__state_var__report_missing_inits_in_disjunct_4_p_0(
  MR_Word hlds__make_hlds__state_var__Context_5,
  MR_Word hlds__make_hlds__state_var__NextStateVars_6,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_11,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_12);

static void MR_CALL 
hlds__make_hlds__state_var__report_missing_inits_in_ite_6_p_0(
  MR_Word hlds__make_hlds__state_var__Context_7,
  MR_Word hlds__make_hlds__state_var__NextStateVars_8,
  MR_String hlds__make_hlds__state_var__WhenMissing_9,
  MR_String hlds__make_hlds__state_var__WhenNotMissing_10,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_15,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_16);

static void MR_CALL 
hlds__make_hlds__state_var__report_repeated_head_state_var_5_p_0(
  MR_Word hlds__make_hlds__state_var__Context_6,
  MR_Word hlds__make_hlds__state_var__VarSet_7,
  MR_Word hlds__make_hlds__state_var__StateVar_8,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_14,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_15);

static void MR_CALL 
hlds__make_hlds__state_var__report_uninitialized_state_var_5_p_0(
  MR_Word hlds__make_hlds__state_var__Context_6,
  MR_Word hlds__make_hlds__state_var__VarSet_7,
  MR_Word hlds__make_hlds__state_var__StateVar_8,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_14,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_15);

static void MR_CALL 
hlds__make_hlds__state_var__report_non_visible_state_var_6_p_0(
  MR_String hlds__make_hlds__state_var__DorC_7,
  MR_Word hlds__make_hlds__state_var__Context_8,
  MR_Word hlds__make_hlds__state_var__VarSet_9,
  MR_Word hlds__make_hlds__state_var__StateVar_10,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_16,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_17);

static void MR_CALL 
hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_p_0(
  MR_Word hlds__make_hlds__state_var__DelayedRenamingToAdd_8,
  MR_Word hlds__make_hlds__state_var__Goal0_9,
  MR_Word * hlds__make_hlds__state_var__Goal_10,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_21,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_22,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_0_23,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_24);

static void MR_CALL 
hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_p_0_1(
  MR_Box hlds__make_hlds__state_var__closure_arg,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_2,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3,
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_4,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_5,
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_6);

static void MR_CALL 
hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_p_0(
  MR_Word hlds__make_hlds__state_var__Goal_7,
  MR_Word * hlds__make_hlds__state_var__Conjuncts_8,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_16,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_17,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_0_18,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_19);

static MR_Word MR_CALL 
hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(
  MR_Word hlds__make_hlds__state_var__LocKind_4,
  MR_Word hlds__make_hlds__state_var__Status_5);

static void MR_CALL 
hlds__make_hlds__state_var__handle_state_var_in_ite_23_p_0(
  MR_Word hlds__make_hlds__state_var__LocKind_24,
  MR_Word hlds__make_hlds__state_var__SVar_25,
  MR_Word hlds__make_hlds__state_var__StatusBefore_26,
  MR_Word hlds__make_hlds__state_var__StatusAfterCond_27,
  MR_Word hlds__make_hlds__state_var__StatusAfterThen_28,
  MR_Word hlds__make_hlds__state_var__StatusAfterElse_29,
  MR_Word * hlds__make_hlds__state_var__StatusAfterITE_30,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_73,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_74,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_75,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_76,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_77,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_78,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_0_81,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_82,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_83,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_84,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_85,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_86,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__handle_state_vars_in_ite_25_p_0_1(
  MR_Box hlds__make_hlds__state_var__closure_arg);

static void MR_CALL 
hlds__make_hlds__state_var__handle_state_vars_in_ite_25_p_0(
  MR_Word hlds__make_hlds__state_var__LocKind_1,
  MR_Word hlds__make_hlds__state_var__QuantStateVars_2,
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3,
  MR_Word hlds__make_hlds__state_var__StatusMapBefore_4,
  MR_Word hlds__make_hlds__state_var__StatusMapAfterCond_5,
  MR_Word hlds__make_hlds__state_var__StatusMapAfterThen_6,
  MR_Word hlds__make_hlds__state_var__StatusMapAfterElse_7,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_0_8,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_9,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_10,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_11,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_12,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_13,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_14,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_15,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_16,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_17,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_0_18,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_19,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_20,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_21,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_22,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_23,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_24,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_25);

static void MR_CALL 
hlds__make_hlds__state_var__make_copy_goal_3_p_0(
  MR_Word hlds__make_hlds__state_var__FromVar_4,
  MR_Word hlds__make_hlds__state_var__ToVar_5,
  MR_Word * hlds__make_hlds__state_var__CopyGoal_6);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_p_0_1(
  MR_Box hlds__make_hlds__state_var__closure_arg);

static void MR_CALL 
hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_p_0(
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word hlds__make_hlds__state_var__StatusMapBefore_2,
  MR_Word hlds__make_hlds__state_var__StatusMapAfterArm_3,
  MR_Word hlds__make_hlds__state_var__VarSet_4,
  MR_Word * hlds__make_hlds__state_var__HeadVar__5_5,
  MR_Word * hlds__make_hlds__state_var__HeadVar__6_6,
  MR_Word * hlds__make_hlds__state_var__HeadVar__7_7);

static void MR_CALL 
hlds__make_hlds__state_var__merge_changes_made_by_arms_12_p_0(
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3,
  MR_Word hlds__make_hlds__state_var__HeadVar__4_4,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_0_5,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_6,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_7,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_8,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_0_9,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_10,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_11,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_12);

static void MR_CALL 
hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_p_0(
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word hlds__make_hlds__state_var__StatusMapAfterArm_2,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_4,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0_5,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_6);

static void MR_CALL 
hlds__make_hlds__state_var__compute_status_after_arms_6_p_0(
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_4,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0_5,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_6);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_p_0_1(
  MR_Box hlds__make_hlds__state_var__closure_arg);

static void MR_CALL 
hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_p_0(
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_0_2,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_3);

static void MR_CALL 
hlds__make_hlds__state_var__finish_svars_for_scope_4_p_0(
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word hlds__make_hlds__state_var__StatusMapBeforeOutside_2,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_0_3,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_4);

static void MR_CALL 
hlds__make_hlds__state_var__prepare_svars_for_scope_7_p_0(
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_0_4,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_5,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_6,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_7);

static void MR_CALL 
hlds__make_hlds__state_var__reset_updated_status_2_p_0(
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Status_0_10,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Status_11);

static void MR_CALL 
hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_p_0(
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word hlds__make_hlds__state_var__InitialStatusMap_2,
  MR_Word hlds__make_hlds__state_var__FinalStatusMap_3,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_0_4,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_5,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_0_6,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_7);

static void MR_CALL 
hlds__make_hlds__state_var__svar_finish_body_8_p_0(
  MR_Word hlds__make_hlds__state_var__Context_9,
  MR_Word hlds__make_hlds__state_var__FinalMap_10,
  MR_Word hlds__make_hlds__state_var__Goals0_11,
  MR_Word * hlds__make_hlds__state_var__Goal_12,
  MR_Word hlds__make_hlds__state_var__InitialSVarState_13,
  MR_Word hlds__make_hlds__state_var__FinalSVarState_14,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_40,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Store_41);

static void MR_CALL 
hlds__make_hlds__state_var__make_svars_read_only_4_p_0(
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3,
  MR_Word * hlds__make_hlds__state_var__HeadVar__4_4);

static void MR_CALL 
hlds__make_hlds__state_var__svar_prepare_head_term_10_p_0(
  MR_Word hlds__make_hlds__state_var__Term0_11,
  MR_Word * hlds__make_hlds__state_var__Term_12,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_0_46,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_47,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_0_48,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_49,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_50,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_51,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_52,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_53);

static void MR_CALL 
hlds__make_hlds__state_var__svar_prepare_head_terms_10_p_0(
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word * hlds__make_hlds__state_var__HeadVar__2_2,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_0_3,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_4,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_0_5,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_6,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_7,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_8,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_9,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_10);

static void MR_CALL 
hlds__make_hlds__state_var__expand_bang_state_pairs_in_clause_2_p_0(
  MR_Word hlds__make_hlds__state_var__ItemClause0_3,
  MR_Word * hlds__make_hlds__state_var__ItemClause_4);

static void MR_CALL 
hlds__make_hlds__state_var__expand_bang_state_pairs_in_method_2_p_0_1(
  MR_Box hlds__make_hlds__state_var__closure_arg,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__state_var__expand_bang_state_pairs_in_method_2_p_0(
  MR_Word hlds__make_hlds__state_var__IM0_3,
  MR_Word * hlds__make_hlds__state_var__IM_4);

static void MR_CALL 
hlds__make_hlds__state_var__new_state_var_instance_5_p_0(
  MR_Word hlds__make_hlds__state_var__StateVar_6,
  MR_Word hlds__make_hlds__state_var__NameSource_7,
  MR_Word * hlds__make_hlds__state_var__Var_8,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_13,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_14);

static void MR_CALL 
hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0_1(
  MR_Box hlds__make_hlds__state_var__closure_arg,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_2,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3,
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_4,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_5,
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_6);

static void MR_CALL 
hlds__make_hlds__state_var__svar_flatten_conj_5_p_0_1(
  MR_Box hlds__make_hlds__state_var__closure_arg,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_2,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3,
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_4);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0_3(
  MR_Box hlds__make_hlds__state_var__closure_arg);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0_2(
  MR_Box hlds__make_hlds__state_var__closure_arg);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0_1(
  MR_Box hlds__make_hlds__state_var__closure_arg);

static void MR_CALL 
hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0_1(
  MR_Box hlds__make_hlds__state_var__closure_arg,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_2);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__svar_finish_clause_body_9_p_0_1(
  MR_Box hlds__make_hlds__state_var__closure_arg,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__state_var__expand_bang_state_pairs_in_instance_body_2_p_0_1(
  MR_Box hlds__make_hlds__state_var__closure_arg,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_2);


static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_1[51][2];

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_2[8][3];

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_3[3][4];

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_4[3][1];

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_5[4][5];

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_6[1][7];

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_7[1][10];




static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_1[51][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "readonly."))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[6])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not visible in this context."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[6])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "more than once."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[6])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "shadows old one."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[6])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the if-then-else defines"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "it does not."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[6])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but not this one."))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[6])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[25])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: reference to uninitialized state variable"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: state variable"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: cannot use"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "here due to the surrounding"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ";"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "you may only refer to"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Here is the surrounding context that makes"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "state variable"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "cannot be a function result."))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "You probably meant"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "cannot be a lambda argument."))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Perhaps you meant"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "cannot appear as a unification argument."))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: new state variable"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: clause head introduces"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "When the condition"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but when the condition"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Other disjuncts define"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_2[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_1[0])),
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_1[1]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_1[0])),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_5[0])),
    ((MR_Box) (hlds__make_hlds__state_var__expand_bang_state_pairs_in_instance_body_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_3[1])),
    ((MR_Box) (hlds__make_hlds__state_var__svar_finish_clause_body_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_5[1])),
    ((MR_Box) (hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_6[0])),
    ((MR_Box) (hlds__make_hlds__state_var__svar_flatten_conj_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_5[3])),
    ((MR_Box) (hlds__make_hlds__state_var__expand_bang_state_pairs_in_method_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_3[3][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 52)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__make_hlds__state_var__type_ctor_info_svar_status_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_4[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "!."))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "!:"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "state variable"))
  },
};

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_5[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__state_var__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_store_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_store_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_7[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__make_hlds__state_var__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__state_var__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__state_var__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__make_hlds__state_var__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__make_hlds__state_var__type_ctor_info_svar_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0
  }
};

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_hlds_goal_svar_state_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0
};

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_hlds_goal_svar_state_0_0 = {
  (MR_String) "hlds_goal_svar_state",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_hlds_goal_svar_state_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_hlds_goal_svar_state_0_0[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_hlds_goal_svar_state_0_0
};

static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_hlds_goal_svar_state_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_hlds_goal_svar_state_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_hlds_goal_svar_state_0[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_hlds_goal_svar_state_0_0
};

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_hlds_goal_svar_state_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_hlds_goal_svar_state_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____hlds_goal_svar_state_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____hlds_goal_svar_state_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "hlds_goal_svar_state",
  {     hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_hlds_goal_svar_state_0 },
  {     hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_hlds_goal_svar_state_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_hlds_goal_svar_state_0
};

static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_readonly_context_kind_0_0 = {
  (MR_String) "roc_lambda",
  (MR_Integer) 0
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_value_ordered_readonly_context_kind_0[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_readonly_context_kind_0_0
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_name_ordered_readonly_context_kind_0[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_readonly_context_kind_0_0
};

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_readonly_context_kind_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_readonly_context_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____readonly_context_kind_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____readonly_context_kind_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "readonly_context_kind",
  {     hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_name_ordered_readonly_context_kind_0 },
  {     hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_value_ordered_readonly_context_kind_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_readonly_context_kind_0
};

static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_0 = {
  (MR_String) "name_initial",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_1 = {
  (MR_String) "name_middle",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_2 = {
  (MR_String) "name_final",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_value_ordered_state_var_name_source_0[3] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_0,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_1,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_2
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_name_ordered_state_var_name_source_0[3] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_2,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_0,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_1
};

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_state_var_name_source_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_state_var_name_source_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____state_var_name_source_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____state_var_name_source_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "state_var_name_source",
  {     hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_name_ordered_state_var_name_source_0 },
  {     hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_value_ordered_state_var_name_source_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_state_var_name_source_0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____svar_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____svar_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "svar",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_inner_atomic_scope_info_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0
};

static const MR_ConstString hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_inner_atomic_scope_info_0_0[3] = {
  (MR_String) "siasi_state_var",
  (MR_String) "siasi_di_var",
  (MR_String) "siasi_state_before"
};

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_inner_atomic_scope_info_0_0 = {
  (MR_String) "svar_inner_atomic_scope_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_inner_atomic_scope_info_0_0,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_inner_atomic_scope_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_inner_atomic_scope_info_0_0[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_inner_atomic_scope_info_0_0
};

static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_inner_atomic_scope_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_inner_atomic_scope_info_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_inner_atomic_scope_info_0[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_inner_atomic_scope_info_0_0
};

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_inner_atomic_scope_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_inner_atomic_scope_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____svar_inner_atomic_scope_info_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____svar_inner_atomic_scope_info_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "svar_inner_atomic_scope_info",
  {     hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_inner_atomic_scope_info_0 },
  {     hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_inner_atomic_scope_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_inner_atomic_scope_info_0
};

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_outer_atomic_scope_info_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0
};

static const MR_ConstString hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_outer_atomic_scope_info_0_0[3] = {
  (MR_String) "soasi_state_var",
  (MR_String) "soasi_before_status",
  (MR_String) "soasi_after_status"
};

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_0 = {
  (MR_String) "svar_outer_atomic_scope_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_outer_atomic_scope_info_0_0,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_outer_atomic_scope_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_1 = {
  (MR_String) "no_svar_outer_atomic_scope_info",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_outer_atomic_scope_info_0_0[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_1
};

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_outer_atomic_scope_info_0_1[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_0
};

static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_outer_atomic_scope_info_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_outer_atomic_scope_info_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_outer_atomic_scope_info_0_1
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_outer_atomic_scope_info_0[2] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_1,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_0
};

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_outer_atomic_scope_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_outer_atomic_scope_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____svar_outer_atomic_scope_info_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____svar_outer_atomic_scope_info_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "svar_outer_atomic_scope_info",
  {     hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_outer_atomic_scope_info_0 },
  {     hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_outer_atomic_scope_info_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_outer_atomic_scope_info_0
};

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_state_0[1] = {
  (MR_Integer) 0
};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__state_var__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__make_hlds__state_var__type_ctor_info_svar_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0
  }
};

static const MR_NotagFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__notag_functor_desc_svar_state_0 = {
  (MR_String) "svar_state",
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__make_hlds__state_var__type_ctor_info_svar_status_0,
  (MR_String) "state_status_map",
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____svar_state_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____svar_state_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "svar_state",
  {     &hlds__make_hlds__state_var__hlds__make_hlds__state_var__notag_functor_desc_svar_state_0 },
  {     &hlds__make_hlds__state_var__hlds__make_hlds__state_var__notag_functor_desc_svar_state_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_state_0
};

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_0 = {
  (MR_String) "status_unknown",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_1 = {
  (MR_String) "status_unknown_updated",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_2[3] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_readonly_context_kind_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_2 = {
  (MR_String) "status_known_ro",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_3[1] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_3 = {
  (MR_String) "status_known",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_3,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_4[2] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_4 = {
  (MR_String) "status_known_updated",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_4,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_0[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_0
};

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_1[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_1
};

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_2[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_2
};

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_3[2] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_3,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_4
};

static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_status_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_3
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_status_0[5] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_3,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_2,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_4,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_0,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_1
};

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_status_0[5] = {
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____svar_status_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____svar_status_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "svar_status",
  {     hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_status_0 },
  {     hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_status_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_status_0
};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__state_var__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &hlds__make_hlds__state_var__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__state_var__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_store_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__state_var__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

static const MR_ConstString hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_store_0_0[3] = {
  (MR_String) "store_next_goal_id",
  (MR_String) "store_final_remap",
  (MR_String) "store_specs"
};

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_store_0_0 = {
  (MR_String) "svar_store",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_store_0_0,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_store_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_store_0_0[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_store_0_0
};

static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_store_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_store_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_store_0[1] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_store_0_0
};

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_store_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_store_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____svar_store_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____svar_store_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "svar_store",
  {     hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_store_0 },
  {     hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_store_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_store_0
};

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____hlds_goal_svar_state_0_0_10001(
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;

    {
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____hlds_goal_svar_state_0_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2));
    }
    return hlds__make_hlds__state_var__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____hlds_goal_svar_state_0_0_10001(
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3)
{
  {
    MR_Word hlds__make_hlds__state_var__conv0_HeadVar__1_1;

    {
      hlds__make_hlds__state_var____Compare____hlds_goal_svar_state_0_0(&hlds__make_hlds__state_var__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_3));
    }
    *hlds__make_hlds__state_var__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__state_var__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____readonly_context_kind_0_0_10001(
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;

    {
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____readonly_context_kind_0_0();
    }
    return hlds__make_hlds__state_var__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____readonly_context_kind_0_0_10001(
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3)
{
  {
    MR_Word hlds__make_hlds__state_var__conv0_HeadVar__1_1;

    {
      hlds__make_hlds__state_var____Compare____readonly_context_kind_0_0(&hlds__make_hlds__state_var__conv0_HeadVar__1_1);
    }
    *hlds__make_hlds__state_var__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__state_var__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____state_var_name_source_0_0_10001(
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;

    {
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____state_var_name_source_0_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2));
    }
    return hlds__make_hlds__state_var__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____state_var_name_source_0_0_10001(
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3)
{
  {
    MR_Word hlds__make_hlds__state_var__conv0_HeadVar__1_1;

    {
      hlds__make_hlds__state_var____Compare____state_var_name_source_0_0(&hlds__make_hlds__state_var__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_3));
    }
    *hlds__make_hlds__state_var__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__state_var__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_0_0_10001(
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;

    {
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_0_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2));
    }
    return hlds__make_hlds__state_var__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_0_0_10001(
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3)
{
  {
    MR_Word hlds__make_hlds__state_var__conv0_HeadVar__1_1;

    {
      hlds__make_hlds__state_var____Compare____svar_0_0(&hlds__make_hlds__state_var__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_3));
    }
    *hlds__make_hlds__state_var__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__state_var__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_inner_atomic_scope_info_0_0_10001(
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;

    {
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_inner_atomic_scope_info_0_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2));
    }
    return hlds__make_hlds__state_var__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_inner_atomic_scope_info_0_0_10001(
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3)
{
  {
    MR_Word hlds__make_hlds__state_var__conv0_HeadVar__1_1;

    {
      hlds__make_hlds__state_var____Compare____svar_inner_atomic_scope_info_0_0(&hlds__make_hlds__state_var__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_3));
    }
    *hlds__make_hlds__state_var__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__state_var__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_outer_atomic_scope_info_0_0_10001(
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;

    {
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_outer_atomic_scope_info_0_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2));
    }
    return hlds__make_hlds__state_var__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_outer_atomic_scope_info_0_0_10001(
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3)
{
  {
    MR_Word hlds__make_hlds__state_var__conv0_HeadVar__1_1;

    {
      hlds__make_hlds__state_var____Compare____svar_outer_atomic_scope_info_0_0(&hlds__make_hlds__state_var__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_3));
    }
    *hlds__make_hlds__state_var__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__state_var__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_state_0_0_10001(
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;

    {
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_state_0_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2));
    }
    return hlds__make_hlds__state_var__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_state_0_0_10001(
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3)
{
  {
    MR_Word hlds__make_hlds__state_var__conv0_HeadVar__1_1;

    {
      hlds__make_hlds__state_var____Compare____svar_state_0_0(&hlds__make_hlds__state_var__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_3));
    }
    *hlds__make_hlds__state_var__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__state_var__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_status_0_0_10001(
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;

    {
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2));
    }
    return hlds__make_hlds__state_var__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_status_0_0_10001(
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3)
{
  {
    MR_Word hlds__make_hlds__state_var__conv0_HeadVar__1_1;

    {
      hlds__make_hlds__state_var____Compare____svar_status_0_0(&hlds__make_hlds__state_var__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_3));
    }
    *hlds__make_hlds__state_var__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__state_var__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_store_0_0_10001(
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;

    {
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_store_0_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2));
    }
    return hlds__make_hlds__state_var__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_store_0_0_10001(
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_2,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3)
{
  {
    MR_Word hlds__make_hlds__state_var__conv0_HeadVar__1_1;

    {
      hlds__make_hlds__state_var____Compare____svar_store_0_0(&hlds__make_hlds__state_var__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_2), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_3));
    }
    *hlds__make_hlds__state_var__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__state_var__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_114_101_97_100_111_110_108_121_95_99_111_110_116_101_120_116_95_107_105_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;

    *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_114_101_97_100_111_110_108_121_95_99_111_110_116_101_120_116_95_107_105_110_100_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
{
  {
    return MR_TRUE;
  }
}

void MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_10_p_0(
  MR_Word hlds__make_hlds__state_var__InnerScopeInfo_12,
  MR_Word * hlds__make_hlds__state_var__InnerDIVar_13,
  MR_Word * hlds__make_hlds__state_var__InnerUOVar_14,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_0_28,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_29,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_30,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_31,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_32,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_33)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Word hlds__make_hlds__state_var__InnerStateVar_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__InnerScopeInfo_12, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__state_var__StatusMap0_20;
    MR_Word hlds__make_hlds__state_var__Status_21;
    MR_Box hlds__make_hlds__state_var__conv0_Status_21;

    *hlds__make_hlds__state_var__InnerDIVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__InnerScopeInfo_12, (MR_Integer) 1)));
    *hlds__make_hlds__state_var__STATE_VARIABLE_State_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__InnerScopeInfo_12, (MR_Integer) 2)));
    hlds__make_hlds__state_var__StatusMap0_20 = (MR_Word) hlds__make_hlds__state_var__STATE_VARIABLE_State_0_28;
    {
      mercury__map__lookup_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, hlds__make_hlds__state_var__StatusMap0_20, ((MR_Box) (hlds__make_hlds__state_var__InnerStateVar_18)), &hlds__make_hlds__state_var__conv0_Status_21);
    }
    hlds__make_hlds__state_var__Status_21 = ((MR_Word) hlds__make_hlds__state_var__conv0_Status_21);
    switch (MR_tag((MR_Word) hlds__make_hlds__state_var__Status_21)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.svar_finish_inner_atomic_scope\'/10", (MR_String) "status != known");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.svar_finish_inner_atomic_scope\'/10", (MR_String) "status != known");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_21, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *hlds__make_hlds__state_var__InnerUOVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_21, (MR_Integer) 1)));
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.svar_finish_inner_atomic_scope\'/10", (MR_String) "status != known");
                return;
              }
            }
            break;
        }
        break;
    }
    *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_33 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_32;
    *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_31 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_30;
  }
}

void MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_115_116_97_114_116_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_9_p_0(
  MR_Word hlds__make_hlds__state_var__InnerStateVar_11,
  MR_Word * hlds__make_hlds__state_var__InnerScopeInfo_12,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_0_20,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_21,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_22,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_23,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_24,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_25)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Word hlds__make_hlds__state_var__TypeCtorInfo_31_58 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word hlds__make_hlds__state_var__InnerDIVar_17;
    MR_Word hlds__make_hlds__state_var__StatusMap0_18;
    MR_Word hlds__make_hlds__state_var__StatusMap_19;
    MR_Word hlds__make_hlds__state_var__Var_28;
    MR_String hlds__make_hlds__state_var__SVarName_39;
    MR_String hlds__make_hlds__state_var__ProgVarName_40;
    MR_String hlds__make_hlds__state_var__Var_61;

    {
      hlds__make_hlds__state_var__SVarName_39 = mercury__varset__lookup_name_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_31_58, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_22, hlds__make_hlds__state_var__InnerStateVar_11);
    }
    {
      hlds__make_hlds__state_var__Var_61 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__state_var__SVarName_39, (MR_String) "_0");
    }
    {
      hlds__make_hlds__state_var__ProgVarName_40 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", hlds__make_hlds__state_var__Var_61);
    }
    {
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_31_58, hlds__make_hlds__state_var__ProgVarName_40, &hlds__make_hlds__state_var__InnerDIVar_17, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_22, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_23);
    }
    hlds__make_hlds__state_var__StatusMap0_18 = (MR_Word) hlds__make_hlds__state_var__STATE_VARIABLE_State_0_20;
    {
      hlds__make_hlds__state_var__Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Var_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Var_28, 1) = ((MR_Box) (hlds__make_hlds__state_var__InnerDIVar_17));
    }
    {
      mercury__map__set_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__InnerStateVar_11)), ((MR_Box) (hlds__make_hlds__state_var__Var_28)), hlds__make_hlds__state_var__StatusMap0_18, &hlds__make_hlds__state_var__StatusMap_19);
    }
    *hlds__make_hlds__state_var__STATE_VARIABLE_State_21 = (MR_Word) hlds__make_hlds__state_var__StatusMap_19;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *hlds__make_hlds__state_var__InnerScopeInfo_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__InnerStateVar_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__InnerDIVar_17));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_State_0_20));
    }
    *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_25 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_24;
  }
}

void MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_100_105_115_106_117_110_99_116_105_111_110_95_95_91_49_93_95_48_9_p_0(
  MR_Word hlds__make_hlds__state_var__DisjStates_11,
  MR_Word * hlds__make_hlds__state_var__Disjs_12,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_29,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_30,
  MR_Word hlds__make_hlds__state_var__StateBefore_14,
  MR_Word * hlds__make_hlds__state_var__StateAfter_15,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_31,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Store_32)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Word hlds__make_hlds__state_var__StatusMapBefore_17 = (MR_Word) hlds__make_hlds__state_var__StateBefore_14;

    {
      hlds__make_hlds__state_var__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, hlds__make_hlds__state_var__StatusMapBefore_17);
    }
    if (hlds__make_hlds__state_var__succeeded)
      {
        MR_Word hlds__make_hlds__state_var__RevDisjs_18;

        {
          hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_p_0(hlds__make_hlds__state_var__DisjStates_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__RevDisjs_18);
        }
        {
          mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__state_var__RevDisjs_18, hlds__make_hlds__state_var__Disjs_12);
        }
        *hlds__make_hlds__state_var__StateAfter_15 = hlds__make_hlds__state_var__StateBefore_14;
        *hlds__make_hlds__state_var__STATE_VARIABLE_Store_32 = hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_31;
      }
    else
      {
        MR_Word hlds__make_hlds__state_var__TypeInfo_41_41 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
        MR_Word hlds__make_hlds__state_var__TypeCtorInfo_42_42 = (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0;
        MR_Word hlds__make_hlds__state_var__StatusListBefore_19;
        MR_Word hlds__make_hlds__state_var__ChangedStatusMapAfter_20;
        MR_Word hlds__make_hlds__state_var__StatusMapAfter_21;
        MR_Word hlds__make_hlds__state_var__ChangedStatusListAfter_22;
        MR_Word hlds__make_hlds__state_var__NextGoalId0_23;
        MR_Word hlds__make_hlds__state_var__DelayedRenamings0_24;
        MR_Word hlds__make_hlds__state_var__Specs0_25;
        MR_Word hlds__make_hlds__state_var__NextGoalId_26;
        MR_Word hlds__make_hlds__state_var__DelayedRenamings_27;
        MR_Word hlds__make_hlds__state_var__Specs_28;
        MR_Word hlds__make_hlds__state_var__Var_34;
        MR_Word hlds__make_hlds__state_var__RevDisjs_37;

        {
          mercury__map__to_sorted_assoc_list_2_p_0(hlds__make_hlds__state_var__TypeInfo_41_41, hlds__make_hlds__state_var__TypeCtorInfo_42_42, hlds__make_hlds__state_var__StatusMapBefore_17, &hlds__make_hlds__state_var__StatusListBefore_19);
        }
        {
          hlds__make_hlds__state_var__Var_34 = mercury__map__init_0_f_0(hlds__make_hlds__state_var__TypeInfo_41_41, hlds__make_hlds__state_var__TypeCtorInfo_42_42);
        }
        {
          hlds__make_hlds__state_var__compute_status_after_arms_6_p_0(hlds__make_hlds__state_var__StatusListBefore_19, hlds__make_hlds__state_var__DisjStates_11, hlds__make_hlds__state_var__Var_34, &hlds__make_hlds__state_var__ChangedStatusMapAfter_20, hlds__make_hlds__state_var__StatusMapBefore_17, &hlds__make_hlds__state_var__StatusMapAfter_21);
        }
        {
          mercury__map__to_sorted_assoc_list_2_p_0(hlds__make_hlds__state_var__TypeInfo_41_41, hlds__make_hlds__state_var__TypeCtorInfo_42_42, hlds__make_hlds__state_var__ChangedStatusMapAfter_20, &hlds__make_hlds__state_var__ChangedStatusListAfter_22);
        }
        *hlds__make_hlds__state_var__StateAfter_15 = (MR_Word) hlds__make_hlds__state_var__StatusMapAfter_21;
        hlds__make_hlds__state_var__NextGoalId0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_31, (MR_Integer) 0)));
        hlds__make_hlds__state_var__DelayedRenamings0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_31, (MR_Integer) 1)));
        hlds__make_hlds__state_var__Specs0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_31, (MR_Integer) 2)));
        {
          hlds__make_hlds__state_var__merge_changes_made_by_arms_12_p_0(hlds__make_hlds__state_var__DisjStates_11, hlds__make_hlds__state_var__StatusMapBefore_17, hlds__make_hlds__state_var__ChangedStatusListAfter_22, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__RevDisjs_37, hlds__make_hlds__state_var__NextGoalId0_23, &hlds__make_hlds__state_var__NextGoalId_26, hlds__make_hlds__state_var__DelayedRenamings0_24, &hlds__make_hlds__state_var__DelayedRenamings_27, hlds__make_hlds__state_var__Specs0_25, &hlds__make_hlds__state_var__Specs_28);
        }
        {
          mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__state_var__RevDisjs_37, hlds__make_hlds__state_var__Disjs_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *hlds__make_hlds__state_var__STATE_VARIABLE_Store_32 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__NextGoalId_26));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__DelayedRenamings_27));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__state_var__Specs_28));
        }
      }
    *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_30 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_29;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__handle_state_vars_in_ite__1289__1_2_p_0(
  MR_Word hlds__make_hlds__state_var__StatusBefore_76,
  MR_Word hlds__make_hlds__state_var__StatusAfterThen_78)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;

    {
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__StatusBefore_76, hlds__make_hlds__state_var__StatusAfterThen_78);
    }
    return hlds__make_hlds__state_var__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__handle_arm_updated_state_vars__1071__1_2_p_0(
  MR_Word hlds__make_hlds__state_var__AfterAllArmsStatus_23,
  MR_Word hlds__make_hlds__state_var__AfterArmStatus_25)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;

    {
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__AfterArmStatus_25, hlds__make_hlds__state_var__AfterAllArmsStatus_23);
    }
    return hlds__make_hlds__state_var__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__get_disjuncts_with_empty_states__962__1_1_p_0(
  MR_Word hlds__make_hlds__state_var__StatusMapAfterGoal_12)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;

    {
      hlds__make_hlds__state_var__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, hlds__make_hlds__state_var__StatusMapAfterGoal_12);
    }
    return hlds__make_hlds__state_var__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1206__1_2_p_0(
  MR_Word hlds__make_hlds__state_var__SVarsBefore_38,
  MR_Word hlds__make_hlds__state_var__SVarsAfterElse_41)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;

    {
      hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[2], ((MR_Box) (hlds__make_hlds__state_var__SVarsBefore_38)), ((MR_Box) (hlds__make_hlds__state_var__SVarsAfterElse_41)));
    }
    return hlds__make_hlds__state_var__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1204__1_2_p_0(
  MR_Word hlds__make_hlds__state_var__SVarsBefore_38,
  MR_Word hlds__make_hlds__state_var__SVarsAfterThen_40)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;

    {
      hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[2], ((MR_Box) (hlds__make_hlds__state_var__SVarsBefore_38)), ((MR_Box) (hlds__make_hlds__state_var__SVarsAfterThen_40)));
    }
    return hlds__make_hlds__state_var__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1202__1_2_p_0(
  MR_Word hlds__make_hlds__state_var__SVarsBefore_38,
  MR_Word hlds__make_hlds__state_var__SVarsAfterCond_39)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;

    {
      hlds__make_hlds__state_var__succeeded = mercury__list__sublist_2_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], hlds__make_hlds__state_var__SVarsBefore_38, hlds__make_hlds__state_var__SVarsAfterCond_39);
    }
    return hlds__make_hlds__state_var__succeeded;
  }
}

void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_store_0_0(
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Integer hlds__make_hlds__state_var__CastX_12 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;
    MR_Integer hlds__make_hlds__state_var__CastY_13 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__3_3;

    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastX_12 == hlds__make_hlds__state_var__CastY_13);
    if (hlds__make_hlds__state_var__succeeded)
      *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word hlds__make_hlds__state_var__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__state_var__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__state_var__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__state_var__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__state_var__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__make_hlds__state_var__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word hlds__make_hlds__state_var__Var_10;

        {
          mercury__counter____Compare____counter_0_0(&hlds__make_hlds__state_var__Var_10, hlds__make_hlds__state_var__ArgX1_4, hlds__make_hlds__state_var__ArgY1_5);
        }
        hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__Var_10 == (MR_Integer) 0);
        hlds__make_hlds__state_var__succeeded = !(hlds__make_hlds__state_var__succeeded);
        if (hlds__make_hlds__state_var__succeeded)
          *hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__Var_10;
        else
          {
            MR_Word hlds__make_hlds__state_var__Var_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_2[1], &hlds__make_hlds__state_var__Var_11, ((MR_Box) (hlds__make_hlds__state_var__ArgX2_6)), ((MR_Box) (hlds__make_hlds__state_var__ArgY2_7)));
            }
            hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__Var_11 == (MR_Integer) 0);
            hlds__make_hlds__state_var__succeeded = !(hlds__make_hlds__state_var__succeeded);
            if (hlds__make_hlds__state_var__succeeded)
              *hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__Var_11;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[5], hlds__make_hlds__state_var__HeadVar__1_1, ((MR_Box) (hlds__make_hlds__state_var__ArgX3_8)), ((MR_Box) (hlds__make_hlds__state_var__ArgY3_9)));
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_store_0_0(
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Integer hlds__make_hlds__state_var__CastX_9 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__1_1;
    MR_Integer hlds__make_hlds__state_var__CastY_10 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;

    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastX_9 == hlds__make_hlds__state_var__CastY_10);
    if (hlds__make_hlds__state_var__succeeded)
      hlds__make_hlds__state_var__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__make_hlds__state_var__TypeInfo_12_12;
        MR_Word hlds__make_hlds__state_var__TypeInfo_13_13;
        MR_Word hlds__make_hlds__state_var__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__state_var__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__state_var__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__state_var__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__state_var__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word hlds__make_hlds__state_var__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 2)));

        {
          hlds__make_hlds__state_var__succeeded = mercury__counter____Unify____counter_0_0(hlds__make_hlds__state_var__ArgX1_3, hlds__make_hlds__state_var__ArgY1_4);
        }
        if (hlds__make_hlds__state_var__succeeded)
          {
            hlds__make_hlds__state_var__TypeInfo_12_12 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_2[1];
            {
              hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__state_var__TypeInfo_12_12, ((MR_Box) (hlds__make_hlds__state_var__ArgX2_5)), ((MR_Box) (hlds__make_hlds__state_var__ArgY2_6)));
            }
            if (hlds__make_hlds__state_var__succeeded)
              {
                hlds__make_hlds__state_var__TypeInfo_13_13 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[5];
                {
                  hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__state_var__TypeInfo_13_13, ((MR_Box) (hlds__make_hlds__state_var__ArgX3_7)), ((MR_Box) (hlds__make_hlds__state_var__ArgY3_8)));
                }
              }
          }
      }
    return hlds__make_hlds__state_var__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_status_0_0(
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Integer hlds__make_hlds__state_var__CastX_76 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;
    MR_Integer hlds__make_hlds__state_var__CastY_77 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__3_3;

    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastX_76 == hlds__make_hlds__state_var__CastY_77);
    if (hlds__make_hlds__state_var__succeeded)
      *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__make_hlds__state_var__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__make_hlds__state_var__ArgY1_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], hlds__make_hlds__state_var__HeadVar__1_1, ((MR_Box) (hlds__make_hlds__state_var__Var_90)), ((MR_Box) (hlds__make_hlds__state_var__ArgY1_13)));
                  }
                }
                break;
              case (MR_Integer) 2:
                *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word hlds__make_hlds__state_var__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word hlds__make_hlds__state_var__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__make_hlds__state_var__ArgY1_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word hlds__make_hlds__state_var__ArgY3_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word hlds__make_hlds__state_var__Var_36;

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], &hlds__make_hlds__state_var__Var_36, ((MR_Box) (hlds__make_hlds__state_var__Var_87)), ((MR_Box) (hlds__make_hlds__state_var__ArgY1_31)));
                  }
                  hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__Var_36 == (MR_Integer) 0);
                  hlds__make_hlds__state_var__succeeded = !(hlds__make_hlds__state_var__succeeded);
                  if (hlds__make_hlds__state_var__succeeded)
                    *hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__Var_36;
                  else
                    {
                      mercury__term____Compare____context_0_0(hlds__make_hlds__state_var__HeadVar__1_1, hlds__make_hlds__state_var__Var_85, hlds__make_hlds__state_var__ArgY3_35);
                    }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word hlds__make_hlds__state_var__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word hlds__make_hlds__state_var__ArgY1_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], hlds__make_hlds__state_var__HeadVar__1_1, ((MR_Box) (hlds__make_hlds__state_var__Var_84)), ((MR_Box) (hlds__make_hlds__state_var__ArgY1_54)));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word hlds__make_hlds__state_var__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 2)));
                MR_Word hlds__make_hlds__state_var__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word hlds__make_hlds__state_var__ArgY1_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word hlds__make_hlds__state_var__ArgY2_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word hlds__make_hlds__state_var__Var_75;

                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], &hlds__make_hlds__state_var__Var_75, ((MR_Box) (hlds__make_hlds__state_var__Var_89)), ((MR_Box) (hlds__make_hlds__state_var__ArgY1_72)));
                          }
                          hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__Var_75 == (MR_Integer) 0);
                          hlds__make_hlds__state_var__succeeded = !(hlds__make_hlds__state_var__succeeded);
                          if (hlds__make_hlds__state_var__succeeded)
                            *hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__Var_75;
                          else
                            {
                              {
                                mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], hlds__make_hlds__state_var__HeadVar__1_1, ((MR_Box) (hlds__make_hlds__state_var__Var_88)), ((MR_Box) (hlds__make_hlds__state_var__ArgY2_74)));
                              }
                            }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_status_0_0(
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Integer hlds__make_hlds__state_var__CastX_19 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__1_1;
    MR_Integer hlds__make_hlds__state_var__CastY_20 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;

    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastX_19 == hlds__make_hlds__state_var__CastY_20);
    if (hlds__make_hlds__state_var__succeeded)
      hlds__make_hlds__state_var__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer hlds__make_hlds__state_var__CastX_3 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__1_1;
            MR_Integer hlds__make_hlds__state_var__CastY_4 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;

            hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastY_4 == hlds__make_hlds__state_var__CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__make_hlds__state_var__TypeInfo_26_26;
            MR_Word hlds__make_hlds__state_var__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__state_var__ArgY1_6;

            hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__make_hlds__state_var__succeeded)
              {
                hlds__make_hlds__state_var__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));
                hlds__make_hlds__state_var__TypeInfo_26_26 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
                {
                  hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__state_var__TypeInfo_26_26, ((MR_Box) (hlds__make_hlds__state_var__ArgX1_5)), ((MR_Box) (hlds__make_hlds__state_var__ArgY1_6)));
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word hlds__make_hlds__state_var__TypeInfo_22_22;
            MR_Word hlds__make_hlds__state_var__ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__state_var__ArgY1_8;
            MR_Word hlds__make_hlds__state_var__ArgX3_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word hlds__make_hlds__state_var__ArgY3_12;

            hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (hlds__make_hlds__state_var__succeeded)
              {
                hlds__make_hlds__state_var__ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));
                hlds__make_hlds__state_var__ArgY3_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 2)));
                hlds__make_hlds__state_var__TypeInfo_22_22 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
                {
                  hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__state_var__TypeInfo_22_22, ((MR_Box) (hlds__make_hlds__state_var__ArgX1_7)), ((MR_Box) (hlds__make_hlds__state_var__ArgY1_8)));
                }
                if (hlds__make_hlds__state_var__succeeded)
                  {
                    hlds__make_hlds__state_var__succeeded = mercury__term____Unify____context_0_0(hlds__make_hlds__state_var__ArgX3_11, hlds__make_hlds__state_var__ArgY3_12);
                  }
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word hlds__make_hlds__state_var__TypeInfo_21_21;
                MR_Word hlds__make_hlds__state_var__ArgX1_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word hlds__make_hlds__state_var__ArgY1_14;

                hlds__make_hlds__state_var__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (hlds__make_hlds__state_var__succeeded)
                  {
                    hlds__make_hlds__state_var__ArgY1_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));
                    hlds__make_hlds__state_var__TypeInfo_21_21 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
                    {
                      hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__state_var__TypeInfo_21_21, ((MR_Box) (hlds__make_hlds__state_var__ArgX1_13)), ((MR_Box) (hlds__make_hlds__state_var__ArgY1_14)));
                    }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word hlds__make_hlds__state_var__TypeInfo_24_24;
                MR_Word hlds__make_hlds__state_var__TypeInfo_25_25;
                MR_Word hlds__make_hlds__state_var__ArgX1_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word hlds__make_hlds__state_var__ArgY1_16;
                MR_Word hlds__make_hlds__state_var__ArgX2_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word hlds__make_hlds__state_var__ArgY2_18;

                hlds__make_hlds__state_var__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (hlds__make_hlds__state_var__succeeded)
                  {
                    hlds__make_hlds__state_var__ArgY1_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));
                    hlds__make_hlds__state_var__ArgY2_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 2)));
                    hlds__make_hlds__state_var__TypeInfo_24_24 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
                    {
                      hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__state_var__TypeInfo_24_24, ((MR_Box) (hlds__make_hlds__state_var__ArgX1_15)), ((MR_Box) (hlds__make_hlds__state_var__ArgY1_16)));
                    }
                    if (hlds__make_hlds__state_var__succeeded)
                      {
                        hlds__make_hlds__state_var__TypeInfo_25_25 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
                        {
                          hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__state_var__TypeInfo_25_25, ((MR_Box) (hlds__make_hlds__state_var__ArgX2_17)), ((MR_Box) (hlds__make_hlds__state_var__ArgY2_18)));
                        }
                      }
                  }
              }
              break;
          }
          break;
      }
    return hlds__make_hlds__state_var__succeeded;
  }
}

void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_state_0_0(
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Integer hlds__make_hlds__state_var__CastX_6 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;
    MR_Integer hlds__make_hlds__state_var__CastY_7 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__3_3;

    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastX_6 == hlds__make_hlds__state_var__CastY_7);
    if (hlds__make_hlds__state_var__succeeded)
      *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word hlds__make_hlds__state_var__ArgX1_4 = (MR_Word) hlds__make_hlds__state_var__HeadVar__2_2;
        MR_Word hlds__make_hlds__state_var__ArgY1_5 = (MR_Word) hlds__make_hlds__state_var__HeadVar__3_3;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_2[2], hlds__make_hlds__state_var__HeadVar__1_1, ((MR_Box) (hlds__make_hlds__state_var__ArgX1_4)), ((MR_Box) (hlds__make_hlds__state_var__ArgY1_5)));
        }
      }
  }
}

MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_state_0_0(
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Integer hlds__make_hlds__state_var__CastX_5 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__1_1;
    MR_Integer hlds__make_hlds__state_var__CastY_6 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;

    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastX_5 == hlds__make_hlds__state_var__CastY_6);
    if (hlds__make_hlds__state_var__succeeded)
      hlds__make_hlds__state_var__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__make_hlds__state_var__ArgX1_3 = (MR_Word) hlds__make_hlds__state_var__HeadVar__1_1;
        MR_Word hlds__make_hlds__state_var__ArgY1_4 = (MR_Word) hlds__make_hlds__state_var__HeadVar__2_2;

        {
          hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_2[2], ((MR_Box) (hlds__make_hlds__state_var__ArgX1_3)), ((MR_Box) (hlds__make_hlds__state_var__ArgY1_4)));
        }
      }
    return hlds__make_hlds__state_var__succeeded;
  }
}

void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_outer_atomic_scope_info_0_0(
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Integer hlds__make_hlds__state_var__CastX_18 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;
    MR_Integer hlds__make_hlds__state_var__CastY_19 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__3_3;

    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastX_18 == hlds__make_hlds__state_var__CastY_19);
    if (hlds__make_hlds__state_var__succeeded)
      *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((hlds__make_hlds__state_var__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((hlds__make_hlds__state_var__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 0;
      else
        *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 2;
    else
      {
        MR_Word hlds__make_hlds__state_var__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__make_hlds__state_var__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__state_var__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));

        if ((hlds__make_hlds__state_var__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word hlds__make_hlds__state_var__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__state_var__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__state_var__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 2)));
            MR_Word hlds__make_hlds__state_var__Var_10;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], &hlds__make_hlds__state_var__Var_10, ((MR_Box) (hlds__make_hlds__state_var__Var_25)), ((MR_Box) (hlds__make_hlds__state_var__ArgY1_5)));
            }
            hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__Var_10 == (MR_Integer) 0);
            hlds__make_hlds__state_var__succeeded = !(hlds__make_hlds__state_var__succeeded);
            if (hlds__make_hlds__state_var__succeeded)
              *hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__Var_10;
            else
              {
                MR_Word hlds__make_hlds__state_var__Var_11;

                {
                  hlds__make_hlds__state_var____Compare____svar_status_0_0(&hlds__make_hlds__state_var__Var_11, hlds__make_hlds__state_var__Var_24, hlds__make_hlds__state_var__ArgY2_7);
                }
                hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__Var_11 == (MR_Integer) 0);
                hlds__make_hlds__state_var__succeeded = !(hlds__make_hlds__state_var__succeeded);
                if (hlds__make_hlds__state_var__succeeded)
                  *hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__Var_11;
                else
                  {
                    hlds__make_hlds__state_var____Compare____svar_status_0_0(hlds__make_hlds__state_var__HeadVar__1_1, hlds__make_hlds__state_var__Var_23, hlds__make_hlds__state_var__ArgY3_9);
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_outer_atomic_scope_info_0_0(
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Integer hlds__make_hlds__state_var__CastX_11 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__1_1;
    MR_Integer hlds__make_hlds__state_var__CastY_12 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;

    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastX_11 == hlds__make_hlds__state_var__CastY_12);
    if (hlds__make_hlds__state_var__succeeded)
      hlds__make_hlds__state_var__succeeded = MR_TRUE;
    else
    if ((hlds__make_hlds__state_var__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer hlds__make_hlds__state_var__CastX_9 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__1_1;
        MR_Integer hlds__make_hlds__state_var__CastY_10 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;

        hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastY_10 == hlds__make_hlds__state_var__CastX_9);
      }
    else
      {
        MR_Word hlds__make_hlds__state_var__TypeInfo_13_13;
        MR_Word hlds__make_hlds__state_var__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__state_var__ArgY1_4;
        MR_Word hlds__make_hlds__state_var__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__state_var__ArgY2_6;
        MR_Word hlds__make_hlds__state_var__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word hlds__make_hlds__state_var__ArgY3_8;

        hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__make_hlds__state_var__succeeded)
          {
            hlds__make_hlds__state_var__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));
            hlds__make_hlds__state_var__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));
            hlds__make_hlds__state_var__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 2)));
            hlds__make_hlds__state_var__TypeInfo_13_13 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
            {
              hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__state_var__TypeInfo_13_13, ((MR_Box) (hlds__make_hlds__state_var__ArgX1_3)), ((MR_Box) (hlds__make_hlds__state_var__ArgY1_4)));
            }
            if (hlds__make_hlds__state_var__succeeded)
              {
                {
                  hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__ArgX2_5, hlds__make_hlds__state_var__ArgY2_6);
                }
                if (hlds__make_hlds__state_var__succeeded)
                  {
                    hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__ArgX3_7, hlds__make_hlds__state_var__ArgY3_8);
                  }
              }
          }
      }
    return hlds__make_hlds__state_var__succeeded;
  }
}

void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_inner_atomic_scope_info_0_0(
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Integer hlds__make_hlds__state_var__CastX_12 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;
    MR_Integer hlds__make_hlds__state_var__CastY_13 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__3_3;

    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastX_12 == hlds__make_hlds__state_var__CastY_13);
    if (hlds__make_hlds__state_var__succeeded)
      *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word hlds__make_hlds__state_var__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__state_var__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__state_var__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__state_var__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__state_var__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__make_hlds__state_var__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word hlds__make_hlds__state_var__Var_10;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], &hlds__make_hlds__state_var__Var_10, ((MR_Box) (hlds__make_hlds__state_var__ArgX1_4)), ((MR_Box) (hlds__make_hlds__state_var__ArgY1_5)));
        }
        hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__Var_10 == (MR_Integer) 0);
        hlds__make_hlds__state_var__succeeded = !(hlds__make_hlds__state_var__succeeded);
        if (hlds__make_hlds__state_var__succeeded)
          *hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__Var_10;
        else
          {
            MR_Word hlds__make_hlds__state_var__Var_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], &hlds__make_hlds__state_var__Var_11, ((MR_Box) (hlds__make_hlds__state_var__ArgX2_6)), ((MR_Box) (hlds__make_hlds__state_var__ArgY2_7)));
            }
            hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__Var_11 == (MR_Integer) 0);
            hlds__make_hlds__state_var__succeeded = !(hlds__make_hlds__state_var__succeeded);
            if (hlds__make_hlds__state_var__succeeded)
              *hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__Var_11;
            else
              {
                hlds__make_hlds__state_var____Compare____svar_state_0_0(hlds__make_hlds__state_var__HeadVar__1_1, hlds__make_hlds__state_var__ArgX3_8, hlds__make_hlds__state_var__ArgY3_9);
              }
          }
      }
  }
}

MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_inner_atomic_scope_info_0_0(
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Integer hlds__make_hlds__state_var__CastX_9 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__1_1;
    MR_Integer hlds__make_hlds__state_var__CastY_10 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;

    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastX_9 == hlds__make_hlds__state_var__CastY_10);
    if (hlds__make_hlds__state_var__succeeded)
      hlds__make_hlds__state_var__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__make_hlds__state_var__TypeInfo_12_12;
        MR_Word hlds__make_hlds__state_var__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__state_var__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__state_var__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__state_var__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__state_var__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word hlds__make_hlds__state_var__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 2)));

        {
          hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], ((MR_Box) (hlds__make_hlds__state_var__ArgX1_3)), ((MR_Box) (hlds__make_hlds__state_var__ArgY1_4)));
        }
        if (hlds__make_hlds__state_var__succeeded)
          {
            hlds__make_hlds__state_var__TypeInfo_12_12 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
            {
              hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__state_var__TypeInfo_12_12, ((MR_Box) (hlds__make_hlds__state_var__ArgX2_5)), ((MR_Box) (hlds__make_hlds__state_var__ArgY2_6)));
            }
            if (hlds__make_hlds__state_var__succeeded)
              {
                hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_state_0_0(hlds__make_hlds__state_var__ArgX3_7, hlds__make_hlds__state_var__ArgY3_8);
              }
          }
      }
    return hlds__make_hlds__state_var__succeeded;
  }
}

void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_0_0(
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Word hlds__make_hlds__state_var__Cast_HeadVar1_4 = hlds__make_hlds__state_var__HeadVar__2_2;
    MR_Word hlds__make_hlds__state_var__Cast_HeadVar2_5 = hlds__make_hlds__state_var__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], hlds__make_hlds__state_var__HeadVar__1_1, ((MR_Box) (hlds__make_hlds__state_var__Cast_HeadVar1_4)), ((MR_Box) (hlds__make_hlds__state_var__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_0_0(
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Word hlds__make_hlds__state_var__Cast_HeadVar1_3 = hlds__make_hlds__state_var__HeadVar__1_1;
    MR_Word hlds__make_hlds__state_var__Cast_HeadVar2_4 = hlds__make_hlds__state_var__HeadVar__2_2;

    {
      hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], ((MR_Box) (hlds__make_hlds__state_var__Cast_HeadVar1_3)), ((MR_Box) (hlds__make_hlds__state_var__Cast_HeadVar2_4)));
    }
    return hlds__make_hlds__state_var__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____state_var_name_source_0_0(
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Integer hlds__make_hlds__state_var__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;
    MR_Integer hlds__make_hlds__state_var__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__state_var__HeadVar__1_1, hlds__make_hlds__state_var__Cast_HeadVar1_4, hlds__make_hlds__state_var__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____state_var_name_source_0_0(
  MR_Word hlds__make_hlds__state_var__HeadVar__2_1,
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__HeadVar__2_1 == hlds__make_hlds__state_var__HeadVar__2_2);

    return hlds__make_hlds__state_var__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____readonly_context_kind_0_0(
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;

    {
      hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_114_101_97_100_111_110_108_121_95_99_111_110_116_101_120_116_95_107_105_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(hlds__make_hlds__state_var__HeadVar__1_1);
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____readonly_context_kind_0_0(void)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;

    {
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_114_101_97_100_111_110_108_121_95_99_111_110_116_101_120_116_95_107_105_110_100_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
    return hlds__make_hlds__state_var__succeeded;
  }
}

void MR_CALL 
hlds__make_hlds__state_var____Compare____hlds_goal_svar_state_0_0(
  MR_Word * hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Integer hlds__make_hlds__state_var__CastX_9 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;
    MR_Integer hlds__make_hlds__state_var__CastY_10 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__3_3;

    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastX_9 == hlds__make_hlds__state_var__CastY_10);
    if (hlds__make_hlds__state_var__succeeded)
      *hlds__make_hlds__state_var__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word hlds__make_hlds__state_var__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__state_var__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__state_var__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__state_var__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__state_var__Var_8;

        {
          hlds__hlds_goal____Compare____hlds_goal_0_0(&hlds__make_hlds__state_var__Var_8, hlds__make_hlds__state_var__ArgX1_4, hlds__make_hlds__state_var__ArgY1_5);
        }
        hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__Var_8 == (MR_Integer) 0);
        hlds__make_hlds__state_var__succeeded = !(hlds__make_hlds__state_var__succeeded);
        if (hlds__make_hlds__state_var__succeeded)
          *hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__Var_8;
        else
          {
            hlds__make_hlds__state_var____Compare____svar_state_0_0(hlds__make_hlds__state_var__HeadVar__1_1, hlds__make_hlds__state_var__ArgX2_6, hlds__make_hlds__state_var__ArgY2_7);
          }
      }
  }
}

MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____hlds_goal_svar_state_0_0(
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Integer hlds__make_hlds__state_var__CastX_7 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__1_1;
    MR_Integer hlds__make_hlds__state_var__CastY_8 = (MR_Integer) hlds__make_hlds__state_var__HeadVar__2_2;

    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__CastX_7 == hlds__make_hlds__state_var__CastY_8);
    if (hlds__make_hlds__state_var__succeeded)
      hlds__make_hlds__state_var__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__make_hlds__state_var__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__state_var__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__state_var__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__state_var__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));

        {
          hlds__make_hlds__state_var__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(hlds__make_hlds__state_var__ArgX1_3, hlds__make_hlds__state_var__ArgY1_4);
        }
        if (hlds__make_hlds__state_var__succeeded)
          {
            hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_state_0_0(hlds__make_hlds__state_var__ArgX2_5, hlds__make_hlds__state_var__ArgY2_6);
          }
      }
    return hlds__make_hlds__state_var__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__severity_is_error_1_p_0(
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Word hlds__make_hlds__state_var__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__state_var__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__state_var__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 2)));

    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__Var_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    return hlds__make_hlds__state_var__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__report_missing_inits_in_disjunct_4_p_0(
  MR_Word hlds__make_hlds__state_var__Context_5,
  MR_Word hlds__make_hlds__state_var__NextStateVars_6,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_11,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_12)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Word hlds__make_hlds__state_var__TypeCtorInfo_36_36 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    MR_Word hlds__make_hlds__state_var__Pieces_8;
    MR_Word hlds__make_hlds__state_var__Msg_9;
    MR_Word hlds__make_hlds__state_var__Spec_10;
    MR_Word hlds__make_hlds__state_var__Var_17;
    MR_Word hlds__make_hlds__state_var__Var_18;
    MR_Word hlds__make_hlds__state_var__Var_28;
    MR_Word hlds__make_hlds__state_var__Var_29;
    MR_Word hlds__make_hlds__state_var__Var_33;

    {
      hlds__make_hlds__state_var__Var_18 = parse_tree__error_util__list_to_pieces_1_f_0(hlds__make_hlds__state_var__NextStateVars_6);
    }
    {
      hlds__make_hlds__state_var__Var_17 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_36_36, hlds__make_hlds__state_var__Var_18, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[26]));
    }
    {
      hlds__make_hlds__state_var__Pieces_8 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_36_36, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[50]), hlds__make_hlds__state_var__Var_17);
    }
    {
      hlds__make_hlds__state_var__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_29, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces_8));
    }
    {
      hlds__make_hlds__state_var__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_28, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_29));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__state_var__Msg_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_9, 0) = ((MR_Box) (hlds__make_hlds__state_var__Context_5));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_9, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_28));
    }
    {
      hlds__make_hlds__state_var__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_33, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg_9));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__state_var__Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_10, 2) = ((MR_Box) (hlds__make_hlds__state_var__Var_33));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_11));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__report_missing_inits_in_ite_6_p_0(
  MR_Word hlds__make_hlds__state_var__Context_7,
  MR_Word hlds__make_hlds__state_var__NextStateVars_8,
  MR_String hlds__make_hlds__state_var__WhenMissing_9,
  MR_String hlds__make_hlds__state_var__WhenNotMissing_10,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_15,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_16)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Word hlds__make_hlds__state_var__TypeCtorInfo_56_56 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    MR_Word hlds__make_hlds__state_var__Pieces_12;
    MR_Word hlds__make_hlds__state_var__Msg_13;
    MR_Word hlds__make_hlds__state_var__Spec_14;
    MR_Word hlds__make_hlds__state_var__Var_17;
    MR_Word hlds__make_hlds__state_var__Var_20;
    MR_Word hlds__make_hlds__state_var__Var_21;
    MR_Word hlds__make_hlds__state_var__Var_29;
    MR_Word hlds__make_hlds__state_var__Var_30;
    MR_Word hlds__make_hlds__state_var__Var_31;
    MR_Word hlds__make_hlds__state_var__Var_34;
    MR_Word hlds__make_hlds__state_var__Var_37;
    MR_Word hlds__make_hlds__state_var__Var_38;
    MR_Word hlds__make_hlds__state_var__Var_48;
    MR_Word hlds__make_hlds__state_var__Var_49;
    MR_Word hlds__make_hlds__state_var__Var_53;

    {
      hlds__make_hlds__state_var__Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Var_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Var_21, 1) = ((MR_Box) (hlds__make_hlds__state_var__WhenNotMissing_10));
    }
    {
      hlds__make_hlds__state_var__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_20, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_21));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[20])));
    }
    {
      hlds__make_hlds__state_var__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[46])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_17, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_20));
    }
    {
      hlds__make_hlds__state_var__Var_30 = parse_tree__error_util__list_to_pieces_1_f_0(hlds__make_hlds__state_var__NextStateVars_8);
    }
    {
      hlds__make_hlds__state_var__Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Var_38, 1) = ((MR_Box) (hlds__make_hlds__state_var__WhenMissing_9));
    }
    {
      hlds__make_hlds__state_var__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_37, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_38));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[23])));
    }
    {
      hlds__make_hlds__state_var__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[48])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_34, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_37));
    }
    {
      hlds__make_hlds__state_var__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[47])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_31, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_34));
    }
    {
      hlds__make_hlds__state_var__Var_29 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_56_56, hlds__make_hlds__state_var__Var_30, hlds__make_hlds__state_var__Var_31);
    }
    {
      hlds__make_hlds__state_var__Pieces_12 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_56_56, hlds__make_hlds__state_var__Var_17, hlds__make_hlds__state_var__Var_29);
    }
    {
      hlds__make_hlds__state_var__Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_49, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces_12));
    }
    {
      hlds__make_hlds__state_var__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_48, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_49));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__state_var__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_13, 0) = ((MR_Box) (hlds__make_hlds__state_var__Context_7));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_13, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_48));
    }
    {
      hlds__make_hlds__state_var__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_53, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg_13));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__state_var__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_14, 2) = ((MR_Box) (hlds__make_hlds__state_var__Var_53));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_15));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__report_repeated_head_state_var_5_p_0(
  MR_Word hlds__make_hlds__state_var__Context_6,
  MR_Word hlds__make_hlds__state_var__VarSet_7,
  MR_Word hlds__make_hlds__state_var__StateVar_8,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_14,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_15)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_String hlds__make_hlds__state_var__Name_10;
    MR_Word hlds__make_hlds__state_var__Pieces_11;
    MR_Word hlds__make_hlds__state_var__Msg_12;
    MR_Word hlds__make_hlds__state_var__Spec_13;
    MR_Word hlds__make_hlds__state_var__Var_18;
    MR_Word hlds__make_hlds__state_var__Var_21;
    MR_Word hlds__make_hlds__state_var__Var_22;
    MR_Word hlds__make_hlds__state_var__Var_29;
    MR_Word hlds__make_hlds__state_var__Var_30;
    MR_Word hlds__make_hlds__state_var__Var_34;

    {
      hlds__make_hlds__state_var__Name_10 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__VarSet_7, hlds__make_hlds__state_var__StateVar_8);
    }
    {
      hlds__make_hlds__state_var__Var_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__Var_22, 0) = ((MR_Box) (hlds__make_hlds__state_var__Name_10));
    }
    {
      hlds__make_hlds__state_var__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_21, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_22));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[14])));
    }
    {
      hlds__make_hlds__state_var__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[34])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_18, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_21));
    }
    {
      hlds__make_hlds__state_var__Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[45])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_11, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_18));
    }
    {
      hlds__make_hlds__state_var__Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_30, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces_11));
    }
    {
      hlds__make_hlds__state_var__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_29, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_30));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__state_var__Msg_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_12, 0) = ((MR_Box) (hlds__make_hlds__state_var__Context_6));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_12, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_29));
    }
    {
      hlds__make_hlds__state_var__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_34, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg_12));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__state_var__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_13, 2) = ((MR_Box) (hlds__make_hlds__state_var__Var_34));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_15 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_14));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__report_uninitialized_state_var_5_p_0(
  MR_Word hlds__make_hlds__state_var__Context_6,
  MR_Word hlds__make_hlds__state_var__VarSet_7,
  MR_Word hlds__make_hlds__state_var__StateVar_8,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_14,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_15)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_String hlds__make_hlds__state_var__Name_10;
    MR_Word hlds__make_hlds__state_var__Pieces_11;
    MR_Word hlds__make_hlds__state_var__Msg_12;
    MR_Word hlds__make_hlds__state_var__Spec_13;
    MR_Word hlds__make_hlds__state_var__Var_18;
    MR_Word hlds__make_hlds__state_var__Var_19;
    MR_String hlds__make_hlds__state_var__Var_20;
    MR_Word hlds__make_hlds__state_var__Var_28;
    MR_Word hlds__make_hlds__state_var__Var_29;
    MR_Word hlds__make_hlds__state_var__Var_33;

    {
      hlds__make_hlds__state_var__Name_10 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__VarSet_7, hlds__make_hlds__state_var__StateVar_8);
    }
    {
      hlds__make_hlds__state_var__Var_20 = mercury__string__f_43_43_2_f_0((MR_String) "!.", hlds__make_hlds__state_var__Name_10);
    }
    {
      hlds__make_hlds__state_var__Var_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__Var_19, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_20));
    }
    {
      hlds__make_hlds__state_var__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_18, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_19));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[8])));
    }
    {
      hlds__make_hlds__state_var__Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[27])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_11, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_18));
    }
    {
      hlds__make_hlds__state_var__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_29, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces_11));
    }
    {
      hlds__make_hlds__state_var__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_28, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_29));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__state_var__Msg_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_12, 0) = ((MR_Box) (hlds__make_hlds__state_var__Context_6));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_12, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_28));
    }
    {
      hlds__make_hlds__state_var__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_33, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg_12));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__state_var__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_13, 2) = ((MR_Box) (hlds__make_hlds__state_var__Var_33));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_15 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_14));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__report_non_visible_state_var_6_p_0(
  MR_String hlds__make_hlds__state_var__DorC_7,
  MR_Word hlds__make_hlds__state_var__Context_8,
  MR_Word hlds__make_hlds__state_var__VarSet_9,
  MR_Word hlds__make_hlds__state_var__StateVar_10,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_16,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_17)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_String hlds__make_hlds__state_var__Name_12;
    MR_Word hlds__make_hlds__state_var__Pieces_13;
    MR_Word hlds__make_hlds__state_var__Msg_14;
    MR_Word hlds__make_hlds__state_var__Spec_15;
    MR_Word hlds__make_hlds__state_var__Var_20;
    MR_Word hlds__make_hlds__state_var__Var_21;
    MR_String hlds__make_hlds__state_var__Var_22;
    MR_String hlds__make_hlds__state_var__Var_24;
    MR_Word hlds__make_hlds__state_var__Var_31;
    MR_Word hlds__make_hlds__state_var__Var_32;
    MR_Word hlds__make_hlds__state_var__Var_36;

    {
      hlds__make_hlds__state_var__Name_12 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__VarSet_9, hlds__make_hlds__state_var__StateVar_10);
    }
    {
      hlds__make_hlds__state_var__Var_24 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__state_var__DorC_7, hlds__make_hlds__state_var__Name_12);
    }
    {
      hlds__make_hlds__state_var__Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "!", hlds__make_hlds__state_var__Var_24);
    }
    {
      hlds__make_hlds__state_var__Var_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__Var_21, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_22));
    }
    {
      hlds__make_hlds__state_var__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_20, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_21));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[12])));
    }
    {
      hlds__make_hlds__state_var__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[28])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_13, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_20));
    }
    {
      hlds__make_hlds__state_var__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_32, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces_13));
    }
    {
      hlds__make_hlds__state_var__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_31, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_32));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__state_var__Msg_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_14, 0) = ((MR_Box) (hlds__make_hlds__state_var__Context_8));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_14, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_31));
    }
    {
      hlds__make_hlds__state_var__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_36, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg_14));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__state_var__Spec_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_15, 2) = ((MR_Box) (hlds__make_hlds__state_var__Var_36));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_17 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_15));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_16));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_p_0(
  MR_Word hlds__make_hlds__state_var__DelayedRenamingToAdd_8,
  MR_Word hlds__make_hlds__state_var__Goal0_9,
  MR_Word * hlds__make_hlds__state_var__Goal_10,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_21,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_22,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_0_23,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_24)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Word hlds__make_hlds__state_var__GoalExpr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Goal0_9, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__state_var__GoalInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Goal0_9, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__state_var__GoalId0_15;
    MR_Word hlds__make_hlds__state_var__DelayedRenaming0_16;
    MR_Box hlds__make_hlds__state_var__conv0_DelayedRenaming0_16;

    {
      hlds__make_hlds__state_var__GoalId0_15 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(hlds__make_hlds__state_var__GoalInfo0_14);
    }
    {
      hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1], hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_0_23, ((MR_Box) (hlds__make_hlds__state_var__GoalId0_15)), &hlds__make_hlds__state_var__conv0_DelayedRenaming0_16);
    }
    if (hlds__make_hlds__state_var__succeeded)
      {
        hlds__make_hlds__state_var__DelayedRenaming0_16 = ((MR_Word) hlds__make_hlds__state_var__conv0_DelayedRenaming0_16);
        hlds__make_hlds__state_var__succeeded = MR_TRUE;
      }
    if (hlds__make_hlds__state_var__succeeded)
      {
        MR_Word hlds__make_hlds__state_var__DelayedRenaming_17;

        {
          hlds__make_hlds__state_var__DelayedRenaming_17 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_2[0], hlds__make_hlds__state_var__DelayedRenamingToAdd_8, hlds__make_hlds__state_var__DelayedRenaming0_16);
        }
        {
          mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1], ((MR_Box) (hlds__make_hlds__state_var__GoalId0_15)), ((MR_Box) (hlds__make_hlds__state_var__DelayedRenaming_17)), hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_0_23, hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_24);
        }
        *hlds__make_hlds__state_var__Goal_10 = hlds__make_hlds__state_var__Goal0_9;
        *hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_22 = hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_21;
      }
    else
      {
        MR_Integer hlds__make_hlds__state_var__GoalIdNum_18;
        MR_Word hlds__make_hlds__state_var__GoalId_19;
        MR_Word hlds__make_hlds__state_var__GoalInfo_20;

        {
          mercury__counter__allocate_3_p_0(&hlds__make_hlds__state_var__GoalIdNum_18, hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_21, hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_22);
        }
        hlds__make_hlds__state_var__GoalId_19 = (MR_Word) hlds__make_hlds__state_var__GoalIdNum_18;
        {
          hlds__hlds_goal__goal_info_set_goal_id_3_p_0(hlds__make_hlds__state_var__GoalId_19, hlds__make_hlds__state_var__GoalInfo0_14, &hlds__make_hlds__state_var__GoalInfo_20);
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1], ((MR_Box) (hlds__make_hlds__state_var__GoalId_19)), ((MR_Box) (hlds__make_hlds__state_var__DelayedRenamingToAdd_8)), hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_0_23, hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_24);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *hlds__make_hlds__state_var__Goal_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__GoalExpr_13));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__GoalInfo_20));
        }
      }
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_p_0_1(
  MR_Box hlds__make_hlds__state_var__closure_arg,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_2,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3,
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_4,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_5,
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_6)
{
  {
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;
    MR_Word hlds__make_hlds__state_var__conv3_Goal_10;
    MR_Word hlds__make_hlds__state_var__conv2_STATE_VARIABLE_NextGoalId_22;
    MR_Word hlds__make_hlds__state_var__conv1_STATE_VARIABLE_DelayedRenamingMap_24;

    {
      hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), &hlds__make_hlds__state_var__conv3_Goal_10, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_3), &hlds__make_hlds__state_var__conv2_STATE_VARIABLE_NextGoalId_22, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_5), &hlds__make_hlds__state_var__conv1_STATE_VARIABLE_DelayedRenamingMap_24);
    }
    *hlds__make_hlds__state_var__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__state_var__conv3_Goal_10));
    *hlds__make_hlds__state_var__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__state_var__conv2_STATE_VARIABLE_NextGoalId_22));
    *hlds__make_hlds__state_var__wrapper_arg_6 = ((MR_Box) (hlds__make_hlds__state_var__conv1_STATE_VARIABLE_DelayedRenamingMap_24));
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_p_0(
  MR_Word hlds__make_hlds__state_var__Goal_7,
  MR_Word * hlds__make_hlds__state_var__Conjuncts_8,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_16,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_17,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_0_18,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_19)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Word hlds__make_hlds__state_var__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Goal_7, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__state_var__GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Goal_7, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__state_var__Conjuncts0_13;
    MR_Word hlds__make_hlds__state_var__Var_20;

    hlds__make_hlds__state_var__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__state_var__GoalExpr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__GoalExpr_11, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (hlds__make_hlds__state_var__succeeded)
      {
        hlds__make_hlds__state_var__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__GoalExpr_11, (MR_Integer) 1)));
        hlds__make_hlds__state_var__Conjuncts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__GoalExpr_11, (MR_Integer) 2)));
        hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__Var_20 == (MR_Integer) 0);
      }
    if (hlds__make_hlds__state_var__succeeded)
      {
        MR_Word hlds__make_hlds__state_var__GoalId_14;
        MR_Word hlds__make_hlds__state_var__GoalDelayedRenaming_15;
        MR_Box hlds__make_hlds__state_var__conv0_GoalDelayedRenaming_15;

        {
          hlds__make_hlds__state_var__GoalId_14 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(hlds__make_hlds__state_var__GoalInfo_12);
        }
        {
          hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1], hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_0_18, ((MR_Box) (hlds__make_hlds__state_var__GoalId_14)), &hlds__make_hlds__state_var__conv0_GoalDelayedRenaming_15);
        }
        if (hlds__make_hlds__state_var__succeeded)
          {
            hlds__make_hlds__state_var__GoalDelayedRenaming_15 = ((MR_Word) hlds__make_hlds__state_var__conv0_GoalDelayedRenaming_15);
            hlds__make_hlds__state_var__succeeded = MR_TRUE;
          }
        if (hlds__make_hlds__state_var__succeeded)
          {
            MR_Word hlds__make_hlds__state_var__TypeCtorInfo_33_33;
            MR_Word hlds__make_hlds__state_var__Var_21;
            MR_Box hlds__make_hlds__state_var__conv5_STATE_VARIABLE_NextGoalId_17;
            MR_Box hlds__make_hlds__state_var__conv4_STATE_VARIABLE_DelayedRenamingMap_19;

            {
              hlds__make_hlds__state_var__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_21, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_7[0]));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_21, 1) = ((MR_Box) (hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_p_0_1));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_21, 3) = ((MR_Box) (hlds__make_hlds__state_var__GoalDelayedRenaming_15));
            }
            hlds__make_hlds__state_var__TypeCtorInfo_33_33 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
            {
              mercury__list__map_foldl2_7_p_0(hlds__make_hlds__state_var__TypeCtorInfo_33_33, hlds__make_hlds__state_var__TypeCtorInfo_33_33, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_2[1], hlds__make_hlds__state_var__Var_21, hlds__make_hlds__state_var__Conjuncts0_13, hlds__make_hlds__state_var__Conjuncts_8, ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_16)), &hlds__make_hlds__state_var__conv5_STATE_VARIABLE_NextGoalId_17, ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_0_18)), &hlds__make_hlds__state_var__conv4_STATE_VARIABLE_DelayedRenamingMap_19);
            }
            *hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_17 = ((MR_Word) hlds__make_hlds__state_var__conv5_STATE_VARIABLE_NextGoalId_17);
            *hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_19 = ((MR_Word) hlds__make_hlds__state_var__conv4_STATE_VARIABLE_DelayedRenamingMap_19);
          }
        else
          {
            *hlds__make_hlds__state_var__Conjuncts_8 = hlds__make_hlds__state_var__Conjuncts0_13;
            *hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_19 = hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_0_18;
            *hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_17 = hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_16;
          }
      }
    else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__state_var__Conjuncts_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Goal_7));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        *hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_19 = hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamingMap_0_18;
        *hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_17 = hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_16;
      }
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(
  MR_Word hlds__make_hlds__state_var__LocKind_4,
  MR_Word hlds__make_hlds__state_var__Status_5)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Word hlds__make_hlds__state_var__ProgVar_6;

    switch (hlds__make_hlds__state_var__LocKind_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) hlds__make_hlds__state_var__Status_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "function \140hlds.make_hlds.state_var.svar_get_current_progvar\'/2", (MR_String) "Status not known or updated");
              }
            }
            break;
          case (MR_Integer) 1:
            hlds__make_hlds__state_var__ProgVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Status_5, (MR_Integer) 0)));
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "function \140hlds.make_hlds.state_var.svar_get_current_progvar\'/2", (MR_String) "Status not known or updated");
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_5, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                hlds__make_hlds__state_var__ProgVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_5, (MR_Integer) 1)));
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__make_hlds__state_var__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_5, (MR_Integer) 1)));

                  hlds__make_hlds__state_var__ProgVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_5, (MR_Integer) 2)));
                }
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) hlds__make_hlds__state_var__Status_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "function \140hlds.make_hlds.state_var.svar_get_current_progvar\'/2", (MR_String) "Status not known");
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "function \140hlds.make_hlds.state_var.svar_get_current_progvar\'/2", (MR_String) "Status not known");
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_5, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                hlds__make_hlds__state_var__ProgVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_5, (MR_Integer) 1)));
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "function \140hlds.make_hlds.state_var.svar_get_current_progvar\'/2", (MR_String) "Status not known");
                  }
                }
                break;
            }
            break;
        }
        break;
    }
    return hlds__make_hlds__state_var__ProgVar_6;
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__handle_state_var_in_ite_23_p_0(
  MR_Word hlds__make_hlds__state_var__LocKind_24,
  MR_Word hlds__make_hlds__state_var__SVar_25,
  MR_Word hlds__make_hlds__state_var__StatusBefore_26,
  MR_Word hlds__make_hlds__state_var__StatusAfterCond_27,
  MR_Word hlds__make_hlds__state_var__StatusAfterThen_28,
  MR_Word hlds__make_hlds__state_var__StatusAfterElse_29,
  MR_Word * hlds__make_hlds__state_var__StatusAfterITE_30,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_73,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_74,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_75,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_76,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_77,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_78,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_0_81,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_82,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_83,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_84,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_85,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_86,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;

    {
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__StatusAfterCond_27, hlds__make_hlds__state_var__StatusBefore_26);
    }
    if (hlds__make_hlds__state_var__succeeded)
      {
        {
          hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__StatusAfterThen_28, hlds__make_hlds__state_var__StatusAfterCond_27);
        }
        if (hlds__make_hlds__state_var__succeeded)
          {
            {
              hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__StatusAfterElse_29, hlds__make_hlds__state_var__StatusBefore_26);
            }
            if (hlds__make_hlds__state_var__succeeded)
              {
                *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusBefore_26;
                *hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_86 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_85;
                *hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_78 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_77;
              }
            else
              switch (MR_tag((MR_Word) hlds__make_hlds__state_var__StatusBefore_26)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_String hlds__make_hlds__state_var__SVarName_43;
                    MR_String hlds__make_hlds__state_var__Var_114;

                    {
                      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_73, hlds__make_hlds__state_var__SVar_25, &hlds__make_hlds__state_var__SVarName_43);
                    }
                    {
                      hlds__make_hlds__state_var__Var_114 = mercury__string__f_43_43_2_f_0((MR_String) "!:", hlds__make_hlds__state_var__SVarName_43);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_86 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_114));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_85));
                    }
                    *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusAfterElse_29;
                    *hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_78 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_77;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite\'/23", (MR_String) "updated before (case 2)");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusBefore_26;
                    *hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_78 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_77;
                    *hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_86 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_85;
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__StatusBefore_26, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word hlds__make_hlds__state_var__VarBefore_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__StatusBefore_26, (MR_Integer) 1)));
                        MR_Word hlds__make_hlds__state_var__VarAfterElse_41;
                        MR_Word hlds__make_hlds__state_var__CopyGoal_42;

                        {
                          hlds__make_hlds__state_var__VarAfterElse_41 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(hlds__make_hlds__state_var__LocKind_24, hlds__make_hlds__state_var__StatusAfterElse_29);
                        }
                        {
                          hlds__make_hlds__state_var__make_copy_goal_3_p_0(hlds__make_hlds__state_var__VarBefore_40, hlds__make_hlds__state_var__VarAfterElse_41, &hlds__make_hlds__state_var__CopyGoal_42);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_78 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__CopyGoal_42));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_77));
                        }
                        *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusAfterElse_29;
                        *hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_86 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_85;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite\'/23", (MR_String) "updated before (case 2)");
                          return;
                        }
                      }
                      break;
                  }
                  break;
              }
            *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87;
            *hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_84 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_83;
            *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79;
          }
        else
          {
            {
              hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__StatusAfterElse_29, hlds__make_hlds__state_var__StatusBefore_26);
            }
            if (hlds__make_hlds__state_var__succeeded)
              {
                switch (MR_tag((MR_Word) hlds__make_hlds__state_var__StatusBefore_26)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_String hlds__make_hlds__state_var__Var_121;
                      MR_String hlds__make_hlds__state_var__SVarName_151;

                      {
                        mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_73, hlds__make_hlds__state_var__SVar_25, &hlds__make_hlds__state_var__SVarName_151);
                      }
                      {
                        hlds__make_hlds__state_var__Var_121 = mercury__string__f_43_43_2_f_0((MR_String) "!:", hlds__make_hlds__state_var__SVarName_151);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_121));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87));
                      }
                      *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusAfterThen_28;
                      *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite\'/23", (MR_String) "updated before (case 3)");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusBefore_26;
                      *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79;
                      *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__StatusBefore_26, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word hlds__make_hlds__state_var__VarAfterThen_50;
                          MR_Word hlds__make_hlds__state_var__VarBefore_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__StatusBefore_26, (MR_Integer) 1)));
                          MR_Word hlds__make_hlds__state_var__CopyGoal_150;

                          {
                            hlds__make_hlds__state_var__VarAfterThen_50 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(hlds__make_hlds__state_var__LocKind_24, hlds__make_hlds__state_var__StatusAfterThen_28);
                          }
                          {
                            hlds__make_hlds__state_var__make_copy_goal_3_p_0(hlds__make_hlds__state_var__VarBefore_149, hlds__make_hlds__state_var__VarAfterThen_50, &hlds__make_hlds__state_var__CopyGoal_150);
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__CopyGoal_150));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79));
                          }
                          *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusAfterThen_28;
                          *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite\'/23", (MR_String) "updated before (case 3)");
                            return;
                          }
                        }
                        break;
                    }
                    break;
                }
                *hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_84 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_83;
              }
            else
              {
                MR_Word hlds__make_hlds__state_var__Var_125;
                MR_Word hlds__make_hlds__state_var__VarAfterElse_158;
                MR_Word hlds__make_hlds__state_var__VarAfterThen_159;

                {
                  hlds__make_hlds__state_var__VarAfterThen_159 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(hlds__make_hlds__state_var__LocKind_24, hlds__make_hlds__state_var__StatusAfterThen_28);
                }
                {
                  hlds__make_hlds__state_var__VarAfterElse_158 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(hlds__make_hlds__state_var__LocKind_24, hlds__make_hlds__state_var__StatusAfterElse_29);
                }
                {
                  hlds__make_hlds__state_var__Var_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_125, 0) = ((MR_Box) (hlds__make_hlds__state_var__VarAfterElse_158));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_125, 1) = ((MR_Box) (hlds__make_hlds__state_var__VarAfterThen_159));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_84 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_125));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_83));
                }
                *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusAfterThen_28;
                *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87;
                *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79;
              }
            *hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_86 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_85;
            *hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_78 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_77;
          }
        *hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_76 = hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_75;
        *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_74 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_73;
      }
    else
      {
        {
          hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__StatusAfterThen_28, hlds__make_hlds__state_var__StatusAfterCond_27);
        }
        if (hlds__make_hlds__state_var__succeeded)
          {
            {
              hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__StatusAfterElse_29, hlds__make_hlds__state_var__StatusBefore_26);
            }
            if (hlds__make_hlds__state_var__succeeded)
              switch (MR_tag((MR_Word) hlds__make_hlds__state_var__StatusBefore_26)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_String hlds__make_hlds__state_var__Var_130;
                    MR_String hlds__make_hlds__state_var__SVarName_169;
                    MR_Word hlds__make_hlds__state_var__FinalVar_170;
                    MR_Word hlds__make_hlds__state_var__VarAfterCond_171;
                    MR_Word hlds__make_hlds__state_var__NeckCopyGoal_172;

                    {
                      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_73, hlds__make_hlds__state_var__SVar_25, &hlds__make_hlds__state_var__SVarName_169);
                    }
                    {
                      hlds__make_hlds__state_var__Var_130 = mercury__string__f_43_43_2_f_0((MR_String) "!:", hlds__make_hlds__state_var__SVarName_169);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_130));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87));
                    }
                    {
                      hlds__make_hlds__state_var__new_state_var_instance_5_p_0(hlds__make_hlds__state_var__SVar_25, (MR_Integer) 1, &hlds__make_hlds__state_var__FinalVar_170, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_73, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_74);
                    }
                    {
                      hlds__make_hlds__state_var__VarAfterCond_171 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(hlds__make_hlds__state_var__LocKind_24, hlds__make_hlds__state_var__StatusAfterCond_27);
                    }
                    {
                      hlds__make_hlds__state_var__make_copy_goal_3_p_0(hlds__make_hlds__state_var__VarAfterCond_171, hlds__make_hlds__state_var__FinalVar_170, &hlds__make_hlds__state_var__NeckCopyGoal_172);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_76 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__NeckCopyGoal_172));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_75));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *hlds__make_hlds__state_var__StatusAfterITE_30 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__FinalVar_170));
                    }
                    *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite\'/23", (MR_String) "updated before (case 5)");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusBefore_26;
                    *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_74 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_73;
                    *hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_76 = hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_75;
                    *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79;
                    *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87;
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__StatusBefore_26, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word hlds__make_hlds__state_var__FinalVar_57;
                        MR_Word hlds__make_hlds__state_var__VarAfterCond_58;
                        MR_Word hlds__make_hlds__state_var__NeckCopyGoal_59;
                        MR_Word hlds__make_hlds__state_var__ElseCopyGoal_60;
                        MR_Word hlds__make_hlds__state_var__VarBefore_168 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__StatusBefore_26, (MR_Integer) 1)));

                        {
                          hlds__make_hlds__state_var__new_state_var_instance_5_p_0(hlds__make_hlds__state_var__SVar_25, (MR_Integer) 1, &hlds__make_hlds__state_var__FinalVar_57, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_73, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_74);
                        }
                        {
                          hlds__make_hlds__state_var__VarAfterCond_58 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(hlds__make_hlds__state_var__LocKind_24, hlds__make_hlds__state_var__StatusAfterCond_27);
                        }
                        {
                          hlds__make_hlds__state_var__make_copy_goal_3_p_0(hlds__make_hlds__state_var__VarAfterCond_58, hlds__make_hlds__state_var__FinalVar_57, &hlds__make_hlds__state_var__NeckCopyGoal_59);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_76 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__NeckCopyGoal_59));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_75));
                        }
                        {
                          hlds__make_hlds__state_var__make_copy_goal_3_p_0(hlds__make_hlds__state_var__VarBefore_168, hlds__make_hlds__state_var__FinalVar_57, &hlds__make_hlds__state_var__ElseCopyGoal_60);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__ElseCopyGoal_60));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *hlds__make_hlds__state_var__StatusAfterITE_30 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__FinalVar_57));
                        }
                        *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite\'/23", (MR_String) "updated before (case 5)");
                          return;
                        }
                      }
                      break;
                  }
                  break;
              }
            else
              {
                MR_Word hlds__make_hlds__state_var__VarAfterElse_175;
                MR_Word hlds__make_hlds__state_var__CopyGoal_176;
                MR_Word hlds__make_hlds__state_var__VarAfterCond_177;

                {
                  hlds__make_hlds__state_var__VarAfterCond_177 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(hlds__make_hlds__state_var__LocKind_24, hlds__make_hlds__state_var__StatusAfterCond_27);
                }
                {
                  hlds__make_hlds__state_var__VarAfterElse_175 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(hlds__make_hlds__state_var__LocKind_24, hlds__make_hlds__state_var__StatusAfterElse_29);
                }
                {
                  hlds__make_hlds__state_var__make_copy_goal_3_p_0(hlds__make_hlds__state_var__VarAfterCond_177, hlds__make_hlds__state_var__VarAfterElse_175, &hlds__make_hlds__state_var__CopyGoal_176);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_76 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__CopyGoal_176));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_75));
                }
                *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusAfterElse_29;
                *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87;
                *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79;
                *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_74 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_73;
              }
            *hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_84 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_83;
          }
        else
          {
            {
              hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__StatusAfterElse_29, hlds__make_hlds__state_var__StatusBefore_26);
            }
            if (hlds__make_hlds__state_var__succeeded)
              {
                switch (MR_tag((MR_Word) hlds__make_hlds__state_var__StatusBefore_26)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_String hlds__make_hlds__state_var__Var_144;
                      MR_String hlds__make_hlds__state_var__SVarName_189;

                      {
                        mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_73, hlds__make_hlds__state_var__SVar_25, &hlds__make_hlds__state_var__SVarName_189);
                      }
                      {
                        hlds__make_hlds__state_var__Var_144 = mercury__string__f_43_43_2_f_0((MR_String) "!:", hlds__make_hlds__state_var__SVarName_189);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_144));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87));
                      }
                      *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusAfterThen_28;
                      *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite\'/23", (MR_String) "updated before (case 7)");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusBefore_26;
                      *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79;
                      *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__StatusBefore_26, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word hlds__make_hlds__state_var__VarBefore_186 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__StatusBefore_26, (MR_Integer) 1)));
                          MR_Word hlds__make_hlds__state_var__CopyGoal_187;
                          MR_Word hlds__make_hlds__state_var__VarAfterThen_188;

                          {
                            hlds__make_hlds__state_var__VarAfterThen_188 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(hlds__make_hlds__state_var__LocKind_24, hlds__make_hlds__state_var__StatusAfterThen_28);
                          }
                          {
                            hlds__make_hlds__state_var__make_copy_goal_3_p_0(hlds__make_hlds__state_var__VarBefore_186, hlds__make_hlds__state_var__VarAfterThen_188, &hlds__make_hlds__state_var__CopyGoal_187);
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__CopyGoal_187));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79));
                          }
                          *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusAfterThen_28;
                          *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite\'/23", (MR_String) "updated before (case 7)");
                            return;
                          }
                        }
                        break;
                    }
                    break;
                }
                *hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_84 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_83;
              }
            else
              {
                MR_Word hlds__make_hlds__state_var__Var_148;
                MR_Word hlds__make_hlds__state_var__VarAfterElse_198;
                MR_Word hlds__make_hlds__state_var__VarAfterThen_199;

                {
                  hlds__make_hlds__state_var__VarAfterThen_199 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(hlds__make_hlds__state_var__LocKind_24, hlds__make_hlds__state_var__StatusAfterThen_28);
                }
                {
                  hlds__make_hlds__state_var__VarAfterElse_198 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(hlds__make_hlds__state_var__LocKind_24, hlds__make_hlds__state_var__StatusAfterElse_29);
                }
                {
                  hlds__make_hlds__state_var__Var_148 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_148, 0) = ((MR_Box) (hlds__make_hlds__state_var__VarAfterElse_198));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_148, 1) = ((MR_Box) (hlds__make_hlds__state_var__VarAfterThen_199));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_84 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_148));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_83));
                }
                *hlds__make_hlds__state_var__StatusAfterITE_30 = hlds__make_hlds__state_var__StatusAfterThen_28;
                *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_88 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_87;
                *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_80 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_79;
              }
            *hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_76 = hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_75;
            *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_74 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_73;
          }
        *hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_86 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_85;
        *hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_78 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_77;
      }
    *hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_82 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_0_81;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__handle_state_vars_in_ite_25_p_0_1(
  MR_Box hlds__make_hlds__state_var__closure_arg)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;

    {
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var__IntroducedFrom__pred__handle_state_vars_in_ite__1289__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 4))));
    }
    return hlds__make_hlds__state_var__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__handle_state_vars_in_ite_25_p_0(
  MR_Word hlds__make_hlds__state_var__LocKind_1,
  MR_Word hlds__make_hlds__state_var__QuantStateVars_2,
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3,
  MR_Word hlds__make_hlds__state_var__StatusMapBefore_4,
  MR_Word hlds__make_hlds__state_var__StatusMapAfterCond_5,
  MR_Word hlds__make_hlds__state_var__StatusMapAfterThen_6,
  MR_Word hlds__make_hlds__state_var__StatusMapAfterElse_7,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_0_8,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_9,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_10,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_11,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_12,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_13,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_14,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_15,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_16,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_17,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_0_18,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_19,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_20,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_21,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_22,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_23,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_24,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_25)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_hlds__state_var__succeeded;

        if ((hlds__make_hlds__state_var__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_25 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_24;
            *hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_23 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_22;
            *hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_21 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_20;
            *hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_19 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_0_18;
            *hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_17 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_16;
            *hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_15 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_14;
            *hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_13 = hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_12;
            *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_11 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_10;
            *hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_9 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_0_8;
          }
        else
          {
            MR_Word hlds__make_hlds__state_var__TypeInfo_130_130 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
            MR_Word hlds__make_hlds__state_var__TypeCtorInfo_131_131 = (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0;
            MR_Word hlds__make_hlds__state_var__SVar_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__state_var__SVars_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__state_var__StatusBefore_76;
            MR_Word hlds__make_hlds__state_var__StatusAfterCond_77;
            MR_Word hlds__make_hlds__state_var__StatusAfterThen_78;
            MR_Word hlds__make_hlds__state_var__StatusAfterElse_79;
            MR_Word hlds__make_hlds__state_var__StatusAfterITE_80;
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_104_104;
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_105_105;
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_106_106;
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_107_107;
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_108_108;
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_109_109;
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_110_110;
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_111_111;
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_120_120;
            MR_Box hlds__make_hlds__state_var__conv0_StatusBefore_76;
            MR_Box hlds__make_hlds__state_var__conv1_StatusAfterCond_77;
            MR_Box hlds__make_hlds__state_var__conv2_StatusAfterThen_78;
            MR_Box hlds__make_hlds__state_var__conv3_StatusAfterElse_79;

            {
              mercury__map__lookup_3_p_0(hlds__make_hlds__state_var__TypeInfo_130_130, hlds__make_hlds__state_var__TypeCtorInfo_131_131, hlds__make_hlds__state_var__StatusMapBefore_4, ((MR_Box) (hlds__make_hlds__state_var__SVar_61)), &hlds__make_hlds__state_var__conv0_StatusBefore_76);
            }
            hlds__make_hlds__state_var__StatusBefore_76 = ((MR_Word) hlds__make_hlds__state_var__conv0_StatusBefore_76);
            {
              mercury__map__lookup_3_p_0(hlds__make_hlds__state_var__TypeInfo_130_130, hlds__make_hlds__state_var__TypeCtorInfo_131_131, hlds__make_hlds__state_var__StatusMapAfterCond_5, ((MR_Box) (hlds__make_hlds__state_var__SVar_61)), &hlds__make_hlds__state_var__conv1_StatusAfterCond_77);
            }
            hlds__make_hlds__state_var__StatusAfterCond_77 = ((MR_Word) hlds__make_hlds__state_var__conv1_StatusAfterCond_77);
            {
              mercury__map__lookup_3_p_0(hlds__make_hlds__state_var__TypeInfo_130_130, hlds__make_hlds__state_var__TypeCtorInfo_131_131, hlds__make_hlds__state_var__StatusMapAfterThen_6, ((MR_Box) (hlds__make_hlds__state_var__SVar_61)), &hlds__make_hlds__state_var__conv2_StatusAfterThen_78);
            }
            hlds__make_hlds__state_var__StatusAfterThen_78 = ((MR_Word) hlds__make_hlds__state_var__conv2_StatusAfterThen_78);
            {
              mercury__map__lookup_3_p_0(hlds__make_hlds__state_var__TypeInfo_130_130, hlds__make_hlds__state_var__TypeCtorInfo_131_131, hlds__make_hlds__state_var__StatusMapAfterElse_7, ((MR_Box) (hlds__make_hlds__state_var__SVar_61)), &hlds__make_hlds__state_var__conv3_StatusAfterElse_79);
            }
            hlds__make_hlds__state_var__StatusAfterElse_79 = ((MR_Word) hlds__make_hlds__state_var__conv3_StatusAfterElse_79);
            {
              hlds__make_hlds__state_var__succeeded = mercury__list__member_2_p_0(hlds__make_hlds__state_var__TypeInfo_130_130, ((MR_Box) (hlds__make_hlds__state_var__SVar_61)), hlds__make_hlds__state_var__QuantStateVars_2);
            }
            if (hlds__make_hlds__state_var__succeeded)
              {
                MR_Word hlds__make_hlds__state_var__Var_99;

                {
                  hlds__make_hlds__state_var__Var_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_99, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_5[1]));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_99, 1) = ((MR_Box) (hlds__make_hlds__state_var__handle_state_vars_in_ite_25_p_0_1));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_99, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_99, 3) = ((MR_Box) (hlds__make_hlds__state_var__StatusBefore_76));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_99, 4) = ((MR_Box) (hlds__make_hlds__state_var__StatusAfterThen_78));
                }
                {
                  mercury__require__expect_3_p_0(hlds__make_hlds__state_var__Var_99, (MR_String) "hlds.make_hlds.state_var", (MR_String) "state var shadowed in if-then-else is nevertheless updated");
                }
                {
                  hlds__make_hlds__state_var__handle_state_var_in_ite_23_p_0(hlds__make_hlds__state_var__LocKind_1, hlds__make_hlds__state_var__SVar_61, hlds__make_hlds__state_var__StatusBefore_76, hlds__make_hlds__state_var__StatusBefore_76, hlds__make_hlds__state_var__StatusBefore_76, hlds__make_hlds__state_var__StatusAfterElse_79, &hlds__make_hlds__state_var__StatusAfterITE_80, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_10, &hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_104_104, hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_12, &hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_105_105, hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_14, &hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_106_106, hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_16, &hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_107_107, hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_0_18, &hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_108_108, hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_20, &hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_109_109, hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_22, &hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_110_110, hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_24, &hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_111_111);
                }
              }
            else
              {
                hlds__make_hlds__state_var__handle_state_var_in_ite_23_p_0(hlds__make_hlds__state_var__LocKind_1, hlds__make_hlds__state_var__SVar_61, hlds__make_hlds__state_var__StatusBefore_76, hlds__make_hlds__state_var__StatusAfterCond_77, hlds__make_hlds__state_var__StatusAfterThen_78, hlds__make_hlds__state_var__StatusAfterElse_79, &hlds__make_hlds__state_var__StatusAfterITE_80, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_10, &hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_104_104, hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_12, &hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_105_105, hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_14, &hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_106_106, hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_16, &hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_107_107, hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_0_18, &hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_108_108, hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_20, &hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_109_109, hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_22, &hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_110_110, hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_24, &hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_111_111);
              }
            {
              mercury__map__det_insert_4_p_0(hlds__make_hlds__state_var__TypeInfo_130_130, hlds__make_hlds__state_var__TypeCtorInfo_131_131, ((MR_Box) (hlds__make_hlds__state_var__SVar_61)), ((MR_Box) (hlds__make_hlds__state_var__StatusAfterITE_80)), hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_0_8, &hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_120_120);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__make_hlds__state_var__next_value_of_HeadVar__3_3 = hlds__make_hlds__state_var__SVars_62;
              MR_Word hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_StatusMapAfterITE_0_8 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_120_120;
              MR_Word hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_VarSet_0_10 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_104_104;
              MR_Word hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_NeckCopyGoals_0_12 = hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_105_105;
              MR_Word hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_ThenEndCopyGoals_0_14 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_106_106;
              MR_Word hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_ElseEndCopyGoals_0_16 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_107_107;
              MR_Word hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_ThenRenames_0_18 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_108_108;
              MR_Word hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_ElseRenames_0_20 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_109_109;
              MR_Word hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_ThenMissingInits_0_22 = hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_110_110;
              MR_Word hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_ElseMissingInits_0_24 = hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_111_111;

              hlds__make_hlds__state_var__STATE_VARIABLE_ElseMissingInits_0_24 = hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_ElseMissingInits_0_24;
              hlds__make_hlds__state_var__STATE_VARIABLE_ThenMissingInits_0_22 = hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_ThenMissingInits_0_22;
              hlds__make_hlds__state_var__STATE_VARIABLE_ElseRenames_0_20 = hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_ElseRenames_0_20;
              hlds__make_hlds__state_var__STATE_VARIABLE_ThenRenames_0_18 = hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_ThenRenames_0_18;
              hlds__make_hlds__state_var__STATE_VARIABLE_ElseEndCopyGoals_0_16 = hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_ElseEndCopyGoals_0_16;
              hlds__make_hlds__state_var__STATE_VARIABLE_ThenEndCopyGoals_0_14 = hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_ThenEndCopyGoals_0_14;
              hlds__make_hlds__state_var__STATE_VARIABLE_NeckCopyGoals_0_12 = hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_NeckCopyGoals_0_12;
              hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_10 = hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_VarSet_0_10;
              hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterITE_0_8 = hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_StatusMapAfterITE_0_8;
              hlds__make_hlds__state_var__HeadVar__3_3 = hlds__make_hlds__state_var__next_value_of_HeadVar__3_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__make_hlds__state_var__make_copy_goal_3_p_0(
  MR_Word hlds__make_hlds__state_var__FromVar_4,
  MR_Word hlds__make_hlds__state_var__ToVar_5,
  MR_Word * hlds__make_hlds__state_var__CopyGoal_6)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Word hlds__make_hlds__state_var__CopyGoal0_7;
    MR_Word hlds__make_hlds__state_var__Var_8;
    MR_Word hlds__make_hlds__state_var__Var_9;

    {
      hlds__make_hlds__state_var__Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_8, 0) = ((MR_Box) (hlds__make_hlds__state_var__FromVar_4));
    }
    {
      hlds__make_hlds__state_var__Var_9 = mercury__term__context_init_0_f_0();
    }
    {
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(hlds__make_hlds__state_var__ToVar_5, hlds__make_hlds__state_var__Var_8, hlds__make_hlds__state_var__Var_9, (MR_Word) MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_4[2]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__CopyGoal0_7);
    }
    {
      hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 13, hlds__make_hlds__state_var__CopyGoal0_7, hlds__make_hlds__state_var__CopyGoal_6);
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_p_0_1(
  MR_Box hlds__make_hlds__state_var__closure_arg)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;

    {
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var__IntroducedFrom__pred__handle_arm_updated_state_vars__1071__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 4))));
    }
    return hlds__make_hlds__state_var__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_p_0(
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word hlds__make_hlds__state_var__StatusMapBefore_2,
  MR_Word hlds__make_hlds__state_var__StatusMapAfterArm_3,
  MR_Word hlds__make_hlds__state_var__VarSet_4,
  MR_Word * hlds__make_hlds__state_var__HeadVar__5_5,
  MR_Word * hlds__make_hlds__state_var__HeadVar__6_6,
  MR_Word * hlds__make_hlds__state_var__HeadVar__7_7)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;

    if ((hlds__make_hlds__state_var__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *hlds__make_hlds__state_var__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *hlds__make_hlds__state_var__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *hlds__make_hlds__state_var__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word hlds__make_hlds__state_var__TypeInfo_85_85;
        MR_Word hlds__make_hlds__state_var__TypeCtorInfo_86_86;
        MR_Word hlds__make_hlds__state_var__Change_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__state_var__Changes_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__state_var__UninitVarNamesTail_19;
        MR_Word hlds__make_hlds__state_var__CopyGoalsTail_20;
        MR_Word hlds__make_hlds__state_var__RenamesTail_21;
        MR_Word hlds__make_hlds__state_var__StateVar_22;
        MR_Word hlds__make_hlds__state_var__AfterAllArmsStatus_23;
        MR_Word hlds__make_hlds__state_var__BeforeStatus_24;
        MR_Word hlds__make_hlds__state_var__AfterArmStatus_25;
        MR_Box hlds__make_hlds__state_var__conv0_BeforeStatus_24;
        MR_Box hlds__make_hlds__state_var__conv1_AfterArmStatus_25;

        {
          hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_p_0(hlds__make_hlds__state_var__Changes_12, hlds__make_hlds__state_var__StatusMapBefore_2, hlds__make_hlds__state_var__StatusMapAfterArm_3, hlds__make_hlds__state_var__VarSet_4, &hlds__make_hlds__state_var__UninitVarNamesTail_19, &hlds__make_hlds__state_var__CopyGoalsTail_20, &hlds__make_hlds__state_var__RenamesTail_21);
        }
        hlds__make_hlds__state_var__StateVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Change_11, (MR_Integer) 0)));
        hlds__make_hlds__state_var__AfterAllArmsStatus_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Change_11, (MR_Integer) 1)));
        hlds__make_hlds__state_var__TypeInfo_85_85 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
        hlds__make_hlds__state_var__TypeCtorInfo_86_86 = (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0;
        {
          mercury__map__lookup_3_p_0(hlds__make_hlds__state_var__TypeInfo_85_85, hlds__make_hlds__state_var__TypeCtorInfo_86_86, hlds__make_hlds__state_var__StatusMapBefore_2, ((MR_Box) (hlds__make_hlds__state_var__StateVar_22)), &hlds__make_hlds__state_var__conv0_BeforeStatus_24);
        }
        hlds__make_hlds__state_var__BeforeStatus_24 = ((MR_Word) hlds__make_hlds__state_var__conv0_BeforeStatus_24);
        {
          mercury__map__lookup_3_p_0(hlds__make_hlds__state_var__TypeInfo_85_85, hlds__make_hlds__state_var__TypeCtorInfo_86_86, hlds__make_hlds__state_var__StatusMapAfterArm_3, ((MR_Box) (hlds__make_hlds__state_var__StateVar_22)), &hlds__make_hlds__state_var__conv1_AfterArmStatus_25);
        }
        hlds__make_hlds__state_var__AfterArmStatus_25 = ((MR_Word) hlds__make_hlds__state_var__conv1_AfterArmStatus_25);
        {
          hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__AfterArmStatus_25, hlds__make_hlds__state_var__BeforeStatus_24);
        }
        if (hlds__make_hlds__state_var__succeeded)
          {
            MR_Word hlds__make_hlds__state_var__Var_55;

            {
              hlds__make_hlds__state_var__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_55, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_5[1]));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_55, 1) = ((MR_Box) (hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_p_0_1));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_55, 3) = ((MR_Box) (hlds__make_hlds__state_var__AfterAllArmsStatus_23));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_55, 4) = ((MR_Box) (hlds__make_hlds__state_var__AfterArmStatus_25));
            }
            {
              mercury__require__expect_not_3_p_0(hlds__make_hlds__state_var__Var_55, (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterArmStatus = AfterAllArmsStatus");
            }
            switch (MR_tag((MR_Word) hlds__make_hlds__state_var__BeforeStatus_24)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String hlds__make_hlds__state_var__Name_37;
                  MR_String hlds__make_hlds__state_var__UninitVarName_38;

                  {
                    mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__VarSet_4, hlds__make_hlds__state_var__StateVar_22, &hlds__make_hlds__state_var__Name_37);
                  }
                  {
                    hlds__make_hlds__state_var__UninitVarName_38 = mercury__string__f_43_43_2_f_0((MR_String) "!:", hlds__make_hlds__state_var__Name_37);
                  }
                  *hlds__make_hlds__state_var__HeadVar__6_6 = hlds__make_hlds__state_var__CopyGoalsTail_20;
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *hlds__make_hlds__state_var__HeadVar__5_5 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__UninitVarName_38));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__UninitVarNamesTail_19));
                  }
                  *hlds__make_hlds__state_var__HeadVar__7_7 = hlds__make_hlds__state_var__RenamesTail_21;
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "BeforeStatus is updated");
                    return;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__make_hlds__state_var__BeforeVar_99 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__BeforeStatus_24, (MR_Integer) 0)));
                  MR_Word hlds__make_hlds__state_var__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__BeforeStatus_24, (MR_Integer) 2)));

                  switch (MR_tag((MR_Word) hlds__make_hlds__state_var__AfterAllArmsStatus_23)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterAllArmsStatus != status_known (Before == After)");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterAllArmsStatus != status_known (Before == After)");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__AfterAllArmsStatus_23, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word hlds__make_hlds__state_var__AfterAllVar_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__AfterAllArmsStatus_23, (MR_Integer) 1)));
                            MR_Word hlds__make_hlds__state_var__CopyGoal_90;

                            {
                              hlds__make_hlds__state_var__make_copy_goal_3_p_0(hlds__make_hlds__state_var__BeforeVar_99, hlds__make_hlds__state_var__AfterAllVar_89, &hlds__make_hlds__state_var__CopyGoal_90);
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              *hlds__make_hlds__state_var__HeadVar__6_6 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__CopyGoal_90));
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__CopyGoalsTail_20));
                            }
                            *hlds__make_hlds__state_var__HeadVar__5_5 = hlds__make_hlds__state_var__UninitVarNamesTail_19;
                            *hlds__make_hlds__state_var__HeadVar__7_7 = hlds__make_hlds__state_var__RenamesTail_21;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            {
                              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterAllArmsStatus != status_known (Before == After)");
                              return;
                            }
                          }
                          break;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__BeforeStatus_24, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word hlds__make_hlds__state_var__BeforeVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__BeforeStatus_24, (MR_Integer) 1)));

                      switch (MR_tag((MR_Word) hlds__make_hlds__state_var__AfterAllArmsStatus_23)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            {
                              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterAllArmsStatus != status_known (Before == After)");
                              return;
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                        case (MR_Integer) 2:
                          {
                            {
                              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterAllArmsStatus != status_known (Before == After)");
                              return;
                            }
                          }
                          break;
                        case (MR_Integer) 3:
                          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__AfterAllArmsStatus_23, (MR_Integer) 0)))) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              {
                                MR_Word hlds__make_hlds__state_var__AfterAllVar_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__AfterAllArmsStatus_23, (MR_Integer) 1)));
                                MR_Word hlds__make_hlds__state_var__CopyGoal_30;

                                {
                                  hlds__make_hlds__state_var__make_copy_goal_3_p_0(hlds__make_hlds__state_var__BeforeVar_26, hlds__make_hlds__state_var__AfterAllVar_29, &hlds__make_hlds__state_var__CopyGoal_30);
                                }
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  *hlds__make_hlds__state_var__HeadVar__6_6 = base;
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__CopyGoal_30));
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__CopyGoalsTail_20));
                                }
                                *hlds__make_hlds__state_var__HeadVar__5_5 = hlds__make_hlds__state_var__UninitVarNamesTail_19;
                                *hlds__make_hlds__state_var__HeadVar__7_7 = hlds__make_hlds__state_var__RenamesTail_21;
                              }
                              break;
                            case (MR_Integer) 1:
                              {
                                {
                                  mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterAllArmsStatus != status_known (Before == After)");
                                  return;
                                }
                              }
                              break;
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "BeforeStatus is updated");
                        return;
                      }
                    }
                    break;
                }
                break;
            }
          }
        else
          switch (MR_tag((MR_Word) hlds__make_hlds__state_var__AfterArmStatus_25)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterArmStatus = status_unknown");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterArmStatus = status_unknown");
                  return;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterArmStatus = status_known_ro");
                  return;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__AfterArmStatus_25, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word hlds__make_hlds__state_var__AfterArmVar_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__AfterArmStatus_25, (MR_Integer) 1)));

                    switch (MR_tag((MR_Word) hlds__make_hlds__state_var__AfterAllArmsStatus_23)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterAllArmsStatus != status_known (Before != After)");
                            return;
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                      case (MR_Integer) 2:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterAllArmsStatus != status_known (Before != After)");
                            return;
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__AfterAllArmsStatus_23, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              MR_Word hlds__make_hlds__state_var__AfterAllVar_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__AfterAllArmsStatus_23, (MR_Integer) 1)));

                              *hlds__make_hlds__state_var__HeadVar__6_6 = hlds__make_hlds__state_var__CopyGoalsTail_20;
                              *hlds__make_hlds__state_var__HeadVar__5_5 = hlds__make_hlds__state_var__UninitVarNamesTail_19;
                              {
                                hlds__make_hlds__state_var__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], ((MR_Box) (hlds__make_hlds__state_var__AfterArmVar_42)), ((MR_Box) (hlds__make_hlds__state_var__AfterAllVar_81)));
                              }
                              if (hlds__make_hlds__state_var__succeeded)
                                *hlds__make_hlds__state_var__HeadVar__7_7 = hlds__make_hlds__state_var__RenamesTail_21;
                              else
                                {
                                  MR_Word hlds__make_hlds__state_var__Var_80;

                                  {
                                    hlds__make_hlds__state_var__Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_80, 0) = ((MR_Box) (hlds__make_hlds__state_var__AfterArmVar_42));
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_80, 1) = ((MR_Box) (hlds__make_hlds__state_var__AfterAllVar_81));
                                  }
                                  {
                                    MR_Word base;
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    *hlds__make_hlds__state_var__HeadVar__7_7 = base;
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_80));
                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__RenamesTail_21));
                                  }
                                }
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              {
                                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterAllArmsStatus != status_known (Before != After)");
                                return;
                              }
                            }
                            break;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterArmStatus = status_known_updated");
                      return;
                    }
                  }
                  break;
              }
              break;
          }
      }
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__merge_changes_made_by_arms_12_p_0(
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3,
  MR_Word hlds__make_hlds__state_var__HeadVar__4_4,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_0_5,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_6,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_7,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_8,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_0_9,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_10,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_11,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_hlds__state_var__succeeded;

        if ((hlds__make_hlds__state_var__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_12 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_11;
            *hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_10 = hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_0_9;
            *hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_8 = hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_7;
            *hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_6 = hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_0_5;
          }
        else
          {
            MR_Word hlds__make_hlds__state_var__ArmState_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__state_var__ArmStates_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__state_var__Arm0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ArmState_28, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__state_var__StateAfterArm_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ArmState_28, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__state_var__StatusMapAfterArm_39 = (MR_Word) hlds__make_hlds__state_var__StateAfterArm_38;
            MR_Integer hlds__make_hlds__state_var__ArmIdNum_40;
            MR_Word hlds__make_hlds__state_var__ArmId_41;
            MR_Word hlds__make_hlds__state_var__UninitVarNames_42;
            MR_Word hlds__make_hlds__state_var__CopyGoals_43;
            MR_Word hlds__make_hlds__state_var__ArmRenames_44;
            MR_Word hlds__make_hlds__state_var__ArmExpr0_45;
            MR_Word hlds__make_hlds__state_var__ArmInfo0_46;
            MR_Word hlds__make_hlds__state_var__ArmExpr_47;
            MR_Word hlds__make_hlds__state_var__ArmInfo_54;
            MR_Word hlds__make_hlds__state_var__Arm_55;
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_64_64;
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_65_65;
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_66_66;
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_67_67;
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_70_70;
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_71_71;

            {
              mercury__counter__allocate_3_p_0(&hlds__make_hlds__state_var__ArmIdNum_40, hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_7, &hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_64_64);
            }
            hlds__make_hlds__state_var__ArmId_41 = (MR_Word) hlds__make_hlds__state_var__ArmIdNum_40;
            {
              hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_p_0(hlds__make_hlds__state_var__HeadVar__3_3, hlds__make_hlds__state_var__HeadVar__2_2, hlds__make_hlds__state_var__StatusMapAfterArm_39, hlds__make_hlds__state_var__HeadVar__4_4, &hlds__make_hlds__state_var__UninitVarNames_42, &hlds__make_hlds__state_var__CopyGoals_43, &hlds__make_hlds__state_var__ArmRenames_44);
            }
            {
              mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1], ((MR_Box) (hlds__make_hlds__state_var__ArmId_41)), ((MR_Box) (hlds__make_hlds__state_var__ArmRenames_44)), hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_0_9, &hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_65_65);
            }
            hlds__make_hlds__state_var__ArmExpr0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Arm0_37, (MR_Integer) 0)));
            hlds__make_hlds__state_var__ArmInfo0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Arm0_37, (MR_Integer) 1)));
            if ((hlds__make_hlds__state_var__CopyGoals_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                hlds__make_hlds__state_var__ArmExpr_47 = hlds__make_hlds__state_var__ArmExpr0_45;
                hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_66_66 = hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_64_64;
                hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_67_67 = hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_65_65;
              }
            else
              {
                MR_Word hlds__make_hlds__state_var__ArmGoals0_50;
                MR_Word hlds__make_hlds__state_var__Var_69;

                {
                  hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_p_0(hlds__make_hlds__state_var__Arm0_37, &hlds__make_hlds__state_var__ArmGoals0_50, hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_64_64, &hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_66_66, hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_65_65, &hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_67_67);
                }
                {
                  hlds__make_hlds__state_var__Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__state_var__ArmGoals0_50, hlds__make_hlds__state_var__CopyGoals_43);
                }
                {
                  hlds__make_hlds__state_var__ArmExpr_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__ArmExpr_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__ArmExpr_47, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__ArmExpr_47, 2) = ((MR_Box) (hlds__make_hlds__state_var__Var_69));
                }
              }
            if ((hlds__make_hlds__state_var__UninitVarNames_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              hlds__make_hlds__state_var__STATE_VARIABLE_Specs_70_70 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_11;
            else
              {
                MR_Word hlds__make_hlds__state_var__ArmContext_53;

                {
                  hlds__make_hlds__state_var__ArmContext_53 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__make_hlds__state_var__ArmInfo0_46);
                }
                {
                  hlds__make_hlds__state_var__report_missing_inits_in_disjunct_4_p_0(hlds__make_hlds__state_var__ArmContext_53, hlds__make_hlds__state_var__UninitVarNames_42, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_11, &hlds__make_hlds__state_var__STATE_VARIABLE_Specs_70_70);
                }
              }
            {
              hlds__hlds_goal__goal_info_set_goal_id_3_p_0(hlds__make_hlds__state_var__ArmId_41, hlds__make_hlds__state_var__ArmInfo0_46, &hlds__make_hlds__state_var__ArmInfo_54);
            }
            {
              hlds__make_hlds__state_var__Arm_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Arm_55, 0) = ((MR_Box) (hlds__make_hlds__state_var__ArmExpr_47));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Arm_55, 1) = ((MR_Box) (hlds__make_hlds__state_var__ArmInfo_54));
            }
            {
              hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_71_71, 0) = ((MR_Box) (hlds__make_hlds__state_var__Arm_55));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_71_71, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_0_5));
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__make_hlds__state_var__next_value_of_HeadVar__1_1 = hlds__make_hlds__state_var__ArmStates_29;
              MR_Word hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_RevArms_0_5 = hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_71_71;
              MR_Word hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_NextGoalId_0_7 = hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_66_66;
              MR_Word hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_DelayedRenamings_0_9 = hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_67_67;
              MR_Word hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_Specs_0_11 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_70_70;

              hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_11 = hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_Specs_0_11;
              hlds__make_hlds__state_var__STATE_VARIABLE_DelayedRenamings_0_9 = hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_DelayedRenamings_0_9;
              hlds__make_hlds__state_var__STATE_VARIABLE_NextGoalId_0_7 = hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_NextGoalId_0_7;
              hlds__make_hlds__state_var__STATE_VARIABLE_RevArms_0_5 = hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_RevArms_0_5;
              hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_p_0(
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word hlds__make_hlds__state_var__StatusMapAfterArm_2,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_4,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0_5,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_hlds__state_var__succeeded;

        if ((hlds__make_hlds__state_var__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_6 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0_5;
            *hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_4 = hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3;
          }
        else
          {
            MR_Word hlds__make_hlds__state_var__TypeInfo_31_31 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
            MR_Word hlds__make_hlds__state_var__TypeCtorInfo_32_32 = (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0;
            MR_Word hlds__make_hlds__state_var__Before_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__state_var__Befores_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__state_var__SVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Before_14, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__state_var__StatusBefore_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Before_14, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__state_var__StatusAfter_21;
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_27_27;
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_28_28;
            MR_Box hlds__make_hlds__state_var__conv0_StatusAfter_21;

            {
              mercury__map__lookup_3_p_0(hlds__make_hlds__state_var__TypeInfo_31_31, hlds__make_hlds__state_var__TypeCtorInfo_32_32, hlds__make_hlds__state_var__StatusMapAfterArm_2, ((MR_Box) (hlds__make_hlds__state_var__SVar_19)), &hlds__make_hlds__state_var__conv0_StatusAfter_21);
            }
            hlds__make_hlds__state_var__StatusAfter_21 = ((MR_Word) hlds__make_hlds__state_var__conv0_StatusAfter_21);
            {
              hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__StatusBefore_20, hlds__make_hlds__state_var__StatusAfter_21);
            }
            if (hlds__make_hlds__state_var__succeeded)
              {
                hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_28_28 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0_5;
                hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_27_27 = hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3;
              }
            else
              {
                MR_Word hlds__make_hlds__state_var___AlreadyUpdated_22;
                MR_Box hlds__make_hlds__state_var__conv1__AlreadyUpdated_22;

                {
                  hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0(hlds__make_hlds__state_var__TypeInfo_31_31, hlds__make_hlds__state_var__TypeCtorInfo_32_32, hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3, ((MR_Box) (hlds__make_hlds__state_var__SVar_19)), &hlds__make_hlds__state_var__conv1__AlreadyUpdated_22);
                }
                if (hlds__make_hlds__state_var__succeeded)
                  {
                    hlds__make_hlds__state_var___AlreadyUpdated_22 = ((MR_Word) hlds__make_hlds__state_var__conv1__AlreadyUpdated_22);
                    hlds__make_hlds__state_var__succeeded = MR_TRUE;
                  }
                if (hlds__make_hlds__state_var__succeeded)
                  {
                    hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_28_28 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0_5;
                    hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_27_27 = hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3;
                  }
                else
                  {
                    {
                      mercury__map__det_insert_4_p_0(hlds__make_hlds__state_var__TypeInfo_31_31, hlds__make_hlds__state_var__TypeCtorInfo_32_32, ((MR_Box) (hlds__make_hlds__state_var__SVar_19)), ((MR_Box) (hlds__make_hlds__state_var__StatusAfter_21)), hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3, &hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_27_27);
                    }
                    {
                      mercury__map__det_update_4_p_0(hlds__make_hlds__state_var__TypeInfo_31_31, hlds__make_hlds__state_var__TypeCtorInfo_32_32, ((MR_Box) (hlds__make_hlds__state_var__SVar_19)), ((MR_Box) (hlds__make_hlds__state_var__StatusAfter_21)), hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0_5, &hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_28_28);
                    }
                  }
              }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__make_hlds__state_var__next_value_of_HeadVar__1_1 = hlds__make_hlds__state_var__Befores_15;
              MR_Word hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_ChangedStatusMapAfter_0_3 = hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_27_27;
              MR_Word hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_StatusMapAfter_0_5 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_28_28;

              hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0_5 = hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_StatusMapAfter_0_5;
              hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3 = hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_ChangedStatusMapAfter_0_3;
              hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__make_hlds__state_var__compute_status_after_arms_6_p_0(
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_4,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0_5,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_hlds__state_var__succeeded;

        if ((hlds__make_hlds__state_var__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_6 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0_5;
            *hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_4 = hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3;
          }
        else
          {
            MR_Word hlds__make_hlds__state_var__ArmState_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__state_var__ArmStates_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__state_var__StateAfterArm_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ArmState_15, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__state_var__StatusMapAfterArm_21 = (MR_Word) hlds__make_hlds__state_var__StateAfterArm_20;
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_26_26;
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_27_27;
            MR_Word hlds__make_hlds__state_var___Armunct_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ArmState_15, (MR_Integer) 0)));

            {
              hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_p_0(hlds__make_hlds__state_var__HeadVar__1_1, hlds__make_hlds__state_var__StatusMapAfterArm_21, hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3, &hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_26_26, hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0_5, &hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_27_27);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__make_hlds__state_var__next_value_of_HeadVar__2_2 = hlds__make_hlds__state_var__ArmStates_16;
              MR_Word hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_ChangedStatusMapAfter_0_3 = hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_26_26;
              MR_Word hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_StatusMapAfter_0_5 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_27_27;

              hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfter_0_5 = hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_StatusMapAfter_0_5;
              hlds__make_hlds__state_var__STATE_VARIABLE_ChangedStatusMapAfter_0_3 = hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_ChangedStatusMapAfter_0_3;
              hlds__make_hlds__state_var__HeadVar__2_2 = hlds__make_hlds__state_var__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_p_0_1(
  MR_Box hlds__make_hlds__state_var__closure_arg)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;

    {
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var__IntroducedFrom__pred__get_disjuncts_with_empty_states__962__1_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 3))));
    }
    return hlds__make_hlds__state_var__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_p_0(
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_0_2,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_hlds__state_var__succeeded;

        if ((hlds__make_hlds__state_var__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_3 = hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_0_2;
        else
          {
            MR_Word hlds__make_hlds__state_var__GoalState_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__state_var__GoalStates_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__state_var__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__GoalState_7, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__state_var__State_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__GoalState_7, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__state_var__StatusMapAfterGoal_12 = (MR_Word) hlds__make_hlds__state_var__State_11;
            MR_Word hlds__make_hlds__state_var__Var_15;
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_18_18;

            {
              hlds__make_hlds__state_var__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_15, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_3[2]));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_15, 1) = ((MR_Box) (hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_p_0_1));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_15, 3) = ((MR_Box) (hlds__make_hlds__state_var__StatusMapAfterGoal_12));
            }
            {
              mercury__require__expect_3_p_0(hlds__make_hlds__state_var__Var_15, (MR_String) "hlds.make_hlds.state_var", (MR_String) "map after goal not empty");
            }
            {
              hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_18_18, 0) = ((MR_Box) (hlds__make_hlds__state_var__Goal_10));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_18_18, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_0_2));
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__make_hlds__state_var__next_value_of_HeadVar__1_1 = hlds__make_hlds__state_var__GoalStates_8;
              MR_Word hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_RevDisjuncts_0_2 = hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_18_18;

              hlds__make_hlds__state_var__STATE_VARIABLE_RevDisjuncts_0_2 = hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_RevDisjuncts_0_2;
              hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__make_hlds__state_var__finish_svars_for_scope_4_p_0(
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word hlds__make_hlds__state_var__StatusMapBeforeOutside_2,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_0_3,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_hlds__state_var__succeeded;

        if ((hlds__make_hlds__state_var__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_4 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_0_3;
        else
          {
            MR_Word hlds__make_hlds__state_var__SVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__state_var__SVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_17_17;
            MR_Word hlds__make_hlds__state_var__BeforeOutsideStatus_13;
            MR_Box hlds__make_hlds__state_var__conv0_BeforeOutsideStatus_13;

            {
              hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, hlds__make_hlds__state_var__StatusMapBeforeOutside_2, ((MR_Box) (hlds__make_hlds__state_var__SVar_9)), &hlds__make_hlds__state_var__conv0_BeforeOutsideStatus_13);
            }
            if (hlds__make_hlds__state_var__succeeded)
              {
                hlds__make_hlds__state_var__BeforeOutsideStatus_13 = ((MR_Word) hlds__make_hlds__state_var__conv0_BeforeOutsideStatus_13);
                hlds__make_hlds__state_var__succeeded = MR_TRUE;
              }
            if (hlds__make_hlds__state_var__succeeded)
              {
                {
                  mercury__map__det_update_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__SVar_9)), ((MR_Box) (hlds__make_hlds__state_var__BeforeOutsideStatus_13)), hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_0_3, &hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_17_17);
                }
              }
            else
              {
                MR_Word hlds__make_hlds__state_var__Var_14;
                MR_Box hlds__make_hlds__state_var__conv1_Var_14;

                {
                  mercury__map__det_remove_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__SVar_9)), &hlds__make_hlds__state_var__conv1_Var_14, hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_0_3, &hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_17_17);
                }
                hlds__make_hlds__state_var__Var_14 = ((MR_Word) hlds__make_hlds__state_var__conv1_Var_14);
              }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__make_hlds__state_var__next_value_of_HeadVar__1_1 = hlds__make_hlds__state_var__SVars_10;
              MR_Word hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_StatusMapAfterOutside_0_3 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_17_17;

              hlds__make_hlds__state_var__STATE_VARIABLE_StatusMapAfterOutside_0_3 = hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_StatusMapAfterOutside_0_3;
              hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__make_hlds__state_var__prepare_svars_for_scope_7_p_0(
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_0_4,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_5,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_6,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_hlds__state_var__succeeded;

        if ((hlds__make_hlds__state_var__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_7 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_6;
            *hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_5 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_0_4;
          }
        else
          {
            MR_Word hlds__make_hlds__state_var__SVar_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__state_var__SVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_27_27;
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_29_29;
            MR_Word hlds__make_hlds__state_var___OldStatus_22;
            MR_Box hlds__make_hlds__state_var__conv0__OldStatus_22;

            {
              hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_0_4, ((MR_Box) (hlds__make_hlds__state_var__SVar_18)), &hlds__make_hlds__state_var__conv0__OldStatus_22);
            }
            if (hlds__make_hlds__state_var__succeeded)
              {
                hlds__make_hlds__state_var___OldStatus_22 = ((MR_Word) hlds__make_hlds__state_var__conv0__OldStatus_22);
                hlds__make_hlds__state_var__succeeded = MR_TRUE;
              }
            if (hlds__make_hlds__state_var__succeeded)
              {
                MR_String hlds__make_hlds__state_var__Name_46;
                MR_Word hlds__make_hlds__state_var__Pieces_47;
                MR_Word hlds__make_hlds__state_var__Msg_48;
                MR_Word hlds__make_hlds__state_var__Spec_50;
                MR_Word hlds__make_hlds__state_var__Var_53;
                MR_Word hlds__make_hlds__state_var__Var_54;
                MR_Word hlds__make_hlds__state_var__Var_61;
                MR_Word hlds__make_hlds__state_var__Var_62;
                MR_Word hlds__make_hlds__state_var__Var_65;
                MR_Word hlds__make_hlds__state_var__Var_66;
                MR_Word hlds__make_hlds__state_var__Var_74;

                {
                  hlds__make_hlds__state_var__Name_46 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__HeadVar__2_2, hlds__make_hlds__state_var__SVar_18);
                }
                {
                  hlds__make_hlds__state_var__Var_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__Var_54, 0) = ((MR_Box) (hlds__make_hlds__state_var__Name_46));
                }
                {
                  hlds__make_hlds__state_var__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_53, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_54));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[16])));
                }
                {
                  hlds__make_hlds__state_var__Pieces_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[44])));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_47, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_53));
                }
                {
                  hlds__make_hlds__state_var__Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_66, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces_47));
                }
                {
                  hlds__make_hlds__state_var__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_65, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_66));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  hlds__make_hlds__state_var__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_62, 0) = ((MR_Box) (((MR_Integer) 52 | (((MR_Integer) 1 << (MR_Integer) 10)))));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_62, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_65));
                }
                {
                  hlds__make_hlds__state_var__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_61, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_62));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  hlds__make_hlds__state_var__Msg_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_48, 0) = ((MR_Box) (hlds__make_hlds__state_var__HeadVar__1_1));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_48, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_61));
                }
                {
                  hlds__make_hlds__state_var__Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_74, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg_48));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  hlds__make_hlds__state_var__Spec_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_3[0])));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_50, 2) = ((MR_Box) (hlds__make_hlds__state_var__Var_74));
                }
                {
                  hlds__make_hlds__state_var__STATE_VARIABLE_Specs_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__STATE_VARIABLE_Specs_27_27, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_50));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__STATE_VARIABLE_Specs_27_27, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_6));
                }
                {
                  mercury__map__det_update_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__SVar_18)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_0_4, &hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_29_29);
                }
              }
            else
              {
                {
                  mercury__map__det_insert_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__SVar_18)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_0_4, &hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_29_29);
                }
                hlds__make_hlds__state_var__STATE_VARIABLE_Specs_27_27 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_6;
              }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__make_hlds__state_var__next_value_of_HeadVar__3_3 = hlds__make_hlds__state_var__SVars_19;
              MR_Word hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_StatusMap_0_4 = hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_29_29;
              MR_Word hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_Specs_0_6 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_27_27;

              hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_6 = hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_Specs_0_6;
              hlds__make_hlds__state_var__STATE_VARIABLE_StatusMap_0_4 = hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_StatusMap_0_4;
              hlds__make_hlds__state_var__HeadVar__3_3 = hlds__make_hlds__state_var__next_value_of_HeadVar__3_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__make_hlds__state_var__reset_updated_status_2_p_0(
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Status_0_10,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Status_11)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;

    switch (MR_tag((MR_Word) hlds__make_hlds__state_var__STATE_VARIABLE_Status_0_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *hlds__make_hlds__state_var__STATE_VARIABLE_Status_11 = hlds__make_hlds__state_var__STATE_VARIABLE_Status_0_10;
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__make_hlds__state_var__NewProgVar_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__STATE_VARIABLE_Status_0_10, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *hlds__make_hlds__state_var__STATE_VARIABLE_Status_11 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__NewProgVar_8));
          }
        }
        break;
      case (MR_Integer) 2:
        *hlds__make_hlds__state_var__STATE_VARIABLE_Status_11 = hlds__make_hlds__state_var__STATE_VARIABLE_Status_0_10;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__STATE_VARIABLE_Status_0_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *hlds__make_hlds__state_var__STATE_VARIABLE_Status_11 = hlds__make_hlds__state_var__STATE_VARIABLE_Status_0_10;
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__make_hlds__state_var__NewProgVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__STATE_VARIABLE_Status_0_10, (MR_Integer) 2)));
              MR_Word hlds__make_hlds__state_var___OldProgVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__STATE_VARIABLE_Status_0_10, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *hlds__make_hlds__state_var__STATE_VARIABLE_Status_11 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__NewProgVar_14));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_p_0(
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word hlds__make_hlds__state_var__InitialStatusMap_2,
  MR_Word hlds__make_hlds__state_var__FinalStatusMap_3,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_0_4,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_5,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_0_6,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_hlds__state_var__succeeded;

        if ((hlds__make_hlds__state_var__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_7 = hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_0_6;
            *hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_5 = hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_0_4;
          }
        else
          {
            MR_Word hlds__make_hlds__state_var__TypeInfo_49_49 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
            MR_Word hlds__make_hlds__state_var__TypeCtorInfo_50_50 = (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0;
            MR_Word hlds__make_hlds__state_var__Head_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__state_var__Tail_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__state_var__SVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Head_16, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__state_var__FinalHeadVar_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Head_16, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__state_var__InitialStatus_24;
            MR_Word hlds__make_hlds__state_var__FinalStatus_25;
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_44_44;
            MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_45_45;
            MR_Box hlds__make_hlds__state_var__conv0_InitialStatus_24;
            MR_Box hlds__make_hlds__state_var__conv1_FinalStatus_25;

            {
              mercury__map__lookup_3_p_0(hlds__make_hlds__state_var__TypeInfo_49_49, hlds__make_hlds__state_var__TypeCtorInfo_50_50, hlds__make_hlds__state_var__InitialStatusMap_2, ((MR_Box) (hlds__make_hlds__state_var__SVar_22)), &hlds__make_hlds__state_var__conv0_InitialStatus_24);
            }
            hlds__make_hlds__state_var__InitialStatus_24 = ((MR_Word) hlds__make_hlds__state_var__conv0_InitialStatus_24);
            {
              mercury__map__lookup_3_p_0(hlds__make_hlds__state_var__TypeInfo_49_49, hlds__make_hlds__state_var__TypeCtorInfo_50_50, hlds__make_hlds__state_var__FinalStatusMap_3, ((MR_Box) (hlds__make_hlds__state_var__SVar_22)), &hlds__make_hlds__state_var__conv1_FinalStatus_25);
            }
            hlds__make_hlds__state_var__FinalStatus_25 = ((MR_Word) hlds__make_hlds__state_var__conv1_FinalStatus_25);
            switch (MR_tag((MR_Word) hlds__make_hlds__state_var__FinalStatus_25)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_45_45 = hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_0_4;
                  hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_44_44 = hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_0_6;
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.svar_find_final_renames_and_copy_goals\'/7", (MR_String) "updated status");
                    return;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.svar_find_final_renames_and_copy_goals\'/7", (MR_String) "readonly status");
                    return;
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__FinalStatus_25, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word hlds__make_hlds__state_var__LastVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__FinalStatus_25, (MR_Integer) 1)));

                      {
                        hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(hlds__make_hlds__state_var__FinalStatus_25, hlds__make_hlds__state_var__InitialStatus_24);
                      }
                      if (hlds__make_hlds__state_var__succeeded)
                        {
                          MR_Word hlds__make_hlds__state_var__CopyGoal_27;
                          MR_Word hlds__make_hlds__state_var__CopyGoal0_54;
                          MR_Word hlds__make_hlds__state_var__Var_55;
                          MR_Word hlds__make_hlds__state_var__Var_56;

                          {
                            hlds__make_hlds__state_var__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_55, 0) = ((MR_Box) (hlds__make_hlds__state_var__LastVar_26));
                          }
                          {
                            hlds__make_hlds__state_var__Var_56 = mercury__term__context_init_0_f_0();
                          }
                          {
                            hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(hlds__make_hlds__state_var__FinalHeadVar_23, hlds__make_hlds__state_var__Var_55, hlds__make_hlds__state_var__Var_56, (MR_Word) MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_4[2]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__CopyGoal0_54);
                          }
                          {
                            hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 13, hlds__make_hlds__state_var__CopyGoal0_54, &hlds__make_hlds__state_var__CopyGoal_27);
                          }
                          {
                            hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_44_44, 0) = ((MR_Box) (hlds__make_hlds__state_var__CopyGoal_27));
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_44_44, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_0_6));
                          }
                          hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_45_45 = hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_0_4;
                        }
                      else
                        {
                          MR_Word hlds__make_hlds__state_var__Var_46;

                          {
                            hlds__make_hlds__state_var__Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_46, 0) = ((MR_Box) (hlds__make_hlds__state_var__LastVar_26));
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_46, 1) = ((MR_Box) (hlds__make_hlds__state_var__FinalHeadVar_23));
                          }
                          {
                            hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_45_45, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_46));
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_45_45, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_0_4));
                          }
                          hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_44_44 = hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_0_6;
                        }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.svar_find_final_renames_and_copy_goals\'/7", (MR_String) "updated status");
                        return;
                      }
                    }
                    break;
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__make_hlds__state_var__next_value_of_HeadVar__1_1 = hlds__make_hlds__state_var__Tail_17;
              MR_Word hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_FinalSVarSubn_0_4 = hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_45_45;
              MR_Word hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_CopyGoals_0_6 = hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_44_44;

              hlds__make_hlds__state_var__STATE_VARIABLE_CopyGoals_0_6 = hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_CopyGoals_0_6;
              hlds__make_hlds__state_var__STATE_VARIABLE_FinalSVarSubn_0_4 = hlds__make_hlds__state_var__next_value_of_STATE_VARIABLE_FinalSVarSubn_0_4;
              hlds__make_hlds__state_var__HeadVar__1_1 = hlds__make_hlds__state_var__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__make_hlds__state_var__svar_finish_body_8_p_0(
  MR_Word hlds__make_hlds__state_var__Context_9,
  MR_Word hlds__make_hlds__state_var__FinalMap_10,
  MR_Word hlds__make_hlds__state_var__Goals0_11,
  MR_Word * hlds__make_hlds__state_var__Goal_12,
  MR_Word hlds__make_hlds__state_var__InitialSVarState_13,
  MR_Word hlds__make_hlds__state_var__FinalSVarState_14,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_40,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Store_41)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Word hlds__make_hlds__state_var__TypeInfo_69_69 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
    MR_Word hlds__make_hlds__state_var__FinalAssocList_16;
    MR_Word hlds__make_hlds__state_var__InitialSVarStatusMap_17;
    MR_Word hlds__make_hlds__state_var__FinalSVarStatusMap_18;
    MR_Word hlds__make_hlds__state_var__FinalSVarSubn_19;
    MR_Word hlds__make_hlds__state_var__CopyGoals_20;
    MR_Word hlds__make_hlds__state_var__Goals1_21;
    MR_Word hlds__make_hlds__state_var__Goal1_24;
    MR_Word hlds__make_hlds__state_var__GoalExpr1_25;
    MR_Word hlds__make_hlds__state_var__GoalInfo1_26;
    MR_Word hlds__make_hlds__state_var__GoalId1_27;
    MR_Word hlds__make_hlds__state_var__NextGoalId1_28;
    MR_Word hlds__make_hlds__state_var__DelayedRenamingMap1_29;
    MR_Word hlds__make_hlds__state_var__Specs_30;
    MR_Word hlds__make_hlds__state_var__DelayedRenamingMap_33;
    MR_Word hlds__make_hlds__state_var__NextGoalId_34;
    MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Store_44_44;
    MR_Word hlds__make_hlds__state_var__DelayedRenaming0_31;
    MR_Box hlds__make_hlds__state_var__conv0_DelayedRenaming0_31;

    {
      mercury__map__to_assoc_list_2_p_0(hlds__make_hlds__state_var__TypeInfo_69_69, hlds__make_hlds__state_var__TypeInfo_69_69, hlds__make_hlds__state_var__FinalMap_10, &hlds__make_hlds__state_var__FinalAssocList_16);
    }
    hlds__make_hlds__state_var__InitialSVarStatusMap_17 = (MR_Word) hlds__make_hlds__state_var__InitialSVarState_13;
    hlds__make_hlds__state_var__FinalSVarStatusMap_18 = (MR_Word) hlds__make_hlds__state_var__FinalSVarState_14;
    {
      hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_p_0(hlds__make_hlds__state_var__FinalAssocList_16, hlds__make_hlds__state_var__InitialSVarStatusMap_17, hlds__make_hlds__state_var__FinalSVarStatusMap_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__FinalSVarSubn_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__CopyGoals_20);
    }
    if ((hlds__make_hlds__state_var__CopyGoals_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      hlds__make_hlds__state_var__Goals1_21 = hlds__make_hlds__state_var__Goals0_11;
    else
      {
        {
          hlds__make_hlds__state_var__Goals1_21 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__state_var__Goals0_11, hlds__make_hlds__state_var__CopyGoals_20);
        }
      }
    {
      hlds__make_hlds__state_var__svar_flatten_conj_5_p_0(hlds__make_hlds__state_var__Context_9, hlds__make_hlds__state_var__Goals1_21, &hlds__make_hlds__state_var__Goal1_24, hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_40, &hlds__make_hlds__state_var__STATE_VARIABLE_Store_44_44);
    }
    hlds__make_hlds__state_var__GoalExpr1_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Goal1_24, (MR_Integer) 0)));
    hlds__make_hlds__state_var__GoalInfo1_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Goal1_24, (MR_Integer) 1)));
    {
      hlds__make_hlds__state_var__GoalId1_27 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(hlds__make_hlds__state_var__GoalInfo1_26);
    }
    hlds__make_hlds__state_var__NextGoalId1_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_44_44, (MR_Integer) 0)));
    hlds__make_hlds__state_var__DelayedRenamingMap1_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_44_44, (MR_Integer) 1)));
    hlds__make_hlds__state_var__Specs_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_44_44, (MR_Integer) 2)));
    {
      hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1], hlds__make_hlds__state_var__DelayedRenamingMap1_29, ((MR_Box) (hlds__make_hlds__state_var__GoalId1_27)), &hlds__make_hlds__state_var__conv0_DelayedRenaming0_31);
    }
    if (hlds__make_hlds__state_var__succeeded)
      {
        hlds__make_hlds__state_var__DelayedRenaming0_31 = ((MR_Word) hlds__make_hlds__state_var__conv0_DelayedRenaming0_31);
        hlds__make_hlds__state_var__succeeded = MR_TRUE;
      }
    if (hlds__make_hlds__state_var__succeeded)
      {
        MR_Word hlds__make_hlds__state_var__Var_56;

        {
          hlds__make_hlds__state_var__Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_2[0], hlds__make_hlds__state_var__DelayedRenaming0_31, hlds__make_hlds__state_var__FinalSVarSubn_19);
        }
        {
          mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1], ((MR_Box) (hlds__make_hlds__state_var__GoalId1_27)), ((MR_Box) (hlds__make_hlds__state_var__Var_56)), hlds__make_hlds__state_var__DelayedRenamingMap1_29, &hlds__make_hlds__state_var__DelayedRenamingMap_33);
        }
        hlds__make_hlds__state_var__NextGoalId_34 = hlds__make_hlds__state_var__NextGoalId1_28;
        *hlds__make_hlds__state_var__Goal_12 = hlds__make_hlds__state_var__Goal1_24;
      }
    else
    if ((hlds__make_hlds__state_var__FinalSVarSubn_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        hlds__make_hlds__state_var__NextGoalId_34 = hlds__make_hlds__state_var__NextGoalId1_28;
        hlds__make_hlds__state_var__DelayedRenamingMap_33 = hlds__make_hlds__state_var__DelayedRenamingMap1_29;
        *hlds__make_hlds__state_var__Goal_12 = hlds__make_hlds__state_var__Goal1_24;
      }
    else
      {
        MR_Integer hlds__make_hlds__state_var__GoalIdNum_37;
        MR_Word hlds__make_hlds__state_var__GoalId_38;
        MR_Word hlds__make_hlds__state_var__GoalInfo_39;

        {
          mercury__counter__allocate_3_p_0(&hlds__make_hlds__state_var__GoalIdNum_37, hlds__make_hlds__state_var__NextGoalId1_28, &hlds__make_hlds__state_var__NextGoalId_34);
        }
        hlds__make_hlds__state_var__GoalId_38 = (MR_Word) hlds__make_hlds__state_var__GoalIdNum_37;
        {
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1], ((MR_Box) (hlds__make_hlds__state_var__GoalId_38)), ((MR_Box) (hlds__make_hlds__state_var__FinalSVarSubn_19)), hlds__make_hlds__state_var__DelayedRenamingMap1_29, &hlds__make_hlds__state_var__DelayedRenamingMap_33);
        }
        {
          hlds__hlds_goal__goal_info_set_goal_id_3_p_0(hlds__make_hlds__state_var__GoalId_38, hlds__make_hlds__state_var__GoalInfo1_26, &hlds__make_hlds__state_var__GoalInfo_39);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *hlds__make_hlds__state_var__Goal_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__GoalExpr1_25));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__GoalInfo_39));
        }
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *hlds__make_hlds__state_var__STATE_VARIABLE_Store_41 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__NextGoalId_34));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__DelayedRenamingMap_33));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__state_var__Specs_30));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__make_svars_read_only_4_p_0(
  MR_Word hlds__make_hlds__state_var__HeadVar__2_2,
  MR_Word hlds__make_hlds__state_var__HeadVar__3_3,
  MR_Word * hlds__make_hlds__state_var__HeadVar__4_4)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;

    if ((hlds__make_hlds__state_var__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__make_hlds__state_var__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word hlds__make_hlds__state_var__SVar_9;
        MR_Word hlds__make_hlds__state_var__CurStatus_10;
        MR_Word hlds__make_hlds__state_var__CurTail_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__state_var__LambdaTail_13;
        MR_Word hlds__make_hlds__state_var__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__3_3, (MR_Integer) 0)));

        hlds__make_hlds__state_var__SVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_21, (MR_Integer) 0)));
        hlds__make_hlds__state_var__CurStatus_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_21, (MR_Integer) 1)));
        {
          hlds__make_hlds__state_var__make_svars_read_only_4_p_0(hlds__make_hlds__state_var__HeadVar__2_2, hlds__make_hlds__state_var__CurTail_11, &hlds__make_hlds__state_var__LambdaTail_13);
        }
        switch (MR_tag((MR_Word) hlds__make_hlds__state_var__CurStatus_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *hlds__make_hlds__state_var__HeadVar__4_4 = hlds__make_hlds__state_var__LambdaTail_13;
            break;
          case (MR_Integer) 1:
            *hlds__make_hlds__state_var__HeadVar__4_4 = hlds__make_hlds__state_var__LambdaTail_13;
            break;
          case (MR_Integer) 2:
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__make_hlds__state_var__HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_21));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__LambdaTail_13));
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__CurStatus_10, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word hlds__make_hlds__state_var__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__CurStatus_10, (MR_Integer) 1)));
                  MR_Word hlds__make_hlds__state_var__LambdaStatus_20;
                  MR_Word hlds__make_hlds__state_var__Var_22;

                  {
                    hlds__make_hlds__state_var__LambdaStatus_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__LambdaStatus_20, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_18));
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__LambdaStatus_20, 1) = NULL;
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__LambdaStatus_20, 2) = ((MR_Box) (hlds__make_hlds__state_var__HeadVar__2_2));
                  }
                  {
                    hlds__make_hlds__state_var__Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_22, 0) = ((MR_Box) (hlds__make_hlds__state_var__SVar_9));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_22, 1) = ((MR_Box) (hlds__make_hlds__state_var__LambdaStatus_20));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *hlds__make_hlds__state_var__HeadVar__4_4 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_22));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__LambdaTail_13));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__make_hlds__state_var__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__CurStatus_10, (MR_Integer) 1)));
                  MR_Word hlds__make_hlds__state_var__LambdaStatus_25;
                  MR_Word hlds__make_hlds__state_var__Var_26;
                  MR_Word hlds__make_hlds__state_var__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__CurStatus_10, (MR_Integer) 2)));

                  {
                    hlds__make_hlds__state_var__LambdaStatus_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__LambdaStatus_25, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_24));
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__LambdaStatus_25, 1) = NULL;
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__LambdaStatus_25, 2) = ((MR_Box) (hlds__make_hlds__state_var__HeadVar__2_2));
                  }
                  {
                    hlds__make_hlds__state_var__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_26, 0) = ((MR_Box) (hlds__make_hlds__state_var__SVar_9));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_26, 1) = ((MR_Box) (hlds__make_hlds__state_var__LambdaStatus_25));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *hlds__make_hlds__state_var__HeadVar__4_4 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_26));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__LambdaTail_13));
                  }
                }
                break;
            }
            break;
        }
      }
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__svar_prepare_head_term_10_p_0(
  MR_Word hlds__make_hlds__state_var__Term0_11,
  MR_Word * hlds__make_hlds__state_var__Term_12,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_0_46,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_47,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_0_48,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_49,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_50,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_51,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_52,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_53)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;

    if (((MR_tag((MR_Word) hlds__make_hlds__state_var__Term0_11)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word hlds__make_hlds__state_var__Functor_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Term0_11, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__state_var__SubTerms0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Term0_11, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__state_var__Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Term0_11, (MR_Integer) 2)));
        MR_Word hlds__make_hlds__state_var__StateVar_22;
        MR_String hlds__make_hlds__state_var__Var_54;
        MR_Word hlds__make_hlds__state_var__Var_55;
        MR_Word hlds__make_hlds__state_var__Var_56;
        MR_Word hlds__make_hlds__state_var__Var_23;

        hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__Functor_19)) == (MR_mktag((MR_Integer) 0)));
        if (hlds__make_hlds__state_var__succeeded)
          {
            hlds__make_hlds__state_var__Var_54 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Functor_19, (MR_Integer) 0)));
            hlds__make_hlds__state_var__succeeded = (strcmp(hlds__make_hlds__state_var__Var_54, (MR_String) "!.") == 0);
            if (hlds__make_hlds__state_var__succeeded)
              {
                hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__SubTerms0_20)) == (MR_mktag((MR_Integer) 1)));
                if (hlds__make_hlds__state_var__succeeded)
                  {
                    hlds__make_hlds__state_var__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__SubTerms0_20, (MR_Integer) 0)));
                    hlds__make_hlds__state_var__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__SubTerms0_20, (MR_Integer) 1)));
                    hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__Var_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (hlds__make_hlds__state_var__succeeded)
                      {
                        hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__Var_55)) == (MR_mktag((MR_Integer) 1)));
                        if (hlds__make_hlds__state_var__succeeded)
                          {
                            hlds__make_hlds__state_var__StateVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_55, (MR_Integer) 0)));
                            hlds__make_hlds__state_var__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_55, (MR_Integer) 1)));
                          }
                      }
                  }
              }
          }
        if (hlds__make_hlds__state_var__succeeded)
          {
            MR_Word hlds__make_hlds__state_var__StatusMap0_24 = (MR_Word) hlds__make_hlds__state_var__STATE_VARIABLE_State_0_48;
            MR_Word hlds__make_hlds__state_var__StatusMap_28;
            MR_Word hlds__make_hlds__state_var__OldStatus_25;
            MR_Box hlds__make_hlds__state_var__conv0_OldStatus_25;

            {
              hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, hlds__make_hlds__state_var__StatusMap0_24, ((MR_Box) (hlds__make_hlds__state_var__StateVar_22)), &hlds__make_hlds__state_var__conv0_OldStatus_25);
            }
            if (hlds__make_hlds__state_var__succeeded)
              {
                hlds__make_hlds__state_var__OldStatus_25 = ((MR_Word) hlds__make_hlds__state_var__conv0_OldStatus_25);
                hlds__make_hlds__state_var__succeeded = MR_TRUE;
              }
            if (hlds__make_hlds__state_var__succeeded)
              switch (MR_tag((MR_Word) hlds__make_hlds__state_var__OldStatus_25)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word hlds__make_hlds__state_var__TypeCtorInfo_31_176 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                    MR_Word hlds__make_hlds__state_var__Var_26;
                    MR_Word hlds__make_hlds__state_var__Status_27;
                    MR_String hlds__make_hlds__state_var__SVarName_157;
                    MR_String hlds__make_hlds__state_var__ProgVarName_158;
                    MR_String hlds__make_hlds__state_var__Var_179;

                    {
                      hlds__make_hlds__state_var__SVarName_157 = mercury__varset__lookup_name_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_31_176, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_50, hlds__make_hlds__state_var__StateVar_22);
                    }
                    {
                      hlds__make_hlds__state_var__Var_179 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__state_var__SVarName_157, (MR_String) "_0");
                    }
                    {
                      hlds__make_hlds__state_var__ProgVarName_158 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", hlds__make_hlds__state_var__Var_179);
                    }
                    {
                      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_31_176, hlds__make_hlds__state_var__ProgVarName_158, &hlds__make_hlds__state_var__Var_26, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_50, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_51);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *hlds__make_hlds__state_var__Term_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_26));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__Context_21));
                    }
                    {
                      hlds__make_hlds__state_var__Status_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_27, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_26));
                    }
                    {
                      mercury__map__det_update_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__StateVar_22)), ((MR_Box) (hlds__make_hlds__state_var__Status_27)), hlds__make_hlds__state_var__StatusMap0_24, &hlds__make_hlds__state_var__StatusMap_28);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.svar_prepare_head_term\'/10", (MR_String) "status_unknown_updated for !.");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word hlds__make_hlds__state_var__TypeCtorInfo_31_145 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                    MR_Word hlds__make_hlds__state_var__Var_89;
                    MR_Word hlds__make_hlds__state_var__Status_90;
                    MR_String hlds__make_hlds__state_var__SVarName_126;
                    MR_String hlds__make_hlds__state_var__ProgVarName_127;
                    MR_String hlds__make_hlds__state_var__Var_148;

                    {
                      hlds__make_hlds__state_var__SVarName_126 = mercury__varset__lookup_name_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_31_145, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_50, hlds__make_hlds__state_var__StateVar_22);
                    }
                    {
                      hlds__make_hlds__state_var__Var_148 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__state_var__SVarName_126, (MR_String) "_0");
                    }
                    {
                      hlds__make_hlds__state_var__ProgVarName_127 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", hlds__make_hlds__state_var__Var_148);
                    }
                    {
                      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_31_145, hlds__make_hlds__state_var__ProgVarName_127, &hlds__make_hlds__state_var__Var_89, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_50, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_51);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *hlds__make_hlds__state_var__Term_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_89));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__Context_21));
                    }
                    {
                      hlds__make_hlds__state_var__Status_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_90, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_89));
                    }
                    {
                      mercury__map__det_update_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__StateVar_22)), ((MR_Box) (hlds__make_hlds__state_var__Status_90)), hlds__make_hlds__state_var__StatusMap0_24, &hlds__make_hlds__state_var__StatusMap_28);
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__OldStatus_25, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word hlds__make_hlds__state_var__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__OldStatus_25, (MR_Integer) 1)));

                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *hlds__make_hlds__state_var__Term_12 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_88));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__Context_21));
                        }
                        hlds__make_hlds__state_var__StatusMap_28 = hlds__make_hlds__state_var__StatusMap0_24;
                        *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_51 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_50;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.svar_prepare_head_term\'/10", (MR_String) "status_known_updated for !.");
                          return;
                        }
                      }
                      break;
                  }
                  break;
              }
            else
              {
                MR_Word hlds__make_hlds__state_var__TypeCtorInfo_31_207 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                MR_Word hlds__make_hlds__state_var__Var_91;
                MR_Word hlds__make_hlds__state_var__Status_92;
                MR_String hlds__make_hlds__state_var__SVarName_188;
                MR_String hlds__make_hlds__state_var__ProgVarName_189;
                MR_String hlds__make_hlds__state_var__Var_210;

                {
                  hlds__make_hlds__state_var__SVarName_188 = mercury__varset__lookup_name_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_31_207, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_50, hlds__make_hlds__state_var__StateVar_22);
                }
                {
                  hlds__make_hlds__state_var__Var_210 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__state_var__SVarName_188, (MR_String) "_0");
                }
                {
                  hlds__make_hlds__state_var__ProgVarName_189 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", hlds__make_hlds__state_var__Var_210);
                }
                {
                  mercury__varset__new_named_var_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_31_207, hlds__make_hlds__state_var__ProgVarName_189, &hlds__make_hlds__state_var__Var_91, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_50, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_51);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *hlds__make_hlds__state_var__Term_12 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_91));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__Context_21));
                }
                {
                  hlds__make_hlds__state_var__Status_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_92, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_91));
                }
                {
                  mercury__map__det_insert_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__StateVar_22)), ((MR_Box) (hlds__make_hlds__state_var__Status_92)), hlds__make_hlds__state_var__StatusMap0_24, &hlds__make_hlds__state_var__StatusMap_28);
                }
              }
            *hlds__make_hlds__state_var__STATE_VARIABLE_State_49 = (MR_Word) hlds__make_hlds__state_var__StatusMap_28;
            *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_53 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_52;
            *hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_47 = hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_0_46;
          }
        else
          {
            MR_Word hlds__make_hlds__state_var__StateVar_99;
            MR_String hlds__make_hlds__state_var__Var_70;
            MR_Word hlds__make_hlds__state_var__Var_71;
            MR_Word hlds__make_hlds__state_var__Var_72;
            MR_Word hlds__make_hlds__state_var__Var_35;

            hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__Functor_19)) == (MR_mktag((MR_Integer) 0)));
            if (hlds__make_hlds__state_var__succeeded)
              {
                hlds__make_hlds__state_var__Var_70 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Functor_19, (MR_Integer) 0)));
                hlds__make_hlds__state_var__succeeded = (strcmp(hlds__make_hlds__state_var__Var_70, (MR_String) "!:") == 0);
                if (hlds__make_hlds__state_var__succeeded)
                  {
                    hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__SubTerms0_20)) == (MR_mktag((MR_Integer) 1)));
                    if (hlds__make_hlds__state_var__succeeded)
                      {
                        hlds__make_hlds__state_var__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__SubTerms0_20, (MR_Integer) 0)));
                        hlds__make_hlds__state_var__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__SubTerms0_20, (MR_Integer) 1)));
                        hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__Var_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (hlds__make_hlds__state_var__succeeded)
                          {
                            hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__Var_71)) == (MR_mktag((MR_Integer) 1)));
                            if (hlds__make_hlds__state_var__succeeded)
                              {
                                hlds__make_hlds__state_var__StateVar_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_71, (MR_Integer) 0)));
                                hlds__make_hlds__state_var__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_71, (MR_Integer) 1)));
                              }
                          }
                      }
                  }
              }
            if (hlds__make_hlds__state_var__succeeded)
              {
                MR_Word hlds__make_hlds__state_var__TypeInfo_119_119;
                MR_Word hlds__make_hlds__state_var__MaybeOldVar_43;
                MR_Word hlds__make_hlds__state_var__StatusMap0_94;
                MR_Word hlds__make_hlds__state_var__Var_96;
                MR_Word hlds__make_hlds__state_var__Status_97;
                MR_Word hlds__make_hlds__state_var__StatusMap_98;
                MR_Word hlds__make_hlds__state_var__OldStatus_93;
                MR_Box hlds__make_hlds__state_var__conv1_OldStatus_93;

                {
                  hlds__make_hlds__state_var__new_state_var_instance_5_p_0(hlds__make_hlds__state_var__StateVar_99, (MR_Integer) 2, &hlds__make_hlds__state_var__Var_96, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_50, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_51);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *hlds__make_hlds__state_var__Term_12 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_96));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__Context_21));
                }
                hlds__make_hlds__state_var__Status_97 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                hlds__make_hlds__state_var__StatusMap0_94 = (MR_Word) hlds__make_hlds__state_var__STATE_VARIABLE_State_0_48;
                {
                  hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, hlds__make_hlds__state_var__StatusMap0_94, ((MR_Box) (hlds__make_hlds__state_var__StateVar_99)), &hlds__make_hlds__state_var__conv1_OldStatus_93);
                }
                if (hlds__make_hlds__state_var__succeeded)
                  {
                    hlds__make_hlds__state_var__OldStatus_93 = ((MR_Word) hlds__make_hlds__state_var__conv1_OldStatus_93);
                    hlds__make_hlds__state_var__succeeded = MR_TRUE;
                  }
                if (hlds__make_hlds__state_var__succeeded)
                  switch (MR_tag((MR_Word) hlds__make_hlds__state_var__OldStatus_93)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      hlds__make_hlds__state_var__StatusMap_98 = hlds__make_hlds__state_var__StatusMap0_94;
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.svar_prepare_head_term\'/10", (MR_String) "status_unknown_updated for !:");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        {
                          mercury__map__det_update_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__StateVar_99)), ((MR_Box) (hlds__make_hlds__state_var__Status_97)), hlds__make_hlds__state_var__StatusMap0_94, &hlds__make_hlds__state_var__StatusMap_98);
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__OldStatus_93, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          hlds__make_hlds__state_var__StatusMap_98 = hlds__make_hlds__state_var__StatusMap0_94;
                          break;
                        case (MR_Integer) 1:
                          {
                            {
                              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.svar_prepare_head_term\'/10", (MR_String) "status_known_updated for !:");
                              return;
                            }
                          }
                          break;
                      }
                      break;
                  }
                else
                  {
                    {
                      mercury__map__det_insert_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__StateVar_99)), ((MR_Box) (hlds__make_hlds__state_var__Status_97)), hlds__make_hlds__state_var__StatusMap0_94, &hlds__make_hlds__state_var__StatusMap_98);
                    }
                  }
                *hlds__make_hlds__state_var__STATE_VARIABLE_State_49 = (MR_Word) hlds__make_hlds__state_var__StatusMap_98;
                hlds__make_hlds__state_var__TypeInfo_119_119 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
                {
                  mercury__map__search_insert_5_p_0(hlds__make_hlds__state_var__TypeInfo_119_119, hlds__make_hlds__state_var__TypeInfo_119_119, ((MR_Box) (hlds__make_hlds__state_var__StateVar_99)), ((MR_Box) (hlds__make_hlds__state_var__Var_96)), &hlds__make_hlds__state_var__MaybeOldVar_43, hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_0_46, hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_47);
                }
                if ((hlds__make_hlds__state_var__MaybeOldVar_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_53 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_52;
                else
                  {
                    hlds__make_hlds__state_var__report_repeated_head_state_var_5_p_0(hlds__make_hlds__state_var__Context_21, *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_51, hlds__make_hlds__state_var__StateVar_99, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_52, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_53);
                  }
              }
            else
              {
                MR_Word hlds__make_hlds__state_var__SubTerms_45;

                {
                  hlds__make_hlds__state_var__svar_prepare_head_terms_10_p_0(hlds__make_hlds__state_var__SubTerms0_20, &hlds__make_hlds__state_var__SubTerms_45, hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_0_46, hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_47, hlds__make_hlds__state_var__STATE_VARIABLE_State_0_48, hlds__make_hlds__state_var__STATE_VARIABLE_State_49, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_50, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_51, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_52, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_53);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  *hlds__make_hlds__state_var__Term_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Functor_19));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__SubTerms_45));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__state_var__Context_21));
                }
              }
          }
      }
    else
      {
        *hlds__make_hlds__state_var__Term_12 = hlds__make_hlds__state_var__Term0_11;
        *hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_47 = hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_0_46;
        *hlds__make_hlds__state_var__STATE_VARIABLE_State_49 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_48;
        *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_51 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_50;
        *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_53 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_52;
      }
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__svar_prepare_head_terms_10_p_0(
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word * hlds__make_hlds__state_var__HeadVar__2_2,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_0_3,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_4,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_0_5,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_6,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_7,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_8,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_9,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_10)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;

    if ((hlds__make_hlds__state_var__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *hlds__make_hlds__state_var__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_10 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_9;
        *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_8 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_7;
        *hlds__make_hlds__state_var__STATE_VARIABLE_State_6 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_5;
        *hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_4 = hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_0_3;
      }
    else
      {
        MR_Word hlds__make_hlds__state_var__Term0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__state_var__Terms0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__state_var__Term_25;
        MR_Word hlds__make_hlds__state_var__Terms_26;
        MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_39_39;
        MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_40_40;
        MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_41_41;
        MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_42_42;

        {
          hlds__make_hlds__state_var__svar_prepare_head_term_10_p_0(hlds__make_hlds__state_var__Term0_23, &hlds__make_hlds__state_var__Term_25, hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_0_3, &hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_39_39, hlds__make_hlds__state_var__STATE_VARIABLE_State_0_5, &hlds__make_hlds__state_var__STATE_VARIABLE_State_40_40, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_7, &hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_41_41, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_9, &hlds__make_hlds__state_var__STATE_VARIABLE_Specs_42_42);
        }
        {
          hlds__make_hlds__state_var__svar_prepare_head_terms_10_p_0(hlds__make_hlds__state_var__Terms0_24, &hlds__make_hlds__state_var__Terms_26, hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_39_39, hlds__make_hlds__state_var__STATE_VARIABLE_FinalMap_4, hlds__make_hlds__state_var__STATE_VARIABLE_State_40_40, hlds__make_hlds__state_var__STATE_VARIABLE_State_6, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_41_41, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_8, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_42_42, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_10);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__state_var__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Term_25));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__Terms_26));
        }
      }
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__expand_bang_state_pairs_in_clause_2_p_0(
  MR_Word hlds__make_hlds__state_var__ItemClause0_3,
  MR_Word * hlds__make_hlds__state_var__ItemClause_4)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Word hlds__make_hlds__state_var__SymName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause0_3, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__state_var__PredOrFunc_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause0_3, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__state_var__Args0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause0_3, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__state_var__Origin_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause0_3, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__state_var__VarSet_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause0_3, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__state_var__Body_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause0_3, (MR_Integer) 5)));
    MR_Word hlds__make_hlds__state_var__Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause0_3, (MR_Integer) 6)));
    MR_Integer hlds__make_hlds__state_var__SeqNum_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause0_3, (MR_Integer) 7)));
    MR_Word hlds__make_hlds__state_var__Args_13;

    {
      hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(hlds__make_hlds__state_var__Args0_7, &hlds__make_hlds__state_var__Args_13);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *hlds__make_hlds__state_var__ItemClause_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__SymName_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__PredOrFunc_6));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__state_var__Args_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__state_var__Origin_8));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__state_var__VarSet_9));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__state_var__Body_10));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__make_hlds__state_var__Context_11));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__make_hlds__state_var__SeqNum_12));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__expand_bang_state_pairs_in_method_2_p_0_1(
  MR_Box hlds__make_hlds__state_var__closure_arg,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_2)
{
  {
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;
    MR_Word hlds__make_hlds__state_var__conv0_ItemClause_4;

    {
      hlds__make_hlds__state_var__expand_bang_state_pairs_in_clause_2_p_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), &hlds__make_hlds__state_var__conv0_ItemClause_4);
    }
    *hlds__make_hlds__state_var__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__state_var__conv0_ItemClause_4));
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__expand_bang_state_pairs_in_method_2_p_0(
  MR_Word hlds__make_hlds__state_var__IM0_3,
  MR_Word * hlds__make_hlds__state_var__IM_4)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Word hlds__make_hlds__state_var__PredOrFunc_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__IM0_3, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__state_var__Method_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__IM0_3, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__state_var__ProcDef0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__IM0_3, (MR_Integer) 2)));
    MR_Integer hlds__make_hlds__state_var__Arity0_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__IM0_3, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__state_var__Ctxt_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__IM0_3, (MR_Integer) 4)));

    if (((MR_tag((MR_Word) hlds__make_hlds__state_var__ProcDef0_7)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word hlds__make_hlds__state_var__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0;
        MR_Word hlds__make_hlds__state_var__ItemClauses0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__ProcDef0_7, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__state_var__ItemClauses_12;
        MR_Integer hlds__make_hlds__state_var__Arity_16;
        MR_Word hlds__make_hlds__state_var__ProcDef_17;

        {
          mercury__list__map_3_p_0(hlds__make_hlds__state_var__TypeCtorInfo_29_29, hlds__make_hlds__state_var__TypeCtorInfo_29_29, (MR_Word) &hlds__make_hlds__state_var_scalar_common_2[7], hlds__make_hlds__state_var__ItemClauses0_11, &hlds__make_hlds__state_var__ItemClauses_12);
        }
        if ((hlds__make_hlds__state_var__ItemClauses_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          hlds__make_hlds__state_var__Arity_16 = hlds__make_hlds__state_var__Arity0_8;
        else
          {
            MR_Word hlds__make_hlds__state_var__ItemClause_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__ItemClauses_12, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__state_var__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause_13, (MR_Integer) 2)));
            MR_Integer hlds__make_hlds__state_var__Var_19;
            MR_Word hlds__make_hlds__state_var__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__ItemClauses_12, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__state_var__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause_13, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__state_var__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause_13, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__state_var__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause_13, (MR_Integer) 3)));
            MR_Word hlds__make_hlds__state_var__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause_13, (MR_Integer) 4)));
            MR_Word hlds__make_hlds__state_var__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause_13, (MR_Integer) 5)));
            MR_Word hlds__make_hlds__state_var__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause_13, (MR_Integer) 6)));
            MR_Integer hlds__make_hlds__state_var__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ItemClause_13, (MR_Integer) 7)));

            {
              hlds__make_hlds__state_var__Var_19 = mercury__list__length_1_f_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[4], hlds__make_hlds__state_var__Args_15);
            }
            {
              parse_tree__prog_util__adjust_func_arity_3_p_1(hlds__make_hlds__state_var__PredOrFunc_5, &hlds__make_hlds__state_var__Arity_16, hlds__make_hlds__state_var__Var_19);
            }
          }
        {
          hlds__make_hlds__state_var__ProcDef_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__ProcDef_17, 0) = ((MR_Box) (hlds__make_hlds__state_var__ItemClauses_12));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          *hlds__make_hlds__state_var__IM_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__PredOrFunc_5));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__Method_6));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__state_var__ProcDef_17));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__state_var__Arity_16));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__state_var__Ctxt_9));
        }
      }
    else
      *hlds__make_hlds__state_var__IM_4 = hlds__make_hlds__state_var__IM0_3;
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__new_state_var_instance_5_p_0(
  MR_Word hlds__make_hlds__state_var__StateVar_6,
  MR_Word hlds__make_hlds__state_var__NameSource_7,
  MR_Word * hlds__make_hlds__state_var__Var_8,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_13,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_14)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Word hlds__make_hlds__state_var__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_String hlds__make_hlds__state_var__SVarName_10;

    {
      hlds__make_hlds__state_var__SVarName_10 = mercury__varset__lookup_name_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_31_31, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_13, hlds__make_hlds__state_var__StateVar_6);
    }
    switch (hlds__make_hlds__state_var__NameSource_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_String hlds__make_hlds__state_var__ProgVarName_30;

          {
            hlds__make_hlds__state_var__ProgVarName_30 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", hlds__make_hlds__state_var__SVarName_10);
          }
          {
            mercury__varset__new_named_var_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_31_31, hlds__make_hlds__state_var__ProgVarName_30, hlds__make_hlds__state_var__Var_8, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_13, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_14);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_String hlds__make_hlds__state_var__ProgVarName_11;
          MR_String hlds__make_hlds__state_var__Var_34;

          {
            hlds__make_hlds__state_var__Var_34 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__state_var__SVarName_10, (MR_String) "_0");
          }
          {
            hlds__make_hlds__state_var__ProgVarName_11 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", hlds__make_hlds__state_var__Var_34);
          }
          {
            mercury__varset__new_named_var_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_31_31, hlds__make_hlds__state_var__ProgVarName_11, hlds__make_hlds__state_var__Var_8, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_13, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_14);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String hlds__make_hlds__state_var__ProgVarBaseName_12;

          {
            hlds__make_hlds__state_var__ProgVarBaseName_12 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", hlds__make_hlds__state_var__SVarName_10);
          }
          {
            mercury__varset__new_uniquely_named_var_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_31_31, hlds__make_hlds__state_var__ProgVarBaseName_12, hlds__make_hlds__state_var__Var_8, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_13, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_14);
          }
        }
        break;
    }
  }
}

void MR_CALL 
hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(
  MR_Word hlds__make_hlds__state_var__Context_9,
  MR_Word hlds__make_hlds__state_var__StateVar_10,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_24,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_0_25,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_26,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_27,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_28)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_String hlds__make_hlds__state_var__Name_14;
    MR_Word hlds__make_hlds__state_var__Pieces_15;
    MR_Word hlds__make_hlds__state_var__Msg_16;
    MR_Word hlds__make_hlds__state_var__Spec_17;
    MR_Word hlds__make_hlds__state_var__StatusMap0_18;
    MR_Word hlds__make_hlds__state_var__Var_31;
    MR_Word hlds__make_hlds__state_var__Var_32;
    MR_String hlds__make_hlds__state_var__Var_33;
    MR_Word hlds__make_hlds__state_var__Var_35;
    MR_Word hlds__make_hlds__state_var__Var_38;
    MR_Word hlds__make_hlds__state_var__Var_40;
    MR_Word hlds__make_hlds__state_var__Var_43;
    MR_Word hlds__make_hlds__state_var__Var_44;
    MR_String hlds__make_hlds__state_var__Var_45;
    MR_Word hlds__make_hlds__state_var__Var_47;
    MR_Word hlds__make_hlds__state_var__Var_50;
    MR_Word hlds__make_hlds__state_var__Var_51;
    MR_String hlds__make_hlds__state_var__Var_52;
    MR_Word hlds__make_hlds__state_var__Var_58;
    MR_Word hlds__make_hlds__state_var__Var_59;
    MR_Word hlds__make_hlds__state_var__Var_63;
    MR_Word hlds__make_hlds__state_var__OldStatus_19;
    MR_Box hlds__make_hlds__state_var__conv0_OldStatus_19;

    {
      hlds__make_hlds__state_var__Name_14 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23, hlds__make_hlds__state_var__StateVar_10);
    }
    {
      hlds__make_hlds__state_var__Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "!", hlds__make_hlds__state_var__Name_14);
    }
    {
      hlds__make_hlds__state_var__Var_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__Var_32, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_33));
    }
    {
      hlds__make_hlds__state_var__Var_45 = mercury__string__f_43_43_2_f_0((MR_String) "!.", hlds__make_hlds__state_var__Name_14);
    }
    {
      hlds__make_hlds__state_var__Var_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__Var_44, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_45));
    }
    {
      hlds__make_hlds__state_var__Var_52 = mercury__string__f_43_43_2_f_0((MR_String) "!:", hlds__make_hlds__state_var__Name_14);
    }
    {
      hlds__make_hlds__state_var__Var_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__Var_51, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_52));
    }
    {
      hlds__make_hlds__state_var__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_50, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_51));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[43])));
    }
    {
      hlds__make_hlds__state_var__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[40])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_47, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_50));
    }
    {
      hlds__make_hlds__state_var__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_43, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_44));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_43, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_47));
    }
    {
      hlds__make_hlds__state_var__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[37])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_40, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_43));
    }
    {
      hlds__make_hlds__state_var__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_38, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_40));
    }
    {
      hlds__make_hlds__state_var__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[41])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_35, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_38));
    }
    {
      hlds__make_hlds__state_var__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_31, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_32));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_31, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_35));
    }
    {
      hlds__make_hlds__state_var__Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[35])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_15, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_31));
    }
    {
      hlds__make_hlds__state_var__Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_59, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces_15));
    }
    {
      hlds__make_hlds__state_var__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_58, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_59));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__state_var__Msg_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_16, 0) = ((MR_Box) (hlds__make_hlds__state_var__Context_9));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_16, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_58));
    }
    {
      hlds__make_hlds__state_var__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_63, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg_16));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__state_var__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_17, 2) = ((MR_Box) (hlds__make_hlds__state_var__Var_63));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_28 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_27));
    }
    hlds__make_hlds__state_var__StatusMap0_18 = (MR_Word) hlds__make_hlds__state_var__STATE_VARIABLE_State_0_25;
    {
      hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, hlds__make_hlds__state_var__StatusMap0_18, ((MR_Box) (hlds__make_hlds__state_var__StateVar_10)), &hlds__make_hlds__state_var__conv0_OldStatus_19);
    }
    if (hlds__make_hlds__state_var__succeeded)
      {
        hlds__make_hlds__state_var__OldStatus_19 = ((MR_Word) hlds__make_hlds__state_var__conv0_OldStatus_19);
        hlds__make_hlds__state_var__succeeded = MR_TRUE;
      }
    if (hlds__make_hlds__state_var__succeeded)
      {
        hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__OldStatus_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        hlds__make_hlds__state_var__succeeded = !(hlds__make_hlds__state_var__succeeded);
      }
    if (hlds__make_hlds__state_var__succeeded)
      {
        *hlds__make_hlds__state_var__STATE_VARIABLE_State_26 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_25;
        *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_24 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23;
      }
    else
      {
        MR_Word hlds__make_hlds__state_var__TypeCtorInfo_31_99 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        MR_Word hlds__make_hlds__state_var__Var_20;
        MR_Word hlds__make_hlds__state_var__Status_21;
        MR_Word hlds__make_hlds__state_var__StatusMap_22;
        MR_String hlds__make_hlds__state_var__SVarName_80;
        MR_String hlds__make_hlds__state_var__ProgVarName_81;
        MR_String hlds__make_hlds__state_var__Var_102;

        {
          hlds__make_hlds__state_var__SVarName_80 = mercury__varset__lookup_name_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_31_99, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23, hlds__make_hlds__state_var__StateVar_10);
        }
        {
          hlds__make_hlds__state_var__Var_102 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__state_var__SVarName_80, (MR_String) "_0");
        }
        {
          hlds__make_hlds__state_var__ProgVarName_81 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", hlds__make_hlds__state_var__Var_102);
        }
        {
          mercury__varset__new_named_var_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_31_99, hlds__make_hlds__state_var__ProgVarName_81, &hlds__make_hlds__state_var__Var_20, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_24);
        }
        {
          hlds__make_hlds__state_var__Status_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_21, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_20));
        }
        {
          mercury__map__set_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__StateVar_10)), ((MR_Box) (hlds__make_hlds__state_var__Status_21)), hlds__make_hlds__state_var__StatusMap0_18, &hlds__make_hlds__state_var__StatusMap_22);
        }
        *hlds__make_hlds__state_var__STATE_VARIABLE_State_26 = (MR_Word) hlds__make_hlds__state_var__StatusMap_22;
      }
  }
}

void MR_CALL 
hlds__make_hlds__state_var__report_illegal_bang_svar_lambda_arg_5_p_0(
  MR_Word hlds__make_hlds__state_var__Context_6,
  MR_Word hlds__make_hlds__state_var__VarSet_7,
  MR_Word hlds__make_hlds__state_var__StateVar_8,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_14,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_15)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_String hlds__make_hlds__state_var__Name_10;
    MR_Word hlds__make_hlds__state_var__Pieces_11;
    MR_Word hlds__make_hlds__state_var__Msg_12;
    MR_Word hlds__make_hlds__state_var__Spec_13;
    MR_Word hlds__make_hlds__state_var__Var_18;
    MR_Word hlds__make_hlds__state_var__Var_19;
    MR_String hlds__make_hlds__state_var__Var_20;
    MR_Word hlds__make_hlds__state_var__Var_22;
    MR_Word hlds__make_hlds__state_var__Var_25;
    MR_Word hlds__make_hlds__state_var__Var_27;
    MR_Word hlds__make_hlds__state_var__Var_30;
    MR_Word hlds__make_hlds__state_var__Var_31;
    MR_String hlds__make_hlds__state_var__Var_32;
    MR_Word hlds__make_hlds__state_var__Var_34;
    MR_Word hlds__make_hlds__state_var__Var_37;
    MR_Word hlds__make_hlds__state_var__Var_38;
    MR_String hlds__make_hlds__state_var__Var_39;
    MR_Word hlds__make_hlds__state_var__Var_47;
    MR_Word hlds__make_hlds__state_var__Var_48;
    MR_Word hlds__make_hlds__state_var__Var_52;

    {
      hlds__make_hlds__state_var__Name_10 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__VarSet_7, hlds__make_hlds__state_var__StateVar_8);
    }
    {
      hlds__make_hlds__state_var__Var_20 = mercury__string__f_43_43_2_f_0((MR_String) "!", hlds__make_hlds__state_var__Name_10);
    }
    {
      hlds__make_hlds__state_var__Var_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__Var_19, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_20));
    }
    {
      hlds__make_hlds__state_var__Var_32 = mercury__string__f_43_43_2_f_0((MR_String) "!.", hlds__make_hlds__state_var__Name_10);
    }
    {
      hlds__make_hlds__state_var__Var_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__Var_31, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_32));
    }
    {
      hlds__make_hlds__state_var__Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "!:", hlds__make_hlds__state_var__Name_10);
    }
    {
      hlds__make_hlds__state_var__Var_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__Var_38, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_39));
    }
    {
      hlds__make_hlds__state_var__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_37, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_38));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[8])));
    }
    {
      hlds__make_hlds__state_var__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[40])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_34, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_37));
    }
    {
      hlds__make_hlds__state_var__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_30, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_31));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_30, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_34));
    }
    {
      hlds__make_hlds__state_var__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[39])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_27, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_30));
    }
    {
      hlds__make_hlds__state_var__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_25, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_27));
    }
    {
      hlds__make_hlds__state_var__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[38])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_22, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_25));
    }
    {
      hlds__make_hlds__state_var__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_18, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_19));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_18, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_22));
    }
    {
      hlds__make_hlds__state_var__Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[35])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_11, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_18));
    }
    {
      hlds__make_hlds__state_var__Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_48, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces_11));
    }
    {
      hlds__make_hlds__state_var__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_47, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_48));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__state_var__Msg_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_12, 0) = ((MR_Box) (hlds__make_hlds__state_var__Context_6));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_12, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_47));
    }
    {
      hlds__make_hlds__state_var__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_52, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg_12));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__state_var__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_13, 2) = ((MR_Box) (hlds__make_hlds__state_var__Var_52));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_15 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_14));
    }
  }
}

void MR_CALL 
hlds__make_hlds__state_var__report_illegal_func_svar_result_5_p_0(
  MR_Word hlds__make_hlds__state_var__Context_6,
  MR_Word hlds__make_hlds__state_var__VarSet_7,
  MR_Word hlds__make_hlds__state_var__StateVar_8,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_14,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_15)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_String hlds__make_hlds__state_var__Name_10;
    MR_Word hlds__make_hlds__state_var__Pieces_11;
    MR_Word hlds__make_hlds__state_var__Msg_12;
    MR_Word hlds__make_hlds__state_var__Spec_13;
    MR_Word hlds__make_hlds__state_var__Var_18;
    MR_Word hlds__make_hlds__state_var__Var_19;
    MR_String hlds__make_hlds__state_var__Var_20;
    MR_Word hlds__make_hlds__state_var__Var_22;
    MR_Word hlds__make_hlds__state_var__Var_25;
    MR_Word hlds__make_hlds__state_var__Var_27;
    MR_Word hlds__make_hlds__state_var__Var_30;
    MR_Word hlds__make_hlds__state_var__Var_31;
    MR_String hlds__make_hlds__state_var__Var_32;
    MR_Word hlds__make_hlds__state_var__Var_40;
    MR_Word hlds__make_hlds__state_var__Var_41;
    MR_Word hlds__make_hlds__state_var__Var_45;

    {
      hlds__make_hlds__state_var__Name_10 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__VarSet_7, hlds__make_hlds__state_var__StateVar_8);
    }
    {
      hlds__make_hlds__state_var__Var_20 = mercury__string__f_43_43_2_f_0((MR_String) "!", hlds__make_hlds__state_var__Name_10);
    }
    {
      hlds__make_hlds__state_var__Var_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__Var_19, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_20));
    }
    {
      hlds__make_hlds__state_var__Var_32 = mercury__string__f_43_43_2_f_0((MR_String) "!:", hlds__make_hlds__state_var__Name_10);
    }
    {
      hlds__make_hlds__state_var__Var_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__Var_31, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_32));
    }
    {
      hlds__make_hlds__state_var__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_30, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_31));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[8])));
    }
    {
      hlds__make_hlds__state_var__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[37])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_27, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_30));
    }
    {
      hlds__make_hlds__state_var__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_25, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_27));
    }
    {
      hlds__make_hlds__state_var__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[36])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_22, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_25));
    }
    {
      hlds__make_hlds__state_var__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_18, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_19));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_18, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_22));
    }
    {
      hlds__make_hlds__state_var__Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[35])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_11, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_18));
    }
    {
      hlds__make_hlds__state_var__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_41, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces_11));
    }
    {
      hlds__make_hlds__state_var__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_40, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_41));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__state_var__Msg_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_12, 0) = ((MR_Box) (hlds__make_hlds__state_var__Context_6));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_12, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_40));
    }
    {
      hlds__make_hlds__state_var__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_45, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg_12));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__state_var__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_13, 2) = ((MR_Box) (hlds__make_hlds__state_var__Var_45));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_15 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_14));
    }
  }
}

void MR_CALL 
hlds__make_hlds__state_var__report_illegal_state_var_update_7_p_0(
  MR_Word hlds__make_hlds__state_var__Context_8,
  MR_String hlds__make_hlds__state_var__RO_Construct_9,
  MR_Word hlds__make_hlds__state_var__RO_Context_10,
  MR_Word hlds__make_hlds__state_var__VarSet_11,
  MR_Word hlds__make_hlds__state_var__StateVar_12,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_20,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_21)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_String hlds__make_hlds__state_var__Name_14;
    MR_Word hlds__make_hlds__state_var__Pieces1_15;
    MR_Word hlds__make_hlds__state_var__Msg1_16;
    MR_Word hlds__make_hlds__state_var__Pieces2_17;
    MR_Word hlds__make_hlds__state_var__Msg2_18;
    MR_Word hlds__make_hlds__state_var__Spec_19;
    MR_Word hlds__make_hlds__state_var__Var_24;
    MR_Word hlds__make_hlds__state_var__Var_25;
    MR_String hlds__make_hlds__state_var__Var_26;
    MR_Word hlds__make_hlds__state_var__Var_28;
    MR_Word hlds__make_hlds__state_var__Var_31;
    MR_Word hlds__make_hlds__state_var__Var_32;
    MR_Word hlds__make_hlds__state_var__Var_33;
    MR_Word hlds__make_hlds__state_var__Var_36;
    MR_Word hlds__make_hlds__state_var__Var_39;
    MR_Word hlds__make_hlds__state_var__Var_40;
    MR_String hlds__make_hlds__state_var__Var_41;
    MR_Word hlds__make_hlds__state_var__Var_49;
    MR_Word hlds__make_hlds__state_var__Var_50;
    MR_Word hlds__make_hlds__state_var__Var_54;
    MR_Word hlds__make_hlds__state_var__Var_57;
    MR_Word hlds__make_hlds__state_var__Var_58;
    MR_Word hlds__make_hlds__state_var__Var_65;
    MR_Word hlds__make_hlds__state_var__Var_66;
    MR_Word hlds__make_hlds__state_var__Var_70;
    MR_Word hlds__make_hlds__state_var__Var_71;

    {
      hlds__make_hlds__state_var__Name_14 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__VarSet_11, hlds__make_hlds__state_var__StateVar_12);
    }
    {
      hlds__make_hlds__state_var__Var_26 = mercury__string__f_43_43_2_f_0((MR_String) "!:", hlds__make_hlds__state_var__Name_14);
    }
    {
      hlds__make_hlds__state_var__Var_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__Var_25, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_26));
    }
    {
      hlds__make_hlds__state_var__Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Var_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Var_32, 1) = ((MR_Box) (hlds__make_hlds__state_var__RO_Construct_9));
    }
    {
      hlds__make_hlds__state_var__Var_41 = mercury__string__f_43_43_2_f_0((MR_String) "!.", hlds__make_hlds__state_var__Name_14);
    }
    {
      hlds__make_hlds__state_var__Var_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__Var_40, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_41));
    }
    {
      hlds__make_hlds__state_var__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_39, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_40));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[8])));
    }
    {
      hlds__make_hlds__state_var__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[32])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_36, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_39));
    }
    {
      hlds__make_hlds__state_var__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[31])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_33, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_36));
    }
    {
      hlds__make_hlds__state_var__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_31, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_32));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_31, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_33));
    }
    {
      hlds__make_hlds__state_var__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[30])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_28, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_31));
    }
    {
      hlds__make_hlds__state_var__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_24, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_25));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_24, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_28));
    }
    {
      hlds__make_hlds__state_var__Pieces1_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces1_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[29])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces1_15, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_24));
    }
    {
      hlds__make_hlds__state_var__Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_50, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces1_15));
    }
    {
      hlds__make_hlds__state_var__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_49, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_50));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__state_var__Msg1_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg1_16, 0) = ((MR_Box) (hlds__make_hlds__state_var__Context_8));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg1_16, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_49));
    }
    {
      hlds__make_hlds__state_var__Var_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__Var_58, 0) = ((MR_Box) (hlds__make_hlds__state_var__Name_14));
    }
    {
      hlds__make_hlds__state_var__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_57, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_58));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[10])));
    }
    {
      hlds__make_hlds__state_var__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[34])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_54, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_57));
    }
    {
      hlds__make_hlds__state_var__Pieces2_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces2_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[33])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces2_17, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_54));
    }
    {
      hlds__make_hlds__state_var__Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_66, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces2_17));
    }
    {
      hlds__make_hlds__state_var__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_65, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_66));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__state_var__Msg2_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg2_18, 0) = ((MR_Box) (hlds__make_hlds__state_var__RO_Context_10));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg2_18, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_65));
    }
    {
      hlds__make_hlds__state_var__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_71, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg2_18));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__state_var__Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_70, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg1_16));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_70, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_71));
    }
    {
      hlds__make_hlds__state_var__Spec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_19, 2) = ((MR_Box) (hlds__make_hlds__state_var__Var_70));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_21 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_19));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_20));
    }
  }
}

MR_bool MR_CALL 
hlds__make_hlds__state_var__is_term_a_bang_state_pair_3_p_0(
  MR_Word hlds__make_hlds__state_var__ArgTerm_4,
  MR_Word * hlds__make_hlds__state_var__StateVar_5,
  MR_Word * hlds__make_hlds__state_var__Context_6)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__ArgTerm_4)) == (MR_mktag((MR_Integer) 0)));
    MR_Word hlds__make_hlds__state_var__Var_8;
    MR_String hlds__make_hlds__state_var__Var_9;
    MR_Word hlds__make_hlds__state_var__Var_10;
    MR_Word hlds__make_hlds__state_var__Var_11;
    MR_Word hlds__make_hlds__state_var__Var_12;
    MR_Word hlds__make_hlds__state_var__Var_7;

    if (hlds__make_hlds__state_var__succeeded)
      {
        hlds__make_hlds__state_var__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ArgTerm_4, (MR_Integer) 0)));
        hlds__make_hlds__state_var__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ArgTerm_4, (MR_Integer) 1)));
        hlds__make_hlds__state_var__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ArgTerm_4, (MR_Integer) 2)));
        hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__Var_8)) == (MR_mktag((MR_Integer) 0)));
        if (hlds__make_hlds__state_var__succeeded)
          {
            hlds__make_hlds__state_var__Var_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_8, (MR_Integer) 0)));
            hlds__make_hlds__state_var__succeeded = (strcmp(hlds__make_hlds__state_var__Var_9, (MR_String) "!") == 0);
            if (hlds__make_hlds__state_var__succeeded)
              {
                hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__Var_10)) == (MR_mktag((MR_Integer) 1)));
                if (hlds__make_hlds__state_var__succeeded)
                  {
                    hlds__make_hlds__state_var__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_10, (MR_Integer) 0)));
                    hlds__make_hlds__state_var__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_10, (MR_Integer) 1)));
                    hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__Var_11)) == (MR_mktag((MR_Integer) 1)));
                    if (hlds__make_hlds__state_var__succeeded)
                      {
                        *hlds__make_hlds__state_var__StateVar_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_11, (MR_Integer) 0)));
                        *hlds__make_hlds__state_var__Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_11, (MR_Integer) 1)));
                        hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__Var_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
      }
    return hlds__make_hlds__state_var__succeeded;
  }
}

MR_bool MR_CALL 
hlds__make_hlds__state_var__illegal_state_var_func_result_4_p_0(
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word hlds__make_hlds__state_var__ArgTerms_5,
  MR_Word * hlds__make_hlds__state_var__StateVar_6,
  MR_Word * hlds__make_hlds__state_var__Context_7)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__HeadVar__1_1 == (MR_Integer) 1);
    MR_Word hlds__make_hlds__state_var__TypeInfo_9_9;
    MR_Word hlds__make_hlds__state_var__LastArgTerm_8;
    MR_Word hlds__make_hlds__state_var__Var_14;
    MR_String hlds__make_hlds__state_var__Var_15;
    MR_Word hlds__make_hlds__state_var__Var_16;
    MR_Word hlds__make_hlds__state_var__Var_17;
    MR_Word hlds__make_hlds__state_var__Var_18;
    MR_Box hlds__make_hlds__state_var__conv0_LastArgTerm_8;
    MR_Word hlds__make_hlds__state_var__Var_13;

    if (hlds__make_hlds__state_var__succeeded)
      {
        hlds__make_hlds__state_var__TypeInfo_9_9 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[4];
        {
          hlds__make_hlds__state_var__succeeded = mercury__list__last_2_p_0(hlds__make_hlds__state_var__TypeInfo_9_9, hlds__make_hlds__state_var__ArgTerms_5, &hlds__make_hlds__state_var__conv0_LastArgTerm_8);
        }
        if (hlds__make_hlds__state_var__succeeded)
          {
            hlds__make_hlds__state_var__LastArgTerm_8 = ((MR_Word) hlds__make_hlds__state_var__conv0_LastArgTerm_8);
            hlds__make_hlds__state_var__succeeded = MR_TRUE;
          }
        if (hlds__make_hlds__state_var__succeeded)
          {
            hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__LastArgTerm_8)) == (MR_mktag((MR_Integer) 0)));
            if (hlds__make_hlds__state_var__succeeded)
              {
                hlds__make_hlds__state_var__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__LastArgTerm_8, (MR_Integer) 0)));
                hlds__make_hlds__state_var__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__LastArgTerm_8, (MR_Integer) 1)));
                hlds__make_hlds__state_var__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__LastArgTerm_8, (MR_Integer) 2)));
                hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__Var_14)) == (MR_mktag((MR_Integer) 0)));
                if (hlds__make_hlds__state_var__succeeded)
                  {
                    hlds__make_hlds__state_var__Var_15 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_14, (MR_Integer) 0)));
                    hlds__make_hlds__state_var__succeeded = (strcmp(hlds__make_hlds__state_var__Var_15, (MR_String) "!") == 0);
                    if (hlds__make_hlds__state_var__succeeded)
                      {
                        hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__Var_16)) == (MR_mktag((MR_Integer) 1)));
                        if (hlds__make_hlds__state_var__succeeded)
                          {
                            hlds__make_hlds__state_var__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_16, (MR_Integer) 0)));
                            hlds__make_hlds__state_var__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_16, (MR_Integer) 1)));
                            hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__Var_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (hlds__make_hlds__state_var__succeeded)
                              {
                                hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__Var_17)) == (MR_mktag((MR_Integer) 1)));
                                if (hlds__make_hlds__state_var__succeeded)
                                  {
                                    *hlds__make_hlds__state_var__StateVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_17, (MR_Integer) 0)));
                                    *hlds__make_hlds__state_var__Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_17, (MR_Integer) 1)));
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    return hlds__make_hlds__state_var__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0_1(
  MR_Box hlds__make_hlds__state_var__closure_arg,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_2,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3,
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_4,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_5,
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_6)
{
  {
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;
    MR_Word hlds__make_hlds__state_var__conv3_Goal_10;
    MR_Word hlds__make_hlds__state_var__conv2_STATE_VARIABLE_NextGoalId_22;
    MR_Word hlds__make_hlds__state_var__conv1_STATE_VARIABLE_DelayedRenamingMap_24;

    {
      hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), &hlds__make_hlds__state_var__conv3_Goal_10, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_3), &hlds__make_hlds__state_var__conv2_STATE_VARIABLE_NextGoalId_22, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_5), &hlds__make_hlds__state_var__conv1_STATE_VARIABLE_DelayedRenamingMap_24);
    }
    *hlds__make_hlds__state_var__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__state_var__conv3_Goal_10));
    *hlds__make_hlds__state_var__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__state_var__conv2_STATE_VARIABLE_NextGoalId_22));
    *hlds__make_hlds__state_var__wrapper_arg_6 = ((MR_Box) (hlds__make_hlds__state_var__conv1_STATE_VARIABLE_DelayedRenamingMap_24));
  }
}

void MR_CALL 
hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0(
  MR_Word hlds__make_hlds__state_var__Goal_5,
  MR_Word * hlds__make_hlds__state_var__Conjuncts_6,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_18,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Store_19)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Word hlds__make_hlds__state_var__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Goal_5, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__state_var__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Goal_5, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__state_var__Conjuncts0_10;
    MR_Word hlds__make_hlds__state_var__Var_20;

    hlds__make_hlds__state_var__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__state_var__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (hlds__make_hlds__state_var__succeeded)
      {
        hlds__make_hlds__state_var__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__GoalExpr_8, (MR_Integer) 1)));
        hlds__make_hlds__state_var__Conjuncts0_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__GoalExpr_8, (MR_Integer) 2)));
        hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__Var_20 == (MR_Integer) 0);
      }
    if (hlds__make_hlds__state_var__succeeded)
      {
        MR_Word hlds__make_hlds__state_var__NextGoalId0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_18, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__state_var__DelayedRenamingMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_18, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__state_var__Specs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_18, (MR_Integer) 2)));
        MR_Word hlds__make_hlds__state_var__GoalId_14;
        MR_Word hlds__make_hlds__state_var__GoalDelayedRenaming_15;
        MR_Box hlds__make_hlds__state_var__conv0_GoalDelayedRenaming_15;

        {
          hlds__make_hlds__state_var__GoalId_14 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(hlds__make_hlds__state_var__GoalInfo_9);
        }
        {
          hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1], hlds__make_hlds__state_var__DelayedRenamingMap0_12, ((MR_Box) (hlds__make_hlds__state_var__GoalId_14)), &hlds__make_hlds__state_var__conv0_GoalDelayedRenaming_15);
        }
        if (hlds__make_hlds__state_var__succeeded)
          {
            hlds__make_hlds__state_var__GoalDelayedRenaming_15 = ((MR_Word) hlds__make_hlds__state_var__conv0_GoalDelayedRenaming_15);
            hlds__make_hlds__state_var__succeeded = MR_TRUE;
          }
        if (hlds__make_hlds__state_var__succeeded)
          {
            MR_Word hlds__make_hlds__state_var__TypeCtorInfo_32_32;
            MR_Word hlds__make_hlds__state_var__NextGoalId_16;
            MR_Word hlds__make_hlds__state_var__DelayedRenamingMap_17;
            MR_Word hlds__make_hlds__state_var__Var_21;
            MR_Box hlds__make_hlds__state_var__conv5_NextGoalId_16;
            MR_Box hlds__make_hlds__state_var__conv4_DelayedRenamingMap_17;

            {
              hlds__make_hlds__state_var__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_21, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_7[0]));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_21, 1) = ((MR_Box) (hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0_1));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_21, 3) = ((MR_Box) (hlds__make_hlds__state_var__GoalDelayedRenaming_15));
            }
            hlds__make_hlds__state_var__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
            {
              mercury__list__map_foldl2_7_p_0(hlds__make_hlds__state_var__TypeCtorInfo_32_32, hlds__make_hlds__state_var__TypeCtorInfo_32_32, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_2[1], hlds__make_hlds__state_var__Var_21, hlds__make_hlds__state_var__Conjuncts0_10, hlds__make_hlds__state_var__Conjuncts_6, ((MR_Box) (hlds__make_hlds__state_var__NextGoalId0_11)), &hlds__make_hlds__state_var__conv5_NextGoalId_16, ((MR_Box) (hlds__make_hlds__state_var__DelayedRenamingMap0_12)), &hlds__make_hlds__state_var__conv4_DelayedRenamingMap_17);
            }
            hlds__make_hlds__state_var__NextGoalId_16 = ((MR_Word) hlds__make_hlds__state_var__conv5_NextGoalId_16);
            hlds__make_hlds__state_var__DelayedRenamingMap_17 = ((MR_Word) hlds__make_hlds__state_var__conv4_DelayedRenamingMap_17);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              *hlds__make_hlds__state_var__STATE_VARIABLE_Store_19 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__NextGoalId_16));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__DelayedRenamingMap_17));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__state_var__Specs_13));
            }
          }
        else
          {
            *hlds__make_hlds__state_var__Conjuncts_6 = hlds__make_hlds__state_var__Conjuncts0_10;
            *hlds__make_hlds__state_var__STATE_VARIABLE_Store_19 = hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_18;
          }
      }
    else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__state_var__Conjuncts_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Goal_5));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        *hlds__make_hlds__state_var__STATE_VARIABLE_Store_19 = hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_18;
      }
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__svar_flatten_conj_5_p_0_1(
  MR_Box hlds__make_hlds__state_var__closure_arg,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_2,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_3,
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_4)
{
  {
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;
    MR_Word hlds__make_hlds__state_var__conv1_Conjuncts_6;
    MR_Word hlds__make_hlds__state_var__conv0_STATE_VARIABLE_Store_19;

    {
      hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), &hlds__make_hlds__state_var__conv1_Conjuncts_6, ((MR_Word) hlds__make_hlds__state_var__wrapper_arg_3), &hlds__make_hlds__state_var__conv0_STATE_VARIABLE_Store_19);
    }
    *hlds__make_hlds__state_var__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__state_var__conv1_Conjuncts_6));
    *hlds__make_hlds__state_var__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__state_var__conv0_STATE_VARIABLE_Store_19));
  }
}

void MR_CALL 
hlds__make_hlds__state_var__svar_flatten_conj_5_p_0(
  MR_Word hlds__make_hlds__state_var__Context_6,
  MR_Word hlds__make_hlds__state_var__Goals_7,
  MR_Word * hlds__make_hlds__state_var__Goal_8,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_14,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Store_15)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Word hlds__make_hlds__state_var__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    MR_Word hlds__make_hlds__state_var__GoalConjuncts_10;
    MR_Word hlds__make_hlds__state_var__Conjuncts_11;
    MR_Word hlds__make_hlds__state_var__GoalExpr_12;
    MR_Word hlds__make_hlds__state_var__GoalInfo_13;
    MR_Box hlds__make_hlds__state_var__conv2_STATE_VARIABLE_Store_15;

    {
      mercury__list__map_foldl_5_p_0(hlds__make_hlds__state_var__TypeCtorInfo_23_23, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[3], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_store_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_2[6], hlds__make_hlds__state_var__Goals_7, &hlds__make_hlds__state_var__GoalConjuncts_10, ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_14)), &hlds__make_hlds__state_var__conv2_STATE_VARIABLE_Store_15);
    }
    *hlds__make_hlds__state_var__STATE_VARIABLE_Store_15 = ((MR_Word) hlds__make_hlds__state_var__conv2_STATE_VARIABLE_Store_15);
    {
      mercury__list__condense_2_p_0(hlds__make_hlds__state_var__TypeCtorInfo_23_23, hlds__make_hlds__state_var__GoalConjuncts_10, &hlds__make_hlds__state_var__Conjuncts_11);
    }
    {
      hlds__make_hlds__state_var__GoalExpr_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__GoalExpr_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__GoalExpr_12, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__GoalExpr_12, 2) = ((MR_Box) (hlds__make_hlds__state_var__Conjuncts_11));
    }
    {
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__state_var__Context_6, &hlds__make_hlds__state_var__GoalInfo_13);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__make_hlds__state_var__Goal_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__GoalExpr_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__GoalInfo_13));
    }
  }
}

void MR_CALL 
hlds__make_hlds__state_var__lookup_colon_state_var_9_p_0(
  MR_Word hlds__make_hlds__state_var__Context_10,
  MR_Word hlds__make_hlds__state_var__StateVar_11,
  MR_Word * hlds__make_hlds__state_var__Var_12,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_25,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_0_26,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_27,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_28,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_29)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Word hlds__make_hlds__state_var__StatusMap0_16 = (MR_Word) hlds__make_hlds__state_var__STATE_VARIABLE_State_0_26;
    MR_Word hlds__make_hlds__state_var__Status_17;
    MR_Box hlds__make_hlds__state_var__conv0_Status_17;

    {
      hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, hlds__make_hlds__state_var__StatusMap0_16, ((MR_Box) (hlds__make_hlds__state_var__StateVar_11)), &hlds__make_hlds__state_var__conv0_Status_17);
    }
    if (hlds__make_hlds__state_var__succeeded)
      {
        hlds__make_hlds__state_var__Status_17 = ((MR_Word) hlds__make_hlds__state_var__conv0_Status_17);
        hlds__make_hlds__state_var__succeeded = MR_TRUE;
      }
    if (hlds__make_hlds__state_var__succeeded)
      switch (MR_tag((MR_Word) hlds__make_hlds__state_var__Status_17)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word hlds__make_hlds__state_var__TypeCtorInfo_31_179 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            MR_Word hlds__make_hlds__state_var__StatusMap_18;
            MR_Word hlds__make_hlds__state_var__Var_41;
            MR_String hlds__make_hlds__state_var__SVarName_160;
            MR_String hlds__make_hlds__state_var__ProgVarBaseName_162;

            {
              hlds__make_hlds__state_var__SVarName_160 = mercury__varset__lookup_name_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_31_179, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24, hlds__make_hlds__state_var__StateVar_11);
            }
            {
              hlds__make_hlds__state_var__ProgVarBaseName_162 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", hlds__make_hlds__state_var__SVarName_160);
            }
            {
              mercury__varset__new_uniquely_named_var_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_31_179, hlds__make_hlds__state_var__ProgVarBaseName_162, hlds__make_hlds__state_var__Var_12, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_25);
            }
            {
              hlds__make_hlds__state_var__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_41, 0) = ((MR_Box) (*hlds__make_hlds__state_var__Var_12));
            }
            {
              mercury__map__det_update_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__StateVar_11)), ((MR_Box) (hlds__make_hlds__state_var__Var_41)), hlds__make_hlds__state_var__StatusMap0_16, &hlds__make_hlds__state_var__StatusMap_18);
            }
            *hlds__make_hlds__state_var__STATE_VARIABLE_State_27 = (MR_Word) hlds__make_hlds__state_var__StatusMap_18;
            *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_29 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_28;
          }
          break;
        case (MR_Integer) 1:
          {
            *hlds__make_hlds__state_var__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Status_17, (MR_Integer) 0)));
            *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_25 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24;
            *hlds__make_hlds__state_var__STATE_VARIABLE_State_27 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_26;
            *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_29 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_28;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word hlds__make_hlds__state_var__TypeCtorInfo_31_148;
            MR_Word hlds__make_hlds__state_var__RO_Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__Status_17, (MR_Integer) 2)));
            MR_Word hlds__make_hlds__state_var__Var_33;
            MR_Word hlds__make_hlds__state_var__StatusMap_46;
            MR_Word hlds__make_hlds__state_var__OldVar_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__Status_17, (MR_Integer) 0)));
            MR_String hlds__make_hlds__state_var__SVarName_129;
            MR_String hlds__make_hlds__state_var__ProgVarBaseName_131;

            {
              hlds__make_hlds__state_var__report_illegal_state_var_update_7_p_0(hlds__make_hlds__state_var__Context_10, (MR_String) "lambda expression", hlds__make_hlds__state_var__RO_Context_21, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24, hlds__make_hlds__state_var__StateVar_11, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_28, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_29);
            }
            hlds__make_hlds__state_var__TypeCtorInfo_31_148 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            {
              hlds__make_hlds__state_var__SVarName_129 = mercury__varset__lookup_name_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_31_148, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24, hlds__make_hlds__state_var__StateVar_11);
            }
            {
              hlds__make_hlds__state_var__ProgVarBaseName_131 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", hlds__make_hlds__state_var__SVarName_129);
            }
            {
              mercury__varset__new_uniquely_named_var_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_31_148, hlds__make_hlds__state_var__ProgVarBaseName_131, hlds__make_hlds__state_var__Var_12, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_25);
            }
            {
              hlds__make_hlds__state_var__Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Var_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Var_33, 1) = ((MR_Box) (hlds__make_hlds__state_var__OldVar_47));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Var_33, 2) = ((MR_Box) (*hlds__make_hlds__state_var__Var_12));
            }
            {
              mercury__map__det_update_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__StateVar_11)), ((MR_Box) (hlds__make_hlds__state_var__Var_33)), hlds__make_hlds__state_var__StatusMap0_16, &hlds__make_hlds__state_var__StatusMap_46);
            }
            *hlds__make_hlds__state_var__STATE_VARIABLE_State_27 = (MR_Word) hlds__make_hlds__state_var__StatusMap_46;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_17, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word hlds__make_hlds__state_var__TypeCtorInfo_31_117 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                MR_Word hlds__make_hlds__state_var__OldVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_17, (MR_Integer) 1)));
                MR_Word hlds__make_hlds__state_var__Var_37;
                MR_Word hlds__make_hlds__state_var__StatusMap_45;
                MR_String hlds__make_hlds__state_var__SVarName_98;
                MR_String hlds__make_hlds__state_var__ProgVarBaseName_100;

                {
                  hlds__make_hlds__state_var__SVarName_98 = mercury__varset__lookup_name_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_31_117, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24, hlds__make_hlds__state_var__StateVar_11);
                }
                {
                  hlds__make_hlds__state_var__ProgVarBaseName_100 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", hlds__make_hlds__state_var__SVarName_98);
                }
                {
                  mercury__varset__new_uniquely_named_var_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_31_117, hlds__make_hlds__state_var__ProgVarBaseName_100, hlds__make_hlds__state_var__Var_12, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_25);
                }
                {
                  hlds__make_hlds__state_var__Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Var_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Var_37, 1) = ((MR_Box) (hlds__make_hlds__state_var__OldVar_19));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Var_37, 2) = ((MR_Box) (*hlds__make_hlds__state_var__Var_12));
                }
                {
                  mercury__map__det_update_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__StateVar_11)), ((MR_Box) (hlds__make_hlds__state_var__Var_37)), hlds__make_hlds__state_var__StatusMap0_16, &hlds__make_hlds__state_var__StatusMap_45);
                }
                *hlds__make_hlds__state_var__STATE_VARIABLE_State_27 = (MR_Word) hlds__make_hlds__state_var__StatusMap_45;
                *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_29 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_28;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word hlds__make_hlds__state_var___OldVar_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_17, (MR_Integer) 1)));

                *hlds__make_hlds__state_var__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_17, (MR_Integer) 2)));
                *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_25 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24;
                *hlds__make_hlds__state_var__STATE_VARIABLE_State_27 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_26;
                *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_29 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_28;
              }
              break;
          }
          break;
      }
    else
      {
        MR_String hlds__make_hlds__state_var__Name_66;
        MR_Word hlds__make_hlds__state_var__Pieces_67;
        MR_Word hlds__make_hlds__state_var__Msg_68;
        MR_Word hlds__make_hlds__state_var__Spec_69;
        MR_Word hlds__make_hlds__state_var__Var_72;
        MR_Word hlds__make_hlds__state_var__Var_73;
        MR_String hlds__make_hlds__state_var__Var_74;
        MR_String hlds__make_hlds__state_var__Var_76;
        MR_Word hlds__make_hlds__state_var__Var_83;
        MR_Word hlds__make_hlds__state_var__Var_84;
        MR_Word hlds__make_hlds__state_var__Var_88;

        {
          hlds__make_hlds__state_var__Name_66 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24, hlds__make_hlds__state_var__StateVar_11);
        }
        {
          hlds__make_hlds__state_var__Var_76 = mercury__string__f_43_43_2_f_0((MR_String) ":", hlds__make_hlds__state_var__Name_66);
        }
        {
          hlds__make_hlds__state_var__Var_74 = mercury__string__f_43_43_2_f_0((MR_String) "!", hlds__make_hlds__state_var__Var_76);
        }
        {
          hlds__make_hlds__state_var__Var_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__Var_73, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_74));
        }
        {
          hlds__make_hlds__state_var__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_72, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_73));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[12])));
        }
        {
          hlds__make_hlds__state_var__Pieces_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[28])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_67, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_72));
        }
        {
          hlds__make_hlds__state_var__Var_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_84, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces_67));
        }
        {
          hlds__make_hlds__state_var__Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_83, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_84));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__state_var__Msg_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_68, 0) = ((MR_Box) (hlds__make_hlds__state_var__Context_10));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_68, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_83));
        }
        {
          hlds__make_hlds__state_var__Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_88, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg_68));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__state_var__Spec_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_69, 2) = ((MR_Box) (hlds__make_hlds__state_var__Var_88));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_29 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_69));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_28));
        }
        *hlds__make_hlds__state_var__Var_12 = hlds__make_hlds__state_var__StateVar_11;
        *hlds__make_hlds__state_var__STATE_VARIABLE_State_27 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_26;
        *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_25 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24;
      }
  }
}

void MR_CALL 
hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(
  MR_Word hlds__make_hlds__state_var__Context_10,
  MR_Word hlds__make_hlds__state_var__StateVar_11,
  MR_Word * hlds__make_hlds__state_var__Var_12,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_24,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_0_25,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_26,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_27,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_28)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Word hlds__make_hlds__state_var__StatusMap0_16 = (MR_Word) hlds__make_hlds__state_var__STATE_VARIABLE_State_0_25;
    MR_Word hlds__make_hlds__state_var__Status_17;
    MR_Box hlds__make_hlds__state_var__conv0_Status_17;

    {
      hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, hlds__make_hlds__state_var__StatusMap0_16, ((MR_Box) (hlds__make_hlds__state_var__StateVar_11)), &hlds__make_hlds__state_var__conv0_Status_17);
    }
    if (hlds__make_hlds__state_var__succeeded)
      {
        hlds__make_hlds__state_var__Status_17 = ((MR_Word) hlds__make_hlds__state_var__conv0_Status_17);
        hlds__make_hlds__state_var__succeeded = MR_TRUE;
      }
    if (hlds__make_hlds__state_var__succeeded)
      switch (MR_tag((MR_Word) hlds__make_hlds__state_var__Status_17)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word hlds__make_hlds__state_var__TypeCtorInfo_31_107;
            MR_Word hlds__make_hlds__state_var__StatusMap_18;
            MR_Word hlds__make_hlds__state_var__Var_37;
            MR_String hlds__make_hlds__state_var__Name_57;
            MR_Word hlds__make_hlds__state_var__Pieces_58;
            MR_Word hlds__make_hlds__state_var__Msg_59;
            MR_Word hlds__make_hlds__state_var__Spec_60;
            MR_Word hlds__make_hlds__state_var__Var_63;
            MR_Word hlds__make_hlds__state_var__Var_64;
            MR_String hlds__make_hlds__state_var__Var_65;
            MR_Word hlds__make_hlds__state_var__Var_73;
            MR_Word hlds__make_hlds__state_var__Var_74;
            MR_Word hlds__make_hlds__state_var__Var_78;
            MR_String hlds__make_hlds__state_var__SVarName_88;
            MR_String hlds__make_hlds__state_var__ProgVarBaseName_90;

            {
              hlds__make_hlds__state_var__Name_57 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23, hlds__make_hlds__state_var__StateVar_11);
            }
            {
              hlds__make_hlds__state_var__Var_65 = mercury__string__f_43_43_2_f_0((MR_String) "!.", hlds__make_hlds__state_var__Name_57);
            }
            {
              hlds__make_hlds__state_var__Var_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__Var_64, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_65));
            }
            {
              hlds__make_hlds__state_var__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_63, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_64));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[8])));
            }
            {
              hlds__make_hlds__state_var__Pieces_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[27])));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_58, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_63));
            }
            {
              hlds__make_hlds__state_var__Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_74, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces_58));
            }
            {
              hlds__make_hlds__state_var__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_73, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_74));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__state_var__Msg_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_59, 0) = ((MR_Box) (hlds__make_hlds__state_var__Context_10));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_59, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_73));
            }
            {
              hlds__make_hlds__state_var__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_78, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg_59));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__state_var__Spec_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_60, 2) = ((MR_Box) (hlds__make_hlds__state_var__Var_78));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_28 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_60));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_27));
            }
            hlds__make_hlds__state_var__TypeCtorInfo_31_107 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            {
              hlds__make_hlds__state_var__SVarName_88 = mercury__varset__lookup_name_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_31_107, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23, hlds__make_hlds__state_var__StateVar_11);
            }
            {
              hlds__make_hlds__state_var__ProgVarBaseName_90 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", hlds__make_hlds__state_var__SVarName_88);
            }
            {
              mercury__varset__new_uniquely_named_var_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_31_107, hlds__make_hlds__state_var__ProgVarBaseName_90, hlds__make_hlds__state_var__Var_12, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_24);
            }
            {
              hlds__make_hlds__state_var__Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Var_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Var_37, 1) = ((MR_Box) (*hlds__make_hlds__state_var__Var_12));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Var_37, 2) = ((MR_Box) (*hlds__make_hlds__state_var__Var_12));
            }
            {
              mercury__map__det_update_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__StateVar_11)), ((MR_Box) (hlds__make_hlds__state_var__Var_37)), hlds__make_hlds__state_var__StatusMap0_16, &hlds__make_hlds__state_var__StatusMap_18);
            }
            *hlds__make_hlds__state_var__STATE_VARIABLE_State_26 = (MR_Word) hlds__make_hlds__state_var__StatusMap_18;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__make_hlds__state_var__TypeCtorInfo_31_138;
            MR_Word hlds__make_hlds__state_var__NewVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Status_17, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__state_var__Var_32;
            MR_Word hlds__make_hlds__state_var__StatusMap_42;
            MR_String hlds__make_hlds__state_var__SVarName_119;
            MR_String hlds__make_hlds__state_var__ProgVarBaseName_121;

            {
              hlds__make_hlds__state_var__report_uninitialized_state_var_5_p_0(hlds__make_hlds__state_var__Context_10, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23, hlds__make_hlds__state_var__StateVar_11, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_27, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_28);
            }
            hlds__make_hlds__state_var__TypeCtorInfo_31_138 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            {
              hlds__make_hlds__state_var__SVarName_119 = mercury__varset__lookup_name_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_31_138, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23, hlds__make_hlds__state_var__StateVar_11);
            }
            {
              hlds__make_hlds__state_var__ProgVarBaseName_121 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", hlds__make_hlds__state_var__SVarName_119);
            }
            {
              mercury__varset__new_uniquely_named_var_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_31_138, hlds__make_hlds__state_var__ProgVarBaseName_121, hlds__make_hlds__state_var__Var_12, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_24);
            }
            {
              hlds__make_hlds__state_var__Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Var_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Var_32, 1) = ((MR_Box) (*hlds__make_hlds__state_var__Var_12));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Var_32, 2) = ((MR_Box) (hlds__make_hlds__state_var__NewVar_19));
            }
            {
              mercury__map__det_update_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__StateVar_11)), ((MR_Box) (hlds__make_hlds__state_var__Var_32)), hlds__make_hlds__state_var__StatusMap0_16, &hlds__make_hlds__state_var__StatusMap_42);
            }
            *hlds__make_hlds__state_var__STATE_VARIABLE_State_26 = (MR_Word) hlds__make_hlds__state_var__StatusMap_42;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word hlds__make_hlds__state_var__Var_21;

            *hlds__make_hlds__state_var__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__Status_17, (MR_Integer) 0)));
            hlds__make_hlds__state_var__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__Status_17, (MR_Integer) 2)));
            *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_24 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23;
            *hlds__make_hlds__state_var__STATE_VARIABLE_State_26 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_25;
            *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_28 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_27;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_17, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *hlds__make_hlds__state_var__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_17, (MR_Integer) 1)));
                *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_24 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23;
                *hlds__make_hlds__state_var__STATE_VARIABLE_State_26 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_25;
                *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_28 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_27;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word hlds__make_hlds__state_var__Var_22;

                *hlds__make_hlds__state_var__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_17, (MR_Integer) 1)));
                hlds__make_hlds__state_var__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__Status_17, (MR_Integer) 2)));
                *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_24 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23;
                *hlds__make_hlds__state_var__STATE_VARIABLE_State_26 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_25;
                *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_28 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_27;
              }
              break;
          }
          break;
      }
    else
      {
        {
          hlds__make_hlds__state_var__report_non_visible_state_var_6_p_0((MR_String) ".", hlds__make_hlds__state_var__Context_10, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23, hlds__make_hlds__state_var__StateVar_11, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_27, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_28);
        }
        *hlds__make_hlds__state_var__Var_12 = hlds__make_hlds__state_var__StateVar_11;
        *hlds__make_hlds__state_var__STATE_VARIABLE_State_26 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_25;
        *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_24 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_23;
      }
  }
}

void MR_CALL 
hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(
  MR_Word hlds__make_hlds__state_var__Arg0_9,
  MR_Word * hlds__make_hlds__state_var__Arg_10,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_19,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_20,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_0_21,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_22,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_23,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_24)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__Arg0_9)) == (MR_mktag((MR_Integer) 0)));
    MR_Word hlds__make_hlds__state_var__StateVar_14;
    MR_Word hlds__make_hlds__state_var__Context_16;
    MR_Word hlds__make_hlds__state_var__Var_25;
    MR_String hlds__make_hlds__state_var__Var_26;
    MR_Word hlds__make_hlds__state_var__Var_27;
    MR_Word hlds__make_hlds__state_var__Var_28;
    MR_Word hlds__make_hlds__state_var__Var_29;
    MR_Word hlds__make_hlds__state_var__Var_15;

    if (hlds__make_hlds__state_var__succeeded)
      {
        hlds__make_hlds__state_var__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Arg0_9, (MR_Integer) 0)));
        hlds__make_hlds__state_var__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Arg0_9, (MR_Integer) 1)));
        hlds__make_hlds__state_var__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Arg0_9, (MR_Integer) 2)));
        hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__Var_25)) == (MR_mktag((MR_Integer) 0)));
        if (hlds__make_hlds__state_var__succeeded)
          {
            hlds__make_hlds__state_var__Var_26 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_25, (MR_Integer) 0)));
            hlds__make_hlds__state_var__succeeded = (strcmp(hlds__make_hlds__state_var__Var_26, (MR_String) "!.") == 0);
            if (hlds__make_hlds__state_var__succeeded)
              {
                hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__Var_27)) == (MR_mktag((MR_Integer) 1)));
                if (hlds__make_hlds__state_var__succeeded)
                  {
                    hlds__make_hlds__state_var__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_27, (MR_Integer) 0)));
                    hlds__make_hlds__state_var__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_27, (MR_Integer) 1)));
                    hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__Var_28)) == (MR_mktag((MR_Integer) 1)));
                    if (hlds__make_hlds__state_var__succeeded)
                      {
                        hlds__make_hlds__state_var__StateVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_28, (MR_Integer) 0)));
                        hlds__make_hlds__state_var__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_28, (MR_Integer) 1)));
                        hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__Var_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
      }
    if (hlds__make_hlds__state_var__succeeded)
      {
        MR_Word hlds__make_hlds__state_var__Var_17;
        MR_Word hlds__make_hlds__state_var__Var_33;

        {
          hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(hlds__make_hlds__state_var__Context_16, hlds__make_hlds__state_var__StateVar_14, &hlds__make_hlds__state_var__Var_17, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_19, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_20, hlds__make_hlds__state_var__STATE_VARIABLE_State_0_21, hlds__make_hlds__state_var__STATE_VARIABLE_State_22, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_23, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_24);
        }
        {
          hlds__make_hlds__state_var__Var_33 = mercury__term__context_init_0_f_0();
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__state_var__Arg_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_17));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_33));
        }
      }
    else
      {
        MR_Word hlds__make_hlds__state_var__StateVar_44;
        MR_Word hlds__make_hlds__state_var__Context_45;
        MR_Word hlds__make_hlds__state_var__Var_34;
        MR_String hlds__make_hlds__state_var__Var_35;
        MR_Word hlds__make_hlds__state_var__Var_36;
        MR_Word hlds__make_hlds__state_var__Var_37;
        MR_Word hlds__make_hlds__state_var__Var_38;
        MR_Word hlds__make_hlds__state_var__Var_18;

        hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__Arg0_9)) == (MR_mktag((MR_Integer) 0)));
        if (hlds__make_hlds__state_var__succeeded)
          {
            hlds__make_hlds__state_var__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Arg0_9, (MR_Integer) 0)));
            hlds__make_hlds__state_var__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Arg0_9, (MR_Integer) 1)));
            hlds__make_hlds__state_var__Context_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Arg0_9, (MR_Integer) 2)));
            hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__Var_34)) == (MR_mktag((MR_Integer) 0)));
            if (hlds__make_hlds__state_var__succeeded)
              {
                hlds__make_hlds__state_var__Var_35 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_34, (MR_Integer) 0)));
                hlds__make_hlds__state_var__succeeded = (strcmp(hlds__make_hlds__state_var__Var_35, (MR_String) "!:") == 0);
                if (hlds__make_hlds__state_var__succeeded)
                  {
                    hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__Var_36)) == (MR_mktag((MR_Integer) 1)));
                    if (hlds__make_hlds__state_var__succeeded)
                      {
                        hlds__make_hlds__state_var__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_36, (MR_Integer) 0)));
                        hlds__make_hlds__state_var__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_36, (MR_Integer) 1)));
                        hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__Var_37)) == (MR_mktag((MR_Integer) 1)));
                        if (hlds__make_hlds__state_var__succeeded)
                          {
                            hlds__make_hlds__state_var__StateVar_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_37, (MR_Integer) 0)));
                            hlds__make_hlds__state_var__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_37, (MR_Integer) 1)));
                            hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__Var_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
          }
        if (hlds__make_hlds__state_var__succeeded)
          {
            MR_Word hlds__make_hlds__state_var__Var_42;
            MR_Word hlds__make_hlds__state_var__Var_43;

            {
              hlds__make_hlds__state_var__lookup_colon_state_var_9_p_0(hlds__make_hlds__state_var__Context_45, hlds__make_hlds__state_var__StateVar_44, &hlds__make_hlds__state_var__Var_43, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_19, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_20, hlds__make_hlds__state_var__STATE_VARIABLE_State_0_21, hlds__make_hlds__state_var__STATE_VARIABLE_State_22, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_23, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_24);
            }
            {
              hlds__make_hlds__state_var__Var_42 = mercury__term__context_init_0_f_0();
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__make_hlds__state_var__Arg_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_43));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_42));
            }
          }
        else
          {
            *hlds__make_hlds__state_var__Arg_10 = hlds__make_hlds__state_var__Arg0_9;
            *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_24 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_23;
            *hlds__make_hlds__state_var__STATE_VARIABLE_State_22 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_21;
            *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_20 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_19;
          }
      }
  }
}

void MR_CALL 
hlds__make_hlds__state_var__substitute_state_var_mappings_8_p_0(
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word * hlds__make_hlds__state_var__HeadVar__2_2,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_3,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_4,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_0_5,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_6,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_7,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_8)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;

    if ((hlds__make_hlds__state_var__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *hlds__make_hlds__state_var__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_8 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_7;
        *hlds__make_hlds__state_var__STATE_VARIABLE_State_6 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_5;
        *hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_4 = hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_3;
      }
    else
      {
        MR_Word hlds__make_hlds__state_var__Arg0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__state_var__Args0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__state_var__Arg_20;
        MR_Word hlds__make_hlds__state_var__Args_21;
        MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_31_31;
        MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_32_32;
        MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_33_33;

        {
          hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__state_var__Arg0_18, &hlds__make_hlds__state_var__Arg_20, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_3, &hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_31_31, hlds__make_hlds__state_var__STATE_VARIABLE_State_0_5, &hlds__make_hlds__state_var__STATE_VARIABLE_State_32_32, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_7, &hlds__make_hlds__state_var__STATE_VARIABLE_Specs_33_33);
        }
        {
          hlds__make_hlds__state_var__substitute_state_var_mappings_8_p_0(hlds__make_hlds__state_var__Args0_19, &hlds__make_hlds__state_var__Args_21, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_31_31, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_4, hlds__make_hlds__state_var__STATE_VARIABLE_State_32_32, hlds__make_hlds__state_var__STATE_VARIABLE_State_6, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_33_33, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_8);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__state_var__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Arg_20));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__Args_21));
        }
      }
  }
}

void MR_CALL 
hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_p_0(
  MR_Word hlds__make_hlds__state_var___Context_11,
  MR_Word hlds__make_hlds__state_var__InnerScopeInfo_12,
  MR_Word * hlds__make_hlds__state_var__InnerDIVar_13,
  MR_Word * hlds__make_hlds__state_var__InnerUOVar_14,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_0_28,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_29,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_30,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_31,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_32,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_33)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;

    {
      hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_10_p_0(hlds__make_hlds__state_var__InnerScopeInfo_12, hlds__make_hlds__state_var__InnerDIVar_13, hlds__make_hlds__state_var__InnerUOVar_14, hlds__make_hlds__state_var__STATE_VARIABLE_State_0_28, hlds__make_hlds__state_var__STATE_VARIABLE_State_29, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_30, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_31, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_32, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_33);
    }
  }
}

void MR_CALL 
hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_p_0(
  MR_Word hlds__make_hlds__state_var___Context_10,
  MR_Word hlds__make_hlds__state_var__InnerStateVar_11,
  MR_Word * hlds__make_hlds__state_var__InnerScopeInfo_12,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_0_20,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_21,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_22,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_23,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_24,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_25)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;

    {
      hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_115_116_97_114_116_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_9_p_0(hlds__make_hlds__state_var__InnerStateVar_11, hlds__make_hlds__state_var__InnerScopeInfo_12, hlds__make_hlds__state_var__STATE_VARIABLE_State_0_20, hlds__make_hlds__state_var__STATE_VARIABLE_State_21, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_22, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_23, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_24, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_25);
    }
  }
}

void MR_CALL 
hlds__make_hlds__state_var__svar_finish_outer_atomic_scope_3_p_0(
  MR_Word hlds__make_hlds__state_var__OuterScopeInfo_4,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_0_11,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_12)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;

    if ((hlds__make_hlds__state_var__OuterScopeInfo_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__make_hlds__state_var__STATE_VARIABLE_State_12 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_11;
    else
      {
        MR_Word hlds__make_hlds__state_var__OuterStateVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__OuterScopeInfo_4, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__state_var__AfterStatus_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__OuterScopeInfo_4, (MR_Integer) 2)));
        MR_Word hlds__make_hlds__state_var__StatusMap0_9 = (MR_Word) hlds__make_hlds__state_var__STATE_VARIABLE_State_0_11;
        MR_Word hlds__make_hlds__state_var__StatusMap_10;
        MR_Word hlds__make_hlds__state_var___BeforeStatus_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__OuterScopeInfo_4, (MR_Integer) 1)));

        {
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__OuterStateVar_6)), ((MR_Box) (hlds__make_hlds__state_var__AfterStatus_8)), hlds__make_hlds__state_var__StatusMap0_9, &hlds__make_hlds__state_var__StatusMap_10);
        }
        *hlds__make_hlds__state_var__STATE_VARIABLE_State_12 = (MR_Word) hlds__make_hlds__state_var__StatusMap_10;
      }
  }
}

void MR_CALL 
hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_p_0(
  MR_Word hlds__make_hlds__state_var__Context_12,
  MR_Word hlds__make_hlds__state_var__OuterStateVar_13,
  MR_Word * hlds__make_hlds__state_var__OuterDIVar_14,
  MR_Word * hlds__make_hlds__state_var__OuterUOVar_15,
  MR_Word * hlds__make_hlds__state_var__OuterScopeInfo_16,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_0_29,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_30,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_31,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_32,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_33,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_34)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Word hlds__make_hlds__state_var__StatusMap0_20 = (MR_Word) hlds__make_hlds__state_var__STATE_VARIABLE_State_0_29;
    MR_Word hlds__make_hlds__state_var__BeforeStatus_21;
    MR_Word hlds__make_hlds__state_var__StatusMap_22;
    MR_Box hlds__make_hlds__state_var__conv0_BeforeStatus_21;

    {
      hlds__make_hlds__state_var__succeeded = mercury__map__remove_4_p_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0, ((MR_Box) (hlds__make_hlds__state_var__OuterStateVar_13)), &hlds__make_hlds__state_var__conv0_BeforeStatus_21, hlds__make_hlds__state_var__StatusMap0_20, &hlds__make_hlds__state_var__StatusMap_22);
    }
    if (hlds__make_hlds__state_var__succeeded)
      {
        hlds__make_hlds__state_var__BeforeStatus_21 = ((MR_Word) hlds__make_hlds__state_var__conv0_BeforeStatus_21);
        hlds__make_hlds__state_var__succeeded = MR_TRUE;
      }
    if (hlds__make_hlds__state_var__succeeded)
      {
        *hlds__make_hlds__state_var__STATE_VARIABLE_State_30 = (MR_Word) hlds__make_hlds__state_var__StatusMap_22;
        switch (MR_tag((MR_Word) hlds__make_hlds__state_var__BeforeStatus_21)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__make_hlds__state_var__TypeCtorInfo_31_179;
              MR_Word hlds__make_hlds__state_var__TypeCtorInfo_31_210;
              MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_48_48;
              MR_String hlds__make_hlds__state_var__Name_67;
              MR_Word hlds__make_hlds__state_var__Pieces_68;
              MR_Word hlds__make_hlds__state_var__Msg_69;
              MR_Word hlds__make_hlds__state_var__Spec_70;
              MR_Word hlds__make_hlds__state_var__Var_73;
              MR_Word hlds__make_hlds__state_var__Var_74;
              MR_String hlds__make_hlds__state_var__Var_75;
              MR_Word hlds__make_hlds__state_var__Var_83;
              MR_Word hlds__make_hlds__state_var__Var_84;
              MR_Word hlds__make_hlds__state_var__Var_88;
              MR_String hlds__make_hlds__state_var__SVarName_160;
              MR_String hlds__make_hlds__state_var__ProgVarBaseName_162;
              MR_String hlds__make_hlds__state_var__SVarName_191;
              MR_String hlds__make_hlds__state_var__ProgVarBaseName_193;

              {
                hlds__make_hlds__state_var__Name_67 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_31, hlds__make_hlds__state_var__OuterStateVar_13);
              }
              {
                hlds__make_hlds__state_var__Var_75 = mercury__string__f_43_43_2_f_0((MR_String) "!.", hlds__make_hlds__state_var__Name_67);
              }
              {
                hlds__make_hlds__state_var__Var_74 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__Var_74, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_75));
              }
              {
                hlds__make_hlds__state_var__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_73, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_74));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__state_var_scalar_common_1[8])));
              }
              {
                hlds__make_hlds__state_var__Pieces_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__state_var_scalar_common_1[27])));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Pieces_68, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_73));
              }
              {
                hlds__make_hlds__state_var__Var_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_84, 0) = ((MR_Box) (hlds__make_hlds__state_var__Pieces_68));
              }
              {
                hlds__make_hlds__state_var__Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_83, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_84));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                hlds__make_hlds__state_var__Msg_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_69, 0) = ((MR_Box) (hlds__make_hlds__state_var__Context_12));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Msg_69, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_83));
              }
              {
                hlds__make_hlds__state_var__Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_88, 0) = ((MR_Box) (hlds__make_hlds__state_var__Msg_69));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                hlds__make_hlds__state_var__Spec_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Spec_70, 2) = ((MR_Box) (hlds__make_hlds__state_var__Var_88));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_34 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Spec_70));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_33));
              }
              hlds__make_hlds__state_var__TypeCtorInfo_31_179 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
              {
                hlds__make_hlds__state_var__SVarName_160 = mercury__varset__lookup_name_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_31_179, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_31, hlds__make_hlds__state_var__OuterStateVar_13);
              }
              {
                hlds__make_hlds__state_var__ProgVarBaseName_162 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", hlds__make_hlds__state_var__SVarName_160);
              }
              {
                mercury__varset__new_uniquely_named_var_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_31_179, hlds__make_hlds__state_var__ProgVarBaseName_162, hlds__make_hlds__state_var__OuterDIVar_14, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_31, &hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_48_48);
              }
              hlds__make_hlds__state_var__TypeCtorInfo_31_210 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
              {
                hlds__make_hlds__state_var__SVarName_191 = mercury__varset__lookup_name_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_31_210, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_48_48, hlds__make_hlds__state_var__OuterStateVar_13);
              }
              {
                hlds__make_hlds__state_var__ProgVarBaseName_193 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", hlds__make_hlds__state_var__SVarName_191);
              }
              {
                mercury__varset__new_uniquely_named_var_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_31_210, hlds__make_hlds__state_var__ProgVarBaseName_193, hlds__make_hlds__state_var__OuterUOVar_15, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_48_48, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_32);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *hlds__make_hlds__state_var__OuterScopeInfo_16 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__OuterStateVar_13));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__BeforeStatus_21));
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__state_var__BeforeStatus_21));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.svar_start_outer_atomic_scope\'/11", (MR_String) "status updated");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__make_hlds__state_var__TypeCtorInfo_31_148;
              MR_Word hlds__make_hlds__state_var__RO_Context_24;
              MR_String hlds__make_hlds__state_var__SVarName_129;
              MR_String hlds__make_hlds__state_var__ProgVarBaseName_131;

              *hlds__make_hlds__state_var__OuterDIVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__BeforeStatus_21, (MR_Integer) 0)));
              hlds__make_hlds__state_var__RO_Context_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__state_var__BeforeStatus_21, (MR_Integer) 2)));
              {
                hlds__make_hlds__state_var__report_illegal_state_var_update_7_p_0(hlds__make_hlds__state_var__Context_12, (MR_String) "lambda expression", hlds__make_hlds__state_var__RO_Context_24, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_31, hlds__make_hlds__state_var__OuterStateVar_13, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_34);
              }
              hlds__make_hlds__state_var__TypeCtorInfo_31_148 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
              {
                hlds__make_hlds__state_var__SVarName_129 = mercury__varset__lookup_name_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_31_148, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_31, hlds__make_hlds__state_var__OuterStateVar_13);
              }
              {
                hlds__make_hlds__state_var__ProgVarBaseName_131 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", hlds__make_hlds__state_var__SVarName_129);
              }
              {
                mercury__varset__new_uniquely_named_var_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_31_148, hlds__make_hlds__state_var__ProgVarBaseName_131, hlds__make_hlds__state_var__OuterUOVar_15, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_31, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_32);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *hlds__make_hlds__state_var__OuterScopeInfo_16 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__OuterStateVar_13));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__BeforeStatus_21));
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__state_var__BeforeStatus_21));
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__BeforeStatus_21, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word hlds__make_hlds__state_var__TypeCtorInfo_31_117;
                  MR_Word hlds__make_hlds__state_var__AfterStatus_25;
                  MR_String hlds__make_hlds__state_var__SVarName_98;
                  MR_String hlds__make_hlds__state_var__ProgVarBaseName_100;

                  *hlds__make_hlds__state_var__OuterDIVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__BeforeStatus_21, (MR_Integer) 1)));
                  hlds__make_hlds__state_var__TypeCtorInfo_31_117 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                  {
                    hlds__make_hlds__state_var__SVarName_98 = mercury__varset__lookup_name_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_31_117, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_31, hlds__make_hlds__state_var__OuterStateVar_13);
                  }
                  {
                    hlds__make_hlds__state_var__ProgVarBaseName_100 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", hlds__make_hlds__state_var__SVarName_98);
                  }
                  {
                    mercury__varset__new_uniquely_named_var_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_31_117, hlds__make_hlds__state_var__ProgVarBaseName_100, hlds__make_hlds__state_var__OuterUOVar_15, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_31, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_32);
                  }
                  {
                    hlds__make_hlds__state_var__AfterStatus_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__AfterStatus_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__state_var__AfterStatus_25, 1) = ((MR_Box) (*hlds__make_hlds__state_var__OuterUOVar_15));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *hlds__make_hlds__state_var__OuterScopeInfo_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__OuterStateVar_13));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__BeforeStatus_21));
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__state_var__AfterStatus_25));
                  }
                  *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_34 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_33;
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.state_var", (MR_String) "predicate \140hlds.make_hlds.state_var.svar_start_outer_atomic_scope\'/11", (MR_String) "status updated");
                    return;
                  }
                }
                break;
            }
            break;
        }
      }
    else
      {
        MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_55_55;

        {
          hlds__make_hlds__state_var__report_non_visible_state_var_6_p_0((MR_String) "", hlds__make_hlds__state_var__Context_12, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_31, hlds__make_hlds__state_var__OuterStateVar_13, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_34);
        }
        {
          hlds__make_hlds__state_var__new_state_var_instance_5_p_0(hlds__make_hlds__state_var__OuterStateVar_13, (MR_Integer) 1, hlds__make_hlds__state_var__OuterDIVar_14, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_31, &hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_55_55);
        }
        {
          hlds__make_hlds__state_var__new_state_var_instance_5_p_0(hlds__make_hlds__state_var__OuterStateVar_13, (MR_Integer) 1, hlds__make_hlds__state_var__OuterUOVar_15, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_55_55, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_32);
        }
        *hlds__make_hlds__state_var__OuterScopeInfo_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *hlds__make_hlds__state_var__STATE_VARIABLE_State_30 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_29;
      }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0_3(
  MR_Box hlds__make_hlds__state_var__closure_arg)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;

    {
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1206__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 4))));
    }
    return hlds__make_hlds__state_var__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0_2(
  MR_Box hlds__make_hlds__state_var__closure_arg)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;

    {
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1204__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 4))));
    }
    return hlds__make_hlds__state_var__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0_1(
  MR_Box hlds__make_hlds__state_var__closure_arg)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;

    {
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1202__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__closure, (MR_Integer) 4))));
    }
    return hlds__make_hlds__state_var__succeeded;
  }
}

void MR_CALL 
hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0(
  MR_Word hlds__make_hlds__state_var__LocKind_19,
  MR_Word hlds__make_hlds__state_var__Context_20,
  MR_Word hlds__make_hlds__state_var__QuantStateVars_21,
  MR_Word hlds__make_hlds__state_var__ThenGoal0_22,
  MR_Word * hlds__make_hlds__state_var__ThenGoal_23,
  MR_Word hlds__make_hlds__state_var__ElseGoal0_24,
  MR_Word * hlds__make_hlds__state_var__ElseGoal_25,
  MR_Word hlds__make_hlds__state_var__StateBefore_26,
  MR_Word hlds__make_hlds__state_var__StateAfterCond_27,
  MR_Word hlds__make_hlds__state_var__StateAfterThen_28,
  MR_Word hlds__make_hlds__state_var__StateAfterElse_29,
  MR_Word * hlds__make_hlds__state_var__StateAfterITE_30,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_78,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_79,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_80,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Store_81,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_82,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_83)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Word hlds__make_hlds__state_var__TypeInfo_122_122 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
    MR_Word hlds__make_hlds__state_var__TypeCtorInfo_123_123 = (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0;
    MR_Word hlds__make_hlds__state_var__TypeCtorInfo_127_127;
    MR_Word hlds__make_hlds__state_var__TypeCtorInfo_128_128;
    MR_Word hlds__make_hlds__state_var__TypeInfo_129_129;
    MR_Word hlds__make_hlds__state_var__Specs_33;
    MR_Word hlds__make_hlds__state_var__StatusMapBefore_34 = (MR_Word) hlds__make_hlds__state_var__StateBefore_26;
    MR_Word hlds__make_hlds__state_var__StatusMapAfterCond_35 = (MR_Word) hlds__make_hlds__state_var__StateAfterCond_27;
    MR_Word hlds__make_hlds__state_var__StatusMapAfterThen_36 = (MR_Word) hlds__make_hlds__state_var__StateAfterThen_28;
    MR_Word hlds__make_hlds__state_var__StatusMapAfterElse_37 = (MR_Word) hlds__make_hlds__state_var__StateAfterElse_29;
    MR_Word hlds__make_hlds__state_var__SVarsBefore_38;
    MR_Word hlds__make_hlds__state_var__SVarsAfterCond_39;
    MR_Word hlds__make_hlds__state_var__SVarsAfterThen_40;
    MR_Word hlds__make_hlds__state_var__SVarsAfterElse_41;
    MR_Word hlds__make_hlds__state_var__StatusMapAfterITE_42;
    MR_Word hlds__make_hlds__state_var__NeckCopyGoals_43;
    MR_Word hlds__make_hlds__state_var__ThenEndCopyGoals_44;
    MR_Word hlds__make_hlds__state_var__ElseEndCopyGoals_45;
    MR_Word hlds__make_hlds__state_var__ThenRenames_46;
    MR_Word hlds__make_hlds__state_var__ElseRenames_47;
    MR_Word hlds__make_hlds__state_var__ThenMissingInits_48;
    MR_Word hlds__make_hlds__state_var__ElseMissingInits_49;
    MR_Word hlds__make_hlds__state_var__ThenGoals0_58;
    MR_Word hlds__make_hlds__state_var__ElseGoals0_59;
    MR_Word hlds__make_hlds__state_var__ThenGoals_60;
    MR_Word hlds__make_hlds__state_var__ElseGoals_61;
    MR_Word hlds__make_hlds__state_var__ThenInfo0_63;
    MR_Word hlds__make_hlds__state_var__ElseInfo0_65;
    MR_Word hlds__make_hlds__state_var__ThenGoal1_66;
    MR_Word hlds__make_hlds__state_var__ElseGoal1_67;
    MR_Word hlds__make_hlds__state_var__NextGoalId0_68;
    MR_Word hlds__make_hlds__state_var__DelayedRenamings0_69;
    MR_Integer hlds__make_hlds__state_var__ThenGoalIdNum_70;
    MR_Word hlds__make_hlds__state_var__NextGoalId1_71;
    MR_Integer hlds__make_hlds__state_var__ElseGoalIdNum_72;
    MR_Word hlds__make_hlds__state_var__NextGoalId_73;
    MR_Word hlds__make_hlds__state_var__ThenGoalId_74;
    MR_Word hlds__make_hlds__state_var__ElseGoalId_75;
    MR_Word hlds__make_hlds__state_var__DelayedRenamings1_76;
    MR_Word hlds__make_hlds__state_var__DelayedRenamings_77;
    MR_Word hlds__make_hlds__state_var__Var_84;
    MR_Word hlds__make_hlds__state_var__Var_87;
    MR_Word hlds__make_hlds__state_var__Var_90;
    MR_Word hlds__make_hlds__state_var__Var_93;
    MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104;
    MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Store_107_107;
    MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Store_108_108;
    MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Store_109_109;
    MR_Word hlds__make_hlds__state_var__Var_110;
    MR_Word hlds__make_hlds__state_var___ThenExpr0_62;
    MR_Word hlds__make_hlds__state_var___ElseExpr0_64;

    {
      mercury__map__keys_2_p_0(hlds__make_hlds__state_var__TypeInfo_122_122, hlds__make_hlds__state_var__TypeCtorInfo_123_123, hlds__make_hlds__state_var__StatusMapBefore_34, &hlds__make_hlds__state_var__SVarsBefore_38);
    }
    {
      mercury__map__keys_2_p_0(hlds__make_hlds__state_var__TypeInfo_122_122, hlds__make_hlds__state_var__TypeCtorInfo_123_123, hlds__make_hlds__state_var__StatusMapAfterCond_35, &hlds__make_hlds__state_var__SVarsAfterCond_39);
    }
    {
      mercury__map__keys_2_p_0(hlds__make_hlds__state_var__TypeInfo_122_122, hlds__make_hlds__state_var__TypeCtorInfo_123_123, hlds__make_hlds__state_var__StatusMapAfterThen_36, &hlds__make_hlds__state_var__SVarsAfterThen_40);
    }
    {
      mercury__map__keys_2_p_0(hlds__make_hlds__state_var__TypeInfo_122_122, hlds__make_hlds__state_var__TypeCtorInfo_123_123, hlds__make_hlds__state_var__StatusMapAfterElse_37, &hlds__make_hlds__state_var__SVarsAfterElse_41);
    }
    {
      hlds__make_hlds__state_var__Var_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_84, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_84, 1) = ((MR_Box) (hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_84, 3) = ((MR_Box) (hlds__make_hlds__state_var__SVarsBefore_38));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_84, 4) = ((MR_Box) (hlds__make_hlds__state_var__SVarsAfterCond_39));
    }
    {
      mercury__require__expect_3_p_0(hlds__make_hlds__state_var__Var_84, (MR_String) "predicate \140hlds.make_hlds.state_var.svar_finish_if_then_else\'/18", (MR_String) "vars Before not sublist of Cond");
    }
    {
      hlds__make_hlds__state_var__Var_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_87, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_87, 1) = ((MR_Box) (hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0_2));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_87, 3) = ((MR_Box) (hlds__make_hlds__state_var__SVarsBefore_38));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_87, 4) = ((MR_Box) (hlds__make_hlds__state_var__SVarsAfterThen_40));
    }
    {
      mercury__require__expect_3_p_0(hlds__make_hlds__state_var__Var_87, (MR_String) "predicate \140hlds.make_hlds.state_var.svar_finish_if_then_else\'/18", (MR_String) "vars Before != AfterThen");
    }
    {
      hlds__make_hlds__state_var__Var_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_90, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_90, 1) = ((MR_Box) (hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0_3));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_90, 3) = ((MR_Box) (hlds__make_hlds__state_var__SVarsBefore_38));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Var_90, 4) = ((MR_Box) (hlds__make_hlds__state_var__SVarsAfterElse_41));
    }
    {
      mercury__require__expect_3_p_0(hlds__make_hlds__state_var__Var_90, (MR_String) "predicate \140hlds.make_hlds.state_var.svar_finish_if_then_else\'/18", (MR_String) "vars Before != AfterElse");
    }
    {
      hlds__make_hlds__state_var__Var_93 = mercury__map__init_0_f_0(hlds__make_hlds__state_var__TypeInfo_122_122, hlds__make_hlds__state_var__TypeCtorInfo_123_123);
    }
    {
      hlds__make_hlds__state_var__handle_state_vars_in_ite_25_p_0(hlds__make_hlds__state_var__LocKind_19, hlds__make_hlds__state_var__QuantStateVars_21, hlds__make_hlds__state_var__SVarsBefore_38, hlds__make_hlds__state_var__StatusMapBefore_34, hlds__make_hlds__state_var__StatusMapAfterCond_35, hlds__make_hlds__state_var__StatusMapAfterThen_36, hlds__make_hlds__state_var__StatusMapAfterElse_37, hlds__make_hlds__state_var__Var_93, &hlds__make_hlds__state_var__StatusMapAfterITE_42, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_78, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_79, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__NeckCopyGoals_43, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__ThenEndCopyGoals_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__ElseEndCopyGoals_45, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__ThenRenames_46, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__ElseRenames_47, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__ThenMissingInits_48, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__ElseMissingInits_49);
    }
    *hlds__make_hlds__state_var__StateAfterITE_30 = (MR_Word) hlds__make_hlds__state_var__StatusMapAfterITE_42;
    if ((hlds__make_hlds__state_var__ThenMissingInits_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104 = hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_80;
    else
      {
        MR_Word hlds__make_hlds__state_var__ThenSpecs0_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_80, (MR_Integer) 2)));
        MR_Word hlds__make_hlds__state_var__ThenSpecs_53;
        MR_Word hlds__make_hlds__state_var__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_80, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__state_var__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_80, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__state_var__Var_114;
        MR_Word hlds__make_hlds__state_var__Var_115;
        MR_Word hlds__make_hlds__state_var__Var_116;

        {
          hlds__make_hlds__state_var__report_missing_inits_in_ite_6_p_0(hlds__make_hlds__state_var__Context_20, hlds__make_hlds__state_var__ThenMissingInits_48, (MR_String) "succeeds", (MR_String) "fails", hlds__make_hlds__state_var__ThenSpecs0_52, &hlds__make_hlds__state_var__ThenSpecs_53);
        }
        hlds__make_hlds__state_var__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_80, (MR_Integer) 0)));
        hlds__make_hlds__state_var__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_80, (MR_Integer) 1)));
        hlds__make_hlds__state_var__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_80, (MR_Integer) 2)));
        {
          hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_114));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_115));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104, 2) = ((MR_Box) (hlds__make_hlds__state_var__ThenSpecs_53));
        }
      }
    if ((hlds__make_hlds__state_var__ElseMissingInits_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      hlds__make_hlds__state_var__STATE_VARIABLE_Store_107_107 = hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104;
    else
      {
        MR_Word hlds__make_hlds__state_var__ElseSpecs0_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104, (MR_Integer) 2)));
        MR_Word hlds__make_hlds__state_var__ElseSpecs_57;
        MR_Word hlds__make_hlds__state_var__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__state_var__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__state_var__Var_119;
        MR_Word hlds__make_hlds__state_var__Var_120;
        MR_Word hlds__make_hlds__state_var__Var_121;

        {
          hlds__make_hlds__state_var__report_missing_inits_in_ite_6_p_0(hlds__make_hlds__state_var__Context_20, hlds__make_hlds__state_var__ThenMissingInits_48, (MR_String) "fails", (MR_String) "succeeds", hlds__make_hlds__state_var__ElseSpecs0_56, &hlds__make_hlds__state_var__ElseSpecs_57);
        }
        hlds__make_hlds__state_var__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104, (MR_Integer) 0)));
        hlds__make_hlds__state_var__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104, (MR_Integer) 1)));
        hlds__make_hlds__state_var__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_104_104, (MR_Integer) 2)));
        {
          hlds__make_hlds__state_var__STATE_VARIABLE_Store_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_107_107, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_119));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_107_107, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_120));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_107_107, 2) = ((MR_Box) (hlds__make_hlds__state_var__ElseSpecs_57));
        }
      }
    {
      hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0(hlds__make_hlds__state_var__ThenGoal0_22, &hlds__make_hlds__state_var__ThenGoals0_58, hlds__make_hlds__state_var__STATE_VARIABLE_Store_107_107, &hlds__make_hlds__state_var__STATE_VARIABLE_Store_108_108);
    }
    {
      hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0(hlds__make_hlds__state_var__ElseGoal0_24, &hlds__make_hlds__state_var__ElseGoals0_59, hlds__make_hlds__state_var__STATE_VARIABLE_Store_108_108, &hlds__make_hlds__state_var__STATE_VARIABLE_Store_109_109);
    }
    hlds__make_hlds__state_var__TypeCtorInfo_127_127 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    {
      hlds__make_hlds__state_var__Var_110 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_127_127, hlds__make_hlds__state_var__ThenGoals0_58, hlds__make_hlds__state_var__ThenEndCopyGoals_44);
    }
    {
      hlds__make_hlds__state_var__ThenGoals_60 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_127_127, hlds__make_hlds__state_var__NeckCopyGoals_43, hlds__make_hlds__state_var__Var_110);
    }
    {
      hlds__make_hlds__state_var__ElseGoals_61 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__state_var__TypeCtorInfo_127_127, hlds__make_hlds__state_var__ElseGoals0_59, hlds__make_hlds__state_var__ElseEndCopyGoals_45);
    }
    hlds__make_hlds__state_var___ThenExpr0_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ThenGoal0_22, (MR_Integer) 0)));
    hlds__make_hlds__state_var__ThenInfo0_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ThenGoal0_22, (MR_Integer) 1)));
    hlds__make_hlds__state_var___ElseExpr0_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ElseGoal0_24, (MR_Integer) 0)));
    hlds__make_hlds__state_var__ElseInfo0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__ElseGoal0_24, (MR_Integer) 1)));
    {
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__state_var__ThenGoals_60, hlds__make_hlds__state_var__ThenInfo0_63, &hlds__make_hlds__state_var__ThenGoal1_66);
    }
    {
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__state_var__ElseGoals_61, hlds__make_hlds__state_var__ElseInfo0_65, &hlds__make_hlds__state_var__ElseGoal1_67);
    }
    hlds__make_hlds__state_var__NextGoalId0_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_109_109, (MR_Integer) 0)));
    hlds__make_hlds__state_var__DelayedRenamings0_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_109_109, (MR_Integer) 1)));
    hlds__make_hlds__state_var__Specs_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_109_109, (MR_Integer) 2)));
    {
      mercury__counter__allocate_3_p_0(&hlds__make_hlds__state_var__ThenGoalIdNum_70, hlds__make_hlds__state_var__NextGoalId0_68, &hlds__make_hlds__state_var__NextGoalId1_71);
    }
    {
      mercury__counter__allocate_3_p_0(&hlds__make_hlds__state_var__ElseGoalIdNum_72, hlds__make_hlds__state_var__NextGoalId1_71, &hlds__make_hlds__state_var__NextGoalId_73);
    }
    hlds__make_hlds__state_var__ThenGoalId_74 = (MR_Word) hlds__make_hlds__state_var__ThenGoalIdNum_70;
    hlds__make_hlds__state_var__ElseGoalId_75 = (MR_Word) hlds__make_hlds__state_var__ElseGoalIdNum_72;
    {
      hlds__hlds_goal__goal_set_goal_id_3_p_0(hlds__make_hlds__state_var__ThenGoalId_74, hlds__make_hlds__state_var__ThenGoal1_66, hlds__make_hlds__state_var__ThenGoal_23);
    }
    {
      hlds__hlds_goal__goal_set_goal_id_3_p_0(hlds__make_hlds__state_var__ElseGoalId_75, hlds__make_hlds__state_var__ElseGoal1_67, hlds__make_hlds__state_var__ElseGoal_25);
    }
    hlds__make_hlds__state_var__TypeCtorInfo_128_128 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
    hlds__make_hlds__state_var__TypeInfo_129_129 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1];
    {
      mercury__map__det_insert_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_128_128, hlds__make_hlds__state_var__TypeInfo_129_129, ((MR_Box) (hlds__make_hlds__state_var__ThenGoalId_74)), ((MR_Box) (hlds__make_hlds__state_var__ThenRenames_46)), hlds__make_hlds__state_var__DelayedRenamings0_69, &hlds__make_hlds__state_var__DelayedRenamings1_76);
    }
    {
      mercury__map__det_insert_4_p_0(hlds__make_hlds__state_var__TypeCtorInfo_128_128, hlds__make_hlds__state_var__TypeInfo_129_129, ((MR_Box) (hlds__make_hlds__state_var__ElseGoalId_75)), ((MR_Box) (hlds__make_hlds__state_var__ElseRenames_47)), hlds__make_hlds__state_var__DelayedRenamings1_76, &hlds__make_hlds__state_var__DelayedRenamings_77);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *hlds__make_hlds__state_var__STATE_VARIABLE_Store_81 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__NextGoalId_73));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__DelayedRenamings_77));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__state_var__Specs_33));
    }
    *hlds__make_hlds__state_var__STATE_VARIABLE_Specs_83 = hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_82;
  }
}

void MR_CALL 
hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(
  MR_Word hlds__make_hlds__state_var___Context_10,
  MR_Word hlds__make_hlds__state_var__DisjStates_11,
  MR_Word * hlds__make_hlds__state_var__Disjs_12,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_29,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_30,
  MR_Word hlds__make_hlds__state_var__StateBefore_14,
  MR_Word * hlds__make_hlds__state_var__StateAfter_15,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_31,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Store_32)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;

    {
      hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_100_105_115_106_117_110_99_116_105_111_110_95_95_91_49_93_95_48_9_p_0(hlds__make_hlds__state_var__DisjStates_11, hlds__make_hlds__state_var__Disjs_12, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_29, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_30, hlds__make_hlds__state_var__StateBefore_14, hlds__make_hlds__state_var__StateAfter_15, hlds__make_hlds__state_var__STATE_VARIABLE_Store_0_31, hlds__make_hlds__state_var__STATE_VARIABLE_Store_32);
    }
  }
}

void MR_CALL 
hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(
  MR_Word hlds__make_hlds__state_var__StateVars_5,
  MR_Word hlds__make_hlds__state_var__StateBeforeOutside_6,
  MR_Word hlds__make_hlds__state_var__StateAfterInside_7,
  MR_Word * hlds__make_hlds__state_var__StateAfterOutside_8)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Word hlds__make_hlds__state_var__StatusMapBeforeOutside_9 = (MR_Word) hlds__make_hlds__state_var__StateBeforeOutside_6;
    MR_Word hlds__make_hlds__state_var__StatusMapAfterOutside0_14 = (MR_Word) hlds__make_hlds__state_var__StateAfterInside_7;
    MR_Word hlds__make_hlds__state_var__StatusMapAfterOutside_15;

    {
      hlds__make_hlds__state_var__finish_svars_for_scope_4_p_0(hlds__make_hlds__state_var__StateVars_5, hlds__make_hlds__state_var__StatusMapBeforeOutside_9, hlds__make_hlds__state_var__StatusMapAfterOutside0_14, &hlds__make_hlds__state_var__StatusMapAfterOutside_15);
    }
    *hlds__make_hlds__state_var__StateAfterOutside_8 = (MR_Word) hlds__make_hlds__state_var__StatusMapAfterOutside_15;
  }
}

void MR_CALL 
hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(
  MR_Word hlds__make_hlds__state_var__Context_8,
  MR_Word hlds__make_hlds__state_var__VarSet_9,
  MR_Word hlds__make_hlds__state_var__StateVars_10,
  MR_Word hlds__make_hlds__state_var__OutsideState_11,
  MR_Word * hlds__make_hlds__state_var__InsideState_12,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_16,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_17)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Word hlds__make_hlds__state_var__StatusMapOutside_14 = (MR_Word) hlds__make_hlds__state_var__OutsideState_11;
    MR_Word hlds__make_hlds__state_var__StatusMapInside_15;

    {
      hlds__make_hlds__state_var__prepare_svars_for_scope_7_p_0(hlds__make_hlds__state_var__Context_8, hlds__make_hlds__state_var__VarSet_9, hlds__make_hlds__state_var__StateVars_10, hlds__make_hlds__state_var__StatusMapOutside_14, &hlds__make_hlds__state_var__StatusMapInside_15, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_16, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_17);
    }
    *hlds__make_hlds__state_var__InsideState_12 = (MR_Word) hlds__make_hlds__state_var__StatusMapInside_15;
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0_1(
  MR_Box hlds__make_hlds__state_var__closure_arg,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_2)
{
  {
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;
    MR_Word hlds__make_hlds__state_var__conv0_STATE_VARIABLE_Status_11;

    {
      hlds__make_hlds__state_var__reset_updated_status_2_p_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), &hlds__make_hlds__state_var__conv0_STATE_VARIABLE_Status_11);
    }
    *hlds__make_hlds__state_var__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__state_var__conv0_STATE_VARIABLE_Status_11));
  }
}

void MR_CALL 
hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(
  MR_Word hlds__make_hlds__state_var__Loc_4,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_0_8,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_9)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;

    switch (hlds__make_hlds__state_var__Loc_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *hlds__make_hlds__state_var__STATE_VARIABLE_State_9 = hlds__make_hlds__state_var__STATE_VARIABLE_State_0_8;
        break;
      case (MR_Integer) 0:
        {
          MR_Word hlds__make_hlds__state_var__TypeCtorInfo_14_14 = (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0;
          MR_Word hlds__make_hlds__state_var__StatusMap0_6 = (MR_Word) hlds__make_hlds__state_var__STATE_VARIABLE_State_0_8;
          MR_Word hlds__make_hlds__state_var__StatusMap_7;

          {
            mercury__map__map_values_only_3_p_0(hlds__make_hlds__state_var__TypeCtorInfo_14_14, hlds__make_hlds__state_var__TypeCtorInfo_14_14, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var_scalar_common_2[5], hlds__make_hlds__state_var__StatusMap0_6, &hlds__make_hlds__state_var__StatusMap_7);
          }
          *hlds__make_hlds__state_var__STATE_VARIABLE_State_9 = (MR_Word) hlds__make_hlds__state_var__StatusMap_7;
        }
        break;
    }
  }
}

void MR_CALL 
hlds__make_hlds__state_var__svar_finish_lambda_body_8_p_0(
  MR_Word hlds__make_hlds__state_var__Context_9,
  MR_Word hlds__make_hlds__state_var__FinalMap_10,
  MR_Word hlds__make_hlds__state_var__Goals0_11,
  MR_Word * hlds__make_hlds__state_var__Goal_12,
  MR_Word hlds__make_hlds__state_var__InitialSVarState_13,
  MR_Word hlds__make_hlds__state_var__FinalSVarState_14,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_SVarStore_0_16,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_SVarStore_17)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Word hlds__make_hlds__state_var__TypeInfo_69_79 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
    MR_Word hlds__make_hlds__state_var__FinalAssocList_28;
    MR_Word hlds__make_hlds__state_var__InitialSVarStatusMap_29;
    MR_Word hlds__make_hlds__state_var__FinalSVarStatusMap_30;
    MR_Word hlds__make_hlds__state_var__FinalSVarSubn_31;
    MR_Word hlds__make_hlds__state_var__CopyGoals_32;
    MR_Word hlds__make_hlds__state_var__Goals1_33;
    MR_Word hlds__make_hlds__state_var__Goal1_36;
    MR_Word hlds__make_hlds__state_var__GoalExpr1_37;
    MR_Word hlds__make_hlds__state_var__GoalInfo1_38;
    MR_Word hlds__make_hlds__state_var__GoalId1_39;
    MR_Word hlds__make_hlds__state_var__NextGoalId1_40;
    MR_Word hlds__make_hlds__state_var__DelayedRenamingMap1_41;
    MR_Word hlds__make_hlds__state_var__Specs_42;
    MR_Word hlds__make_hlds__state_var__DelayedRenamingMap_45;
    MR_Word hlds__make_hlds__state_var__NextGoalId_46;
    MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Store_44_54;
    MR_Word hlds__make_hlds__state_var__DelayedRenaming0_43;
    MR_Box hlds__make_hlds__state_var__conv0_DelayedRenaming0_43;

    {
      mercury__map__to_assoc_list_2_p_0(hlds__make_hlds__state_var__TypeInfo_69_79, hlds__make_hlds__state_var__TypeInfo_69_79, hlds__make_hlds__state_var__FinalMap_10, &hlds__make_hlds__state_var__FinalAssocList_28);
    }
    hlds__make_hlds__state_var__InitialSVarStatusMap_29 = (MR_Word) hlds__make_hlds__state_var__InitialSVarState_13;
    hlds__make_hlds__state_var__FinalSVarStatusMap_30 = (MR_Word) hlds__make_hlds__state_var__FinalSVarState_14;
    {
      hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_p_0(hlds__make_hlds__state_var__FinalAssocList_28, hlds__make_hlds__state_var__InitialSVarStatusMap_29, hlds__make_hlds__state_var__FinalSVarStatusMap_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__FinalSVarSubn_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__state_var__CopyGoals_32);
    }
    if ((hlds__make_hlds__state_var__CopyGoals_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      hlds__make_hlds__state_var__Goals1_33 = hlds__make_hlds__state_var__Goals0_11;
    else
      {
        {
          hlds__make_hlds__state_var__Goals1_33 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__state_var__Goals0_11, hlds__make_hlds__state_var__CopyGoals_32);
        }
      }
    {
      hlds__make_hlds__state_var__svar_flatten_conj_5_p_0(hlds__make_hlds__state_var__Context_9, hlds__make_hlds__state_var__Goals1_33, &hlds__make_hlds__state_var__Goal1_36, hlds__make_hlds__state_var__STATE_VARIABLE_SVarStore_0_16, &hlds__make_hlds__state_var__STATE_VARIABLE_Store_44_54);
    }
    hlds__make_hlds__state_var__GoalExpr1_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Goal1_36, (MR_Integer) 0)));
    hlds__make_hlds__state_var__GoalInfo1_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Goal1_36, (MR_Integer) 1)));
    {
      hlds__make_hlds__state_var__GoalId1_39 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(hlds__make_hlds__state_var__GoalInfo1_38);
    }
    hlds__make_hlds__state_var__NextGoalId1_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_44_54, (MR_Integer) 0)));
    hlds__make_hlds__state_var__DelayedRenamingMap1_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_44_54, (MR_Integer) 1)));
    hlds__make_hlds__state_var__Specs_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_Store_44_54, (MR_Integer) 2)));
    {
      hlds__make_hlds__state_var__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1], hlds__make_hlds__state_var__DelayedRenamingMap1_41, ((MR_Box) (hlds__make_hlds__state_var__GoalId1_39)), &hlds__make_hlds__state_var__conv0_DelayedRenaming0_43);
    }
    if (hlds__make_hlds__state_var__succeeded)
      {
        hlds__make_hlds__state_var__DelayedRenaming0_43 = ((MR_Word) hlds__make_hlds__state_var__conv0_DelayedRenaming0_43);
        hlds__make_hlds__state_var__succeeded = MR_TRUE;
      }
    if (hlds__make_hlds__state_var__succeeded)
      {
        MR_Word hlds__make_hlds__state_var__Var_66;

        {
          hlds__make_hlds__state_var__Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_2[0], hlds__make_hlds__state_var__DelayedRenaming0_43, hlds__make_hlds__state_var__FinalSVarSubn_31);
        }
        {
          mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1], ((MR_Box) (hlds__make_hlds__state_var__GoalId1_39)), ((MR_Box) (hlds__make_hlds__state_var__Var_66)), hlds__make_hlds__state_var__DelayedRenamingMap1_41, &hlds__make_hlds__state_var__DelayedRenamingMap_45);
        }
        hlds__make_hlds__state_var__NextGoalId_46 = hlds__make_hlds__state_var__NextGoalId1_40;
        *hlds__make_hlds__state_var__Goal_12 = hlds__make_hlds__state_var__Goal1_36;
      }
    else
    if ((hlds__make_hlds__state_var__FinalSVarSubn_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        hlds__make_hlds__state_var__NextGoalId_46 = hlds__make_hlds__state_var__NextGoalId1_40;
        hlds__make_hlds__state_var__DelayedRenamingMap_45 = hlds__make_hlds__state_var__DelayedRenamingMap1_41;
        *hlds__make_hlds__state_var__Goal_12 = hlds__make_hlds__state_var__Goal1_36;
      }
    else
      {
        MR_Integer hlds__make_hlds__state_var__GoalIdNum_49;
        MR_Word hlds__make_hlds__state_var__GoalId_50;
        MR_Word hlds__make_hlds__state_var__GoalInfo_51;

        {
          mercury__counter__allocate_3_p_0(&hlds__make_hlds__state_var__GoalIdNum_49, hlds__make_hlds__state_var__NextGoalId1_40, &hlds__make_hlds__state_var__NextGoalId_46);
        }
        hlds__make_hlds__state_var__GoalId_50 = (MR_Word) hlds__make_hlds__state_var__GoalIdNum_49;
        {
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1], ((MR_Box) (hlds__make_hlds__state_var__GoalId_50)), ((MR_Box) (hlds__make_hlds__state_var__FinalSVarSubn_31)), hlds__make_hlds__state_var__DelayedRenamingMap1_41, &hlds__make_hlds__state_var__DelayedRenamingMap_45);
        }
        {
          hlds__hlds_goal__goal_info_set_goal_id_3_p_0(hlds__make_hlds__state_var__GoalId_50, hlds__make_hlds__state_var__GoalInfo1_38, &hlds__make_hlds__state_var__GoalInfo_51);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *hlds__make_hlds__state_var__Goal_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__GoalExpr1_37));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__GoalInfo_51));
        }
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *hlds__make_hlds__state_var__STATE_VARIABLE_SVarStore_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__NextGoalId_46));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__DelayedRenamingMap_45));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__state_var__Specs_42));
    }
  }
}

void MR_CALL 
hlds__make_hlds__state_var__svar_prepare_for_lambda_head_10_p_0(
  MR_Word hlds__make_hlds__state_var__Context_11,
  MR_Word hlds__make_hlds__state_var__Args0_12,
  MR_Word * hlds__make_hlds__state_var__Args_13,
  MR_Word * hlds__make_hlds__state_var__FinalMap_14,
  MR_Word hlds__make_hlds__state_var__OutsideState_15,
  MR_Word * hlds__make_hlds__state_var__InsideState_16,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_25,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_26,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_27)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Word hlds__make_hlds__state_var__TypeInfo_32_32 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
    MR_Word hlds__make_hlds__state_var__TypeCtorInfo_33_33 = (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0;
    MR_Word hlds__make_hlds__state_var__OutsideStatusMap_19 = (MR_Word) hlds__make_hlds__state_var__OutsideState_15;
    MR_Word hlds__make_hlds__state_var__OutsideStatusList_20;
    MR_Word hlds__make_hlds__state_var__InsideStatusList_21;
    MR_Word hlds__make_hlds__state_var__InsideStatusMap_22;
    MR_Word hlds__make_hlds__state_var__InsideState0_23;
    MR_Word hlds__make_hlds__state_var__Var_29;

    {
      mercury__map__to_sorted_assoc_list_2_p_0(hlds__make_hlds__state_var__TypeInfo_32_32, hlds__make_hlds__state_var__TypeCtorInfo_33_33, hlds__make_hlds__state_var__OutsideStatusMap_19, &hlds__make_hlds__state_var__OutsideStatusList_20);
    }
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    {
      hlds__make_hlds__state_var__make_svars_read_only_4_p_0(hlds__make_hlds__state_var__Context_11, hlds__make_hlds__state_var__OutsideStatusList_20, &hlds__make_hlds__state_var__InsideStatusList_21);
    }
    {
      mercury__map__from_sorted_assoc_list_2_p_0(hlds__make_hlds__state_var__TypeInfo_32_32, hlds__make_hlds__state_var__TypeCtorInfo_33_33, hlds__make_hlds__state_var__InsideStatusList_21, &hlds__make_hlds__state_var__InsideStatusMap_22);
    }
    hlds__make_hlds__state_var__InsideState0_23 = (MR_Word) hlds__make_hlds__state_var__InsideStatusMap_22;
    {
      hlds__make_hlds__state_var__Var_29 = mercury__map__init_0_f_0(hlds__make_hlds__state_var__TypeInfo_32_32, hlds__make_hlds__state_var__TypeInfo_32_32);
    }
    {
      hlds__make_hlds__state_var__svar_prepare_head_terms_10_p_0(hlds__make_hlds__state_var__Args0_12, hlds__make_hlds__state_var__Args_13, hlds__make_hlds__state_var__Var_29, hlds__make_hlds__state_var__FinalMap_14, hlds__make_hlds__state_var__InsideState0_23, hlds__make_hlds__state_var__InsideState_16, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_24, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_25, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_26, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_27);
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__svar_finish_clause_body_9_p_0_1(
  MR_Box hlds__make_hlds__state_var__closure_arg,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;

    {
      hlds__make_hlds__state_var__succeeded = hlds__make_hlds__state_var__severity_is_error_1_p_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1));
    }
    return hlds__make_hlds__state_var__succeeded;
  }
}

void MR_CALL 
hlds__make_hlds__state_var__svar_finish_clause_body_9_p_0(
  MR_Word hlds__make_hlds__state_var__Context_10,
  MR_Word hlds__make_hlds__state_var__FinalMap_11,
  MR_Word hlds__make_hlds__state_var__Goals0_12,
  MR_Word * hlds__make_hlds__state_var__Goal_13,
  MR_Word hlds__make_hlds__state_var__InitialSVarState_14,
  MR_Word hlds__make_hlds__state_var__FinalSVarState_15,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_SVarStore_0_26,
  MR_Word * hlds__make_hlds__state_var__WarningSpecs_17,
  MR_Word * hlds__make_hlds__state_var__ErrorSpecs_18)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Word hlds__make_hlds__state_var__Goal1_19;
    MR_Word hlds__make_hlds__state_var__DelayedRenamings_21;
    MR_Word hlds__make_hlds__state_var__Specs_22;
    MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_SVarStore_27_27;
    MR_Word hlds__make_hlds__state_var__Var_20;
    MR_Word hlds__make_hlds__state_var__TypeInfo_47_47;
    MR_Word hlds__make_hlds__state_var__TypeCtorInfo_48_48;
    MR_Word hlds__make_hlds__state_var__TypeInfo_49_49;

    {
      hlds__make_hlds__state_var__svar_finish_body_8_p_0(hlds__make_hlds__state_var__Context_10, hlds__make_hlds__state_var__FinalMap_11, hlds__make_hlds__state_var__Goals0_12, &hlds__make_hlds__state_var__Goal1_19, hlds__make_hlds__state_var__InitialSVarState_14, hlds__make_hlds__state_var__FinalSVarState_15, hlds__make_hlds__state_var__STATE_VARIABLE_SVarStore_0_26, &hlds__make_hlds__state_var__STATE_VARIABLE_SVarStore_27_27);
    }
    hlds__make_hlds__state_var__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_SVarStore_27_27, (MR_Integer) 0)));
    hlds__make_hlds__state_var__DelayedRenamings_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_SVarStore_27_27, (MR_Integer) 1)));
    hlds__make_hlds__state_var__Specs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__STATE_VARIABLE_SVarStore_27_27, (MR_Integer) 2)));
    {
      mercury__list__filter_4_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_2[4], hlds__make_hlds__state_var__Specs_22, hlds__make_hlds__state_var__ErrorSpecs_18, hlds__make_hlds__state_var__WarningSpecs_17);
    }
    hlds__make_hlds__state_var__TypeInfo_47_47 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
    {
      hlds__make_hlds__state_var__succeeded = mercury__map__is_empty_1_p_0(hlds__make_hlds__state_var__TypeInfo_47_47, hlds__make_hlds__state_var__TypeInfo_47_47, hlds__make_hlds__state_var__FinalMap_11);
    }
    if (hlds__make_hlds__state_var__succeeded)
      {
        hlds__make_hlds__state_var__TypeCtorInfo_48_48 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
        hlds__make_hlds__state_var__TypeInfo_49_49 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1];
        {
          hlds__make_hlds__state_var__succeeded = mercury__map__is_empty_1_p_0(hlds__make_hlds__state_var__TypeCtorInfo_48_48, hlds__make_hlds__state_var__TypeInfo_49_49, hlds__make_hlds__state_var__DelayedRenamings_21);
        }
      }
    if (hlds__make_hlds__state_var__succeeded)
      *hlds__make_hlds__state_var__Goal_13 = hlds__make_hlds__state_var__Goal1_19;
    else
      {
        MR_Word hlds__make_hlds__state_var__TypeInfo_55_55 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
        MR_Word hlds__make_hlds__state_var__Var_42;

        {
          hlds__make_hlds__state_var__Var_42 = mercury__map__init_0_f_0(hlds__make_hlds__state_var__TypeInfo_55_55, hlds__make_hlds__state_var__TypeInfo_55_55);
        }
        {
          hlds__hlds_goal__incremental_rename_vars_in_goal_4_p_0(hlds__make_hlds__state_var__Var_42, hlds__make_hlds__state_var__DelayedRenamings_21, hlds__make_hlds__state_var__Goal1_19, hlds__make_hlds__state_var__Goal_13);
        }
      }
  }
}

void MR_CALL 
hlds__make_hlds__state_var__svar_prepare_for_clause_head_9_p_0(
  MR_Word hlds__make_hlds__state_var__Args0_10,
  MR_Word * hlds__make_hlds__state_var__Args_11,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_17,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_18,
  MR_Word * hlds__make_hlds__state_var__FinalMap_13,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_State_19,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Store_20,
  MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_21,
  MR_Word * hlds__make_hlds__state_var__STATE_VARIABLE_Specs_22)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;
    MR_Word hlds__make_hlds__state_var__TypeInfo_29_29;
    MR_Word hlds__make_hlds__state_var__STATE_VARIABLE_State_23_23;
    MR_Word hlds__make_hlds__state_var__Var_25;
    MR_Word hlds__make_hlds__state_var__Var_30;
    MR_Word hlds__make_hlds__state_var__Var_33;
    MR_Word hlds__make_hlds__state_var__Var_35;

    {
      hlds__make_hlds__state_var__Var_30 = mercury__map__init_0_f_0((MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0], (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0);
    }
    hlds__make_hlds__state_var__STATE_VARIABLE_State_23_23 = (MR_Word) hlds__make_hlds__state_var__Var_30;
    {
      hlds__make_hlds__state_var__Var_33 = mercury__counter__init_1_f_0((MR_Integer) 1);
    }
    {
      hlds__make_hlds__state_var__Var_35 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[1]);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *hlds__make_hlds__state_var__STATE_VARIABLE_Store_20 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Var_33));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_35));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    hlds__make_hlds__state_var__TypeInfo_29_29 = (MR_Word) &hlds__make_hlds__state_var_scalar_common_1[0];
    {
      hlds__make_hlds__state_var__Var_25 = mercury__map__init_0_f_0(hlds__make_hlds__state_var__TypeInfo_29_29, hlds__make_hlds__state_var__TypeInfo_29_29);
    }
    {
      hlds__make_hlds__state_var__svar_prepare_head_terms_10_p_0(hlds__make_hlds__state_var__Args0_10, hlds__make_hlds__state_var__Args_11, hlds__make_hlds__state_var__Var_25, hlds__make_hlds__state_var__FinalMap_13, hlds__make_hlds__state_var__STATE_VARIABLE_State_23_23, hlds__make_hlds__state_var__STATE_VARIABLE_State_19, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_0_17, hlds__make_hlds__state_var__STATE_VARIABLE_VarSet_18, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_0_21, hlds__make_hlds__state_var__STATE_VARIABLE_Specs_22);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__expand_bang_state_pairs_in_instance_body_2_p_0_1(
  MR_Box hlds__make_hlds__state_var__closure_arg,
  MR_Box hlds__make_hlds__state_var__wrapper_arg_1,
  MR_Box * hlds__make_hlds__state_var__wrapper_arg_2)
{
  {
    MR_Box hlds__make_hlds__state_var__closure = hlds__make_hlds__state_var__closure_arg;
    MR_Word hlds__make_hlds__state_var__conv0_IM_4;

    {
      hlds__make_hlds__state_var__expand_bang_state_pairs_in_method_2_p_0(((MR_Word) hlds__make_hlds__state_var__wrapper_arg_1), &hlds__make_hlds__state_var__conv0_IM_4);
    }
    *hlds__make_hlds__state_var__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__state_var__conv0_IM_4));
  }
}

void MR_CALL 
hlds__make_hlds__state_var__expand_bang_state_pairs_in_instance_body_2_p_0(
  MR_Word hlds__make_hlds__state_var__InstanceBody0_3,
  MR_Word * hlds__make_hlds__state_var__InstanceBody_4)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;

    if ((hlds__make_hlds__state_var__InstanceBody0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__make_hlds__state_var__InstanceBody_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word hlds__make_hlds__state_var__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0;
        MR_Word hlds__make_hlds__state_var__Methods0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__InstanceBody0_3, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__state_var__Methods_6;

        {
          mercury__list__map_3_p_0(hlds__make_hlds__state_var__TypeCtorInfo_10_10, hlds__make_hlds__state_var__TypeCtorInfo_10_10, (MR_Word) &hlds__make_hlds__state_var_scalar_common_2[3], hlds__make_hlds__state_var__Methods0_5, &hlds__make_hlds__state_var__Methods_6);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__state_var__InstanceBody_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__Methods_6));
        }
      }
  }
}

void MR_CALL 
hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(
  MR_Word hlds__make_hlds__state_var__HeadVar__1_1,
  MR_Word * hlds__make_hlds__state_var__HeadVar__2_2)
{
  {
    MR_bool hlds__make_hlds__state_var__succeeded;

    if ((hlds__make_hlds__state_var__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__make_hlds__state_var__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word hlds__make_hlds__state_var__HeadArg0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__state_var__TailArgs0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__state_var__TailArgs_6;

        {
          hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(hlds__make_hlds__state_var__TailArgs0_4, &hlds__make_hlds__state_var__TailArgs_6);
        }
        if (((MR_tag((MR_Word) hlds__make_hlds__state_var__HeadArg0_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word hlds__make_hlds__state_var__Const_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadArg0_3, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__state_var__FunctorArgs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadArg0_3, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__state_var__Ctxt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadArg0_3, (MR_Integer) 2)));
            MR_String hlds__make_hlds__state_var__Var_16;
            MR_Word hlds__make_hlds__state_var__Var_17;
            MR_Word hlds__make_hlds__state_var__Var_18;
            MR_Word hlds__make_hlds__state_var___StateVar_12;
            MR_Word hlds__make_hlds__state_var__Var_13;

            hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__Const_9)) == (MR_mktag((MR_Integer) 0)));
            if (hlds__make_hlds__state_var__succeeded)
              {
                hlds__make_hlds__state_var__Var_16 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__Const_9, (MR_Integer) 0)));
                hlds__make_hlds__state_var__succeeded = (strcmp(hlds__make_hlds__state_var__Var_16, (MR_String) "!") == 0);
                if (hlds__make_hlds__state_var__succeeded)
                  {
                    hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__FunctorArgs_10)) == (MR_mktag((MR_Integer) 1)));
                    if (hlds__make_hlds__state_var__succeeded)
                      {
                        hlds__make_hlds__state_var__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__FunctorArgs_10, (MR_Integer) 0)));
                        hlds__make_hlds__state_var__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__FunctorArgs_10, (MR_Integer) 1)));
                        hlds__make_hlds__state_var__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__state_var__Var_17)) == (MR_mktag((MR_Integer) 1)));
                        if (hlds__make_hlds__state_var__succeeded)
                          {
                            hlds__make_hlds__state_var___StateVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_17, (MR_Integer) 0)));
                            hlds__make_hlds__state_var__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_17, (MR_Integer) 1)));
                            hlds__make_hlds__state_var__succeeded = (hlds__make_hlds__state_var__Var_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
            if (hlds__make_hlds__state_var__succeeded)
              {
                MR_Word hlds__make_hlds__state_var__HeadArg1_14;
                MR_Word hlds__make_hlds__state_var__HeadArg2_15;
                MR_Word hlds__make_hlds__state_var__Var_23;

                {
                  hlds__make_hlds__state_var__HeadArg1_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadArg1_14, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_4[0]));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadArg1_14, 1) = ((MR_Box) (hlds__make_hlds__state_var__FunctorArgs_10));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadArg1_14, 2) = ((MR_Box) (hlds__make_hlds__state_var__Ctxt_11));
                }
                {
                  hlds__make_hlds__state_var__HeadArg2_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadArg2_15, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_4[1]));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadArg2_15, 1) = ((MR_Box) (hlds__make_hlds__state_var__FunctorArgs_10));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__state_var__HeadArg2_15, 2) = ((MR_Box) (hlds__make_hlds__state_var__Ctxt_11));
                }
                {
                  hlds__make_hlds__state_var__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_23, 0) = ((MR_Box) (hlds__make_hlds__state_var__HeadArg2_15));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__state_var__Var_23, 1) = ((MR_Box) (hlds__make_hlds__state_var__TailArgs_6));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *hlds__make_hlds__state_var__HeadVar__2_2 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__HeadArg1_14));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__Var_23));
                }
              }
            else
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *hlds__make_hlds__state_var__HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__HeadArg0_3));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__TailArgs_6));
              }
          }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *hlds__make_hlds__state_var__HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__state_var__HeadArg0_3));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__state_var__TailArgs_6));
          }
      }
  }
}

void mercury__hlds__make_hlds__state_var__init(void)
{
}

void mercury__hlds__make_hlds__state_var__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_hlds_goal_svar_state_0);
	MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_readonly_context_kind_0);
	MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_state_var_name_source_0);
	MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_0);
	MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_inner_atomic_scope_info_0);
	MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_outer_atomic_scope_info_0);
	MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0);
	MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0);
	MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_store_0);
}

void mercury__hlds__make_hlds__state_var__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__state_var__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module hlds.make_hlds.state_var. */
