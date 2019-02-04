/*
** Automatically generated from `term_constr_errors.m'
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


/* :- module transform_hlds.term_constr_errors. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__term_constr_errors__init
ENDINIT
*/

#include "transform_hlds.term_constr_errors.mih"


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
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_PseudoTypeInfo transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__field_types_term2_error_0_0[2];

static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_0_0;

static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_term2_error_0_0[1];

static const MR_DuPtagLayout transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_ptag_ordered_term2_error_0[1];

static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_name_ordered_term2_error_0[1];

static const MR_Integer transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__functor_number_map_term2_error_0[1];

static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_0;

static const MR_PseudoTypeInfo transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__field_types_term2_error_kind_0_1[2];

static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_1;

static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_2;

static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_3;

static const MR_PseudoTypeInfo transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__field_types_term2_error_kind_0_4[1];

static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_4;

static const MR_PseudoTypeInfo transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__field_types_term2_error_kind_0_5[1];

static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_5;

static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_term2_error_kind_0_0[3];

static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_term2_error_kind_0_1[1];

static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_term2_error_kind_0_2[1];

static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_term2_error_kind_0_3[1];

static const MR_DuPtagLayout transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_ptag_ordered_term2_error_kind_0[4];

static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_name_ordered_term2_error_kind_0[6];

static const MR_Integer transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__functor_number_map_term2_error_kind_0[6];

static MR_bool MR_CALL 
transform_hlds__term_constr_errors____Unify____term2_error_0_0_10001(
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_errors____Compare____term2_error_0_0_10001(
  MR_Box * transform_hlds__term_constr_errors__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_errors____Unify____term2_error_kind_0_0_10001(
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_errors____Compare____term2_error_kind_0_0_10001(
  MR_Box * transform_hlds__term_constr_errors__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__IntroducedFrom__pred__term2_error_kind_description__284__1_2_p_0(
  MR_Word transform_hlds__term_constr_errors__PredId_17,
  MR_Word transform_hlds__term_constr_errors__SCCPredId_19);

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__IntroducedFrom__pred__term2_error_kind_description__260__1_2_p_0(
  MR_Word transform_hlds__term_constr_errors__CallerPPId_9,
  MR_Word transform_hlds__term_constr_errors__PPId_11);

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__IntroducedFrom__pred__decide_what_term2_errors_to_report__148__1_1_p_0(
  MR_Word transform_hlds__term_constr_errors__LambdaHeadVar__1_33);

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__IntroducedFrom__pred__decide_what_term2_errors_to_report__133__1_2_p_0(
  MR_Word transform_hlds__term_constr_errors__ModuleInfo_5,
  MR_Word transform_hlds__term_constr_errors__LambdaHeadVar__1_32);

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__IntroducedFrom__pred__decide_what_term2_errors_to_report__121__1_2_p_0(
  MR_Word transform_hlds__term_constr_errors__ModuleInfo_5,
  MR_Word transform_hlds__term_constr_errors__LambdaHeadVar__1_30);

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__term2_error_kind_description_4_p_0_2(
  MR_Box transform_hlds__term_constr_errors__closure_arg);

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__term2_error_kind_description_4_p_0_1(
  MR_Box transform_hlds__term_constr_errors__closure_arg);

static void MR_CALL 
transform_hlds__term_constr_errors__term2_error_kind_description_4_p_0(
  MR_Word transform_hlds__term_constr_errors__ModuleInfo_5,
  MR_Word transform_hlds__term_constr_errors__Single_6,
  MR_Word transform_hlds__term_constr_errors__Error_7,
  MR_Word * transform_hlds__term_constr_errors__Pieces_8);

static void MR_CALL 
transform_hlds__term_constr_errors__describe_term2_error_6_p_0(
  MR_Word transform_hlds__term_constr_errors__ModuleInfo_7,
  MR_Word transform_hlds__term_constr_errors__Single_8,
  MR_Word transform_hlds__term_constr_errors__MaybeErrorNum_9,
  MR_Word transform_hlds__term_constr_errors__Error_10,
  MR_Word transform_hlds__term_constr_errors__STATE_VARIABLE_ReasonMsgsCord_0_20,
  MR_Word * transform_hlds__term_constr_errors__STATE_VARIABLE_ReasonMsgsCord_21);

static void MR_CALL 
transform_hlds__term_constr_errors__describe_term2_errors_6_p_0(
  MR_Word transform_hlds__term_constr_errors__ModuleInfo_1,
  MR_Word transform_hlds__term_constr_errors__Single_2,
  MR_Integer transform_hlds__term_constr_errors__ErrNum0_3,
  MR_Word transform_hlds__term_constr_errors__HeadVar__4_4,
  MR_Word transform_hlds__term_constr_errors__STATE_VARIABLE_ReasonMsgsCord_0_5,
  MR_Word * transform_hlds__term_constr_errors__STATE_VARIABLE_ReasonMsgsCord_6);

static void MR_CALL 
transform_hlds__term_constr_errors__report_term2_errors_5_p_0(
  MR_Word transform_hlds__term_constr_errors__ModuleInfo_6,
  MR_Word transform_hlds__term_constr_errors__SCC_7,
  MR_Word transform_hlds__term_constr_errors__Errors_8,
  MR_Word transform_hlds__term_constr_errors__STATE_VARIABLE_Specs_0_26,
  MR_Word * transform_hlds__term_constr_errors__STATE_VARIABLE_Specs_27);

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__maybe_report_term2_errors_5_p_0_3(
  MR_Box transform_hlds__term_constr_errors__closure_arg,
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__maybe_report_term2_errors_5_p_0_2(
  MR_Box transform_hlds__term_constr_errors__closure_arg,
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__maybe_report_term2_errors_5_p_0_1(
  MR_Box transform_hlds__term_constr_errors__closure_arg,
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_1);


static /* final */ const MR_Box transform_hlds__term_constr_errors_scalar_common_1[45][2];

static /* final */ const MR_Box transform_hlds__term_constr_errors_scalar_common_2[3][5];

static /* final */ const MR_Box transform_hlds__term_constr_errors_scalar_common_3[1][4];

static /* final */ const MR_Box transform_hlds__term_constr_errors_scalar_common_4[1][3];




static /* final */ const MR_Box transform_hlds__term_constr_errors_scalar_common_1[45][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "mutually recursive procedures"))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_1[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Termination of the"))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_1[1])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which could not be proven to terminate."))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not satisfiable."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_1[4])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The termination condition"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) ((MR_String) "does_not_terminate"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "There is a"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_1[4])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "it."))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_1[4])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which is not known to terminate."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_1[4])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "It contains a higher-order call."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_1[4])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "imported from another module."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_1[4])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "predicates and/or functions"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "It contains one or more"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Termination of"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not proven, for unknown reason(s)."))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not proven for the following reason:"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not proven for the following reasons:"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "It"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "calls"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "There is a call the foreign procedure"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_constr_errors_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_errors_scalar_common_2[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_errors_scalar_common_3[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_errors_scalar_common_4[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&transform_hlds__term_constr_errors_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__term_constr_errors__maybe_report_term2_errors_5_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_PseudoTypeInfo transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__field_types_term2_error_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_kind_0
};

static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_0_0 = {
  (MR_String) "term2_error",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__field_types_term2_error_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_term2_error_0_0[1] = {
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_0_0
};

static const MR_DuPtagLayout transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_ptag_ordered_term2_error_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_term2_error_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_name_ordered_term2_error_0[1] = {
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_0_0
};

static const MR_Integer transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__functor_number_map_term2_error_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_errors____Unify____term2_error_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_errors____Compare____term2_error_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_errors",
  (MR_String) "term2_error",
  {     transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_name_ordered_term2_error_0 },
  {     transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_ptag_ordered_term2_error_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__functor_number_map_term2_error_0
};

static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_0 = {
  (MR_String) "imported_pred",
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

static const MR_PseudoTypeInfo transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__field_types_term2_error_kind_0_1[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_1 = {
  (MR_String) "can_loop_proc_called",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__field_types_term2_error_kind_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_2 = {
  (MR_String) "cond_not_satisfied",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_3 = {
  (MR_String) "horder_call",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__field_types_term2_error_kind_0_4[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
};

static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_4 = {
  (MR_String) "does_not_term_pragma",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 4,
  transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__field_types_term2_error_kind_0_4,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__field_types_term2_error_kind_0_5[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_5 = {
  (MR_String) "foreign_proc_called",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 5,
  transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__field_types_term2_error_kind_0_5,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_term2_error_kind_0_0[3] = {
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_0,
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_2,
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_3
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_term2_error_kind_0_1[1] = {
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_1
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_term2_error_kind_0_2[1] = {
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_4
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_term2_error_kind_0_3[1] = {
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_5
};

static const MR_DuPtagLayout transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_ptag_ordered_term2_error_kind_0[4] = {
  {
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_term2_error_kind_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_term2_error_kind_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_term2_error_kind_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_term2_error_kind_0_3
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_name_ordered_term2_error_kind_0[6] = {
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_1,
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_2,
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_4,
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_5,
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_3,
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_0
};

static const MR_Integer transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__functor_number_map_term2_error_kind_0[6] = {
  (MR_Integer) 5,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_errors____Unify____term2_error_kind_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_errors____Compare____term2_error_kind_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_errors",
  (MR_String) "term2_error_kind",
  {     transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_name_ordered_term2_error_kind_0 },
  {     transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_ptag_ordered_term2_error_kind_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__functor_number_map_term2_error_kind_0
};

static MR_bool MR_CALL 
transform_hlds__term_constr_errors____Unify____term2_error_0_0_10001(
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_constr_errors__succeeded;

    {
      transform_hlds__term_constr_errors__succeeded = transform_hlds__term_constr_errors____Unify____term2_error_0_0(((MR_Word) transform_hlds__term_constr_errors__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_errors__wrapper_arg_2));
    }
    return transform_hlds__term_constr_errors__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_errors____Compare____term2_error_0_0_10001(
  MR_Box * transform_hlds__term_constr_errors__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_constr_errors__conv0_HeadVar__1_1;

    {
      transform_hlds__term_constr_errors____Compare____term2_error_0_0(&transform_hlds__term_constr_errors__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_errors__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_errors__wrapper_arg_3));
    }
    *transform_hlds__term_constr_errors__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_errors__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_errors____Unify____term2_error_kind_0_0_10001(
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_constr_errors__succeeded;

    {
      transform_hlds__term_constr_errors__succeeded = transform_hlds__term_constr_errors____Unify____term2_error_kind_0_0(((MR_Word) transform_hlds__term_constr_errors__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_errors__wrapper_arg_2));
    }
    return transform_hlds__term_constr_errors__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_errors____Compare____term2_error_kind_0_0_10001(
  MR_Box * transform_hlds__term_constr_errors__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_constr_errors__conv0_HeadVar__1_1;

    {
      transform_hlds__term_constr_errors____Compare____term2_error_kind_0_0(&transform_hlds__term_constr_errors__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_errors__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_errors__wrapper_arg_3));
    }
    *transform_hlds__term_constr_errors__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_errors__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__IntroducedFrom__pred__term2_error_kind_description__284__1_2_p_0(
  MR_Word transform_hlds__term_constr_errors__PredId_17,
  MR_Word transform_hlds__term_constr_errors__SCCPredId_19)
{
  {
    MR_bool transform_hlds__term_constr_errors__succeeded;

    {
      transform_hlds__term_constr_errors__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__term_constr_errors__PredId_17, transform_hlds__term_constr_errors__SCCPredId_19);
    }
    return transform_hlds__term_constr_errors__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__IntroducedFrom__pred__term2_error_kind_description__260__1_2_p_0(
  MR_Word transform_hlds__term_constr_errors__CallerPPId_9,
  MR_Word transform_hlds__term_constr_errors__PPId_11)
{
  {
    MR_bool transform_hlds__term_constr_errors__succeeded;

    {
      transform_hlds__term_constr_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_constr_errors__PPId_11, transform_hlds__term_constr_errors__CallerPPId_9);
    }
    return transform_hlds__term_constr_errors__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__IntroducedFrom__pred__decide_what_term2_errors_to_report__148__1_1_p_0(
  MR_Word transform_hlds__term_constr_errors__LambdaHeadVar__1_33)
{
  {
    MR_bool transform_hlds__term_constr_errors__succeeded;
    MR_Word transform_hlds__term_constr_errors__ErrorKind_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__LambdaHeadVar__1_33, (MR_Integer) 1)));
    MR_Word transform_hlds__term_constr_errors__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__LambdaHeadVar__1_33, (MR_Integer) 0)));

    if ((((transform_hlds__term_constr_errors__ErrorKind_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))) || (((MR_tag((MR_Word) transform_hlds__term_constr_errors__ErrorKind_24)) == (MR_mktag((MR_Integer) 3))))))
      transform_hlds__term_constr_errors__succeeded = MR_TRUE;
    else
      transform_hlds__term_constr_errors__succeeded = MR_FALSE;
    return transform_hlds__term_constr_errors__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__IntroducedFrom__pred__decide_what_term2_errors_to_report__133__1_2_p_0(
  MR_Word transform_hlds__term_constr_errors__ModuleInfo_5,
  MR_Word transform_hlds__term_constr_errors__LambdaHeadVar__1_32)
{
  {
    MR_bool transform_hlds__term_constr_errors__succeeded;
    MR_Word transform_hlds__term_constr_errors__PredInfo_37;
    MR_Word transform_hlds__term_constr_errors__Var_19;

    {
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_errors__ModuleInfo_5, transform_hlds__term_constr_errors__LambdaHeadVar__1_32, &transform_hlds__term_constr_errors__PredInfo_37, &transform_hlds__term_constr_errors__Var_19);
    }
    {
      transform_hlds__term_constr_errors__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__term_constr_errors__PredInfo_37);
    }
    transform_hlds__term_constr_errors__succeeded = !(transform_hlds__term_constr_errors__succeeded);
    return transform_hlds__term_constr_errors__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__IntroducedFrom__pred__decide_what_term2_errors_to_report__121__1_2_p_0(
  MR_Word transform_hlds__term_constr_errors__ModuleInfo_5,
  MR_Word transform_hlds__term_constr_errors__LambdaHeadVar__1_30)
{
  {
    MR_bool transform_hlds__term_constr_errors__succeeded;
    MR_Word transform_hlds__term_constr_errors__PredInfo_14;
    MR_Word transform_hlds__term_constr_errors__Markers_16;
    MR_Word transform_hlds__term_constr_errors__Var_31;
    MR_Word transform_hlds__term_constr_errors__Var_15;

    {
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_errors__ModuleInfo_5, transform_hlds__term_constr_errors__LambdaHeadVar__1_30, &transform_hlds__term_constr_errors__PredInfo_14, &transform_hlds__term_constr_errors__Var_15);
    }
    {
      transform_hlds__term_constr_errors__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__term_constr_errors__PredInfo_14);
    }
    transform_hlds__term_constr_errors__succeeded = !(transform_hlds__term_constr_errors__succeeded);
    if (transform_hlds__term_constr_errors__succeeded)
      {
        {
          hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__term_constr_errors__PredInfo_14, &transform_hlds__term_constr_errors__Markers_16);
        }
        transform_hlds__term_constr_errors__Var_31 = (MR_Integer) 20;
        {
          transform_hlds__term_constr_errors__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__term_constr_errors__Markers_16, transform_hlds__term_constr_errors__Var_31);
        }
      }
    return transform_hlds__term_constr_errors__succeeded;
  }
}

void MR_CALL 
transform_hlds__term_constr_errors____Compare____term2_error_kind_0_0(
  MR_Word * transform_hlds__term_constr_errors__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_errors__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_errors__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_constr_errors__succeeded;
    MR_Integer transform_hlds__term_constr_errors__CastX_53 = (MR_Integer) transform_hlds__term_constr_errors__HeadVar__2_2;
    MR_Integer transform_hlds__term_constr_errors__CastY_54 = (MR_Integer) transform_hlds__term_constr_errors__HeadVar__3_3;

    transform_hlds__term_constr_errors__succeeded = (transform_hlds__term_constr_errors__CastX_53 == transform_hlds__term_constr_errors__CastY_54);
    if (transform_hlds__term_constr_errors__succeeded)
      *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) transform_hlds__term_constr_errors__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(transform_hlds__term_constr_errors__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) transform_hlds__term_constr_errors__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(transform_hlds__term_constr_errors__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) transform_hlds__term_constr_errors__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(transform_hlds__term_constr_errors__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) transform_hlds__term_constr_errors__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(transform_hlds__term_constr_errors__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word transform_hlds__term_constr_errors__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word transform_hlds__term_constr_errors__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) transform_hlds__term_constr_errors__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(transform_hlds__term_constr_errors__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word transform_hlds__term_constr_errors__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word transform_hlds__term_constr_errors__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word transform_hlds__term_constr_errors__Var_14;

                  {
                    hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_constr_errors__Var_14, transform_hlds__term_constr_errors__Var_60, transform_hlds__term_constr_errors__Var_12);
                  }
                  transform_hlds__term_constr_errors__succeeded = (transform_hlds__term_constr_errors__Var_14 == (MR_Integer) 0);
                  transform_hlds__term_constr_errors__succeeded = !(transform_hlds__term_constr_errors__succeeded);
                  if (transform_hlds__term_constr_errors__succeeded)
                    *transform_hlds__term_constr_errors__HeadVar__1_1 = transform_hlds__term_constr_errors__Var_14;
                  else
                    {
                      hlds__hlds_pred____Compare____pred_proc_id_0_0(transform_hlds__term_constr_errors__HeadVar__1_1, transform_hlds__term_constr_errors__Var_59, transform_hlds__term_constr_errors__Var_13);
                    }
                }
                break;
              case (MR_Integer) 2:
                *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word transform_hlds__term_constr_errors__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_errors__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) transform_hlds__term_constr_errors__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(transform_hlds__term_constr_errors__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word transform_hlds__term_constr_errors__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_errors__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    hlds__hlds_pred____Compare____pred_id_0_0(transform_hlds__term_constr_errors__HeadVar__1_1, transform_hlds__term_constr_errors__Var_61, transform_hlds__term_constr_errors__Var_40);
                  }
                }
                break;
              case (MR_Integer) 3:
                *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word transform_hlds__term_constr_errors__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_errors__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) transform_hlds__term_constr_errors__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(transform_hlds__term_constr_errors__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word transform_hlds__term_constr_errors__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_errors__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    hlds__hlds_pred____Compare____pred_proc_id_0_0(transform_hlds__term_constr_errors__HeadVar__1_1, transform_hlds__term_constr_errors__Var_62, transform_hlds__term_constr_errors__Var_52);
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
transform_hlds__term_constr_errors____Unify____term2_error_kind_0_0(
  MR_Word transform_hlds__term_constr_errors__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_errors__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_errors__succeeded;
    MR_Integer transform_hlds__term_constr_errors__CastX_17 = (MR_Integer) transform_hlds__term_constr_errors__HeadVar__1_1;
    MR_Integer transform_hlds__term_constr_errors__CastY_18 = (MR_Integer) transform_hlds__term_constr_errors__HeadVar__2_2;

    transform_hlds__term_constr_errors__succeeded = (transform_hlds__term_constr_errors__CastX_17 == transform_hlds__term_constr_errors__CastY_18);
    if (transform_hlds__term_constr_errors__succeeded)
      transform_hlds__term_constr_errors__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) transform_hlds__term_constr_errors__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(transform_hlds__term_constr_errors__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer transform_hlds__term_constr_errors__CastX_3 = (MR_Integer) transform_hlds__term_constr_errors__HeadVar__1_1;
                MR_Integer transform_hlds__term_constr_errors__CastY_4 = (MR_Integer) transform_hlds__term_constr_errors__HeadVar__2_2;

                transform_hlds__term_constr_errors__succeeded = (transform_hlds__term_constr_errors__CastY_4 == transform_hlds__term_constr_errors__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer transform_hlds__term_constr_errors__CastX_9 = (MR_Integer) transform_hlds__term_constr_errors__HeadVar__1_1;
                MR_Integer transform_hlds__term_constr_errors__CastY_10 = (MR_Integer) transform_hlds__term_constr_errors__HeadVar__2_2;

                transform_hlds__term_constr_errors__succeeded = (transform_hlds__term_constr_errors__CastY_10 == transform_hlds__term_constr_errors__CastX_9);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer transform_hlds__term_constr_errors__CastX_11 = (MR_Integer) transform_hlds__term_constr_errors__HeadVar__1_1;
                MR_Integer transform_hlds__term_constr_errors__CastY_12 = (MR_Integer) transform_hlds__term_constr_errors__HeadVar__2_2;

                transform_hlds__term_constr_errors__succeeded = (transform_hlds__term_constr_errors__CastY_12 == transform_hlds__term_constr_errors__CastX_11);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word transform_hlds__term_constr_errors__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__term_constr_errors__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__term_constr_errors__Var_7;
            MR_Word transform_hlds__term_constr_errors__Var_8;

            transform_hlds__term_constr_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__term_constr_errors__succeeded)
              {
                transform_hlds__term_constr_errors__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__HeadVar__2_2, (MR_Integer) 0)));
                transform_hlds__term_constr_errors__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__HeadVar__2_2, (MR_Integer) 1)));
                {
                  transform_hlds__term_constr_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_constr_errors__Var_5, transform_hlds__term_constr_errors__Var_7);
                }
                if (transform_hlds__term_constr_errors__succeeded)
                  {
                    transform_hlds__term_constr_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_constr_errors__Var_6, transform_hlds__term_constr_errors__Var_8);
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word transform_hlds__term_constr_errors__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_errors__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__term_constr_errors__Var_14;

            transform_hlds__term_constr_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (transform_hlds__term_constr_errors__succeeded)
              {
                transform_hlds__term_constr_errors__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_errors__HeadVar__2_2, (MR_Integer) 0)));
                {
                  transform_hlds__term_constr_errors__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__term_constr_errors__Var_13, transform_hlds__term_constr_errors__Var_14);
                }
              }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word transform_hlds__term_constr_errors__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_errors__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__term_constr_errors__Var_16;

            transform_hlds__term_constr_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
            if (transform_hlds__term_constr_errors__succeeded)
              {
                transform_hlds__term_constr_errors__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_errors__HeadVar__2_2, (MR_Integer) 0)));
                {
                  transform_hlds__term_constr_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_constr_errors__Var_15, transform_hlds__term_constr_errors__Var_16);
                }
              }
          }
          break;
      }
    return transform_hlds__term_constr_errors__succeeded;
  }
}

void MR_CALL 
transform_hlds__term_constr_errors____Compare____term2_error_0_0(
  MR_Word * transform_hlds__term_constr_errors__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_errors__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_errors__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_constr_errors__succeeded;
    MR_Integer transform_hlds__term_constr_errors__CastX_9 = (MR_Integer) transform_hlds__term_constr_errors__HeadVar__2_2;
    MR_Integer transform_hlds__term_constr_errors__CastY_10 = (MR_Integer) transform_hlds__term_constr_errors__HeadVar__3_3;

    transform_hlds__term_constr_errors__succeeded = (transform_hlds__term_constr_errors__CastX_9 == transform_hlds__term_constr_errors__CastY_10);
    if (transform_hlds__term_constr_errors__succeeded)
      *transform_hlds__term_constr_errors__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__term_constr_errors__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__term_constr_errors__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__term_constr_errors__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__term_constr_errors__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__term_constr_errors__Var_8;

        {
          mercury__term____Compare____context_0_0(&transform_hlds__term_constr_errors__Var_8, transform_hlds__term_constr_errors__Var_4, transform_hlds__term_constr_errors__Var_6);
        }
        transform_hlds__term_constr_errors__succeeded = (transform_hlds__term_constr_errors__Var_8 == (MR_Integer) 0);
        transform_hlds__term_constr_errors__succeeded = !(transform_hlds__term_constr_errors__succeeded);
        if (transform_hlds__term_constr_errors__succeeded)
          *transform_hlds__term_constr_errors__HeadVar__1_1 = transform_hlds__term_constr_errors__Var_8;
        else
          {
            transform_hlds__term_constr_errors____Compare____term2_error_kind_0_0(transform_hlds__term_constr_errors__HeadVar__1_1, transform_hlds__term_constr_errors__Var_5, transform_hlds__term_constr_errors__Var_7);
          }
      }
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_errors____Unify____term2_error_0_0(
  MR_Word transform_hlds__term_constr_errors__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_errors__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_errors__succeeded;
    MR_Integer transform_hlds__term_constr_errors__CastX_7 = (MR_Integer) transform_hlds__term_constr_errors__HeadVar__1_1;
    MR_Integer transform_hlds__term_constr_errors__CastY_8 = (MR_Integer) transform_hlds__term_constr_errors__HeadVar__2_2;

    transform_hlds__term_constr_errors__succeeded = (transform_hlds__term_constr_errors__CastX_7 == transform_hlds__term_constr_errors__CastY_8);
    if (transform_hlds__term_constr_errors__succeeded)
      transform_hlds__term_constr_errors__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__term_constr_errors__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__term_constr_errors__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__term_constr_errors__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__term_constr_errors__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__HeadVar__2_2, (MR_Integer) 1)));

        {
          transform_hlds__term_constr_errors__succeeded = mercury__term____Unify____context_0_0(transform_hlds__term_constr_errors__Var_3, transform_hlds__term_constr_errors__Var_5);
        }
        if (transform_hlds__term_constr_errors__succeeded)
          {
            transform_hlds__term_constr_errors__succeeded = transform_hlds__term_constr_errors____Unify____term2_error_kind_0_0(transform_hlds__term_constr_errors__Var_4, transform_hlds__term_constr_errors__Var_6);
          }
      }
    return transform_hlds__term_constr_errors__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__term2_error_kind_description_4_p_0_2(
  MR_Box transform_hlds__term_constr_errors__closure_arg)
{
  {
    MR_bool transform_hlds__term_constr_errors__succeeded;
    MR_Box transform_hlds__term_constr_errors__closure = transform_hlds__term_constr_errors__closure_arg;

    {
      transform_hlds__term_constr_errors__succeeded = transform_hlds__term_constr_errors__IntroducedFrom__pred__term2_error_kind_description__284__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__closure, (MR_Integer) 4))));
    }
    return transform_hlds__term_constr_errors__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__term2_error_kind_description_4_p_0_1(
  MR_Box transform_hlds__term_constr_errors__closure_arg)
{
  {
    MR_bool transform_hlds__term_constr_errors__succeeded;
    MR_Box transform_hlds__term_constr_errors__closure = transform_hlds__term_constr_errors__closure_arg;

    {
      transform_hlds__term_constr_errors__succeeded = transform_hlds__term_constr_errors__IntroducedFrom__pred__term2_error_kind_description__260__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__closure, (MR_Integer) 4))));
    }
    return transform_hlds__term_constr_errors__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_errors__term2_error_kind_description_4_p_0(
  MR_Word transform_hlds__term_constr_errors__ModuleInfo_5,
  MR_Word transform_hlds__term_constr_errors__Single_6,
  MR_Word transform_hlds__term_constr_errors__Error_7,
  MR_Word * transform_hlds__term_constr_errors__Pieces_8)
{
  {
    MR_bool transform_hlds__term_constr_errors__succeeded;

    switch (MR_tag((MR_Word) transform_hlds__term_constr_errors__Error_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(transform_hlds__term_constr_errors__Error_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *transform_hlds__term_constr_errors__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_1[30]);
            break;
          case (MR_Integer) 1:
            *transform_hlds__term_constr_errors__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_1[10]);
            break;
          case (MR_Integer) 2:
            *transform_hlds__term_constr_errors__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_1[24]);
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__term_constr_errors__TypeCtorInfo_109_109;
          MR_Word transform_hlds__term_constr_errors__CallerPPId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__Error_7, (MR_Integer) 0)));
          MR_Word transform_hlds__term_constr_errors__CalleePPId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__Error_7, (MR_Integer) 1)));
          MR_Word transform_hlds__term_constr_errors__Piece1_12;
          MR_Word transform_hlds__term_constr_errors__CalleePiece_15;
          MR_Word transform_hlds__term_constr_errors__Var_81;
          MR_Word transform_hlds__term_constr_errors__Var_84;

          if ((transform_hlds__term_constr_errors__Single_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                transform_hlds__term_constr_errors__Piece1_12 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_constr_errors__ModuleInfo_5, (MR_Integer) 0, transform_hlds__term_constr_errors__CallerPPId_9);
              }
            }
          else
            {
              MR_Word transform_hlds__term_constr_errors__PPId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__Single_6, (MR_Integer) 0)));
              MR_Word transform_hlds__term_constr_errors__Var_67;

              {
                transform_hlds__term_constr_errors__Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__Var_67, 0) = ((MR_Box) (&transform_hlds__term_constr_errors_scalar_common_2[1]));
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__Var_67, 1) = ((MR_Box) (transform_hlds__term_constr_errors__term2_error_kind_description_4_p_0_1));
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__Var_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__Var_67, 3) = ((MR_Box) (transform_hlds__term_constr_errors__CallerPPId_9));
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__Var_67, 4) = ((MR_Box) (transform_hlds__term_constr_errors__PPId_11));
              }
              {
                mercury__require__expect_4_p_0(transform_hlds__term_constr_errors__Var_67, (MR_String) "transform_hlds.term_constr_errors", (MR_String) "predicate \140transform_hlds.term_constr_errors.term2_error_kind_description\'/4", (MR_String) "caller outside this SCC");
              }
              transform_hlds__term_constr_errors__Piece1_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_1[40]);
            }
          {
            transform_hlds__term_constr_errors__CalleePiece_15 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_constr_errors__ModuleInfo_5, (MR_Integer) 0, transform_hlds__term_constr_errors__CalleePPId_10);
          }
          transform_hlds__term_constr_errors__TypeCtorInfo_109_109 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
          {
            transform_hlds__term_constr_errors__Var_84 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_errors__TypeCtorInfo_109_109, transform_hlds__term_constr_errors__CalleePiece_15, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_1[6]));
          }
          {
            transform_hlds__term_constr_errors__Var_81 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_errors__TypeCtorInfo_109_109, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_1[42]), transform_hlds__term_constr_errors__Var_84);
          }
          {
            *transform_hlds__term_constr_errors__Pieces_8 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_errors__TypeCtorInfo_109_109, transform_hlds__term_constr_errors__Piece1_12, transform_hlds__term_constr_errors__Var_81);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__term_constr_errors__PredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_errors__Error_7, (MR_Integer) 0)));
          MR_Word transform_hlds__term_constr_errors__Pieces2_21;

          if ((transform_hlds__term_constr_errors__Single_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word transform_hlds__term_constr_errors__PredDesc_22;

              {
                transform_hlds__term_constr_errors__PredDesc_22 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(transform_hlds__term_constr_errors__ModuleInfo_5, (MR_Integer) 0, transform_hlds__term_constr_errors__PredId_17);
              }
              {
                transform_hlds__term_constr_errors__Pieces2_21 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_constr_errors__PredDesc_22, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_1[18]));
              }
            }
          else
            {
              MR_Word transform_hlds__term_constr_errors__SCCPredId_19;
              MR_Word transform_hlds__term_constr_errors__Var_52;
              MR_Word transform_hlds__term_constr_errors__PPId_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__Single_6, (MR_Integer) 0)));
              MR_Integer transform_hlds__term_constr_errors__Var_20;

              transform_hlds__term_constr_errors__SCCPredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__PPId_104, (MR_Integer) 0)));
              transform_hlds__term_constr_errors__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__PPId_104, (MR_Integer) 1)));
              {
                transform_hlds__term_constr_errors__Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__Var_52, 0) = ((MR_Box) (&transform_hlds__term_constr_errors_scalar_common_2[2]));
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__Var_52, 1) = ((MR_Box) (transform_hlds__term_constr_errors__term2_error_kind_description_4_p_0_2));
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__Var_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__Var_52, 3) = ((MR_Box) (transform_hlds__term_constr_errors__PredId_17));
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__Var_52, 4) = ((MR_Box) (transform_hlds__term_constr_errors__SCCPredId_19));
              }
              {
                mercury__require__expect_4_p_0(transform_hlds__term_constr_errors__Var_52, (MR_String) "transform_hlds.term_constr_errors", (MR_String) "predicate \140transform_hlds.term_constr_errors.term2_error_kind_description\'/4", (MR_String) "does not terminate pragma outside this SCC");
              }
              transform_hlds__term_constr_errors__Pieces2_21 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_1[20]);
            }
          {
            *transform_hlds__term_constr_errors__Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_1[16]), transform_hlds__term_constr_errors__Pieces2_21);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word transform_hlds__term_constr_errors__TypeCtorInfo_113_113;
          MR_Word transform_hlds__term_constr_errors__Name_23;
          MR_Word transform_hlds__term_constr_errors__Var_29;
          MR_Word transform_hlds__term_constr_errors__PPId_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_errors__Error_7, (MR_Integer) 0)));

          {
            transform_hlds__term_constr_errors__Name_23 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_constr_errors__ModuleInfo_5, (MR_Integer) 0, transform_hlds__term_constr_errors__PPId_107);
          }
          transform_hlds__term_constr_errors__TypeCtorInfo_113_113 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
          {
            transform_hlds__term_constr_errors__Var_29 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_errors__TypeCtorInfo_113_113, transform_hlds__term_constr_errors__Name_23, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_1[22]));
          }
          {
            *transform_hlds__term_constr_errors__Pieces_8 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_errors__TypeCtorInfo_113_113, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_1[44]), transform_hlds__term_constr_errors__Var_29);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_errors__describe_term2_error_6_p_0(
  MR_Word transform_hlds__term_constr_errors__ModuleInfo_7,
  MR_Word transform_hlds__term_constr_errors__Single_8,
  MR_Word transform_hlds__term_constr_errors__MaybeErrorNum_9,
  MR_Word transform_hlds__term_constr_errors__Error_10,
  MR_Word transform_hlds__term_constr_errors__STATE_VARIABLE_ReasonMsgsCord_0_20,
  MR_Word * transform_hlds__term_constr_errors__STATE_VARIABLE_ReasonMsgsCord_21)
{
  {
    MR_bool transform_hlds__term_constr_errors__succeeded;
    MR_Word transform_hlds__term_constr_errors__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__Error_10, (MR_Integer) 0)));
    MR_Word transform_hlds__term_constr_errors__ErrorKind_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__Error_10, (MR_Integer) 1)));
    MR_Word transform_hlds__term_constr_errors__Pieces0_14;
    MR_Word transform_hlds__term_constr_errors__Pieces_18;
    MR_Word transform_hlds__term_constr_errors__ReasonMsg_19;
    MR_Word transform_hlds__term_constr_errors__Var_26;
    MR_Word transform_hlds__term_constr_errors__Var_29;
    MR_Word transform_hlds__term_constr_errors__Var_30;

    {
      transform_hlds__term_constr_errors__term2_error_kind_description_4_p_0(transform_hlds__term_constr_errors__ModuleInfo_7, transform_hlds__term_constr_errors__Single_8, transform_hlds__term_constr_errors__ErrorKind_13, &transform_hlds__term_constr_errors__Pieces0_14);
    }
    if ((transform_hlds__term_constr_errors__MaybeErrorNum_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      transform_hlds__term_constr_errors__Pieces_18 = transform_hlds__term_constr_errors__Pieces0_14;
    else
      {
        MR_Integer transform_hlds__term_constr_errors__N_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__MaybeErrorNum_9, (MR_Integer) 0)));
        MR_String transform_hlds__term_constr_errors__Nstr_16;
        MR_String transform_hlds__term_constr_errors__Preamble_17;
        MR_String transform_hlds__term_constr_errors__Var_23;
        MR_Word transform_hlds__term_constr_errors__Var_25;

        {
          mercury__string__int_to_string_2_p_0(transform_hlds__term_constr_errors__N_15, &transform_hlds__term_constr_errors__Nstr_16);
        }
        {
          transform_hlds__term_constr_errors__Var_23 = mercury__string__f_43_43_2_f_0(transform_hlds__term_constr_errors__Nstr_16, (MR_String) ":");
        }
        {
          transform_hlds__term_constr_errors__Preamble_17 = mercury__string__f_43_43_2_f_0((MR_String) "Reason ", transform_hlds__term_constr_errors__Var_23);
        }
        {
          transform_hlds__term_constr_errors__Var_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), transform_hlds__term_constr_errors__Var_25, 0) = ((MR_Box) (transform_hlds__term_constr_errors__Preamble_17));
        }
        {
          transform_hlds__term_constr_errors__Pieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__Pieces_18, 0) = ((MR_Box) (transform_hlds__term_constr_errors__Var_25));
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__Pieces_18, 1) = ((MR_Box) (transform_hlds__term_constr_errors__Pieces0_14));
        }
      }
    {
      transform_hlds__term_constr_errors__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__Var_26, 0) = ((MR_Box) (transform_hlds__term_constr_errors__Context_12));
    }
    {
      transform_hlds__term_constr_errors__Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__Var_30, 0) = ((MR_Box) (transform_hlds__term_constr_errors__Pieces_18));
    }
    {
      transform_hlds__term_constr_errors__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__Var_29, 0) = ((MR_Box) (transform_hlds__term_constr_errors__Var_30));
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__term_constr_errors__ReasonMsg_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__ReasonMsg_19, 0) = ((MR_Box) (transform_hlds__term_constr_errors__Var_26));
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__ReasonMsg_19, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__ReasonMsg_19, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__ReasonMsg_19, 3) = ((MR_Box) (transform_hlds__term_constr_errors__Var_29));
    }
    {
      *transform_hlds__term_constr_errors__STATE_VARIABLE_ReasonMsgsCord_21 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, transform_hlds__term_constr_errors__STATE_VARIABLE_ReasonMsgsCord_0_20, ((MR_Box) (transform_hlds__term_constr_errors__ReasonMsg_19)));
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_errors__describe_term2_errors_6_p_0(
  MR_Word transform_hlds__term_constr_errors__ModuleInfo_1,
  MR_Word transform_hlds__term_constr_errors__Single_2,
  MR_Integer transform_hlds__term_constr_errors__ErrNum0_3,
  MR_Word transform_hlds__term_constr_errors__HeadVar__4_4,
  MR_Word transform_hlds__term_constr_errors__STATE_VARIABLE_ReasonMsgsCord_0_5,
  MR_Word * transform_hlds__term_constr_errors__STATE_VARIABLE_ReasonMsgsCord_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_constr_errors__succeeded;

        if ((transform_hlds__term_constr_errors__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__term_constr_errors__STATE_VARIABLE_ReasonMsgsCord_6 = transform_hlds__term_constr_errors__STATE_VARIABLE_ReasonMsgsCord_0_5;
        else
          {
            MR_Word transform_hlds__term_constr_errors__Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word transform_hlds__term_constr_errors__Errors_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word transform_hlds__term_constr_errors__Var_21;
            MR_Word transform_hlds__term_constr_errors__STATE_VARIABLE_ReasonMsgsCord_22_22;
            MR_Integer transform_hlds__term_constr_errors__Var_23;
            MR_Word transform_hlds__term_constr_errors__Context_33;
            MR_Word transform_hlds__term_constr_errors__ErrorKind_34;
            MR_Word transform_hlds__term_constr_errors__Pieces0_35;
            MR_Integer transform_hlds__term_constr_errors__N_36;
            MR_String transform_hlds__term_constr_errors__Nstr_37;
            MR_String transform_hlds__term_constr_errors__Preamble_38;
            MR_Word transform_hlds__term_constr_errors__Pieces_39;
            MR_Word transform_hlds__term_constr_errors__ReasonMsg_40;
            MR_String transform_hlds__term_constr_errors__Var_42;
            MR_Word transform_hlds__term_constr_errors__Var_44;
            MR_Word transform_hlds__term_constr_errors__Var_45;
            MR_Word transform_hlds__term_constr_errors__Var_48;
            MR_Word transform_hlds__term_constr_errors__Var_49;

            {
              transform_hlds__term_constr_errors__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__Var_21, 0) = ((MR_Box) (transform_hlds__term_constr_errors__ErrNum0_3));
            }
            transform_hlds__term_constr_errors__Context_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__Error_16, (MR_Integer) 0)));
            transform_hlds__term_constr_errors__ErrorKind_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__Error_16, (MR_Integer) 1)));
            {
              transform_hlds__term_constr_errors__term2_error_kind_description_4_p_0(transform_hlds__term_constr_errors__ModuleInfo_1, transform_hlds__term_constr_errors__Single_2, transform_hlds__term_constr_errors__ErrorKind_34, &transform_hlds__term_constr_errors__Pieces0_35);
            }
            transform_hlds__term_constr_errors__N_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__Var_21, (MR_Integer) 0)));
            {
              mercury__string__int_to_string_2_p_0(transform_hlds__term_constr_errors__N_36, &transform_hlds__term_constr_errors__Nstr_37);
            }
            {
              transform_hlds__term_constr_errors__Var_42 = mercury__string__f_43_43_2_f_0(transform_hlds__term_constr_errors__Nstr_37, (MR_String) ":");
            }
            {
              transform_hlds__term_constr_errors__Preamble_38 = mercury__string__f_43_43_2_f_0((MR_String) "Reason ", transform_hlds__term_constr_errors__Var_42);
            }
            {
              transform_hlds__term_constr_errors__Var_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), transform_hlds__term_constr_errors__Var_44, 0) = ((MR_Box) (transform_hlds__term_constr_errors__Preamble_38));
            }
            {
              transform_hlds__term_constr_errors__Pieces_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__Pieces_39, 0) = ((MR_Box) (transform_hlds__term_constr_errors__Var_44));
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__Pieces_39, 1) = ((MR_Box) (transform_hlds__term_constr_errors__Pieces0_35));
            }
            {
              transform_hlds__term_constr_errors__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__Var_45, 0) = ((MR_Box) (transform_hlds__term_constr_errors__Context_33));
            }
            {
              transform_hlds__term_constr_errors__Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__Var_49, 0) = ((MR_Box) (transform_hlds__term_constr_errors__Pieces_39));
            }
            {
              transform_hlds__term_constr_errors__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__Var_48, 0) = ((MR_Box) (transform_hlds__term_constr_errors__Var_49));
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              transform_hlds__term_constr_errors__ReasonMsg_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__ReasonMsg_40, 0) = ((MR_Box) (transform_hlds__term_constr_errors__Var_45));
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__ReasonMsg_40, 1) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__ReasonMsg_40, 2) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__ReasonMsg_40, 3) = ((MR_Box) (transform_hlds__term_constr_errors__Var_48));
            }
            {
              transform_hlds__term_constr_errors__STATE_VARIABLE_ReasonMsgsCord_22_22 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, transform_hlds__term_constr_errors__STATE_VARIABLE_ReasonMsgsCord_0_5, ((MR_Box) (transform_hlds__term_constr_errors__ReasonMsg_40)));
            }
            transform_hlds__term_constr_errors__Var_23 = (transform_hlds__term_constr_errors__ErrNum0_3 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer transform_hlds__term_constr_errors__next_value_of_ErrNum0_3 = transform_hlds__term_constr_errors__Var_23;
              MR_Word transform_hlds__term_constr_errors__next_value_of_HeadVar__4_4 = transform_hlds__term_constr_errors__Errors_17;
              MR_Word transform_hlds__term_constr_errors__next_value_of_STATE_VARIABLE_ReasonMsgsCord_0_5 = transform_hlds__term_constr_errors__STATE_VARIABLE_ReasonMsgsCord_22_22;

              transform_hlds__term_constr_errors__STATE_VARIABLE_ReasonMsgsCord_0_5 = transform_hlds__term_constr_errors__next_value_of_STATE_VARIABLE_ReasonMsgsCord_0_5;
              transform_hlds__term_constr_errors__HeadVar__4_4 = transform_hlds__term_constr_errors__next_value_of_HeadVar__4_4;
              transform_hlds__term_constr_errors__ErrNum0_3 = transform_hlds__term_constr_errors__next_value_of_ErrNum0_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__term_constr_errors__report_term2_errors_5_p_0(
  MR_Word transform_hlds__term_constr_errors__ModuleInfo_6,
  MR_Word transform_hlds__term_constr_errors__SCC_7,
  MR_Word transform_hlds__term_constr_errors__Errors_8,
  MR_Word transform_hlds__term_constr_errors__STATE_VARIABLE_Specs_0_26,
  MR_Word * transform_hlds__term_constr_errors__STATE_VARIABLE_Specs_27)
{
  {
    MR_bool transform_hlds__term_constr_errors__succeeded;
    MR_Word transform_hlds__term_constr_errors__Context_10;
    MR_Word transform_hlds__term_constr_errors__Pieces1_14;
    MR_Word transform_hlds__term_constr_errors__Single_15;
    MR_Word transform_hlds__term_constr_errors__Pieces2_17;
    MR_Word transform_hlds__term_constr_errors__ReasonMsgsCord_18;
    MR_Word transform_hlds__term_constr_errors__ReasonMsgs_23;
    MR_Word transform_hlds__term_constr_errors__Msgs_24;
    MR_Word transform_hlds__term_constr_errors__Spec_25;
    MR_Word transform_hlds__term_constr_errors__Var_55;
    MR_Word transform_hlds__term_constr_errors__Var_56;
    MR_Word transform_hlds__term_constr_errors__Var_57;
    MR_Word transform_hlds__term_constr_errors__Var_58;
    MR_Word transform_hlds__term_constr_errors__PPId_11;
    MR_Box transform_hlds__term_constr_errors__conv0_PPId_11;

    {
      transform_hlds__term_util__get_context_from_scc_3_p_0(transform_hlds__term_constr_errors__ModuleInfo_6, transform_hlds__term_constr_errors__SCC_7, &transform_hlds__term_constr_errors__Context_10);
    }
    {
      transform_hlds__term_constr_errors__succeeded = mercury__set__is_singleton_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_constr_errors__SCC_7, &transform_hlds__term_constr_errors__conv0_PPId_11);
    }
    if (transform_hlds__term_constr_errors__succeeded)
      {
        transform_hlds__term_constr_errors__PPId_11 = ((MR_Word) transform_hlds__term_constr_errors__conv0_PPId_11);
        transform_hlds__term_constr_errors__succeeded = MR_TRUE;
      }
    if (transform_hlds__term_constr_errors__succeeded)
      {
        MR_Word transform_hlds__term_constr_errors__ProcName_13;

        {
          transform_hlds__term_constr_errors__ProcName_13 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_constr_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_constr_errors__PPId_11);
        }
        {
          transform_hlds__term_constr_errors__Pieces1_14 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_1[32]), transform_hlds__term_constr_errors__ProcName_13);
        }
        {
          transform_hlds__term_constr_errors__Single_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__Single_15, 0) = ((MR_Box) (transform_hlds__term_constr_errors__PPId_11));
        }
      }
    else
      {
        MR_Word transform_hlds__term_constr_errors__ProcNames_16;
        MR_Word transform_hlds__term_constr_errors__Var_39;

        {
          transform_hlds__term_constr_errors__Var_39 = mercury__set__to_sorted_list_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_constr_errors__SCC_7);
        }
        {
          transform_hlds__term_constr_errors__ProcNames_16 = hlds__hlds_error_util__describe_several_proc_names_3_f_0(transform_hlds__term_constr_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_constr_errors__Var_39);
        }
        {
          transform_hlds__term_constr_errors__Pieces1_14 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_1[3]), transform_hlds__term_constr_errors__ProcNames_16);
        }
        transform_hlds__term_constr_errors__Single_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    if ((transform_hlds__term_constr_errors__Errors_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        transform_hlds__term_constr_errors__Pieces2_17 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_1[34]);
        {
          transform_hlds__term_constr_errors__ReasonMsgsCord_18 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0);
        }
      }
    else
      {
        MR_Word transform_hlds__term_constr_errors__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__Errors_8, (MR_Integer) 1)));
        MR_Word transform_hlds__term_constr_errors__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__Errors_8, (MR_Integer) 0)));

        if ((transform_hlds__term_constr_errors__Var_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word transform_hlds__term_constr_errors__Var_51;

            transform_hlds__term_constr_errors__Pieces2_17 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_1[36]);
            {
              transform_hlds__term_constr_errors__Var_51 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0);
            }
            {
              transform_hlds__term_constr_errors__describe_term2_error_6_p_0(transform_hlds__term_constr_errors__ModuleInfo_6, transform_hlds__term_constr_errors__Single_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_constr_errors__Var_74, transform_hlds__term_constr_errors__Var_51, &transform_hlds__term_constr_errors__ReasonMsgsCord_18);
            }
          }
        else
          {
            MR_Word transform_hlds__term_constr_errors__Var_45;

            transform_hlds__term_constr_errors__Pieces2_17 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_errors_scalar_common_1[38]);
            {
              transform_hlds__term_constr_errors__Var_45 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0);
            }
            {
              transform_hlds__term_constr_errors__describe_term2_errors_6_p_0(transform_hlds__term_constr_errors__ModuleInfo_6, transform_hlds__term_constr_errors__Single_15, (MR_Integer) 1, transform_hlds__term_constr_errors__Errors_8, transform_hlds__term_constr_errors__Var_45, &transform_hlds__term_constr_errors__ReasonMsgsCord_18);
            }
          }
      }
    {
      transform_hlds__term_constr_errors__ReasonMsgs_23 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, transform_hlds__term_constr_errors__ReasonMsgsCord_18);
    }
    {
      transform_hlds__term_constr_errors__Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_constr_errors__Pieces1_14, transform_hlds__term_constr_errors__Pieces2_17);
    }
    {
      transform_hlds__term_constr_errors__Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__Var_57, 0) = ((MR_Box) (transform_hlds__term_constr_errors__Var_58));
    }
    {
      transform_hlds__term_constr_errors__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__Var_56, 0) = ((MR_Box) (transform_hlds__term_constr_errors__Var_57));
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__term_constr_errors__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__Var_55, 0) = ((MR_Box) (transform_hlds__term_constr_errors__Context_10));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__Var_55, 1) = ((MR_Box) (transform_hlds__term_constr_errors__Var_56));
    }
    {
      transform_hlds__term_constr_errors__Msgs_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__Msgs_24, 0) = ((MR_Box) (transform_hlds__term_constr_errors__Var_55));
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__Msgs_24, 1) = ((MR_Box) (transform_hlds__term_constr_errors__ReasonMsgs_23));
    }
    {
      transform_hlds__term_constr_errors__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14))));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__Spec_25, 2) = ((MR_Box) (transform_hlds__term_constr_errors__Msgs_24));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *transform_hlds__term_constr_errors__STATE_VARIABLE_Specs_27 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_constr_errors__Spec_25));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_constr_errors__STATE_VARIABLE_Specs_0_26));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__maybe_report_term2_errors_5_p_0_3(
  MR_Box transform_hlds__term_constr_errors__closure_arg,
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__term_constr_errors__succeeded;
    MR_Box transform_hlds__term_constr_errors__closure = transform_hlds__term_constr_errors__closure_arg;

    {
      transform_hlds__term_constr_errors__succeeded = transform_hlds__term_constr_errors__IntroducedFrom__pred__decide_what_term2_errors_to_report__148__1_1_p_0(((MR_Word) transform_hlds__term_constr_errors__wrapper_arg_1));
    }
    return transform_hlds__term_constr_errors__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__maybe_report_term2_errors_5_p_0_2(
  MR_Box transform_hlds__term_constr_errors__closure_arg,
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__term_constr_errors__succeeded;
    MR_Box transform_hlds__term_constr_errors__closure = transform_hlds__term_constr_errors__closure_arg;

    {
      transform_hlds__term_constr_errors__succeeded = transform_hlds__term_constr_errors__IntroducedFrom__pred__decide_what_term2_errors_to_report__133__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_errors__wrapper_arg_1));
    }
    return transform_hlds__term_constr_errors__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__maybe_report_term2_errors_5_p_0_1(
  MR_Box transform_hlds__term_constr_errors__closure_arg,
  MR_Box transform_hlds__term_constr_errors__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__term_constr_errors__succeeded;
    MR_Box transform_hlds__term_constr_errors__closure = transform_hlds__term_constr_errors__closure_arg;

    {
      transform_hlds__term_constr_errors__succeeded = transform_hlds__term_constr_errors__IntroducedFrom__pred__decide_what_term2_errors_to_report__121__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_errors__wrapper_arg_1));
    }
    return transform_hlds__term_constr_errors__succeeded;
  }
}

void MR_CALL 
transform_hlds__term_constr_errors__maybe_report_term2_errors_5_p_0(
  MR_Word transform_hlds__term_constr_errors__ModuleInfo_6,
  MR_Word transform_hlds__term_constr_errors__SCC_7,
  MR_Word transform_hlds__term_constr_errors__Errors_8,
  MR_Word transform_hlds__term_constr_errors__STATE_VARIABLE_Specs_0_12,
  MR_Word * transform_hlds__term_constr_errors__STATE_VARIABLE_Specs_13)
{
  {
    MR_bool transform_hlds__term_constr_errors__succeeded;
    MR_Word transform_hlds__term_constr_errors__Globals_19;
    MR_Word transform_hlds__term_constr_errors__NormalErrors_20;
    MR_Word transform_hlds__term_constr_errors__VerboseErrors_21;
    MR_Word transform_hlds__term_constr_errors__TypeCtorInfo_43_53;
    MR_Word transform_hlds__term_constr_errors__IsCheckTerm_22;
    MR_Word transform_hlds__term_constr_errors__CheckTermPPIds_27;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__term_constr_errors__ModuleInfo_6, &transform_hlds__term_constr_errors__Globals_19);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_errors__Globals_19, (MR_Integer) 429, &transform_hlds__term_constr_errors__NormalErrors_20);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_errors__Globals_19, (MR_Integer) 430, &transform_hlds__term_constr_errors__VerboseErrors_21);
    }
    transform_hlds__term_constr_errors__TypeCtorInfo_43_53 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    {
      transform_hlds__term_constr_errors__IsCheckTerm_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__IsCheckTerm_22, 0) = ((MR_Box) (&transform_hlds__term_constr_errors_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__IsCheckTerm_22, 1) = ((MR_Box) (transform_hlds__term_constr_errors__maybe_report_term2_errors_5_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__IsCheckTerm_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__IsCheckTerm_22, 3) = ((MR_Box) (transform_hlds__term_constr_errors__ModuleInfo_6));
    }
    {
      mercury__set__filter_3_p_0(transform_hlds__term_constr_errors__TypeCtorInfo_43_53, transform_hlds__term_constr_errors__IsCheckTerm_22, transform_hlds__term_constr_errors__SCC_7, &transform_hlds__term_constr_errors__CheckTermPPIds_27);
    }
    {
      transform_hlds__term_constr_errors__succeeded = mercury__set__is_non_empty_1_p_0(transform_hlds__term_constr_errors__TypeCtorInfo_43_53, transform_hlds__term_constr_errors__CheckTermPPIds_27);
    }
    if (transform_hlds__term_constr_errors__succeeded)
      {
        transform_hlds__term_constr_errors__report_term2_errors_5_p_0(transform_hlds__term_constr_errors__ModuleInfo_6, transform_hlds__term_constr_errors__SCC_7, transform_hlds__term_constr_errors__Errors_8, transform_hlds__term_constr_errors__STATE_VARIABLE_Specs_0_12, transform_hlds__term_constr_errors__STATE_VARIABLE_Specs_13);
      }
    else
      {
        MR_Word transform_hlds__term_constr_errors__TypeCtorInfo_44_54 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
        MR_Word transform_hlds__term_constr_errors__IsNonImported_28;
        MR_Word transform_hlds__term_constr_errors__NonImportedPPIds_30;

        {
          transform_hlds__term_constr_errors__IsNonImported_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__IsNonImported_28, 0) = ((MR_Box) (&transform_hlds__term_constr_errors_scalar_common_2[0]));
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__IsNonImported_28, 1) = ((MR_Box) (transform_hlds__term_constr_errors__maybe_report_term2_errors_5_p_0_2));
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__IsNonImported_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_errors__IsNonImported_28, 3) = ((MR_Box) (transform_hlds__term_constr_errors__ModuleInfo_6));
        }
        {
          mercury__set__filter_3_p_0(transform_hlds__term_constr_errors__TypeCtorInfo_44_54, transform_hlds__term_constr_errors__IsNonImported_28, transform_hlds__term_constr_errors__SCC_7, &transform_hlds__term_constr_errors__NonImportedPPIds_30);
        }
        {
          transform_hlds__term_constr_errors__succeeded = mercury__set__is_non_empty_1_p_0(transform_hlds__term_constr_errors__TypeCtorInfo_44_54, transform_hlds__term_constr_errors__NonImportedPPIds_30);
        }
        if (transform_hlds__term_constr_errors__succeeded)
          switch (transform_hlds__term_constr_errors__VerboseErrors_21) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word transform_hlds__term_constr_errors__MaybeErrorsToReport_58;

                switch (transform_hlds__term_constr_errors__NormalErrors_20) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    transform_hlds__term_constr_errors__MaybeErrorsToReport_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word transform_hlds__term_constr_errors__DirectErrors_35;

                      {
                        mercury__list__filter_3_p_0((MR_Word) &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0, (MR_Word) &transform_hlds__term_constr_errors_scalar_common_4[0], transform_hlds__term_constr_errors__Errors_8, &transform_hlds__term_constr_errors__DirectErrors_35);
                      }
                      if ((transform_hlds__term_constr_errors__DirectErrors_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          transform_hlds__term_constr_errors__MaybeErrorsToReport_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__MaybeErrorsToReport_58, 0) = ((MR_Box) (transform_hlds__term_constr_errors__Errors_8));
                        }
                      else
                        {
                          transform_hlds__term_constr_errors__MaybeErrorsToReport_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__MaybeErrorsToReport_58, 0) = ((MR_Box) (transform_hlds__term_constr_errors__DirectErrors_35));
                        }
                    }
                    break;
                }
                if ((transform_hlds__term_constr_errors__MaybeErrorsToReport_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  *transform_hlds__term_constr_errors__STATE_VARIABLE_Specs_13 = transform_hlds__term_constr_errors__STATE_VARIABLE_Specs_0_12;
                else
                  {
                    MR_Word transform_hlds__term_constr_errors__ErrorsToReport_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_errors__MaybeErrorsToReport_58, (MR_Integer) 0)));

                    {
                      transform_hlds__term_constr_errors__report_term2_errors_5_p_0(transform_hlds__term_constr_errors__ModuleInfo_6, transform_hlds__term_constr_errors__SCC_7, transform_hlds__term_constr_errors__ErrorsToReport_56, transform_hlds__term_constr_errors__STATE_VARIABLE_Specs_0_12, transform_hlds__term_constr_errors__STATE_VARIABLE_Specs_13);
                    }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                transform_hlds__term_constr_errors__report_term2_errors_5_p_0(transform_hlds__term_constr_errors__ModuleInfo_6, transform_hlds__term_constr_errors__SCC_7, transform_hlds__term_constr_errors__Errors_8, transform_hlds__term_constr_errors__STATE_VARIABLE_Specs_0_12, transform_hlds__term_constr_errors__STATE_VARIABLE_Specs_13);
              }
              break;
          }
        else
          *transform_hlds__term_constr_errors__STATE_VARIABLE_Specs_13 = transform_hlds__term_constr_errors__STATE_VARIABLE_Specs_0_12;
      }
  }
}

void mercury__transform_hlds__term_constr_errors__init(void)
{
}

void mercury__transform_hlds__term_constr_errors__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_kind_0);
}

void mercury__transform_hlds__term_constr_errors__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__term_constr_errors__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module transform_hlds.term_constr_errors. */
