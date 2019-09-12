/*
** Automatically generated from `add_pragma.m'
** by the Mercury compiler,
** version rotd-2019-09-12
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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




static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_marker_0;

static const MR_VA_TypeInfo_Struct2 hlds__make_hlds__add_pragma____vti_pred_2hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0;

static void MR_CALL 
hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

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
hlds__make_hlds__add_pragma__add_pass_2_pragma_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__add_pragma__check_required_feature_set_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pred_marker_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_55_93_95_48_11_p_0(
  MR_Word Var_44,
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
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_p_0(
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

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_require_tail_recursion_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma____Unify____add_marker_pred_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma____Compare____add_marker_pred_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_1[206][2];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_2[3][3];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_3[1][4];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_4[18][1];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_5[1][11];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_6[1][5];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_7[3][6];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_8[1][8];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_9[1][13];




static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_1[206][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 19)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 18)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 18)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 20)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[5])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "exceptions"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: illegal use of pragma"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "pragma"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 16U)),
    ((MR_Box) ((MR_String) "external_func"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 16U)),
    ((MR_Box) ((MR_String) "external_pred"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[14])))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Integer) 22)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[19])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "mm_tabling_info"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[8])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_Integer) 20)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[3])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "trailing_info"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[8])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "unused_args"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[8])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 17U)),
    ((MR_Box) ((MR_String) "unused_args"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[33])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "unknown predicate in"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[35])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Internal compiler error:"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[37])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "ambiguous predicate in"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[35])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[41])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 17U)),
    ((MR_Box) ((MR_String) "require_tail_recursion"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[14])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "pragma."))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[31])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[46])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[47])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: ambiguous predicate or function in"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[47])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must also be exported."))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[31])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[31])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 17U)),
    ((MR_Box) ((MR_String) "obsolete"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[56])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "that supports concurrent execution."))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[31])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: this module must be compiled in a grade"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[60])))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "that uses conservative garbage collection."))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[31])))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[64])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "that uses double precision floats."))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[31])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[67])))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "spf"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[54])))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "do not contain the grade modifier"))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[70])))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Grades that use double precision floats"))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[72])))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "that supports memoisation."))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[31])))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[76])))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "that supports executing conjuntions in parallel."))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[31])))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[79])))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "that uses single precision floats."))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[31])))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[82])))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "contain the grade modifier"))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[70])))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Grades that use single precision floats"))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[85])))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the strict sequential semantics."))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[31])))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: this module must be compiled using"))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[89])))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "that supports trailing."))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[92]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[93])))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "trseg"))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[54])))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[96])))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "tr"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[99]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[98])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the grade modifiers"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[100])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Grades that support trailing contain"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[102])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Don\'t use --no-type-layout to disable them."))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[31])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration requires type_ctor_layout structures."))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[106])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 17U)),
    ((MR_Box) ((MR_String) "fact_table"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[56])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: ambiguous predicate/function name."))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[31])))
  },
  /* row 113 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[112])))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[114]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[113])))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declarations must always be exported."))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[116]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[31])))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "pragma oisu"))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[118]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[117])))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration must always be abstract exported."))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[120]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[31])))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[118]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[121])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The type in a"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[123]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[122])))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is undefined."))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[125]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[31])))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "expected arity is"))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[127]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[129]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[128])))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 17U)),
    ((MR_Box) ((MR_String) "termination_info"))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[131]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[33])))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[132])))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 17U)),
    ((MR_Box) ((MR_String) "termination2_info"))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[134]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[33])))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[135])))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 17U)),
    ((MR_Box) ((MR_String) "structure_sharing."))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[137]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[33])))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[138])))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 17U)),
    ((MR_Box) ((MR_String) "structure_reuse"))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[140]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[33])))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[141])))
  },
  /* row 143 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[0])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 144 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[1])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 145 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: conflicting"))
  },
  /* row 146 */
  {
    ((MR_Box) ((MR_Unsigned) 17U)),
    ((MR_Box) ((MR_String) "require_tail_recursion"))
  },
  /* row 147 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "pragmas for"))
  },
  /* row 148 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or one of its modes."))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[148]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 150 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Earlier pragma is here."))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[150]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 152 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[2])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 153 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: no such mode for"))
  },
  /* row 154 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[3])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 155 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 156 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration conflicts with previous"))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[156]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 158 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[158]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 160 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for exported predicate or function"))
  },
  /* row 161 */
  {
    ((MR_Box) ((MR_Unsigned) 17U)),
    ((MR_Box) ((MR_String) "obsolete"))
  },
  /* row 162 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[4])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 163 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[5])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 164 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 165 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[6])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 166 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[7])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 167 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 168 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "pragma fact_table"))
  },
  /* row 169 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 170 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[8])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 171 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[9])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 172 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Duplicate"))
  },
  /* row 173 */
  {
    ((MR_Box) ((MR_Unsigned) 17U)),
    ((MR_Box) ((MR_String) "oisu"))
  },
  /* row 174 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declarations for"))
  },
  /* row 175 */
  {
    ((MR_Box) ((MR_Unsigned) 17U)),
    ((MR_Box) ((MR_String) "termination_info"))
  },
  /* row 176 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for undeclared mode of"))
  },
  /* row 177 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: ambiguous predicate name"))
  },
  /* row 178 */
  {
    ((MR_Box) ((MR_Unsigned) 17U)),
    ((MR_Box) ((MR_String) "termination2_info"))
  },
  /* row 179 */
  {
    ((MR_Box) ((MR_Unsigned) 17U)),
    ((MR_Box) ((MR_String) "structure_sharing"))
  },
  /* row 180 */
  {
    ((MR_Box) ((MR_Unsigned) 17U)),
    ((MR_Box) ((MR_String) "structure_reuse"))
  },
  /* row 181 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[10])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 182 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[11])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 183 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[74])))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma_scalar_common_1[183]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 185 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[12])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[184])))
  },
  /* row 186 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[13])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 187 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[14])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 188 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[87])))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma_scalar_common_1[188]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 190 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[15])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[189])))
  },
  /* row 191 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[16])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 192 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[104])))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma_scalar_common_1[192]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 194 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[17])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[193])))
  },
  /* row 195 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the"))
  },
  /* row 196 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "predicate specification"))
  },
  /* row 197 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "within the"))
  },
  /* row 198 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "pragma oisu"))
  },
  /* row 199 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 200 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 201 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: predicate"))
  },
  /* row 202 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "one of"))
  },
  /* row 203 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has the wrong arity."))
  },
  /* row 204 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Actual arity is"))
  },
  /* row 205 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: ambiguous predicate name"))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_6[0])),
    ((MR_Box) (hlds__make_hlds__add_pragma__pragma_conflict_error_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_7[1])),
    ((MR_Box) (hlds__make_hlds__add_pragma__add_pass_2_pragma_5_p_0_1)),
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

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_4[18][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[39])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[42])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[151])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[51])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[12])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[23])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[27])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[30])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[119])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[124])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[62])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[65])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[68])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[77])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[80])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[83])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[91])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[94])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_5[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_require_tail_recursion_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_6[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_7[3][6] = {
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
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_8[1][8] = {
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

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_9[1][13] = {
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



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

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
  MR_Integer STATE_VARIABLE_SeqNum_0_41,
  MR_Integer * STATE_VARIABLE_SeqNum_42,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44)
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
      MR_Word Spec_28;

      hlds__pred_table__predicate_table_lookup_sym_4_p_0(PredicateTable_19, (MR_Integer) 0, PredName_20, &LooseArityPredIds_23);
      if ((LooseArityPredIds_23 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TypeName_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_13, (MR_Integer) 0))));
        MR_Integer TypeArity_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_13, (MR_Integer) 1))));
        MR_Word Pieces_26;
        MR_Word Msg_27;
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
        MR_Word Var_187;
        MR_Word Var_190;
        MR_Word Var_192;
        MR_Word Var_195;
        MR_Word Var_196;
        MR_Word Var_197;
        MR_Word Var_204;
        MR_Word Var_205;
        MR_Word Var_209;

        {
          Var_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_169, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_169, 1) = ((MR_Box) (STATE_VARIABLE_SeqNum_0_41));
        }
        {
          Var_171 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_171, 0) = ((MR_Box) (Kind_14));
        }
        {
          Var_186 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_186, 0) = ((MR_Box) (TypeName_24));
          MR_hl_field(MR_mktag(0), Var_186, 1) = ((MR_Box) (TypeArity_25));
        }
        {
          Var_185 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_185, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(MR_mktag(3), Var_185, 1) = ((MR_Box) (Var_186));
        }
        {
          Var_197 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_197, 0) = ((MR_Box) (PredName_20));
          MR_hl_field(MR_mktag(0), Var_197, 1) = ((MR_Box) (PredArity_21));
        }
        {
          Var_196 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_196, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(MR_mktag(3), Var_196, 1) = ((MR_Box) (Var_197));
        }
        {
          Var_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_195, 0) = ((MR_Box) (Var_196));
          MR_hl_field(MR_mktag(1), Var_195, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[126])));
        }
        {
          Var_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_192, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[201])));
          MR_hl_field(MR_mktag(1), Var_192, 1) = ((MR_Box) (Var_195));
        }
        {
          Var_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_190, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(1), Var_190, 1) = ((MR_Box) (Var_192));
        }
        {
          Var_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_187, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[200])));
          MR_hl_field(MR_mktag(1), Var_187, 1) = ((MR_Box) (Var_190));
        }
        {
          Var_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_184, 0) = ((MR_Box) (Var_185));
          MR_hl_field(MR_mktag(1), Var_184, 1) = ((MR_Box) (Var_187));
        }
        {
          Var_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_181, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[199])));
          MR_hl_field(MR_mktag(1), Var_181, 1) = ((MR_Box) (Var_184));
        }
        {
          Var_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_178, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[198])));
          MR_hl_field(MR_mktag(1), Var_178, 1) = ((MR_Box) (Var_181));
        }
        {
          Var_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_175, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[197])));
          MR_hl_field(MR_mktag(1), Var_175, 1) = ((MR_Box) (Var_178));
        }
        {
          Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_172, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[196])));
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
          Pieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[195])));
          MR_hl_field(MR_mktag(1), Pieces_26, 1) = ((MR_Box) (Var_168));
        }
        {
          Var_205 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_205, 0) = ((MR_Box) (Pieces_26));
        }
        {
          Var_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_204, 0) = ((MR_Box) (Var_205));
          MR_hl_field(MR_mktag(1), Var_204, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Msg_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_27, 0) = ((MR_Box) (Context_12));
          MR_hl_field(MR_mktag(0), Msg_27, 1) = ((MR_Box) (Var_204));
        }
        {
          Var_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_209, 0) = ((MR_Box) (Msg_27));
          MR_hl_field(MR_mktag(1), Var_209, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(0), Spec_28, 2) = ((MR_Box) (Var_209));
        }
      }
      else
      {
        MR_Word ArityPieces_31;
        MR_Word SortedArityPieces_32;
        MR_Word ExpArities_34;
        MR_Word Var_95;
        MR_Word Var_104;
        MR_Word Var_107;
        MR_Word Var_108;
        MR_Word Var_109;
        MR_Word Var_110;
        MR_Word Var_111;
        MR_Word Var_114;
        MR_Word Var_117;
        MR_Word Var_120;
        MR_Word Var_123;
        MR_Word Var_124;
        MR_Word Var_125;
        MR_Word Var_126;
        MR_Word Var_129;
        MR_Word Var_131;
        MR_Word Var_134;
        MR_Word Var_135;
        MR_Word Var_136;
        MR_Word Var_137;
        MR_Word Var_140;
        MR_Word Var_143;
        MR_Word Var_144;
        MR_Word Var_152;
        MR_Word Var_159;
        MR_Word Var_160;
        MR_Word Var_164;
        MR_Word TypeName_214;
        MR_Integer TypeArity_215;
        MR_Word Pieces_216;
        MR_Word Msg_217;

        {
          Var_95 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_7[2]));
          MR_hl_field(MR_mktag(0), Var_95, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0_1));
          MR_hl_field(MR_mktag(0), Var_95, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_95, 3) = ((MR_Box) (ModuleInfo_11));
        }
        mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_95, LooseArityPredIds_23, &ArityPieces_31);
        mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ArityPieces_31, &SortedArityPieces_32);
        if ((SortedArityPieces_32 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_pragma.find_unique_pred_for_oisu\'/10", (MR_String) "no arity pieces");
            return;
          }
        }
        else
        {
          MR_Word Var_227 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SortedArityPieces_32, (MR_Integer) 1))));

          if ((Var_227 == (MR_Word) ((MR_Unsigned) 0U)))
            ExpArities_34 = SortedArityPieces_32;
          else
          {
            MR_Word Var_99;

            Var_99 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", SortedArityPieces_32);
            {
              ExpArities_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ExpArities_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[202])));
              MR_hl_field(MR_mktag(1), ExpArities_34, 1) = ((MR_Box) (Var_99));
            }
          }
        }
        TypeName_214 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_13, (MR_Integer) 0))));
        TypeArity_215 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_13, (MR_Integer) 1))));
        {
          Var_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_108, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_108, 1) = ((MR_Box) (STATE_VARIABLE_SeqNum_0_41));
        }
        {
          Var_110 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_110, 0) = ((MR_Box) (Kind_14));
        }
        {
          Var_125 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_125, 0) = ((MR_Box) (TypeName_214));
          MR_hl_field(MR_mktag(0), Var_125, 1) = ((MR_Box) (TypeArity_215));
        }
        {
          Var_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_124, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(MR_mktag(3), Var_124, 1) = ((MR_Box) (Var_125));
        }
        {
          Var_136 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_136, 0) = ((MR_Box) (PredName_20));
          MR_hl_field(MR_mktag(0), Var_136, 1) = ((MR_Box) (PredArity_21));
        }
        {
          Var_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_135, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(MR_mktag(3), Var_135, 1) = ((MR_Box) (Var_136));
        }
        {
          Var_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_144, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_144, 1) = ((MR_Box) (PredArity_21));
        }
        {
          Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (Var_144));
          MR_hl_field(MR_mktag(1), Var_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[130])));
        }
        {
          Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[204])));
          MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) (Var_143));
        }
        {
          Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[203])));
          MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) (Var_140));
        }
        {
          Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (Var_135));
          MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (Var_137));
        }
        {
          Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[201])));
          MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) (Var_134));
        }
        {
          Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (Var_131));
        }
        {
          Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[200])));
          MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (Var_129));
        }
        {
          Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (Var_124));
          MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (Var_126));
        }
        {
          Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[199])));
          MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (Var_123));
        }
        {
          Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[198])));
          MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (Var_120));
        }
        {
          Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[197])));
          MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Var_117));
        }
        {
          Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[196])));
          MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) (Var_114));
        }
        {
          Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (Var_110));
          MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (Var_111));
        }
        {
          Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (Var_108));
          MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (Var_109));
        }
        {
          Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[195])));
          MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (Var_107));
        }
        Var_152 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ExpArities_34, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[54])));
        Pieces_216 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_104, Var_152);
        {
          Var_160 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_160, 0) = ((MR_Box) (Pieces_216));
        }
        {
          Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_159, 0) = ((MR_Box) (Var_160));
          MR_hl_field(MR_mktag(1), Var_159, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Msg_217 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_217, 0) = ((MR_Box) (Context_12));
          MR_hl_field(MR_mktag(0), Msg_217, 1) = ((MR_Box) (Var_159));
        }
        {
          Var_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_164, 0) = ((MR_Box) (Msg_217));
          MR_hl_field(MR_mktag(1), Var_164, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(0), Spec_28, 2) = ((MR_Box) (Var_164));
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_44 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_28));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_43));
      }
      *PredId_16 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    }
    else
    {
      MR_Word Var_229 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_22, (MR_Integer) 1))));
      MR_Word Var_230 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_22, (MR_Integer) 0))));

      if ((Var_229 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *PredId_16 = Var_230;
        *STATE_VARIABLE_Specs_44 = STATE_VARIABLE_Specs_0_43;
      }
      else
      {
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_56;
        MR_Word Var_59;
        MR_Word Var_62;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_71;
        MR_Word Var_73;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Word Var_85;
        MR_Word Var_86;
        MR_Word Var_90;
        MR_Word TypeName_218 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_13, (MR_Integer) 0))));
        MR_Integer TypeArity_219 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_13, (MR_Integer) 1))));
        MR_Word Pieces_220;
        MR_Word Msg_221;
        MR_Word Spec_222;

        {
          Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) (STATE_VARIABLE_SeqNum_0_41));
        }
        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_52, 0) = ((MR_Box) (Kind_14));
        }
        {
          Var_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (TypeName_218));
          MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (TypeArity_219));
        }
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (Var_67));
        }
        {
          Var_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (PredName_20));
          MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (PredArity_21));
        }
        {
          Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_77, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(MR_mktag(3), Var_77, 1) = ((MR_Box) (Var_78));
        }
        {
          Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
          MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[54])));
        }
        {
          Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[205])));
          MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_76));
        }
        {
          Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_73));
        }
        {
          Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[200])));
          MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_71));
        }
        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
          MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_68));
        }
        {
          Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[199])));
          MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_65));
        }
        {
          Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[173])));
          MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_62));
        }
        {
          Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[197])));
          MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_59));
        }
        {
          Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[196])));
          MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
        }
        {
          Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
          MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_53));
        }
        {
          Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
          MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_51));
        }
        {
          Pieces_220 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_220, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[195])));
          MR_hl_field(MR_mktag(1), Pieces_220, 1) = ((MR_Box) (Var_49));
        }
        {
          Var_86 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (Pieces_220));
        }
        {
          Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Var_86));
          MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Msg_221 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_221, 0) = ((MR_Box) (Context_12));
          MR_hl_field(MR_mktag(0), Msg_221, 1) = ((MR_Box) (Var_85));
        }
        {
          Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Msg_221));
          MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_222 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_222, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_222, 1) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(0), Spec_222, 2) = ((MR_Box) (Var_90));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_44 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_222));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_43));
        }
        *PredId_16 = hlds__hlds_pred__invalid_pred_id_0_f_0();
      }
    }
    *STATE_VARIABLE_SeqNum_42 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_SeqNum_0_41 + (MR_Unsigned) 1);
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
                MR_Word Msg_12;
                MR_Word Spec_13;
                MR_Word Var_211;

                {
                  Msg_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Msg_12, 0) = ((MR_Box) (Context_7));
                  MR_hl_field(MR_mktag(0), Msg_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[181])));
                }
                {
                  Var_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_211, 0) = ((MR_Box) (Msg_12));
                  MR_hl_field(MR_mktag(1), Var_211, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_13, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 16U));
                  MR_hl_field(MR_mktag(0), Spec_13, 2) = ((MR_Box) (Var_211));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_24 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_13));
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
                MR_Word Var_38;
                MR_Word Msg_276;
                MR_Word Spec_277;

                {
                  Msg_276 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Msg_276, 0) = ((MR_Box) (Context_7));
                  MR_hl_field(MR_mktag(0), Msg_276, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[182])));
                }
                {
                  Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Msg_276));
                  MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_277 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_277, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_277, 1) = ((MR_Box) ((MR_Unsigned) 16U));
                  MR_hl_field(MR_mktag(0), Spec_277, 2) = ((MR_Box) (Var_38));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_24 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_277));
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
          MR_Word SinglePrecFloat_234;

          libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 247, &SinglePrecFloat_234);
          switch (SinglePrecFloat_234) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_161;
                MR_Word Msg_224;
                MR_Word Spec_225;

                {
                  Msg_224 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Msg_224, 0) = ((MR_Box) (Context_7));
                  MR_hl_field(MR_mktag(0), Msg_224, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[185])));
                }
                {
                  Var_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_161, 0) = ((MR_Box) (Msg_224));
                  MR_hl_field(MR_mktag(1), Var_161, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_225 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_225, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_225, 1) = ((MR_Box) ((MR_Unsigned) 16U));
                  MR_hl_field(MR_mktag(0), Spec_225, 2) = ((MR_Box) (Var_161));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_24 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_225));
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
                MR_Word Var_127;
                MR_Word Msg_237;
                MR_Word Spec_238;

                {
                  Msg_237 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Msg_237, 0) = ((MR_Box) (Context_7));
                  MR_hl_field(MR_mktag(0), Msg_237, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[186])));
                }
                {
                  Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (Msg_237));
                  MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_238 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_238, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_238, 1) = ((MR_Box) ((MR_Unsigned) 16U));
                  MR_hl_field(MR_mktag(0), Spec_238, 2) = ((MR_Box) (Var_127));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_24 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_238));
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
                MR_Word Var_111;
                MR_Word Msg_246;
                MR_Word Spec_247;

                {
                  Msg_246 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Msg_246, 0) = ((MR_Box) (Context_7));
                  MR_hl_field(MR_mktag(0), Msg_246, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[187])));
                }
                {
                  Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Msg_246));
                  MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_247 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_247, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_247, 1) = ((MR_Box) ((MR_Unsigned) 16U));
                  MR_hl_field(MR_mktag(0), Spec_247, 2) = ((MR_Box) (Var_111));
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
            case (MR_Integer) 1:
              *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SinglePrecFloat_14;

          libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 247, &SinglePrecFloat_14);
          switch (SinglePrecFloat_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_195;
                MR_Word Msg_215;
                MR_Word Spec_216;

                {
                  Msg_215 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Msg_215, 0) = ((MR_Box) (Context_7));
                  MR_hl_field(MR_mktag(0), Msg_215, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[190])));
                }
                {
                  Var_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_195, 0) = ((MR_Box) (Msg_215));
                  MR_hl_field(MR_mktag(1), Var_195, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_216 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_216, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_216, 1) = ((MR_Box) ((MR_Unsigned) 16U));
                  MR_hl_field(MR_mktag(0), Spec_216, 2) = ((MR_Box) (Var_195));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_24 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_216));
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

          libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 188, &ReorderConj_19);
          libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 189, &ReorderDisj_20);
          libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 190, &FullyStrict_21);
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
            MR_Word Var_57;
            MR_Word Msg_267;
            MR_Word Spec_268;

            {
              Msg_267 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Msg_267, 0) = ((MR_Box) (Context_7));
              MR_hl_field(MR_mktag(0), Msg_267, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[191])));
            }
            {
              Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Msg_267));
              MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_268 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_268, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_268, 1) = ((MR_Box) ((MR_Unsigned) 16U));
              MR_hl_field(MR_mktag(0), Spec_268, 2) = ((MR_Box) (Var_57));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_24 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_268));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
            }
          }
        }
        break;
      case (MR_Integer) 5:
        {
          MR_Word UseTrail_18;

          libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 241, &UseTrail_18);
          switch (UseTrail_18) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_95;
                MR_Word Msg_255;
                MR_Word Spec_256;

                {
                  Msg_255 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Msg_255, 0) = ((MR_Box) (Context_7));
                  MR_hl_field(MR_mktag(0), Msg_255, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[194])));
                }
                {
                  Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Msg_255));
                  MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_256 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_256, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_256, 1) = ((MR_Box) ((MR_Unsigned) 16U));
                  MR_hl_field(MR_mktag(0), Spec_256, 2) = ((MR_Box) (Var_95));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_24 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_256));
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
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  {
    MR_Word PredSymName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSymNameArity_6, (MR_Integer) 0))));
    MR_Integer Arity_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredSymNameArity_6, (MR_Integer) 1))));
    MR_Word Pieces_12;
    MR_Word Msg_13;
    MR_Word Spec_14;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_38;

    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (PragmaName_8));
    }
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (PredSymName_10));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (Arity_11));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 10U));
      MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[53])));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[160])));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_21));
    }
    {
      Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[155])));
      MR_hl_field(MR_mktag(1), Pieces_12, 1) = ((MR_Box) (Var_19));
    }
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (Pieces_12));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_13, 0) = ((MR_Box) (Context_7));
      MR_hl_field(MR_mktag(0), Msg_13, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Msg_13));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) (Var_38));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
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
        MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 17U));
        MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (PragmaName_12));
      }
      {
        DescPieces_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), DescPieces_31, 0) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(1), DescPieces_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[159])));
      }
      hlds__make_hlds_error__report_undefined_pred_or_func_error_7_p_0(PredSymName_21, Arity_22, OtherArities_23, Context_16, DescPieces_31, STATE_VARIABLE_Specs_0_34, STATE_VARIABLE_Specs_35);
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
            MR_Word PredSymName_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSymNameArity_13, (MR_Integer) 0))));
            MR_Integer Arity_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredSymNameArity_13, (MR_Integer) 1))));
            MR_Word Pieces_52;
            MR_Word Msg_53;
            MR_Word Spec_54;
            MR_Word Var_57;
            MR_Word Var_58;
            MR_Word Var_59;
            MR_Word Var_62;
            MR_Word Var_63;
            MR_Word Var_64;
            MR_Word Var_71;
            MR_Word Var_72;
            MR_Word Var_76;

            {
              Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) ((MR_Unsigned) 17U));
              MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (PragmaName_12));
            }
            {
              Var_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (PredSymName_50));
              MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (Arity_51));
            }
            {
              Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_63, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(MR_mktag(3), Var_63, 1) = ((MR_Box) (Var_64));
            }
            {
              Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
              MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[53])));
            }
            {
              Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[160])));
              MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_62));
            }
            {
              Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
              MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_59));
            }
            {
              Pieces_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[155])));
              MR_hl_field(MR_mktag(1), Pieces_52, 1) = ((MR_Box) (Var_57));
            }
            {
              Var_72 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (Pieces_52));
            }
            {
              Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
              MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Msg_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Msg_53, 0) = ((MR_Box) (Context_16));
              MR_hl_field(MR_mktag(0), Msg_53, 1) = ((MR_Box) (Var_71));
            }
            {
              Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Msg_53));
              MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_54 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_54, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_54, 1) = ((MR_Box) ((MR_Unsigned) 16U));
              MR_hl_field(MR_mktag(0), Spec_54, 2) = ((MR_Box) (Var_76));
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
hlds__make_hlds__add_pragma__add_pragma_mm_tabling_info_6_p_0(
  MR_Word MMTablingInfo_7,
  MR_Word _Context_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * STATE_VARIABLE_ModuleInfo_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31)
{
  hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_109_109_95_116_97_98_108_105_110_103_95_105_110_102_111_95_95_91_50_93_95_48_6_p_0(MMTablingInfo_7, STATE_VARIABLE_ModuleInfo_0_28, STATE_VARIABLE_ModuleInfo_29, STATE_VARIABLE_Specs_0_30, STATE_VARIABLE_Specs_31);
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_trailing_info_6_p_0(
  MR_Word TrailingInfo_7,
  MR_Word _Context_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * STATE_VARIABLE_ModuleInfo_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31)
{
  hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_116_114_97_105_108_105_110_103_95_105_110_102_111_95_95_91_50_93_95_48_6_p_0(TrailingInfo_7, STATE_VARIABLE_ModuleInfo_0_28, STATE_VARIABLE_ModuleInfo_29, STATE_VARIABLE_Specs_0_30, STATE_VARIABLE_Specs_31);
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_exceptions_6_p_0(
  MR_Word ExceptionsInfo_7,
  MR_Word _Context_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * STATE_VARIABLE_ModuleInfo_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31)
{
  hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_101_120_99_101_112_116_105_111_110_115_95_95_91_50_93_95_48_6_p_0(ExceptionsInfo_7, STATE_VARIABLE_ModuleInfo_0_28, STATE_VARIABLE_ModuleInfo_29, STATE_VARIABLE_Specs_0_30, STATE_VARIABLE_Specs_31);
}

void MR_CALL 
hlds__make_hlds__add_pragma__mark_pred_as_external_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * STATE_VARIABLE_ModuleInfo_11)
{
  {
    MR_Word PredTable0_6;
    MR_Word PredInfo0_7;
    MR_Word PredInfo_8;
    MR_Word PredTable_9;
    MR_Box conv0_PredInfo0_7;

    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_10, &PredTable0_6);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable0_6, ((MR_Box) (PredId_4)), &conv0_PredInfo0_7);
    PredInfo0_7 = ((MR_Word) (conv0_PredInfo0_7));
    hlds__hlds_pred__pred_info_mark_as_external_2_p_0(PredInfo0_7, &PredInfo_8);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_4)), ((MR_Box) (PredInfo_8)), PredTable0_6, &PredTable_9);
    hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_9, STATE_VARIABLE_ModuleInfo_0_10, STATE_VARIABLE_ModuleInfo_11);
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pass_3_pragmas_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_QualInfo_0_4,
  MR_Word * STATE_VARIABLE_QualInfo_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_7 = STATE_VARIABLE_Specs_0_6;
      *STATE_VARIABLE_QualInfo_5 = STATE_VARIABLE_QualInfo_0_4;
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word SectionItem_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word SectionItems_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ModuleInfo_28_28;
      MR_Word STATE_VARIABLE_QualInfo_29_29;
      MR_Word STATE_VARIABLE_Specs_30_30;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_QualInfo_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_6;

      hlds__make_hlds__add_pragma__add_pass_3_pragma_7_p_0(SectionItem_17, STATE_VARIABLE_ModuleInfo_0_2, &STATE_VARIABLE_ModuleInfo_28_28, STATE_VARIABLE_QualInfo_0_4, &STATE_VARIABLE_QualInfo_29_29, STATE_VARIABLE_Specs_0_6, &STATE_VARIABLE_Specs_30_30);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = SectionItems_18;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_28_28;
      next_value_of_STATE_VARIABLE_QualInfo_0_4 = STATE_VARIABLE_QualInfo_29_29;
      next_value_of_STATE_VARIABLE_Specs_0_6 = STATE_VARIABLE_Specs_30_30;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      STATE_VARIABLE_QualInfo_0_4 = next_value_of_STATE_VARIABLE_QualInfo_0_4;
      STATE_VARIABLE_Specs_0_6 = next_value_of_STATE_VARIABLE_Specs_0_6;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pass_3_pragma_7_p_0(
  MR_Word SectionItem_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_38,
  MR_Word * STATE_VARIABLE_ModuleInfo_39,
  MR_Word STATE_VARIABLE_QualInfo_0_40,
  MR_Word * STATE_VARIABLE_QualInfo_41,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43)
{
  {
    MR_Word ItemMercuryStatus_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionItem_8, (MR_Integer) 0))));
    MR_Word ItemPragmaInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionItem_8, (MR_Integer) 1))));
    MR_Word Pragma_14;
    MR_Word MaybeAttrs_15;
    MR_Word Context_16;
    MR_Integer SeqNum_17;
    MR_Word STATE_VARIABLE_Specs_44_44;

    hlds__make_hlds_error__report_if_pragma_is_wrongly_in_interface_4_p_0(ItemMercuryStatus_12, ItemPragmaInfo_13, STATE_VARIABLE_Specs_0_42, &STATE_VARIABLE_Specs_44_44);
    Pragma_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragmaInfo_13, (MR_Integer) 0))));
    MaybeAttrs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragmaInfo_13, (MR_Integer) 1))));
    Context_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragmaInfo_13, (MR_Integer) 2))));
    SeqNum_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemPragmaInfo_13, (MR_Integer) 3))));
    switch (MR_tag((MR_Word) Pragma_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word FPInfo_18 = (MR_Word) (MR_body((MR_Word) (Pragma_14), (MR_Integer) 2));
          MR_Word PredStatus_19;
          MR_Word Var_88;

          hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_12, &PredStatus_19);
          {
            Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (SeqNum_17));
          }
          hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(FPInfo_18, PredStatus_19, Context_16, Var_88, STATE_VARIABLE_ModuleInfo_0_38, STATE_VARIABLE_ModuleInfo_39, STATE_VARIABLE_Specs_44_44, STATE_VARIABLE_Specs_43);
          *STATE_VARIABLE_QualInfo_41 = STATE_VARIABLE_QualInfo_0_40;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma_14, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word FEInfo_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_14, (MR_Integer) 1))));

              hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0(MaybeAttrs_15, FEInfo_20, Context_16, STATE_VARIABLE_ModuleInfo_0_38, STATE_VARIABLE_ModuleInfo_39, STATE_VARIABLE_Specs_44_44, STATE_VARIABLE_Specs_43);
              *STATE_VARIABLE_QualInfo_41 = STATE_VARIABLE_QualInfo_0_40;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeSpecInfo_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_14, (MR_Integer) 1))));

              hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_8_p_0(TypeSpecInfo_21, Context_16, STATE_VARIABLE_ModuleInfo_0_38, STATE_VARIABLE_ModuleInfo_39, STATE_VARIABLE_QualInfo_0_40, STATE_VARIABLE_QualInfo_41, STATE_VARIABLE_Specs_44_44, STATE_VARIABLE_Specs_43);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word TabledInfo_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_14, (MR_Integer) 1))));
              MR_Word Globals_23;
              MR_Word TypeLayout_24;

              hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_38, &Globals_23);
              libs__globals__lookup_bool_option_3_p_0(Globals_23, (MR_Integer) 248, &TypeLayout_24);
              switch (TypeLayout_24) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word EvalMethod_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TabledInfo_22, (MR_Integer) 0))));
                    MR_Word Pieces_29;
                    MR_Word Msg_30;
                    MR_Word Spec_31;
                    MR_Word Var_60;
                    MR_Word Var_61;
                    MR_String Var_62;
                    MR_Word Var_72;
                    MR_Word Var_73;
                    MR_Word Var_77;

                    Var_62 = parse_tree__prog_out__eval_method_to_string_1_f_0(EvalMethod_25);
                    {
                      Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 17U));
                      MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (Var_62));
                    }
                    {
                      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
                      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[108])));
                    }
                    {
                      Pieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[155])));
                      MR_hl_field(MR_mktag(1), Pieces_29, 1) = ((MR_Box) (Var_60));
                    }
                    {
                      Var_73 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (Pieces_29));
                    }
                    {
                      Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
                      MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Msg_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Msg_30, 0) = ((MR_Box) (Context_16));
                      MR_hl_field(MR_mktag(0), Msg_30, 1) = ((MR_Box) (Var_72));
                    }
                    {
                      Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Msg_30));
                      MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Spec_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Spec_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(0), Spec_31, 1) = ((MR_Box) ((MR_Unsigned) 16U));
                      MR_hl_field(MR_mktag(0), Spec_31, 2) = ((MR_Box) (Var_77));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *STATE_VARIABLE_Specs_43 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_31));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_44_44));
                    }
                    *STATE_VARIABLE_ModuleInfo_39 = STATE_VARIABLE_ModuleInfo_0_38;
                    *STATE_VARIABLE_QualInfo_41 = STATE_VARIABLE_QualInfo_0_40;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word PredStatus_91;

                    hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_12, &PredStatus_91);
                    hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_9_p_0(TabledInfo_22, Context_16, PredStatus_91, STATE_VARIABLE_ModuleInfo_0_38, STATE_VARIABLE_ModuleInfo_39, STATE_VARIABLE_QualInfo_0_40, STATE_VARIABLE_QualInfo_41, STATE_VARIABLE_Specs_44_44, STATE_VARIABLE_Specs_43);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word FTInfo_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_14, (MR_Integer) 1))));
              MR_Word PredStatus_94;

              hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_12, &PredStatus_94);
              hlds__make_hlds__add_pragma__add_pragma_fact_table_7_p_0(FTInfo_32, PredStatus_94, Context_16, STATE_VARIABLE_ModuleInfo_0_38, STATE_VARIABLE_ModuleInfo_39, STATE_VARIABLE_Specs_44_44, STATE_VARIABLE_Specs_43);
              *STATE_VARIABLE_QualInfo_41 = STATE_VARIABLE_QualInfo_0_40;
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word OISUInfo_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_14, (MR_Integer) 1))));

              hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0(OISUInfo_33, ItemMercuryStatus_12, Context_16, STATE_VARIABLE_ModuleInfo_0_38, STATE_VARIABLE_ModuleInfo_39, STATE_VARIABLE_Specs_44_44, STATE_VARIABLE_Specs_43);
              *STATE_VARIABLE_QualInfo_41 = STATE_VARIABLE_QualInfo_0_40;
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word TermInfo_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_14, (MR_Integer) 1))));

              hlds__make_hlds__add_pragma__add_pragma_termination_info_6_p_0(TermInfo_34, Context_16, STATE_VARIABLE_ModuleInfo_0_38, STATE_VARIABLE_ModuleInfo_39, STATE_VARIABLE_Specs_44_44, STATE_VARIABLE_Specs_43);
              *STATE_VARIABLE_QualInfo_41 = STATE_VARIABLE_QualInfo_0_40;
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word Term2Info_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_14, (MR_Integer) 1))));

              hlds__make_hlds__add_pragma__add_pragma_termination2_info_6_p_0(Term2Info_35, Context_16, STATE_VARIABLE_ModuleInfo_0_38, STATE_VARIABLE_ModuleInfo_39, STATE_VARIABLE_Specs_44_44, STATE_VARIABLE_Specs_43);
              *STATE_VARIABLE_QualInfo_41 = STATE_VARIABLE_QualInfo_0_40;
            }
            break;
          case (MR_Integer) 24:
            {
              MR_Word SharingInfo_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_14, (MR_Integer) 1))));

              hlds__make_hlds__add_pragma__add_pragma_structure_sharing_6_p_0(SharingInfo_36, Context_16, STATE_VARIABLE_ModuleInfo_0_38, STATE_VARIABLE_ModuleInfo_39, STATE_VARIABLE_Specs_44_44, STATE_VARIABLE_Specs_43);
              *STATE_VARIABLE_QualInfo_41 = STATE_VARIABLE_QualInfo_0_40;
            }
            break;
          case (MR_Integer) 25:
            {
              MR_Word ReuseInfo_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_14, (MR_Integer) 1))));

              hlds__make_hlds__add_pragma__add_pragma_structure_reuse_6_p_0(ReuseInfo_37, Context_16, STATE_VARIABLE_ModuleInfo_0_38, STATE_VARIABLE_ModuleInfo_39, STATE_VARIABLE_Specs_44_44, STATE_VARIABLE_Specs_43);
              *STATE_VARIABLE_QualInfo_41 = STATE_VARIABLE_QualInfo_0_40;
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
  MR_Word STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * STATE_VARIABLE_ModuleInfo_40,
  MR_Word STATE_VARIABLE_Specs_0_41,
  MR_Word * STATE_VARIABLE_Specs_42)
{
  {
    MR_bool succeeded;
    MR_Word PredNameModesPF_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo_7, (MR_Integer) 0))));
    MR_Word HeadVars_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo_7, (MR_Integer) 1))));
    MR_Word Types_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo_7, (MR_Integer) 2))));
    MR_Word MaybeReuseDomain_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo_7, (MR_Integer) 3))));

    if ((MaybeReuseDomain_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleInfo_40 = STATE_VARIABLE_ModuleInfo_0_39;
      *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_0_41;
    }
    else
    {
      MR_Word ReuseDomain_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReuseDomain_14, (MR_Integer) 0))));
      MR_Word SymName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_11, (MR_Integer) 0))));
      MR_Word ModeList_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_11, (MR_Integer) 1))));
      MR_Word PredOrFunc_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF_11, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word Preds_19;
      MR_Integer Arity_20;
      MR_Word PredIds_21;

      hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_39, &Preds_19);
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ModeList_17, &Arity_20);
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(Preds_19, (MR_Integer) 0, PredOrFunc_18, SymName_16, Arity_20, &PredIds_21);
      if ((PredIds_21 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_ModuleInfo_40 = STATE_VARIABLE_ModuleInfo_0_39;
        *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_0_41;
      }
      else
      {
        MR_Word Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_21, (MR_Integer) 1))));
        MR_Word Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_21, (MR_Integer) 0))));

        if ((Var_105 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word PredTable0_23;
          MR_Word PredInfo0_24;
          MR_Word ProcTable0_25;
          MR_Word ProcList_26;
          MR_Box conv0_PredInfo0_24;
          MR_Integer ProcId_27;

          hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_39, &PredTable0_23);
          mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable0_23, ((MR_Box) (Var_106)), &conv0_PredInfo0_24);
          PredInfo0_24 = ((MR_Word) (conv0_PredInfo0_24));
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_24, &ProcTable0_25);
          mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_25, &ProcList_26);
          succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(ProcList_26, ModeList_17, STATE_VARIABLE_ModuleInfo_0_39, &ProcId_27);
          if (succeeded)
          {
            MR_Word ProcInfo0_28;
            MR_Word ProcInfo_29;
            MR_Word ProcTable_30;
            MR_Word PredInfo_31;
            MR_Word PredTable_32;
            MR_Box conv1_ProcInfo0_28;

            mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_25, ((MR_Box) (ProcId_27)), &conv1_ProcInfo0_28);
            ProcInfo0_28 = ((MR_Word) (conv1_ProcInfo0_28));
            hlds__hlds_pred__proc_info_set_imported_structure_reuse_5_p_0(HeadVars_12, Types_13, ReuseDomain_15, ProcInfo0_28, &ProcInfo_29);
            mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_27)), ((MR_Box) (ProcInfo_29)), ProcTable0_25, &ProcTable_30);
            hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_30, PredInfo0_24, &PredInfo_31);
            mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (Var_106)), ((MR_Box) (PredInfo_31)), PredTable0_23, &PredTable_32);
            hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_32, STATE_VARIABLE_ModuleInfo_0_39, STATE_VARIABLE_ModuleInfo_40);
            *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_0_41;
          }
          else
          {
            MR_Word Pieces_33;
            MR_Word Msg_34;
            MR_Word Spec_35;
            MR_Word Var_74;
            MR_Word Var_77;
            MR_Word Var_80;
            MR_Word Var_81;
            MR_Word Var_82;
            MR_Word Var_89;
            MR_Word Var_90;
            MR_Word Var_94;

            {
              Var_82 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_82, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
              MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (SymName_16));
              MR_hl_field(MR_mktag(0), Var_82, 2) = ((MR_Box) (Arity_20));
            }
            {
              Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) ((MR_Unsigned) 15U));
              MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (Var_82));
            }
            {
              Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
              MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[54])));
            }
            {
              Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[176])));
              MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_80));
            }
            {
              Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[180])));
              MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_77));
            }
            {
              Pieces_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[155])));
              MR_hl_field(MR_mktag(1), Pieces_33, 1) = ((MR_Box) (Var_74));
            }
            {
              Var_90 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (Pieces_33));
            }
            {
              Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Var_90));
              MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Msg_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Msg_34, 0) = ((MR_Box) (Context_8));
              MR_hl_field(MR_mktag(0), Msg_34, 1) = ((MR_Box) (Var_89));
            }
            {
              Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Msg_34));
              MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_35, 1) = ((MR_Box) ((MR_Unsigned) 16U));
              MR_hl_field(MR_mktag(0), Spec_35, 2) = ((MR_Box) (Var_94));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_42 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_35));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_41));
            }
            *STATE_VARIABLE_ModuleInfo_40 = STATE_VARIABLE_ModuleInfo_0_39;
          }
        }
        else
        {
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Word Var_67;
          MR_Word Pieces_97;
          MR_Word Msg_98;
          MR_Word Spec_99;

          {
            Var_49 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_49, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
            MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (SymName_16));
            MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) (Arity_20));
          }
          {
            Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 15U));
            MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (Var_49));
          }
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
            MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[142])));
          }
          {
            Pieces_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_97, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[177])));
            MR_hl_field(MR_mktag(1), Pieces_97, 1) = ((MR_Box) (Var_47));
          }
          {
            Var_63 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (Pieces_97));
          }
          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
            MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Msg_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Msg_98, 0) = ((MR_Box) (Context_8));
            MR_hl_field(MR_mktag(0), Msg_98, 1) = ((MR_Box) (Var_62));
          }
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Msg_98));
            MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_99 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_99, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_99, 1) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(0), Spec_99, 2) = ((MR_Box) (Var_67));
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
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_structure_sharing_6_p_0(
  MR_Word SharingInfo_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * STATE_VARIABLE_ModuleInfo_40,
  MR_Word STATE_VARIABLE_Specs_0_41,
  MR_Word * STATE_VARIABLE_Specs_42)
{
  {
    MR_bool succeeded;
    MR_Word PredNameModesPF_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo_7, (MR_Integer) 0))));
    MR_Word HeadVars_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo_7, (MR_Integer) 1))));
    MR_Word Types_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo_7, (MR_Integer) 2))));
    MR_Word MaybeSharingDomain_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo_7, (MR_Integer) 3))));

    if ((MaybeSharingDomain_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleInfo_40 = STATE_VARIABLE_ModuleInfo_0_39;
      *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_0_41;
    }
    else
    {
      MR_Word SharingDomain_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSharingDomain_14, (MR_Integer) 0))));
      MR_Word SymName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_11, (MR_Integer) 0))));
      MR_Word ModeList_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF_11, (MR_Integer) 1))));
      MR_Word PredOrFunc_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF_11, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word Preds_19;
      MR_Integer Arity_20;
      MR_Word PredIds_21;

      hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_39, &Preds_19);
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ModeList_17, &Arity_20);
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(Preds_19, (MR_Integer) 0, PredOrFunc_18, SymName_16, Arity_20, &PredIds_21);
      if ((PredIds_21 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_ModuleInfo_40 = STATE_VARIABLE_ModuleInfo_0_39;
        *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_0_41;
      }
      else
      {
        MR_Word Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_21, (MR_Integer) 1))));
        MR_Word Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_21, (MR_Integer) 0))));

        if ((Var_105 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word PredTable0_23;
          MR_Word PredInfo0_24;
          MR_Word ProcTable0_25;
          MR_Word ProcList_26;
          MR_Box conv0_PredInfo0_24;
          MR_Integer ProcId_27;

          hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_39, &PredTable0_23);
          mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable0_23, ((MR_Box) (Var_106)), &conv0_PredInfo0_24);
          PredInfo0_24 = ((MR_Word) (conv0_PredInfo0_24));
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_24, &ProcTable0_25);
          mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_25, &ProcList_26);
          succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(ProcList_26, ModeList_17, STATE_VARIABLE_ModuleInfo_0_39, &ProcId_27);
          if (succeeded)
          {
            MR_Word ProcInfo0_28;
            MR_Word ProcInfo_29;
            MR_Word ProcTable_30;
            MR_Word PredInfo_31;
            MR_Word PredTable_32;
            MR_Box conv1_ProcInfo0_28;

            mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_25, ((MR_Box) (ProcId_27)), &conv1_ProcInfo0_28);
            ProcInfo0_28 = ((MR_Word) (conv1_ProcInfo0_28));
            hlds__hlds_pred__proc_info_set_imported_structure_sharing_5_p_0(HeadVars_12, Types_13, SharingDomain_15, ProcInfo0_28, &ProcInfo_29);
            mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_27)), ((MR_Box) (ProcInfo_29)), ProcTable0_25, &ProcTable_30);
            hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_30, PredInfo0_24, &PredInfo_31);
            mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (Var_106)), ((MR_Box) (PredInfo_31)), PredTable0_23, &PredTable_32);
            hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_32, STATE_VARIABLE_ModuleInfo_0_39, STATE_VARIABLE_ModuleInfo_40);
            *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_0_41;
          }
          else
          {
            MR_Word Pieces_33;
            MR_Word Msg_34;
            MR_Word Spec_35;
            MR_Word Var_74;
            MR_Word Var_77;
            MR_Word Var_80;
            MR_Word Var_81;
            MR_Word Var_82;
            MR_Word Var_89;
            MR_Word Var_90;
            MR_Word Var_94;

            {
              Var_82 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_82, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
              MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (SymName_16));
              MR_hl_field(MR_mktag(0), Var_82, 2) = ((MR_Box) (Arity_20));
            }
            {
              Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) ((MR_Unsigned) 15U));
              MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (Var_82));
            }
            {
              Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
              MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[54])));
            }
            {
              Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[176])));
              MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_80));
            }
            {
              Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[179])));
              MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_77));
            }
            {
              Pieces_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[155])));
              MR_hl_field(MR_mktag(1), Pieces_33, 1) = ((MR_Box) (Var_74));
            }
            {
              Var_90 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (Pieces_33));
            }
            {
              Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Var_90));
              MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Msg_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Msg_34, 0) = ((MR_Box) (Context_8));
              MR_hl_field(MR_mktag(0), Msg_34, 1) = ((MR_Box) (Var_89));
            }
            {
              Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Msg_34));
              MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_35, 1) = ((MR_Box) ((MR_Unsigned) 16U));
              MR_hl_field(MR_mktag(0), Spec_35, 2) = ((MR_Box) (Var_94));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_42 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_35));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_41));
            }
            *STATE_VARIABLE_ModuleInfo_40 = STATE_VARIABLE_ModuleInfo_0_39;
          }
        }
        else
        {
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Word Var_67;
          MR_Word Pieces_97;
          MR_Word Msg_98;
          MR_Word Spec_99;

          {
            Var_49 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_49, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
            MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (SymName_16));
            MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) (Arity_20));
          }
          {
            Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 15U));
            MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (Var_49));
          }
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
            MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[139])));
          }
          {
            Pieces_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_97, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[177])));
            MR_hl_field(MR_mktag(1), Pieces_97, 1) = ((MR_Box) (Var_47));
          }
          {
            Var_63 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (Pieces_97));
          }
          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
            MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Msg_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Msg_98, 0) = ((MR_Box) (Context_8));
            MR_hl_field(MR_mktag(0), Msg_98, 1) = ((MR_Box) (Var_62));
          }
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Msg_98));
            MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_99 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_99, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_99, 1) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(0), Spec_99, 2) = ((MR_Box) (Var_67));
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
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_termination2_info_6_p_0(
  MR_Word Term2Info_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * STATE_VARIABLE_ModuleInfo_41,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43)
{
  {
    MR_bool succeeded;
    MR_Word PredModesPF_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info_7, (MR_Integer) 0))));
    MR_Word MaybePragmaSuccessArgSizeInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info_7, (MR_Integer) 1))));
    MR_Word MaybePragmaFailureArgSizeInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info_7, (MR_Integer) 2))));
    MR_Word MaybePragmaTerminationInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info_7, (MR_Integer) 3))));
    MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredModesPF_11, (MR_Integer) 0))));
    MR_Word ModeList_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredModesPF_11, (MR_Integer) 1))));
    MR_Word PredOrFunc_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredModesPF_11, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Preds_18;
    MR_Integer Arity_19;
    MR_Word PredIds_20;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_40, &Preds_18);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ModeList_16, &Arity_19);
    hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(Preds_18, (MR_Integer) 0, PredOrFunc_17, SymName_15, Arity_19, &PredIds_20);
    if ((PredIds_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
      *STATE_VARIABLE_Specs_43 = STATE_VARIABLE_Specs_0_42;
    }
    else
    {
      MR_Word Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_20, (MR_Integer) 1))));
      MR_Word Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_20, (MR_Integer) 0))));

      if ((Var_110 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word PredTable0_22;
        MR_Word PredInfo0_23;
        MR_Word ProcTable0_24;
        MR_Word ProcList_25;
        MR_Box conv0_PredInfo0_23;
        MR_Integer ProcId_26;

        hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_40, &PredTable0_22);
        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable0_22, ((MR_Box) (Var_111)), &conv0_PredInfo0_23);
        PredInfo0_23 = ((MR_Word) (conv0_PredInfo0_23));
        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_23, &ProcTable0_24);
        mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_24, &ProcList_25);
        succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(ProcList_25, ModeList_16, STATE_VARIABLE_ModuleInfo_0_40, &ProcId_26);
        if (succeeded)
        {
          MR_Word ProcInfo0_27;
          MR_Word MaybeTerminationInfo_28;
          MR_Word ProcInfo_30;
          MR_Word ProcTable_31;
          MR_Word PredInfo_32;
          MR_Word PredTable_33;
          MR_Word STATE_VARIABLE_TermInfo_72_72;
          MR_Word STATE_VARIABLE_TermInfo_73_73;
          MR_Word STATE_VARIABLE_TermInfo_74_74;
          MR_Word STATE_VARIABLE_TermInfo_75_75;
          MR_Box conv1_ProcInfo0_27;

          mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_24, ((MR_Box) (ProcId_26)), &conv1_ProcInfo0_27);
          ProcInfo0_27 = ((MR_Word) (conv1_ProcInfo0_27));
          transform_hlds__term_constr_util__add_context_to_constr_termination_info_3_p_0(MaybePragmaTerminationInfo_14, Context_8, &MaybeTerminationInfo_28);
          hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(ProcInfo0_27, &STATE_VARIABLE_TermInfo_72_72);
          transform_hlds__term_constr_main_types__term2_info_set_import_success_3_p_0(MaybePragmaSuccessArgSizeInfo_12, STATE_VARIABLE_TermInfo_72_72, &STATE_VARIABLE_TermInfo_73_73);
          transform_hlds__term_constr_main_types__term2_info_set_import_failure_3_p_0(MaybePragmaFailureArgSizeInfo_13, STATE_VARIABLE_TermInfo_73_73, &STATE_VARIABLE_TermInfo_74_74);
          transform_hlds__term_constr_main_types__term2_info_set_term_status_3_p_0(MaybeTerminationInfo_28, STATE_VARIABLE_TermInfo_74_74, &STATE_VARIABLE_TermInfo_75_75);
          hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(STATE_VARIABLE_TermInfo_75_75, ProcInfo0_27, &ProcInfo_30);
          mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_26)), ((MR_Box) (ProcInfo_30)), ProcTable0_24, &ProcTable_31);
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_31, PredInfo0_23, &PredInfo_32);
          mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (Var_111)), ((MR_Box) (PredInfo_32)), PredTable0_22, &PredTable_33);
          hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_33, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
          *STATE_VARIABLE_Specs_43 = STATE_VARIABLE_Specs_0_42;
        }
        else
        {
          MR_Word Pieces_34;
          MR_Word Msg_35;
          MR_Word Spec_36;
          MR_Word Var_79;
          MR_Word Var_82;
          MR_Word Var_85;
          MR_Word Var_86;
          MR_Word Var_87;
          MR_Word Var_94;
          MR_Word Var_95;
          MR_Word Var_99;

          {
            Var_87 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_87, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
            MR_hl_field(MR_mktag(0), Var_87, 1) = ((MR_Box) (SymName_15));
            MR_hl_field(MR_mktag(0), Var_87, 2) = ((MR_Box) (Arity_19));
          }
          {
            Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_86, 0) = ((MR_Box) ((MR_Unsigned) 15U));
            MR_hl_field(MR_mktag(3), Var_86, 1) = ((MR_Box) (Var_87));
          }
          {
            Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Var_86));
            MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[54])));
          }
          {
            Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[176])));
            MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (Var_85));
          }
          {
            Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[178])));
            MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_82));
          }
          {
            Pieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[155])));
            MR_hl_field(MR_mktag(1), Pieces_34, 1) = ((MR_Box) (Var_79));
          }
          {
            Var_95 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (Pieces_34));
          }
          {
            Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Var_95));
            MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Msg_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Msg_35, 0) = ((MR_Box) (Context_8));
            MR_hl_field(MR_mktag(0), Msg_35, 1) = ((MR_Box) (Var_94));
          }
          {
            Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Msg_35));
            MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_36, 1) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(0), Spec_36, 2) = ((MR_Box) (Var_99));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_43 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_36));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_42));
          }
          *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
        }
      }
      else
      {
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_68;
        MR_Word Pieces_102;
        MR_Word Msg_103;
        MR_Word Spec_104;

        {
          Var_50 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_50, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
          MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (SymName_15));
          MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) (Arity_19));
        }
        {
          Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) ((MR_Unsigned) 15U));
          MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (Var_50));
        }
        {
          Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
          MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[136])));
        }
        {
          Pieces_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_102, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[177])));
          MR_hl_field(MR_mktag(1), Pieces_102, 1) = ((MR_Box) (Var_48));
        }
        {
          Var_64 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (Pieces_102));
        }
        {
          Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
          MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Msg_103 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_103, 0) = ((MR_Box) (Context_8));
          MR_hl_field(MR_mktag(0), Msg_103, 1) = ((MR_Box) (Var_63));
        }
        {
          Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Msg_103));
          MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_104 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_104, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_104, 1) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(0), Spec_104, 2) = ((MR_Box) (Var_68));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_43 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_104));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_42));
        }
        *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
      }
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_termination_info_6_p_0(
  MR_Word TermInfo_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * STATE_VARIABLE_ModuleInfo_41,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43)
{
  {
    MR_bool succeeded;
    MR_Word PredModesPF_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermInfo_7, (MR_Integer) 0))));
    MR_Word MaybePragmaArgSizeInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermInfo_7, (MR_Integer) 1))));
    MR_Word MaybePragmaTerminationInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermInfo_7, (MR_Integer) 2))));
    MR_Word SymName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredModesPF_11, (MR_Integer) 0))));
    MR_Word ModeList_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredModesPF_11, (MR_Integer) 1))));
    MR_Word PredOrFunc_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredModesPF_11, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Preds_17;
    MR_Integer Arity_18;
    MR_Word PredIds_19;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_40, &Preds_17);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ModeList_15, &Arity_18);
    hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(Preds_17, (MR_Integer) 0, PredOrFunc_16, SymName_14, Arity_18, &PredIds_19);
    if ((PredIds_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
      *STATE_VARIABLE_Specs_43 = STATE_VARIABLE_Specs_0_42;
    }
    else
    {
      MR_Word Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_19, (MR_Integer) 1))));
      MR_Word Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_19, (MR_Integer) 0))));

      if ((Var_107 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word PredTable0_21;
        MR_Word PredInfo0_22;
        MR_Word ProcTable0_23;
        MR_Word ProcList_24;
        MR_Box conv0_PredInfo0_22;
        MR_Integer ProcId_25;

        hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_40, &PredTable0_21);
        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable0_21, ((MR_Box) (Var_108)), &conv0_PredInfo0_22);
        PredInfo0_22 = ((MR_Word) (conv0_PredInfo0_22));
        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_22, &ProcTable0_23);
        mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_23, &ProcList_24);
        succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(ProcList_24, ModeList_15, STATE_VARIABLE_ModuleInfo_0_40, &ProcId_25);
        if (succeeded)
        {
          MR_Word MaybeArgSizeInfo_26;
          MR_Word MaybeTerminationInfo_27;
          MR_Word ProcInfo0_28;
          MR_Word ProcInfo1_29;
          MR_Word ProcInfo_30;
          MR_Word ProcTable_31;
          MR_Word PredInfo_32;
          MR_Word PredTable_33;
          MR_Box conv1_ProcInfo0_28;

          transform_hlds__term_util__add_context_to_arg_size_info_3_p_0(MaybePragmaArgSizeInfo_12, Context_8, &MaybeArgSizeInfo_26);
          transform_hlds__term_util__add_context_to_termination_info_3_p_0(MaybePragmaTerminationInfo_13, Context_8, &MaybeTerminationInfo_27);
          mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_23, ((MR_Box) (ProcId_25)), &conv1_ProcInfo0_28);
          ProcInfo0_28 = ((MR_Word) (conv1_ProcInfo0_28));
          hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(MaybeArgSizeInfo_26, ProcInfo0_28, &ProcInfo1_29);
          hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(MaybeTerminationInfo_27, ProcInfo1_29, &ProcInfo_30);
          mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_25)), ((MR_Box) (ProcInfo_30)), ProcTable0_23, &ProcTable_31);
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_31, PredInfo0_22, &PredInfo_32);
          mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (Var_108)), ((MR_Box) (PredInfo_32)), PredTable0_21, &PredTable_33);
          hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_33, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
          *STATE_VARIABLE_Specs_43 = STATE_VARIABLE_Specs_0_42;
        }
        else
        {
          MR_Word Pieces_34;
          MR_Word Msg_35;
          MR_Word Spec_36;
          MR_Word Var_76;
          MR_Word Var_79;
          MR_Word Var_82;
          MR_Word Var_83;
          MR_Word Var_84;
          MR_Word Var_91;
          MR_Word Var_92;
          MR_Word Var_96;

          hlds__hlds_module__module_info_incr_errors_2_p_0(STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
          {
            Var_84 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_84, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_16));
            MR_hl_field(MR_mktag(0), Var_84, 1) = ((MR_Box) (SymName_14));
            MR_hl_field(MR_mktag(0), Var_84, 2) = ((MR_Box) (Arity_18));
          }
          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) ((MR_Unsigned) 15U));
            MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (Var_84));
          }
          {
            Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
            MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[54])));
          }
          {
            Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[176])));
            MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_82));
          }
          {
            Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[175])));
            MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_79));
          }
          {
            Pieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[155])));
            MR_hl_field(MR_mktag(1), Pieces_34, 1) = ((MR_Box) (Var_76));
          }
          {
            Var_92 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_92, 0) = ((MR_Box) (Pieces_34));
          }
          {
            Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Var_92));
            MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Msg_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Msg_35, 0) = ((MR_Box) (Context_8));
            MR_hl_field(MR_mktag(0), Msg_35, 1) = ((MR_Box) (Var_91));
          }
          {
            Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (Msg_35));
            MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_36, 1) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(0), Spec_36, 2) = ((MR_Box) (Var_96));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_43 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_36));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_42));
          }
        }
      }
      else
      {
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_68;
        MR_Word Pieces_99;
        MR_Word Msg_100;
        MR_Word Spec_101;

        {
          Var_50 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_50, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_16));
          MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (SymName_14));
          MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) (Arity_18));
        }
        {
          Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) ((MR_Unsigned) 15U));
          MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (Var_50));
        }
        {
          Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
          MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[133])));
        }
        {
          Pieces_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_99, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[177])));
          MR_hl_field(MR_mktag(1), Pieces_99, 1) = ((MR_Box) (Var_48));
        }
        {
          Var_64 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (Pieces_99));
        }
        {
          Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
          MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Msg_100 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_100, 0) = ((MR_Box) (Context_8));
          MR_hl_field(MR_mktag(0), Msg_100, 1) = ((MR_Box) (Var_63));
        }
        {
          Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Msg_100));
          MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_101 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_101, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_101, 1) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(0), Spec_101, 2) = ((MR_Box) (Var_68));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_43 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_101));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_42));
        }
        *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
      }
    }
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
    MR_Integer conv11_STATE_VARIABLE_SeqNum_42;
    MR_Word conv10_STATE_VARIABLE_Specs_44;

    hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv12_PredId_16, ((MR_Integer) (wrapper_arg_3)), &conv11_STATE_VARIABLE_SeqNum_42, ((MR_Word) (wrapper_arg_5)), &conv10_STATE_VARIABLE_Specs_44);
    *wrapper_arg_2 = ((MR_Box) (conv12_PredId_16));
    *wrapper_arg_4 = ((MR_Box) (conv11_STATE_VARIABLE_SeqNum_42));
    *wrapper_arg_6 = ((MR_Box) (conv10_STATE_VARIABLE_Specs_44));
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
    MR_Integer conv6_STATE_VARIABLE_SeqNum_42;
    MR_Word conv5_STATE_VARIABLE_Specs_44;

    hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv7_PredId_16, ((MR_Integer) (wrapper_arg_3)), &conv6_STATE_VARIABLE_SeqNum_42, ((MR_Word) (wrapper_arg_5)), &conv5_STATE_VARIABLE_Specs_44);
    *wrapper_arg_2 = ((MR_Box) (conv7_PredId_16));
    *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_SeqNum_42));
    *wrapper_arg_6 = ((MR_Box) (conv5_STATE_VARIABLE_Specs_44));
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
    MR_Integer conv1_STATE_VARIABLE_SeqNum_42;
    MR_Word conv0_STATE_VARIABLE_Specs_44;

    hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv2_PredId_16, ((MR_Integer) (wrapper_arg_3)), &conv1_STATE_VARIABLE_SeqNum_42, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Specs_44);
    *wrapper_arg_2 = ((MR_Box) (conv2_PredId_16));
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_SeqNum_42));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_44));
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0(
  MR_Word OISUInfo_8,
  MR_Word ItemMercuryStatus_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_45,
  MR_Word * STATE_VARIABLE_ModuleInfo_46,
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtor_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUInfo_8, (MR_Integer) 0))));
    MR_Word Creators_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUInfo_8, (MR_Integer) 1))));
    MR_Word Mutators_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUInfo_8, (MR_Integer) 2))));
    MR_Word Destructors_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUInfo_8, (MR_Integer) 3))));
    MR_Word CreatorPredIds_29;
    MR_Word MutatorPredIds_31;
    MR_Word DestructorPredIds_33;
    MR_Word STATE_VARIABLE_OISUSpecs_85_85;
    MR_Word Var_86;
    MR_Word STATE_VARIABLE_OISUSpecs_88_88;
    MR_Word Var_90;
    MR_Word STATE_VARIABLE_OISUSpecs_92_92;
    MR_Word Var_94;
    MR_Word STATE_VARIABLE_OISUSpecs_96_96;
    MR_Box conv4_Var_30;
    MR_Box conv3_STATE_VARIABLE_OISUSpecs_88_88;
    MR_Box conv9_Var_32;
    MR_Box conv8_STATE_VARIABLE_OISUSpecs_92_92;
    MR_Box conv14_Var_34;
    MR_Box conv13_STATE_VARIABLE_OISUSpecs_96_96;

    if (((MR_tag((MR_Word) ItemMercuryStatus_9)) == (MR_Integer) 1))
      STATE_VARIABLE_OISUSpecs_85_85 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ItemExport_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemMercuryStatus_9, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word TypeTable_23;
      MR_Word STATE_VARIABLE_OISUSpecs_65_65;
      MR_Word TypeDefn_24;

      switch (ItemExport_19) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          STATE_VARIABLE_OISUSpecs_65_65 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            MR_Word StatusMsg_21;
            MR_Word StatusSpec_22;
            MR_Word Var_63;

            {
              StatusMsg_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), StatusMsg_21, 0) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(0), StatusMsg_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[170])));
            }
            {
              Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (StatusMsg_21));
              MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              StatusSpec_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), StatusSpec_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), StatusSpec_22, 1) = ((MR_Box) ((MR_Unsigned) 16U));
              MR_hl_field(MR_mktag(0), StatusSpec_22, 2) = ((MR_Box) (Var_63));
            }
            {
              STATE_VARIABLE_OISUSpecs_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_OISUSpecs_65_65, 0) = ((MR_Box) (StatusSpec_22));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_OISUSpecs_65_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
      }
      hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_45, &TypeTable_23);
      succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_23, TypeCtor_13, &TypeDefn_24);
      if (succeeded)
      {
        MR_Word TypeStatus_25;
        MR_Word Var_66;

        hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_24, &TypeStatus_25);
        Var_66 = (MR_Word) (TypeStatus_25);
        succeeded = (Var_66 == (MR_Word) ((MR_Unsigned) 20U));
        if (succeeded)
          STATE_VARIABLE_OISUSpecs_85_85 = STATE_VARIABLE_OISUSpecs_65_65;
        else
        {
          MR_Word TypeMsg_27;
          MR_Word TypeSpec_28;
          MR_Word Var_83;

          {
            TypeMsg_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeMsg_27, 0) = ((MR_Box) (Context_10));
            MR_hl_field(MR_mktag(0), TypeMsg_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[171])));
          }
          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (TypeMsg_27));
            MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            TypeSpec_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeSpec_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), TypeSpec_28, 1) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(0), TypeSpec_28, 2) = ((MR_Box) (Var_83));
          }
          {
            STATE_VARIABLE_OISUSpecs_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_OISUSpecs_85_85, 0) = ((MR_Box) (TypeSpec_28));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_OISUSpecs_85_85, 1) = ((MR_Box) (STATE_VARIABLE_OISUSpecs_65_65));
          }
        }
      }
      else
        STATE_VARIABLE_OISUSpecs_85_85 = STATE_VARIABLE_OISUSpecs_65_65;
    }
    {
      Var_86 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_86, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_86, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_45));
      MR_hl_field(MR_mktag(0), Var_86, 4) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(0), Var_86, 5) = ((MR_Box) (TypeCtor_13));
      MR_hl_field(MR_mktag(0), Var_86, 6) = ((MR_Box) ((MR_String) "creator"));
    }
    mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pred_name_arity_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[1]), Var_86, Creators_14, &CreatorPredIds_29, ((MR_Box) ((MR_Integer) 1)), &conv4_Var_30, ((MR_Box) (STATE_VARIABLE_OISUSpecs_85_85)), &conv3_STATE_VARIABLE_OISUSpecs_88_88);
    STATE_VARIABLE_OISUSpecs_88_88 = ((MR_Word) (conv3_STATE_VARIABLE_OISUSpecs_88_88));
    {
      Var_90 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_2));
      MR_hl_field(MR_mktag(0), Var_90, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_90, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_45));
      MR_hl_field(MR_mktag(0), Var_90, 4) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(0), Var_90, 5) = ((MR_Box) (TypeCtor_13));
      MR_hl_field(MR_mktag(0), Var_90, 6) = ((MR_Box) ((MR_String) "mutator"));
    }
    mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pred_name_arity_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[1]), Var_90, Mutators_15, &MutatorPredIds_31, ((MR_Box) ((MR_Integer) 1)), &conv9_Var_32, ((MR_Box) (STATE_VARIABLE_OISUSpecs_88_88)), &conv8_STATE_VARIABLE_OISUSpecs_92_92);
    STATE_VARIABLE_OISUSpecs_92_92 = ((MR_Word) (conv8_STATE_VARIABLE_OISUSpecs_92_92));
    {
      Var_94 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_94, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_3));
      MR_hl_field(MR_mktag(0), Var_94, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_94, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_45));
      MR_hl_field(MR_mktag(0), Var_94, 4) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(0), Var_94, 5) = ((MR_Box) (TypeCtor_13));
      MR_hl_field(MR_mktag(0), Var_94, 6) = ((MR_Box) ((MR_String) "destructor"));
    }
    mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pred_name_arity_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[1]), Var_94, Destructors_16, &DestructorPredIds_33, ((MR_Box) ((MR_Integer) 1)), &conv14_Var_34, ((MR_Box) (STATE_VARIABLE_OISUSpecs_92_92)), &conv13_STATE_VARIABLE_OISUSpecs_96_96);
    STATE_VARIABLE_OISUSpecs_96_96 = ((MR_Word) (conv13_STATE_VARIABLE_OISUSpecs_96_96));
    if ((STATE_VARIABLE_OISUSpecs_96_96 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word OISUPreds_35;
      MR_Word OISUMap0_36;
      MR_Word OISUMap_37;

      {
        OISUPreds_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), OISUPreds_35, 0) = ((MR_Box) (CreatorPredIds_29));
        MR_hl_field(MR_mktag(0), OISUPreds_35, 1) = ((MR_Box) (MutatorPredIds_31));
        MR_hl_field(MR_mktag(0), OISUPreds_35, 2) = ((MR_Box) (DestructorPredIds_33));
      }
      hlds__hlds_module__module_info_get_oisu_map_2_p_0(STATE_VARIABLE_ModuleInfo_0_45, &OISUMap0_36);
      succeeded = mercury__map__insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0), ((MR_Box) (TypeCtor_13)), ((MR_Box) (OISUPreds_35)), OISUMap0_36, &OISUMap_37);
      if (succeeded)
      {
        hlds__hlds_module__module_info_set_oisu_map_3_p_0(OISUMap_37, STATE_VARIABLE_ModuleInfo_0_45, STATE_VARIABLE_ModuleInfo_46);
        *STATE_VARIABLE_Specs_48 = STATE_VARIABLE_Specs_0_47;
      }
      else
      {
        MR_Word TypeName_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_13, (MR_Integer) 0))));
        MR_Integer TypeArity_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_13, (MR_Integer) 1))));
        MR_Word DupPieces_40;
        MR_Word DupMsg_41;
        MR_Word DupSpec_42;
        MR_Word Var_102;
        MR_Word Var_105;
        MR_Word Var_108;
        MR_Word Var_109;
        MR_Word Var_110;
        MR_Word Var_117;
        MR_Word Var_118;
        MR_Word Var_122;

        {
          Var_110 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_110, 0) = ((MR_Box) (TypeName_38));
          MR_hl_field(MR_mktag(0), Var_110, 1) = ((MR_Box) (TypeArity_39));
        }
        {
          Var_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_109, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(MR_mktag(3), Var_109, 1) = ((MR_Box) (Var_110));
        }
        {
          Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (Var_109));
          MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[54])));
        }
        {
          Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[174])));
          MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (Var_108));
        }
        {
          Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[173])));
          MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (Var_105));
        }
        {
          DupPieces_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), DupPieces_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[172])));
          MR_hl_field(MR_mktag(1), DupPieces_40, 1) = ((MR_Box) (Var_102));
        }
        {
          Var_118 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_118, 0) = ((MR_Box) (DupPieces_40));
        }
        {
          Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (Var_118));
          MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          DupMsg_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), DupMsg_41, 0) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(0), DupMsg_41, 1) = ((MR_Box) (Var_117));
        }
        {
          Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (DupMsg_41));
          MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          DupSpec_42 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), DupSpec_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), DupSpec_42, 1) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(0), DupSpec_42, 2) = ((MR_Box) (Var_122));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_48 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DupSpec_42));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_47));
        }
        *STATE_VARIABLE_ModuleInfo_46 = STATE_VARIABLE_ModuleInfo_0_45;
      }
    }
    else
    {
      *STATE_VARIABLE_Specs_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), STATE_VARIABLE_OISUSpecs_96_96, STATE_VARIABLE_Specs_0_47);
      *STATE_VARIABLE_ModuleInfo_46 = STATE_VARIABLE_ModuleInfo_0_45;
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_fact_table_7_p_0(
  MR_Word FTInfo_8,
  MR_Word PredStatus_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_38,
  MR_Word * STATE_VARIABLE_ModuleInfo_39,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41)
{
  {
    MR_Word PredSymNameArity_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FTInfo_8, (MR_Integer) 0))));
    MR_String FileName_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), FTInfo_8, (MR_Integer) 1))));
    MR_Word PredSymName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSymNameArity_13, (MR_Integer) 0))));
    MR_Integer Arity_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredSymNameArity_13, (MR_Integer) 1))));
    MR_Word PredIds_17;
    MR_Word OtherArities_18;

    hlds__make_hlds__add_pragma__get_matching_pred_ids_5_p_0(STATE_VARIABLE_ModuleInfo_0_38, PredSymName_15, Arity_16, &PredIds_17, &OtherArities_18);
    if ((PredIds_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      hlds__make_hlds_error__report_undefined_pred_or_func_error_7_p_0(PredSymName_15, Arity_16, OtherArities_18, Context_10, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[110])), STATE_VARIABLE_Specs_0_40, STATE_VARIABLE_Specs_41);
      *STATE_VARIABLE_ModuleInfo_39 = STATE_VARIABLE_ModuleInfo_0_38;
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
        MR_Word STATE_VARIABLE_ModuleInfo_74_74;
        MR_Word Var_77;
        MR_Word STATE_VARIABLE_ModuleInfo_78_78;
        MR_Word STATE_VARIABLE_ModuleInfo_79_79;

        hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_38, HeadPredId_19, &PredInfo0_22);
        ll_backend__fact_table__fact_table_compile_facts_11_p_0(PredSymName_15, Arity_16, FileName_14, PredInfo0_22, &PredInfo_24, Context_10, STATE_VARIABLE_ModuleInfo_0_38, &C_HeaderCode_25, &PrimaryProcId_26);
        hlds__hlds_module__module_info_set_pred_info_4_p_0(HeadPredId_19, PredInfo_24, STATE_VARIABLE_ModuleInfo_0_38, &STATE_VARIABLE_ModuleInfo_74_74);
        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_24, &ProcTable_27);
        hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_24, &ArgTypes_28);
        ProcIds_29 = hlds__hlds_pred__pred_info_procids_1_f_0(PredInfo_24);
        PredOrFunc_30 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_24);
        parse_tree__prog_util__adjust_func_arity_3_p_0(PredOrFunc_30, Arity_16, &NumArgs_31);
        {
          Var_77 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (C_HeaderCode_25));
        }
        {
          ForeignDeclCode_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ForeignDeclCode_32, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
          MR_hl_field(MR_mktag(0), ForeignDeclCode_32, 1) = ((MR_Box) (Var_77));
          MR_hl_field(MR_mktag(0), ForeignDeclCode_32, 2) = ((MR_Box) (Context_10));
        }
        hlds__hlds_module__module_add_foreign_decl_code_3_p_0(ForeignDeclCode_32, STATE_VARIABLE_ModuleInfo_74_74, &STATE_VARIABLE_ModuleInfo_78_78);
        hlds__hlds_module__module_add_fact_table_file_3_p_0(FileName_14, STATE_VARIABLE_ModuleInfo_78_78, &STATE_VARIABLE_ModuleInfo_79_79);
        hlds__make_hlds__add_pragma__add_fact_table_procedures_13_p_0(ProcIds_29, PrimaryProcId_26, ProcTable_27, PredSymName_15, PredOrFunc_30, NumArgs_31, ArgTypes_28, PredStatus_9, Context_10, STATE_VARIABLE_ModuleInfo_79_79, STATE_VARIABLE_ModuleInfo_39, STATE_VARIABLE_Specs_0_40, STATE_VARIABLE_Specs_41);
      }
      else
      {
        MR_Word Pieces_35;
        MR_Word Msg_36;
        MR_Word Spec_37;
        MR_Word Var_44;
        MR_Word Var_47;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_69;

        {
          Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (PredSymName_15));
          MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (Arity_16));
        }
        {
          Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (Var_52));
        }
        {
          Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
          MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[115])));
        }
        {
          Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[169])));
          MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
        }
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[168])));
          MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
        }
        {
          Pieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[167])));
          MR_hl_field(MR_mktag(1), Pieces_35, 1) = ((MR_Box) (Var_44));
        }
        {
          Var_65 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (Pieces_35));
        }
        {
          Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
          MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Msg_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_36, 0) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(0), Msg_36, 1) = ((MR_Box) (Var_64));
        }
        {
          Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Msg_36));
          MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_37, 1) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(0), Spec_37, 2) = ((MR_Box) (Var_69));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_41 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_37));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_40));
        }
        *STATE_VARIABLE_ModuleInfo_39 = STATE_VARIABLE_ModuleInfo_0_38;
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

void MR_CALL 
hlds__make_hlds__add_pragma__add_pass_2_pragmas_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word SectionItem_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word SectionItems_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ModuleInfo_20_20;
      MR_Word STATE_VARIABLE_Specs_21_21;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      hlds__make_hlds__add_pragma__add_pass_2_pragma_5_p_0(SectionItem_12, STATE_VARIABLE_ModuleInfo_0_2, &STATE_VARIABLE_ModuleInfo_20_20, STATE_VARIABLE_Specs_0_4, &STATE_VARIABLE_Specs_21_21);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = SectionItems_13;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_20_20;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_21_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pass_2_pragma_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_11;

    hlds__make_hlds__add_pragma__mark_pred_as_external_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_11);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_11));
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pass_2_pragma_5_p_0(
  MR_Word SectionItem_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_54,
  MR_Word * STATE_VARIABLE_ModuleInfo_55,
  MR_Word STATE_VARIABLE_Specs_0_56,
  MR_Word * STATE_VARIABLE_Specs_57)
{
  {
    MR_bool succeeded;
    MR_Word ItemMercuryStatus_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionItem_6, (MR_Integer) 0))));
    MR_Word ItemPragmaInfo_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionItem_6, (MR_Integer) 1))));
    MR_Word Pragma_11;
    MR_Word Context_13;
    MR_Word STATE_VARIABLE_Specs_58_58;

    hlds__make_hlds_error__report_if_pragma_is_wrongly_in_interface_4_p_0(ItemMercuryStatus_9, ItemPragmaInfo_10, STATE_VARIABLE_Specs_0_56, &STATE_VARIABLE_Specs_58_58);
    Pragma_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragmaInfo_10, (MR_Integer) 0))));
    Context_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragmaInfo_10, (MR_Integer) 2))));
    switch (MR_tag((MR_Word) Pragma_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word FDInfo_15 = (MR_Word) ((MR_Word) (Pragma_11));
          MR_Word CHeader_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FDInfo_15, (MR_Integer) 1))));
          MR_Word ForeignDeclCode_19;
          MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), FDInfo_15, (MR_Integer) 0)));

          {
            ForeignDeclCode_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ForeignDeclCode_19, 0) = (MR_Box) (packed_word_2);
            MR_hl_field(MR_mktag(0), ForeignDeclCode_19, 1) = ((MR_Box) (CHeader_18));
            MR_hl_field(MR_mktag(0), ForeignDeclCode_19, 2) = ((MR_Box) (Context_13));
          }
          hlds__hlds_module__module_add_foreign_decl_code_3_p_0(ForeignDeclCode_19, STATE_VARIABLE_ModuleInfo_0_54, STATE_VARIABLE_ModuleInfo_55);
          *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_58_58;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word FCInfo_20 = (MR_Word) (MR_body((MR_Word) (Pragma_11), (MR_Integer) 1));
          MR_Word BodyCode_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FCInfo_20, (MR_Integer) 1))));
          MR_Word ForeignBodyCode_22;
          MR_Word Lang_243 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FCInfo_20, (MR_Integer) 0))) & (MR_Integer) 3);

          hlds__make_hlds__make_hlds_warn__warn_suspicious_foreign_code_5_p_0(Lang_243, BodyCode_21, Context_13, STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_57);
          {
            ForeignBodyCode_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ForeignBodyCode_22, 0) = (MR_Box) ((MR_Unsigned) (Lang_243));
            MR_hl_field(MR_mktag(0), ForeignBodyCode_22, 1) = ((MR_Box) (BodyCode_21));
            MR_hl_field(MR_mktag(0), ForeignBodyCode_22, 2) = ((MR_Box) (Context_13));
          }
          hlds__hlds_module__module_add_foreign_body_code_3_p_0(ForeignBodyCode_22, STATE_VARIABLE_ModuleInfo_0_54, STATE_VARIABLE_ModuleInfo_55);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma_11, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word ExternalInfo_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_11, (MR_Integer) 1))));
              MR_Word PredSymName_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExternalInfo_23, (MR_Integer) 0))));
              MR_Integer Arity_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ExternalInfo_23, (MR_Integer) 1))));
              MR_Word PorF_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ExternalInfo_23, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word MaybeBackend_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExternalInfo_23, (MR_Integer) 3))));
              MR_Word Globals_28;
              MR_Word CurrentBackend_29;

              hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_54, &Globals_28);
              CurrentBackend_29 = libs__globals__lookup_current_backend_1_f_0(Globals_28);
              if ((MaybeBackend_27 == (MR_Word) ((MR_Unsigned) 0U)))
                succeeded = MR_TRUE;
              else
              {
                MR_Word Backend_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBackend_27, (MR_Integer) 0))));

                succeeded = (Backend_30 == CurrentBackend_29);
              }
              if (succeeded)
              {
                MR_Word PredicateTable0_31;
                MR_Word PredIds_32;
                MR_Word AllArityPredIds_33;
                MR_Word MissingPieces_34;

                hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_54, &PredicateTable0_31);
                switch (PorF_26) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(PredicateTable0_31, (MR_Integer) 0, PredSymName_24, Arity_25, &PredIds_32);
                      hlds__pred_table__predicate_table_lookup_func_sym_4_p_0(PredicateTable0_31, (MR_Integer) 0, PredSymName_24, &AllArityPredIds_33);
                      MissingPieces_34 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[16]));
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      hlds__pred_table__predicate_table_lookup_pred_sym_arity_5_p_0(PredicateTable0_31, (MR_Integer) 0, PredSymName_24, Arity_25, &PredIds_32);
                      hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0(PredicateTable0_31, (MR_Integer) 0, PredSymName_24, &AllArityPredIds_33);
                      MissingPieces_34 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[18]));
                    }
                    break;
                }
                if ((PredIds_32 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word PredTable0_37;
                  MR_Word OtherArities_38;

                  hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_54, &PredTable0_37);
                  hlds__hlds_error_util__find_pred_arities_other_than_4_p_0(PredTable0_37, AllArityPredIds_33, Arity_25, &OtherArities_38);
                  hlds__make_hlds_error__report_undefined_pred_or_func_error_7_p_0(PredSymName_24, Arity_25, OtherArities_38, Context_13, MissingPieces_34, STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_57);
                  *STATE_VARIABLE_ModuleInfo_55 = STATE_VARIABLE_ModuleInfo_0_54;
                }
                else
                {
                  MR_Box conv1_STATE_VARIABLE_ModuleInfo_55;

                  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_2[2]), PredIds_32, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_54)), &conv1_STATE_VARIABLE_ModuleInfo_55);
                  *STATE_VARIABLE_ModuleInfo_55 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_55));
                  *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_58_58;
                }
              }
              else
              {
                *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_58_58;
                *STATE_VARIABLE_ModuleInfo_55 = STATE_VARIABLE_ModuleInfo_0_54;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word PredSymNameArity_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_11, (MR_Integer) 1))));
              MR_Word PredStatus_40;

              hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_9, &PredStatus_40);
              hlds__make_hlds__add_pragma__add_pred_marker_10_p_0((MR_String) "inline", PredSymNameArity_39, PredStatus_40, Context_13, (MR_Integer) 6, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[20])), STATE_VARIABLE_ModuleInfo_0_54, STATE_VARIABLE_ModuleInfo_55, STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_57);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word PredSymNameArity_244 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_11, (MR_Integer) 1))));
              MR_Word PredStatus_245;

              hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_9, &PredStatus_245);
              hlds__make_hlds__add_pragma__add_pred_marker_10_p_0((MR_String) "no_inline", PredSymNameArity_244, PredStatus_245, Context_13, (MR_Integer) 7, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[164])), STATE_VARIABLE_ModuleInfo_0_54, STATE_VARIABLE_ModuleInfo_55, STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_57);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word PredSymNameArity_246 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_11, (MR_Integer) 1))));
              MR_Word PredStatus_247;

              hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_9, &PredStatus_247);
              hlds__make_hlds__add_pragma__add_pred_marker_10_p_0((MR_String) "consider_used", PredSymNameArity_246, PredStatus_247, Context_13, (MR_Integer) 9, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_54, STATE_VARIABLE_ModuleInfo_55, STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_57);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word UnusedArgsInfo_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_11, (MR_Integer) 1))));
              MR_Word ItemImport_42;

              succeeded = ((MR_tag((MR_Word) ItemMercuryStatus_9)) == (MR_Integer) 1);
              if (succeeded)
              {
                ItemImport_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ItemMercuryStatus_9, (MR_Integer) 0))));
                succeeded = (ItemImport_42 == (MR_Word) ((MR_Unsigned) 4U));
              }
              if (succeeded)
                hlds__make_hlds__add_pragma__add_pragma_unused_args_6_p_0(UnusedArgsInfo_41, Context_13, STATE_VARIABLE_ModuleInfo_0_54, STATE_VARIABLE_ModuleInfo_55, STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_57);
              else
              {
                MR_Word Msg_44;
                MR_Word Spec_45;
                MR_Word Var_197;

                {
                  Msg_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Msg_44, 0) = ((MR_Box) (Context_13));
                  MR_hl_field(MR_mktag(0), Msg_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[166])));
                }
                {
                  Var_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_197, 0) = ((MR_Box) (Msg_44));
                  MR_hl_field(MR_mktag(1), Var_197, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_45 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_45, 1) = ((MR_Box) ((MR_Unsigned) 16U));
                  MR_hl_field(MR_mktag(0), Spec_45, 2) = ((MR_Box) (Var_197));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_57 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_45));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_58_58));
                }
                *STATE_VARIABLE_ModuleInfo_55 = STATE_VARIABLE_ModuleInfo_0_54;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ExceptionsInfo_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_11, (MR_Integer) 1))));
              MR_Word ItemImport_248;

              succeeded = ((MR_tag((MR_Word) ItemMercuryStatus_9)) == (MR_Integer) 1);
              if (succeeded)
              {
                ItemImport_248 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ItemMercuryStatus_9, (MR_Integer) 0))));
                succeeded = (ItemImport_248 == (MR_Word) ((MR_Unsigned) 4U));
              }
              if (succeeded)
                hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_101_120_99_101_112_116_105_111_110_115_95_95_91_50_93_95_48_6_p_0(ExceptionsInfo_46, STATE_VARIABLE_ModuleInfo_0_54, STATE_VARIABLE_ModuleInfo_55, STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_57);
              else
              {
                MR_Word Var_178;
                MR_Word Msg_250;
                MR_Word Spec_251;

                {
                  Msg_250 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Msg_250, 0) = ((MR_Box) (Context_13));
                  MR_hl_field(MR_mktag(0), Msg_250, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[162])));
                }
                {
                  Var_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_178, 0) = ((MR_Box) (Msg_250));
                  MR_hl_field(MR_mktag(1), Var_178, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_251 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_251, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_251, 1) = ((MR_Box) ((MR_Unsigned) 16U));
                  MR_hl_field(MR_mktag(0), Spec_251, 2) = ((MR_Box) (Var_178));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_57 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_251));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_58_58));
                }
                *STATE_VARIABLE_ModuleInfo_55 = STATE_VARIABLE_ModuleInfo_0_54;
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word TrailingInfo_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_11, (MR_Integer) 1))));
              MR_Word ItemImport_260;

              succeeded = ((MR_tag((MR_Word) ItemMercuryStatus_9)) == (MR_Integer) 1);
              if (succeeded)
              {
                ItemImport_260 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ItemMercuryStatus_9, (MR_Integer) 0))));
                succeeded = (ItemImport_260 == (MR_Word) ((MR_Unsigned) 4U));
              }
              if (succeeded)
                hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_116_114_97_105_108_105_110_103_95_105_110_102_111_95_95_91_50_93_95_48_6_p_0(TrailingInfo_47, STATE_VARIABLE_ModuleInfo_0_54, STATE_VARIABLE_ModuleInfo_55, STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_57);
              else
              {
                MR_Word Var_159;
                MR_Word Msg_262;
                MR_Word Spec_263;

                {
                  Msg_262 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Msg_262, 0) = ((MR_Box) (Context_13));
                  MR_hl_field(MR_mktag(0), Msg_262, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[165])));
                }
                {
                  Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_159, 0) = ((MR_Box) (Msg_262));
                  MR_hl_field(MR_mktag(1), Var_159, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_263 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_263, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_263, 1) = ((MR_Box) ((MR_Unsigned) 16U));
                  MR_hl_field(MR_mktag(0), Spec_263, 2) = ((MR_Box) (Var_159));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_57 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_263));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_58_58));
                }
                *STATE_VARIABLE_ModuleInfo_55 = STATE_VARIABLE_ModuleInfo_0_54;
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word MMTablingInfo_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_11, (MR_Integer) 1))));
              MR_Word ItemImport_272;

              succeeded = ((MR_tag((MR_Word) ItemMercuryStatus_9)) == (MR_Integer) 1);
              if (succeeded)
              {
                ItemImport_272 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ItemMercuryStatus_9, (MR_Integer) 0))));
                succeeded = (ItemImport_272 == (MR_Word) ((MR_Unsigned) 4U));
              }
              if (succeeded)
                hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_109_109_95_116_97_98_108_105_110_103_95_105_110_102_111_95_95_91_50_93_95_48_6_p_0(MMTablingInfo_48, STATE_VARIABLE_ModuleInfo_0_54, STATE_VARIABLE_ModuleInfo_55, STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_57);
              else
              {
                MR_Word Var_140;
                MR_Word Msg_274;
                MR_Word Spec_275;

                {
                  Msg_274 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Msg_274, 0) = ((MR_Box) (Context_13));
                  MR_hl_field(MR_mktag(0), Msg_274, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[163])));
                }
                {
                  Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) (Msg_274));
                  MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_275 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_275, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_275, 1) = ((MR_Box) ((MR_Unsigned) 16U));
                  MR_hl_field(MR_mktag(0), Spec_275, 2) = ((MR_Box) (Var_140));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_57 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_275));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_58_58));
                }
                *STATE_VARIABLE_ModuleInfo_55 = STATE_VARIABLE_ModuleInfo_0_54;
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word PredStatus_285;
              MR_Word PredNameArity_286 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_11, (MR_Integer) 1))));

              hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_9, &PredStatus_285);
              hlds__make_hlds__add_pragma__add_pred_marker_10_p_0((MR_String) "no_determinism_warning", PredNameArity_286, PredStatus_285, Context_13, (MR_Integer) 5, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_54, STATE_VARIABLE_ModuleInfo_55, STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_57);
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word TailrecWarningPragma_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_11, (MR_Integer) 1))));

              hlds__make_hlds__add_pragma__add_pragma_require_tail_recursion_6_p_0(TailrecWarningPragma_51, Context_13, STATE_VARIABLE_ModuleInfo_0_54, STATE_VARIABLE_ModuleInfo_55, STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_57);
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word PredStatus_287;
              MR_Word PredNameArity_288 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_11, (MR_Integer) 1))));

              hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_9, &PredStatus_287);
              hlds__make_hlds__add_pragma__add_pred_marker_10_p_0((MR_String) "promise_equivalent_clauses", PredNameArity_288, PredStatus_287, Context_13, (MR_Integer) 17, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_54, STATE_VARIABLE_ModuleInfo_55, STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_57);
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word PredStatus_289;
              MR_Word PredNameArity_290 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_11, (MR_Integer) 1))));

              hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_9, &PredStatus_289);
              hlds__make_hlds__add_pragma__add_pred_marker_10_p_0((MR_String) "promise_pure", PredNameArity_290, PredStatus_289, Context_13, (MR_Integer) 15, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_54, STATE_VARIABLE_ModuleInfo_55, STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_57);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word PredStatus_291;
              MR_Word PredNameArity_292 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_11, (MR_Integer) 1))));

              hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_9, &PredStatus_291);
              hlds__make_hlds__add_pragma__add_pred_marker_10_p_0((MR_String) "promise_semipure", PredNameArity_292, PredStatus_291, Context_13, (MR_Integer) 16, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_54, STATE_VARIABLE_ModuleInfo_55, STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_57);
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word PredStatus_293;
              MR_Word PredNameArity_294 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_11, (MR_Integer) 1))));

              hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_9, &PredStatus_293);
              hlds__make_hlds__add_pragma__add_pred_marker_10_p_0((MR_String) "terminates", PredNameArity_294, PredStatus_293, Context_13, (MR_Integer) 18, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[24])), STATE_VARIABLE_ModuleInfo_0_54, STATE_VARIABLE_ModuleInfo_55, STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_57);
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Word PredStatus_295;
              MR_Word PredNameArity_296 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_11, (MR_Integer) 1))));

              hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_9, &PredStatus_295);
              hlds__make_hlds__add_pragma__add_pred_marker_10_p_0((MR_String) "does_not_terminate", PredNameArity_296, PredStatus_295, Context_13, (MR_Integer) 19, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[6])), STATE_VARIABLE_ModuleInfo_0_54, STATE_VARIABLE_ModuleInfo_55, STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_57);
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Word PredStatus_297;
              MR_Word PredNameArity_298 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_11, (MR_Integer) 1))));

              hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_9, &PredStatus_297);
              hlds__make_hlds__add_pragma__add_pred_marker_10_p_0((MR_String) "check_termination", PredNameArity_298, PredStatus_297, Context_13, (MR_Integer) 20, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[4])), STATE_VARIABLE_ModuleInfo_0_54, STATE_VARIABLE_ModuleInfo_55, STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_57);
            }
            break;
          case (MR_Integer) 23:
            {
              MR_Word STATE_VARIABLE_ModuleInfo_64_64;
              MR_Word STATE_VARIABLE_Specs_65_65;
              MR_Word PredStatus_299;
              MR_Word PredNameArity_300 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_11, (MR_Integer) 1))));

              hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_9, &PredStatus_299);
              hlds__make_hlds__add_pragma__add_pred_marker_10_p_0((MR_String) "mode_check_clauses", PredNameArity_300, PredStatus_299, Context_13, (MR_Integer) 22, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_54, &STATE_VARIABLE_ModuleInfo_64_64, STATE_VARIABLE_Specs_58_58, &STATE_VARIABLE_Specs_65_65);
              hlds__make_hlds__add_pragma__add_pred_marker_10_p_0((MR_String) "mode_check_clauses", PredNameArity_300, PredStatus_299, Context_13, (MR_Integer) 7, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[164])), STATE_VARIABLE_ModuleInfo_64_64, STATE_VARIABLE_ModuleInfo_55, STATE_VARIABLE_Specs_65_65, STATE_VARIABLE_Specs_57);
            }
            break;
          case (MR_Integer) 26:
            {
              MR_Word PredNameArity_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_11, (MR_Integer) 1))));
              MR_Word ObsoleteInFavourOf_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_11, (MR_Integer) 2))));
              MR_Word PredStatus_284;

              hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_9, &PredStatus_284);
              hlds__make_hlds__add_pragma__mark_pred_as_obsolete_8_p_0(PredNameArity_49, ObsoleteInFavourOf_50, PredStatus_284, Context_13, STATE_VARIABLE_ModuleInfo_0_54, STATE_VARIABLE_ModuleInfo_55, STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_57);
            }
            break;
          case (MR_Integer) 27:
            {
              MR_Word RFSInfo_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_11, (MR_Integer) 1))));
              MR_Word FeatureSet_53 = (MR_Word) (RFSInfo_52);

              hlds__make_hlds__add_pragma__check_required_feature_set_7_p_0(FeatureSet_53, ItemMercuryStatus_9, Context_13, STATE_VARIABLE_ModuleInfo_0_54, STATE_VARIABLE_ModuleInfo_55, STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_57);
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_109_109_95_116_97_98_108_105_110_103_95_105_110_102_111_95_95_91_50_93_95_48_6_p_0(
  MR_Word MMTablingInfo_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * STATE_VARIABLE_ModuleInfo_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31)
{
  {
    MR_Word PredNameArityPFMn_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MMTablingInfo_7, (MR_Integer) 0))));
    MR_Word TablingStatus_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), MMTablingInfo_7, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 0))));
    MR_Integer Arity_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 1))));
    MR_Word PredOrFunc_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Integer ModeNum_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 3))));
    MR_Word PredTable_17;
    MR_Word PredIds_18;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_28, &PredTable_17);
    hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable_17, (MR_Integer) 0, PredOrFunc_15, SymName_13, Arity_14, &PredIds_18);
    if ((PredIds_18 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ModuleInfo_29 = STATE_VARIABLE_ModuleInfo_0_28;
    else
    {
      MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_18, (MR_Integer) 1))));
      MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_18, (MR_Integer) 0))));

      if ((Var_38 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Integer ProcId_20;
        MR_Word PredInfo0_21;
        MR_Word ProcInfo0_22;
        MR_Word ProcMMTablingInfo_23;
        MR_Word ProcInfo_24;
        MR_Word Var_36;

        hlds__hlds_pred__proc_id_to_int_2_p_1(&ProcId_20, ModeNum_16);
        hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_28, Var_39, ProcId_20, &PredInfo0_21, &ProcInfo0_22);
        {
          ProcMMTablingInfo_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ProcMMTablingInfo_23, 0) = (MR_Box) ((MR_Unsigned) (TablingStatus_12));
          MR_hl_field(MR_mktag(0), ProcMMTablingInfo_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (ProcMMTablingInfo_23));
        }
        hlds__hlds_pred__proc_info_set_mm_tabling_info_3_p_0(Var_36, ProcInfo0_22, &ProcInfo_24);
        hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(Var_39, ProcId_20, PredInfo0_21, ProcInfo_24, STATE_VARIABLE_ModuleInfo_0_28, STATE_VARIABLE_ModuleInfo_29);
      }
      else
        *STATE_VARIABLE_ModuleInfo_29 = STATE_VARIABLE_ModuleInfo_0_28;
    }
    *STATE_VARIABLE_Specs_31 = STATE_VARIABLE_Specs_0_30;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_116_114_97_105_108_105_110_103_95_105_110_102_111_95_95_91_50_93_95_48_6_p_0(
  MR_Word TrailingInfo_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * STATE_VARIABLE_ModuleInfo_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31)
{
  {
    MR_Word PredNameArityPFMn_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TrailingInfo_7, (MR_Integer) 0))));
    MR_Word TrailingStatus_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TrailingInfo_7, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 0))));
    MR_Integer Arity_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 1))));
    MR_Word PredOrFunc_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Integer ModeNum_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 3))));
    MR_Word PredTable_17;
    MR_Word PredIds_18;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_28, &PredTable_17);
    hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable_17, (MR_Integer) 0, PredOrFunc_15, SymName_13, Arity_14, &PredIds_18);
    if ((PredIds_18 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ModuleInfo_29 = STATE_VARIABLE_ModuleInfo_0_28;
    else
    {
      MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_18, (MR_Integer) 1))));
      MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_18, (MR_Integer) 0))));

      if ((Var_38 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Integer ProcId_20;
        MR_Word PredInfo0_21;
        MR_Word ProcInfo0_22;
        MR_Word ProcTrailingInfo_23;
        MR_Word ProcInfo_24;
        MR_Word Var_36;

        hlds__hlds_pred__proc_id_to_int_2_p_1(&ProcId_20, ModeNum_16);
        hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_28, Var_39, ProcId_20, &PredInfo0_21, &ProcInfo0_22);
        {
          ProcTrailingInfo_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ProcTrailingInfo_23, 0) = (MR_Box) ((MR_Unsigned) (TrailingStatus_12));
          MR_hl_field(MR_mktag(0), ProcTrailingInfo_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (ProcTrailingInfo_23));
        }
        hlds__hlds_pred__proc_info_set_trailing_info_3_p_0(Var_36, ProcInfo0_22, &ProcInfo_24);
        hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(Var_39, ProcId_20, PredInfo0_21, ProcInfo_24, STATE_VARIABLE_ModuleInfo_0_28, STATE_VARIABLE_ModuleInfo_29);
      }
      else
        *STATE_VARIABLE_ModuleInfo_29 = STATE_VARIABLE_ModuleInfo_0_28;
    }
    *STATE_VARIABLE_Specs_31 = STATE_VARIABLE_Specs_0_30;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_101_120_99_101_112_116_105_111_110_115_95_95_91_50_93_95_48_6_p_0(
  MR_Word ExceptionsInfo_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * STATE_VARIABLE_ModuleInfo_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31)
{
  {
    MR_Word PredNameArityPFMn_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExceptionsInfo_7, (MR_Integer) 0))));
    MR_Word ThrowStatus_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExceptionsInfo_7, (MR_Integer) 1))));
    MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 0))));
    MR_Integer Arity_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 1))));
    MR_Word PredOrFunc_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Integer ModeNum_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 3))));
    MR_Word PredTable_17;
    MR_Word PredIds_18;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_28, &PredTable_17);
    hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable_17, (MR_Integer) 0, PredOrFunc_15, SymName_13, Arity_14, &PredIds_18);
    if ((PredIds_18 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ModuleInfo_29 = STATE_VARIABLE_ModuleInfo_0_28;
    else
    {
      MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_18, (MR_Integer) 1))));
      MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_18, (MR_Integer) 0))));

      if ((Var_38 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Integer ProcId_20;
        MR_Word PredInfo0_21;
        MR_Word ProcInfo0_22;
        MR_Word ProcExceptionInfo_23;
        MR_Word ProcInfo_24;
        MR_Word Var_36;

        hlds__hlds_pred__proc_id_to_int_2_p_1(&ProcId_20, ModeNum_16);
        hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_28, Var_39, ProcId_20, &PredInfo0_21, &ProcInfo0_22);
        {
          ProcExceptionInfo_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ProcExceptionInfo_23, 0) = ((MR_Box) (ThrowStatus_12));
          MR_hl_field(MR_mktag(0), ProcExceptionInfo_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (ProcExceptionInfo_23));
        }
        hlds__hlds_pred__proc_info_set_exception_info_3_p_0(Var_36, ProcInfo0_22, &ProcInfo_24);
        hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(Var_39, ProcId_20, PredInfo0_21, ProcInfo_24, STATE_VARIABLE_ModuleInfo_0_28, STATE_VARIABLE_ModuleInfo_29);
      }
      else
        *STATE_VARIABLE_ModuleInfo_29 = STATE_VARIABLE_ModuleInfo_0_28;
    }
    *STATE_VARIABLE_Specs_31 = STATE_VARIABLE_Specs_0_30;
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
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_pragma.check_required_feature_set\'/7", (MR_String) "imported require_feature_set pragma");
        return;
      }
    }
    else
    {
      MR_Word Globals_15;
      MR_Word Var_20;
      MR_Box conv1_STATE_VARIABLE_Specs_19;

      hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_16, &Globals_15);
      {
        Var_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_8[0]));
        MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__check_required_feature_set_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (Globals_15));
        MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (Context_10));
      }
      mercury__set__fold_4_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_required_feature_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[1]), Var_20, FeatureSet_8, ((MR_Box) (STATE_VARIABLE_Specs_0_18)), &conv1_STATE_VARIABLE_Specs_19);
      *STATE_VARIABLE_Specs_19 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_19));
    }
    *STATE_VARIABLE_ModuleInfo_17 = STATE_VARIABLE_ModuleInfo_0_16;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__mark_pred_as_obsolete_8_p_0(
  MR_Word PredNameArity_9,
  MR_Word ObsoleteInFavourOf_10,
  MR_Word PragmaStatus_11,
  MR_Word Context_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * STATE_VARIABLE_ModuleInfo_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  {
    MR_Word PredSymName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArity_9, (MR_Integer) 0))));
    MR_Integer Arity_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArity_9, (MR_Integer) 1))));
    MR_Word PredIds_17;
    MR_Word OtherArities_18;

    hlds__make_hlds__add_pragma__get_matching_pred_ids_5_p_0(STATE_VARIABLE_ModuleInfo_0_27, PredSymName_15, Arity_16, &PredIds_17, &OtherArities_18);
    if ((PredIds_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      hlds__make_hlds_error__report_undefined_pred_or_func_error_7_p_0(PredSymName_15, Arity_16, OtherArities_18, Context_12, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[58])), STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
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
      hlds__make_hlds__add_pragma__mark_pred_ids_as_obsolete_7_p_0(ObsoleteInFavourOf_10, PragmaStatus_11, PredIds_17, (MR_Integer) 0, &WrongStatus_23, Preds0_22, &Preds_24);
      switch (WrongStatus_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
          break;
        case (MR_Integer) 1:
          {
            MR_Word PredSymName_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArity_9, (MR_Integer) 0))));
            MR_Integer Arity_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArity_9, (MR_Integer) 1))));
            MR_Word Pieces_50;
            MR_Word Msg_51;
            MR_Word Spec_52;
            MR_Word Var_55;
            MR_Word Var_57;
            MR_Word Var_60;
            MR_Word Var_61;
            MR_Word Var_62;
            MR_Word Var_69;
            MR_Word Var_70;
            MR_Word Var_74;

            {
              Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (PredSymName_48));
              MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (Arity_49));
            }
            {
              Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (Var_62));
            }
            {
              Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
              MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[53])));
            }
            {
              Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[160])));
              MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_60));
            }
            {
              Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[161])));
              MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_57));
            }
            {
              Pieces_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[155])));
              MR_hl_field(MR_mktag(1), Pieces_50, 1) = ((MR_Box) (Var_55));
            }
            {
              Var_70 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (Pieces_50));
            }
            {
              Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
              MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Msg_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Msg_51, 0) = ((MR_Box) (Context_12));
              MR_hl_field(MR_mktag(0), Msg_51, 1) = ((MR_Box) (Var_69));
            }
            {
              Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Msg_51));
              MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_52 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_52, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_52, 1) = ((MR_Box) ((MR_Unsigned) 16U));
              MR_hl_field(MR_mktag(0), Spec_52, 2) = ((MR_Box) (Var_74));
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

        Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), ObsoleteInFavourOf0_25, ObsoleteInFavourOf_1);
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
    hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_55_93_95_48_11_p_0(Marker_15, PragmaName_11, PredSymNameArity_12, Status_13, MustBeExported_19, Context_14, STATE_VARIABLE_ModuleInfo_0_29, STATE_VARIABLE_ModuleInfo_30, &PredIds_20, STATE_VARIABLE_Specs_0_31, &STATE_VARIABLE_Specs_35_35);
    hlds__hlds_module__module_info_get_preds_2_p_0(*STATE_VARIABLE_ModuleInfo_30, &PredTable_21);
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_7[0]));
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
      {
        mercury__list__delete_all_3_p_1((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0), ConflictingPredMarkers0_25, ((MR_Box) ((MR_Integer) 7)), &ConflictingPredMarkers_28);
      }
      else
        ConflictingPredMarkers_28 = ConflictingPredMarkers0_25;
      hlds__make_hlds__add_pragma__pragma_conflict_error_6_p_0(PredSymNameArity_12, Context_14, PragmaName_11, ConflictingPredMarkers_28, STATE_VARIABLE_Specs_35_35, STATE_VARIABLE_Specs_32);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_55_93_95_48_11_p_0(
  MR_Word Var_44,
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
        MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 17U));
        MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (PragmaName_12));
      }
      {
        DescPieces_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), DescPieces_31, 0) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(1), DescPieces_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[159])));
      }
      hlds__make_hlds_error__report_undefined_pred_or_func_error_7_p_0(PredSymName_21, Arity_22, OtherArities_23, Context_16, DescPieces_31, STATE_VARIABLE_Specs_0_34, STATE_VARIABLE_Specs_35);
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
      hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_p_0(Var_44, *PredIds_19, Status_14, MustBeExported_15, Preds0_27, &Preds_28, &WrongStatus_29);
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
            MR_Word Msg_54;
            MR_Word Spec_55;
            MR_Word Var_58;
            MR_Word Var_59;
            MR_Word Var_60;
            MR_Word Var_63;
            MR_Word Var_64;
            MR_Word Var_65;
            MR_Word Var_72;
            MR_Word Var_73;
            MR_Word Var_77;

            {
              Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 17U));
              MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (PragmaName_12));
            }
            {
              Var_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (PredSymName_51));
              MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (Arity_52));
            }
            {
              Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_64, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(MR_mktag(3), Var_64, 1) = ((MR_Box) (Var_65));
            }
            {
              Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
              MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[53])));
            }
            {
              Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[160])));
              MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_63));
            }
            {
              Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
              MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_60));
            }
            {
              Pieces_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[155])));
              MR_hl_field(MR_mktag(1), Pieces_53, 1) = ((MR_Box) (Var_58));
            }
            {
              Var_73 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (Pieces_53));
            }
            {
              Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
              MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Msg_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Msg_54, 0) = ((MR_Box) (Context_16));
              MR_hl_field(MR_mktag(0), Msg_54, 1) = ((MR_Box) (Var_72));
            }
            {
              Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Msg_54));
              MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_55 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_55, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_55, 1) = ((MR_Box) ((MR_Unsigned) 16U));
              MR_hl_field(MR_mktag(0), Spec_55, 2) = ((MR_Box) (Var_77));
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
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_p_0(
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
      hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_p_0(Var_32, PredIds_15, Status_3, MustBeExported_4, STATE_VARIABLE_PredTable_28_28, STATE_VARIABLE_PredTable_6, &WrongStatus1_24);
      mercury__bool__or_3_p_0(WrongStatus0_23, WrongStatus1_24, HeadVar__7_7);
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
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  {
    MR_Word PredSymName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredSymNameArity_7, (MR_Integer) 0))));
    MR_Integer Arity_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredSymNameArity_7, (MR_Integer) 1))));
    MR_Word ConflictNames_14;
    MR_Word Pieces_15;
    MR_Word Msg_16;
    MR_Word Spec_17;
    MR_Word Var_21;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_String Var_34;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_51;
    MR_Box conv1_Var_34;

    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_2[1]), ConflictMarkers_10, &ConflictNames_14);
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (PragmaName_9));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[157])));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[155])));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    Var_31 = parse_tree__error_util__list_to_pieces_1_f_0(ConflictNames_14);
    conv1_Var_34 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ConflictNames_14, ((MR_Box) ((MR_String) "pragma for")), ((MR_Box) ((MR_String) "pragmas for")));
    Var_34 = ((MR_String) (conv1_Var_34));
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (PredSymName_12));
      MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (Arity_13));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 10U));
      MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[54])));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_37));
    }
    Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_31, Var_32);
    Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_21, Var_30);
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (Pieces_15));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_16, 0) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(0), Msg_16, 1) = ((MR_Box) (Var_46));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Msg_16));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_17, 2) = ((MR_Box) (Var_51));
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

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_require_tail_recursion_6_p_0_1(
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

    hlds__make_hlds__add_pragma__add_pragma_require_tail_recursion_proc_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_PredInfo_26, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_28);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_PredInfo_26));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_28));
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_require_tail_recursion_6_p_0(
  MR_Word Pragma_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_32,
  MR_Word * STATE_VARIABLE_ModuleInfo_33,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35)
{
  {
    MR_bool succeeded;
    MR_Word PredSymName_11;
    MR_Integer Arity_12;
    MR_Word MaybeMode_14;
    MR_Word PredIds_15;
    MR_Word OtherArities_16;
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Pragma_7, (MR_Integer) 0))));

    PredSymName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 0))));
    Arity_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 1))));
    MaybeMode_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 3))));
    hlds__make_hlds__add_pragma__get_matching_pred_ids_5_p_0(STATE_VARIABLE_ModuleInfo_0_32, PredSymName_11, Arity_12, &PredIds_15, &OtherArities_16);
    if ((PredIds_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      hlds__make_hlds_error__report_undefined_pred_or_func_error_7_p_0(PredSymName_11, Arity_12, OtherArities_16, Context_8, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[44])), STATE_VARIABLE_Specs_0_34, STATE_VARIABLE_Specs_35);
      *STATE_VARIABLE_ModuleInfo_33 = STATE_VARIABLE_ModuleInfo_0_32;
    }
    else
    {
      MR_Word Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_15, (MR_Integer) 1))));
      MR_Word Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_15, (MR_Integer) 0))));

      if ((Var_117 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word PredSymNameArity_19;
        MR_Word PredInfo0_20;
        MR_Word Procs0_21;
        MR_Word Procs_22;
        MR_Word PredInfo_26;

        {
          PredSymNameArity_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PredSymNameArity_19, 0) = ((MR_Box) (PredSymName_11));
          MR_hl_field(MR_mktag(0), PredSymNameArity_19, 1) = ((MR_Box) (Arity_12));
        }
        hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_32, Var_118, &PredInfo0_20);
        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_20, &Procs0_21);
        mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs0_21, &Procs_22);
        if ((MaybeMode_14 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_58;
          MR_Word Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Pragma_7, (MR_Integer) 1))));
          MR_Box conv3_PredInfo_26;
          MR_Box conv2_STATE_VARIABLE_Specs_35;

          {
            Var_58 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_require_tail_recursion_6_p_0_1));
            MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (Var_60));
            MR_hl_field(MR_mktag(0), Var_58, 4) = ((MR_Box) (Context_8));
            MR_hl_field(MR_mktag(0), Var_58, 5) = ((MR_Box) (PredSymNameArity_19));
          }
          mercury__list__foldl2_6_p_0((MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_2[0]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[1]), Var_58, Procs_22, ((MR_Box) (PredInfo0_20)), &conv3_PredInfo_26, ((MR_Box) (STATE_VARIABLE_Specs_0_34)), &conv2_STATE_VARIABLE_Specs_35);
          PredInfo_26 = ((MR_Word) (conv3_PredInfo_26));
          *STATE_VARIABLE_Specs_35 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_35));
        }
        else
        {
          MR_Word Mode_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMode_14, (MR_Integer) 0))));
          MR_Integer ProcId_24;

          succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(Procs_22, Mode_23, STATE_VARIABLE_ModuleInfo_0_32, &ProcId_24);
          if (succeeded)
          {
            MR_Word Proc_25;
            MR_Word Var_61;
            MR_Word Var_62;
            MR_Box conv4_Proc_25;

            mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs0_21, ((MR_Box) (ProcId_24)), &conv4_Proc_25);
            Proc_25 = ((MR_Word) (conv4_Proc_25));
            Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Pragma_7, (MR_Integer) 1))));
            {
              Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (ProcId_24));
              MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (Proc_25));
            }
            hlds__make_hlds__add_pragma__add_pragma_require_tail_recursion_proc_8_p_0(Var_61, Context_8, PredSymNameArity_19, Var_62, PredInfo0_20, &PredInfo_26, STATE_VARIABLE_Specs_0_34, STATE_VARIABLE_Specs_35);
          }
          else
          {
            MR_Word Msg_27;
            MR_Word Spec_28;
            MR_Word Var_66;
            MR_Word Var_67;
            MR_Word Var_80;
            MR_Word Var_81;
            MR_Word Var_85;
            MR_Word Pieces_96;

            {
              Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (PredSymNameArity_19));
            }
            {
              Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
              MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[49])));
            }
            {
              Pieces_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_96, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[153])));
              MR_hl_field(MR_mktag(1), Pieces_96, 1) = ((MR_Box) (Var_66));
            }
            {
              Var_81 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (Pieces_96));
            }
            {
              Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
              MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Msg_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Msg_27, 0) = ((MR_Box) (Context_8));
              MR_hl_field(MR_mktag(0), Msg_27, 1) = ((MR_Box) (Var_80));
            }
            {
              Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Msg_27));
              MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 16U));
              MR_hl_field(MR_mktag(0), Spec_28, 2) = ((MR_Box) (Var_85));
            }
            PredInfo_26 = PredInfo0_20;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_35 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_28));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_34));
            }
          }
        }
        hlds__hlds_module__module_info_set_pred_info_4_p_0(Var_118, PredInfo_26, STATE_VARIABLE_ModuleInfo_0_32, STATE_VARIABLE_ModuleInfo_33);
      }
      else
      {
        MR_Word Var_54;
        MR_Word Msg_102;
        MR_Word Spec_103;

        {
          Msg_102 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_102, 0) = ((MR_Box) (Context_8));
          MR_hl_field(MR_mktag(0), Msg_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[154])));
        }
        {
          Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Msg_102));
          MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_103 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_103, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_103, 1) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(0), Spec_103, 2) = ((MR_Box) (Var_54));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_35 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_103));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_34));
        }
        *STATE_VARIABLE_ModuleInfo_33 = STATE_VARIABLE_ModuleInfo_0_32;
      }
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
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_pragma.get_matching_pred_ids\'/5", (MR_String) "unqualified name");
        return;
      }
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_require_tail_recursion_proc_8_p_0(
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
      MR_Word Parts1_18;
      MR_Word ContextOrig_20;
      MR_Word Spec_23;
      MR_Word Var_32;
      MR_Word Var_35;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_54;
      MR_Word Var_55;

      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (SymNameAndArity_11));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[149])));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[147])));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[146])));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
      }
      {
        Parts1_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Parts1_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[145])));
        MR_hl_field(MR_mktag(1), Parts1_18, 1) = ((MR_Box) (Var_32));
      }
      if (((MR_tag((MR_Word) RequireTailrecOrig_17)) == (MR_Integer) 1))
        ContextOrig_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RequireTailrecOrig_17, (MR_Integer) 1))));
      else
        ContextOrig_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RequireTailrecOrig_17, (MR_Integer) 0))));
      {
        Var_52 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (Parts1_18));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (Var_51));
      }
      {
        Var_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (ContextOrig_20));
        MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[152])));
      }
      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
        MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_54));
      }
      {
        Spec_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), Spec_23, 2) = ((MR_Box) (Var_49));
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
hlds__make_hlds__add_pragma__add_pragma_unused_args_6_p_0(
  MR_Word UnusedArgsInfo_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  {
    MR_Word PredNameArityPFMn_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnusedArgsInfo_7, (MR_Integer) 0))));
    MR_Word UnusedArgs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnusedArgsInfo_7, (MR_Integer) 1))));
    MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 0))));
    MR_Integer Arity_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 1))));
    MR_Word PredOrFunc_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Integer ModeNum_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredNameArityPFMn_11, (MR_Integer) 3))));
    MR_Word PredTable_17;
    MR_Word PredIds_18;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_29, &PredTable_17);
    hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable_17, (MR_Integer) 0, PredOrFunc_15, SymName_13, Arity_14, &PredIds_18);
    if ((PredIds_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Msg_20;
      MR_Word Spec_21;
      MR_Word Var_79;

      {
        Msg_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_20, 0) = ((MR_Box) (Context_8));
        MR_hl_field(MR_mktag(0), Msg_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[143])));
      }
      {
        Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Msg_20));
        MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), Spec_21, 2) = ((MR_Box) (Var_79));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_32 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_21));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_31));
      }
      *STATE_VARIABLE_ModuleInfo_30 = STATE_VARIABLE_ModuleInfo_0_29;
    }
    else
    {
      MR_Word Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_18, (MR_Integer) 1))));
      MR_Word Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_18, (MR_Integer) 0))));

      if ((Var_87 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word UnusedArgInfo0_23;
        MR_Integer ProcId_24;
        MR_Word UnusedArgInfo_25;
        MR_Word Var_58;

        hlds__hlds_module__module_info_get_unused_arg_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_29, &UnusedArgInfo0_23);
        hlds__hlds_pred__proc_id_to_int_2_p_1(&ProcId_24, ModeNum_16);
        {
          Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (Var_88));
          MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (ProcId_24));
        }
        mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__make_hlds__add_pragma_scalar_common_1[0]), ((MR_Box) (Var_58)), ((MR_Box) (UnusedArgs_12)), UnusedArgInfo0_23, &UnusedArgInfo_25);
        hlds__hlds_module__module_info_set_unused_arg_info_3_p_0(UnusedArgInfo_25, STATE_VARIABLE_ModuleInfo_0_29, STATE_VARIABLE_ModuleInfo_30);
        *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
      }
      else
      {
        MR_Word Var_54;
        MR_Word Msg_83;
        MR_Word Spec_84;

        {
          Msg_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_83, 0) = ((MR_Box) (Context_8));
          MR_hl_field(MR_mktag(0), Msg_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[144])));
        }
        {
          Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Msg_83));
          MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_84 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_84, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_84, 1) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(0), Spec_84, 2) = ((MR_Box) (Var_54));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_32 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_84));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_31));
        }
        *STATE_VARIABLE_ModuleInfo_30 = STATE_VARIABLE_ModuleInfo_0_29;
      }
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

void mercury__hlds__make_hlds__add_pragma__init(void)
{
}

void mercury__hlds__make_hlds__add_pragma__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__type_ctor_info_add_marker_pred_info_0);
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
