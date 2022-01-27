/*
** Automatically generated from `add_pragma.m'
** by the Mercury compiler,
** version rotd-2021-05-16
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


// :- module hlds.make_hlds.add_pragma.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__add_pragma__init
ENDINIT
*/

#include "hlds.make_hlds.add_pragma.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
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
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.make_hlds_error.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.fact_table.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
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
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_constr_util.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_pred.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_foreign_proc.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.make_hlds_warn.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "hlds.make_hlds.add_pragma.add_pragma_tabling.mih"
#include "hlds.make_hlds.add_pragma.add_pragma_type_spec.mih"




static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_marker_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__maybe__pti_maybe_1__plain_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_VA_TypeInfo_Struct2 hlds__make_hlds__add_pragma____vti_pred_2hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_lookup_failure_handling_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_lookup_failure_handling_0_1;

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_lookup_failure_handling_0_2;

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_ordinal_ordered_lookup_failure_handling_0[3];

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_name_ordered_lookup_failure_handling_0[3];

static const MR_Integer hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__functor_number_map_lookup_failure_handling_0[3];

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__IntroducedFrom__pred__look_up_pragma_pf_sym_arity__1826__1_2_p_0(
  MR_Word IsFullyQualified_11,
  MR_Word HeadVar__2_46);

static void MR_CALL 
hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__do_add_pred_marker_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_impl_pragma_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_impl_pragma_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_fact_table_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_pragma__check_required_feature_set_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_require_tail_rec_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_require_tail_rec_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_115_101_108_101_99_116_101_100_95_109_111_100_101_95_111_102_95_112_114_101_100_95_95_104_111_49_95_95_91_57_93_95_48_10_p_0(
  MR_Word Var_59,
  MR_Word Var_60,
  MR_Word Var_61,
  MR_Word PredId_11,
  MR_Word PFNameArity_12,
  MR_Word Modes_13,
  MR_String PragmaName_14,
  MR_Word Context_15,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34);

static void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_115_101_108_101_99_116_101_100_95_109_111_100_101_95_111_102_95_112_114_101_100_95_95_104_111_50_95_95_91_57_93_95_48_10_p_0(
  MR_Word Var_59,
  MR_Word Var_60,
  MR_Word Var_61,
  MR_Word PredId_11,
  MR_Word PFNameArity_12,
  MR_Word Modes_13,
  MR_String PragmaName_14,
  MR_Word Context_15,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34);

static void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_115_101_108_101_99_116_101_100_95_109_111_100_101_95_111_102_95_112_114_101_100_95_95_104_111_51_95_95_91_49_48_93_95_48_10_p_0(
  MR_Word Var_59,
  MR_Word Var_60,
  MR_Word Var_61,
  MR_Word Var_62,
  MR_Word PredId_11,
  MR_Word PFNameArity_12,
  MR_Word Modes_13,
  MR_String PragmaName_14,
  MR_Word Context_15,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34);

static void MR_CALL 
hlds__make_hlds__add_pragma__IntroducedFrom__pred__add_pragma_termination2_info__1641__1_6_p_0(
  MR_Word Context_8,
  MR_Word MaybePragmaSuccessArgSizeInfo_12,
  MR_Word MaybePragmaFailureArgSizeInfo_13,
  MR_Word MaybePragmaTerminationInfo_14,
  MR_Word LambdaHeadVar__1_37,
  MR_Word * LambdaHeadVar__2_38);

static void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_115_101_108_101_99_116_101_100_95_109_111_100_101_95_111_102_95_112_114_101_100_95_95_104_111_52_95_95_91_56_93_95_48_10_p_0(
  MR_Word Var_59,
  MR_Word Var_60,
  MR_Word PredId_11,
  MR_Word PFNameArity_12,
  MR_Word Modes_13,
  MR_String PragmaName_14,
  MR_Word Context_15,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34);

static void MR_CALL 
hlds__make_hlds__add_pragma__IntroducedFrom__pred__add_pragma_termination_info__1606__1_4_p_0(
  MR_Word MaybeArgSizeInfo_22,
  MR_Word MaybeTerminationInfo_23,
  MR_Word LambdaHeadVar__1_37,
  MR_Word * LambdaHeadVar__2_38);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_115_101_108_101_99_116_101_100_95_109_111_100_101_95_111_102_95_112_114_101_100_95_95_104_111_53_95_95_91_55_93_95_48_10_p_0(
  MR_Word Var_59,
  MR_Word PredId_11,
  MR_Word PFNameArity_12,
  MR_Word Modes_13,
  MR_String PragmaName_14,
  MR_Word Context_15,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34);

static void MR_CALL 
hlds__make_hlds__add_pragma__IntroducedFrom__pred__mark_proc_as_obsolete__941__1_3_p_0(
  MR_Word ObsoleteInFavourOf_14,
  MR_Word LambdaHeadVar__1_43,
  MR_Word * LambdaHeadVar__2_44);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0_2(
  MR_Box closure_arg);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__mark_pred_as_obsolete_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pred_marker_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_54_95_95_91_55_93_95_48_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_54_95_95_91_55_93_95_48_11_p_0(
  MR_Word Var_54,
  MR_String PragmaName_12,
  MR_Word PredSpec_13,
  MR_Word Status_14,
  MR_Word MustBeExported_15,
  MR_Word Context_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_35,
  MR_Word * STATE_VARIABLE_ModuleInfo_36,
  MR_Word * PredIds_19,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38);

static void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_55_95_95_91_51_93_95_48_7_p_0(
  MR_Word Var_32,
  MR_Word HeadVar__1_1,
  MR_Word Status_3,
  MR_Word MustBeExported_4,
  MR_Word STATE_VARIABLE_PredTable_0_5,
  MR_Word * STATE_VARIABLE_PredTable_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
hlds__make_hlds__add_pragma__pragma_conflict_error_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma____Unify____add_marker_pred_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma____Compare____add_marker_pred_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma____Unify____lookup_failure_handling_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma____Compare____lookup_failure_handling_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_1[186][2];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_2[9][3];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_3[1][4];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_4[3][5];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_5[2][6];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_6[1][7];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_7[1][13];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_8[1][12];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_9[1][8];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_10[1][9];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_11[3][1];




static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_1[186][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 19)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 18)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 18)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 20)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 20)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[4])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "pragma"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 23U)),
    ((MR_Box) ((MR_String) "external_func"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 23U)),
    ((MR_Box) ((MR_String) "external_pred"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[10])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Integer) 22)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[15])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Don\'t use --no-type-layout to disable them."))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration requires type_ctor_layout structures."))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 24U)),
    ((MR_Box) ((MR_String) "foreign_export"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "so it cannot be marked as external."))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has clauses,"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[29])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 24U)),
    ((MR_Box) ((MR_String) "require_tail_recursion"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[10])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "pragma."))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[35])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: ambiguous predicate or function in"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[36])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "pragmas for"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[39]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[40])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: conflicting"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[41])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or one of its modes."))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Earlier pragma is here."))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 24U)),
    ((MR_Box) ((MR_String) "obsolete"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[25])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "that supports concurrent execution."))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: this module must be compiled in a grade"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[51])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "that uses conservative garbage collection."))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[55])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "that uses double precision floats."))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[58])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "spf"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[23])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "do not contain the grade modifier"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[61])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Grades that use double precision floats"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[63])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "that supports memoisation."))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[67])))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "that supports executing conjuntions in parallel."))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17])))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[70])))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "that uses single precision floats."))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[73])))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "contain the grade modifier"))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[61])))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Grades that use single precision floats"))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[76])))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the strict sequential semantics."))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17])))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: this module must be compiled using"))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[80])))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "that supports trailing."))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[83]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[84])))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "trseg"))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[23])))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[87])))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "tr"))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[89])))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the grade modifiers"))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[91])))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Grades that support trailing contain"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[93])))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 24U)),
    ((MR_Box) ((MR_String) "fact_table"))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[25])))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: ambiguous predicate/function name."))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17])))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[99])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[100])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declarations must always be exported."))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "pragma oisu"))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[104])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration must always be abstract exported."))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[108])))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The type in a"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[110]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[109])))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is undefined."))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[112]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17])))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "expected arity is"))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[114]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[116]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[115])))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[118]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17])))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 25U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[120]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The possible matches are:"))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[122]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[121])))
  },
  /* row 124 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[123])))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[118]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[124])))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "may be necessary to select the right match."))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[126]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17])))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "An explicit module qualifier"))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[128]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[127])))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must also be exported."))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[130]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17])))
  },
  /* row 132 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "function"))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[132]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 134 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "predicate"))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[134]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 136 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 137 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration conflicts with previous"))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[137]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 139 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[139]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 141 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for exported"))
  },
  /* row 142 */
  {
    ((MR_Box) ((MR_Unsigned) 24U)),
    ((MR_Box) ((MR_String) "obsolete"))
  },
  /* row 143 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Internal compiler error:"))
  },
  /* row 144 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "unknown predicate name in"))
  },
  /* row 145 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "ambiguous predicate name in"))
  },
  /* row 146 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: ambiguous"))
  },
  /* row 147 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "name in"))
  },
  /* row 148 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[148]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 150 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[129])))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma_scalar_common_1[150]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 152 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for undeclared mode of"))
  },
  /* row 153 */
  {
    ((MR_Box) ((MR_Unsigned) 24U)),
    ((MR_Box) ((MR_String) "obsolete_proc"))
  },
  /* row 154 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Duplicate"))
  },
  /* row 155 */
  {
    ((MR_Box) ((MR_Unsigned) 24U)),
    ((MR_Box) ((MR_String) "oisu"))
  },
  /* row 156 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 157 */
  {
    ((MR_Box) ((MR_Unsigned) 24U)),
    ((MR_Box) ((MR_String) "foreign_export"))
  },
  /* row 158 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for a procedure that has"))
  },
  /* row 159 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a declared determinism of"))
  },
  /* row 160 */
  {
    ((MR_Box) ((MR_Unsigned) 24U)),
    ((MR_Box) ((MR_String) "require_tail_recursion"))
  },
  /* row 161 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 162 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "pragma fact_table"))
  },
  /* row 163 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 164 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 165 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row 166 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[65])))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma_scalar_common_1[166]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 168 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_11[0])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[167])))
  },
  /* row 169 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[78])))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma_scalar_common_1[169]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 171 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_11[1])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[170])))
  },
  /* row 172 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[95])))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma_scalar_common_1[172]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 174 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_11[2])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[173])))
  },
  /* row 175 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the"))
  },
  /* row 176 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "predicate specification"))
  },
  /* row 177 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "within the"))
  },
  /* row 178 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "pragma oisu"))
  },
  /* row 179 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 180 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: predicate"))
  },
  /* row 181 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "one of"))
  },
  /* row 182 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has the wrong arity."))
  },
  /* row 183 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Actual arity is"))
  },
  /* row 184 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: ambiguous"))
  },
  /* row 185 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "name"))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_2[9][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[0])),
    ((MR_Box) (hlds__make_hlds__add_pragma__pragma_conflict_error_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[1])),
    ((MR_Box) (hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_54_95_95_91_55_93_95_48_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[1])),
    ((MR_Box) (hlds__make_hlds__add_pragma__mark_pred_as_obsolete_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[1])),
    ((MR_Box) (hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[1])),
    ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_require_tail_rec_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[1])),
    ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_fact_table_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[1])),
    ((MR_Box) (hlds__make_hlds__add_pragma__add_impl_pragma_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[1])),
    ((MR_Box) (hlds__make_hlds__add_pragma__do_add_pred_marker_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_4[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__pred_table__hlds__pred_table__type_ctor_info_is_fully_qualified_0)),
    ((MR_Box) (&hlds__pred_table__hlds__pred_table__type_ctor_info_is_fully_qualified_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_5[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_marker_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_error_util__hlds__hlds_error_util__type_ctor_info_should_module_qualify_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_7[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_8[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_require_tail_recursion_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__maybe__pti_maybe_1__plain_mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_9[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_required_feature_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_10[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_11[3][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[59])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[74])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[85])))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_marker_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__maybe__pti_maybe_1__plain_mdbcomp__prim_data__type_ctor_info_pred_or_func_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)
  }
};

static const MR_VA_TypeInfo_Struct2 hlds__make_hlds__add_pragma____vti_pred_2hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__type_ctor_info_add_marker_pred_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__make_hlds__add_pragma____Unify____add_marker_pred_info_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_pragma____Compare____add_marker_pred_info_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_pragma",
  (MR_String) "add_marker_pred_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma____vti_pred_2hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_lookup_failure_handling_0_0 = {
  (MR_String) "lfh_ignore",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_lookup_failure_handling_0_1 = {
  (MR_String) "lfh_user_error",
  INT32_C(1)
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_lookup_failure_handling_0_2 = {
  (MR_String) "lfh_internal_error",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_ordinal_ordered_lookup_failure_handling_0[3] = {
  &hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_lookup_failure_handling_0_0,
  &hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_lookup_failure_handling_0_1,
  &hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_lookup_failure_handling_0_2
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_name_ordered_lookup_failure_handling_0[3] = {
  &hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_lookup_failure_handling_0_0,
  &hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_lookup_failure_handling_0_2,
  &hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_lookup_failure_handling_0_1
};

static const MR_Integer hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__functor_number_map_lookup_failure_handling_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__type_ctor_info_lookup_failure_handling_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__add_pragma____Unify____lookup_failure_handling_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_pragma____Compare____lookup_failure_handling_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_pragma",
  (MR_String) "lookup_failure_handling",
  {     hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_name_ordered_lookup_failure_handling_0 },
  {     hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_ordinal_ordered_lookup_failure_handling_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__functor_number_map_lookup_failure_handling_0,

};

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__IntroducedFrom__pred__look_up_pragma_pf_sym_arity__1826__1_2_p_0(
  MR_Word IsFullyQualified_11,
  MR_Word HeadVar__2_46)
{
  {
    MR_bool succeeded = (IsFullyQualified_11 == HeadVar__2_46);

    return succeeded;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma____Compare____lookup_failure_handling_0_0(
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

MR_bool MR_CALL 
hlds__make_hlds__add_pragma____Unify____lookup_failure_handling_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma____Compare____add_marker_pred_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_3[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__make_hlds__add_pragma____Unify____add_marker_pred_info_0_0(
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

MR_String MR_CALL 
hlds__make_hlds__add_pragma__pf_to_string_1_f_0(
  MR_Word PredOrFunc_3)
{
  {
    MR_String Str_4;

    switch (PredOrFunc_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Str_4 = (MR_String) "function";
        break;
      case (MR_Integer) 0:
        Str_4 = (MR_String) "predicate";
        break;
    }
    return Str_4;
  }
}

MR_String MR_CALL 
hlds__make_hlds__add_pragma__pfu_to_string_1_f_0(
  MR_Word PFU_3)
{
  {
    MR_String Str_4;

    switch (PFU_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Str_4 = (MR_String) "function";
        break;
      case (MR_Integer) 0:
        Str_4 = (MR_String) "predicate";
        break;
      case (MR_Integer) 2:
        Str_4 = (MR_String) "predicate or function";
        break;
    }
    return Str_4;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__pragma_status_error_7_p_0(
  MR_String PorFStr_8,
  MR_Word SymName_9,
  MR_Word UserArity_10,
  MR_Word Context_11,
  MR_String PragmaName_12,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  {
    MR_Integer UserArityInt_14 = (MR_Integer) (UserArity_10);
    MR_Word SNA_15;
    MR_Word Pieces_16;
    MR_Word Spec_17;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;

    {
      SNA_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SNA_15, 0) = ((MR_Box) (SymName_9));
      MR_hl_field(MR_mktag(0), SNA_15, 1) = ((MR_Box) (UserArityInt_14));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (PragmaName_12));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (PorFStr_8));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 10U));
      MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (SNA_15));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[131])));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[141])));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[139])));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_24));
    }
    {
      Pieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[136])));
      MR_hl_field(MR_mktag(1), Pieces_16, 1) = ((MR_Box) (Var_22));
    }
    {
      Spec_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.pragma_status_error\'/7"));
      MR_hl_field(MR_mktag(1), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_17, 3) = ((MR_Box) (Context_11));
      MR_hl_field(MR_mktag(1), Spec_17, 4) = ((MR_Box) (Pieces_16));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_19 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_18));
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__transform_selected_mode_of_pred_10_p_0(
  MR_Word PredId_11,
  MR_Word PFNameArity_12,
  MR_Word Modes_13,
  MR_String PragmaName_14,
  MR_Word Context_15,
  MR_Word ProcTransform_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34)
{
  {
    MR_bool succeeded;
    MR_Word PredTable0_19;
    MR_Word PredInfo0_20;
    MR_Word ProcTable0_21;
    MR_Word ProcList_22;
    MR_Box conv0_PredInfo0_20;
    MR_Integer ProcId_23;

    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_31, &PredTable0_19);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable0_19, ((MR_Box) (PredId_11)), &conv0_PredInfo0_20);
    PredInfo0_20 = ((MR_Word) (conv0_PredInfo0_20));
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_20, &ProcTable0_21);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_21, &ProcList_22);
    succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(STATE_VARIABLE_ModuleInfo_0_31, ProcList_22, Modes_13, &ProcId_23);
    if (succeeded)
    {
      MR_Word ProcInfo0_24;
      MR_Word ProcInfo_25;
      MR_Word ProcTable_26;
      MR_Word PredInfo_27;
      MR_Word PredTable_28;
      MR_Box conv1_ProcInfo0_24;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box *);
      MR_Box conv3_ProcInfo_25;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_21, ((MR_Box) (ProcId_23)), &conv1_ProcInfo0_24);
      ProcInfo0_24 = ((MR_Word) (conv1_ProcInfo0_24));
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), ProcTransform_16, (MR_Integer) 1))));
      func_2(((MR_Box) (ProcTransform_16)), ((MR_Box) (ProcInfo0_24)), &conv3_ProcInfo_25);
      ProcInfo_25 = ((MR_Word) (conv3_ProcInfo_25));
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_23)), ((MR_Box) (ProcInfo_25)), ProcTable0_21, &ProcTable_26);
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_26, PredInfo0_20, &PredInfo_27);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_11)), ((MR_Box) (PredInfo_27)), PredTable0_19, &PredTable_28);
      hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_28, STATE_VARIABLE_ModuleInfo_0_31, STATE_VARIABLE_ModuleInfo_32);
      *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_0_33;
    }
    else
    {
      MR_Word Pieces_29;
      MR_Word Spec_30;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_43;
      MR_Word Var_44;

      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (PragmaName_14));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 13U));
        MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (PFNameArity_12));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[23])));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[152])));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
      }
      {
        Pieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[136])));
        MR_hl_field(MR_mktag(1), Pieces_29, 1) = ((MR_Box) (Var_38));
      }
      {
        Spec_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_30, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.transform_selected_mode_of_pred\'/10"));
        MR_hl_field(MR_mktag(1), Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(1), Spec_30, 3) = ((MR_Box) (Context_15));
        MR_hl_field(MR_mktag(1), Spec_30, 4) = ((MR_Box) (Pieces_29));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_34 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_30));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_33));
      }
      *STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__lookup_pred_orig_arity_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word PredId_5,
  MR_Word * Piece_6)
{
  {
    MR_Word PredInfo_7;
    MR_Integer OrigArity_8;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_4, PredId_5, &PredInfo_7);
    OrigArity_8 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Piece_6 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (OrigArity_8));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Piece_6;

    hlds__make_hlds__add_pragma__lookup_pred_orig_arity_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Piece_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Piece_6));
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word Context_12,
  MR_Word TypeCtor_13,
  MR_String Kind_14,
  MR_Word PredSpec_15,
  MR_Word * PredId_16,
  MR_Integer STATE_VARIABLE_SeqNum_0_42,
  MR_Integer * STATE_VARIABLE_SeqNum_43,
  MR_Word STATE_VARIABLE_Specs_0_44,
  MR_Word * STATE_VARIABLE_Specs_45)
{
  {
    MR_Word PredicateTable_19;
    MR_Word PredOrFunc_20;
    MR_Word PredName_21;
    MR_Word UserArity_22;
    MR_Integer PredFormArityInt_23;
    MR_Word PredIds_24;
    MR_Word Var_46;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_11, &PredicateTable_19);
    PredOrFunc_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredSpec_15, (MR_Integer) 0))) & (MR_Integer) 1);
    PredName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSpec_15, (MR_Integer) 1))));
    UserArity_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSpec_15, (MR_Integer) 2))));
    parse_tree__prog_util__user_arity_pred_form_arity_3_p_0(PredOrFunc_20, UserArity_22, &Var_46);
    PredFormArityInt_23 = (MR_Integer) (Var_46);
    hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredicateTable_19, (MR_Integer) 0, PredOrFunc_20, PredName_21, PredFormArityInt_23, &PredIds_24);
    if ((PredIds_24 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word LooseArityPredIds_25;
      MR_Integer UserArityInt_26;
      MR_Word Spec_28;

      hlds__pred_table__predicate_table_lookup_sym_4_p_0(PredicateTable_19, (MR_Integer) 0, PredName_21, &LooseArityPredIds_25);
      UserArityInt_26 = (MR_Integer) (UserArity_22);
      if ((LooseArityPredIds_25 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Pieces_27;
        MR_Word Var_168;
        MR_Word Var_169;
        MR_Word Var_170;
        MR_Word Var_171;
        MR_Word Var_172;
        MR_Word Var_175;
        MR_Word Var_178;
        MR_Word Var_181;
        MR_Word Var_184;
        MR_Word Var_185;
        MR_Word Var_186;
        MR_Word Var_189;
        MR_Word Var_191;
        MR_Word Var_194;
        MR_Word Var_195;
        MR_Word Var_196;

        {
          Var_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_169, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_169, 1) = ((MR_Box) (STATE_VARIABLE_SeqNum_0_42));
        }
        {
          Var_171 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_171, 0) = ((MR_Box) (Kind_14));
        }
        {
          Var_185 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_185, 0) = ((MR_Box) ((MR_Unsigned) 15U));
          MR_hl_field(MR_mktag(3), Var_185, 1) = ((MR_Box) (TypeCtor_13));
        }
        {
          Var_196 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_196, 0) = ((MR_Box) (PredName_21));
          MR_hl_field(MR_mktag(0), Var_196, 1) = ((MR_Box) (UserArityInt_26));
        }
        {
          Var_195 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_195, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(MR_mktag(3), Var_195, 1) = ((MR_Box) (Var_196));
        }
        {
          Var_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_194, 0) = ((MR_Box) (Var_195));
          MR_hl_field(MR_mktag(1), Var_194, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[113])));
        }
        {
          Var_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_191, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[180])));
          MR_hl_field(MR_mktag(1), Var_191, 1) = ((MR_Box) (Var_194));
        }
        {
          Var_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_189, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(1), Var_189, 1) = ((MR_Box) (Var_191));
        }
        {
          Var_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_186, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[179])));
          MR_hl_field(MR_mktag(1), Var_186, 1) = ((MR_Box) (Var_189));
        }
        {
          Var_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_184, 0) = ((MR_Box) (Var_185));
          MR_hl_field(MR_mktag(1), Var_184, 1) = ((MR_Box) (Var_186));
        }
        {
          Var_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_181, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[156])));
          MR_hl_field(MR_mktag(1), Var_181, 1) = ((MR_Box) (Var_184));
        }
        {
          Var_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_178, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[178])));
          MR_hl_field(MR_mktag(1), Var_178, 1) = ((MR_Box) (Var_181));
        }
        {
          Var_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_175, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[177])));
          MR_hl_field(MR_mktag(1), Var_175, 1) = ((MR_Box) (Var_178));
        }
        {
          Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_172, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[176])));
          MR_hl_field(MR_mktag(1), Var_172, 1) = ((MR_Box) (Var_175));
        }
        {
          Var_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_170, 0) = ((MR_Box) (Var_171));
          MR_hl_field(MR_mktag(1), Var_170, 1) = ((MR_Box) (Var_172));
        }
        {
          Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_168, 0) = ((MR_Box) (Var_169));
          MR_hl_field(MR_mktag(1), Var_168, 1) = ((MR_Box) (Var_170));
        }
        {
          Pieces_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[175])));
          MR_hl_field(MR_mktag(1), Pieces_27, 1) = ((MR_Box) (Var_168));
        }
        {
          Spec_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_28, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.find_unique_pred_for_oisu\'/10"));
          MR_hl_field(MR_mktag(1), Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_28, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(1), Spec_28, 3) = ((MR_Box) (Context_12));
          MR_hl_field(MR_mktag(1), Spec_28, 4) = ((MR_Box) (Pieces_27));
        }
      }
      else
      {
        MR_Word ArityPieces_31;
        MR_Word SortedArityPieces_32;
        MR_Word ExpArities_34;
        MR_Word Var_100;
        MR_Word Var_109;
        MR_Word Var_112;
        MR_Word Var_113;
        MR_Word Var_114;
        MR_Word Var_115;
        MR_Word Var_116;
        MR_Word Var_119;
        MR_Word Var_122;
        MR_Word Var_125;
        MR_Word Var_128;
        MR_Word Var_129;
        MR_Word Var_130;
        MR_Word Var_133;
        MR_Word Var_135;
        MR_Word Var_138;
        MR_Word Var_139;
        MR_Word Var_140;
        MR_Word Var_141;
        MR_Word Var_144;
        MR_Word Var_147;
        MR_Word Var_148;
        MR_Word Var_156;
        MR_Word Pieces_209;

        {
          Var_100 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_100, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_5[1]));
          MR_hl_field(MR_mktag(0), Var_100, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0_1));
          MR_hl_field(MR_mktag(0), Var_100, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_100, 3) = ((MR_Box) (ModuleInfo_11));
        }
        mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_100, LooseArityPredIds_25, &ArityPieces_31);
        mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ArityPieces_31, &SortedArityPieces_32);
        if ((SortedArityPieces_32 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_pragma.find_unique_pred_for_oisu\'/10", (MR_String) "no arity pieces");
            return;
          }
        else
        {
          MR_Word Var_217 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SortedArityPieces_32, (MR_Integer) 1))));

          if ((Var_217 == (MR_Word) ((MR_Unsigned) 0U)))
            ExpArities_34 = SortedArityPieces_32;
          else
          {
            MR_Word Var_104;

            Var_104 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", SortedArityPieces_32);
            {
              ExpArities_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ExpArities_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[181])));
              MR_hl_field(MR_mktag(1), ExpArities_34, 1) = ((MR_Box) (Var_104));
            }
          }
        }
        {
          Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_113, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_113, 1) = ((MR_Box) (STATE_VARIABLE_SeqNum_0_42));
        }
        {
          Var_115 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_115, 0) = ((MR_Box) (Kind_14));
        }
        {
          Var_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_129, 0) = ((MR_Box) ((MR_Unsigned) 15U));
          MR_hl_field(MR_mktag(3), Var_129, 1) = ((MR_Box) (TypeCtor_13));
        }
        {
          Var_140 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_140, 0) = ((MR_Box) (PredName_21));
          MR_hl_field(MR_mktag(0), Var_140, 1) = ((MR_Box) (UserArityInt_26));
        }
        {
          Var_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_139, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(MR_mktag(3), Var_139, 1) = ((MR_Box) (Var_140));
        }
        {
          Var_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_148, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_148, 1) = ((MR_Box) (UserArityInt_26));
        }
        {
          Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (Var_148));
          MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[117])));
        }
        {
          Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[183])));
          MR_hl_field(MR_mktag(1), Var_144, 1) = ((MR_Box) (Var_147));
        }
        {
          Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[182])));
          MR_hl_field(MR_mktag(1), Var_141, 1) = ((MR_Box) (Var_144));
        }
        {
          Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (Var_139));
          MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) (Var_141));
        }
        {
          Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[180])));
          MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) (Var_138));
        }
        {
          Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) (Var_135));
        }
        {
          Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[179])));
          MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) (Var_133));
        }
        {
          Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) (Var_129));
          MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) (Var_130));
        }
        {
          Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[156])));
          MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (Var_128));
        }
        {
          Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[178])));
          MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (Var_125));
        }
        {
          Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[177])));
          MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) (Var_122));
        }
        {
          Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[176])));
          MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (Var_119));
        }
        {
          Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (Var_115));
          MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Var_116));
        }
        {
          Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (Var_113));
          MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) (Var_114));
        }
        {
          Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[175])));
          MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (Var_112));
        }
        Var_156 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ExpArities_34, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[23])));
        Pieces_209 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_109, Var_156);
        {
          Spec_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_28, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.find_unique_pred_for_oisu\'/10"));
          MR_hl_field(MR_mktag(1), Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_28, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(1), Spec_28, 3) = ((MR_Box) (Context_12));
          MR_hl_field(MR_mktag(1), Spec_28, 4) = ((MR_Box) (Pieces_209));
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_45 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_28));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_44));
      }
      *PredId_16 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    }
    else
    {
      MR_Word Var_219 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_24, (MR_Integer) 1))));
      MR_Word Var_220 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_24, (MR_Integer) 0))));

      if ((Var_219 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *PredId_16 = Var_220;
        *STATE_VARIABLE_Specs_45 = STATE_VARIABLE_Specs_0_44;
      }
      else
      {
        MR_String PredOrFuncStr_41;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_58;
        MR_Word Var_61;
        MR_Word Var_64;
        MR_Word Var_67;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_75;
        MR_Word Var_77;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Word Var_82;
        MR_Word Var_85;
        MR_Word Var_86;
        MR_Word Var_87;
        MR_Integer UserArityInt_210 = (MR_Integer) (UserArity_22);
        MR_Word Pieces_211;
        MR_Word Spec_212;

        PredOrFuncStr_41 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_20);
        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (STATE_VARIABLE_SeqNum_0_42));
        }
        {
          Var_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_54, 0) = ((MR_Box) (Kind_14));
        }
        {
          Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) ((MR_Unsigned) 15U));
          MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (TypeCtor_13));
        }
        {
          Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (PredOrFuncStr_41));
        }
        {
          Var_87 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (PredName_21));
          MR_hl_field(MR_mktag(0), Var_87, 1) = ((MR_Box) (UserArityInt_210));
        }
        {
          Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_86, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(MR_mktag(3), Var_86, 1) = ((MR_Box) (Var_87));
        }
        {
          Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Var_86));
          MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[23])));
        }
        {
          Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[185])));
          MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (Var_85));
        }
        {
          Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
          MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_82));
        }
        {
          Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[184])));
          MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_80));
        }
        {
          Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_77));
        }
        {
          Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[179])));
          MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_75));
        }
        {
          Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
          MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_72));
        }
        {
          Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[163])));
          MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_70));
        }
        {
          Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[139])));
          MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_67));
        }
        {
          Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[155])));
          MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_64));
        }
        {
          Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[177])));
          MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_61));
        }
        {
          Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[176])));
          MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_58));
        }
        {
          Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
          MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_55));
        }
        {
          Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
          MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_53));
        }
        {
          Pieces_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_211, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[175])));
          MR_hl_field(MR_mktag(1), Pieces_211, 1) = ((MR_Box) (Var_51));
        }
        {
          Spec_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_212, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.find_unique_pred_for_oisu\'/10"));
          MR_hl_field(MR_mktag(1), Spec_212, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_212, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(1), Spec_212, 3) = ((MR_Box) (Context_12));
          MR_hl_field(MR_mktag(1), Spec_212, 4) = ((MR_Box) (Pieces_211));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_45 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_212));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_44));
        }
        *PredId_16 = hlds__hlds_pred__invalid_pred_id_0_f_0();
      }
    }
    *STATE_VARIABLE_SeqNum_43 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_SeqNum_0_42 + (MR_Unsigned) 1);
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__check_required_feature_5_p_0(
  MR_Word Globals_6,
  MR_Word Context_7,
  MR_Word Feature_8,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  {
    MR_bool succeeded;

    switch (Feature_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word IsConcurrencySupported_10;

          libs__globals__current_grade_supports_concurrency_2_p_0(Globals_6, &IsConcurrencySupported_10);
          switch (IsConcurrencySupported_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Spec_12;

                {
                  Spec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_12, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.check_required_feature\'/5"));
                  MR_hl_field(MR_mktag(1), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                  MR_hl_field(MR_mktag(1), Spec_12, 3) = ((MR_Box) (Context_7));
                  MR_hl_field(MR_mktag(1), Spec_12, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[53])));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_24 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_12));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
                }
              }
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
              break;
          }
        }
        break;
      case (MR_Integer) 7:
        {
          MR_Word GC_Method_22;

          libs__globals__get_gc_method_2_p_0(Globals_6, &GC_Method_22);
          switch (GC_Method_22) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 5:
            case (MR_Integer) 1:
              {
                MR_Word Spec_247;

                {
                  Spec_247 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_247, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.check_required_feature\'/5"));
                  MR_hl_field(MR_mktag(1), Spec_247, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_247, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                  MR_hl_field(MR_mktag(1), Spec_247, 3) = ((MR_Box) (Context_7));
                  MR_hl_field(MR_mktag(1), Spec_247, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[56])));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_24 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_247));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
                }
              }
              break;
            case (MR_Integer) 0:
              *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
              break;
            case (MR_Integer) 2:
              *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
              break;
            case (MR_Integer) 3:
              *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
              break;
            case (MR_Integer) 4:
              *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SinglePrecFloat_213;

          libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 260, &SinglePrecFloat_213);
          switch (SinglePrecFloat_213) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_147;
                MR_Word Spec_204;
                MR_Word Msg_206;

                {
                  Msg_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Msg_206, 0) = ((MR_Box) (Context_7));
                  MR_hl_field(MR_mktag(1), Msg_206, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[168])));
                }
                {
                  Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (Msg_206));
                  MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_204 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_204, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.check_required_feature\'/5"));
                  MR_hl_field(MR_mktag(0), Spec_204, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_204, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                  MR_hl_field(MR_mktag(0), Spec_204, 3) = ((MR_Box) (Var_147));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_24 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_204));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word IsTablingSupported_16;

          libs__globals__current_grade_supports_tabling_2_p_0(Globals_6, &IsTablingSupported_16);
          switch (IsTablingSupported_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Spec_217;

                {
                  Spec_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_217, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.check_required_feature\'/5"));
                  MR_hl_field(MR_mktag(1), Spec_217, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_217, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                  MR_hl_field(MR_mktag(1), Spec_217, 3) = ((MR_Box) (Context_7));
                  MR_hl_field(MR_mktag(1), Spec_217, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[68])));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_24 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_217));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
                }
              }
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
              break;
          }
        }
        break;
      case (MR_Integer) 4:
        {
          MR_Word IsParConjSupported_17;

          libs__globals__current_grade_supports_par_conj_2_p_0(Globals_6, &IsParConjSupported_17);
          switch (IsParConjSupported_17) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Spec_223;

                {
                  Spec_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_223, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.check_required_feature\'/5"));
                  MR_hl_field(MR_mktag(1), Spec_223, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_223, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                  MR_hl_field(MR_mktag(1), Spec_223, 3) = ((MR_Box) (Context_7));
                  MR_hl_field(MR_mktag(1), Spec_223, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[71])));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_24 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_223));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
                }
              }
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SinglePrecFloat_13;

          libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 260, &SinglePrecFloat_13);
          switch (SinglePrecFloat_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Msg_15;
                MR_Word Var_182;
                MR_Word Spec_198;

                {
                  Msg_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Msg_15, 0) = ((MR_Box) (Context_7));
                  MR_hl_field(MR_mktag(1), Msg_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[171])));
                }
                {
                  Var_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_182, 0) = ((MR_Box) (Msg_15));
                  MR_hl_field(MR_mktag(1), Var_182, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_198 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_198, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.check_required_feature\'/5"));
                  MR_hl_field(MR_mktag(0), Spec_198, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_198, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                  MR_hl_field(MR_mktag(0), Spec_198, 3) = ((MR_Box) (Var_182));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_24 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_198));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
                }
              }
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
              break;
          }
        }
        break;
      case (MR_Integer) 6:
        {
          MR_Word ReorderConj_19;
          MR_Word ReorderDisj_20;
          MR_Word FullyStrict_21;

          libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 201, &ReorderConj_19);
          libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 202, &ReorderDisj_20);
          libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 203, &FullyStrict_21);
          succeeded = (ReorderConj_19 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (ReorderDisj_20 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (FullyStrict_21 == (MR_Integer) 1);
          }
          if (succeeded)
            *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
          else
          {
            MR_Word Spec_241;

            {
              Spec_241 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_241, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.check_required_feature\'/5"));
              MR_hl_field(MR_mktag(1), Spec_241, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_241, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(MR_mktag(1), Spec_241, 3) = ((MR_Box) (Context_7));
              MR_hl_field(MR_mktag(1), Spec_241, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[82])));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_24 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_241));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
            }
          }
        }
        break;
      case (MR_Integer) 5:
        {
          MR_Word UseTrail_18;

          libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 254, &UseTrail_18);
          switch (UseTrail_18) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_88;
                MR_Word Spec_229;
                MR_Word Msg_231;

                {
                  Msg_231 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Msg_231, 0) = ((MR_Box) (Context_7));
                  MR_hl_field(MR_mktag(1), Msg_231, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[174])));
                }
                {
                  Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Msg_231));
                  MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_229 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_229, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.check_required_feature\'/5"));
                  MR_hl_field(MR_mktag(0), Spec_229, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_229, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                  MR_hl_field(MR_mktag(0), Spec_229, 3) = ((MR_Box) (Var_88));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_24 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_229));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
                }
              }
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
              break;
          }
        }
        break;
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_marker_pred_info_3_p_0(
  MR_Word Marker_4,
  MR_Word STATE_VARIABLE_PredInfo_0_8,
  MR_Word * STATE_VARIABLE_PredInfo_9)
{
  {
    MR_Word Markers0_6;
    MR_Word Markers_7;

    hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_0_8, &Markers0_6);
    hlds__hlds_pred__add_marker_3_p_0(Marker_4, Markers0_6, &Markers_7);
    hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_7, STATE_VARIABLE_PredInfo_0_8, STATE_VARIABLE_PredInfo_9);
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__get_pred_markers_3_p_0(
  MR_Word PredTable_4,
  MR_Word PredId_5,
  MR_Word * Markers_6)
{
  {
    MR_Word PredInfo_7;
    MR_Box conv0_PredInfo_7;

    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable_4, ((MR_Box) (PredId_5)), &conv0_PredInfo_7);
    PredInfo_7 = ((MR_Word) (conv0_PredInfo_7));
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_7, Markers_6);
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__do_add_pred_marker_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_error_util__project_user_arity_int_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__do_add_pred_marker_11_p_0(
  MR_String PragmaName_12,
  MR_Word PredSpec_13,
  MR_Word Status_14,
  MR_Word MustBeExported_15,
  MR_Word Context_16,
  MR_Word UpdatePredInfo_17,
  MR_Word STATE_VARIABLE_ModuleInfo_0_35,
  MR_Word * STATE_VARIABLE_ModuleInfo_36,
  MR_Word * PredIds_19,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38)
{
  {
    MR_Word PFU_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredSpec_13, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word PredSymName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSpec_13, (MR_Integer) 1))));
    MR_Word UserArity_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSpec_13, (MR_Integer) 2))));
    MR_Word OtherUserArities_24;

    hlds__make_hlds__add_pragma__get_matching_pred_ids_6_p_0(STATE_VARIABLE_ModuleInfo_0_35, PFU_21, PredSymName_22, UserArity_23, PredIds_19, &OtherUserArities_24);
    if ((*PredIds_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer UserArityInt_32 = (MR_Integer) (UserArity_23);
      MR_Word OtherArities_33;
      MR_Word DescPieces_34;
      MR_Word Var_40;

      OtherArities_33 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_2[8]), OtherUserArities_24);
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (PragmaName_12));
      }
      {
        DescPieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), DescPieces_34, 0) = ((MR_Box) (Var_40));
        MR_hl_field(MR_mktag(1), DescPieces_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[140])));
      }
      hlds__make_hlds_error__report_undefined_pred_or_func_error_8_p_0((MR_Word) ((MR_Unsigned) 0U), PredSymName_22, UserArityInt_32, OtherArities_33, Context_16, DescPieces_34, STATE_VARIABLE_Specs_0_37, STATE_VARIABLE_Specs_38);
      *STATE_VARIABLE_ModuleInfo_36 = STATE_VARIABLE_ModuleInfo_0_35;
    }
    else
    {
      MR_Word PredTable0_27;
      MR_Word Preds0_28;
      MR_Word Preds_29;
      MR_Word WrongStatus_30;
      MR_Word PredTable_31;

      hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_35, &PredTable0_27);
      hlds__pred_table__predicate_table_get_preds_2_p_0(PredTable0_27, &Preds0_28);
      hlds__make_hlds__add_pragma__pragma_add_marker_7_p_0(*PredIds_19, UpdatePredInfo_17, Status_14, MustBeExported_15, Preds0_28, &Preds_29, &WrongStatus_30);
      switch (WrongStatus_30) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Specs_38 = STATE_VARIABLE_Specs_0_37;
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_47;
            MR_Integer UserArityInt_64;
            MR_Word SNA_65;
            MR_Word Pieces_66;
            MR_Word Spec_67;
            MR_Word Var_70;
            MR_Word Var_71;
            MR_Word Var_72;
            MR_Word Var_75;
            MR_Word Var_78;
            MR_Word Var_79;
            MR_Word Var_80;
            MR_Word Var_81;

            switch (PFU_21) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                Var_47 = (MR_String) "function";
                break;
              case (MR_Integer) 0:
                Var_47 = (MR_String) "predicate";
                break;
              case (MR_Integer) 2:
                Var_47 = (MR_String) "predicate or function";
                break;
            }
            UserArityInt_64 = (MR_Integer) (UserArity_23);
            {
              SNA_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SNA_65, 0) = ((MR_Box) (PredSymName_22));
              MR_hl_field(MR_mktag(0), SNA_65, 1) = ((MR_Box) (UserArityInt_64));
            }
            {
              Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (PragmaName_12));
            }
            {
              Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Var_79, 1) = ((MR_Box) (Var_47));
            }
            {
              Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (SNA_65));
            }
            {
              Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
              MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[131])));
            }
            {
              Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_79));
              MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_80));
            }
            {
              Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[141])));
              MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_78));
            }
            {
              Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[139])));
              MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_75));
            }
            {
              Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
              MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_72));
            }
            {
              Pieces_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[136])));
              MR_hl_field(MR_mktag(1), Pieces_66, 1) = ((MR_Box) (Var_70));
            }
            {
              Spec_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_67, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.pragma_status_error\'/7"));
              MR_hl_field(MR_mktag(1), Spec_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_67, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(MR_mktag(1), Spec_67, 3) = ((MR_Box) (Context_16));
              MR_hl_field(MR_mktag(1), Spec_67, 4) = ((MR_Box) (Pieces_66));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_38 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_67));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_37));
            }
          }
          break;
      }
      hlds__pred_table__predicate_table_set_preds_3_p_0(Preds_29, PredTable0_27, &PredTable_31);
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_31, STATE_VARIABLE_ModuleInfo_0_35, STATE_VARIABLE_ModuleInfo_36);
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__pragma_add_marker_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word UpdatePredInfo_2,
  MR_Word Status_3,
  MR_Word MustBeExported_4,
  MR_Word STATE_VARIABLE_PredTable_0_5,
  MR_Word * STATE_VARIABLE_PredTable_6,
  MR_Word * HeadVar__7_7)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__7_7 = (MR_Integer) 0;
      *STATE_VARIABLE_PredTable_6 = STATE_VARIABLE_PredTable_0_5;
    }
    else
    {
      MR_Word PredId_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PredIds_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word PredInfo0_21;
      MR_Word PredInfo_22;
      MR_Word WrongStatus0_23;
      MR_Word WrongStatus1_24;
      MR_Word STATE_VARIABLE_PredTable_28_28;
      MR_Box conv0_PredInfo0_21;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *);
      MR_Box conv2_PredInfo_22;
      MR_Word Var_27;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), STATE_VARIABLE_PredTable_0_5, ((MR_Box) (PredId_14)), &conv0_PredInfo0_21);
      PredInfo0_21 = ((MR_Word) (conv0_PredInfo0_21));
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), UpdatePredInfo_2, (MR_Integer) 1))));
      func_1(((MR_Box) (UpdatePredInfo_2)), ((MR_Box) (PredInfo0_21)), &conv2_PredInfo_22);
      PredInfo_22 = ((MR_Word) (conv2_PredInfo_22));
      succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(PredInfo_22);
      if (succeeded)
      {
        succeeded = (MustBeExported_4 == (MR_Integer) 1);
        if (succeeded)
        {
          Var_27 = (MR_Word) (Status_3);
          succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 12U));
        }
      }
      if (succeeded)
        WrongStatus0_23 = (MR_Integer) 1;
      else
        WrongStatus0_23 = (MR_Integer) 0;
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_14)), ((MR_Box) (PredInfo_22)), STATE_VARIABLE_PredTable_0_5, &STATE_VARIABLE_PredTable_28_28);
      hlds__make_hlds__add_pragma__pragma_add_marker_7_p_0(PredIds_15, UpdatePredInfo_2, Status_3, MustBeExported_4, STATE_VARIABLE_PredTable_28_28, STATE_VARIABLE_PredTable_6, &WrongStatus1_24);
      mercury__bool__or_3_p_0(WrongStatus0_23, WrongStatus1_24, HeadVar__7_7);
    }
  }
}

MR_bool MR_CALL 
hlds__make_hlds__add_pragma__marker_must_be_exported_1_p_0(
  MR_Word HeadVar__1_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_114_107_101_114_95_109_117_115_116_95_98_101_95_101_120_112_111_114_116_101_100_95_95_91_49_93_95_48_1_p_0();
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_114_107_101_114_95_109_117_115_116_95_98_101_95_101_120_112_111_114_116_101_100_95_95_91_49_93_95_48_1_p_0(void)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__semidet_fail_0_p_0();
    return succeeded;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__mark_pred_as_external_6_p_0(
  MR_Word Context_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * STATE_VARIABLE_ModuleInfo_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  {
    MR_Word PredTable0_11;
    MR_Word PredInfo0_12;
    MR_Word ClausesInfo0_13;
    MR_Word ClausesRep0_14;
    MR_Word IsEmpty_16;
    MR_Box conv0_PredInfo0_12;
    MR_Word _ItemNumbers_15;

    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_25, &PredTable0_11);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable0_11, ((MR_Box) (PredId_8)), &conv0_PredInfo0_12);
    PredInfo0_12 = ((MR_Word) (conv0_PredInfo0_12));
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo0_12, &ClausesInfo0_13);
    hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo0_13, &ClausesRep0_14, &_ItemNumbers_15);
    IsEmpty_16 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(ClausesRep0_14);
    switch (IsEmpty_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word PredOrFunc_19;
          MR_String PredName_20;
          MR_Integer Arity_21;
          MR_Word SNA_22;
          MR_Word Pieces_23;
          MR_Word Spec_24;
          MR_Word Var_29;
          MR_Word Var_32;
          MR_Word Var_33;
          MR_Word Var_34;
          MR_Word Var_35;

          PredOrFunc_19 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_12);
          hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfo0_12, &PredName_20);
          Arity_21 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo0_12);
          {
            Var_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (PredName_20));
          }
          {
            SNA_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SNA_22, 0) = ((MR_Box) (Var_29));
            MR_hl_field(MR_mktag(0), SNA_22, 1) = ((MR_Box) (Arity_21));
          }
          {
            Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 22U));
            MR_hl_field(MR_mktag(3), Var_33, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_19));
          }
          {
            Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 10U));
            MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (SNA_22));
          }
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
            MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[31])));
          }
          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
            MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_34));
          }
          {
            Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[165])));
            MR_hl_field(MR_mktag(1), Pieces_23, 1) = ((MR_Box) (Var_32));
          }
          {
            Spec_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.mark_pred_as_external\'/6"));
            MR_hl_field(MR_mktag(1), Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(1), Spec_24, 3) = ((MR_Box) (Context_7));
            MR_hl_field(MR_mktag(1), Spec_24, 4) = ((MR_Box) (Pieces_23));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_28 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_24));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_27));
          }
          *STATE_VARIABLE_ModuleInfo_26 = STATE_VARIABLE_ModuleInfo_0_25;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word PredInfo_17;
          MR_Word PredTable_18;

          hlds__hlds_pred__pred_info_mark_as_external_2_p_0(PredInfo0_12, &PredInfo_17);
          mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_8)), ((MR_Box) (PredInfo_17)), PredTable0_11, &PredTable_18);
          hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_18, STATE_VARIABLE_ModuleInfo_0_25, STATE_VARIABLE_ModuleInfo_26);
          *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
        }
        break;
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_gen_pragma_5_p_0(
  MR_Word ItemPragmaInfo_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  {
    MR_Word Pragma_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragmaInfo_6, (MR_Integer) 0))));
    MR_Word Context_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragmaInfo_6, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) Pragma_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word UnusedArgsInfo_12 = (MR_Word) ((MR_Word) (Pragma_9));

          hlds__make_hlds__add_pragma__add_pragma_unused_args_6_p_0(UnusedArgsInfo_12, Context_10, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17, STATE_VARIABLE_Specs_0_18, STATE_VARIABLE_Specs_19);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ExceptionsInfo_13 = (MR_Word) (MR_body((MR_Word) (Pragma_9), (MR_Integer) 1));

          hlds__make_hlds__add_pragma__add_pragma_exceptions_6_p_0(ExceptionsInfo_13, Context_10, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17, STATE_VARIABLE_Specs_0_18, STATE_VARIABLE_Specs_19);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TrailingInfo_14 = (MR_Word) (MR_body((MR_Word) (Pragma_9), (MR_Integer) 2));

          hlds__make_hlds__add_pragma__add_pragma_trailing_info_6_p_0(TrailingInfo_14, Context_10, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17, STATE_VARIABLE_Specs_0_18, STATE_VARIABLE_Specs_19);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word MMTablingInfo_15 = (MR_Word) (MR_body((MR_Word) (Pragma_9), (MR_Integer) 3));

          hlds__make_hlds__add_pragma__add_pragma_mm_tabling_info_6_p_0(MMTablingInfo_15, Context_10, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17, STATE_VARIABLE_Specs_0_18, STATE_VARIABLE_Specs_19);
        }
        break;
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_mm_tabling_info_6_p_0(
  MR_Word MMTablingInfo_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * STATE_VARIABLE_ModuleInfo_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  {
    MR_Word PredNameArityPFMn_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MMTablingInfo_7, (MR_Integer) 0))));
    MR_Word TablingStatus_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), MMTablingInfo_7, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word PredOrFunc_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word SymName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 1))));
    MR_Word UserArity_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 2))));
    MR_Integer ModeNum_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 3))));
    MR_Word MaybePredId_17;

    hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_25, (MR_Integer) 0, (MR_Integer) 0, Context_8, (MR_String) "mm_tabling_info", PredOrFunc_13, SymName_14, UserArity_15, &MaybePredId_17);
    if (((MR_tag((MR_Word) MaybePredId_17)) == (MR_Integer) 0))
      *STATE_VARIABLE_ModuleInfo_26 = STATE_VARIABLE_ModuleInfo_0_25;
    else
    {
      MR_Word PredId_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredId_17, (MR_Integer) 0))));
      MR_Integer ProcId_19;
      MR_Word PredInfo0_20;
      MR_Word ProcInfo0_21;
      MR_Word ProcMMTablingInfo_22;
      MR_Word ProcInfo_23;
      MR_Word Var_33;

      hlds__hlds_pred__proc_id_to_int_2_p_1(&ProcId_19, ModeNum_16);
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_25, PredId_18, ProcId_19, &PredInfo0_20, &ProcInfo0_21);
      {
        ProcMMTablingInfo_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ProcMMTablingInfo_22, 0) = (MR_Box) ((MR_Unsigned) (TablingStatus_12));
        MR_hl_field(MR_mktag(0), ProcMMTablingInfo_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (ProcMMTablingInfo_22));
      }
      hlds__hlds_pred__proc_info_set_mm_tabling_info_3_p_0(Var_33, ProcInfo0_21, &ProcInfo_23);
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_18, ProcId_19, PredInfo0_20, ProcInfo_23, STATE_VARIABLE_ModuleInfo_0_25, STATE_VARIABLE_ModuleInfo_26);
    }
    *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_trailing_info_6_p_0(
  MR_Word TrailingInfo_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * STATE_VARIABLE_ModuleInfo_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  {
    MR_Word PredNameArityPFMn_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TrailingInfo_7, (MR_Integer) 0))));
    MR_Word TrailingStatus_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TrailingInfo_7, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word PredOrFunc_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word SymName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 1))));
    MR_Word UserArity_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 2))));
    MR_Integer ModeNum_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 3))));
    MR_Word MaybePredId_17;

    hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_25, (MR_Integer) 0, (MR_Integer) 0, Context_8, (MR_String) "trailing_info", PredOrFunc_13, SymName_14, UserArity_15, &MaybePredId_17);
    if (((MR_tag((MR_Word) MaybePredId_17)) == (MR_Integer) 0))
      *STATE_VARIABLE_ModuleInfo_26 = STATE_VARIABLE_ModuleInfo_0_25;
    else
    {
      MR_Word PredId_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredId_17, (MR_Integer) 0))));
      MR_Integer ProcId_19;
      MR_Word PredInfo0_20;
      MR_Word ProcInfo0_21;
      MR_Word ProcTrailingInfo_22;
      MR_Word ProcInfo_23;
      MR_Word Var_33;

      hlds__hlds_pred__proc_id_to_int_2_p_1(&ProcId_19, ModeNum_16);
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_25, PredId_18, ProcId_19, &PredInfo0_20, &ProcInfo0_21);
      {
        ProcTrailingInfo_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ProcTrailingInfo_22, 0) = (MR_Box) ((MR_Unsigned) (TrailingStatus_12));
        MR_hl_field(MR_mktag(0), ProcTrailingInfo_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (ProcTrailingInfo_22));
      }
      hlds__hlds_pred__proc_info_set_trailing_info_3_p_0(Var_33, ProcInfo0_21, &ProcInfo_23);
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_18, ProcId_19, PredInfo0_20, ProcInfo_23, STATE_VARIABLE_ModuleInfo_0_25, STATE_VARIABLE_ModuleInfo_26);
    }
    *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_exceptions_6_p_0(
  MR_Word ExceptionsInfo_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * STATE_VARIABLE_ModuleInfo_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  {
    MR_Word PredNameArityPFMn_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExceptionsInfo_7, (MR_Integer) 0))));
    MR_Word ThrowStatus_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExceptionsInfo_7, (MR_Integer) 1))));
    MR_Word PredOrFunc_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word SymName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 1))));
    MR_Word UserArity_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 2))));
    MR_Integer ModeNum_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 3))));
    MR_Word MaybePredId_17;

    hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_25, (MR_Integer) 0, (MR_Integer) 0, Context_8, (MR_String) "exceptions", PredOrFunc_13, SymName_14, UserArity_15, &MaybePredId_17);
    if (((MR_tag((MR_Word) MaybePredId_17)) == (MR_Integer) 0))
      *STATE_VARIABLE_ModuleInfo_26 = STATE_VARIABLE_ModuleInfo_0_25;
    else
    {
      MR_Word PredId_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredId_17, (MR_Integer) 0))));
      MR_Integer ProcId_19;
      MR_Word PredInfo0_20;
      MR_Word ProcInfo0_21;
      MR_Word ProcExceptionInfo_22;
      MR_Word ProcInfo_23;
      MR_Word Var_33;

      hlds__hlds_pred__proc_id_to_int_2_p_1(&ProcId_19, ModeNum_16);
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_25, PredId_18, ProcId_19, &PredInfo0_20, &ProcInfo0_21);
      {
        ProcExceptionInfo_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ProcExceptionInfo_22, 0) = ((MR_Box) (ThrowStatus_12));
        MR_hl_field(MR_mktag(0), ProcExceptionInfo_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (ProcExceptionInfo_22));
      }
      hlds__hlds_pred__proc_info_set_exception_info_3_p_0(Var_33, ProcInfo0_21, &ProcInfo_23);
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_18, ProcId_19, PredInfo0_20, ProcInfo_23, STATE_VARIABLE_ModuleInfo_0_25, STATE_VARIABLE_ModuleInfo_26);
    }
    *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_unused_args_6_p_0(
  MR_Word UnusedArgsInfo_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  {
    MR_Word PredNameArityPFMn_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnusedArgsInfo_7, (MR_Integer) 0))));
    MR_Word UnusedArgs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnusedArgsInfo_7, (MR_Integer) 1))));
    MR_Word PredOrFunc_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word SymName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 1))));
    MR_Word UserArity_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 2))));
    MR_Integer ModeNum_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 3))));
    MR_Word MaybePredId_17;

    hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_23, (MR_Integer) 0, (MR_Integer) 2, Context_8, (MR_String) "unused_args", PredOrFunc_13, SymName_14, UserArity_15, &MaybePredId_17);
    if (((MR_tag((MR_Word) MaybePredId_17)) == (MR_Integer) 0))
    {
      MR_Word Specs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybePredId_17, (MR_Integer) 0))));

      *STATE_VARIABLE_Specs_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Specs_10, STATE_VARIABLE_Specs_0_25);
      *STATE_VARIABLE_ModuleInfo_24 = STATE_VARIABLE_ModuleInfo_0_23;
    }
    else
    {
      MR_Word PredId_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredId_17, (MR_Integer) 0))));
      MR_Word UnusedArgInfo0_19;
      MR_Integer ProcId_20;
      MR_Word PredProcId_21;
      MR_Word UnusedArgInfo_22;

      hlds__hlds_module__module_info_get_unused_arg_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_23, &UnusedArgInfo0_19);
      hlds__hlds_pred__proc_id_to_int_2_p_1(&ProcId_20, ModeNum_16);
      {
        PredProcId_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PredProcId_21, 0) = ((MR_Box) (PredId_18));
        MR_hl_field(MR_mktag(0), PredProcId_21, 1) = ((MR_Box) (ProcId_20));
      }
      mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[1]), ((MR_Box) (PredProcId_21)), ((MR_Box) (UnusedArgs_12)), UnusedArgInfo0_19, &UnusedArgInfo_22);
      hlds__hlds_module__module_info_set_unused_arg_info_3_p_0(UnusedArgInfo_22, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
      *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_impl_pragma_tabled_7_p_0(
  MR_Word SectionItem_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * STATE_VARIABLE_ModuleInfo_26,
  MR_Word STATE_VARIABLE_QualInfo_0_27,
  MR_Word * STATE_VARIABLE_QualInfo_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  {
    MR_Word ItemMercuryStatus_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionItem_8, (MR_Integer) 0))));
    MR_Word ItemPragmaInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionItem_8, (MR_Integer) 1))));
    MR_Word TabledInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragmaInfo_13, (MR_Integer) 0))));
    MR_Word Context_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragmaInfo_13, (MR_Integer) 1))));
    MR_Word Globals_17;
    MR_Word TypeLayout_18;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_25, &Globals_17);
    libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 261, &TypeLayout_18);
    switch (TypeLayout_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word EvalMethod_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TabledInfo_14, (MR_Integer) 0))));
          MR_Word Pieces_23;
          MR_Word Spec_24;
          MR_Word Var_34;
          MR_Word Var_35;
          MR_String Var_36;

          Var_36 = parse_tree__prog_out__eval_method_to_string_1_f_0(EvalMethod_20);
          {
            Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (Var_36));
          }
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
            MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[21])));
          }
          {
            Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[136])));
            MR_hl_field(MR_mktag(1), Pieces_23, 1) = ((MR_Box) (Var_34));
          }
          {
            Spec_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_impl_pragma_tabled\'/7"));
            MR_hl_field(MR_mktag(1), Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(1), Spec_24, 3) = ((MR_Box) (Context_15));
            MR_hl_field(MR_mktag(1), Spec_24, 4) = ((MR_Box) (Pieces_23));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_30 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_24));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_29));
          }
          *STATE_VARIABLE_ModuleInfo_26 = STATE_VARIABLE_ModuleInfo_0_25;
          *STATE_VARIABLE_QualInfo_28 = STATE_VARIABLE_QualInfo_0_27;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word PredStatus_19;

          hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_12, &PredStatus_19);
          hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_9_p_0(TabledInfo_14, Context_15, PredStatus_19, STATE_VARIABLE_ModuleInfo_0_25, STATE_VARIABLE_ModuleInfo_26, STATE_VARIABLE_QualInfo_0_27, STATE_VARIABLE_QualInfo_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_impl_pragma_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ModuleInfo_26;
    MR_Word conv1_STATE_VARIABLE_Specs_28;

    hlds__make_hlds__add_pragma__mark_pred_as_external_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_26, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Specs_28);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_26));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Specs_28));
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_impl_pragma_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_error_util__project_user_arity_int_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_impl_pragma_9_p_0(
  MR_Word SectionItem_10,
  MR_Word STATE_VARIABLE_RevPragmaTabled_0_59,
  MR_Word * STATE_VARIABLE_RevPragmaTabled_60,
  MR_Word STATE_VARIABLE_ModuleInfo_0_61,
  MR_Word * STATE_VARIABLE_ModuleInfo_62,
  MR_Word STATE_VARIABLE_QualInfo_0_63,
  MR_Word * STATE_VARIABLE_QualInfo_64,
  MR_Word STATE_VARIABLE_Specs_0_65,
  MR_Word * STATE_VARIABLE_Specs_66)
{
  {
    MR_bool succeeded;
    MR_Word ItemMercuryStatus_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionItem_10, (MR_Integer) 0))));
    MR_Word ItemPragmaInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionItem_10, (MR_Integer) 1))));
    MR_Word Pragma_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragmaInfo_16, (MR_Integer) 0))));
    MR_Word Context_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragmaInfo_16, (MR_Integer) 1))));
    MR_Integer SeqNum_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemPragmaInfo_16, (MR_Integer) 2))));

    switch (MR_tag((MR_Word) Pragma_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word FDInfo_20 = (MR_Word) ((MR_Word) (Pragma_17));
          MR_Word CHeader_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FDInfo_20, (MR_Integer) 1))));
          MR_Word ForeignDeclCode_24;
          MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), FDInfo_20, (MR_Integer) 0)));

          {
            ForeignDeclCode_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ForeignDeclCode_24, 0) = (MR_Box) (packed_word_2);
            MR_hl_field(MR_mktag(0), ForeignDeclCode_24, 1) = ((MR_Box) (CHeader_23));
            MR_hl_field(MR_mktag(0), ForeignDeclCode_24, 2) = ((MR_Box) (Context_18));
          }
          hlds__hlds_module__module_add_foreign_decl_code_user_3_p_0(ForeignDeclCode_24, STATE_VARIABLE_ModuleInfo_0_61, STATE_VARIABLE_ModuleInfo_62);
          *STATE_VARIABLE_RevPragmaTabled_60 = STATE_VARIABLE_RevPragmaTabled_0_59;
          *STATE_VARIABLE_Specs_66 = STATE_VARIABLE_Specs_0_65;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word FCInfo_25 = (MR_Word) (MR_body((MR_Word) (Pragma_17), (MR_Integer) 1));
          MR_Word BodyCode_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FCInfo_25, (MR_Integer) 1))));
          MR_Word ForeignBodyCode_27;
          MR_Word Lang_157 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FCInfo_25, (MR_Integer) 0))) & (MR_Integer) 3);

          hlds__make_hlds__make_hlds_warn__warn_suspicious_foreign_code_5_p_0(Lang_157, BodyCode_26, Context_18, STATE_VARIABLE_Specs_0_65, STATE_VARIABLE_Specs_66);
          {
            ForeignBodyCode_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ForeignBodyCode_27, 0) = (MR_Box) ((MR_Unsigned) (Lang_157));
            MR_hl_field(MR_mktag(0), ForeignBodyCode_27, 1) = ((MR_Box) (BodyCode_26));
            MR_hl_field(MR_mktag(0), ForeignBodyCode_27, 2) = ((MR_Box) (Context_18));
          }
          hlds__hlds_module__module_add_foreign_body_code_3_p_0(ForeignBodyCode_27, STATE_VARIABLE_ModuleInfo_0_61, STATE_VARIABLE_ModuleInfo_62);
          *STATE_VARIABLE_RevPragmaTabled_60 = STATE_VARIABLE_RevPragmaTabled_0_59;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word FPInfo_28 = (MR_Word) (MR_body((MR_Word) (Pragma_17), (MR_Integer) 2));
          MR_Word PredStatus_29;
          MR_Word Var_151;

          hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_15, &PredStatus_29);
          {
            Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_151, 0) = ((MR_Box) (SeqNum_19));
          }
          hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(FPInfo_28, PredStatus_29, Context_18, Var_151, STATE_VARIABLE_ModuleInfo_0_61, STATE_VARIABLE_ModuleInfo_62, STATE_VARIABLE_Specs_0_65, STATE_VARIABLE_Specs_66);
          *STATE_VARIABLE_RevPragmaTabled_60 = STATE_VARIABLE_RevPragmaTabled_0_59;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma_17, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word FEInfo_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_17, (MR_Integer) 1))));

              hlds__make_hlds__add_pragma__add_pragma_foreign_proc_export_6_p_0(FEInfo_30, Context_18, STATE_VARIABLE_ModuleInfo_0_61, STATE_VARIABLE_ModuleInfo_62, STATE_VARIABLE_Specs_0_65, STATE_VARIABLE_Specs_66);
              *STATE_VARIABLE_RevPragmaTabled_60 = STATE_VARIABLE_RevPragmaTabled_0_59;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ExternalInfo_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_17, (MR_Integer) 1))));
              MR_Word PFNameArity_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExternalInfo_31, (MR_Integer) 0))));
              MR_Word MaybeBackend_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExternalInfo_31, (MR_Integer) 1))));
              MR_Word Globals_34;
              MR_Word CurrentBackend_35;

              hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_61, &Globals_34);
              CurrentBackend_35 = libs__globals__lookup_current_backend_1_f_0(Globals_34);
              if ((MaybeBackend_33 == (MR_Word) ((MR_Unsigned) 0U)))
                succeeded = MR_TRUE;
              else
              {
                MR_Word Backend_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBackend_33, (MR_Integer) 0))));

                succeeded = (Backend_36 == CurrentBackend_35);
              }
              if (succeeded)
              {
                MR_Word PredicateTable0_37;
                MR_Word PredOrFunc_38;
                MR_Word SymName_39;
                MR_Word UserArity_40;
                MR_Integer UserArityInt_41;
                MR_Word PredIds_42;
                MR_Word AllArityPredIds_43;
                MR_Word MissingPieces_44;

                hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_61, &PredicateTable0_37);
                PredOrFunc_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PFNameArity_32, (MR_Integer) 0))) & (MR_Integer) 1);
                SymName_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PFNameArity_32, (MR_Integer) 1))));
                UserArity_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PFNameArity_32, (MR_Integer) 2))));
                UserArityInt_41 = (MR_Integer) (UserArity_40);
                switch (PredOrFunc_38) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(PredicateTable0_37, (MR_Integer) 0, SymName_39, UserArityInt_41, &PredIds_42);
                      hlds__pred_table__predicate_table_lookup_func_sym_4_p_0(PredicateTable0_37, (MR_Integer) 0, SymName_39, &AllArityPredIds_43);
                      MissingPieces_44 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[12]));
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      hlds__pred_table__predicate_table_lookup_pred_sym_arity_5_p_0(PredicateTable0_37, (MR_Integer) 0, SymName_39, UserArityInt_41, &PredIds_42);
                      hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0(PredicateTable0_37, (MR_Integer) 0, SymName_39, &AllArityPredIds_43);
                      MissingPieces_44 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[14]));
                    }
                    break;
                }
                if ((PredIds_42 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word PredTable0_47;
                  MR_Word OtherUserArities_48;
                  MR_Word OtherArities_49;
                  MR_Word Var_144;

                  hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_61, &PredTable0_47);
                  hlds__hlds_error_util__find_user_arities_other_than_4_p_0(PredTable0_47, AllArityPredIds_43, UserArity_40, &OtherUserArities_48);
                  OtherArities_49 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_2[7]), OtherUserArities_48);
                  {
                    Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) (PredOrFunc_38));
                  }
                  hlds__make_hlds_error__report_undefined_pred_or_func_error_8_p_0(Var_144, SymName_39, UserArityInt_41, OtherArities_49, Context_18, MissingPieces_44, STATE_VARIABLE_Specs_0_65, STATE_VARIABLE_Specs_66);
                  *STATE_VARIABLE_ModuleInfo_62 = STATE_VARIABLE_ModuleInfo_0_61;
                }
                else
                {
                  MR_Word Var_146;
                  MR_Box conv4_STATE_VARIABLE_ModuleInfo_62;
                  MR_Box conv3_STATE_VARIABLE_Specs_66;

                  {
                    Var_146 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_146, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_10[0]));
                    MR_hl_field(MR_mktag(0), Var_146, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_impl_pragma_9_p_0_2));
                    MR_hl_field(MR_mktag(0), Var_146, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), Var_146, 3) = ((MR_Box) (Context_18));
                  }
                  mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[0]), Var_146, PredIds_42, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_61)), &conv4_STATE_VARIABLE_ModuleInfo_62, ((MR_Box) (STATE_VARIABLE_Specs_0_65)), &conv3_STATE_VARIABLE_Specs_66);
                  *STATE_VARIABLE_ModuleInfo_62 = ((MR_Word) (conv4_STATE_VARIABLE_ModuleInfo_62));
                  *STATE_VARIABLE_Specs_66 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_66));
                }
              }
              else
              {
                *STATE_VARIABLE_Specs_66 = STATE_VARIABLE_Specs_0_65;
                *STATE_VARIABLE_ModuleInfo_62 = STATE_VARIABLE_ModuleInfo_0_61;
              }
              *STATE_VARIABLE_RevPragmaTabled_60 = STATE_VARIABLE_RevPragmaTabled_0_59;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word FTInfo_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_17, (MR_Integer) 1))));
              MR_Word PredStatus_158;

              hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_15, &PredStatus_158);
              hlds__make_hlds__add_pragma__add_pragma_fact_table_7_p_0(FTInfo_50, PredStatus_158, Context_18, STATE_VARIABLE_ModuleInfo_0_61, STATE_VARIABLE_ModuleInfo_62, STATE_VARIABLE_Specs_0_65, STATE_VARIABLE_Specs_66);
              *STATE_VARIABLE_RevPragmaTabled_60 = STATE_VARIABLE_RevPragmaTabled_0_59;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TabledInfo_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_17, (MR_Integer) 1))));
              MR_Word ItemPragmaTabledInfo_52;
              MR_Word TabledSectionItem_53;

              {
                ItemPragmaTabledInfo_52 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ItemPragmaTabledInfo_52, 0) = ((MR_Box) (TabledInfo_51));
                MR_hl_field(MR_mktag(0), ItemPragmaTabledInfo_52, 1) = ((MR_Box) (Context_18));
                MR_hl_field(MR_mktag(0), ItemPragmaTabledInfo_52, 2) = ((MR_Box) (SeqNum_19));
              }
              {
                TabledSectionItem_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TabledSectionItem_53, 0) = ((MR_Box) (ItemMercuryStatus_15));
                MR_hl_field(MR_mktag(0), TabledSectionItem_53, 1) = ((MR_Box) (ItemPragmaTabledInfo_52));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_RevPragmaTabled_60 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TabledSectionItem_53));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevPragmaTabled_0_59));
              }
              *STATE_VARIABLE_ModuleInfo_62 = STATE_VARIABLE_ModuleInfo_0_61;
              *STATE_VARIABLE_Specs_66 = STATE_VARIABLE_Specs_0_65;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word PredSymNameArity_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_17, (MR_Integer) 1))));
              MR_Word PredStatus_159;

              hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_15, &PredStatus_159);
              hlds__make_hlds__add_pragma__add_pred_marker_10_p_0((MR_String) "inline", PredSymNameArity_54, PredStatus_159, Context_18, (MR_Integer) 6, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[16])), STATE_VARIABLE_ModuleInfo_0_61, STATE_VARIABLE_ModuleInfo_62, STATE_VARIABLE_Specs_0_65, STATE_VARIABLE_Specs_66);
              *STATE_VARIABLE_RevPragmaTabled_60 = STATE_VARIABLE_RevPragmaTabled_0_59;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word PredStatus_160;
              MR_Word PredSymNameArity_161 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_17, (MR_Integer) 1))));

              hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_15, &PredStatus_160);
              hlds__make_hlds__add_pragma__add_pred_marker_10_p_0((MR_String) "no_inline", PredSymNameArity_161, PredStatus_160, Context_18, (MR_Integer) 7, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[164])), STATE_VARIABLE_ModuleInfo_0_61, STATE_VARIABLE_ModuleInfo_62, STATE_VARIABLE_Specs_0_65, STATE_VARIABLE_Specs_66);
              *STATE_VARIABLE_RevPragmaTabled_60 = STATE_VARIABLE_RevPragmaTabled_0_59;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word PredStatus_162;
              MR_Word PredSymNameArity_163 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_17, (MR_Integer) 1))));

              hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_15, &PredStatus_162);
              hlds__make_hlds__add_pragma__add_pred_marker_10_p_0((MR_String) "consider_used", PredSymNameArity_163, PredStatus_162, Context_18, (MR_Integer) 9, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_61, STATE_VARIABLE_ModuleInfo_62, STATE_VARIABLE_Specs_0_65, STATE_VARIABLE_Specs_66);
              *STATE_VARIABLE_RevPragmaTabled_60 = STATE_VARIABLE_RevPragmaTabled_0_59;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word PredNameArity_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_17, (MR_Integer) 1))));
              MR_Word STATE_VARIABLE_ModuleInfo_94_94;
              MR_Word STATE_VARIABLE_Specs_95_95;
              MR_Word PredStatus_164;

              hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_15, &PredStatus_164);
              hlds__make_hlds__add_pragma__add_pred_marker_10_p_0((MR_String) "mode_check_clauses", PredNameArity_55, PredStatus_164, Context_18, (MR_Integer) 22, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_61, &STATE_VARIABLE_ModuleInfo_94_94, STATE_VARIABLE_Specs_0_65, &STATE_VARIABLE_Specs_95_95);
              hlds__make_hlds__add_pragma__add_pred_marker_10_p_0((MR_String) "mode_check_clauses", PredNameArity_55, PredStatus_164, Context_18, (MR_Integer) 7, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[164])), STATE_VARIABLE_ModuleInfo_94_94, STATE_VARIABLE_ModuleInfo_62, STATE_VARIABLE_Specs_95_95, STATE_VARIABLE_Specs_66);
              *STATE_VARIABLE_RevPragmaTabled_60 = STATE_VARIABLE_RevPragmaTabled_0_59;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word PredStatus_165;
              MR_Word PredNameArity_166 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_17, (MR_Integer) 1))));

              hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_15, &PredStatus_165);
              hlds__make_hlds__add_pragma__add_pred_marker_10_p_0((MR_String) "no_determinism_warning", PredNameArity_166, PredStatus_165, Context_18, (MR_Integer) 5, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_61, STATE_VARIABLE_ModuleInfo_62, STATE_VARIABLE_Specs_0_65, STATE_VARIABLE_Specs_66);
              *STATE_VARIABLE_RevPragmaTabled_60 = STATE_VARIABLE_RevPragmaTabled_0_59;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word TailrecWarningPragma_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_17, (MR_Integer) 1))));

              hlds__make_hlds__add_pragma__add_pragma_require_tail_rec_6_p_0(TailrecWarningPragma_56, Context_18, STATE_VARIABLE_ModuleInfo_0_61, STATE_VARIABLE_ModuleInfo_62, STATE_VARIABLE_Specs_0_65, STATE_VARIABLE_Specs_66);
              *STATE_VARIABLE_RevPragmaTabled_60 = STATE_VARIABLE_RevPragmaTabled_0_59;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word PredStatus_167;
              MR_Word PredNameArity_168 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_17, (MR_Integer) 1))));

              hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_15, &PredStatus_167);
              hlds__make_hlds__add_pragma__add_pred_marker_10_p_0((MR_String) "promise_pure", PredNameArity_168, PredStatus_167, Context_18, (MR_Integer) 15, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_61, STATE_VARIABLE_ModuleInfo_62, STATE_VARIABLE_Specs_0_65, STATE_VARIABLE_Specs_66);
              *STATE_VARIABLE_RevPragmaTabled_60 = STATE_VARIABLE_RevPragmaTabled_0_59;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word PredStatus_169;
              MR_Word PredNameArity_170 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_17, (MR_Integer) 1))));

              hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_15, &PredStatus_169);
              hlds__make_hlds__add_pragma__add_pred_marker_10_p_0((MR_String) "promise_semipure", PredNameArity_170, PredStatus_169, Context_18, (MR_Integer) 16, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_61, STATE_VARIABLE_ModuleInfo_62, STATE_VARIABLE_Specs_0_65, STATE_VARIABLE_Specs_66);
              *STATE_VARIABLE_RevPragmaTabled_60 = STATE_VARIABLE_RevPragmaTabled_0_59;
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word PredStatus_171;
              MR_Word PredNameArity_172 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_17, (MR_Integer) 1))));

              hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_15, &PredStatus_171);
              hlds__make_hlds__add_pragma__add_pred_marker_10_p_0((MR_String) "promise_equivalent_clauses", PredNameArity_172, PredStatus_171, Context_18, (MR_Integer) 17, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_61, STATE_VARIABLE_ModuleInfo_62, STATE_VARIABLE_Specs_0_65, STATE_VARIABLE_Specs_66);
              *STATE_VARIABLE_RevPragmaTabled_60 = STATE_VARIABLE_RevPragmaTabled_0_59;
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word RFSInfo_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_17, (MR_Integer) 1))));
              MR_Word FeatureSet_58 = (MR_Word) (RFSInfo_57);

              hlds__make_hlds__add_pragma__check_required_feature_set_7_p_0(FeatureSet_58, ItemMercuryStatus_15, Context_18, STATE_VARIABLE_ModuleInfo_0_61, STATE_VARIABLE_ModuleInfo_62, STATE_VARIABLE_Specs_0_65, STATE_VARIABLE_Specs_66);
              *STATE_VARIABLE_RevPragmaTabled_60 = STATE_VARIABLE_RevPragmaTabled_0_59;
            }
            break;
        }
        break;
    }
    *STATE_VARIABLE_QualInfo_64 = STATE_VARIABLE_QualInfo_0_63;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_fact_table_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_error_util__project_user_arity_int_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_fact_table_7_p_0(
  MR_Word FTInfo_8,
  MR_Word PredStatus_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * STATE_VARIABLE_ModuleInfo_41,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43)
{
  {
    MR_Word PredSpec_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FTInfo_8, (MR_Integer) 0))));
    MR_String FileName_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), FTInfo_8, (MR_Integer) 1))));
    MR_Word PFU_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredSpec_13, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word PredSymName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSpec_13, (MR_Integer) 1))));
    MR_Word UserArity_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSpec_13, (MR_Integer) 2))));
    MR_Word PredIds_18;
    MR_Word OtherUserArities_19;

    hlds__make_hlds__add_pragma__get_matching_pred_ids_6_p_0(STATE_VARIABLE_ModuleInfo_0_40, PFU_15, PredSymName_16, UserArity_17, &PredIds_18, &OtherUserArities_19);
    if ((PredIds_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer UseArityInt_20 = (MR_Integer) (UserArity_17);
      MR_Word OtherArities_21;

      OtherArities_21 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_2[6]), OtherUserArities_19);
      hlds__make_hlds_error__report_undefined_pred_or_func_error_8_p_0((MR_Word) ((MR_Unsigned) 0U), PredSymName_16, UseArityInt_20, OtherArities_21, Context_10, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[97])), STATE_VARIABLE_Specs_0_42, STATE_VARIABLE_Specs_43);
      *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
    }
    else
    {
      MR_Word HeadPredId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_18, (MR_Integer) 0))));
      MR_Word TailPredIds_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_18, (MR_Integer) 1))));

      if ((TailPredIds_23 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word PredInfo0_25;
        MR_String C_HeaderCode_27;
        MR_Integer PrimaryProcId_28;
        MR_Word PredInfo_29;
        MR_Word ProcTable_30;
        MR_Word ArgTypes_31;
        MR_Word ProcIds_32;
        MR_Word PredOrFunc_33;
        MR_Word ForeignDeclCode_34;
        MR_Word STATE_VARIABLE_ModuleInfo_72_72;
        MR_Word Var_75;
        MR_Word STATE_VARIABLE_ModuleInfo_76_76;
        MR_Word STATE_VARIABLE_ModuleInfo_77_77;

        hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_40, HeadPredId_22, &PredInfo0_25);
        ll_backend__fact_table__fact_table_compile_facts_11_p_0(STATE_VARIABLE_ModuleInfo_0_40, PredSymName_16, UserArity_17, FileName_14, Context_10, &C_HeaderCode_27, &PrimaryProcId_28, PredInfo0_25, &PredInfo_29);
        hlds__hlds_module__module_info_set_pred_info_4_p_0(HeadPredId_22, PredInfo_29, STATE_VARIABLE_ModuleInfo_0_40, &STATE_VARIABLE_ModuleInfo_72_72);
        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_29, &ProcTable_30);
        hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_29, &ArgTypes_31);
        ProcIds_32 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_29);
        PredOrFunc_33 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_29);
        {
          Var_75 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (C_HeaderCode_27));
        }
        {
          ForeignDeclCode_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ForeignDeclCode_34, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
          MR_hl_field(MR_mktag(0), ForeignDeclCode_34, 1) = ((MR_Box) (Var_75));
          MR_hl_field(MR_mktag(0), ForeignDeclCode_34, 2) = ((MR_Box) (Context_10));
        }
        hlds__hlds_module__module_add_foreign_decl_code_aux_3_p_0(ForeignDeclCode_34, STATE_VARIABLE_ModuleInfo_72_72, &STATE_VARIABLE_ModuleInfo_76_76);
        hlds__hlds_module__module_add_fact_table_file_3_p_0(FileName_14, STATE_VARIABLE_ModuleInfo_76_76, &STATE_VARIABLE_ModuleInfo_77_77);
        hlds__make_hlds__add_pragma__add_fact_table_procs_13_p_0(ProcIds_32, PrimaryProcId_28, ProcTable_30, PredOrFunc_33, PredSymName_16, UserArity_17, ArgTypes_31, PredStatus_9, Context_10, STATE_VARIABLE_ModuleInfo_77_77, STATE_VARIABLE_ModuleInfo_41, STATE_VARIABLE_Specs_0_42, STATE_VARIABLE_Specs_43);
      }
      else
      {
        MR_Integer UserArityInt_37 = (MR_Integer) (UserArity_17);
        MR_Word Pieces_38;
        MR_Word Spec_39;
        MR_Word Var_46;
        MR_Word Var_49;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_54;

        {
          Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (PredSymName_16));
          MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (UserArityInt_37));
        }
        {
          Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (Var_54));
        }
        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
          MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[102])));
        }
        {
          Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[163])));
          MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_52));
        }
        {
          Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[162])));
          MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_49));
        }
        {
          Pieces_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[161])));
          MR_hl_field(MR_mktag(1), Pieces_38, 1) = ((MR_Box) (Var_46));
        }
        {
          Spec_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_39, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_fact_table\'/7"));
          MR_hl_field(MR_mktag(1), Spec_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_39, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(1), Spec_39, 3) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(1), Spec_39, 4) = ((MR_Box) (Pieces_38));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_43 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_39));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_42));
        }
        *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
      }
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_fact_table_procs_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer PrimaryProcId_2,
  MR_Word ProcTable_3,
  MR_Word PredOrFunc_4,
  MR_Word SymName_5,
  MR_Word Arity_6,
  MR_Word ArgTypes_7,
  MR_Word PredStatus_8,
  MR_Word Context_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * STATE_VARIABLE_ModuleInfo_11,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_13 = STATE_VARIABLE_Specs_0_12;
      *STATE_VARIABLE_ModuleInfo_11 = STATE_VARIABLE_ModuleInfo_0_10;
    }
    else
    {
      MR_Integer ProcId_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ProcIds_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ModuleInfo_44_44;
      MR_Word STATE_VARIABLE_Specs_45_45;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_10;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_12;

      hlds__make_hlds__add_pragma__add_fact_table_proc_13_p_0(ProcId_28, PrimaryProcId_2, ProcTable_3, PredOrFunc_4, SymName_5, Arity_6, ArgTypes_7, PredStatus_8, Context_9, STATE_VARIABLE_ModuleInfo_0_10, &STATE_VARIABLE_ModuleInfo_44_44, STATE_VARIABLE_Specs_0_12, &STATE_VARIABLE_Specs_45_45);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ProcIds_29;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_10 = STATE_VARIABLE_ModuleInfo_44_44;
      next_value_of_STATE_VARIABLE_Specs_0_12 = STATE_VARIABLE_Specs_45_45;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_10 = next_value_of_STATE_VARIABLE_ModuleInfo_0_10;
      STATE_VARIABLE_Specs_0_12 = next_value_of_STATE_VARIABLE_Specs_0_12;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_fact_table_proc_13_p_0(
  MR_Integer ProcId_14,
  MR_Integer PrimaryProcId_15,
  MR_Word ProcTable_16,
  MR_Word PredOrFunc_17,
  MR_Word SymName_18,
  MR_Word UserArity_19,
  MR_Word ArgTypes_20,
  MR_Word PredStatus_21,
  MR_Word Context_22,
  MR_Word STATE_VARIABLE_ModuleInfo_0_46,
  MR_Word * STATE_VARIABLE_ModuleInfo_47,
  MR_Word STATE_VARIABLE_Specs_0_48,
  MR_Word * STATE_VARIABLE_Specs_49)
{
  {
    MR_bool succeeded;
    MR_Word ProcInfo_25;
    MR_Word ProgVarSet0_26;
    MR_Integer PredFormArityInt_27;
    MR_Word Vars_28;
    MR_Word ProgVarSet_29;
    MR_Word Modes_30;
    MR_Word InstVarSet_31;
    MR_Word PragmaVars_32;
    MR_String C_ProcCode_34;
    MR_String C_ExtraCode_35;
    MR_Word Attrs0_36;
    MR_Word Attrs1_37;
    MR_Word Attrs2_38;
    MR_Word Attrs3_39;
    MR_Word Attrs_40;
    MR_Word FCInfo_42;
    MR_Word PFU_44;
    MR_Word PredSpec_45;
    MR_Word Var_50;
    MR_Word Var_58;
    MR_Word STATE_VARIABLE_ModuleInfo_60_60;
    MR_Word STATE_VARIABLE_Specs_61_61;
    MR_Word STATE_VARIABLE_ModuleInfo_64_64;
    MR_Box conv0_ProcInfo_25;

    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_16, ((MR_Box) (ProcId_14)), &conv0_ProcInfo_25);
    ProcInfo_25 = ((MR_Word) (conv0_ProcInfo_25));
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &ProgVarSet0_26);
    parse_tree__prog_util__user_arity_pred_form_arity_3_p_0(PredOrFunc_17, UserArity_19, &Var_50);
    PredFormArityInt_27 = (MR_Integer) (Var_50);
    mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PredFormArityInt_27, &Vars_28, ProgVarSet0_26, &ProgVarSet_29);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_25, &Modes_30);
    hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_25, &InstVarSet_31);
    hlds__make_hlds__add_pragma__fact_table_pragma_vars_4_p_0(Vars_28, Modes_30, ProgVarSet_29, &PragmaVars_32);
    ll_backend__fact_table__fact_table_generate_c_code_11_p_0(STATE_VARIABLE_ModuleInfo_0_46, SymName_18, PragmaVars_32, ProcId_14, PrimaryProcId_15, ProcInfo_25, ArgTypes_20, &C_ProcCode_34, &C_ExtraCode_35);
    Attrs0_36 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
    parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, Attrs0_36, &Attrs1_37);
    parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, Attrs1_37, &Attrs2_38);
    parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 0, Attrs2_38, &Attrs3_39);
    parse_tree__prog_data_foreign__add_extra_attribute_3_p_0((MR_Word) ((MR_Unsigned) 0U), Attrs3_39, &Attrs_40);
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (C_ProcCode_34));
      MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      FCInfo_42 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FCInfo_42, 0) = ((MR_Box) (Attrs_40));
      MR_hl_field(MR_mktag(0), FCInfo_42, 1) = ((MR_Box) (SymName_18));
      MR_hl_field(MR_mktag(0), FCInfo_42, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
      MR_hl_field(MR_mktag(0), FCInfo_42, 3) = ((MR_Box) (PragmaVars_32));
      MR_hl_field(MR_mktag(0), FCInfo_42, 4) = ((MR_Box) (ProgVarSet_29));
      MR_hl_field(MR_mktag(0), FCInfo_42, 5) = ((MR_Box) (InstVarSet_31));
      MR_hl_field(MR_mktag(0), FCInfo_42, 6) = ((MR_Box) (Var_58));
    }
    hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(FCInfo_42, PredStatus_21, Context_22, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_46, &STATE_VARIABLE_ModuleInfo_60_60, STATE_VARIABLE_Specs_0_48, &STATE_VARIABLE_Specs_61_61);
    succeeded = (strcmp(C_ExtraCode_35, (MR_String) "") == 0);
    if (succeeded)
      STATE_VARIABLE_ModuleInfo_64_64 = STATE_VARIABLE_ModuleInfo_60_60;
    else
    {
      MR_Word ForeignBodyCode_43;
      MR_Word Var_63;

      {
        Var_63 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (C_ExtraCode_35));
      }
      {
        ForeignBodyCode_43 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ForeignBodyCode_43, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), ForeignBodyCode_43, 1) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(0), ForeignBodyCode_43, 2) = ((MR_Box) (Context_22));
      }
      hlds__hlds_module__module_add_foreign_body_code_3_p_0(ForeignBodyCode_43, STATE_VARIABLE_ModuleInfo_60_60, &STATE_VARIABLE_ModuleInfo_64_64);
    }
    switch (PredOrFunc_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        PFU_44 = (MR_Integer) 1;
        break;
      case (MR_Integer) 0:
        PFU_44 = (MR_Integer) 0;
        break;
    }
    {
      PredSpec_45 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredSpec_45, 0) = (MR_Box) ((MR_Unsigned) (PFU_44));
      MR_hl_field(MR_mktag(0), PredSpec_45, 1) = ((MR_Box) (SymName_18));
      MR_hl_field(MR_mktag(0), PredSpec_45, 2) = ((MR_Box) (UserArity_19));
    }
    hlds__make_hlds__add_pragma__add_pred_marker_10_p_0((MR_String) "fact_table", PredSpec_45, PredStatus_21, Context_22, (MR_Integer) 7, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_64_64, STATE_VARIABLE_ModuleInfo_47, STATE_VARIABLE_Specs_61_61, STATE_VARIABLE_Specs_49);
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__fact_table_pragma_vars_4_p_0(
  MR_Word Vars0_5,
  MR_Word Modes0_6,
  MR_Word VarSet_7,
  MR_Word * PragmaVars0_8)
{
  {
    MR_bool succeeded = (Vars0_5 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Var_9;
    MR_Word VarsTail_10;
    MR_Word Mode_11;
    MR_Word ModesTail_12;

    if (succeeded)
    {
      Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Vars0_5, (MR_Integer) 0))));
      VarsTail_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Vars0_5, (MR_Integer) 1))));
      succeeded = (Modes0_6 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Mode_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modes0_6, (MR_Integer) 0))));
        ModesTail_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modes0_6, (MR_Integer) 1))));
      }
    }
    if (succeeded)
    {
      MR_String Name_13;
      MR_Word PragmaVar_14;
      MR_Word PragmaVarsTail_15;

      mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_7, Var_9, &Name_13);
      {
        PragmaVar_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PragmaVar_14, 0) = ((MR_Box) (Var_9));
        MR_hl_field(MR_mktag(0), PragmaVar_14, 1) = ((MR_Box) (Name_13));
        MR_hl_field(MR_mktag(0), PragmaVar_14, 2) = ((MR_Box) (Mode_11));
        MR_hl_field(MR_mktag(0), PragmaVar_14, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      hlds__make_hlds__add_pragma__fact_table_pragma_vars_4_p_0(VarsTail_10, ModesTail_12, VarSet_7, &PragmaVarsTail_15);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *PragmaVars0_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PragmaVar_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PragmaVarsTail_15));
      }
    }
    else
      *PragmaVars0_8 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__check_required_feature_set_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Specs_24;

    hlds__make_hlds__add_pragma__check_required_feature_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_24);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_24));
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__check_required_feature_set_7_p_0(
  MR_Word FeatureSet_8,
  MR_Word ItemMercuryStatus_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  {
    if (((MR_tag((MR_Word) ItemMercuryStatus_9)) == (MR_Integer) 1))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_pragma.check_required_feature_set\'/7", (MR_String) "imported require_feature_set pragma");
        return;
      }
    else
    {
      MR_Word Globals_15;
      MR_Word Var_20;
      MR_Box conv1_STATE_VARIABLE_Specs_19;

      hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_16, &Globals_15);
      {
        Var_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_9[0]));
        MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__check_required_feature_set_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (Globals_15));
        MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (Context_10));
      }
      mercury__set__fold_4_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_required_feature_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[0]), Var_20, FeatureSet_8, ((MR_Box) (STATE_VARIABLE_Specs_0_18)), &conv1_STATE_VARIABLE_Specs_19);
      *STATE_VARIABLE_Specs_19 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_19));
    }
    *STATE_VARIABLE_ModuleInfo_17 = STATE_VARIABLE_ModuleInfo_0_16;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_require_tail_rec_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_PredInfo_30;
    MR_Word conv1_STATE_VARIABLE_Specs_32;

    hlds__make_hlds__add_pragma__add_pragma_require_tail_rec_proc_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_PredInfo_30, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Specs_32);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_PredInfo_30));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Specs_32));
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_require_tail_rec_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_error_util__project_user_arity_int_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_require_tail_rec_6_p_0(
  MR_Word Pragma_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * STATE_VARIABLE_ModuleInfo_40,
  MR_Word STATE_VARIABLE_Specs_0_41,
  MR_Word * STATE_VARIABLE_Specs_42)
{
  {
    MR_bool succeeded;
    MR_Word PredSpec_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Pragma_7, (MR_Integer) 0))));
    MR_Word RequireTailrec_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Pragma_7, (MR_Integer) 1))));
    MR_Word PFUMM_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSpec_11, (MR_Integer) 0))));
    MR_Word PredSymName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSpec_11, (MR_Integer) 1))));
    MR_Word MaybePredOrFunc_15;
    MR_Word UserArity_16;
    MR_Word MaybeModes_17;
    MR_Integer UserArityInt_18;
    MR_Word PFU_19;
    MR_Word PredIds_20;
    MR_Word OtherUserArities_21;

    parse_tree__prog_item__pfumm_to_maybe_pf_arity_maybe_modes_4_p_0(PFUMM_13, &MaybePredOrFunc_15, &UserArity_16, &MaybeModes_17);
    UserArityInt_18 = (MR_Integer) (UserArity_16);
    PFU_19 = parse_tree__prog_item__maybe_pred_or_func_to_pfu_1_f_0(MaybePredOrFunc_15);
    hlds__make_hlds__add_pragma__get_matching_pred_ids_6_p_0(STATE_VARIABLE_ModuleInfo_0_39, PFU_19, PredSymName_14, UserArity_16, &PredIds_20, &OtherUserArities_21);
    if ((PredIds_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word OtherArities_23;

      OtherArities_23 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_2[5]), OtherUserArities_21);
      hlds__make_hlds_error__report_undefined_pred_or_func_error_8_p_0(MaybePredOrFunc_15, PredSymName_14, UserArityInt_18, OtherArities_23, Context_8, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[33])), STATE_VARIABLE_Specs_0_41, STATE_VARIABLE_Specs_42);
      *STATE_VARIABLE_ModuleInfo_40 = STATE_VARIABLE_ModuleInfo_0_39;
    }
    else
    {
      MR_Word Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_20, (MR_Integer) 1))));
      MR_Word Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_20, (MR_Integer) 0))));

      if ((Var_114 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word SNA_25;
        MR_Word PredInfo0_26;
        MR_Word Procs0_27;
        MR_Word Procs_28;
        MR_Word PredInfo_32;

        {
          SNA_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SNA_25, 0) = ((MR_Box) (PredSymName_14));
          MR_hl_field(MR_mktag(0), SNA_25, 1) = ((MR_Box) (UserArityInt_18));
        }
        hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_39, Var_115, &PredInfo0_26);
        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_26, &Procs0_27);
        mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs0_27, &Procs_28);
        if ((MaybeModes_17 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_60;
          MR_Box conv4_PredInfo_32;
          MR_Box conv3_STATE_VARIABLE_Specs_42;

          {
            Var_60 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_8[0]));
            MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_require_tail_rec_6_p_0_2));
            MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (RequireTailrec_12));
            MR_hl_field(MR_mktag(0), Var_60, 4) = ((MR_Box) (Context_8));
            MR_hl_field(MR_mktag(0), Var_60, 5) = ((MR_Box) (MaybePredOrFunc_15));
            MR_hl_field(MR_mktag(0), Var_60, 6) = ((MR_Box) (SNA_25));
          }
          mercury__list__foldl2_6_p_0((MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_2[0]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[0]), Var_60, Procs_28, ((MR_Box) (PredInfo0_26)), &conv4_PredInfo_32, ((MR_Box) (STATE_VARIABLE_Specs_0_41)), &conv3_STATE_VARIABLE_Specs_42);
          PredInfo_32 = ((MR_Word) (conv4_PredInfo_32));
          *STATE_VARIABLE_Specs_42 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_42));
        }
        else
        {
          MR_Word Modes_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModes_17, (MR_Integer) 0))));
          MR_Integer ProcId_30;

          succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(STATE_VARIABLE_ModuleInfo_0_39, Procs_28, Modes_29, &ProcId_30);
          if (succeeded)
          {
            MR_Word Proc_31;
            MR_Word Var_62;
            MR_Box conv5_Proc_31;

            mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs0_27, ((MR_Box) (ProcId_30)), &conv5_Proc_31);
            Proc_31 = ((MR_Word) (conv5_Proc_31));
            {
              Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (ProcId_30));
              MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (Proc_31));
            }
            hlds__make_hlds__add_pragma__add_pragma_require_tail_rec_proc_9_p_0(RequireTailrec_12, Context_8, MaybePredOrFunc_15, SNA_25, Var_62, PredInfo0_26, &PredInfo_32, STATE_VARIABLE_Specs_0_41, STATE_VARIABLE_Specs_42);
          }
          else
          {
            MR_Word PredOrFunc_33;
            MR_Word PFNameArity_34;
            MR_Word Spec_35;
            MR_Word Var_66;
            MR_Word Var_69;
            MR_Word Var_72;
            MR_Word Var_73;
            MR_Word Pieces_93;

            PredInfo_32 = PredInfo0_26;
            PredOrFunc_33 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_32);
            {
              PFNameArity_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PFNameArity_34, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_33));
              MR_hl_field(MR_mktag(0), PFNameArity_34, 1) = ((MR_Box) (PredSymName_14));
              MR_hl_field(MR_mktag(0), PFNameArity_34, 2) = ((MR_Box) (UserArity_16));
            }
            {
              Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) ((MR_Unsigned) 13U));
              MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (PFNameArity_34));
            }
            {
              Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
              MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[23])));
            }
            {
              Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[152])));
              MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_72));
            }
            {
              Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[160])));
              MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_69));
            }
            {
              Pieces_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_93, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[136])));
              MR_hl_field(MR_mktag(1), Pieces_93, 1) = ((MR_Box) (Var_66));
            }
            {
              Spec_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_35, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_require_tail_rec\'/6"));
              MR_hl_field(MR_mktag(1), Spec_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_35, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(MR_mktag(1), Spec_35, 3) = ((MR_Box) (Context_8));
              MR_hl_field(MR_mktag(1), Spec_35, 4) = ((MR_Box) (Pieces_93));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_42 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_35));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_41));
            }
          }
        }
        hlds__hlds_module__module_info_set_pred_info_4_p_0(Var_115, PredInfo_32, STATE_VARIABLE_ModuleInfo_0_39, STATE_VARIABLE_ModuleInfo_40);
      }
      else
      {
        MR_Word Spec_99;

        {
          Spec_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_99, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_require_tail_rec\'/6"));
          MR_hl_field(MR_mktag(1), Spec_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_99, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(1), Spec_99, 3) = ((MR_Box) (Context_8));
          MR_hl_field(MR_mktag(1), Spec_99, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[38])));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_42 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_99));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_41));
        }
        *STATE_VARIABLE_ModuleInfo_40 = STATE_VARIABLE_ModuleInfo_0_39;
      }
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_require_tail_rec_proc_9_p_0(
  MR_Word RequireTailrec_10,
  MR_Word Context_11,
  MR_Word MaybePredOrFunc_12,
  MR_Word SNA_13,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_PredInfo_0_29,
  MR_Word * STATE_VARIABLE_PredInfo_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  {
    MR_Integer ProcId_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 0))));
    MR_Word ProcInfo0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 1))));
    MR_Word MaybeRequireTailrecOrig_18;

    hlds__hlds_pred__proc_info_get_maybe_require_tailrec_info_2_p_0(ProcInfo0_15, &MaybeRequireTailrecOrig_18);
    if ((MaybeRequireTailrecOrig_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ProcInfo_28;

      hlds__hlds_pred__proc_info_set_require_tailrec_info_3_p_0(RequireTailrec_10, ProcInfo0_15, &ProcInfo_28);
      hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_14, ProcInfo_28, STATE_VARIABLE_PredInfo_0_29, STATE_VARIABLE_PredInfo_30);
      *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
    }
    else
    {
      MR_Word RequireTailrecOrig_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRequireTailrecOrig_18, (MR_Integer) 0))));
      MR_Word PorFPieces_20;
      MR_Word MainPieces_22;
      MR_Word ContextOrig_24;
      MR_Word Spec_27;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_67;

      if ((MaybePredOrFunc_12 == (MR_Word) ((MR_Unsigned) 0U)))
        PorFPieces_20 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word PredOrFunc_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredOrFunc_12, (MR_Integer) 0))));
        MR_Word Var_34;
        MR_String Var_35;

        Var_35 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_21);
        {
          Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (Var_35));
        }
        {
          PorFPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), PorFPieces_20, 0) = ((MR_Box) (Var_34));
          MR_hl_field(MR_mktag(1), PorFPieces_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (SNA_13));
      }
      {
        Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
        MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[45])));
      }
      Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PorFPieces_20, Var_48);
      MainPieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[43])), Var_47);
      if (((MR_tag((MR_Word) RequireTailrecOrig_19)) == (MR_Integer) 1))
        ContextOrig_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RequireTailrecOrig_19, (MR_Integer) 1))));
      else
        ContextOrig_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RequireTailrecOrig_19, (MR_Integer) 0))));
      {
        Var_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (Context_11));
        MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (MainPieces_22));
      }
      {
        Var_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (ContextOrig_24));
        MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[47])));
      }
      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
        MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_66));
      }
      {
        Spec_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_27, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_require_tail_rec_proc\'/9"));
        MR_hl_field(MR_mktag(0), Spec_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_27, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(0), Spec_27, 3) = ((MR_Box) (Var_64));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_32 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_27));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_31));
      }
      *STATE_VARIABLE_PredInfo_30 = STATE_VARIABLE_PredInfo_0_29;
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_foreign_proc_export_6_p_0(
  MR_Word FPEInfo_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * STATE_VARIABLE_ModuleInfo_40,
  MR_Word STATE_VARIABLE_Specs_0_41,
  MR_Word * STATE_VARIABLE_Specs_42)
{
  {
    MR_bool succeeded;
    MR_Word Origin_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPEInfo_7, (MR_Integer) 0))));
    MR_Word Lang_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FPEInfo_7, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word PrednameModesPF_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPEInfo_7, (MR_Integer) 2))));
    MR_String ExportedName_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), FPEInfo_7, (MR_Integer) 3))));
    MR_Word PredOrFunc_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PrednameModesPF_13, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word SymName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PrednameModesPF_13, (MR_Integer) 1))));
    MR_Word Modes_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PrednameModesPF_13, (MR_Integer) 2))));
    MR_Integer PredFormArityInt_18;
    MR_Word UserArity_19;
    MR_Word MaybePredId_20;
    MR_Word Var_43;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_17, &PredFormArityInt_18);
    Var_43 = (MR_Word) (PredFormArityInt_18);
    parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_15, &UserArity_19, Var_43);
    hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_39, (MR_Integer) 1, (MR_Integer) 1, Context_8, (MR_String) "foreign_export", PredOrFunc_15, SymName_16, UserArity_19, &MaybePredId_20);
    if (((MR_tag((MR_Word) MaybePredId_20)) == (MR_Integer) 0))
    {
      MR_Word Specs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybePredId_20, (MR_Integer) 0))));

      if ((Origin_11 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Specs_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Specs_10, STATE_VARIABLE_Specs_0_41);
      else
        *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_0_41;
      *STATE_VARIABLE_ModuleInfo_40 = STATE_VARIABLE_ModuleInfo_0_39;
    }
    else
    {
      MR_Word PredId_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredId_20, (MR_Integer) 0))));
      MR_Word PredInfo_22;
      MR_Word Procs_23;
      MR_Word ExistingProcs_24;
      MR_Integer ProcId_25;

      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_39, PredId_21, &PredInfo_22);
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_22, &Procs_23);
      mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_23, &ExistingProcs_24);
      succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(STATE_VARIABLE_ModuleInfo_0_39, ExistingProcs_24, Modes_17, &ProcId_25);
      if (succeeded)
      {
        MR_Word ProcInfo0_26;
        MR_Word MaybeDetism_27;
        MR_Box conv0_ProcInfo0_26;
        MR_Word Detism_28;

        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_23, ((MR_Box) (ProcId_25)), &conv0_ProcInfo0_26);
        ProcInfo0_26 = ((MR_Word) (conv0_ProcInfo0_26));
        hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo0_26, &MaybeDetism_27);
        succeeded = (MaybeDetism_27 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Detism_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDetism_27, (MR_Integer) 0))));
          switch (Detism_28) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 3:
              succeeded = MR_TRUE;
              break;
          }
        }
        if (succeeded)
        {
          MR_Word Pieces_29;
          MR_Word Spec_30;
          MR_Word Var_50;
          MR_Word Var_53;
          MR_Word Var_56;
          MR_Word Var_59;
          MR_Word Var_62;
          MR_Word Var_63;
          MR_String Var_64;

          Var_64 = parse_tree__prog_out__determinism_to_string_1_f_0(Detism_28);
          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_63, 0) = ((MR_Box) (Var_64));
          }
          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
            MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[23])));
          }
          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[159])));
            MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_62));
          }
          {
            Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[158])));
            MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_59));
          }
          {
            Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[139])));
            MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
          }
          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[157])));
            MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_53));
          }
          {
            Pieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[136])));
            MR_hl_field(MR_mktag(1), Pieces_29, 1) = ((MR_Box) (Var_50));
          }
          {
            Spec_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_30, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_foreign_proc_export\'/6"));
            MR_hl_field(MR_mktag(1), Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(1), Spec_30, 3) = ((MR_Box) (Context_8));
            MR_hl_field(MR_mktag(1), Spec_30, 4) = ((MR_Box) (Pieces_29));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_42 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_30));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_41));
          }
          *STATE_VARIABLE_ModuleInfo_40 = STATE_VARIABLE_ModuleInfo_0_39;
        }
        else
        {
          MR_Word Globals_31;
          MR_Word ForeignLangs_32;
          MR_Word ProcInfo_36;
          MR_Word STATE_VARIABLE_ModuleInfo_75_75;

          hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_39, &Globals_31);
          libs__globals__get_backend_foreign_languages_2_p_0(Globals_31, &ForeignLangs_32);
          succeeded = mercury__list__member_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_12)), ForeignLangs_32);
          if (succeeded)
          {
            MR_Word PragmaExportedProcs0_33;
            MR_Word NewExportedProc_34;
            MR_Word PragmaExportedProcs_35;

            hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(STATE_VARIABLE_ModuleInfo_0_39, &PragmaExportedProcs0_33);
            {
              NewExportedProc_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), NewExportedProc_34, 0) = (MR_Box) ((MR_Unsigned) (Lang_12));
              MR_hl_field(MR_mktag(0), NewExportedProc_34, 1) = ((MR_Box) (PredId_21));
              MR_hl_field(MR_mktag(0), NewExportedProc_34, 2) = ((MR_Box) (ProcId_25));
              MR_hl_field(MR_mktag(0), NewExportedProc_34, 3) = ((MR_Box) (ExportedName_14));
              MR_hl_field(MR_mktag(0), NewExportedProc_34, 4) = ((MR_Box) (Context_8));
            }
            PragmaExportedProcs_35 = mercury__cord__snoc_2_f_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0), PragmaExportedProcs0_33, ((MR_Box) (NewExportedProc_34)));
            hlds__hlds_module__module_info_set_pragma_exported_procs_3_p_0(PragmaExportedProcs_35, STATE_VARIABLE_ModuleInfo_0_39, &STATE_VARIABLE_ModuleInfo_75_75);
          }
          else
            STATE_VARIABLE_ModuleInfo_75_75 = STATE_VARIABLE_ModuleInfo_0_39;
          hlds__hlds_pred__proc_info_set_has_any_foreign_exports_3_p_0((MR_Integer) 1, ProcInfo0_26, &ProcInfo_36);
          hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_21, ProcId_25, PredInfo_22, ProcInfo_36, STATE_VARIABLE_ModuleInfo_75_75, STATE_VARIABLE_ModuleInfo_40);
          *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_0_41;
        }
      }
      else
      {
        if ((Origin_11 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Integer UserArityInt_37 = (MR_Integer) (UserArity_19);

          hlds__make_hlds_error__report_undefined_mode_error_6_p_0(SymName_16, UserArityInt_37, Context_8, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[27])), STATE_VARIABLE_Specs_0_41, STATE_VARIABLE_Specs_42);
        }
        else
          *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_0_41;
        *STATE_VARIABLE_ModuleInfo_40 = STATE_VARIABLE_ModuleInfo_0_39;
      }
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_decl_pragma_7_p_0(
  MR_Word SectionItem_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * STATE_VARIABLE_ModuleInfo_28,
  MR_Word STATE_VARIABLE_QualInfo_0_29,
  MR_Word * STATE_VARIABLE_QualInfo_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  {
    MR_Word ItemMercuryStatus_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionItem_8, (MR_Integer) 0))));
    MR_Word ItemPragmaInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionItem_8, (MR_Integer) 1))));
    MR_Word Pragma_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragmaInfo_13, (MR_Integer) 0))));
    MR_Word Context_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragmaInfo_13, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) Pragma_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ObsoletePredInfo_17 = (MR_Word) ((MR_Word) (Pragma_14));
          MR_Word PredStatus_18;

          hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_12, &PredStatus_18);
          hlds__make_hlds__add_pragma__mark_pred_as_obsolete_7_p_0(ObsoletePredInfo_17, PredStatus_18, Context_15, STATE_VARIABLE_ModuleInfo_0_27, STATE_VARIABLE_ModuleInfo_28, STATE_VARIABLE_Specs_0_31, STATE_VARIABLE_Specs_32);
          *STATE_VARIABLE_QualInfo_30 = STATE_VARIABLE_QualInfo_0_29;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ObsoleteProcInfo_19 = (MR_Word) (MR_body((MR_Word) (Pragma_14), (MR_Integer) 1));
          MR_Word PredStatus_77;

          hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_12, &PredStatus_77);
          hlds__make_hlds__add_pragma__mark_proc_as_obsolete_7_p_0(ObsoleteProcInfo_19, PredStatus_77, Context_15, STATE_VARIABLE_ModuleInfo_0_27, STATE_VARIABLE_ModuleInfo_28, STATE_VARIABLE_Specs_0_31, STATE_VARIABLE_Specs_32);
          *STATE_VARIABLE_QualInfo_30 = STATE_VARIABLE_QualInfo_0_29;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeSpecInfo_20 = (MR_Word) (MR_body((MR_Word) (Pragma_14), (MR_Integer) 2));

          hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_8_p_0(TypeSpecInfo_20, Context_15, STATE_VARIABLE_ModuleInfo_0_27, STATE_VARIABLE_ModuleInfo_28, STATE_VARIABLE_QualInfo_0_29, STATE_VARIABLE_QualInfo_30, STATE_VARIABLE_Specs_0_31, STATE_VARIABLE_Specs_32);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma_14, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word OISUInfo_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_14, (MR_Integer) 1))));

              hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0(OISUInfo_21, ItemMercuryStatus_12, Context_15, STATE_VARIABLE_ModuleInfo_0_27, STATE_VARIABLE_ModuleInfo_28, STATE_VARIABLE_Specs_0_31, STATE_VARIABLE_Specs_32);
              *STATE_VARIABLE_QualInfo_30 = STATE_VARIABLE_QualInfo_0_29;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PredNameArity_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_14, (MR_Integer) 1))));
              MR_Word PredStatus_78;

              hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_12, &PredStatus_78);
              hlds__make_hlds__add_pragma__add_pred_marker_10_p_0((MR_String) "terminates", PredNameArity_22, PredStatus_78, Context_15, (MR_Integer) 18, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[8])), STATE_VARIABLE_ModuleInfo_0_27, STATE_VARIABLE_ModuleInfo_28, STATE_VARIABLE_Specs_0_31, STATE_VARIABLE_Specs_32);
              *STATE_VARIABLE_QualInfo_30 = STATE_VARIABLE_QualInfo_0_29;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word PredStatus_79;
              MR_Word PredNameArity_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_14, (MR_Integer) 1))));

              hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_12, &PredStatus_79);
              hlds__make_hlds__add_pragma__add_pred_marker_10_p_0((MR_String) "does_not_terminate", PredNameArity_80, PredStatus_79, Context_15, (MR_Integer) 19, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[7])), STATE_VARIABLE_ModuleInfo_0_27, STATE_VARIABLE_ModuleInfo_28, STATE_VARIABLE_Specs_0_31, STATE_VARIABLE_Specs_32);
              *STATE_VARIABLE_QualInfo_30 = STATE_VARIABLE_QualInfo_0_29;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word PredStatus_81;
              MR_Word PredNameArity_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_14, (MR_Integer) 1))));

              hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_12, &PredStatus_81);
              hlds__make_hlds__add_pragma__add_pred_marker_10_p_0((MR_String) "check_termination", PredNameArity_82, PredStatus_81, Context_15, (MR_Integer) 20, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[5])), STATE_VARIABLE_ModuleInfo_0_27, STATE_VARIABLE_ModuleInfo_28, STATE_VARIABLE_Specs_0_31, STATE_VARIABLE_Specs_32);
              *STATE_VARIABLE_QualInfo_30 = STATE_VARIABLE_QualInfo_0_29;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word TermInfo_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_14, (MR_Integer) 1))));

              hlds__make_hlds__add_pragma__add_pragma_termination_info_6_p_0(TermInfo_23, Context_15, STATE_VARIABLE_ModuleInfo_0_27, STATE_VARIABLE_ModuleInfo_28, STATE_VARIABLE_Specs_0_31, STATE_VARIABLE_Specs_32);
              *STATE_VARIABLE_QualInfo_30 = STATE_VARIABLE_QualInfo_0_29;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Term2Info_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_14, (MR_Integer) 1))));

              hlds__make_hlds__add_pragma__add_pragma_termination2_info_6_p_0(Term2Info_24, Context_15, STATE_VARIABLE_ModuleInfo_0_27, STATE_VARIABLE_ModuleInfo_28, STATE_VARIABLE_Specs_0_31, STATE_VARIABLE_Specs_32);
              *STATE_VARIABLE_QualInfo_30 = STATE_VARIABLE_QualInfo_0_29;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word SharingInfo_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_14, (MR_Integer) 1))));

              hlds__make_hlds__add_pragma__add_pragma_structure_sharing_6_p_0(SharingInfo_25, Context_15, STATE_VARIABLE_ModuleInfo_0_27, STATE_VARIABLE_ModuleInfo_28, STATE_VARIABLE_Specs_0_31, STATE_VARIABLE_Specs_32);
              *STATE_VARIABLE_QualInfo_30 = STATE_VARIABLE_QualInfo_0_29;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ReuseInfo_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_14, (MR_Integer) 1))));

              hlds__make_hlds__add_pragma__add_pragma_structure_reuse_6_p_0(ReuseInfo_26, Context_15, STATE_VARIABLE_ModuleInfo_0_27, STATE_VARIABLE_ModuleInfo_28, STATE_VARIABLE_Specs_0_31, STATE_VARIABLE_Specs_32);
              *STATE_VARIABLE_QualInfo_30 = STATE_VARIABLE_QualInfo_0_29;
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_structure_reuse_6_p_0(
  MR_Word ReuseInfo_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * STATE_VARIABLE_ModuleInfo_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  {
    MR_Word PredNameModesPF_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo_7, (MR_Integer) 0))));
    MR_Word HeadVars_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo_7, (MR_Integer) 1))));
    MR_Word Types_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo_7, (MR_Integer) 2))));
    MR_Word MaybeReuseDomain_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo_7, (MR_Integer) 5))));

    if ((MaybeReuseDomain_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleInfo_28 = STATE_VARIABLE_ModuleInfo_0_27;
      *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
    }
    else
    {
      MR_Word ReuseDomain_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReuseDomain_16, (MR_Integer) 0))));
      MR_Word PredOrFunc_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF_11, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word SymName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_11, (MR_Integer) 1))));
      MR_Word Modes_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_11, (MR_Integer) 2))));
      MR_Integer PredFormArityInt_21;
      MR_Word UserArity_22;
      MR_Word MaybePredId_23;
      MR_Word Var_31;

      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_20, &PredFormArityInt_21);
      Var_31 = (MR_Word) (PredFormArityInt_21);
      parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_18, &UserArity_22, Var_31);
      hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_27, (MR_Integer) 0, (MR_Integer) 0, Context_8, (MR_String) "structure_reuse", PredOrFunc_18, SymName_19, UserArity_22, &MaybePredId_23);
      if (((MR_tag((MR_Word) MaybePredId_23)) == (MR_Integer) 0))
      {
        MR_Word Specs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybePredId_23, (MR_Integer) 0))));

        *STATE_VARIABLE_Specs_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Specs_10, STATE_VARIABLE_Specs_0_29);
        *STATE_VARIABLE_ModuleInfo_28 = STATE_VARIABLE_ModuleInfo_0_27;
      }
      else
      {
        MR_Word PredId_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredId_23, (MR_Integer) 0))));
        MR_Word PFNameArity_25;

        {
          PFNameArity_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PFNameArity_25, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
          MR_hl_field(MR_mktag(0), PFNameArity_25, 1) = ((MR_Box) (SymName_19));
          MR_hl_field(MR_mktag(0), PFNameArity_25, 2) = ((MR_Box) (UserArity_22));
        }
        hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_115_101_108_101_99_116_101_100_95_109_111_100_101_95_111_102_95_112_114_101_100_95_95_104_111_49_95_95_91_57_93_95_48_10_p_0(HeadVars_12, Types_13, ReuseDomain_17, PredId_24, PFNameArity_25, Modes_20, (MR_String) "structure_reuse", Context_8, STATE_VARIABLE_ModuleInfo_0_27, STATE_VARIABLE_ModuleInfo_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_115_101_108_101_99_116_101_100_95_109_111_100_101_95_111_102_95_112_114_101_100_95_95_104_111_49_95_95_91_57_93_95_48_10_p_0(
  MR_Word Var_59,
  MR_Word Var_60,
  MR_Word Var_61,
  MR_Word PredId_11,
  MR_Word PFNameArity_12,
  MR_Word Modes_13,
  MR_String PragmaName_14,
  MR_Word Context_15,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34)
{
  {
    MR_bool succeeded;
    MR_Word PredTable0_19;
    MR_Word PredInfo0_20;
    MR_Word ProcTable0_21;
    MR_Word ProcList_22;
    MR_Box conv0_PredInfo0_20;
    MR_Integer ProcId_23;

    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_31, &PredTable0_19);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable0_19, ((MR_Box) (PredId_11)), &conv0_PredInfo0_20);
    PredInfo0_20 = ((MR_Word) (conv0_PredInfo0_20));
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_20, &ProcTable0_21);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_21, &ProcList_22);
    succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(STATE_VARIABLE_ModuleInfo_0_31, ProcList_22, Modes_13, &ProcId_23);
    if (succeeded)
    {
      MR_Word ProcInfo0_24;
      MR_Word ProcInfo_25;
      MR_Word ProcTable_26;
      MR_Word PredInfo_27;
      MR_Word PredTable_28;
      MR_Box conv1_ProcInfo0_24;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_21, ((MR_Box) (ProcId_23)), &conv1_ProcInfo0_24);
      ProcInfo0_24 = ((MR_Word) (conv1_ProcInfo0_24));
      hlds__hlds_pred__proc_info_set_imported_structure_reuse_5_p_0(Var_59, Var_60, Var_61, ProcInfo0_24, &ProcInfo_25);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_23)), ((MR_Box) (ProcInfo_25)), ProcTable0_21, &ProcTable_26);
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_26, PredInfo0_20, &PredInfo_27);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_11)), ((MR_Box) (PredInfo_27)), PredTable0_19, &PredTable_28);
      hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_28, STATE_VARIABLE_ModuleInfo_0_31, STATE_VARIABLE_ModuleInfo_32);
      *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_0_33;
    }
    else
    {
      MR_Word Pieces_29;
      MR_Word Spec_30;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_43;
      MR_Word Var_44;

      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (PragmaName_14));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 13U));
        MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (PFNameArity_12));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[23])));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[152])));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
      }
      {
        Pieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[136])));
        MR_hl_field(MR_mktag(1), Pieces_29, 1) = ((MR_Box) (Var_38));
      }
      {
        Spec_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_30, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.transform_selected_mode_of_pred\'/10"));
        MR_hl_field(MR_mktag(1), Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(1), Spec_30, 3) = ((MR_Box) (Context_15));
        MR_hl_field(MR_mktag(1), Spec_30, 4) = ((MR_Box) (Pieces_29));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_34 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_30));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_33));
      }
      *STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_structure_sharing_6_p_0(
  MR_Word SharingInfo_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * STATE_VARIABLE_ModuleInfo_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  {
    MR_Word PredNameModesPF_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo_7, (MR_Integer) 0))));
    MR_Word HeadVars_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo_7, (MR_Integer) 1))));
    MR_Word Types_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo_7, (MR_Integer) 2))));
    MR_Word MaybeSharingDomain_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo_7, (MR_Integer) 5))));

    if ((MaybeSharingDomain_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleInfo_28 = STATE_VARIABLE_ModuleInfo_0_27;
      *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
    }
    else
    {
      MR_Word SharingDomain_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSharingDomain_16, (MR_Integer) 0))));
      MR_Word PredOrFunc_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF_11, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word SymName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_11, (MR_Integer) 1))));
      MR_Word Modes_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_11, (MR_Integer) 2))));
      MR_Integer PredFormArityInt_21;
      MR_Word UserArity_22;
      MR_Word MaybePredId_23;
      MR_Word Var_31;

      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_20, &PredFormArityInt_21);
      Var_31 = (MR_Word) (PredFormArityInt_21);
      parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_18, &UserArity_22, Var_31);
      hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_27, (MR_Integer) 0, (MR_Integer) 0, Context_8, (MR_String) "structure_sharing", PredOrFunc_18, SymName_19, UserArity_22, &MaybePredId_23);
      if (((MR_tag((MR_Word) MaybePredId_23)) == (MR_Integer) 0))
      {
        MR_Word Specs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybePredId_23, (MR_Integer) 0))));

        *STATE_VARIABLE_Specs_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Specs_10, STATE_VARIABLE_Specs_0_29);
        *STATE_VARIABLE_ModuleInfo_28 = STATE_VARIABLE_ModuleInfo_0_27;
      }
      else
      {
        MR_Word PredId_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredId_23, (MR_Integer) 0))));
        MR_Word PFNameArity_25;

        {
          PFNameArity_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PFNameArity_25, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
          MR_hl_field(MR_mktag(0), PFNameArity_25, 1) = ((MR_Box) (SymName_19));
          MR_hl_field(MR_mktag(0), PFNameArity_25, 2) = ((MR_Box) (UserArity_22));
        }
        hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_115_101_108_101_99_116_101_100_95_109_111_100_101_95_111_102_95_112_114_101_100_95_95_104_111_50_95_95_91_57_93_95_48_10_p_0(HeadVars_12, Types_13, SharingDomain_17, PredId_24, PFNameArity_25, Modes_20, (MR_String) "structure_sharing", Context_8, STATE_VARIABLE_ModuleInfo_0_27, STATE_VARIABLE_ModuleInfo_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_115_101_108_101_99_116_101_100_95_109_111_100_101_95_111_102_95_112_114_101_100_95_95_104_111_50_95_95_91_57_93_95_48_10_p_0(
  MR_Word Var_59,
  MR_Word Var_60,
  MR_Word Var_61,
  MR_Word PredId_11,
  MR_Word PFNameArity_12,
  MR_Word Modes_13,
  MR_String PragmaName_14,
  MR_Word Context_15,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34)
{
  {
    MR_bool succeeded;
    MR_Word PredTable0_19;
    MR_Word PredInfo0_20;
    MR_Word ProcTable0_21;
    MR_Word ProcList_22;
    MR_Box conv0_PredInfo0_20;
    MR_Integer ProcId_23;

    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_31, &PredTable0_19);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable0_19, ((MR_Box) (PredId_11)), &conv0_PredInfo0_20);
    PredInfo0_20 = ((MR_Word) (conv0_PredInfo0_20));
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_20, &ProcTable0_21);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_21, &ProcList_22);
    succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(STATE_VARIABLE_ModuleInfo_0_31, ProcList_22, Modes_13, &ProcId_23);
    if (succeeded)
    {
      MR_Word ProcInfo0_24;
      MR_Word ProcInfo_25;
      MR_Word ProcTable_26;
      MR_Word PredInfo_27;
      MR_Word PredTable_28;
      MR_Box conv1_ProcInfo0_24;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_21, ((MR_Box) (ProcId_23)), &conv1_ProcInfo0_24);
      ProcInfo0_24 = ((MR_Word) (conv1_ProcInfo0_24));
      hlds__hlds_pred__proc_info_set_imported_structure_sharing_5_p_0(Var_59, Var_60, Var_61, ProcInfo0_24, &ProcInfo_25);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_23)), ((MR_Box) (ProcInfo_25)), ProcTable0_21, &ProcTable_26);
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_26, PredInfo0_20, &PredInfo_27);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_11)), ((MR_Box) (PredInfo_27)), PredTable0_19, &PredTable_28);
      hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_28, STATE_VARIABLE_ModuleInfo_0_31, STATE_VARIABLE_ModuleInfo_32);
      *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_0_33;
    }
    else
    {
      MR_Word Pieces_29;
      MR_Word Spec_30;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_43;
      MR_Word Var_44;

      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (PragmaName_14));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 13U));
        MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (PFNameArity_12));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[23])));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[152])));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
      }
      {
        Pieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[136])));
        MR_hl_field(MR_mktag(1), Pieces_29, 1) = ((MR_Box) (Var_38));
      }
      {
        Spec_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_30, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.transform_selected_mode_of_pred\'/10"));
        MR_hl_field(MR_mktag(1), Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(1), Spec_30, 3) = ((MR_Box) (Context_15));
        MR_hl_field(MR_mktag(1), Spec_30, 4) = ((MR_Box) (Pieces_29));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_34 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_30));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_33));
      }
      *STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_termination2_info_6_p_0(
  MR_Word Term2Info_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  {
    MR_Word PredNameModesPF_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info_7, (MR_Integer) 0))));
    MR_Word MaybePragmaSuccessArgSizeInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info_7, (MR_Integer) 1))));
    MR_Word MaybePragmaFailureArgSizeInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info_7, (MR_Integer) 2))));
    MR_Word MaybePragmaTerminationInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info_7, (MR_Integer) 3))));
    MR_Word PredOrFunc_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF_11, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word SymName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_11, (MR_Integer) 1))));
    MR_Word Modes_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_11, (MR_Integer) 2))));
    MR_Integer PredFormArityInt_18;
    MR_Word UserArity_19;
    MR_Word MaybePredId_20;
    MR_Word Var_33;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_17, &PredFormArityInt_18);
    Var_33 = (MR_Word) (PredFormArityInt_18);
    parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_15, &UserArity_19, Var_33);
    hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_29, (MR_Integer) 0, (MR_Integer) 0, Context_8, (MR_String) "termination2_info", PredOrFunc_15, SymName_16, UserArity_19, &MaybePredId_20);
    if (((MR_tag((MR_Word) MaybePredId_20)) == (MR_Integer) 0))
    {
      *STATE_VARIABLE_ModuleInfo_30 = STATE_VARIABLE_ModuleInfo_0_29;
      *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
    }
    else
    {
      MR_Word PredId_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredId_20, (MR_Integer) 0))));
      MR_Word PFNameArity_22;

      {
        PFNameArity_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PFNameArity_22, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_15));
        MR_hl_field(MR_mktag(0), PFNameArity_22, 1) = ((MR_Box) (SymName_16));
        MR_hl_field(MR_mktag(0), PFNameArity_22, 2) = ((MR_Box) (UserArity_19));
      }
      hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_115_101_108_101_99_116_101_100_95_109_111_100_101_95_111_102_95_112_114_101_100_95_95_104_111_51_95_95_91_49_48_93_95_48_10_p_0(Context_8, MaybePragmaSuccessArgSizeInfo_12, MaybePragmaFailureArgSizeInfo_13, MaybePragmaTerminationInfo_14, PredId_21, PFNameArity_22, Modes_17, (MR_String) "termination2_info", Context_8, STATE_VARIABLE_ModuleInfo_0_29, STATE_VARIABLE_ModuleInfo_30, STATE_VARIABLE_Specs_0_31, STATE_VARIABLE_Specs_32);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_115_101_108_101_99_116_101_100_95_109_111_100_101_95_111_102_95_112_114_101_100_95_95_104_111_51_95_95_91_49_48_93_95_48_10_p_0(
  MR_Word Var_59,
  MR_Word Var_60,
  MR_Word Var_61,
  MR_Word Var_62,
  MR_Word PredId_11,
  MR_Word PFNameArity_12,
  MR_Word Modes_13,
  MR_String PragmaName_14,
  MR_Word Context_15,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34)
{
  {
    MR_bool succeeded;
    MR_Word PredTable0_19;
    MR_Word PredInfo0_20;
    MR_Word ProcTable0_21;
    MR_Word ProcList_22;
    MR_Box conv0_PredInfo0_20;
    MR_Integer ProcId_23;

    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_31, &PredTable0_19);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable0_19, ((MR_Box) (PredId_11)), &conv0_PredInfo0_20);
    PredInfo0_20 = ((MR_Word) (conv0_PredInfo0_20));
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_20, &ProcTable0_21);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_21, &ProcList_22);
    succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(STATE_VARIABLE_ModuleInfo_0_31, ProcList_22, Modes_13, &ProcId_23);
    if (succeeded)
    {
      MR_Word ProcInfo0_24;
      MR_Word ProcInfo_25;
      MR_Word ProcTable_26;
      MR_Word PredInfo_27;
      MR_Word PredTable_28;
      MR_Box conv1_ProcInfo0_24;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_21, ((MR_Box) (ProcId_23)), &conv1_ProcInfo0_24);
      ProcInfo0_24 = ((MR_Word) (conv1_ProcInfo0_24));
      hlds__make_hlds__add_pragma__IntroducedFrom__pred__add_pragma_termination2_info__1641__1_6_p_0(Var_59, Var_60, Var_61, Var_62, ProcInfo0_24, &ProcInfo_25);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_23)), ((MR_Box) (ProcInfo_25)), ProcTable0_21, &ProcTable_26);
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_26, PredInfo0_20, &PredInfo_27);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_11)), ((MR_Box) (PredInfo_27)), PredTable0_19, &PredTable_28);
      hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_28, STATE_VARIABLE_ModuleInfo_0_31, STATE_VARIABLE_ModuleInfo_32);
      *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_0_33;
    }
    else
    {
      MR_Word Pieces_29;
      MR_Word Spec_30;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_43;
      MR_Word Var_44;

      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (PragmaName_14));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 13U));
        MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (PFNameArity_12));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[23])));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[152])));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
      }
      {
        Pieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[136])));
        MR_hl_field(MR_mktag(1), Pieces_29, 1) = ((MR_Box) (Var_38));
      }
      {
        Spec_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_30, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.transform_selected_mode_of_pred\'/10"));
        MR_hl_field(MR_mktag(1), Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(1), Spec_30, 3) = ((MR_Box) (Context_15));
        MR_hl_field(MR_mktag(1), Spec_30, 4) = ((MR_Box) (Pieces_29));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_34 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_30));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_33));
      }
      *STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__IntroducedFrom__pred__add_pragma_termination2_info__1641__1_6_p_0(
  MR_Word Context_8,
  MR_Word MaybePragmaSuccessArgSizeInfo_12,
  MR_Word MaybePragmaFailureArgSizeInfo_13,
  MR_Word MaybePragmaTerminationInfo_14,
  MR_Word LambdaHeadVar__1_37,
  MR_Word * LambdaHeadVar__2_38)
{
  {
    MR_Word MaybeTerminationInfo_26;
    MR_Word STATE_VARIABLE_TermInfo_39_39;
    MR_Word STATE_VARIABLE_TermInfo_40_40;
    MR_Word STATE_VARIABLE_TermInfo_41_41;
    MR_Word STATE_VARIABLE_TermInfo_42_42;

    transform_hlds__term_constr_util__add_context_to_constr_termination_info_3_p_0(MaybePragmaTerminationInfo_14, Context_8, &MaybeTerminationInfo_26);
    hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(LambdaHeadVar__1_37, &STATE_VARIABLE_TermInfo_39_39);
    transform_hlds__term_constr_main_types__term2_info_set_import_success_3_p_0(MaybePragmaSuccessArgSizeInfo_12, STATE_VARIABLE_TermInfo_39_39, &STATE_VARIABLE_TermInfo_40_40);
    transform_hlds__term_constr_main_types__term2_info_set_import_failure_3_p_0(MaybePragmaFailureArgSizeInfo_13, STATE_VARIABLE_TermInfo_40_40, &STATE_VARIABLE_TermInfo_41_41);
    transform_hlds__term_constr_main_types__term2_info_set_term_status_3_p_0(MaybeTerminationInfo_26, STATE_VARIABLE_TermInfo_41_41, &STATE_VARIABLE_TermInfo_42_42);
    hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(STATE_VARIABLE_TermInfo_42_42, LambdaHeadVar__1_37, LambdaHeadVar__2_38);
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_termination_info_6_p_0(
  MR_Word TermInfo_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  {
    MR_Word PredNameModesPF_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermInfo_7, (MR_Integer) 0))));
    MR_Word MaybePragmaArgSizeInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermInfo_7, (MR_Integer) 1))));
    MR_Word MaybePragmaTerminationInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermInfo_7, (MR_Integer) 2))));
    MR_Word PredOrFunc_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF_11, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_11, (MR_Integer) 1))));
    MR_Word Modes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_11, (MR_Integer) 2))));
    MR_Integer PredFormArityInt_17;
    MR_Word UserArity_18;
    MR_Word MaybePredId_19;
    MR_Word Var_33;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_16, &PredFormArityInt_17);
    Var_33 = (MR_Word) (PredFormArityInt_17);
    parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_14, &UserArity_18, Var_33);
    hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_29, (MR_Integer) 0, (MR_Integer) 0, Context_8, (MR_String) "termination_info", PredOrFunc_14, SymName_15, UserArity_18, &MaybePredId_19);
    if (((MR_tag((MR_Word) MaybePredId_19)) == (MR_Integer) 0))
    {
      *STATE_VARIABLE_ModuleInfo_30 = STATE_VARIABLE_ModuleInfo_0_29;
      *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
    }
    else
    {
      MR_Word PredId_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredId_19, (MR_Integer) 0))));
      MR_Word PFNameArity_21;
      MR_Word MaybeArgSizeInfo_22;
      MR_Word MaybeTerminationInfo_23;

      {
        PFNameArity_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PFNameArity_21, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_14));
        MR_hl_field(MR_mktag(0), PFNameArity_21, 1) = ((MR_Box) (SymName_15));
        MR_hl_field(MR_mktag(0), PFNameArity_21, 2) = ((MR_Box) (UserArity_18));
      }
      transform_hlds__term_util__add_context_to_arg_size_info_3_p_0(MaybePragmaArgSizeInfo_12, Context_8, &MaybeArgSizeInfo_22);
      transform_hlds__term_util__add_context_to_termination_info_3_p_0(MaybePragmaTerminationInfo_13, Context_8, &MaybeTerminationInfo_23);
      hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_115_101_108_101_99_116_101_100_95_109_111_100_101_95_111_102_95_112_114_101_100_95_95_104_111_52_95_95_91_56_93_95_48_10_p_0(MaybeArgSizeInfo_22, MaybeTerminationInfo_23, PredId_20, PFNameArity_21, Modes_16, (MR_String) "termination_info", Context_8, STATE_VARIABLE_ModuleInfo_0_29, STATE_VARIABLE_ModuleInfo_30, STATE_VARIABLE_Specs_0_31, STATE_VARIABLE_Specs_32);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_115_101_108_101_99_116_101_100_95_109_111_100_101_95_111_102_95_112_114_101_100_95_95_104_111_52_95_95_91_56_93_95_48_10_p_0(
  MR_Word Var_59,
  MR_Word Var_60,
  MR_Word PredId_11,
  MR_Word PFNameArity_12,
  MR_Word Modes_13,
  MR_String PragmaName_14,
  MR_Word Context_15,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34)
{
  {
    MR_bool succeeded;
    MR_Word PredTable0_19;
    MR_Word PredInfo0_20;
    MR_Word ProcTable0_21;
    MR_Word ProcList_22;
    MR_Box conv0_PredInfo0_20;
    MR_Integer ProcId_23;

    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_31, &PredTable0_19);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable0_19, ((MR_Box) (PredId_11)), &conv0_PredInfo0_20);
    PredInfo0_20 = ((MR_Word) (conv0_PredInfo0_20));
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_20, &ProcTable0_21);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_21, &ProcList_22);
    succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(STATE_VARIABLE_ModuleInfo_0_31, ProcList_22, Modes_13, &ProcId_23);
    if (succeeded)
    {
      MR_Word ProcInfo0_24;
      MR_Word ProcInfo_25;
      MR_Word ProcTable_26;
      MR_Word PredInfo_27;
      MR_Word PredTable_28;
      MR_Box conv1_ProcInfo0_24;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_21, ((MR_Box) (ProcId_23)), &conv1_ProcInfo0_24);
      ProcInfo0_24 = ((MR_Word) (conv1_ProcInfo0_24));
      hlds__make_hlds__add_pragma__IntroducedFrom__pred__add_pragma_termination_info__1606__1_4_p_0(Var_59, Var_60, ProcInfo0_24, &ProcInfo_25);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_23)), ((MR_Box) (ProcInfo_25)), ProcTable0_21, &ProcTable_26);
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_26, PredInfo0_20, &PredInfo_27);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_11)), ((MR_Box) (PredInfo_27)), PredTable0_19, &PredTable_28);
      hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_28, STATE_VARIABLE_ModuleInfo_0_31, STATE_VARIABLE_ModuleInfo_32);
      *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_0_33;
    }
    else
    {
      MR_Word Pieces_29;
      MR_Word Spec_30;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_43;
      MR_Word Var_44;

      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (PragmaName_14));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 13U));
        MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (PFNameArity_12));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[23])));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[152])));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
      }
      {
        Pieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[136])));
        MR_hl_field(MR_mktag(1), Pieces_29, 1) = ((MR_Box) (Var_38));
      }
      {
        Spec_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_30, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.transform_selected_mode_of_pred\'/10"));
        MR_hl_field(MR_mktag(1), Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(1), Spec_30, 3) = ((MR_Box) (Context_15));
        MR_hl_field(MR_mktag(1), Spec_30, 4) = ((MR_Box) (Pieces_29));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_34 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_30));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_33));
      }
      *STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__IntroducedFrom__pred__add_pragma_termination_info__1606__1_4_p_0(
  MR_Word MaybeArgSizeInfo_22,
  MR_Word MaybeTerminationInfo_23,
  MR_Word LambdaHeadVar__1_37,
  MR_Word * LambdaHeadVar__2_38)
{
  {
    MR_Word ProcInfo1_27;

    hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(MaybeArgSizeInfo_22, LambdaHeadVar__1_37, &ProcInfo1_27);
    hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(MaybeTerminationInfo_23, ProcInfo1_27, LambdaHeadVar__2_38);
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_PredId_16;
    MR_Integer conv11_STATE_VARIABLE_SeqNum_43;
    MR_Word conv10_STATE_VARIABLE_Specs_45;

    hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv12_PredId_16, ((MR_Integer) (wrapper_arg_3)), &conv11_STATE_VARIABLE_SeqNum_43, ((MR_Word) (wrapper_arg_5)), &conv10_STATE_VARIABLE_Specs_45);
    *wrapper_arg_2 = ((MR_Box) (conv12_PredId_16));
    *wrapper_arg_4 = ((MR_Box) (conv11_STATE_VARIABLE_SeqNum_43));
    *wrapper_arg_6 = ((MR_Box) (conv10_STATE_VARIABLE_Specs_45));
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_PredId_16;
    MR_Integer conv6_STATE_VARIABLE_SeqNum_43;
    MR_Word conv5_STATE_VARIABLE_Specs_45;

    hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv7_PredId_16, ((MR_Integer) (wrapper_arg_3)), &conv6_STATE_VARIABLE_SeqNum_43, ((MR_Word) (wrapper_arg_5)), &conv5_STATE_VARIABLE_Specs_45);
    *wrapper_arg_2 = ((MR_Box) (conv7_PredId_16));
    *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_SeqNum_43));
    *wrapper_arg_6 = ((MR_Box) (conv5_STATE_VARIABLE_Specs_45));
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_PredId_16;
    MR_Integer conv1_STATE_VARIABLE_SeqNum_43;
    MR_Word conv0_STATE_VARIABLE_Specs_45;

    hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv2_PredId_16, ((MR_Integer) (wrapper_arg_3)), &conv1_STATE_VARIABLE_SeqNum_43, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Specs_45);
    *wrapper_arg_2 = ((MR_Box) (conv2_PredId_16));
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_SeqNum_43));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_45));
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0(
  MR_Word OISUInfo_8,
  MR_Word ItemMercuryStatus_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * STATE_VARIABLE_ModuleInfo_41,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtor_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUInfo_8, (MR_Integer) 0))));
    MR_Word Creators_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUInfo_8, (MR_Integer) 1))));
    MR_Word Mutators_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUInfo_8, (MR_Integer) 2))));
    MR_Word Destructors_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUInfo_8, (MR_Integer) 3))));
    MR_Word CreatorPredIds_27;
    MR_Word MutatorPredIds_29;
    MR_Word DestructorPredIds_31;
    MR_Word STATE_VARIABLE_OISUSpecs_72_72;
    MR_Word Var_73;
    MR_Word STATE_VARIABLE_OISUSpecs_75_75;
    MR_Word Var_77;
    MR_Word STATE_VARIABLE_OISUSpecs_79_79;
    MR_Word Var_81;
    MR_Word STATE_VARIABLE_OISUSpecs_83_83;
    MR_Box conv4_Var_28;
    MR_Box conv3_STATE_VARIABLE_OISUSpecs_75_75;
    MR_Box conv9_Var_30;
    MR_Box conv8_STATE_VARIABLE_OISUSpecs_79_79;
    MR_Box conv14_Var_32;
    MR_Box conv13_STATE_VARIABLE_OISUSpecs_83_83;

    if (((MR_tag((MR_Word) ItemMercuryStatus_9)) == (MR_Integer) 1))
      STATE_VARIABLE_OISUSpecs_72_72 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ItemExport_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemMercuryStatus_9, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word TypeTable_22;
      MR_Word STATE_VARIABLE_OISUSpecs_56_56;
      MR_Word TypeDefn_23;

      switch (ItemExport_19) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          STATE_VARIABLE_OISUSpecs_56_56 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            MR_Word StatusSpec_21;

            {
              StatusSpec_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), StatusSpec_21, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_oisu\'/7"));
              MR_hl_field(MR_mktag(1), StatusSpec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), StatusSpec_21, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(MR_mktag(1), StatusSpec_21, 3) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(1), StatusSpec_21, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[106])));
            }
            {
              STATE_VARIABLE_OISUSpecs_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_OISUSpecs_56_56, 0) = ((MR_Box) (StatusSpec_21));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_OISUSpecs_56_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
      }
      hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_40, &TypeTable_22);
      succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_22, TypeCtor_13, &TypeDefn_23);
      if (succeeded)
      {
        MR_Word TypeStatus_24;
        MR_Word Var_57;

        hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_23, &TypeStatus_24);
        Var_57 = (MR_Word) (TypeStatus_24);
        succeeded = (Var_57 == (MR_Word) ((MR_Unsigned) 20U));
        if (succeeded)
          STATE_VARIABLE_OISUSpecs_72_72 = STATE_VARIABLE_OISUSpecs_56_56;
        else
        {
          MR_Word TypeSpec_26;

          {
            TypeSpec_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), TypeSpec_26, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_oisu\'/7"));
            MR_hl_field(MR_mktag(1), TypeSpec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), TypeSpec_26, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(1), TypeSpec_26, 3) = ((MR_Box) (Context_10));
            MR_hl_field(MR_mktag(1), TypeSpec_26, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[111])));
          }
          {
            STATE_VARIABLE_OISUSpecs_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_OISUSpecs_72_72, 0) = ((MR_Box) (TypeSpec_26));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_OISUSpecs_72_72, 1) = ((MR_Box) (STATE_VARIABLE_OISUSpecs_56_56));
          }
        }
      }
      else
        STATE_VARIABLE_OISUSpecs_72_72 = STATE_VARIABLE_OISUSpecs_56_56;
    }
    {
      Var_73 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_40));
      MR_hl_field(MR_mktag(0), Var_73, 4) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(0), Var_73, 5) = ((MR_Box) (TypeCtor_13));
      MR_hl_field(MR_mktag(0), Var_73, 6) = ((MR_Box) ((MR_String) "creator"));
    }
    mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[0]), Var_73, Creators_14, &CreatorPredIds_27, ((MR_Box) ((MR_Integer) 1)), &conv4_Var_28, ((MR_Box) (STATE_VARIABLE_OISUSpecs_72_72)), &conv3_STATE_VARIABLE_OISUSpecs_75_75);
    STATE_VARIABLE_OISUSpecs_75_75 = ((MR_Word) (conv3_STATE_VARIABLE_OISUSpecs_75_75));
    {
      Var_77 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_2));
      MR_hl_field(MR_mktag(0), Var_77, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_77, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_40));
      MR_hl_field(MR_mktag(0), Var_77, 4) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(0), Var_77, 5) = ((MR_Box) (TypeCtor_13));
      MR_hl_field(MR_mktag(0), Var_77, 6) = ((MR_Box) ((MR_String) "mutator"));
    }
    mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[0]), Var_77, Mutators_15, &MutatorPredIds_29, ((MR_Box) ((MR_Integer) 1)), &conv9_Var_30, ((MR_Box) (STATE_VARIABLE_OISUSpecs_75_75)), &conv8_STATE_VARIABLE_OISUSpecs_79_79);
    STATE_VARIABLE_OISUSpecs_79_79 = ((MR_Word) (conv8_STATE_VARIABLE_OISUSpecs_79_79));
    {
      Var_81 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_3));
      MR_hl_field(MR_mktag(0), Var_81, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_81, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_40));
      MR_hl_field(MR_mktag(0), Var_81, 4) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(0), Var_81, 5) = ((MR_Box) (TypeCtor_13));
      MR_hl_field(MR_mktag(0), Var_81, 6) = ((MR_Box) ((MR_String) "destructor"));
    }
    mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[0]), Var_81, Destructors_16, &DestructorPredIds_31, ((MR_Box) ((MR_Integer) 1)), &conv14_Var_32, ((MR_Box) (STATE_VARIABLE_OISUSpecs_79_79)), &conv13_STATE_VARIABLE_OISUSpecs_83_83);
    STATE_VARIABLE_OISUSpecs_83_83 = ((MR_Word) (conv13_STATE_VARIABLE_OISUSpecs_83_83));
    if ((STATE_VARIABLE_OISUSpecs_83_83 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word OISUPreds_33;
      MR_Word OISUMap0_34;
      MR_Word OISUMap_35;

      {
        OISUPreds_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), OISUPreds_33, 0) = ((MR_Box) (CreatorPredIds_27));
        MR_hl_field(MR_mktag(0), OISUPreds_33, 1) = ((MR_Box) (MutatorPredIds_29));
        MR_hl_field(MR_mktag(0), OISUPreds_33, 2) = ((MR_Box) (DestructorPredIds_31));
      }
      hlds__hlds_module__module_info_get_oisu_map_2_p_0(STATE_VARIABLE_ModuleInfo_0_40, &OISUMap0_34);
      succeeded = mercury__map__insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0), ((MR_Box) (TypeCtor_13)), ((MR_Box) (OISUPreds_33)), OISUMap0_34, &OISUMap_35);
      if (succeeded)
      {
        hlds__hlds_module__module_info_set_oisu_map_3_p_0(OISUMap_35, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
        *STATE_VARIABLE_Specs_43 = STATE_VARIABLE_Specs_0_42;
      }
      else
      {
        MR_Word DupPieces_36;
        MR_Word DupSpec_37;
        MR_Word Var_89;
        MR_Word Var_92;
        MR_Word Var_95;
        MR_Word Var_96;

        {
          Var_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_96, 0) = ((MR_Box) ((MR_Unsigned) 15U));
          MR_hl_field(MR_mktag(3), Var_96, 1) = ((MR_Box) (TypeCtor_13));
        }
        {
          Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Var_96));
          MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[23])));
        }
        {
          Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[156])));
          MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (Var_95));
        }
        {
          Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[155])));
          MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_92));
        }
        {
          DupPieces_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), DupPieces_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[154])));
          MR_hl_field(MR_mktag(1), DupPieces_36, 1) = ((MR_Box) (Var_89));
        }
        {
          DupSpec_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), DupSpec_37, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_oisu\'/7"));
          MR_hl_field(MR_mktag(1), DupSpec_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), DupSpec_37, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(1), DupSpec_37, 3) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(1), DupSpec_37, 4) = ((MR_Box) (DupPieces_36));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_43 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DupSpec_37));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_42));
        }
        *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
      }
    }
    else
    {
      *STATE_VARIABLE_Specs_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), STATE_VARIABLE_OISUSpecs_83_83, STATE_VARIABLE_Specs_0_42);
      *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__mark_proc_as_obsolete_7_p_0(
  MR_Word ObsoleteProcInfo_8,
  MR_Word PragmaStatus_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_30,
  MR_Word * STATE_VARIABLE_ModuleInfo_31,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33)
{
  {
    MR_bool succeeded;
    MR_Word PredNameModesPF_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ObsoleteProcInfo_8, (MR_Integer) 0))));
    MR_Word ObsoleteInFavourOf_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ObsoleteProcInfo_8, (MR_Integer) 1))));
    MR_Word PredOrFunc_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF_13, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word SymName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_13, (MR_Integer) 1))));
    MR_Word Modes_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_13, (MR_Integer) 2))));
    MR_Integer PredFormArityInt_18;
    MR_Word UserArity_19;
    MR_Word MaybePredId_20;
    MR_Word Var_34;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_17, &PredFormArityInt_18);
    Var_34 = (MR_Word) (PredFormArityInt_18);
    parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_15, &UserArity_19, Var_34);
    hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_30, (MR_Integer) 0, (MR_Integer) 1, Context_10, (MR_String) "obsolete_proc", PredOrFunc_15, SymName_16, UserArity_19, &MaybePredId_20);
    if (((MR_tag((MR_Word) MaybePredId_20)) == (MR_Integer) 0))
    {
      MR_Word Specs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybePredId_20, (MR_Integer) 0))));

      *STATE_VARIABLE_Specs_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Specs_12, STATE_VARIABLE_Specs_0_32);
      *STATE_VARIABLE_ModuleInfo_31 = STATE_VARIABLE_ModuleInfo_0_30;
    }
    else
    {
      MR_Word PredId_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredId_20, (MR_Integer) 0))));
      MR_Word PredInfo0_22;
      MR_Word PFNameArity_23;
      MR_Word STATE_VARIABLE_Specs_42_42;
      MR_Word Var_39;

      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_30, PredId_21, &PredInfo0_22);
      succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(PredInfo0_22);
      if (succeeded)
      {
        Var_39 = hlds__status__pred_status_is_exported_1_f_0(PragmaStatus_9);
        succeeded = (Var_39 == (MR_Integer) 0);
      }
      if (succeeded)
      {
        MR_String Var_40;
        MR_Integer UserArityInt_64;
        MR_Word SNA_65;
        MR_Word Pieces_66;
        MR_Word Spec_67;
        MR_Word Var_70;
        MR_Word Var_72;
        MR_Word Var_75;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Word Var_81;

        switch (PredOrFunc_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            Var_40 = (MR_String) "function";
            break;
          case (MR_Integer) 0:
            Var_40 = (MR_String) "predicate";
            break;
        }
        UserArityInt_64 = (MR_Integer) (UserArity_19);
        {
          SNA_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SNA_65, 0) = ((MR_Box) (SymName_16));
          MR_hl_field(MR_mktag(0), SNA_65, 1) = ((MR_Box) (UserArityInt_64));
        }
        {
          Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_79, 1) = ((MR_Box) (Var_40));
        }
        {
          Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (SNA_65));
        }
        {
          Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
          MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[131])));
        }
        {
          Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_79));
          MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_80));
        }
        {
          Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[141])));
          MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_78));
        }
        {
          Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[139])));
          MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_75));
        }
        {
          Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[153])));
          MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_72));
        }
        {
          Pieces_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[136])));
          MR_hl_field(MR_mktag(1), Pieces_66, 1) = ((MR_Box) (Var_70));
        }
        {
          Spec_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_67, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.pragma_status_error\'/7"));
          MR_hl_field(MR_mktag(1), Spec_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_67, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(1), Spec_67, 3) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(1), Spec_67, 4) = ((MR_Box) (Pieces_66));
        }
        {
          STATE_VARIABLE_Specs_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_42_42, 0) = ((MR_Box) (Spec_67));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_42_42, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_32));
        }
      }
      else
        STATE_VARIABLE_Specs_42_42 = STATE_VARIABLE_Specs_0_32;
      {
        PFNameArity_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PFNameArity_23, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_15));
        MR_hl_field(MR_mktag(0), PFNameArity_23, 1) = ((MR_Box) (SymName_16));
        MR_hl_field(MR_mktag(0), PFNameArity_23, 2) = ((MR_Box) (UserArity_19));
      }
      hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_115_101_108_101_99_116_101_100_95_109_111_100_101_95_111_102_95_112_114_101_100_95_95_104_111_53_95_95_91_55_93_95_48_10_p_0(ObsoleteInFavourOf_14, PredId_21, PFNameArity_23, Modes_17, (MR_String) "obsolete_proc", Context_10, STATE_VARIABLE_ModuleInfo_0_30, STATE_VARIABLE_ModuleInfo_31, STATE_VARIABLE_Specs_42_42, STATE_VARIABLE_Specs_33);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_115_101_108_101_99_116_101_100_95_109_111_100_101_95_111_102_95_112_114_101_100_95_95_104_111_53_95_95_91_55_93_95_48_10_p_0(
  MR_Word Var_59,
  MR_Word PredId_11,
  MR_Word PFNameArity_12,
  MR_Word Modes_13,
  MR_String PragmaName_14,
  MR_Word Context_15,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34)
{
  {
    MR_bool succeeded;
    MR_Word PredTable0_19;
    MR_Word PredInfo0_20;
    MR_Word ProcTable0_21;
    MR_Word ProcList_22;
    MR_Box conv0_PredInfo0_20;
    MR_Integer ProcId_23;

    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_31, &PredTable0_19);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable0_19, ((MR_Box) (PredId_11)), &conv0_PredInfo0_20);
    PredInfo0_20 = ((MR_Word) (conv0_PredInfo0_20));
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_20, &ProcTable0_21);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_21, &ProcList_22);
    succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(STATE_VARIABLE_ModuleInfo_0_31, ProcList_22, Modes_13, &ProcId_23);
    if (succeeded)
    {
      MR_Word ProcInfo0_24;
      MR_Word ProcInfo_25;
      MR_Word ProcTable_26;
      MR_Word PredInfo_27;
      MR_Word PredTable_28;
      MR_Box conv1_ProcInfo0_24;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_21, ((MR_Box) (ProcId_23)), &conv1_ProcInfo0_24);
      ProcInfo0_24 = ((MR_Word) (conv1_ProcInfo0_24));
      hlds__make_hlds__add_pragma__IntroducedFrom__pred__mark_proc_as_obsolete__941__1_3_p_0(Var_59, ProcInfo0_24, &ProcInfo_25);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_23)), ((MR_Box) (ProcInfo_25)), ProcTable0_21, &ProcTable_26);
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_26, PredInfo0_20, &PredInfo_27);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_11)), ((MR_Box) (PredInfo_27)), PredTable0_19, &PredTable_28);
      hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_28, STATE_VARIABLE_ModuleInfo_0_31, STATE_VARIABLE_ModuleInfo_32);
      *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_0_33;
    }
    else
    {
      MR_Word Pieces_29;
      MR_Word Spec_30;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_43;
      MR_Word Var_44;

      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (PragmaName_14));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 13U));
        MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (PFNameArity_12));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[23])));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[152])));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
      }
      {
        Pieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[136])));
        MR_hl_field(MR_mktag(1), Pieces_29, 1) = ((MR_Box) (Var_38));
      }
      {
        Spec_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_30, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.transform_selected_mode_of_pred\'/10"));
        MR_hl_field(MR_mktag(1), Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(1), Spec_30, 3) = ((MR_Box) (Context_15));
        MR_hl_field(MR_mktag(1), Spec_30, 4) = ((MR_Box) (Pieces_29));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_34 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_30));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_33));
      }
      *STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__IntroducedFrom__pred__mark_proc_as_obsolete__941__1_3_p_0(
  MR_Word ObsoleteInFavourOf_14,
  MR_Word LambdaHeadVar__1_43,
  MR_Word * LambdaHeadVar__2_44)
{
  {
    MR_Word MaybeObsoleteInFavourOf0_27;
    MR_Word MaybeObsoleteInFavourOf_28;

    hlds__hlds_pred__proc_info_get_obsolete_in_favour_of_2_p_0(LambdaHeadVar__1_43, &MaybeObsoleteInFavourOf0_27);
    if ((MaybeObsoleteInFavourOf0_27 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MaybeObsoleteInFavourOf_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeObsoleteInFavourOf_28, 0) = ((MR_Box) (ObsoleteInFavourOf_14));
      }
    else
    {
      MR_Word ObsoleteInFavourOf0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeObsoleteInFavourOf0_27, (MR_Integer) 0))));
      MR_Word Var_45;

      Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), ObsoleteInFavourOf0_29, ObsoleteInFavourOf_14);
      {
        MaybeObsoleteInFavourOf_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeObsoleteInFavourOf_28, 0) = ((MR_Box) (Var_45));
      }
    }
    hlds__hlds_pred__proc_info_set_obsolete_in_favour_of_3_p_0(MaybeObsoleteInFavourOf_28, LambdaHeadVar__1_43, LambdaHeadVar__2_44);
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__4_4;

    conv1_HeadVar__4_4 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_pragma__IntroducedFrom__pred__look_up_pragma_pf_sym_arity__1826__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_error_util__project_user_arity_int_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word IsFullyQualified_11,
  MR_Word FailHandling_12,
  MR_Word Context_13,
  MR_String PragmaName_14,
  MR_Word PredOrFunc_15,
  MR_Word SymName_16,
  MR_Word UserArity_17,
  MR_Word * MaybePredId_18)
{
  {
    MR_bool succeeded;
    MR_Word PredTable_19;
    MR_Integer PredFormArityInt_20;
    MR_Word PredIds_21;
    MR_Word Var_41;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_10, &PredTable_19);
    parse_tree__prog_util__user_arity_pred_form_arity_3_p_0(PredOrFunc_15, UserArity_17, &Var_41);
    PredFormArityInt_20 = (MR_Integer) (Var_41);
    hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable_19, IsFullyQualified_11, PredOrFunc_15, SymName_16, PredFormArityInt_20, &PredIds_21);
    if ((PredIds_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Specs_22;

      switch (FailHandling_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Specs_22 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 2:
          {
            MR_Word Pieces_29;
            MR_Word Spec_30;
            MR_Word Var_114;
            MR_Word Var_117;
            MR_Word Var_118;

            {
              Var_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_118, 0) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(MR_mktag(3), Var_118, 1) = ((MR_Box) (PragmaName_14));
            }
            {
              Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (Var_118));
              MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[119])));
            }
            {
              Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[144])));
              MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Var_117));
            }
            {
              Pieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[143])));
              MR_hl_field(MR_mktag(1), Pieces_29, 1) = ((MR_Box) (Var_114));
            }
            {
              Spec_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_30, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.look_up_pragma_pf_sym_arity\'/9"));
              MR_hl_field(MR_mktag(1), Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(MR_mktag(1), Spec_30, 3) = ((MR_Box) (Context_13));
              MR_hl_field(MR_mktag(1), Spec_30, 4) = ((MR_Box) (Pieces_29));
            }
            {
              Specs_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Specs_22, 0) = ((MR_Box) (Spec_30));
              MR_hl_field(MR_mktag(1), Specs_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word AllArityPredIds_23;
            MR_Word Preds_24;
            MR_Word OtherUserArities_25;
            MR_Integer UserArityInt_26;
            MR_Word OtherArities_27;
            MR_Word DescPieces_28;
            MR_Word Var_131;
            MR_Word Var_136;

            hlds__pred_table__predicate_table_lookup_pf_sym_5_p_0(PredTable_19, (MR_Integer) 1, PredOrFunc_15, SymName_16, &AllArityPredIds_23);
            hlds__hlds_module__module_info_get_preds_2_p_0(ModuleInfo_10, &Preds_24);
            hlds__hlds_error_util__find_user_arities_other_than_4_p_0(Preds_24, AllArityPredIds_23, UserArity_17, &OtherUserArities_25);
            UserArityInt_26 = (MR_Integer) (UserArity_17);
            OtherArities_27 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_2[4]), OtherUserArities_25);
            {
              Var_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_131, 0) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(MR_mktag(3), Var_131, 1) = ((MR_Box) (PragmaName_14));
            }
            {
              DescPieces_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), DescPieces_28, 0) = ((MR_Box) (Var_131));
              MR_hl_field(MR_mktag(1), DescPieces_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[140])));
            }
            {
              Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (PredOrFunc_15));
            }
            hlds__make_hlds_error__report_undefined_pred_or_func_error_8_p_0(Var_136, SymName_16, UserArityInt_26, OtherArities_27, Context_13, DescPieces_28, (MR_Word) ((MR_Unsigned) 0U), &Specs_22);
          }
          break;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybePredId_18 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_22));
      }
    }
    else
    {
      MR_Word Var_156 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_21, (MR_Integer) 1))));
      MR_Word Var_157 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_21, (MR_Integer) 0))));

      if ((Var_156 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybePredId_18 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_157));
        }
      else
      {
        MR_Word Var_43;
        MR_Word Specs_143;

        {
          Var_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[2]));
          MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0_2));
          MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (IsFullyQualified_11));
          MR_hl_field(MR_mktag(0), Var_43, 4) = ((MR_Box) ((MR_Integer) 1));
        }
        mercury__require__expect_3_p_0(Var_43, (MR_String) "predicate \140hlds.make_hlds.add_pragma.look_up_pragma_pf_sym_arity\'/9", (MR_String) "two or more PredIds but is_fully_qualified");
        switch (FailHandling_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Specs_143 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_49;
              MR_Word Var_52;
              MR_Word Var_53;
              MR_Word Pieces_139;
              MR_Word Spec_140;

              {
                Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) ((MR_Unsigned) 24U));
                MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (PragmaName_14));
              }
              {
                Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
                MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[119])));
              }
              {
                Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[145])));
                MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_52));
              }
              {
                Pieces_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_139, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[143])));
                MR_hl_field(MR_mktag(1), Pieces_139, 1) = ((MR_Box) (Var_49));
              }
              {
                Spec_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_140, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.look_up_pragma_pf_sym_arity\'/9"));
                MR_hl_field(MR_mktag(1), Spec_140, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_140, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(MR_mktag(1), Spec_140, 3) = ((MR_Box) (Context_13));
                MR_hl_field(MR_mktag(1), Spec_140, 4) = ((MR_Box) (Pieces_139));
              }
              {
                Specs_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Specs_143, 0) = ((MR_Box) (Spec_140));
                MR_hl_field(MR_mktag(1), Specs_143, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word StartPieces_35;
              MR_Word PredIdPiecesList_36;
              MR_Word PredIdPieces_37;
              MR_Word MainPieces_38;
              MR_Word Msg_40;
              MR_Word Var_66;
              MR_Word Var_67;
              MR_Word Var_68;
              MR_Word Var_71;
              MR_Word Var_72;
              MR_Word Var_85;
              MR_Word Var_99;
              MR_Word Var_100;
              MR_Word Var_108;
              MR_Word Spec_138;

              {
                Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) ((MR_Unsigned) 22U));
                MR_hl_field(MR_mktag(3), Var_67, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_15));
              }
              {
                Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_72, 0) = ((MR_Box) ((MR_Unsigned) 24U));
                MR_hl_field(MR_mktag(3), Var_72, 1) = ((MR_Box) (PragmaName_14));
              }
              {
                Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
                MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[125])));
              }
              {
                Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[147])));
                MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_71));
              }
              {
                Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
                MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_68));
              }
              {
                StartPieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), StartPieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[146])));
                MR_hl_field(MR_mktag(1), StartPieces_35, 1) = ((MR_Box) (Var_66));
              }
              {
                Var_85 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_6[0]));
                MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0_3));
                MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (ModuleInfo_10));
                MR_hl_field(MR_mktag(0), Var_85, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              PredIdPiecesList_36 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[3]), Var_85, PredIds_21);
              PredIdPieces_37 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(PredIdPiecesList_36, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[149])));
              MainPieces_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), StartPieces_35, PredIdPieces_37);
              {
                Var_100 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_100, 0) = ((MR_Box) (MainPieces_38));
              }
              {
                Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
                MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[151])));
              }
              {
                Msg_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Msg_40, 0) = ((MR_Box) (Context_13));
                MR_hl_field(MR_mktag(1), Msg_40, 1) = ((MR_Box) (Var_99));
              }
              {
                Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (Msg_40));
                MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_138 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_138, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.look_up_pragma_pf_sym_arity\'/9"));
                MR_hl_field(MR_mktag(0), Spec_138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Spec_138, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(MR_mktag(0), Spec_138, 3) = ((MR_Box) (Var_108));
              }
              {
                Specs_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Specs_143, 0) = ((MR_Box) (Spec_138));
                MR_hl_field(MR_mktag(1), Specs_143, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybePredId_18 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_143));
        }
      }
    }
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__mark_pred_as_obsolete_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_error_util__project_user_arity_int_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__mark_pred_as_obsolete_7_p_0(
  MR_Word ObsoletePredInfo_8,
  MR_Word PragmaStatus_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_30,
  MR_Word * STATE_VARIABLE_ModuleInfo_31,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33)
{
  {
    MR_Word PredSpec_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ObsoletePredInfo_8, (MR_Integer) 0))));
    MR_Word ObsoleteInFavourOf_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ObsoletePredInfo_8, (MR_Integer) 1))));
    MR_Word PFU_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredSpec_13, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word SymName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSpec_13, (MR_Integer) 1))));
    MR_Word UserArity_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSpec_13, (MR_Integer) 2))));
    MR_Word PredIds_18;
    MR_Word OtherUserArities_19;

    hlds__make_hlds__add_pragma__get_matching_pred_ids_6_p_0(STATE_VARIABLE_ModuleInfo_0_30, PFU_15, SymName_16, UserArity_17, &PredIds_18, &OtherUserArities_19);
    if ((PredIds_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer UserArityInt_28 = (MR_Integer) (UserArity_17);
      MR_Word OtherArities_29;
      MR_Word Var_41;

      OtherArities_29 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_2[3]), OtherUserArities_19);
      Var_41 = parse_tree__prog_item__pfu_to_maybe_pred_or_func_1_f_0(PFU_15);
      hlds__make_hlds_error__report_undefined_pred_or_func_error_8_p_0(Var_41, SymName_16, UserArityInt_28, OtherArities_29, Context_10, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[49])), STATE_VARIABLE_Specs_0_32, STATE_VARIABLE_Specs_33);
      *STATE_VARIABLE_ModuleInfo_31 = STATE_VARIABLE_ModuleInfo_0_30;
    }
    else
    {
      MR_Word PredTable0_22;
      MR_Word Preds0_23;
      MR_Word WrongStatus_24;
      MR_Word Preds_25;
      MR_Word PredTable_26;

      hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_30, &PredTable0_22);
      hlds__pred_table__predicate_table_get_preds_2_p_0(PredTable0_22, &Preds0_23);
      hlds__make_hlds__add_pragma__mark_pred_ids_as_obsolete_7_p_0(ObsoleteInFavourOf_14, PragmaStatus_9, PredIds_18, (MR_Integer) 0, &WrongStatus_24, Preds0_23, &Preds_25);
      switch (WrongStatus_24) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Specs_33 = STATE_VARIABLE_Specs_0_32;
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_44;
            MR_Integer UserArityInt_62;
            MR_Word SNA_63;
            MR_Word Pieces_64;
            MR_Word Spec_65;
            MR_Word Var_68;
            MR_Word Var_70;
            MR_Word Var_73;
            MR_Word Var_76;
            MR_Word Var_77;
            MR_Word Var_78;
            MR_Word Var_79;

            switch (PFU_15) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                Var_44 = (MR_String) "function";
                break;
              case (MR_Integer) 0:
                Var_44 = (MR_String) "predicate";
                break;
              case (MR_Integer) 2:
                Var_44 = (MR_String) "predicate or function";
                break;
            }
            UserArityInt_62 = (MR_Integer) (UserArity_17);
            {
              SNA_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SNA_63, 0) = ((MR_Box) (SymName_16));
              MR_hl_field(MR_mktag(0), SNA_63, 1) = ((MR_Box) (UserArityInt_62));
            }
            {
              Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_77, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Var_77, 1) = ((MR_Box) (Var_44));
            }
            {
              Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(MR_mktag(3), Var_79, 1) = ((MR_Box) (SNA_63));
            }
            {
              Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_79));
              MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[131])));
            }
            {
              Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
              MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_78));
            }
            {
              Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[141])));
              MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_76));
            }
            {
              Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[139])));
              MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_73));
            }
            {
              Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[142])));
              MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_70));
            }
            {
              Pieces_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[136])));
              MR_hl_field(MR_mktag(1), Pieces_64, 1) = ((MR_Box) (Var_68));
            }
            {
              Spec_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_65, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.pragma_status_error\'/7"));
              MR_hl_field(MR_mktag(1), Spec_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_65, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(MR_mktag(1), Spec_65, 3) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(1), Spec_65, 4) = ((MR_Box) (Pieces_64));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_33 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_65));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_32));
            }
          }
          break;
      }
      hlds__pred_table__predicate_table_set_preds_3_p_0(Preds_25, PredTable0_22, &PredTable_26);
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_26, STATE_VARIABLE_ModuleInfo_0_30, STATE_VARIABLE_ModuleInfo_31);
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__mark_pred_ids_as_obsolete_7_p_0(
  MR_Word ObsoleteInFavourOf_1,
  MR_Word PragmaStatus_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_WrongStatus_0_4,
  MR_Word * STATE_VARIABLE_WrongStatus_5,
  MR_Word STATE_VARIABLE_PredTable_0_6,
  MR_Word * STATE_VARIABLE_PredTable_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_PredTable_7 = STATE_VARIABLE_PredTable_0_6;
      *STATE_VARIABLE_WrongStatus_5 = STATE_VARIABLE_WrongStatus_0_4;
    }
    else
    {
      MR_Word PredId_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word PredIds_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word PredInfo0_22;
      MR_Word MaybeObsoleteInFavourOf0_23;
      MR_Word MaybeObsoleteInFavourOf_24;
      MR_Word PredInfo_26;
      MR_Word STATE_VARIABLE_WrongStatus_32_32;
      MR_Word STATE_VARIABLE_PredTable_34_34;
      MR_Box conv0_PredInfo0_22;
      MR_Word Var_31;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_WrongStatus_0_4;
      MR_Word next_value_of_STATE_VARIABLE_PredTable_0_6;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), STATE_VARIABLE_PredTable_0_6, ((MR_Box) (PredId_18)), &conv0_PredInfo0_22);
      PredInfo0_22 = ((MR_Word) (conv0_PredInfo0_22));
      succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(PredInfo0_22);
      if (succeeded)
      {
        Var_31 = hlds__status__pred_status_is_exported_1_f_0(PragmaStatus_2);
        succeeded = (Var_31 == (MR_Integer) 0);
      }
      if (succeeded)
        STATE_VARIABLE_WrongStatus_32_32 = (MR_Integer) 1;
      else
        STATE_VARIABLE_WrongStatus_32_32 = STATE_VARIABLE_WrongStatus_0_4;
      hlds__hlds_pred__pred_info_get_obsolete_in_favour_of_2_p_0(PredInfo0_22, &MaybeObsoleteInFavourOf0_23);
      if ((MaybeObsoleteInFavourOf0_23 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MaybeObsoleteInFavourOf_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeObsoleteInFavourOf_24, 0) = ((MR_Box) (ObsoleteInFavourOf_1));
        }
      else
      {
        MR_Word ObsoleteInFavourOf0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeObsoleteInFavourOf0_23, (MR_Integer) 0))));
        MR_Word Var_33;

        Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), ObsoleteInFavourOf0_25, ObsoleteInFavourOf_1);
        {
          MaybeObsoleteInFavourOf_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeObsoleteInFavourOf_24, 0) = ((MR_Box) (Var_33));
        }
      }
      hlds__hlds_pred__pred_info_set_obsolete_in_favour_of_3_p_0(MaybeObsoleteInFavourOf_24, PredInfo0_22, &PredInfo_26);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_18)), ((MR_Box) (PredInfo_26)), STATE_VARIABLE_PredTable_0_6, &STATE_VARIABLE_PredTable_34_34);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = PredIds_19;
      next_value_of_STATE_VARIABLE_WrongStatus_0_4 = STATE_VARIABLE_WrongStatus_32_32;
      next_value_of_STATE_VARIABLE_PredTable_0_6 = STATE_VARIABLE_PredTable_34_34;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_WrongStatus_0_4 = next_value_of_STATE_VARIABLE_WrongStatus_0_4;
      STATE_VARIABLE_PredTable_0_6 = next_value_of_STATE_VARIABLE_PredTable_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pred_marker_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Markers_6;

    hlds__make_hlds__add_pragma__get_pred_markers_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Markers_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Markers_6));
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pred_marker_10_p_0(
  MR_String PragmaName_11,
  MR_Word PredSymNameArity_12,
  MR_Word Status_13,
  MR_Word Context_14,
  MR_Word Marker_15,
  MR_Word ConflictMarkers_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  {
    MR_bool succeeded;
    MR_Word MustBeExported_19;
    MR_Word PredIds_20;
    MR_Word PredTable_21;
    MR_Word PredMarkerSets_22;
    MR_Word PredMarkers_23;
    MR_Word ConflictingPredMarkerSet_24;
    MR_Word ConflictingPredMarkers0_25;
    MR_Word STATE_VARIABLE_Specs_35_35;
    MR_Word Var_36;
    MR_Word Var_37;

    succeeded = mercury__builtin__semidet_fail_0_p_0();
    if (succeeded)
      MustBeExported_19 = (MR_Integer) 1;
    else
      MustBeExported_19 = (MR_Integer) 0;
    hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_54_95_95_91_55_93_95_48_11_p_0(Marker_15, PragmaName_11, PredSymNameArity_12, Status_13, MustBeExported_19, Context_14, STATE_VARIABLE_ModuleInfo_0_29, STATE_VARIABLE_ModuleInfo_30, &PredIds_20, STATE_VARIABLE_Specs_0_31, &STATE_VARIABLE_Specs_35_35);
    hlds__hlds_module__module_info_get_preds_2_p_0(*STATE_VARIABLE_ModuleInfo_30, &PredTable_21);
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pred_marker_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (PredTable_21));
    }
    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[2]), Var_36, PredIds_20, &PredMarkerSets_22);
    PredMarkers_23 = mercury__set__union_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0), PredMarkerSets_22);
    Var_37 = mercury__set__list_to_set_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0), ConflictMarkers_16);
    mercury__set__intersect_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0), PredMarkers_23, Var_37, &ConflictingPredMarkerSet_24);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0), ConflictingPredMarkerSet_24, &ConflictingPredMarkers0_25);
    if ((ConflictingPredMarkers0_25 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_35_35;
    else
    {
      MR_Word ConflictingPredMarkers_28;
      MR_Word Var_39;

      succeeded = mercury__list__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0), ((MR_Box) ((MR_Integer) 22)), ConflictingPredMarkers0_25);
      if (succeeded)
      {
        Var_39 = (MR_Integer) 7;
        succeeded = mercury__list__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0), ((MR_Box) (Var_39)), ConflictingPredMarkers0_25);
      }
      if (succeeded)
        mercury__list__delete_all_3_p_1((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0), ConflictingPredMarkers0_25, ((MR_Box) ((MR_Integer) 7)), &ConflictingPredMarkers_28);
      else
        ConflictingPredMarkers_28 = ConflictingPredMarkers0_25;
      hlds__make_hlds__add_pragma__pragma_conflict_error_6_p_0(PredSymNameArity_12, Context_14, PragmaName_11, ConflictingPredMarkers_28, STATE_VARIABLE_Specs_35_35, STATE_VARIABLE_Specs_32);
    }
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_54_95_95_91_55_93_95_48_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_error_util__project_user_arity_int_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_54_95_95_91_55_93_95_48_11_p_0(
  MR_Word Var_54,
  MR_String PragmaName_12,
  MR_Word PredSpec_13,
  MR_Word Status_14,
  MR_Word MustBeExported_15,
  MR_Word Context_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_35,
  MR_Word * STATE_VARIABLE_ModuleInfo_36,
  MR_Word * PredIds_19,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38)
{
  {
    MR_Word PFU_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredSpec_13, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word PredSymName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSpec_13, (MR_Integer) 1))));
    MR_Word UserArity_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSpec_13, (MR_Integer) 2))));
    MR_Word OtherUserArities_24;

    hlds__make_hlds__add_pragma__get_matching_pred_ids_6_p_0(STATE_VARIABLE_ModuleInfo_0_35, PFU_21, PredSymName_22, UserArity_23, PredIds_19, &OtherUserArities_24);
    if ((*PredIds_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer UserArityInt_32 = (MR_Integer) (UserArity_23);
      MR_Word OtherArities_33;
      MR_Word DescPieces_34;
      MR_Word Var_40;

      OtherArities_33 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_2[2]), OtherUserArities_24);
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (PragmaName_12));
      }
      {
        DescPieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), DescPieces_34, 0) = ((MR_Box) (Var_40));
        MR_hl_field(MR_mktag(1), DescPieces_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[140])));
      }
      hlds__make_hlds_error__report_undefined_pred_or_func_error_8_p_0((MR_Word) ((MR_Unsigned) 0U), PredSymName_22, UserArityInt_32, OtherArities_33, Context_16, DescPieces_34, STATE_VARIABLE_Specs_0_37, STATE_VARIABLE_Specs_38);
      *STATE_VARIABLE_ModuleInfo_36 = STATE_VARIABLE_ModuleInfo_0_35;
    }
    else
    {
      MR_Word PredTable0_27;
      MR_Word Preds0_28;
      MR_Word Preds_29;
      MR_Word WrongStatus_30;
      MR_Word PredTable_31;

      hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_35, &PredTable0_27);
      hlds__pred_table__predicate_table_get_preds_2_p_0(PredTable0_27, &Preds0_28);
      hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_55_95_95_91_51_93_95_48_7_p_0(Var_54, *PredIds_19, Status_14, MustBeExported_15, Preds0_28, &Preds_29, &WrongStatus_30);
      switch (WrongStatus_30) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Specs_38 = STATE_VARIABLE_Specs_0_37;
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_47;
            MR_Integer UserArityInt_65;
            MR_Word SNA_66;
            MR_Word Pieces_67;
            MR_Word Spec_68;
            MR_Word Var_71;
            MR_Word Var_72;
            MR_Word Var_73;
            MR_Word Var_76;
            MR_Word Var_79;
            MR_Word Var_80;
            MR_Word Var_81;
            MR_Word Var_82;

            switch (PFU_21) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                Var_47 = (MR_String) "function";
                break;
              case (MR_Integer) 0:
                Var_47 = (MR_String) "predicate";
                break;
              case (MR_Integer) 2:
                Var_47 = (MR_String) "predicate or function";
                break;
            }
            UserArityInt_65 = (MR_Integer) (UserArity_23);
            {
              SNA_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SNA_66, 0) = ((MR_Box) (PredSymName_22));
              MR_hl_field(MR_mktag(0), SNA_66, 1) = ((MR_Box) (UserArityInt_65));
            }
            {
              Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_72, 0) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(MR_mktag(3), Var_72, 1) = ((MR_Box) (PragmaName_12));
            }
            {
              Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_80, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Var_80, 1) = ((MR_Box) (Var_47));
            }
            {
              Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (SNA_66));
            }
            {
              Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Var_82));
              MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[131])));
            }
            {
              Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
              MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_81));
            }
            {
              Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[141])));
              MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_79));
            }
            {
              Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[139])));
              MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_76));
            }
            {
              Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
              MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_73));
            }
            {
              Pieces_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[136])));
              MR_hl_field(MR_mktag(1), Pieces_67, 1) = ((MR_Box) (Var_71));
            }
            {
              Spec_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_68, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.pragma_status_error\'/7"));
              MR_hl_field(MR_mktag(1), Spec_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_68, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(MR_mktag(1), Spec_68, 3) = ((MR_Box) (Context_16));
              MR_hl_field(MR_mktag(1), Spec_68, 4) = ((MR_Box) (Pieces_67));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_38 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_68));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_37));
            }
          }
          break;
      }
      hlds__pred_table__predicate_table_set_preds_3_p_0(Preds_29, PredTable0_27, &PredTable_31);
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_31, STATE_VARIABLE_ModuleInfo_0_35, STATE_VARIABLE_ModuleInfo_36);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_55_95_95_91_51_93_95_48_7_p_0(
  MR_Word Var_32,
  MR_Word HeadVar__1_1,
  MR_Word Status_3,
  MR_Word MustBeExported_4,
  MR_Word STATE_VARIABLE_PredTable_0_5,
  MR_Word * STATE_VARIABLE_PredTable_6,
  MR_Word * HeadVar__7_7)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__7_7 = (MR_Integer) 0;
      *STATE_VARIABLE_PredTable_6 = STATE_VARIABLE_PredTable_0_5;
    }
    else
    {
      MR_Word PredId_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PredIds_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word PredInfo0_21;
      MR_Word PredInfo_22;
      MR_Word WrongStatus0_23;
      MR_Word WrongStatus1_24;
      MR_Word STATE_VARIABLE_PredTable_28_28;
      MR_Word Markers0_37;
      MR_Word Markers_38;
      MR_Box conv0_PredInfo0_21;
      MR_Word Var_27;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), STATE_VARIABLE_PredTable_0_5, ((MR_Box) (PredId_14)), &conv0_PredInfo0_21);
      PredInfo0_21 = ((MR_Word) (conv0_PredInfo0_21));
      hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_21, &Markers0_37);
      hlds__hlds_pred__add_marker_3_p_0(Var_32, Markers0_37, &Markers_38);
      hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_38, PredInfo0_21, &PredInfo_22);
      succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(PredInfo_22);
      if (succeeded)
      {
        succeeded = (MustBeExported_4 == (MR_Integer) 1);
        if (succeeded)
        {
          Var_27 = (MR_Word) (Status_3);
          succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 12U));
        }
      }
      if (succeeded)
        WrongStatus0_23 = (MR_Integer) 1;
      else
        WrongStatus0_23 = (MR_Integer) 0;
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_14)), ((MR_Box) (PredInfo_22)), STATE_VARIABLE_PredTable_0_5, &STATE_VARIABLE_PredTable_28_28);
      hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_55_95_95_91_51_93_95_48_7_p_0(Var_32, PredIds_15, Status_3, MustBeExported_4, STATE_VARIABLE_PredTable_28_28, STATE_VARIABLE_PredTable_6, &WrongStatus1_24);
      mercury__bool__or_3_p_0(WrongStatus0_23, WrongStatus1_24, HeadVar__7_7);
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__get_matching_pred_ids_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PFU_8,
  MR_Word SymName_9,
  MR_Word UserArity_10,
  MR_Word * PredIds_11,
  MR_Word * OtherUserArities_12)
{
  {
    MR_Word PredTable0_13;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_7, &PredTable0_13);
    if (((MR_tag((MR_Word) SymName_9)) == (MR_Integer) 1))
    {
      switch (PFU_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word Var_24;
            MR_Integer PredFormArityInt_35;

            parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 1, UserArity_10, &Var_24);
            PredFormArityInt_35 = (MR_Integer) (Var_24);
            hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable0_13, (MR_Integer) 0, (MR_Integer) 1, SymName_9, PredFormArityInt_35, PredIds_11);
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Integer PredFormArityInt_18;
            MR_Word Var_28;

            parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 0, UserArity_10, &Var_28);
            PredFormArityInt_18 = (MR_Integer) (Var_28);
            hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable0_13, (MR_Integer) 0, (MR_Integer) 0, SymName_9, PredFormArityInt_18, PredIds_11);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer UserArityInt_17 = (MR_Integer) (UserArity_10);

            hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredTable0_13, (MR_Integer) 0, SymName_9, UserArityInt_17, PredIds_11);
          }
          break;
      }
      if ((*PredIds_11 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word SymOnlyPredIds_19;
        MR_Word Preds0_20;

        hlds__pred_table__predicate_table_lookup_sym_4_p_0(PredTable0_13, (MR_Integer) 0, SymName_9, &SymOnlyPredIds_19);
        hlds__hlds_module__module_info_get_preds_2_p_0(ModuleInfo_7, &Preds0_20);
        hlds__hlds_error_util__find_user_arities_other_than_4_p_0(Preds0_20, SymOnlyPredIds_19, UserArity_10, OtherUserArities_12);
      }
      else
        *OtherUserArities_12 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_pragma.get_matching_pred_ids\'/6", (MR_String) "unqualified name");
        return;
      }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__pragma_conflict_error_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__pragma_conflict_error_6_p_0(
  MR_Word PredSpec_7,
  MR_Word Context_8,
  MR_String PragmaName_9,
  MR_Word ConflictMarkers_10,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  {
    MR_Word PFU_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredSpec_7, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word PredSymName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSpec_7, (MR_Integer) 1))));
    MR_Word UserArity_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSpec_7, (MR_Integer) 2))));
    MR_Integer UserArityInt_15 = (MR_Integer) (UserArity_14);
    MR_Word SNA_16;
    MR_Word PorFPieces_17;
    MR_Word ConflictNames_18;
    MR_Word Pieces_19;
    MR_Word Spec_20;
    MR_Word Var_30;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_String Var_44;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Box conv1_Var_44;

    {
      SNA_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SNA_16, 0) = ((MR_Box) (PredSymName_13));
      MR_hl_field(MR_mktag(0), SNA_16, 1) = ((MR_Box) (UserArityInt_15));
    }
    switch (PFU_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        PorFPieces_17 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[133]));
        break;
      case (MR_Integer) 0:
        PorFPieces_17 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[135]));
        break;
      case (MR_Integer) 2:
        PorFPieces_17 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_2[1]), ConflictMarkers_10, &ConflictNames_18);
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (PragmaName_9));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[138])));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[136])));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
    }
    Var_40 = parse_tree__error_util__list_to_pieces_1_f_0(ConflictNames_18);
    conv1_Var_44 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ConflictNames_18, ((MR_Box) ((MR_String) "pragma for")), ((MR_Box) ((MR_String) "pragmas for")));
    Var_44 = ((MR_String) (conv1_Var_44));
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (Var_44));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) ((MR_Unsigned) 10U));
      MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) (SNA_16));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[23])));
    }
    Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PorFPieces_17, Var_49);
    Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_42, Var_48);
    Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_40, Var_41);
    Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_30, Var_39);
    {
      Spec_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.pragma_conflict_error\'/6"));
      MR_hl_field(MR_mktag(1), Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_20, 3) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(1), Spec_20, 4) = ((MR_Box) (Pieces_19));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_22 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_20));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_21));
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma____Unify____add_marker_pred_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__add_pragma____Unify____add_marker_pred_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma____Compare____add_marker_pred_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds__add_pragma____Compare____add_marker_pred_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma____Unify____lookup_failure_handling_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__add_pragma____Unify____lookup_failure_handling_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma____Compare____lookup_failure_handling_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds__add_pragma____Compare____lookup_failure_handling_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__hlds__make_hlds__add_pragma__init(void)
{
}

void mercury__hlds__make_hlds__add_pragma__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__type_ctor_info_add_marker_pred_info_0);
	MR_register_type_ctor_info(&hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__type_ctor_info_lookup_failure_handling_0);
}

void mercury__hlds__make_hlds__add_pragma__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__add_pragma__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.add_pragma.
