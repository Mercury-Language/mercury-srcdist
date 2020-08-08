/*
** Automatically generated from `add_pragma.m'
** by the Mercury compiler,
** version rotd-2020-08-08
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
#include "getopt_io.mih"
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

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_VA_TypeInfo_Struct2 hlds__make_hlds__add_pragma____vti_pred_2hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_lookup_failure_handling_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_lookup_failure_handling_0_1;

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_functor_desc_lookup_failure_handling_0_2;

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_value_ordered_lookup_failure_handling_0[3];

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_name_ordered_lookup_failure_handling_0[3];

static const MR_Integer hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__functor_number_map_lookup_failure_handling_0[3];

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__IntroducedFrom__pred__look_up_pragma_pf_sym_arity__1757__1_2_p_0(
  MR_Word IsFullyQualified_11,
  MR_Word HeadVar__2_42);

static void MR_CALL 
hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_impl_pragma_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__add_pragma__check_required_feature_set_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_require_tail_rec_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_115_101_108_101_99_116_101_100_95_109_111_100_101_95_111_102_95_112_114_101_100_95_95_104_111_49_95_95_91_57_93_95_48_10_p_0(
  MR_Word Var_59,
  MR_Word Var_60,
  MR_Word Var_61,
  MR_Word PredId_11,
  MR_Word PFSymNameArity_12,
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
  MR_Word PFSymNameArity_12,
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
  MR_Word PFSymNameArity_12,
  MR_Word Modes_13,
  MR_String PragmaName_14,
  MR_Word Context_15,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34);

static void MR_CALL 
hlds__make_hlds__add_pragma__IntroducedFrom__pred__add_pragma_termination2_info__1581__1_6_p_0(
  MR_Word Context_8,
  MR_Word MaybePragmaSuccessArgSizeInfo_12,
  MR_Word MaybePragmaFailureArgSizeInfo_13,
  MR_Word MaybePragmaTerminationInfo_14,
  MR_Word LambdaHeadVar__1_35,
  MR_Word * LambdaHeadVar__2_36);

static void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_115_101_108_101_99_116_101_100_95_109_111_100_101_95_111_102_95_112_114_101_100_95_95_104_111_52_95_95_91_56_93_95_48_10_p_0(
  MR_Word Var_59,
  MR_Word Var_60,
  MR_Word PredId_11,
  MR_Word PFSymNameArity_12,
  MR_Word Modes_13,
  MR_String PragmaName_14,
  MR_Word Context_15,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34);

static void MR_CALL 
hlds__make_hlds__add_pragma__IntroducedFrom__pred__add_pragma_termination_info__1548__1_4_p_0(
  MR_Word MaybeArgSizeInfo_21,
  MR_Word MaybeTerminationInfo_22,
  MR_Word LambdaHeadVar__1_35,
  MR_Word * LambdaHeadVar__2_36);

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
  MR_Word PFSymNameArity_12,
  MR_Word Modes_13,
  MR_String PragmaName_14,
  MR_Word Context_15,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34);

static void MR_CALL 
hlds__make_hlds__add_pragma__IntroducedFrom__pred__mark_proc_as_obsolete__894__1_3_p_0(
  MR_Word ObsoleteInFavourOf_14,
  MR_Word LambdaHeadVar__1_41,
  MR_Word * LambdaHeadVar__2_42);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pred_marker_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_54_95_95_91_55_93_95_48_11_p_0(
  MR_Word Var_45,
  MR_String PragmaName_12,
  MR_Word PredSymNameArity_13,
  MR_Word Status_14,
  MR_Word MustBeExported_15,
  MR_Word Context_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_32,
  MR_Word * STATE_VARIABLE_ModuleInfo_33,
  MR_Word * PredIds_19,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35);

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


static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_1[179][2];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_2[2][3];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_3[1][4];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_4[2][5];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_5[2][6];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_6[1][7];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_7[1][13];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_8[1][11];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_9[1][8];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_10[1][9];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_11[3][1];




static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_1[179][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_String) "external_func"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 19U)),
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
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
    ((MR_Box) ((MR_String) "must also be exported."))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "obsolete"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[25])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "that supports concurrent execution."))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: this module must be compiled in a grade"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[44])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "that uses conservative garbage collection."))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[48])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "that uses double precision floats."))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[51])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "spf"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[23])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "do not contain the grade modifier"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[54])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Grades that use double precision floats"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[56])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "that supports memoisation."))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[60])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "that supports executing conjuntions in parallel."))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[63])))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "that uses single precision floats."))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17])))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[66])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "contain the grade modifier"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[54])))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Grades that use single precision floats"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[69])))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the strict sequential semantics."))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: this module must be compiled using"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[73])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "that supports trailing."))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[76]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[77])))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "trseg"))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[23])))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[80])))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "tr"))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[82])))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the grade modifiers"))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[84])))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Grades that support trailing contain"))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[86])))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "fact_table"))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[25])))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: ambiguous predicate/function name."))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17])))
  },
  /* row 93 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[92])))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[93])))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declarations must always be exported."))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17])))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "pragma oisu"))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[97])))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration must always be abstract exported."))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[101])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The type in a"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[102])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is undefined."))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "expected arity is"))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[107]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[108])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 21U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[113]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The possible matches are:"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[115]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[114])))
  },
  /* row 117 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[116])))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[117])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "may be necessary to select the right match."))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[119]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17])))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "An explicit module qualifier"))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[120])))
  },
  /* row 123 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 124 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration conflicts with previous"))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[124]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 126 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[126]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 128 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for exported predicate or function"))
  },
  /* row 129 */
  {
    ((MR_Box) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "obsolete"))
  },
  /* row 130 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Internal compiler error:"))
  },
  /* row 131 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "unknown predicate name in"))
  },
  /* row 132 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "ambiguous predicate name in"))
  },
  /* row 133 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: ambiguous"))
  },
  /* row 134 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "name in"))
  },
  /* row 135 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[135]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 137 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[122])))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma_scalar_common_1[137]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 139 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for undeclared mode of"))
  },
  /* row 140 */
  {
    ((MR_Box) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "obsolete_proc"))
  },
  /* row 141 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Duplicate"))
  },
  /* row 142 */
  {
    ((MR_Box) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "oisu"))
  },
  /* row 143 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declarations for"))
  },
  /* row 144 */
  {
    ((MR_Box) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "foreign_export"))
  },
  /* row 145 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for a procedure that has"))
  },
  /* row 146 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a declared determinism of"))
  },
  /* row 147 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: conflicting"))
  },
  /* row 148 */
  {
    ((MR_Box) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "require_tail_recursion"))
  },
  /* row 149 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "pragmas for"))
  },
  /* row 150 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or one of its modes."))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[150]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 152 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Earlier pragma is here."))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[152]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 154 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 155 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "pragma fact_table"))
  },
  /* row 156 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 157 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 158 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row 159 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[58])))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma_scalar_common_1[159]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 161 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_11[0])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[160])))
  },
  /* row 162 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[71])))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma_scalar_common_1[162]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 164 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_11[1])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[163])))
  },
  /* row 165 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[88])))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma_scalar_common_1[165]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 167 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_11[2])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[166])))
  },
  /* row 168 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the"))
  },
  /* row 169 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "predicate specification"))
  },
  /* row 170 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "within the"))
  },
  /* row 171 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "pragma oisu"))
  },
  /* row 172 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 173 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 174 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: predicate"))
  },
  /* row 175 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "one of"))
  },
  /* row 176 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has the wrong arity."))
  },
  /* row 177 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Actual arity is"))
  },
  /* row 178 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: ambiguous predicate name"))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_2[2][3] = {
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

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_4[2][5] = {
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pred_name_arity_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_8[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_require_tail_recursion_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[52])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[67])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[78])))
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
  UINT8_C(17),
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
  NULL
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

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_value_ordered_lookup_failure_handling_0[3] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__add_pragma____Unify____lookup_failure_handling_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_pragma____Compare____lookup_failure_handling_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_pragma",
  (MR_String) "lookup_failure_handling",
  {     hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_name_ordered_lookup_failure_handling_0 },
  {     hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__enum_value_ordered_lookup_failure_handling_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__functor_number_map_lookup_failure_handling_0
};

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__IntroducedFrom__pred__look_up_pragma_pf_sym_arity__1757__1_2_p_0(
  MR_Word IsFullyQualified_11,
  MR_Word HeadVar__2_42)
{
  {
    MR_bool succeeded = (IsFullyQualified_11 == HeadVar__2_42);

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

void MR_CALL 
hlds__make_hlds__add_pragma__transform_selected_mode_of_pred_10_p_0(
  MR_Word PredId_11,
  MR_Word PFSymNameArity_12,
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
        MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (PragmaName_14));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (PFSymNameArity_12));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[23])));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[139])));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
      }
      {
        Pieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[123])));
        MR_hl_field(MR_mktag(1), Pieces_29, 1) = ((MR_Box) (Var_38));
      }
      {
        Spec_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_30, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.transform_selected_mode_of_pred\'/10"));
        MR_hl_field(MR_mktag(1), Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 16U));
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
  MR_Word PredNameArity_15,
  MR_Word * PredId_16,
  MR_Integer STATE_VARIABLE_SeqNum_0_40,
  MR_Integer * STATE_VARIABLE_SeqNum_41,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43)
{
  {
    MR_Word PredicateTable_19;
    MR_Word PredName_20;
    MR_Integer PredArity_21;
    MR_Word PredIds_22;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_11, &PredicateTable_19);
    PredName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArity_15, (MR_Integer) 0))));
    PredArity_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArity_15, (MR_Integer) 1))));
    hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredicateTable_19, (MR_Integer) 0, PredName_20, PredArity_21, &PredIds_22);
    if ((PredIds_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word LooseArityPredIds_23;
      MR_Word Spec_27;

      hlds__pred_table__predicate_table_lookup_sym_4_p_0(PredicateTable_19, (MR_Integer) 0, PredName_20, &LooseArityPredIds_23);
      if ((LooseArityPredIds_23 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TypeName_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_13, (MR_Integer) 0))));
        MR_Integer TypeArity_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_13, (MR_Integer) 1))));
        MR_Word Pieces_26;
        MR_Word Var_159;
        MR_Word Var_160;
        MR_Word Var_161;
        MR_Word Var_162;
        MR_Word Var_163;
        MR_Word Var_166;
        MR_Word Var_169;
        MR_Word Var_172;
        MR_Word Var_175;
        MR_Word Var_176;
        MR_Word Var_177;
        MR_Word Var_178;
        MR_Word Var_181;
        MR_Word Var_183;
        MR_Word Var_186;
        MR_Word Var_187;
        MR_Word Var_188;

        {
          Var_160 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_160, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_160, 1) = ((MR_Box) (STATE_VARIABLE_SeqNum_0_40));
        }
        {
          Var_162 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_162, 0) = ((MR_Box) (Kind_14));
        }
        {
          Var_177 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_177, 0) = ((MR_Box) (TypeName_24));
          MR_hl_field(MR_mktag(0), Var_177, 1) = ((MR_Box) (TypeArity_25));
        }
        {
          Var_176 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_176, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(MR_mktag(3), Var_176, 1) = ((MR_Box) (Var_177));
        }
        {
          Var_188 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_188, 0) = ((MR_Box) (PredName_20));
          MR_hl_field(MR_mktag(0), Var_188, 1) = ((MR_Box) (PredArity_21));
        }
        {
          Var_187 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_187, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(MR_mktag(3), Var_187, 1) = ((MR_Box) (Var_188));
        }
        {
          Var_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_186, 0) = ((MR_Box) (Var_187));
          MR_hl_field(MR_mktag(1), Var_186, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[106])));
        }
        {
          Var_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_183, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[174])));
          MR_hl_field(MR_mktag(1), Var_183, 1) = ((MR_Box) (Var_186));
        }
        {
          Var_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_181, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(1), Var_181, 1) = ((MR_Box) (Var_183));
        }
        {
          Var_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_178, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[173])));
          MR_hl_field(MR_mktag(1), Var_178, 1) = ((MR_Box) (Var_181));
        }
        {
          Var_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_175, 0) = ((MR_Box) (Var_176));
          MR_hl_field(MR_mktag(1), Var_175, 1) = ((MR_Box) (Var_178));
        }
        {
          Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_172, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[172])));
          MR_hl_field(MR_mktag(1), Var_172, 1) = ((MR_Box) (Var_175));
        }
        {
          Var_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_169, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[171])));
          MR_hl_field(MR_mktag(1), Var_169, 1) = ((MR_Box) (Var_172));
        }
        {
          Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_166, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[170])));
          MR_hl_field(MR_mktag(1), Var_166, 1) = ((MR_Box) (Var_169));
        }
        {
          Var_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_163, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[169])));
          MR_hl_field(MR_mktag(1), Var_163, 1) = ((MR_Box) (Var_166));
        }
        {
          Var_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_161, 0) = ((MR_Box) (Var_162));
          MR_hl_field(MR_mktag(1), Var_161, 1) = ((MR_Box) (Var_163));
        }
        {
          Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_159, 0) = ((MR_Box) (Var_160));
          MR_hl_field(MR_mktag(1), Var_159, 1) = ((MR_Box) (Var_161));
        }
        {
          Pieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[168])));
          MR_hl_field(MR_mktag(1), Pieces_26, 1) = ((MR_Box) (Var_159));
        }
        {
          Spec_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_27, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.find_unique_pred_for_oisu\'/10"));
          MR_hl_field(MR_mktag(1), Spec_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_27, 2) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(1), Spec_27, 3) = ((MR_Box) (Context_12));
          MR_hl_field(MR_mktag(1), Spec_27, 4) = ((MR_Box) (Pieces_26));
        }
      }
      else
      {
        MR_Word ArityPieces_30;
        MR_Word SortedArityPieces_31;
        MR_Word ExpArities_33;
        MR_Word Var_90;
        MR_Word Var_99;
        MR_Word Var_102;
        MR_Word Var_103;
        MR_Word Var_104;
        MR_Word Var_105;
        MR_Word Var_106;
        MR_Word Var_109;
        MR_Word Var_112;
        MR_Word Var_115;
        MR_Word Var_118;
        MR_Word Var_119;
        MR_Word Var_120;
        MR_Word Var_121;
        MR_Word Var_124;
        MR_Word Var_126;
        MR_Word Var_129;
        MR_Word Var_130;
        MR_Word Var_131;
        MR_Word Var_132;
        MR_Word Var_135;
        MR_Word Var_138;
        MR_Word Var_139;
        MR_Word Var_147;
        MR_Word TypeName_201;
        MR_Integer TypeArity_202;
        MR_Word Pieces_203;

        {
          Var_90 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_5[1]));
          MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0_1));
          MR_hl_field(MR_mktag(0), Var_90, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_90, 3) = ((MR_Box) (ModuleInfo_11));
        }
        mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_90, LooseArityPredIds_23, &ArityPieces_30);
        mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ArityPieces_30, &SortedArityPieces_31);
        if ((SortedArityPieces_31 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_pragma.find_unique_pred_for_oisu\'/10", (MR_String) "no arity pieces");
            return;
          }
        else
        {
          MR_Word Var_212 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SortedArityPieces_31, (MR_Integer) 1))));

          if ((Var_212 == (MR_Word) ((MR_Unsigned) 0U)))
            ExpArities_33 = SortedArityPieces_31;
          else
          {
            MR_Word Var_94;

            Var_94 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", SortedArityPieces_31);
            {
              ExpArities_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ExpArities_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[175])));
              MR_hl_field(MR_mktag(1), ExpArities_33, 1) = ((MR_Box) (Var_94));
            }
          }
        }
        TypeName_201 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_13, (MR_Integer) 0))));
        TypeArity_202 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_13, (MR_Integer) 1))));
        {
          Var_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_103, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_103, 1) = ((MR_Box) (STATE_VARIABLE_SeqNum_0_40));
        }
        {
          Var_105 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_105, 0) = ((MR_Box) (Kind_14));
        }
        {
          Var_120 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_120, 0) = ((MR_Box) (TypeName_201));
          MR_hl_field(MR_mktag(0), Var_120, 1) = ((MR_Box) (TypeArity_202));
        }
        {
          Var_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_119, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(MR_mktag(3), Var_119, 1) = ((MR_Box) (Var_120));
        }
        {
          Var_131 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_131, 0) = ((MR_Box) (PredName_20));
          MR_hl_field(MR_mktag(0), Var_131, 1) = ((MR_Box) (PredArity_21));
        }
        {
          Var_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_130, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(MR_mktag(3), Var_130, 1) = ((MR_Box) (Var_131));
        }
        {
          Var_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_139, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_139, 1) = ((MR_Box) (PredArity_21));
        }
        {
          Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (Var_139));
          MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[110])));
        }
        {
          Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[177])));
          MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) (Var_138));
        }
        {
          Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[176])));
          MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (Var_135));
        }
        {
          Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (Var_130));
          MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (Var_132));
        }
        {
          Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[174])));
          MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (Var_129));
        }
        {
          Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (Var_126));
        }
        {
          Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[173])));
          MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (Var_124));
        }
        {
          Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (Var_119));
          MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) (Var_121));
        }
        {
          Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[172])));
          MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (Var_118));
        }
        {
          Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[171])));
          MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) (Var_115));
        }
        {
          Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[170])));
          MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (Var_112));
        }
        {
          Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[169])));
          MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (Var_109));
        }
        {
          Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (Var_105));
          MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (Var_106));
        }
        {
          Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (Var_103));
          MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (Var_104));
        }
        {
          Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[168])));
          MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (Var_102));
        }
        Var_147 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ExpArities_33, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[23])));
        Pieces_203 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_99, Var_147);
        {
          Spec_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_27, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.find_unique_pred_for_oisu\'/10"));
          MR_hl_field(MR_mktag(1), Spec_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_27, 2) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(1), Spec_27, 3) = ((MR_Box) (Context_12));
          MR_hl_field(MR_mktag(1), Spec_27, 4) = ((MR_Box) (Pieces_203));
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_43 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_27));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_42));
      }
      *PredId_16 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    }
    else
    {
      MR_Word Var_214 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_22, (MR_Integer) 1))));
      MR_Word Var_215 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_22, (MR_Integer) 0))));

      if ((Var_214 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *PredId_16 = Var_215;
        *STATE_VARIABLE_Specs_43 = STATE_VARIABLE_Specs_0_42;
      }
      else
      {
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_55;
        MR_Word Var_58;
        MR_Word Var_61;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_70;
        MR_Word Var_72;
        MR_Word Var_75;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word TypeName_204 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_13, (MR_Integer) 0))));
        MR_Integer TypeArity_205 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_13, (MR_Integer) 1))));
        MR_Word Pieces_206;
        MR_Word Spec_207;

        {
          Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (STATE_VARIABLE_SeqNum_0_40));
        }
        {
          Var_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_51, 0) = ((MR_Box) (Kind_14));
        }
        {
          Var_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (TypeName_204));
          MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (TypeArity_205));
        }
        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (Var_66));
        }
        {
          Var_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (PredName_20));
          MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (PredArity_21));
        }
        {
          Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (Var_77));
        }
        {
          Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
          MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[23])));
        }
        {
          Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[178])));
          MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_75));
        }
        {
          Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_72));
        }
        {
          Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[173])));
          MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_70));
        }
        {
          Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
          MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_67));
        }
        {
          Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[172])));
          MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_64));
        }
        {
          Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[142])));
          MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_61));
        }
        {
          Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[170])));
          MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_58));
        }
        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[169])));
          MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_55));
        }
        {
          Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
          MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_52));
        }
        {
          Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
          MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_50));
        }
        {
          Pieces_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_206, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[168])));
          MR_hl_field(MR_mktag(1), Pieces_206, 1) = ((MR_Box) (Var_48));
        }
        {
          Spec_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_207, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.find_unique_pred_for_oisu\'/10"));
          MR_hl_field(MR_mktag(1), Spec_207, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_207, 2) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(1), Spec_207, 3) = ((MR_Box) (Context_12));
          MR_hl_field(MR_mktag(1), Spec_207, 4) = ((MR_Box) (Pieces_206));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_43 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_207));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_42));
        }
        *PredId_16 = hlds__hlds_pred__invalid_pred_id_0_f_0();
      }
    }
    *STATE_VARIABLE_SeqNum_41 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_SeqNum_0_40 + (MR_Unsigned) 1);
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
                  MR_hl_field(MR_mktag(1), Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 16U));
                  MR_hl_field(MR_mktag(1), Spec_12, 3) = ((MR_Box) (Context_7));
                  MR_hl_field(MR_mktag(1), Spec_12, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[46])));
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
                  MR_hl_field(MR_mktag(1), Spec_247, 2) = ((MR_Box) ((MR_Unsigned) 16U));
                  MR_hl_field(MR_mktag(1), Spec_247, 3) = ((MR_Box) (Context_7));
                  MR_hl_field(MR_mktag(1), Spec_247, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[49])));
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

          libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 252, &SinglePrecFloat_213);
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
                  MR_hl_field(MR_mktag(1), Msg_206, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[161])));
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
                  MR_hl_field(MR_mktag(0), Spec_204, 2) = ((MR_Box) ((MR_Unsigned) 16U));
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
                  MR_hl_field(MR_mktag(1), Spec_217, 2) = ((MR_Box) ((MR_Unsigned) 16U));
                  MR_hl_field(MR_mktag(1), Spec_217, 3) = ((MR_Box) (Context_7));
                  MR_hl_field(MR_mktag(1), Spec_217, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[61])));
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
                  MR_hl_field(MR_mktag(1), Spec_223, 2) = ((MR_Box) ((MR_Unsigned) 16U));
                  MR_hl_field(MR_mktag(1), Spec_223, 3) = ((MR_Box) (Context_7));
                  MR_hl_field(MR_mktag(1), Spec_223, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[64])));
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

          libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 252, &SinglePrecFloat_13);
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
                  MR_hl_field(MR_mktag(1), Msg_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[164])));
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
                  MR_hl_field(MR_mktag(0), Spec_198, 2) = ((MR_Box) ((MR_Unsigned) 16U));
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

          libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 193, &ReorderConj_19);
          libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 194, &ReorderDisj_20);
          libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 195, &FullyStrict_21);
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
              MR_hl_field(MR_mktag(1), Spec_241, 2) = ((MR_Box) ((MR_Unsigned) 16U));
              MR_hl_field(MR_mktag(1), Spec_241, 3) = ((MR_Box) (Context_7));
              MR_hl_field(MR_mktag(1), Spec_241, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[75])));
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

          libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 246, &UseTrail_18);
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
                  MR_hl_field(MR_mktag(1), Msg_231, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[167])));
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
                  MR_hl_field(MR_mktag(0), Spec_229, 2) = ((MR_Box) ((MR_Unsigned) 16U));
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
hlds__make_hlds__add_pragma__pragma_status_error_5_p_0(
  MR_Word PredSymNameArity_6,
  MR_Word Context_7,
  MR_String PragmaName_8,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  {
    MR_Word PredSymName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSymNameArity_6, (MR_Integer) 0))));
    MR_Integer Arity_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredSymNameArity_6, (MR_Integer) 1))));
    MR_Word Pieces_12;
    MR_Word Spec_13;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;

    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_19, 0) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(3), Var_19, 1) = ((MR_Box) (PragmaName_8));
    }
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (PredSymName_10));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (Arity_11));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 10U));
      MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[40])));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[128])));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_20));
    }
    {
      Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[123])));
      MR_hl_field(MR_mktag(1), Pieces_12, 1) = ((MR_Box) (Var_18));
    }
    {
      Spec_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.pragma_status_error\'/5"));
      MR_hl_field(MR_mktag(1), Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(1), Spec_13, 3) = ((MR_Box) (Context_7));
      MR_hl_field(MR_mktag(1), Spec_13, 4) = ((MR_Box) (Pieces_12));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_15 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
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

void MR_CALL 
hlds__make_hlds__add_pragma__do_add_pred_marker_11_p_0(
  MR_String PragmaName_12,
  MR_Word PredSymNameArity_13,
  MR_Word Status_14,
  MR_Word MustBeExported_15,
  MR_Word Context_16,
  MR_Word UpdatePredInfo_17,
  MR_Word STATE_VARIABLE_ModuleInfo_0_32,
  MR_Word * STATE_VARIABLE_ModuleInfo_33,
  MR_Word * PredIds_19,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35)
{
  {
    MR_Word PredSymName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSymNameArity_13, (MR_Integer) 0))));
    MR_Integer Arity_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredSymNameArity_13, (MR_Integer) 1))));
    MR_Word OtherArities_23;

    hlds__make_hlds__add_pragma__get_matching_pred_ids_5_p_0(STATE_VARIABLE_ModuleInfo_0_32, PredSymName_21, Arity_22, PredIds_19, &OtherArities_23);
    if ((*PredIds_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word DescPieces_31;
      MR_Word Var_36;

      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (PragmaName_12));
      }
      {
        DescPieces_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), DescPieces_31, 0) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(1), DescPieces_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[127])));
      }
      hlds__make_hlds_error__report_undefined_pred_or_func_error_8_p_0((MR_Word) ((MR_Unsigned) 0U), PredSymName_21, Arity_22, OtherArities_23, Context_16, DescPieces_31, STATE_VARIABLE_Specs_0_34, STATE_VARIABLE_Specs_35);
      *STATE_VARIABLE_ModuleInfo_33 = STATE_VARIABLE_ModuleInfo_0_32;
    }
    else
    {
      MR_Word PredTable0_26;
      MR_Word Preds0_27;
      MR_Word Preds_28;
      MR_Word WrongStatus_29;
      MR_Word PredTable_30;

      hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_32, &PredTable0_26);
      hlds__pred_table__predicate_table_get_preds_2_p_0(PredTable0_26, &Preds0_27);
      hlds__make_hlds__add_pragma__pragma_add_marker_7_p_0(*PredIds_19, UpdatePredInfo_17, Status_14, MustBeExported_15, Preds0_27, &Preds_28, &WrongStatus_29);
      switch (WrongStatus_29) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Specs_35 = STATE_VARIABLE_Specs_0_34;
          break;
        case (MR_Integer) 1:
          {
            MR_Word PredSymName_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSymNameArity_13, (MR_Integer) 0))));
            MR_Integer Arity_52 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredSymNameArity_13, (MR_Integer) 1))));
            MR_Word Pieces_53;
            MR_Word Spec_54;
            MR_Word Var_57;
            MR_Word Var_58;
            MR_Word Var_59;
            MR_Word Var_62;
            MR_Word Var_63;
            MR_Word Var_64;

            {
              Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (PragmaName_12));
            }
            {
              Var_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (PredSymName_51));
              MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (Arity_52));
            }
            {
              Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_63, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(MR_mktag(3), Var_63, 1) = ((MR_Box) (Var_64));
            }
            {
              Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
              MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[40])));
            }
            {
              Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[128])));
              MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_62));
            }
            {
              Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
              MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_59));
            }
            {
              Pieces_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[123])));
              MR_hl_field(MR_mktag(1), Pieces_53, 1) = ((MR_Box) (Var_57));
            }
            {
              Spec_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_54, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.pragma_status_error\'/5"));
              MR_hl_field(MR_mktag(1), Spec_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_54, 2) = ((MR_Box) ((MR_Unsigned) 16U));
              MR_hl_field(MR_mktag(1), Spec_54, 3) = ((MR_Box) (Context_16));
              MR_hl_field(MR_mktag(1), Spec_54, 4) = ((MR_Box) (Pieces_53));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_35 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_54));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_34));
            }
          }
          break;
      }
      hlds__pred_table__predicate_table_set_preds_3_p_0(Preds_28, PredTable0_26, &PredTable_30);
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_30, STATE_VARIABLE_ModuleInfo_0_32, STATE_VARIABLE_ModuleInfo_33);
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
            MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 18U));
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
            MR_hl_field(MR_mktag(1), Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[158])));
            MR_hl_field(MR_mktag(1), Pieces_23, 1) = ((MR_Box) (Var_32));
          }
          {
            Spec_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.mark_pred_as_external\'/6"));
            MR_hl_field(MR_mktag(1), Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 16U));
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
    MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 0))));
    MR_Integer Arity_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 1))));
    MR_Word PredOrFunc_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Integer ModeNum_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 3))));
    MR_Word MaybePredId_17;

    hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_25, (MR_Integer) 0, (MR_Integer) 0, Context_8, (MR_String) "mm_tabling_info", PredOrFunc_15, SymName_13, Arity_14, &MaybePredId_17);
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
    MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 0))));
    MR_Integer Arity_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 1))));
    MR_Word PredOrFunc_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Integer ModeNum_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 3))));
    MR_Word MaybePredId_17;

    hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_25, (MR_Integer) 0, (MR_Integer) 0, Context_8, (MR_String) "trailing_info", PredOrFunc_15, SymName_13, Arity_14, &MaybePredId_17);
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
    MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 0))));
    MR_Integer Arity_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 1))));
    MR_Word PredOrFunc_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Integer ModeNum_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 3))));
    MR_Word MaybePredId_17;

    hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_25, (MR_Integer) 0, (MR_Integer) 0, Context_8, (MR_String) "exceptions", PredOrFunc_15, SymName_13, Arity_14, &MaybePredId_17);
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
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  {
    MR_Word PredNameArityPFMn_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnusedArgsInfo_7, (MR_Integer) 0))));
    MR_Word UnusedArgs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnusedArgsInfo_7, (MR_Integer) 1))));
    MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 0))));
    MR_Integer Arity_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 1))));
    MR_Word PredOrFunc_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Integer ModeNum_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 3))));
    MR_Word MaybePredId_17;

    hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_22, (MR_Integer) 0, (MR_Integer) 2, Context_8, (MR_String) "unused_args", PredOrFunc_15, SymName_13, Arity_14, &MaybePredId_17);
    if (((MR_tag((MR_Word) MaybePredId_17)) == (MR_Integer) 0))
    {
      MR_Word Specs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybePredId_17, (MR_Integer) 0))));

      *STATE_VARIABLE_Specs_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Specs_10, STATE_VARIABLE_Specs_0_24);
      *STATE_VARIABLE_ModuleInfo_23 = STATE_VARIABLE_ModuleInfo_0_22;
    }
    else
    {
      MR_Word PredId_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredId_17, (MR_Integer) 0))));
      MR_Word UnusedArgInfo0_19;
      MR_Integer ProcId_20;
      MR_Word UnusedArgInfo_21;
      MR_Word Var_30;

      hlds__hlds_module__module_info_get_unused_arg_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_22, &UnusedArgInfo0_19);
      hlds__hlds_pred__proc_id_to_int_2_p_1(&ProcId_20, ModeNum_16);
      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (PredId_18));
        MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (ProcId_20));
      }
      mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[1]), ((MR_Box) (Var_30)), ((MR_Box) (UnusedArgs_12)), UnusedArgInfo0_19, &UnusedArgInfo_21);
      hlds__hlds_module__module_info_set_unused_arg_info_3_p_0(UnusedArgInfo_21, STATE_VARIABLE_ModuleInfo_0_22, STATE_VARIABLE_ModuleInfo_23);
      *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_impl_pragma_tabled_7_p_0(
  MR_Word SectionItem_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27,
  MR_Word STATE_VARIABLE_QualInfo_0_28,
  MR_Word * STATE_VARIABLE_QualInfo_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31)
{
  {
    MR_Word ItemMercuryStatus_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionItem_8, (MR_Integer) 0))));
    MR_Word ItemPragmaInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionItem_8, (MR_Integer) 1))));
    MR_Word TabledInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragmaInfo_13, (MR_Integer) 0))));
    MR_Word Context_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragmaInfo_13, (MR_Integer) 1))));
    MR_Word Globals_17;
    MR_Word TypeLayout_18;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_26, &Globals_17);
    libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 253, &TypeLayout_18);
    switch (TypeLayout_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word EvalMethod_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TabledInfo_14, (MR_Integer) 0))));
          MR_Word Pieces_24;
          MR_Word Spec_25;
          MR_Word Var_35;
          MR_Word Var_36;
          MR_String Var_37;

          Var_37 = parse_tree__prog_out__eval_method_to_string_1_f_0(EvalMethod_20);
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (Var_37));
          }
          {
            Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
            MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[21])));
          }
          {
            Pieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[123])));
            MR_hl_field(MR_mktag(1), Pieces_24, 1) = ((MR_Box) (Var_35));
          }
          {
            Spec_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_25, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_impl_pragma_tabled\'/7"));
            MR_hl_field(MR_mktag(1), Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_25, 2) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(1), Spec_25, 3) = ((MR_Box) (Context_15));
            MR_hl_field(MR_mktag(1), Spec_25, 4) = ((MR_Box) (Pieces_24));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_31 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_25));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_30));
          }
          *STATE_VARIABLE_ModuleInfo_27 = STATE_VARIABLE_ModuleInfo_0_26;
          *STATE_VARIABLE_QualInfo_29 = STATE_VARIABLE_QualInfo_0_28;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word PredStatus_19;

          hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_12, &PredStatus_19);
          hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_9_p_0(TabledInfo_14, Context_15, PredStatus_19, STATE_VARIABLE_ModuleInfo_0_26, STATE_VARIABLE_ModuleInfo_27, STATE_VARIABLE_QualInfo_0_28, STATE_VARIABLE_QualInfo_29, STATE_VARIABLE_Specs_0_30, STATE_VARIABLE_Specs_31);
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_impl_pragma_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ModuleInfo_26;
    MR_Word conv0_STATE_VARIABLE_Specs_28;

    hlds__make_hlds__add_pragma__mark_pred_as_external_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleInfo_26, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_28);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_26));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_28));
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_impl_pragma_9_p_0(
  MR_Word SectionItem_10,
  MR_Word STATE_VARIABLE_RevPragmaTabled_0_56,
  MR_Word * STATE_VARIABLE_RevPragmaTabled_57,
  MR_Word STATE_VARIABLE_ModuleInfo_0_58,
  MR_Word * STATE_VARIABLE_ModuleInfo_59,
  MR_Word STATE_VARIABLE_QualInfo_0_60,
  MR_Word * STATE_VARIABLE_QualInfo_61,
  MR_Word STATE_VARIABLE_Specs_0_62,
  MR_Word * STATE_VARIABLE_Specs_63)
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
          hlds__hlds_module__module_add_foreign_decl_code_user_3_p_0(ForeignDeclCode_24, STATE_VARIABLE_ModuleInfo_0_58, STATE_VARIABLE_ModuleInfo_59);
          *STATE_VARIABLE_RevPragmaTabled_57 = STATE_VARIABLE_RevPragmaTabled_0_56;
          *STATE_VARIABLE_Specs_63 = STATE_VARIABLE_Specs_0_62;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word FCInfo_25 = (MR_Word) (MR_body((MR_Word) (Pragma_17), (MR_Integer) 1));
          MR_Word BodyCode_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FCInfo_25, (MR_Integer) 1))));
          MR_Word ForeignBodyCode_27;
          MR_Word Lang_153 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FCInfo_25, (MR_Integer) 0))) & (MR_Integer) 3);

          hlds__make_hlds__make_hlds_warn__warn_suspicious_foreign_code_5_p_0(Lang_153, BodyCode_26, Context_18, STATE_VARIABLE_Specs_0_62, STATE_VARIABLE_Specs_63);
          {
            ForeignBodyCode_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ForeignBodyCode_27, 0) = (MR_Box) ((MR_Unsigned) (Lang_153));
            MR_hl_field(MR_mktag(0), ForeignBodyCode_27, 1) = ((MR_Box) (BodyCode_26));
            MR_hl_field(MR_mktag(0), ForeignBodyCode_27, 2) = ((MR_Box) (Context_18));
          }
          hlds__hlds_module__module_add_foreign_body_code_3_p_0(ForeignBodyCode_27, STATE_VARIABLE_ModuleInfo_0_58, STATE_VARIABLE_ModuleInfo_59);
          *STATE_VARIABLE_RevPragmaTabled_57 = STATE_VARIABLE_RevPragmaTabled_0_56;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word FPInfo_28 = (MR_Word) (MR_body((MR_Word) (Pragma_17), (MR_Integer) 2));
          MR_Word PredStatus_29;
          MR_Word Var_147;

          hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_15, &PredStatus_29);
          {
            Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (SeqNum_19));
          }
          hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(FPInfo_28, PredStatus_29, Context_18, Var_147, STATE_VARIABLE_ModuleInfo_0_58, STATE_VARIABLE_ModuleInfo_59, STATE_VARIABLE_Specs_0_62, STATE_VARIABLE_Specs_63);
          *STATE_VARIABLE_RevPragmaTabled_57 = STATE_VARIABLE_RevPragmaTabled_0_56;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma_17, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word FEInfo_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_17, (MR_Integer) 1))));

              hlds__make_hlds__add_pragma__add_pragma_foreign_proc_export_6_p_0(FEInfo_30, Context_18, STATE_VARIABLE_ModuleInfo_0_58, STATE_VARIABLE_ModuleInfo_59, STATE_VARIABLE_Specs_0_62, STATE_VARIABLE_Specs_63);
              *STATE_VARIABLE_RevPragmaTabled_57 = STATE_VARIABLE_RevPragmaTabled_0_56;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ExternalInfo_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_17, (MR_Integer) 1))));
              MR_Word PredSymName_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExternalInfo_31, (MR_Integer) 0))));
              MR_Integer Arity_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ExternalInfo_31, (MR_Integer) 1))));
              MR_Word PorF_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ExternalInfo_31, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word MaybeBackend_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExternalInfo_31, (MR_Integer) 3))));
              MR_Word Globals_36;
              MR_Word CurrentBackend_37;

              hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_58, &Globals_36);
              CurrentBackend_37 = libs__globals__lookup_current_backend_1_f_0(Globals_36);
              if ((MaybeBackend_35 == (MR_Word) ((MR_Unsigned) 0U)))
                succeeded = MR_TRUE;
              else
              {
                MR_Word Backend_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBackend_35, (MR_Integer) 0))));

                succeeded = (Backend_38 == CurrentBackend_37);
              }
              if (succeeded)
              {
                MR_Word PredicateTable0_39;
                MR_Word PredIds_40;
                MR_Word AllArityPredIds_41;
                MR_Word MissingPieces_42;

                hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_58, &PredicateTable0_39);
                switch (PorF_34) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(PredicateTable0_39, (MR_Integer) 0, PredSymName_32, Arity_33, &PredIds_40);
                      hlds__pred_table__predicate_table_lookup_func_sym_4_p_0(PredicateTable0_39, (MR_Integer) 0, PredSymName_32, &AllArityPredIds_41);
                      MissingPieces_42 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[12]));
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      hlds__pred_table__predicate_table_lookup_pred_sym_arity_5_p_0(PredicateTable0_39, (MR_Integer) 0, PredSymName_32, Arity_33, &PredIds_40);
                      hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0(PredicateTable0_39, (MR_Integer) 0, PredSymName_32, &AllArityPredIds_41);
                      MissingPieces_42 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[14]));
                    }
                    break;
                }
                if ((PredIds_40 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word PredTable0_45;
                  MR_Word OtherArities_46;
                  MR_Word Var_140;

                  hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_58, &PredTable0_45);
                  hlds__hlds_error_util__find_pred_arities_other_than_4_p_0(PredTable0_45, AllArityPredIds_41, Arity_33, &OtherArities_46);
                  {
                    Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) (PorF_34));
                  }
                  hlds__make_hlds_error__report_undefined_pred_or_func_error_8_p_0(Var_140, PredSymName_32, Arity_33, OtherArities_46, Context_18, MissingPieces_42, STATE_VARIABLE_Specs_0_62, STATE_VARIABLE_Specs_63);
                  *STATE_VARIABLE_ModuleInfo_59 = STATE_VARIABLE_ModuleInfo_0_58;
                }
                else
                {
                  MR_Word Var_142;
                  MR_Box conv3_STATE_VARIABLE_ModuleInfo_59;
                  MR_Box conv2_STATE_VARIABLE_Specs_63;

                  {
                    Var_142 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_142, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_10[0]));
                    MR_hl_field(MR_mktag(0), Var_142, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_impl_pragma_9_p_0_1));
                    MR_hl_field(MR_mktag(0), Var_142, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), Var_142, 3) = ((MR_Box) (Context_18));
                  }
                  mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[0]), Var_142, PredIds_40, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_58)), &conv3_STATE_VARIABLE_ModuleInfo_59, ((MR_Box) (STATE_VARIABLE_Specs_0_62)), &conv2_STATE_VARIABLE_Specs_63);
                  *STATE_VARIABLE_ModuleInfo_59 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_59));
                  *STATE_VARIABLE_Specs_63 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_63));
                }
              }
              else
              {
                *STATE_VARIABLE_Specs_63 = STATE_VARIABLE_Specs_0_62;
                *STATE_VARIABLE_ModuleInfo_59 = STATE_VARIABLE_ModuleInfo_0_58;
              }
              *STATE_VARIABLE_RevPragmaTabled_57 = STATE_VARIABLE_RevPragmaTabled_0_56;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word FTInfo_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_17, (MR_Integer) 1))));
              MR_Word PredStatus_154;

              hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_15, &PredStatus_154);
              hlds__make_hlds__add_pragma__add_pragma_fact_table_7_p_0(FTInfo_47, PredStatus_154, Context_18, STATE_VARIABLE_ModuleInfo_0_58, STATE_VARIABLE_ModuleInfo_59, STATE_VARIABLE_Specs_0_62, STATE_VARIABLE_Specs_63);
              *STATE_VARIABLE_RevPragmaTabled_57 = STATE_VARIABLE_RevPragmaTabled_0_56;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TabledInfo_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_17, (MR_Integer) 1))));
              MR_Word ItemPragmaTabledInfo_49;
              MR_Word TabledSectionItem_50;

              {
                ItemPragmaTabledInfo_49 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ItemPragmaTabledInfo_49, 0) = ((MR_Box) (TabledInfo_48));
                MR_hl_field(MR_mktag(0), ItemPragmaTabledInfo_49, 1) = ((MR_Box) (Context_18));
                MR_hl_field(MR_mktag(0), ItemPragmaTabledInfo_49, 2) = ((MR_Box) (SeqNum_19));
              }
              {
                TabledSectionItem_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TabledSectionItem_50, 0) = ((MR_Box) (ItemMercuryStatus_15));
                MR_hl_field(MR_mktag(0), TabledSectionItem_50, 1) = ((MR_Box) (ItemPragmaTabledInfo_49));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_RevPragmaTabled_57 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TabledSectionItem_50));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevPragmaTabled_0_56));
              }
              *STATE_VARIABLE_ModuleInfo_59 = STATE_VARIABLE_ModuleInfo_0_58;
              *STATE_VARIABLE_Specs_63 = STATE_VARIABLE_Specs_0_62;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word PredSymNameArity_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_17, (MR_Integer) 1))));
              MR_Word PredStatus_155;

              hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_15, &PredStatus_155);
              hlds__make_hlds__add_pragma__add_pred_marker_10_p_0((MR_String) "inline", PredSymNameArity_51, PredStatus_155, Context_18, (MR_Integer) 6, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[16])), STATE_VARIABLE_ModuleInfo_0_58, STATE_VARIABLE_ModuleInfo_59, STATE_VARIABLE_Specs_0_62, STATE_VARIABLE_Specs_63);
              *STATE_VARIABLE_RevPragmaTabled_57 = STATE_VARIABLE_RevPragmaTabled_0_56;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word PredStatus_156;
              MR_Word PredSymNameArity_157 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_17, (MR_Integer) 1))));

              hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_15, &PredStatus_156);
              hlds__make_hlds__add_pragma__add_pred_marker_10_p_0((MR_String) "no_inline", PredSymNameArity_157, PredStatus_156, Context_18, (MR_Integer) 7, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[157])), STATE_VARIABLE_ModuleInfo_0_58, STATE_VARIABLE_ModuleInfo_59, STATE_VARIABLE_Specs_0_62, STATE_VARIABLE_Specs_63);
              *STATE_VARIABLE_RevPragmaTabled_57 = STATE_VARIABLE_RevPragmaTabled_0_56;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word PredStatus_158;
              MR_Word PredSymNameArity_159 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_17, (MR_Integer) 1))));

              hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_15, &PredStatus_158);
              hlds__make_hlds__add_pragma__add_pred_marker_10_p_0((MR_String) "consider_used", PredSymNameArity_159, PredStatus_158, Context_18, (MR_Integer) 9, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_58, STATE_VARIABLE_ModuleInfo_59, STATE_VARIABLE_Specs_0_62, STATE_VARIABLE_Specs_63);
              *STATE_VARIABLE_RevPragmaTabled_57 = STATE_VARIABLE_RevPragmaTabled_0_56;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word PredNameArity_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_17, (MR_Integer) 1))));
              MR_Word STATE_VARIABLE_ModuleInfo_91_91;
              MR_Word STATE_VARIABLE_Specs_92_92;
              MR_Word PredStatus_160;

              hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_15, &PredStatus_160);
              hlds__make_hlds__add_pragma__add_pred_marker_10_p_0((MR_String) "mode_check_clauses", PredNameArity_52, PredStatus_160, Context_18, (MR_Integer) 22, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_58, &STATE_VARIABLE_ModuleInfo_91_91, STATE_VARIABLE_Specs_0_62, &STATE_VARIABLE_Specs_92_92);
              hlds__make_hlds__add_pragma__add_pred_marker_10_p_0((MR_String) "mode_check_clauses", PredNameArity_52, PredStatus_160, Context_18, (MR_Integer) 7, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[157])), STATE_VARIABLE_ModuleInfo_91_91, STATE_VARIABLE_ModuleInfo_59, STATE_VARIABLE_Specs_92_92, STATE_VARIABLE_Specs_63);
              *STATE_VARIABLE_RevPragmaTabled_57 = STATE_VARIABLE_RevPragmaTabled_0_56;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word PredStatus_161;
              MR_Word PredNameArity_162 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_17, (MR_Integer) 1))));

              hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_15, &PredStatus_161);
              hlds__make_hlds__add_pragma__add_pred_marker_10_p_0((MR_String) "no_determinism_warning", PredNameArity_162, PredStatus_161, Context_18, (MR_Integer) 5, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_58, STATE_VARIABLE_ModuleInfo_59, STATE_VARIABLE_Specs_0_62, STATE_VARIABLE_Specs_63);
              *STATE_VARIABLE_RevPragmaTabled_57 = STATE_VARIABLE_RevPragmaTabled_0_56;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word TailrecWarningPragma_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_17, (MR_Integer) 1))));

              hlds__make_hlds__add_pragma__add_pragma_require_tail_rec_6_p_0(TailrecWarningPragma_53, Context_18, STATE_VARIABLE_ModuleInfo_0_58, STATE_VARIABLE_ModuleInfo_59, STATE_VARIABLE_Specs_0_62, STATE_VARIABLE_Specs_63);
              *STATE_VARIABLE_RevPragmaTabled_57 = STATE_VARIABLE_RevPragmaTabled_0_56;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word PredStatus_163;
              MR_Word PredNameArity_164 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_17, (MR_Integer) 1))));

              hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_15, &PredStatus_163);
              hlds__make_hlds__add_pragma__add_pred_marker_10_p_0((MR_String) "promise_pure", PredNameArity_164, PredStatus_163, Context_18, (MR_Integer) 15, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_58, STATE_VARIABLE_ModuleInfo_59, STATE_VARIABLE_Specs_0_62, STATE_VARIABLE_Specs_63);
              *STATE_VARIABLE_RevPragmaTabled_57 = STATE_VARIABLE_RevPragmaTabled_0_56;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word PredStatus_165;
              MR_Word PredNameArity_166 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_17, (MR_Integer) 1))));

              hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_15, &PredStatus_165);
              hlds__make_hlds__add_pragma__add_pred_marker_10_p_0((MR_String) "promise_semipure", PredNameArity_166, PredStatus_165, Context_18, (MR_Integer) 16, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_58, STATE_VARIABLE_ModuleInfo_59, STATE_VARIABLE_Specs_0_62, STATE_VARIABLE_Specs_63);
              *STATE_VARIABLE_RevPragmaTabled_57 = STATE_VARIABLE_RevPragmaTabled_0_56;
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word PredStatus_167;
              MR_Word PredNameArity_168 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_17, (MR_Integer) 1))));

              hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_15, &PredStatus_167);
              hlds__make_hlds__add_pragma__add_pred_marker_10_p_0((MR_String) "promise_equivalent_clauses", PredNameArity_168, PredStatus_167, Context_18, (MR_Integer) 17, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_58, STATE_VARIABLE_ModuleInfo_59, STATE_VARIABLE_Specs_0_62, STATE_VARIABLE_Specs_63);
              *STATE_VARIABLE_RevPragmaTabled_57 = STATE_VARIABLE_RevPragmaTabled_0_56;
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word RFSInfo_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_17, (MR_Integer) 1))));
              MR_Word FeatureSet_55 = (MR_Word) (RFSInfo_54);

              hlds__make_hlds__add_pragma__check_required_feature_set_7_p_0(FeatureSet_55, ItemMercuryStatus_15, Context_18, STATE_VARIABLE_ModuleInfo_0_58, STATE_VARIABLE_ModuleInfo_59, STATE_VARIABLE_Specs_0_62, STATE_VARIABLE_Specs_63);
              *STATE_VARIABLE_RevPragmaTabled_57 = STATE_VARIABLE_RevPragmaTabled_0_56;
            }
            break;
        }
        break;
    }
    *STATE_VARIABLE_QualInfo_61 = STATE_VARIABLE_QualInfo_0_60;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_fact_table_7_p_0(
  MR_Word FTInfo_8,
  MR_Word PredStatus_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_37,
  MR_Word * STATE_VARIABLE_ModuleInfo_38,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40)
{
  {
    MR_Word PredSymNameArity_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FTInfo_8, (MR_Integer) 0))));
    MR_String FileName_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), FTInfo_8, (MR_Integer) 1))));
    MR_Word PredSymName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSymNameArity_13, (MR_Integer) 0))));
    MR_Integer Arity_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredSymNameArity_13, (MR_Integer) 1))));
    MR_Word PredIds_17;
    MR_Word OtherArities_18;

    hlds__make_hlds__add_pragma__get_matching_pred_ids_5_p_0(STATE_VARIABLE_ModuleInfo_0_37, PredSymName_15, Arity_16, &PredIds_17, &OtherArities_18);
    if ((PredIds_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      hlds__make_hlds_error__report_undefined_pred_or_func_error_8_p_0((MR_Word) ((MR_Unsigned) 0U), PredSymName_15, Arity_16, OtherArities_18, Context_10, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[90])), STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
      *STATE_VARIABLE_ModuleInfo_38 = STATE_VARIABLE_ModuleInfo_0_37;
    }
    else
    {
      MR_Word HeadPredId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_17, (MR_Integer) 0))));
      MR_Word TailPredIds_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_17, (MR_Integer) 1))));

      if ((TailPredIds_20 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word PredInfo0_22;
        MR_Word PredInfo_24;
        MR_String C_HeaderCode_25;
        MR_Integer PrimaryProcId_26;
        MR_Word ProcTable_27;
        MR_Word ArgTypes_28;
        MR_Word ProcIds_29;
        MR_Word PredOrFunc_30;
        MR_Integer NumArgs_31;
        MR_Word ForeignDeclCode_32;
        MR_Word STATE_VARIABLE_ModuleInfo_69_69;
        MR_Word Var_72;
        MR_Word STATE_VARIABLE_ModuleInfo_73_73;
        MR_Word STATE_VARIABLE_ModuleInfo_74_74;

        hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_37, HeadPredId_19, &PredInfo0_22);
        ll_backend__fact_table__fact_table_compile_facts_11_p_0(PredSymName_15, Arity_16, FileName_14, PredInfo0_22, &PredInfo_24, Context_10, STATE_VARIABLE_ModuleInfo_0_37, &C_HeaderCode_25, &PrimaryProcId_26);
        hlds__hlds_module__module_info_set_pred_info_4_p_0(HeadPredId_19, PredInfo_24, STATE_VARIABLE_ModuleInfo_0_37, &STATE_VARIABLE_ModuleInfo_69_69);
        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_24, &ProcTable_27);
        hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_24, &ArgTypes_28);
        ProcIds_29 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_24);
        PredOrFunc_30 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_24);
        parse_tree__prog_util__adjust_func_arity_3_p_0(PredOrFunc_30, Arity_16, &NumArgs_31);
        {
          Var_72 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (C_HeaderCode_25));
        }
        {
          ForeignDeclCode_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ForeignDeclCode_32, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
          MR_hl_field(MR_mktag(0), ForeignDeclCode_32, 1) = ((MR_Box) (Var_72));
          MR_hl_field(MR_mktag(0), ForeignDeclCode_32, 2) = ((MR_Box) (Context_10));
        }
        hlds__hlds_module__module_add_foreign_decl_code_aux_3_p_0(ForeignDeclCode_32, STATE_VARIABLE_ModuleInfo_69_69, &STATE_VARIABLE_ModuleInfo_73_73);
        hlds__hlds_module__module_add_fact_table_file_3_p_0(FileName_14, STATE_VARIABLE_ModuleInfo_73_73, &STATE_VARIABLE_ModuleInfo_74_74);
        hlds__make_hlds__add_pragma__add_fact_table_procedures_13_p_0(ProcIds_29, PrimaryProcId_26, ProcTable_27, PredSymName_15, PredOrFunc_30, NumArgs_31, ArgTypes_28, PredStatus_9, Context_10, STATE_VARIABLE_ModuleInfo_74_74, STATE_VARIABLE_ModuleInfo_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
      }
      else
      {
        MR_Word Pieces_35;
        MR_Word Spec_36;
        MR_Word Var_43;
        MR_Word Var_46;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_51;

        {
          Var_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (PredSymName_15));
          MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (Arity_16));
        }
        {
          Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) (Var_51));
        }
        {
          Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
          MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[95])));
        }
        {
          Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[156])));
          MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_49));
        }
        {
          Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[155])));
          MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_46));
        }
        {
          Pieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[154])));
          MR_hl_field(MR_mktag(1), Pieces_35, 1) = ((MR_Box) (Var_43));
        }
        {
          Spec_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_36, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_fact_table\'/7"));
          MR_hl_field(MR_mktag(1), Spec_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_36, 2) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(1), Spec_36, 3) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(1), Spec_36, 4) = ((MR_Box) (Pieces_35));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_40 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_36));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_39));
        }
        *STATE_VARIABLE_ModuleInfo_38 = STATE_VARIABLE_ModuleInfo_0_37;
      }
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_fact_table_procedures_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer PrimaryProcId_2,
  MR_Word ProcTable_3,
  MR_Word SymName_4,
  MR_Word PredOrFunc_5,
  MR_Integer Arity_6,
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

      hlds__make_hlds__add_pragma__add_fact_table_proc_13_p_0(ProcId_28, PrimaryProcId_2, ProcTable_3, SymName_4, PredOrFunc_5, Arity_6, ArgTypes_7, PredStatus_8, Context_9, STATE_VARIABLE_ModuleInfo_0_10, &STATE_VARIABLE_ModuleInfo_44_44, STATE_VARIABLE_Specs_0_12, &STATE_VARIABLE_Specs_45_45);
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
  MR_Word SymName_17,
  MR_Word PredOrFunc_18,
  MR_Integer Arity_19,
  MR_Word ArgTypes_20,
  MR_Word PredStatus_21,
  MR_Word Context_22,
  MR_Word STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * STATE_VARIABLE_ModuleInfo_44,
  MR_Word STATE_VARIABLE_Specs_0_45,
  MR_Word * STATE_VARIABLE_Specs_46)
{
  {
    MR_bool succeeded;
    MR_Word ProcInfo_25;
    MR_Word ProgVarSet0_26;
    MR_Word Vars_27;
    MR_Word ProgVarSet_28;
    MR_Word Modes_29;
    MR_Word InstVarSet_30;
    MR_Word PragmaVars_31;
    MR_String C_ProcCode_33;
    MR_String C_ExtraCode_34;
    MR_Word Attrs0_35;
    MR_Word Attrs1_36;
    MR_Word Attrs2_37;
    MR_Word Attrs3_38;
    MR_Word Attrs_39;
    MR_Word FCInfo_41;
    MR_Word Var_54;
    MR_Word STATE_VARIABLE_ModuleInfo_56_56;
    MR_Word STATE_VARIABLE_Specs_57_57;
    MR_Word STATE_VARIABLE_ModuleInfo_60_60;
    MR_Word Var_62;
    MR_Box conv0_ProcInfo_25;

    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_16, ((MR_Box) (ProcId_14)), &conv0_ProcInfo_25);
    ProcInfo_25 = ((MR_Word) (conv0_ProcInfo_25));
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &ProgVarSet0_26);
    mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Arity_19, &Vars_27, ProgVarSet0_26, &ProgVarSet_28);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_25, &Modes_29);
    hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_25, &InstVarSet_30);
    hlds__make_hlds__add_pragma__fact_table_pragma_vars_4_p_0(Vars_27, Modes_29, ProgVarSet_28, &PragmaVars_31);
    ll_backend__fact_table__fact_table_generate_c_code_11_p_0(SymName_17, PragmaVars_31, ProcId_14, PrimaryProcId_15, ProcInfo_25, ArgTypes_20, STATE_VARIABLE_ModuleInfo_0_43, &C_ProcCode_33, &C_ExtraCode_34);
    Attrs0_35 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
    parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, Attrs0_35, &Attrs1_36);
    parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, Attrs1_36, &Attrs2_37);
    parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 0, Attrs2_37, &Attrs3_38);
    parse_tree__prog_data_foreign__add_extra_attribute_3_p_0((MR_Word) ((MR_Unsigned) 0U), Attrs3_38, &Attrs_39);
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (C_ProcCode_33));
      MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      FCInfo_41 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FCInfo_41, 0) = ((MR_Box) (Attrs_39));
      MR_hl_field(MR_mktag(0), FCInfo_41, 1) = ((MR_Box) (SymName_17));
      MR_hl_field(MR_mktag(0), FCInfo_41, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
      MR_hl_field(MR_mktag(0), FCInfo_41, 3) = ((MR_Box) (PragmaVars_31));
      MR_hl_field(MR_mktag(0), FCInfo_41, 4) = ((MR_Box) (ProgVarSet_28));
      MR_hl_field(MR_mktag(0), FCInfo_41, 5) = ((MR_Box) (InstVarSet_30));
      MR_hl_field(MR_mktag(0), FCInfo_41, 6) = ((MR_Box) (Var_54));
    }
    hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(FCInfo_41, PredStatus_21, Context_22, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_43, &STATE_VARIABLE_ModuleInfo_56_56, STATE_VARIABLE_Specs_0_45, &STATE_VARIABLE_Specs_57_57);
    succeeded = (strcmp(C_ExtraCode_34, (MR_String) "") == 0);
    if (succeeded)
      STATE_VARIABLE_ModuleInfo_60_60 = STATE_VARIABLE_ModuleInfo_56_56;
    else
    {
      MR_Word ForeignBodyCode_42;
      MR_Word Var_59;

      {
        Var_59 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (C_ExtraCode_34));
      }
      {
        ForeignBodyCode_42 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ForeignBodyCode_42, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), ForeignBodyCode_42, 1) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(0), ForeignBodyCode_42, 2) = ((MR_Box) (Context_22));
      }
      hlds__hlds_module__module_add_foreign_body_code_3_p_0(ForeignBodyCode_42, STATE_VARIABLE_ModuleInfo_56_56, &STATE_VARIABLE_ModuleInfo_60_60);
    }
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (SymName_17));
      MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (Arity_19));
    }
    hlds__make_hlds__add_pragma__add_pred_marker_10_p_0((MR_String) "fact_table", Var_62, PredStatus_21, Context_22, (MR_Integer) 7, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_60_60, STATE_VARIABLE_ModuleInfo_44, STATE_VARIABLE_Specs_57_57, STATE_VARIABLE_Specs_46);
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
hlds__make_hlds__add_pragma__add_pragma_require_tail_rec_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_PredInfo_26;
    MR_Word conv0_STATE_VARIABLE_Specs_28;

    hlds__make_hlds__add_pragma__add_pragma_require_tail_rec_proc_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_PredInfo_26, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_28);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_PredInfo_26));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_28));
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_require_tail_rec_6_p_0(
  MR_Word Pragma_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37)
{
  {
    MR_bool succeeded;
    MR_Word PredSymName_11;
    MR_Integer Arity_12;
    MR_Word MaybePF_13;
    MR_Word MaybeMode_14;
    MR_Word PredIds_15;
    MR_Word OtherArities_16;
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Pragma_7, (MR_Integer) 0))));

    PredSymName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_38, (MR_Integer) 0))));
    Arity_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_38, (MR_Integer) 1))));
    MaybePF_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_38, (MR_Integer) 2))));
    MaybeMode_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_38, (MR_Integer) 3))));
    hlds__make_hlds__add_pragma__get_matching_pred_ids_5_p_0(STATE_VARIABLE_ModuleInfo_0_34, PredSymName_11, Arity_12, &PredIds_15, &OtherArities_16);
    if ((PredIds_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      hlds__make_hlds_error__report_undefined_pred_or_func_error_8_p_0(MaybePF_13, PredSymName_11, Arity_12, OtherArities_16, Context_8, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[33])), STATE_VARIABLE_Specs_0_36, STATE_VARIABLE_Specs_37);
      *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
    }
    else
    {
      MR_Word Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_15, (MR_Integer) 1))));
      MR_Word Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_15, (MR_Integer) 0))));

      if ((Var_109 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word PredSymNameArity_19;
        MR_Word PredInfo0_20;
        MR_Word Procs0_21;
        MR_Word Procs_22;
        MR_Word PredInfo_27;

        {
          PredSymNameArity_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PredSymNameArity_19, 0) = ((MR_Box) (PredSymName_11));
          MR_hl_field(MR_mktag(0), PredSymNameArity_19, 1) = ((MR_Box) (Arity_12));
        }
        hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_34, Var_110, &PredInfo0_20);
        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_20, &Procs0_21);
        mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs0_21, &Procs_22);
        if ((MaybeMode_14 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_56;
          MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Pragma_7, (MR_Integer) 1))));
          MR_Box conv3_PredInfo_27;
          MR_Box conv2_STATE_VARIABLE_Specs_37;

          {
            Var_56 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_8[0]));
            MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_require_tail_rec_6_p_0_1));
            MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (Var_58));
            MR_hl_field(MR_mktag(0), Var_56, 4) = ((MR_Box) (Context_8));
            MR_hl_field(MR_mktag(0), Var_56, 5) = ((MR_Box) (PredSymNameArity_19));
          }
          mercury__list__foldl2_6_p_0((MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_2[0]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[0]), Var_56, Procs_22, ((MR_Box) (PredInfo0_20)), &conv3_PredInfo_27, ((MR_Box) (STATE_VARIABLE_Specs_0_36)), &conv2_STATE_VARIABLE_Specs_37);
          PredInfo_27 = ((MR_Word) (conv3_PredInfo_27));
          *STATE_VARIABLE_Specs_37 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_37));
        }
        else
        {
          MR_Word Mode_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMode_14, (MR_Integer) 0))));
          MR_Integer ProcId_24;

          succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(STATE_VARIABLE_ModuleInfo_0_34, Procs_22, Mode_23, &ProcId_24);
          if (succeeded)
          {
            MR_Word Proc_25;
            MR_Word RequireTailrec_26;
            MR_Word Var_59;
            MR_Box conv4_Proc_25;

            mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs0_21, ((MR_Box) (ProcId_24)), &conv4_Proc_25);
            Proc_25 = ((MR_Word) (conv4_Proc_25));
            RequireTailrec_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Pragma_7, (MR_Integer) 1))));
            {
              Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (ProcId_24));
              MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (Proc_25));
            }
            hlds__make_hlds__add_pragma__add_pragma_require_tail_rec_proc_8_p_0(RequireTailrec_26, Context_8, PredSymNameArity_19, Var_59, PredInfo0_20, &PredInfo_27, STATE_VARIABLE_Specs_0_36, STATE_VARIABLE_Specs_37);
          }
          else
          {
            MR_Word PredOrFunc_28;
            MR_Word PFSymNameArity_29;
            MR_Word Spec_30;
            MR_Word Var_63;
            MR_Word Var_66;
            MR_Word Var_69;
            MR_Word Var_70;
            MR_Word Pieces_89;

            PredInfo_27 = PredInfo0_20;
            PredOrFunc_28 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_20);
            {
              PFSymNameArity_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PFSymNameArity_29, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_28));
              MR_hl_field(MR_mktag(0), PFSymNameArity_29, 1) = ((MR_Box) (PredSymName_11));
              MR_hl_field(MR_mktag(0), PFSymNameArity_29, 2) = ((MR_Box) (Arity_12));
            }
            {
              Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_70, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(MR_mktag(3), Var_70, 1) = ((MR_Box) (PFSymNameArity_29));
            }
            {
              Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
              MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[23])));
            }
            {
              Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[139])));
              MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_69));
            }
            {
              Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[148])));
              MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_66));
            }
            {
              Pieces_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_89, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[123])));
              MR_hl_field(MR_mktag(1), Pieces_89, 1) = ((MR_Box) (Var_63));
            }
            {
              Spec_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_30, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_require_tail_rec\'/6"));
              MR_hl_field(MR_mktag(1), Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 16U));
              MR_hl_field(MR_mktag(1), Spec_30, 3) = ((MR_Box) (Context_8));
              MR_hl_field(MR_mktag(1), Spec_30, 4) = ((MR_Box) (Pieces_89));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_37 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_30));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_36));
            }
          }
        }
        hlds__hlds_module__module_info_set_pred_info_4_p_0(Var_110, PredInfo_27, STATE_VARIABLE_ModuleInfo_0_34, STATE_VARIABLE_ModuleInfo_35);
      }
      else
      {
        MR_Word Spec_95;

        {
          Spec_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_95, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_require_tail_rec\'/6"));
          MR_hl_field(MR_mktag(1), Spec_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_95, 2) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(1), Spec_95, 3) = ((MR_Box) (Context_8));
          MR_hl_field(MR_mktag(1), Spec_95, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[38])));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_37 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_95));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_36));
        }
        *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
      }
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_require_tail_rec_proc_8_p_0(
  MR_Word RequireTailrec_9,
  MR_Word Context_10,
  MR_Word SymNameAndArity_11,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_PredInfo_0_25,
  MR_Word * STATE_VARIABLE_PredInfo_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  {
    MR_Integer ProcId_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word ProcInfo0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word MaybeRequireTailrecOrig_16;

    hlds__hlds_pred__proc_info_get_maybe_require_tailrec_info_2_p_0(ProcInfo0_13, &MaybeRequireTailrecOrig_16);
    if ((MaybeRequireTailrecOrig_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ProcInfo_24;

      hlds__hlds_pred__proc_info_set_require_tailrec_info_3_p_0(RequireTailrec_9, ProcInfo0_13, &ProcInfo_24);
      hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_12, ProcInfo_24, STATE_VARIABLE_PredInfo_0_25, STATE_VARIABLE_PredInfo_26);
      *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
    }
    else
    {
      MR_Word RequireTailrecOrig_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRequireTailrecOrig_16, (MR_Integer) 0))));
      MR_Word MainPieces_18;
      MR_Word ContextOrig_20;
      MR_Word Spec_23;
      MR_Word Var_32;
      MR_Word Var_35;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;

      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (SymNameAndArity_11));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[151])));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[149])));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[148])));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
      }
      {
        MainPieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MainPieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[147])));
        MR_hl_field(MR_mktag(1), MainPieces_18, 1) = ((MR_Box) (Var_32));
      }
      if (((MR_tag((MR_Word) RequireTailrecOrig_17)) == (MR_Integer) 1))
        ContextOrig_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RequireTailrecOrig_17, (MR_Integer) 1))));
      else
        ContextOrig_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RequireTailrecOrig_17, (MR_Integer) 0))));
      {
        Var_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (MainPieces_18));
      }
      {
        Var_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (ContextOrig_20));
        MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[153])));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_52));
      }
      {
        Spec_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_require_tail_rec_proc\'/8"));
        MR_hl_field(MR_mktag(0), Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), Spec_23, 3) = ((MR_Box) (Var_50));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_28 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_23));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_27));
      }
      *STATE_VARIABLE_PredInfo_26 = STATE_VARIABLE_PredInfo_0_25;
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_foreign_proc_export_6_p_0(
  MR_Word FPEInfo_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_37,
  MR_Word * STATE_VARIABLE_ModuleInfo_38,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40)
{
  {
    MR_bool succeeded;
    MR_Word Origin_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPEInfo_7, (MR_Integer) 0))));
    MR_Word Lang_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FPEInfo_7, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word PrednameModesPF_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPEInfo_7, (MR_Integer) 2))));
    MR_String ExportedName_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), FPEInfo_7, (MR_Integer) 3))));
    MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PrednameModesPF_13, (MR_Integer) 0))));
    MR_Word Modes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PrednameModesPF_13, (MR_Integer) 1))));
    MR_Word PredOrFunc_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PrednameModesPF_13, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Integer Arity_18;
    MR_Word MaybePredId_19;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_16, &Arity_18);
    hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_37, (MR_Integer) 1, (MR_Integer) 1, Context_8, (MR_String) "foreign_export", PredOrFunc_17, SymName_15, Arity_18, &MaybePredId_19);
    if (((MR_tag((MR_Word) MaybePredId_19)) == (MR_Integer) 0))
    {
      MR_Word Specs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybePredId_19, (MR_Integer) 0))));

      if ((Origin_11 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Specs_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Specs_10, STATE_VARIABLE_Specs_0_39);
      else
        *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
      *STATE_VARIABLE_ModuleInfo_38 = STATE_VARIABLE_ModuleInfo_0_37;
    }
    else
    {
      MR_Word PredId_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredId_19, (MR_Integer) 0))));
      MR_Word PredInfo_21;
      MR_Word Procs_22;
      MR_Word ExistingProcs_23;
      MR_Integer ProcId_24;

      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_37, PredId_20, &PredInfo_21);
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_21, &Procs_22);
      mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_22, &ExistingProcs_23);
      succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(STATE_VARIABLE_ModuleInfo_0_37, ExistingProcs_23, Modes_16, &ProcId_24);
      if (succeeded)
      {
        MR_Word ProcInfo0_25;
        MR_Word MaybeDetism_26;
        MR_Box conv0_ProcInfo0_25;
        MR_Word Detism_27;

        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_22, ((MR_Box) (ProcId_24)), &conv0_ProcInfo0_25);
        ProcInfo0_25 = ((MR_Word) (conv0_ProcInfo0_25));
        hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo0_25, &MaybeDetism_26);
        succeeded = (MaybeDetism_26 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Detism_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDetism_26, (MR_Integer) 0))));
          switch (Detism_27) {
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
          MR_Word Pieces_28;
          MR_Word Spec_29;
          MR_Word Var_47;
          MR_Word Var_50;
          MR_Word Var_53;
          MR_Word Var_56;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_String Var_61;

          Var_61 = parse_tree__prog_out__determinism_to_string_1_f_0(Detism_27);
          {
            Var_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_60, 0) = ((MR_Box) (Var_61));
          }
          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
            MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[23])));
          }
          {
            Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[146])));
            MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_59));
          }
          {
            Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[145])));
            MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
          }
          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[126])));
            MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_53));
          }
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[144])));
            MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
          }
          {
            Pieces_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[123])));
            MR_hl_field(MR_mktag(1), Pieces_28, 1) = ((MR_Box) (Var_47));
          }
          {
            Spec_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_29, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_foreign_proc_export\'/6"));
            MR_hl_field(MR_mktag(1), Spec_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_29, 2) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(1), Spec_29, 3) = ((MR_Box) (Context_8));
            MR_hl_field(MR_mktag(1), Spec_29, 4) = ((MR_Box) (Pieces_28));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_40 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_29));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_39));
          }
          *STATE_VARIABLE_ModuleInfo_38 = STATE_VARIABLE_ModuleInfo_0_37;
        }
        else
        {
          MR_Word Globals_30;
          MR_Word ForeignLangs_31;
          MR_Word ProcInfo_35;
          MR_Word STATE_VARIABLE_ModuleInfo_72_72;

          hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_37, &Globals_30);
          libs__globals__get_backend_foreign_languages_2_p_0(Globals_30, &ForeignLangs_31);
          succeeded = mercury__list__member_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_12)), ForeignLangs_31);
          if (succeeded)
          {
            MR_Word PragmaExportedProcs0_32;
            MR_Word NewExportedProc_33;
            MR_Word PragmaExportedProcs_34;

            hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(STATE_VARIABLE_ModuleInfo_0_37, &PragmaExportedProcs0_32);
            {
              NewExportedProc_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), NewExportedProc_33, 0) = (MR_Box) ((MR_Unsigned) (Lang_12));
              MR_hl_field(MR_mktag(0), NewExportedProc_33, 1) = ((MR_Box) (PredId_20));
              MR_hl_field(MR_mktag(0), NewExportedProc_33, 2) = ((MR_Box) (ProcId_24));
              MR_hl_field(MR_mktag(0), NewExportedProc_33, 3) = ((MR_Box) (ExportedName_14));
              MR_hl_field(MR_mktag(0), NewExportedProc_33, 4) = ((MR_Box) (Context_8));
            }
            PragmaExportedProcs_34 = mercury__cord__snoc_2_f_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0), PragmaExportedProcs0_32, ((MR_Box) (NewExportedProc_33)));
            hlds__hlds_module__module_info_set_pragma_exported_procs_3_p_0(PragmaExportedProcs_34, STATE_VARIABLE_ModuleInfo_0_37, &STATE_VARIABLE_ModuleInfo_72_72);
          }
          else
            STATE_VARIABLE_ModuleInfo_72_72 = STATE_VARIABLE_ModuleInfo_0_37;
          hlds__hlds_pred__proc_info_set_has_any_foreign_exports_3_p_0((MR_Integer) 1, ProcInfo0_25, &ProcInfo_35);
          hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_20, ProcId_24, PredInfo_21, ProcInfo_35, STATE_VARIABLE_ModuleInfo_72_72, STATE_VARIABLE_ModuleInfo_38);
          *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
        }
      }
      else
      {
        if ((Origin_11 == (MR_Word) ((MR_Unsigned) 0U)))
          hlds__make_hlds_error__report_undefined_mode_error_6_p_0(SymName_15, Arity_18, Context_8, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[27])), STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
        else
          *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
        *STATE_VARIABLE_ModuleInfo_38 = STATE_VARIABLE_ModuleInfo_0_37;
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
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  {
    MR_Word PredNameModesPF_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo_7, (MR_Integer) 0))));
    MR_Word HeadVars_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo_7, (MR_Integer) 1))));
    MR_Word Types_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo_7, (MR_Integer) 2))));
    MR_Word MaybeReuseDomain_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo_7, (MR_Integer) 5))));

    if ((MaybeReuseDomain_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleInfo_27 = STATE_VARIABLE_ModuleInfo_0_26;
      *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
    }
    else
    {
      MR_Word ReuseDomain_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReuseDomain_16, (MR_Integer) 0))));
      MR_Word SymName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_11, (MR_Integer) 0))));
      MR_Word Modes_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_11, (MR_Integer) 1))));
      MR_Word PredOrFunc_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF_11, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Integer Arity_21;
      MR_Word MaybePredId_22;

      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_19, &Arity_21);
      hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_26, (MR_Integer) 0, (MR_Integer) 0, Context_8, (MR_String) "structure_reuse", PredOrFunc_20, SymName_18, Arity_21, &MaybePredId_22);
      if (((MR_tag((MR_Word) MaybePredId_22)) == (MR_Integer) 0))
      {
        MR_Word Specs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybePredId_22, (MR_Integer) 0))));

        *STATE_VARIABLE_Specs_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Specs_10, STATE_VARIABLE_Specs_0_28);
        *STATE_VARIABLE_ModuleInfo_27 = STATE_VARIABLE_ModuleInfo_0_26;
      }
      else
      {
        MR_Word PredId_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredId_22, (MR_Integer) 0))));
        MR_Word PFSymNameArity_24;

        {
          PFSymNameArity_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PFSymNameArity_24, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_20));
          MR_hl_field(MR_mktag(0), PFSymNameArity_24, 1) = ((MR_Box) (SymName_18));
          MR_hl_field(MR_mktag(0), PFSymNameArity_24, 2) = ((MR_Box) (Arity_21));
        }
        hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_115_101_108_101_99_116_101_100_95_109_111_100_101_95_111_102_95_112_114_101_100_95_95_104_111_49_95_95_91_57_93_95_48_10_p_0(HeadVars_12, Types_13, ReuseDomain_17, PredId_23, PFSymNameArity_24, Modes_19, (MR_String) "structure_reuse", Context_8, STATE_VARIABLE_ModuleInfo_0_26, STATE_VARIABLE_ModuleInfo_27, STATE_VARIABLE_Specs_0_28, STATE_VARIABLE_Specs_29);
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
  MR_Word PFSymNameArity_12,
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
        MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (PragmaName_14));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (PFSymNameArity_12));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[23])));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[139])));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
      }
      {
        Pieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[123])));
        MR_hl_field(MR_mktag(1), Pieces_29, 1) = ((MR_Box) (Var_38));
      }
      {
        Spec_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_30, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.transform_selected_mode_of_pred\'/10"));
        MR_hl_field(MR_mktag(1), Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 16U));
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
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  {
    MR_Word PredNameModesPF_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo_7, (MR_Integer) 0))));
    MR_Word HeadVars_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo_7, (MR_Integer) 1))));
    MR_Word Types_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo_7, (MR_Integer) 2))));
    MR_Word MaybeSharingDomain_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo_7, (MR_Integer) 5))));

    if ((MaybeSharingDomain_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleInfo_27 = STATE_VARIABLE_ModuleInfo_0_26;
      *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
    }
    else
    {
      MR_Word SharingDomain_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSharingDomain_16, (MR_Integer) 0))));
      MR_Word SymName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_11, (MR_Integer) 0))));
      MR_Word Modes_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_11, (MR_Integer) 1))));
      MR_Word PredOrFunc_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF_11, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Integer Arity_21;
      MR_Word MaybePredId_22;

      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_19, &Arity_21);
      hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_26, (MR_Integer) 0, (MR_Integer) 0, Context_8, (MR_String) "structure_sharing", PredOrFunc_20, SymName_18, Arity_21, &MaybePredId_22);
      if (((MR_tag((MR_Word) MaybePredId_22)) == (MR_Integer) 0))
      {
        MR_Word Specs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybePredId_22, (MR_Integer) 0))));

        *STATE_VARIABLE_Specs_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Specs_10, STATE_VARIABLE_Specs_0_28);
        *STATE_VARIABLE_ModuleInfo_27 = STATE_VARIABLE_ModuleInfo_0_26;
      }
      else
      {
        MR_Word PredId_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredId_22, (MR_Integer) 0))));
        MR_Word PFSymNameArity_24;

        {
          PFSymNameArity_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PFSymNameArity_24, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_20));
          MR_hl_field(MR_mktag(0), PFSymNameArity_24, 1) = ((MR_Box) (SymName_18));
          MR_hl_field(MR_mktag(0), PFSymNameArity_24, 2) = ((MR_Box) (Arity_21));
        }
        hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_115_101_108_101_99_116_101_100_95_109_111_100_101_95_111_102_95_112_114_101_100_95_95_104_111_50_95_95_91_57_93_95_48_10_p_0(HeadVars_12, Types_13, SharingDomain_17, PredId_23, PFSymNameArity_24, Modes_19, (MR_String) "structure_sharing", Context_8, STATE_VARIABLE_ModuleInfo_0_26, STATE_VARIABLE_ModuleInfo_27, STATE_VARIABLE_Specs_0_28, STATE_VARIABLE_Specs_29);
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
  MR_Word PFSymNameArity_12,
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
        MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (PragmaName_14));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (PFSymNameArity_12));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[23])));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[139])));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
      }
      {
        Pieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[123])));
        MR_hl_field(MR_mktag(1), Pieces_29, 1) = ((MR_Box) (Var_38));
      }
      {
        Spec_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_30, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.transform_selected_mode_of_pred\'/10"));
        MR_hl_field(MR_mktag(1), Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 16U));
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
  MR_Word STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * STATE_VARIABLE_ModuleInfo_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31)
{
  {
    MR_Word PredNameModesPF_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info_7, (MR_Integer) 0))));
    MR_Word MaybePragmaSuccessArgSizeInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info_7, (MR_Integer) 1))));
    MR_Word MaybePragmaFailureArgSizeInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info_7, (MR_Integer) 2))));
    MR_Word MaybePragmaTerminationInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info_7, (MR_Integer) 3))));
    MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_11, (MR_Integer) 0))));
    MR_Word Modes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_11, (MR_Integer) 1))));
    MR_Word PredOrFunc_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF_11, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Integer Arity_18;
    MR_Word MaybePredId_19;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_16, &Arity_18);
    hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_28, (MR_Integer) 0, (MR_Integer) 0, Context_8, (MR_String) "termination2_info", PredOrFunc_17, SymName_15, Arity_18, &MaybePredId_19);
    if (((MR_tag((MR_Word) MaybePredId_19)) == (MR_Integer) 0))
    {
      *STATE_VARIABLE_ModuleInfo_29 = STATE_VARIABLE_ModuleInfo_0_28;
      *STATE_VARIABLE_Specs_31 = STATE_VARIABLE_Specs_0_30;
    }
    else
    {
      MR_Word PredId_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredId_19, (MR_Integer) 0))));
      MR_Word PFSymNameArity_21;

      {
        PFSymNameArity_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PFSymNameArity_21, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
        MR_hl_field(MR_mktag(0), PFSymNameArity_21, 1) = ((MR_Box) (SymName_15));
        MR_hl_field(MR_mktag(0), PFSymNameArity_21, 2) = ((MR_Box) (Arity_18));
      }
      hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_115_101_108_101_99_116_101_100_95_109_111_100_101_95_111_102_95_112_114_101_100_95_95_104_111_51_95_95_91_49_48_93_95_48_10_p_0(Context_8, MaybePragmaSuccessArgSizeInfo_12, MaybePragmaFailureArgSizeInfo_13, MaybePragmaTerminationInfo_14, PredId_20, PFSymNameArity_21, Modes_16, (MR_String) "termination2_info", Context_8, STATE_VARIABLE_ModuleInfo_0_28, STATE_VARIABLE_ModuleInfo_29, STATE_VARIABLE_Specs_0_30, STATE_VARIABLE_Specs_31);
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
  MR_Word PFSymNameArity_12,
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
      hlds__make_hlds__add_pragma__IntroducedFrom__pred__add_pragma_termination2_info__1581__1_6_p_0(Var_59, Var_60, Var_61, Var_62, ProcInfo0_24, &ProcInfo_25);
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
        MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (PragmaName_14));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (PFSymNameArity_12));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[23])));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[139])));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
      }
      {
        Pieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[123])));
        MR_hl_field(MR_mktag(1), Pieces_29, 1) = ((MR_Box) (Var_38));
      }
      {
        Spec_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_30, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.transform_selected_mode_of_pred\'/10"));
        MR_hl_field(MR_mktag(1), Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 16U));
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
hlds__make_hlds__add_pragma__IntroducedFrom__pred__add_pragma_termination2_info__1581__1_6_p_0(
  MR_Word Context_8,
  MR_Word MaybePragmaSuccessArgSizeInfo_12,
  MR_Word MaybePragmaFailureArgSizeInfo_13,
  MR_Word MaybePragmaTerminationInfo_14,
  MR_Word LambdaHeadVar__1_35,
  MR_Word * LambdaHeadVar__2_36)
{
  {
    MR_Word MaybeTerminationInfo_25;
    MR_Word STATE_VARIABLE_TermInfo_37_37;
    MR_Word STATE_VARIABLE_TermInfo_38_38;
    MR_Word STATE_VARIABLE_TermInfo_39_39;
    MR_Word STATE_VARIABLE_TermInfo_40_40;

    transform_hlds__term_constr_util__add_context_to_constr_termination_info_3_p_0(MaybePragmaTerminationInfo_14, Context_8, &MaybeTerminationInfo_25);
    hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(LambdaHeadVar__1_35, &STATE_VARIABLE_TermInfo_37_37);
    transform_hlds__term_constr_main_types__term2_info_set_import_success_3_p_0(MaybePragmaSuccessArgSizeInfo_12, STATE_VARIABLE_TermInfo_37_37, &STATE_VARIABLE_TermInfo_38_38);
    transform_hlds__term_constr_main_types__term2_info_set_import_failure_3_p_0(MaybePragmaFailureArgSizeInfo_13, STATE_VARIABLE_TermInfo_38_38, &STATE_VARIABLE_TermInfo_39_39);
    transform_hlds__term_constr_main_types__term2_info_set_term_status_3_p_0(MaybeTerminationInfo_25, STATE_VARIABLE_TermInfo_39_39, &STATE_VARIABLE_TermInfo_40_40);
    hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(STATE_VARIABLE_TermInfo_40_40, LambdaHeadVar__1_35, LambdaHeadVar__2_36);
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_termination_info_6_p_0(
  MR_Word TermInfo_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * STATE_VARIABLE_ModuleInfo_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31)
{
  {
    MR_Word PredNameModesPF_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermInfo_7, (MR_Integer) 0))));
    MR_Word MaybePragmaArgSizeInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermInfo_7, (MR_Integer) 1))));
    MR_Word MaybePragmaTerminationInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermInfo_7, (MR_Integer) 2))));
    MR_Word SymName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_11, (MR_Integer) 0))));
    MR_Word Modes_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_11, (MR_Integer) 1))));
    MR_Word PredOrFunc_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF_11, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Integer Arity_17;
    MR_Word MaybePredId_18;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_15, &Arity_17);
    hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_28, (MR_Integer) 0, (MR_Integer) 0, Context_8, (MR_String) "termination_info", PredOrFunc_16, SymName_14, Arity_17, &MaybePredId_18);
    if (((MR_tag((MR_Word) MaybePredId_18)) == (MR_Integer) 0))
    {
      *STATE_VARIABLE_ModuleInfo_29 = STATE_VARIABLE_ModuleInfo_0_28;
      *STATE_VARIABLE_Specs_31 = STATE_VARIABLE_Specs_0_30;
    }
    else
    {
      MR_Word PredId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredId_18, (MR_Integer) 0))));
      MR_Word PFSymNameArity_20;
      MR_Word MaybeArgSizeInfo_21;
      MR_Word MaybeTerminationInfo_22;

      {
        PFSymNameArity_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PFSymNameArity_20, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_16));
        MR_hl_field(MR_mktag(0), PFSymNameArity_20, 1) = ((MR_Box) (SymName_14));
        MR_hl_field(MR_mktag(0), PFSymNameArity_20, 2) = ((MR_Box) (Arity_17));
      }
      transform_hlds__term_util__add_context_to_arg_size_info_3_p_0(MaybePragmaArgSizeInfo_12, Context_8, &MaybeArgSizeInfo_21);
      transform_hlds__term_util__add_context_to_termination_info_3_p_0(MaybePragmaTerminationInfo_13, Context_8, &MaybeTerminationInfo_22);
      hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_115_101_108_101_99_116_101_100_95_109_111_100_101_95_111_102_95_112_114_101_100_95_95_104_111_52_95_95_91_56_93_95_48_10_p_0(MaybeArgSizeInfo_21, MaybeTerminationInfo_22, PredId_19, PFSymNameArity_20, Modes_15, (MR_String) "termination_info", Context_8, STATE_VARIABLE_ModuleInfo_0_28, STATE_VARIABLE_ModuleInfo_29, STATE_VARIABLE_Specs_0_30, STATE_VARIABLE_Specs_31);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_115_101_108_101_99_116_101_100_95_109_111_100_101_95_111_102_95_112_114_101_100_95_95_104_111_52_95_95_91_56_93_95_48_10_p_0(
  MR_Word Var_59,
  MR_Word Var_60,
  MR_Word PredId_11,
  MR_Word PFSymNameArity_12,
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
      hlds__make_hlds__add_pragma__IntroducedFrom__pred__add_pragma_termination_info__1548__1_4_p_0(Var_59, Var_60, ProcInfo0_24, &ProcInfo_25);
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
        MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (PragmaName_14));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (PFSymNameArity_12));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[23])));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[139])));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
      }
      {
        Pieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[123])));
        MR_hl_field(MR_mktag(1), Pieces_29, 1) = ((MR_Box) (Var_38));
      }
      {
        Spec_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_30, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.transform_selected_mode_of_pred\'/10"));
        MR_hl_field(MR_mktag(1), Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 16U));
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
hlds__make_hlds__add_pragma__IntroducedFrom__pred__add_pragma_termination_info__1548__1_4_p_0(
  MR_Word MaybeArgSizeInfo_21,
  MR_Word MaybeTerminationInfo_22,
  MR_Word LambdaHeadVar__1_35,
  MR_Word * LambdaHeadVar__2_36)
{
  {
    MR_Word ProcInfo1_26;

    hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(MaybeArgSizeInfo_21, LambdaHeadVar__1_35, &ProcInfo1_26);
    hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(MaybeTerminationInfo_22, ProcInfo1_26, LambdaHeadVar__2_36);
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
    MR_Integer conv11_STATE_VARIABLE_SeqNum_41;
    MR_Word conv10_STATE_VARIABLE_Specs_43;

    hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv12_PredId_16, ((MR_Integer) (wrapper_arg_3)), &conv11_STATE_VARIABLE_SeqNum_41, ((MR_Word) (wrapper_arg_5)), &conv10_STATE_VARIABLE_Specs_43);
    *wrapper_arg_2 = ((MR_Box) (conv12_PredId_16));
    *wrapper_arg_4 = ((MR_Box) (conv11_STATE_VARIABLE_SeqNum_41));
    *wrapper_arg_6 = ((MR_Box) (conv10_STATE_VARIABLE_Specs_43));
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
    MR_Integer conv6_STATE_VARIABLE_SeqNum_41;
    MR_Word conv5_STATE_VARIABLE_Specs_43;

    hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv7_PredId_16, ((MR_Integer) (wrapper_arg_3)), &conv6_STATE_VARIABLE_SeqNum_41, ((MR_Word) (wrapper_arg_5)), &conv5_STATE_VARIABLE_Specs_43);
    *wrapper_arg_2 = ((MR_Box) (conv7_PredId_16));
    *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_SeqNum_41));
    *wrapper_arg_6 = ((MR_Box) (conv5_STATE_VARIABLE_Specs_43));
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
    MR_Integer conv1_STATE_VARIABLE_SeqNum_41;
    MR_Word conv0_STATE_VARIABLE_Specs_43;

    hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv2_PredId_16, ((MR_Integer) (wrapper_arg_3)), &conv1_STATE_VARIABLE_SeqNum_41, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Specs_43);
    *wrapper_arg_2 = ((MR_Box) (conv2_PredId_16));
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_SeqNum_41));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_43));
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0(
  MR_Word OISUInfo_8,
  MR_Word ItemMercuryStatus_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_42,
  MR_Word * STATE_VARIABLE_ModuleInfo_43,
  MR_Word STATE_VARIABLE_Specs_0_44,
  MR_Word * STATE_VARIABLE_Specs_45)
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
    MR_Word STATE_VARIABLE_OISUSpecs_74_74;
    MR_Word Var_75;
    MR_Word STATE_VARIABLE_OISUSpecs_77_77;
    MR_Word Var_79;
    MR_Word STATE_VARIABLE_OISUSpecs_81_81;
    MR_Word Var_83;
    MR_Word STATE_VARIABLE_OISUSpecs_85_85;
    MR_Box conv4_Var_28;
    MR_Box conv3_STATE_VARIABLE_OISUSpecs_77_77;
    MR_Box conv9_Var_30;
    MR_Box conv8_STATE_VARIABLE_OISUSpecs_81_81;
    MR_Box conv14_Var_32;
    MR_Box conv13_STATE_VARIABLE_OISUSpecs_85_85;

    if (((MR_tag((MR_Word) ItemMercuryStatus_9)) == (MR_Integer) 1))
      STATE_VARIABLE_OISUSpecs_74_74 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ItemExport_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemMercuryStatus_9, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word TypeTable_22;
      MR_Word STATE_VARIABLE_OISUSpecs_58_58;
      MR_Word TypeDefn_23;

      switch (ItemExport_19) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          STATE_VARIABLE_OISUSpecs_58_58 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            MR_Word StatusSpec_21;

            {
              StatusSpec_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), StatusSpec_21, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_oisu\'/7"));
              MR_hl_field(MR_mktag(1), StatusSpec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), StatusSpec_21, 2) = ((MR_Box) ((MR_Unsigned) 16U));
              MR_hl_field(MR_mktag(1), StatusSpec_21, 3) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(1), StatusSpec_21, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[99])));
            }
            {
              STATE_VARIABLE_OISUSpecs_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_OISUSpecs_58_58, 0) = ((MR_Box) (StatusSpec_21));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_OISUSpecs_58_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
      }
      hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_42, &TypeTable_22);
      succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_22, TypeCtor_13, &TypeDefn_23);
      if (succeeded)
      {
        MR_Word TypeStatus_24;
        MR_Word Var_59;

        hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_23, &TypeStatus_24);
        Var_59 = (MR_Word) (TypeStatus_24);
        succeeded = (Var_59 == (MR_Word) ((MR_Unsigned) 20U));
        if (succeeded)
          STATE_VARIABLE_OISUSpecs_74_74 = STATE_VARIABLE_OISUSpecs_58_58;
        else
        {
          MR_Word TypeSpec_26;

          {
            TypeSpec_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), TypeSpec_26, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_oisu\'/7"));
            MR_hl_field(MR_mktag(1), TypeSpec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), TypeSpec_26, 2) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(1), TypeSpec_26, 3) = ((MR_Box) (Context_10));
            MR_hl_field(MR_mktag(1), TypeSpec_26, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[104])));
          }
          {
            STATE_VARIABLE_OISUSpecs_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_OISUSpecs_74_74, 0) = ((MR_Box) (TypeSpec_26));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_OISUSpecs_74_74, 1) = ((MR_Box) (STATE_VARIABLE_OISUSpecs_58_58));
          }
        }
      }
      else
        STATE_VARIABLE_OISUSpecs_74_74 = STATE_VARIABLE_OISUSpecs_58_58;
    }
    {
      Var_75 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_75, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_75, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_42));
      MR_hl_field(MR_mktag(0), Var_75, 4) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(0), Var_75, 5) = ((MR_Box) (TypeCtor_13));
      MR_hl_field(MR_mktag(0), Var_75, 6) = ((MR_Box) ((MR_String) "creator"));
    }
    mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pred_name_arity_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[0]), Var_75, Creators_14, &CreatorPredIds_27, ((MR_Box) ((MR_Integer) 1)), &conv4_Var_28, ((MR_Box) (STATE_VARIABLE_OISUSpecs_74_74)), &conv3_STATE_VARIABLE_OISUSpecs_77_77);
    STATE_VARIABLE_OISUSpecs_77_77 = ((MR_Word) (conv3_STATE_VARIABLE_OISUSpecs_77_77));
    {
      Var_79 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_2));
      MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_79, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_42));
      MR_hl_field(MR_mktag(0), Var_79, 4) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(0), Var_79, 5) = ((MR_Box) (TypeCtor_13));
      MR_hl_field(MR_mktag(0), Var_79, 6) = ((MR_Box) ((MR_String) "mutator"));
    }
    mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pred_name_arity_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[0]), Var_79, Mutators_15, &MutatorPredIds_29, ((MR_Box) ((MR_Integer) 1)), &conv9_Var_30, ((MR_Box) (STATE_VARIABLE_OISUSpecs_77_77)), &conv8_STATE_VARIABLE_OISUSpecs_81_81);
    STATE_VARIABLE_OISUSpecs_81_81 = ((MR_Word) (conv8_STATE_VARIABLE_OISUSpecs_81_81));
    {
      Var_83 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_3));
      MR_hl_field(MR_mktag(0), Var_83, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_83, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_42));
      MR_hl_field(MR_mktag(0), Var_83, 4) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(0), Var_83, 5) = ((MR_Box) (TypeCtor_13));
      MR_hl_field(MR_mktag(0), Var_83, 6) = ((MR_Box) ((MR_String) "destructor"));
    }
    mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pred_name_arity_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[0]), Var_83, Destructors_16, &DestructorPredIds_31, ((MR_Box) ((MR_Integer) 1)), &conv14_Var_32, ((MR_Box) (STATE_VARIABLE_OISUSpecs_81_81)), &conv13_STATE_VARIABLE_OISUSpecs_85_85);
    STATE_VARIABLE_OISUSpecs_85_85 = ((MR_Word) (conv13_STATE_VARIABLE_OISUSpecs_85_85));
    if ((STATE_VARIABLE_OISUSpecs_85_85 == (MR_Word) ((MR_Unsigned) 0U)))
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
      hlds__hlds_module__module_info_get_oisu_map_2_p_0(STATE_VARIABLE_ModuleInfo_0_42, &OISUMap0_34);
      succeeded = mercury__map__insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0), ((MR_Box) (TypeCtor_13)), ((MR_Box) (OISUPreds_33)), OISUMap0_34, &OISUMap_35);
      if (succeeded)
      {
        hlds__hlds_module__module_info_set_oisu_map_3_p_0(OISUMap_35, STATE_VARIABLE_ModuleInfo_0_42, STATE_VARIABLE_ModuleInfo_43);
        *STATE_VARIABLE_Specs_45 = STATE_VARIABLE_Specs_0_44;
      }
      else
      {
        MR_Word TypeName_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_13, (MR_Integer) 0))));
        MR_Integer TypeArity_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_13, (MR_Integer) 1))));
        MR_Word DupPieces_38;
        MR_Word DupSpec_39;
        MR_Word Var_91;
        MR_Word Var_94;
        MR_Word Var_97;
        MR_Word Var_98;
        MR_Word Var_99;

        {
          Var_99 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (TypeName_36));
          MR_hl_field(MR_mktag(0), Var_99, 1) = ((MR_Box) (TypeArity_37));
        }
        {
          Var_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_98, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(MR_mktag(3), Var_98, 1) = ((MR_Box) (Var_99));
        }
        {
          Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (Var_98));
          MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[23])));
        }
        {
          Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[143])));
          MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (Var_97));
        }
        {
          Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[142])));
          MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (Var_94));
        }
        {
          DupPieces_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), DupPieces_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[141])));
          MR_hl_field(MR_mktag(1), DupPieces_38, 1) = ((MR_Box) (Var_91));
        }
        {
          DupSpec_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), DupSpec_39, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_oisu\'/7"));
          MR_hl_field(MR_mktag(1), DupSpec_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), DupSpec_39, 2) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(1), DupSpec_39, 3) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(1), DupSpec_39, 4) = ((MR_Box) (DupPieces_38));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_45 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DupSpec_39));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_44));
        }
        *STATE_VARIABLE_ModuleInfo_43 = STATE_VARIABLE_ModuleInfo_0_42;
      }
    }
    else
    {
      *STATE_VARIABLE_Specs_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), STATE_VARIABLE_OISUSpecs_85_85, STATE_VARIABLE_Specs_0_44);
      *STATE_VARIABLE_ModuleInfo_43 = STATE_VARIABLE_ModuleInfo_0_42;
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
    MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_13, (MR_Integer) 0))));
    MR_Word Modes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_13, (MR_Integer) 1))));
    MR_Word PredOrFunc_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF_13, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Integer Arity_18;
    MR_Word MaybePredId_19;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_16, &Arity_18);
    hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_30, (MR_Integer) 0, (MR_Integer) 1, Context_10, (MR_String) "obsolete_proc", PredOrFunc_17, SymName_15, Arity_18, &MaybePredId_19);
    if (((MR_tag((MR_Word) MaybePredId_19)) == (MR_Integer) 0))
    {
      MR_Word Specs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybePredId_19, (MR_Integer) 0))));

      *STATE_VARIABLE_Specs_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Specs_12, STATE_VARIABLE_Specs_0_32);
      *STATE_VARIABLE_ModuleInfo_31 = STATE_VARIABLE_ModuleInfo_0_30;
    }
    else
    {
      MR_Word PredId_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredId_19, (MR_Integer) 0))));
      MR_Word PredInfo0_21;
      MR_Word PFSymNameArity_23;
      MR_Word STATE_VARIABLE_Specs_40_40;
      MR_Word Var_38;

      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_30, PredId_20, &PredInfo0_21);
      succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(PredInfo0_21);
      if (succeeded)
      {
        Var_38 = hlds__status__pred_status_is_exported_1_f_0(PragmaStatus_9);
        succeeded = (Var_38 == (MR_Integer) 0);
      }
      if (succeeded)
      {
        MR_Word Pieces_60;
        MR_Word Spec_61;
        MR_Word Var_64;
        MR_Word Var_66;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;

        {
          Var_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (SymName_15));
          MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (Arity_18));
        }
        {
          Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_70, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(MR_mktag(3), Var_70, 1) = ((MR_Box) (Var_71));
        }
        {
          Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
          MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[40])));
        }
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[128])));
          MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_69));
        }
        {
          Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[140])));
          MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_66));
        }
        {
          Pieces_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[123])));
          MR_hl_field(MR_mktag(1), Pieces_60, 1) = ((MR_Box) (Var_64));
        }
        {
          Spec_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_61, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.pragma_status_error\'/5"));
          MR_hl_field(MR_mktag(1), Spec_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_61, 2) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(1), Spec_61, 3) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(1), Spec_61, 4) = ((MR_Box) (Pieces_60));
        }
        {
          STATE_VARIABLE_Specs_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_40_40, 0) = ((MR_Box) (Spec_61));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_40_40, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_32));
        }
      }
      else
        STATE_VARIABLE_Specs_40_40 = STATE_VARIABLE_Specs_0_32;
      {
        PFSymNameArity_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PFSymNameArity_23, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
        MR_hl_field(MR_mktag(0), PFSymNameArity_23, 1) = ((MR_Box) (SymName_15));
        MR_hl_field(MR_mktag(0), PFSymNameArity_23, 2) = ((MR_Box) (Arity_18));
      }
      hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_115_101_108_101_99_116_101_100_95_109_111_100_101_95_111_102_95_112_114_101_100_95_95_104_111_53_95_95_91_55_93_95_48_10_p_0(ObsoleteInFavourOf_14, PredId_20, PFSymNameArity_23, Modes_16, (MR_String) "obsolete_proc", Context_10, STATE_VARIABLE_ModuleInfo_0_30, STATE_VARIABLE_ModuleInfo_31, STATE_VARIABLE_Specs_40_40, STATE_VARIABLE_Specs_33);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_115_101_108_101_99_116_101_100_95_109_111_100_101_95_111_102_95_112_114_101_100_95_95_104_111_53_95_95_91_55_93_95_48_10_p_0(
  MR_Word Var_59,
  MR_Word PredId_11,
  MR_Word PFSymNameArity_12,
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
      hlds__make_hlds__add_pragma__IntroducedFrom__pred__mark_proc_as_obsolete__894__1_3_p_0(Var_59, ProcInfo0_24, &ProcInfo_25);
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
        MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (PragmaName_14));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (PFSymNameArity_12));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[23])));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[139])));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
      }
      {
        Pieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[123])));
        MR_hl_field(MR_mktag(1), Pieces_29, 1) = ((MR_Box) (Var_38));
      }
      {
        Spec_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_30, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.transform_selected_mode_of_pred\'/10"));
        MR_hl_field(MR_mktag(1), Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 16U));
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
hlds__make_hlds__add_pragma__IntroducedFrom__pred__mark_proc_as_obsolete__894__1_3_p_0(
  MR_Word ObsoleteInFavourOf_14,
  MR_Word LambdaHeadVar__1_41,
  MR_Word * LambdaHeadVar__2_42)
{
  {
    MR_Word MaybeObsoleteInFavourOf0_27;
    MR_Word MaybeObsoleteInFavourOf_28;

    hlds__hlds_pred__proc_info_get_obsolete_in_favour_of_2_p_0(LambdaHeadVar__1_41, &MaybeObsoleteInFavourOf0_27);
    if ((MaybeObsoleteInFavourOf0_27 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MaybeObsoleteInFavourOf_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeObsoleteInFavourOf_28, 0) = ((MR_Box) (ObsoleteInFavourOf_14));
      }
    else
    {
      MR_Word ObsoleteInFavourOf0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeObsoleteInFavourOf0_27, (MR_Integer) 0))));
      MR_Word Var_43;

      Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), ObsoleteInFavourOf0_29, ObsoleteInFavourOf_14);
      {
        MaybeObsoleteInFavourOf_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeObsoleteInFavourOf_28, 0) = ((MR_Box) (Var_43));
      }
    }
    hlds__hlds_pred__proc_info_set_obsolete_in_favour_of_3_p_0(MaybeObsoleteInFavourOf_28, LambdaHeadVar__1_41, LambdaHeadVar__2_42);
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_4;

    conv0_HeadVar__4_4 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_pragma__IntroducedFrom__pred__look_up_pragma_pf_sym_arity__1757__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
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
  MR_Integer Arity_17,
  MR_Word * MaybePredId_18)
{
  {
    MR_bool succeeded;
    MR_Word PredTable_19;
    MR_Word PredIds_20;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_10, &PredTable_19);
    hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable_19, IsFullyQualified_11, PredOrFunc_15, SymName_16, Arity_17, &PredIds_20);
    if ((PredIds_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Specs_21;

      switch (FailHandling_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Specs_21 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 2:
          {
            MR_Word Pieces_26;
            MR_Word Spec_27;
            MR_Word Var_110;
            MR_Word Var_113;
            MR_Word Var_114;

            {
              Var_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_114, 0) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(MR_mktag(3), Var_114, 1) = ((MR_Box) (PragmaName_14));
            }
            {
              Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (Var_114));
              MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[112])));
            }
            {
              Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[131])));
              MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (Var_113));
            }
            {
              Pieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[130])));
              MR_hl_field(MR_mktag(1), Pieces_26, 1) = ((MR_Box) (Var_110));
            }
            {
              Spec_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_27, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.look_up_pragma_pf_sym_arity\'/9"));
              MR_hl_field(MR_mktag(1), Spec_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_27, 2) = ((MR_Box) ((MR_Unsigned) 16U));
              MR_hl_field(MR_mktag(1), Spec_27, 3) = ((MR_Box) (Context_13));
              MR_hl_field(MR_mktag(1), Spec_27, 4) = ((MR_Box) (Pieces_26));
            }
            {
              Specs_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Specs_21, 0) = ((MR_Box) (Spec_27));
              MR_hl_field(MR_mktag(1), Specs_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word AllArityPredIds_22;
            MR_Word Preds_23;
            MR_Word OtherArities_24;
            MR_Word DescPieces_25;
            MR_Word Var_126;
            MR_Word Var_131;

            hlds__pred_table__predicate_table_lookup_pf_sym_5_p_0(PredTable_19, (MR_Integer) 1, PredOrFunc_15, SymName_16, &AllArityPredIds_22);
            hlds__hlds_module__module_info_get_preds_2_p_0(ModuleInfo_10, &Preds_23);
            hlds__hlds_error_util__find_pred_arities_other_than_4_p_0(Preds_23, AllArityPredIds_22, Arity_17, &OtherArities_24);
            {
              Var_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_126, 0) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(MR_mktag(3), Var_126, 1) = ((MR_Box) (PragmaName_14));
            }
            {
              DescPieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), DescPieces_25, 0) = ((MR_Box) (Var_126));
              MR_hl_field(MR_mktag(1), DescPieces_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[127])));
            }
            {
              Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (PredOrFunc_15));
            }
            hlds__make_hlds_error__report_undefined_pred_or_func_error_8_p_0(Var_131, SymName_16, Arity_17, OtherArities_24, Context_13, DescPieces_25, (MR_Word) ((MR_Unsigned) 0U), &Specs_21);
          }
          break;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybePredId_18 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_21));
      }
    }
    else
    {
      MR_Word Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_20, (MR_Integer) 1))));
      MR_Word Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_20, (MR_Integer) 0))));

      if ((Var_147 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybePredId_18 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_148));
        }
      else
      {
        MR_Word Var_39;
        MR_Word Specs_138;

        {
          Var_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0_1));
          MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (IsFullyQualified_11));
          MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) ((MR_Integer) 1));
        }
        mercury__require__expect_3_p_0(Var_39, (MR_String) "predicate \140hlds.make_hlds.add_pragma.look_up_pragma_pf_sym_arity\'/9", (MR_String) "two or more PredIds but is_fully_qualified");
        switch (FailHandling_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Specs_138 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_45;
              MR_Word Var_48;
              MR_Word Var_49;
              MR_Word Pieces_134;
              MR_Word Spec_135;

              {
                Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (PragmaName_14));
              }
              {
                Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
                MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[112])));
              }
              {
                Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[132])));
                MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_48));
              }
              {
                Pieces_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_134, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[130])));
                MR_hl_field(MR_mktag(1), Pieces_134, 1) = ((MR_Box) (Var_45));
              }
              {
                Spec_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_135, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.look_up_pragma_pf_sym_arity\'/9"));
                MR_hl_field(MR_mktag(1), Spec_135, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_135, 2) = ((MR_Box) ((MR_Unsigned) 16U));
                MR_hl_field(MR_mktag(1), Spec_135, 3) = ((MR_Box) (Context_13));
                MR_hl_field(MR_mktag(1), Spec_135, 4) = ((MR_Box) (Pieces_134));
              }
              {
                Specs_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Specs_138, 0) = ((MR_Box) (Spec_135));
                MR_hl_field(MR_mktag(1), Specs_138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word StartPieces_32;
              MR_Word PredIdPiecesList_33;
              MR_Word PredIdPieces_34;
              MR_Word MainPieces_35;
              MR_Word Msg_37;
              MR_Word Var_62;
              MR_Word Var_63;
              MR_Word Var_64;
              MR_Word Var_67;
              MR_Word Var_68;
              MR_Word Var_81;
              MR_Word Var_95;
              MR_Word Var_96;
              MR_Word Var_104;
              MR_Word Spec_133;

              {
                Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_63, 0) = ((MR_Box) ((MR_Unsigned) 18U));
                MR_hl_field(MR_mktag(3), Var_63, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_15));
              }
              {
                Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (PragmaName_14));
              }
              {
                Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
                MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[118])));
              }
              {
                Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[134])));
                MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_67));
              }
              {
                Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
                MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_64));
              }
              {
                StartPieces_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), StartPieces_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[133])));
                MR_hl_field(MR_mktag(1), StartPieces_32, 1) = ((MR_Box) (Var_62));
              }
              {
                Var_81 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_6[0]));
                MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__look_up_pragma_pf_sym_arity_9_p_0_2));
                MR_hl_field(MR_mktag(0), Var_81, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_81, 3) = ((MR_Box) (ModuleInfo_10));
                MR_hl_field(MR_mktag(0), Var_81, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              PredIdPiecesList_33 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[3]), Var_81, PredIds_20);
              PredIdPieces_34 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(PredIdPiecesList_33, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[136])));
              MainPieces_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), StartPieces_32, PredIdPieces_34);
              {
                Var_96 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (MainPieces_35));
              }
              {
                Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Var_96));
                MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[138])));
              }
              {
                Msg_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Msg_37, 0) = ((MR_Box) (Context_13));
                MR_hl_field(MR_mktag(1), Msg_37, 1) = ((MR_Box) (Var_95));
              }
              {
                Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (Msg_37));
                MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_133 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_133, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.look_up_pragma_pf_sym_arity\'/9"));
                MR_hl_field(MR_mktag(0), Spec_133, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Spec_133, 2) = ((MR_Box) ((MR_Unsigned) 16U));
                MR_hl_field(MR_mktag(0), Spec_133, 3) = ((MR_Box) (Var_104));
              }
              {
                Specs_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Specs_138, 0) = ((MR_Box) (Spec_133));
                MR_hl_field(MR_mktag(1), Specs_138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybePredId_18 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_138));
        }
      }
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__mark_pred_as_obsolete_7_p_0(
  MR_Word ObsoletePredInfo_8,
  MR_Word PragmaStatus_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * STATE_VARIABLE_ModuleInfo_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  {
    MR_Word PredNameArity_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ObsoletePredInfo_8, (MR_Integer) 0))));
    MR_Word ObsoleteInFavourOf_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ObsoletePredInfo_8, (MR_Integer) 1))));
    MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArity_13, (MR_Integer) 0))));
    MR_Integer Arity_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArity_13, (MR_Integer) 1))));
    MR_Word PredIds_17;
    MR_Word OtherArities_18;

    hlds__make_hlds__add_pragma__get_matching_pred_ids_5_p_0(STATE_VARIABLE_ModuleInfo_0_27, SymName_15, Arity_16, &PredIds_17, &OtherArities_18);
    if ((PredIds_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      hlds__make_hlds_error__report_undefined_pred_or_func_error_8_p_0((MR_Word) ((MR_Unsigned) 0U), SymName_15, Arity_16, OtherArities_18, Context_10, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[42])), STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
      *STATE_VARIABLE_ModuleInfo_28 = STATE_VARIABLE_ModuleInfo_0_27;
    }
    else
    {
      MR_Word PredTable0_21;
      MR_Word Preds0_22;
      MR_Word WrongStatus_23;
      MR_Word Preds_24;
      MR_Word PredTable_25;

      hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_27, &PredTable0_21);
      hlds__pred_table__predicate_table_get_preds_2_p_0(PredTable0_21, &Preds0_22);
      hlds__make_hlds__add_pragma__mark_pred_ids_as_obsolete_7_p_0(ObsoleteInFavourOf_14, PragmaStatus_9, PredIds_17, (MR_Integer) 0, &WrongStatus_23, Preds0_22, &Preds_24);
      switch (WrongStatus_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
          break;
        case (MR_Integer) 1:
          {
            MR_Word PredSymName_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArity_13, (MR_Integer) 0))));
            MR_Integer Arity_50 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArity_13, (MR_Integer) 1))));
            MR_Word Pieces_51;
            MR_Word Spec_52;
            MR_Word Var_55;
            MR_Word Var_57;
            MR_Word Var_60;
            MR_Word Var_61;
            MR_Word Var_62;

            {
              Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (PredSymName_49));
              MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (Arity_50));
            }
            {
              Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (Var_62));
            }
            {
              Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
              MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[40])));
            }
            {
              Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[128])));
              MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_60));
            }
            {
              Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[129])));
              MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_57));
            }
            {
              Pieces_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[123])));
              MR_hl_field(MR_mktag(1), Pieces_51, 1) = ((MR_Box) (Var_55));
            }
            {
              Spec_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_52, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.pragma_status_error\'/5"));
              MR_hl_field(MR_mktag(1), Spec_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_52, 2) = ((MR_Box) ((MR_Unsigned) 16U));
              MR_hl_field(MR_mktag(1), Spec_52, 3) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(1), Spec_52, 4) = ((MR_Box) (Pieces_51));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_30 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_52));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_29));
            }
          }
          break;
      }
      hlds__pred_table__predicate_table_set_preds_3_p_0(Preds_24, PredTable0_21, &PredTable_25);
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_25, STATE_VARIABLE_ModuleInfo_0_27, STATE_VARIABLE_ModuleInfo_28);
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

static void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_54_95_95_91_55_93_95_48_11_p_0(
  MR_Word Var_45,
  MR_String PragmaName_12,
  MR_Word PredSymNameArity_13,
  MR_Word Status_14,
  MR_Word MustBeExported_15,
  MR_Word Context_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_32,
  MR_Word * STATE_VARIABLE_ModuleInfo_33,
  MR_Word * PredIds_19,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35)
{
  {
    MR_Word PredSymName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSymNameArity_13, (MR_Integer) 0))));
    MR_Integer Arity_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredSymNameArity_13, (MR_Integer) 1))));
    MR_Word OtherArities_23;

    hlds__make_hlds__add_pragma__get_matching_pred_ids_5_p_0(STATE_VARIABLE_ModuleInfo_0_32, PredSymName_21, Arity_22, PredIds_19, &OtherArities_23);
    if ((*PredIds_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word DescPieces_31;
      MR_Word Var_36;

      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (PragmaName_12));
      }
      {
        DescPieces_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), DescPieces_31, 0) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(1), DescPieces_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[127])));
      }
      hlds__make_hlds_error__report_undefined_pred_or_func_error_8_p_0((MR_Word) ((MR_Unsigned) 0U), PredSymName_21, Arity_22, OtherArities_23, Context_16, DescPieces_31, STATE_VARIABLE_Specs_0_34, STATE_VARIABLE_Specs_35);
      *STATE_VARIABLE_ModuleInfo_33 = STATE_VARIABLE_ModuleInfo_0_32;
    }
    else
    {
      MR_Word PredTable0_26;
      MR_Word Preds0_27;
      MR_Word Preds_28;
      MR_Word WrongStatus_29;
      MR_Word PredTable_30;

      hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_32, &PredTable0_26);
      hlds__pred_table__predicate_table_get_preds_2_p_0(PredTable0_26, &Preds0_27);
      hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_55_95_95_91_51_93_95_48_7_p_0(Var_45, *PredIds_19, Status_14, MustBeExported_15, Preds0_27, &Preds_28, &WrongStatus_29);
      switch (WrongStatus_29) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Specs_35 = STATE_VARIABLE_Specs_0_34;
          break;
        case (MR_Integer) 1:
          {
            MR_Word PredSymName_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSymNameArity_13, (MR_Integer) 0))));
            MR_Integer Arity_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredSymNameArity_13, (MR_Integer) 1))));
            MR_Word Pieces_54;
            MR_Word Spec_55;
            MR_Word Var_58;
            MR_Word Var_59;
            MR_Word Var_60;
            MR_Word Var_63;
            MR_Word Var_64;
            MR_Word Var_65;

            {
              Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (PragmaName_12));
            }
            {
              Var_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (PredSymName_52));
              MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (Arity_53));
            }
            {
              Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_64, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(MR_mktag(3), Var_64, 1) = ((MR_Box) (Var_65));
            }
            {
              Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
              MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[40])));
            }
            {
              Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[128])));
              MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_63));
            }
            {
              Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
              MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_60));
            }
            {
              Pieces_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[123])));
              MR_hl_field(MR_mktag(1), Pieces_54, 1) = ((MR_Box) (Var_58));
            }
            {
              Spec_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_55, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.pragma_status_error\'/5"));
              MR_hl_field(MR_mktag(1), Spec_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_55, 2) = ((MR_Box) ((MR_Unsigned) 16U));
              MR_hl_field(MR_mktag(1), Spec_55, 3) = ((MR_Box) (Context_16));
              MR_hl_field(MR_mktag(1), Spec_55, 4) = ((MR_Box) (Pieces_54));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_35 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_55));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_34));
            }
          }
          break;
      }
      hlds__pred_table__predicate_table_set_preds_3_p_0(Preds_28, PredTable0_26, &PredTable_30);
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_30, STATE_VARIABLE_ModuleInfo_0_32, STATE_VARIABLE_ModuleInfo_33);
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
hlds__make_hlds__add_pragma__get_matching_pred_ids_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word SymName_7,
  MR_Integer Arity_8,
  MR_Word * PredIds_9,
  MR_Word * OtherArities_10)
{
  {
    MR_Word PredTable0_11;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_6, &PredTable0_11);
    if (((MR_tag((MR_Word) SymName_7)) == (MR_Integer) 1))
    {
      hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredTable0_11, (MR_Integer) 0, SymName_7, Arity_8, PredIds_9);
      if ((*PredIds_9 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word SymOnlyPredIds_15;
        MR_Word Preds0_16;

        hlds__pred_table__predicate_table_lookup_sym_4_p_0(PredTable0_11, (MR_Integer) 0, SymName_7, &SymOnlyPredIds_15);
        hlds__hlds_module__module_info_get_preds_2_p_0(ModuleInfo_6, &Preds0_16);
        hlds__hlds_error_util__find_pred_arities_other_than_4_p_0(Preds0_16, SymOnlyPredIds_15, Arity_8, OtherArities_10);
      }
      else
        *OtherArities_10 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_pragma.get_matching_pred_ids\'/5", (MR_String) "unqualified name");
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
  MR_Word PredSymNameArity_7,
  MR_Word Context_8,
  MR_String PragmaName_9,
  MR_Word ConflictMarkers_10,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  {
    MR_Word PredSymName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSymNameArity_7, (MR_Integer) 0))));
    MR_Integer Arity_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredSymNameArity_7, (MR_Integer) 1))));
    MR_Word ConflictNames_14;
    MR_Word Pieces_15;
    MR_Word Spec_16;
    MR_Word Var_20;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_String Var_33;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Box conv1_Var_33;

    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_2[1]), ConflictMarkers_10, &ConflictNames_14);
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (PragmaName_9));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[125])));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[123])));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_23));
    }
    Var_30 = parse_tree__error_util__list_to_pieces_1_f_0(ConflictNames_14);
    conv1_Var_33 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ConflictNames_14, ((MR_Box) ((MR_String) "pragma for")), ((MR_Box) ((MR_String) "pragmas for")));
    Var_33 = ((MR_String) (conv1_Var_33));
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (PredSymName_12));
      MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (Arity_13));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 10U));
      MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[23])));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_36));
    }
    Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_30, Var_31);
    Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_20, Var_29);
    {
      Spec_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.pragma_conflict_error\'/6"));
      MR_hl_field(MR_mktag(1), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(1), Spec_16, 3) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(1), Spec_16, 4) = ((MR_Box) (Pieces_15));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_18 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_17));
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
