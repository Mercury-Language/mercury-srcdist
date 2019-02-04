/*
** Automatically generated from `hlds_rtti.m'
** by the Mercury compiler,
** version DEV
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


/* :- module hlds.hlds_rtti. */
/* :- implementation. */

/*
INIT mercury__hlds__hlds_rtti__init
ENDINIT
*/

#include "hlds.hlds_rtti.mih"


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
#include "check_hlds.mode_util.mih"
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
#include "parse_tree.prog_type_subst.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_VA_PseudoTypeInfo_Struct2 hlds__hlds_rtti____vpti_pred_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_instance_method_constraints_0_0[4];

static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_instance_method_constraints_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_instance_method_constraints_0_0[1];

static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_instance_method_constraints_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_instance_method_constraints_0[1];

static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_instance_method_constraints_0[1];

static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1hlds__hlds_pred__type_ctor_info_top_functor_mode_0;

static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_proc_label_0_0[16];

static const MR_ConstString hlds__hlds_rtti__hlds__hlds_rtti__field_names_rtti_proc_label_0_0[16];

static const MR_DuArgLocn hlds__hlds_rtti__hlds__hlds_rtti__field_locns_rtti_proc_label_0_0[16];

static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_proc_label_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_proc_label_0_0[1];

static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_proc_label_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_proc_label_0[1];

static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_proc_label_0[1];

static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_var_info_0_0[1];

static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_0;

static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_var_info_0_1[1];

static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_1;

static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_2;

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_1[1];

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_2[1];

static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_var_info_0[3];

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_var_info_0[3];

static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_var_info_0[3];

static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0hlds__hlds_rtti__type_ctor_info_type_info_locn_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_varmaps_0_0[4];

static const MR_ConstString hlds__hlds_rtti__hlds__hlds_rtti__field_names_rtti_varmaps_0_0[4];

static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_varmaps_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_varmaps_0_0[1];

static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_varmaps_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_varmaps_0[1];

static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_varmaps_0[1];

static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_type_info_locn_0_0[1];

static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_0;

static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_type_info_locn_0_1[2];

static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_1;

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_1[1];

static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_type_info_locn_0[2];

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_type_info_locn_0[2];

static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_type_info_locn_0[2];

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____instance_method_constraints_0_0_10001(
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_rtti____Compare____instance_method_constraints_0_0_10001(
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____prog_var_name_0_0_10001(
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_rtti____Compare____prog_var_name_0_0_10001(
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_proc_label_0_0_10001(
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_proc_label_0_0_10001(
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_var_info_0_0_10001(
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_var_info_0_0_10001(
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_varmaps_0_0_10001(
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_varmaps_0_0_10001(
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_locn_0_0_10001(
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_locn_0_0_10001(
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_type_map_0_0_10001(
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_type_map_0_0_10001(
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_varmap_0_0_10001(
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_varmap_0_0_10001(
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0_10001(
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0_10001(
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0_10001(
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0_10001(
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_rtti__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_99_111_110_115_116_114_97_105_110_116_95_118_97_108_117_101_95_116_114_97_110_115_102_111_114_109_97_116_105_111_110_95_95_91_50_93_95_48_4_p_0(
  MR_Word hlds__hlds_rtti__Pred_5,
  MR_Word hlds__hlds_rtti__Constraint0_7,
  MR_Word * hlds__hlds_rtti__Constraint_8);

static void MR_CALL 
hlds__hlds_rtti__IntroducedFrom__pred__get_typeinfo_vars_acc__900__1_3_p_0(
  MR_Word hlds__hlds_rtti__TVarMap_3,
  MR_Word hlds__hlds_rtti__LambdaHeadVar__1_27,
  MR_Word * hlds__hlds_rtti__LambdaHeadVar__2_28);

static void MR_CALL 
hlds__hlds_rtti__IntroducedFrom__pred__rtti_varmaps_types__682__1_3_p_0(
  MR_Word hlds__hlds_rtti__HeadVar__1_19,
  MR_Word hlds__hlds_rtti__HeadVar__2_20,
  MR_Word * hlds__hlds_rtti__HeadVar__3_21);

static MR_Word MR_CALL 
hlds__hlds_rtti__IntroducedFrom__func__make_rtti_proc_label__374__1_2_f_0(
  MR_Word hlds__hlds_rtti__ProcVarSet_17,
  MR_Word hlds__hlds_rtti__LambdaHeadVar__1_31);

static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0(
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
  MR_Word hlds__hlds_rtti__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0(
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
  MR_Word hlds__hlds_rtti__HeadVar__2_2);

static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0(
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
  MR_Word hlds__hlds_rtti__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0(
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
  MR_Word hlds__hlds_rtti__HeadVar__2_2);

static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_varmap_0_0(
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
  MR_Word hlds__hlds_rtti__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_varmap_0_0(
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
  MR_Word hlds__hlds_rtti__HeadVar__2_2);

static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_type_map_0_0(
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
  MR_Word hlds__hlds_rtti__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_type_map_0_0(
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
  MR_Word hlds__hlds_rtti__HeadVar__2_2);

static void MR_CALL 
hlds__hlds_rtti__get_typeinfo_vars_acc_5_p_0_1(
  MR_Box hlds__hlds_rtti__closure_arg,
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box * hlds__hlds_rtti__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_rtti__get_typeinfo_vars_acc_5_p_0(
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
  MR_Word hlds__hlds_rtti__VarTypes_2,
  MR_Word hlds__hlds_rtti__TVarMap_3,
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_TypeInfoVars_0_4,
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_TypeInfoVars_5);

static void MR_CALL 
hlds__hlds_rtti__apply_constraint_value_transformation_4_p_0(
  MR_Word hlds__hlds_rtti__Pred_5,
  MR_Word hlds__hlds_rtti__HeadVar__2_6,
  MR_Word hlds__hlds_rtti__Constraint0_7,
  MR_Word * hlds__hlds_rtti__Constraint_8);

static void MR_CALL 
hlds__hlds_rtti__apply_constraint_key_transformation_5_p_0(
  MR_Word hlds__hlds_rtti__Pred_6,
  MR_Word hlds__hlds_rtti__Constraint0_7,
  MR_Word hlds__hlds_rtti__Var_8,
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_14,
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_15);

static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_constraint_map_7_p_0(
  MR_Word hlds__hlds_rtti__TRenaming_8,
  MR_Word hlds__hlds_rtti__TSubst_9,
  MR_Word hlds__hlds_rtti__Subst_10,
  MR_Word hlds__hlds_rtti__Var0_11,
  MR_Word hlds__hlds_rtti__Constraint0_12,
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_18,
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_19);

static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_type_map_7_p_0(
  MR_Word hlds__hlds_rtti__TRenaming_8,
  MR_Word hlds__hlds_rtti__TSubst_9,
  MR_Word hlds__hlds_rtti__Subst_10,
  MR_Word hlds__hlds_rtti__Var0_11,
  MR_Word hlds__hlds_rtti__Type0_12,
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_18,
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_19);

static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_ti_map_7_p_0(
  MR_Word hlds__hlds_rtti__TRenaming_8,
  MR_Word hlds__hlds_rtti__TSubst_9,
  MR_Word hlds__hlds_rtti__Subst_10,
  MR_Word hlds__hlds_rtti__TVar_11,
  MR_Word hlds__hlds_rtti__Locn_12,
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_37,
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_38);

static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_tci_map_7_p_0(
  MR_Word hlds__hlds_rtti__TRenaming_8,
  MR_Word hlds__hlds_rtti__TSubst_9,
  MR_Word hlds__hlds_rtti__Subst_10,
  MR_Word hlds__hlds_rtti__Constraint0_11,
  MR_Word hlds__hlds_rtti__Var0_12,
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_17,
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_18);

static void MR_CALL 
hlds__hlds_rtti__accumulate_types_in_prog_constraint_3_p_0(
  MR_Word hlds__hlds_rtti__Constraint_4,
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_TypeSet_0_8,
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_TypeSet_9);

static void MR_CALL 
hlds__hlds_rtti__filter_constraint_map_6_p_0(
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
  MR_ArrayPtr hlds__hlds_rtti__HeadVar__2_2,
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0_3,
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_4,
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0_5,
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_TCIMap_6);

static void MR_CALL 
hlds__hlds_rtti__filter_type_info_map_4_p_0(
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
  MR_ArrayPtr hlds__hlds_rtti__HeadVar__2_2,
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0_3,
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_4);

static void MR_CALL 
hlds__hlds_rtti__filter_type_info_varmap_4_p_0(
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
  MR_ArrayPtr hlds__hlds_rtti__HeadVar__2_2,
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0_3,
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_4);

static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_2(
  MR_Box hlds__hlds_rtti__closure_arg,
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
  MR_Box * hlds__hlds_rtti__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_1(
  MR_Box hlds__hlds_rtti__closure_arg,
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
  MR_Box * hlds__hlds_rtti__wrapper_arg_4);

static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_4(
  MR_Box hlds__hlds_rtti__closure_arg,
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
  MR_Box * hlds__hlds_rtti__wrapper_arg_4);

static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_3(
  MR_Box hlds__hlds_rtti__closure_arg,
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
  MR_Box * hlds__hlds_rtti__wrapper_arg_4);

static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_2(
  MR_Box hlds__hlds_rtti__closure_arg,
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
  MR_Box * hlds__hlds_rtti__wrapper_arg_4);

static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_1(
  MR_Box hlds__hlds_rtti__closure_arg,
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
  MR_Box * hlds__hlds_rtti__wrapper_arg_4);

static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_types_2_p_0_2(
  MR_Box hlds__hlds_rtti__closure_arg,
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
  MR_Box * hlds__hlds_rtti__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_types_2_p_0_1(
  MR_Box hlds__hlds_rtti__closure_arg,
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
  MR_Box * hlds__hlds_rtti__wrapper_arg_3);

static MR_Box MR_CALL 
hlds__hlds_rtti__make_rtti_proc_label_3_f_0_1(
  MR_Box hlds__hlds_rtti__closure_arg,
  MR_Box hlds__hlds_rtti__wrapper_arg_1);


static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_1[7][2];

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_2[7][3];

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_3[4][6];

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_4[4][10];

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_5[1][8];

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_6[1][7];




static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_rtti_scalar_common_2[0]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_top_functor_mode_0))
  },
};

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_2[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_rtti_scalar_common_1[0])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_rtti_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_rtti_scalar_common_1[1])),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_rtti_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_rtti_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__hlds_rtti_scalar_common_3[1])),
    ((MR_Box) (hlds__hlds_rtti__rtti_varmaps_types_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__hlds_rtti_scalar_common_3[2])),
    ((MR_Box) (hlds__hlds_rtti__rtti_varmaps_types_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_3[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_rtti__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_rtti__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0)),
    ((MR_Box) (&hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_4[4][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_rtti____vpti_pred_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_rtti____vpti_pred_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};



#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0,
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 hlds__hlds_rtti____vpti_pred_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_instance_method_constraints_0_0[4] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraints_0
};

static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_instance_method_constraints_0_0 = {
  (MR_String) "instance_method_constraints",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_rtti__hlds__hlds_rtti__field_types_instance_method_constraints_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_instance_method_constraints_0_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_instance_method_constraints_0_0
};

static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_instance_method_constraints_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_instance_method_constraints_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_instance_method_constraints_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_instance_method_constraints_0_0
};

static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_instance_method_constraints_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_instance_method_constraints_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_rtti____Unify____instance_method_constraints_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____instance_method_constraints_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "instance_method_constraints",
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_instance_method_constraints_0 },
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_instance_method_constraints_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_instance_method_constraints_0
};

const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_prog_var_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_rtti____Unify____prog_var_name_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____prog_var_name_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "prog_var_name",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_rtti__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1hlds__hlds_pred__type_ctor_info_top_functor_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_top_functor_mode_0
  }
};

static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_proc_label_0_0[16] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__list__ti_list_1hlds__hlds_pred__type_ctor_info_top_functor_mode_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_origin_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

static const MR_ConstString hlds__hlds_rtti__hlds__hlds_rtti__field_names_rtti_proc_label_0_0[16] = {
  (MR_String) "rpl_pred_or_func",
  (MR_String) "rpl_this_module",
  (MR_String) "rpl_proc_module",
  (MR_String) "rpl_proc_name",
  (MR_String) "rpl_proc_arity",
  (MR_String) "rpl_proc_arg_types",
  (MR_String) "rpl_pred_id",
  (MR_String) "rpl_proc_id",
  (MR_String) "rpl_proc_headvars",
  (MR_String) "rpl_proc_top_modes",
  (MR_String) "rpl_proc_interface_detism",
  (MR_String) "rpl_pred_is_imported",
  (MR_String) "rpl_pred_is_pseudo_imported",
  (MR_String) "rpl_pred_info_origin",
  (MR_String) "rpl_proc_is_exported",
  (MR_String) "rpl_proc_is_imported"
};

static const MR_DuArgLocn hlds__hlds_rtti__hlds__hlds_rtti__field_locns_rtti_proc_label_0_0[16] = {
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
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 1,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_proc_label_0_0 = {
  (MR_String) "rtti_proc_label",
  (MR_Integer) 16,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_proc_label_0_0,
  hlds__hlds_rtti__hlds__hlds_rtti__field_names_rtti_proc_label_0_0,
  hlds__hlds_rtti__hlds__hlds_rtti__field_locns_rtti_proc_label_0_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_proc_label_0_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_proc_label_0_0
};

static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_proc_label_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_proc_label_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_proc_label_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_proc_label_0_0
};

static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_proc_label_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_rtti____Unify____rtti_proc_label_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____rtti_proc_label_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "rtti_proc_label",
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_proc_label_0 },
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_proc_label_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_proc_label_0
};

static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_var_info_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_0 = {
  (MR_String) "type_info_var",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_var_info_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_var_info_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
};

static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_1 = {
  (MR_String) "typeclass_info_var",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_var_info_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_2 = {
  (MR_String) "non_rtti_var",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_2
};

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_1[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_0
};

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_2[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_1
};

static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_var_info_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_2
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_var_info_0[3] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_2,
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_0,
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_1
};

static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_var_info_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_var_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_rtti____Unify____rtti_var_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____rtti_var_info_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "rtti_var_info",
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_var_info_0 },
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_var_info_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_var_info_0
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0,
    (MR_TypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0hlds__hlds_rtti__type_ctor_info_type_info_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_varmaps_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0hlds__hlds_rtti__type_ctor_info_type_info_locn_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_prog_constraint_0
};

static const MR_ConstString hlds__hlds_rtti__hlds__hlds_rtti__field_names_rtti_varmaps_0_0[4] = {
  (MR_String) "rv_tci_varmap",
  (MR_String) "rv_ti_varmap",
  (MR_String) "rv_ti_type_map",
  (MR_String) "rv_tci_constraint_map"
};

static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_varmaps_0_0 = {
  (MR_String) "rtti_varmaps",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_varmaps_0_0,
  hlds__hlds_rtti__hlds__hlds_rtti__field_names_rtti_varmaps_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_varmaps_0_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_varmaps_0_0
};

static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_varmaps_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_varmaps_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_varmaps_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_varmaps_0_0
};

static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_varmaps_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_rtti____Unify____rtti_varmaps_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____rtti_varmaps_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "rtti_varmaps",
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_varmaps_0 },
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_varmaps_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_varmaps_0
};

static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_type_info_locn_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_0 = {
  (MR_String) "type_info",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_rtti__hlds__hlds_rtti__field_types_type_info_locn_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_type_info_locn_0_1[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_1 = {
  (MR_String) "typeclass_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__hlds_rtti__hlds__hlds_rtti__field_types_type_info_locn_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_0
};

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_1[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_1
};

static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_type_info_locn_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_1
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_type_info_locn_0[2] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_0,
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_1
};

static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_type_info_locn_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_rtti____Unify____type_info_locn_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____type_info_locn_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "type_info_locn",
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_type_info_locn_0 },
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_type_info_locn_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_type_info_locn_0
};

const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_type_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_rtti____Unify____type_info_type_map_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____type_info_type_map_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "type_info_type_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_varmap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_rtti____Unify____type_info_varmap_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____type_info_varmap_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "type_info_varmap",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0hlds__hlds_rtti__type_ctor_info_type_info_locn_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_typeclass_info_constraint_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "typeclass_info_constraint_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_prog_constraint_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_typeclass_info_varmap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "typeclass_info_varmap",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____instance_method_constraints_0_0_10001(
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;

    {
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____instance_method_constraints_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
    return hlds__hlds_rtti__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_rtti____Compare____instance_method_constraints_0_0_10001(
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

    {
      hlds__hlds_rtti____Compare____instance_method_constraints_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____prog_var_name_0_0_10001(
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;

    {
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____prog_var_name_0_0(((MR_String) hlds__hlds_rtti__wrapper_arg_1), ((MR_String) hlds__hlds_rtti__wrapper_arg_2));
    }
    return hlds__hlds_rtti__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_rtti____Compare____prog_var_name_0_0_10001(
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

    {
      hlds__hlds_rtti____Compare____prog_var_name_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_String) hlds__hlds_rtti__wrapper_arg_2), ((MR_String) hlds__hlds_rtti__wrapper_arg_3));
    }
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_proc_label_0_0_10001(
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;

    {
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____rtti_proc_label_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
    return hlds__hlds_rtti__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_proc_label_0_0_10001(
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

    {
      hlds__hlds_rtti____Compare____rtti_proc_label_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_var_info_0_0_10001(
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;

    {
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____rtti_var_info_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
    return hlds__hlds_rtti__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_var_info_0_0_10001(
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

    {
      hlds__hlds_rtti____Compare____rtti_var_info_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_varmaps_0_0_10001(
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;

    {
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
    return hlds__hlds_rtti__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_varmaps_0_0_10001(
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

    {
      hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_locn_0_0_10001(
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;

    {
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____type_info_locn_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
    return hlds__hlds_rtti__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_locn_0_0_10001(
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

    {
      hlds__hlds_rtti____Compare____type_info_locn_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_type_map_0_0_10001(
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;

    {
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____type_info_type_map_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
    return hlds__hlds_rtti__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_type_map_0_0_10001(
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

    {
      hlds__hlds_rtti____Compare____type_info_type_map_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_varmap_0_0_10001(
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;

    {
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____type_info_varmap_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
    return hlds__hlds_rtti__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_varmap_0_0_10001(
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

    {
      hlds__hlds_rtti____Compare____type_info_varmap_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0_10001(
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;

    {
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
    return hlds__hlds_rtti__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0_10001(
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

    {
      hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0_10001(
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;

    {
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
    return hlds__hlds_rtti__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0_10001(
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

    {
      hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
hlds__hlds_rtti__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_99_111_110_115_116_114_97_105_110_116_95_118_97_108_117_101_95_116_114_97_110_115_102_111_114_109_97_116_105_111_110_95_95_91_50_93_95_48_4_p_0(
  MR_Word hlds__hlds_rtti__Pred_5,
  MR_Word hlds__hlds_rtti__Constraint0_7,
  MR_Word * hlds__hlds_rtti__Constraint_8)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    MR_Word hlds__hlds_rtti__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint0_7, (MR_Integer) 0)));
    MR_Word hlds__hlds_rtti__Args0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint0_7, (MR_Integer) 1)));
    MR_Word hlds__hlds_rtti__Args_11;

    {
      mercury__list__map_3_p_0(hlds__hlds_rtti__TypeCtorInfo_12_12, hlds__hlds_rtti__TypeCtorInfo_12_12, hlds__hlds_rtti__Pred_5, hlds__hlds_rtti__Args0_10, &hlds__hlds_rtti__Args_11);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_rtti__Constraint_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__Name_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__Args_11));
    }
  }
}

static void MR_CALL 
hlds__hlds_rtti__IntroducedFrom__pred__get_typeinfo_vars_acc__900__1_3_p_0(
  MR_Word hlds__hlds_rtti__TVarMap_3,
  MR_Word hlds__hlds_rtti__LambdaHeadVar__1_27,
  MR_Word * hlds__hlds_rtti__LambdaHeadVar__2_28)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__Locn_23;
    MR_Box hlds__hlds_rtti__conv0_Locn_23;

    {
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, hlds__hlds_rtti__TVarMap_3, ((MR_Box) (hlds__hlds_rtti__LambdaHeadVar__1_27)), &hlds__hlds_rtti__conv0_Locn_23);
    }
    hlds__hlds_rtti__Locn_23 = ((MR_Word) hlds__hlds_rtti__conv0_Locn_23);
    if (((MR_tag((MR_Word) hlds__hlds_rtti__Locn_23)) == (MR_mktag((MR_Integer) 0))))
      *hlds__hlds_rtti__LambdaHeadVar__2_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Locn_23, (MR_Integer) 0)));
    else
      {
        MR_Integer hlds__hlds_rtti__Var_41;

        *hlds__hlds_rtti__LambdaHeadVar__2_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__Locn_23, (MR_Integer) 0)));
        hlds__hlds_rtti__Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__Locn_23, (MR_Integer) 1)));
      }
  }
}

static void MR_CALL 
hlds__hlds_rtti__IntroducedFrom__pred__rtti_varmaps_types__682__1_3_p_0(
  MR_Word hlds__hlds_rtti__HeadVar__1_19,
  MR_Word hlds__hlds_rtti__HeadVar__2_20,
  MR_Word * hlds__hlds_rtti__HeadVar__3_21)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;

    {
      mercury__set_tree234__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__hlds_rtti__HeadVar__1_19)), hlds__hlds_rtti__HeadVar__2_20, hlds__hlds_rtti__HeadVar__3_21);
    }
  }
}

static MR_Word MR_CALL 
hlds__hlds_rtti__IntroducedFrom__func__make_rtti_proc_label__374__1_2_f_0(
  MR_Word hlds__hlds_rtti__ProcVarSet_17,
  MR_Word hlds__hlds_rtti__LambdaHeadVar__1_31)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__LambdaHeadVar__2_32;
    MR_String hlds__hlds_rtti__Name_28;

    {
      hlds__hlds_rtti__Name_28 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_rtti__ProcVarSet_17, hlds__hlds_rtti__LambdaHeadVar__1_31);
    }
    {
      hlds__hlds_rtti__LambdaHeadVar__2_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__LambdaHeadVar__2_32, 0) = ((MR_Box) (hlds__hlds_rtti__LambdaHeadVar__1_31));
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__LambdaHeadVar__2_32, 1) = ((MR_Box) (hlds__hlds_rtti__Name_28));
    }
    return hlds__hlds_rtti__LambdaHeadVar__2_32;
  }
}

static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0(
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_4 = hlds__hlds_rtti__HeadVar__2_2;
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_5 = hlds__hlds_rtti__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[1], hlds__hlds_rtti__HeadVar__1_1, ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0(
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_3 = hlds__hlds_rtti__HeadVar__1_1;
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_4 = hlds__hlds_rtti__HeadVar__2_2;

    {
      hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[1], ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_4)));
    }
    return hlds__hlds_rtti__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0(
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_4 = hlds__hlds_rtti__HeadVar__2_2;
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_5 = hlds__hlds_rtti__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[4], hlds__hlds_rtti__HeadVar__1_1, ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0(
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_3 = hlds__hlds_rtti__HeadVar__1_1;
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_4 = hlds__hlds_rtti__HeadVar__2_2;

    {
      hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[4], ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_4)));
    }
    return hlds__hlds_rtti__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_varmap_0_0(
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_4 = hlds__hlds_rtti__HeadVar__2_2;
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_5 = hlds__hlds_rtti__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[2], hlds__hlds_rtti__HeadVar__1_1, ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_varmap_0_0(
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_3 = hlds__hlds_rtti__HeadVar__1_1;
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_4 = hlds__hlds_rtti__HeadVar__2_2;

    {
      hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[2], ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_4)));
    }
    return hlds__hlds_rtti__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_type_map_0_0(
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_4 = hlds__hlds_rtti__HeadVar__2_2;
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_5 = hlds__hlds_rtti__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[3], hlds__hlds_rtti__HeadVar__1_1, ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_type_map_0_0(
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_3 = hlds__hlds_rtti__HeadVar__1_1;
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_4 = hlds__hlds_rtti__HeadVar__2_2;

    {
      hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[3], ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_4)));
    }
    return hlds__hlds_rtti__succeeded;
  }
}

void MR_CALL 
hlds__hlds_rtti____Compare____type_info_locn_0_0(
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Integer hlds__hlds_rtti__CastX_17 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;
    MR_Integer hlds__hlds_rtti__CastY_18 = (MR_Integer) hlds__hlds_rtti__HeadVar__3_3;

    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_17 == hlds__hlds_rtti__CastY_18);
    if (hlds__hlds_rtti__succeeded)
      *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word hlds__hlds_rtti__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word hlds__hlds_rtti__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], hlds__hlds_rtti__HeadVar__1_1, ((MR_Box) (hlds__hlds_rtti__Var_22)), ((MR_Box) (hlds__hlds_rtti__Var_5)));
            }
          }
        else
          *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 1;
      }
    else
      {
        MR_Integer hlds__hlds_rtti__Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__hlds_rtti__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word hlds__hlds_rtti__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 0)));
            MR_Integer hlds__hlds_rtti__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word hlds__hlds_rtti__Var_16;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], &hlds__hlds_rtti__Var_16, ((MR_Box) (hlds__hlds_rtti__Var_24)), ((MR_Box) (hlds__hlds_rtti__Var_14)));
            }
            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__Var_16 == (MR_Integer) 0);
            hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
            if (hlds__hlds_rtti__succeeded)
              *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__Var_16;
            else
              {
                mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_rtti__HeadVar__1_1, hlds__hlds_rtti__Var_23, hlds__hlds_rtti__Var_15);
              }
          }
      }
  }
}

MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_locn_0_0(
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Integer hlds__hlds_rtti__CastX_9 = (MR_Integer) hlds__hlds_rtti__HeadVar__1_1;
    MR_Integer hlds__hlds_rtti__CastY_10 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;

    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_9 == hlds__hlds_rtti__CastY_10);
    if (hlds__hlds_rtti__succeeded)
      hlds__hlds_rtti__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word hlds__hlds_rtti__TypeInfo_11_11;
        MR_Word hlds__hlds_rtti__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__hlds_rtti__Var_4;

        hlds__hlds_rtti__succeeded = ((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (hlds__hlds_rtti__succeeded)
          {
            hlds__hlds_rtti__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
            hlds__hlds_rtti__TypeInfo_11_11 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
            {
              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_11_11, ((MR_Box) (hlds__hlds_rtti__Var_3)), ((MR_Box) (hlds__hlds_rtti__Var_4)));
            }
          }
      }
    else
      {
        MR_Word hlds__hlds_rtti__TypeInfo_12_12;
        MR_Word hlds__hlds_rtti__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer hlds__hlds_rtti__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__hlds_rtti__Var_7;
        MR_Integer hlds__hlds_rtti__Var_8;

        hlds__hlds_rtti__succeeded = ((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__hlds_rtti__succeeded)
          {
            hlds__hlds_rtti__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
            hlds__hlds_rtti__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
            hlds__hlds_rtti__TypeInfo_12_12 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
            {
              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_12_12, ((MR_Box) (hlds__hlds_rtti__Var_5)), ((MR_Box) (hlds__hlds_rtti__Var_7)));
            }
            if (hlds__hlds_rtti__succeeded)
              hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__Var_6 == hlds__hlds_rtti__Var_8);
          }
      }
    return hlds__hlds_rtti__succeeded;
  }
}

void MR_CALL 
hlds__hlds_rtti____Compare____rtti_varmaps_0_0(
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Integer hlds__hlds_rtti__CastX_15 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;
    MR_Integer hlds__hlds_rtti__CastY_16 = (MR_Integer) hlds__hlds_rtti__HeadVar__3_3;

    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_15 == hlds__hlds_rtti__CastY_16);
    if (hlds__hlds_rtti__succeeded)
      *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word hlds__hlds_rtti__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__hlds_rtti__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__hlds_rtti__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__hlds_rtti__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word hlds__hlds_rtti__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__hlds_rtti__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__hlds_rtti__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word hlds__hlds_rtti__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word hlds__hlds_rtti__Var_12;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[1], &hlds__hlds_rtti__Var_12, ((MR_Box) (hlds__hlds_rtti__Var_4)), ((MR_Box) (hlds__hlds_rtti__Var_8)));
        }
        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__Var_12 == (MR_Integer) 0);
        hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
        if (hlds__hlds_rtti__succeeded)
          *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__Var_12;
        else
          {
            MR_Word hlds__hlds_rtti__Var_13;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[2], &hlds__hlds_rtti__Var_13, ((MR_Box) (hlds__hlds_rtti__Var_5)), ((MR_Box) (hlds__hlds_rtti__Var_9)));
            }
            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__Var_13 == (MR_Integer) 0);
            hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
            if (hlds__hlds_rtti__succeeded)
              *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__Var_13;
            else
              {
                MR_Word hlds__hlds_rtti__Var_14;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[3], &hlds__hlds_rtti__Var_14, ((MR_Box) (hlds__hlds_rtti__Var_6)), ((MR_Box) (hlds__hlds_rtti__Var_10)));
                }
                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__Var_14 == (MR_Integer) 0);
                hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
                if (hlds__hlds_rtti__succeeded)
                  *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__Var_14;
                else
                  {
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[4], hlds__hlds_rtti__HeadVar__1_1, ((MR_Box) (hlds__hlds_rtti__Var_7)), ((MR_Box) (hlds__hlds_rtti__Var_11)));
                    }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_varmaps_0_0(
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Integer hlds__hlds_rtti__CastX_11 = (MR_Integer) hlds__hlds_rtti__HeadVar__1_1;
    MR_Integer hlds__hlds_rtti__CastY_12 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;

    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_11 == hlds__hlds_rtti__CastY_12);
    if (hlds__hlds_rtti__succeeded)
      hlds__hlds_rtti__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__hlds_rtti__TypeInfo_14_14;
        MR_Word hlds__hlds_rtti__TypeInfo_15_15;
        MR_Word hlds__hlds_rtti__TypeInfo_16_16;
        MR_Word hlds__hlds_rtti__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__hlds_rtti__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__hlds_rtti__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word hlds__hlds_rtti__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word hlds__hlds_rtti__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__hlds_rtti__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__hlds_rtti__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__hlds_rtti__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 3)));

        {
          hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[1], ((MR_Box) (hlds__hlds_rtti__Var_3)), ((MR_Box) (hlds__hlds_rtti__Var_7)));
        }
        if (hlds__hlds_rtti__succeeded)
          {
            hlds__hlds_rtti__TypeInfo_14_14 = (MR_Word) &hlds__hlds_rtti_scalar_common_2[2];
            {
              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_14_14, ((MR_Box) (hlds__hlds_rtti__Var_4)), ((MR_Box) (hlds__hlds_rtti__Var_8)));
            }
            if (hlds__hlds_rtti__succeeded)
              {
                hlds__hlds_rtti__TypeInfo_15_15 = (MR_Word) &hlds__hlds_rtti_scalar_common_2[3];
                {
                  hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_15_15, ((MR_Box) (hlds__hlds_rtti__Var_5)), ((MR_Box) (hlds__hlds_rtti__Var_9)));
                }
                if (hlds__hlds_rtti__succeeded)
                  {
                    hlds__hlds_rtti__TypeInfo_16_16 = (MR_Word) &hlds__hlds_rtti_scalar_common_2[4];
                    {
                      hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_16_16, ((MR_Box) (hlds__hlds_rtti__Var_6)), ((MR_Box) (hlds__hlds_rtti__Var_10)));
                    }
                  }
              }
          }
      }
    return hlds__hlds_rtti__succeeded;
  }
}

void MR_CALL 
hlds__hlds_rtti____Compare____rtti_var_info_0_0(
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Integer hlds__hlds_rtti__CastX_16 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;
    MR_Integer hlds__hlds_rtti__CastY_17 = (MR_Integer) hlds__hlds_rtti__HeadVar__3_3;

    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_16 == hlds__hlds_rtti__CastY_17);
    if (hlds__hlds_rtti__succeeded)
      *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 2;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__hlds_rtti__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__hlds_rtti__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    parse_tree__prog_data____Compare____mer_type_0_0(hlds__hlds_rtti__HeadVar__1_1, hlds__hlds_rtti__Var_20, hlds__hlds_rtti__Var_5);
                  }
                }
                break;
              case (MR_Integer) 2:
                *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word hlds__hlds_rtti__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__hlds_rtti__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    parse_tree__prog_data____Compare____prog_constraint_0_0(hlds__hlds_rtti__HeadVar__1_1, hlds__hlds_rtti__Var_21, hlds__hlds_rtti__Var_12);
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_var_info_0_0(
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Integer hlds__hlds_rtti__CastX_9 = (MR_Integer) hlds__hlds_rtti__HeadVar__1_1;
    MR_Integer hlds__hlds_rtti__CastY_10 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;

    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_9 == hlds__hlds_rtti__CastY_10);
    if (hlds__hlds_rtti__succeeded)
      hlds__hlds_rtti__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer hlds__hlds_rtti__CastX_7 = (MR_Integer) hlds__hlds_rtti__HeadVar__1_1;
            MR_Integer hlds__hlds_rtti__CastY_8 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;

            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastY_8 == hlds__hlds_rtti__CastX_7);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__hlds_rtti__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__hlds_rtti__Var_4;

            hlds__hlds_rtti__succeeded = ((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__hlds_rtti__succeeded)
              {
                hlds__hlds_rtti__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
                {
                  hlds__hlds_rtti__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__hlds_rtti__Var_3, hlds__hlds_rtti__Var_4);
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word hlds__hlds_rtti__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__hlds_rtti__Var_6;

            hlds__hlds_rtti__succeeded = ((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (hlds__hlds_rtti__succeeded)
              {
                hlds__hlds_rtti__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
                {
                  hlds__hlds_rtti__succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(hlds__hlds_rtti__Var_5, hlds__hlds_rtti__Var_6);
                }
              }
          }
          break;
      }
    return hlds__hlds_rtti__succeeded;
  }
}

void MR_CALL 
hlds__hlds_rtti____Compare____rtti_proc_label_0_0(
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Integer hlds__hlds_rtti__CastX_51 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;
    MR_Integer hlds__hlds_rtti__CastY_52 = (MR_Integer) hlds__hlds_rtti__HeadVar__3_3;

    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_51 == hlds__hlds_rtti__CastY_52);
    if (hlds__hlds_rtti__succeeded)
      *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word hlds__hlds_rtti__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__hlds_rtti__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__hlds_rtti__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 2)));
        MR_String hlds__hlds_rtti__Var_7 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer hlds__hlds_rtti__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word hlds__hlds_rtti__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word hlds__hlds_rtti__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 6)));
        MR_Integer hlds__hlds_rtti__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word hlds__hlds_rtti__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word hlds__hlds_rtti__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 9)));
        MR_Word hlds__hlds_rtti__Var_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 10)))) & (MR_Integer) 7);
        MR_Word hlds__hlds_rtti__Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word hlds__hlds_rtti__Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word hlds__hlds_rtti__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 11)));
        MR_Word hlds__hlds_rtti__Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 12)))) & (MR_Integer) 1);
        MR_Word hlds__hlds_rtti__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word hlds__hlds_rtti__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__hlds_rtti__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__hlds_rtti__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 2)));
        MR_String hlds__hlds_rtti__Var_23 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 3)));
        MR_Integer hlds__hlds_rtti__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word hlds__hlds_rtti__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word hlds__hlds_rtti__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 6)));
        MR_Integer hlds__hlds_rtti__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word hlds__hlds_rtti__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 8)));
        MR_Word hlds__hlds_rtti__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 9)));
        MR_Word hlds__hlds_rtti__Var_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 10)))) & (MR_Integer) 7);
        MR_Word hlds__hlds_rtti__Var_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word hlds__hlds_rtti__Var_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word hlds__hlds_rtti__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 11)));
        MR_Word hlds__hlds_rtti__Var_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 12)))) & (MR_Integer) 1);
        MR_Word hlds__hlds_rtti__Var_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word hlds__hlds_rtti__Var_36;
        MR_Integer hlds__hlds_rtti__Var_69 = (MR_Integer) hlds__hlds_rtti__Var_4;
        MR_Integer hlds__hlds_rtti__Var_70 = (MR_Integer) hlds__hlds_rtti__Var_20;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_rtti__Var_36, hlds__hlds_rtti__Var_69, hlds__hlds_rtti__Var_70);
        }
        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__Var_36 == (MR_Integer) 0);
        hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
        if (hlds__hlds_rtti__succeeded)
          *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__Var_36;
        else
          {
            MR_Word hlds__hlds_rtti__Var_37;

            {
              mdbcomp__sym_name____Compare____sym_name_0_0(&hlds__hlds_rtti__Var_37, hlds__hlds_rtti__Var_5, hlds__hlds_rtti__Var_21);
            }
            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__Var_37 == (MR_Integer) 0);
            hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
            if (hlds__hlds_rtti__succeeded)
              *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__Var_37;
            else
              {
                MR_Word hlds__hlds_rtti__Var_38;

                {
                  mdbcomp__sym_name____Compare____sym_name_0_0(&hlds__hlds_rtti__Var_38, hlds__hlds_rtti__Var_6, hlds__hlds_rtti__Var_22);
                }
                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__Var_38 == (MR_Integer) 0);
                hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
                if (hlds__hlds_rtti__succeeded)
                  *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__Var_38;
                else
                  {
                    MR_Word hlds__hlds_rtti__Var_39;

                    {
                      mercury__private_builtin__builtin_compare_string_3_p_0(&hlds__hlds_rtti__Var_39, hlds__hlds_rtti__Var_7, hlds__hlds_rtti__Var_23);
                    }
                    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__Var_39 == (MR_Integer) 0);
                    hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
                    if (hlds__hlds_rtti__succeeded)
                      *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__Var_39;
                    else
                      {
                        MR_Word hlds__hlds_rtti__Var_40;

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_rtti__Var_40, hlds__hlds_rtti__Var_8, hlds__hlds_rtti__Var_24);
                        }
                        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__Var_40 == (MR_Integer) 0);
                        hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
                        if (hlds__hlds_rtti__succeeded)
                          *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__Var_40;
                        else
                          {
                            MR_Word hlds__hlds_rtti__Var_41;

                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[3], &hlds__hlds_rtti__Var_41, ((MR_Box) (hlds__hlds_rtti__Var_9)), ((MR_Box) (hlds__hlds_rtti__Var_25)));
                            }
                            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__Var_41 == (MR_Integer) 0);
                            hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
                            if (hlds__hlds_rtti__succeeded)
                              *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__Var_41;
                            else
                              {
                                MR_Word hlds__hlds_rtti__Var_42;

                                {
                                  hlds__hlds_pred____Compare____pred_id_0_0(&hlds__hlds_rtti__Var_42, hlds__hlds_rtti__Var_10, hlds__hlds_rtti__Var_26);
                                }
                                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__Var_42 == (MR_Integer) 0);
                                hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
                                if (hlds__hlds_rtti__succeeded)
                                  *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__Var_42;
                                else
                                  {
                                    MR_Word hlds__hlds_rtti__Var_43;

                                    {
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_rtti__Var_43, hlds__hlds_rtti__Var_11, hlds__hlds_rtti__Var_27);
                                    }
                                    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__Var_43 == (MR_Integer) 0);
                                    hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
                                    if (hlds__hlds_rtti__succeeded)
                                      *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__Var_43;
                                    else
                                      {
                                        MR_Word hlds__hlds_rtti__Var_44;

                                        {
                                          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[5], &hlds__hlds_rtti__Var_44, ((MR_Box) (hlds__hlds_rtti__Var_12)), ((MR_Box) (hlds__hlds_rtti__Var_28)));
                                        }
                                        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__Var_44 == (MR_Integer) 0);
                                        hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
                                        if (hlds__hlds_rtti__succeeded)
                                          *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__Var_44;
                                        else
                                          {
                                            MR_Word hlds__hlds_rtti__Var_45;

                                            {
                                              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[6], &hlds__hlds_rtti__Var_45, ((MR_Box) (hlds__hlds_rtti__Var_13)), ((MR_Box) (hlds__hlds_rtti__Var_29)));
                                            }
                                            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__Var_45 == (MR_Integer) 0);
                                            hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
                                            if (hlds__hlds_rtti__succeeded)
                                              *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__Var_45;
                                            else
                                              {
                                                MR_Word hlds__hlds_rtti__Var_46;
                                                MR_Integer hlds__hlds_rtti__Var_71 = (MR_Integer) hlds__hlds_rtti__Var_14;
                                                MR_Integer hlds__hlds_rtti__Var_72 = (MR_Integer) hlds__hlds_rtti__Var_30;

                                                {
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_rtti__Var_46, hlds__hlds_rtti__Var_71, hlds__hlds_rtti__Var_72);
                                                }
                                                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__Var_46 == (MR_Integer) 0);
                                                hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
                                                if (hlds__hlds_rtti__succeeded)
                                                  *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__Var_46;
                                                else
                                                  {
                                                    MR_Word hlds__hlds_rtti__Var_47;
                                                    MR_Integer hlds__hlds_rtti__Var_73 = (MR_Integer) hlds__hlds_rtti__Var_15;
                                                    MR_Integer hlds__hlds_rtti__Var_74 = (MR_Integer) hlds__hlds_rtti__Var_31;

                                                    {
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_rtti__Var_47, hlds__hlds_rtti__Var_73, hlds__hlds_rtti__Var_74);
                                                    }
                                                    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__Var_47 == (MR_Integer) 0);
                                                    hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
                                                    if (hlds__hlds_rtti__succeeded)
                                                      *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__Var_47;
                                                    else
                                                      {
                                                        MR_Word hlds__hlds_rtti__Var_48;
                                                        MR_Integer hlds__hlds_rtti__Var_75 = (MR_Integer) hlds__hlds_rtti__Var_16;
                                                        MR_Integer hlds__hlds_rtti__Var_76 = (MR_Integer) hlds__hlds_rtti__Var_32;

                                                        {
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_rtti__Var_48, hlds__hlds_rtti__Var_75, hlds__hlds_rtti__Var_76);
                                                        }
                                                        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__Var_48 == (MR_Integer) 0);
                                                        hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
                                                        if (hlds__hlds_rtti__succeeded)
                                                          *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__Var_48;
                                                        else
                                                          {
                                                            MR_Word hlds__hlds_rtti__Var_49;

                                                            {
                                                              hlds__hlds_pred____Compare____pred_origin_0_0(&hlds__hlds_rtti__Var_49, hlds__hlds_rtti__Var_17, hlds__hlds_rtti__Var_33);
                                                            }
                                                            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__Var_49 == (MR_Integer) 0);
                                                            hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
                                                            if (hlds__hlds_rtti__succeeded)
                                                              *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__Var_49;
                                                            else
                                                              {
                                                                MR_Word hlds__hlds_rtti__Var_50;
                                                                MR_Integer hlds__hlds_rtti__Var_77 = (MR_Integer) hlds__hlds_rtti__Var_18;
                                                                MR_Integer hlds__hlds_rtti__Var_78 = (MR_Integer) hlds__hlds_rtti__Var_34;

                                                                {
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_rtti__Var_50, hlds__hlds_rtti__Var_77, hlds__hlds_rtti__Var_78);
                                                                }
                                                                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__Var_50 == (MR_Integer) 0);
                                                                hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
                                                                if (hlds__hlds_rtti__succeeded)
                                                                  *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__Var_50;
                                                                else
                                                                  {
                                                                    MR_Integer hlds__hlds_rtti__Var_79 = (MR_Integer) hlds__hlds_rtti__Var_19;
                                                                    MR_Integer hlds__hlds_rtti__Var_80 = (MR_Integer) hlds__hlds_rtti__Var_35;

                                                                    {
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_rtti__HeadVar__1_1, hlds__hlds_rtti__Var_79, hlds__hlds_rtti__Var_80);
                                                                    }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_proc_label_0_0(
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Integer hlds__hlds_rtti__CastX_35 = (MR_Integer) hlds__hlds_rtti__HeadVar__1_1;
    MR_Integer hlds__hlds_rtti__CastY_36 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;

    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_35 == hlds__hlds_rtti__CastY_36);
    if (hlds__hlds_rtti__succeeded)
      hlds__hlds_rtti__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__hlds_rtti__TypeInfo_39_39;
        MR_Word hlds__hlds_rtti__TypeInfo_41_41;
        MR_Word hlds__hlds_rtti__TypeInfo_42_42;
        MR_Word hlds__hlds_rtti__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__hlds_rtti__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__hlds_rtti__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 2)));
        MR_String hlds__hlds_rtti__Var_6 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 3)));
        MR_Integer hlds__hlds_rtti__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word hlds__hlds_rtti__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word hlds__hlds_rtti__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 6)));
        MR_Integer hlds__hlds_rtti__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 7)));
        MR_Word hlds__hlds_rtti__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 8)));
        MR_Word hlds__hlds_rtti__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 9)));
        MR_Word hlds__hlds_rtti__Var_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 10)))) & (MR_Integer) 7);
        MR_Word hlds__hlds_rtti__Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word hlds__hlds_rtti__Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word hlds__hlds_rtti__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 11)));
        MR_Word hlds__hlds_rtti__Var_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 12)))) & (MR_Integer) 1);
        MR_Word hlds__hlds_rtti__Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word hlds__hlds_rtti__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__hlds_rtti__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__hlds_rtti__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 2)));
        MR_String hlds__hlds_rtti__Var_22 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer hlds__hlds_rtti__Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word hlds__hlds_rtti__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word hlds__hlds_rtti__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 6)));
        MR_Integer hlds__hlds_rtti__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word hlds__hlds_rtti__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word hlds__hlds_rtti__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 9)));
        MR_Word hlds__hlds_rtti__Var_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 10)))) & (MR_Integer) 7);
        MR_Word hlds__hlds_rtti__Var_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word hlds__hlds_rtti__Var_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word hlds__hlds_rtti__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 11)));
        MR_Word hlds__hlds_rtti__Var_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 12)))) & (MR_Integer) 1);
        MR_Word hlds__hlds_rtti__Var_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__Var_3 == hlds__hlds_rtti__Var_19);
        if (hlds__hlds_rtti__succeeded)
          {
            {
              hlds__hlds_rtti__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__hlds_rtti__Var_4, hlds__hlds_rtti__Var_20);
            }
            if (hlds__hlds_rtti__succeeded)
              {
                {
                  hlds__hlds_rtti__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__hlds_rtti__Var_5, hlds__hlds_rtti__Var_21);
                }
                if (hlds__hlds_rtti__succeeded)
                  {
                    hlds__hlds_rtti__succeeded = (strcmp(hlds__hlds_rtti__Var_6, hlds__hlds_rtti__Var_22) == 0);
                    if (hlds__hlds_rtti__succeeded)
                      {
                        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__Var_7 == hlds__hlds_rtti__Var_23);
                        if (hlds__hlds_rtti__succeeded)
                          {
                            hlds__hlds_rtti__TypeInfo_39_39 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[3];
                            {
                              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_39_39, ((MR_Box) (hlds__hlds_rtti__Var_8)), ((MR_Box) (hlds__hlds_rtti__Var_24)));
                            }
                            if (hlds__hlds_rtti__succeeded)
                              {
                                {
                                  hlds__hlds_rtti__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__hlds_rtti__Var_9, hlds__hlds_rtti__Var_25);
                                }
                                if (hlds__hlds_rtti__succeeded)
                                  {
                                    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__Var_10 == hlds__hlds_rtti__Var_26);
                                    if (hlds__hlds_rtti__succeeded)
                                      {
                                        hlds__hlds_rtti__TypeInfo_41_41 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[5];
                                        {
                                          hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_41_41, ((MR_Box) (hlds__hlds_rtti__Var_11)), ((MR_Box) (hlds__hlds_rtti__Var_27)));
                                        }
                                        if (hlds__hlds_rtti__succeeded)
                                          {
                                            hlds__hlds_rtti__TypeInfo_42_42 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[6];
                                            {
                                              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_42_42, ((MR_Box) (hlds__hlds_rtti__Var_12)), ((MR_Box) (hlds__hlds_rtti__Var_28)));
                                            }
                                            if (hlds__hlds_rtti__succeeded)
                                              {
                                                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__Var_13 == hlds__hlds_rtti__Var_29);
                                                if (hlds__hlds_rtti__succeeded)
                                                  {
                                                    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__Var_14 == hlds__hlds_rtti__Var_30);
                                                    if (hlds__hlds_rtti__succeeded)
                                                      {
                                                        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__Var_15 == hlds__hlds_rtti__Var_31);
                                                        if (hlds__hlds_rtti__succeeded)
                                                          {
                                                            {
                                                              hlds__hlds_rtti__succeeded = hlds__hlds_pred____Unify____pred_origin_0_0(hlds__hlds_rtti__Var_16, hlds__hlds_rtti__Var_32);
                                                            }
                                                            if (hlds__hlds_rtti__succeeded)
                                                              {
                                                                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__Var_17 == hlds__hlds_rtti__Var_33);
                                                                if (hlds__hlds_rtti__succeeded)
                                                                  hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__Var_18 == hlds__hlds_rtti__Var_34);
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    return hlds__hlds_rtti__succeeded;
  }
}

void MR_CALL 
hlds__hlds_rtti____Compare____prog_var_name_0_0(
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
  MR_String hlds__hlds_rtti__HeadVar__2_2,
  MR_String hlds__hlds_rtti__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_String hlds__hlds_rtti__Cast_HeadVar1_4 = hlds__hlds_rtti__HeadVar__2_2;
    MR_String hlds__hlds_rtti__Cast_HeadVar2_5 = hlds__hlds_rtti__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_string_3_p_0(hlds__hlds_rtti__HeadVar__1_1, hlds__hlds_rtti__Cast_HeadVar1_4, hlds__hlds_rtti__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_rtti____Unify____prog_var_name_0_0(
  MR_String hlds__hlds_rtti__HeadVar__1_1,
  MR_String hlds__hlds_rtti__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_String hlds__hlds_rtti__Cast_HeadVar1_3 = hlds__hlds_rtti__HeadVar__1_1;
    MR_String hlds__hlds_rtti__Cast_HeadVar2_4 = hlds__hlds_rtti__HeadVar__2_2;

    hlds__hlds_rtti__succeeded = (strcmp(hlds__hlds_rtti__Cast_HeadVar1_3, hlds__hlds_rtti__Cast_HeadVar2_4) == 0);
    return hlds__hlds_rtti__succeeded;
  }
}

void MR_CALL 
hlds__hlds_rtti____Compare____instance_method_constraints_0_0(
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Integer hlds__hlds_rtti__CastX_15 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;
    MR_Integer hlds__hlds_rtti__CastY_16 = (MR_Integer) hlds__hlds_rtti__HeadVar__3_3;

    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_15 == hlds__hlds_rtti__CastY_16);
    if (hlds__hlds_rtti__succeeded)
      *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word hlds__hlds_rtti__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__hlds_rtti__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__hlds_rtti__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__hlds_rtti__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word hlds__hlds_rtti__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__hlds_rtti__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__hlds_rtti__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word hlds__hlds_rtti__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word hlds__hlds_rtti__Var_12;

        {
          parse_tree__prog_data____Compare____class_id_0_0(&hlds__hlds_rtti__Var_12, hlds__hlds_rtti__Var_4, hlds__hlds_rtti__Var_8);
        }
        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__Var_12 == (MR_Integer) 0);
        hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
        if (hlds__hlds_rtti__succeeded)
          *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__Var_12;
        else
          {
            MR_Word hlds__hlds_rtti__Var_13;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[3], &hlds__hlds_rtti__Var_13, ((MR_Box) (hlds__hlds_rtti__Var_5)), ((MR_Box) (hlds__hlds_rtti__Var_9)));
            }
            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__Var_13 == (MR_Integer) 0);
            hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
            if (hlds__hlds_rtti__succeeded)
              *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__Var_13;
            else
              {
                MR_Word hlds__hlds_rtti__Var_14;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[4], &hlds__hlds_rtti__Var_14, ((MR_Box) (hlds__hlds_rtti__Var_6)), ((MR_Box) (hlds__hlds_rtti__Var_10)));
                }
                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__Var_14 == (MR_Integer) 0);
                hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
                if (hlds__hlds_rtti__succeeded)
                  *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__Var_14;
                else
                  {
                    parse_tree__prog_data____Compare____prog_constraints_0_0(hlds__hlds_rtti__HeadVar__1_1, hlds__hlds_rtti__Var_7, hlds__hlds_rtti__Var_11);
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
hlds__hlds_rtti____Unify____instance_method_constraints_0_0(
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Integer hlds__hlds_rtti__CastX_11 = (MR_Integer) hlds__hlds_rtti__HeadVar__1_1;
    MR_Integer hlds__hlds_rtti__CastY_12 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;

    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_11 == hlds__hlds_rtti__CastY_12);
    if (hlds__hlds_rtti__succeeded)
      hlds__hlds_rtti__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__hlds_rtti__TypeInfo_14_14;
        MR_Word hlds__hlds_rtti__TypeInfo_15_15;
        MR_Word hlds__hlds_rtti__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__hlds_rtti__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__hlds_rtti__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word hlds__hlds_rtti__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word hlds__hlds_rtti__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__hlds_rtti__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__hlds_rtti__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__hlds_rtti__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 3)));

        {
          hlds__hlds_rtti__succeeded = parse_tree__prog_data____Unify____class_id_0_0(hlds__hlds_rtti__Var_3, hlds__hlds_rtti__Var_7);
        }
        if (hlds__hlds_rtti__succeeded)
          {
            hlds__hlds_rtti__TypeInfo_14_14 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[3];
            {
              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_14_14, ((MR_Box) (hlds__hlds_rtti__Var_4)), ((MR_Box) (hlds__hlds_rtti__Var_8)));
            }
            if (hlds__hlds_rtti__succeeded)
              {
                hlds__hlds_rtti__TypeInfo_15_15 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[4];
                {
                  hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_15_15, ((MR_Box) (hlds__hlds_rtti__Var_5)), ((MR_Box) (hlds__hlds_rtti__Var_9)));
                }
                if (hlds__hlds_rtti__succeeded)
                  {
                    hlds__hlds_rtti__succeeded = parse_tree__prog_data____Unify____prog_constraints_0_0(hlds__hlds_rtti__Var_6, hlds__hlds_rtti__Var_10);
                  }
              }
          }
      }
    return hlds__hlds_rtti__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_rtti__get_typeinfo_vars_acc_5_p_0_1(
  MR_Box hlds__hlds_rtti__closure_arg,
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box * hlds__hlds_rtti__wrapper_arg_2)
{
  {
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
    MR_Word hlds__hlds_rtti__conv0_LambdaHeadVar__2_28;

    {
      hlds__hlds_rtti__IntroducedFrom__pred__get_typeinfo_vars_acc__900__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), &hlds__hlds_rtti__conv0_LambdaHeadVar__2_28);
    }
    *hlds__hlds_rtti__wrapper_arg_2 = ((MR_Box) (hlds__hlds_rtti__conv0_LambdaHeadVar__2_28));
  }
}

static void MR_CALL 
hlds__hlds_rtti__get_typeinfo_vars_acc_5_p_0(
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
  MR_Word hlds__hlds_rtti__VarTypes_2,
  MR_Word hlds__hlds_rtti__TVarMap_3,
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_TypeInfoVars_0_4,
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_TypeInfoVars_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_rtti__succeeded;

        if ((hlds__hlds_rtti__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__hlds_rtti__STATE_VARIABLE_TypeInfoVars_5 = hlds__hlds_rtti__STATE_VARIABLE_TypeInfoVars_0_4;
        else
          {
            MR_Word hlds__hlds_rtti__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__hlds_rtti__Vars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__hlds_rtti__Type_16;
            MR_Word hlds__hlds_rtti__TypeVars_17;

            {
              hlds__vartypes__lookup_var_type_3_p_0(hlds__hlds_rtti__VarTypes_2, hlds__hlds_rtti__Var_11, &hlds__hlds_rtti__Type_16);
            }
            {
              parse_tree__prog_type__type_vars_2_p_0(hlds__hlds_rtti__Type_16, &hlds__hlds_rtti__TypeVars_17);
            }
            if ((hlds__hlds_rtti__TypeVars_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__hlds_rtti__next_value_of_HeadVar__1_1 = hlds__hlds_rtti__Vars_12;

                  hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__next_value_of_HeadVar__1_1;
                }
                continue;
              }
            else
              {
                MR_Word hlds__hlds_rtti__LookupVar_20;
                MR_Word hlds__hlds_rtti__TypeInfoVarsHead_24;
                MR_Word hlds__hlds_rtti__STATE_VARIABLE_TypeInfoVars_29_29;

                {
                  hlds__hlds_rtti__LookupVar_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__hlds_rtti__LookupVar_20, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_3[3]));
                  MR_hl_field(MR_mktag(0), hlds__hlds_rtti__LookupVar_20, 1) = ((MR_Box) (hlds__hlds_rtti__get_typeinfo_vars_acc_5_p_0_1));
                  MR_hl_field(MR_mktag(0), hlds__hlds_rtti__LookupVar_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), hlds__hlds_rtti__LookupVar_20, 3) = ((MR_Box) (hlds__hlds_rtti__TVarMap_3));
                }
                {
                  mercury__list__map_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], hlds__hlds_rtti__LookupVar_20, hlds__hlds_rtti__TypeVars_17, &hlds__hlds_rtti__TypeInfoVarsHead_24);
                }
                {
                  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_rtti__TypeInfoVarsHead_24, hlds__hlds_rtti__STATE_VARIABLE_TypeInfoVars_0_4, &hlds__hlds_rtti__STATE_VARIABLE_TypeInfoVars_29_29);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__hlds_rtti__next_value_of_HeadVar__1_1 = hlds__hlds_rtti__Vars_12;
                  MR_Word hlds__hlds_rtti__next_value_of_STATE_VARIABLE_TypeInfoVars_0_4 = hlds__hlds_rtti__STATE_VARIABLE_TypeInfoVars_29_29;

                  hlds__hlds_rtti__STATE_VARIABLE_TypeInfoVars_0_4 = hlds__hlds_rtti__next_value_of_STATE_VARIABLE_TypeInfoVars_0_4;
                  hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_rtti__apply_constraint_value_transformation_4_p_0(
  MR_Word hlds__hlds_rtti__Pred_5,
  MR_Word hlds__hlds_rtti__HeadVar__2_6,
  MR_Word hlds__hlds_rtti__Constraint0_7,
  MR_Word * hlds__hlds_rtti__Constraint_8)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;

    {
      hlds__hlds_rtti__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_99_111_110_115_116_114_97_105_110_116_95_118_97_108_117_101_95_116_114_97_110_115_102_111_114_109_97_116_105_111_110_95_95_91_50_93_95_48_4_p_0(hlds__hlds_rtti__Pred_5, hlds__hlds_rtti__Constraint0_7, hlds__hlds_rtti__Constraint_8);
    }
  }
}

static void MR_CALL 
hlds__hlds_rtti__apply_constraint_key_transformation_5_p_0(
  MR_Word hlds__hlds_rtti__Pred_6,
  MR_Word hlds__hlds_rtti__Constraint0_7,
  MR_Word hlds__hlds_rtti__Var_8,
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_14,
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_15)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    MR_Word hlds__hlds_rtti__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint0_7, (MR_Integer) 0)));
    MR_Word hlds__hlds_rtti__Args0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint0_7, (MR_Integer) 1)));
    MR_Word hlds__hlds_rtti__Args_12;
    MR_Word hlds__hlds_rtti__Constraint_13;

    {
      mercury__list__map_3_p_0(hlds__hlds_rtti__TypeCtorInfo_17_17, hlds__hlds_rtti__TypeCtorInfo_17_17, hlds__hlds_rtti__Pred_6, hlds__hlds_rtti__Args0_11, &hlds__hlds_rtti__Args_12);
    }
    {
      hlds__hlds_rtti__Constraint_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint_13, 0) = ((MR_Box) (hlds__hlds_rtti__Name_10));
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint_13, 1) = ((MR_Box) (hlds__hlds_rtti__Args_12));
    }
    {
      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], ((MR_Box) (hlds__hlds_rtti__Constraint_13)), ((MR_Box) (hlds__hlds_rtti__Var_8)), hlds__hlds_rtti__STATE_VARIABLE_Map_0_14, hlds__hlds_rtti__STATE_VARIABLE_Map_15);
    }
  }
}

static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_constraint_map_7_p_0(
  MR_Word hlds__hlds_rtti__TRenaming_8,
  MR_Word hlds__hlds_rtti__TSubst_9,
  MR_Word hlds__hlds_rtti__Subst_10,
  MR_Word hlds__hlds_rtti__Var0_11,
  MR_Word hlds__hlds_rtti__Constraint0_12,
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_18,
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_19)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__Constraint1_14;
    MR_Word hlds__hlds_rtti__Constraint_15;
    MR_Word hlds__hlds_rtti__Var_16;
    MR_Word hlds__hlds_rtti__Var1_32;
    MR_Word hlds__hlds_rtti__TypeInfo_8_33;
    MR_Box hlds__hlds_rtti__conv0_Var1_32;
    MR_Word hlds__hlds_rtti__ExistingConstraint_17;
    MR_Box hlds__hlds_rtti__conv1_ExistingConstraint_17;

    {
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0(hlds__hlds_rtti__TRenaming_8, hlds__hlds_rtti__Constraint0_12, &hlds__hlds_rtti__Constraint1_14);
    }
    {
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(hlds__hlds_rtti__TSubst_9, hlds__hlds_rtti__Constraint1_14, &hlds__hlds_rtti__Constraint_15);
    }
    hlds__hlds_rtti__TypeInfo_8_33 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
    {
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0(hlds__hlds_rtti__TypeInfo_8_33, hlds__hlds_rtti__TypeInfo_8_33, hlds__hlds_rtti__Subst_10, ((MR_Box) (hlds__hlds_rtti__Var0_11)), &hlds__hlds_rtti__conv0_Var1_32);
    }
    if (hlds__hlds_rtti__succeeded)
      {
        hlds__hlds_rtti__Var1_32 = ((MR_Word) hlds__hlds_rtti__conv0_Var1_32);
        hlds__hlds_rtti__succeeded = MR_TRUE;
      }
    if (hlds__hlds_rtti__succeeded)
      hlds__hlds_rtti__Var_16 = hlds__hlds_rtti__Var1_32;
    else
      hlds__hlds_rtti__Var_16 = hlds__hlds_rtti__Var0_11;
    {
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_rtti__STATE_VARIABLE_Map_0_18, ((MR_Box) (hlds__hlds_rtti__Var_16)), &hlds__hlds_rtti__conv1_ExistingConstraint_17);
    }
    if (hlds__hlds_rtti__succeeded)
      {
        hlds__hlds_rtti__ExistingConstraint_17 = ((MR_Word) hlds__hlds_rtti__conv1_ExistingConstraint_17);
        hlds__hlds_rtti__succeeded = MR_TRUE;
      }
    if (hlds__hlds_rtti__succeeded)
      {
        {
          hlds__hlds_rtti__succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(hlds__hlds_rtti__Constraint_15, hlds__hlds_rtti__ExistingConstraint_17);
        }
        if (hlds__hlds_rtti__succeeded)
          {
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_rtti", (MR_String) "predicate \140hlds.hlds_rtti.apply_substs_to_constraint_map\'/7", (MR_String) "inconsistent typeclass_infos");
              return;
            }
          }
        *hlds__hlds_rtti__STATE_VARIABLE_Map_19 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_18;
      }
    else
      {
        {
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, ((MR_Box) (hlds__hlds_rtti__Var_16)), ((MR_Box) (hlds__hlds_rtti__Constraint_15)), hlds__hlds_rtti__STATE_VARIABLE_Map_0_18, hlds__hlds_rtti__STATE_VARIABLE_Map_19);
        }
      }
  }
}

static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_type_map_7_p_0(
  MR_Word hlds__hlds_rtti__TRenaming_8,
  MR_Word hlds__hlds_rtti__TSubst_9,
  MR_Word hlds__hlds_rtti__Subst_10,
  MR_Word hlds__hlds_rtti__Var0_11,
  MR_Word hlds__hlds_rtti__Type0_12,
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_18,
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_19)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__Type1_14;
    MR_Word hlds__hlds_rtti__Type_15;
    MR_Word hlds__hlds_rtti__Var_16;
    MR_Word hlds__hlds_rtti__Var1_47;
    MR_Word hlds__hlds_rtti__TypeInfo_8_48;
    MR_Box hlds__hlds_rtti__conv0_Var1_47;
    MR_Word hlds__hlds_rtti__ExistingType_17;
    MR_Box hlds__hlds_rtti__conv1_ExistingType_17;

    {
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(hlds__hlds_rtti__TRenaming_8, hlds__hlds_rtti__Type0_12, &hlds__hlds_rtti__Type1_14);
    }
    {
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(hlds__hlds_rtti__TSubst_9, hlds__hlds_rtti__Type1_14, &hlds__hlds_rtti__Type_15);
    }
    hlds__hlds_rtti__TypeInfo_8_48 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
    {
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0(hlds__hlds_rtti__TypeInfo_8_48, hlds__hlds_rtti__TypeInfo_8_48, hlds__hlds_rtti__Subst_10, ((MR_Box) (hlds__hlds_rtti__Var0_11)), &hlds__hlds_rtti__conv0_Var1_47);
    }
    if (hlds__hlds_rtti__succeeded)
      {
        hlds__hlds_rtti__Var1_47 = ((MR_Word) hlds__hlds_rtti__conv0_Var1_47);
        hlds__hlds_rtti__succeeded = MR_TRUE;
      }
    if (hlds__hlds_rtti__succeeded)
      hlds__hlds_rtti__Var_16 = hlds__hlds_rtti__Var1_47;
    else
      hlds__hlds_rtti__Var_16 = hlds__hlds_rtti__Var0_11;
    {
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__STATE_VARIABLE_Map_0_18, ((MR_Box) (hlds__hlds_rtti__Var_16)), &hlds__hlds_rtti__conv1_ExistingType_17);
    }
    if (hlds__hlds_rtti__succeeded)
      {
        hlds__hlds_rtti__ExistingType_17 = ((MR_Word) hlds__hlds_rtti__conv1_ExistingType_17);
        hlds__hlds_rtti__succeeded = MR_TRUE;
      }
    if (hlds__hlds_rtti__succeeded)
      {
        {
          hlds__hlds_rtti__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__hlds_rtti__Type_15, hlds__hlds_rtti__ExistingType_17);
        }
        if (hlds__hlds_rtti__succeeded)
          {
          }
        else
          {
            MR_Word hlds__hlds_rtti__TypeCtorInfo_36_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
            MR_String hlds__hlds_rtti__Var_22;
            MR_String hlds__hlds_rtti__Var_28;
            MR_String hlds__hlds_rtti__Var_31;
            MR_String hlds__hlds_rtti__Var_40;
            MR_String hlds__hlds_rtti__Var_41;

            {
              hlds__hlds_rtti__Var_28 = mercury__string__string_1_f_0(hlds__hlds_rtti__TypeCtorInfo_36_36, ((MR_Box) (hlds__hlds_rtti__Type_15)));
            }
            {
              hlds__hlds_rtti__Var_31 = mercury__string__string_1_f_0(hlds__hlds_rtti__TypeCtorInfo_36_36, ((MR_Box) (hlds__hlds_rtti__ExistingType_17)));
            }
            {
              hlds__hlds_rtti__Var_40 = mercury__string__f_43_43_2_f_0((MR_String) " ExistingType: ", hlds__hlds_rtti__Var_31);
            }
            {
              hlds__hlds_rtti__Var_41 = mercury__string__f_43_43_2_f_0(hlds__hlds_rtti__Var_28, hlds__hlds_rtti__Var_40);
            }
            {
              hlds__hlds_rtti__Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "inconsistent type_infos:  Type: ", hlds__hlds_rtti__Var_41);
            }
            {
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_rtti", (MR_String) "predicate \140hlds.hlds_rtti.apply_substs_to_type_map\'/7", hlds__hlds_rtti__Var_22);
              return;
            }
          }
        *hlds__hlds_rtti__STATE_VARIABLE_Map_19 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_18;
      }
    else
      {
        {
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__hlds_rtti__Var_16)), ((MR_Box) (hlds__hlds_rtti__Type_15)), hlds__hlds_rtti__STATE_VARIABLE_Map_0_18, hlds__hlds_rtti__STATE_VARIABLE_Map_19);
        }
      }
  }
}

static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_ti_map_7_p_0(
  MR_Word hlds__hlds_rtti__TRenaming_8,
  MR_Word hlds__hlds_rtti__TSubst_9,
  MR_Word hlds__hlds_rtti__Subst_10,
  MR_Word hlds__hlds_rtti__TVar_11,
  MR_Word hlds__hlds_rtti__Locn_12,
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_37,
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_38)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__TypeInfo_41_41;
    MR_Word hlds__hlds_rtti__NewLocn_16;
    MR_Word hlds__hlds_rtti__NewTVar1_17;
    MR_Word hlds__hlds_rtti__NewType_18;
    MR_Word hlds__hlds_rtti__Var_39;

    if (((MR_tag((MR_Word) hlds__hlds_rtti__Locn_12)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word hlds__hlds_rtti__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Locn_12, (MR_Integer) 0)));
        MR_Word hlds__hlds_rtti__NewVar_15;
        MR_Word hlds__hlds_rtti__Var1_50;
        MR_Word hlds__hlds_rtti__TypeInfo_8_51 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
        MR_Box hlds__hlds_rtti__conv0_Var1_50;

        {
          hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0(hlds__hlds_rtti__TypeInfo_8_51, hlds__hlds_rtti__TypeInfo_8_51, hlds__hlds_rtti__Subst_10, ((MR_Box) (hlds__hlds_rtti__Var_14)), &hlds__hlds_rtti__conv0_Var1_50);
        }
        if (hlds__hlds_rtti__succeeded)
          {
            hlds__hlds_rtti__Var1_50 = ((MR_Word) hlds__hlds_rtti__conv0_Var1_50);
            hlds__hlds_rtti__succeeded = MR_TRUE;
          }
        if (hlds__hlds_rtti__succeeded)
          hlds__hlds_rtti__NewVar_15 = hlds__hlds_rtti__Var1_50;
        else
          hlds__hlds_rtti__NewVar_15 = hlds__hlds_rtti__Var_14;
        {
          hlds__hlds_rtti__NewLocn_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__NewLocn_16, 0) = ((MR_Box) (hlds__hlds_rtti__NewVar_15));
        }
      }
    else
      {
        MR_Integer hlds__hlds_rtti__Num_56 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__Locn_12, (MR_Integer) 1)));
        MR_Word hlds__hlds_rtti__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__Locn_12, (MR_Integer) 0)));
        MR_Word hlds__hlds_rtti__NewVar_61;
        MR_Word hlds__hlds_rtti__Var1_58;
        MR_Word hlds__hlds_rtti__TypeInfo_8_57 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
        MR_Box hlds__hlds_rtti__conv1_Var1_58;

        {
          hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0(hlds__hlds_rtti__TypeInfo_8_57, hlds__hlds_rtti__TypeInfo_8_57, hlds__hlds_rtti__Subst_10, ((MR_Box) (hlds__hlds_rtti__Var_60)), &hlds__hlds_rtti__conv1_Var1_58);
        }
        if (hlds__hlds_rtti__succeeded)
          {
            hlds__hlds_rtti__Var1_58 = ((MR_Word) hlds__hlds_rtti__conv1_Var1_58);
            hlds__hlds_rtti__succeeded = MR_TRUE;
          }
        if (hlds__hlds_rtti__succeeded)
          hlds__hlds_rtti__NewVar_61 = hlds__hlds_rtti__Var1_58;
        else
          hlds__hlds_rtti__NewVar_61 = hlds__hlds_rtti__Var_60;
        {
          hlds__hlds_rtti__NewLocn_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__hlds_rtti__NewLocn_16, 0) = ((MR_Box) (hlds__hlds_rtti__NewVar_61));
          MR_hl_field(MR_mktag(1), hlds__hlds_rtti__NewLocn_16, 1) = ((MR_Box) (hlds__hlds_rtti__Num_56));
        }
      }
    {
      parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_3_p_0(hlds__hlds_rtti__TRenaming_8, hlds__hlds_rtti__TVar_11, &hlds__hlds_rtti__NewTVar1_17);
    }
    hlds__hlds_rtti__TypeInfo_41_41 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[1];
    {
      hlds__hlds_rtti__Var_39 = mercury__map__init_0_f_0(hlds__hlds_rtti__TypeInfo_41_41, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
    }
    {
      parse_tree__prog_type_subst__apply_rec_subst_to_tvar_4_p_0(hlds__hlds_rtti__Var_39, hlds__hlds_rtti__TSubst_9, hlds__hlds_rtti__NewTVar1_17, &hlds__hlds_rtti__NewType_18);
    }
    switch (MR_tag((MR_Word) hlds__hlds_rtti__NewType_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__hlds_rtti__NewTVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__NewType_18, (MR_Integer) 0)));
          MR_Word hlds__hlds_rtti__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__NewType_18, (MR_Integer) 1)));

          {
            mercury__map__set_4_p_0(hlds__hlds_rtti__TypeInfo_41_41, (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, ((MR_Box) (hlds__hlds_rtti__NewTVar_19)), ((MR_Box) (hlds__hlds_rtti__NewLocn_16)), hlds__hlds_rtti__STATE_VARIABLE_Map_0_37, hlds__hlds_rtti__STATE_VARIABLE_Map_38);
          }
        }
        break;
      case (MR_Integer) 1:
        *hlds__hlds_rtti__STATE_VARIABLE_Map_38 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_37;
        break;
      case (MR_Integer) 2:
        *hlds__hlds_rtti__STATE_VARIABLE_Map_38 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_37;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_rtti__NewType_18, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *hlds__hlds_rtti__STATE_VARIABLE_Map_38 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_37;
            break;
          case (MR_Integer) 1:
            *hlds__hlds_rtti__STATE_VARIABLE_Map_38 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_37;
            break;
          case (MR_Integer) 2:
            *hlds__hlds_rtti__STATE_VARIABLE_Map_38 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_37;
            break;
          case (MR_Integer) 3:
            *hlds__hlds_rtti__STATE_VARIABLE_Map_38 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_37;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_tci_map_7_p_0(
  MR_Word hlds__hlds_rtti__TRenaming_8,
  MR_Word hlds__hlds_rtti__TSubst_9,
  MR_Word hlds__hlds_rtti__Subst_10,
  MR_Word hlds__hlds_rtti__Constraint0_11,
  MR_Word hlds__hlds_rtti__Var0_12,
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_17,
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_18)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__Constraint1_14;
    MR_Word hlds__hlds_rtti__Constraint_15;
    MR_Word hlds__hlds_rtti__Var_16;
    MR_Word hlds__hlds_rtti__Var1_25;
    MR_Word hlds__hlds_rtti__TypeInfo_8_26;
    MR_Box hlds__hlds_rtti__conv0_Var1_25;

    {
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0(hlds__hlds_rtti__TRenaming_8, hlds__hlds_rtti__Constraint0_11, &hlds__hlds_rtti__Constraint1_14);
    }
    {
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(hlds__hlds_rtti__TSubst_9, hlds__hlds_rtti__Constraint1_14, &hlds__hlds_rtti__Constraint_15);
    }
    hlds__hlds_rtti__TypeInfo_8_26 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
    {
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0(hlds__hlds_rtti__TypeInfo_8_26, hlds__hlds_rtti__TypeInfo_8_26, hlds__hlds_rtti__Subst_10, ((MR_Box) (hlds__hlds_rtti__Var0_12)), &hlds__hlds_rtti__conv0_Var1_25);
    }
    if (hlds__hlds_rtti__succeeded)
      {
        hlds__hlds_rtti__Var1_25 = ((MR_Word) hlds__hlds_rtti__conv0_Var1_25);
        hlds__hlds_rtti__succeeded = MR_TRUE;
      }
    if (hlds__hlds_rtti__succeeded)
      hlds__hlds_rtti__Var_16 = hlds__hlds_rtti__Var1_25;
    else
      hlds__hlds_rtti__Var_16 = hlds__hlds_rtti__Var0_12;
    {
      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], ((MR_Box) (hlds__hlds_rtti__Constraint_15)), ((MR_Box) (hlds__hlds_rtti__Var_16)), hlds__hlds_rtti__STATE_VARIABLE_Map_0_17, hlds__hlds_rtti__STATE_VARIABLE_Map_18);
    }
  }
}

static void MR_CALL 
hlds__hlds_rtti__accumulate_types_in_prog_constraint_3_p_0(
  MR_Word hlds__hlds_rtti__Constraint_4,
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_TypeSet_0_8,
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_TypeSet_9)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__ArgTypes_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint_4, (MR_Integer) 1)));
    MR_Word hlds__hlds_rtti__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint_4, (MR_Integer) 0)));

    {
      mercury__set_tree234__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__ArgTypes_7, hlds__hlds_rtti__STATE_VARIABLE_TypeSet_0_8, hlds__hlds_rtti__STATE_VARIABLE_TypeSet_9);
    }
  }
}

static void MR_CALL 
hlds__hlds_rtti__filter_constraint_map_6_p_0(
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
  MR_ArrayPtr hlds__hlds_rtti__HeadVar__2_2,
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0_3,
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_4,
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0_5,
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_TCIMap_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_rtti__succeeded;

        if ((hlds__hlds_rtti__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__hlds_rtti__STATE_VARIABLE_TCIMap_6 = hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0_5;
            *hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_4 = hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0_3;
          }
        else
          {
            MR_Word hlds__hlds_rtti__VarConstraint_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__hlds_rtti__VarConstraints_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__hlds_rtti__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarConstraint_14, (MR_Integer) 0)));
            MR_Word hlds__hlds_rtti__Constraint_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarConstraint_14, (MR_Integer) 1)));
            MR_Integer hlds__hlds_rtti__VarNum_21;
            MR_Word hlds__hlds_rtti__Used_22;
            MR_Word hlds__hlds_rtti__STATE_VARIABLE_TCIMap_27_27;
            MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_28_28;
            MR_Box hlds__hlds_rtti__conv0_Used_22;

            {
              hlds__hlds_rtti__VarNum_21 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_rtti__Var_19);
            }
            {
              mercury__array__unsafe_lookup_3_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_ArrayPtr) hlds__hlds_rtti__HeadVar__2_2, hlds__hlds_rtti__VarNum_21, &hlds__hlds_rtti__conv0_Used_22);
            }
            hlds__hlds_rtti__Used_22 = ((MR_Word) hlds__hlds_rtti__conv0_Used_22);
            switch (hlds__hlds_rtti__Used_22) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__map__delete_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], ((MR_Box) (hlds__hlds_rtti__Constraint_20)), hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0_5, &hlds__hlds_rtti__STATE_VARIABLE_TCIMap_27_27);
                  }
                  hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_28_28 = hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0_3;
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_28_28, 0) = ((MR_Box) (hlds__hlds_rtti__VarConstraint_14));
                    MR_hl_field(MR_mktag(1), hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_28_28, 1) = ((MR_Box) (hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0_3));
                  }
                  hlds__hlds_rtti__STATE_VARIABLE_TCIMap_27_27 = hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0_5;
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_rtti__next_value_of_HeadVar__1_1 = hlds__hlds_rtti__VarConstraints_15;
              MR_Word hlds__hlds_rtti__next_value_of_STATE_VARIABLE_RevVarConstraints_0_3 = hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_28_28;
              MR_Word hlds__hlds_rtti__next_value_of_STATE_VARIABLE_TCIMap_0_5 = hlds__hlds_rtti__STATE_VARIABLE_TCIMap_27_27;

              hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0_5 = hlds__hlds_rtti__next_value_of_STATE_VARIABLE_TCIMap_0_5;
              hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0_3 = hlds__hlds_rtti__next_value_of_STATE_VARIABLE_RevVarConstraints_0_3;
              hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_rtti__filter_type_info_map_4_p_0(
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
  MR_ArrayPtr hlds__hlds_rtti__HeadVar__2_2,
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0_3,
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_rtti__succeeded;

        if ((hlds__hlds_rtti__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_4 = hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0_3;
        else
          {
            MR_Word hlds__hlds_rtti__VarType_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__hlds_rtti__VarTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__hlds_rtti__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarType_9, (MR_Integer) 0)));
            MR_Integer hlds__hlds_rtti__VarNum_15;
            MR_Word hlds__hlds_rtti__Used_16;
            MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_19_19;
            MR_Word hlds__hlds_rtti___Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarType_9, (MR_Integer) 1)));
            MR_Box hlds__hlds_rtti__conv0_Used_16;

            {
              hlds__hlds_rtti__VarNum_15 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_rtti__Var_13);
            }
            {
              mercury__array__unsafe_lookup_3_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_ArrayPtr) hlds__hlds_rtti__HeadVar__2_2, hlds__hlds_rtti__VarNum_15, &hlds__hlds_rtti__conv0_Used_16);
            }
            hlds__hlds_rtti__Used_16 = ((MR_Word) hlds__hlds_rtti__conv0_Used_16);
            switch (hlds__hlds_rtti__Used_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_19_19 = hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0_3;
                break;
              case (MR_Integer) 1:
                {
                  hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_19_19, 0) = ((MR_Box) (hlds__hlds_rtti__VarType_9));
                  MR_hl_field(MR_mktag(1), hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_19_19, 1) = ((MR_Box) (hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0_3));
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_rtti__next_value_of_HeadVar__1_1 = hlds__hlds_rtti__VarTypes_10;
              MR_Word hlds__hlds_rtti__next_value_of_STATE_VARIABLE_RevVarTypes_0_3 = hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_19_19;

              hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0_3 = hlds__hlds_rtti__next_value_of_STATE_VARIABLE_RevVarTypes_0_3;
              hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_rtti__filter_type_info_varmap_4_p_0(
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
  MR_ArrayPtr hlds__hlds_rtti__HeadVar__2_2,
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0_3,
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_rtti__succeeded;

        if ((hlds__hlds_rtti__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_4 = hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0_3;
        else
          {
            MR_Word hlds__hlds_rtti__TVarLocn_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__hlds_rtti__TVarLocns_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__hlds_rtti__Locn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__TVarLocn_9, (MR_Integer) 1)));
            MR_Word hlds__hlds_rtti__Var_15;
            MR_Integer hlds__hlds_rtti__VarNum_17;
            MR_Word hlds__hlds_rtti__Used_18;
            MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_21_21;
            MR_Word hlds__hlds_rtti___TVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__TVarLocn_9, (MR_Integer) 0)));
            MR_Box hlds__hlds_rtti__conv0_Used_18;

            if (((MR_tag((MR_Word) hlds__hlds_rtti__Locn_14)) == (MR_mktag((MR_Integer) 0))))
              hlds__hlds_rtti__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Locn_14, (MR_Integer) 0)));
            else
              {
                MR_Integer hlds__hlds_rtti__Var_16;

                hlds__hlds_rtti__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__Locn_14, (MR_Integer) 0)));
                hlds__hlds_rtti__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__Locn_14, (MR_Integer) 1)));
              }
            {
              hlds__hlds_rtti__VarNum_17 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_rtti__Var_15);
            }
            {
              mercury__array__unsafe_lookup_3_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_ArrayPtr) hlds__hlds_rtti__HeadVar__2_2, hlds__hlds_rtti__VarNum_17, &hlds__hlds_rtti__conv0_Used_18);
            }
            hlds__hlds_rtti__Used_18 = ((MR_Word) hlds__hlds_rtti__conv0_Used_18);
            switch (hlds__hlds_rtti__Used_18) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_21_21 = hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0_3;
                break;
              case (MR_Integer) 1:
                {
                  hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_21_21, 0) = ((MR_Box) (hlds__hlds_rtti__TVarLocn_9));
                  MR_hl_field(MR_mktag(1), hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_21_21, 1) = ((MR_Box) (hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0_3));
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_rtti__next_value_of_HeadVar__1_1 = hlds__hlds_rtti__TVarLocns_10;
              MR_Word hlds__hlds_rtti__next_value_of_STATE_VARIABLE_RevTVarLocns_0_3 = hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_21_21;

              hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0_3 = hlds__hlds_rtti__next_value_of_STATE_VARIABLE_RevTVarLocns_0_3;
              hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(
  MR_Word hlds__hlds_rtti__Vars0_6,
  MR_Word hlds__hlds_rtti__TypeInfoLiveness_7,
  MR_Word hlds__hlds_rtti__VarTypes_8,
  MR_Word hlds__hlds_rtti__RttiVarMaps_9,
  MR_Word * hlds__hlds_rtti__Vars_10)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;

    switch (hlds__hlds_rtti__TypeInfoLiveness_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *hlds__hlds_rtti__Vars_10 = hlds__hlds_rtti__Vars0_6;
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__hlds_rtti__TypeCtorInfo_15_23 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          MR_Word hlds__hlds_rtti__TypeInfoVars_11;
          MR_Word hlds__hlds_rtti__TVarMap_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_9, (MR_Integer) 1)));
          MR_Word hlds__hlds_rtti__VarList_18;
          MR_Word hlds__hlds_rtti__Var_19;
          MR_Word hlds__hlds_rtti__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_9, (MR_Integer) 0)));
          MR_Word hlds__hlds_rtti__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_9, (MR_Integer) 2)));
          MR_Word hlds__hlds_rtti__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_9, (MR_Integer) 3)));

          {
            hlds__hlds_rtti__VarList_18 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_rtti__TypeCtorInfo_15_23, hlds__hlds_rtti__Vars0_6);
          }
          {
            hlds__hlds_rtti__Var_19 = parse_tree__set_of_var__init_0_f_0(hlds__hlds_rtti__TypeCtorInfo_15_23);
          }
          {
            hlds__hlds_rtti__get_typeinfo_vars_acc_5_p_0(hlds__hlds_rtti__VarList_18, hlds__hlds_rtti__VarTypes_8, hlds__hlds_rtti__TVarMap_17, hlds__hlds_rtti__Var_19, &hlds__hlds_rtti__TypeInfoVars_11);
          }
          {
            parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_rtti__Vars0_6, hlds__hlds_rtti__TypeInfoVars_11, hlds__hlds_rtti__Vars_10);
          }
        }
        break;
    }
  }
}

void MR_CALL 
hlds__hlds_rtti__get_typeinfo_vars_4_p_0(
  MR_Word hlds__hlds_rtti__Vars_5,
  MR_Word hlds__hlds_rtti__VarTypes_6,
  MR_Word hlds__hlds_rtti__RttiVarMaps_7,
  MR_Word * hlds__hlds_rtti__TypeInfoVars_8)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__TypeCtorInfo_15_15 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word hlds__hlds_rtti__TVarMap_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_7, (MR_Integer) 1)));
    MR_Word hlds__hlds_rtti__VarList_10;
    MR_Word hlds__hlds_rtti__Var_11;
    MR_Word hlds__hlds_rtti__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_7, (MR_Integer) 0)));
    MR_Word hlds__hlds_rtti__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_7, (MR_Integer) 2)));
    MR_Word hlds__hlds_rtti__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_7, (MR_Integer) 3)));

    {
      hlds__hlds_rtti__VarList_10 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_rtti__TypeCtorInfo_15_15, hlds__hlds_rtti__Vars_5);
    }
    {
      hlds__hlds_rtti__Var_11 = parse_tree__set_of_var__init_0_f_0(hlds__hlds_rtti__TypeCtorInfo_15_15);
    }
    {
      hlds__hlds_rtti__get_typeinfo_vars_acc_5_p_0(hlds__hlds_rtti__VarList_10, hlds__hlds_rtti__VarTypes_6, hlds__hlds_rtti__TVarMap_9, hlds__hlds_rtti__Var_11, hlds__hlds_rtti__TypeInfoVars_8);
    }
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_overlay_3_p_0(
  MR_Word hlds__hlds_rtti__VarMapsA_4,
  MR_Word hlds__hlds_rtti__VarMapsB_5,
  MR_Word * hlds__hlds_rtti__VarMaps_6)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__TypeCtorInfo_19_19 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    MR_Word hlds__hlds_rtti__TypeInfo_20_20 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
    MR_Word hlds__hlds_rtti__TCImapA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsA_4, (MR_Integer) 0)));
    MR_Word hlds__hlds_rtti__TImapA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsA_4, (MR_Integer) 1)));
    MR_Word hlds__hlds_rtti__TypeMapA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsA_4, (MR_Integer) 2)));
    MR_Word hlds__hlds_rtti__ConstraintMapA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsA_4, (MR_Integer) 3)));
    MR_Word hlds__hlds_rtti__TCImapB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsB_5, (MR_Integer) 0)));
    MR_Word hlds__hlds_rtti__TImapB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsB_5, (MR_Integer) 1)));
    MR_Word hlds__hlds_rtti__TypeMapB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsB_5, (MR_Integer) 2)));
    MR_Word hlds__hlds_rtti__ConstraintMapB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsB_5, (MR_Integer) 3)));
    MR_Word hlds__hlds_rtti__TCImap_15;
    MR_Word hlds__hlds_rtti__TImap_16;
    MR_Word hlds__hlds_rtti__TypeMap_17;
    MR_Word hlds__hlds_rtti__ConstraintMap_18;

    {
      mercury__map__overlay_3_p_0(hlds__hlds_rtti__TypeCtorInfo_19_19, hlds__hlds_rtti__TypeInfo_20_20, hlds__hlds_rtti__TCImapA_7, hlds__hlds_rtti__TCImapB_11, &hlds__hlds_rtti__TCImap_15);
    }
    {
      mercury__map__overlay_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, hlds__hlds_rtti__TImapA_8, hlds__hlds_rtti__TImapB_12, &hlds__hlds_rtti__TImap_16);
    }
    {
      mercury__map__old_merge_3_p_0(hlds__hlds_rtti__TypeInfo_20_20, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__TypeMapA_9, hlds__hlds_rtti__TypeMapB_13, &hlds__hlds_rtti__TypeMap_17);
    }
    {
      mercury__map__old_merge_3_p_0(hlds__hlds_rtti__TypeInfo_20_20, hlds__hlds_rtti__TypeCtorInfo_19_19, hlds__hlds_rtti__ConstraintMapA_10, hlds__hlds_rtti__ConstraintMapB_14, &hlds__hlds_rtti__ConstraintMap_18);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_rtti__VarMaps_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__TCImap_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__TImap_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__TypeMap_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__ConstraintMap_18));
    }
  }
}

static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_2(
  MR_Box hlds__hlds_rtti__closure_arg,
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
  MR_Box * hlds__hlds_rtti__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
    MR_Word hlds__hlds_rtti__conv2_Constraint_8;

    {
      hlds__hlds_rtti__apply_constraint_value_transformation_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), &hlds__hlds_rtti__conv2_Constraint_8);
    }
    *hlds__hlds_rtti__wrapper_arg_3 = ((MR_Box) (hlds__hlds_rtti__conv2_Constraint_8));
  }
}

static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_1(
  MR_Box hlds__hlds_rtti__closure_arg,
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
  MR_Box * hlds__hlds_rtti__wrapper_arg_4)
{
  {
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
    MR_Word hlds__hlds_rtti__conv0_STATE_VARIABLE_Map_15;

    {
      hlds__hlds_rtti__apply_constraint_key_transformation_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3), &hlds__hlds_rtti__conv0_STATE_VARIABLE_Map_15);
    }
    *hlds__hlds_rtti__wrapper_arg_4 = ((MR_Box) (hlds__hlds_rtti__conv0_STATE_VARIABLE_Map_15));
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0(
  MR_Word hlds__hlds_rtti__Pred_4,
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12,
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_13)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__TypeCtorInfo_45_45;
    MR_Word hlds__hlds_rtti__TypeInfo_46_46;
    MR_Word hlds__hlds_rtti__TypeCtorInfo_48_48;
    MR_Word hlds__hlds_rtti__TciMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 0)));
    MR_Word hlds__hlds_rtti__TypeMap0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 2)));
    MR_Word hlds__hlds_rtti__ConstraintMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 3)));
    MR_Word hlds__hlds_rtti__TciMap_9;
    MR_Word hlds__hlds_rtti__TypeMap_10;
    MR_Word hlds__hlds_rtti__ConstraintMap_11;
    MR_Word hlds__hlds_rtti__Var_14;
    MR_Word hlds__hlds_rtti__Var_15;
    MR_Word hlds__hlds_rtti__Var_16;
    MR_Word hlds__hlds_rtti__Var_30;
    MR_Word hlds__hlds_rtti__Var_33;
    MR_Word hlds__hlds_rtti__Var_34;
    MR_Word hlds__hlds_rtti__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 1)));
    MR_Box hlds__hlds_rtti__conv1_TciMap_9;
    MR_Word hlds__hlds_rtti__Var_29;
    MR_Word hlds__hlds_rtti__Var_31;
    MR_Word hlds__hlds_rtti__Var_32;

    {
      hlds__hlds_rtti__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Var_14, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Var_14, 1) = ((MR_Box) (hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Var_14, 3) = ((MR_Box) (hlds__hlds_rtti__Pred_4));
    }
    hlds__hlds_rtti__TypeCtorInfo_45_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    hlds__hlds_rtti__TypeInfo_46_46 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
    {
      hlds__hlds_rtti__Var_15 = mercury__map__init_0_f_0(hlds__hlds_rtti__TypeCtorInfo_45_45, hlds__hlds_rtti__TypeInfo_46_46);
    }
    {
      mercury__map__foldl_4_p_0(hlds__hlds_rtti__TypeCtorInfo_45_45, hlds__hlds_rtti__TypeInfo_46_46, (MR_Word) &hlds__hlds_rtti_scalar_common_2[1], hlds__hlds_rtti__Var_14, hlds__hlds_rtti__TciMap0_6, ((MR_Box) (hlds__hlds_rtti__Var_15)), &hlds__hlds_rtti__conv1_TciMap_9);
    }
    hlds__hlds_rtti__TciMap_9 = ((MR_Word) hlds__hlds_rtti__conv1_TciMap_9);
    hlds__hlds_rtti__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    {
      mercury__map__map_values_only_3_p_0(hlds__hlds_rtti__TypeCtorInfo_48_48, hlds__hlds_rtti__TypeCtorInfo_48_48, hlds__hlds_rtti__TypeInfo_46_46, hlds__hlds_rtti__Pred_4, hlds__hlds_rtti__TypeMap0_7, &hlds__hlds_rtti__TypeMap_10);
    }
    {
      hlds__hlds_rtti__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Var_16, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Var_16, 1) = ((MR_Box) (hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_2));
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Var_16, 3) = ((MR_Box) (hlds__hlds_rtti__Pred_4));
    }
    {
      mercury__map__map_values_3_p_0(hlds__hlds_rtti__TypeInfo_46_46, hlds__hlds_rtti__TypeCtorInfo_45_45, hlds__hlds_rtti__TypeCtorInfo_45_45, hlds__hlds_rtti__Var_16, hlds__hlds_rtti__ConstraintMap0_8, &hlds__hlds_rtti__ConstraintMap_11);
    }
    hlds__hlds_rtti__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 0)));
    hlds__hlds_rtti__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 1)));
    hlds__hlds_rtti__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 2)));
    hlds__hlds_rtti__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 3)));
    hlds__hlds_rtti__Var_33 = hlds__hlds_rtti__TciMap_9;
    hlds__hlds_rtti__Var_34 = hlds__hlds_rtti__Var_30;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__Var_33));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__Var_34));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__TypeMap_10));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__ConstraintMap_11));
    }
  }
}

static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_4(
  MR_Box hlds__hlds_rtti__closure_arg,
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
  MR_Box * hlds__hlds_rtti__wrapper_arg_4)
{
  {
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
    MR_Word hlds__hlds_rtti__conv6_STATE_VARIABLE_Map_19;

    {
      hlds__hlds_rtti__apply_substs_to_constraint_map_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3), &hlds__hlds_rtti__conv6_STATE_VARIABLE_Map_19);
    }
    *hlds__hlds_rtti__wrapper_arg_4 = ((MR_Box) (hlds__hlds_rtti__conv6_STATE_VARIABLE_Map_19));
  }
}

static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_3(
  MR_Box hlds__hlds_rtti__closure_arg,
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
  MR_Box * hlds__hlds_rtti__wrapper_arg_4)
{
  {
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
    MR_Word hlds__hlds_rtti__conv4_STATE_VARIABLE_Map_19;

    {
      hlds__hlds_rtti__apply_substs_to_type_map_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3), &hlds__hlds_rtti__conv4_STATE_VARIABLE_Map_19);
    }
    *hlds__hlds_rtti__wrapper_arg_4 = ((MR_Box) (hlds__hlds_rtti__conv4_STATE_VARIABLE_Map_19));
  }
}

static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_2(
  MR_Box hlds__hlds_rtti__closure_arg,
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
  MR_Box * hlds__hlds_rtti__wrapper_arg_4)
{
  {
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
    MR_Word hlds__hlds_rtti__conv2_STATE_VARIABLE_Map_38;

    {
      hlds__hlds_rtti__apply_substs_to_ti_map_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3), &hlds__hlds_rtti__conv2_STATE_VARIABLE_Map_38);
    }
    *hlds__hlds_rtti__wrapper_arg_4 = ((MR_Box) (hlds__hlds_rtti__conv2_STATE_VARIABLE_Map_38));
  }
}

static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_1(
  MR_Box hlds__hlds_rtti__closure_arg,
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
  MR_Box * hlds__hlds_rtti__wrapper_arg_4)
{
  {
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
    MR_Word hlds__hlds_rtti__conv0_STATE_VARIABLE_Map_18;

    {
      hlds__hlds_rtti__apply_substs_to_tci_map_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3), &hlds__hlds_rtti__conv0_STATE_VARIABLE_Map_18);
    }
    *hlds__hlds_rtti__wrapper_arg_4 = ((MR_Box) (hlds__hlds_rtti__conv0_STATE_VARIABLE_Map_18));
  }
}

void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(
  MR_Word hlds__hlds_rtti__TRenaming_6,
  MR_Word hlds__hlds_rtti__TSubst_7,
  MR_Word hlds__hlds_rtti__Subst_8,
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_18,
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_19)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__TypeInfo_29_29 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
    MR_Word hlds__hlds_rtti__TypeInfo_30_30;
    MR_Word hlds__hlds_rtti__TypeCtorInfo_31_31;

    {
      hlds__hlds_rtti__succeeded = mercury__map__is_empty_1_p_0(hlds__hlds_rtti__TypeInfo_29_29, hlds__hlds_rtti__TypeInfo_29_29, hlds__hlds_rtti__Subst_8);
    }
    if (hlds__hlds_rtti__succeeded)
      {
        hlds__hlds_rtti__TypeInfo_30_30 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[1];
        hlds__hlds_rtti__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
        {
          hlds__hlds_rtti__succeeded = mercury__map__is_empty_1_p_0(hlds__hlds_rtti__TypeInfo_30_30, hlds__hlds_rtti__TypeCtorInfo_31_31, hlds__hlds_rtti__TSubst_7);
        }
        if (hlds__hlds_rtti__succeeded)
          {
            hlds__hlds_rtti__succeeded = mercury__map__is_empty_1_p_0(hlds__hlds_rtti__TypeInfo_30_30, hlds__hlds_rtti__TypeInfo_30_30, hlds__hlds_rtti__TRenaming_6);
          }
      }
    if (hlds__hlds_rtti__succeeded)
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_19 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_18;
    else
      {
        MR_Word hlds__hlds_rtti__TypeCtorInfo_36_36;
        MR_Word hlds__hlds_rtti__TypeInfo_37_37;
        MR_Word hlds__hlds_rtti__TypeInfo_43_43;
        MR_Word hlds__hlds_rtti__TypeCtorInfo_44_44;
        MR_Word hlds__hlds_rtti__TypeCtorInfo_50_50;
        MR_Word hlds__hlds_rtti__TCIMap0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_18, (MR_Integer) 0)));
        MR_Word hlds__hlds_rtti__TIMap0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_18, (MR_Integer) 1)));
        MR_Word hlds__hlds_rtti__TypeMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_18, (MR_Integer) 2)));
        MR_Word hlds__hlds_rtti__ConstraintMap0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_18, (MR_Integer) 3)));
        MR_Word hlds__hlds_rtti__TCIMap_14;
        MR_Word hlds__hlds_rtti__TIMap_15;
        MR_Word hlds__hlds_rtti__TypeMap_16;
        MR_Word hlds__hlds_rtti__ConstraintMap_17;
        MR_Word hlds__hlds_rtti__Var_20;
        MR_Word hlds__hlds_rtti__Var_21;
        MR_Word hlds__hlds_rtti__Var_22;
        MR_Word hlds__hlds_rtti__Var_23;
        MR_Word hlds__hlds_rtti__Var_24;
        MR_Word hlds__hlds_rtti__Var_25;
        MR_Word hlds__hlds_rtti__Var_26;
        MR_Word hlds__hlds_rtti__Var_27;
        MR_Box hlds__hlds_rtti__conv1_TCIMap_14;
        MR_Box hlds__hlds_rtti__conv3_TIMap_15;
        MR_Box hlds__hlds_rtti__conv5_TypeMap_16;
        MR_Box hlds__hlds_rtti__conv7_ConstraintMap_17;

        {
          hlds__hlds_rtti__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Var_20, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Var_20, 1) = ((MR_Box) (hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_1));
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Var_20, 3) = ((MR_Box) (hlds__hlds_rtti__TRenaming_6));
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Var_20, 4) = ((MR_Box) (hlds__hlds_rtti__TSubst_7));
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Var_20, 5) = ((MR_Box) (hlds__hlds_rtti__Subst_8));
        }
        hlds__hlds_rtti__TypeCtorInfo_36_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
        hlds__hlds_rtti__TypeInfo_37_37 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
        {
          hlds__hlds_rtti__Var_21 = mercury__map__init_0_f_0(hlds__hlds_rtti__TypeCtorInfo_36_36, hlds__hlds_rtti__TypeInfo_37_37);
        }
        {
          mercury__map__foldl_4_p_0(hlds__hlds_rtti__TypeCtorInfo_36_36, hlds__hlds_rtti__TypeInfo_37_37, (MR_Word) &hlds__hlds_rtti_scalar_common_2[1], hlds__hlds_rtti__Var_20, hlds__hlds_rtti__TCIMap0_10, ((MR_Box) (hlds__hlds_rtti__Var_21)), &hlds__hlds_rtti__conv1_TCIMap_14);
        }
        hlds__hlds_rtti__TCIMap_14 = ((MR_Word) hlds__hlds_rtti__conv1_TCIMap_14);
        {
          hlds__hlds_rtti__Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Var_22, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Var_22, 1) = ((MR_Box) (hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_2));
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Var_22, 3) = ((MR_Box) (hlds__hlds_rtti__TRenaming_6));
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Var_22, 4) = ((MR_Box) (hlds__hlds_rtti__TSubst_7));
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Var_22, 5) = ((MR_Box) (hlds__hlds_rtti__Subst_8));
        }
        hlds__hlds_rtti__TypeInfo_43_43 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[1];
        hlds__hlds_rtti__TypeCtorInfo_44_44 = (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0;
        {
          hlds__hlds_rtti__Var_23 = mercury__map__init_0_f_0(hlds__hlds_rtti__TypeInfo_43_43, hlds__hlds_rtti__TypeCtorInfo_44_44);
        }
        {
          mercury__map__foldl_4_p_0(hlds__hlds_rtti__TypeInfo_43_43, hlds__hlds_rtti__TypeCtorInfo_44_44, (MR_Word) &hlds__hlds_rtti_scalar_common_2[2], hlds__hlds_rtti__Var_22, hlds__hlds_rtti__TIMap0_11, ((MR_Box) (hlds__hlds_rtti__Var_23)), &hlds__hlds_rtti__conv3_TIMap_15);
        }
        hlds__hlds_rtti__TIMap_15 = ((MR_Word) hlds__hlds_rtti__conv3_TIMap_15);
        {
          hlds__hlds_rtti__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Var_24, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_4[2]));
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Var_24, 1) = ((MR_Box) (hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_3));
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Var_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Var_24, 3) = ((MR_Box) (hlds__hlds_rtti__TRenaming_6));
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Var_24, 4) = ((MR_Box) (hlds__hlds_rtti__TSubst_7));
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Var_24, 5) = ((MR_Box) (hlds__hlds_rtti__Subst_8));
        }
        hlds__hlds_rtti__TypeCtorInfo_50_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
        {
          hlds__hlds_rtti__Var_25 = mercury__map__init_0_f_0(hlds__hlds_rtti__TypeInfo_37_37, hlds__hlds_rtti__TypeCtorInfo_50_50);
        }
        {
          mercury__map__foldl_4_p_0(hlds__hlds_rtti__TypeInfo_37_37, hlds__hlds_rtti__TypeCtorInfo_50_50, (MR_Word) &hlds__hlds_rtti_scalar_common_2[3], hlds__hlds_rtti__Var_24, hlds__hlds_rtti__TypeMap0_12, ((MR_Box) (hlds__hlds_rtti__Var_25)), &hlds__hlds_rtti__conv5_TypeMap_16);
        }
        hlds__hlds_rtti__TypeMap_16 = ((MR_Word) hlds__hlds_rtti__conv5_TypeMap_16);
        {
          hlds__hlds_rtti__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Var_26, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_4[3]));
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Var_26, 1) = ((MR_Box) (hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_4));
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Var_26, 3) = ((MR_Box) (hlds__hlds_rtti__TRenaming_6));
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Var_26, 4) = ((MR_Box) (hlds__hlds_rtti__TSubst_7));
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Var_26, 5) = ((MR_Box) (hlds__hlds_rtti__Subst_8));
        }
        {
          hlds__hlds_rtti__Var_27 = mercury__map__init_0_f_0(hlds__hlds_rtti__TypeInfo_37_37, hlds__hlds_rtti__TypeCtorInfo_36_36);
        }
        {
          mercury__map__foldl_4_p_0(hlds__hlds_rtti__TypeInfo_37_37, hlds__hlds_rtti__TypeCtorInfo_36_36, (MR_Word) &hlds__hlds_rtti_scalar_common_2[4], hlds__hlds_rtti__Var_26, hlds__hlds_rtti__ConstraintMap0_13, ((MR_Box) (hlds__hlds_rtti__Var_27)), &hlds__hlds_rtti__conv7_ConstraintMap_17);
        }
        hlds__hlds_rtti__ConstraintMap_17 = ((MR_Word) hlds__hlds_rtti__conv7_ConstraintMap_17);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_19 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__TCIMap_14));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__TIMap_15));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__TypeMap_16));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__ConstraintMap_17));
        }
      }
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_rtti_prog_vars_2_p_0(
  MR_Word hlds__hlds_rtti__RttiVarMaps_3,
  MR_Word * hlds__hlds_rtti__Vars_4)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__TypeInfo_15_15 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
    MR_Word hlds__hlds_rtti__TIVars_5;
    MR_Word hlds__hlds_rtti__TCIVars_6;
    MR_Word hlds__hlds_rtti__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 2)));
    MR_Word hlds__hlds_rtti__Var_8;
    MR_Word hlds__hlds_rtti__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 0)));
    MR_Word hlds__hlds_rtti__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 1)));
    MR_Word hlds__hlds_rtti__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 3)));
    MR_Word hlds__hlds_rtti__Var_12;
    MR_Word hlds__hlds_rtti__Var_13;
    MR_Word hlds__hlds_rtti__Var_14;

    {
      mercury__map__keys_2_p_0(hlds__hlds_rtti__TypeInfo_15_15, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__Var_7, &hlds__hlds_rtti__TIVars_5);
    }
    hlds__hlds_rtti__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 0)));
    hlds__hlds_rtti__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 1)));
    hlds__hlds_rtti__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 2)));
    hlds__hlds_rtti__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 3)));
    {
      mercury__map__keys_2_p_0(hlds__hlds_rtti__TypeInfo_15_15, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_rtti__Var_8, &hlds__hlds_rtti__TCIVars_6);
    }
    {
      mercury__list__append_3_p_1(hlds__hlds_rtti__TypeInfo_15_15, hlds__hlds_rtti__TIVars_5, hlds__hlds_rtti__TCIVars_6, hlds__hlds_rtti__Vars_4);
    }
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_p_0(
  MR_Word hlds__hlds_rtti__RttiVarMaps_3,
  MR_Word * hlds__hlds_rtti__Constraints_4)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 0)));
    MR_Word hlds__hlds_rtti__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 1)));
    MR_Word hlds__hlds_rtti__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 2)));
    MR_Word hlds__hlds_rtti__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 3)));

    {
      mercury__map__keys_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], hlds__hlds_rtti__Var_5, hlds__hlds_rtti__Constraints_4);
    }
  }
}

static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_types_2_p_0_2(
  MR_Box hlds__hlds_rtti__closure_arg,
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
  MR_Box * hlds__hlds_rtti__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
    MR_Word hlds__hlds_rtti__conv2_STATE_VARIABLE_TypeSet_9;

    {
      hlds__hlds_rtti__accumulate_types_in_prog_constraint_3_p_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), &hlds__hlds_rtti__conv2_STATE_VARIABLE_TypeSet_9);
    }
    *hlds__hlds_rtti__wrapper_arg_3 = ((MR_Box) (hlds__hlds_rtti__conv2_STATE_VARIABLE_TypeSet_9));
  }
}

static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_types_2_p_0_1(
  MR_Box hlds__hlds_rtti__closure_arg,
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
  MR_Box * hlds__hlds_rtti__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
    MR_Word hlds__hlds_rtti__conv0_HeadVar__3_21;

    {
      hlds__hlds_rtti__IntroducedFrom__pred__rtti_varmaps_types__682__1_3_p_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), &hlds__hlds_rtti__conv0_HeadVar__3_21);
    }
    *hlds__hlds_rtti__wrapper_arg_3 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__3_21));
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_types_2_p_0(
  MR_Word hlds__hlds_rtti__RttiVarMaps_3,
  MR_Word * hlds__hlds_rtti__Types_4)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    MR_Word hlds__hlds_rtti__TypeInfo_23_23;
    MR_Word hlds__hlds_rtti__TypeInfo_24_24;
    MR_Word hlds__hlds_rtti__TypeMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 2)));
    MR_Word hlds__hlds_rtti__ConstraintMap_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 3)));
    MR_Word hlds__hlds_rtti__TypeSet0_7;
    MR_Word hlds__hlds_rtti__TypeSet1_8;
    MR_Word hlds__hlds_rtti__TypeSet_9;
    MR_Word hlds__hlds_rtti__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 0)));
    MR_Word hlds__hlds_rtti__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 1)));
    MR_Box hlds__hlds_rtti__conv1_TypeSet1_8;
    MR_Box hlds__hlds_rtti__conv3_TypeSet_9;

    {
      hlds__hlds_rtti__TypeSet0_7 = mercury__set_tree234__init_0_f_0(hlds__hlds_rtti__TypeCtorInfo_18_18);
    }
    hlds__hlds_rtti__TypeInfo_23_23 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[2];
    hlds__hlds_rtti__TypeInfo_24_24 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
    {
      mercury__map__foldl_values_4_p_0(hlds__hlds_rtti__TypeCtorInfo_18_18, hlds__hlds_rtti__TypeInfo_23_23, hlds__hlds_rtti__TypeInfo_24_24, (MR_Word) &hlds__hlds_rtti_scalar_common_2[5], hlds__hlds_rtti__TypeMap_5, ((MR_Box) (hlds__hlds_rtti__TypeSet0_7)), &hlds__hlds_rtti__conv1_TypeSet1_8);
    }
    hlds__hlds_rtti__TypeSet1_8 = ((MR_Word) hlds__hlds_rtti__conv1_TypeSet1_8);
    {
      mercury__map__foldl_values_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_rtti__TypeInfo_23_23, hlds__hlds_rtti__TypeInfo_24_24, (MR_Word) &hlds__hlds_rtti_scalar_common_2[6], hlds__hlds_rtti__ConstraintMap_6, ((MR_Box) (hlds__hlds_rtti__TypeSet1_8)), &hlds__hlds_rtti__conv3_TypeSet_9);
    }
    hlds__hlds_rtti__TypeSet_9 = ((MR_Word) hlds__hlds_rtti__conv3_TypeSet_9);
    {
      *hlds__hlds_rtti__Types_4 = mercury__set_tree234__to_sorted_list_1_f_0(hlds__hlds_rtti__TypeCtorInfo_18_18, hlds__hlds_rtti__TypeSet_9);
    }
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_tvars_2_p_0(
  MR_Word hlds__hlds_rtti__RttiVarMaps_3,
  MR_Word * hlds__hlds_rtti__TVars_4)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 1)));
    MR_Word hlds__hlds_rtti__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 0)));
    MR_Word hlds__hlds_rtti__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 2)));
    MR_Word hlds__hlds_rtti__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 3)));

    {
      mercury__map__keys_2_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, hlds__hlds_rtti__Var_5, hlds__hlds_rtti__TVars_4);
    }
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_var_info_duplicate_replace_4_p_0(
  MR_Word hlds__hlds_rtti__Var_5,
  MR_Word hlds__hlds_rtti__NewVar_6,
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11,
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__VarInfo_8;

    {
      hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, hlds__hlds_rtti__Var_5, &hlds__hlds_rtti__VarInfo_8);
    }
    switch (MR_tag((MR_Word) hlds__hlds_rtti__VarInfo_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11;
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__hlds_rtti__Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__VarInfo_8, (MR_Integer) 0)));
          MR_Word hlds__hlds_rtti__Map0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
          MR_Word hlds__hlds_rtti__Map_21;
          MR_Word hlds__hlds_rtti__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
          MR_Word hlds__hlds_rtti__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
          MR_Word hlds__hlds_rtti__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
          MR_Word hlds__hlds_rtti__Var_26;
          MR_Word hlds__hlds_rtti__Var_27;
          MR_Word hlds__hlds_rtti__Var_29;
          MR_Word hlds__hlds_rtti__Var_28;

          {
            mercury__map__set_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__hlds_rtti__NewVar_6)), ((MR_Box) (hlds__hlds_rtti__Type_9)), hlds__hlds_rtti__Map0_20, &hlds__hlds_rtti__Map_21);
          }
          hlds__hlds_rtti__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
          hlds__hlds_rtti__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
          hlds__hlds_rtti__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
          hlds__hlds_rtti__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__Var_26));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__Var_27));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__Map_21));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__Var_29));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__hlds_rtti__Constraint_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_rtti__VarInfo_8, (MR_Integer) 0)));
          MR_Word hlds__hlds_rtti__Map0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
          MR_Word hlds__hlds_rtti__Map_38;
          MR_Word hlds__hlds_rtti__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
          MR_Word hlds__hlds_rtti__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
          MR_Word hlds__hlds_rtti__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
          MR_Word hlds__hlds_rtti__Var_43;
          MR_Word hlds__hlds_rtti__Var_44;
          MR_Word hlds__hlds_rtti__Var_45;
          MR_Word hlds__hlds_rtti__Var_46;

          {
            mercury__map__set_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, ((MR_Box) (hlds__hlds_rtti__NewVar_6)), ((MR_Box) (hlds__hlds_rtti__Constraint_10)), hlds__hlds_rtti__Map0_37, &hlds__hlds_rtti__Map_38);
          }
          hlds__hlds_rtti__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
          hlds__hlds_rtti__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
          hlds__hlds_rtti__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
          hlds__hlds_rtti__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__Var_43));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__Var_44));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__Var_45));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__Map_38));
          }
        }
        break;
    }
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(
  MR_Word hlds__hlds_rtti__Var_5,
  MR_Word hlds__hlds_rtti__NewVar_6,
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11,
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__VarInfo_8;

    {
      hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, hlds__hlds_rtti__Var_5, &hlds__hlds_rtti__VarInfo_8);
    }
    switch (MR_tag((MR_Word) hlds__hlds_rtti__VarInfo_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11;
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__hlds_rtti__Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__VarInfo_8, (MR_Integer) 0)));
          MR_Word hlds__hlds_rtti__Map0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
          MR_Word hlds__hlds_rtti__Map_21;
          MR_Word hlds__hlds_rtti__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
          MR_Word hlds__hlds_rtti__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
          MR_Word hlds__hlds_rtti__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
          MR_Word hlds__hlds_rtti__Var_26;
          MR_Word hlds__hlds_rtti__Var_27;
          MR_Word hlds__hlds_rtti__Var_29;
          MR_Word hlds__hlds_rtti__Var_28;

          {
            mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__hlds_rtti__NewVar_6)), ((MR_Box) (hlds__hlds_rtti__Type_9)), hlds__hlds_rtti__Map0_20, &hlds__hlds_rtti__Map_21);
          }
          hlds__hlds_rtti__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
          hlds__hlds_rtti__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
          hlds__hlds_rtti__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
          hlds__hlds_rtti__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__Var_26));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__Var_27));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__Map_21));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__Var_29));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__hlds_rtti__Constraint_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_rtti__VarInfo_8, (MR_Integer) 0)));
          MR_Word hlds__hlds_rtti__Map0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
          MR_Word hlds__hlds_rtti__Map_38;
          MR_Word hlds__hlds_rtti__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
          MR_Word hlds__hlds_rtti__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
          MR_Word hlds__hlds_rtti__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
          MR_Word hlds__hlds_rtti__Var_43;
          MR_Word hlds__hlds_rtti__Var_44;
          MR_Word hlds__hlds_rtti__Var_45;
          MR_Word hlds__hlds_rtti__Var_46;

          {
            mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, ((MR_Box) (hlds__hlds_rtti__NewVar_6)), ((MR_Box) (hlds__hlds_rtti__Constraint_10)), hlds__hlds_rtti__Map0_37, &hlds__hlds_rtti__Map_38);
          }
          hlds__hlds_rtti__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
          hlds__hlds_rtti__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
          hlds__hlds_rtti__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
          hlds__hlds_rtti__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__Var_43));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__Var_44));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__Var_45));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__Map_38));
          }
        }
        break;
    }
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_set_type_info_type_4_p_0(
  MR_Word hlds__hlds_rtti__ProgVar_5,
  MR_Word hlds__hlds_rtti__Type_6,
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10,
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
    MR_Word hlds__hlds_rtti__Map_9;
    MR_Word hlds__hlds_rtti__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
    MR_Word hlds__hlds_rtti__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
    MR_Word hlds__hlds_rtti__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
    MR_Word hlds__hlds_rtti__Var_16;
    MR_Word hlds__hlds_rtti__Var_17;
    MR_Word hlds__hlds_rtti__Var_19;
    MR_Word hlds__hlds_rtti__Var_18;

    {
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__hlds_rtti__ProgVar_5)), ((MR_Box) (hlds__hlds_rtti__Type_6)), hlds__hlds_rtti__Map0_8, &hlds__hlds_rtti__Map_9);
    }
    hlds__hlds_rtti__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
    hlds__hlds_rtti__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
    hlds__hlds_rtti__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
    hlds__hlds_rtti__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__Var_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__Var_17));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__Map_9));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__Var_19));
    }
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_det_insert_type_info_type_4_p_0(
  MR_Word hlds__hlds_rtti__ProgVar_5,
  MR_Word hlds__hlds_rtti__Type_6,
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10,
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
    MR_Word hlds__hlds_rtti__Map_9;
    MR_Word hlds__hlds_rtti__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
    MR_Word hlds__hlds_rtti__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
    MR_Word hlds__hlds_rtti__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
    MR_Word hlds__hlds_rtti__Var_16;
    MR_Word hlds__hlds_rtti__Var_17;
    MR_Word hlds__hlds_rtti__Var_19;
    MR_Word hlds__hlds_rtti__Var_18;

    {
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__hlds_rtti__ProgVar_5)), ((MR_Box) (hlds__hlds_rtti__Type_6)), hlds__hlds_rtti__Map0_8, &hlds__hlds_rtti__Map_9);
    }
    hlds__hlds_rtti__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
    hlds__hlds_rtti__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
    hlds__hlds_rtti__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
    hlds__hlds_rtti__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__Var_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__Var_17));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__Map_9));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__Var_19));
    }
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_p_0(
  MR_Word hlds__hlds_rtti__ProgVar_4,
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9,
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_10)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__TypeInfo_23_23 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
    MR_Word hlds__hlds_rtti__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    MR_Word hlds__hlds_rtti__Constraint_6;
    MR_Word hlds__hlds_rtti__Map0_7;
    MR_Word hlds__hlds_rtti__Map_8;
    MR_Word hlds__hlds_rtti__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 3)));
    MR_Word hlds__hlds_rtti__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 0)));
    MR_Word hlds__hlds_rtti__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 1)));
    MR_Word hlds__hlds_rtti__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 2)));
    MR_Box hlds__hlds_rtti__conv0_Constraint_6;
    MR_Word hlds__hlds_rtti__Var_16;
    MR_Word hlds__hlds_rtti__Var_17;
    MR_Word hlds__hlds_rtti__Var_18;
    MR_Word hlds__hlds_rtti__Var_20;
    MR_Word hlds__hlds_rtti__Var_21;
    MR_Word hlds__hlds_rtti__Var_22;
    MR_Word hlds__hlds_rtti__Var_19;

    {
      mercury__map__lookup_3_p_0(hlds__hlds_rtti__TypeInfo_23_23, hlds__hlds_rtti__TypeCtorInfo_24_24, hlds__hlds_rtti__Var_11, ((MR_Box) (hlds__hlds_rtti__ProgVar_4)), &hlds__hlds_rtti__conv0_Constraint_6);
    }
    hlds__hlds_rtti__Constraint_6 = ((MR_Word) hlds__hlds_rtti__conv0_Constraint_6);
    hlds__hlds_rtti__Map0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 0)));
    hlds__hlds_rtti__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 1)));
    hlds__hlds_rtti__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 2)));
    hlds__hlds_rtti__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 3)));
    {
      mercury__map__set_4_p_0(hlds__hlds_rtti__TypeCtorInfo_24_24, hlds__hlds_rtti__TypeInfo_23_23, ((MR_Box) (hlds__hlds_rtti__Constraint_6)), ((MR_Box) (hlds__hlds_rtti__ProgVar_4)), hlds__hlds_rtti__Map0_7, &hlds__hlds_rtti__Map_8);
    }
    hlds__hlds_rtti__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 0)));
    hlds__hlds_rtti__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 1)));
    hlds__hlds_rtti__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 2)));
    hlds__hlds_rtti__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__Map_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__Var_20));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__Var_21));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__Var_22));
    }
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_set_typeclass_info_var_4_p_0(
  MR_Word hlds__hlds_rtti__Constraint_5,
  MR_Word hlds__hlds_rtti__ProgVar_6,
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10,
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
    MR_Word hlds__hlds_rtti__Map_9;
    MR_Word hlds__hlds_rtti__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
    MR_Word hlds__hlds_rtti__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
    MR_Word hlds__hlds_rtti__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
    MR_Word hlds__hlds_rtti__Var_16;
    MR_Word hlds__hlds_rtti__Var_17;
    MR_Word hlds__hlds_rtti__Var_18;
    MR_Word hlds__hlds_rtti__Var_19;

    {
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, ((MR_Box) (hlds__hlds_rtti__ProgVar_6)), ((MR_Box) (hlds__hlds_rtti__Constraint_5)), hlds__hlds_rtti__Map0_8, &hlds__hlds_rtti__Map_9);
    }
    hlds__hlds_rtti__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
    hlds__hlds_rtti__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
    hlds__hlds_rtti__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
    hlds__hlds_rtti__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__Var_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__Var_17));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__Var_18));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__Map_9));
    }
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_det_insert_typeclass_info_var_4_p_0(
  MR_Word hlds__hlds_rtti__Constraint_5,
  MR_Word hlds__hlds_rtti__ProgVar_6,
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10,
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
    MR_Word hlds__hlds_rtti__Map_9;
    MR_Word hlds__hlds_rtti__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
    MR_Word hlds__hlds_rtti__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
    MR_Word hlds__hlds_rtti__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
    MR_Word hlds__hlds_rtti__Var_16;
    MR_Word hlds__hlds_rtti__Var_17;
    MR_Word hlds__hlds_rtti__Var_18;
    MR_Word hlds__hlds_rtti__Var_19;

    {
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, ((MR_Box) (hlds__hlds_rtti__ProgVar_6)), ((MR_Box) (hlds__hlds_rtti__Constraint_5)), hlds__hlds_rtti__Map0_8, &hlds__hlds_rtti__Map_9);
    }
    hlds__hlds_rtti__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
    hlds__hlds_rtti__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
    hlds__hlds_rtti__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
    hlds__hlds_rtti__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__Var_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__Var_17));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__Var_18));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__Map_9));
    }
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_set_type_info_locn_4_p_0(
  MR_Word hlds__hlds_rtti__TVar_5,
  MR_Word hlds__hlds_rtti__Locn_6,
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10,
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
    MR_Word hlds__hlds_rtti__Map_9;
    MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12;
    MR_Word hlds__hlds_rtti__Var_19;
    MR_Word hlds__hlds_rtti__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
    MR_Word hlds__hlds_rtti__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
    MR_Word hlds__hlds_rtti__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
    MR_Word hlds__hlds_rtti__Var_17;
    MR_Word hlds__hlds_rtti__Var_20;
    MR_Word hlds__hlds_rtti__Var_18;

    {
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, ((MR_Box) (hlds__hlds_rtti__TVar_5)), ((MR_Box) (hlds__hlds_rtti__Locn_6)), hlds__hlds_rtti__Map0_8, &hlds__hlds_rtti__Map_9);
    }
    hlds__hlds_rtti__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
    hlds__hlds_rtti__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
    hlds__hlds_rtti__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
    hlds__hlds_rtti__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
    {
      hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 0) = ((MR_Box) (hlds__hlds_rtti__Var_17));
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 1) = ((MR_Box) (hlds__hlds_rtti__Map_9));
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 2) = ((MR_Box) (hlds__hlds_rtti__Var_19));
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 3) = ((MR_Box) (hlds__hlds_rtti__Var_20));
    }
    if (((MR_tag((MR_Word) hlds__hlds_rtti__Locn_6)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word hlds__hlds_rtti__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Locn_6, (MR_Integer) 0)));
        MR_Word hlds__hlds_rtti__Type_26;
        MR_Box hlds__hlds_rtti__conv0_Type_26;
        MR_Word hlds__hlds_rtti__TypeInfo_28_46;
        MR_Word hlds__hlds_rtti__Var_45;
        MR_Word hlds__hlds_rtti__Var_27;

        {
          mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__Var_19, ((MR_Box) (hlds__hlds_rtti__Var_23)), &hlds__hlds_rtti__conv0_Type_26);
        }
        hlds__hlds_rtti__Type_26 = ((MR_Word) hlds__hlds_rtti__conv0_Type_26);
        hlds__hlds_rtti__succeeded = ((MR_tag((MR_Word) hlds__hlds_rtti__Type_26)) == (MR_mktag((MR_Integer) 0)));
        if (hlds__hlds_rtti__succeeded)
          {
            hlds__hlds_rtti__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Type_26, (MR_Integer) 0)));
            hlds__hlds_rtti__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Type_26, (MR_Integer) 1)));
            hlds__hlds_rtti__TypeInfo_28_46 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[1];
            {
              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_28_46, ((MR_Box) (hlds__hlds_rtti__TVar_5)), ((MR_Box) (hlds__hlds_rtti__Var_45)));
            }
          }
        if (hlds__hlds_rtti__succeeded)
          {
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_rtti", (MR_String) "predicate \140hlds.hlds_rtti.maybe_check_type_info_var\'/4", (MR_String) "inconsistent info in rtti_varmaps");
              return;
            }
          }
        *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12;
      }
    else
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12;
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_p_0(
  MR_Word hlds__hlds_rtti__TVar_5,
  MR_Word hlds__hlds_rtti__Locn_6,
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10,
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
    MR_Word hlds__hlds_rtti__Map_9;
    MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12;
    MR_Word hlds__hlds_rtti__Var_19;
    MR_Word hlds__hlds_rtti__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
    MR_Word hlds__hlds_rtti__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
    MR_Word hlds__hlds_rtti__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
    MR_Word hlds__hlds_rtti__Var_17;
    MR_Word hlds__hlds_rtti__Var_20;
    MR_Word hlds__hlds_rtti__Var_18;

    {
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, ((MR_Box) (hlds__hlds_rtti__TVar_5)), ((MR_Box) (hlds__hlds_rtti__Locn_6)), hlds__hlds_rtti__Map0_8, &hlds__hlds_rtti__Map_9);
    }
    hlds__hlds_rtti__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
    hlds__hlds_rtti__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
    hlds__hlds_rtti__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
    hlds__hlds_rtti__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
    {
      hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 0) = ((MR_Box) (hlds__hlds_rtti__Var_17));
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 1) = ((MR_Box) (hlds__hlds_rtti__Map_9));
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 2) = ((MR_Box) (hlds__hlds_rtti__Var_19));
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 3) = ((MR_Box) (hlds__hlds_rtti__Var_20));
    }
    if (((MR_tag((MR_Word) hlds__hlds_rtti__Locn_6)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word hlds__hlds_rtti__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Locn_6, (MR_Integer) 0)));
        MR_Word hlds__hlds_rtti__Type_26;
        MR_Box hlds__hlds_rtti__conv0_Type_26;
        MR_Word hlds__hlds_rtti__TypeInfo_28_46;
        MR_Word hlds__hlds_rtti__Var_45;
        MR_Word hlds__hlds_rtti__Var_27;

        {
          mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__Var_19, ((MR_Box) (hlds__hlds_rtti__Var_23)), &hlds__hlds_rtti__conv0_Type_26);
        }
        hlds__hlds_rtti__Type_26 = ((MR_Word) hlds__hlds_rtti__conv0_Type_26);
        hlds__hlds_rtti__succeeded = ((MR_tag((MR_Word) hlds__hlds_rtti__Type_26)) == (MR_mktag((MR_Integer) 0)));
        if (hlds__hlds_rtti__succeeded)
          {
            hlds__hlds_rtti__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Type_26, (MR_Integer) 0)));
            hlds__hlds_rtti__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Type_26, (MR_Integer) 1)));
            hlds__hlds_rtti__TypeInfo_28_46 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[1];
            {
              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_28_46, ((MR_Box) (hlds__hlds_rtti__TVar_5)), ((MR_Box) (hlds__hlds_rtti__Var_45)));
            }
          }
        if (hlds__hlds_rtti__succeeded)
          {
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_rtti", (MR_String) "predicate \140hlds.hlds_rtti.maybe_check_type_info_var\'/4", (MR_String) "inconsistent info in rtti_varmaps");
              return;
            }
          }
        *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12;
      }
    else
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12;
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(
  MR_Word hlds__hlds_rtti__RttiVarMaps_4,
  MR_Word hlds__hlds_rtti__Var_5,
  MR_Word * hlds__hlds_rtti__VarInfo_6)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__Type_7;
    MR_Word hlds__hlds_rtti__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 2)));
    MR_Word hlds__hlds_rtti__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 0)));
    MR_Word hlds__hlds_rtti__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 1)));
    MR_Word hlds__hlds_rtti__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 3)));
    MR_Box hlds__hlds_rtti__conv0_Type_7;

    {
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__Var_9, ((MR_Box) (hlds__hlds_rtti__Var_5)), &hlds__hlds_rtti__conv0_Type_7);
    }
    if (hlds__hlds_rtti__succeeded)
      {
        hlds__hlds_rtti__Type_7 = ((MR_Word) hlds__hlds_rtti__conv0_Type_7);
        hlds__hlds_rtti__succeeded = MR_TRUE;
      }
    if (hlds__hlds_rtti__succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *hlds__hlds_rtti__VarInfo_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_rtti__Type_7));
      }
    else
      {
        MR_Word hlds__hlds_rtti__Constraint_8;
        MR_Word hlds__hlds_rtti__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 3)));
        MR_Word hlds__hlds_rtti__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 0)));
        MR_Word hlds__hlds_rtti__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 1)));
        MR_Word hlds__hlds_rtti__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 2)));
        MR_Box hlds__hlds_rtti__conv1_Constraint_8;

        {
          hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_rtti__Var_10, ((MR_Box) (hlds__hlds_rtti__Var_5)), &hlds__hlds_rtti__conv1_Constraint_8);
        }
        if (hlds__hlds_rtti__succeeded)
          {
            hlds__hlds_rtti__Constraint_8 = ((MR_Word) hlds__hlds_rtti__conv1_Constraint_8);
            hlds__hlds_rtti__succeeded = MR_TRUE;
          }
        if (hlds__hlds_rtti__succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *hlds__hlds_rtti__VarInfo_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (hlds__hlds_rtti__Constraint_8));
          }
        else
          *hlds__hlds_rtti__VarInfo_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
  }
}

MR_bool MR_CALL 
hlds__hlds_rtti__rtti_search_typeclass_info_var_3_p_0(
  MR_Word hlds__hlds_rtti__RttiVarMaps_4,
  MR_Word hlds__hlds_rtti__Constraint_5,
  MR_Word * hlds__hlds_rtti__ProgVar_6)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 0)));
    MR_Word hlds__hlds_rtti__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 1)));
    MR_Word hlds__hlds_rtti__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 2)));
    MR_Word hlds__hlds_rtti__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 3)));
    MR_Box hlds__hlds_rtti__conv0_ProgVar_6;

    {
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], hlds__hlds_rtti__Var_7, ((MR_Box) (hlds__hlds_rtti__Constraint_5)), &hlds__hlds_rtti__conv0_ProgVar_6);
    }
    if (hlds__hlds_rtti__succeeded)
      {
        *hlds__hlds_rtti__ProgVar_6 = ((MR_Word) hlds__hlds_rtti__conv0_ProgVar_6);
        hlds__hlds_rtti__succeeded = MR_TRUE;
      }
    return hlds__hlds_rtti__succeeded;
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_lookup_typeclass_info_var_3_p_0(
  MR_Word hlds__hlds_rtti__RttiVarMaps_4,
  MR_Word hlds__hlds_rtti__Constraint_5,
  MR_Word * hlds__hlds_rtti__ProgVar_6)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 0)));
    MR_Word hlds__hlds_rtti__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 1)));
    MR_Word hlds__hlds_rtti__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 2)));
    MR_Word hlds__hlds_rtti__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 3)));
    MR_Box hlds__hlds_rtti__conv0_ProgVar_6;

    {
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], hlds__hlds_rtti__Var_7, ((MR_Box) (hlds__hlds_rtti__Constraint_5)), &hlds__hlds_rtti__conv0_ProgVar_6);
    }
    *hlds__hlds_rtti__ProgVar_6 = ((MR_Word) hlds__hlds_rtti__conv0_ProgVar_6);
  }
}

MR_bool MR_CALL 
hlds__hlds_rtti__rtti_search_type_info_locn_3_p_0(
  MR_Word hlds__hlds_rtti__RttiVarMaps_4,
  MR_Word hlds__hlds_rtti__TVar_5,
  MR_Word * hlds__hlds_rtti__Locn_6)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 1)));
    MR_Word hlds__hlds_rtti__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 0)));
    MR_Word hlds__hlds_rtti__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 2)));
    MR_Word hlds__hlds_rtti__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 3)));
    MR_Box hlds__hlds_rtti__conv0_Locn_6;

    {
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, hlds__hlds_rtti__Var_7, ((MR_Box) (hlds__hlds_rtti__TVar_5)), &hlds__hlds_rtti__conv0_Locn_6);
    }
    if (hlds__hlds_rtti__succeeded)
      {
        *hlds__hlds_rtti__Locn_6 = ((MR_Word) hlds__hlds_rtti__conv0_Locn_6);
        hlds__hlds_rtti__succeeded = MR_TRUE;
      }
    return hlds__hlds_rtti__succeeded;
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(
  MR_Word hlds__hlds_rtti__RttiVarMaps_4,
  MR_Word hlds__hlds_rtti__TVar_5,
  MR_Word * hlds__hlds_rtti__Locn_6)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 1)));
    MR_Word hlds__hlds_rtti__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 0)));
    MR_Word hlds__hlds_rtti__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 2)));
    MR_Word hlds__hlds_rtti__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 3)));
    MR_Box hlds__hlds_rtti__conv0_Locn_6;

    {
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, hlds__hlds_rtti__Var_7, ((MR_Box) (hlds__hlds_rtti__TVar_5)), &hlds__hlds_rtti__conv0_Locn_6);
    }
    *hlds__hlds_rtti__Locn_6 = ((MR_Word) hlds__hlds_rtti__conv0_Locn_6);
  }
}

MR_bool MR_CALL 
hlds__hlds_rtti__rtti_varmaps_no_tvars_1_p_0(
  MR_Word hlds__hlds_rtti__RttiVarMaps_2)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_2, (MR_Integer) 1)));
    MR_Word hlds__hlds_rtti__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_2, (MR_Integer) 0)));
    MR_Word hlds__hlds_rtti__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_2, (MR_Integer) 2)));
    MR_Word hlds__hlds_rtti__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_2, (MR_Integer) 3)));

    {
      hlds__hlds_rtti__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, hlds__hlds_rtti__Var_3);
    }
    return hlds__hlds_rtti__succeeded;
  }
}

void MR_CALL 
hlds__hlds_rtti__restrict_rtti_varmaps_3_p_0(
  MR_ArrayPtr hlds__hlds_rtti__VarUses_4,
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_20,
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_21)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__TypeInfo_26_26 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[1];
    MR_Word hlds__hlds_rtti__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0;
    MR_Word hlds__hlds_rtti__TypeInfo_28_28;
    MR_Word hlds__hlds_rtti__TypeCtorInfo_29_29;
    MR_Word hlds__hlds_rtti__TypeCtorInfo_30_30;
    MR_Word hlds__hlds_rtti__TCIMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_20, (MR_Integer) 0)));
    MR_Word hlds__hlds_rtti__TIMap0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_20, (MR_Integer) 1)));
    MR_Word hlds__hlds_rtti__TypeMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_20, (MR_Integer) 2)));
    MR_Word hlds__hlds_rtti__ConstraintMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_20, (MR_Integer) 3)));
    MR_Word hlds__hlds_rtti__TIList0_10;
    MR_Word hlds__hlds_rtti__RevTIList_11;
    MR_Word hlds__hlds_rtti__TIMap_12;
    MR_Word hlds__hlds_rtti__TypeList0_13;
    MR_Word hlds__hlds_rtti__RevTypeList_14;
    MR_Word hlds__hlds_rtti__TypeMap_15;
    MR_Word hlds__hlds_rtti__ConstraintList0_16;
    MR_Word hlds__hlds_rtti__RevConstraintList_17;
    MR_Word hlds__hlds_rtti__TCIMap_18;
    MR_Word hlds__hlds_rtti__ConstraintMap_19;

    {
      mercury__map__to_assoc_list_2_p_0(hlds__hlds_rtti__TypeInfo_26_26, hlds__hlds_rtti__TypeCtorInfo_27_27, hlds__hlds_rtti__TIMap0_7, &hlds__hlds_rtti__TIList0_10);
    }
    {
      hlds__hlds_rtti__filter_type_info_varmap_4_p_0(hlds__hlds_rtti__TIList0_10, hlds__hlds_rtti__VarUses_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__hlds_rtti__RevTIList_11);
    }
    {
      mercury__map__from_rev_sorted_assoc_list_2_p_0(hlds__hlds_rtti__TypeInfo_26_26, hlds__hlds_rtti__TypeCtorInfo_27_27, hlds__hlds_rtti__RevTIList_11, &hlds__hlds_rtti__TIMap_12);
    }
    hlds__hlds_rtti__TypeInfo_28_28 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
    hlds__hlds_rtti__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    {
      mercury__map__to_assoc_list_2_p_0(hlds__hlds_rtti__TypeInfo_28_28, hlds__hlds_rtti__TypeCtorInfo_29_29, hlds__hlds_rtti__TypeMap0_8, &hlds__hlds_rtti__TypeList0_13);
    }
    {
      hlds__hlds_rtti__filter_type_info_map_4_p_0(hlds__hlds_rtti__TypeList0_13, hlds__hlds_rtti__VarUses_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__hlds_rtti__RevTypeList_14);
    }
    {
      mercury__map__from_rev_sorted_assoc_list_2_p_0(hlds__hlds_rtti__TypeInfo_28_28, hlds__hlds_rtti__TypeCtorInfo_29_29, hlds__hlds_rtti__RevTypeList_14, &hlds__hlds_rtti__TypeMap_15);
    }
    hlds__hlds_rtti__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    {
      mercury__map__to_assoc_list_2_p_0(hlds__hlds_rtti__TypeInfo_28_28, hlds__hlds_rtti__TypeCtorInfo_30_30, hlds__hlds_rtti__ConstraintMap0_9, &hlds__hlds_rtti__ConstraintList0_16);
    }
    {
      hlds__hlds_rtti__filter_constraint_map_6_p_0(hlds__hlds_rtti__ConstraintList0_16, hlds__hlds_rtti__VarUses_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__hlds_rtti__RevConstraintList_17, hlds__hlds_rtti__TCIMap0_6, &hlds__hlds_rtti__TCIMap_18);
    }
    {
      mercury__map__from_rev_sorted_assoc_list_2_p_0(hlds__hlds_rtti__TypeInfo_28_28, hlds__hlds_rtti__TypeCtorInfo_30_30, hlds__hlds_rtti__RevConstraintList_17, &hlds__hlds_rtti__ConstraintMap_19);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_21 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__TCIMap_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__TIMap_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__TypeMap_15));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__ConstraintMap_19));
    }
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_init_1_p_0(
  MR_Word * hlds__hlds_rtti__HeadVar__1_1)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__TypeCtorInfo_6_6 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    MR_Word hlds__hlds_rtti__TypeInfo_7_7 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
    MR_Word hlds__hlds_rtti__TCIMap_2;
    MR_Word hlds__hlds_rtti__TIMap_3;
    MR_Word hlds__hlds_rtti__TypeMap_4;
    MR_Word hlds__hlds_rtti__ConstraintMap_5;

    {
      mercury__map__init_1_p_0(hlds__hlds_rtti__TypeCtorInfo_6_6, hlds__hlds_rtti__TypeInfo_7_7, &hlds__hlds_rtti__TCIMap_2);
    }
    {
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, &hlds__hlds_rtti__TIMap_3);
    }
    {
      mercury__map__init_1_p_0(hlds__hlds_rtti__TypeInfo_7_7, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &hlds__hlds_rtti__TypeMap_4);
    }
    {
      mercury__map__init_1_p_0(hlds__hlds_rtti__TypeInfo_7_7, hlds__hlds_rtti__TypeCtorInfo_6_6, &hlds__hlds_rtti__ConstraintMap_5);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_rtti__HeadVar__1_1 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__TCIMap_2));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__TIMap_3));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__TypeMap_4));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__ConstraintMap_5));
    }
  }
}

void MR_CALL 
hlds__hlds_rtti__type_info_locn_set_var_3_p_0(
  MR_Word hlds__hlds_rtti__Var_1,
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
  MR_Word * hlds__hlds_rtti__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;

    if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *hlds__hlds_rtti__HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__Var_1));
      }
    else
      {
        MR_Integer hlds__hlds_rtti__Num_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__hlds_rtti__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__hlds_rtti__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_rtti__Var_1));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hlds_rtti__Num_8));
        }
      }
  }
}

void MR_CALL 
hlds__hlds_rtti__type_info_locn_var_2_p_0(
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
  MR_Word * hlds__hlds_rtti__Var_2)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;

    if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      *hlds__hlds_rtti__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
    else
      {
        MR_Integer hlds__hlds_rtti__Var_5;

        *hlds__hlds_rtti__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
        hlds__hlds_rtti__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
      }
  }
}

void MR_CALL 
hlds__hlds_rtti__proc_label_pred_proc_id_3_p_0(
  MR_Word hlds__hlds_rtti__RttiProcLabel_4,
  MR_Word * hlds__hlds_rtti__PredId_5,
  MR_Integer * hlds__hlds_rtti__ProcId_6)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 0)));
    MR_Word hlds__hlds_rtti__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 1)));
    MR_Word hlds__hlds_rtti__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 2)));
    MR_String hlds__hlds_rtti__Var_10 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 3)));
    MR_Integer hlds__hlds_rtti__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 4)));
    MR_Word hlds__hlds_rtti__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 5)));
    MR_Word hlds__hlds_rtti__Var_14;
    MR_Word hlds__hlds_rtti__Var_15;
    MR_Word hlds__hlds_rtti__Var_16;
    MR_Word hlds__hlds_rtti__Var_17;
    MR_Word hlds__hlds_rtti__Var_18;
    MR_Word hlds__hlds_rtti__Var_19;
    MR_Word hlds__hlds_rtti__Var_20;
    MR_Word hlds__hlds_rtti__Var_21;

    *hlds__hlds_rtti__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 6)));
    *hlds__hlds_rtti__ProcId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 7)));
    hlds__hlds_rtti__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 8)));
    hlds__hlds_rtti__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 9)));
    hlds__hlds_rtti__Var_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 10)))) & (MR_Integer) 7);
    hlds__hlds_rtti__Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    hlds__hlds_rtti__Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    hlds__hlds_rtti__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 11)));
    hlds__hlds_rtti__Var_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 12)))) & (MR_Integer) 1);
    hlds__hlds_rtti__Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
  }
}

static MR_Box MR_CALL 
hlds__hlds_rtti__make_rtti_proc_label_3_f_0_1(
  MR_Box hlds__hlds_rtti__closure_arg,
  MR_Box hlds__hlds_rtti__wrapper_arg_1)
{
  {
    MR_Box hlds__hlds_rtti__wrapper_arg_2;
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
    MR_Word hlds__hlds_rtti__conv0_LambdaHeadVar__2_32;

    {
      hlds__hlds_rtti__conv0_LambdaHeadVar__2_32 = hlds__hlds_rtti__IntroducedFrom__func__make_rtti_proc_label__374__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1));
    }
    hlds__hlds_rtti__wrapper_arg_2 = ((MR_Box) (hlds__hlds_rtti__conv0_LambdaHeadVar__2_32));
    return hlds__hlds_rtti__wrapper_arg_2;
  }
}

MR_Word MR_CALL 
hlds__hlds_rtti__make_rtti_proc_label_3_f_0(
  MR_Word hlds__hlds_rtti__ModuleInfo_5,
  MR_Word hlds__hlds_rtti__PredId_6,
  MR_Integer hlds__hlds_rtti__ProcId_7)
{
  {
    MR_bool hlds__hlds_rtti__succeeded;
    MR_Word hlds__hlds_rtti__ProcLabel_8;
    MR_Word hlds__hlds_rtti__ThisModule_9;
    MR_Word hlds__hlds_rtti__PredInfo_10;
    MR_Word hlds__hlds_rtti__ProcInfo_11;
    MR_Word hlds__hlds_rtti__PredOrFunc_12;
    MR_Word hlds__hlds_rtti__PredModule_13;
    MR_String hlds__hlds_rtti__PredName_14;
    MR_Integer hlds__hlds_rtti__Arity_15;
    MR_Word hlds__hlds_rtti__ArgTypes_16;
    MR_Word hlds__hlds_rtti__ProcVarSet_17;
    MR_Word hlds__hlds_rtti__ProcHeadVars_18;
    MR_Word hlds__hlds_rtti__ProcModes_19;
    MR_Word hlds__hlds_rtti__ProcDetism_20;
    MR_Word hlds__hlds_rtti__ProcTopModes_21;
    MR_Word hlds__hlds_rtti__PredIsImported_22;
    MR_Word hlds__hlds_rtti__PredIsPseudoImp_23;
    MR_Word hlds__hlds_rtti__ProcIsExported_24;
    MR_Word hlds__hlds_rtti__Origin_25;
    MR_Word hlds__hlds_rtti__ProcHeadVarsWithNames_26;
    MR_Word hlds__hlds_rtti__ProcIsImported_29;
    MR_Word hlds__hlds_rtti__Var_30;

    {
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__hlds_rtti__ModuleInfo_5, &hlds__hlds_rtti__ThisModule_9);
    }
    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(hlds__hlds_rtti__ModuleInfo_5, hlds__hlds_rtti__PredId_6, hlds__hlds_rtti__ProcId_7, &hlds__hlds_rtti__PredInfo_10, &hlds__hlds_rtti__ProcInfo_11);
    }
    {
      hlds__hlds_rtti__PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__hlds_rtti__PredInfo_10);
    }
    {
      hlds__hlds_rtti__PredModule_13 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__hlds_rtti__PredInfo_10);
    }
    {
      hlds__hlds_rtti__PredName_14 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__hlds_rtti__PredInfo_10);
    }
    {
      hlds__hlds_rtti__Arity_15 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__hlds_rtti__PredInfo_10);
    }
    {
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(hlds__hlds_rtti__PredInfo_10, &hlds__hlds_rtti__ArgTypes_16);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(hlds__hlds_rtti__ProcInfo_11, &hlds__hlds_rtti__ProcVarSet_17);
    }
    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(hlds__hlds_rtti__ProcInfo_11, &hlds__hlds_rtti__ProcHeadVars_18);
    }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__hlds_rtti__ProcInfo_11, &hlds__hlds_rtti__ProcModes_19);
    }
    {
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(hlds__hlds_rtti__ProcInfo_11, &hlds__hlds_rtti__ProcDetism_20);
    }
    {
      check_hlds__mode_util__modes_to_top_functor_modes_4_p_0(hlds__hlds_rtti__ModuleInfo_5, hlds__hlds_rtti__ProcModes_19, hlds__hlds_rtti__ArgTypes_16, &hlds__hlds_rtti__ProcTopModes_21);
    }
    {
      hlds__hlds_rtti__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(hlds__hlds_rtti__PredInfo_10);
    }
    if (hlds__hlds_rtti__succeeded)
      hlds__hlds_rtti__PredIsImported_22 = (MR_Integer) 1;
    else
      hlds__hlds_rtti__PredIsImported_22 = (MR_Integer) 0;
    {
      hlds__hlds_rtti__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(hlds__hlds_rtti__PredInfo_10);
    }
    if (hlds__hlds_rtti__succeeded)
      hlds__hlds_rtti__PredIsPseudoImp_23 = (MR_Integer) 1;
    else
      hlds__hlds_rtti__PredIsPseudoImp_23 = (MR_Integer) 0;
    {
      hlds__hlds_rtti__succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(hlds__hlds_rtti__ModuleInfo_5, hlds__hlds_rtti__PredInfo_10, hlds__hlds_rtti__ProcId_7);
    }
    if (hlds__hlds_rtti__succeeded)
      hlds__hlds_rtti__ProcIsExported_24 = (MR_Integer) 1;
    else
      hlds__hlds_rtti__ProcIsExported_24 = (MR_Integer) 0;
    {
      hlds__hlds_pred__pred_info_get_origin_2_p_0(hlds__hlds_rtti__PredInfo_10, &hlds__hlds_rtti__Origin_25);
    }
    {
      hlds__hlds_rtti__Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Var_30, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Var_30, 1) = ((MR_Box) (hlds__hlds_rtti__make_rtti_proc_label_3_f_0_1));
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Var_30, 3) = ((MR_Box) (hlds__hlds_rtti__ProcVarSet_17));
    }
    {
      hlds__hlds_rtti__ProcHeadVarsWithNames_26 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &hlds__hlds_rtti_scalar_common_2[0], hlds__hlds_rtti__Var_30, hlds__hlds_rtti__ProcHeadVars_18);
    }
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__PredIsImported_22 == (MR_Integer) 1);
    if (!(hlds__hlds_rtti__succeeded))
      {
        MR_Integer hlds__hlds_rtti__Var_37;

        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__PredIsPseudoImp_23 == (MR_Integer) 1);
        if (hlds__hlds_rtti__succeeded)
          {
            {
              hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&hlds__hlds_rtti__Var_37);
            }
            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__ProcId_7 == hlds__hlds_rtti__Var_37);
          }
      }
    if (hlds__hlds_rtti__succeeded)
      hlds__hlds_rtti__ProcIsImported_29 = (MR_Integer) 1;
    else
      hlds__hlds_rtti__ProcIsImported_29 = (MR_Integer) 0;
    {
      hlds__hlds_rtti__ProcLabel_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 0) = ((MR_Box) (hlds__hlds_rtti__PredOrFunc_12));
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 1) = ((MR_Box) (hlds__hlds_rtti__ThisModule_9));
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 2) = ((MR_Box) (hlds__hlds_rtti__PredModule_13));
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 3) = ((MR_Box) (hlds__hlds_rtti__PredName_14));
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 4) = ((MR_Box) (hlds__hlds_rtti__Arity_15));
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 5) = ((MR_Box) (hlds__hlds_rtti__ArgTypes_16));
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 6) = ((MR_Box) (hlds__hlds_rtti__PredId_6));
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 7) = ((MR_Box) (hlds__hlds_rtti__ProcId_7));
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 8) = ((MR_Box) (hlds__hlds_rtti__ProcHeadVarsWithNames_26));
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 9) = ((MR_Box) (hlds__hlds_rtti__ProcTopModes_21));
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 10) = ((MR_Box) ((hlds__hlds_rtti__ProcDetism_20 | ((((hlds__hlds_rtti__PredIsImported_22 << (MR_Integer) 3)) | ((hlds__hlds_rtti__PredIsPseudoImp_23 << (MR_Integer) 4)))))));
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 11) = ((MR_Box) (hlds__hlds_rtti__Origin_25));
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 12) = ((MR_Box) ((hlds__hlds_rtti__ProcIsExported_24 | ((hlds__hlds_rtti__ProcIsImported_29 << (MR_Integer) 1)))));
    }
    return hlds__hlds_rtti__ProcLabel_8;
  }
}

void mercury__hlds__hlds_rtti__init(void)
{
}

void mercury__hlds__hlds_rtti__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_instance_method_constraints_0);
	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_prog_var_name_0);
	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0);
	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_var_info_0);
	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0);
	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0);
	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_type_map_0);
	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_varmap_0);
	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_typeclass_info_constraint_map_0);
	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_typeclass_info_varmap_0);
}

void mercury__hlds__hlds_rtti__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_rtti__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module hlds.hlds_rtti. */
