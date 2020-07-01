/*
** Automatically generated from `term_errors.m'
** by the Mercury compiler,
** version rotd-2020-07-01
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


// :- module transform_hlds.term_errors.
// :- implementation.

/*
INIT mercury__transform_hlds__term_errors__init
ENDINIT
*/

#include "transform_hlds.term_errors.mih"


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
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
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
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"




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
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__457__1_2_p_0(
  MR_String LambdaHeadVar__1_159,
  MR_Word * LambdaHeadVar__2_160);

static void MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__453__1_2_p_0(
  MR_String LambdaHeadVar__1_153,
  MR_Word * LambdaHeadVar__2_154);

static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__395__1_2_p_0(
  MR_Word PPId_315,
  MR_Word CallerPPId_317);

static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__334__1_2_p_0(
  MR_Word CallerPPId_11,
  MR_Word PPId_13);

static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__377__1_2_p_0(
  MR_Word PPId_306,
  MR_Word CallerPPId_308);

static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__414__1_2_p_0(
  MR_Word PPId_324,
  MR_Word CallerPPId_326);

static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__506__1_2_p_0(
  MR_Word SCCPredId_43,
  MR_Word PredId_344);

static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__353__1_2_p_0(
  MR_Word PPId_298,
  MR_Word CallerPPId_300);

static void MR_CALL 
transform_hlds__term_errors__describe_term_errors_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Single_2,
  MR_Word HeadVar__3_3,
  MR_Integer ErrNum0_4,
  MR_Word STATE_VARIABLE_Msgs_0_5,
  MR_Word * STATE_VARIABLE_Msgs_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
transform_hlds__term_errors__describe_term_error_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word Single_10,
  MR_Word TermErrorContext_11,
  MR_Word ErrorNum_12,
  MR_Word STATE_VARIABLE_ReasonMsgs_0_28,
  MR_Word * STATE_VARIABLE_ReasonMsgs_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31);

static void MR_CALL 
transform_hlds__term_errors__report_arg_size_errors_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word SCC_7,
  MR_Word Errors_8,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_6(
  MR_Box closure_arg);

static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_5(
  MR_Box closure_arg);

static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Single_7,
  MR_Word ErrorKind_8,
  MR_Word * Pieces_9,
  MR_Word * Reason_10);

static void MR_CALL 
transform_hlds__term_errors__term_errors_var_bag_description_3_p_0(
  MR_Word HeadVars_4,
  MR_Word Varset_5,
  MR_Word * Pieces_6);

static void MR_CALL 
transform_hlds__term_errors__term_errors_var_bag_description_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Varset_2,
  MR_Word First_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
transform_hlds__term_errors____Unify____term_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_errors____Compare____term_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_errors____Unify____term_error_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_errors____Compare____term_error_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "mutually recursive procedures"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Termination of the "))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of the mutually recursive procedures"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Termination constants"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to decrease in size."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the arguments are not guaranteed"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "not guaranteed to decrease in size."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the arguments are"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "may make one or more calls back to Mercury."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "It contains foreign code that"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[25]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "does_not_terminate"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "There is a"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "it."))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "termination constant of infinity."))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Each of these higher-order calls has a"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[36])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "makes one or more higher-order calls."))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[38])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "It contains a higher order call."))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "imported from another module."))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "predicates and/or functions"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[44])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "It contains one or more"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[46])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The termination pragmas are inconsistent."))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the size of the input arguments."))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with an unbounded increase"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[52])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "It is a builtin predicate."))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "It contains a typeclass method call."))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "between the arguments of this group of procedures."))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The analysis was unable to form any constraints"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[60])))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "foreign_proc"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[64])))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "foreign language code included via a"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[66])))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "It depends on the properties of"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[68])))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "by the analysis to be infeasible."))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The solver found the constraints produced"))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[72])))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for the analysis to process."))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
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
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 80 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "It"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[80]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 82 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "calls"))
  },
  /* row 83 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which could not be proven to terminate."))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[82]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 86 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "At the recursive call to"))
  },
  /* row 87 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the recursive cycle through the calls to"))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[87]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 89 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with one or more higher order arguments."))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 91 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which has a termination constant of infinity."))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 93 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The set of output supplier variables of"))
  },
  /* row 94 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The set of its output supplier variables"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[94]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 96 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not a subset of the head variables"))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[96]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 98 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Termination constant of"))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[98]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "set to infinity for the following"))
  },
  /* row 101 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "reason:"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[101]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[102])))
  },
  /* row 104 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "reasons:"))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[104]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[105])))
  },
  /* row 107 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Termination of"))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[107]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 109 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "not proven, for unknown reason(s)."))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[109]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 111 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "not proven for the following reason:"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[111]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 113 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "not proven for the following reasons:"))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[113]))),
    ((MR_Box) ((MR_Unsigned) 0U))
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
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__term_errors_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_errors_scalar_common_3[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
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



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_kind_0)
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_0_0 = {
  (MR_String) "term_error",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_0_0[1] = {
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_0_0
};

static const MR_DuPtagLayout transform_hlds__term_errors__transform_hlds__term_errors__du_ptag_ordered_term_error_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_errors____Unify____term_error_0_0_10001)),
  ((MR_Box) (transform_hlds__term_errors____Compare____term_error_0_0_10001)),
  (MR_String) "transform_hlds.term_errors",
  (MR_String) "term_error",
  {     transform_hlds__term_errors__transform_hlds__term_errors__du_name_ordered_term_error_0 },
  {     transform_hlds__term_errors__transform_hlds__term_errors__du_ptag_ordered_term_error_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__term_errors__transform_hlds__term_errors__functor_number_map_term_error_0
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_0 = {
  (MR_String) "pragma_foreign_code",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_1 = {
  (MR_String) "imported_pred",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_2[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_2 = {
  (MR_String) "can_loop_proc_called",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_3[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_3 = {
  (MR_String) "horder_args",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(3),
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_4 = {
  (MR_String) "horder_call",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_5 = {
  (MR_String) "method_call",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(5),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_6[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_6 = {
  (MR_String) "inf_termination_const",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(6),
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_7[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_errors__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_7 = {
  (MR_String) "ho_inf_termination_const",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(7),
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  {
    (MR_TypeInfo) (&transform_hlds__term_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_8[3] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_errors__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_errors__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_8 = {
  (MR_String) "not_subset",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(8),
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_9[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_9 = {
  (MR_String) "inf_call",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(9),
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_9,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_errors__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__term_errors__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_10[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_errors__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0)
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_10 = {
  (MR_String) "cycle",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(10),
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_10,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_11 = {
  (MR_String) "no_eqns",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 4,
  INT32_C(11),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_12 = {
  (MR_String) "too_many_paths",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 5,
  INT32_C(12),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_13 = {
  (MR_String) "solver_failed",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 6,
  INT32_C(13),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_14[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_14 = {
  (MR_String) "is_builtin",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(14),
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_14,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_15[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_15 = {
  (MR_String) "does_not_term_pragma",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(15),
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_15,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_16 = {
  (MR_String) "inconsistent_annotations",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 7,
  INT32_C(16),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_17[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_17 = {
  (MR_String) "does_not_term_foreign",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 7,
  INT32_C(17),
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_17,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    UINT32_C(8),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(8),
    MR_SECTAG_REMOTE_FULL_WORD,
    transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_3,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_errors____Unify____term_error_kind_0_0_10001)),
  ((MR_Box) (transform_hlds__term_errors____Compare____term_error_kind_0_0_10001)),
  (MR_String) "transform_hlds.term_errors",
  (MR_String) "term_error_kind",
  {     transform_hlds__term_errors__transform_hlds__term_errors__du_name_ordered_term_error_kind_0 },
  {     transform_hlds__term_errors__transform_hlds__term_errors__du_ptag_ordered_term_error_kind_0 },
  (MR_Integer) 18,
  UINT16_C(4),
  transform_hlds__term_errors__transform_hlds__term_errors__functor_number_map_term_error_kind_0
};

static void MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__457__1_2_p_0(
  MR_String LambdaHeadVar__1_159,
  MR_Word * LambdaHeadVar__2_160)
{
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    *LambdaHeadVar__2_160 = base;
    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (LambdaHeadVar__1_159));
  }
}

static void MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__453__1_2_p_0(
  MR_String LambdaHeadVar__1_153,
  MR_Word * LambdaHeadVar__2_154)
{
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    *LambdaHeadVar__2_154 = base;
    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (LambdaHeadVar__1_153));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__395__1_2_p_0(
  MR_Word PPId_315,
  MR_Word CallerPPId_317)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(PPId_315, CallerPPId_317);
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__334__1_2_p_0(
  MR_Word CallerPPId_11,
  MR_Word PPId_13)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(PPId_13, CallerPPId_11);
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__377__1_2_p_0(
  MR_Word PPId_306,
  MR_Word CallerPPId_308)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(PPId_306, CallerPPId_308);
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__414__1_2_p_0(
  MR_Word PPId_324,
  MR_Word CallerPPId_326)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(PPId_324, CallerPPId_326);
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__506__1_2_p_0(
  MR_Word SCCPredId_43,
  MR_Word PredId_344)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_344, SCCPredId_43);
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__353__1_2_p_0(
  MR_Word PPId_298,
  MR_Word CallerPPId_300)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(PPId_298, CallerPPId_300);
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__term_errors____Compare____term_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__term____Compare____context_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        transform_hlds__term_errors____Compare____term_error_kind_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

void MR_CALL 
transform_hlds__term_errors____Compare____term_error_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_51 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_52 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_51 == CastY_52);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer Var_4;
      MR_Integer Var_5;

      transform_hlds__term_errors____Index____term_error_kind_0_0(HeadVar__2_2, &Var_4);
      transform_hlds__term_errors____Index____term_error_kind_0_0(HeadVar__3_3, &Var_5);
      succeeded = (Var_4 < Var_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_4 > Var_5);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
        {
          MR_Word Var_6;

          switch (MR_tag((MR_Word) HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__2_2)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
                MR_Word ArgY1_8;
                MR_Word ArgX2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
                MR_Word ArgY2_11;
                MR_Word SubResult1_9;

                succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
                if (succeeded)
                {
                  ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  ArgY2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_9, ArgX1_7, ArgY1_8);
                  succeeded = (SubResult1_9 != (MR_Integer) 0);
                  if (succeeded)
                    Var_6 = SubResult1_9;
                  else
                    hlds__hlds_pred____Compare____pred_proc_id_0_0(&Var_6, ArgX2_10, ArgY2_11);
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgX1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
                MR_Word ArgY1_13;
                MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
                MR_Word ArgY2_16;
                MR_Word SubResult1_14;

                succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2);
                if (succeeded)
                {
                  ArgY1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  ArgY2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_14, ArgX1_12, ArgY1_13);
                  succeeded = (SubResult1_14 != (MR_Integer) 0);
                  if (succeeded)
                    Var_6 = SubResult1_14;
                  else
                    hlds__hlds_pred____Compare____pred_proc_id_0_0(&Var_6, ArgX2_15, ArgY2_16);
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_18;
                    MR_Word ArgX2_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Word ArgY2_21;
                    MR_Word SubResult1_19;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      ArgY1_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_19, ArgX1_17, ArgY1_18);
                      succeeded = (SubResult1_19 != (MR_Integer) 0);
                      if (succeeded)
                        Var_6 = SubResult1_19;
                      else
                        hlds__hlds_pred____Compare____pred_proc_id_0_0(&Var_6, ArgX2_20, ArgY2_21);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ArgX1_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_23;
                    MR_Word ArgX2_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Word ArgY2_26;
                    MR_Word SubResult1_24;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      ArgY1_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_24, ArgX1_22, ArgY1_23);
                      succeeded = (SubResult1_24 != (MR_Integer) 0);
                      if (succeeded)
                        Var_6 = SubResult1_24;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_errors_scalar_common_1[1]), &Var_6, ((MR_Box) (ArgX2_25)), ((MR_Box) (ArgY2_26)));
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word ArgX1_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_28;
                    MR_Word ArgX2_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Word ArgY2_31;
                    MR_Word ArgX3_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                    MR_Word ArgY3_34;
                    MR_Word SubResult1_29;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
                    if (succeeded)
                    {
                      ArgY1_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      ArgY3_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                      hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_29, ArgX1_27, ArgY1_28);
                      succeeded = (SubResult1_29 != (MR_Integer) 0);
                      if (succeeded)
                        Var_6 = SubResult1_29;
                      else
                      {
                        MR_Word SubResult2_32;

                        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_errors_scalar_common_1[2]), &SubResult2_32, ((MR_Box) (ArgX2_30)), ((MR_Box) (ArgY2_31)));
                        succeeded = (SubResult2_32 != (MR_Integer) 0);
                        if (succeeded)
                          Var_6 = SubResult2_32;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_errors_scalar_common_1[2]), &Var_6, ((MR_Box) (ArgX3_33)), ((MR_Box) (ArgY3_34)));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word ArgX1_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_36;
                    MR_Word ArgX2_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Word ArgY2_39;
                    MR_Word SubResult1_37;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
                    if (succeeded)
                    {
                      ArgY1_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_37, ArgX1_35, ArgY1_36);
                      succeeded = (SubResult1_37 != (MR_Integer) 0);
                      if (succeeded)
                        Var_6 = SubResult1_37;
                      else
                        hlds__hlds_pred____Compare____pred_proc_id_0_0(&Var_6, ArgX2_38, ArgY2_39);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word ArgX1_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_41;
                    MR_Word ArgX2_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Word ArgY2_44;
                    MR_Word SubResult1_42;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
                    if (succeeded)
                    {
                      ArgY1_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_42, ArgX1_40, ArgY1_41);
                      succeeded = (SubResult1_42 != (MR_Integer) 0);
                      if (succeeded)
                        Var_6 = SubResult1_42;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_errors_scalar_common_1[3]), &Var_6, ((MR_Box) (ArgX2_43)), ((MR_Box) (ArgY2_44)));
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word ArgX1_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_46;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
                    if (succeeded)
                    {
                      ArgY1_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      hlds__hlds_pred____Compare____pred_id_0_0(&Var_6, ArgX1_45, ArgY1_46);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word ArgX1_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_48;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
                    if (succeeded)
                    {
                      ArgY1_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      hlds__hlds_pred____Compare____pred_id_0_0(&Var_6, ArgX1_47, ArgY1_48);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word ArgX1_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_50;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
                    if (succeeded)
                    {
                      ArgY1_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      hlds__hlds_pred____Compare____pred_proc_id_0_0(&Var_6, ArgX1_49, ArgY1_50);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
              }
              break;
          }
          if (succeeded)
            *HeadVar__1_1 = Var_6;
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
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 4;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 5;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 11;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 12;
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_Integer) 13;
          break;
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_Integer) 16;
          break;
      }
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Integer) 2;
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Integer) 3;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 6;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 7;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 8;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 9;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 10;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 14;
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_Integer) 15;
          break;
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_Integer) 17;
          break;
      }
      break;
  }
}

MR_bool MR_CALL 
transform_hlds__term_errors____Unify____term_error_0_0(
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
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mercury__term____Unify____context_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = transform_hlds__term_errors____Unify____term_error_kind_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__term_errors____Unify____term_error_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_55 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_56 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_55 == CastY_56);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_4 == CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_6 == CastX_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_16 == CastX_15);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_18 == CastX_17);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer CastX_41 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_42 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_42 == CastX_41);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Integer CastX_43 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_44 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_44 == CastX_43);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Integer CastX_45 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_46 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_46 == CastX_45);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Integer CastX_51 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_52 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_52 == CastX_51);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;
            MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_7, ArgY1_8);
              if (succeeded)
                succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX2_9, ArgY2_10);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_12;
            MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_14;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_11, ArgY1_12);
              if (succeeded)
                succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX2_13, ArgY2_14);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgX1_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_20;
                MR_Word ArgX2_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_22;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_19, ArgY1_20);
                  if (succeeded)
                    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX2_21, ArgY2_22);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypeInfo_64_64;
                MR_Word ArgX1_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_24;
                MR_Word ArgX2_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_26;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_23, ArgY1_24);
                  if (succeeded)
                  {
                    TypeInfo_64_64 = (MR_Word) (&transform_hlds__term_errors_scalar_common_1[1]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_64_64, ((MR_Box) (ArgX2_25)), ((MR_Box) (ArgY2_26)));
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word TypeInfo_73_73;
                MR_Word TypeInfo_74_74;
                MR_Word ArgX1_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_28;
                MR_Word ArgX2_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_30;
                MR_Word ArgX3_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_32;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_27, ArgY1_28);
                  if (succeeded)
                  {
                    TypeInfo_73_73 = (MR_Word) (&transform_hlds__term_errors_scalar_common_1[2]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_73_73, ((MR_Box) (ArgX2_29)), ((MR_Box) (ArgY2_30)));
                    if (succeeded)
                    {
                      TypeInfo_74_74 = (MR_Word) (&transform_hlds__term_errors_scalar_common_1[2]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_74_74, ((MR_Box) (ArgX3_31)), ((MR_Box) (ArgY3_32)));
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ArgX1_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_34;
                MR_Word ArgX2_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_36;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  ArgY1_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_33, ArgY1_34);
                  if (succeeded)
                    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX2_35, ArgY2_36);
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word TypeInfo_60_60;
                MR_Word ArgX1_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_38;
                MR_Word ArgX2_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_40;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (succeeded)
                {
                  ArgY1_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_37, ArgY1_38);
                  if (succeeded)
                  {
                    TypeInfo_60_60 = (MR_Word) (&transform_hlds__term_errors_scalar_common_1[3]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_60_60, ((MR_Box) (ArgX2_39)), ((MR_Box) (ArgY2_40)));
                  }
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ArgX1_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_48;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (succeeded)
                {
                  ArgY1_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_47, ArgY1_48);
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ArgX1_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_50;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  ArgY1_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_49, ArgY1_50);
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ArgX1_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_54;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
                if (succeeded)
                {
                  ArgY1_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_53, ArgY1_54);
                }
              }
              break;
          }
          break;
      }
    return succeeded;
  }
}

MR_Word MR_CALL 
transform_hlds__term_errors__term_error_kind_is_fatal_error_1_f_0(
  MR_Word ErrorKind_3)
{
  {
    MR_Word IsFatal_4;

    switch (MR_tag((MR_Word) ErrorKind_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ErrorKind_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
            IsFatal_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            IsFatal_4 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        IsFatal_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        IsFatal_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        IsFatal_4 = (MR_Integer) 0;
        break;
    }
    return IsFatal_4;
  }
}

MR_Word MR_CALL 
transform_hlds__term_errors__term_error_kind_is_direct_error_1_f_0(
  MR_Word ErrorKind_3)
{
  {
    MR_Word IsDirect_4;

    switch (MR_tag((MR_Word) ErrorKind_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ErrorKind_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            IsDirect_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
            IsDirect_4 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        IsDirect_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ErrorKind_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 7:
            IsDirect_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 6:
            IsDirect_4 = (MR_Integer) 0;
            break;
        }
        break;
    }
    return IsDirect_4;
  }
}

void MR_CALL 
transform_hlds__term_errors__report_term_errors_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word SCC_7,
  MR_Word Errors_8,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  {
    MR_bool succeeded;
    MR_Word Context_10;
    MR_Word Pieces1_12;
    MR_Word Single_13;
    MR_Word Pieces_15;
    MR_Word ReasonMsgsCord_16;
    MR_Word ReasonMsgs_21;
    MR_Word Msgs_22;
    MR_Word Spec_23;
    MR_Word STATE_VARIABLE_Specs_55_55;
    MR_Word Var_59;
    MR_Word PPId_11;
    MR_Box conv0_PPId_11;

    transform_hlds__term_util__get_context_from_scc_3_p_0(ModuleInfo_6, SCC_7, &Context_10);
    succeeded = mercury__set__is_singleton_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SCC_7, &conv0_PPId_11);
    if (succeeded)
    {
      PPId_11 = ((MR_Word) (conv0_PPId_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_30;

      Var_30 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(ModuleInfo_6, (MR_Integer) 0, PPId_11);
      Pieces1_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[108])), Var_30);
      {
        Single_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Single_13, 0) = ((MR_Box) (PPId_11));
      }
    }
    else
    {
      MR_Word Var_39;
      MR_Word Var_41;

      Var_41 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SCC_7);
      Var_39 = hlds__hlds_error_util__describe_several_proc_names_3_f_0(ModuleInfo_6, (MR_Integer) 0, Var_41);
      Pieces1_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[7])), Var_39);
      Single_13 = (MR_Word) ((MR_Unsigned) 0U);
    }
    if ((Errors_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces1_12, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[110])));
      ReasonMsgsCord_16 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0));
      STATE_VARIABLE_Specs_55_55 = STATE_VARIABLE_Specs_0_24;
    }
    else
    {
      MR_Word Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Errors_8, (MR_Integer) 1))));
      MR_Word Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Errors_8, (MR_Integer) 0))));

      if ((Var_77 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_54;

        Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces1_12, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[112])));
        Var_54 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0));
        transform_hlds__term_errors__describe_term_error_8_p_0(ModuleInfo_6, Single_13, Var_78, (MR_Word) ((MR_Unsigned) 0U), Var_54, &ReasonMsgsCord_16, STATE_VARIABLE_Specs_0_24, &STATE_VARIABLE_Specs_55_55);
      }
      else
      {
        MR_Word Var_47;
        MR_Word Error_90;
        MR_Word Errors_91;
        MR_Word STATE_VARIABLE_Msgs_30_100;
        MR_Word STATE_VARIABLE_Specs_31_101;

        Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces1_12, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[114])));
        Var_47 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0));
        Error_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Errors_8, (MR_Integer) 0))));
        Errors_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Errors_8, (MR_Integer) 1))));
        transform_hlds__term_errors__describe_term_error_8_p_0(ModuleInfo_6, Single_13, Error_90, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_4[0])), Var_47, &STATE_VARIABLE_Msgs_30_100, STATE_VARIABLE_Specs_0_24, &STATE_VARIABLE_Specs_31_101);
        transform_hlds__term_errors__describe_term_errors_8_p_0(ModuleInfo_6, Single_13, Errors_91, (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) 1), STATE_VARIABLE_Msgs_30_100, &ReasonMsgsCord_16, STATE_VARIABLE_Specs_31_101, &STATE_VARIABLE_Specs_55_55);
      }
    }
    ReasonMsgs_21 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), ReasonMsgsCord_16);
    {
      Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (Pieces_15));
    }
    {
      Msgs_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Msgs_22, 0) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(1), Msgs_22, 1) = ((MR_Box) (ReasonMsgs_21));
    }
    {
      Spec_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140transform_hlds.term_errors.report_term_errors\'/5"));
      MR_hl_field(MR_mktag(0), Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 60U));
      MR_hl_field(MR_mktag(0), Spec_23, 3) = ((MR_Box) (Msgs_22));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_25 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_23));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_55_55));
    }
  }
}

static void MR_CALL 
transform_hlds__term_errors__describe_term_errors_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Single_2,
  MR_Word HeadVar__3_3,
  MR_Integer ErrNum0_4,
  MR_Word STATE_VARIABLE_Msgs_0_5,
  MR_Word * STATE_VARIABLE_Msgs_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Msgs_6 = STATE_VARIABLE_Msgs_0_5;
    }
    else
    {
      MR_Word Error_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Errors_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_29;
      MR_Word STATE_VARIABLE_Msgs_30_30;
      MR_Word STATE_VARIABLE_Specs_31_31;
      MR_Integer Var_32;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Integer next_value_of_ErrNum0_4;
      MR_Word next_value_of_STATE_VARIABLE_Msgs_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (ErrNum0_4));
      }
      transform_hlds__term_errors__describe_term_error_8_p_0(ModuleInfo_1, Single_2, Error_20, Var_29, STATE_VARIABLE_Msgs_0_5, &STATE_VARIABLE_Msgs_30_30, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_31_31);
      Var_32 = (MR_Integer) ((MR_Unsigned) ErrNum0_4 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Errors_21;
      next_value_of_ErrNum0_4 = Var_32;
      next_value_of_STATE_VARIABLE_Msgs_0_5 = STATE_VARIABLE_Msgs_30_30;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_31_31;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      ErrNum0_4 = next_value_of_ErrNum0_4;
      STATE_VARIABLE_Msgs_0_5 = next_value_of_STATE_VARIABLE_Msgs_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__term_errors__describe_term_error_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word Single_10,
  MR_Word TermErrorContext_11,
  MR_Word ErrorNum_12,
  MR_Word STATE_VARIABLE_ReasonMsgs_0_28,
  MR_Word * STATE_VARIABLE_ReasonMsgs_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31)
{
  {
    MR_bool succeeded;
    MR_Word Context_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermErrorContext_11, (MR_Integer) 0))));
    MR_Word ErrorKind_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermErrorContext_11, (MR_Integer) 1))));
    MR_Word Pieces0_17;
    MR_Word Reason_18;
    MR_Word Pieces_22;
    MR_Word ReasonMsg_23;
    MR_Word Var_36;
    MR_Word Var_39;
    MR_Word Var_40;

    transform_hlds__term_errors__term_error_kind_description_5_p_0(ModuleInfo_9, Single_10, ErrorKind_16, &Pieces0_17, &Reason_18);
    if ((ErrorNum_12 == (MR_Word) ((MR_Unsigned) 0U)))
      Pieces_22 = Pieces0_17;
    else
    {
      MR_Integer N_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ErrorNum_12, (MR_Integer) 0))));
      MR_String Nstr_20;
      MR_String Preamble_21;
      MR_String Var_33;
      MR_Word Var_35;

      mercury__string__int_to_string_2_p_0(N_19, &Nstr_20);
      Var_33 = mercury__string__f_43_43_2_f_0(Nstr_20, (MR_String) ":");
      Preamble_21 = mercury__string__f_43_43_2_f_0((MR_String) "Reason ", Var_33);
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_35, 0) = ((MR_Box) (Preamble_21));
      }
      {
        Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_22, 0) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(1), Pieces_22, 1) = ((MR_Box) (Pieces0_17));
      }
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Context_15));
    }
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (Pieces_22));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      ReasonMsg_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ReasonMsg_23, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(2), ReasonMsg_23, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), ReasonMsg_23, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), ReasonMsg_23, 3) = ((MR_Box) (Var_39));
    }
    *STATE_VARIABLE_ReasonMsgs_29 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), STATE_VARIABLE_ReasonMsgs_0_28, ((MR_Box) (ReasonMsg_23)));
    if ((Reason_18 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_31 = STATE_VARIABLE_Specs_0_30;
    else
    {
      MR_Word InfArgSizePPId_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Reason_18, (MR_Integer) 0))));
      MR_Word ArgSize_25;
      MR_Word ArgSizeErrors_26;
      MR_Word Var_43;

      transform_hlds__term_util__lookup_proc_arg_size_info_3_p_0(ModuleInfo_9, InfArgSizePPId_24, &ArgSize_25);
      succeeded = (ArgSize_25 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgSize_25, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_43)) == (MR_Integer) 1);
        if (succeeded)
          ArgSizeErrors_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word ArgSizePPIdSCC_27;

        ArgSizePPIdSCC_27 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (InfArgSizePPId_24)));
        transform_hlds__term_errors__report_arg_size_errors_5_p_0(ModuleInfo_9, ArgSizePPIdSCC_27, ArgSizeErrors_26, STATE_VARIABLE_Specs_0_30, STATE_VARIABLE_Specs_31);
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_errors.describe_term_error\'/8", (MR_String) "inf arg size procedure does not have inf arg size");
          return;
        }
    }
  }
}

static void MR_CALL 
transform_hlds__term_errors__report_arg_size_errors_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word SCC_7,
  MR_Word Errors_8,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  {
    MR_bool succeeded;
    MR_Word Context_10;
    MR_Word Pieces1_12;
    MR_Word Single_13;
    MR_Word Pieces_17;
    MR_Word ReasonMsgsCord_18;
    MR_Word ReasonMsgs_22;
    MR_Word Msgs_23;
    MR_Word Spec_24;
    MR_Word STATE_VARIABLE_Specs_59_59;
    MR_Word Var_62;
    MR_Word PPId_11;
    MR_Box conv0_PPId_11;

    transform_hlds__term_util__get_context_from_scc_3_p_0(ModuleInfo_6, SCC_7, &Context_10);
    succeeded = mercury__set__is_singleton_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SCC_7, &conv0_PPId_11);
    if (succeeded)
    {
      PPId_11 = ((MR_Word) (conv0_PPId_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_31;

      Var_31 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(ModuleInfo_6, (MR_Integer) 0, PPId_11);
      Pieces1_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[99])), Var_31);
      {
        Single_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Single_13, 0) = ((MR_Box) (PPId_11));
      }
    }
    else
    {
      MR_Word Var_40;
      MR_Word Var_42;

      Var_42 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SCC_7);
      Var_40 = hlds__hlds_error_util__describe_several_proc_names_3_f_0(ModuleInfo_6, (MR_Integer) 0, Var_42);
      Pieces1_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[11])), Var_40);
      Single_13 = (MR_Word) ((MR_Unsigned) 0U);
    }
    if ((Errors_8 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_errors.report_arg_size_errors\'/5", (MR_String) "empty list of errors");
        return;
      }
    else
    {
      MR_Word Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Errors_8, (MR_Integer) 1))));
      MR_Word Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Errors_8, (MR_Integer) 0))));

      if ((Var_77 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_58;

        Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces1_12, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[103])));
        Var_58 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0));
        transform_hlds__term_errors__describe_term_error_8_p_0(ModuleInfo_6, Single_13, Var_78, (MR_Word) ((MR_Unsigned) 0U), Var_58, &ReasonMsgsCord_18, STATE_VARIABLE_Specs_0_25, &STATE_VARIABLE_Specs_59_59);
      }
      else
      {
        MR_Word Var_50;
        MR_Word Error_90;
        MR_Word Errors_91;
        MR_Word STATE_VARIABLE_Msgs_30_100;
        MR_Word STATE_VARIABLE_Specs_31_101;

        Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces1_12, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[106])));
        Var_50 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0));
        Error_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Errors_8, (MR_Integer) 0))));
        Errors_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Errors_8, (MR_Integer) 1))));
        transform_hlds__term_errors__describe_term_error_8_p_0(ModuleInfo_6, Single_13, Error_90, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_4[0])), Var_50, &STATE_VARIABLE_Msgs_30_100, STATE_VARIABLE_Specs_0_25, &STATE_VARIABLE_Specs_31_101);
        transform_hlds__term_errors__describe_term_errors_8_p_0(ModuleInfo_6, Single_13, Errors_91, (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) 1), STATE_VARIABLE_Msgs_30_100, &ReasonMsgsCord_18, STATE_VARIABLE_Specs_31_101, &STATE_VARIABLE_Specs_59_59);
      }
    }
    ReasonMsgs_22 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), ReasonMsgsCord_18);
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (Pieces_17));
    }
    {
      Msgs_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Msgs_23, 0) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(1), Msgs_23, 1) = ((MR_Box) (ReasonMsgs_22));
    }
    {
      Spec_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140transform_hlds.term_errors.report_arg_size_errors\'/5"));
      MR_hl_field(MR_mktag(0), Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 60U));
      MR_hl_field(MR_mktag(0), Spec_24, 3) = ((MR_Box) (Msgs_23));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_26 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_24));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_59_59));
    }
  }
}

static void MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_160;

    transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__457__1_2_p_0(((MR_String) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_160);
    *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_160));
  }
}

static void MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_154;

    transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__453__1_2_p_0(((MR_String) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_154);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_154));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_6(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__395__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_5(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__334__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__377__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__414__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__506__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__353__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Single_7,
  MR_Word ErrorKind_8,
  MR_Word * Pieces_9,
  MR_Word * Reason_10)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) ErrorKind_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ErrorKind_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *Pieces_9 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[70]));
              *Reason_10 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 1:
            {
              *Pieces_9 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[48]));
              *Reason_10 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 2:
            {
              *Pieces_9 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[42]));
              *Reason_10 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 3:
            {
              *Pieces_9 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[58]));
              *Reason_10 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 4:
            {
              *Pieces_9 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[62]));
              *Reason_10 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 5:
            {
              *Pieces_9 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[78]));
              *Reason_10 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 6:
            {
              *Pieces_9 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[74]));
              *Reason_10 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 7:
            {
              *Pieces_9 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[50]));
              *Reason_10 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_245;
          MR_Word Var_248;
          MR_Word CallerPPId_300 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ErrorKind_8, (MR_Integer) 0))));
          MR_Word CalleePPId_301 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ErrorKind_8, (MR_Integer) 1))));
          MR_Word Pieces1_303;
          MR_Word CalleePieces_305;

          if ((Single_7 == (MR_Word) ((MR_Unsigned) 0U)))
            Pieces1_303 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(ModuleInfo_6, (MR_Integer) 0, CallerPPId_300);
          else
          {
            MR_Word Var_236;
            MR_Word PPId_298 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Single_7, (MR_Integer) 0))));

            {
              Var_236 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_236, 0) = ((MR_Box) (&transform_hlds__term_errors_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), Var_236, 1) = ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_1));
              MR_hl_field(MR_mktag(0), Var_236, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_236, 3) = ((MR_Box) (PPId_298));
              MR_hl_field(MR_mktag(0), Var_236, 4) = ((MR_Box) (CallerPPId_300));
            }
            mercury__require__expect_3_p_0(Var_236, (MR_String) "predicate \140transform_hlds.term_errors.term_error_kind_description\'/5", (MR_String) "can_loop_proc_called: caller outside this SCC");
            Pieces1_303 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[81]));
          }
          CalleePieces_305 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(ModuleInfo_6, (MR_Integer) 0, CalleePPId_301);
          Var_248 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), CalleePieces_305, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[85])));
          Var_245 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[84])), Var_248);
          *Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces1_303, Var_245);
          *Reason_10 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_216;
          MR_Word Var_219;
          MR_Word CallerPPId_308 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ErrorKind_8, (MR_Integer) 0))));
          MR_Word CalleePPId_309 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ErrorKind_8, (MR_Integer) 1))));
          MR_Word Pieces1_311;
          MR_Word CalleePieces_313;

          if ((Single_7 == (MR_Word) ((MR_Unsigned) 0U)))
            Pieces1_311 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(ModuleInfo_6, (MR_Integer) 0, CallerPPId_308);
          else
          {
            MR_Word Var_207;
            MR_Word PPId_306 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Single_7, (MR_Integer) 0))));

            {
              Var_207 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_207, 0) = ((MR_Box) (&transform_hlds__term_errors_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), Var_207, 1) = ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_4));
              MR_hl_field(MR_mktag(0), Var_207, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_207, 3) = ((MR_Box) (PPId_306));
              MR_hl_field(MR_mktag(0), Var_207, 4) = ((MR_Box) (CallerPPId_308));
            }
            mercury__require__expect_3_p_0(Var_207, (MR_String) "predicate \140transform_hlds.term_errors.term_error_kind_description\'/5", (MR_String) "horder_args: caller outside this SCC");
            Pieces1_311 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[81]));
          }
          CalleePieces_313 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(ModuleInfo_6, (MR_Integer) 0, CalleePPId_309);
          Var_219 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), CalleePieces_313, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[90])));
          Var_216 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[84])), Var_219);
          *Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces1_311, Var_216);
          *Reason_10 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ErrorKind_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_198;
              MR_Word Var_201;
              MR_Word CallerPPId_317 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorKind_8, (MR_Integer) 1))));
              MR_Word CalleePPId_318 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorKind_8, (MR_Integer) 2))));
              MR_Word Pieces1_320;
              MR_Word CalleePieces_322;

              if ((Single_7 == (MR_Word) ((MR_Unsigned) 0U)))
                Pieces1_320 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(ModuleInfo_6, (MR_Integer) 0, CallerPPId_317);
              else
              {
                MR_Word Var_189;
                MR_Word PPId_315 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Single_7, (MR_Integer) 0))));

                {
                  Var_189 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_189, 0) = ((MR_Box) (&transform_hlds__term_errors_scalar_common_3[0]));
                  MR_hl_field(MR_mktag(0), Var_189, 1) = ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_6));
                  MR_hl_field(MR_mktag(0), Var_189, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_189, 3) = ((MR_Box) (PPId_315));
                  MR_hl_field(MR_mktag(0), Var_189, 4) = ((MR_Box) (CallerPPId_317));
                }
                mercury__require__expect_3_p_0(Var_189, (MR_String) "predicate \140transform_hlds.term_errors.term_error_kind_description\'/5", (MR_String) "inf_termination_const: caller outside this SCC");
                Pieces1_320 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[81]));
              }
              CalleePieces_322 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(ModuleInfo_6, (MR_Integer) 0, CalleePPId_318);
              Var_201 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), CalleePieces_322, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[92])));
              Var_198 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[84])), Var_201);
              *Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces1_320, Var_198);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *Reason_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CalleePPId_318));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word CallerPPId_326 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorKind_8, (MR_Integer) 1))));
              MR_Word Pieces1_328;

              if ((Single_7 == (MR_Word) ((MR_Unsigned) 0U)))
                Pieces1_328 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(ModuleInfo_6, (MR_Integer) 0, CallerPPId_326);
              else
              {
                MR_Word Var_171;
                MR_Word PPId_324 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Single_7, (MR_Integer) 0))));

                {
                  Var_171 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_171, 0) = ((MR_Box) (&transform_hlds__term_errors_scalar_common_3[0]));
                  MR_hl_field(MR_mktag(0), Var_171, 1) = ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_3));
                  MR_hl_field(MR_mktag(0), Var_171, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_171, 3) = ((MR_Box) (PPId_324));
                  MR_hl_field(MR_mktag(0), Var_171, 4) = ((MR_Box) (CallerPPId_326));
                }
                mercury__require__expect_3_p_0(Var_171, (MR_String) "predicate \140transform_hlds.term_errors.term_error_kind_description\'/5", (MR_String) "ho_info_termination_const: caller outside this SCC");
                Pieces1_328 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[81]));
              }
              *Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces1_328, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[40])));
              *Reason_10 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ProcPPId_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorKind_8, (MR_Integer) 1))));
              MR_Word OutputSuppliers_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorKind_8, (MR_Integer) 2))));
              MR_Word HeadVars_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorKind_8, (MR_Integer) 3))));
              MR_Word PredId_25;
              MR_Integer ProcId_26;
              MR_Word ProcInfo_28;
              MR_Word Varset_29;
              MR_Word OutputSuppliersNames_30;
              MR_Word OutputSuppliersPieces_33;
              MR_Word HeadVarsNames_34;
              MR_Word HeadVarsPieces_37;
              MR_Word Var_161;
              MR_Word Var_162;
              MR_Word Var_163;
              MR_Word Pieces1_337;
              MR_Word Var_27;

              if ((Single_7 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word PPIdPieces_330;

                PPIdPieces_330 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(ModuleInfo_6, (MR_Integer) 0, ProcPPId_21);
                {
                  Pieces1_337 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces1_337, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[93])));
                  MR_hl_field(MR_mktag(1), Pieces1_337, 1) = ((MR_Box) (PPIdPieces_330));
                }
              }
              else
              {
                MR_Word PPId_329 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Single_7, (MR_Integer) 0))));

                succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(PPId_329, ProcPPId_21);
                if (succeeded)
                  Pieces1_337 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[95]));
                else
                {
                  MR_Word PPIdPieces_24;

                  PPIdPieces_24 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(ModuleInfo_6, (MR_Integer) 0, ProcPPId_21);
                  {
                    Pieces1_337 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Pieces1_337, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[93])));
                    MR_hl_field(MR_mktag(1), Pieces1_337, 1) = ((MR_Box) (PPIdPieces_24));
                  }
                }
              }
              PredId_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcPPId_21, (MR_Integer) 0))));
              ProcId_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProcPPId_21, (MR_Integer) 1))));
              hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_6, PredId_25, ProcId_26, &Var_27, &ProcInfo_28);
              hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_28, &Varset_29);
              transform_hlds__term_errors__term_errors_var_bag_description_3_p_0(OutputSuppliers_22, Varset_29, &OutputSuppliersNames_30);
              mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&transform_hlds__term_errors_scalar_common_2[1]), OutputSuppliersNames_30, &OutputSuppliersPieces_33);
              transform_hlds__term_errors__term_errors_var_bag_description_3_p_0(HeadVars_23, Varset_29, &HeadVarsNames_34);
              mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&transform_hlds__term_errors_scalar_common_2[2]), HeadVarsNames_34, &HeadVarsPieces_37);
              Var_163 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HeadVarsPieces_37, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[32])));
              Var_162 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[97])), Var_163);
              Var_161 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), OutputSuppliersPieces_33, Var_162);
              *Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces1_337, Var_161);
              *Reason_10 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word CallerPPId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorKind_8, (MR_Integer) 1))));
              MR_Word CalleePPId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorKind_8, (MR_Integer) 2))));
              MR_Word Pieces1_14;
              MR_Word CalleePieces_16;
              MR_Word Var_270;
              MR_Word Var_273;

              if ((Single_7 == (MR_Word) ((MR_Unsigned) 0U)))
                Pieces1_14 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(ModuleInfo_6, (MR_Integer) 0, CallerPPId_11);
              else
              {
                MR_Word PPId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Single_7, (MR_Integer) 0))));
                MR_Word Var_254;

                {
                  Var_254 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_254, 0) = ((MR_Box) (&transform_hlds__term_errors_scalar_common_3[0]));
                  MR_hl_field(MR_mktag(0), Var_254, 1) = ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_5));
                  MR_hl_field(MR_mktag(0), Var_254, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_254, 3) = ((MR_Box) (CallerPPId_11));
                  MR_hl_field(MR_mktag(0), Var_254, 4) = ((MR_Box) (PPId_13));
                }
                mercury__require__expect_3_p_0(Var_254, (MR_String) "predicate \140transform_hlds.term_errors.term_error_kind_description\'/5", (MR_String) "inf_call: caller outside this SCC");
                Pieces1_14 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[81]));
              }
              CalleePieces_16 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(ModuleInfo_6, (MR_Integer) 0, CalleePPId_12);
              Var_273 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), CalleePieces_16, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[54])));
              Var_270 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[84])), Var_273);
              *Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces1_14, Var_270);
              *Reason_10 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word CallSites_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorKind_8, (MR_Integer) 2))));
              MR_Word DirectCall_40;
              MR_Word Var_113;

              succeeded = (CallSites_39 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                DirectCall_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CallSites_39, (MR_Integer) 0))));
                Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CallSites_39, (MR_Integer) 1))));
                succeeded = (Var_113 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word SitePieces_41;
                MR_Word Var_115;

                SitePieces_41 = hlds__hlds_error_util__describe_one_call_site_3_f_0(ModuleInfo_6, (MR_Integer) 0, DirectCall_40);
                {
                  Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[86])));
                  MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (SitePieces_41));
                }
                *Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_115, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[16])));
              }
              else
              {
                MR_Word Var_131;
                MR_Word Var_132;

                Var_132 = hlds__hlds_error_util__describe_several_call_sites_3_f_0(ModuleInfo_6, (MR_Integer) 0, CallSites_39);
                Var_131 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_132, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[20])));
                *Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[88])), Var_131);
              }
              *Reason_10 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 5:
            {
              *Pieces_9 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[56]));
              *Reason_10 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Pieces2_343;
              MR_Word PredId_344 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorKind_8, (MR_Integer) 1))));

              if ((Single_7 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_68;

                Var_68 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_6, (MR_Integer) 0, PredId_344);
                Pieces2_343 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_68, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[32])));
              }
              else
              {
                MR_Word SCCPredId_43;
                MR_Word Var_76;
                MR_Word PPId_339 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Single_7, (MR_Integer) 0))));

                SCCPredId_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PPId_339, (MR_Integer) 0))));
                {
                  Var_76 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (&transform_hlds__term_errors_scalar_common_3[1]));
                  MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_2));
                  MR_hl_field(MR_mktag(0), Var_76, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_76, 3) = ((MR_Box) (SCCPredId_43));
                  MR_hl_field(MR_mktag(0), Var_76, 4) = ((MR_Box) (PredId_344));
                }
                mercury__require__expect_3_p_0(Var_76, (MR_String) "predicate \140transform_hlds.term_errors.term_error_kind_description\'/5", (MR_String) "does not terminate pragma outside this SCC");
                Pieces2_343 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[34]));
              }
              *Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[30])), Pieces2_343);
              *Reason_10 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 7:
            {
              *Pieces_9 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[24]));
              *Reason_10 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__term_errors__term_errors_var_bag_description_3_p_0(
  MR_Word HeadVars_4,
  MR_Word Varset_5,
  MR_Word * Pieces_6)
{
  {
    MR_Word HeadVarCountList_7;

    mercury__bag__to_assoc_list_2_p_0((MR_Word) (&transform_hlds__term_errors_scalar_common_1[0]), HeadVars_4, &HeadVarCountList_7);
    transform_hlds__term_errors__term_errors_var_bag_description_2_4_p_0(HeadVarCountList_7, Varset_5, (MR_Integer) 1, Pieces_6);
  }
}

static void MR_CALL 
transform_hlds__term_errors__term_errors_var_bag_description_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Varset_2,
  MR_Word First_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[79]));
    else
    {
      MR_Word Var_9;
      MR_Integer Count_10;
      MR_Word VarCounts_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String Piece_14;
      MR_Word Pieces_15;
      MR_String VarName_16;
      MR_String VarCountPiece_19;
      MR_String Piece0_20;
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0))));
      Count_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 1))));
      mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Varset_2, Var_9, &VarName_16);
      succeeded = (Count_10 > (MR_Integer) 1);
      if (succeeded)
      {
        MR_String VarCountPiece0_17;
        MR_String CountStr_18;

        mercury__string__append_3_p_2(VarName_16, (MR_String) "*", &VarCountPiece0_17);
        mercury__string__int_to_string_2_p_0(Count_10, &CountStr_18);
        mercury__string__append_3_p_2(VarCountPiece0_17, CountStr_18, &VarCountPiece_19);
      }
      else
        VarCountPiece_19 = VarName_16;
      switch (First_3) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Piece0_20 = VarCountPiece_19;
          break;
        case (MR_Integer) 1:
          mercury__string__append_3_p_2((MR_String) "{", VarCountPiece_19, &Piece0_20);
          break;
      }
      if ((VarCounts_11 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__string__append_3_p_2(Piece0_20, (MR_String) "}.", &Piece_14);
        Pieces_15 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        Piece_14 = Piece0_20;
        transform_hlds__term_errors__term_errors_var_bag_description_2_4_p_0(VarCounts_11, Varset_2, First_3, &Pieces_15);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Piece_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Pieces_15));
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_errors____Unify____term_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__term_errors____Unify____term_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_errors____Compare____term_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__term_errors____Compare____term_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_errors____Unify____term_error_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__term_errors____Unify____term_error_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_errors____Compare____term_error_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__term_errors____Compare____term_error_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module transform_hlds.term_errors.
