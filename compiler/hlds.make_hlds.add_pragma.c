/*
** Automatically generated from `add_pragma.m'
** by the Mercury compiler,
** version rotd-2017-07-31
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


/* :- module hlds.make_hlds.add_pragma. */
/* :- implementation. */

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
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.make_tags.mih"
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
#include "ll_backend.fact_table.mih"
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
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_foreign_proc.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.make_hlds_error.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "hlds.make_hlds.add_pragma.add_foreign_enum.mih"
#include "hlds.make_hlds.add_pragma.add_pragma_tabling.mih"
#include "hlds.make_hlds.add_pragma.add_pragma_type_spec.mih"



struct hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0_s {
  MR_Word hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__ConflictList_3;
  MR_bool hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__succeeded;
  MR_Word hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__Markers_13;
  jmp_buf hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__commit_0;
  MR_Word hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__Marker_15;
  MR_Box hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__conv1_Marker_15;
};


static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_VA_TypeInfo_Struct2 hlds__make_hlds__add_pragma____vti_pred_2hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0;

static void MR_CALL 
hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_3(
  MR_Box hlds__make_hlds__add_pragma__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_2,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_3,
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_4,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_5,
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_6);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_2(
  MR_Box hlds__make_hlds__add_pragma__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_2,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_3,
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_4,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_5,
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_6);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_2,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_3,
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_4,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_5,
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_6);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pass_2_pragma_5_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_2,
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__add_pragma__check_required_feature_set_7_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_2,
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_p_0(
  MR_Word hlds__make_hlds__add_pragma__Var_43,
  MR_String hlds__make_hlds__add_pragma__PragmaName_13,
  MR_Word hlds__make_hlds__add_pragma__Name_14,
  MR_Integer hlds__make_hlds__add_pragma__Arity_15,
  MR_Word hlds__make_hlds__add_pragma__Status_16,
  MR_Word hlds__make_hlds__add_pragma__MustBeExported_17,
  MR_Word hlds__make_hlds__add_pragma__Context_18,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_32,
  MR_Word * hlds__make_hlds__add_pragma__PredIds_21,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_33,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_34);

static void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_p_0(
  MR_Word hlds__make_hlds__add_pragma__Var_32,
  MR_Word hlds__make_hlds__add_pragma__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_pragma__Status_3,
  MR_Word hlds__make_hlds__add_pragma__MustBeExported_4,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_0_5,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_6,
  MR_Word * hlds__make_hlds__add_pragma__HeadVar__7_7);

static void MR_CALL 
hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_1(
  void * hlds__make_hlds__add_pragma__env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_3(
  void * hlds__make_hlds__add_pragma__env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_2(
  void * hlds__make_hlds__add_pragma__env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_4(
  void * hlds__make_hlds__add_pragma__env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_require_tail_recursion_6_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_2,
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_3,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_4,
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_5);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma____Unify____add_marker_pred_info_0_0_10001(
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma____Compare____add_marker_pred_info_0_0_10001(
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_2,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_1[222][2];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_2[2][3];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_3[1][4];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_4[20][1];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_5[1][11];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_6[1][8];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_7[2][6];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_8[1][13];




static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_1[222][2] = {
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
    ((MR_Box) ((MR_Integer) 20)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 19)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[2])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 19)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 21)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "exceptions"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: illegal use of pragma"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "pragma"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) ((MR_String) "external_func"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) ((MR_String) "external_pred"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[13])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "mm_tabling_info"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[7])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[19])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_Integer) 21)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[2])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "trailing_info"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[7])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "unused_args"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[7])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
    ((MR_Box) ((MR_String) "unused_args"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[30])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "unknown predicate in"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Internal compiler error:"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[34])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "ambiguous predicate in"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[32])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[38])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
    ((MR_Box) ((MR_String) "require_tail_recursion"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[13])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "pragma."))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[28])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[43])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[44])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: ambiguous predicate or function in"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[44])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must also be exported."))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[28])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[28])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "that supports concurrent execution."))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[28])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: this module must be compiled in a grade"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[53])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "that uses conservative garbage collection."))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[28])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[57])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "that uses double precision floats."))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[28])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[60])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "spf"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[51])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "do not contain the grade modifier"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[63])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Grades that use double precision floats"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[65])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "that supports memoisation."))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[28])))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[69])))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "that supports executing conjuntions in parallel."))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[28])))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[72])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "that uses single precision floats."))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[28])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[75])))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "contain the grade modifier"))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[63])))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Grades that use single precision floats"))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[78])))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the strict sequential semantics."))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[28])))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: this module must be compiled using"))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[82])))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "that supports trailing."))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[86])))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "trseg"))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[51])))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[89])))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "tr"))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[91])))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the grade modifiers"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[93])))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Grades that support trailing contain"))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[95])))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Don\'t use --no-type-layout to disable them."))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[28])))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration requires type_ctor_layout structures."))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[99])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[102]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
    ((MR_Box) ((MR_String) "fact_table"))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[104]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[103])))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: ambiguous predicate/function name."))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[106]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[28])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[107])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[108])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not a discriminated union type."))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[28])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declarations for the same type."))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[113]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[28])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
    ((MR_Box) ((MR_String) "reserved_tag"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[115]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[114])))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning: multiple"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[117]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[116])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the same visibility as the type definition."))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[119]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration must have"))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[120])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
    ((MR_Box) ((MR_String) "reserve_tag"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[123]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[122])))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[125]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[124])))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[28])))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declarations must always be exported."))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[128]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[28])))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "pragma oisu"))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[130]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[129])))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration must always be abstract exported."))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[132]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[28])))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[130]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[133])))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The type in a"))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[134])))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is undefined."))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[137]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[28])))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "expected arity is"))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[139]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[141]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[140])))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
    ((MR_Box) ((MR_String) "termination_info"))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[143]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[30])))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[144])))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
    ((MR_Box) ((MR_String) "termination2_info"))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[146]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[30])))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[147])))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
    ((MR_Box) ((MR_String) "structure_sharing."))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[149]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[30])))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[150])))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
    ((MR_Box) ((MR_String) "structure_reuse"))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[152]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[30])))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[153])))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[118])))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[126])))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: undefined type"))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
    ((MR_Box) ((MR_String) "reserve_tag"))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 162 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 163 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: conflicting"))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
    ((MR_Box) ((MR_String) "require_tail_recursion"))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "pragmas for"))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or one of its modes."))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[167]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Earlier pragma is here."))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[169]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 171 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: no such mode for"))
  },
  /* row 173 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[174]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for exported predicate or function"))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration conflicts with previous pragma for"))
  },
  /* row 179 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[6])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 180 */
  {
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 181 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[7])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 182 */
  {
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 183 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[8])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 184 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[9])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "pragma fact_table"))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 187 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[10])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 188 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[11])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Duplicate"))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
    ((MR_Box) ((MR_String) "oisu"))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declarations for"))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
    ((MR_Box) ((MR_String) "termination_info"))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for undeclared mode of"))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: ambiguous predicate name"))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
    ((MR_Box) ((MR_String) "termination2_info"))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
    ((MR_Box) ((MR_String) "structure_sharing"))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
    ((MR_Box) ((MR_String) "structure_reuse"))
  },
  /* row 198 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[12])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 199 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[13])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 200 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[67])))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma_scalar_common_1[200]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 202 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[14])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[201])))
  },
  /* row 203 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[15])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 204 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[16])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 205 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[80])))
  },
  /* row 206 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma_scalar_common_1[205]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 207 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[17])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[206])))
  },
  /* row 208 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[18])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 209 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[97])))
  },
  /* row 210 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma_scalar_common_1[209]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 211 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_4[19])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[210])))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In the"))
  },
  /* row 213 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "predicate specification"))
  },
  /* row 214 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "within the"))
  },
  /* row 215 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "pragma oisu"))
  },
  /* row 216 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 217 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: predicate"))
  },
  /* row 218 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "one of"))
  },
  /* row 219 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has the wrong arity."))
  },
  /* row 220 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Actual arity is"))
  },
  /* row 221 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: ambiguous predicate name"))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_7[0])),
    ((MR_Box) (hlds__make_hlds__add_pragma__add_pass_2_pragma_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
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

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_4[20][1] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_1[156]))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_1[157]))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[36])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[39])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[170])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[48])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[11])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[20])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[24])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[27])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[131])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[136])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[55])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[58])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[61])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[70])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[73])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[76])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[84])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[87])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_5[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
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

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_6[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_required_feature_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_7[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_scalar_common_8[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_VA_TypeInfo_Struct2 hlds__make_hlds__add_pragma____vti_pred_2hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_pragma__hlds__make_hlds__add_pragma__type_ctor_info_add_marker_pred_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__make_hlds__add_pragma____Unify____add_marker_pred_info_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_pragma____Compare____add_marker_pred_info_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_pragma",
  (MR_String) "add_marker_pred_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__make_hlds__add_pragma____vti_pred_2hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

void MR_CALL 
hlds__make_hlds__add_pragma____Compare____add_marker_pred_info_0_0(
  MR_Word * hlds__make_hlds__add_pragma__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_pragma__HeadVar__2_2,
  MR_Word hlds__make_hlds__add_pragma__HeadVar__3_3)
{
  {
    MR_Word hlds__make_hlds__add_pragma__Cast_HeadVar1_4 = hlds__make_hlds__add_pragma__HeadVar__2_2;
    MR_Word hlds__make_hlds__add_pragma__Cast_HeadVar2_5 = hlds__make_hlds__add_pragma__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__add_pragma_scalar_common_3[0], hlds__make_hlds__add_pragma__HeadVar__1_1, ((MR_Box) (hlds__make_hlds__add_pragma__Cast_HeadVar1_4)), ((MR_Box) (hlds__make_hlds__add_pragma__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
hlds__make_hlds__add_pragma____Unify____add_marker_pred_info_0_0(
  MR_Word hlds__make_hlds__add_pragma__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_pragma__HeadVar__2_2)
{
  {
    MR_bool hlds__make_hlds__add_pragma__succeeded;
    MR_Word hlds__make_hlds__add_pragma__Cast_HeadVar1_3 = hlds__make_hlds__add_pragma__HeadVar__1_1;
    MR_Word hlds__make_hlds__add_pragma__Cast_HeadVar2_4 = hlds__make_hlds__add_pragma__HeadVar__2_2;

    {
      hlds__make_hlds__add_pragma__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__make_hlds__add_pragma__Cast_HeadVar1_3, (MR_Word) hlds__make_hlds__add_pragma__Cast_HeadVar2_4);
    }
    return hlds__make_hlds__add_pragma__succeeded;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__lookup_pred_orig_arity_3_p_0(
  MR_Word hlds__make_hlds__add_pragma__ModuleInfo_4,
  MR_Word hlds__make_hlds__add_pragma__PredId_5,
  MR_Word * hlds__make_hlds__add_pragma__Piece_6)
{
  {
    MR_Word hlds__make_hlds__add_pragma__PredInfo_7;
    MR_Integer hlds__make_hlds__add_pragma__OrigArity_8;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__add_pragma__ModuleInfo_4, hlds__make_hlds__add_pragma__PredId_5, &hlds__make_hlds__add_pragma__PredInfo_7);
    }
    {
      hlds__make_hlds__add_pragma__OrigArity_8 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__make_hlds__add_pragma__PredInfo_7);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__add_pragma__Piece_6 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__OrigArity_8));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_2)
{
  {
    MR_Box hlds__make_hlds__add_pragma__closure = hlds__make_hlds__add_pragma__closure_arg;
    MR_Word hlds__make_hlds__add_pragma__conv0_Piece_6;

    {
      hlds__make_hlds__add_pragma__lookup_pred_orig_arity_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_1), &hlds__make_hlds__add_pragma__conv0_Piece_6);
    }
    *hlds__make_hlds__add_pragma__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__conv0_Piece_6));
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0(
  MR_Word hlds__make_hlds__add_pragma__ModuleInfo_11,
  MR_Word hlds__make_hlds__add_pragma__Context_12,
  MR_Word hlds__make_hlds__add_pragma__TypeCtor_13,
  MR_String hlds__make_hlds__add_pragma__Kind_14,
  MR_Word hlds__make_hlds__add_pragma__PredNameArity_15,
  MR_Word * hlds__make_hlds__add_pragma__PredId_16,
  MR_Integer hlds__make_hlds__add_pragma__STATE_VARIABLE_SeqNum_0_41,
  MR_Integer * hlds__make_hlds__add_pragma__STATE_VARIABLE_SeqNum_42,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_43,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_44)
{
  {
    MR_Word hlds__make_hlds__add_pragma__PredicateTable_19;
    MR_Word hlds__make_hlds__add_pragma__PredName_20;
    MR_Integer hlds__make_hlds__add_pragma__PredArity_21;
    MR_Word hlds__make_hlds__add_pragma__PredIds_22;

    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__ModuleInfo_11, &hlds__make_hlds__add_pragma__PredicateTable_19);
    }
    hlds__make_hlds__add_pragma__PredName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_15, (MR_Integer) 0)));
    hlds__make_hlds__add_pragma__PredArity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_15, (MR_Integer) 1)));
    {
      hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(hlds__make_hlds__add_pragma__PredicateTable_19, (MR_Integer) 0, hlds__make_hlds__add_pragma__PredName_20, hlds__make_hlds__add_pragma__PredArity_21, &hlds__make_hlds__add_pragma__PredIds_22);
    }
    if ((hlds__make_hlds__add_pragma__PredIds_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word hlds__make_hlds__add_pragma__LooseArityPredIds_23;
      MR_Word hlds__make_hlds__add_pragma__Spec_28;

      {
        hlds__pred_table__predicate_table_lookup_sym_4_p_0(hlds__make_hlds__add_pragma__PredicateTable_19, (MR_Integer) 0, hlds__make_hlds__add_pragma__PredName_20, &hlds__make_hlds__add_pragma__LooseArityPredIds_23);
      }
      if ((hlds__make_hlds__add_pragma__LooseArityPredIds_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word hlds__make_hlds__add_pragma__TypeName_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeCtor_13, (MR_Integer) 0)));
        MR_Integer hlds__make_hlds__add_pragma__TypeArity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeCtor_13, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__add_pragma__Pieces_26;
        MR_Word hlds__make_hlds__add_pragma__Msg_27;
        MR_Word hlds__make_hlds__add_pragma__Var_167;
        MR_Word hlds__make_hlds__add_pragma__Var_168;
        MR_Word hlds__make_hlds__add_pragma__Var_169;
        MR_Word hlds__make_hlds__add_pragma__Var_170;
        MR_Word hlds__make_hlds__add_pragma__Var_171;
        MR_Word hlds__make_hlds__add_pragma__Var_174;
        MR_Word hlds__make_hlds__add_pragma__Var_177;
        MR_Word hlds__make_hlds__add_pragma__Var_180;
        MR_Word hlds__make_hlds__add_pragma__Var_183;
        MR_Word hlds__make_hlds__add_pragma__Var_184;
        MR_Word hlds__make_hlds__add_pragma__Var_185;
        MR_Word hlds__make_hlds__add_pragma__Var_186;
        MR_Word hlds__make_hlds__add_pragma__Var_189;
        MR_Word hlds__make_hlds__add_pragma__Var_191;
        MR_Word hlds__make_hlds__add_pragma__Var_194;
        MR_Word hlds__make_hlds__add_pragma__Var_195;
        MR_Word hlds__make_hlds__add_pragma__Var_196;
        MR_Word hlds__make_hlds__add_pragma__Var_203;
        MR_Word hlds__make_hlds__add_pragma__Var_204;
        MR_Word hlds__make_hlds__add_pragma__Var_208;

        {
          hlds__make_hlds__add_pragma__Var_168 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_168, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_168, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_SeqNum_0_41));
        }
        {
          hlds__make_hlds__add_pragma__Var_170 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__Var_170, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Kind_14));
        }
        {
          hlds__make_hlds__add_pragma__Var_185 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_185, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeName_24));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_185, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeArity_25));
        }
        {
          hlds__make_hlds__add_pragma__Var_184 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_184, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_184, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_185));
        }
        {
          hlds__make_hlds__add_pragma__Var_196 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_196, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__PredName_20));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_196, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__PredArity_21));
        }
        {
          hlds__make_hlds__add_pragma__Var_195 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_195, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_195, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_196));
        }
        {
          hlds__make_hlds__add_pragma__Var_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_194, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_195));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_194, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[138])));
        }
        {
          hlds__make_hlds__add_pragma__Var_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_191, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[217])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_191, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_194));
        }
        {
          hlds__make_hlds__add_pragma__Var_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_189, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_189, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_191));
        }
        {
          hlds__make_hlds__add_pragma__Var_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_186, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[216])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_186, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_189));
        }
        {
          hlds__make_hlds__add_pragma__Var_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_183, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_184));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_183, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_186));
        }
        {
          hlds__make_hlds__add_pragma__Var_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_180, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[161])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_180, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_183));
        }
        {
          hlds__make_hlds__add_pragma__Var_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_177, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[215])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_177, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_180));
        }
        {
          hlds__make_hlds__add_pragma__Var_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_174, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[214])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_174, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_177));
        }
        {
          hlds__make_hlds__add_pragma__Var_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_171, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[213])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_171, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_174));
        }
        {
          hlds__make_hlds__add_pragma__Var_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_169, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_170));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_169, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_171));
        }
        {
          hlds__make_hlds__add_pragma__Var_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_167, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_168));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_167, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_169));
        }
        {
          hlds__make_hlds__add_pragma__Pieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[212])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_26, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_167));
        }
        {
          hlds__make_hlds__add_pragma__Var_204 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_204, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_26));
        }
        {
          hlds__make_hlds__add_pragma__Var_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_203, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_204));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_203, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__Msg_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_27, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_12));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_27, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_203));
        }
        {
          hlds__make_hlds__add_pragma__Var_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_208, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_27));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_208, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_28, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_208));
        }
      }
      else
      {
        MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_225_225;
        MR_Word hlds__make_hlds__add_pragma__ArityPieces_31;
        MR_Word hlds__make_hlds__add_pragma__SortedArityPieces_32;
        MR_Word hlds__make_hlds__add_pragma__ExpArities_34;
        MR_Word hlds__make_hlds__add_pragma__Var_95;
        MR_Word hlds__make_hlds__add_pragma__Var_103;
        MR_Word hlds__make_hlds__add_pragma__Var_106;
        MR_Word hlds__make_hlds__add_pragma__Var_107;
        MR_Word hlds__make_hlds__add_pragma__Var_108;
        MR_Word hlds__make_hlds__add_pragma__Var_109;
        MR_Word hlds__make_hlds__add_pragma__Var_110;
        MR_Word hlds__make_hlds__add_pragma__Var_113;
        MR_Word hlds__make_hlds__add_pragma__Var_116;
        MR_Word hlds__make_hlds__add_pragma__Var_119;
        MR_Word hlds__make_hlds__add_pragma__Var_122;
        MR_Word hlds__make_hlds__add_pragma__Var_123;
        MR_Word hlds__make_hlds__add_pragma__Var_124;
        MR_Word hlds__make_hlds__add_pragma__Var_125;
        MR_Word hlds__make_hlds__add_pragma__Var_128;
        MR_Word hlds__make_hlds__add_pragma__Var_130;
        MR_Word hlds__make_hlds__add_pragma__Var_133;
        MR_Word hlds__make_hlds__add_pragma__Var_134;
        MR_Word hlds__make_hlds__add_pragma__Var_135;
        MR_Word hlds__make_hlds__add_pragma__Var_136;
        MR_Word hlds__make_hlds__add_pragma__Var_139;
        MR_Word hlds__make_hlds__add_pragma__Var_142;
        MR_Word hlds__make_hlds__add_pragma__Var_143;
        MR_Word hlds__make_hlds__add_pragma__Var_151;
        MR_Word hlds__make_hlds__add_pragma__Var_158;
        MR_Word hlds__make_hlds__add_pragma__Var_159;
        MR_Word hlds__make_hlds__add_pragma__Var_163;
        MR_Word hlds__make_hlds__add_pragma__TypeName_213;
        MR_Integer hlds__make_hlds__add_pragma__TypeArity_214;
        MR_Word hlds__make_hlds__add_pragma__Pieces_215;
        MR_Word hlds__make_hlds__add_pragma__Msg_216;

        {
          hlds__make_hlds__add_pragma__Var_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_95, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_7[1]));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_95, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0_1));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_95, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_95, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__ModuleInfo_11));
        }
        hlds__make_hlds__add_pragma__TypeCtorInfo_225_225 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        {
          mercury__list__map_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__make_hlds__add_pragma__TypeCtorInfo_225_225, hlds__make_hlds__add_pragma__Var_95, hlds__make_hlds__add_pragma__LooseArityPredIds_23, &hlds__make_hlds__add_pragma__ArityPieces_31);
        }
        {
          mercury__list__sort_and_remove_dups_2_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_225_225, hlds__make_hlds__add_pragma__ArityPieces_31, &hlds__make_hlds__add_pragma__SortedArityPieces_32);
        }
        if ((hlds__make_hlds__add_pragma__SortedArityPieces_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_pragma.find_unique_pred_for_oisu\'/10", (MR_String) "no arity pieces");
            return;
          }
        }
        else
        {
          MR_Word hlds__make_hlds__add_pragma__Var_226 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__SortedArityPieces_32, (MR_Integer) 1)));
          MR_Word hlds__make_hlds__add_pragma__Var_227 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__SortedArityPieces_32, (MR_Integer) 0)));

          if ((hlds__make_hlds__add_pragma__Var_226 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            hlds__make_hlds__add_pragma__ExpArities_34 = hlds__make_hlds__add_pragma__SortedArityPieces_32;
          else
          {
            MR_Word hlds__make_hlds__add_pragma__Var_99;

            {
              hlds__make_hlds__add_pragma__Var_99 = parse_tree__error_util__component_list_to_pieces_1_f_0(hlds__make_hlds__add_pragma__SortedArityPieces_32);
            }
            {
              hlds__make_hlds__add_pragma__ExpArities_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ExpArities_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[218])));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ExpArities_34, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_99));
            }
          }
        }
        hlds__make_hlds__add_pragma__TypeName_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeCtor_13, (MR_Integer) 0)));
        hlds__make_hlds__add_pragma__TypeArity_214 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeCtor_13, (MR_Integer) 1)));
        {
          hlds__make_hlds__add_pragma__Var_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_107, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_107, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_SeqNum_0_41));
        }
        {
          hlds__make_hlds__add_pragma__Var_109 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__Var_109, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Kind_14));
        }
        {
          hlds__make_hlds__add_pragma__Var_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_124, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeName_213));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_124, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeArity_214));
        }
        {
          hlds__make_hlds__add_pragma__Var_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_123, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_124));
        }
        {
          hlds__make_hlds__add_pragma__Var_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_135, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__PredName_20));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_135, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__PredArity_21));
        }
        {
          hlds__make_hlds__add_pragma__Var_134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_134, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_134, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_135));
        }
        {
          hlds__make_hlds__add_pragma__Var_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_143, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__PredArity_21));
        }
        {
          hlds__make_hlds__add_pragma__Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_142, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_143));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[142])));
        }
        {
          hlds__make_hlds__add_pragma__Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_139, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[220])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_139, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_142));
        }
        {
          hlds__make_hlds__add_pragma__Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_136, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[219])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_136, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_139));
        }
        {
          hlds__make_hlds__add_pragma__Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_133, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_134));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_133, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_136));
        }
        {
          hlds__make_hlds__add_pragma__Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_130, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[217])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_130, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_133));
        }
        {
          hlds__make_hlds__add_pragma__Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_128, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_128, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_130));
        }
        {
          hlds__make_hlds__add_pragma__Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_125, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[216])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_125, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_128));
        }
        {
          hlds__make_hlds__add_pragma__Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_122, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_123));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_122, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_125));
        }
        {
          hlds__make_hlds__add_pragma__Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_119, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[161])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_119, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_122));
        }
        {
          hlds__make_hlds__add_pragma__Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_116, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[215])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_116, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_119));
        }
        {
          hlds__make_hlds__add_pragma__Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[214])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_113, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_116));
        }
        {
          hlds__make_hlds__add_pragma__Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_110, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[213])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_110, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_113));
        }
        {
          hlds__make_hlds__add_pragma__Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_108, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_109));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_108, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_110));
        }
        {
          hlds__make_hlds__add_pragma__Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_106, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_107));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_106, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_108));
        }
        {
          hlds__make_hlds__add_pragma__Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_103, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[212])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_103, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_106));
        }
        {
          hlds__make_hlds__add_pragma__Var_151 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__TypeCtorInfo_225_225, hlds__make_hlds__add_pragma__ExpArities_34, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[51]));
        }
        {
          hlds__make_hlds__add_pragma__Pieces_215 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__TypeCtorInfo_225_225, hlds__make_hlds__add_pragma__Var_103, hlds__make_hlds__add_pragma__Var_151);
        }
        {
          hlds__make_hlds__add_pragma__Var_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_159, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_215));
        }
        {
          hlds__make_hlds__add_pragma__Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_158, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_159));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__Msg_216 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_216, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_12));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_216, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_158));
        }
        {
          hlds__make_hlds__add_pragma__Var_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_163, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_216));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_163, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_28, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_163));
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_44 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_28));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_43));
      }
      {
        *hlds__make_hlds__add_pragma__PredId_16 = hlds__hlds_pred__invalid_pred_id_0_f_0();
      }
    }
    else
    {
      MR_Word hlds__make_hlds__add_pragma__Var_228 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_22, (MR_Integer) 1)));
      MR_Word hlds__make_hlds__add_pragma__Var_229 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_22, (MR_Integer) 0)));

      if ((hlds__make_hlds__add_pragma__Var_228 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *hlds__make_hlds__add_pragma__PredId_16 = hlds__make_hlds__add_pragma__Var_229;
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_44 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_43;
      }
      else
      {
        MR_Word hlds__make_hlds__add_pragma__Var_49;
        MR_Word hlds__make_hlds__add_pragma__Var_50;
        MR_Word hlds__make_hlds__add_pragma__Var_51;
        MR_Word hlds__make_hlds__add_pragma__Var_52;
        MR_Word hlds__make_hlds__add_pragma__Var_53;
        MR_Word hlds__make_hlds__add_pragma__Var_56;
        MR_Word hlds__make_hlds__add_pragma__Var_59;
        MR_Word hlds__make_hlds__add_pragma__Var_62;
        MR_Word hlds__make_hlds__add_pragma__Var_65;
        MR_Word hlds__make_hlds__add_pragma__Var_66;
        MR_Word hlds__make_hlds__add_pragma__Var_67;
        MR_Word hlds__make_hlds__add_pragma__Var_68;
        MR_Word hlds__make_hlds__add_pragma__Var_71;
        MR_Word hlds__make_hlds__add_pragma__Var_73;
        MR_Word hlds__make_hlds__add_pragma__Var_76;
        MR_Word hlds__make_hlds__add_pragma__Var_77;
        MR_Word hlds__make_hlds__add_pragma__Var_78;
        MR_Word hlds__make_hlds__add_pragma__Var_85;
        MR_Word hlds__make_hlds__add_pragma__Var_86;
        MR_Word hlds__make_hlds__add_pragma__Var_90;
        MR_Word hlds__make_hlds__add_pragma__TypeName_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeCtor_13, (MR_Integer) 0)));
        MR_Integer hlds__make_hlds__add_pragma__TypeArity_218 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeCtor_13, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__add_pragma__Pieces_219;
        MR_Word hlds__make_hlds__add_pragma__Msg_220;
        MR_Word hlds__make_hlds__add_pragma__Spec_221;

        {
          hlds__make_hlds__add_pragma__Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_50, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_SeqNum_0_41));
        }
        {
          hlds__make_hlds__add_pragma__Var_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__Var_52, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Kind_14));
        }
        {
          hlds__make_hlds__add_pragma__Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_67, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeName_217));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_67, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeArity_218));
        }
        {
          hlds__make_hlds__add_pragma__Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_66, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_67));
        }
        {
          hlds__make_hlds__add_pragma__Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_78, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__PredName_20));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_78, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__PredArity_21));
        }
        {
          hlds__make_hlds__add_pragma__Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_77, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_78));
        }
        {
          hlds__make_hlds__add_pragma__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_76, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_77));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[51])));
        }
        {
          hlds__make_hlds__add_pragma__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_73, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[221])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_73, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_76));
        }
        {
          hlds__make_hlds__add_pragma__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_71, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_73));
        }
        {
          hlds__make_hlds__add_pragma__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[216])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_68, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_71));
        }
        {
          hlds__make_hlds__add_pragma__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_65, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_66));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_65, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_68));
        }
        {
          hlds__make_hlds__add_pragma__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[161])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_62, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_65));
        }
        {
          hlds__make_hlds__add_pragma__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[190])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_59, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_62));
        }
        {
          hlds__make_hlds__add_pragma__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[214])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_56, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_59));
        }
        {
          hlds__make_hlds__add_pragma__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[213])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_53, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_56));
        }
        {
          hlds__make_hlds__add_pragma__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_51, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_52));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_51, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_53));
        }
        {
          hlds__make_hlds__add_pragma__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_49, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_50));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_49, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_51));
        }
        {
          hlds__make_hlds__add_pragma__Pieces_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_219, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[212])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_219, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_49));
        }
        {
          hlds__make_hlds__add_pragma__Var_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_86, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_219));
        }
        {
          hlds__make_hlds__add_pragma__Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_85, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_86));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__Msg_220 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_220, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_12));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_220, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_85));
        }
        {
          hlds__make_hlds__add_pragma__Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_90, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_220));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__Spec_221 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_221, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_221, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_221, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_90));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_44 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_221));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_43));
        }
        {
          *hlds__make_hlds__add_pragma__PredId_16 = hlds__hlds_pred__invalid_pred_id_0_f_0();
        }
      }
    }
    *hlds__make_hlds__add_pragma__STATE_VARIABLE_SeqNum_42 = (hlds__make_hlds__add_pragma__STATE_VARIABLE_SeqNum_0_41 + (MR_Integer) 1);
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__check_required_feature_5_p_0(
  MR_Word hlds__make_hlds__add_pragma__Globals_6,
  MR_Word hlds__make_hlds__add_pragma__Context_7,
  MR_Word hlds__make_hlds__add_pragma__Feature_8,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24)
{
  {
    MR_bool hlds__make_hlds__add_pragma__succeeded;

    switch (hlds__make_hlds__add_pragma__Feature_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__make_hlds__add_pragma__IsConcurrencySupported_10;

          {
            libs__globals__current_grade_supports_concurrency_2_p_0(hlds__make_hlds__add_pragma__Globals_6, &hlds__make_hlds__add_pragma__IsConcurrencySupported_10);
          }
          switch (hlds__make_hlds__add_pragma__IsConcurrencySupported_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word hlds__make_hlds__add_pragma__Msg_12;
                MR_Word hlds__make_hlds__add_pragma__Spec_13;
                MR_Word hlds__make_hlds__add_pragma__Var_211;

                {
                  hlds__make_hlds__add_pragma__Msg_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_12, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_7));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[198])));
                }
                {
                  hlds__make_hlds__add_pragma__Var_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_211, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_12));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_211, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  hlds__make_hlds__add_pragma__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_13, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_211));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_13));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23));
                }
              }
              break;
            case (MR_Integer) 1:
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23;
              break;
          }
        }
        break;
      case (MR_Integer) 7:
        {
          MR_Word hlds__make_hlds__add_pragma__GC_Method_22;

          {
            libs__globals__get_gc_method_2_p_0(hlds__make_hlds__add_pragma__Globals_6, &hlds__make_hlds__add_pragma__GC_Method_22);
          }
          switch (hlds__make_hlds__add_pragma__GC_Method_22) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 5:
            case (MR_Integer) 1:
              {
                MR_Word hlds__make_hlds__add_pragma__Var_38;
                MR_Word hlds__make_hlds__add_pragma__Msg_276;
                MR_Word hlds__make_hlds__add_pragma__Spec_277;

                {
                  hlds__make_hlds__add_pragma__Msg_276 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_276, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_7));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_276, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[199])));
                }
                {
                  hlds__make_hlds__add_pragma__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_38, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_276));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  hlds__make_hlds__add_pragma__Spec_277 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_277, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_277, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_277, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_38));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_277));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23));
                }
              }
              break;
            case (MR_Integer) 0:
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23;
              break;
            case (MR_Integer) 2:
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23;
              break;
            case (MR_Integer) 3:
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23;
              break;
            case (MR_Integer) 4:
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__make_hlds__add_pragma__SinglePrecFloat_234;

          {
            libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__Globals_6, (MR_Integer) 235, &hlds__make_hlds__add_pragma__SinglePrecFloat_234);
          }
          switch (hlds__make_hlds__add_pragma__SinglePrecFloat_234) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23;
              break;
            case (MR_Integer) 1:
              {
                MR_Word hlds__make_hlds__add_pragma__Var_161;
                MR_Word hlds__make_hlds__add_pragma__Msg_224;
                MR_Word hlds__make_hlds__add_pragma__Spec_225;

                {
                  hlds__make_hlds__add_pragma__Msg_224 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_224, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_7));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_224, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[202])));
                }
                {
                  hlds__make_hlds__add_pragma__Var_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_161, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_224));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  hlds__make_hlds__add_pragma__Spec_225 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_225, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_225, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_225, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_161));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_225));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word hlds__make_hlds__add_pragma__IsTablingSupported_16;

          {
            libs__globals__current_grade_supports_tabling_2_p_0(hlds__make_hlds__add_pragma__Globals_6, &hlds__make_hlds__add_pragma__IsTablingSupported_16);
          }
          switch (hlds__make_hlds__add_pragma__IsTablingSupported_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word hlds__make_hlds__add_pragma__Var_127;
                MR_Word hlds__make_hlds__add_pragma__Msg_237;
                MR_Word hlds__make_hlds__add_pragma__Spec_238;

                {
                  hlds__make_hlds__add_pragma__Msg_237 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_237, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_7));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_237, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[203])));
                }
                {
                  hlds__make_hlds__add_pragma__Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_127, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_237));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  hlds__make_hlds__add_pragma__Spec_238 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_238, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_238, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_238, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_127));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_238));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23));
                }
              }
              break;
            case (MR_Integer) 1:
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23;
              break;
          }
        }
        break;
      case (MR_Integer) 4:
        {
          MR_Word hlds__make_hlds__add_pragma__IsParConjSupported_17;

          {
            libs__globals__current_grade_supports_par_conj_2_p_0(hlds__make_hlds__add_pragma__Globals_6, &hlds__make_hlds__add_pragma__IsParConjSupported_17);
          }
          switch (hlds__make_hlds__add_pragma__IsParConjSupported_17) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word hlds__make_hlds__add_pragma__Var_111;
                MR_Word hlds__make_hlds__add_pragma__Msg_246;
                MR_Word hlds__make_hlds__add_pragma__Spec_247;

                {
                  hlds__make_hlds__add_pragma__Msg_246 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_246, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_7));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_246, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[204])));
                }
                {
                  hlds__make_hlds__add_pragma__Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_111, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_246));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  hlds__make_hlds__add_pragma__Spec_247 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_247, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_247, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_247, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_111));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_247));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23));
                }
              }
              break;
            case (MR_Integer) 1:
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__make_hlds__add_pragma__SinglePrecFloat_14;

          {
            libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__Globals_6, (MR_Integer) 235, &hlds__make_hlds__add_pragma__SinglePrecFloat_14);
          }
          switch (hlds__make_hlds__add_pragma__SinglePrecFloat_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word hlds__make_hlds__add_pragma__Var_195;
                MR_Word hlds__make_hlds__add_pragma__Msg_215;
                MR_Word hlds__make_hlds__add_pragma__Spec_216;

                {
                  hlds__make_hlds__add_pragma__Msg_215 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_215, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_7));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_215, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[207])));
                }
                {
                  hlds__make_hlds__add_pragma__Var_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_195, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_215));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_195, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  hlds__make_hlds__add_pragma__Spec_216 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_216, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_216, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_216, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_195));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_216));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23));
                }
              }
              break;
            case (MR_Integer) 1:
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23;
              break;
          }
        }
        break;
      case (MR_Integer) 6:
        {
          MR_Word hlds__make_hlds__add_pragma__ReorderConj_19;
          MR_Word hlds__make_hlds__add_pragma__ReorderDisj_20;
          MR_Word hlds__make_hlds__add_pragma__FullyStrict_21;

          {
            libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__Globals_6, (MR_Integer) 176, &hlds__make_hlds__add_pragma__ReorderConj_19);
          }
          {
            libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__Globals_6, (MR_Integer) 177, &hlds__make_hlds__add_pragma__ReorderDisj_20);
          }
          {
            libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__Globals_6, (MR_Integer) 178, &hlds__make_hlds__add_pragma__FullyStrict_21);
          }
          hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__ReorderConj_19 == (MR_Integer) 0);
          if (hlds__make_hlds__add_pragma__succeeded)
          {
            hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__ReorderDisj_20 == (MR_Integer) 0);
            if (hlds__make_hlds__add_pragma__succeeded)
              hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__FullyStrict_21 == (MR_Integer) 1);
          }
          if (hlds__make_hlds__add_pragma__succeeded)
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23;
          else
          {
            MR_Word hlds__make_hlds__add_pragma__Var_57;
            MR_Word hlds__make_hlds__add_pragma__Msg_267;
            MR_Word hlds__make_hlds__add_pragma__Spec_268;

            {
              hlds__make_hlds__add_pragma__Msg_267 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_267, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_7));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_267, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[208])));
            }
            {
              hlds__make_hlds__add_pragma__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_57, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_267));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_pragma__Spec_268 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_268, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_268, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_268, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_57));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_268));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23));
            }
          }
        }
        break;
      case (MR_Integer) 5:
        {
          MR_Word hlds__make_hlds__add_pragma__UseTrail_18;

          {
            libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__Globals_6, (MR_Integer) 229, &hlds__make_hlds__add_pragma__UseTrail_18);
          }
          switch (hlds__make_hlds__add_pragma__UseTrail_18) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word hlds__make_hlds__add_pragma__Var_95;
                MR_Word hlds__make_hlds__add_pragma__Msg_255;
                MR_Word hlds__make_hlds__add_pragma__Spec_256;

                {
                  hlds__make_hlds__add_pragma__Msg_255 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_255, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_7));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_255, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[211])));
                }
                {
                  hlds__make_hlds__add_pragma__Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_95, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_255));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  hlds__make_hlds__add_pragma__Spec_256 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_256, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_256, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_256, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_95));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_256));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23));
                }
              }
              break;
            case (MR_Integer) 1:
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_23;
              break;
          }
        }
        break;
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__pragma_conflict_error_6_p_0(
  MR_Word hlds__make_hlds__add_pragma__Name_7,
  MR_Integer hlds__make_hlds__add_pragma__Arity_8,
  MR_Word hlds__make_hlds__add_pragma__Context_9,
  MR_String hlds__make_hlds__add_pragma__PragmaName_10,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_15,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_16)
{
  {
    MR_Word hlds__make_hlds__add_pragma__Pieces_12;
    MR_Word hlds__make_hlds__add_pragma__Msg_13;
    MR_Word hlds__make_hlds__add_pragma__Spec_14;
    MR_Word hlds__make_hlds__add_pragma__Var_19;
    MR_Word hlds__make_hlds__add_pragma__Var_20;
    MR_Word hlds__make_hlds__add_pragma__Var_21;
    MR_Word hlds__make_hlds__add_pragma__Var_24;
    MR_Word hlds__make_hlds__add_pragma__Var_25;
    MR_Word hlds__make_hlds__add_pragma__Var_26;
    MR_Word hlds__make_hlds__add_pragma__Var_33;
    MR_Word hlds__make_hlds__add_pragma__Var_34;
    MR_Word hlds__make_hlds__add_pragma__Var_38;

    {
      hlds__make_hlds__add_pragma__Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_20, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__PragmaName_10));
    }
    {
      hlds__make_hlds__add_pragma__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_26, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Name_7));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_26, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_8));
    }
    {
      hlds__make_hlds__add_pragma__Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_25, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_26));
    }
    {
      hlds__make_hlds__add_pragma__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_24, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_25));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[51])));
    }
    {
      hlds__make_hlds__add_pragma__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[178])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_21, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_24));
    }
    {
      hlds__make_hlds__add_pragma__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_19, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_20));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_19, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_21));
    }
    {
      hlds__make_hlds__add_pragma__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[176])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_12, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_19));
    }
    {
      hlds__make_hlds__add_pragma__Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_34, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_12));
    }
    {
      hlds__make_hlds__add_pragma__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_33, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_34));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pragma__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_13, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_9));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_13, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_33));
    }
    {
      hlds__make_hlds__add_pragma__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_38, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_13));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pragma__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_14, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_38));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_15));
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__pragma_status_error_6_p_0(
  MR_Word hlds__make_hlds__add_pragma__Name_7,
  MR_Integer hlds__make_hlds__add_pragma__Arity_8,
  MR_Word hlds__make_hlds__add_pragma__Context_9,
  MR_String hlds__make_hlds__add_pragma__PragmaName_10,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_15,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_16)
{
  {
    MR_Word hlds__make_hlds__add_pragma__Pieces_12;
    MR_Word hlds__make_hlds__add_pragma__Msg_13;
    MR_Word hlds__make_hlds__add_pragma__Spec_14;
    MR_Word hlds__make_hlds__add_pragma__Var_19;
    MR_Word hlds__make_hlds__add_pragma__Var_20;
    MR_Word hlds__make_hlds__add_pragma__Var_21;
    MR_Word hlds__make_hlds__add_pragma__Var_24;
    MR_Word hlds__make_hlds__add_pragma__Var_25;
    MR_Word hlds__make_hlds__add_pragma__Var_26;
    MR_Word hlds__make_hlds__add_pragma__Var_33;
    MR_Word hlds__make_hlds__add_pragma__Var_34;
    MR_Word hlds__make_hlds__add_pragma__Var_38;

    {
      hlds__make_hlds__add_pragma__Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_20, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__PragmaName_10));
    }
    {
      hlds__make_hlds__add_pragma__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_26, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Name_7));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_26, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_8));
    }
    {
      hlds__make_hlds__add_pragma__Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_25, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_26));
    }
    {
      hlds__make_hlds__add_pragma__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_24, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_25));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[50])));
    }
    {
      hlds__make_hlds__add_pragma__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[177])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_21, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_24));
    }
    {
      hlds__make_hlds__add_pragma__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_19, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_20));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_19, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_21));
    }
    {
      hlds__make_hlds__add_pragma__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[176])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_12, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_19));
    }
    {
      hlds__make_hlds__add_pragma__Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_34, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_12));
    }
    {
      hlds__make_hlds__add_pragma__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_33, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_34));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pragma__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_13, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_9));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_13, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_33));
    }
    {
      hlds__make_hlds__add_pragma__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_38, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_13));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pragma__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_14, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_38));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_15));
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_marker_pred_info_3_p_0(
  MR_Word hlds__make_hlds__add_pragma__Marker_4,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_PredInfo_0_8,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_PredInfo_9)
{
  {
    MR_Word hlds__make_hlds__add_pragma__Markers0_6;
    MR_Word hlds__make_hlds__add_pragma__Markers_7;

    {
      hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_PredInfo_0_8, &hlds__make_hlds__add_pragma__Markers0_6);
    }
    {
      hlds__hlds_pred__add_marker_3_p_0(hlds__make_hlds__add_pragma__Marker_4, hlds__make_hlds__add_pragma__Markers0_6, &hlds__make_hlds__add_pragma__Markers_7);
    }
    {
      hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_pragma__Markers_7, hlds__make_hlds__add_pragma__STATE_VARIABLE_PredInfo_0_8, hlds__make_hlds__add_pragma__STATE_VARIABLE_PredInfo_9);
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__do_add_pred_marker_12_p_0(
  MR_String hlds__make_hlds__add_pragma__PragmaName_13,
  MR_Word hlds__make_hlds__add_pragma__Name_14,
  MR_Integer hlds__make_hlds__add_pragma__Arity_15,
  MR_Word hlds__make_hlds__add_pragma__Status_16,
  MR_Word hlds__make_hlds__add_pragma__MustBeExported_17,
  MR_Word hlds__make_hlds__add_pragma__Context_18,
  MR_Word hlds__make_hlds__add_pragma__UpdatePredInfo_19,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_32,
  MR_Word * hlds__make_hlds__add_pragma__PredIds_21,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_33,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_34)
{
  {
    MR_Word hlds__make_hlds__add_pragma__PredTable0_47;

    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31, &hlds__make_hlds__add_pragma__PredTable0_47);
    }
    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__Name_14)) == (MR_mktag((MR_Integer) 1))))
    {
      {
        hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(hlds__make_hlds__add_pragma__PredTable0_47, (MR_Integer) 0, hlds__make_hlds__add_pragma__Name_14, hlds__make_hlds__add_pragma__Arity_15, hlds__make_hlds__add_pragma__PredIds_21);
      }
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_pragma.get_matching_pred_ids\'/4", (MR_String) "unqualified name");
        return;
      }
    }
    if ((*hlds__make_hlds__add_pragma__PredIds_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word hlds__make_hlds__add_pragma__DescPieces_30;
      MR_Word hlds__make_hlds__add_pragma__Var_35;

      {
        hlds__make_hlds__add_pragma__Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_35, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__PragmaName_13));
      }
      {
        hlds__make_hlds__add_pragma__DescPieces_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__DescPieces_30, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_35));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__DescPieces_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[175])));
      }
      {
        hlds__make_hlds__make_hlds_error__report_undefined_pred_or_func_error_6_p_0(hlds__make_hlds__add_pragma__Name_14, hlds__make_hlds__add_pragma__Arity_15, hlds__make_hlds__add_pragma__Context_18, hlds__make_hlds__add_pragma__DescPieces_30, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_34);
      }
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_32 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31;
    }
    else
    {
      MR_Word hlds__make_hlds__add_pragma__PredTable0_25;
      MR_Word hlds__make_hlds__add_pragma__Preds0_26;
      MR_Word hlds__make_hlds__add_pragma__Preds_27;
      MR_Word hlds__make_hlds__add_pragma__WrongStatus_28;
      MR_Word hlds__make_hlds__add_pragma__PredTable_29;

      {
        hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31, &hlds__make_hlds__add_pragma__PredTable0_25);
      }
      {
        hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__make_hlds__add_pragma__PredTable0_25, &hlds__make_hlds__add_pragma__Preds0_26);
      }
      {
        hlds__make_hlds__add_pragma__pragma_add_marker_7_p_0(*hlds__make_hlds__add_pragma__PredIds_21, hlds__make_hlds__add_pragma__UpdatePredInfo_19, hlds__make_hlds__add_pragma__Status_16, hlds__make_hlds__add_pragma__MustBeExported_17, hlds__make_hlds__add_pragma__Preds0_26, &hlds__make_hlds__add_pragma__Preds_27, &hlds__make_hlds__add_pragma__WrongStatus_28);
      }
      switch (hlds__make_hlds__add_pragma__WrongStatus_28) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_34 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_33;
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__make_hlds__add_pragma__Pieces_61;
            MR_Word hlds__make_hlds__add_pragma__Msg_62;
            MR_Word hlds__make_hlds__add_pragma__Spec_63;
            MR_Word hlds__make_hlds__add_pragma__Var_66;
            MR_Word hlds__make_hlds__add_pragma__Var_67;
            MR_Word hlds__make_hlds__add_pragma__Var_68;
            MR_Word hlds__make_hlds__add_pragma__Var_71;
            MR_Word hlds__make_hlds__add_pragma__Var_72;
            MR_Word hlds__make_hlds__add_pragma__Var_73;
            MR_Word hlds__make_hlds__add_pragma__Var_80;
            MR_Word hlds__make_hlds__add_pragma__Var_81;
            MR_Word hlds__make_hlds__add_pragma__Var_85;

            {
              hlds__make_hlds__add_pragma__Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_67, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__PragmaName_13));
            }
            {
              hlds__make_hlds__add_pragma__Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_73, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Name_14));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_73, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_15));
            }
            {
              hlds__make_hlds__add_pragma__Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_72, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_73));
            }
            {
              hlds__make_hlds__add_pragma__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_71, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_72));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[50])));
            }
            {
              hlds__make_hlds__add_pragma__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[177])));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_68, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_71));
            }
            {
              hlds__make_hlds__add_pragma__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_66, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_67));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_66, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_68));
            }
            {
              hlds__make_hlds__add_pragma__Pieces_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[176])));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_61, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_66));
            }
            {
              hlds__make_hlds__add_pragma__Var_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_81, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_61));
            }
            {
              hlds__make_hlds__add_pragma__Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_80, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_81));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_pragma__Msg_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_62, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_18));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_62, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_80));
            }
            {
              hlds__make_hlds__add_pragma__Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_85, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_62));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_pragma__Spec_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_63, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_85));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_34 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_63));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_33));
            }
          }
          break;
      }
      {
        hlds__pred_table__predicate_table_set_preds_3_p_0(hlds__make_hlds__add_pragma__Preds_27, hlds__make_hlds__add_pragma__PredTable0_25, &hlds__make_hlds__add_pragma__PredTable_29);
      }
      {
        hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_pragma__PredTable_29, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_32);
      }
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__pragma_add_marker_7_p_0(
  MR_Word hlds__make_hlds__add_pragma__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_pragma__UpdatePredInfo_2,
  MR_Word hlds__make_hlds__add_pragma__Status_3,
  MR_Word hlds__make_hlds__add_pragma__MustBeExported_4,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_0_5,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_6,
  MR_Word * hlds__make_hlds__add_pragma__HeadVar__7_7)
{
  {
    MR_bool hlds__make_hlds__add_pragma__succeeded;

    if ((hlds__make_hlds__add_pragma__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *hlds__make_hlds__add_pragma__HeadVar__7_7 = (MR_Integer) 0;
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_6 = hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_0_5;
    }
    else
    {
      MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
      MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
      MR_Word hlds__make_hlds__add_pragma__PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__make_hlds__add_pragma__PredIds_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word hlds__make_hlds__add_pragma__PredInfo0_21;
      MR_Word hlds__make_hlds__add_pragma__PredInfo_22;
      MR_Word hlds__make_hlds__add_pragma__WrongStatus0_23;
      MR_Word hlds__make_hlds__add_pragma__WrongStatus1_24;
      MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_28_28;
      MR_Box hlds__make_hlds__add_pragma__conv0_PredInfo0_21;
      void MR_CALL (* hlds__make_hlds__add_pragma__func_1)(MR_Box, MR_Box, MR_Box *);
      MR_Box hlds__make_hlds__add_pragma__conv2_PredInfo_22;
      MR_Word hlds__make_hlds__add_pragma__Var_27;

      {
        mercury__map__lookup_3_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_30_30, hlds__make_hlds__add_pragma__TypeCtorInfo_31_31, hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_0_5, ((MR_Box) (hlds__make_hlds__add_pragma__PredId_14)), &hlds__make_hlds__add_pragma__conv0_PredInfo0_21);
      }
      hlds__make_hlds__add_pragma__PredInfo0_21 = ((MR_Word) hlds__make_hlds__add_pragma__conv0_PredInfo0_21);
      hlds__make_hlds__add_pragma__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__UpdatePredInfo_2, (MR_Integer) 1)));
      {
        hlds__make_hlds__add_pragma__func_1(((MR_Box) hlds__make_hlds__add_pragma__UpdatePredInfo_2), ((MR_Box) (hlds__make_hlds__add_pragma__PredInfo0_21)), &hlds__make_hlds__add_pragma__conv2_PredInfo_22);
      }
      hlds__make_hlds__add_pragma__PredInfo_22 = ((MR_Word) hlds__make_hlds__add_pragma__conv2_PredInfo_22);
      {
        hlds__make_hlds__add_pragma__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(hlds__make_hlds__add_pragma__PredInfo_22);
      }
      if (hlds__make_hlds__add_pragma__succeeded)
      {
        hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__MustBeExported_4 == (MR_Integer) 1);
        if (hlds__make_hlds__add_pragma__succeeded)
        {
          hlds__make_hlds__add_pragma__Var_27 = (MR_Word) hlds__make_hlds__add_pragma__Status_3;
          hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__Var_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          hlds__make_hlds__add_pragma__succeeded = !(hlds__make_hlds__add_pragma__succeeded);
        }
      }
      if (hlds__make_hlds__add_pragma__succeeded)
        hlds__make_hlds__add_pragma__WrongStatus0_23 = (MR_Integer) 1;
      else
        hlds__make_hlds__add_pragma__WrongStatus0_23 = (MR_Integer) 0;
      {
        mercury__map__det_update_4_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_30_30, hlds__make_hlds__add_pragma__TypeCtorInfo_31_31, ((MR_Box) (hlds__make_hlds__add_pragma__PredId_14)), ((MR_Box) (hlds__make_hlds__add_pragma__PredInfo_22)), hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_0_5, &hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_28_28);
      }
      {
        hlds__make_hlds__add_pragma__pragma_add_marker_7_p_0(hlds__make_hlds__add_pragma__PredIds_15, hlds__make_hlds__add_pragma__UpdatePredInfo_2, hlds__make_hlds__add_pragma__Status_3, hlds__make_hlds__add_pragma__MustBeExported_4, hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_28_28, hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_6, &hlds__make_hlds__add_pragma__WrongStatus1_24);
      }
      {
        mercury__bool__or_3_p_0(hlds__make_hlds__add_pragma__WrongStatus0_23, hlds__make_hlds__add_pragma__WrongStatus1_24, hlds__make_hlds__add_pragma__HeadVar__7_7);
      }
    }
  }
}

MR_bool MR_CALL 
hlds__make_hlds__add_pragma__marker_must_be_exported_1_p_0(
  MR_Word hlds__make_hlds__add_pragma__HeadVar__1_2)
{
  {
    MR_bool hlds__make_hlds__add_pragma__succeeded;

    {
      hlds__make_hlds__add_pragma__succeeded = hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_114_107_101_114_95_109_117_115_116_95_98_101_95_101_120_112_111_114_116_101_100_95_95_91_49_93_95_48_1_p_0();
    }
    return hlds__make_hlds__add_pragma__succeeded;
  }
}

MR_bool MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_114_107_101_114_95_109_117_115_116_95_98_101_95_101_120_112_111_114_116_101_100_95_95_91_49_93_95_48_1_p_0(void)
{
  {
    MR_bool hlds__make_hlds__add_pragma__succeeded;

    {
      hlds__make_hlds__add_pragma__succeeded = mercury__builtin__semidet_fail_0_p_0();
    }
    return hlds__make_hlds__add_pragma__succeeded;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_mm_tabling_info_6_p_0(
  MR_Word hlds__make_hlds__add_pragma__MMTablingInfo_7,
  MR_Word hlds__make_hlds__add_pragma___Context_8,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_29,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_30,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_31)
{
  {
    hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_109_109_95_116_97_98_108_105_110_103_95_105_110_102_111_95_95_91_50_93_95_48_6_p_0(hlds__make_hlds__add_pragma__MMTablingInfo_7, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_28, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_29, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_30, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_31);
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_trailing_info_6_p_0(
  MR_Word hlds__make_hlds__add_pragma__TrailingInfo_7,
  MR_Word hlds__make_hlds__add_pragma___Context_8,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_29,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_30,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_31)
{
  {
    hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_116_114_97_105_108_105_110_103_95_105_110_102_111_95_95_91_50_93_95_48_6_p_0(hlds__make_hlds__add_pragma__TrailingInfo_7, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_28, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_29, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_30, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_31);
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_exceptions_6_p_0(
  MR_Word hlds__make_hlds__add_pragma__ExceptionsInfo_7,
  MR_Word hlds__make_hlds__add_pragma___Context_8,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_29,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_30,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_31)
{
  {
    hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_101_120_99_101_112_116_105_111_110_115_95_95_91_50_93_95_48_6_p_0(hlds__make_hlds__add_pragma__ExceptionsInfo_7, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_28, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_29, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_30, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_31);
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__mark_pred_as_external_3_p_0(
  MR_Word hlds__make_hlds__add_pragma__PredId_4,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_11)
{
  {
    MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_13_13;
    MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_14_14;
    MR_Word hlds__make_hlds__add_pragma__Preds0_6;
    MR_Word hlds__make_hlds__add_pragma__PredInfo0_7;
    MR_Word hlds__make_hlds__add_pragma__PredInfo_8;
    MR_Word hlds__make_hlds__add_pragma__Preds_9;
    MR_Box hlds__make_hlds__add_pragma__conv0_PredInfo0_7;

    {
      hlds__hlds_module__module_info_get_preds_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_10, &hlds__make_hlds__add_pragma__Preds0_6);
    }
    hlds__make_hlds__add_pragma__TypeCtorInfo_13_13 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    hlds__make_hlds__add_pragma__TypeCtorInfo_14_14 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
    {
      mercury__map__lookup_3_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_13_13, hlds__make_hlds__add_pragma__TypeCtorInfo_14_14, hlds__make_hlds__add_pragma__Preds0_6, ((MR_Box) (hlds__make_hlds__add_pragma__PredId_4)), &hlds__make_hlds__add_pragma__conv0_PredInfo0_7);
    }
    hlds__make_hlds__add_pragma__PredInfo0_7 = ((MR_Word) hlds__make_hlds__add_pragma__conv0_PredInfo0_7);
    {
      hlds__hlds_pred__pred_info_mark_as_external_2_p_0(hlds__make_hlds__add_pragma__PredInfo0_7, &hlds__make_hlds__add_pragma__PredInfo_8);
    }
    {
      mercury__map__det_update_4_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_13_13, hlds__make_hlds__add_pragma__TypeCtorInfo_14_14, ((MR_Box) (hlds__make_hlds__add_pragma__PredId_4)), ((MR_Box) (hlds__make_hlds__add_pragma__PredInfo_8)), hlds__make_hlds__add_pragma__Preds0_6, &hlds__make_hlds__add_pragma__Preds_9);
    }
    {
      hlds__hlds_module__module_info_set_preds_3_p_0(hlds__make_hlds__add_pragma__Preds_9, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_10, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_11);
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_reserve_tag_pragma_5_p_0(
  MR_Word hlds__make_hlds__add_pragma__SectionItem_6,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_18,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_19,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_20)
{
  {
    MR_Word hlds__make_hlds__add_pragma__ItemMercuryStatus_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__SectionItem_6, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pragma__ItemPragmaInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__SectionItem_6, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__Pragma_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragmaInfo_10, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pragma__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragmaInfo_10, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_pragma__TypeCtor_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__TypeStatus_16;
    MR_Word hlds__make_hlds__add_pragma___MaybeAttrs_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragmaInfo_10, (MR_Integer) 1)));
    MR_Integer hlds__make_hlds__add_pragma___SeqNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragmaInfo_10, (MR_Integer) 3)));

    {
      hlds__status__item_mercury_status_to_type_status_2_p_0(hlds__make_hlds__add_pragma__ItemMercuryStatus_9, &hlds__make_hlds__add_pragma__TypeStatus_16);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_reserve_tag_7_p_0(hlds__make_hlds__add_pragma__TypeCtor_15, hlds__make_hlds__add_pragma__TypeStatus_16, hlds__make_hlds__add_pragma__Context_13, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_17, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_18, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_19, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_20);
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__report_if_pragma_is_wrongly_in_interface_4_p_0(
  MR_Word hlds__make_hlds__add_pragma__ItemMercuryStatus_5,
  MR_Word hlds__make_hlds__add_pragma__ItemPragmaInfo_6,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_14,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_15)
{
  {
    MR_bool hlds__make_hlds__add_pragma__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pragma__ItemMercuryStatus_5)) == (MR_mktag((MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pragma__Pragma_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragmaInfo_6, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pragma__MaybeAttrs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragmaInfo_6, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragmaInfo_6, (MR_Integer) 2)));
    MR_Integer hlds__make_hlds__add_pragma___SeqNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragmaInfo_6, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__add_pragma__ItemExport_12;
    MR_Word hlds__make_hlds__add_pragma__Var_16;

    if (hlds__make_hlds__add_pragma__succeeded)
    {
      hlds__make_hlds__add_pragma__ItemExport_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemMercuryStatus_5, (MR_Integer) 0)));
      hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__ItemExport_12 == (MR_Integer) 2);
      if (hlds__make_hlds__add_pragma__succeeded)
      {
        {
          hlds__make_hlds__add_pragma__Var_16 = parse_tree__prog_item__pragma_allowed_in_interface_1_f_0(hlds__make_hlds__add_pragma__Pragma_8);
        }
        hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__Var_16 == (MR_Integer) 0);
        if (hlds__make_hlds__add_pragma__succeeded)
          hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__MaybeAttrs_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    if (hlds__make_hlds__add_pragma__succeeded)
    {
      MR_Word hlds__make_hlds__add_pragma__ContextPieces_13;

      {
        hlds__make_hlds__add_pragma__ContextPieces_13 = parse_tree__prog_item__pragma_context_pieces_1_f_0(hlds__make_hlds__add_pragma__Pragma_8);
      }
      {
        hlds__make_hlds__make_hlds_error__error_is_exported_4_p_0(hlds__make_hlds__add_pragma__Context_10, hlds__make_hlds__add_pragma__ContextPieces_13, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_14, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_15);
      }
    }
    else
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_15 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_14;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pass_3_pragmas_7_p_0(
  MR_Word hlds__make_hlds__add_pragma__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_3,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_4,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_5,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_6,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_7)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((hlds__make_hlds__add_pragma__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_7 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_6;
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_5 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_4;
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_3 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word hlds__make_hlds__add_pragma__SectionItem_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__make_hlds__add_pragma__SectionItems_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_28_28;
      MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_29_29;
      MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_30_30;

      {
        hlds__make_hlds__add_pragma__add_pass_3_pragma_7_p_0(hlds__make_hlds__add_pragma__SectionItem_17, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_2, &hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_28_28, hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_4, &hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_29_29, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_6, &hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_30_30);
      }
      /* direct tailcall eliminated */
      {
        MR_Word hlds__make_hlds__add_pragma__next_value_of_HeadVar__1_1 = hlds__make_hlds__add_pragma__SectionItems_18;
        MR_Word hlds__make_hlds__add_pragma__next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_28_28;
        MR_Word hlds__make_hlds__add_pragma__next_value_of_STATE_VARIABLE_QualInfo_0_4 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_29_29;
        MR_Word hlds__make_hlds__add_pragma__next_value_of_STATE_VARIABLE_Specs_0_6 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_30_30;

        hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_6 = hlds__make_hlds__add_pragma__next_value_of_STATE_VARIABLE_Specs_0_6;
        hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_4 = hlds__make_hlds__add_pragma__next_value_of_STATE_VARIABLE_QualInfo_0_4;
        hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_2 = hlds__make_hlds__add_pragma__next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
        hlds__make_hlds__add_pragma__HeadVar__1_1 = hlds__make_hlds__add_pragma__next_value_of_HeadVar__1_1;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pass_3_pragma_7_p_0(
  MR_Word hlds__make_hlds__add_pragma__SectionItem_8,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_38,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_39,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_40,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_41,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43)
{
  {
    MR_Word hlds__make_hlds__add_pragma__ItemMercuryStatus_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__SectionItem_8, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pragma__ItemPragmaInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__SectionItem_8, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__Pragma_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragmaInfo_13, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pragma__MaybeAttrs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragmaInfo_13, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragmaInfo_13, (MR_Integer) 2)));
    MR_Integer hlds__make_hlds__add_pragma__SeqNum_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragmaInfo_13, (MR_Integer) 3)));

    switch (MR_tag((MR_Word) hlds__make_hlds__add_pragma__Pragma_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word hlds__make_hlds__add_pragma__FPInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__Pragma_14, (MR_Integer) 0)));
          MR_Word hlds__make_hlds__add_pragma__PredStatus_19;
          MR_Word hlds__make_hlds__add_pragma__Var_87;

          {
            hlds__status__item_mercury_status_to_pred_status_2_p_0(hlds__make_hlds__add_pragma__ItemMercuryStatus_12, &hlds__make_hlds__add_pragma__PredStatus_19);
          }
          {
            hlds__make_hlds__add_pragma__Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_87, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__SeqNum_17));
          }
          {
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_pragma__FPInfo_18, hlds__make_hlds__add_pragma__PredStatus_19, hlds__make_hlds__add_pragma__Context_16, hlds__make_hlds__add_pragma__Var_87, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_38, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_39, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43);
          }
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_41 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_40;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_14, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__make_hlds__add_pragma__FEInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_14, (MR_Integer) 1)));

              {
                hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0(hlds__make_hlds__add_pragma__MaybeAttrs_15, hlds__make_hlds__add_pragma__FEInfo_20, hlds__make_hlds__add_pragma__Context_16, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_38, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_39, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43);
              }
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_41 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_40;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__make_hlds__add_pragma__TypeSpecInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_14, (MR_Integer) 1)));

              {
                hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_8_p_0(hlds__make_hlds__add_pragma__TypeSpecInfo_21, hlds__make_hlds__add_pragma__Context_16, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_38, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_39, hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_40, hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_41, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43);
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word hlds__make_hlds__add_pragma__TabledInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_14, (MR_Integer) 1)));
              MR_Word hlds__make_hlds__add_pragma__Globals_23;
              MR_Word hlds__make_hlds__add_pragma__TypeLayout_24;

              {
                hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_38, &hlds__make_hlds__add_pragma__Globals_23);
              }
              {
                libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__Globals_23, (MR_Integer) 236, &hlds__make_hlds__add_pragma__TypeLayout_24);
              }
              switch (hlds__make_hlds__add_pragma__TypeLayout_24) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word hlds__make_hlds__add_pragma__EvalMethod_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TabledInfo_22, (MR_Integer) 0)));
                    MR_Word hlds__make_hlds__add_pragma__Pieces_29;
                    MR_Word hlds__make_hlds__add_pragma__Msg_30;
                    MR_Word hlds__make_hlds__add_pragma__Spec_31;
                    MR_Word hlds__make_hlds__add_pragma__Var_59;
                    MR_Word hlds__make_hlds__add_pragma__Var_60;
                    MR_String hlds__make_hlds__add_pragma__Var_61;
                    MR_Word hlds__make_hlds__add_pragma__Var_71;
                    MR_Word hlds__make_hlds__add_pragma__Var_72;
                    MR_Word hlds__make_hlds__add_pragma__Var_76;
                    MR_Word hlds__make_hlds__add_pragma__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TabledInfo_22, (MR_Integer) 1)));
                    MR_Word hlds__make_hlds__add_pragma__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TabledInfo_22, (MR_Integer) 2)));
                    MR_Word hlds__make_hlds__add_pragma__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TabledInfo_22, (MR_Integer) 3)));

                    {
                      hlds__make_hlds__add_pragma__Var_61 = parse_tree__prog_out__eval_method_to_string_1_f_0(hlds__make_hlds__add_pragma__EvalMethod_25);
                    }
                    {
                      hlds__make_hlds__add_pragma__Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_60, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_61));
                    }
                    {
                      hlds__make_hlds__add_pragma__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_59, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_60));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[101])));
                    }
                    {
                      hlds__make_hlds__add_pragma__Pieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[176])));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_29, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_59));
                    }
                    {
                      hlds__make_hlds__add_pragma__Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_72, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_29));
                    }
                    {
                      hlds__make_hlds__add_pragma__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_71, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_72));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      hlds__make_hlds__add_pragma__Msg_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_30, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_16));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_30, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_71));
                    }
                    {
                      hlds__make_hlds__add_pragma__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_76, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_30));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      hlds__make_hlds__add_pragma__Spec_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_31, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_76));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_31));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42));
                    }
                    *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_39 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_38;
                    *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_41 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_40;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word hlds__make_hlds__add_pragma__PredStatus_90;

                    {
                      hlds__status__item_mercury_status_to_pred_status_2_p_0(hlds__make_hlds__add_pragma__ItemMercuryStatus_12, &hlds__make_hlds__add_pragma__PredStatus_90);
                    }
                    {
                      hlds__make_hlds__add_pragma__add_pragma_tabling__module_add_pragma_tabled_9_p_0(hlds__make_hlds__add_pragma__TabledInfo_22, hlds__make_hlds__add_pragma__Context_16, hlds__make_hlds__add_pragma__PredStatus_90, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_38, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_39, hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_40, hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_41, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43);
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word hlds__make_hlds__add_pragma__FTInfo_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_14, (MR_Integer) 1)));
              MR_Word hlds__make_hlds__add_pragma__PredStatus_93;

              {
                hlds__status__item_mercury_status_to_pred_status_2_p_0(hlds__make_hlds__add_pragma__ItemMercuryStatus_12, &hlds__make_hlds__add_pragma__PredStatus_93);
              }
              {
                hlds__make_hlds__add_pragma__add_pragma_fact_table_7_p_0(hlds__make_hlds__add_pragma__FTInfo_32, hlds__make_hlds__add_pragma__PredStatus_93, hlds__make_hlds__add_pragma__Context_16, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_38, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_39, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43);
              }
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_41 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_40;
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word hlds__make_hlds__add_pragma__OISUInfo_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_14, (MR_Integer) 1)));

              {
                hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0(hlds__make_hlds__add_pragma__OISUInfo_33, hlds__make_hlds__add_pragma__ItemMercuryStatus_12, hlds__make_hlds__add_pragma__Context_16, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_38, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_39, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43);
              }
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_41 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_40;
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Word hlds__make_hlds__add_pragma__TermInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_14, (MR_Integer) 1)));

              {
                hlds__make_hlds__add_pragma__add_pragma_termination_info_6_p_0(hlds__make_hlds__add_pragma__TermInfo_34, hlds__make_hlds__add_pragma__Context_16, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_38, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_39, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43);
              }
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_41 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_40;
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Word hlds__make_hlds__add_pragma__Term2Info_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_14, (MR_Integer) 1)));

              {
                hlds__make_hlds__add_pragma__add_pragma_termination2_info_6_p_0(hlds__make_hlds__add_pragma__Term2Info_35, hlds__make_hlds__add_pragma__Context_16, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_38, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_39, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43);
              }
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_41 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_40;
            }
            break;
          case (MR_Integer) 27:
            {
              MR_Word hlds__make_hlds__add_pragma__SharingInfo_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_14, (MR_Integer) 1)));

              {
                hlds__make_hlds__add_pragma__add_pragma_structure_sharing_6_p_0(hlds__make_hlds__add_pragma__SharingInfo_36, hlds__make_hlds__add_pragma__Context_16, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_38, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_39, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43);
              }
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_41 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_40;
            }
            break;
          case (MR_Integer) 28:
            {
              MR_Word hlds__make_hlds__add_pragma__ReuseInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_14, (MR_Integer) 1)));

              {
                hlds__make_hlds__add_pragma__add_pragma_structure_reuse_6_p_0(hlds__make_hlds__add_pragma__ReuseInfo_37, hlds__make_hlds__add_pragma__Context_16, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_38, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_39, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43);
              }
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_41 = hlds__make_hlds__add_pragma__STATE_VARIABLE_QualInfo_0_40;
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_structure_reuse_6_p_0(
  MR_Word hlds__make_hlds__add_pragma__ReuseInfo_7,
  MR_Word hlds__make_hlds__add_pragma__Context_8,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_40,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_41,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_42)
{
  {
    MR_bool hlds__make_hlds__add_pragma__succeeded;
    MR_Word hlds__make_hlds__add_pragma__PredNameModesPF_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ReuseInfo_7, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pragma__HeadVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ReuseInfo_7, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__Types_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ReuseInfo_7, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_pragma__MaybeReuseDomain_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ReuseInfo_7, (MR_Integer) 3)));

    if ((hlds__make_hlds__add_pragma__MaybeReuseDomain_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_40 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39;
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_42 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_41;
    }
    else
    {
      MR_Word hlds__make_hlds__add_pragma__ReuseDomain_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__MaybeReuseDomain_14, (MR_Integer) 0)));
      MR_Word hlds__make_hlds__add_pragma__SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameModesPF_11, (MR_Integer) 0)));
      MR_Word hlds__make_hlds__add_pragma__ModeList_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameModesPF_11, (MR_Integer) 1)));
      MR_Word hlds__make_hlds__add_pragma__PredOrFunc_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameModesPF_11, (MR_Integer) 2)));
      MR_Word hlds__make_hlds__add_pragma__Preds_19;
      MR_Integer hlds__make_hlds__add_pragma__Arity_20;
      MR_Word hlds__make_hlds__add_pragma__PredIds_21;

      {
        hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_pragma__Preds_19);
      }
      {
        mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__add_pragma__ModeList_17, &hlds__make_hlds__add_pragma__Arity_20);
      }
      {
        hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pragma__Preds_19, (MR_Integer) 0, hlds__make_hlds__add_pragma__PredOrFunc_18, hlds__make_hlds__add_pragma__SymName_16, hlds__make_hlds__add_pragma__Arity_20, &hlds__make_hlds__add_pragma__PredIds_21);
      }
      if ((hlds__make_hlds__add_pragma__PredIds_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_40 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39;
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_42 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_41;
      }
      else
      {
        MR_Word hlds__make_hlds__add_pragma__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_21, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__add_pragma__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_21, (MR_Integer) 0)));

        if ((hlds__make_hlds__add_pragma__Var_105 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_101_101;
          MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_102_102;
          MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_104_104;
          MR_Word hlds__make_hlds__add_pragma__PredTable0_23;
          MR_Word hlds__make_hlds__add_pragma__PredInfo0_24;
          MR_Word hlds__make_hlds__add_pragma__ProcTable0_25;
          MR_Word hlds__make_hlds__add_pragma__ProcList_26;
          MR_Box hlds__make_hlds__add_pragma__conv0_PredInfo0_24;
          MR_Integer hlds__make_hlds__add_pragma__ProcId_27;

          {
            hlds__hlds_module__module_info_get_preds_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_pragma__PredTable0_23);
          }
          hlds__make_hlds__add_pragma__TypeCtorInfo_101_101 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
          hlds__make_hlds__add_pragma__TypeCtorInfo_102_102 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
          {
            mercury__map__lookup_3_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_101_101, hlds__make_hlds__add_pragma__TypeCtorInfo_102_102, hlds__make_hlds__add_pragma__PredTable0_23, ((MR_Box) (hlds__make_hlds__add_pragma__Var_106)), &hlds__make_hlds__add_pragma__conv0_PredInfo0_24);
          }
          hlds__make_hlds__add_pragma__PredInfo0_24 = ((MR_Word) hlds__make_hlds__add_pragma__conv0_PredInfo0_24);
          {
            hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_pragma__PredInfo0_24, &hlds__make_hlds__add_pragma__ProcTable0_25);
          }
          hlds__make_hlds__add_pragma__TypeCtorInfo_104_104 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
          {
            mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, hlds__make_hlds__add_pragma__TypeCtorInfo_104_104, hlds__make_hlds__add_pragma__ProcTable0_25, &hlds__make_hlds__add_pragma__ProcList_26);
          }
          {
            hlds__make_hlds__add_pragma__succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(hlds__make_hlds__add_pragma__ProcList_26, hlds__make_hlds__add_pragma__ModeList_17, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_pragma__ProcId_27);
          }
          if (hlds__make_hlds__add_pragma__succeeded)
          {
            MR_Word hlds__make_hlds__add_pragma__ProcInfo0_28;
            MR_Word hlds__make_hlds__add_pragma__ProcInfo_29;
            MR_Word hlds__make_hlds__add_pragma__ProcTable_30;
            MR_Word hlds__make_hlds__add_pragma__PredInfo_31;
            MR_Word hlds__make_hlds__add_pragma__PredTable_32;
            MR_Box hlds__make_hlds__add_pragma__conv1_ProcInfo0_28;

            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_104_104, hlds__make_hlds__add_pragma__ProcTable0_25, hlds__make_hlds__add_pragma__ProcId_27, &hlds__make_hlds__add_pragma__conv1_ProcInfo0_28);
            }
            hlds__make_hlds__add_pragma__ProcInfo0_28 = ((MR_Word) hlds__make_hlds__add_pragma__conv1_ProcInfo0_28);
            {
              hlds__hlds_pred__proc_info_set_imported_structure_reuse_5_p_0(hlds__make_hlds__add_pragma__HeadVars_12, hlds__make_hlds__add_pragma__Types_13, hlds__make_hlds__add_pragma__ReuseDomain_15, hlds__make_hlds__add_pragma__ProcInfo0_28, &hlds__make_hlds__add_pragma__ProcInfo_29);
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_104_104, hlds__make_hlds__add_pragma__ProcId_27, ((MR_Box) (hlds__make_hlds__add_pragma__ProcInfo_29)), hlds__make_hlds__add_pragma__ProcTable0_25, &hlds__make_hlds__add_pragma__ProcTable_30);
            }
            {
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(hlds__make_hlds__add_pragma__ProcTable_30, hlds__make_hlds__add_pragma__PredInfo0_24, &hlds__make_hlds__add_pragma__PredInfo_31);
            }
            {
              mercury__map__det_update_4_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_101_101, hlds__make_hlds__add_pragma__TypeCtorInfo_102_102, ((MR_Box) (hlds__make_hlds__add_pragma__Var_106)), ((MR_Box) (hlds__make_hlds__add_pragma__PredInfo_31)), hlds__make_hlds__add_pragma__PredTable0_23, &hlds__make_hlds__add_pragma__PredTable_32);
            }
            {
              hlds__hlds_module__module_info_set_preds_3_p_0(hlds__make_hlds__add_pragma__PredTable_32, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_40);
            }
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_42 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_41;
          }
          else
          {
            MR_Word hlds__make_hlds__add_pragma__Pieces_33;
            MR_Word hlds__make_hlds__add_pragma__Msg_34;
            MR_Word hlds__make_hlds__add_pragma__Spec_35;
            MR_Word hlds__make_hlds__add_pragma__Var_74;
            MR_Word hlds__make_hlds__add_pragma__Var_77;
            MR_Word hlds__make_hlds__add_pragma__Var_80;
            MR_Word hlds__make_hlds__add_pragma__Var_81;
            MR_Word hlds__make_hlds__add_pragma__Var_82;
            MR_Word hlds__make_hlds__add_pragma__Var_89;
            MR_Word hlds__make_hlds__add_pragma__Var_90;
            MR_Word hlds__make_hlds__add_pragma__Var_94;

            {
              hlds__make_hlds__add_pragma__Var_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_82, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__PredOrFunc_18));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_82, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__SymName_16));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_82, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_20));
            }
            {
              hlds__make_hlds__add_pragma__Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_81, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_82));
            }
            {
              hlds__make_hlds__add_pragma__Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_80, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_81));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[51])));
            }
            {
              hlds__make_hlds__add_pragma__Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[193])));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_77, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_80));
            }
            {
              hlds__make_hlds__add_pragma__Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[197])));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_74, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_77));
            }
            {
              hlds__make_hlds__add_pragma__Pieces_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[176])));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_33, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_74));
            }
            {
              hlds__make_hlds__add_pragma__Var_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_90, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_33));
            }
            {
              hlds__make_hlds__add_pragma__Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_89, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_90));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_pragma__Msg_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_34, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_8));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_34, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_89));
            }
            {
              hlds__make_hlds__add_pragma__Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_94, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_34));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_pragma__Spec_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_35, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_94));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_42 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_35));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_41));
            }
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_40 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39;
          }
        }
        else
        {
          MR_Word hlds__make_hlds__add_pragma__Var_47;
          MR_Word hlds__make_hlds__add_pragma__Var_48;
          MR_Word hlds__make_hlds__add_pragma__Var_49;
          MR_Word hlds__make_hlds__add_pragma__Var_62;
          MR_Word hlds__make_hlds__add_pragma__Var_63;
          MR_Word hlds__make_hlds__add_pragma__Var_67;
          MR_Word hlds__make_hlds__add_pragma__Pieces_97;
          MR_Word hlds__make_hlds__add_pragma__Msg_98;
          MR_Word hlds__make_hlds__add_pragma__Spec_99;

          {
            hlds__make_hlds__add_pragma__Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_49, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__PredOrFunc_18));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_49, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__SymName_16));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_49, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_20));
          }
          {
            hlds__make_hlds__add_pragma__Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_48, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_49));
          }
          {
            hlds__make_hlds__add_pragma__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_47, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_48));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[154])));
          }
          {
            hlds__make_hlds__add_pragma__Pieces_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_97, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[194])));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_97, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_47));
          }
          {
            hlds__make_hlds__add_pragma__Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_63, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_97));
          }
          {
            hlds__make_hlds__add_pragma__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_62, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_63));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__add_pragma__Msg_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_98, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_8));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_98, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_62));
          }
          {
            hlds__make_hlds__add_pragma__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_67, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_98));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__add_pragma__Spec_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_99, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_99, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_67));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_42 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_99));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_41));
          }
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_40 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39;
        }
      }
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_structure_sharing_6_p_0(
  MR_Word hlds__make_hlds__add_pragma__SharingInfo_7,
  MR_Word hlds__make_hlds__add_pragma__Context_8,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_40,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_41,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_42)
{
  {
    MR_bool hlds__make_hlds__add_pragma__succeeded;
    MR_Word hlds__make_hlds__add_pragma__PredNameModesPF_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__SharingInfo_7, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pragma__HeadVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__SharingInfo_7, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__Types_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__SharingInfo_7, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_pragma__MaybeSharingDomain_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__SharingInfo_7, (MR_Integer) 3)));

    if ((hlds__make_hlds__add_pragma__MaybeSharingDomain_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_40 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39;
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_42 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_41;
    }
    else
    {
      MR_Word hlds__make_hlds__add_pragma__SharingDomain_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__MaybeSharingDomain_14, (MR_Integer) 0)));
      MR_Word hlds__make_hlds__add_pragma__SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameModesPF_11, (MR_Integer) 0)));
      MR_Word hlds__make_hlds__add_pragma__ModeList_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameModesPF_11, (MR_Integer) 1)));
      MR_Word hlds__make_hlds__add_pragma__PredOrFunc_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameModesPF_11, (MR_Integer) 2)));
      MR_Word hlds__make_hlds__add_pragma__Preds_19;
      MR_Integer hlds__make_hlds__add_pragma__Arity_20;
      MR_Word hlds__make_hlds__add_pragma__PredIds_21;

      {
        hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_pragma__Preds_19);
      }
      {
        mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__add_pragma__ModeList_17, &hlds__make_hlds__add_pragma__Arity_20);
      }
      {
        hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pragma__Preds_19, (MR_Integer) 0, hlds__make_hlds__add_pragma__PredOrFunc_18, hlds__make_hlds__add_pragma__SymName_16, hlds__make_hlds__add_pragma__Arity_20, &hlds__make_hlds__add_pragma__PredIds_21);
      }
      if ((hlds__make_hlds__add_pragma__PredIds_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_40 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39;
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_42 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_41;
      }
      else
      {
        MR_Word hlds__make_hlds__add_pragma__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_21, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__add_pragma__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_21, (MR_Integer) 0)));

        if ((hlds__make_hlds__add_pragma__Var_105 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_101_101;
          MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_102_102;
          MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_104_104;
          MR_Word hlds__make_hlds__add_pragma__PredTable0_23;
          MR_Word hlds__make_hlds__add_pragma__PredInfo0_24;
          MR_Word hlds__make_hlds__add_pragma__ProcTable0_25;
          MR_Word hlds__make_hlds__add_pragma__ProcList_26;
          MR_Box hlds__make_hlds__add_pragma__conv0_PredInfo0_24;
          MR_Integer hlds__make_hlds__add_pragma__ProcId_27;

          {
            hlds__hlds_module__module_info_get_preds_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_pragma__PredTable0_23);
          }
          hlds__make_hlds__add_pragma__TypeCtorInfo_101_101 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
          hlds__make_hlds__add_pragma__TypeCtorInfo_102_102 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
          {
            mercury__map__lookup_3_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_101_101, hlds__make_hlds__add_pragma__TypeCtorInfo_102_102, hlds__make_hlds__add_pragma__PredTable0_23, ((MR_Box) (hlds__make_hlds__add_pragma__Var_106)), &hlds__make_hlds__add_pragma__conv0_PredInfo0_24);
          }
          hlds__make_hlds__add_pragma__PredInfo0_24 = ((MR_Word) hlds__make_hlds__add_pragma__conv0_PredInfo0_24);
          {
            hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_pragma__PredInfo0_24, &hlds__make_hlds__add_pragma__ProcTable0_25);
          }
          hlds__make_hlds__add_pragma__TypeCtorInfo_104_104 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
          {
            mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, hlds__make_hlds__add_pragma__TypeCtorInfo_104_104, hlds__make_hlds__add_pragma__ProcTable0_25, &hlds__make_hlds__add_pragma__ProcList_26);
          }
          {
            hlds__make_hlds__add_pragma__succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(hlds__make_hlds__add_pragma__ProcList_26, hlds__make_hlds__add_pragma__ModeList_17, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_pragma__ProcId_27);
          }
          if (hlds__make_hlds__add_pragma__succeeded)
          {
            MR_Word hlds__make_hlds__add_pragma__ProcInfo0_28;
            MR_Word hlds__make_hlds__add_pragma__ProcInfo_29;
            MR_Word hlds__make_hlds__add_pragma__ProcTable_30;
            MR_Word hlds__make_hlds__add_pragma__PredInfo_31;
            MR_Word hlds__make_hlds__add_pragma__PredTable_32;
            MR_Box hlds__make_hlds__add_pragma__conv1_ProcInfo0_28;

            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_104_104, hlds__make_hlds__add_pragma__ProcTable0_25, hlds__make_hlds__add_pragma__ProcId_27, &hlds__make_hlds__add_pragma__conv1_ProcInfo0_28);
            }
            hlds__make_hlds__add_pragma__ProcInfo0_28 = ((MR_Word) hlds__make_hlds__add_pragma__conv1_ProcInfo0_28);
            {
              hlds__hlds_pred__proc_info_set_imported_structure_sharing_5_p_0(hlds__make_hlds__add_pragma__HeadVars_12, hlds__make_hlds__add_pragma__Types_13, hlds__make_hlds__add_pragma__SharingDomain_15, hlds__make_hlds__add_pragma__ProcInfo0_28, &hlds__make_hlds__add_pragma__ProcInfo_29);
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_104_104, hlds__make_hlds__add_pragma__ProcId_27, ((MR_Box) (hlds__make_hlds__add_pragma__ProcInfo_29)), hlds__make_hlds__add_pragma__ProcTable0_25, &hlds__make_hlds__add_pragma__ProcTable_30);
            }
            {
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(hlds__make_hlds__add_pragma__ProcTable_30, hlds__make_hlds__add_pragma__PredInfo0_24, &hlds__make_hlds__add_pragma__PredInfo_31);
            }
            {
              mercury__map__det_update_4_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_101_101, hlds__make_hlds__add_pragma__TypeCtorInfo_102_102, ((MR_Box) (hlds__make_hlds__add_pragma__Var_106)), ((MR_Box) (hlds__make_hlds__add_pragma__PredInfo_31)), hlds__make_hlds__add_pragma__PredTable0_23, &hlds__make_hlds__add_pragma__PredTable_32);
            }
            {
              hlds__hlds_module__module_info_set_preds_3_p_0(hlds__make_hlds__add_pragma__PredTable_32, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_40);
            }
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_42 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_41;
          }
          else
          {
            MR_Word hlds__make_hlds__add_pragma__Pieces_33;
            MR_Word hlds__make_hlds__add_pragma__Msg_34;
            MR_Word hlds__make_hlds__add_pragma__Spec_35;
            MR_Word hlds__make_hlds__add_pragma__Var_74;
            MR_Word hlds__make_hlds__add_pragma__Var_77;
            MR_Word hlds__make_hlds__add_pragma__Var_80;
            MR_Word hlds__make_hlds__add_pragma__Var_81;
            MR_Word hlds__make_hlds__add_pragma__Var_82;
            MR_Word hlds__make_hlds__add_pragma__Var_89;
            MR_Word hlds__make_hlds__add_pragma__Var_90;
            MR_Word hlds__make_hlds__add_pragma__Var_94;

            {
              hlds__make_hlds__add_pragma__Var_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_82, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__PredOrFunc_18));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_82, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__SymName_16));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_82, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_20));
            }
            {
              hlds__make_hlds__add_pragma__Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_81, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_82));
            }
            {
              hlds__make_hlds__add_pragma__Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_80, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_81));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[51])));
            }
            {
              hlds__make_hlds__add_pragma__Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[193])));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_77, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_80));
            }
            {
              hlds__make_hlds__add_pragma__Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[196])));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_74, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_77));
            }
            {
              hlds__make_hlds__add_pragma__Pieces_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[176])));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_33, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_74));
            }
            {
              hlds__make_hlds__add_pragma__Var_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_90, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_33));
            }
            {
              hlds__make_hlds__add_pragma__Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_89, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_90));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_pragma__Msg_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_34, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_8));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_34, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_89));
            }
            {
              hlds__make_hlds__add_pragma__Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_94, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_34));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_pragma__Spec_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_35, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_94));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_42 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_35));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_41));
            }
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_40 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39;
          }
        }
        else
        {
          MR_Word hlds__make_hlds__add_pragma__Var_47;
          MR_Word hlds__make_hlds__add_pragma__Var_48;
          MR_Word hlds__make_hlds__add_pragma__Var_49;
          MR_Word hlds__make_hlds__add_pragma__Var_62;
          MR_Word hlds__make_hlds__add_pragma__Var_63;
          MR_Word hlds__make_hlds__add_pragma__Var_67;
          MR_Word hlds__make_hlds__add_pragma__Pieces_97;
          MR_Word hlds__make_hlds__add_pragma__Msg_98;
          MR_Word hlds__make_hlds__add_pragma__Spec_99;

          {
            hlds__make_hlds__add_pragma__Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_49, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__PredOrFunc_18));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_49, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__SymName_16));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_49, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_20));
          }
          {
            hlds__make_hlds__add_pragma__Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_48, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_49));
          }
          {
            hlds__make_hlds__add_pragma__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_47, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_48));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[151])));
          }
          {
            hlds__make_hlds__add_pragma__Pieces_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_97, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[194])));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_97, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_47));
          }
          {
            hlds__make_hlds__add_pragma__Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_63, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_97));
          }
          {
            hlds__make_hlds__add_pragma__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_62, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_63));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__add_pragma__Msg_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_98, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_8));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_98, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_62));
          }
          {
            hlds__make_hlds__add_pragma__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_67, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_98));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__add_pragma__Spec_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_99, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_99, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_67));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_42 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_99));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_41));
          }
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_40 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_39;
        }
      }
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_termination2_info_6_p_0(
  MR_Word hlds__make_hlds__add_pragma__Term2Info_7,
  MR_Word hlds__make_hlds__add_pragma__Context_8,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_41,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43)
{
  {
    MR_bool hlds__make_hlds__add_pragma__succeeded;
    MR_Word hlds__make_hlds__add_pragma__PredModesPF_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Term2Info_7, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pragma__MaybePragmaSuccessArgSizeInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Term2Info_7, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__MaybePragmaFailureArgSizeInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Term2Info_7, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_pragma__MaybePragmaTerminationInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Term2Info_7, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__add_pragma__SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredModesPF_11, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pragma__ModeList_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredModesPF_11, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__PredOrFunc_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredModesPF_11, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_pragma__Preds_18;
    MR_Integer hlds__make_hlds__add_pragma__Arity_19;
    MR_Word hlds__make_hlds__add_pragma__PredIds_20;

    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40, &hlds__make_hlds__add_pragma__Preds_18);
    }
    {
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__add_pragma__ModeList_16, &hlds__make_hlds__add_pragma__Arity_19);
    }
    {
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pragma__Preds_18, (MR_Integer) 0, hlds__make_hlds__add_pragma__PredOrFunc_17, hlds__make_hlds__add_pragma__SymName_15, hlds__make_hlds__add_pragma__Arity_19, &hlds__make_hlds__add_pragma__PredIds_20);
    }
    if ((hlds__make_hlds__add_pragma__PredIds_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_41 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40;
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42;
    }
    else
    {
      MR_Word hlds__make_hlds__add_pragma__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_20, (MR_Integer) 1)));
      MR_Word hlds__make_hlds__add_pragma__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_20, (MR_Integer) 0)));

      if ((hlds__make_hlds__add_pragma__Var_110 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_106_106;
        MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_107_107;
        MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_109_109;
        MR_Word hlds__make_hlds__add_pragma__PredTable0_22;
        MR_Word hlds__make_hlds__add_pragma__PredInfo0_23;
        MR_Word hlds__make_hlds__add_pragma__ProcTable0_24;
        MR_Word hlds__make_hlds__add_pragma__ProcList_25;
        MR_Box hlds__make_hlds__add_pragma__conv0_PredInfo0_23;
        MR_Integer hlds__make_hlds__add_pragma__ProcId_26;

        {
          hlds__hlds_module__module_info_get_preds_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40, &hlds__make_hlds__add_pragma__PredTable0_22);
        }
        hlds__make_hlds__add_pragma__TypeCtorInfo_106_106 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
        hlds__make_hlds__add_pragma__TypeCtorInfo_107_107 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
        {
          mercury__map__lookup_3_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_106_106, hlds__make_hlds__add_pragma__TypeCtorInfo_107_107, hlds__make_hlds__add_pragma__PredTable0_22, ((MR_Box) (hlds__make_hlds__add_pragma__Var_111)), &hlds__make_hlds__add_pragma__conv0_PredInfo0_23);
        }
        hlds__make_hlds__add_pragma__PredInfo0_23 = ((MR_Word) hlds__make_hlds__add_pragma__conv0_PredInfo0_23);
        {
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_pragma__PredInfo0_23, &hlds__make_hlds__add_pragma__ProcTable0_24);
        }
        hlds__make_hlds__add_pragma__TypeCtorInfo_109_109 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
        {
          mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, hlds__make_hlds__add_pragma__TypeCtorInfo_109_109, hlds__make_hlds__add_pragma__ProcTable0_24, &hlds__make_hlds__add_pragma__ProcList_25);
        }
        {
          hlds__make_hlds__add_pragma__succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(hlds__make_hlds__add_pragma__ProcList_25, hlds__make_hlds__add_pragma__ModeList_16, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40, &hlds__make_hlds__add_pragma__ProcId_26);
        }
        if (hlds__make_hlds__add_pragma__succeeded)
        {
          MR_Word hlds__make_hlds__add_pragma__ProcInfo0_27;
          MR_Word hlds__make_hlds__add_pragma__MaybeTerminationInfo_28;
          MR_Word hlds__make_hlds__add_pragma__ProcInfo_30;
          MR_Word hlds__make_hlds__add_pragma__ProcTable_31;
          MR_Word hlds__make_hlds__add_pragma__PredInfo_32;
          MR_Word hlds__make_hlds__add_pragma__PredTable_33;
          MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_TermInfo_72_72;
          MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_TermInfo_73_73;
          MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_TermInfo_74_74;
          MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_TermInfo_75_75;
          MR_Box hlds__make_hlds__add_pragma__conv1_ProcInfo0_27;

          {
            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_109_109, hlds__make_hlds__add_pragma__ProcTable0_24, hlds__make_hlds__add_pragma__ProcId_26, &hlds__make_hlds__add_pragma__conv1_ProcInfo0_27);
          }
          hlds__make_hlds__add_pragma__ProcInfo0_27 = ((MR_Word) hlds__make_hlds__add_pragma__conv1_ProcInfo0_27);
          {
            transform_hlds__term_constr_util__add_context_to_constr_termination_info_3_p_0(hlds__make_hlds__add_pragma__MaybePragmaTerminationInfo_14, hlds__make_hlds__add_pragma__Context_8, &hlds__make_hlds__add_pragma__MaybeTerminationInfo_28);
          }
          {
            hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(hlds__make_hlds__add_pragma__ProcInfo0_27, &hlds__make_hlds__add_pragma__STATE_VARIABLE_TermInfo_72_72);
          }
          {
            transform_hlds__term_constr_main_types__term2_info_set_import_success_3_p_0(hlds__make_hlds__add_pragma__MaybePragmaSuccessArgSizeInfo_12, hlds__make_hlds__add_pragma__STATE_VARIABLE_TermInfo_72_72, &hlds__make_hlds__add_pragma__STATE_VARIABLE_TermInfo_73_73);
          }
          {
            transform_hlds__term_constr_main_types__term2_info_set_import_failure_3_p_0(hlds__make_hlds__add_pragma__MaybePragmaFailureArgSizeInfo_13, hlds__make_hlds__add_pragma__STATE_VARIABLE_TermInfo_73_73, &hlds__make_hlds__add_pragma__STATE_VARIABLE_TermInfo_74_74);
          }
          {
            transform_hlds__term_constr_main_types__term2_info_set_term_status_3_p_0(hlds__make_hlds__add_pragma__MaybeTerminationInfo_28, hlds__make_hlds__add_pragma__STATE_VARIABLE_TermInfo_74_74, &hlds__make_hlds__add_pragma__STATE_VARIABLE_TermInfo_75_75);
          }
          {
            hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_TermInfo_75_75, hlds__make_hlds__add_pragma__ProcInfo0_27, &hlds__make_hlds__add_pragma__ProcInfo_30);
          }
          {
            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_109_109, hlds__make_hlds__add_pragma__ProcId_26, ((MR_Box) (hlds__make_hlds__add_pragma__ProcInfo_30)), hlds__make_hlds__add_pragma__ProcTable0_24, &hlds__make_hlds__add_pragma__ProcTable_31);
          }
          {
            hlds__hlds_pred__pred_info_set_proc_table_3_p_0(hlds__make_hlds__add_pragma__ProcTable_31, hlds__make_hlds__add_pragma__PredInfo0_23, &hlds__make_hlds__add_pragma__PredInfo_32);
          }
          {
            mercury__map__det_update_4_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_106_106, hlds__make_hlds__add_pragma__TypeCtorInfo_107_107, ((MR_Box) (hlds__make_hlds__add_pragma__Var_111)), ((MR_Box) (hlds__make_hlds__add_pragma__PredInfo_32)), hlds__make_hlds__add_pragma__PredTable0_22, &hlds__make_hlds__add_pragma__PredTable_33);
          }
          {
            hlds__hlds_module__module_info_set_preds_3_p_0(hlds__make_hlds__add_pragma__PredTable_33, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_41);
          }
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42;
        }
        else
        {
          MR_Word hlds__make_hlds__add_pragma__Pieces_34;
          MR_Word hlds__make_hlds__add_pragma__Msg_35;
          MR_Word hlds__make_hlds__add_pragma__Spec_36;
          MR_Word hlds__make_hlds__add_pragma__Var_79;
          MR_Word hlds__make_hlds__add_pragma__Var_82;
          MR_Word hlds__make_hlds__add_pragma__Var_85;
          MR_Word hlds__make_hlds__add_pragma__Var_86;
          MR_Word hlds__make_hlds__add_pragma__Var_87;
          MR_Word hlds__make_hlds__add_pragma__Var_94;
          MR_Word hlds__make_hlds__add_pragma__Var_95;
          MR_Word hlds__make_hlds__add_pragma__Var_99;

          {
            hlds__make_hlds__add_pragma__Var_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_87, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__PredOrFunc_17));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_87, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__SymName_15));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_87, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_19));
          }
          {
            hlds__make_hlds__add_pragma__Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_86, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_87));
          }
          {
            hlds__make_hlds__add_pragma__Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_85, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_86));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[51])));
          }
          {
            hlds__make_hlds__add_pragma__Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[193])));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_82, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_85));
          }
          {
            hlds__make_hlds__add_pragma__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[195])));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_79, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_82));
          }
          {
            hlds__make_hlds__add_pragma__Pieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[176])));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_34, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_79));
          }
          {
            hlds__make_hlds__add_pragma__Var_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_95, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_34));
          }
          {
            hlds__make_hlds__add_pragma__Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_94, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_95));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__add_pragma__Msg_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_35, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_8));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_35, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_94));
          }
          {
            hlds__make_hlds__add_pragma__Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_99, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_35));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__add_pragma__Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_36, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_99));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_36));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42));
          }
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_41 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40;
        }
      }
      else
      {
        MR_Word hlds__make_hlds__add_pragma__Var_48;
        MR_Word hlds__make_hlds__add_pragma__Var_49;
        MR_Word hlds__make_hlds__add_pragma__Var_50;
        MR_Word hlds__make_hlds__add_pragma__Var_63;
        MR_Word hlds__make_hlds__add_pragma__Var_64;
        MR_Word hlds__make_hlds__add_pragma__Var_68;
        MR_Word hlds__make_hlds__add_pragma__Pieces_102;
        MR_Word hlds__make_hlds__add_pragma__Msg_103;
        MR_Word hlds__make_hlds__add_pragma__Spec_104;

        {
          hlds__make_hlds__add_pragma__Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_50, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__PredOrFunc_17));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_50, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__SymName_15));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_50, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_19));
        }
        {
          hlds__make_hlds__add_pragma__Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_49, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_50));
        }
        {
          hlds__make_hlds__add_pragma__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_48, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_49));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[148])));
        }
        {
          hlds__make_hlds__add_pragma__Pieces_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_102, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[194])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_102, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_48));
        }
        {
          hlds__make_hlds__add_pragma__Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_64, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_102));
        }
        {
          hlds__make_hlds__add_pragma__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_63, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_64));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__Msg_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_103, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_8));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_103, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_63));
        }
        {
          hlds__make_hlds__add_pragma__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_68, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_103));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__Spec_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_104, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_104, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_68));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_104));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42));
        }
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_41 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40;
      }
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_termination_info_6_p_0(
  MR_Word hlds__make_hlds__add_pragma__TermInfo_7,
  MR_Word hlds__make_hlds__add_pragma__Context_8,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_41,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43)
{
  {
    MR_bool hlds__make_hlds__add_pragma__succeeded;
    MR_Word hlds__make_hlds__add_pragma__PredModesPF_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TermInfo_7, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pragma__MaybePragmaArgSizeInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TermInfo_7, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__MaybePragmaTerminationInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TermInfo_7, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_pragma__SymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredModesPF_11, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pragma__ModeList_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredModesPF_11, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__PredOrFunc_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredModesPF_11, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_pragma__Preds_17;
    MR_Integer hlds__make_hlds__add_pragma__Arity_18;
    MR_Word hlds__make_hlds__add_pragma__PredIds_19;

    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40, &hlds__make_hlds__add_pragma__Preds_17);
    }
    {
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__add_pragma__ModeList_15, &hlds__make_hlds__add_pragma__Arity_18);
    }
    {
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pragma__Preds_17, (MR_Integer) 0, hlds__make_hlds__add_pragma__PredOrFunc_16, hlds__make_hlds__add_pragma__SymName_14, hlds__make_hlds__add_pragma__Arity_18, &hlds__make_hlds__add_pragma__PredIds_19);
    }
    if ((hlds__make_hlds__add_pragma__PredIds_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_41 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40;
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42;
    }
    else
    {
      MR_Word hlds__make_hlds__add_pragma__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_19, (MR_Integer) 1)));
      MR_Word hlds__make_hlds__add_pragma__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_19, (MR_Integer) 0)));

      if ((hlds__make_hlds__add_pragma__Var_107 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_103_103;
        MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_104_104;
        MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_106_106;
        MR_Word hlds__make_hlds__add_pragma__PredTable0_21;
        MR_Word hlds__make_hlds__add_pragma__PredInfo0_22;
        MR_Word hlds__make_hlds__add_pragma__ProcTable0_23;
        MR_Word hlds__make_hlds__add_pragma__ProcList_24;
        MR_Box hlds__make_hlds__add_pragma__conv0_PredInfo0_22;
        MR_Integer hlds__make_hlds__add_pragma__ProcId_25;

        {
          hlds__hlds_module__module_info_get_preds_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40, &hlds__make_hlds__add_pragma__PredTable0_21);
        }
        hlds__make_hlds__add_pragma__TypeCtorInfo_103_103 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
        hlds__make_hlds__add_pragma__TypeCtorInfo_104_104 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
        {
          mercury__map__lookup_3_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_103_103, hlds__make_hlds__add_pragma__TypeCtorInfo_104_104, hlds__make_hlds__add_pragma__PredTable0_21, ((MR_Box) (hlds__make_hlds__add_pragma__Var_108)), &hlds__make_hlds__add_pragma__conv0_PredInfo0_22);
        }
        hlds__make_hlds__add_pragma__PredInfo0_22 = ((MR_Word) hlds__make_hlds__add_pragma__conv0_PredInfo0_22);
        {
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_pragma__PredInfo0_22, &hlds__make_hlds__add_pragma__ProcTable0_23);
        }
        hlds__make_hlds__add_pragma__TypeCtorInfo_106_106 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
        {
          mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, hlds__make_hlds__add_pragma__TypeCtorInfo_106_106, hlds__make_hlds__add_pragma__ProcTable0_23, &hlds__make_hlds__add_pragma__ProcList_24);
        }
        {
          hlds__make_hlds__add_pragma__succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(hlds__make_hlds__add_pragma__ProcList_24, hlds__make_hlds__add_pragma__ModeList_15, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40, &hlds__make_hlds__add_pragma__ProcId_25);
        }
        if (hlds__make_hlds__add_pragma__succeeded)
        {
          MR_Word hlds__make_hlds__add_pragma__MaybeArgSizeInfo_26;
          MR_Word hlds__make_hlds__add_pragma__MaybeTerminationInfo_27;
          MR_Word hlds__make_hlds__add_pragma__ProcInfo0_28;
          MR_Word hlds__make_hlds__add_pragma__ProcInfo1_29;
          MR_Word hlds__make_hlds__add_pragma__ProcInfo_30;
          MR_Word hlds__make_hlds__add_pragma__ProcTable_31;
          MR_Word hlds__make_hlds__add_pragma__PredInfo_32;
          MR_Word hlds__make_hlds__add_pragma__PredTable_33;
          MR_Box hlds__make_hlds__add_pragma__conv1_ProcInfo0_28;

          {
            transform_hlds__term_util__add_context_to_arg_size_info_3_p_0(hlds__make_hlds__add_pragma__MaybePragmaArgSizeInfo_12, hlds__make_hlds__add_pragma__Context_8, &hlds__make_hlds__add_pragma__MaybeArgSizeInfo_26);
          }
          {
            transform_hlds__term_util__add_context_to_termination_info_3_p_0(hlds__make_hlds__add_pragma__MaybePragmaTerminationInfo_13, hlds__make_hlds__add_pragma__Context_8, &hlds__make_hlds__add_pragma__MaybeTerminationInfo_27);
          }
          {
            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_106_106, hlds__make_hlds__add_pragma__ProcTable0_23, hlds__make_hlds__add_pragma__ProcId_25, &hlds__make_hlds__add_pragma__conv1_ProcInfo0_28);
          }
          hlds__make_hlds__add_pragma__ProcInfo0_28 = ((MR_Word) hlds__make_hlds__add_pragma__conv1_ProcInfo0_28);
          {
            hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(hlds__make_hlds__add_pragma__MaybeArgSizeInfo_26, hlds__make_hlds__add_pragma__ProcInfo0_28, &hlds__make_hlds__add_pragma__ProcInfo1_29);
          }
          {
            hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(hlds__make_hlds__add_pragma__MaybeTerminationInfo_27, hlds__make_hlds__add_pragma__ProcInfo1_29, &hlds__make_hlds__add_pragma__ProcInfo_30);
          }
          {
            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_106_106, hlds__make_hlds__add_pragma__ProcId_25, ((MR_Box) (hlds__make_hlds__add_pragma__ProcInfo_30)), hlds__make_hlds__add_pragma__ProcTable0_23, &hlds__make_hlds__add_pragma__ProcTable_31);
          }
          {
            hlds__hlds_pred__pred_info_set_proc_table_3_p_0(hlds__make_hlds__add_pragma__ProcTable_31, hlds__make_hlds__add_pragma__PredInfo0_22, &hlds__make_hlds__add_pragma__PredInfo_32);
          }
          {
            mercury__map__det_update_4_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_103_103, hlds__make_hlds__add_pragma__TypeCtorInfo_104_104, ((MR_Box) (hlds__make_hlds__add_pragma__Var_108)), ((MR_Box) (hlds__make_hlds__add_pragma__PredInfo_32)), hlds__make_hlds__add_pragma__PredTable0_21, &hlds__make_hlds__add_pragma__PredTable_33);
          }
          {
            hlds__hlds_module__module_info_set_preds_3_p_0(hlds__make_hlds__add_pragma__PredTable_33, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_41);
          }
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42;
        }
        else
        {
          MR_Word hlds__make_hlds__add_pragma__Pieces_34;
          MR_Word hlds__make_hlds__add_pragma__Msg_35;
          MR_Word hlds__make_hlds__add_pragma__Spec_36;
          MR_Word hlds__make_hlds__add_pragma__Var_76;
          MR_Word hlds__make_hlds__add_pragma__Var_79;
          MR_Word hlds__make_hlds__add_pragma__Var_82;
          MR_Word hlds__make_hlds__add_pragma__Var_83;
          MR_Word hlds__make_hlds__add_pragma__Var_84;
          MR_Word hlds__make_hlds__add_pragma__Var_91;
          MR_Word hlds__make_hlds__add_pragma__Var_92;
          MR_Word hlds__make_hlds__add_pragma__Var_96;

          {
            hlds__hlds_module__module_info_incr_errors_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_41);
          }
          {
            hlds__make_hlds__add_pragma__Var_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_84, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__PredOrFunc_16));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_84, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__SymName_14));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_84, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_18));
          }
          {
            hlds__make_hlds__add_pragma__Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_83, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_84));
          }
          {
            hlds__make_hlds__add_pragma__Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_82, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_83));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[51])));
          }
          {
            hlds__make_hlds__add_pragma__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[193])));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_79, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_82));
          }
          {
            hlds__make_hlds__add_pragma__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[192])));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_76, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_79));
          }
          {
            hlds__make_hlds__add_pragma__Pieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[176])));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_34, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_76));
          }
          {
            hlds__make_hlds__add_pragma__Var_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_92, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_34));
          }
          {
            hlds__make_hlds__add_pragma__Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_91, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_92));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__add_pragma__Msg_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_35, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_8));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_35, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_91));
          }
          {
            hlds__make_hlds__add_pragma__Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_96, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_35));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__add_pragma__Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_36, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_96));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_36));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42));
          }
        }
      }
      else
      {
        MR_Word hlds__make_hlds__add_pragma__Var_48;
        MR_Word hlds__make_hlds__add_pragma__Var_49;
        MR_Word hlds__make_hlds__add_pragma__Var_50;
        MR_Word hlds__make_hlds__add_pragma__Var_63;
        MR_Word hlds__make_hlds__add_pragma__Var_64;
        MR_Word hlds__make_hlds__add_pragma__Var_68;
        MR_Word hlds__make_hlds__add_pragma__Pieces_99;
        MR_Word hlds__make_hlds__add_pragma__Msg_100;
        MR_Word hlds__make_hlds__add_pragma__Spec_101;

        {
          hlds__make_hlds__add_pragma__Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_50, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__PredOrFunc_16));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_50, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__SymName_14));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_50, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_18));
        }
        {
          hlds__make_hlds__add_pragma__Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_49, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_50));
        }
        {
          hlds__make_hlds__add_pragma__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_48, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_49));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[145])));
        }
        {
          hlds__make_hlds__add_pragma__Pieces_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_99, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[194])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_99, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_48));
        }
        {
          hlds__make_hlds__add_pragma__Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_64, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_99));
        }
        {
          hlds__make_hlds__add_pragma__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_63, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_64));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__Msg_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_100, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_8));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_100, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_63));
        }
        {
          hlds__make_hlds__add_pragma__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_68, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_100));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__Spec_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_101, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_101, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_68));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_43 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_101));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_42));
        }
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_41 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_40;
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_3(
  MR_Box hlds__make_hlds__add_pragma__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_2,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_3,
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_4,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_5,
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_6)
{
  {
    MR_Box hlds__make_hlds__add_pragma__closure = hlds__make_hlds__add_pragma__closure_arg;
    MR_Word hlds__make_hlds__add_pragma__conv12_PredId_16;
    MR_Integer hlds__make_hlds__add_pragma__conv11_STATE_VARIABLE_SeqNum_42;
    MR_Word hlds__make_hlds__add_pragma__conv10_STATE_VARIABLE_Specs_44;

    {
      hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 5))), ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 6))), ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_1), &hlds__make_hlds__add_pragma__conv12_PredId_16, ((MR_Integer) hlds__make_hlds__add_pragma__wrapper_arg_3), &hlds__make_hlds__add_pragma__conv11_STATE_VARIABLE_SeqNum_42, ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_5), &hlds__make_hlds__add_pragma__conv10_STATE_VARIABLE_Specs_44);
    }
    *hlds__make_hlds__add_pragma__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__conv12_PredId_16));
    *hlds__make_hlds__add_pragma__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__add_pragma__conv11_STATE_VARIABLE_SeqNum_42));
    *hlds__make_hlds__add_pragma__wrapper_arg_6 = ((MR_Box) (hlds__make_hlds__add_pragma__conv10_STATE_VARIABLE_Specs_44));
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_2(
  MR_Box hlds__make_hlds__add_pragma__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_2,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_3,
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_4,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_5,
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_6)
{
  {
    MR_Box hlds__make_hlds__add_pragma__closure = hlds__make_hlds__add_pragma__closure_arg;
    MR_Word hlds__make_hlds__add_pragma__conv7_PredId_16;
    MR_Integer hlds__make_hlds__add_pragma__conv6_STATE_VARIABLE_SeqNum_42;
    MR_Word hlds__make_hlds__add_pragma__conv5_STATE_VARIABLE_Specs_44;

    {
      hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 5))), ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 6))), ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_1), &hlds__make_hlds__add_pragma__conv7_PredId_16, ((MR_Integer) hlds__make_hlds__add_pragma__wrapper_arg_3), &hlds__make_hlds__add_pragma__conv6_STATE_VARIABLE_SeqNum_42, ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_5), &hlds__make_hlds__add_pragma__conv5_STATE_VARIABLE_Specs_44);
    }
    *hlds__make_hlds__add_pragma__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__conv7_PredId_16));
    *hlds__make_hlds__add_pragma__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__add_pragma__conv6_STATE_VARIABLE_SeqNum_42));
    *hlds__make_hlds__add_pragma__wrapper_arg_6 = ((MR_Box) (hlds__make_hlds__add_pragma__conv5_STATE_VARIABLE_Specs_44));
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_2,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_3,
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_4,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_5,
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_6)
{
  {
    MR_Box hlds__make_hlds__add_pragma__closure = hlds__make_hlds__add_pragma__closure_arg;
    MR_Word hlds__make_hlds__add_pragma__conv2_PredId_16;
    MR_Integer hlds__make_hlds__add_pragma__conv1_STATE_VARIABLE_SeqNum_42;
    MR_Word hlds__make_hlds__add_pragma__conv0_STATE_VARIABLE_Specs_44;

    {
      hlds__make_hlds__add_pragma__find_unique_pred_for_oisu_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 5))), ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 6))), ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_1), &hlds__make_hlds__add_pragma__conv2_PredId_16, ((MR_Integer) hlds__make_hlds__add_pragma__wrapper_arg_3), &hlds__make_hlds__add_pragma__conv1_STATE_VARIABLE_SeqNum_42, ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_5), &hlds__make_hlds__add_pragma__conv0_STATE_VARIABLE_Specs_44);
    }
    *hlds__make_hlds__add_pragma__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__conv2_PredId_16));
    *hlds__make_hlds__add_pragma__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__add_pragma__conv1_STATE_VARIABLE_SeqNum_42));
    *hlds__make_hlds__add_pragma__wrapper_arg_6 = ((MR_Box) (hlds__make_hlds__add_pragma__conv0_STATE_VARIABLE_Specs_44));
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0(
  MR_Word hlds__make_hlds__add_pragma__OISUInfo_8,
  MR_Word hlds__make_hlds__add_pragma__ItemMercuryStatus_9,
  MR_Word hlds__make_hlds__add_pragma__Context_10,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_45,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_46,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_47,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_48)
{
  {
    MR_bool hlds__make_hlds__add_pragma__succeeded;
    MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_131_131;
    MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_132_132;
    MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_133_133;
    MR_Word hlds__make_hlds__add_pragma__TypeInfo_134_134;
    MR_Word hlds__make_hlds__add_pragma__TypeCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__OISUInfo_8, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pragma__Creators_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__OISUInfo_8, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__Mutators_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__OISUInfo_8, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_pragma__Destructors_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__OISUInfo_8, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__add_pragma__CreatorPredIds_29;
    MR_Word hlds__make_hlds__add_pragma__MutatorPredIds_31;
    MR_Word hlds__make_hlds__add_pragma__DestructorPredIds_33;
    MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_49_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_85_85;
    MR_Word hlds__make_hlds__add_pragma__Var_86;
    MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_88_88;
    MR_Word hlds__make_hlds__add_pragma__Var_90;
    MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_92_92;
    MR_Word hlds__make_hlds__add_pragma__Var_94;
    MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_96_96;
    MR_Integer hlds__make_hlds__add_pragma__Var_30;
    MR_Box hlds__make_hlds__add_pragma__conv4_Var_30;
    MR_Box hlds__make_hlds__add_pragma__conv3_STATE_VARIABLE_OISUSpecs_88_88;
    MR_Integer hlds__make_hlds__add_pragma__Var_32;
    MR_Box hlds__make_hlds__add_pragma__conv9_Var_32;
    MR_Box hlds__make_hlds__add_pragma__conv8_STATE_VARIABLE_OISUSpecs_92_92;
    MR_Integer hlds__make_hlds__add_pragma__Var_34;
    MR_Box hlds__make_hlds__add_pragma__conv14_Var_34;
    MR_Box hlds__make_hlds__add_pragma__conv13_STATE_VARIABLE_OISUSpecs_96_96;

    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__ItemMercuryStatus_9)) == (MR_mktag((MR_Integer) 1))))
      hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_85_85 = hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_49_49;
    else
    {
      MR_Word hlds__make_hlds__add_pragma__ItemExport_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemMercuryStatus_9, (MR_Integer) 0)));
      MR_Word hlds__make_hlds__add_pragma__TypeTable_23;
      MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_65_65;
      MR_Word hlds__make_hlds__add_pragma__TypeDefn_24;

      switch (hlds__make_hlds__add_pragma__ItemExport_19) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_65_65 = hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_49_49;
          break;
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            MR_Word hlds__make_hlds__add_pragma__StatusMsg_21;
            MR_Word hlds__make_hlds__add_pragma__StatusSpec_22;
            MR_Word hlds__make_hlds__add_pragma__Var_63;

            {
              hlds__make_hlds__add_pragma__StatusMsg_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__StatusMsg_21, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_10));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__StatusMsg_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[187])));
            }
            {
              hlds__make_hlds__add_pragma__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_63, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__StatusMsg_21));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_pragma__StatusSpec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__StatusSpec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__StatusSpec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__StatusSpec_22, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_63));
            }
            {
              hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__StatusSpec_22));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_65_65, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_49_49));
            }
          }
          break;
      }
      {
        hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_45, &hlds__make_hlds__add_pragma__TypeTable_23);
      }
      {
        hlds__make_hlds__add_pragma__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(hlds__make_hlds__add_pragma__TypeTable_23, hlds__make_hlds__add_pragma__TypeCtor_13, &hlds__make_hlds__add_pragma__TypeDefn_24);
      }
      if (hlds__make_hlds__add_pragma__succeeded)
      {
        MR_Word hlds__make_hlds__add_pragma__TypeStatus_25;
        MR_Word hlds__make_hlds__add_pragma__Var_66;

        {
          hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_pragma__TypeDefn_24, &hlds__make_hlds__add_pragma__TypeStatus_25);
        }
        hlds__make_hlds__add_pragma__Var_66 = (MR_Word) hlds__make_hlds__add_pragma__TypeStatus_25;
        hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__Var_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
        if (hlds__make_hlds__add_pragma__succeeded)
          hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_85_85 = hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_65_65;
        else
        {
          MR_Word hlds__make_hlds__add_pragma__TypeMsg_27;
          MR_Word hlds__make_hlds__add_pragma__TypeSpec_28;
          MR_Word hlds__make_hlds__add_pragma__Var_83;

          {
            hlds__make_hlds__add_pragma__TypeMsg_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeMsg_27, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_10));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeMsg_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[188])));
          }
          {
            hlds__make_hlds__add_pragma__Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_83, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeMsg_27));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__add_pragma__TypeSpec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeSpec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeSpec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeSpec_28, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_83));
          }
          {
            hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_85_85, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeSpec_28));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_85_85, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_65_65));
          }
        }
      }
      else
        hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_85_85 = hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_65_65;
    }
    {
      hlds__make_hlds__add_pragma__Var_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_86, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_86, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_86, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_86, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_45));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_86, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_10));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_86, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeCtor_13));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_86, 6) = ((MR_Box) ((MR_String) "creator"));
    }
    hlds__make_hlds__add_pragma__TypeCtorInfo_131_131 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pred_name_arity_0;
    hlds__make_hlds__add_pragma__TypeCtorInfo_132_132 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    hlds__make_hlds__add_pragma__TypeCtorInfo_133_133 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    hlds__make_hlds__add_pragma__TypeInfo_134_134 = (MR_Word) &hlds__make_hlds__add_pragma_scalar_common_1[1];
    {
      mercury__list__map_foldl2_7_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_131_131, hlds__make_hlds__add_pragma__TypeCtorInfo_132_132, hlds__make_hlds__add_pragma__TypeCtorInfo_133_133, hlds__make_hlds__add_pragma__TypeInfo_134_134, hlds__make_hlds__add_pragma__Var_86, hlds__make_hlds__add_pragma__Creators_14, &hlds__make_hlds__add_pragma__CreatorPredIds_29, ((MR_Box) ((MR_Integer) 1)), &hlds__make_hlds__add_pragma__conv4_Var_30, ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_85_85)), &hlds__make_hlds__add_pragma__conv3_STATE_VARIABLE_OISUSpecs_88_88);
    }
    hlds__make_hlds__add_pragma__Var_30 = ((MR_Integer) hlds__make_hlds__add_pragma__conv4_Var_30);
    hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_88_88 = ((MR_Word) hlds__make_hlds__add_pragma__conv3_STATE_VARIABLE_OISUSpecs_88_88);
    {
      hlds__make_hlds__add_pragma__Var_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_90, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_90, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_2));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_90, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_45));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_90, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_10));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_90, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeCtor_13));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_90, 6) = ((MR_Box) ((MR_String) "mutator"));
    }
    {
      mercury__list__map_foldl2_7_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_131_131, hlds__make_hlds__add_pragma__TypeCtorInfo_132_132, hlds__make_hlds__add_pragma__TypeCtorInfo_133_133, hlds__make_hlds__add_pragma__TypeInfo_134_134, hlds__make_hlds__add_pragma__Var_90, hlds__make_hlds__add_pragma__Mutators_15, &hlds__make_hlds__add_pragma__MutatorPredIds_31, ((MR_Box) ((MR_Integer) 1)), &hlds__make_hlds__add_pragma__conv9_Var_32, ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_88_88)), &hlds__make_hlds__add_pragma__conv8_STATE_VARIABLE_OISUSpecs_92_92);
    }
    hlds__make_hlds__add_pragma__Var_32 = ((MR_Integer) hlds__make_hlds__add_pragma__conv9_Var_32);
    hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_92_92 = ((MR_Word) hlds__make_hlds__add_pragma__conv8_STATE_VARIABLE_OISUSpecs_92_92);
    {
      hlds__make_hlds__add_pragma__Var_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_94, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_94, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_oisu_7_p_0_3));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_94, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_94, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_45));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_94, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_10));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_94, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeCtor_13));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_94, 6) = ((MR_Box) ((MR_String) "destructor"));
    }
    {
      mercury__list__map_foldl2_7_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_131_131, hlds__make_hlds__add_pragma__TypeCtorInfo_132_132, hlds__make_hlds__add_pragma__TypeCtorInfo_133_133, hlds__make_hlds__add_pragma__TypeInfo_134_134, hlds__make_hlds__add_pragma__Var_94, hlds__make_hlds__add_pragma__Destructors_16, &hlds__make_hlds__add_pragma__DestructorPredIds_33, ((MR_Box) ((MR_Integer) 1)), &hlds__make_hlds__add_pragma__conv14_Var_34, ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_92_92)), &hlds__make_hlds__add_pragma__conv13_STATE_VARIABLE_OISUSpecs_96_96);
    }
    hlds__make_hlds__add_pragma__Var_34 = ((MR_Integer) hlds__make_hlds__add_pragma__conv14_Var_34);
    hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_96_96 = ((MR_Word) hlds__make_hlds__add_pragma__conv13_STATE_VARIABLE_OISUSpecs_96_96);
    if ((hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_96_96 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word hlds__make_hlds__add_pragma__OISUPreds_35;
      MR_Word hlds__make_hlds__add_pragma__OISUMap0_36;
      MR_Word hlds__make_hlds__add_pragma__OISUMap_37;

      {
        hlds__make_hlds__add_pragma__OISUPreds_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__OISUPreds_35, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__CreatorPredIds_29));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__OISUPreds_35, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__MutatorPredIds_31));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__OISUPreds_35, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__DestructorPredIds_33));
      }
      {
        hlds__hlds_module__module_info_get_oisu_map_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_45, &hlds__make_hlds__add_pragma__OISUMap0_36);
      }
      {
        hlds__make_hlds__add_pragma__succeeded = mercury__map__insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0, ((MR_Box) (hlds__make_hlds__add_pragma__TypeCtor_13)), ((MR_Box) (hlds__make_hlds__add_pragma__OISUPreds_35)), hlds__make_hlds__add_pragma__OISUMap0_36, &hlds__make_hlds__add_pragma__OISUMap_37);
      }
      if (hlds__make_hlds__add_pragma__succeeded)
      {
        {
          hlds__hlds_module__module_info_set_oisu_map_3_p_0(hlds__make_hlds__add_pragma__OISUMap_37, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_45, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_46);
        }
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_48 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_47;
      }
      else
      {
        MR_Word hlds__make_hlds__add_pragma__TypeName_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeCtor_13, (MR_Integer) 0)));
        MR_Integer hlds__make_hlds__add_pragma__TypeArity_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeCtor_13, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__add_pragma__DupPieces_40;
        MR_Word hlds__make_hlds__add_pragma__DupMsg_41;
        MR_Word hlds__make_hlds__add_pragma__DupSpec_42;
        MR_Word hlds__make_hlds__add_pragma__Var_102;
        MR_Word hlds__make_hlds__add_pragma__Var_105;
        MR_Word hlds__make_hlds__add_pragma__Var_108;
        MR_Word hlds__make_hlds__add_pragma__Var_109;
        MR_Word hlds__make_hlds__add_pragma__Var_110;
        MR_Word hlds__make_hlds__add_pragma__Var_117;
        MR_Word hlds__make_hlds__add_pragma__Var_118;
        MR_Word hlds__make_hlds__add_pragma__Var_122;

        {
          hlds__make_hlds__add_pragma__Var_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_110, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeName_38));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_110, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeArity_39));
        }
        {
          hlds__make_hlds__add_pragma__Var_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_109, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_110));
        }
        {
          hlds__make_hlds__add_pragma__Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_108, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_109));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[51])));
        }
        {
          hlds__make_hlds__add_pragma__Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_105, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[191])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_105, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_108));
        }
        {
          hlds__make_hlds__add_pragma__Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_102, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[190])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_102, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_105));
        }
        {
          hlds__make_hlds__add_pragma__DupPieces_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__DupPieces_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[189])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__DupPieces_40, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_102));
        }
        {
          hlds__make_hlds__add_pragma__Var_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_118, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__DupPieces_40));
        }
        {
          hlds__make_hlds__add_pragma__Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_117, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_118));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__DupMsg_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__DupMsg_41, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_10));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__DupMsg_41, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_117));
        }
        {
          hlds__make_hlds__add_pragma__Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_122, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__DupMsg_41));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__DupSpec_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__DupSpec_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__DupSpec_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__DupSpec_42, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_122));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_48 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__DupSpec_42));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_47));
        }
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_46 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_45;
      }
    }
    else
    {
      {
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_48 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__add_pragma__STATE_VARIABLE_OISUSpecs_96_96, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_47);
      }
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_46 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_45;
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_fact_table_7_p_0(
  MR_Word hlds__make_hlds__add_pragma__FTInfo_8,
  MR_Word hlds__make_hlds__add_pragma__PredStatus_9,
  MR_Word hlds__make_hlds__add_pragma__Context_10,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_38,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_39,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_40,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_41)
{
  {
    MR_Word hlds__make_hlds__add_pragma__PredArity_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FTInfo_8, (MR_Integer) 0)));
    MR_String hlds__make_hlds__add_pragma__FileName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FTInfo_8, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__Pred_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredArity_13, (MR_Integer) 0)));
    MR_Integer hlds__make_hlds__add_pragma__Arity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredArity_13, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__PredicateTable_17;
    MR_Word hlds__make_hlds__add_pragma__PredIds_18;

    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_38, &hlds__make_hlds__add_pragma__PredicateTable_17);
    }
    {
      hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(hlds__make_hlds__add_pragma__PredicateTable_17, (MR_Integer) 0, hlds__make_hlds__add_pragma__Pred_15, hlds__make_hlds__add_pragma__Arity_16, &hlds__make_hlds__add_pragma__PredIds_18);
    }
    if ((hlds__make_hlds__add_pragma__PredIds_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        hlds__make_hlds__make_hlds_error__report_undefined_pred_or_func_error_6_p_0(hlds__make_hlds__add_pragma__Pred_15, hlds__make_hlds__add_pragma__Arity_16, hlds__make_hlds__add_pragma__Context_10, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[105]), hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_40, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_41);
      }
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_39 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_38;
    }
    else
    {
      MR_Word hlds__make_hlds__add_pragma__HeadPredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_18, (MR_Integer) 0)));
      MR_Word hlds__make_hlds__add_pragma__TailPredIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_18, (MR_Integer) 1)));

      if ((hlds__make_hlds__add_pragma__TailPredIds_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word hlds__make_hlds__add_pragma__PredInfo0_22;
        MR_Word hlds__make_hlds__add_pragma__PredInfo_24;
        MR_String hlds__make_hlds__add_pragma__C_HeaderCode_25;
        MR_Integer hlds__make_hlds__add_pragma__PrimaryProcId_26;
        MR_Word hlds__make_hlds__add_pragma__ProcTable_27;
        MR_Word hlds__make_hlds__add_pragma__ArgTypes_28;
        MR_Word hlds__make_hlds__add_pragma__ProcIds_29;
        MR_Word hlds__make_hlds__add_pragma__PredOrFunc_30;
        MR_Integer hlds__make_hlds__add_pragma__NumArgs_31;
        MR_Word hlds__make_hlds__add_pragma__ForeignDeclCode_32;
        MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_75_75;
        MR_Word hlds__make_hlds__add_pragma__Var_78;
        MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_79_79;
        MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_80_80;

        {
          hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_38, hlds__make_hlds__add_pragma__HeadPredId_19, &hlds__make_hlds__add_pragma__PredInfo0_22);
        }
        {
          ll_backend__fact_table__fact_table_compile_facts_11_p_0(hlds__make_hlds__add_pragma__Pred_15, hlds__make_hlds__add_pragma__Arity_16, hlds__make_hlds__add_pragma__FileName_14, hlds__make_hlds__add_pragma__PredInfo0_22, &hlds__make_hlds__add_pragma__PredInfo_24, hlds__make_hlds__add_pragma__Context_10, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_38, &hlds__make_hlds__add_pragma__C_HeaderCode_25, &hlds__make_hlds__add_pragma__PrimaryProcId_26);
        }
        {
          hlds__hlds_module__module_info_set_pred_info_4_p_0(hlds__make_hlds__add_pragma__HeadPredId_19, hlds__make_hlds__add_pragma__PredInfo_24, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_38, &hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_75_75);
        }
        {
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_pragma__PredInfo_24, &hlds__make_hlds__add_pragma__ProcTable_27);
        }
        {
          hlds__hlds_pred__pred_info_get_arg_types_2_p_0(hlds__make_hlds__add_pragma__PredInfo_24, &hlds__make_hlds__add_pragma__ArgTypes_28);
        }
        {
          hlds__make_hlds__add_pragma__ProcIds_29 = hlds__hlds_pred__pred_info_procids_1_f_0(hlds__make_hlds__add_pragma__PredInfo_24);
        }
        {
          hlds__make_hlds__add_pragma__PredOrFunc_30 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__make_hlds__add_pragma__PredInfo_24);
        }
        {
          parse_tree__prog_util__adjust_func_arity_3_p_0(hlds__make_hlds__add_pragma__PredOrFunc_30, hlds__make_hlds__add_pragma__Arity_16, &hlds__make_hlds__add_pragma__NumArgs_31);
        }
        {
          hlds__make_hlds__add_pragma__Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_78, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__C_HeaderCode_25));
        }
        {
          hlds__make_hlds__add_pragma__ForeignDeclCode_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignDeclCode_32, 0) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignDeclCode_32, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignDeclCode_32, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_78));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignDeclCode_32, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_10));
        }
        {
          hlds__hlds_module__module_add_foreign_decl_code_3_p_0(hlds__make_hlds__add_pragma__ForeignDeclCode_32, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_75_75, &hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_79_79);
        }
        {
          hlds__hlds_module__module_add_fact_table_file_3_p_0(hlds__make_hlds__add_pragma__FileName_14, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_79_79, &hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_80_80);
        }
        {
          hlds__make_hlds__add_pragma__add_fact_table_procedures_13_p_0(hlds__make_hlds__add_pragma__ProcIds_29, hlds__make_hlds__add_pragma__PrimaryProcId_26, hlds__make_hlds__add_pragma__ProcTable_27, hlds__make_hlds__add_pragma__Pred_15, hlds__make_hlds__add_pragma__PredOrFunc_30, hlds__make_hlds__add_pragma__NumArgs_31, hlds__make_hlds__add_pragma__ArgTypes_28, hlds__make_hlds__add_pragma__PredStatus_9, hlds__make_hlds__add_pragma__Context_10, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_80_80, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_39, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_40, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_41);
        }
      }
      else
      {
        MR_Word hlds__make_hlds__add_pragma__Pieces_35;
        MR_Word hlds__make_hlds__add_pragma__Msg_36;
        MR_Word hlds__make_hlds__add_pragma__Spec_37;
        MR_Word hlds__make_hlds__add_pragma__Var_45;
        MR_Word hlds__make_hlds__add_pragma__Var_48;
        MR_Word hlds__make_hlds__add_pragma__Var_51;
        MR_Word hlds__make_hlds__add_pragma__Var_52;
        MR_Word hlds__make_hlds__add_pragma__Var_53;
        MR_Word hlds__make_hlds__add_pragma__Var_65;
        MR_Word hlds__make_hlds__add_pragma__Var_66;
        MR_Word hlds__make_hlds__add_pragma__Var_70;

        {
          hlds__make_hlds__add_pragma__Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_53, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pred_15));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_53, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_16));
        }
        {
          hlds__make_hlds__add_pragma__Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_52, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_53));
        }
        {
          hlds__make_hlds__add_pragma__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_51, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_52));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[110])));
        }
        {
          hlds__make_hlds__add_pragma__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[186])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_48, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_51));
        }
        {
          hlds__make_hlds__add_pragma__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[185])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_45, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_48));
        }
        {
          hlds__make_hlds__add_pragma__Pieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[159])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_35, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_45));
        }
        {
          hlds__make_hlds__add_pragma__Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_66, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_35));
        }
        {
          hlds__make_hlds__add_pragma__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_65, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_66));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__Msg_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_36, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_10));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_36, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_65));
        }
        {
          hlds__make_hlds__add_pragma__Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_70, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_36));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__Spec_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_37, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_70));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_41 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_37));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_40));
        }
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_39 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_38;
      }
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_fact_table_procedures_13_p_0(
  MR_Word hlds__make_hlds__add_pragma__HeadVar__1_1,
  MR_Integer hlds__make_hlds__add_pragma__PrimaryProcId_2,
  MR_Word hlds__make_hlds__add_pragma__ProcTable_3,
  MR_Word hlds__make_hlds__add_pragma__SymName_4,
  MR_Word hlds__make_hlds__add_pragma__PredOrFunc_5,
  MR_Integer hlds__make_hlds__add_pragma__Arity_6,
  MR_Word hlds__make_hlds__add_pragma__ArgTypes_7,
  MR_Word hlds__make_hlds__add_pragma__PredStatus_8,
  MR_Word hlds__make_hlds__add_pragma__Context_9,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_11,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_12,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_13)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((hlds__make_hlds__add_pragma__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_13 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_12;
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_11 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_10;
    }
    else
    {
      MR_Integer hlds__make_hlds__add_pragma__ProcId_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__make_hlds__add_pragma__ProcIds_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_44_44;
      MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_45_45;

      {
        hlds__make_hlds__add_pragma__add_fact_table_proc_13_p_0(hlds__make_hlds__add_pragma__ProcId_28, hlds__make_hlds__add_pragma__PrimaryProcId_2, hlds__make_hlds__add_pragma__ProcTable_3, hlds__make_hlds__add_pragma__SymName_4, hlds__make_hlds__add_pragma__PredOrFunc_5, hlds__make_hlds__add_pragma__Arity_6, hlds__make_hlds__add_pragma__ArgTypes_7, hlds__make_hlds__add_pragma__PredStatus_8, hlds__make_hlds__add_pragma__Context_9, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_10, &hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_44_44, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_12, &hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_45_45);
      }
      /* direct tailcall eliminated */
      {
        MR_Word hlds__make_hlds__add_pragma__next_value_of_HeadVar__1_1 = hlds__make_hlds__add_pragma__ProcIds_29;
        MR_Word hlds__make_hlds__add_pragma__next_value_of_STATE_VARIABLE_ModuleInfo_0_10 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_44_44;
        MR_Word hlds__make_hlds__add_pragma__next_value_of_STATE_VARIABLE_Specs_0_12 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_45_45;

        hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_12 = hlds__make_hlds__add_pragma__next_value_of_STATE_VARIABLE_Specs_0_12;
        hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_10 = hlds__make_hlds__add_pragma__next_value_of_STATE_VARIABLE_ModuleInfo_0_10;
        hlds__make_hlds__add_pragma__HeadVar__1_1 = hlds__make_hlds__add_pragma__next_value_of_HeadVar__1_1;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_fact_table_proc_13_p_0(
  MR_Integer hlds__make_hlds__add_pragma__ProcId_14,
  MR_Integer hlds__make_hlds__add_pragma__PrimaryProcId_15,
  MR_Word hlds__make_hlds__add_pragma__ProcTable_16,
  MR_Word hlds__make_hlds__add_pragma__SymName_17,
  MR_Word hlds__make_hlds__add_pragma__PredOrFunc_18,
  MR_Integer hlds__make_hlds__add_pragma__Arity_19,
  MR_Word hlds__make_hlds__add_pragma__ArgTypes_20,
  MR_Word hlds__make_hlds__add_pragma__PredStatus_21,
  MR_Word hlds__make_hlds__add_pragma__Context_22,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_44,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_45,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_46)
{
  {
    MR_bool hlds__make_hlds__add_pragma__succeeded;
    MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_68_68;
    MR_Word hlds__make_hlds__add_pragma__ProcInfo_25;
    MR_Word hlds__make_hlds__add_pragma__ProgVarSet0_26;
    MR_Word hlds__make_hlds__add_pragma__Vars_27;
    MR_Word hlds__make_hlds__add_pragma__ProgVarSet_28;
    MR_Word hlds__make_hlds__add_pragma__Modes_29;
    MR_Word hlds__make_hlds__add_pragma__InstVarSet_30;
    MR_Word hlds__make_hlds__add_pragma__PragmaVars_31;
    MR_String hlds__make_hlds__add_pragma__C_ProcCode_33;
    MR_String hlds__make_hlds__add_pragma__C_ExtraCode_34;
    MR_Word hlds__make_hlds__add_pragma__Attrs0_35;
    MR_Word hlds__make_hlds__add_pragma__Attrs1_36;
    MR_Word hlds__make_hlds__add_pragma__Attrs2_37;
    MR_Word hlds__make_hlds__add_pragma__Attrs3_38;
    MR_Word hlds__make_hlds__add_pragma__Attrs_39;
    MR_Word hlds__make_hlds__add_pragma__FCInfo_41;
    MR_Word hlds__make_hlds__add_pragma__Var_54;
    MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_56_56;
    MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57_57;
    MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_60_60;
    MR_Box hlds__make_hlds__add_pragma__conv0_ProcInfo_25;

    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, hlds__make_hlds__add_pragma__ProcTable_16, hlds__make_hlds__add_pragma__ProcId_14, &hlds__make_hlds__add_pragma__conv0_ProcInfo_25);
    }
    hlds__make_hlds__add_pragma__ProcInfo_25 = ((MR_Word) hlds__make_hlds__add_pragma__conv0_ProcInfo_25);
    hlds__make_hlds__add_pragma__TypeCtorInfo_68_68 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      mercury__varset__init_1_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_68_68, &hlds__make_hlds__add_pragma__ProgVarSet0_26);
    }
    {
      mercury__varset__new_vars_4_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_68_68, hlds__make_hlds__add_pragma__Arity_19, &hlds__make_hlds__add_pragma__Vars_27, hlds__make_hlds__add_pragma__ProgVarSet0_26, &hlds__make_hlds__add_pragma__ProgVarSet_28);
    }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__make_hlds__add_pragma__ProcInfo_25, &hlds__make_hlds__add_pragma__Modes_29);
    }
    {
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(hlds__make_hlds__add_pragma__ProcInfo_25, &hlds__make_hlds__add_pragma__InstVarSet_30);
    }
    {
      hlds__make_hlds__add_pragma__fact_table_pragma_vars_4_p_0(hlds__make_hlds__add_pragma__Vars_27, hlds__make_hlds__add_pragma__Modes_29, hlds__make_hlds__add_pragma__ProgVarSet_28, &hlds__make_hlds__add_pragma__PragmaVars_31);
    }
    {
      ll_backend__fact_table__fact_table_generate_c_code_11_p_0(hlds__make_hlds__add_pragma__SymName_17, hlds__make_hlds__add_pragma__PragmaVars_31, hlds__make_hlds__add_pragma__ProcId_14, hlds__make_hlds__add_pragma__PrimaryProcId_15, hlds__make_hlds__add_pragma__ProcInfo_25, hlds__make_hlds__add_pragma__ArgTypes_20, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__add_pragma__C_ProcCode_33, &hlds__make_hlds__add_pragma__C_ExtraCode_34);
    }
    {
      hlds__make_hlds__add_pragma__Attrs0_35 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
    }
    {
      parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, hlds__make_hlds__add_pragma__Attrs0_35, &hlds__make_hlds__add_pragma__Attrs1_36);
    }
    {
      parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_pragma__Attrs1_36, &hlds__make_hlds__add_pragma__Attrs2_37);
    }
    {
      parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 0, hlds__make_hlds__add_pragma__Attrs2_37, &hlds__make_hlds__add_pragma__Attrs3_38);
    }
    {
      parse_tree__prog_data_foreign__add_extra_attribute_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pragma__Attrs3_38, &hlds__make_hlds__add_pragma__Attrs_39);
    }
    {
      hlds__make_hlds__add_pragma__Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_54, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__C_ProcCode_33));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pragma__FCInfo_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FCInfo_41, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Attrs_39));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FCInfo_41, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__SymName_17));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FCInfo_41, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__PredOrFunc_18));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FCInfo_41, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__PragmaVars_31));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FCInfo_41, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__ProgVarSet_28));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FCInfo_41, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__InstVarSet_30));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FCInfo_41, 6) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_54));
    }
    {
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_pragma__FCInfo_41, hlds__make_hlds__add_pragma__PredStatus_21, hlds__make_hlds__add_pragma__Context_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_56_56, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_45, &hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57_57);
    }
    hlds__make_hlds__add_pragma__succeeded = (strcmp(hlds__make_hlds__add_pragma__C_ExtraCode_34, (MR_String) "") == 0);
    if (hlds__make_hlds__add_pragma__succeeded)
      hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_60_60 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_56_56;
    else
    {
      MR_Word hlds__make_hlds__add_pragma__ForeignBodyCode_42;
      MR_Word hlds__make_hlds__add_pragma__Var_59;

      {
        hlds__make_hlds__add_pragma__Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_59, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__C_ExtraCode_34));
      }
      {
        hlds__make_hlds__add_pragma__ForeignBodyCode_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignBodyCode_42, 0) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignBodyCode_42, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_59));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignBodyCode_42, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_22));
      }
      {
        hlds__hlds_module__module_add_foreign_body_code_3_p_0(hlds__make_hlds__add_pragma__ForeignBodyCode_42, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_56_56, &hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_60_60);
      }
    }
    {
      hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "fact_table", hlds__make_hlds__add_pragma__SymName_17, hlds__make_hlds__add_pragma__Arity_19, hlds__make_hlds__add_pragma__PredStatus_21, hlds__make_hlds__add_pragma__Context_22, (MR_Integer) 8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_60_60, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_44, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57_57, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_46);
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__fact_table_pragma_vars_4_p_0(
  MR_Word hlds__make_hlds__add_pragma__Vars0_5,
  MR_Word hlds__make_hlds__add_pragma__Modes0_6,
  MR_Word hlds__make_hlds__add_pragma__VarSet_7,
  MR_Word * hlds__make_hlds__add_pragma__PragmaVars0_8)
{
  {
    MR_bool hlds__make_hlds__add_pragma__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pragma__Vars0_5)) == (MR_mktag((MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__Var_9;
    MR_Word hlds__make_hlds__add_pragma__VarsTail_10;
    MR_Word hlds__make_hlds__add_pragma__Mode_11;
    MR_Word hlds__make_hlds__add_pragma__ModesTail_12;

    if (hlds__make_hlds__add_pragma__succeeded)
    {
      hlds__make_hlds__add_pragma__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Vars0_5, (MR_Integer) 0)));
      hlds__make_hlds__add_pragma__VarsTail_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Vars0_5, (MR_Integer) 1)));
      hlds__make_hlds__add_pragma__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pragma__Modes0_6)) == (MR_mktag((MR_Integer) 1)));
      if (hlds__make_hlds__add_pragma__succeeded)
      {
        hlds__make_hlds__add_pragma__Mode_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Modes0_6, (MR_Integer) 0)));
        hlds__make_hlds__add_pragma__ModesTail_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Modes0_6, (MR_Integer) 1)));
      }
    }
    if (hlds__make_hlds__add_pragma__succeeded)
    {
      MR_String hlds__make_hlds__add_pragma__Name_13;
      MR_Word hlds__make_hlds__add_pragma__PragmaVar_14;
      MR_Word hlds__make_hlds__add_pragma__PragmaVarsTail_15;

      {
        mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__add_pragma__VarSet_7, hlds__make_hlds__add_pragma__Var_9, &hlds__make_hlds__add_pragma__Name_13);
      }
      {
        hlds__make_hlds__add_pragma__PragmaVar_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PragmaVar_14, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_9));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PragmaVar_14, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Name_13));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PragmaVar_14, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Mode_11));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PragmaVar_14, 3) = ((MR_Box) ((MR_Integer) 0));
      }
      {
        hlds__make_hlds__add_pragma__fact_table_pragma_vars_4_p_0(hlds__make_hlds__add_pragma__VarsTail_10, hlds__make_hlds__add_pragma__ModesTail_12, hlds__make_hlds__add_pragma__VarSet_7, &hlds__make_hlds__add_pragma__PragmaVarsTail_15);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *hlds__make_hlds__add_pragma__PragmaVars0_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__PragmaVar_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__PragmaVarsTail_15));
      }
    }
    else
      *hlds__make_hlds__add_pragma__PragmaVars0_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pass_2_pragmas_5_p_0(
  MR_Word hlds__make_hlds__add_pragma__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_3,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_4,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((hlds__make_hlds__add_pragma__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_5 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_4;
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_3 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word hlds__make_hlds__add_pragma__SectionItem_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__make_hlds__add_pragma__SectionItems_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_20_20;
      MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_21_21;

      {
        hlds__make_hlds__add_pragma__add_pass_2_pragma_5_p_0(hlds__make_hlds__add_pragma__SectionItem_12, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_2, &hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_20_20, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_4, &hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_21_21);
      }
      /* direct tailcall eliminated */
      {
        MR_Word hlds__make_hlds__add_pragma__next_value_of_HeadVar__1_1 = hlds__make_hlds__add_pragma__SectionItems_13;
        MR_Word hlds__make_hlds__add_pragma__next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_20_20;
        MR_Word hlds__make_hlds__add_pragma__next_value_of_STATE_VARIABLE_Specs_0_4 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_21_21;

        hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_4 = hlds__make_hlds__add_pragma__next_value_of_STATE_VARIABLE_Specs_0_4;
        hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_2 = hlds__make_hlds__add_pragma__next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
        hlds__make_hlds__add_pragma__HeadVar__1_1 = hlds__make_hlds__add_pragma__next_value_of_HeadVar__1_1;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pass_2_pragma_5_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_2,
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_3)
{
  {
    MR_Box hlds__make_hlds__add_pragma__closure = hlds__make_hlds__add_pragma__closure_arg;
    MR_Word hlds__make_hlds__add_pragma__conv0_STATE_VARIABLE_ModuleInfo_11;

    {
      hlds__make_hlds__add_pragma__mark_pred_as_external_3_p_0(((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_2), &hlds__make_hlds__add_pragma__conv0_STATE_VARIABLE_ModuleInfo_11);
    }
    *hlds__make_hlds__add_pragma__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_pragma__conv0_STATE_VARIABLE_ModuleInfo_11));
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pass_2_pragma_5_p_0(
  MR_Word hlds__make_hlds__add_pragma__SectionItem_6,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_54,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_55,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_56,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57)
{
  {
    MR_bool hlds__make_hlds__add_pragma__succeeded;
    MR_Word hlds__make_hlds__add_pragma__ItemMercuryStatus_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__SectionItem_6, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pragma__ItemPragmaInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__SectionItem_6, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__Pragma_11;
    MR_Word hlds__make_hlds__add_pragma__Context_13;
    MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_58_58;
    MR_Word hlds__make_hlds__add_pragma__Pragma_336 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragmaInfo_10, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pragma__MaybeAttrs_337 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragmaInfo_10, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__Context_338 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragmaInfo_10, (MR_Integer) 2)));
    MR_Integer hlds__make_hlds__add_pragma___SeqNum_339 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragmaInfo_10, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__add_pragma__ItemExport_340;
    MR_Word hlds__make_hlds__add_pragma__Var_342;
    MR_Word hlds__make_hlds__add_pragma___MaybeAttrs_12;
    MR_Integer hlds__make_hlds__add_pragma___SeqNum_14;

    hlds__make_hlds__add_pragma__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pragma__ItemMercuryStatus_9)) == (MR_mktag((MR_Integer) 0)));
    if (hlds__make_hlds__add_pragma__succeeded)
    {
      hlds__make_hlds__add_pragma__ItemExport_340 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemMercuryStatus_9, (MR_Integer) 0)));
      hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__ItemExport_340 == (MR_Integer) 2);
      if (hlds__make_hlds__add_pragma__succeeded)
      {
        {
          hlds__make_hlds__add_pragma__Var_342 = parse_tree__prog_item__pragma_allowed_in_interface_1_f_0(hlds__make_hlds__add_pragma__Pragma_336);
        }
        hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__Var_342 == (MR_Integer) 0);
        if (hlds__make_hlds__add_pragma__succeeded)
          hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__MaybeAttrs_337 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    if (hlds__make_hlds__add_pragma__succeeded)
    {
      MR_Word hlds__make_hlds__add_pragma__ContextPieces_341;

      {
        hlds__make_hlds__add_pragma__ContextPieces_341 = parse_tree__prog_item__pragma_context_pieces_1_f_0(hlds__make_hlds__add_pragma__Pragma_336);
      }
      {
        hlds__make_hlds__make_hlds_error__error_is_exported_4_p_0(hlds__make_hlds__add_pragma__Context_338, hlds__make_hlds__add_pragma__ContextPieces_341, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_56, &hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_58_58);
      }
    }
    else
      hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_58_58 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_56;
    hlds__make_hlds__add_pragma__Pragma_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragmaInfo_10, (MR_Integer) 0)));
    hlds__make_hlds__add_pragma___MaybeAttrs_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragmaInfo_10, (MR_Integer) 1)));
    hlds__make_hlds__add_pragma__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragmaInfo_10, (MR_Integer) 2)));
    hlds__make_hlds__add_pragma___SeqNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragmaInfo_10, (MR_Integer) 3)));
    switch (MR_tag((MR_Word) hlds__make_hlds__add_pragma__Pragma_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__make_hlds__add_pragma__FDInfo_15 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_pragma__Pragma_11), (MR_Integer) 0);
          MR_Word hlds__make_hlds__add_pragma__Lang_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FDInfo_15, (MR_Integer) 0)))) & (MR_Integer) 3);
          MR_Word hlds__make_hlds__add_pragma__IsLocal_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FDInfo_15, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Word hlds__make_hlds__add_pragma__CHeader_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FDInfo_15, (MR_Integer) 1)));
          MR_Word hlds__make_hlds__add_pragma__ForeignDeclCode_19;

          {
            hlds__make_hlds__add_pragma__ForeignDeclCode_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignDeclCode_19, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Lang_16));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignDeclCode_19, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__IsLocal_17));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignDeclCode_19, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__CHeader_18));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignDeclCode_19, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_13));
          }
          {
            hlds__hlds_module__module_add_foreign_decl_code_3_p_0(hlds__make_hlds__add_pragma__ForeignDeclCode_19, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_54, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_55);
          }
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_58_58;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__make_hlds__add_pragma__FCInfo_20 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_pragma__Pragma_11), (MR_Integer) 1);
          MR_Word hlds__make_hlds__add_pragma__BodyCode_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FCInfo_20, (MR_Integer) 1)));
          MR_Word hlds__make_hlds__add_pragma__ForeignBodyCode_22;
          MR_Word hlds__make_hlds__add_pragma__Lang_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__FCInfo_20, (MR_Integer) 0)));

          {
            hlds__make_hlds__add_pragma__ForeignBodyCode_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignBodyCode_22, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Lang_244));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignBodyCode_22, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__BodyCode_21));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ForeignBodyCode_22, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_13));
          }
          {
            hlds__hlds_module__module_add_foreign_body_code_3_p_0(hlds__make_hlds__add_pragma__ForeignBodyCode_22, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_54, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_55);
          }
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_58_58;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word hlds__make_hlds__add_pragma__FEEInfo_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
              MR_Word hlds__make_hlds__add_pragma__TypeStatus_53;

              {
                hlds__status__item_mercury_status_to_type_status_2_p_0(hlds__make_hlds__add_pragma__ItemMercuryStatus_9, &hlds__make_hlds__add_pragma__TypeStatus_53);
              }
              {
                hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_export_enum_7_p_0(hlds__make_hlds__add_pragma__FEEInfo_52, hlds__make_hlds__add_pragma__TypeStatus_53, hlds__make_hlds__add_pragma__Context_13, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_54, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_55, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_58_58, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word hlds__make_hlds__add_pragma__ExternalInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
              MR_Word hlds__make_hlds__add_pragma__PredName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ExternalInfo_25, (MR_Integer) 0)));
              MR_Integer hlds__make_hlds__add_pragma__Arity_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ExternalInfo_25, (MR_Integer) 1)));
              MR_Word hlds__make_hlds__add_pragma__PorF_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ExternalInfo_25, (MR_Integer) 2)));
              MR_Word hlds__make_hlds__add_pragma__MaybeBackend_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ExternalInfo_25, (MR_Integer) 3)));
              MR_Word hlds__make_hlds__add_pragma__Globals_30;
              MR_Word hlds__make_hlds__add_pragma__CurrentBackend_31;

              {
                hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_54, &hlds__make_hlds__add_pragma__Globals_30);
              }
              {
                hlds__make_hlds__add_pragma__CurrentBackend_31 = libs__globals__lookup_current_backend_1_f_0(hlds__make_hlds__add_pragma__Globals_30);
              }
              if ((hlds__make_hlds__add_pragma__MaybeBackend_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                hlds__make_hlds__add_pragma__succeeded = MR_TRUE;
              else
              {
                MR_Word hlds__make_hlds__add_pragma__Backend_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__MaybeBackend_29, (MR_Integer) 0)));

                hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__Backend_32 == hlds__make_hlds__add_pragma__CurrentBackend_31);
              }
              if (hlds__make_hlds__add_pragma__succeeded)
              {
                MR_Word hlds__make_hlds__add_pragma__PredicateTable0_33;
                MR_Word hlds__make_hlds__add_pragma__PredIds_34;
                MR_Word hlds__make_hlds__add_pragma__MissingPieces_35;

                {
                  hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_54, &hlds__make_hlds__add_pragma__PredicateTable0_33);
                }
                switch (hlds__make_hlds__add_pragma__PorF_28) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      {
                        hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(hlds__make_hlds__add_pragma__PredicateTable0_33, (MR_Integer) 0, hlds__make_hlds__add_pragma__PredName_26, hlds__make_hlds__add_pragma__Arity_27, &hlds__make_hlds__add_pragma__PredIds_34);
                      }
                      hlds__make_hlds__add_pragma__MissingPieces_35 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[15]);
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      {
                        hlds__pred_table__predicate_table_lookup_pred_sym_arity_5_p_0(hlds__make_hlds__add_pragma__PredicateTable0_33, (MR_Integer) 0, hlds__make_hlds__add_pragma__PredName_26, hlds__make_hlds__add_pragma__Arity_27, &hlds__make_hlds__add_pragma__PredIds_34);
                      }
                      hlds__make_hlds__add_pragma__MissingPieces_35 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[17]);
                    }
                    break;
                }
                if ((hlds__make_hlds__add_pragma__PredIds_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    hlds__make_hlds__make_hlds_error__report_undefined_pred_or_func_error_6_p_0(hlds__make_hlds__add_pragma__PredName_26, hlds__make_hlds__add_pragma__Arity_27, hlds__make_hlds__add_pragma__Context_13, hlds__make_hlds__add_pragma__MissingPieces_35, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_58_58, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57);
                  }
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_55 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_54;
                }
                else
                {
                  MR_Box hlds__make_hlds__add_pragma__conv1_STATE_VARIABLE_ModuleInfo_55;

                  {
                    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &hlds__make_hlds__add_pragma_scalar_common_2[1], hlds__make_hlds__add_pragma__PredIds_34, ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_54)), &hlds__make_hlds__add_pragma__conv1_STATE_VARIABLE_ModuleInfo_55);
                  }
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_55 = ((MR_Word) hlds__make_hlds__add_pragma__conv1_STATE_VARIABLE_ModuleInfo_55);
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_58_58;
                }
              }
              else
              {
                *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_58_58;
                *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_55 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_54;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word hlds__make_hlds__add_pragma__PredNameArity_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
              MR_Word hlds__make_hlds__add_pragma__Name_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_38, (MR_Integer) 0)));
              MR_Word hlds__make_hlds__add_pragma__PredStatus_40;
              MR_Integer hlds__make_hlds__add_pragma__Arity_245 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_38, (MR_Integer) 1)));

              {
                hlds__status__item_mercury_status_to_pred_status_2_p_0(hlds__make_hlds__add_pragma__ItemMercuryStatus_9, &hlds__make_hlds__add_pragma__PredStatus_40);
              }
              {
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "inline", hlds__make_hlds__add_pragma__Name_39, hlds__make_hlds__add_pragma__Arity_245, hlds__make_hlds__add_pragma__PredStatus_40, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 7, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[180]), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_54, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_55, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_58_58, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Integer hlds__make_hlds__add_pragma__Arity_246;
              MR_Word hlds__make_hlds__add_pragma__PredNameArity_247 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
              MR_Word hlds__make_hlds__add_pragma__Name_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_247, (MR_Integer) 0)));
              MR_Word hlds__make_hlds__add_pragma__PredStatus_249;

              hlds__make_hlds__add_pragma__Arity_246 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_247, (MR_Integer) 1)));
              {
                hlds__status__item_mercury_status_to_pred_status_2_p_0(hlds__make_hlds__add_pragma__ItemMercuryStatus_9, &hlds__make_hlds__add_pragma__PredStatus_249);
              }
              {
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "no_inline", hlds__make_hlds__add_pragma__Name_248, hlds__make_hlds__add_pragma__Arity_246, hlds__make_hlds__add_pragma__PredStatus_249, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 8, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[182]), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_54, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_55, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_58_58, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Integer hlds__make_hlds__add_pragma__Arity_250;
              MR_Word hlds__make_hlds__add_pragma__PredNameArity_251 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
              MR_Word hlds__make_hlds__add_pragma__Name_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_251, (MR_Integer) 0)));
              MR_Word hlds__make_hlds__add_pragma__PredStatus_253;

              hlds__make_hlds__add_pragma__Arity_250 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_251, (MR_Integer) 1)));
              {
                hlds__status__item_mercury_status_to_pred_status_2_p_0(hlds__make_hlds__add_pragma__ItemMercuryStatus_9, &hlds__make_hlds__add_pragma__PredStatus_253);
              }
              {
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "consider_used", hlds__make_hlds__add_pragma__Name_252, hlds__make_hlds__add_pragma__Arity_250, hlds__make_hlds__add_pragma__PredStatus_253, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_54, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_55, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_58_58, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word hlds__make_hlds__add_pragma__UnusedArgsInfo_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
              MR_Word hlds__make_hlds__add_pragma__ItemImport_42;

              hlds__make_hlds__add_pragma__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pragma__ItemMercuryStatus_9)) == (MR_mktag((MR_Integer) 1)));
              if (hlds__make_hlds__add_pragma__succeeded)
              {
                hlds__make_hlds__add_pragma__ItemImport_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ItemMercuryStatus_9, (MR_Integer) 0)));
                hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__ItemImport_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              }
              if (hlds__make_hlds__add_pragma__succeeded)
                {
                  hlds__make_hlds__add_pragma__add_pragma_unused_args_6_p_0(hlds__make_hlds__add_pragma__UnusedArgsInfo_41, hlds__make_hlds__add_pragma__Context_13, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_54, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_55, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_58_58, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57);
                }
              else
              {
                MR_Word hlds__make_hlds__add_pragma__Msg_44;
                MR_Word hlds__make_hlds__add_pragma__Spec_45;
                MR_Word hlds__make_hlds__add_pragma__Var_202;

                {
                  hlds__make_hlds__add_pragma__Msg_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_44, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_13));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[184])));
                }
                {
                  hlds__make_hlds__add_pragma__Var_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_202, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_44));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_202, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  hlds__make_hlds__add_pragma__Spec_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_45, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_202));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_45));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_58_58));
                }
                *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_55 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_54;
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word hlds__make_hlds__add_pragma__ExceptionsInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
              MR_Word hlds__make_hlds__add_pragma__ItemImport_254;

              hlds__make_hlds__add_pragma__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pragma__ItemMercuryStatus_9)) == (MR_mktag((MR_Integer) 1)));
              if (hlds__make_hlds__add_pragma__succeeded)
              {
                hlds__make_hlds__add_pragma__ItemImport_254 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ItemMercuryStatus_9, (MR_Integer) 0)));
                hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__ItemImport_254 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              }
              if (hlds__make_hlds__add_pragma__succeeded)
                {
                  hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_101_120_99_101_112_116_105_111_110_115_95_95_91_50_93_95_48_6_p_0(hlds__make_hlds__add_pragma__ExceptionsInfo_46, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_54, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_55, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_58_58, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57);
                }
              else
              {
                MR_Word hlds__make_hlds__add_pragma__Var_183;
                MR_Word hlds__make_hlds__add_pragma__Msg_256;
                MR_Word hlds__make_hlds__add_pragma__Spec_257;

                {
                  hlds__make_hlds__add_pragma__Msg_256 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_256, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_13));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_256, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[179])));
                }
                {
                  hlds__make_hlds__add_pragma__Var_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_183, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_256));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_183, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  hlds__make_hlds__add_pragma__Spec_257 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_257, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_257, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_257, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_183));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_257));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_58_58));
                }
                *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_55 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_54;
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word hlds__make_hlds__add_pragma__TrailingInfo_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
              MR_Word hlds__make_hlds__add_pragma__ItemImport_266;

              hlds__make_hlds__add_pragma__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pragma__ItemMercuryStatus_9)) == (MR_mktag((MR_Integer) 1)));
              if (hlds__make_hlds__add_pragma__succeeded)
              {
                hlds__make_hlds__add_pragma__ItemImport_266 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ItemMercuryStatus_9, (MR_Integer) 0)));
                hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__ItemImport_266 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              }
              if (hlds__make_hlds__add_pragma__succeeded)
                {
                  hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_116_114_97_105_108_105_110_103_95_105_110_102_111_95_95_91_50_93_95_48_6_p_0(hlds__make_hlds__add_pragma__TrailingInfo_47, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_54, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_55, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_58_58, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57);
                }
              else
              {
                MR_Word hlds__make_hlds__add_pragma__Var_164;
                MR_Word hlds__make_hlds__add_pragma__Msg_268;
                MR_Word hlds__make_hlds__add_pragma__Spec_269;

                {
                  hlds__make_hlds__add_pragma__Msg_268 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_268, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_13));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_268, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[183])));
                }
                {
                  hlds__make_hlds__add_pragma__Var_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_164, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_268));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  hlds__make_hlds__add_pragma__Spec_269 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_269, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_269, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_269, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_164));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_269));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_58_58));
                }
                *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_55 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_54;
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word hlds__make_hlds__add_pragma__MMTablingInfo_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
              MR_Word hlds__make_hlds__add_pragma__ItemImport_278;

              hlds__make_hlds__add_pragma__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pragma__ItemMercuryStatus_9)) == (MR_mktag((MR_Integer) 1)));
              if (hlds__make_hlds__add_pragma__succeeded)
              {
                hlds__make_hlds__add_pragma__ItemImport_278 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ItemMercuryStatus_9, (MR_Integer) 0)));
                hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__ItemImport_278 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              }
              if (hlds__make_hlds__add_pragma__succeeded)
                {
                  hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_109_109_95_116_97_98_108_105_110_103_95_105_110_102_111_95_95_91_50_93_95_48_6_p_0(hlds__make_hlds__add_pragma__MMTablingInfo_48, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_54, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_55, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_58_58, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57);
                }
              else
              {
                MR_Word hlds__make_hlds__add_pragma__Var_145;
                MR_Word hlds__make_hlds__add_pragma__Msg_280;
                MR_Word hlds__make_hlds__add_pragma__Spec_281;

                {
                  hlds__make_hlds__add_pragma__Msg_280 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_280, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_13));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_280, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[181])));
                }
                {
                  hlds__make_hlds__add_pragma__Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_145, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_280));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_145, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  hlds__make_hlds__add_pragma__Spec_281 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_281, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_281, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_281, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_145));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_281));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_58_58));
                }
                *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_55 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_54;
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer hlds__make_hlds__add_pragma__Arity_290;
              MR_Word hlds__make_hlds__add_pragma__PredNameArity_291 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
              MR_Word hlds__make_hlds__add_pragma__Name_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_291, (MR_Integer) 0)));
              MR_Word hlds__make_hlds__add_pragma__PredStatus_293;

              hlds__make_hlds__add_pragma__Arity_290 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_291, (MR_Integer) 1)));
              {
                hlds__status__item_mercury_status_to_pred_status_2_p_0(hlds__make_hlds__add_pragma__ItemMercuryStatus_9, &hlds__make_hlds__add_pragma__PredStatus_293);
              }
              {
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "obsolete", hlds__make_hlds__add_pragma__Name_292, hlds__make_hlds__add_pragma__Arity_290, hlds__make_hlds__add_pragma__PredStatus_293, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_54, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_55, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_58_58, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57);
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Integer hlds__make_hlds__add_pragma__Arity_294;
              MR_Word hlds__make_hlds__add_pragma__PredNameArity_295 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
              MR_Word hlds__make_hlds__add_pragma__Name_296 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_295, (MR_Integer) 0)));
              MR_Word hlds__make_hlds__add_pragma__PredStatus_297;

              hlds__make_hlds__add_pragma__Arity_294 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_295, (MR_Integer) 1)));
              {
                hlds__status__item_mercury_status_to_pred_status_2_p_0(hlds__make_hlds__add_pragma__ItemMercuryStatus_9, &hlds__make_hlds__add_pragma__PredStatus_297);
              }
              {
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "no_determinism_warning", hlds__make_hlds__add_pragma__Name_296, hlds__make_hlds__add_pragma__Arity_294, hlds__make_hlds__add_pragma__PredStatus_297, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_54, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_55, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_58_58, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57);
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word hlds__make_hlds__add_pragma__TailrecWarningPragma_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));

              {
                hlds__make_hlds__add_pragma__add_pragma_require_tail_recursion_6_p_0(hlds__make_hlds__add_pragma__TailrecWarningPragma_49, hlds__make_hlds__add_pragma__Context_13, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_54, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_55, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_58_58, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57);
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Integer hlds__make_hlds__add_pragma__Arity_298;
              MR_Word hlds__make_hlds__add_pragma__PredNameArity_299 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
              MR_Word hlds__make_hlds__add_pragma__Name_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_299, (MR_Integer) 0)));
              MR_Word hlds__make_hlds__add_pragma__PredStatus_301;

              hlds__make_hlds__add_pragma__Arity_298 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_299, (MR_Integer) 1)));
              {
                hlds__status__item_mercury_status_to_pred_status_2_p_0(hlds__make_hlds__add_pragma__ItemMercuryStatus_9, &hlds__make_hlds__add_pragma__PredStatus_301);
              }
              {
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "promise_equivalent_clauses", hlds__make_hlds__add_pragma__Name_300, hlds__make_hlds__add_pragma__Arity_298, hlds__make_hlds__add_pragma__PredStatus_301, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_54, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_55, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_58_58, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57);
              }
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Integer hlds__make_hlds__add_pragma__Arity_302;
              MR_Word hlds__make_hlds__add_pragma__PredNameArity_303 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
              MR_Word hlds__make_hlds__add_pragma__Name_304 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_303, (MR_Integer) 0)));
              MR_Word hlds__make_hlds__add_pragma__PredStatus_305;

              hlds__make_hlds__add_pragma__Arity_302 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_303, (MR_Integer) 1)));
              {
                hlds__status__item_mercury_status_to_pred_status_2_p_0(hlds__make_hlds__add_pragma__ItemMercuryStatus_9, &hlds__make_hlds__add_pragma__PredStatus_305);
              }
              {
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "promise_pure", hlds__make_hlds__add_pragma__Name_304, hlds__make_hlds__add_pragma__Arity_302, hlds__make_hlds__add_pragma__PredStatus_305, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_54, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_55, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_58_58, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57);
              }
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Integer hlds__make_hlds__add_pragma__Arity_306;
              MR_Word hlds__make_hlds__add_pragma__PredNameArity_307 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
              MR_Word hlds__make_hlds__add_pragma__Name_308 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_307, (MR_Integer) 0)));
              MR_Word hlds__make_hlds__add_pragma__PredStatus_309;

              hlds__make_hlds__add_pragma__Arity_306 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_307, (MR_Integer) 1)));
              {
                hlds__status__item_mercury_status_to_pred_status_2_p_0(hlds__make_hlds__add_pragma__ItemMercuryStatus_9, &hlds__make_hlds__add_pragma__PredStatus_309);
              }
              {
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "promise_semipure", hlds__make_hlds__add_pragma__Name_308, hlds__make_hlds__add_pragma__Arity_306, hlds__make_hlds__add_pragma__PredStatus_309, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_54, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_55, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_58_58, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57);
              }
            }
            break;
          case (MR_Integer) 23:
            {
              MR_Integer hlds__make_hlds__add_pragma__Arity_310;
              MR_Word hlds__make_hlds__add_pragma__PredNameArity_311 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
              MR_Word hlds__make_hlds__add_pragma__Name_312 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_311, (MR_Integer) 0)));
              MR_Word hlds__make_hlds__add_pragma__PredStatus_313;

              hlds__make_hlds__add_pragma__Arity_310 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_311, (MR_Integer) 1)));
              {
                hlds__status__item_mercury_status_to_pred_status_2_p_0(hlds__make_hlds__add_pragma__ItemMercuryStatus_9, &hlds__make_hlds__add_pragma__PredStatus_313);
              }
              {
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "terminates", hlds__make_hlds__add_pragma__Name_312, hlds__make_hlds__add_pragma__Arity_310, hlds__make_hlds__add_pragma__PredStatus_313, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 19, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[21]), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_54, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_55, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_58_58, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57);
              }
            }
            break;
          case (MR_Integer) 24:
            {
              MR_Integer hlds__make_hlds__add_pragma__Arity_314;
              MR_Word hlds__make_hlds__add_pragma__PredNameArity_315 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
              MR_Word hlds__make_hlds__add_pragma__Name_316 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_315, (MR_Integer) 0)));
              MR_Word hlds__make_hlds__add_pragma__PredStatus_317;

              hlds__make_hlds__add_pragma__Arity_314 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_315, (MR_Integer) 1)));
              {
                hlds__status__item_mercury_status_to_pred_status_2_p_0(hlds__make_hlds__add_pragma__ItemMercuryStatus_9, &hlds__make_hlds__add_pragma__PredStatus_317);
              }
              {
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "does_not_terminate", hlds__make_hlds__add_pragma__Name_316, hlds__make_hlds__add_pragma__Arity_314, hlds__make_hlds__add_pragma__PredStatus_317, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 20, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[5]), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_54, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_55, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_58_58, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57);
              }
            }
            break;
          case (MR_Integer) 25:
            {
              MR_Integer hlds__make_hlds__add_pragma__Arity_318;
              MR_Word hlds__make_hlds__add_pragma__PredNameArity_319 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
              MR_Word hlds__make_hlds__add_pragma__Name_320 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_319, (MR_Integer) 0)));
              MR_Word hlds__make_hlds__add_pragma__PredStatus_321;

              hlds__make_hlds__add_pragma__Arity_318 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_319, (MR_Integer) 1)));
              {
                hlds__status__item_mercury_status_to_pred_status_2_p_0(hlds__make_hlds__add_pragma__ItemMercuryStatus_9, &hlds__make_hlds__add_pragma__PredStatus_321);
              }
              {
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "check_termination", hlds__make_hlds__add_pragma__Name_320, hlds__make_hlds__add_pragma__Arity_318, hlds__make_hlds__add_pragma__PredStatus_321, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 21, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[3]), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_54, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_55, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_58_58, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57);
              }
            }
            break;
          case (MR_Integer) 26:
            {
              MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_66_66;
              MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_67_67;
              MR_Integer hlds__make_hlds__add_pragma__Arity_322;
              MR_Word hlds__make_hlds__add_pragma__PredNameArity_323 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
              MR_Word hlds__make_hlds__add_pragma__Name_324 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_323, (MR_Integer) 0)));
              MR_Word hlds__make_hlds__add_pragma__PredStatus_325;

              hlds__make_hlds__add_pragma__Arity_322 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArity_323, (MR_Integer) 1)));
              {
                hlds__status__item_mercury_status_to_pred_status_2_p_0(hlds__make_hlds__add_pragma__ItemMercuryStatus_9, &hlds__make_hlds__add_pragma__PredStatus_325);
              }
              {
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "mode_check_clauses", hlds__make_hlds__add_pragma__Name_324, hlds__make_hlds__add_pragma__Arity_322, hlds__make_hlds__add_pragma__PredStatus_325, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_54, &hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_66_66, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_58_58, &hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_67_67);
              }
              {
                hlds__make_hlds__add_pragma__add_pred_marker_11_p_0((MR_String) "mode_check_clauses", hlds__make_hlds__add_pragma__Name_324, hlds__make_hlds__add_pragma__Arity_322, hlds__make_hlds__add_pragma__PredStatus_325, hlds__make_hlds__add_pragma__Context_13, (MR_Integer) 8, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[182]), hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_66_66, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_55, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_67_67, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57);
              }
            }
            break;
          case (MR_Integer) 29:
            {
              MR_Word hlds__make_hlds__add_pragma__FIMInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
              MR_Word hlds__make_hlds__add_pragma__ForeignImportModule_24 = (MR_Word) hlds__make_hlds__add_pragma__FIMInfo_23;

              {
                hlds__hlds_module__module_add_foreign_import_module_3_p_0(hlds__make_hlds__add_pragma__ForeignImportModule_24, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_54, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_55);
              }
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_58_58;
            }
            break;
          case (MR_Integer) 31:
            {
              MR_Word hlds__make_hlds__add_pragma__RFSInfo_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
              MR_Word hlds__make_hlds__add_pragma__FeatureSet_51 = (MR_Word) hlds__make_hlds__add_pragma__RFSInfo_50;

              {
                hlds__make_hlds__add_pragma__check_required_feature_set_7_p_0(hlds__make_hlds__add_pragma__FeatureSet_51, hlds__make_hlds__add_pragma__ItemMercuryStatus_9, hlds__make_hlds__add_pragma__Context_13, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_54, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_55, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_58_58, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_57);
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_109_109_95_116_97_98_108_105_110_103_95_105_110_102_111_95_95_91_50_93_95_48_6_p_0(
  MR_Word hlds__make_hlds__add_pragma__MMTablingInfo_7,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_29,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_30,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_31)
{
  {
    MR_Word hlds__make_hlds__add_pragma__PredNameArityPFMn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__MMTablingInfo_7, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pragma__TablingStatus_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__MMTablingInfo_7, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 0)));
    MR_Integer hlds__make_hlds__add_pragma__Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__PredOrFunc_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 2)));
    MR_Integer hlds__make_hlds__add_pragma__ModeNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__add_pragma__Preds_17;
    MR_Word hlds__make_hlds__add_pragma__PredIds_18;

    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_28, &hlds__make_hlds__add_pragma__Preds_17);
    }
    {
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pragma__Preds_17, (MR_Integer) 0, hlds__make_hlds__add_pragma__PredOrFunc_15, hlds__make_hlds__add_pragma__SymName_13, hlds__make_hlds__add_pragma__Arity_14, &hlds__make_hlds__add_pragma__PredIds_18);
    }
    if ((hlds__make_hlds__add_pragma__PredIds_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_29 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_28;
    else
    {
      MR_Word hlds__make_hlds__add_pragma__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_18, (MR_Integer) 1)));
      MR_Word hlds__make_hlds__add_pragma__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_18, (MR_Integer) 0)));

      if ((hlds__make_hlds__add_pragma__Var_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer hlds__make_hlds__add_pragma__ProcId_20;
        MR_Word hlds__make_hlds__add_pragma__PredInfo0_21;
        MR_Word hlds__make_hlds__add_pragma__ProcInfo0_22;
        MR_Word hlds__make_hlds__add_pragma__ProcMMTablingInfo_23;
        MR_Word hlds__make_hlds__add_pragma__ProcInfo_24;
        MR_Word hlds__make_hlds__add_pragma__Var_36;

        {
          hlds__hlds_pred__proc_id_to_int_2_p_1(&hlds__make_hlds__add_pragma__ProcId_20, hlds__make_hlds__add_pragma__ModeNum_16);
        }
        {
          hlds__hlds_module__module_info_pred_proc_info_5_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_28, hlds__make_hlds__add_pragma__Var_39, hlds__make_hlds__add_pragma__ProcId_20, &hlds__make_hlds__add_pragma__PredInfo0_21, &hlds__make_hlds__add_pragma__ProcInfo0_22);
        }
        {
          hlds__make_hlds__add_pragma__ProcMMTablingInfo_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ProcMMTablingInfo_23, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TablingStatus_12));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ProcMMTablingInfo_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_36, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__ProcMMTablingInfo_23));
        }
        {
          hlds__hlds_pred__proc_info_set_mm_tabling_info_3_p_0(hlds__make_hlds__add_pragma__Var_36, hlds__make_hlds__add_pragma__ProcInfo0_22, &hlds__make_hlds__add_pragma__ProcInfo_24);
        }
        {
          hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(hlds__make_hlds__add_pragma__Var_39, hlds__make_hlds__add_pragma__ProcId_20, hlds__make_hlds__add_pragma__PredInfo0_21, hlds__make_hlds__add_pragma__ProcInfo_24, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_28, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_29);
        }
      }
      else
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_29 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_28;
    }
    *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_31 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_30;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_116_114_97_105_108_105_110_103_95_105_110_102_111_95_95_91_50_93_95_48_6_p_0(
  MR_Word hlds__make_hlds__add_pragma__TrailingInfo_7,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_29,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_30,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_31)
{
  {
    MR_Word hlds__make_hlds__add_pragma__PredNameArityPFMn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TrailingInfo_7, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pragma__TrailingStatus_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TrailingInfo_7, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 0)));
    MR_Integer hlds__make_hlds__add_pragma__Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__PredOrFunc_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 2)));
    MR_Integer hlds__make_hlds__add_pragma__ModeNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__add_pragma__Preds_17;
    MR_Word hlds__make_hlds__add_pragma__PredIds_18;

    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_28, &hlds__make_hlds__add_pragma__Preds_17);
    }
    {
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pragma__Preds_17, (MR_Integer) 0, hlds__make_hlds__add_pragma__PredOrFunc_15, hlds__make_hlds__add_pragma__SymName_13, hlds__make_hlds__add_pragma__Arity_14, &hlds__make_hlds__add_pragma__PredIds_18);
    }
    if ((hlds__make_hlds__add_pragma__PredIds_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_29 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_28;
    else
    {
      MR_Word hlds__make_hlds__add_pragma__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_18, (MR_Integer) 1)));
      MR_Word hlds__make_hlds__add_pragma__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_18, (MR_Integer) 0)));

      if ((hlds__make_hlds__add_pragma__Var_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer hlds__make_hlds__add_pragma__ProcId_20;
        MR_Word hlds__make_hlds__add_pragma__PredInfo0_21;
        MR_Word hlds__make_hlds__add_pragma__ProcInfo0_22;
        MR_Word hlds__make_hlds__add_pragma__ProcTrailingInfo_23;
        MR_Word hlds__make_hlds__add_pragma__ProcInfo_24;
        MR_Word hlds__make_hlds__add_pragma__Var_36;

        {
          hlds__hlds_pred__proc_id_to_int_2_p_1(&hlds__make_hlds__add_pragma__ProcId_20, hlds__make_hlds__add_pragma__ModeNum_16);
        }
        {
          hlds__hlds_module__module_info_pred_proc_info_5_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_28, hlds__make_hlds__add_pragma__Var_39, hlds__make_hlds__add_pragma__ProcId_20, &hlds__make_hlds__add_pragma__PredInfo0_21, &hlds__make_hlds__add_pragma__ProcInfo0_22);
        }
        {
          hlds__make_hlds__add_pragma__ProcTrailingInfo_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ProcTrailingInfo_23, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TrailingStatus_12));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ProcTrailingInfo_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_36, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__ProcTrailingInfo_23));
        }
        {
          hlds__hlds_pred__proc_info_set_trailing_info_3_p_0(hlds__make_hlds__add_pragma__Var_36, hlds__make_hlds__add_pragma__ProcInfo0_22, &hlds__make_hlds__add_pragma__ProcInfo_24);
        }
        {
          hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(hlds__make_hlds__add_pragma__Var_39, hlds__make_hlds__add_pragma__ProcId_20, hlds__make_hlds__add_pragma__PredInfo0_21, hlds__make_hlds__add_pragma__ProcInfo_24, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_28, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_29);
        }
      }
      else
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_29 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_28;
    }
    *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_31 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_30;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_101_120_99_101_112_116_105_111_110_115_95_95_91_50_93_95_48_6_p_0(
  MR_Word hlds__make_hlds__add_pragma__ExceptionsInfo_7,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_29,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_30,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_31)
{
  {
    MR_Word hlds__make_hlds__add_pragma__PredNameArityPFMn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ExceptionsInfo_7, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pragma__ThrowStatus_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ExceptionsInfo_7, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 0)));
    MR_Integer hlds__make_hlds__add_pragma__Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__PredOrFunc_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 2)));
    MR_Integer hlds__make_hlds__add_pragma__ModeNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__add_pragma__Preds_17;
    MR_Word hlds__make_hlds__add_pragma__PredIds_18;

    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_28, &hlds__make_hlds__add_pragma__Preds_17);
    }
    {
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pragma__Preds_17, (MR_Integer) 0, hlds__make_hlds__add_pragma__PredOrFunc_15, hlds__make_hlds__add_pragma__SymName_13, hlds__make_hlds__add_pragma__Arity_14, &hlds__make_hlds__add_pragma__PredIds_18);
    }
    if ((hlds__make_hlds__add_pragma__PredIds_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_29 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_28;
    else
    {
      MR_Word hlds__make_hlds__add_pragma__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_18, (MR_Integer) 1)));
      MR_Word hlds__make_hlds__add_pragma__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_18, (MR_Integer) 0)));

      if ((hlds__make_hlds__add_pragma__Var_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer hlds__make_hlds__add_pragma__ProcId_20;
        MR_Word hlds__make_hlds__add_pragma__PredInfo0_21;
        MR_Word hlds__make_hlds__add_pragma__ProcInfo0_22;
        MR_Word hlds__make_hlds__add_pragma__ProcExceptionInfo_23;
        MR_Word hlds__make_hlds__add_pragma__ProcInfo_24;
        MR_Word hlds__make_hlds__add_pragma__Var_36;

        {
          hlds__hlds_pred__proc_id_to_int_2_p_1(&hlds__make_hlds__add_pragma__ProcId_20, hlds__make_hlds__add_pragma__ModeNum_16);
        }
        {
          hlds__hlds_module__module_info_pred_proc_info_5_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_28, hlds__make_hlds__add_pragma__Var_39, hlds__make_hlds__add_pragma__ProcId_20, &hlds__make_hlds__add_pragma__PredInfo0_21, &hlds__make_hlds__add_pragma__ProcInfo0_22);
        }
        {
          hlds__make_hlds__add_pragma__ProcExceptionInfo_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ProcExceptionInfo_23, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__ThrowStatus_12));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ProcExceptionInfo_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_36, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__ProcExceptionInfo_23));
        }
        {
          hlds__hlds_pred__proc_info_set_exception_info_3_p_0(hlds__make_hlds__add_pragma__Var_36, hlds__make_hlds__add_pragma__ProcInfo0_22, &hlds__make_hlds__add_pragma__ProcInfo_24);
        }
        {
          hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(hlds__make_hlds__add_pragma__Var_39, hlds__make_hlds__add_pragma__ProcId_20, hlds__make_hlds__add_pragma__PredInfo0_21, hlds__make_hlds__add_pragma__ProcInfo_24, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_28, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_29);
        }
      }
      else
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_29 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_28;
    }
    *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_31 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_30;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__check_required_feature_set_7_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_2,
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_3)
{
  {
    MR_Box hlds__make_hlds__add_pragma__closure = hlds__make_hlds__add_pragma__closure_arg;
    MR_Word hlds__make_hlds__add_pragma__conv0_STATE_VARIABLE_Specs_24;

    {
      hlds__make_hlds__add_pragma__check_required_feature_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_2), &hlds__make_hlds__add_pragma__conv0_STATE_VARIABLE_Specs_24);
    }
    *hlds__make_hlds__add_pragma__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_pragma__conv0_STATE_VARIABLE_Specs_24));
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__check_required_feature_set_7_p_0(
  MR_Word hlds__make_hlds__add_pragma__FeatureSet_8,
  MR_Word hlds__make_hlds__add_pragma__ItemMercuryStatus_9,
  MR_Word hlds__make_hlds__add_pragma__Context_10,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_17,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_18,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_19)
{
  {
    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__ItemMercuryStatus_9)) == (MR_mktag((MR_Integer) 1))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_pragma.check_required_feature_set\'/7", (MR_String) "imported require_feature_set pragma");
        return;
      }
    }
    else
    {
      MR_Word hlds__make_hlds__add_pragma__Globals_15;
      MR_Word hlds__make_hlds__add_pragma__Var_20;
      MR_Box hlds__make_hlds__add_pragma__conv1_STATE_VARIABLE_Specs_19;

      {
        hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_16, &hlds__make_hlds__add_pragma__Globals_15);
      }
      {
        hlds__make_hlds__add_pragma__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_20, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_20, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__check_required_feature_set_7_p_0_1));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_20, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__Globals_15));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_20, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_10));
      }
      {
        mercury__set__fold_4_p_0((MR_Word) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_required_feature_0, (MR_Word) &hlds__make_hlds__add_pragma_scalar_common_1[1], hlds__make_hlds__add_pragma__Var_20, hlds__make_hlds__add_pragma__FeatureSet_8, ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_18)), &hlds__make_hlds__add_pragma__conv1_STATE_VARIABLE_Specs_19);
      }
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_19 = ((MR_Word) hlds__make_hlds__add_pragma__conv1_STATE_VARIABLE_Specs_19);
    }
    *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_17 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_16;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pred_marker_11_p_0(
  MR_String hlds__make_hlds__add_pragma__PragmaName_12,
  MR_Word hlds__make_hlds__add_pragma__Name_13,
  MR_Integer hlds__make_hlds__add_pragma__Arity_14,
  MR_Word hlds__make_hlds__add_pragma__Status_15,
  MR_Word hlds__make_hlds__add_pragma__Context_16,
  MR_Word hlds__make_hlds__add_pragma__Marker_17,
  MR_Word hlds__make_hlds__add_pragma__ConflictMarkers_18,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_26,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_27,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_28)
{
  {
    MR_bool hlds__make_hlds__add_pragma__succeeded;
    MR_Word hlds__make_hlds__add_pragma__MustBeExported_21;
    MR_Word hlds__make_hlds__add_pragma__PredIds_22;
    MR_Word hlds__make_hlds__add_pragma__Preds_23;
    MR_Word hlds__make_hlds__add_pragma__Conflict_24;
    MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_31_31;

    {
      hlds__make_hlds__add_pragma__succeeded = mercury__builtin__semidet_fail_0_p_0();
    }
    if (hlds__make_hlds__add_pragma__succeeded)
      hlds__make_hlds__add_pragma__MustBeExported_21 = (MR_Integer) 1;
    else
      hlds__make_hlds__add_pragma__MustBeExported_21 = (MR_Integer) 0;
    {
      hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_p_0(hlds__make_hlds__add_pragma__Marker_17, hlds__make_hlds__add_pragma__PragmaName_12, hlds__make_hlds__add_pragma__Name_13, hlds__make_hlds__add_pragma__Arity_14, hlds__make_hlds__add_pragma__Status_15, hlds__make_hlds__add_pragma__MustBeExported_21, hlds__make_hlds__add_pragma__Context_16, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_25, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_26, &hlds__make_hlds__add_pragma__PredIds_22, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_27, &hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_31_31);
    }
    {
      hlds__hlds_module__module_info_get_preds_2_p_0(*hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_26, &hlds__make_hlds__add_pragma__Preds_23);
    }
    {
      hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0(hlds__make_hlds__add_pragma__Preds_23, hlds__make_hlds__add_pragma__PredIds_22, hlds__make_hlds__add_pragma__ConflictMarkers_18, &hlds__make_hlds__add_pragma__Conflict_24);
    }
    switch (hlds__make_hlds__add_pragma__Conflict_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_28 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_31_31;
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__make_hlds__add_pragma__Pieces_43;
          MR_Word hlds__make_hlds__add_pragma__Msg_44;
          MR_Word hlds__make_hlds__add_pragma__Spec_45;
          MR_Word hlds__make_hlds__add_pragma__Var_48;
          MR_Word hlds__make_hlds__add_pragma__Var_49;
          MR_Word hlds__make_hlds__add_pragma__Var_50;
          MR_Word hlds__make_hlds__add_pragma__Var_53;
          MR_Word hlds__make_hlds__add_pragma__Var_54;
          MR_Word hlds__make_hlds__add_pragma__Var_55;
          MR_Word hlds__make_hlds__add_pragma__Var_62;
          MR_Word hlds__make_hlds__add_pragma__Var_63;
          MR_Word hlds__make_hlds__add_pragma__Var_67;

          {
            hlds__make_hlds__add_pragma__Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_49, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__PragmaName_12));
          }
          {
            hlds__make_hlds__add_pragma__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_55, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Name_13));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_55, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_14));
          }
          {
            hlds__make_hlds__add_pragma__Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_54, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_55));
          }
          {
            hlds__make_hlds__add_pragma__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_53, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_54));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[51])));
          }
          {
            hlds__make_hlds__add_pragma__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[178])));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_50, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_53));
          }
          {
            hlds__make_hlds__add_pragma__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_48, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_49));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_48, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_50));
          }
          {
            hlds__make_hlds__add_pragma__Pieces_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[176])));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_43, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_48));
          }
          {
            hlds__make_hlds__add_pragma__Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_63, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_43));
          }
          {
            hlds__make_hlds__add_pragma__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_62, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_63));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__add_pragma__Msg_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_44, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_16));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_44, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_62));
          }
          {
            hlds__make_hlds__add_pragma__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_67, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_44));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__add_pragma__Spec_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_45, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_67));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_28 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_45));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_31_31));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_100_100_95_112_114_101_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_56_93_95_48_12_p_0(
  MR_Word hlds__make_hlds__add_pragma__Var_43,
  MR_String hlds__make_hlds__add_pragma__PragmaName_13,
  MR_Word hlds__make_hlds__add_pragma__Name_14,
  MR_Integer hlds__make_hlds__add_pragma__Arity_15,
  MR_Word hlds__make_hlds__add_pragma__Status_16,
  MR_Word hlds__make_hlds__add_pragma__MustBeExported_17,
  MR_Word hlds__make_hlds__add_pragma__Context_18,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_32,
  MR_Word * hlds__make_hlds__add_pragma__PredIds_21,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_33,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_34)
{
  {
    MR_Word hlds__make_hlds__add_pragma__PredTable0_48;

    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31, &hlds__make_hlds__add_pragma__PredTable0_48);
    }
    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__Name_14)) == (MR_mktag((MR_Integer) 1))))
    {
      {
        hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(hlds__make_hlds__add_pragma__PredTable0_48, (MR_Integer) 0, hlds__make_hlds__add_pragma__Name_14, hlds__make_hlds__add_pragma__Arity_15, hlds__make_hlds__add_pragma__PredIds_21);
      }
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_pragma.get_matching_pred_ids\'/4", (MR_String) "unqualified name");
        return;
      }
    }
    if ((*hlds__make_hlds__add_pragma__PredIds_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word hlds__make_hlds__add_pragma__DescPieces_30;
      MR_Word hlds__make_hlds__add_pragma__Var_35;

      {
        hlds__make_hlds__add_pragma__Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_35, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__PragmaName_13));
      }
      {
        hlds__make_hlds__add_pragma__DescPieces_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__DescPieces_30, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_35));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__DescPieces_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[175])));
      }
      {
        hlds__make_hlds__make_hlds_error__report_undefined_pred_or_func_error_6_p_0(hlds__make_hlds__add_pragma__Name_14, hlds__make_hlds__add_pragma__Arity_15, hlds__make_hlds__add_pragma__Context_18, hlds__make_hlds__add_pragma__DescPieces_30, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_34);
      }
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_32 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31;
    }
    else
    {
      MR_Word hlds__make_hlds__add_pragma__PredTable0_25;
      MR_Word hlds__make_hlds__add_pragma__Preds0_26;
      MR_Word hlds__make_hlds__add_pragma__Preds_27;
      MR_Word hlds__make_hlds__add_pragma__WrongStatus_28;
      MR_Word hlds__make_hlds__add_pragma__PredTable_29;

      {
        hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31, &hlds__make_hlds__add_pragma__PredTable0_25);
      }
      {
        hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__make_hlds__add_pragma__PredTable0_25, &hlds__make_hlds__add_pragma__Preds0_26);
      }
      {
        hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_p_0(hlds__make_hlds__add_pragma__Var_43, *hlds__make_hlds__add_pragma__PredIds_21, hlds__make_hlds__add_pragma__Status_16, hlds__make_hlds__add_pragma__MustBeExported_17, hlds__make_hlds__add_pragma__Preds0_26, &hlds__make_hlds__add_pragma__Preds_27, &hlds__make_hlds__add_pragma__WrongStatus_28);
      }
      switch (hlds__make_hlds__add_pragma__WrongStatus_28) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_34 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_33;
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__make_hlds__add_pragma__Pieces_62;
            MR_Word hlds__make_hlds__add_pragma__Msg_63;
            MR_Word hlds__make_hlds__add_pragma__Spec_64;
            MR_Word hlds__make_hlds__add_pragma__Var_67;
            MR_Word hlds__make_hlds__add_pragma__Var_68;
            MR_Word hlds__make_hlds__add_pragma__Var_69;
            MR_Word hlds__make_hlds__add_pragma__Var_72;
            MR_Word hlds__make_hlds__add_pragma__Var_73;
            MR_Word hlds__make_hlds__add_pragma__Var_74;
            MR_Word hlds__make_hlds__add_pragma__Var_81;
            MR_Word hlds__make_hlds__add_pragma__Var_82;
            MR_Word hlds__make_hlds__add_pragma__Var_86;

            {
              hlds__make_hlds__add_pragma__Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_68, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__PragmaName_13));
            }
            {
              hlds__make_hlds__add_pragma__Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_74, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Name_14));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_74, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_15));
            }
            {
              hlds__make_hlds__add_pragma__Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_73, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_74));
            }
            {
              hlds__make_hlds__add_pragma__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_72, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_73));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[50])));
            }
            {
              hlds__make_hlds__add_pragma__Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[177])));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_69, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_72));
            }
            {
              hlds__make_hlds__add_pragma__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_67, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_68));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_67, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_69));
            }
            {
              hlds__make_hlds__add_pragma__Pieces_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[176])));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_62, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_67));
            }
            {
              hlds__make_hlds__add_pragma__Var_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_82, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_62));
            }
            {
              hlds__make_hlds__add_pragma__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_81, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_82));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_pragma__Msg_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_63, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_18));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_63, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_81));
            }
            {
              hlds__make_hlds__add_pragma__Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_86, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_63));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_pragma__Spec_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_64, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_86));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_34 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_64));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_33));
            }
          }
          break;
      }
      {
        hlds__pred_table__predicate_table_set_preds_3_p_0(hlds__make_hlds__add_pragma__Preds_27, hlds__make_hlds__add_pragma__PredTable0_25, &hlds__make_hlds__add_pragma__PredTable_29);
      }
      {
        hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_pragma__PredTable_29, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_32);
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_p_0(
  MR_Word hlds__make_hlds__add_pragma__Var_32,
  MR_Word hlds__make_hlds__add_pragma__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_pragma__Status_3,
  MR_Word hlds__make_hlds__add_pragma__MustBeExported_4,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_0_5,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_6,
  MR_Word * hlds__make_hlds__add_pragma__HeadVar__7_7)
{
  {
    MR_bool hlds__make_hlds__add_pragma__succeeded;

    if ((hlds__make_hlds__add_pragma__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *hlds__make_hlds__add_pragma__HeadVar__7_7 = (MR_Integer) 0;
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_6 = hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_0_5;
    }
    else
    {
      MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
      MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
      MR_Word hlds__make_hlds__add_pragma__PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__make_hlds__add_pragma__PredIds_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word hlds__make_hlds__add_pragma__PredInfo0_21;
      MR_Word hlds__make_hlds__add_pragma__PredInfo_22;
      MR_Word hlds__make_hlds__add_pragma__WrongStatus0_23;
      MR_Word hlds__make_hlds__add_pragma__WrongStatus1_24;
      MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_28_28;
      MR_Word hlds__make_hlds__add_pragma__Markers0_37;
      MR_Word hlds__make_hlds__add_pragma__Markers_38;
      MR_Box hlds__make_hlds__add_pragma__conv0_PredInfo0_21;
      MR_Word hlds__make_hlds__add_pragma__Var_27;

      {
        mercury__map__lookup_3_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_30_30, hlds__make_hlds__add_pragma__TypeCtorInfo_31_31, hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_0_5, ((MR_Box) (hlds__make_hlds__add_pragma__PredId_14)), &hlds__make_hlds__add_pragma__conv0_PredInfo0_21);
      }
      hlds__make_hlds__add_pragma__PredInfo0_21 = ((MR_Word) hlds__make_hlds__add_pragma__conv0_PredInfo0_21);
      {
        hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_pragma__PredInfo0_21, &hlds__make_hlds__add_pragma__Markers0_37);
      }
      {
        hlds__hlds_pred__add_marker_3_p_0(hlds__make_hlds__add_pragma__Var_32, hlds__make_hlds__add_pragma__Markers0_37, &hlds__make_hlds__add_pragma__Markers_38);
      }
      {
        hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_pragma__Markers_38, hlds__make_hlds__add_pragma__PredInfo0_21, &hlds__make_hlds__add_pragma__PredInfo_22);
      }
      {
        hlds__make_hlds__add_pragma__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(hlds__make_hlds__add_pragma__PredInfo_22);
      }
      if (hlds__make_hlds__add_pragma__succeeded)
      {
        hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__MustBeExported_4 == (MR_Integer) 1);
        if (hlds__make_hlds__add_pragma__succeeded)
        {
          hlds__make_hlds__add_pragma__Var_27 = (MR_Word) hlds__make_hlds__add_pragma__Status_3;
          hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__Var_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          hlds__make_hlds__add_pragma__succeeded = !(hlds__make_hlds__add_pragma__succeeded);
        }
      }
      if (hlds__make_hlds__add_pragma__succeeded)
        hlds__make_hlds__add_pragma__WrongStatus0_23 = (MR_Integer) 1;
      else
        hlds__make_hlds__add_pragma__WrongStatus0_23 = (MR_Integer) 0;
      {
        mercury__map__det_update_4_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_30_30, hlds__make_hlds__add_pragma__TypeCtorInfo_31_31, ((MR_Box) (hlds__make_hlds__add_pragma__PredId_14)), ((MR_Box) (hlds__make_hlds__add_pragma__PredInfo_22)), hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_0_5, &hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_28_28);
      }
      {
        hlds__make_hlds__add_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_50_95_95_91_51_93_95_48_7_p_0(hlds__make_hlds__add_pragma__Var_32, hlds__make_hlds__add_pragma__PredIds_15, hlds__make_hlds__add_pragma__Status_3, hlds__make_hlds__add_pragma__MustBeExported_4, hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_28_28, hlds__make_hlds__add_pragma__STATE_VARIABLE_PredTable_6, &hlds__make_hlds__add_pragma__WrongStatus1_24);
      }
      {
        mercury__bool__or_3_p_0(hlds__make_hlds__add_pragma__WrongStatus0_23, hlds__make_hlds__add_pragma__WrongStatus1_24, hlds__make_hlds__add_pragma__HeadVar__7_7);
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_1(
  void * hlds__make_hlds__add_pragma__env_ptr_arg)
{
  {
    struct hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0_s * hlds__make_hlds__add_pragma__env_ptr = (struct hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0_s *) hlds__make_hlds__add_pragma__env_ptr_arg;

    MR_builtin_longjmp((hlds__make_hlds__add_pragma__env_ptr)->hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_3(
  void * hlds__make_hlds__add_pragma__env_ptr_arg)
{
  {
    struct hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0_s * hlds__make_hlds__add_pragma__env_ptr = (struct hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0_s *) hlds__make_hlds__add_pragma__env_ptr_arg;

    (hlds__make_hlds__add_pragma__env_ptr)->hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__Marker_15 = ((MR_Word) (hlds__make_hlds__add_pragma__env_ptr)->hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__conv1_Marker_15);
    {
      hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_2(hlds__make_hlds__add_pragma__env_ptr);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_2(
  void * hlds__make_hlds__add_pragma__env_ptr_arg)
{
  {
    struct hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0_s * hlds__make_hlds__add_pragma__env_ptr = (struct hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0_s *) hlds__make_hlds__add_pragma__env_ptr_arg;

    {
      (hlds__make_hlds__add_pragma__env_ptr)->hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0((hlds__make_hlds__add_pragma__env_ptr)->hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__Markers_13, (hlds__make_hlds__add_pragma__env_ptr)->hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__Marker_15);
    }
    if ((hlds__make_hlds__add_pragma__env_ptr)->hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__succeeded)
      {
        hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_1(hlds__make_hlds__add_pragma__env_ptr);
      }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_4(
  void * hlds__make_hlds__add_pragma__env_ptr_arg)
{
  {
    struct hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0_s * hlds__make_hlds__add_pragma__env_ptr = (struct hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0_s *) hlds__make_hlds__add_pragma__env_ptr_arg;

    if (MR_builtin_setjmp((hlds__make_hlds__add_pragma__env_ptr)->hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0, &(hlds__make_hlds__add_pragma__env_ptr)->hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__conv1_Marker_15, (hlds__make_hlds__add_pragma__env_ptr)->hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__ConflictList_3, hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_3, hlds__make_hlds__add_pragma__env_ptr);
          }
        }
        (hlds__make_hlds__add_pragma__env_ptr)->hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (hlds__make_hlds__add_pragma__env_ptr)->hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0(
  MR_Word hlds__make_hlds__add_pragma__PredTable_1,
  MR_Word hlds__make_hlds__add_pragma__HeadVar__2_2,
  MR_Word hlds__make_hlds__add_pragma__ConflictList_3,
  MR_Word * hlds__make_hlds__add_pragma__HeadVar__4_4)
{
  {
    struct hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0_s hlds__make_hlds__add_pragma__env;

    (hlds__make_hlds__add_pragma__env).hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__ConflictList_3 = hlds__make_hlds__add_pragma__ConflictList_3;
    while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      if ((hlds__make_hlds__add_pragma__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *hlds__make_hlds__add_pragma__HeadVar__4_4 = (MR_Integer) 0;
      else
      {
        MR_Word hlds__make_hlds__add_pragma__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__add_pragma__PredIds_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__add_pragma__PredInfo_12;
        MR_Box hlds__make_hlds__add_pragma__conv0_PredInfo_12;

        {
          mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__make_hlds__add_pragma__PredTable_1, ((MR_Box) (hlds__make_hlds__add_pragma__PredId_8)), &hlds__make_hlds__add_pragma__conv0_PredInfo_12);
        }
        hlds__make_hlds__add_pragma__PredInfo_12 = ((MR_Word) hlds__make_hlds__add_pragma__conv0_PredInfo_12);
        {
          hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_pragma__PredInfo_12, &(hlds__make_hlds__add_pragma__env).hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__Markers_13);
        }
        {
          hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_4(&hlds__make_hlds__add_pragma__env);
        }
        if ((hlds__make_hlds__add_pragma__env).hlds__make_hlds__add_pragma__pragma_check_markers_4_p_0_env_0__succeeded)
          *hlds__make_hlds__add_pragma__HeadVar__4_4 = (MR_Integer) 1;
        else
        {
          /* direct tailcall eliminated */
          {
            MR_Word hlds__make_hlds__add_pragma__next_value_of_HeadVar__2_2 = hlds__make_hlds__add_pragma__PredIds_9;

            hlds__make_hlds__add_pragma__HeadVar__2_2 = hlds__make_hlds__add_pragma__next_value_of_HeadVar__2_2;
          }
          continue;
        }
      }
      break;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_require_tail_recursion_6_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_2,
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_3,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_4,
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_5)
{
  {
    MR_Box hlds__make_hlds__add_pragma__closure = hlds__make_hlds__add_pragma__closure_arg;
    MR_Word hlds__make_hlds__add_pragma__conv1_STATE_VARIABLE_PredInfo_26;
    MR_Word hlds__make_hlds__add_pragma__conv0_STATE_VARIABLE_Specs_28;

    {
      hlds__make_hlds__add_pragma__add_pragma_require_tail_recursion_proc_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__closure, (MR_Integer) 5))), ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_2), &hlds__make_hlds__add_pragma__conv1_STATE_VARIABLE_PredInfo_26, ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_4), &hlds__make_hlds__add_pragma__conv0_STATE_VARIABLE_Specs_28);
    }
    *hlds__make_hlds__add_pragma__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_pragma__conv1_STATE_VARIABLE_PredInfo_26));
    *hlds__make_hlds__add_pragma__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__add_pragma__conv0_STATE_VARIABLE_Specs_28));
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_require_tail_recursion_6_p_0(
  MR_Word hlds__make_hlds__add_pragma__Pragma_7,
  MR_Word hlds__make_hlds__add_pragma__Context_8,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_32,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_33,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_34)
{
  {
    MR_bool hlds__make_hlds__add_pragma__succeeded;
    MR_Word hlds__make_hlds__add_pragma__Name_11;
    MR_Integer hlds__make_hlds__add_pragma__Arity_12;
    MR_Word hlds__make_hlds__add_pragma__MaybeMode_14;
    MR_Word hlds__make_hlds__add_pragma__PredIds_15;
    MR_Word hlds__make_hlds__add_pragma__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Pragma_7, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pragma__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Pragma_7, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma___MaybePF_13;

    hlds__make_hlds__add_pragma__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_35, (MR_Integer) 0)));
    hlds__make_hlds__add_pragma__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_35, (MR_Integer) 1)));
    hlds__make_hlds__add_pragma___MaybePF_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_35, (MR_Integer) 2)));
    hlds__make_hlds__add_pragma__MaybeMode_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_35, (MR_Integer) 3)));
    {
      hlds__make_hlds__add_pragma__get_matching_pred_ids_4_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__add_pragma__Name_11, hlds__make_hlds__add_pragma__Arity_12, &hlds__make_hlds__add_pragma__PredIds_15);
    }
    if ((hlds__make_hlds__add_pragma__PredIds_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        hlds__make_hlds__make_hlds_error__report_undefined_pred_or_func_error_6_p_0(hlds__make_hlds__add_pragma__Name_11, hlds__make_hlds__add_pragma__Arity_12, hlds__make_hlds__add_pragma__Context_8, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[41]), hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_34);
      }
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_32 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31;
    }
    else
    {
      MR_Word hlds__make_hlds__add_pragma__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_15, (MR_Integer) 1)));
      MR_Word hlds__make_hlds__add_pragma__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_15, (MR_Integer) 0)));

      if ((hlds__make_hlds__add_pragma__Var_116 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word hlds__make_hlds__add_pragma__TypeCtorInfo_107_107;
        MR_Word hlds__make_hlds__add_pragma__NameAndArity_18;
        MR_Word hlds__make_hlds__add_pragma__PredInfo0_19;
        MR_Word hlds__make_hlds__add_pragma__Procs0_20;
        MR_Word hlds__make_hlds__add_pragma__Procs_21;
        MR_Word hlds__make_hlds__add_pragma__PredInfo_25;

        {
          hlds__make_hlds__add_pragma__NameAndArity_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__NameAndArity_18, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Name_11));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__NameAndArity_18, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Arity_12));
        }
        {
          hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__add_pragma__Var_117, &hlds__make_hlds__add_pragma__PredInfo0_19);
        }
        {
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_pragma__PredInfo0_19, &hlds__make_hlds__add_pragma__Procs0_20);
        }
        hlds__make_hlds__add_pragma__TypeCtorInfo_107_107 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
        {
          mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, hlds__make_hlds__add_pragma__TypeCtorInfo_107_107, hlds__make_hlds__add_pragma__Procs0_20, &hlds__make_hlds__add_pragma__Procs_21);
        }
        if ((hlds__make_hlds__add_pragma__MaybeMode_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word hlds__make_hlds__add_pragma__Var_57;
          MR_Word hlds__make_hlds__add_pragma__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Pragma_7, (MR_Integer) 1)));
          MR_Word hlds__make_hlds__add_pragma__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Pragma_7, (MR_Integer) 0)));
          MR_Box hlds__make_hlds__add_pragma__conv3_PredInfo_25;
          MR_Box hlds__make_hlds__add_pragma__conv2_STATE_VARIABLE_Specs_34;

          {
            hlds__make_hlds__add_pragma__Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_57, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_57, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_require_tail_recursion_6_p_0_1));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_57, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_59));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_57, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_8));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_57, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__NameAndArity_18));
          }
          {
            mercury__list__foldl2_6_p_0((MR_Word) &hlds__make_hlds__add_pragma_scalar_common_2[0], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, (MR_Word) &hlds__make_hlds__add_pragma_scalar_common_1[1], hlds__make_hlds__add_pragma__Var_57, hlds__make_hlds__add_pragma__Procs_21, ((MR_Box) (hlds__make_hlds__add_pragma__PredInfo0_19)), &hlds__make_hlds__add_pragma__conv3_PredInfo_25, ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_33)), &hlds__make_hlds__add_pragma__conv2_STATE_VARIABLE_Specs_34);
          }
          hlds__make_hlds__add_pragma__PredInfo_25 = ((MR_Word) hlds__make_hlds__add_pragma__conv3_PredInfo_25);
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_34 = ((MR_Word) hlds__make_hlds__add_pragma__conv2_STATE_VARIABLE_Specs_34);
        }
        else
        {
          MR_Word hlds__make_hlds__add_pragma__Mode_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__MaybeMode_14, (MR_Integer) 0)));
          MR_Integer hlds__make_hlds__add_pragma__ProcId_23;

          {
            hlds__make_hlds__add_pragma__succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(hlds__make_hlds__add_pragma__Procs_21, hlds__make_hlds__add_pragma__Mode_22, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31, &hlds__make_hlds__add_pragma__ProcId_23);
          }
          if (hlds__make_hlds__add_pragma__succeeded)
          {
            MR_Word hlds__make_hlds__add_pragma__Proc_24;
            MR_Word hlds__make_hlds__add_pragma__Var_60;
            MR_Word hlds__make_hlds__add_pragma__Var_61;
            MR_Box hlds__make_hlds__add_pragma__conv4_Proc_24;
            MR_Word hlds__make_hlds__add_pragma__Var_104;

            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__make_hlds__add_pragma__TypeCtorInfo_107_107, hlds__make_hlds__add_pragma__Procs0_20, hlds__make_hlds__add_pragma__ProcId_23, &hlds__make_hlds__add_pragma__conv4_Proc_24);
            }
            hlds__make_hlds__add_pragma__Proc_24 = ((MR_Word) hlds__make_hlds__add_pragma__conv4_Proc_24);
            hlds__make_hlds__add_pragma__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Pragma_7, (MR_Integer) 0)));
            hlds__make_hlds__add_pragma__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Pragma_7, (MR_Integer) 1)));
            {
              hlds__make_hlds__add_pragma__Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_61, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__ProcId_23));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_61, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Proc_24));
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_require_tail_recursion_proc_8_p_0(hlds__make_hlds__add_pragma__Var_60, hlds__make_hlds__add_pragma__Context_8, hlds__make_hlds__add_pragma__NameAndArity_18, hlds__make_hlds__add_pragma__Var_61, hlds__make_hlds__add_pragma__PredInfo0_19, &hlds__make_hlds__add_pragma__PredInfo_25, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_34);
            }
          }
          else
          {
            MR_Word hlds__make_hlds__add_pragma__Msg_26;
            MR_Word hlds__make_hlds__add_pragma__Spec_27;
            MR_Word hlds__make_hlds__add_pragma__Var_65;
            MR_Word hlds__make_hlds__add_pragma__Var_66;
            MR_Word hlds__make_hlds__add_pragma__Var_79;
            MR_Word hlds__make_hlds__add_pragma__Var_80;
            MR_Word hlds__make_hlds__add_pragma__Var_84;
            MR_Word hlds__make_hlds__add_pragma__Pieces_95;

            {
              hlds__make_hlds__add_pragma__Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_66, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__NameAndArity_18));
            }
            {
              hlds__make_hlds__add_pragma__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_65, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_66));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[46])));
            }
            {
              hlds__make_hlds__add_pragma__Pieces_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_95, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[172])));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Pieces_95, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_65));
            }
            {
              hlds__make_hlds__add_pragma__Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_80, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Pieces_95));
            }
            {
              hlds__make_hlds__add_pragma__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_79, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_80));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_pragma__Msg_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_26, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_8));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_26, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_79));
            }
            {
              hlds__make_hlds__add_pragma__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_84, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_26));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_pragma__Spec_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_27, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_84));
            }
            hlds__make_hlds__add_pragma__PredInfo_25 = hlds__make_hlds__add_pragma__PredInfo0_19;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_34 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_27));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_33));
            }
          }
        }
        {
          hlds__hlds_module__module_info_set_pred_info_4_p_0(hlds__make_hlds__add_pragma__Var_117, hlds__make_hlds__add_pragma__PredInfo_25, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_32);
        }
      }
      else
      {
        MR_Word hlds__make_hlds__add_pragma__Var_53;
        MR_Word hlds__make_hlds__add_pragma__Msg_101;
        MR_Word hlds__make_hlds__add_pragma__Spec_102;

        {
          hlds__make_hlds__add_pragma__Msg_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_101, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_8));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[173])));
        }
        {
          hlds__make_hlds__add_pragma__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_53, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_101));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__Spec_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_102, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_102, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_53));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_34 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_102));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_33));
        }
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_32 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_31;
      }
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__get_matching_pred_ids_4_p_0(
  MR_Word hlds__make_hlds__add_pragma__Module0_5,
  MR_Word hlds__make_hlds__add_pragma__Name_6,
  MR_Integer hlds__make_hlds__add_pragma__Arity_7,
  MR_Word * hlds__make_hlds__add_pragma__PredIds_8)
{
  {
    MR_Word hlds__make_hlds__add_pragma__PredTable0_9;

    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__Module0_5, &hlds__make_hlds__add_pragma__PredTable0_9);
    }
    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__Name_6)) == (MR_mktag((MR_Integer) 1))))
    {
      {
        hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(hlds__make_hlds__add_pragma__PredTable0_9, (MR_Integer) 0, hlds__make_hlds__add_pragma__Name_6, hlds__make_hlds__add_pragma__Arity_7, hlds__make_hlds__add_pragma__PredIds_8);
      }
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_pragma.get_matching_pred_ids\'/4", (MR_String) "unqualified name");
        return;
      }
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_require_tail_recursion_proc_8_p_0(
  MR_Word hlds__make_hlds__add_pragma__RequireTailrec_9,
  MR_Word hlds__make_hlds__add_pragma__Context_10,
  MR_Word hlds__make_hlds__add_pragma__SymNameAndArity_11,
  MR_Word hlds__make_hlds__add_pragma__HeadVar__4_4,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_PredInfo_0_25,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_PredInfo_26,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_27,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_28)
{
  {
    MR_Integer hlds__make_hlds__add_pragma__ProcId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__HeadVar__4_4, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pragma__ProcInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__HeadVar__4_4, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__MaybeRequireTailrecOrig_16;

    {
      hlds__hlds_pred__proc_info_get_maybe_require_tailrec_info_2_p_0(hlds__make_hlds__add_pragma__ProcInfo0_13, &hlds__make_hlds__add_pragma__MaybeRequireTailrecOrig_16);
    }
    if ((hlds__make_hlds__add_pragma__MaybeRequireTailrecOrig_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word hlds__make_hlds__add_pragma__ProcInfo_24;

      {
        hlds__hlds_pred__proc_info_set_require_tailrec_info_3_p_0(hlds__make_hlds__add_pragma__RequireTailrec_9, hlds__make_hlds__add_pragma__ProcInfo0_13, &hlds__make_hlds__add_pragma__ProcInfo_24);
      }
      {
        hlds__hlds_pred__pred_info_set_proc_info_4_p_0(hlds__make_hlds__add_pragma__ProcId_12, hlds__make_hlds__add_pragma__ProcInfo_24, hlds__make_hlds__add_pragma__STATE_VARIABLE_PredInfo_0_25, hlds__make_hlds__add_pragma__STATE_VARIABLE_PredInfo_26);
      }
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_28 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_27;
    }
    else
    {
      MR_Word hlds__make_hlds__add_pragma__RequireTailrecOrig_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__MaybeRequireTailrecOrig_16, (MR_Integer) 0)));
      MR_Word hlds__make_hlds__add_pragma__Parts1_18;
      MR_Word hlds__make_hlds__add_pragma__ContextOrig_20;
      MR_Word hlds__make_hlds__add_pragma__Spec_23;
      MR_Word hlds__make_hlds__add_pragma__Var_32;
      MR_Word hlds__make_hlds__add_pragma__Var_35;
      MR_Word hlds__make_hlds__add_pragma__Var_38;
      MR_Word hlds__make_hlds__add_pragma__Var_39;
      MR_Word hlds__make_hlds__add_pragma__Var_49;
      MR_Word hlds__make_hlds__add_pragma__Var_50;
      MR_Word hlds__make_hlds__add_pragma__Var_51;
      MR_Word hlds__make_hlds__add_pragma__Var_52;
      MR_Word hlds__make_hlds__add_pragma__Var_54;
      MR_Word hlds__make_hlds__add_pragma__Var_55;

      {
        hlds__make_hlds__add_pragma__Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_39, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__SymNameAndArity_11));
      }
      {
        hlds__make_hlds__add_pragma__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_38, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_39));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[168])));
      }
      {
        hlds__make_hlds__add_pragma__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[166])));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_35, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_38));
      }
      {
        hlds__make_hlds__add_pragma__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[165])));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_32, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_35));
      }
      {
        hlds__make_hlds__add_pragma__Parts1_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Parts1_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[164])));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Parts1_18, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_32));
      }
      if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__RequireTailrecOrig_17)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word hlds__make_hlds__add_pragma__Var_21 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__RequireTailrecOrig_17, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word hlds__make_hlds__add_pragma__Var_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__RequireTailrecOrig_17, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

        hlds__make_hlds__add_pragma__ContextOrig_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__RequireTailrecOrig_17, (MR_Integer) 1)));
      }
      else
        hlds__make_hlds__add_pragma__ContextOrig_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__RequireTailrecOrig_17, (MR_Integer) 0)));
      {
        hlds__make_hlds__add_pragma__Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_52, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Parts1_18));
      }
      {
        hlds__make_hlds__add_pragma__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_51, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_52));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        hlds__make_hlds__add_pragma__Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_50, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_10));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_50, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_51));
      }
      {
        hlds__make_hlds__add_pragma__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_55, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__ContextOrig_20));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[171])));
      }
      {
        hlds__make_hlds__add_pragma__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_54, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_55));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        hlds__make_hlds__add_pragma__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_49, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_50));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_49, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_54));
      }
      {
        hlds__make_hlds__add_pragma__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_23, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_49));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_28 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_23));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_27));
      }
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_PredInfo_26 = hlds__make_hlds__add_pragma__STATE_VARIABLE_PredInfo_0_25;
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_unused_args_6_p_0(
  MR_Word hlds__make_hlds__add_pragma__UnusedArgsInfo_7,
  MR_Word hlds__make_hlds__add_pragma__Context_8,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_30,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_31,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_32)
{
  {
    MR_Word hlds__make_hlds__add_pragma__PredNameArityPFMn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__UnusedArgsInfo_7, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pragma__UnusedArgs_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__UnusedArgsInfo_7, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 0)));
    MR_Integer hlds__make_hlds__add_pragma__Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__PredOrFunc_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 2)));
    MR_Integer hlds__make_hlds__add_pragma__ModeNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__PredNameArityPFMn_11, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__add_pragma__Preds_17;
    MR_Word hlds__make_hlds__add_pragma__PredIds_18;

    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_29, &hlds__make_hlds__add_pragma__Preds_17);
    }
    {
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pragma__Preds_17, (MR_Integer) 0, hlds__make_hlds__add_pragma__PredOrFunc_15, hlds__make_hlds__add_pragma__SymName_13, hlds__make_hlds__add_pragma__Arity_14, &hlds__make_hlds__add_pragma__PredIds_18);
    }
    if ((hlds__make_hlds__add_pragma__PredIds_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word hlds__make_hlds__add_pragma__Msg_20;
      MR_Word hlds__make_hlds__add_pragma__Spec_21;
      MR_Word hlds__make_hlds__add_pragma__Var_79;

      {
        hlds__make_hlds__add_pragma__Msg_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_20, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_8));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[162])));
      }
      {
        hlds__make_hlds__add_pragma__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_79, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_20));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        hlds__make_hlds__add_pragma__Spec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_21, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_79));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_32 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_21));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_31));
      }
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_30 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_29;
    }
    else
    {
      MR_Word hlds__make_hlds__add_pragma__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_18, (MR_Integer) 1)));
      MR_Word hlds__make_hlds__add_pragma__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__PredIds_18, (MR_Integer) 0)));

      if ((hlds__make_hlds__add_pragma__Var_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word hlds__make_hlds__add_pragma__UnusedArgInfo0_23;
        MR_Integer hlds__make_hlds__add_pragma__ProcId_24;
        MR_Word hlds__make_hlds__add_pragma__UnusedArgInfo_25;
        MR_Word hlds__make_hlds__add_pragma__Var_58;

        {
          hlds__hlds_module__module_info_get_unused_arg_info_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_29, &hlds__make_hlds__add_pragma__UnusedArgInfo0_23);
        }
        {
          hlds__hlds_pred__proc_id_to_int_2_p_1(&hlds__make_hlds__add_pragma__ProcId_24, hlds__make_hlds__add_pragma__ModeNum_16);
        }
        {
          hlds__make_hlds__add_pragma__Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_58, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_88));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_58, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__ProcId_24));
        }
        {
          mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__make_hlds__add_pragma_scalar_common_1[0], ((MR_Box) (hlds__make_hlds__add_pragma__Var_58)), ((MR_Box) (hlds__make_hlds__add_pragma__UnusedArgs_12)), hlds__make_hlds__add_pragma__UnusedArgInfo0_23, &hlds__make_hlds__add_pragma__UnusedArgInfo_25);
        }
        {
          hlds__hlds_module__module_info_set_unused_arg_info_3_p_0(hlds__make_hlds__add_pragma__UnusedArgInfo_25, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_29, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_30);
        }
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_32 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_31;
      }
      else
      {
        MR_Word hlds__make_hlds__add_pragma__Var_54;
        MR_Word hlds__make_hlds__add_pragma__Msg_83;
        MR_Word hlds__make_hlds__add_pragma__Spec_84;

        {
          hlds__make_hlds__add_pragma__Msg_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_83, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_8));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[163])));
        }
        {
          hlds__make_hlds__add_pragma__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_54, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_83));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__Spec_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_84, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_54));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_32 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_84));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_31));
        }
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_30 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_29;
      }
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum_pragmas_5_p_0(
  MR_Word hlds__make_hlds__add_pragma__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_3,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_4,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((hlds__make_hlds__add_pragma__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_5 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_4;
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_3 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word hlds__make_hlds__add_pragma__SectionItem_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__make_hlds__add_pragma__SectionItems_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_20_20;
      MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_21_21;

      {
        hlds__make_hlds__add_pragma__add_foreign_enum_pragma_5_p_0(hlds__make_hlds__add_pragma__SectionItem_12, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_2, &hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_20_20, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_4, &hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_21_21);
      }
      /* direct tailcall eliminated */
      {
        MR_Word hlds__make_hlds__add_pragma__next_value_of_HeadVar__1_1 = hlds__make_hlds__add_pragma__SectionItems_13;
        MR_Word hlds__make_hlds__add_pragma__next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_20_20;
        MR_Word hlds__make_hlds__add_pragma__next_value_of_STATE_VARIABLE_Specs_0_4 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_21_21;

        hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_4 = hlds__make_hlds__add_pragma__next_value_of_STATE_VARIABLE_Specs_0_4;
        hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_2 = hlds__make_hlds__add_pragma__next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
        hlds__make_hlds__add_pragma__HeadVar__1_1 = hlds__make_hlds__add_pragma__next_value_of_HeadVar__1_1;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum_pragma_5_p_0(
  MR_Word hlds__make_hlds__add_pragma__SectionItem_6,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_18,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_19,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_20)
{
  {
    MR_bool hlds__make_hlds__add_pragma__succeeded;
    MR_Word hlds__make_hlds__add_pragma__ItemMercuryStatus_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__SectionItem_6, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pragma__ItemPragmaInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__SectionItem_6, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__Pragma_11;
    MR_Word hlds__make_hlds__add_pragma__Context_13;
    MR_Word hlds__make_hlds__add_pragma__FEInfo_15;
    MR_Word hlds__make_hlds__add_pragma__TypeStatus_16;
    MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_21_21;
    MR_Word hlds__make_hlds__add_pragma__Pragma_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragmaInfo_10, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pragma__MaybeAttrs_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragmaInfo_10, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragmaInfo_10, (MR_Integer) 2)));
    MR_Integer hlds__make_hlds__add_pragma___SeqNum_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragmaInfo_10, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__add_pragma__ItemExport_33;
    MR_Word hlds__make_hlds__add_pragma__Var_35;
    MR_Word hlds__make_hlds__add_pragma___MaybeAttrs_12;
    MR_Integer hlds__make_hlds__add_pragma___SeqNum_14;

    hlds__make_hlds__add_pragma__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pragma__ItemMercuryStatus_9)) == (MR_mktag((MR_Integer) 0)));
    if (hlds__make_hlds__add_pragma__succeeded)
    {
      hlds__make_hlds__add_pragma__ItemExport_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemMercuryStatus_9, (MR_Integer) 0)));
      hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__ItemExport_33 == (MR_Integer) 2);
      if (hlds__make_hlds__add_pragma__succeeded)
      {
        {
          hlds__make_hlds__add_pragma__Var_35 = parse_tree__prog_item__pragma_allowed_in_interface_1_f_0(hlds__make_hlds__add_pragma__Pragma_29);
        }
        hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__Var_35 == (MR_Integer) 0);
        if (hlds__make_hlds__add_pragma__succeeded)
          hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__MaybeAttrs_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    if (hlds__make_hlds__add_pragma__succeeded)
    {
      MR_Word hlds__make_hlds__add_pragma__ContextPieces_34;

      {
        hlds__make_hlds__add_pragma__ContextPieces_34 = parse_tree__prog_item__pragma_context_pieces_1_f_0(hlds__make_hlds__add_pragma__Pragma_29);
      }
      {
        hlds__make_hlds__make_hlds_error__error_is_exported_4_p_0(hlds__make_hlds__add_pragma__Context_31, hlds__make_hlds__add_pragma__ContextPieces_34, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_19, &hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_21_21);
      }
    }
    else
      hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_21_21 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_19;
    hlds__make_hlds__add_pragma__Pragma_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragmaInfo_10, (MR_Integer) 0)));
    hlds__make_hlds__add_pragma___MaybeAttrs_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragmaInfo_10, (MR_Integer) 1)));
    hlds__make_hlds__add_pragma__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragmaInfo_10, (MR_Integer) 2)));
    hlds__make_hlds__add_pragma___SeqNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragmaInfo_10, (MR_Integer) 3)));
    hlds__make_hlds__add_pragma__FEInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_11, (MR_Integer) 1)));
    {
      hlds__status__item_mercury_status_to_type_status_2_p_0(hlds__make_hlds__add_pragma__ItemMercuryStatus_9, &hlds__make_hlds__add_pragma__TypeStatus_16);
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0(hlds__make_hlds__add_pragma__FEInfo_15, hlds__make_hlds__add_pragma__TypeStatus_16, hlds__make_hlds__add_pragma__Context_13, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_17, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_18, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_21_21, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_20);
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_reserve_tag_pragmas_5_p_0(
  MR_Word hlds__make_hlds__add_pragma__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_3,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_4,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((hlds__make_hlds__add_pragma__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_5 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_4;
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_3 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word hlds__make_hlds__add_pragma__SectionItem_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__make_hlds__add_pragma__SectionItems_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_20_20;
      MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_21_21;
      MR_Word hlds__make_hlds__add_pragma__ItemMercuryStatus_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__SectionItem_12, (MR_Integer) 0)));
      MR_Word hlds__make_hlds__add_pragma__ItemPragmaInfo_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__SectionItem_12, (MR_Integer) 1)));
      MR_Word hlds__make_hlds__add_pragma__Pragma_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragmaInfo_32, (MR_Integer) 0)));
      MR_Word hlds__make_hlds__add_pragma__Context_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragmaInfo_32, (MR_Integer) 2)));
      MR_Word hlds__make_hlds__add_pragma__TypeCtor_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Pragma_33, (MR_Integer) 1)));
      MR_Word hlds__make_hlds__add_pragma__TypeStatus_38;
      MR_Word hlds__make_hlds__add_pragma___MaybeAttrs_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragmaInfo_32, (MR_Integer) 1)));
      MR_Integer hlds__make_hlds__add_pragma___SeqNum_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__ItemPragmaInfo_32, (MR_Integer) 3)));

      {
        hlds__status__item_mercury_status_to_type_status_2_p_0(hlds__make_hlds__add_pragma__ItemMercuryStatus_31, &hlds__make_hlds__add_pragma__TypeStatus_38);
      }
      {
        hlds__make_hlds__add_pragma__add_pragma_reserve_tag_7_p_0(hlds__make_hlds__add_pragma__TypeCtor_37, hlds__make_hlds__add_pragma__TypeStatus_38, hlds__make_hlds__add_pragma__Context_35, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_2, &hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_20_20, hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_4, &hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_21_21);
      }
      /* direct tailcall eliminated */
      {
        MR_Word hlds__make_hlds__add_pragma__next_value_of_HeadVar__1_1 = hlds__make_hlds__add_pragma__SectionItems_13;
        MR_Word hlds__make_hlds__add_pragma__next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_20_20;
        MR_Word hlds__make_hlds__add_pragma__next_value_of_STATE_VARIABLE_Specs_0_4 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_21_21;

        hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_4 = hlds__make_hlds__add_pragma__next_value_of_STATE_VARIABLE_Specs_0_4;
        hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_2 = hlds__make_hlds__add_pragma__next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
        hlds__make_hlds__add_pragma__HeadVar__1_1 = hlds__make_hlds__add_pragma__next_value_of_HeadVar__1_1;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_reserve_tag_7_p_0(
  MR_Word hlds__make_hlds__add_pragma__TypeCtor_8,
  MR_Word hlds__make_hlds__add_pragma__PragmaStatus_9,
  MR_Word hlds__make_hlds__add_pragma__Context_10,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_48,
  MR_Word hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_49,
  MR_Word * hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_50)
{
  {
    MR_bool hlds__make_hlds__add_pragma__succeeded;
    MR_Word hlds__make_hlds__add_pragma__TypeName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeCtor_8, (MR_Integer) 0)));
    MR_Integer hlds__make_hlds__add_pragma__TypeArity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__TypeCtor_8, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__TypeTable0_15;
    MR_Word hlds__make_hlds__add_pragma__MaybeError_29;
    MR_Word hlds__make_hlds__add_pragma__TypeDefn0_16;

    {
      hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_47, &hlds__make_hlds__add_pragma__TypeTable0_15);
    }
    {
      hlds__make_hlds__add_pragma__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(hlds__make_hlds__add_pragma__TypeTable0_15, hlds__make_hlds__add_pragma__TypeCtor_8, &hlds__make_hlds__add_pragma__TypeDefn0_16);
    }
    if (hlds__make_hlds__add_pragma__succeeded)
    {
      MR_Word hlds__make_hlds__add_pragma__TypeBody0_17;
      MR_Word hlds__make_hlds__add_pragma__TypeStatus_18;

      {
        hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_pragma__TypeDefn0_16, &hlds__make_hlds__add_pragma__TypeBody0_17);
      }
      {
        hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_pragma__TypeDefn0_16, &hlds__make_hlds__add_pragma__TypeStatus_18);
      }
      {
        hlds__make_hlds__add_pragma__succeeded = hlds__status____Unify____type_status_0_0(hlds__make_hlds__add_pragma__TypeStatus_18, hlds__make_hlds__add_pragma__PragmaStatus_9);
      }
      if (!(hlds__make_hlds__add_pragma__succeeded))
      {
        MR_Word hlds__make_hlds__add_pragma__Var_51 = (MR_Word) hlds__make_hlds__add_pragma__TypeStatus_18;
        MR_Word hlds__make_hlds__add_pragma__Var_140;

        hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__Var_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
        if (hlds__make_hlds__add_pragma__succeeded)
        {
          hlds__make_hlds__add_pragma__Var_140 = (MR_Word) hlds__make_hlds__add_pragma__PragmaStatus_9;
          if ((hlds__make_hlds__add_pragma__Var_140 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
            hlds__make_hlds__add_pragma__succeeded = MR_TRUE;
          else
          if ((hlds__make_hlds__add_pragma__Var_140 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
            hlds__make_hlds__add_pragma__succeeded = MR_TRUE;
          else
            hlds__make_hlds__add_pragma__succeeded = MR_FALSE;
        }
      }
      if (hlds__make_hlds__add_pragma__succeeded)
        switch (MR_tag((MR_Word) hlds__make_hlds__add_pragma__TypeBody0_17)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__make_hlds__add_pragma__Var_56;
              MR_Word hlds__make_hlds__add_pragma__Var_57;
              MR_Word hlds__make_hlds__add_pragma__Var_58;
              MR_Tuple hlds__make_hlds__add_pragma__Var_65;
              MR_Word hlds__make_hlds__add_pragma__ErrorPieces_136;

              {
                hlds__make_hlds__add_pragma__Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_58, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeName_13));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_58, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeArity_14));
              }
              {
                hlds__make_hlds__add_pragma__Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_57, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_58));
              }
              {
                hlds__make_hlds__add_pragma__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_56, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_57));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[112])));
              }
              {
                hlds__make_hlds__add_pragma__ErrorPieces_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ErrorPieces_136, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[155])));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ErrorPieces_136, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_56));
              }
              {
                hlds__make_hlds__add_pragma__Var_65 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_65, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__ErrorPieces_136));
              }
              {
                hlds__make_hlds__add_pragma__MaybeError_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__MaybeError_29, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_65));
              }
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_48 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_47;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__make_hlds__add_pragma__Body_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody0_17, (MR_Integer) 0)));
              MR_Word hlds__make_hlds__add_pragma__MaybeUserEqComp_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody0_17, (MR_Integer) 4)));
              MR_Word hlds__make_hlds__add_pragma__MaybeDirectArgCtors_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody0_17, (MR_Integer) 5)));
              MR_Word hlds__make_hlds__add_pragma__ReservedTag0_25 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody0_17, (MR_Integer) 6)))) & (MR_Integer) 1);
              MR_Word hlds__make_hlds__add_pragma__IsForeign_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody0_17, (MR_Integer) 7)));
              MR_Word hlds__make_hlds__add_pragma__Globals_31;
              MR_Word hlds__make_hlds__add_pragma__CtorTags_32;
              MR_Word hlds__make_hlds__add_pragma__ReservedAddr_33;
              MR_Word hlds__make_hlds__add_pragma__DuTypeKind_34;
              MR_Word hlds__make_hlds__add_pragma__TypeBody_35;
              MR_Word hlds__make_hlds__add_pragma__TypeDefn_36;
              MR_Word hlds__make_hlds__add_pragma__TypeTable_37;
              MR_Word hlds__make_hlds__add_pragma___CtorTags0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody0_17, (MR_Integer) 1)));
              MR_Word hlds__make_hlds__add_pragma___CheaperTagTest_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody0_17, (MR_Integer) 2)));
              MR_Word hlds__make_hlds__add_pragma___DuTypeKind_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody0_17, (MR_Integer) 3)));
              MR_Word hlds__make_hlds__add_pragma___ReservedAddr_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody0_17, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word hlds__make_hlds__add_pragma__Var_67;

              hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__ReservedTag0_25 == (MR_Integer) 0);
              if (hlds__make_hlds__add_pragma__succeeded)
              {
                hlds__make_hlds__add_pragma__Var_67 = (MR_Word) hlds__make_hlds__add_pragma__TypeStatus_18;
                hlds__make_hlds__add_pragma__succeeded = (hlds__make_hlds__add_pragma__Var_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                hlds__make_hlds__add_pragma__succeeded = !(hlds__make_hlds__add_pragma__succeeded);
              }
              if (hlds__make_hlds__add_pragma__succeeded)
              {
                hlds__make_hlds__add_pragma__MaybeError_29 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_4[0]);
              }
              else
                hlds__make_hlds__add_pragma__MaybeError_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_47, &hlds__make_hlds__add_pragma__Globals_31);
              }
              {
                hlds__make_tags__assign_constructor_tags_8_p_0(hlds__make_hlds__add_pragma__Body_19, hlds__make_hlds__add_pragma__MaybeUserEqComp_23, hlds__make_hlds__add_pragma__TypeCtor_8, (MR_Integer) 0, hlds__make_hlds__add_pragma__Globals_31, &hlds__make_hlds__add_pragma__CtorTags_32, &hlds__make_hlds__add_pragma__ReservedAddr_33, &hlds__make_hlds__add_pragma__DuTypeKind_34);
              }
              {
                hlds__make_hlds__add_pragma__TypeBody_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody_35, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Body_19));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody_35, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__CtorTags_32));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody_35, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody_35, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__DuTypeKind_34));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody_35, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__MaybeUserEqComp_23));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody_35, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__MaybeDirectArgCtors_24));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody_35, 6) = ((MR_Box) (((MR_Integer) 0 | ((hlds__make_hlds__add_pragma__ReservedAddr_33 << (MR_Integer) 1)))));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__TypeBody_35, 7) = ((MR_Box) (hlds__make_hlds__add_pragma__IsForeign_27));
              }
              {
                hlds__hlds_data__set_type_defn_body_3_p_0(hlds__make_hlds__add_pragma__TypeBody_35, hlds__make_hlds__add_pragma__TypeDefn0_16, &hlds__make_hlds__add_pragma__TypeDefn_36);
              }
              {
                hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_pragma__TypeCtor_8, hlds__make_hlds__add_pragma__TypeDefn_36, hlds__make_hlds__add_pragma__TypeTable0_15, &hlds__make_hlds__add_pragma__TypeTable_37);
              }
              {
                hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_pragma__TypeTable_37, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_47, hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_48);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__make_hlds__add_pragma__Var_56;
              MR_Word hlds__make_hlds__add_pragma__Var_57;
              MR_Word hlds__make_hlds__add_pragma__Var_58;
              MR_Tuple hlds__make_hlds__add_pragma__Var_65;
              MR_Word hlds__make_hlds__add_pragma__ErrorPieces_136;

              {
                hlds__make_hlds__add_pragma__Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_58, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeName_13));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_58, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeArity_14));
              }
              {
                hlds__make_hlds__add_pragma__Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_57, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_58));
              }
              {
                hlds__make_hlds__add_pragma__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_56, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_57));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[112])));
              }
              {
                hlds__make_hlds__add_pragma__ErrorPieces_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ErrorPieces_136, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[155])));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ErrorPieces_136, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_56));
              }
              {
                hlds__make_hlds__add_pragma__Var_65 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_65, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__ErrorPieces_136));
              }
              {
                hlds__make_hlds__add_pragma__MaybeError_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__MaybeError_29, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_65));
              }
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_48 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_47;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word hlds__make_hlds__add_pragma__Var_56;
              MR_Word hlds__make_hlds__add_pragma__Var_57;
              MR_Word hlds__make_hlds__add_pragma__Var_58;
              MR_Tuple hlds__make_hlds__add_pragma__Var_65;
              MR_Word hlds__make_hlds__add_pragma__ErrorPieces_136;

              {
                hlds__make_hlds__add_pragma__Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_58, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeName_13));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_58, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeArity_14));
              }
              {
                hlds__make_hlds__add_pragma__Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_57, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_58));
              }
              {
                hlds__make_hlds__add_pragma__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_56, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_57));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[112])));
              }
              {
                hlds__make_hlds__add_pragma__ErrorPieces_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ErrorPieces_136, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[155])));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ErrorPieces_136, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_56));
              }
              {
                hlds__make_hlds__add_pragma__Var_65 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_65, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__ErrorPieces_136));
              }
              {
                hlds__make_hlds__add_pragma__MaybeError_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__MaybeError_29, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_65));
              }
              *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_48 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_47;
            }
            break;
        }
      else
      {
        hlds__make_hlds__add_pragma__MaybeError_29 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_4[1]);
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_48 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_47;
      }
    }
    else
    {
      MR_Word hlds__make_hlds__add_pragma__Var_99;
      MR_Word hlds__make_hlds__add_pragma__Var_100;
      MR_Word hlds__make_hlds__add_pragma__Var_101;
      MR_Tuple hlds__make_hlds__add_pragma__Var_108;
      MR_Word hlds__make_hlds__add_pragma__ErrorPieces_138;

      {
        hlds__make_hlds__add_pragma__Var_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_101, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeName_13));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_101, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeArity_14));
      }
      {
        hlds__make_hlds__add_pragma__Var_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_100, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_100, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_101));
      }
      {
        hlds__make_hlds__add_pragma__Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_99, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_100));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[51])));
      }
      {
        hlds__make_hlds__add_pragma__ErrorPieces_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ErrorPieces_138, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[158])));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ErrorPieces_138, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_99));
      }
      {
        hlds__make_hlds__add_pragma__Var_108 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_108, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_108, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__ErrorPieces_138));
      }
      {
        hlds__make_hlds__add_pragma__MaybeError_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__MaybeError_29, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_108));
      }
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_48 = hlds__make_hlds__add_pragma__STATE_VARIABLE_ModuleInfo_0_47;
    }
    if ((hlds__make_hlds__add_pragma__MaybeError_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_50 = hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_49;
    else
    {
      MR_Word hlds__make_hlds__add_pragma__Severity_42;
      MR_Word hlds__make_hlds__add_pragma__MaybeErrorPieces_43;
      MR_Word hlds__make_hlds__add_pragma__ContextPieces_44;
      MR_Word hlds__make_hlds__add_pragma__Msg_45;
      MR_Word hlds__make_hlds__add_pragma__Spec_46;
      MR_Tuple hlds__make_hlds__add_pragma__Var_110 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__MaybeError_29, (MR_Integer) 0)));
      MR_Word hlds__make_hlds__add_pragma__Var_113;
      MR_Word hlds__make_hlds__add_pragma__Var_116;
      MR_Word hlds__make_hlds__add_pragma__Var_119;
      MR_Word hlds__make_hlds__add_pragma__Var_120;
      MR_Word hlds__make_hlds__add_pragma__Var_121;
      MR_Word hlds__make_hlds__add_pragma__Var_128;
      MR_Word hlds__make_hlds__add_pragma__Var_129;
      MR_Word hlds__make_hlds__add_pragma__Var_130;
      MR_Word hlds__make_hlds__add_pragma__Var_133;

      hlds__make_hlds__add_pragma__Severity_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_110, (MR_Integer) 0)));
      hlds__make_hlds__add_pragma__MaybeErrorPieces_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_110, (MR_Integer) 1)));
      {
        hlds__make_hlds__add_pragma__Var_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_121, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeName_13));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_121, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__TypeArity_14));
      }
      {
        hlds__make_hlds__add_pragma__Var_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__Var_120, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_121));
      }
      {
        hlds__make_hlds__add_pragma__Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_119, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_120));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma_scalar_common_1[127])));
      }
      {
        hlds__make_hlds__add_pragma__Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_116, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[161])));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_116, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_119));
      }
      {
        hlds__make_hlds__add_pragma__Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[160])));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_113, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_116));
      }
      {
        hlds__make_hlds__add_pragma__ContextPieces_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ContextPieces_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma_scalar_common_1[159])));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__ContextPieces_44, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_113));
      }
      {
        hlds__make_hlds__add_pragma__Var_130 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__ContextPieces_44, hlds__make_hlds__add_pragma__MaybeErrorPieces_43);
      }
      {
        hlds__make_hlds__add_pragma__Var_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Var_129, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_130));
      }
      {
        hlds__make_hlds__add_pragma__Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_128, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_129));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        hlds__make_hlds__add_pragma__Msg_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_45, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Context_10));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Msg_45, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_128));
      }
      {
        hlds__make_hlds__add_pragma__Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_133, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Msg_45));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__Var_133, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        hlds__make_hlds__add_pragma__Spec_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_46, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Severity_42));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__Spec_46, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__Var_133));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_50 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__Spec_46));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__STATE_VARIABLE_Specs_0_49));
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma____Unify____add_marker_pred_info_0_0_10001(
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_2)
{
  {
    MR_bool hlds__make_hlds__add_pragma__succeeded;

    {
      hlds__make_hlds__add_pragma__succeeded = hlds__make_hlds__add_pragma____Unify____add_marker_pred_info_0_0(((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_2));
    }
    return hlds__make_hlds__add_pragma__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma____Compare____add_marker_pred_info_0_0_10001(
  MR_Box * hlds__make_hlds__add_pragma__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_2,
  MR_Box hlds__make_hlds__add_pragma__wrapper_arg_3)
{
  {
    MR_Word hlds__make_hlds__add_pragma__conv0_HeadVar__1_1;

    {
      hlds__make_hlds__add_pragma____Compare____add_marker_pred_info_0_0(&hlds__make_hlds__add_pragma__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_pragma__wrapper_arg_3));
    }
    *hlds__make_hlds__add_pragma__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_pragma__conv0_HeadVar__1_1));
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

/* :- end_module hlds.make_hlds.add_pragma. */
