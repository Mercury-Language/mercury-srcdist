/*
** Automatically generated from `term_errors.m'
** by the Mercury compiler,
** version rotd-2017-08-02
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


/* :- module transform_hlds.term_errors. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__term_errors__init
ENDINIT
*/

#include "transform_hlds.term_errors.mih"


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
#include "check_hlds.proc_requests.mih"
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
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_0_0[2];

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_0_0;

static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_0_0[1];

static const MR_DuPtagLayout transform_hlds__term_errors__transform_hlds__term_errors__du_ptag_ordered_term_error_0[1];

static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_name_ordered_term_error_0[1];

static const MR_Integer transform_hlds__term_errors__transform_hlds__term_errors__functor_number_map_term_error_0[1];

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_0;

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_1;

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_2[2];

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_2;

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_3[2];

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_3;

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_4;

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_5;

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_6[2];

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_6;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_7[2];

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_7;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_8[3];

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_8;

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_9[2];

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_9;

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_errors__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0;

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_10[2];

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_10;

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_11;

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_12;

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_13;

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_14[1];

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_14;

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_15[1];

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_15;

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_16;

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_17[1];

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_17;

static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_0[8];

static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_1[1];

static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_2[1];

static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_3[8];

static const MR_DuPtagLayout transform_hlds__term_errors__transform_hlds__term_errors__du_ptag_ordered_term_error_kind_0[4];

static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_name_ordered_term_error_kind_0[18];

static const MR_Integer transform_hlds__term_errors__transform_hlds__term_errors__functor_number_map_term_error_kind_0[18];

static void MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__455__1_2_p_0(
  MR_String transform_hlds__term_errors__LambdaHeadVar__1_160,
  MR_Word * transform_hlds__term_errors__LambdaHeadVar__2_161);

static void MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__451__1_2_p_0(
  MR_String transform_hlds__term_errors__LambdaHeadVar__1_154,
  MR_Word * transform_hlds__term_errors__LambdaHeadVar__2_155);

static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__393__1_2_p_0(
  MR_Word transform_hlds__term_errors__PPId_321,
  MR_Word transform_hlds__term_errors__CallerPPId_323);

static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__332__1_2_p_0(
  MR_Word transform_hlds__term_errors__CallerPPId_11,
  MR_Word transform_hlds__term_errors__PPId_13);

static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__375__1_2_p_0(
  MR_Word transform_hlds__term_errors__PPId_312,
  MR_Word transform_hlds__term_errors__CallerPPId_314);

static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__412__1_2_p_0(
  MR_Word transform_hlds__term_errors__PPId_330,
  MR_Word transform_hlds__term_errors__CallerPPId_332);

static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__504__1_2_p_0(
  MR_Word transform_hlds__term_errors__SCCPredId_43,
  MR_Word transform_hlds__term_errors__PredId_350);

static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__351__1_2_p_0(
  MR_Word transform_hlds__term_errors__PPId_304,
  MR_Word transform_hlds__term_errors__CallerPPId_306);

static void MR_CALL 
transform_hlds__term_errors__describe_term_error_8_p_0(
  MR_Word transform_hlds__term_errors__ModuleInfo_9,
  MR_Word transform_hlds__term_errors__Single_10,
  MR_Word transform_hlds__term_errors__TermErrorContext_11,
  MR_Word transform_hlds__term_errors__ErrorNum_12,
  MR_Word transform_hlds__term_errors__STATE_VARIABLE_ReasonMsgs_0_28,
  MR_Word * transform_hlds__term_errors__STATE_VARIABLE_ReasonMsgs_29,
  MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_0_30,
  MR_Word * transform_hlds__term_errors__STATE_VARIABLE_Specs_31);

static void MR_CALL 
transform_hlds__term_errors__describe_term_errors_8_p_0(
  MR_Word transform_hlds__term_errors__ModuleInfo_1,
  MR_Word transform_hlds__term_errors__Single_2,
  MR_Word transform_hlds__term_errors__HeadVar__3_3,
  MR_Integer transform_hlds__term_errors__ErrNum0_4,
  MR_Word transform_hlds__term_errors__STATE_VARIABLE_Msgs_0_5,
  MR_Word * transform_hlds__term_errors__STATE_VARIABLE_Msgs_6,
  MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_0_7,
  MR_Word * transform_hlds__term_errors__STATE_VARIABLE_Specs_8);

static void MR_CALL 
transform_hlds__term_errors__report_arg_size_errors_5_p_0(
  MR_Word transform_hlds__term_errors__ModuleInfo_6,
  MR_Word transform_hlds__term_errors__SCC_7,
  MR_Word transform_hlds__term_errors__Errors_8,
  MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_0_25,
  MR_Word * transform_hlds__term_errors__STATE_VARIABLE_Specs_26);

static void MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_8(
  MR_Box transform_hlds__term_errors__closure_arg,
  MR_Box transform_hlds__term_errors__wrapper_arg_1,
  MR_Box * transform_hlds__term_errors__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_7(
  MR_Box transform_hlds__term_errors__closure_arg,
  MR_Box transform_hlds__term_errors__wrapper_arg_1,
  MR_Box * transform_hlds__term_errors__wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_6(
  MR_Box transform_hlds__term_errors__closure_arg);

static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_5(
  MR_Box transform_hlds__term_errors__closure_arg);

static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_4(
  MR_Box transform_hlds__term_errors__closure_arg);

static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_3(
  MR_Box transform_hlds__term_errors__closure_arg);

static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_2(
  MR_Box transform_hlds__term_errors__closure_arg);

static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_1(
  MR_Box transform_hlds__term_errors__closure_arg);

static void MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0(
  MR_Word transform_hlds__term_errors__ModuleInfo_6,
  MR_Word transform_hlds__term_errors__Single_7,
  MR_Word transform_hlds__term_errors__ErrorKind_8,
  MR_Word * transform_hlds__term_errors__Pieces_9,
  MR_Word * transform_hlds__term_errors__Reason_10);

static void MR_CALL 
transform_hlds__term_errors__term_errors_var_bag_description_3_p_0(
  MR_Word transform_hlds__term_errors__HeadVars_4,
  MR_Word transform_hlds__term_errors__Varset_5,
  MR_Word * transform_hlds__term_errors__Pieces_6);

static void MR_CALL 
transform_hlds__term_errors__term_errors_var_bag_description_2_4_p_0(
  MR_Word transform_hlds__term_errors__HeadVar__1_1,
  MR_Word transform_hlds__term_errors__Varset_2,
  MR_Word transform_hlds__term_errors__First_3,
  MR_Word * transform_hlds__term_errors__HeadVar__4_4);

static MR_bool MR_CALL 
transform_hlds__term_errors____Unify____term_error_0_0_10001(
  MR_Box transform_hlds__term_errors__wrapper_arg_1,
  MR_Box transform_hlds__term_errors__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_errors____Compare____term_error_0_0_10001(
  MR_Box * transform_hlds__term_errors__wrapper_arg_1,
  MR_Box transform_hlds__term_errors__wrapper_arg_2,
  MR_Box transform_hlds__term_errors__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_errors____Unify____term_error_kind_0_0_10001(
  MR_Box transform_hlds__term_errors__wrapper_arg_1,
  MR_Box transform_hlds__term_errors__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_errors____Compare____term_error_kind_0_0_10001(
  MR_Box * transform_hlds__term_errors__wrapper_arg_1,
  MR_Box transform_hlds__term_errors__wrapper_arg_2,
  MR_Box transform_hlds__term_errors__wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__term_errors_scalar_common_1[115][2];

static /* final */ const MR_Box transform_hlds__term_errors_scalar_common_2[3][3];

static /* final */ const MR_Box transform_hlds__term_errors_scalar_common_3[3][5];

static /* final */ const MR_Box transform_hlds__term_errors_scalar_common_4[1][1];




static /* final */ const MR_Box transform_hlds__term_errors_scalar_common_1[115][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__bag__bag__type_ctor_info_bag_1)),
    ((MR_Box) (&transform_hlds__term_errors_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_errors_scalar_common_2[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "mutually recursive procedures"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Termination of the "))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of the mutually recursive procedures"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Termination constants"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to decrease in size."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the arguments are not guaranteed"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not guaranteed to decrease in size."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the arguments are"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "may make one or more calls back to Mercury."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "It contains foreign code that"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
    ((MR_Box) ((MR_String) "does_not_terminate"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "There is a"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "it."))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "termination constant of infinity."))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Each of these higher-order calls has a"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[36])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "makes one or more higher-order calls."))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[38])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "It contains a higher order call."))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "imported from another module."))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "predicates and/or functions"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[44])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "It contains one or more"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[46])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The termination pragmas are inconsistent."))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in the size of the input arguments."))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "with an unbounded increase"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[52])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "It is a builtin predicate."))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "It contains a typeclass method call."))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "between the arguments of this group of procedures."))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The analysis was unable to form any constraints"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[60])))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
    ((MR_Box) ((MR_String) "foreign_proc"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[64])))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "foreign language code included via a"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[66])))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "It depends on the properties of"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[68])))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "by the analysis to be infeasible."))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The solver found the constraints produced"))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[72])))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for the analysis to process."))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "There are too many execution paths"))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[76])))
  },
  /* row 79 */
  {
    ((MR_Box) ((MR_String) "{}")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "It"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "calls"))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which could not be proven to terminate."))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "At the recursive call to"))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In the recursive cycle through the calls to"))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "with one or more higher order arguments."))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which has a termination constant of infinity."))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The set of output supplier variables of"))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The set of its output supplier variables"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not a subset of the head variables"))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Termination constant of"))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "set to infinity for the following"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "reason:"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[102])))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "reasons:"))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[104]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[105])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Termination of"))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not proven, for unknown reason(s)."))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not proven for the following reason:"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not proven for the following reasons:"))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[113]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box transform_hlds__term_errors_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__term_errors_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__term_errors_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_errors_scalar_common_3[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_errors_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_kind_0
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_0_0 = {
  (MR_String) "term_error",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_0_0[1] = {
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_0_0
};

static const MR_DuPtagLayout transform_hlds__term_errors__transform_hlds__term_errors__du_ptag_ordered_term_error_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_name_ordered_term_error_0[1] = {
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_0_0
};

static const MR_Integer transform_hlds__term_errors__transform_hlds__term_errors__functor_number_map_term_error_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_errors____Unify____term_error_0_0_10001)),
  ((MR_Box) (transform_hlds__term_errors____Compare____term_error_0_0_10001)),
  (MR_String) "transform_hlds.term_errors",
  (MR_String) "term_error",
  {     transform_hlds__term_errors__transform_hlds__term_errors__du_name_ordered_term_error_0 },
  {     transform_hlds__term_errors__transform_hlds__term_errors__du_ptag_ordered_term_error_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_errors__transform_hlds__term_errors__functor_number_map_term_error_0
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_0 = {
  (MR_String) "pragma_foreign_code",
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

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_1 = {
  (MR_String) "imported_pred",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_2[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_2 = {
  (MR_String) "can_loop_proc_called",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_3[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_3 = {
  (MR_String) "horder_args",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 3,
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_4 = {
  (MR_String) "horder_call",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_5 = {
  (MR_String) "method_call",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_6[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_6 = {
  (MR_String) "inf_termination_const",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 6,
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_7[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_errors__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_7 = {
  (MR_String) "ho_inf_termination_const",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 7,
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  {
    (MR_TypeInfo) &transform_hlds__term_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_8[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_errors__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_errors__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_8 = {
  (MR_String) "not_subset",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 8,
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_9[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_9 = {
  (MR_String) "inf_call",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 9,
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_9,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_errors__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_errors__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_10[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_errors__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_10 = {
  (MR_String) "cycle",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 10,
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_10,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_11 = {
  (MR_String) "no_eqns",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 11,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_12 = {
  (MR_String) "too_many_paths",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 12,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_13 = {
  (MR_String) "solver_failed",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 6,
  (MR_Integer) 13,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_14[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_14 = {
  (MR_String) "is_builtin",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 14,
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_14,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_15[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_15 = {
  (MR_String) "does_not_term_pragma",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 15,
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_15,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_16 = {
  (MR_String) "inconsistent_annotations",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 7,
  (MR_Integer) 16,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_17[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_17 = {
  (MR_String) "does_not_term_foreign",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 7,
  (MR_Integer) 17,
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_17,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_0[8] = {
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_0,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_1,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_4,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_5,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_11,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_12,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_13,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_16
};

static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_1[1] = {
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_2
};

static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_2[1] = {
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_3
};

static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_3[8] = {
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_6,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_7,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_8,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_9,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_10,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_14,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_15,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_17
};

static const MR_DuPtagLayout transform_hlds__term_errors__transform_hlds__term_errors__du_ptag_ordered_term_error_kind_0[4] = {
  {
    (MR_Integer) 8,
    MR_SECTAG_LOCAL,
    transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_2
  },
  {
    (MR_Integer) 8,
    MR_SECTAG_REMOTE,
    transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_3
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_name_ordered_term_error_kind_0[18] = {
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_2,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_10,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_17,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_15,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_7,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_3,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_4,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_1,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_16,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_9,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_6,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_14,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_5,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_11,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_8,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_0,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_13,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_12
};

static const MR_Integer transform_hlds__term_errors__transform_hlds__term_errors__functor_number_map_term_error_kind_0[18] = {
  (MR_Integer) 15,
  (MR_Integer) 7,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 12,
  (MR_Integer) 10,
  (MR_Integer) 4,
  (MR_Integer) 14,
  (MR_Integer) 9,
  (MR_Integer) 1,
  (MR_Integer) 13,
  (MR_Integer) 17,
  (MR_Integer) 16,
  (MR_Integer) 11,
  (MR_Integer) 3,
  (MR_Integer) 8,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_errors____Unify____term_error_kind_0_0_10001)),
  ((MR_Box) (transform_hlds__term_errors____Compare____term_error_kind_0_0_10001)),
  (MR_String) "transform_hlds.term_errors",
  (MR_String) "term_error_kind",
  {     transform_hlds__term_errors__transform_hlds__term_errors__du_name_ordered_term_error_kind_0 },
  {     transform_hlds__term_errors__transform_hlds__term_errors__du_ptag_ordered_term_error_kind_0 },
  (MR_Integer) 18,
  (MR_Integer) 4,
  transform_hlds__term_errors__transform_hlds__term_errors__functor_number_map_term_error_kind_0
};

static void MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__455__1_2_p_0(
  MR_String transform_hlds__term_errors__LambdaHeadVar__1_160,
  MR_Word * transform_hlds__term_errors__LambdaHeadVar__2_161)
{
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
    *transform_hlds__term_errors__LambdaHeadVar__2_161 = base;
    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__term_errors__LambdaHeadVar__1_160));
  }
}

static void MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__451__1_2_p_0(
  MR_String transform_hlds__term_errors__LambdaHeadVar__1_154,
  MR_Word * transform_hlds__term_errors__LambdaHeadVar__2_155)
{
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
    *transform_hlds__term_errors__LambdaHeadVar__2_155 = base;
    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__term_errors__LambdaHeadVar__1_154));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__393__1_2_p_0(
  MR_Word transform_hlds__term_errors__PPId_321,
  MR_Word transform_hlds__term_errors__CallerPPId_323)
{
  {
    MR_bool transform_hlds__term_errors__succeeded;

    transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__PPId_321, transform_hlds__term_errors__CallerPPId_323);
    return transform_hlds__term_errors__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__332__1_2_p_0(
  MR_Word transform_hlds__term_errors__CallerPPId_11,
  MR_Word transform_hlds__term_errors__PPId_13)
{
  {
    MR_bool transform_hlds__term_errors__succeeded;

    transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__PPId_13, transform_hlds__term_errors__CallerPPId_11);
    return transform_hlds__term_errors__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__375__1_2_p_0(
  MR_Word transform_hlds__term_errors__PPId_312,
  MR_Word transform_hlds__term_errors__CallerPPId_314)
{
  {
    MR_bool transform_hlds__term_errors__succeeded;

    transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__PPId_312, transform_hlds__term_errors__CallerPPId_314);
    return transform_hlds__term_errors__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__412__1_2_p_0(
  MR_Word transform_hlds__term_errors__PPId_330,
  MR_Word transform_hlds__term_errors__CallerPPId_332)
{
  {
    MR_bool transform_hlds__term_errors__succeeded;

    transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__PPId_330, transform_hlds__term_errors__CallerPPId_332);
    return transform_hlds__term_errors__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__504__1_2_p_0(
  MR_Word transform_hlds__term_errors__SCCPredId_43,
  MR_Word transform_hlds__term_errors__PredId_350)
{
  {
    MR_bool transform_hlds__term_errors__succeeded;

    transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__term_errors__PredId_350, transform_hlds__term_errors__SCCPredId_43);
    return transform_hlds__term_errors__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__351__1_2_p_0(
  MR_Word transform_hlds__term_errors__PPId_304,
  MR_Word transform_hlds__term_errors__CallerPPId_306)
{
  {
    MR_bool transform_hlds__term_errors__succeeded;

    transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__PPId_304, transform_hlds__term_errors__CallerPPId_306);
    return transform_hlds__term_errors__succeeded;
  }
}

void MR_CALL 
transform_hlds__term_errors____Compare____term_error_0_0(
  MR_Word * transform_hlds__term_errors__HeadVar__1_1,
  MR_Word transform_hlds__term_errors__HeadVar__2_2,
  MR_Word transform_hlds__term_errors__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_errors__succeeded;
    MR_Integer transform_hlds__term_errors__CastX_9 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;
    MR_Integer transform_hlds__term_errors__CastY_10 = (MR_Integer) transform_hlds__term_errors__HeadVar__3_3;

    transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastX_9 == transform_hlds__term_errors__CastY_10);
    if (transform_hlds__term_errors__succeeded)
      *transform_hlds__term_errors__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word transform_hlds__term_errors__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word transform_hlds__term_errors__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word transform_hlds__term_errors__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word transform_hlds__term_errors__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word transform_hlds__term_errors__Var_8;

      mercury__term____Compare____context_0_0(&transform_hlds__term_errors__Var_8, transform_hlds__term_errors__ArgX1_4, transform_hlds__term_errors__ArgY1_5);
      transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__Var_8 == (MR_Integer) 0);
      transform_hlds__term_errors__succeeded = !(transform_hlds__term_errors__succeeded);
      if (transform_hlds__term_errors__succeeded)
        *transform_hlds__term_errors__HeadVar__1_1 = transform_hlds__term_errors__Var_8;
      else
        transform_hlds__term_errors____Compare____term_error_kind_0_0(transform_hlds__term_errors__HeadVar__1_1, transform_hlds__term_errors__ArgX2_6, transform_hlds__term_errors__ArgY2_7);
    }
  }
}

void MR_CALL 
transform_hlds__term_errors____Compare____term_error_kind_0_0(
  MR_Word * transform_hlds__term_errors__HeadVar__1_1,
  MR_Word transform_hlds__term_errors__HeadVar__2_2,
  MR_Word transform_hlds__term_errors__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_errors__succeeded;
    MR_Integer transform_hlds__term_errors__CastX_51 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;
    MR_Integer transform_hlds__term_errors__CastY_52 = (MR_Integer) transform_hlds__term_errors__HeadVar__3_3;

    transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastX_51 == transform_hlds__term_errors__CastY_52);
    if (transform_hlds__term_errors__succeeded)
      *transform_hlds__term_errors__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer transform_hlds__term_errors__Var_4;
      MR_Integer transform_hlds__term_errors__Var_5;

      transform_hlds__term_errors____Index____term_error_kind_0_0(transform_hlds__term_errors__HeadVar__2_2, &transform_hlds__term_errors__Var_4);
      transform_hlds__term_errors____Index____term_error_kind_0_0(transform_hlds__term_errors__HeadVar__3_3, &transform_hlds__term_errors__Var_5);
      transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__Var_4 < transform_hlds__term_errors__Var_5);
      if (transform_hlds__term_errors__succeeded)
        *transform_hlds__term_errors__HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__Var_4 > transform_hlds__term_errors__Var_5);
        if (transform_hlds__term_errors__succeeded)
          *transform_hlds__term_errors__HeadVar__1_1 = (MR_Integer) 2;
        else
        {
          MR_Word transform_hlds__term_errors__Var_6;

          switch (MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(transform_hlds__term_errors__HeadVar__2_2)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    transform_hlds__term_errors__Var_6 = (MR_Integer) 0;
                    transform_hlds__term_errors__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    transform_hlds__term_errors__Var_6 = (MR_Integer) 0;
                    transform_hlds__term_errors__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    transform_hlds__term_errors__Var_6 = (MR_Integer) 0;
                    transform_hlds__term_errors__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    transform_hlds__term_errors__Var_6 = (MR_Integer) 0;
                    transform_hlds__term_errors__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    transform_hlds__term_errors__Var_6 = (MR_Integer) 0;
                    transform_hlds__term_errors__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    transform_hlds__term_errors__Var_6 = (MR_Integer) 0;
                    transform_hlds__term_errors__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    transform_hlds__term_errors__Var_6 = (MR_Integer) 0;
                    transform_hlds__term_errors__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    transform_hlds__term_errors__Var_6 = (MR_Integer) 0;
                    transform_hlds__term_errors__succeeded = MR_TRUE;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word transform_hlds__term_errors__ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)));
                MR_Word transform_hlds__term_errors__ArgY1_8;
                MR_Word transform_hlds__term_errors__ArgX2_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
                MR_Word transform_hlds__term_errors__ArgY2_10;
                MR_Word transform_hlds__term_errors__Var_11;

                transform_hlds__term_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
                if (transform_hlds__term_errors__succeeded)
                {
                  transform_hlds__term_errors__ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)));
                  transform_hlds__term_errors__ArgY2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_errors__Var_11, transform_hlds__term_errors__ArgX1_7, transform_hlds__term_errors__ArgY1_8);
                  transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__Var_11 == (MR_Integer) 0);
                  transform_hlds__term_errors__succeeded = !(transform_hlds__term_errors__succeeded);
                  if (transform_hlds__term_errors__succeeded)
                    transform_hlds__term_errors__Var_6 = transform_hlds__term_errors__Var_11;
                  else
                    hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_errors__Var_6, transform_hlds__term_errors__ArgX2_9, transform_hlds__term_errors__ArgY2_10);
                  transform_hlds__term_errors__succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word transform_hlds__term_errors__ArgX1_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)));
                MR_Word transform_hlds__term_errors__ArgY1_13;
                MR_Word transform_hlds__term_errors__ArgX2_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
                MR_Word transform_hlds__term_errors__ArgY2_15;
                MR_Word transform_hlds__term_errors__Var_16;

                transform_hlds__term_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
                if (transform_hlds__term_errors__succeeded)
                {
                  transform_hlds__term_errors__ArgY1_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)));
                  transform_hlds__term_errors__ArgY2_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_errors__Var_16, transform_hlds__term_errors__ArgX1_12, transform_hlds__term_errors__ArgY1_13);
                  transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__Var_16 == (MR_Integer) 0);
                  transform_hlds__term_errors__succeeded = !(transform_hlds__term_errors__succeeded);
                  if (transform_hlds__term_errors__succeeded)
                    transform_hlds__term_errors__Var_6 = transform_hlds__term_errors__Var_16;
                  else
                    hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_errors__Var_6, transform_hlds__term_errors__ArgX2_14, transform_hlds__term_errors__ArgY2_15);
                  transform_hlds__term_errors__succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word transform_hlds__term_errors__ArgX1_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
                    MR_Word transform_hlds__term_errors__ArgY1_18;
                    MR_Word transform_hlds__term_errors__ArgX2_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 2)));
                    MR_Word transform_hlds__term_errors__ArgY2_20;
                    MR_Word transform_hlds__term_errors__Var_21;

                    transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (transform_hlds__term_errors__succeeded)
                    {
                      transform_hlds__term_errors__ArgY1_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
                      transform_hlds__term_errors__ArgY2_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 2)));
                      hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_errors__Var_21, transform_hlds__term_errors__ArgX1_17, transform_hlds__term_errors__ArgY1_18);
                      transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__Var_21 == (MR_Integer) 0);
                      transform_hlds__term_errors__succeeded = !(transform_hlds__term_errors__succeeded);
                      if (transform_hlds__term_errors__succeeded)
                        transform_hlds__term_errors__Var_6 = transform_hlds__term_errors__Var_21;
                      else
                        hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_errors__Var_6, transform_hlds__term_errors__ArgX2_19, transform_hlds__term_errors__ArgY2_20);
                      transform_hlds__term_errors__succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word transform_hlds__term_errors__ArgX1_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
                    MR_Word transform_hlds__term_errors__ArgY1_23;
                    MR_Word transform_hlds__term_errors__ArgX2_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 2)));
                    MR_Word transform_hlds__term_errors__ArgY2_25;
                    MR_Word transform_hlds__term_errors__Var_26;

                    transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (transform_hlds__term_errors__succeeded)
                    {
                      transform_hlds__term_errors__ArgY1_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
                      transform_hlds__term_errors__ArgY2_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 2)));
                      hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_errors__Var_26, transform_hlds__term_errors__ArgX1_22, transform_hlds__term_errors__ArgY1_23);
                      transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__Var_26 == (MR_Integer) 0);
                      transform_hlds__term_errors__succeeded = !(transform_hlds__term_errors__succeeded);
                      if (transform_hlds__term_errors__succeeded)
                        transform_hlds__term_errors__Var_6 = transform_hlds__term_errors__Var_26;
                      else
                      {
                        mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_errors_scalar_common_1[1], &transform_hlds__term_errors__Var_6, ((MR_Box) (transform_hlds__term_errors__ArgX2_24)), ((MR_Box) (transform_hlds__term_errors__ArgY2_25)));
                      }
                      transform_hlds__term_errors__succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word transform_hlds__term_errors__ArgX1_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
                    MR_Word transform_hlds__term_errors__ArgY1_28;
                    MR_Word transform_hlds__term_errors__ArgX2_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 2)));
                    MR_Word transform_hlds__term_errors__ArgY2_30;
                    MR_Word transform_hlds__term_errors__ArgX3_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 3)));
                    MR_Word transform_hlds__term_errors__ArgY3_32;
                    MR_Word transform_hlds__term_errors__Var_33;

                    transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
                    if (transform_hlds__term_errors__succeeded)
                    {
                      transform_hlds__term_errors__ArgY1_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
                      transform_hlds__term_errors__ArgY2_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 2)));
                      transform_hlds__term_errors__ArgY3_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 3)));
                      hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_errors__Var_33, transform_hlds__term_errors__ArgX1_27, transform_hlds__term_errors__ArgY1_28);
                      transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__Var_33 == (MR_Integer) 0);
                      transform_hlds__term_errors__succeeded = !(transform_hlds__term_errors__succeeded);
                      if (transform_hlds__term_errors__succeeded)
                        transform_hlds__term_errors__Var_6 = transform_hlds__term_errors__Var_33;
                      else
                      {
                        MR_Word transform_hlds__term_errors__Var_34;

                        mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_errors_scalar_common_1[2], &transform_hlds__term_errors__Var_34, ((MR_Box) (transform_hlds__term_errors__ArgX2_29)), ((MR_Box) (transform_hlds__term_errors__ArgY2_30)));
                        transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__Var_34 == (MR_Integer) 0);
                        transform_hlds__term_errors__succeeded = !(transform_hlds__term_errors__succeeded);
                        if (transform_hlds__term_errors__succeeded)
                          transform_hlds__term_errors__Var_6 = transform_hlds__term_errors__Var_34;
                        else
                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_errors_scalar_common_1[2], &transform_hlds__term_errors__Var_6, ((MR_Box) (transform_hlds__term_errors__ArgX3_31)), ((MR_Box) (transform_hlds__term_errors__ArgY3_32)));
                        }
                      }
                      transform_hlds__term_errors__succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word transform_hlds__term_errors__ArgX1_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
                    MR_Word transform_hlds__term_errors__ArgY1_36;
                    MR_Word transform_hlds__term_errors__ArgX2_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 2)));
                    MR_Word transform_hlds__term_errors__ArgY2_38;
                    MR_Word transform_hlds__term_errors__Var_39;

                    transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
                    if (transform_hlds__term_errors__succeeded)
                    {
                      transform_hlds__term_errors__ArgY1_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
                      transform_hlds__term_errors__ArgY2_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 2)));
                      hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_errors__Var_39, transform_hlds__term_errors__ArgX1_35, transform_hlds__term_errors__ArgY1_36);
                      transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__Var_39 == (MR_Integer) 0);
                      transform_hlds__term_errors__succeeded = !(transform_hlds__term_errors__succeeded);
                      if (transform_hlds__term_errors__succeeded)
                        transform_hlds__term_errors__Var_6 = transform_hlds__term_errors__Var_39;
                      else
                        hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_errors__Var_6, transform_hlds__term_errors__ArgX2_37, transform_hlds__term_errors__ArgY2_38);
                      transform_hlds__term_errors__succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word transform_hlds__term_errors__ArgX1_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
                    MR_Word transform_hlds__term_errors__ArgY1_41;
                    MR_Word transform_hlds__term_errors__ArgX2_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 2)));
                    MR_Word transform_hlds__term_errors__ArgY2_43;
                    MR_Word transform_hlds__term_errors__Var_44;

                    transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
                    if (transform_hlds__term_errors__succeeded)
                    {
                      transform_hlds__term_errors__ArgY1_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
                      transform_hlds__term_errors__ArgY2_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 2)));
                      hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_errors__Var_44, transform_hlds__term_errors__ArgX1_40, transform_hlds__term_errors__ArgY1_41);
                      transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__Var_44 == (MR_Integer) 0);
                      transform_hlds__term_errors__succeeded = !(transform_hlds__term_errors__succeeded);
                      if (transform_hlds__term_errors__succeeded)
                        transform_hlds__term_errors__Var_6 = transform_hlds__term_errors__Var_44;
                      else
                      {
                        mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_errors_scalar_common_1[3], &transform_hlds__term_errors__Var_6, ((MR_Box) (transform_hlds__term_errors__ArgX2_42)), ((MR_Box) (transform_hlds__term_errors__ArgY2_43)));
                      }
                      transform_hlds__term_errors__succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word transform_hlds__term_errors__ArgX1_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
                    MR_Word transform_hlds__term_errors__ArgY1_46;

                    transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
                    if (transform_hlds__term_errors__succeeded)
                    {
                      transform_hlds__term_errors__ArgY1_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
                      hlds__hlds_pred____Compare____pred_id_0_0(&transform_hlds__term_errors__Var_6, transform_hlds__term_errors__ArgX1_45, transform_hlds__term_errors__ArgY1_46);
                      transform_hlds__term_errors__succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word transform_hlds__term_errors__ArgX1_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
                    MR_Word transform_hlds__term_errors__ArgY1_48;

                    transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
                    if (transform_hlds__term_errors__succeeded)
                    {
                      transform_hlds__term_errors__ArgY1_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
                      hlds__hlds_pred____Compare____pred_id_0_0(&transform_hlds__term_errors__Var_6, transform_hlds__term_errors__ArgX1_47, transform_hlds__term_errors__ArgY1_48);
                      transform_hlds__term_errors__succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word transform_hlds__term_errors__ArgX1_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
                    MR_Word transform_hlds__term_errors__ArgY1_50;

                    transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
                    if (transform_hlds__term_errors__succeeded)
                    {
                      transform_hlds__term_errors__ArgY1_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
                      hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_errors__Var_6, transform_hlds__term_errors__ArgX1_49, transform_hlds__term_errors__ArgY1_50);
                      transform_hlds__term_errors__succeeded = MR_TRUE;
                    }
                  }
                  break;
              }
              break;
          }
          if (transform_hlds__term_errors__succeeded)
            *transform_hlds__term_errors__HeadVar__1_1 = transform_hlds__term_errors__Var_6;
          else
            {
              mercury__private_builtin__compare_error_0_p_0();
              return;
            }
        }
      }
    }
  }
}

void MR_CALL 
transform_hlds__term_errors____Index____term_error_kind_0_0(
  MR_Word transform_hlds__term_errors__HeadVar__1_1,
  MR_Integer * transform_hlds__term_errors__HeadVar__2_2)
{
  switch (MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(transform_hlds__term_errors__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 2:
          *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 4;
          break;
        case (MR_Integer) 3:
          *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 5;
          break;
        case (MR_Integer) 4:
          *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 11;
          break;
        case (MR_Integer) 5:
          *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 12;
          break;
        case (MR_Integer) 6:
          *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 13;
          break;
        case (MR_Integer) 7:
          *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 16;
          break;
      }
      break;
    case (MR_Integer) 1:
      *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 2;
      break;
    case (MR_Integer) 2:
      *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 3;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 6;
          break;
        case (MR_Integer) 1:
          *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 7;
          break;
        case (MR_Integer) 2:
          *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 8;
          break;
        case (MR_Integer) 3:
          *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 9;
          break;
        case (MR_Integer) 4:
          *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 10;
          break;
        case (MR_Integer) 5:
          *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 14;
          break;
        case (MR_Integer) 6:
          *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 15;
          break;
        case (MR_Integer) 7:
          *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 17;
          break;
      }
      break;
  }
}

MR_bool MR_CALL 
transform_hlds__term_errors____Unify____term_error_0_0(
  MR_Word transform_hlds__term_errors__HeadVar__1_1,
  MR_Word transform_hlds__term_errors__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_errors__succeeded;
    MR_Integer transform_hlds__term_errors__CastX_7 = (MR_Integer) transform_hlds__term_errors__HeadVar__1_1;
    MR_Integer transform_hlds__term_errors__CastY_8 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;

    transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastX_7 == transform_hlds__term_errors__CastY_8);
    if (transform_hlds__term_errors__succeeded)
      transform_hlds__term_errors__succeeded = MR_TRUE;
    else
    {
      MR_Word transform_hlds__term_errors__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word transform_hlds__term_errors__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word transform_hlds__term_errors__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word transform_hlds__term_errors__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));

      transform_hlds__term_errors__succeeded = mercury__term____Unify____context_0_0(transform_hlds__term_errors__ArgX1_3, transform_hlds__term_errors__ArgY1_4);
      if (transform_hlds__term_errors__succeeded)
        transform_hlds__term_errors__succeeded = transform_hlds__term_errors____Unify____term_error_kind_0_0(transform_hlds__term_errors__ArgX2_5, transform_hlds__term_errors__ArgY2_6);
    }
    return transform_hlds__term_errors__succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__term_errors____Unify____term_error_kind_0_0(
  MR_Word transform_hlds__term_errors__HeadVar__1_1,
  MR_Word transform_hlds__term_errors__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_errors__succeeded;
    MR_Integer transform_hlds__term_errors__CastX_55 = (MR_Integer) transform_hlds__term_errors__HeadVar__1_1;
    MR_Integer transform_hlds__term_errors__CastY_56 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;

    transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastX_55 == transform_hlds__term_errors__CastY_56);
    if (transform_hlds__term_errors__succeeded)
      transform_hlds__term_errors__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(transform_hlds__term_errors__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer transform_hlds__term_errors__CastX_3 = (MR_Integer) transform_hlds__term_errors__HeadVar__1_1;
                MR_Integer transform_hlds__term_errors__CastY_4 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;

                transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastY_4 == transform_hlds__term_errors__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer transform_hlds__term_errors__CastX_5 = (MR_Integer) transform_hlds__term_errors__HeadVar__1_1;
                MR_Integer transform_hlds__term_errors__CastY_6 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;

                transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastY_6 == transform_hlds__term_errors__CastX_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer transform_hlds__term_errors__CastX_15 = (MR_Integer) transform_hlds__term_errors__HeadVar__1_1;
                MR_Integer transform_hlds__term_errors__CastY_16 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;

                transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastY_16 == transform_hlds__term_errors__CastX_15);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer transform_hlds__term_errors__CastX_17 = (MR_Integer) transform_hlds__term_errors__HeadVar__1_1;
                MR_Integer transform_hlds__term_errors__CastY_18 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;

                transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastY_18 == transform_hlds__term_errors__CastX_17);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer transform_hlds__term_errors__CastX_41 = (MR_Integer) transform_hlds__term_errors__HeadVar__1_1;
                MR_Integer transform_hlds__term_errors__CastY_42 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;

                transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastY_42 == transform_hlds__term_errors__CastX_41);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Integer transform_hlds__term_errors__CastX_43 = (MR_Integer) transform_hlds__term_errors__HeadVar__1_1;
                MR_Integer transform_hlds__term_errors__CastY_44 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;

                transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastY_44 == transform_hlds__term_errors__CastX_43);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Integer transform_hlds__term_errors__CastX_45 = (MR_Integer) transform_hlds__term_errors__HeadVar__1_1;
                MR_Integer transform_hlds__term_errors__CastY_46 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;

                transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastY_46 == transform_hlds__term_errors__CastX_45);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Integer transform_hlds__term_errors__CastX_51 = (MR_Integer) transform_hlds__term_errors__HeadVar__1_1;
                MR_Integer transform_hlds__term_errors__CastY_52 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;

                transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastY_52 == transform_hlds__term_errors__CastX_51);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word transform_hlds__term_errors__ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__term_errors__ArgY1_8;
            MR_Word transform_hlds__term_errors__ArgX2_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__term_errors__ArgY2_10;

            transform_hlds__term_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__term_errors__succeeded)
            {
              transform_hlds__term_errors__ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)));
              transform_hlds__term_errors__ArgY2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
              transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__ArgX1_7, transform_hlds__term_errors__ArgY1_8);
              if (transform_hlds__term_errors__succeeded)
                transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__ArgX2_9, transform_hlds__term_errors__ArgY2_10);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word transform_hlds__term_errors__ArgX1_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__term_errors__ArgY1_12;
            MR_Word transform_hlds__term_errors__ArgX2_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__term_errors__ArgY2_14;

            transform_hlds__term_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (transform_hlds__term_errors__succeeded)
            {
              transform_hlds__term_errors__ArgY1_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)));
              transform_hlds__term_errors__ArgY2_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
              transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__ArgX1_11, transform_hlds__term_errors__ArgY1_12);
              if (transform_hlds__term_errors__succeeded)
                transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__ArgX2_13, transform_hlds__term_errors__ArgY2_14);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word transform_hlds__term_errors__ArgX1_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word transform_hlds__term_errors__ArgY1_20;
                MR_Word transform_hlds__term_errors__ArgX2_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word transform_hlds__term_errors__ArgY2_22;

                transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (transform_hlds__term_errors__succeeded)
                {
                  transform_hlds__term_errors__ArgY1_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
                  transform_hlds__term_errors__ArgY2_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 2)));
                  transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__ArgX1_19, transform_hlds__term_errors__ArgY1_20);
                  if (transform_hlds__term_errors__succeeded)
                    transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__ArgX2_21, transform_hlds__term_errors__ArgY2_22);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word transform_hlds__term_errors__TypeInfo_64_64;
                MR_Word transform_hlds__term_errors__ArgX1_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word transform_hlds__term_errors__ArgY1_24;
                MR_Word transform_hlds__term_errors__ArgX2_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word transform_hlds__term_errors__ArgY2_26;

                transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (transform_hlds__term_errors__succeeded)
                {
                  transform_hlds__term_errors__ArgY1_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
                  transform_hlds__term_errors__ArgY2_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 2)));
                  transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__ArgX1_23, transform_hlds__term_errors__ArgY1_24);
                  if (transform_hlds__term_errors__succeeded)
                  {
                    transform_hlds__term_errors__TypeInfo_64_64 = (MR_Word) &transform_hlds__term_errors_scalar_common_1[1];
                    transform_hlds__term_errors__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_errors__TypeInfo_64_64, ((MR_Box) (transform_hlds__term_errors__ArgX2_25)), ((MR_Box) (transform_hlds__term_errors__ArgY2_26)));
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word transform_hlds__term_errors__TypeInfo_73_73;
                MR_Word transform_hlds__term_errors__TypeInfo_74_74;
                MR_Word transform_hlds__term_errors__ArgX1_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word transform_hlds__term_errors__ArgY1_28;
                MR_Word transform_hlds__term_errors__ArgX2_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word transform_hlds__term_errors__ArgY2_30;
                MR_Word transform_hlds__term_errors__ArgX3_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 3)));
                MR_Word transform_hlds__term_errors__ArgY3_32;

                transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (transform_hlds__term_errors__succeeded)
                {
                  transform_hlds__term_errors__ArgY1_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
                  transform_hlds__term_errors__ArgY2_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 2)));
                  transform_hlds__term_errors__ArgY3_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 3)));
                  transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__ArgX1_27, transform_hlds__term_errors__ArgY1_28);
                  if (transform_hlds__term_errors__succeeded)
                  {
                    transform_hlds__term_errors__TypeInfo_73_73 = (MR_Word) &transform_hlds__term_errors_scalar_common_1[2];
                    transform_hlds__term_errors__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_errors__TypeInfo_73_73, ((MR_Box) (transform_hlds__term_errors__ArgX2_29)), ((MR_Box) (transform_hlds__term_errors__ArgY2_30)));
                    if (transform_hlds__term_errors__succeeded)
                    {
                      transform_hlds__term_errors__TypeInfo_74_74 = (MR_Word) &transform_hlds__term_errors_scalar_common_1[2];
                      transform_hlds__term_errors__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_errors__TypeInfo_74_74, ((MR_Box) (transform_hlds__term_errors__ArgX3_31)), ((MR_Box) (transform_hlds__term_errors__ArgY3_32)));
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word transform_hlds__term_errors__ArgX1_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word transform_hlds__term_errors__ArgY1_34;
                MR_Word transform_hlds__term_errors__ArgX2_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word transform_hlds__term_errors__ArgY2_36;

                transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (transform_hlds__term_errors__succeeded)
                {
                  transform_hlds__term_errors__ArgY1_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
                  transform_hlds__term_errors__ArgY2_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 2)));
                  transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__ArgX1_33, transform_hlds__term_errors__ArgY1_34);
                  if (transform_hlds__term_errors__succeeded)
                    transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__ArgX2_35, transform_hlds__term_errors__ArgY2_36);
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word transform_hlds__term_errors__TypeInfo_60_60;
                MR_Word transform_hlds__term_errors__ArgX1_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word transform_hlds__term_errors__ArgY1_38;
                MR_Word transform_hlds__term_errors__ArgX2_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word transform_hlds__term_errors__ArgY2_40;

                transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (transform_hlds__term_errors__succeeded)
                {
                  transform_hlds__term_errors__ArgY1_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
                  transform_hlds__term_errors__ArgY2_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 2)));
                  transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__ArgX1_37, transform_hlds__term_errors__ArgY1_38);
                  if (transform_hlds__term_errors__succeeded)
                  {
                    transform_hlds__term_errors__TypeInfo_60_60 = (MR_Word) &transform_hlds__term_errors_scalar_common_1[3];
                    transform_hlds__term_errors__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_errors__TypeInfo_60_60, ((MR_Box) (transform_hlds__term_errors__ArgX2_39)), ((MR_Box) (transform_hlds__term_errors__ArgY2_40)));
                  }
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word transform_hlds__term_errors__ArgX1_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word transform_hlds__term_errors__ArgY1_48;

                transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (transform_hlds__term_errors__succeeded)
                {
                  transform_hlds__term_errors__ArgY1_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
                  transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__term_errors__ArgX1_47, transform_hlds__term_errors__ArgY1_48);
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word transform_hlds__term_errors__ArgX1_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word transform_hlds__term_errors__ArgY1_50;

                transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (transform_hlds__term_errors__succeeded)
                {
                  transform_hlds__term_errors__ArgY1_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
                  transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__term_errors__ArgX1_49, transform_hlds__term_errors__ArgY1_50);
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word transform_hlds__term_errors__ArgX1_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word transform_hlds__term_errors__ArgY1_54;

                transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
                if (transform_hlds__term_errors__succeeded)
                {
                  transform_hlds__term_errors__ArgY1_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
                  transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__ArgX1_53, transform_hlds__term_errors__ArgY1_54);
                }
              }
              break;
          }
          break;
      }
    return transform_hlds__term_errors__succeeded;
  }
}

MR_Word MR_CALL 
transform_hlds__term_errors__term_error_kind_is_fatal_error_1_f_0(
  MR_Word transform_hlds__term_errors__ErrorKind_3)
{
  {
    MR_Word transform_hlds__term_errors__IsFatal_4;

    switch (MR_tag((MR_Word) transform_hlds__term_errors__ErrorKind_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(transform_hlds__term_errors__ErrorKind_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
            transform_hlds__term_errors__IsFatal_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            transform_hlds__term_errors__IsFatal_4 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        transform_hlds__term_errors__IsFatal_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        transform_hlds__term_errors__IsFatal_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        transform_hlds__term_errors__IsFatal_4 = (MR_Integer) 0;
        break;
    }
    return transform_hlds__term_errors__IsFatal_4;
  }
}

MR_Word MR_CALL 
transform_hlds__term_errors__term_error_kind_is_direct_error_1_f_0(
  MR_Word transform_hlds__term_errors__ErrorKind_3)
{
  {
    MR_Word transform_hlds__term_errors__IsDirect_4;

    switch (MR_tag((MR_Word) transform_hlds__term_errors__ErrorKind_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(transform_hlds__term_errors__ErrorKind_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            transform_hlds__term_errors__IsDirect_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
            transform_hlds__term_errors__IsDirect_4 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        transform_hlds__term_errors__IsDirect_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 7:
            transform_hlds__term_errors__IsDirect_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 6:
            transform_hlds__term_errors__IsDirect_4 = (MR_Integer) 0;
            break;
        }
        break;
    }
    return transform_hlds__term_errors__IsDirect_4;
  }
}

void MR_CALL 
transform_hlds__term_errors__report_term_errors_5_p_0(
  MR_Word transform_hlds__term_errors__ModuleInfo_6,
  MR_Word transform_hlds__term_errors__SCC_7,
  MR_Word transform_hlds__term_errors__Errors_8,
  MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_0_24,
  MR_Word * transform_hlds__term_errors__STATE_VARIABLE_Specs_25)
{
  {
    MR_bool transform_hlds__term_errors__succeeded;
    MR_Word transform_hlds__term_errors__Context_10;
    MR_Word transform_hlds__term_errors__Pieces1_12;
    MR_Word transform_hlds__term_errors__Single_13;
    MR_Word transform_hlds__term_errors__Pieces_15;
    MR_Word transform_hlds__term_errors__ReasonMsgsCord_16;
    MR_Word transform_hlds__term_errors__ReasonMsgs_21;
    MR_Word transform_hlds__term_errors__Msgs_22;
    MR_Word transform_hlds__term_errors__Spec_23;
    MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_55_55;
    MR_Word transform_hlds__term_errors__Var_59;
    MR_Word transform_hlds__term_errors__Var_60;
    MR_Word transform_hlds__term_errors__Var_61;
    MR_Word transform_hlds__term_errors__PPId_11;
    MR_Box transform_hlds__term_errors__conv0_PPId_11;

    transform_hlds__term_util__get_context_from_scc_3_p_0(transform_hlds__term_errors__ModuleInfo_6, transform_hlds__term_errors__SCC_7, &transform_hlds__term_errors__Context_10);
    transform_hlds__term_errors__succeeded = mercury__set__is_singleton_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_errors__SCC_7, &transform_hlds__term_errors__conv0_PPId_11);
    if (transform_hlds__term_errors__succeeded)
    {
      transform_hlds__term_errors__PPId_11 = ((MR_Word) transform_hlds__term_errors__conv0_PPId_11);
      transform_hlds__term_errors__succeeded = MR_TRUE;
    }
    if (transform_hlds__term_errors__succeeded)
    {
      MR_Word transform_hlds__term_errors__Var_30;

      transform_hlds__term_errors__Var_30 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__PPId_11);
      transform_hlds__term_errors__Pieces1_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[108]), transform_hlds__term_errors__Var_30);
      {
        transform_hlds__term_errors__Single_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Single_13, 0) = ((MR_Box) (transform_hlds__term_errors__PPId_11));
      }
    }
    else
    {
      MR_Word transform_hlds__term_errors__Var_39;
      MR_Word transform_hlds__term_errors__Var_41;

      transform_hlds__term_errors__Var_41 = mercury__set__to_sorted_list_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_errors__SCC_7);
      transform_hlds__term_errors__Var_39 = hlds__hlds_error_util__describe_several_proc_names_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__Var_41);
      transform_hlds__term_errors__Pieces1_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[7]), transform_hlds__term_errors__Var_39);
      transform_hlds__term_errors__Single_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    if ((transform_hlds__term_errors__Errors_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      transform_hlds__term_errors__Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_errors__Pieces1_12, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[110]));
      transform_hlds__term_errors__ReasonMsgsCord_16 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0);
      transform_hlds__term_errors__STATE_VARIABLE_Specs_55_55 = transform_hlds__term_errors__STATE_VARIABLE_Specs_0_24;
    }
    else
    {
      MR_Word transform_hlds__term_errors__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Errors_8, (MR_Integer) 1)));
      MR_Word transform_hlds__term_errors__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Errors_8, (MR_Integer) 0)));

      if ((transform_hlds__term_errors__Var_79 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word transform_hlds__term_errors__Var_54;

        transform_hlds__term_errors__Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_errors__Pieces1_12, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[112]));
        transform_hlds__term_errors__Var_54 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0);
        transform_hlds__term_errors__describe_term_error_8_p_0(transform_hlds__term_errors__ModuleInfo_6, transform_hlds__term_errors__Single_13, transform_hlds__term_errors__Var_80, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_errors__Var_54, &transform_hlds__term_errors__ReasonMsgsCord_16, transform_hlds__term_errors__STATE_VARIABLE_Specs_0_24, &transform_hlds__term_errors__STATE_VARIABLE_Specs_55_55);
      }
      else
      {
        MR_Word transform_hlds__term_errors__Var_47;
        MR_Word transform_hlds__term_errors__Error_92;
        MR_Word transform_hlds__term_errors__Errors_93;
        MR_Word transform_hlds__term_errors__STATE_VARIABLE_Msgs_30_102;
        MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_31_103;

        transform_hlds__term_errors__Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_errors__Pieces1_12, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[114]));
        transform_hlds__term_errors__Var_47 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0);
        transform_hlds__term_errors__Error_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Errors_8, (MR_Integer) 0)));
        transform_hlds__term_errors__Errors_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Errors_8, (MR_Integer) 1)));
        transform_hlds__term_errors__describe_term_error_8_p_0(transform_hlds__term_errors__ModuleInfo_6, transform_hlds__term_errors__Single_13, transform_hlds__term_errors__Error_92, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_4[0]), transform_hlds__term_errors__Var_47, &transform_hlds__term_errors__STATE_VARIABLE_Msgs_30_102, transform_hlds__term_errors__STATE_VARIABLE_Specs_0_24, &transform_hlds__term_errors__STATE_VARIABLE_Specs_31_103);
        transform_hlds__term_errors__describe_term_errors_8_p_0(transform_hlds__term_errors__ModuleInfo_6, transform_hlds__term_errors__Single_13, transform_hlds__term_errors__Errors_93, ((MR_Integer) 1 + (MR_Integer) 1), transform_hlds__term_errors__STATE_VARIABLE_Msgs_30_102, &transform_hlds__term_errors__ReasonMsgsCord_16, transform_hlds__term_errors__STATE_VARIABLE_Specs_31_103, &transform_hlds__term_errors__STATE_VARIABLE_Specs_55_55);
      }
    }
    transform_hlds__term_errors__ReasonMsgs_21 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, transform_hlds__term_errors__ReasonMsgsCord_16);
    {
      transform_hlds__term_errors__Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_61, 0) = ((MR_Box) (transform_hlds__term_errors__Pieces_15));
    }
    {
      transform_hlds__term_errors__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Var_60, 0) = ((MR_Box) (transform_hlds__term_errors__Var_61));
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__term_errors__Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_59, 0) = ((MR_Box) (transform_hlds__term_errors__Context_10));
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_59, 1) = ((MR_Box) (transform_hlds__term_errors__Var_60));
    }
    {
      transform_hlds__term_errors__Msgs_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Msgs_22, 0) = ((MR_Box) (transform_hlds__term_errors__Var_59));
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Msgs_22, 1) = ((MR_Box) (transform_hlds__term_errors__ReasonMsgs_21));
    }
    {
      transform_hlds__term_errors__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14))));
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Spec_23, 2) = ((MR_Box) (transform_hlds__term_errors__Msgs_22));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *transform_hlds__term_errors__STATE_VARIABLE_Specs_25 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_errors__Spec_23));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_errors__STATE_VARIABLE_Specs_55_55));
    }
  }
}

static void MR_CALL 
transform_hlds__term_errors__describe_term_error_8_p_0(
  MR_Word transform_hlds__term_errors__ModuleInfo_9,
  MR_Word transform_hlds__term_errors__Single_10,
  MR_Word transform_hlds__term_errors__TermErrorContext_11,
  MR_Word transform_hlds__term_errors__ErrorNum_12,
  MR_Word transform_hlds__term_errors__STATE_VARIABLE_ReasonMsgs_0_28,
  MR_Word * transform_hlds__term_errors__STATE_VARIABLE_ReasonMsgs_29,
  MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_0_30,
  MR_Word * transform_hlds__term_errors__STATE_VARIABLE_Specs_31)
{
  {
    MR_bool transform_hlds__term_errors__succeeded;
    MR_Word transform_hlds__term_errors__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__TermErrorContext_11, (MR_Integer) 0)));
    MR_Word transform_hlds__term_errors__ErrorKind_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__TermErrorContext_11, (MR_Integer) 1)));
    MR_Word transform_hlds__term_errors__Pieces0_17;
    MR_Word transform_hlds__term_errors__Reason_18;
    MR_Word transform_hlds__term_errors__Pieces_22;
    MR_Word transform_hlds__term_errors__ReasonMsg_23;
    MR_Word transform_hlds__term_errors__Var_36;
    MR_Word transform_hlds__term_errors__Var_39;
    MR_Word transform_hlds__term_errors__Var_40;

    transform_hlds__term_errors__term_error_kind_description_5_p_0(transform_hlds__term_errors__ModuleInfo_9, transform_hlds__term_errors__Single_10, transform_hlds__term_errors__ErrorKind_16, &transform_hlds__term_errors__Pieces0_17, &transform_hlds__term_errors__Reason_18);
    if ((transform_hlds__term_errors__ErrorNum_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      transform_hlds__term_errors__Pieces_22 = transform_hlds__term_errors__Pieces0_17;
    else
    {
      MR_Integer transform_hlds__term_errors__N_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__ErrorNum_12, (MR_Integer) 0)));
      MR_String transform_hlds__term_errors__Nstr_20;
      MR_String transform_hlds__term_errors__Preamble_21;
      MR_String transform_hlds__term_errors__Var_33;
      MR_Word transform_hlds__term_errors__Var_35;

      mercury__string__int_to_string_2_p_0(transform_hlds__term_errors__N_19, &transform_hlds__term_errors__Nstr_20);
      transform_hlds__term_errors__Var_33 = mercury__string__f_43_43_2_f_0(transform_hlds__term_errors__Nstr_20, (MR_String) ":");
      transform_hlds__term_errors__Preamble_21 = mercury__string__f_43_43_2_f_0((MR_String) "Reason ", transform_hlds__term_errors__Var_33);
      {
        transform_hlds__term_errors__Var_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), transform_hlds__term_errors__Var_35, 0) = ((MR_Box) (transform_hlds__term_errors__Preamble_21));
      }
      {
        transform_hlds__term_errors__Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Pieces_22, 0) = ((MR_Box) (transform_hlds__term_errors__Var_35));
        MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Pieces_22, 1) = ((MR_Box) (transform_hlds__term_errors__Pieces0_17));
      }
    }
    {
      transform_hlds__term_errors__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Var_36, 0) = ((MR_Box) (transform_hlds__term_errors__Context_15));
    }
    {
      transform_hlds__term_errors__Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_40, 0) = ((MR_Box) (transform_hlds__term_errors__Pieces_22));
    }
    {
      transform_hlds__term_errors__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Var_39, 0) = ((MR_Box) (transform_hlds__term_errors__Var_40));
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__term_errors__ReasonMsg_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__ReasonMsg_23, 0) = ((MR_Box) (transform_hlds__term_errors__Var_36));
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__ReasonMsg_23, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__ReasonMsg_23, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__ReasonMsg_23, 3) = ((MR_Box) (transform_hlds__term_errors__Var_39));
    }
    *transform_hlds__term_errors__STATE_VARIABLE_ReasonMsgs_29 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, transform_hlds__term_errors__STATE_VARIABLE_ReasonMsgs_0_28, ((MR_Box) (transform_hlds__term_errors__ReasonMsg_23)));
    if ((transform_hlds__term_errors__Reason_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *transform_hlds__term_errors__STATE_VARIABLE_Specs_31 = transform_hlds__term_errors__STATE_VARIABLE_Specs_0_30;
    else
    {
      MR_Word transform_hlds__term_errors__InfArgSizePPId_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Reason_18, (MR_Integer) 0)));
      MR_Word transform_hlds__term_errors__ArgSize_25;
      MR_Word transform_hlds__term_errors__ArgSizeErrors_26;
      MR_Word transform_hlds__term_errors__Var_43;

      transform_hlds__term_util__lookup_proc_arg_size_info_3_p_0(transform_hlds__term_errors__ModuleInfo_9, transform_hlds__term_errors__InfArgSizePPId_24, &transform_hlds__term_errors__ArgSize_25);
      transform_hlds__term_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_errors__ArgSize_25)) == (MR_mktag((MR_Integer) 1)));
      if (transform_hlds__term_errors__succeeded)
      {
        transform_hlds__term_errors__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__ArgSize_25, (MR_Integer) 0)));
        transform_hlds__term_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_errors__Var_43)) == (MR_mktag((MR_Integer) 1)));
        if (transform_hlds__term_errors__succeeded)
          transform_hlds__term_errors__ArgSizeErrors_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Var_43, (MR_Integer) 0)));
      }
      if (transform_hlds__term_errors__succeeded)
      {
        MR_Word transform_hlds__term_errors__ArgSizePPIdSCC_27;

        transform_hlds__term_errors__ArgSizePPIdSCC_27 = mercury__set__make_singleton_set_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__term_errors__InfArgSizePPId_24)));
        transform_hlds__term_errors__report_arg_size_errors_5_p_0(transform_hlds__term_errors__ModuleInfo_9, transform_hlds__term_errors__ArgSizePPIdSCC_27, transform_hlds__term_errors__ArgSizeErrors_26, transform_hlds__term_errors__STATE_VARIABLE_Specs_0_30, transform_hlds__term_errors__STATE_VARIABLE_Specs_31);
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_errors", (MR_String) "predicate \140transform_hlds.term_errors.describe_term_error\'/8", (MR_String) "inf arg size procedure does not have inf arg size");
          return;
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__term_errors__describe_term_errors_8_p_0(
  MR_Word transform_hlds__term_errors__ModuleInfo_1,
  MR_Word transform_hlds__term_errors__Single_2,
  MR_Word transform_hlds__term_errors__HeadVar__3_3,
  MR_Integer transform_hlds__term_errors__ErrNum0_4,
  MR_Word transform_hlds__term_errors__STATE_VARIABLE_Msgs_0_5,
  MR_Word * transform_hlds__term_errors__STATE_VARIABLE_Msgs_6,
  MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_0_7,
  MR_Word * transform_hlds__term_errors__STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((transform_hlds__term_errors__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *transform_hlds__term_errors__STATE_VARIABLE_Specs_8 = transform_hlds__term_errors__STATE_VARIABLE_Specs_0_7;
      *transform_hlds__term_errors__STATE_VARIABLE_Msgs_6 = transform_hlds__term_errors__STATE_VARIABLE_Msgs_0_5;
    }
    else
    {
      MR_Word transform_hlds__term_errors__Error_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word transform_hlds__term_errors__Errors_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word transform_hlds__term_errors__Var_29;
      MR_Word transform_hlds__term_errors__STATE_VARIABLE_Msgs_30_30;
      MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_31_31;
      MR_Integer transform_hlds__term_errors__Var_32;

      {
        transform_hlds__term_errors__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Var_29, 0) = ((MR_Box) (transform_hlds__term_errors__ErrNum0_4));
      }
      transform_hlds__term_errors__describe_term_error_8_p_0(transform_hlds__term_errors__ModuleInfo_1, transform_hlds__term_errors__Single_2, transform_hlds__term_errors__Error_20, transform_hlds__term_errors__Var_29, transform_hlds__term_errors__STATE_VARIABLE_Msgs_0_5, &transform_hlds__term_errors__STATE_VARIABLE_Msgs_30_30, transform_hlds__term_errors__STATE_VARIABLE_Specs_0_7, &transform_hlds__term_errors__STATE_VARIABLE_Specs_31_31);
      transform_hlds__term_errors__Var_32 = (transform_hlds__term_errors__ErrNum0_4 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      {
        MR_Word transform_hlds__term_errors__next_value_of_HeadVar__3_3 = transform_hlds__term_errors__Errors_21;
        MR_Integer transform_hlds__term_errors__next_value_of_ErrNum0_4 = transform_hlds__term_errors__Var_32;
        MR_Word transform_hlds__term_errors__next_value_of_STATE_VARIABLE_Msgs_0_5 = transform_hlds__term_errors__STATE_VARIABLE_Msgs_30_30;
        MR_Word transform_hlds__term_errors__next_value_of_STATE_VARIABLE_Specs_0_7 = transform_hlds__term_errors__STATE_VARIABLE_Specs_31_31;

        transform_hlds__term_errors__STATE_VARIABLE_Specs_0_7 = transform_hlds__term_errors__next_value_of_STATE_VARIABLE_Specs_0_7;
        transform_hlds__term_errors__STATE_VARIABLE_Msgs_0_5 = transform_hlds__term_errors__next_value_of_STATE_VARIABLE_Msgs_0_5;
        transform_hlds__term_errors__ErrNum0_4 = transform_hlds__term_errors__next_value_of_ErrNum0_4;
        transform_hlds__term_errors__HeadVar__3_3 = transform_hlds__term_errors__next_value_of_HeadVar__3_3;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__term_errors__report_arg_size_errors_5_p_0(
  MR_Word transform_hlds__term_errors__ModuleInfo_6,
  MR_Word transform_hlds__term_errors__SCC_7,
  MR_Word transform_hlds__term_errors__Errors_8,
  MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_0_25,
  MR_Word * transform_hlds__term_errors__STATE_VARIABLE_Specs_26)
{
  {
    MR_bool transform_hlds__term_errors__succeeded;
    MR_Word transform_hlds__term_errors__Context_10;
    MR_Word transform_hlds__term_errors__Pieces1_12;
    MR_Word transform_hlds__term_errors__Single_13;
    MR_Word transform_hlds__term_errors__Pieces_17;
    MR_Word transform_hlds__term_errors__ReasonMsgsCord_18;
    MR_Word transform_hlds__term_errors__ReasonMsgs_22;
    MR_Word transform_hlds__term_errors__Msgs_23;
    MR_Word transform_hlds__term_errors__Spec_24;
    MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_59_59;
    MR_Word transform_hlds__term_errors__Var_63;
    MR_Word transform_hlds__term_errors__Var_64;
    MR_Word transform_hlds__term_errors__Var_65;
    MR_Word transform_hlds__term_errors__PPId_11;
    MR_Box transform_hlds__term_errors__conv0_PPId_11;

    transform_hlds__term_util__get_context_from_scc_3_p_0(transform_hlds__term_errors__ModuleInfo_6, transform_hlds__term_errors__SCC_7, &transform_hlds__term_errors__Context_10);
    transform_hlds__term_errors__succeeded = mercury__set__is_singleton_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_errors__SCC_7, &transform_hlds__term_errors__conv0_PPId_11);
    if (transform_hlds__term_errors__succeeded)
    {
      transform_hlds__term_errors__PPId_11 = ((MR_Word) transform_hlds__term_errors__conv0_PPId_11);
      transform_hlds__term_errors__succeeded = MR_TRUE;
    }
    if (transform_hlds__term_errors__succeeded)
    {
      MR_Word transform_hlds__term_errors__Var_31;

      transform_hlds__term_errors__Var_31 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__PPId_11);
      transform_hlds__term_errors__Pieces1_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[99]), transform_hlds__term_errors__Var_31);
      {
        transform_hlds__term_errors__Single_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Single_13, 0) = ((MR_Box) (transform_hlds__term_errors__PPId_11));
      }
    }
    else
    {
      MR_Word transform_hlds__term_errors__Var_40;
      MR_Word transform_hlds__term_errors__Var_42;

      transform_hlds__term_errors__Var_42 = mercury__set__to_sorted_list_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_errors__SCC_7);
      transform_hlds__term_errors__Var_40 = hlds__hlds_error_util__describe_several_proc_names_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__Var_42);
      transform_hlds__term_errors__Pieces1_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[11]), transform_hlds__term_errors__Var_40);
      transform_hlds__term_errors__Single_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    if ((transform_hlds__term_errors__Errors_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_errors", (MR_String) "predicate \140transform_hlds.term_errors.report_arg_size_errors\'/5", (MR_String) "empty list of errors");
        return;
      }
    }
    else
    {
      MR_Word transform_hlds__term_errors__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Errors_8, (MR_Integer) 1)));
      MR_Word transform_hlds__term_errors__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Errors_8, (MR_Integer) 0)));

      if ((transform_hlds__term_errors__Var_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word transform_hlds__term_errors__Var_58;

        transform_hlds__term_errors__Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_errors__Pieces1_12, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[103]));
        transform_hlds__term_errors__Var_58 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0);
        transform_hlds__term_errors__describe_term_error_8_p_0(transform_hlds__term_errors__ModuleInfo_6, transform_hlds__term_errors__Single_13, transform_hlds__term_errors__Var_81, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_errors__Var_58, &transform_hlds__term_errors__ReasonMsgsCord_18, transform_hlds__term_errors__STATE_VARIABLE_Specs_0_25, &transform_hlds__term_errors__STATE_VARIABLE_Specs_59_59);
      }
      else
      {
        MR_Word transform_hlds__term_errors__Var_50;
        MR_Word transform_hlds__term_errors__Error_93;
        MR_Word transform_hlds__term_errors__Errors_94;
        MR_Word transform_hlds__term_errors__STATE_VARIABLE_Msgs_30_103;
        MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_31_104;

        transform_hlds__term_errors__Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_errors__Pieces1_12, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[106]));
        transform_hlds__term_errors__Var_50 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0);
        transform_hlds__term_errors__Error_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Errors_8, (MR_Integer) 0)));
        transform_hlds__term_errors__Errors_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Errors_8, (MR_Integer) 1)));
        transform_hlds__term_errors__describe_term_error_8_p_0(transform_hlds__term_errors__ModuleInfo_6, transform_hlds__term_errors__Single_13, transform_hlds__term_errors__Error_93, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_4[0]), transform_hlds__term_errors__Var_50, &transform_hlds__term_errors__STATE_VARIABLE_Msgs_30_103, transform_hlds__term_errors__STATE_VARIABLE_Specs_0_25, &transform_hlds__term_errors__STATE_VARIABLE_Specs_31_104);
        transform_hlds__term_errors__describe_term_errors_8_p_0(transform_hlds__term_errors__ModuleInfo_6, transform_hlds__term_errors__Single_13, transform_hlds__term_errors__Errors_94, ((MR_Integer) 1 + (MR_Integer) 1), transform_hlds__term_errors__STATE_VARIABLE_Msgs_30_103, &transform_hlds__term_errors__ReasonMsgsCord_18, transform_hlds__term_errors__STATE_VARIABLE_Specs_31_104, &transform_hlds__term_errors__STATE_VARIABLE_Specs_59_59);
      }
    }
    transform_hlds__term_errors__ReasonMsgs_22 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, transform_hlds__term_errors__ReasonMsgsCord_18);
    {
      transform_hlds__term_errors__Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_65, 0) = ((MR_Box) (transform_hlds__term_errors__Pieces_17));
    }
    {
      transform_hlds__term_errors__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Var_64, 0) = ((MR_Box) (transform_hlds__term_errors__Var_65));
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__term_errors__Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_63, 0) = ((MR_Box) (transform_hlds__term_errors__Context_10));
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_63, 1) = ((MR_Box) (transform_hlds__term_errors__Var_64));
    }
    {
      transform_hlds__term_errors__Msgs_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Msgs_23, 0) = ((MR_Box) (transform_hlds__term_errors__Var_63));
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Msgs_23, 1) = ((MR_Box) (transform_hlds__term_errors__ReasonMsgs_22));
    }
    {
      transform_hlds__term_errors__Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14))));
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Spec_24, 2) = ((MR_Box) (transform_hlds__term_errors__Msgs_23));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *transform_hlds__term_errors__STATE_VARIABLE_Specs_26 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_errors__Spec_24));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_errors__STATE_VARIABLE_Specs_59_59));
    }
  }
}

static void MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_8(
  MR_Box transform_hlds__term_errors__closure_arg,
  MR_Box transform_hlds__term_errors__wrapper_arg_1,
  MR_Box * transform_hlds__term_errors__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__term_errors__closure = transform_hlds__term_errors__closure_arg;
    MR_Word transform_hlds__term_errors__conv1_LambdaHeadVar__2_161;

    transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__455__1_2_p_0(((MR_String) transform_hlds__term_errors__wrapper_arg_1), &transform_hlds__term_errors__conv1_LambdaHeadVar__2_161);
    *transform_hlds__term_errors__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_errors__conv1_LambdaHeadVar__2_161));
  }
}

static void MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_7(
  MR_Box transform_hlds__term_errors__closure_arg,
  MR_Box transform_hlds__term_errors__wrapper_arg_1,
  MR_Box * transform_hlds__term_errors__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__term_errors__closure = transform_hlds__term_errors__closure_arg;
    MR_Word transform_hlds__term_errors__conv0_LambdaHeadVar__2_155;

    transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__451__1_2_p_0(((MR_String) transform_hlds__term_errors__wrapper_arg_1), &transform_hlds__term_errors__conv0_LambdaHeadVar__2_155);
    *transform_hlds__term_errors__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_errors__conv0_LambdaHeadVar__2_155));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_6(
  MR_Box transform_hlds__term_errors__closure_arg)
{
  {
    MR_bool transform_hlds__term_errors__succeeded;
    MR_Box transform_hlds__term_errors__closure = transform_hlds__term_errors__closure_arg;

    transform_hlds__term_errors__succeeded = transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__393__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 4))));
    return transform_hlds__term_errors__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_5(
  MR_Box transform_hlds__term_errors__closure_arg)
{
  {
    MR_bool transform_hlds__term_errors__succeeded;
    MR_Box transform_hlds__term_errors__closure = transform_hlds__term_errors__closure_arg;

    transform_hlds__term_errors__succeeded = transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__332__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 4))));
    return transform_hlds__term_errors__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_4(
  MR_Box transform_hlds__term_errors__closure_arg)
{
  {
    MR_bool transform_hlds__term_errors__succeeded;
    MR_Box transform_hlds__term_errors__closure = transform_hlds__term_errors__closure_arg;

    transform_hlds__term_errors__succeeded = transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__375__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 4))));
    return transform_hlds__term_errors__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_3(
  MR_Box transform_hlds__term_errors__closure_arg)
{
  {
    MR_bool transform_hlds__term_errors__succeeded;
    MR_Box transform_hlds__term_errors__closure = transform_hlds__term_errors__closure_arg;

    transform_hlds__term_errors__succeeded = transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__412__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 4))));
    return transform_hlds__term_errors__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_2(
  MR_Box transform_hlds__term_errors__closure_arg)
{
  {
    MR_bool transform_hlds__term_errors__succeeded;
    MR_Box transform_hlds__term_errors__closure = transform_hlds__term_errors__closure_arg;

    transform_hlds__term_errors__succeeded = transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__504__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 4))));
    return transform_hlds__term_errors__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_1(
  MR_Box transform_hlds__term_errors__closure_arg)
{
  {
    MR_bool transform_hlds__term_errors__succeeded;
    MR_Box transform_hlds__term_errors__closure = transform_hlds__term_errors__closure_arg;

    transform_hlds__term_errors__succeeded = transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__351__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 4))));
    return transform_hlds__term_errors__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0(
  MR_Word transform_hlds__term_errors__ModuleInfo_6,
  MR_Word transform_hlds__term_errors__Single_7,
  MR_Word transform_hlds__term_errors__ErrorKind_8,
  MR_Word * transform_hlds__term_errors__Pieces_9,
  MR_Word * transform_hlds__term_errors__Reason_10)
{
  {
    MR_bool transform_hlds__term_errors__succeeded;

    switch (MR_tag((MR_Word) transform_hlds__term_errors__ErrorKind_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(transform_hlds__term_errors__ErrorKind_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *transform_hlds__term_errors__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[70]);
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 1:
            {
              *transform_hlds__term_errors__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[48]);
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 2:
            {
              *transform_hlds__term_errors__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[42]);
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 3:
            {
              *transform_hlds__term_errors__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[58]);
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 4:
            {
              *transform_hlds__term_errors__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[62]);
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 5:
            {
              *transform_hlds__term_errors__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[78]);
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 6:
            {
              *transform_hlds__term_errors__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[74]);
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 7:
            {
              *transform_hlds__term_errors__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[50]);
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__term_errors__TypeCtorInfo_354_354;
          MR_Word transform_hlds__term_errors__Var_250;
          MR_Word transform_hlds__term_errors__Var_253;
          MR_Word transform_hlds__term_errors__CallerPPId_306 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 0)));
          MR_Word transform_hlds__term_errors__CalleePPId_307 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 1)));
          MR_Word transform_hlds__term_errors__Pieces1_309;
          MR_Word transform_hlds__term_errors__CalleePieces_311;

          if ((transform_hlds__term_errors__Single_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            transform_hlds__term_errors__Pieces1_309 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__CallerPPId_306);
          }
          else
          {
            MR_Word transform_hlds__term_errors__Var_240;
            MR_Word transform_hlds__term_errors__PPId_304 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Single_7, (MR_Integer) 0)));

            {
              transform_hlds__term_errors__Var_240 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_240, 0) = ((MR_Box) (&transform_hlds__term_errors_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_240, 1) = ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_1));
              MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_240, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_240, 3) = ((MR_Box) (transform_hlds__term_errors__PPId_304));
              MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_240, 4) = ((MR_Box) (transform_hlds__term_errors__CallerPPId_306));
            }
            mercury__require__expect_4_p_0(transform_hlds__term_errors__Var_240, (MR_String) "transform_hlds.term_errors", (MR_String) "predicate \140transform_hlds.term_errors.term_error_kind_description\'/5", (MR_String) "can_loop_proc_called: caller outside this SCC");
            transform_hlds__term_errors__Pieces1_309 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[81]);
          }
          transform_hlds__term_errors__CalleePieces_311 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__CalleePPId_307);
          transform_hlds__term_errors__TypeCtorInfo_354_354 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
          transform_hlds__term_errors__Var_253 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_354_354, transform_hlds__term_errors__CalleePieces_311, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[85]));
          transform_hlds__term_errors__Var_250 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_354_354, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[84]), transform_hlds__term_errors__Var_253);
          *transform_hlds__term_errors__Pieces_9 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_354_354, transform_hlds__term_errors__Pieces1_309, transform_hlds__term_errors__Var_250);
          *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__term_errors__TypeCtorInfo_356_356;
          MR_Word transform_hlds__term_errors__Var_220;
          MR_Word transform_hlds__term_errors__Var_223;
          MR_Word transform_hlds__term_errors__CallerPPId_314 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 0)));
          MR_Word transform_hlds__term_errors__CalleePPId_315 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 1)));
          MR_Word transform_hlds__term_errors__Pieces1_317;
          MR_Word transform_hlds__term_errors__CalleePieces_319;

          if ((transform_hlds__term_errors__Single_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            transform_hlds__term_errors__Pieces1_317 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__CallerPPId_314);
          }
          else
          {
            MR_Word transform_hlds__term_errors__Var_210;
            MR_Word transform_hlds__term_errors__PPId_312 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Single_7, (MR_Integer) 0)));

            {
              transform_hlds__term_errors__Var_210 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_210, 0) = ((MR_Box) (&transform_hlds__term_errors_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_210, 1) = ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_4));
              MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_210, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_210, 3) = ((MR_Box) (transform_hlds__term_errors__PPId_312));
              MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_210, 4) = ((MR_Box) (transform_hlds__term_errors__CallerPPId_314));
            }
            mercury__require__expect_4_p_0(transform_hlds__term_errors__Var_210, (MR_String) "transform_hlds.term_errors", (MR_String) "predicate \140transform_hlds.term_errors.term_error_kind_description\'/5", (MR_String) "horder_args: caller outside this SCC");
            transform_hlds__term_errors__Pieces1_317 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[81]);
          }
          transform_hlds__term_errors__CalleePieces_319 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__CalleePPId_315);
          transform_hlds__term_errors__TypeCtorInfo_356_356 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
          transform_hlds__term_errors__Var_223 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_356_356, transform_hlds__term_errors__CalleePieces_319, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[90]));
          transform_hlds__term_errors__Var_220 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_356_356, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[84]), transform_hlds__term_errors__Var_223);
          *transform_hlds__term_errors__Pieces_9 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_356_356, transform_hlds__term_errors__Pieces1_317, transform_hlds__term_errors__Var_220);
          *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word transform_hlds__term_errors__TypeCtorInfo_358_358;
              MR_Word transform_hlds__term_errors__Var_201;
              MR_Word transform_hlds__term_errors__Var_204;
              MR_Word transform_hlds__term_errors__CallerPPId_323 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 1)));
              MR_Word transform_hlds__term_errors__CalleePPId_324 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 2)));
              MR_Word transform_hlds__term_errors__Pieces1_326;
              MR_Word transform_hlds__term_errors__CalleePieces_328;

              if ((transform_hlds__term_errors__Single_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                transform_hlds__term_errors__Pieces1_326 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__CallerPPId_323);
              }
              else
              {
                MR_Word transform_hlds__term_errors__Var_191;
                MR_Word transform_hlds__term_errors__PPId_321 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Single_7, (MR_Integer) 0)));

                {
                  transform_hlds__term_errors__Var_191 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_191, 0) = ((MR_Box) (&transform_hlds__term_errors_scalar_common_3[0]));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_191, 1) = ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_6));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_191, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_191, 3) = ((MR_Box) (transform_hlds__term_errors__PPId_321));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_191, 4) = ((MR_Box) (transform_hlds__term_errors__CallerPPId_323));
                }
                mercury__require__expect_4_p_0(transform_hlds__term_errors__Var_191, (MR_String) "transform_hlds.term_errors", (MR_String) "predicate \140transform_hlds.term_errors.term_error_kind_description\'/5", (MR_String) "inf_termination_const: caller outside this SCC");
                transform_hlds__term_errors__Pieces1_326 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[81]);
              }
              transform_hlds__term_errors__CalleePieces_328 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__CalleePPId_324);
              transform_hlds__term_errors__TypeCtorInfo_358_358 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
              transform_hlds__term_errors__Var_204 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_358_358, transform_hlds__term_errors__CalleePieces_328, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[92]));
              transform_hlds__term_errors__Var_201 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_358_358, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[84]), transform_hlds__term_errors__Var_204);
              *transform_hlds__term_errors__Pieces_9 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_358_358, transform_hlds__term_errors__Pieces1_326, transform_hlds__term_errors__Var_201);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *transform_hlds__term_errors__Reason_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_errors__CalleePPId_324));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word transform_hlds__term_errors__CallerPPId_332 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 1)));
              MR_Word transform_hlds__term_errors__Pieces1_334;
              MR_Word transform_hlds__term_errors___ClosurePPIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 2)));

              if ((transform_hlds__term_errors__Single_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                transform_hlds__term_errors__Pieces1_334 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__CallerPPId_332);
              }
              else
              {
                MR_Word transform_hlds__term_errors__Var_172;
                MR_Word transform_hlds__term_errors__PPId_330 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Single_7, (MR_Integer) 0)));

                {
                  transform_hlds__term_errors__Var_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_172, 0) = ((MR_Box) (&transform_hlds__term_errors_scalar_common_3[0]));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_172, 1) = ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_3));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_172, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_172, 3) = ((MR_Box) (transform_hlds__term_errors__PPId_330));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_172, 4) = ((MR_Box) (transform_hlds__term_errors__CallerPPId_332));
                }
                mercury__require__expect_4_p_0(transform_hlds__term_errors__Var_172, (MR_String) "transform_hlds.term_errors", (MR_String) "predicate \140transform_hlds.term_errors.term_error_kind_description\'/5", (MR_String) "ho_info_termination_const: caller outside this SCC");
                transform_hlds__term_errors__Pieces1_334 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[81]);
              }
              *transform_hlds__term_errors__Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_errors__Pieces1_334, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[40]));
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__term_errors__TypeCtorInfo_361_361;
              MR_Word transform_hlds__term_errors__TypeCtorInfo_362_362;
              MR_Word transform_hlds__term_errors__ProcPPId_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 1)));
              MR_Word transform_hlds__term_errors__OutputSuppliers_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 2)));
              MR_Word transform_hlds__term_errors__HeadVars_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 3)));
              MR_Word transform_hlds__term_errors__PredId_25;
              MR_Integer transform_hlds__term_errors__ProcId_26;
              MR_Word transform_hlds__term_errors__ProcInfo_28;
              MR_Word transform_hlds__term_errors__Varset_29;
              MR_Word transform_hlds__term_errors__OutputSuppliersNames_30;
              MR_Word transform_hlds__term_errors__OutputSuppliersPieces_33;
              MR_Word transform_hlds__term_errors__HeadVarsNames_34;
              MR_Word transform_hlds__term_errors__HeadVarsPieces_37;
              MR_Word transform_hlds__term_errors__Var_162;
              MR_Word transform_hlds__term_errors__Var_163;
              MR_Word transform_hlds__term_errors__Var_164;
              MR_Word transform_hlds__term_errors__Pieces1_343;
              MR_Word transform_hlds__term_errors__Var_27;

              if ((transform_hlds__term_errors__Single_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word transform_hlds__term_errors__PPIdPieces_336;

                transform_hlds__term_errors__PPIdPieces_336 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__ProcPPId_21);
                {
                  transform_hlds__term_errors__Pieces1_343 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Pieces1_343, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[93])));
                  MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Pieces1_343, 1) = ((MR_Box) (transform_hlds__term_errors__PPIdPieces_336));
                }
              }
              else
              {
                MR_Word transform_hlds__term_errors__PPId_335 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Single_7, (MR_Integer) 0)));

                transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__PPId_335, transform_hlds__term_errors__ProcPPId_21);
                if (transform_hlds__term_errors__succeeded)
                {
                  transform_hlds__term_errors__Pieces1_343 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[95]);
                }
                else
                {
                  MR_Word transform_hlds__term_errors__PPIdPieces_24;

                  transform_hlds__term_errors__PPIdPieces_24 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__ProcPPId_21);
                  {
                    transform_hlds__term_errors__Pieces1_343 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Pieces1_343, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[93])));
                    MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Pieces1_343, 1) = ((MR_Box) (transform_hlds__term_errors__PPIdPieces_24));
                  }
                }
              }
              transform_hlds__term_errors__PredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__ProcPPId_21, (MR_Integer) 0)));
              transform_hlds__term_errors__ProcId_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__ProcPPId_21, (MR_Integer) 1)));
              hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__term_errors__ModuleInfo_6, transform_hlds__term_errors__PredId_25, transform_hlds__term_errors__ProcId_26, &transform_hlds__term_errors__Var_27, &transform_hlds__term_errors__ProcInfo_28);
              hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__term_errors__ProcInfo_28, &transform_hlds__term_errors__Varset_29);
              transform_hlds__term_errors__term_errors_var_bag_description_3_p_0(transform_hlds__term_errors__OutputSuppliers_22, transform_hlds__term_errors__Varset_29, &transform_hlds__term_errors__OutputSuppliersNames_30);
              transform_hlds__term_errors__TypeCtorInfo_361_361 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              transform_hlds__term_errors__TypeCtorInfo_362_362 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
              mercury__list__map_3_p_0(transform_hlds__term_errors__TypeCtorInfo_361_361, transform_hlds__term_errors__TypeCtorInfo_362_362, (MR_Word) &transform_hlds__term_errors_scalar_common_2[1], transform_hlds__term_errors__OutputSuppliersNames_30, &transform_hlds__term_errors__OutputSuppliersPieces_33);
              transform_hlds__term_errors__term_errors_var_bag_description_3_p_0(transform_hlds__term_errors__HeadVars_23, transform_hlds__term_errors__Varset_29, &transform_hlds__term_errors__HeadVarsNames_34);
              mercury__list__map_3_p_0(transform_hlds__term_errors__TypeCtorInfo_361_361, transform_hlds__term_errors__TypeCtorInfo_362_362, (MR_Word) &transform_hlds__term_errors_scalar_common_2[2], transform_hlds__term_errors__HeadVarsNames_34, &transform_hlds__term_errors__HeadVarsPieces_37);
              transform_hlds__term_errors__Var_164 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_362_362, transform_hlds__term_errors__HeadVarsPieces_37, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[32]));
              transform_hlds__term_errors__Var_163 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_362_362, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[97]), transform_hlds__term_errors__Var_164);
              transform_hlds__term_errors__Var_162 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_362_362, transform_hlds__term_errors__OutputSuppliersPieces_33, transform_hlds__term_errors__Var_163);
              *transform_hlds__term_errors__Pieces_9 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_362_362, transform_hlds__term_errors__Pieces1_343, transform_hlds__term_errors__Var_162);
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word transform_hlds__term_errors__TypeCtorInfo_352_352;
              MR_Word transform_hlds__term_errors__CallerPPId_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 1)));
              MR_Word transform_hlds__term_errors__CalleePPId_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 2)));
              MR_Word transform_hlds__term_errors__Pieces1_14;
              MR_Word transform_hlds__term_errors__CalleePieces_16;
              MR_Word transform_hlds__term_errors__Var_276;
              MR_Word transform_hlds__term_errors__Var_279;

              if ((transform_hlds__term_errors__Single_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                transform_hlds__term_errors__Pieces1_14 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__CallerPPId_11);
              }
              else
              {
                MR_Word transform_hlds__term_errors__PPId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Single_7, (MR_Integer) 0)));
                MR_Word transform_hlds__term_errors__Var_259;

                {
                  transform_hlds__term_errors__Var_259 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_259, 0) = ((MR_Box) (&transform_hlds__term_errors_scalar_common_3[0]));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_259, 1) = ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_5));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_259, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_259, 3) = ((MR_Box) (transform_hlds__term_errors__CallerPPId_11));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_259, 4) = ((MR_Box) (transform_hlds__term_errors__PPId_13));
                }
                mercury__require__expect_4_p_0(transform_hlds__term_errors__Var_259, (MR_String) "transform_hlds.term_errors", (MR_String) "predicate \140transform_hlds.term_errors.term_error_kind_description\'/5", (MR_String) "inf_call: caller outside this SCC");
                transform_hlds__term_errors__Pieces1_14 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[81]);
              }
              transform_hlds__term_errors__CalleePieces_16 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__CalleePPId_12);
              transform_hlds__term_errors__TypeCtorInfo_352_352 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
              transform_hlds__term_errors__Var_279 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_352_352, transform_hlds__term_errors__CalleePieces_16, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[54]));
              transform_hlds__term_errors__Var_276 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_352_352, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[84]), transform_hlds__term_errors__Var_279);
              *transform_hlds__term_errors__Pieces_9 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_352_352, transform_hlds__term_errors__Pieces1_14, transform_hlds__term_errors__Var_276);
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word transform_hlds__term_errors__CallSites_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 2)));
              MR_Word transform_hlds__term_errors___StartPPId_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 1)));
              MR_Word transform_hlds__term_errors__DirectCall_40;
              MR_Word transform_hlds__term_errors__Var_114;

              transform_hlds__term_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_errors__CallSites_39)) == (MR_mktag((MR_Integer) 1)));
              if (transform_hlds__term_errors__succeeded)
              {
                transform_hlds__term_errors__DirectCall_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__CallSites_39, (MR_Integer) 0)));
                transform_hlds__term_errors__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__CallSites_39, (MR_Integer) 1)));
                transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__Var_114 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              if (transform_hlds__term_errors__succeeded)
              {
                MR_Word transform_hlds__term_errors__SitePieces_41;
                MR_Word transform_hlds__term_errors__Var_116;

                transform_hlds__term_errors__SitePieces_41 = hlds__hlds_error_util__describe_one_call_site_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__DirectCall_40);
                {
                  transform_hlds__term_errors__Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Var_116, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[86])));
                  MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Var_116, 1) = ((MR_Box) (transform_hlds__term_errors__SitePieces_41));
                }
                *transform_hlds__term_errors__Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_errors__Var_116, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[16]));
              }
              else
              {
                MR_Word transform_hlds__term_errors__TypeCtorInfo_364_364 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                MR_Word transform_hlds__term_errors__Var_132;
                MR_Word transform_hlds__term_errors__Var_133;

                transform_hlds__term_errors__Var_133 = hlds__hlds_error_util__describe_several_call_sites_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__CallSites_39);
                transform_hlds__term_errors__Var_132 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_364_364, transform_hlds__term_errors__Var_133, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[20]));
                *transform_hlds__term_errors__Pieces_9 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_364_364, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[88]), transform_hlds__term_errors__Var_132);
              }
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 5:
            {
              *transform_hlds__term_errors__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[56]);
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word transform_hlds__term_errors__Pieces2_349;
              MR_Word transform_hlds__term_errors__PredId_350 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 1)));

              if ((transform_hlds__term_errors__Single_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word transform_hlds__term_errors__Var_68;

                transform_hlds__term_errors__Var_68 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__PredId_350);
                transform_hlds__term_errors__Pieces2_349 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_errors__Var_68, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[32]));
              }
              else
              {
                MR_Word transform_hlds__term_errors__SCCPredId_43;
                MR_Word transform_hlds__term_errors__Var_76;
                MR_Word transform_hlds__term_errors__PPId_345 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Single_7, (MR_Integer) 0)));
                MR_Integer transform_hlds__term_errors__Var_44;

                transform_hlds__term_errors__SCCPredId_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__PPId_345, (MR_Integer) 0)));
                transform_hlds__term_errors__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__PPId_345, (MR_Integer) 1)));
                {
                  transform_hlds__term_errors__Var_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_76, 0) = ((MR_Box) (&transform_hlds__term_errors_scalar_common_3[1]));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_76, 1) = ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_2));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_76, 3) = ((MR_Box) (transform_hlds__term_errors__SCCPredId_43));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_76, 4) = ((MR_Box) (transform_hlds__term_errors__PredId_350));
                }
                mercury__require__expect_4_p_0(transform_hlds__term_errors__Var_76, (MR_String) "transform_hlds.term_errors", (MR_String) "predicate \140transform_hlds.term_errors.term_error_kind_description\'/5", (MR_String) "does not terminate pragma outside this SCC");
                transform_hlds__term_errors__Pieces2_349 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[34]);
              }
              *transform_hlds__term_errors__Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[30]), transform_hlds__term_errors__Pieces2_349);
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 7:
            {
              *transform_hlds__term_errors__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[24]);
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__term_errors__term_errors_var_bag_description_3_p_0(
  MR_Word transform_hlds__term_errors__HeadVars_4,
  MR_Word transform_hlds__term_errors__Varset_5,
  MR_Word * transform_hlds__term_errors__Pieces_6)
{
  {
    MR_Word transform_hlds__term_errors__HeadVarCountList_7;

    mercury__bag__to_assoc_list_2_p_0((MR_Word) &transform_hlds__term_errors_scalar_common_1[0], transform_hlds__term_errors__HeadVars_4, &transform_hlds__term_errors__HeadVarCountList_7);
    transform_hlds__term_errors__term_errors_var_bag_description_2_4_p_0(transform_hlds__term_errors__HeadVarCountList_7, transform_hlds__term_errors__Varset_5, (MR_Integer) 1, transform_hlds__term_errors__Pieces_6);
  }
}

static void MR_CALL 
transform_hlds__term_errors__term_errors_var_bag_description_2_4_p_0(
  MR_Word transform_hlds__term_errors__HeadVar__1_1,
  MR_Word transform_hlds__term_errors__Varset_2,
  MR_Word transform_hlds__term_errors__First_3,
  MR_Word * transform_hlds__term_errors__HeadVar__4_4)
{
  {
    MR_bool transform_hlds__term_errors__succeeded;

    if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *transform_hlds__term_errors__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[79]);
    }
    else
    {
      MR_Word transform_hlds__term_errors__Var_9;
      MR_Integer transform_hlds__term_errors__Count_10;
      MR_Word transform_hlds__term_errors__VarCounts_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
      MR_String transform_hlds__term_errors__Piece_14;
      MR_Word transform_hlds__term_errors__Pieces_15;
      MR_String transform_hlds__term_errors__VarName_16;
      MR_String transform_hlds__term_errors__VarCountPiece_19;
      MR_String transform_hlds__term_errors__Piece0_20;
      MR_Word transform_hlds__term_errors__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)));

      transform_hlds__term_errors__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_23, (MR_Integer) 0)));
      transform_hlds__term_errors__Count_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Var_23, (MR_Integer) 1)));
      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__term_errors__Varset_2, transform_hlds__term_errors__Var_9, &transform_hlds__term_errors__VarName_16);
      transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__Count_10 > (MR_Integer) 1);
      if (transform_hlds__term_errors__succeeded)
      {
        MR_String transform_hlds__term_errors__VarCountPiece0_17;
        MR_String transform_hlds__term_errors__CountStr_18;

        mercury__string__append_3_p_2(transform_hlds__term_errors__VarName_16, (MR_String) "*", &transform_hlds__term_errors__VarCountPiece0_17);
        mercury__string__int_to_string_2_p_0(transform_hlds__term_errors__Count_10, &transform_hlds__term_errors__CountStr_18);
        mercury__string__append_3_p_2(transform_hlds__term_errors__VarCountPiece0_17, transform_hlds__term_errors__CountStr_18, &transform_hlds__term_errors__VarCountPiece_19);
      }
      else
        transform_hlds__term_errors__VarCountPiece_19 = transform_hlds__term_errors__VarName_16;
      switch (transform_hlds__term_errors__First_3) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          transform_hlds__term_errors__Piece0_20 = transform_hlds__term_errors__VarCountPiece_19;
          break;
        case (MR_Integer) 1:
          {
            mercury__string__append_3_p_2((MR_String) "{", transform_hlds__term_errors__VarCountPiece_19, &transform_hlds__term_errors__Piece0_20);
          }
          break;
      }
      if ((transform_hlds__term_errors__VarCounts_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__string__append_3_p_2(transform_hlds__term_errors__Piece0_20, (MR_String) "}.", &transform_hlds__term_errors__Piece_14);
        transform_hlds__term_errors__Pieces_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      else
      {
        transform_hlds__term_errors__Piece_14 = transform_hlds__term_errors__Piece0_20;
        transform_hlds__term_errors__term_errors_var_bag_description_2_4_p_0(transform_hlds__term_errors__VarCounts_11, transform_hlds__term_errors__Varset_2, transform_hlds__term_errors__First_3, &transform_hlds__term_errors__Pieces_15);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *transform_hlds__term_errors__HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_errors__Piece_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_errors__Pieces_15));
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_errors____Unify____term_error_0_0_10001(
  MR_Box transform_hlds__term_errors__wrapper_arg_1,
  MR_Box transform_hlds__term_errors__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_errors__succeeded;

    transform_hlds__term_errors__succeeded = transform_hlds__term_errors____Unify____term_error_0_0(((MR_Word) transform_hlds__term_errors__wrapper_arg_1), ((MR_Word) transform_hlds__term_errors__wrapper_arg_2));
    return transform_hlds__term_errors__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_errors____Compare____term_error_0_0_10001(
  MR_Box * transform_hlds__term_errors__wrapper_arg_1,
  MR_Box transform_hlds__term_errors__wrapper_arg_2,
  MR_Box transform_hlds__term_errors__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_errors__conv0_HeadVar__1_1;

    transform_hlds__term_errors____Compare____term_error_0_0(&transform_hlds__term_errors__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_errors__wrapper_arg_2), ((MR_Word) transform_hlds__term_errors__wrapper_arg_3));
    *transform_hlds__term_errors__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_errors__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_errors____Unify____term_error_kind_0_0_10001(
  MR_Box transform_hlds__term_errors__wrapper_arg_1,
  MR_Box transform_hlds__term_errors__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_errors__succeeded;

    transform_hlds__term_errors__succeeded = transform_hlds__term_errors____Unify____term_error_kind_0_0(((MR_Word) transform_hlds__term_errors__wrapper_arg_1), ((MR_Word) transform_hlds__term_errors__wrapper_arg_2));
    return transform_hlds__term_errors__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_errors____Compare____term_error_kind_0_0_10001(
  MR_Box * transform_hlds__term_errors__wrapper_arg_1,
  MR_Box transform_hlds__term_errors__wrapper_arg_2,
  MR_Box transform_hlds__term_errors__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_errors__conv0_HeadVar__1_1;

    transform_hlds__term_errors____Compare____term_error_kind_0_0(&transform_hlds__term_errors__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_errors__wrapper_arg_2), ((MR_Word) transform_hlds__term_errors__wrapper_arg_3));
    *transform_hlds__term_errors__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_errors__conv0_HeadVar__1_1));
  }
}

void mercury__transform_hlds__term_errors__init(void)
{
}

void mercury__transform_hlds__term_errors__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0);
	MR_register_type_ctor_info(&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_kind_0);
}

void mercury__transform_hlds__term_errors__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__term_errors__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module transform_hlds.term_errors. */
