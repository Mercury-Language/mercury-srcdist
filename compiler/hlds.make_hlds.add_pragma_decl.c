/*
** Automatically generated from `add_pragma_decl.m'
** by the Mercury compiler,
** version rotd-2026-07-31
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


// :- module hlds.make_hlds.add_pragma_decl.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__add_pragma_decl__init
ENDINIT
*/

#include "hlds.make_hlds.add_pragma_decl.mih"


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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
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
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.make_hlds_error.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.build_eqv_maps.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_constr_util.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_pragma_type_spec.mih"
#include "hlds.make_hlds.add_pragma_type_spec_constr.mih"
#include "hlds.make_hlds.add_pragma_util.mih"
#include "hlds.make_hlds.make_hlds_types.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_decl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_decl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_decl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_info_spec_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma_decl__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma_decl__parse_tree__prog_data_pragma__ti_generic_arg_size_info_1list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_decl__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__ti_generic_arg_size_info_1list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0;

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__add_pragma_decl__parse_tree__prog_data_pragma__ti_generic_termination_info_2unit__type_ctor_info_unit_0list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_decl__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__ti_generic_termination_info_2unit__type_ctor_info_unit_0list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma_decl__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_decl__maybe__pti_maybe_1__plain_list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0;

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__add_pragma_decl__parse_tree__prog_data_pragma__ti_generic_termination_info_2unit__type_ctor_info_unit_0unit__type_ctor_info_unit_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_decl__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__ti_generic_termination_info_2unit__type_ctor_info_unit_0unit__type_ctor_info_unit_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma_decl__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_decl__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_decl__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_decl__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_arity_0;

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__IntroducedFrom__pred__add_pragma_termination2__594__1_6_p_0(
  MR_Word MaybePragmaSuccessArgSizeInfo_10,
  MR_Word MaybePragmaFailureArgSizeInfo_11,
  MR_Word MaybePragmaTerminationInfo_12,
  MR_Word Context_13,
  MR_Word LambdaHeadVar__1_36,
  MR_Word * LambdaHeadVar__2_37);

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__IntroducedFrom__pred__add_pragma_termination__560__1_4_p_0(
  MR_Word MaybeArgSizeInfo_22,
  MR_Word MaybeTerminationInfo_23,
  MR_Word LambdaHeadVar__1_36,
  MR_Word * LambdaHeadVar__2_37);

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__IntroducedFrom__pred__mark_proc_as_obsolete__286__1_3_p_0(
  MR_Word ObsoleteInFavourOf_15,
  MR_Word LambdaHeadVar__1_48,
  MR_Word * LambdaHeadVar__2_49);

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_decl_marker_8_p_0(
  MR_Word ItemMercuryStatus_9,
  MR_Word DeclMarker_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * STATE_VARIABLE_ModuleInfo_19,
  MR_Word STATE_VARIABLE_ErrSpecs_0_20,
  MR_Word * STATE_VARIABLE_ErrSpecs_21,
  MR_Word STATE_VARIABLE_WarnSpecs_0_22,
  MR_Word * STATE_VARIABLE_WarnSpecs_23);

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__lookup_pred_orig_arity_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word PredId_5,
  MR_Word * Piece_6);

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__find_unique_pred_for_oisu_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__find_unique_pred_for_oisu_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word Context_12,
  MR_Word TypeCtor_13,
  MR_String Kind_14,
  MR_Word PredSpec_15,
  MR_Word * PredId_16,
  MR_Integer STATE_VARIABLE_SeqNum_0_42,
  MR_Integer * STATE_VARIABLE_SeqNum_43,
  MR_Word STATE_VARIABLE_ErrSpecs_0_44,
  MR_Word * STATE_VARIABLE_ErrSpecs_45);

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_decl_pragma_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word ItemMercuryStatus_15,
  MR_Word Pragma_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_32,
  MR_Word * STATE_VARIABLE_ModuleInfo_33,
  MR_Word STATE_VARIABLE_QualInfo_0_34,
  MR_Word * STATE_VARIABLE_QualInfo_35,
  MR_Word STATE_VARIABLE_ErrSpecs_0_36,
  MR_Word * STATE_VARIABLE_ErrSpecs_37,
  MR_Word STATE_VARIABLE_WarnSpecs_0_38,
  MR_Word * STATE_VARIABLE_WarnSpecs_39,
  MR_Word STATE_VARIABLE_InfoSpecs_0_40,
  MR_Word * STATE_VARIABLE_InfoSpecs_41);

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_pragma_struct_reuse_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_pragma_struct_reuse_5_p_0(
  MR_Word ReuseInfo_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * STATE_VARIABLE_ModuleInfo_29,
  MR_Word STATE_VARIABLE_ErrSpecs_0_30,
  MR_Word * STATE_VARIABLE_ErrSpecs_31);

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_pragma_struct_sharing_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_pragma_struct_sharing_5_p_0(
  MR_Word SharingInfo_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * STATE_VARIABLE_ModuleInfo_29,
  MR_Word STATE_VARIABLE_ErrSpecs_0_30,
  MR_Word * STATE_VARIABLE_ErrSpecs_31);

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_pragma_termination2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_pragma_termination2_5_p_0(
  MR_Word Term2Info_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30,
  MR_Word STATE_VARIABLE_ErrSpecs_0_31,
  MR_Word * STATE_VARIABLE_ErrSpecs_32);

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_pragma_termination_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_pragma_termination_5_p_0(
  MR_Word TermInfo_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30,
  MR_Word STATE_VARIABLE_ErrSpecs_0_31,
  MR_Word * STATE_VARIABLE_ErrSpecs_32);

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_pragma_oisu_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_pragma_oisu_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_pragma_oisu_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_pragma_oisu_6_p_0(
  MR_Word OISUInfo_7,
  MR_Word ItemMercuryStatus_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * STATE_VARIABLE_ModuleInfo_41,
  MR_Word STATE_VARIABLE_ErrSpecs_0_42,
  MR_Word * STATE_VARIABLE_ErrSpecs_43);

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__mark_proc_as_obsolete_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__mark_proc_as_obsolete_8_p_0(
  MR_Word ObsoleteProcInfo_9,
  MR_Word PragmaStatus_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35,
  MR_Word STATE_VARIABLE_ErrSpecs_0_36,
  MR_Word * STATE_VARIABLE_ErrSpecs_37,
  MR_Word STATE_VARIABLE_WarnSpecs_0_38,
  MR_Word * STATE_VARIABLE_WarnSpecs_39);

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__mark_pred_as_obsolete_8_p_0(
  MR_Word ObsoletePredInfo_9,
  MR_Word PragmaStatus_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30,
  MR_Word STATE_VARIABLE_ErrSpecs_0_31,
  MR_Word * STATE_VARIABLE_ErrSpecs_32,
  MR_Word STATE_VARIABLE_WarnSpecs_0_33,
  MR_Word * STATE_VARIABLE_WarnSpecs_34);

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__mark_pred_ids_as_obsolete_10_p_0(
  MR_Word ObsoleteInFavourOf_1,
  MR_Word PragmaStatus_2,
  MR_Word Context_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_PredTable_0_5,
  MR_Word * STATE_VARIABLE_PredTable_6,
  MR_Word STATE_VARIABLE_ErrSpecs_0_7,
  MR_Word * STATE_VARIABLE_ErrSpecs_8,
  MR_Word STATE_VARIABLE_WarnSpecs_0_9,
  MR_Word * STATE_VARIABLE_WarnSpecs_10);

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_decl_markers_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_decl_pragmas_reuse_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_decl_pragmas_sharing_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_decl_pragmas_termination2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_decl_pragmas_termination_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_decl_pragmas_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11);


static /* final */ const MR_Box hlds__make_hlds__add_pragma_decl_scalar_common_1[56][2];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_decl_scalar_common_2[1][16];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_decl_scalar_common_3[1][7];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_decl_scalar_common_4[1][9];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_decl_scalar_common_5[2][8];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_decl_scalar_common_6[1][11];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_decl_scalar_common_7[2][6];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_decl_scalar_common_8[1][13];




static /* final */ const MR_Box hlds__make_hlds__add_pragma_decl_scalar_common_1[56][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_info_spec_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "format_call"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_decl_scalar_common_1[6])))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "duplicate"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_decl_scalar_common_1[8])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "was here."))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_decl_scalar_common_1[15])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_decl_scalar_common_1[17])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_decl_scalar_common_1[18])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The original"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_decl_scalar_common_1[19])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declarations must always be exported."))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_decl_scalar_common_1[15])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "pragma oisu"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_decl_scalar_common_1[23])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration must always be abstract exported."))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_decl_scalar_common_1[15])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_decl_scalar_common_1[27])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The type in a"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_decl_scalar_common_1[28])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Duplicate"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "oisu"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_decl_scalar_common_1[15])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In the"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "predicate specification"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "within the"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: predicate"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is undefined."))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_decl_scalar_common_1[15])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "one of"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has the wrong arity."))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Actual arity is"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "expected arity is"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[45]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_decl_scalar_common_1[46])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: ambiguous"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "name"))
  },
  /* row  51 */
  {
    ((MR_Box) ((MR_Integer) 21)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  52 */
  {
    ((MR_Box) ((MR_Integer) 20)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_decl_scalar_common_1[51])))
  },
  /* row  53 */
  {
    ((MR_Box) ((MR_Integer) 20)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  54 */
  {
    ((MR_Box) ((MR_Integer) 22)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_decl_scalar_common_1[53])))
  },
  /* row  55 */
  {
    ((MR_Box) ((MR_Integer) 22)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_decl_scalar_common_1[51])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_decl_scalar_common_2[1][16] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 13)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_decl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_decl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_decl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_decl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_decl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_info_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_decl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_info_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_decl_scalar_common_3[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_decl__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__ti_generic_arg_size_info_1list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_decl__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__ti_generic_termination_info_2unit__type_ctor_info_unit_0list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_decl_scalar_common_4[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_decl__maybe__pti_maybe_1__plain_list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_decl__maybe__pti_maybe_1__plain_list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_decl__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__ti_generic_termination_info_2unit__type_ctor_info_unit_0unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_decl_scalar_common_5[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_decl__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_decl__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_structure_sharing_domain_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_decl__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_decl__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_structure_reuse_domain_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_decl_scalar_common_6[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_decl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_decl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_decl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_decl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_decl_scalar_common_7[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_decl__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_arity_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_decl_scalar_common_8[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_decl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_decl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_decl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_decl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_decl__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_info_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_info_spec_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma_decl__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma_decl__parse_tree__prog_data_pragma__ti_generic_arg_size_info_1list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_generic_arg_size_info_1,
  { (MR_TypeInfo) (&hlds__make_hlds__add_pragma_decl__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_decl__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__ti_generic_arg_size_info_1list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma_decl__parse_tree__prog_data_pragma__ti_generic_arg_size_info_1list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__add_pragma_decl__parse_tree__prog_data_pragma__ti_generic_termination_info_2unit__type_ctor_info_unit_0list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_generic_termination_info_2,
  {
    (MR_TypeInfo) (&mercury__unit__unit__type_ctor_info_unit_0),
    (MR_TypeInfo) (&hlds__make_hlds__add_pragma_decl__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_decl__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__ti_generic_termination_info_2unit__type_ctor_info_unit_0list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma_decl__parse_tree__prog_data_pragma__ti_generic_termination_info_2unit__type_ctor_info_unit_0list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma_decl__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_decl__maybe__pti_maybe_1__plain_list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma_decl__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__add_pragma_decl__parse_tree__prog_data_pragma__ti_generic_termination_info_2unit__type_ctor_info_unit_0unit__type_ctor_info_unit_0 = {
  &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_generic_termination_info_2,
  {
    (MR_TypeInfo) (&mercury__unit__unit__type_ctor_info_unit_0),
    (MR_TypeInfo) (&mercury__unit__unit__type_ctor_info_unit_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_decl__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__ti_generic_termination_info_2unit__type_ctor_info_unit_0unit__type_ctor_info_unit_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma_decl__parse_tree__prog_data_pragma__ti_generic_termination_info_2unit__type_ctor_info_unit_0unit__type_ctor_info_unit_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma_decl__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_decl__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma_decl__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_decl__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_decl__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_arity_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0) }
};

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__IntroducedFrom__pred__add_pragma_termination2__594__1_6_p_0(
  MR_Word MaybePragmaSuccessArgSizeInfo_10,
  MR_Word MaybePragmaFailureArgSizeInfo_11,
  MR_Word MaybePragmaTerminationInfo_12,
  MR_Word Context_13,
  MR_Word LambdaHeadVar__1_36,
  MR_Word * LambdaHeadVar__2_37)
{
  MR_Word MaybeTerminationInfo_26;
  MR_Word STATE_VARIABLE_TermInfo_1_38;
  MR_Word STATE_VARIABLE_TermInfo_2_39;
  MR_Word STATE_VARIABLE_TermInfo_3_40;
  MR_Word STATE_VARIABLE_TermInfo_4_41;

  transform_hlds__term_constr_util__add_context_to_constr_termination_info_3_p_0(MaybePragmaTerminationInfo_12, Context_13, &MaybeTerminationInfo_26);
  hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(LambdaHeadVar__1_36, &STATE_VARIABLE_TermInfo_1_38);
  transform_hlds__term_constr_main_types__term2_info_set_import_success_3_p_0(MaybePragmaSuccessArgSizeInfo_10, STATE_VARIABLE_TermInfo_1_38, &STATE_VARIABLE_TermInfo_2_39);
  transform_hlds__term_constr_main_types__term2_info_set_import_failure_3_p_0(MaybePragmaFailureArgSizeInfo_11, STATE_VARIABLE_TermInfo_2_39, &STATE_VARIABLE_TermInfo_3_40);
  transform_hlds__term_constr_main_types__term2_info_set_term_status_3_p_0(MaybeTerminationInfo_26, STATE_VARIABLE_TermInfo_3_40, &STATE_VARIABLE_TermInfo_4_41);
  hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(STATE_VARIABLE_TermInfo_4_41, LambdaHeadVar__1_36, LambdaHeadVar__2_37);
}

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__IntroducedFrom__pred__add_pragma_termination__560__1_4_p_0(
  MR_Word MaybeArgSizeInfo_22,
  MR_Word MaybeTerminationInfo_23,
  MR_Word LambdaHeadVar__1_36,
  MR_Word * LambdaHeadVar__2_37)
{
  MR_Word ProcInfo1_27;

  hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(MaybeArgSizeInfo_22, LambdaHeadVar__1_36, &ProcInfo1_27);
  hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(MaybeTerminationInfo_23, ProcInfo1_27, LambdaHeadVar__2_37);
}

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__IntroducedFrom__pred__mark_proc_as_obsolete__286__1_3_p_0(
  MR_Word ObsoleteInFavourOf_15,
  MR_Word LambdaHeadVar__1_48,
  MR_Word * LambdaHeadVar__2_49)
{
  MR_Word MaybeObsoleteInFavourOf0_30;
  MR_Word MaybeObsoleteInFavourOf_31;

  hlds__hlds_pred__proc_info_get_obsolete_in_favour_of_2_p_0(LambdaHeadVar__1_48, &MaybeObsoleteInFavourOf0_30);
  if ((MaybeObsoleteInFavourOf0_30 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeObsoleteInFavourOf_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeObsoleteInFavourOf_31, 0) = ((MR_Box) (ObsoleteInFavourOf_15));
    }
  else
  {
    MR_Word ObsoleteInFavourOf0_32 = ((MR_Word) ((MR_hl_field(1, MaybeObsoleteInFavourOf0_30, 0))));
    MR_Word Var_50;

    Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), ObsoleteInFavourOf0_32, ObsoleteInFavourOf_15);
    {
      MaybeObsoleteInFavourOf_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeObsoleteInFavourOf_31, 0) = ((MR_Box) (Var_50));
    }
  }
  hlds__hlds_pred__proc_info_set_obsolete_in_favour_of_3_p_0(MaybeObsoleteInFavourOf_31, LambdaHeadVar__1_48, LambdaHeadVar__2_49);
}

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_decl_marker_8_p_0(
  MR_Word ItemMercuryStatus_9,
  MR_Word DeclMarker_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * STATE_VARIABLE_ModuleInfo_19,
  MR_Word STATE_VARIABLE_ErrSpecs_0_20,
  MR_Word * STATE_VARIABLE_ErrSpecs_21,
  MR_Word STATE_VARIABLE_WarnSpecs_0_22,
  MR_Word * STATE_VARIABLE_WarnSpecs_23)
{
  MR_Word MarkerKind_14 = ((MR_Unsigned) ((MR_hl_field(0, DeclMarker_10, 0))) & (MR_Integer) 3);
  MR_Word PFUNameArity_15 = ((MR_Word) ((MR_hl_field(0, DeclMarker_10, 1))));
  MR_Word Context_16 = ((MR_Word) ((MR_hl_field(0, DeclMarker_10, 2))));

  switch (MarkerKind_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      hlds__make_hlds__add_pragma_util__add_pred_marker_13_p_0(PFUNameArity_15, (MR_String) "check_termination", (MR_Integer) 0, ItemMercuryStatus_9, Context_16, (MR_Integer) 22, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_decl_scalar_common_1[52])), STATE_VARIABLE_ModuleInfo_0_18, STATE_VARIABLE_ModuleInfo_19, STATE_VARIABLE_ErrSpecs_0_20, STATE_VARIABLE_ErrSpecs_21, STATE_VARIABLE_WarnSpecs_0_22, STATE_VARIABLE_WarnSpecs_23);
      break;
    case (MR_Integer) 1:
      hlds__make_hlds__add_pragma_util__add_pred_marker_13_p_0(PFUNameArity_15, (MR_String) "does_not_terminate", (MR_Integer) 0, ItemMercuryStatus_9, Context_16, (MR_Integer) 21, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_decl_scalar_common_1[54])), STATE_VARIABLE_ModuleInfo_0_18, STATE_VARIABLE_ModuleInfo_19, STATE_VARIABLE_ErrSpecs_0_20, STATE_VARIABLE_ErrSpecs_21, STATE_VARIABLE_WarnSpecs_0_22, STATE_VARIABLE_WarnSpecs_23);
      break;
    case (MR_Integer) 0:
      hlds__make_hlds__add_pragma_util__add_pred_marker_13_p_0(PFUNameArity_15, (MR_String) "terminates", (MR_Integer) 0, ItemMercuryStatus_9, Context_16, (MR_Integer) 20, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_decl_scalar_common_1[55])), STATE_VARIABLE_ModuleInfo_0_18, STATE_VARIABLE_ModuleInfo_19, STATE_VARIABLE_ErrSpecs_0_20, STATE_VARIABLE_ErrSpecs_21, STATE_VARIABLE_WarnSpecs_0_22, STATE_VARIABLE_WarnSpecs_23);
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__lookup_pred_orig_arity_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word PredId_5,
  MR_Word * Piece_6)
{
  MR_Word PredInfo_7;
  MR_Integer OrigArity_8;
  MR_Word Var_9;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_4, PredId_5, &PredInfo_7);
  hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_7, &Var_9);
  OrigArity_8 = (MR_Integer) (Var_9);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *Piece_6 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, base, 1) = ((MR_Box) (OrigArity_8));
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__find_unique_pred_for_oisu_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Piece_6;

  hlds__make_hlds__add_pragma_decl__lookup_pred_orig_arity_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Piece_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Piece_6));
}

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__find_unique_pred_for_oisu_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word Context_12,
  MR_Word TypeCtor_13,
  MR_String Kind_14,
  MR_Word PredSpec_15,
  MR_Word * PredId_16,
  MR_Integer STATE_VARIABLE_SeqNum_0_42,
  MR_Integer * STATE_VARIABLE_SeqNum_43,
  MR_Word STATE_VARIABLE_ErrSpecs_0_44,
  MR_Word * STATE_VARIABLE_ErrSpecs_45)
{
  MR_Word PredicateTable_19;
  MR_Word PredOrFunc_20;
  MR_Word PredName_21;
  MR_Word UserArity_22;
  MR_Word PredFormArity_23;
  MR_Word PredIds_24;

  hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_11, &PredicateTable_19);
  PredOrFunc_20 = ((MR_Unsigned) ((MR_hl_field(0, PredSpec_15, 0))) & (MR_Integer) 1);
  PredName_21 = ((MR_Word) ((MR_hl_field(0, PredSpec_15, 1))));
  UserArity_22 = ((MR_Word) ((MR_hl_field(0, PredSpec_15, 2))));
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_0(PredOrFunc_20, UserArity_22, &PredFormArity_23);
  hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredicateTable_19, (MR_Integer) 0, PredOrFunc_20, PredName_21, PredFormArity_23, &PredIds_24);
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
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_57;
      MR_Word Var_60;
      MR_Word Var_63;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_71;
      MR_Word Var_73;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Var_78;

      {
        Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Var_51, 1) = ((MR_Box) (STATE_VARIABLE_SeqNum_0_42));
      }
      {
        Var_53 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_53, 0) = ((MR_Box) (Kind_14));
      }
      {
        Var_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_67, 0) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(3, Var_67, 1) = ((MR_Box) (TypeCtor_13));
      }
      {
        Var_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_78, 0) = ((MR_Box) (PredName_21));
        MR_hl_field(0, Var_78, 1) = ((MR_Box) (UserArityInt_26));
      }
      {
        Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 14U));
        MR_hl_field(3, Var_77, 1) = ((MR_Box) (Var_78));
      }
      {
        Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
        MR_hl_field(1, Var_76, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_decl_scalar_common_1[41])));
      }
      {
        Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_73, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[39])));
        MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_76));
      }
      {
        Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_71, 0) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_73));
      }
      {
        Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_68, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[38])));
        MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_71));
      }
      {
        Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
        MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_68));
      }
      {
        Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_63, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[33])));
        MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_66));
      }
      {
        Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_60, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[24])));
        MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_63));
      }
      {
        Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_57, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[37])));
        MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_60));
      }
      {
        Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_54, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[36])));
        MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_57));
      }
      {
        Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
        MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_54));
      }
      {
        Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
        MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_52));
      }
      {
        Pieces_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_27, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[35])));
        MR_hl_field(1, Pieces_27, 1) = ((MR_Box) (Var_50));
      }
      {
        Spec_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_28, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_decl.find_unique_pred_for_oisu\'/10"));
        MR_hl_field(0, Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_28, 2) = ((MR_Box) ((MR_Unsigned) 48U));
        MR_hl_field(0, Spec_28, 3) = ((MR_Box) (Context_12));
        MR_hl_field(0, Spec_28, 4) = ((MR_Box) (Pieces_27));
      }
    }
    else
    {
      MR_Word ArityPieces_31;
      MR_Word SortedArityPieces_32;
      MR_Word ExpArities_34;
      MR_Word Var_88;
      MR_Word Var_97;
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word Var_102;
      MR_Word Var_103;
      MR_Word Var_104;
      MR_Word Var_107;
      MR_Word Var_110;
      MR_Word Var_113;
      MR_Word Var_116;
      MR_Word Var_117;
      MR_Word Var_118;
      MR_Word Var_121;
      MR_Word Var_123;
      MR_Word Var_126;
      MR_Word Var_127;
      MR_Word Var_128;
      MR_Word Var_129;
      MR_Word Var_132;
      MR_Word Var_135;
      MR_Word Var_136;
      MR_Word Var_144;
      MR_Word Pieces_208;

      {
        Var_88 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_88, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_decl_scalar_common_7[1]));
        MR_hl_field(0, Var_88, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_decl__find_unique_pred_for_oisu_10_p_0_1));
        MR_hl_field(0, Var_88, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_88, 3) = ((MR_Box) (ModuleInfo_11));
      }
      mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_88, LooseArityPredIds_25, &ArityPieces_31);
      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ArityPieces_31, &SortedArityPieces_32);
      if ((SortedArityPieces_32 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_pragma_decl.find_unique_pred_for_oisu\'/10", (MR_String) "no arity pieces");
          return;
        }
      else
      {
        MR_Word Var_216 = ((MR_Word) ((MR_hl_field(1, SortedArityPieces_32, 1))));

        if ((Var_216 == (MR_Word) ((MR_Unsigned) 0U)))
          ExpArities_34 = SortedArityPieces_32;
        else
        {
          MR_Word Var_95;

          Var_95 = parse_tree__error_spec__piece_list_to_pieces_2_f_0((MR_String) "and", SortedArityPieces_32);
          {
            ExpArities_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ExpArities_34, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[42])));
            MR_hl_field(1, ExpArities_34, 1) = ((MR_Box) (Var_95));
          }
        }
      }
      {
        Var_101 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_101, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Var_101, 1) = ((MR_Box) (STATE_VARIABLE_SeqNum_0_42));
      }
      {
        Var_103 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_103, 0) = ((MR_Box) (Kind_14));
      }
      {
        Var_117 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_117, 0) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(3, Var_117, 1) = ((MR_Box) (TypeCtor_13));
      }
      {
        Var_128 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_128, 0) = ((MR_Box) (PredName_21));
        MR_hl_field(0, Var_128, 1) = ((MR_Box) (UserArityInt_26));
      }
      {
        Var_127 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_127, 0) = ((MR_Box) ((MR_Unsigned) 14U));
        MR_hl_field(3, Var_127, 1) = ((MR_Box) (Var_128));
      }
      {
        Var_136 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_136, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_136, 1) = ((MR_Box) (UserArityInt_26));
      }
      {
        Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_135, 0) = ((MR_Box) (Var_136));
        MR_hl_field(1, Var_135, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_decl_scalar_common_1[48])));
      }
      {
        Var_132 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_132, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[44])));
        MR_hl_field(1, Var_132, 1) = ((MR_Box) (Var_135));
      }
      {
        Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_129, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[43])));
        MR_hl_field(1, Var_129, 1) = ((MR_Box) (Var_132));
      }
      {
        Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_126, 0) = ((MR_Box) (Var_127));
        MR_hl_field(1, Var_126, 1) = ((MR_Box) (Var_129));
      }
      {
        Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_123, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[39])));
        MR_hl_field(1, Var_123, 1) = ((MR_Box) (Var_126));
      }
      {
        Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_121, 0) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(1, Var_121, 1) = ((MR_Box) (Var_123));
      }
      {
        Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_118, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[38])));
        MR_hl_field(1, Var_118, 1) = ((MR_Box) (Var_121));
      }
      {
        Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_116, 0) = ((MR_Box) (Var_117));
        MR_hl_field(1, Var_116, 1) = ((MR_Box) (Var_118));
      }
      {
        Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_113, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[33])));
        MR_hl_field(1, Var_113, 1) = ((MR_Box) (Var_116));
      }
      {
        Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_110, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[24])));
        MR_hl_field(1, Var_110, 1) = ((MR_Box) (Var_113));
      }
      {
        Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_107, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[37])));
        MR_hl_field(1, Var_107, 1) = ((MR_Box) (Var_110));
      }
      {
        Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_104, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[36])));
        MR_hl_field(1, Var_104, 1) = ((MR_Box) (Var_107));
      }
      {
        Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_102, 0) = ((MR_Box) (Var_103));
        MR_hl_field(1, Var_102, 1) = ((MR_Box) (Var_104));
      }
      {
        Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_100, 0) = ((MR_Box) (Var_101));
        MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_102));
      }
      {
        Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_97, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[35])));
        MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_100));
      }
      Var_144 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ExpArities_34, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_decl_scalar_common_1[34])));
      Pieces_208 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_97, Var_144);
      {
        Spec_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_28, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_decl.find_unique_pred_for_oisu\'/10"));
        MR_hl_field(0, Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_28, 2) = ((MR_Box) ((MR_Unsigned) 48U));
        MR_hl_field(0, Spec_28, 3) = ((MR_Box) (Context_12));
        MR_hl_field(0, Spec_28, 4) = ((MR_Box) (Pieces_208));
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_ErrSpecs_45 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_28));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_44));
    }
    *PredId_16 = hlds__hlds_pred__invalid_pred_id_0_f_0();
  }
  else
  {
    MR_Word Var_218 = ((MR_Word) ((MR_hl_field(1, PredIds_24, 1))));
    MR_Word Var_219 = ((MR_Word) ((MR_hl_field(1, PredIds_24, 0))));

    if ((Var_218 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *PredId_16 = Var_219;
      *STATE_VARIABLE_ErrSpecs_45 = STATE_VARIABLE_ErrSpecs_0_44;
    }
    else
    {
      MR_String PredOrFuncStr_41;
      MR_Word Var_159;
      MR_Word Var_160;
      MR_Word Var_161;
      MR_Word Var_162;
      MR_Word Var_163;
      MR_Word Var_166;
      MR_Word Var_169;
      MR_Word Var_172;
      MR_Word Var_175;
      MR_Word Var_178;
      MR_Word Var_179;
      MR_Word Var_180;
      MR_Word Var_183;
      MR_Word Var_185;
      MR_Word Var_188;
      MR_Word Var_189;
      MR_Word Var_190;
      MR_Word Var_193;
      MR_Word Var_194;
      MR_Word Var_195;
      MR_Integer UserArityInt_209 = (MR_Integer) (UserArity_22);
      MR_Word Pieces_210;
      MR_Word Spec_211;

      PredOrFuncStr_41 = mdbcomp__prim_data__pred_or_func_to_full_str_1_f_0(PredOrFunc_20);
      {
        Var_160 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_160, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Var_160, 1) = ((MR_Box) (STATE_VARIABLE_SeqNum_0_42));
      }
      {
        Var_162 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_162, 0) = ((MR_Box) (Kind_14));
      }
      {
        Var_179 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_179, 0) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(3, Var_179, 1) = ((MR_Box) (TypeCtor_13));
      }
      {
        Var_189 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_189, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_189, 1) = ((MR_Box) (PredOrFuncStr_41));
      }
      {
        Var_195 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_195, 0) = ((MR_Box) (PredName_21));
        MR_hl_field(0, Var_195, 1) = ((MR_Box) (UserArityInt_209));
      }
      {
        Var_194 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_194, 0) = ((MR_Box) ((MR_Unsigned) 14U));
        MR_hl_field(3, Var_194, 1) = ((MR_Box) (Var_195));
      }
      {
        Var_193 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_193, 0) = ((MR_Box) (Var_194));
        MR_hl_field(1, Var_193, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_decl_scalar_common_1[34])));
      }
      {
        Var_190 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_190, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[50])));
        MR_hl_field(1, Var_190, 1) = ((MR_Box) (Var_193));
      }
      {
        Var_188 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_188, 0) = ((MR_Box) (Var_189));
        MR_hl_field(1, Var_188, 1) = ((MR_Box) (Var_190));
      }
      {
        Var_185 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_185, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[49])));
        MR_hl_field(1, Var_185, 1) = ((MR_Box) (Var_188));
      }
      {
        Var_183 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_183, 0) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(1, Var_183, 1) = ((MR_Box) (Var_185));
      }
      {
        Var_180 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_180, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[38])));
        MR_hl_field(1, Var_180, 1) = ((MR_Box) (Var_183));
      }
      {
        Var_178 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_178, 0) = ((MR_Box) (Var_179));
        MR_hl_field(1, Var_178, 1) = ((MR_Box) (Var_180));
      }
      {
        Var_175 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_175, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[11])));
        MR_hl_field(1, Var_175, 1) = ((MR_Box) (Var_178));
      }
      {
        Var_172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_172, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[5])));
        MR_hl_field(1, Var_172, 1) = ((MR_Box) (Var_175));
      }
      {
        Var_169 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_169, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[32])));
        MR_hl_field(1, Var_169, 1) = ((MR_Box) (Var_172));
      }
      {
        Var_166 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_166, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[37])));
        MR_hl_field(1, Var_166, 1) = ((MR_Box) (Var_169));
      }
      {
        Var_163 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_163, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[36])));
        MR_hl_field(1, Var_163, 1) = ((MR_Box) (Var_166));
      }
      {
        Var_161 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_161, 0) = ((MR_Box) (Var_162));
        MR_hl_field(1, Var_161, 1) = ((MR_Box) (Var_163));
      }
      {
        Var_159 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_159, 0) = ((MR_Box) (Var_160));
        MR_hl_field(1, Var_159, 1) = ((MR_Box) (Var_161));
      }
      {
        Pieces_210 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_210, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[35])));
        MR_hl_field(1, Pieces_210, 1) = ((MR_Box) (Var_159));
      }
      {
        Spec_211 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_211, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_decl.find_unique_pred_for_oisu\'/10"));
        MR_hl_field(0, Spec_211, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_211, 2) = ((MR_Box) ((MR_Unsigned) 48U));
        MR_hl_field(0, Spec_211, 3) = ((MR_Box) (Context_12));
        MR_hl_field(0, Spec_211, 4) = ((MR_Box) (Pieces_210));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_ErrSpecs_45 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_211));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_44));
      }
      *PredId_16 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    }
  }
  *STATE_VARIABLE_SeqNum_43 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_SeqNum_0_42 + (MR_Unsigned) 1);
}

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_decl_pragma_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word ItemMercuryStatus_15,
  MR_Word Pragma_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_32,
  MR_Word * STATE_VARIABLE_ModuleInfo_33,
  MR_Word STATE_VARIABLE_QualInfo_0_34,
  MR_Word * STATE_VARIABLE_QualInfo_35,
  MR_Word STATE_VARIABLE_ErrSpecs_0_36,
  MR_Word * STATE_VARIABLE_ErrSpecs_37,
  MR_Word STATE_VARIABLE_WarnSpecs_0_38,
  MR_Word * STATE_VARIABLE_WarnSpecs_39,
  MR_Word STATE_VARIABLE_InfoSpecs_0_40,
  MR_Word * STATE_VARIABLE_InfoSpecs_41)
{
  switch (MR_tag((MR_Word) Pragma_16)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ObsoletePredInfo_22 = (MR_Word) ((MR_Word) (Pragma_16));

        hlds__make_hlds__add_pragma_decl__mark_pred_as_obsolete_8_p_0(ObsoletePredInfo_22, ItemMercuryStatus_15, STATE_VARIABLE_ModuleInfo_0_32, STATE_VARIABLE_ModuleInfo_33, STATE_VARIABLE_ErrSpecs_0_36, STATE_VARIABLE_ErrSpecs_37, STATE_VARIABLE_WarnSpecs_0_38, STATE_VARIABLE_WarnSpecs_39);
        *STATE_VARIABLE_QualInfo_35 = STATE_VARIABLE_QualInfo_0_34;
        *STATE_VARIABLE_InfoSpecs_41 = STATE_VARIABLE_InfoSpecs_0_40;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ObsoleteProcInfo_23 = (MR_Word) (MR_body((MR_Word) (Pragma_16), (MR_Integer) 1));

        hlds__make_hlds__add_pragma_decl__mark_proc_as_obsolete_8_p_0(ObsoleteProcInfo_23, ItemMercuryStatus_15, STATE_VARIABLE_ModuleInfo_0_32, STATE_VARIABLE_ModuleInfo_33, STATE_VARIABLE_ErrSpecs_0_36, STATE_VARIABLE_ErrSpecs_37, STATE_VARIABLE_WarnSpecs_0_38, STATE_VARIABLE_WarnSpecs_39);
        *STATE_VARIABLE_QualInfo_35 = STATE_VARIABLE_QualInfo_0_34;
        *STATE_VARIABLE_InfoSpecs_41 = STATE_VARIABLE_InfoSpecs_0_40;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word FormatCallInfo_24 = (MR_Word) (MR_body((MR_Word) (Pragma_16), (MR_Integer) 2));
        MR_Word PredSpec_42 = ((MR_Word) ((MR_hl_field(0, FormatCallInfo_24, 0))));
        MR_Word OoMArgSpecs_43 = ((MR_Word) ((MR_hl_field(0, FormatCallInfo_24, 1))));
        MR_Word Context_44 = ((MR_Word) ((MR_hl_field(0, FormatCallInfo_24, 2))));
        MR_Word PredOrFunc_46 = ((MR_Unsigned) ((MR_hl_field(0, PredSpec_42, 0))) & (MR_Integer) 1);
        MR_Word SymName_47 = ((MR_Word) ((MR_hl_field(0, PredSpec_42, 1))));
        MR_Word UserArity_48 = ((MR_Word) ((MR_hl_field(0, PredSpec_42, 2))));
        MR_Word MaybePredId_49;

        hlds__make_hlds__add_pragma_util__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_32, (MR_Integer) 0, (MR_Integer) 1, Context_44, (MR_String) "format_call", PredOrFunc_46, SymName_47, UserArity_48, &MaybePredId_49);
        if (((MR_tag((MR_Word) MaybePredId_49)) == (MR_Integer) 0))
        {
          MR_Word IdErrSpecs_50 = ((MR_Word) ((MR_hl_field(0, MaybePredId_49, 0))));

          *STATE_VARIABLE_ErrSpecs_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), IdErrSpecs_50, STATE_VARIABLE_ErrSpecs_0_36);
          *STATE_VARIABLE_ModuleInfo_33 = STATE_VARIABLE_ModuleInfo_0_32;
          *STATE_VARIABLE_WarnSpecs_39 = STATE_VARIABLE_WarnSpecs_0_38;
        }
        else
        {
          MR_Word PredId_51 = ((MR_Word) ((MR_hl_field(1, MaybePredId_49, 0))));
          MR_Word PredIdTable0_52;
          MR_Word PredInfo0_53;
          MR_Word MaybeFormatCall0_54;
          MR_Word STATE_VARIABLE_ErrSpecs_2_72;
          MR_Box conv0_PredInfo0_53;

          hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_32, &PredIdTable0_52);
          mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable0_52, ((MR_Box) (PredId_51)), &conv0_PredInfo0_53);
          PredInfo0_53 = ((MR_Word) (conv0_PredInfo0_53));
          hlds__make_hlds__add_pragma_util__check_pragma_status_9_p_0((MR_String) "format_call", (MR_Integer) 0, ItemMercuryStatus_15, Context_44, PredInfo0_53, STATE_VARIABLE_ErrSpecs_0_36, &STATE_VARIABLE_ErrSpecs_2_72, STATE_VARIABLE_WarnSpecs_0_38, STATE_VARIABLE_WarnSpecs_39);
          hlds__hlds_pred__pred_info_get_format_call_info_2_p_0(PredInfo0_53, &MaybeFormatCall0_54);
          if ((MaybeFormatCall0_54 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word FormatCall_55;
            MR_Word PredInfo_56;
            MR_Word PredIdTable_57;
            MR_Word FCPreds0_58;
            MR_Word FCPreds_59;
            MR_Word Var_73;
            MR_Word STATE_VARIABLE_ModuleInfo_1_74;

            {
              FormatCall_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, FormatCall_55, 0) = ((MR_Box) (Context_44));
              MR_hl_field(0, FormatCall_55, 1) = ((MR_Box) (OoMArgSpecs_43));
            }
            {
              Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_73, 0) = ((MR_Box) (FormatCall_55));
            }
            hlds__hlds_pred__pred_info_set_format_call_info_3_p_0(Var_73, PredInfo0_53, &PredInfo_56);
            mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_51)), ((MR_Box) (PredInfo_56)), PredIdTable0_52, &PredIdTable_57);
            hlds__hlds_module__module_info_set_pred_id_table_3_p_0(PredIdTable_57, STATE_VARIABLE_ModuleInfo_0_32, &STATE_VARIABLE_ModuleInfo_1_74);
            hlds__hlds_module__module_info_get_format_call_pragma_preds_2_p_0(STATE_VARIABLE_ModuleInfo_1_74, &FCPreds0_58);
            mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_51)), FCPreds0_58, &FCPreds_59);
            hlds__hlds_module__module_info_set_format_call_pragma_preds_3_p_0(FCPreds_59, STATE_VARIABLE_ModuleInfo_1_74, STATE_VARIABLE_ModuleInfo_33);
            *STATE_VARIABLE_ErrSpecs_37 = STATE_VARIABLE_ErrSpecs_2_72;
          }
          else
          {
            MR_Word OldContext_60;
            MR_Word FirstPieces_62;
            MR_Word FirstMsg_63;
            MR_Word SecondMsg_65;
            MR_Word Spec_66;
            MR_Word Var_75 = ((MR_Word) ((MR_hl_field(1, MaybeFormatCall0_54, 0))));
            MR_Word Var_80;
            MR_Word Var_81;
            MR_Word Var_83;
            MR_Word Var_88;
            MR_Word Var_89;
            MR_Word Var_90;
            MR_Word Var_91;
            MR_Word Var_102;
            MR_Word Var_103;

            OldContext_60 = ((MR_Word) ((MR_hl_field(0, Var_75, 0))));
            Var_81 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_decl_scalar_common_1[10])));
            {
              Var_91 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_91, 0) = ((MR_Box) ((MR_Unsigned) 19U));
              MR_hl_field(3, Var_91, 1) = ((MR_Box) (PredSpec_42));
            }
            {
              Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_90, 0) = ((MR_Box) (Var_91));
              MR_hl_field(1, Var_90, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_decl_scalar_common_1[14])));
            }
            Var_89 = parse_tree__error_spec__color_as_subject_1_f_0(Var_90);
            Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_89, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_decl_scalar_common_1[15])));
            Var_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_decl_scalar_common_1[12])), Var_88);
            Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_81, Var_83);
            FirstPieces_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_decl_scalar_common_1[4])), Var_80);
            {
              FirstMsg_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, FirstMsg_63, 0) = ((MR_Box) (Context_44));
              MR_hl_field(0, FirstMsg_63, 1) = ((MR_Box) (FirstPieces_62));
            }
            {
              SecondMsg_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SecondMsg_65, 0) = ((MR_Box) (OldContext_60));
              MR_hl_field(0, SecondMsg_65, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_decl_scalar_common_1[21])));
            }
            {
              Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_103, 0) = ((MR_Box) (SecondMsg_65));
              MR_hl_field(1, Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_102, 0) = ((MR_Box) (FirstMsg_63));
              MR_hl_field(1, Var_102, 1) = ((MR_Box) (Var_103));
            }
            {
              Spec_66 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Spec_66, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_decl.mark_pred_as_format_call\'/8"));
              MR_hl_field(2, Spec_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(2, Spec_66, 2) = ((MR_Box) ((MR_Unsigned) 48U));
              MR_hl_field(2, Spec_66, 3) = ((MR_Box) (Var_102));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_ErrSpecs_37 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Spec_66));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_2_72));
            }
            *STATE_VARIABLE_ModuleInfo_33 = STATE_VARIABLE_ModuleInfo_0_32;
          }
        }
        *STATE_VARIABLE_QualInfo_35 = STATE_VARIABLE_QualInfo_0_34;
        *STATE_VARIABLE_InfoSpecs_41 = STATE_VARIABLE_InfoSpecs_0_40;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Pragma_16, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeSpecConstrInfo_25 = ((MR_Word) ((MR_hl_field(3, Pragma_16, 1))));

            hlds__make_hlds__add_pragma_type_spec_constr__add_pragma_type_spec_constr_12_p_0(ProgressStream_14, TypeSpecConstrInfo_25, STATE_VARIABLE_ModuleInfo_0_32, STATE_VARIABLE_ModuleInfo_33, STATE_VARIABLE_QualInfo_0_34, STATE_VARIABLE_QualInfo_35, STATE_VARIABLE_ErrSpecs_0_36, STATE_VARIABLE_ErrSpecs_37, STATE_VARIABLE_WarnSpecs_0_38, STATE_VARIABLE_WarnSpecs_39, STATE_VARIABLE_InfoSpecs_0_40, STATE_VARIABLE_InfoSpecs_41);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeSpecInfo_26 = ((MR_Word) ((MR_hl_field(3, Pragma_16, 1))));

            hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_9_p_0(TypeSpecInfo_26, STATE_VARIABLE_ModuleInfo_0_32, STATE_VARIABLE_ModuleInfo_33, STATE_VARIABLE_QualInfo_0_34, STATE_VARIABLE_QualInfo_35, STATE_VARIABLE_ErrSpecs_0_36, STATE_VARIABLE_ErrSpecs_37, STATE_VARIABLE_WarnSpecs_0_38, STATE_VARIABLE_WarnSpecs_39);
            *STATE_VARIABLE_InfoSpecs_41 = STATE_VARIABLE_InfoSpecs_0_40;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word OISUInfo_27 = ((MR_Word) ((MR_hl_field(3, Pragma_16, 1))));

            hlds__make_hlds__add_pragma_decl__add_pragma_oisu_6_p_0(OISUInfo_27, ItemMercuryStatus_15, STATE_VARIABLE_ModuleInfo_0_32, STATE_VARIABLE_ModuleInfo_33, STATE_VARIABLE_ErrSpecs_0_36, STATE_VARIABLE_ErrSpecs_37);
            *STATE_VARIABLE_QualInfo_35 = STATE_VARIABLE_QualInfo_0_34;
            *STATE_VARIABLE_WarnSpecs_39 = STATE_VARIABLE_WarnSpecs_0_38;
            *STATE_VARIABLE_InfoSpecs_41 = STATE_VARIABLE_InfoSpecs_0_40;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word TermInfo_28 = ((MR_Word) ((MR_hl_field(3, Pragma_16, 1))));

            hlds__make_hlds__add_pragma_decl__add_pragma_termination_5_p_0(TermInfo_28, STATE_VARIABLE_ModuleInfo_0_32, STATE_VARIABLE_ModuleInfo_33, STATE_VARIABLE_ErrSpecs_0_36, STATE_VARIABLE_ErrSpecs_37);
            *STATE_VARIABLE_QualInfo_35 = STATE_VARIABLE_QualInfo_0_34;
            *STATE_VARIABLE_WarnSpecs_39 = STATE_VARIABLE_WarnSpecs_0_38;
            *STATE_VARIABLE_InfoSpecs_41 = STATE_VARIABLE_InfoSpecs_0_40;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Term2Info_29 = ((MR_Word) ((MR_hl_field(3, Pragma_16, 1))));

            hlds__make_hlds__add_pragma_decl__add_pragma_termination2_5_p_0(Term2Info_29, STATE_VARIABLE_ModuleInfo_0_32, STATE_VARIABLE_ModuleInfo_33, STATE_VARIABLE_ErrSpecs_0_36, STATE_VARIABLE_ErrSpecs_37);
            *STATE_VARIABLE_QualInfo_35 = STATE_VARIABLE_QualInfo_0_34;
            *STATE_VARIABLE_WarnSpecs_39 = STATE_VARIABLE_WarnSpecs_0_38;
            *STATE_VARIABLE_InfoSpecs_41 = STATE_VARIABLE_InfoSpecs_0_40;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word SharingInfo_30 = ((MR_Word) ((MR_hl_field(3, Pragma_16, 1))));

            hlds__make_hlds__add_pragma_decl__add_pragma_struct_sharing_5_p_0(SharingInfo_30, STATE_VARIABLE_ModuleInfo_0_32, STATE_VARIABLE_ModuleInfo_33, STATE_VARIABLE_ErrSpecs_0_36, STATE_VARIABLE_ErrSpecs_37);
            *STATE_VARIABLE_QualInfo_35 = STATE_VARIABLE_QualInfo_0_34;
            *STATE_VARIABLE_WarnSpecs_39 = STATE_VARIABLE_WarnSpecs_0_38;
            *STATE_VARIABLE_InfoSpecs_41 = STATE_VARIABLE_InfoSpecs_0_40;
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word ReuseInfo_31 = ((MR_Word) ((MR_hl_field(3, Pragma_16, 1))));

            hlds__make_hlds__add_pragma_decl__add_pragma_struct_reuse_5_p_0(ReuseInfo_31, STATE_VARIABLE_ModuleInfo_0_32, STATE_VARIABLE_ModuleInfo_33, STATE_VARIABLE_ErrSpecs_0_36, STATE_VARIABLE_ErrSpecs_37);
            *STATE_VARIABLE_QualInfo_35 = STATE_VARIABLE_QualInfo_0_34;
            *STATE_VARIABLE_WarnSpecs_39 = STATE_VARIABLE_WarnSpecs_0_38;
            *STATE_VARIABLE_InfoSpecs_41 = STATE_VARIABLE_InfoSpecs_0_40;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_pragma_struct_reuse_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__5_5;

  hlds__hlds_pred__proc_info_set_imported_structure_reuse_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
}

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_pragma_struct_reuse_5_p_0(
  MR_Word ReuseInfo_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * STATE_VARIABLE_ModuleInfo_29,
  MR_Word STATE_VARIABLE_ErrSpecs_0_30,
  MR_Word * STATE_VARIABLE_ErrSpecs_31)
{
  MR_Word PredNameModesPF_9 = ((MR_Word) ((MR_hl_field(0, ReuseInfo_6, 0))));
  MR_Word HeadVars_10 = ((MR_Word) ((MR_hl_field(0, ReuseInfo_6, 1))));
  MR_Word Types_11 = ((MR_Word) ((MR_hl_field(0, ReuseInfo_6, 2))));
  MR_Word MaybeReuseDomain_14 = ((MR_Word) ((MR_hl_field(0, ReuseInfo_6, 5))));
  MR_Word Context_15 = ((MR_Word) ((MR_hl_field(0, ReuseInfo_6, 6))));

  if ((MaybeReuseDomain_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_ModuleInfo_29 = STATE_VARIABLE_ModuleInfo_0_28;
    *STATE_VARIABLE_ErrSpecs_31 = STATE_VARIABLE_ErrSpecs_0_30;
  }
  else
  {
    MR_Word ReuseDomain_17 = ((MR_Word) ((MR_hl_field(1, MaybeReuseDomain_14, 0))));
    MR_Word PredOrFunc_18 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF_9, 0))) & (MR_Integer) 1);
    MR_Word SymName_19 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_9, 1))));
    MR_Word Modes_20 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_9, 2))));
    MR_Integer PredFormArityInt_21;
    MR_Word UserArity_22;
    MR_Word MaybePredId_23;
    MR_Word Var_32;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_20, &PredFormArityInt_21);
    Var_32 = (MR_Word) (PredFormArityInt_21);
    parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_18, &UserArity_22, Var_32);
    hlds__make_hlds__add_pragma_util__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_28, (MR_Integer) 0, (MR_Integer) 0, Context_15, (MR_String) "structure_reuse", PredOrFunc_18, SymName_19, UserArity_22, &MaybePredId_23);
    if (((MR_tag((MR_Word) MaybePredId_23)) == (MR_Integer) 0))
    {
      MR_Word Specs_27 = ((MR_Word) ((MR_hl_field(0, MaybePredId_23, 0))));

      *STATE_VARIABLE_ErrSpecs_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Specs_27, STATE_VARIABLE_ErrSpecs_0_30);
      *STATE_VARIABLE_ModuleInfo_29 = STATE_VARIABLE_ModuleInfo_0_28;
    }
    else
    {
      MR_Word PredId_24 = ((MR_Word) ((MR_hl_field(1, MaybePredId_23, 0))));
      MR_Word PFNameArity_25;
      MR_Word ProcTransform_26;

      {
        PFNameArity_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PFNameArity_25, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
        MR_hl_field(0, PFNameArity_25, 1) = ((MR_Box) (SymName_19));
        MR_hl_field(0, PFNameArity_25, 2) = ((MR_Box) (UserArity_22));
      }
      {
        ProcTransform_26 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ProcTransform_26, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_decl_scalar_common_5[1]));
        MR_hl_field(0, ProcTransform_26, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_decl__add_pragma_struct_reuse_5_p_0_1));
        MR_hl_field(0, ProcTransform_26, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, ProcTransform_26, 3) = ((MR_Box) (HeadVars_10));
        MR_hl_field(0, ProcTransform_26, 4) = ((MR_Box) (Types_11));
        MR_hl_field(0, ProcTransform_26, 5) = ((MR_Box) (ReuseDomain_17));
      }
      hlds__make_hlds__add_pragma_util__transform_selected_mode_of_pred_10_p_0(PredId_24, PFNameArity_25, Modes_20, (MR_String) "structure_reuse", Context_15, ProcTransform_26, STATE_VARIABLE_ModuleInfo_0_28, STATE_VARIABLE_ModuleInfo_29, STATE_VARIABLE_ErrSpecs_0_30, STATE_VARIABLE_ErrSpecs_31);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_pragma_struct_sharing_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__5_5;

  hlds__hlds_pred__proc_info_set_imported_structure_sharing_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
}

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_pragma_struct_sharing_5_p_0(
  MR_Word SharingInfo_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * STATE_VARIABLE_ModuleInfo_29,
  MR_Word STATE_VARIABLE_ErrSpecs_0_30,
  MR_Word * STATE_VARIABLE_ErrSpecs_31)
{
  MR_Word PredNameModesPF_9 = ((MR_Word) ((MR_hl_field(0, SharingInfo_6, 0))));
  MR_Word HeadVars_10 = ((MR_Word) ((MR_hl_field(0, SharingInfo_6, 1))));
  MR_Word Types_11 = ((MR_Word) ((MR_hl_field(0, SharingInfo_6, 2))));
  MR_Word MaybeSharingDomain_14 = ((MR_Word) ((MR_hl_field(0, SharingInfo_6, 5))));
  MR_Word Context_15 = ((MR_Word) ((MR_hl_field(0, SharingInfo_6, 6))));

  if ((MaybeSharingDomain_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_ModuleInfo_29 = STATE_VARIABLE_ModuleInfo_0_28;
    *STATE_VARIABLE_ErrSpecs_31 = STATE_VARIABLE_ErrSpecs_0_30;
  }
  else
  {
    MR_Word SharingDomain_17 = ((MR_Word) ((MR_hl_field(1, MaybeSharingDomain_14, 0))));
    MR_Word PredOrFunc_18 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF_9, 0))) & (MR_Integer) 1);
    MR_Word SymName_19 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_9, 1))));
    MR_Word Modes_20 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_9, 2))));
    MR_Integer PredFormArityInt_21;
    MR_Word UserArity_22;
    MR_Word MaybePredId_23;
    MR_Word Var_32;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_20, &PredFormArityInt_21);
    Var_32 = (MR_Word) (PredFormArityInt_21);
    parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_18, &UserArity_22, Var_32);
    hlds__make_hlds__add_pragma_util__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_28, (MR_Integer) 0, (MR_Integer) 0, Context_15, (MR_String) "structure_sharing", PredOrFunc_18, SymName_19, UserArity_22, &MaybePredId_23);
    if (((MR_tag((MR_Word) MaybePredId_23)) == (MR_Integer) 0))
    {
      MR_Word IdErrSpecs_27 = ((MR_Word) ((MR_hl_field(0, MaybePredId_23, 0))));

      *STATE_VARIABLE_ErrSpecs_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), IdErrSpecs_27, STATE_VARIABLE_ErrSpecs_0_30);
      *STATE_VARIABLE_ModuleInfo_29 = STATE_VARIABLE_ModuleInfo_0_28;
    }
    else
    {
      MR_Word PredId_24 = ((MR_Word) ((MR_hl_field(1, MaybePredId_23, 0))));
      MR_Word PFNameArity_25;
      MR_Word ProcTransform_26;

      {
        PFNameArity_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PFNameArity_25, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
        MR_hl_field(0, PFNameArity_25, 1) = ((MR_Box) (SymName_19));
        MR_hl_field(0, PFNameArity_25, 2) = ((MR_Box) (UserArity_22));
      }
      {
        ProcTransform_26 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ProcTransform_26, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_decl_scalar_common_5[0]));
        MR_hl_field(0, ProcTransform_26, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_decl__add_pragma_struct_sharing_5_p_0_1));
        MR_hl_field(0, ProcTransform_26, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, ProcTransform_26, 3) = ((MR_Box) (HeadVars_10));
        MR_hl_field(0, ProcTransform_26, 4) = ((MR_Box) (Types_11));
        MR_hl_field(0, ProcTransform_26, 5) = ((MR_Box) (SharingDomain_17));
      }
      hlds__make_hlds__add_pragma_util__transform_selected_mode_of_pred_10_p_0(PredId_24, PFNameArity_25, Modes_20, (MR_String) "structure_sharing", Context_15, ProcTransform_26, STATE_VARIABLE_ModuleInfo_0_28, STATE_VARIABLE_ModuleInfo_29, STATE_VARIABLE_ErrSpecs_0_30, STATE_VARIABLE_ErrSpecs_31);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_pragma_termination2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_37;

  hlds__make_hlds__add_pragma_decl__IntroducedFrom__pred__add_pragma_termination2__594__1_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_37);
  *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_37));
}

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_pragma_termination2_5_p_0(
  MR_Word Term2Info_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30,
  MR_Word STATE_VARIABLE_ErrSpecs_0_31,
  MR_Word * STATE_VARIABLE_ErrSpecs_32)
{
  MR_Word PredNameModesPF_9 = ((MR_Word) ((MR_hl_field(0, Term2Info_6, 0))));
  MR_Word MaybePragmaSuccessArgSizeInfo_10 = ((MR_Word) ((MR_hl_field(0, Term2Info_6, 1))));
  MR_Word MaybePragmaFailureArgSizeInfo_11 = ((MR_Word) ((MR_hl_field(0, Term2Info_6, 2))));
  MR_Word MaybePragmaTerminationInfo_12 = ((MR_Word) ((MR_hl_field(0, Term2Info_6, 3))));
  MR_Word Context_13 = ((MR_Word) ((MR_hl_field(0, Term2Info_6, 4))));
  MR_Word PredOrFunc_15 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF_9, 0))) & (MR_Integer) 1);
  MR_Word SymName_16 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_9, 1))));
  MR_Word Modes_17 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_9, 2))));
  MR_Word PredFormArity_18;
  MR_Word UserArity_19;
  MR_Word MaybePredId_20;

  PredFormArity_18 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_17);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_15, &UserArity_19, PredFormArity_18);
  hlds__make_hlds__add_pragma_util__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_29, (MR_Integer) 0, (MR_Integer) 0, Context_13, (MR_String) "termination2_info", PredOrFunc_15, SymName_16, UserArity_19, &MaybePredId_20);
  if (((MR_tag((MR_Word) MaybePredId_20)) == (MR_Integer) 0))
  {
    *STATE_VARIABLE_ModuleInfo_30 = STATE_VARIABLE_ModuleInfo_0_29;
    *STATE_VARIABLE_ErrSpecs_32 = STATE_VARIABLE_ErrSpecs_0_31;
  }
  else
  {
    MR_Word PredId_21 = ((MR_Word) ((MR_hl_field(1, MaybePredId_20, 0))));
    MR_Word PFNameArity_22;
    MR_Word ProcTransform_23;

    {
      PFNameArity_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PFNameArity_22, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_15));
      MR_hl_field(0, PFNameArity_22, 1) = ((MR_Box) (SymName_16));
      MR_hl_field(0, PFNameArity_22, 2) = ((MR_Box) (UserArity_19));
    }
    {
      ProcTransform_23 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ProcTransform_23, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_decl_scalar_common_4[0]));
      MR_hl_field(0, ProcTransform_23, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_decl__add_pragma_termination2_5_p_0_1));
      MR_hl_field(0, ProcTransform_23, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, ProcTransform_23, 3) = ((MR_Box) (MaybePragmaSuccessArgSizeInfo_10));
      MR_hl_field(0, ProcTransform_23, 4) = ((MR_Box) (MaybePragmaFailureArgSizeInfo_11));
      MR_hl_field(0, ProcTransform_23, 5) = ((MR_Box) (MaybePragmaTerminationInfo_12));
      MR_hl_field(0, ProcTransform_23, 6) = ((MR_Box) (Context_13));
    }
    hlds__make_hlds__add_pragma_util__transform_selected_mode_of_pred_10_p_0(PredId_21, PFNameArity_22, Modes_17, (MR_String) "termination2_info", Context_13, ProcTransform_23, STATE_VARIABLE_ModuleInfo_0_29, STATE_VARIABLE_ModuleInfo_30, STATE_VARIABLE_ErrSpecs_0_31, STATE_VARIABLE_ErrSpecs_32);
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_pragma_termination_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_37;

  hlds__make_hlds__add_pragma_decl__IntroducedFrom__pred__add_pragma_termination__560__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_37);
  *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_37));
}

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_pragma_termination_5_p_0(
  MR_Word TermInfo_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30,
  MR_Word STATE_VARIABLE_ErrSpecs_0_31,
  MR_Word * STATE_VARIABLE_ErrSpecs_32)
{
  MR_Word PredNameModesPF_9 = ((MR_Word) ((MR_hl_field(0, TermInfo_6, 0))));
  MR_Word MaybePragmaArgSizeInfo_10 = ((MR_Word) ((MR_hl_field(0, TermInfo_6, 1))));
  MR_Word MaybePragmaTerminationInfo_11 = ((MR_Word) ((MR_hl_field(0, TermInfo_6, 2))));
  MR_Word Context_12 = ((MR_Word) ((MR_hl_field(0, TermInfo_6, 3))));
  MR_Word PredOrFunc_14 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF_9, 0))) & (MR_Integer) 1);
  MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_9, 1))));
  MR_Word Modes_16 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_9, 2))));
  MR_Word PredFormArity_17;
  MR_Word UserArity_18;
  MR_Word MaybePredId_19;

  PredFormArity_17 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_16);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_14, &UserArity_18, PredFormArity_17);
  hlds__make_hlds__add_pragma_util__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_29, (MR_Integer) 0, (MR_Integer) 0, Context_12, (MR_String) "termination_info", PredOrFunc_14, SymName_15, UserArity_18, &MaybePredId_19);
  if (((MR_tag((MR_Word) MaybePredId_19)) == (MR_Integer) 0))
  {
    *STATE_VARIABLE_ModuleInfo_30 = STATE_VARIABLE_ModuleInfo_0_29;
    *STATE_VARIABLE_ErrSpecs_32 = STATE_VARIABLE_ErrSpecs_0_31;
  }
  else
  {
    MR_Word PredId_20 = ((MR_Word) ((MR_hl_field(1, MaybePredId_19, 0))));
    MR_Word PFNameArity_21;
    MR_Word MaybeArgSizeInfo_22;
    MR_Word MaybeTerminationInfo_23;
    MR_Word ProcTransform_24;

    {
      PFNameArity_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PFNameArity_21, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_14));
      MR_hl_field(0, PFNameArity_21, 1) = ((MR_Box) (SymName_15));
      MR_hl_field(0, PFNameArity_21, 2) = ((MR_Box) (UserArity_18));
    }
    transform_hlds__term_util__add_context_to_arg_size_info_3_p_0(MaybePragmaArgSizeInfo_10, Context_12, &MaybeArgSizeInfo_22);
    transform_hlds__term_util__add_context_to_termination_info_3_p_0(MaybePragmaTerminationInfo_11, Context_12, &MaybeTerminationInfo_23);
    {
      ProcTransform_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ProcTransform_24, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_decl_scalar_common_3[0]));
      MR_hl_field(0, ProcTransform_24, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_decl__add_pragma_termination_5_p_0_1));
      MR_hl_field(0, ProcTransform_24, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, ProcTransform_24, 3) = ((MR_Box) (MaybeArgSizeInfo_22));
      MR_hl_field(0, ProcTransform_24, 4) = ((MR_Box) (MaybeTerminationInfo_23));
    }
    hlds__make_hlds__add_pragma_util__transform_selected_mode_of_pred_10_p_0(PredId_20, PFNameArity_21, Modes_16, (MR_String) "termination_info", Context_12, ProcTransform_24, STATE_VARIABLE_ModuleInfo_0_29, STATE_VARIABLE_ModuleInfo_30, STATE_VARIABLE_ErrSpecs_0_31, STATE_VARIABLE_ErrSpecs_32);
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_pragma_oisu_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_PredId_16;
  MR_Integer conv11_STATE_VARIABLE_SeqNum_43;
  MR_Word conv10_STATE_VARIABLE_ErrSpecs_45;

  hlds__make_hlds__add_pragma_decl__find_unique_pred_for_oisu_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_String) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), &conv12_PredId_16, ((MR_Integer) (wrapper_arg_3)), &conv11_STATE_VARIABLE_SeqNum_43, ((MR_Word) (wrapper_arg_5)), &conv10_STATE_VARIABLE_ErrSpecs_45);
  *wrapper_arg_2 = ((MR_Box) (conv12_PredId_16));
  *wrapper_arg_4 = ((MR_Box) (conv11_STATE_VARIABLE_SeqNum_43));
  *wrapper_arg_6 = ((MR_Box) (conv10_STATE_VARIABLE_ErrSpecs_45));
}

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_pragma_oisu_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_PredId_16;
  MR_Integer conv6_STATE_VARIABLE_SeqNum_43;
  MR_Word conv5_STATE_VARIABLE_ErrSpecs_45;

  hlds__make_hlds__add_pragma_decl__find_unique_pred_for_oisu_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_String) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), &conv7_PredId_16, ((MR_Integer) (wrapper_arg_3)), &conv6_STATE_VARIABLE_SeqNum_43, ((MR_Word) (wrapper_arg_5)), &conv5_STATE_VARIABLE_ErrSpecs_45);
  *wrapper_arg_2 = ((MR_Box) (conv7_PredId_16));
  *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_SeqNum_43));
  *wrapper_arg_6 = ((MR_Box) (conv5_STATE_VARIABLE_ErrSpecs_45));
}

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_pragma_oisu_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_PredId_16;
  MR_Integer conv1_STATE_VARIABLE_SeqNum_43;
  MR_Word conv0_STATE_VARIABLE_ErrSpecs_45;

  hlds__make_hlds__add_pragma_decl__find_unique_pred_for_oisu_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_String) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), &conv2_PredId_16, ((MR_Integer) (wrapper_arg_3)), &conv1_STATE_VARIABLE_SeqNum_43, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_ErrSpecs_45);
  *wrapper_arg_2 = ((MR_Box) (conv2_PredId_16));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_SeqNum_43));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_ErrSpecs_45));
}

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_pragma_oisu_6_p_0(
  MR_Word OISUInfo_7,
  MR_Word ItemMercuryStatus_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * STATE_VARIABLE_ModuleInfo_41,
  MR_Word STATE_VARIABLE_ErrSpecs_0_42,
  MR_Word * STATE_VARIABLE_ErrSpecs_43)
{
  MR_bool succeeded;
  MR_Word TypeCtor_11 = ((MR_Word) ((MR_hl_field(0, OISUInfo_7, 0))));
  MR_Word Creators_12 = ((MR_Word) ((MR_hl_field(0, OISUInfo_7, 1))));
  MR_Word Mutators_13 = ((MR_Word) ((MR_hl_field(0, OISUInfo_7, 2))));
  MR_Word Destructors_14 = ((MR_Word) ((MR_hl_field(0, OISUInfo_7, 3))));
  MR_Word Context_15 = ((MR_Word) ((MR_hl_field(0, OISUInfo_7, 4))));
  MR_Word CreatorPredIds_27;
  MR_Word MutatorPredIds_29;
  MR_Word DestructorPredIds_31;
  MR_Word STATE_VARIABLE_OISUSpecs_3_72;
  MR_Word Var_73;
  MR_Word STATE_VARIABLE_OISUSpecs_4_75;
  MR_Word Var_77;
  MR_Word STATE_VARIABLE_OISUSpecs_5_79;
  MR_Word Var_81;
  MR_Word STATE_VARIABLE_OISUSpecs_6_83;
  MR_Box conv4_Var_28;
  MR_Box conv3_STATE_VARIABLE_OISUSpecs_4_75;
  MR_Box conv9_Var_30;
  MR_Box conv8_STATE_VARIABLE_OISUSpecs_5_79;
  MR_Box conv14_Var_32;
  MR_Box conv13_STATE_VARIABLE_OISUSpecs_6_83;

  if (((MR_tag((MR_Word) ItemMercuryStatus_8)) == (MR_Integer) 1))
    STATE_VARIABLE_OISUSpecs_3_72 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ItemExport_19 = ((MR_Unsigned) ((MR_hl_field(0, ItemMercuryStatus_8, 0))) & (MR_Integer) 3);
    MR_Word TypeTable_22;
    MR_Word STATE_VARIABLE_OISUSpecs_2_56;
    MR_Word TypeDefn_23;

    switch (ItemExport_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        STATE_VARIABLE_OISUSpecs_2_56 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word StatusSpec_21;

          {
            StatusSpec_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, StatusSpec_21, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_decl.add_pragma_oisu\'/6"));
            MR_hl_field(0, StatusSpec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, StatusSpec_21, 2) = ((MR_Box) ((MR_Unsigned) 48U));
            MR_hl_field(0, StatusSpec_21, 3) = ((MR_Box) (Context_15));
            MR_hl_field(0, StatusSpec_21, 4) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_decl_scalar_common_1[25])));
          }
          {
            STATE_VARIABLE_OISUSpecs_2_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_OISUSpecs_2_56, 0) = ((MR_Box) (StatusSpec_21));
            MR_hl_field(1, STATE_VARIABLE_OISUSpecs_2_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
    }
    hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_40, &TypeTable_22);
    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_22, TypeCtor_11, &TypeDefn_23);
    if (succeeded)
    {
      MR_Word TypeStatus_24;
      MR_Word Var_57;

      hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_23, &TypeStatus_24);
      Var_57 = (MR_Word) (TypeStatus_24);
      succeeded = (Var_57 == (MR_Word) ((MR_Unsigned) 20U));
      if (succeeded)
        STATE_VARIABLE_OISUSpecs_3_72 = STATE_VARIABLE_OISUSpecs_2_56;
      else
      {
        MR_Word TypeSpec_26;

        {
          TypeSpec_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeSpec_26, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_decl.add_pragma_oisu\'/6"));
          MR_hl_field(0, TypeSpec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, TypeSpec_26, 2) = ((MR_Box) ((MR_Unsigned) 48U));
          MR_hl_field(0, TypeSpec_26, 3) = ((MR_Box) (Context_15));
          MR_hl_field(0, TypeSpec_26, 4) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_decl_scalar_common_1[30])));
        }
        {
          STATE_VARIABLE_OISUSpecs_3_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_OISUSpecs_3_72, 0) = ((MR_Box) (TypeSpec_26));
          MR_hl_field(1, STATE_VARIABLE_OISUSpecs_3_72, 1) = ((MR_Box) (STATE_VARIABLE_OISUSpecs_2_56));
        }
      }
    }
    else
      STATE_VARIABLE_OISUSpecs_3_72 = STATE_VARIABLE_OISUSpecs_2_56;
  }
  {
    Var_73 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_73, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_decl_scalar_common_8[0]));
    MR_hl_field(0, Var_73, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_decl__add_pragma_oisu_6_p_0_1));
    MR_hl_field(0, Var_73, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_73, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_40));
    MR_hl_field(0, Var_73, 4) = ((MR_Box) (Context_15));
    MR_hl_field(0, Var_73, 5) = ((MR_Box) (TypeCtor_11));
    MR_hl_field(0, Var_73, 6) = ((MR_Box) ((MR_String) "creator"));
  }
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__make_hlds__add_pragma_decl_scalar_common_1[0]), Var_73, Creators_12, &CreatorPredIds_27, ((MR_Box) ((MR_Integer) 1)), &conv4_Var_28, ((MR_Box) (STATE_VARIABLE_OISUSpecs_3_72)), &conv3_STATE_VARIABLE_OISUSpecs_4_75);
  STATE_VARIABLE_OISUSpecs_4_75 = ((MR_Word) (conv3_STATE_VARIABLE_OISUSpecs_4_75));
  {
    Var_77 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_77, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_decl_scalar_common_8[0]));
    MR_hl_field(0, Var_77, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_decl__add_pragma_oisu_6_p_0_2));
    MR_hl_field(0, Var_77, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_77, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_40));
    MR_hl_field(0, Var_77, 4) = ((MR_Box) (Context_15));
    MR_hl_field(0, Var_77, 5) = ((MR_Box) (TypeCtor_11));
    MR_hl_field(0, Var_77, 6) = ((MR_Box) ((MR_String) "mutator"));
  }
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__make_hlds__add_pragma_decl_scalar_common_1[0]), Var_77, Mutators_13, &MutatorPredIds_29, ((MR_Box) ((MR_Integer) 1)), &conv9_Var_30, ((MR_Box) (STATE_VARIABLE_OISUSpecs_4_75)), &conv8_STATE_VARIABLE_OISUSpecs_5_79);
  STATE_VARIABLE_OISUSpecs_5_79 = ((MR_Word) (conv8_STATE_VARIABLE_OISUSpecs_5_79));
  {
    Var_81 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_81, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_decl_scalar_common_8[0]));
    MR_hl_field(0, Var_81, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_decl__add_pragma_oisu_6_p_0_3));
    MR_hl_field(0, Var_81, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_81, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_40));
    MR_hl_field(0, Var_81, 4) = ((MR_Box) (Context_15));
    MR_hl_field(0, Var_81, 5) = ((MR_Box) (TypeCtor_11));
    MR_hl_field(0, Var_81, 6) = ((MR_Box) ((MR_String) "destructor"));
  }
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__make_hlds__add_pragma_decl_scalar_common_1[0]), Var_81, Destructors_14, &DestructorPredIds_31, ((MR_Box) ((MR_Integer) 1)), &conv14_Var_32, ((MR_Box) (STATE_VARIABLE_OISUSpecs_5_79)), &conv13_STATE_VARIABLE_OISUSpecs_6_83);
  STATE_VARIABLE_OISUSpecs_6_83 = ((MR_Word) (conv13_STATE_VARIABLE_OISUSpecs_6_83));
  if ((STATE_VARIABLE_OISUSpecs_6_83 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word OISUPreds_33;
    MR_Word OISUMap0_34;
    MR_Word OISUMap_35;

    {
      OISUPreds_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, OISUPreds_33, 0) = ((MR_Box) (CreatorPredIds_27));
      MR_hl_field(0, OISUPreds_33, 1) = ((MR_Box) (MutatorPredIds_29));
      MR_hl_field(0, OISUPreds_33, 2) = ((MR_Box) (DestructorPredIds_31));
    }
    hlds__hlds_module__module_info_get_oisu_map_2_p_0(STATE_VARIABLE_ModuleInfo_0_40, &OISUMap0_34);
    succeeded = mercury__map__insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (OISUPreds_33)), OISUMap0_34, &OISUMap_35);
    if (succeeded)
    {
      hlds__hlds_module__module_info_set_oisu_map_3_p_0(OISUMap_35, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
      *STATE_VARIABLE_ErrSpecs_43 = STATE_VARIABLE_ErrSpecs_0_42;
    }
    else
    {
      MR_Word DupPieces_36;
      MR_Word DupSpec_37;
      MR_Word Var_88;
      MR_Word Var_91;
      MR_Word Var_94;
      MR_Word Var_95;

      {
        Var_95 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_95, 0) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(3, Var_95, 1) = ((MR_Box) (TypeCtor_11));
      }
      {
        Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_94, 0) = ((MR_Box) (Var_95));
        MR_hl_field(1, Var_94, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_decl_scalar_common_1[34])));
      }
      {
        Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_91, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[33])));
        MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_94));
      }
      {
        Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_88, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[32])));
        MR_hl_field(1, Var_88, 1) = ((MR_Box) (Var_91));
      }
      {
        DupPieces_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, DupPieces_36, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_decl_scalar_common_1[31])));
        MR_hl_field(1, DupPieces_36, 1) = ((MR_Box) (Var_88));
      }
      {
        DupSpec_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, DupSpec_37, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_decl.add_pragma_oisu\'/6"));
        MR_hl_field(0, DupSpec_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, DupSpec_37, 2) = ((MR_Box) ((MR_Unsigned) 48U));
        MR_hl_field(0, DupSpec_37, 3) = ((MR_Box) (Context_15));
        MR_hl_field(0, DupSpec_37, 4) = ((MR_Box) (DupPieces_36));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_ErrSpecs_43 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (DupSpec_37));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_42));
      }
      *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
    }
  }
  else
  {
    *STATE_VARIABLE_ErrSpecs_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), STATE_VARIABLE_OISUSpecs_6_83, STATE_VARIABLE_ErrSpecs_0_42);
    *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__mark_proc_as_obsolete_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_49;

  hlds__make_hlds__add_pragma_decl__IntroducedFrom__pred__mark_proc_as_obsolete__286__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_49);
  *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_49));
}

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__mark_proc_as_obsolete_8_p_0(
  MR_Word ObsoleteProcInfo_9,
  MR_Word PragmaStatus_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35,
  MR_Word STATE_VARIABLE_ErrSpecs_0_36,
  MR_Word * STATE_VARIABLE_ErrSpecs_37,
  MR_Word STATE_VARIABLE_WarnSpecs_0_38,
  MR_Word * STATE_VARIABLE_WarnSpecs_39)
{
  MR_Word PredNameModesPF_14 = ((MR_Word) ((MR_hl_field(0, ObsoleteProcInfo_9, 0))));
  MR_Word ObsoleteInFavourOf_15 = ((MR_Word) ((MR_hl_field(0, ObsoleteProcInfo_9, 1))));
  MR_Word Context_16 = ((MR_Word) ((MR_hl_field(0, ObsoleteProcInfo_9, 2))));
  MR_Word PredOrFunc_18 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF_14, 0))) & (MR_Integer) 1);
  MR_Word SymName_19 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_14, 1))));
  MR_Word Modes_20 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_14, 2))));
  MR_Integer PredFormArityInt_21;
  MR_Word UserArity_22;
  MR_Word MaybePredId_23;
  MR_Word Var_40;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_20, &PredFormArityInt_21);
  Var_40 = (MR_Word) (PredFormArityInt_21);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_18, &UserArity_22, Var_40);
  hlds__make_hlds__add_pragma_util__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_34, (MR_Integer) 0, (MR_Integer) 1, Context_16, (MR_String) "obsolete_proc", PredOrFunc_18, SymName_19, UserArity_22, &MaybePredId_23);
  if (((MR_tag((MR_Word) MaybePredId_23)) == (MR_Integer) 0))
  {
    MR_Word IdErrSpecs_33 = ((MR_Word) ((MR_hl_field(0, MaybePredId_23, 0))));

    *STATE_VARIABLE_ErrSpecs_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), IdErrSpecs_33, STATE_VARIABLE_ErrSpecs_0_36);
    *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
    *STATE_VARIABLE_WarnSpecs_39 = STATE_VARIABLE_WarnSpecs_0_38;
  }
  else
  {
    MR_Word PredId_24 = ((MR_Word) ((MR_hl_field(1, MaybePredId_23, 0))));
    MR_Word PredInfo0_25;
    MR_Word PFNameArity_26;
    MR_Word ProcTransform_27;
    MR_Word STATE_VARIABLE_ErrSpecs_1_46;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_34, PredId_24, &PredInfo0_25);
    hlds__make_hlds__add_pragma_util__check_pragma_status_9_p_0((MR_String) "obsolete_proc", (MR_Integer) 0, PragmaStatus_10, Context_16, PredInfo0_25, STATE_VARIABLE_ErrSpecs_0_36, &STATE_VARIABLE_ErrSpecs_1_46, STATE_VARIABLE_WarnSpecs_0_38, STATE_VARIABLE_WarnSpecs_39);
    {
      PFNameArity_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PFNameArity_26, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
      MR_hl_field(0, PFNameArity_26, 1) = ((MR_Box) (SymName_19));
      MR_hl_field(0, PFNameArity_26, 2) = ((MR_Box) (UserArity_22));
    }
    {
      ProcTransform_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ProcTransform_27, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_decl_scalar_common_7[0]));
      MR_hl_field(0, ProcTransform_27, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_decl__mark_proc_as_obsolete_8_p_0_1));
      MR_hl_field(0, ProcTransform_27, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, ProcTransform_27, 3) = ((MR_Box) (ObsoleteInFavourOf_15));
    }
    hlds__make_hlds__add_pragma_util__transform_selected_mode_of_pred_10_p_0(PredId_24, PFNameArity_26, Modes_20, (MR_String) "obsolete_proc", Context_16, ProcTransform_27, STATE_VARIABLE_ModuleInfo_0_34, STATE_VARIABLE_ModuleInfo_35, STATE_VARIABLE_ErrSpecs_1_46, STATE_VARIABLE_ErrSpecs_37);
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__mark_pred_as_obsolete_8_p_0(
  MR_Word ObsoletePredInfo_9,
  MR_Word PragmaStatus_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30,
  MR_Word STATE_VARIABLE_ErrSpecs_0_31,
  MR_Word * STATE_VARIABLE_ErrSpecs_32,
  MR_Word STATE_VARIABLE_WarnSpecs_0_33,
  MR_Word * STATE_VARIABLE_WarnSpecs_34)
{
  MR_Word PredSpec_14 = ((MR_Word) ((MR_hl_field(0, ObsoletePredInfo_9, 0))));
  MR_Word ObsoleteInFavourOf_15 = ((MR_Word) ((MR_hl_field(0, ObsoletePredInfo_9, 1))));
  MR_Word Context_16 = ((MR_Word) ((MR_hl_field(0, ObsoletePredInfo_9, 2))));
  MR_Word PFU_18 = ((MR_Unsigned) ((MR_hl_field(0, PredSpec_14, 0))) & (MR_Integer) 3);
  MR_Word SymName_19 = ((MR_Word) ((MR_hl_field(0, PredSpec_14, 1))));
  MR_Word UserArity_20 = ((MR_Word) ((MR_hl_field(0, PredSpec_14, 2))));
  MR_Word MatchingPredIdResult_21;

  hlds__make_hlds__add_pragma_util__get_matching_pred_ids_9_p_0(STATE_VARIABLE_ModuleInfo_0_29, (MR_String) "obsolete", (MR_Integer) 0, (MR_Integer) 0, Context_16, PFU_18, SymName_19, UserArity_20, &MatchingPredIdResult_21);
  if (((MR_tag((MR_Word) MatchingPredIdResult_21)) == (MR_Integer) 1))
  {
    MR_Word IdErrSpecs_28 = ((MR_Word) ((MR_hl_field(1, MatchingPredIdResult_21, 0))));
    MR_Word Var_43;
    MR_Word IdWarnSpecs_45 = ((MR_Word) ((MR_hl_field(1, MatchingPredIdResult_21, 1))));

    Var_43 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), IdErrSpecs_28);
    *STATE_VARIABLE_ErrSpecs_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_43, STATE_VARIABLE_ErrSpecs_0_31);
    *STATE_VARIABLE_WarnSpecs_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), IdWarnSpecs_45, STATE_VARIABLE_WarnSpecs_0_33);
    *STATE_VARIABLE_ModuleInfo_30 = STATE_VARIABLE_ModuleInfo_0_29;
  }
  else
  {
    MR_Word HeadPredId_22 = ((MR_Word) ((MR_hl_field(0, MatchingPredIdResult_21, 0))));
    MR_Word TailPredIds_23 = ((MR_Word) ((MR_hl_field(0, MatchingPredIdResult_21, 1))));
    MR_Word IdWarnSpecs_24 = ((MR_Word) ((MR_hl_field(0, MatchingPredIdResult_21, 2))));
    MR_Word PredIds_25;
    MR_Word PredIdTable0_26;
    MR_Word PredIdTable_27;
    MR_Word STATE_VARIABLE_WarnSpecs_1_38;

    {
      PredIds_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, PredIds_25, 0) = ((MR_Box) (HeadPredId_22));
      MR_hl_field(1, PredIds_25, 1) = ((MR_Box) (TailPredIds_23));
    }
    STATE_VARIABLE_WarnSpecs_1_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), IdWarnSpecs_24, STATE_VARIABLE_WarnSpecs_0_33);
    hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_29, &PredIdTable0_26);
    hlds__make_hlds__add_pragma_decl__mark_pred_ids_as_obsolete_10_p_0(ObsoleteInFavourOf_15, PragmaStatus_10, Context_16, PredIds_25, PredIdTable0_26, &PredIdTable_27, STATE_VARIABLE_ErrSpecs_0_31, STATE_VARIABLE_ErrSpecs_32, STATE_VARIABLE_WarnSpecs_1_38, STATE_VARIABLE_WarnSpecs_34);
    hlds__hlds_module__module_info_set_pred_id_table_3_p_0(PredIdTable_27, STATE_VARIABLE_ModuleInfo_0_29, STATE_VARIABLE_ModuleInfo_30);
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__mark_pred_ids_as_obsolete_10_p_0(
  MR_Word ObsoleteInFavourOf_1,
  MR_Word PragmaStatus_2,
  MR_Word Context_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_PredTable_0_5,
  MR_Word * STATE_VARIABLE_PredTable_6,
  MR_Word STATE_VARIABLE_ErrSpecs_0_7,
  MR_Word * STATE_VARIABLE_ErrSpecs_8,
  MR_Word STATE_VARIABLE_WarnSpecs_0_9,
  MR_Word * STATE_VARIABLE_WarnSpecs_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_WarnSpecs_10 = STATE_VARIABLE_WarnSpecs_0_9;
      *STATE_VARIABLE_ErrSpecs_8 = STATE_VARIABLE_ErrSpecs_0_7;
      *STATE_VARIABLE_PredTable_6 = STATE_VARIABLE_PredTable_0_5;
    }
    else
    {
      MR_Word PredId_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word PredIds_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word PredInfo0_31;
      MR_Word MaybeObsoleteInFavourOf0_32;
      MR_Word MaybeObsoleteInFavourOf_33;
      MR_Word PredInfo_35;
      MR_Word STATE_VARIABLE_ErrSpecs_1_44;
      MR_Word STATE_VARIABLE_WarnSpecs_1_45;
      MR_Word STATE_VARIABLE_PredTable_1_47;
      MR_Box conv0_PredInfo0_31;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_PredTable_0_5;
      MR_Word next_value_of_STATE_VARIABLE_ErrSpecs_0_7;
      MR_Word next_value_of_STATE_VARIABLE_WarnSpecs_0_9;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), STATE_VARIABLE_PredTable_0_5, ((MR_Box) (PredId_26)), &conv0_PredInfo0_31);
      PredInfo0_31 = ((MR_Word) (conv0_PredInfo0_31));
      hlds__make_hlds__add_pragma_util__check_pragma_status_9_p_0((MR_String) "obsolete", (MR_Integer) 0, PragmaStatus_2, Context_3, PredInfo0_31, STATE_VARIABLE_ErrSpecs_0_7, &STATE_VARIABLE_ErrSpecs_1_44, STATE_VARIABLE_WarnSpecs_0_9, &STATE_VARIABLE_WarnSpecs_1_45);
      hlds__hlds_pred__pred_info_get_obsolete_in_favour_of_2_p_0(PredInfo0_31, &MaybeObsoleteInFavourOf0_32);
      if ((MaybeObsoleteInFavourOf0_32 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MaybeObsoleteInFavourOf_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeObsoleteInFavourOf_33, 0) = ((MR_Box) (ObsoleteInFavourOf_1));
        }
      else
      {
        MR_Word ObsoleteInFavourOf0_34 = ((MR_Word) ((MR_hl_field(1, MaybeObsoleteInFavourOf0_32, 0))));
        MR_Word Var_46;

        Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), ObsoleteInFavourOf0_34, ObsoleteInFavourOf_1);
        {
          MaybeObsoleteInFavourOf_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeObsoleteInFavourOf_33, 0) = ((MR_Box) (Var_46));
        }
      }
      hlds__hlds_pred__pred_info_set_obsolete_in_favour_of_3_p_0(MaybeObsoleteInFavourOf_33, PredInfo0_31, &PredInfo_35);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_26)), ((MR_Box) (PredInfo_35)), STATE_VARIABLE_PredTable_0_5, &STATE_VARIABLE_PredTable_1_47);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = PredIds_27;
      next_value_of_STATE_VARIABLE_PredTable_0_5 = STATE_VARIABLE_PredTable_1_47;
      next_value_of_STATE_VARIABLE_ErrSpecs_0_7 = STATE_VARIABLE_ErrSpecs_1_44;
      next_value_of_STATE_VARIABLE_WarnSpecs_0_9 = STATE_VARIABLE_WarnSpecs_1_45;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_PredTable_0_5 = next_value_of_STATE_VARIABLE_PredTable_0_5;
      STATE_VARIABLE_ErrSpecs_0_7 = next_value_of_STATE_VARIABLE_ErrSpecs_0_7;
      STATE_VARIABLE_WarnSpecs_0_9 = next_value_of_STATE_VARIABLE_WarnSpecs_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_decl_markers_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ModuleInfo_19;
  MR_Word conv1_STATE_VARIABLE_ErrSpecs_21;
  MR_Word conv0_STATE_VARIABLE_WarnSpecs_23;

  hlds__make_hlds__add_pragma_decl__add_decl_marker_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_19, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_ErrSpecs_21, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_WarnSpecs_23);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_19));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_ErrSpecs_21));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_WarnSpecs_23));
}

void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_decl_markers_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_ErrSpecs_0_4,
  MR_Word * STATE_VARIABLE_ErrSpecs_5,
  MR_Word STATE_VARIABLE_WarnSpecs_0_6,
  MR_Word * STATE_VARIABLE_WarnSpecs_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_WarnSpecs_7 = STATE_VARIABLE_WarnSpecs_0_6;
      *STATE_VARIABLE_ErrSpecs_5 = STATE_VARIABLE_ErrSpecs_0_4;
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word ImsList_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word ImsLists_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word ItemMercuryStatus_22 = ((MR_Word) ((MR_hl_field(0, ImsList_17, 0))));
      MR_Word Items_23 = ((MR_Word) ((MR_hl_field(0, ImsList_17, 1))));
      MR_Word Var_30;
      MR_Word STATE_VARIABLE_ModuleInfo_1_31;
      MR_Word STATE_VARIABLE_ErrSpecs_1_32;
      MR_Word STATE_VARIABLE_WarnSpecs_1_33;
      MR_Box conv5_STATE_VARIABLE_ModuleInfo_1_31;
      MR_Box conv4_STATE_VARIABLE_ErrSpecs_1_32;
      MR_Box conv3_STATE_VARIABLE_WarnSpecs_1_33;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ErrSpecs_0_4;
      MR_Word next_value_of_STATE_VARIABLE_WarnSpecs_0_6;

      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_30, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_decl_scalar_common_6[0]));
        MR_hl_field(0, Var_30, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_decl__add_decl_markers_7_p_0_1));
        MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_30, 3) = ((MR_Box) (ItemMercuryStatus_22));
      }
      mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__add_pragma_decl_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__add_pragma_decl_scalar_common_1[1]), Var_30, Items_23, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_2)), &conv5_STATE_VARIABLE_ModuleInfo_1_31, ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_4)), &conv4_STATE_VARIABLE_ErrSpecs_1_32, ((MR_Box) (STATE_VARIABLE_WarnSpecs_0_6)), &conv3_STATE_VARIABLE_WarnSpecs_1_33);
      STATE_VARIABLE_ModuleInfo_1_31 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_1_31));
      STATE_VARIABLE_ErrSpecs_1_32 = ((MR_Word) (conv4_STATE_VARIABLE_ErrSpecs_1_32));
      STATE_VARIABLE_WarnSpecs_1_33 = ((MR_Word) (conv3_STATE_VARIABLE_WarnSpecs_1_33));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ImsLists_18;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_1_31;
      next_value_of_STATE_VARIABLE_ErrSpecs_0_4 = STATE_VARIABLE_ErrSpecs_1_32;
      next_value_of_STATE_VARIABLE_WarnSpecs_0_6 = STATE_VARIABLE_WarnSpecs_1_33;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      STATE_VARIABLE_ErrSpecs_0_4 = next_value_of_STATE_VARIABLE_ErrSpecs_0_4;
      STATE_VARIABLE_WarnSpecs_0_6 = next_value_of_STATE_VARIABLE_WarnSpecs_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_decl_pragmas_reuse_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__5_5;

  hlds__hlds_pred__proc_info_set_imported_structure_reuse_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
}

void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_decl_pragmas_reuse_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_ErrSpecs_0_4,
  MR_Word * STATE_VARIABLE_ErrSpecs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ErrSpecs_5 = STATE_VARIABLE_ErrSpecs_0_4;
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word Pragma_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Pragmas_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_ModuleInfo_1_20;
      MR_Word STATE_VARIABLE_ErrSpecs_1_21;
      MR_Word PredNameModesPF_22 = ((MR_Word) ((MR_hl_field(0, Pragma_12, 0))));
      MR_Word HeadVars_23 = ((MR_Word) ((MR_hl_field(0, Pragma_12, 1))));
      MR_Word Types_24 = ((MR_Word) ((MR_hl_field(0, Pragma_12, 2))));
      MR_Word MaybeReuseDomain_27 = ((MR_Word) ((MR_hl_field(0, Pragma_12, 5))));
      MR_Word Context_28 = ((MR_Word) ((MR_hl_field(0, Pragma_12, 6))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ErrSpecs_0_4;

      if ((MaybeReuseDomain_27 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        STATE_VARIABLE_ModuleInfo_1_20 = STATE_VARIABLE_ModuleInfo_0_2;
        STATE_VARIABLE_ErrSpecs_1_21 = STATE_VARIABLE_ErrSpecs_0_4;
      }
      else
      {
        MR_Word ReuseDomain_30 = ((MR_Word) ((MR_hl_field(1, MaybeReuseDomain_27, 0))));
        MR_Word PredOrFunc_31 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF_22, 0))) & (MR_Integer) 1);
        MR_Word SymName_32 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_22, 1))));
        MR_Word Modes_33 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_22, 2))));
        MR_Integer PredFormArityInt_34;
        MR_Word UserArity_35;
        MR_Word MaybePredId_36;
        MR_Word Var_41;

        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_33, &PredFormArityInt_34);
        Var_41 = (MR_Word) (PredFormArityInt_34);
        parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_31, &UserArity_35, Var_41);
        hlds__make_hlds__add_pragma_util__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_2, (MR_Integer) 0, (MR_Integer) 0, Context_28, (MR_String) "structure_reuse", PredOrFunc_31, SymName_32, UserArity_35, &MaybePredId_36);
        if (((MR_tag((MR_Word) MaybePredId_36)) == (MR_Integer) 0))
        {
          MR_Word Specs_40 = ((MR_Word) ((MR_hl_field(0, MaybePredId_36, 0))));

          STATE_VARIABLE_ErrSpecs_1_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Specs_40, STATE_VARIABLE_ErrSpecs_0_4);
          STATE_VARIABLE_ModuleInfo_1_20 = STATE_VARIABLE_ModuleInfo_0_2;
        }
        else
        {
          MR_Word PredId_37 = ((MR_Word) ((MR_hl_field(1, MaybePredId_36, 0))));
          MR_Word PFNameArity_38;
          MR_Word ProcTransform_39;

          {
            PFNameArity_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, PFNameArity_38, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_31));
            MR_hl_field(0, PFNameArity_38, 1) = ((MR_Box) (SymName_32));
            MR_hl_field(0, PFNameArity_38, 2) = ((MR_Box) (UserArity_35));
          }
          {
            ProcTransform_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ProcTransform_39, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_decl_scalar_common_5[1]));
            MR_hl_field(0, ProcTransform_39, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_decl__add_decl_pragmas_reuse_5_p_0_1));
            MR_hl_field(0, ProcTransform_39, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, ProcTransform_39, 3) = ((MR_Box) (HeadVars_23));
            MR_hl_field(0, ProcTransform_39, 4) = ((MR_Box) (Types_24));
            MR_hl_field(0, ProcTransform_39, 5) = ((MR_Box) (ReuseDomain_30));
          }
          hlds__make_hlds__add_pragma_util__transform_selected_mode_of_pred_10_p_0(PredId_37, PFNameArity_38, Modes_33, (MR_String) "structure_reuse", Context_28, ProcTransform_39, STATE_VARIABLE_ModuleInfo_0_2, &STATE_VARIABLE_ModuleInfo_1_20, STATE_VARIABLE_ErrSpecs_0_4, &STATE_VARIABLE_ErrSpecs_1_21);
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Pragmas_13;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_1_20;
      next_value_of_STATE_VARIABLE_ErrSpecs_0_4 = STATE_VARIABLE_ErrSpecs_1_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      STATE_VARIABLE_ErrSpecs_0_4 = next_value_of_STATE_VARIABLE_ErrSpecs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_decl_pragmas_sharing_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__5_5;

  hlds__hlds_pred__proc_info_set_imported_structure_sharing_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
}

void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_decl_pragmas_sharing_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_ErrSpecs_0_4,
  MR_Word * STATE_VARIABLE_ErrSpecs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ErrSpecs_5 = STATE_VARIABLE_ErrSpecs_0_4;
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word Pragma_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Pragmas_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_ModuleInfo_1_20;
      MR_Word STATE_VARIABLE_ErrSpecs_1_21;
      MR_Word PredNameModesPF_22 = ((MR_Word) ((MR_hl_field(0, Pragma_12, 0))));
      MR_Word HeadVars_23 = ((MR_Word) ((MR_hl_field(0, Pragma_12, 1))));
      MR_Word Types_24 = ((MR_Word) ((MR_hl_field(0, Pragma_12, 2))));
      MR_Word MaybeSharingDomain_27 = ((MR_Word) ((MR_hl_field(0, Pragma_12, 5))));
      MR_Word Context_28 = ((MR_Word) ((MR_hl_field(0, Pragma_12, 6))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ErrSpecs_0_4;

      if ((MaybeSharingDomain_27 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        STATE_VARIABLE_ModuleInfo_1_20 = STATE_VARIABLE_ModuleInfo_0_2;
        STATE_VARIABLE_ErrSpecs_1_21 = STATE_VARIABLE_ErrSpecs_0_4;
      }
      else
      {
        MR_Word SharingDomain_30 = ((MR_Word) ((MR_hl_field(1, MaybeSharingDomain_27, 0))));
        MR_Word PredOrFunc_31 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF_22, 0))) & (MR_Integer) 1);
        MR_Word SymName_32 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_22, 1))));
        MR_Word Modes_33 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_22, 2))));
        MR_Integer PredFormArityInt_34;
        MR_Word UserArity_35;
        MR_Word MaybePredId_36;
        MR_Word Var_41;

        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_33, &PredFormArityInt_34);
        Var_41 = (MR_Word) (PredFormArityInt_34);
        parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_31, &UserArity_35, Var_41);
        hlds__make_hlds__add_pragma_util__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_2, (MR_Integer) 0, (MR_Integer) 0, Context_28, (MR_String) "structure_sharing", PredOrFunc_31, SymName_32, UserArity_35, &MaybePredId_36);
        if (((MR_tag((MR_Word) MaybePredId_36)) == (MR_Integer) 0))
        {
          MR_Word IdErrSpecs_40 = ((MR_Word) ((MR_hl_field(0, MaybePredId_36, 0))));

          STATE_VARIABLE_ErrSpecs_1_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), IdErrSpecs_40, STATE_VARIABLE_ErrSpecs_0_4);
          STATE_VARIABLE_ModuleInfo_1_20 = STATE_VARIABLE_ModuleInfo_0_2;
        }
        else
        {
          MR_Word PredId_37 = ((MR_Word) ((MR_hl_field(1, MaybePredId_36, 0))));
          MR_Word PFNameArity_38;
          MR_Word ProcTransform_39;

          {
            PFNameArity_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, PFNameArity_38, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_31));
            MR_hl_field(0, PFNameArity_38, 1) = ((MR_Box) (SymName_32));
            MR_hl_field(0, PFNameArity_38, 2) = ((MR_Box) (UserArity_35));
          }
          {
            ProcTransform_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ProcTransform_39, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_decl_scalar_common_5[0]));
            MR_hl_field(0, ProcTransform_39, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_decl__add_decl_pragmas_sharing_5_p_0_1));
            MR_hl_field(0, ProcTransform_39, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, ProcTransform_39, 3) = ((MR_Box) (HeadVars_23));
            MR_hl_field(0, ProcTransform_39, 4) = ((MR_Box) (Types_24));
            MR_hl_field(0, ProcTransform_39, 5) = ((MR_Box) (SharingDomain_30));
          }
          hlds__make_hlds__add_pragma_util__transform_selected_mode_of_pred_10_p_0(PredId_37, PFNameArity_38, Modes_33, (MR_String) "structure_sharing", Context_28, ProcTransform_39, STATE_VARIABLE_ModuleInfo_0_2, &STATE_VARIABLE_ModuleInfo_1_20, STATE_VARIABLE_ErrSpecs_0_4, &STATE_VARIABLE_ErrSpecs_1_21);
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Pragmas_13;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_1_20;
      next_value_of_STATE_VARIABLE_ErrSpecs_0_4 = STATE_VARIABLE_ErrSpecs_1_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      STATE_VARIABLE_ErrSpecs_0_4 = next_value_of_STATE_VARIABLE_ErrSpecs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_decl_pragmas_termination2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_37;

  hlds__make_hlds__add_pragma_decl__IntroducedFrom__pred__add_pragma_termination2__594__1_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_37);
  *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_37));
}

void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_decl_pragmas_termination2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_ErrSpecs_0_4,
  MR_Word * STATE_VARIABLE_ErrSpecs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ErrSpecs_5 = STATE_VARIABLE_ErrSpecs_0_4;
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word Pragma_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Pragmas_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_ModuleInfo_1_20;
      MR_Word STATE_VARIABLE_ErrSpecs_1_21;
      MR_Word PredNameModesPF_22 = ((MR_Word) ((MR_hl_field(0, Pragma_12, 0))));
      MR_Word MaybePragmaSuccessArgSizeInfo_23 = ((MR_Word) ((MR_hl_field(0, Pragma_12, 1))));
      MR_Word MaybePragmaFailureArgSizeInfo_24 = ((MR_Word) ((MR_hl_field(0, Pragma_12, 2))));
      MR_Word MaybePragmaTerminationInfo_25 = ((MR_Word) ((MR_hl_field(0, Pragma_12, 3))));
      MR_Word Context_26 = ((MR_Word) ((MR_hl_field(0, Pragma_12, 4))));
      MR_Word PredOrFunc_28 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF_22, 0))) & (MR_Integer) 1);
      MR_Word SymName_29 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_22, 1))));
      MR_Word Modes_30 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_22, 2))));
      MR_Word PredFormArity_31;
      MR_Word UserArity_32;
      MR_Word MaybePredId_33;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ErrSpecs_0_4;

      PredFormArity_31 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_30);
      parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_28, &UserArity_32, PredFormArity_31);
      hlds__make_hlds__add_pragma_util__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_2, (MR_Integer) 0, (MR_Integer) 0, Context_26, (MR_String) "termination2_info", PredOrFunc_28, SymName_29, UserArity_32, &MaybePredId_33);
      if (((MR_tag((MR_Word) MaybePredId_33)) == (MR_Integer) 0))
      {
        STATE_VARIABLE_ModuleInfo_1_20 = STATE_VARIABLE_ModuleInfo_0_2;
        STATE_VARIABLE_ErrSpecs_1_21 = STATE_VARIABLE_ErrSpecs_0_4;
      }
      else
      {
        MR_Word PredId_34 = ((MR_Word) ((MR_hl_field(1, MaybePredId_33, 0))));
        MR_Word PFNameArity_35;
        MR_Word ProcTransform_36;

        {
          PFNameArity_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PFNameArity_35, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_28));
          MR_hl_field(0, PFNameArity_35, 1) = ((MR_Box) (SymName_29));
          MR_hl_field(0, PFNameArity_35, 2) = ((MR_Box) (UserArity_32));
        }
        {
          ProcTransform_36 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ProcTransform_36, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_decl_scalar_common_4[0]));
          MR_hl_field(0, ProcTransform_36, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_decl__add_decl_pragmas_termination2_5_p_0_1));
          MR_hl_field(0, ProcTransform_36, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(0, ProcTransform_36, 3) = ((MR_Box) (MaybePragmaSuccessArgSizeInfo_23));
          MR_hl_field(0, ProcTransform_36, 4) = ((MR_Box) (MaybePragmaFailureArgSizeInfo_24));
          MR_hl_field(0, ProcTransform_36, 5) = ((MR_Box) (MaybePragmaTerminationInfo_25));
          MR_hl_field(0, ProcTransform_36, 6) = ((MR_Box) (Context_26));
        }
        hlds__make_hlds__add_pragma_util__transform_selected_mode_of_pred_10_p_0(PredId_34, PFNameArity_35, Modes_30, (MR_String) "termination2_info", Context_26, ProcTransform_36, STATE_VARIABLE_ModuleInfo_0_2, &STATE_VARIABLE_ModuleInfo_1_20, STATE_VARIABLE_ErrSpecs_0_4, &STATE_VARIABLE_ErrSpecs_1_21);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Pragmas_13;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_1_20;
      next_value_of_STATE_VARIABLE_ErrSpecs_0_4 = STATE_VARIABLE_ErrSpecs_1_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      STATE_VARIABLE_ErrSpecs_0_4 = next_value_of_STATE_VARIABLE_ErrSpecs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_decl_pragmas_termination_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_37;

  hlds__make_hlds__add_pragma_decl__IntroducedFrom__pred__add_pragma_termination__560__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_37);
  *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_37));
}

void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_decl_pragmas_termination_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_ErrSpecs_0_4,
  MR_Word * STATE_VARIABLE_ErrSpecs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ErrSpecs_5 = STATE_VARIABLE_ErrSpecs_0_4;
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word Pragma_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Pragmas_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_ModuleInfo_1_20;
      MR_Word STATE_VARIABLE_ErrSpecs_1_21;
      MR_Word PredNameModesPF_22 = ((MR_Word) ((MR_hl_field(0, Pragma_12, 0))));
      MR_Word MaybePragmaArgSizeInfo_23 = ((MR_Word) ((MR_hl_field(0, Pragma_12, 1))));
      MR_Word MaybePragmaTerminationInfo_24 = ((MR_Word) ((MR_hl_field(0, Pragma_12, 2))));
      MR_Word Context_25 = ((MR_Word) ((MR_hl_field(0, Pragma_12, 3))));
      MR_Word PredOrFunc_27 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF_22, 0))) & (MR_Integer) 1);
      MR_Word SymName_28 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_22, 1))));
      MR_Word Modes_29 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF_22, 2))));
      MR_Word PredFormArity_30;
      MR_Word UserArity_31;
      MR_Word MaybePredId_32;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ErrSpecs_0_4;

      PredFormArity_30 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_29);
      parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_27, &UserArity_31, PredFormArity_30);
      hlds__make_hlds__add_pragma_util__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_2, (MR_Integer) 0, (MR_Integer) 0, Context_25, (MR_String) "termination_info", PredOrFunc_27, SymName_28, UserArity_31, &MaybePredId_32);
      if (((MR_tag((MR_Word) MaybePredId_32)) == (MR_Integer) 0))
      {
        STATE_VARIABLE_ModuleInfo_1_20 = STATE_VARIABLE_ModuleInfo_0_2;
        STATE_VARIABLE_ErrSpecs_1_21 = STATE_VARIABLE_ErrSpecs_0_4;
      }
      else
      {
        MR_Word PredId_33 = ((MR_Word) ((MR_hl_field(1, MaybePredId_32, 0))));
        MR_Word PFNameArity_34;
        MR_Word MaybeArgSizeInfo_35;
        MR_Word MaybeTerminationInfo_36;
        MR_Word ProcTransform_37;

        {
          PFNameArity_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PFNameArity_34, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_27));
          MR_hl_field(0, PFNameArity_34, 1) = ((MR_Box) (SymName_28));
          MR_hl_field(0, PFNameArity_34, 2) = ((MR_Box) (UserArity_31));
        }
        transform_hlds__term_util__add_context_to_arg_size_info_3_p_0(MaybePragmaArgSizeInfo_23, Context_25, &MaybeArgSizeInfo_35);
        transform_hlds__term_util__add_context_to_termination_info_3_p_0(MaybePragmaTerminationInfo_24, Context_25, &MaybeTerminationInfo_36);
        {
          ProcTransform_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ProcTransform_37, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_decl_scalar_common_3[0]));
          MR_hl_field(0, ProcTransform_37, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_decl__add_decl_pragmas_termination_5_p_0_1));
          MR_hl_field(0, ProcTransform_37, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, ProcTransform_37, 3) = ((MR_Box) (MaybeArgSizeInfo_35));
          MR_hl_field(0, ProcTransform_37, 4) = ((MR_Box) (MaybeTerminationInfo_36));
        }
        hlds__make_hlds__add_pragma_util__transform_selected_mode_of_pred_10_p_0(PredId_33, PFNameArity_34, Modes_29, (MR_String) "termination_info", Context_25, ProcTransform_37, STATE_VARIABLE_ModuleInfo_0_2, &STATE_VARIABLE_ModuleInfo_1_20, STATE_VARIABLE_ErrSpecs_0_4, &STATE_VARIABLE_ErrSpecs_1_21);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Pragmas_13;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_1_20;
      next_value_of_STATE_VARIABLE_ErrSpecs_0_4 = STATE_VARIABLE_ErrSpecs_1_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      STATE_VARIABLE_ErrSpecs_0_4 = next_value_of_STATE_VARIABLE_ErrSpecs_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_decl_pragmas_type_spec_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_QualInfo_0_4,
  MR_Word * STATE_VARIABLE_QualInfo_5,
  MR_Word STATE_VARIABLE_ErrSpecs_0_6,
  MR_Word * STATE_VARIABLE_ErrSpecs_7,
  MR_Word STATE_VARIABLE_WarnSpecs_0_8,
  MR_Word * STATE_VARIABLE_WarnSpecs_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_WarnSpecs_9 = STATE_VARIABLE_WarnSpecs_0_8;
      *STATE_VARIABLE_ErrSpecs_7 = STATE_VARIABLE_ErrSpecs_0_6;
      *STATE_VARIABLE_QualInfo_5 = STATE_VARIABLE_QualInfo_0_4;
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word Pragma_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Pragmas_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_ModuleInfo_1_36;
      MR_Word STATE_VARIABLE_QualInfo_1_37;
      MR_Word STATE_VARIABLE_ErrSpecs_1_38;
      MR_Word STATE_VARIABLE_WarnSpecs_1_39;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_QualInfo_0_4;
      MR_Word next_value_of_STATE_VARIABLE_ErrSpecs_0_6;
      MR_Word next_value_of_STATE_VARIABLE_WarnSpecs_0_8;

      hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_9_p_0(Pragma_22, STATE_VARIABLE_ModuleInfo_0_2, &STATE_VARIABLE_ModuleInfo_1_36, STATE_VARIABLE_QualInfo_0_4, &STATE_VARIABLE_QualInfo_1_37, STATE_VARIABLE_ErrSpecs_0_6, &STATE_VARIABLE_ErrSpecs_1_38, STATE_VARIABLE_WarnSpecs_0_8, &STATE_VARIABLE_WarnSpecs_1_39);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Pragmas_23;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_1_36;
      next_value_of_STATE_VARIABLE_QualInfo_0_4 = STATE_VARIABLE_QualInfo_1_37;
      next_value_of_STATE_VARIABLE_ErrSpecs_0_6 = STATE_VARIABLE_ErrSpecs_1_38;
      next_value_of_STATE_VARIABLE_WarnSpecs_0_8 = STATE_VARIABLE_WarnSpecs_1_39;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      STATE_VARIABLE_QualInfo_0_4 = next_value_of_STATE_VARIABLE_QualInfo_0_4;
      STATE_VARIABLE_ErrSpecs_0_6 = next_value_of_STATE_VARIABLE_ErrSpecs_0_6;
      STATE_VARIABLE_WarnSpecs_0_8 = next_value_of_STATE_VARIABLE_WarnSpecs_0_8;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_decl_pragmas_type_spec_constr_12_p_0(
  MR_Word ProgressStream_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4,
  MR_Word STATE_VARIABLE_QualInfo_0_5,
  MR_Word * STATE_VARIABLE_QualInfo_6,
  MR_Word STATE_VARIABLE_ErrSpecs_0_7,
  MR_Word * STATE_VARIABLE_ErrSpecs_8,
  MR_Word STATE_VARIABLE_WarnSpecs_0_9,
  MR_Word * STATE_VARIABLE_WarnSpecs_10,
  MR_Word STATE_VARIABLE_InfoSpecs_0_11,
  MR_Word * STATE_VARIABLE_InfoSpecs_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_InfoSpecs_12 = STATE_VARIABLE_InfoSpecs_0_11;
      *STATE_VARIABLE_WarnSpecs_10 = STATE_VARIABLE_WarnSpecs_0_9;
      *STATE_VARIABLE_ErrSpecs_8 = STATE_VARIABLE_ErrSpecs_0_7;
      *STATE_VARIABLE_QualInfo_6 = STATE_VARIABLE_QualInfo_0_5;
      *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
    }
    else
    {
      MR_Word Pragma_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Pragmas_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word STATE_VARIABLE_ModuleInfo_1_47;
      MR_Word STATE_VARIABLE_QualInfo_1_48;
      MR_Word STATE_VARIABLE_ErrSpecs_1_49;
      MR_Word STATE_VARIABLE_WarnSpecs_1_50;
      MR_Word STATE_VARIABLE_InfoSpecs_1_51;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      MR_Word next_value_of_STATE_VARIABLE_QualInfo_0_5;
      MR_Word next_value_of_STATE_VARIABLE_ErrSpecs_0_7;
      MR_Word next_value_of_STATE_VARIABLE_WarnSpecs_0_9;
      MR_Word next_value_of_STATE_VARIABLE_InfoSpecs_0_11;

      hlds__make_hlds__add_pragma_type_spec_constr__add_pragma_type_spec_constr_12_p_0(ProgressStream_1, Pragma_30, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_1_47, STATE_VARIABLE_QualInfo_0_5, &STATE_VARIABLE_QualInfo_1_48, STATE_VARIABLE_ErrSpecs_0_7, &STATE_VARIABLE_ErrSpecs_1_49, STATE_VARIABLE_WarnSpecs_0_9, &STATE_VARIABLE_WarnSpecs_1_50, STATE_VARIABLE_InfoSpecs_0_11, &STATE_VARIABLE_InfoSpecs_1_51);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Pragmas_31;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = STATE_VARIABLE_ModuleInfo_1_47;
      next_value_of_STATE_VARIABLE_QualInfo_0_5 = STATE_VARIABLE_QualInfo_1_48;
      next_value_of_STATE_VARIABLE_ErrSpecs_0_7 = STATE_VARIABLE_ErrSpecs_1_49;
      next_value_of_STATE_VARIABLE_WarnSpecs_0_9 = STATE_VARIABLE_WarnSpecs_1_50;
      next_value_of_STATE_VARIABLE_InfoSpecs_0_11 = STATE_VARIABLE_InfoSpecs_1_51;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ModuleInfo_0_3 = next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      STATE_VARIABLE_QualInfo_0_5 = next_value_of_STATE_VARIABLE_QualInfo_0_5;
      STATE_VARIABLE_ErrSpecs_0_7 = next_value_of_STATE_VARIABLE_ErrSpecs_0_7;
      STATE_VARIABLE_WarnSpecs_0_9 = next_value_of_STATE_VARIABLE_WarnSpecs_0_9;
      STATE_VARIABLE_InfoSpecs_0_11 = next_value_of_STATE_VARIABLE_InfoSpecs_0_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_decl_pragmas_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_ModuleInfo_33;
  MR_Word conv3_STATE_VARIABLE_QualInfo_35;
  MR_Word conv2_STATE_VARIABLE_ErrSpecs_37;
  MR_Word conv1_STATE_VARIABLE_WarnSpecs_39;
  MR_Word conv0_STATE_VARIABLE_InfoSpecs_41;

  hlds__make_hlds__add_pragma_decl__add_decl_pragma_13_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ModuleInfo_33, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_QualInfo_35, ((MR_Word) (wrapper_arg_6)), &conv2_STATE_VARIABLE_ErrSpecs_37, ((MR_Word) (wrapper_arg_8)), &conv1_STATE_VARIABLE_WarnSpecs_39, ((MR_Word) (wrapper_arg_10)), &conv0_STATE_VARIABLE_InfoSpecs_41);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ModuleInfo_33));
  *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_QualInfo_35));
  *wrapper_arg_7 = ((MR_Box) (conv2_STATE_VARIABLE_ErrSpecs_37));
  *wrapper_arg_9 = ((MR_Box) (conv1_STATE_VARIABLE_WarnSpecs_39));
  *wrapper_arg_11 = ((MR_Box) (conv0_STATE_VARIABLE_InfoSpecs_41));
}

void MR_CALL 
hlds__make_hlds__add_pragma_decl__add_decl_pragmas_12_p_0(
  MR_Word ProgressStream_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4,
  MR_Word STATE_VARIABLE_QualInfo_0_5,
  MR_Word * STATE_VARIABLE_QualInfo_6,
  MR_Word STATE_VARIABLE_ErrSpecs_0_7,
  MR_Word * STATE_VARIABLE_ErrSpecs_8,
  MR_Word STATE_VARIABLE_WarnSpecs_0_9,
  MR_Word * STATE_VARIABLE_WarnSpecs_10,
  MR_Word STATE_VARIABLE_InfoSpecs_0_11,
  MR_Word * STATE_VARIABLE_InfoSpecs_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_InfoSpecs_12 = STATE_VARIABLE_InfoSpecs_0_11;
      *STATE_VARIABLE_WarnSpecs_10 = STATE_VARIABLE_WarnSpecs_0_9;
      *STATE_VARIABLE_ErrSpecs_8 = STATE_VARIABLE_ErrSpecs_0_7;
      *STATE_VARIABLE_QualInfo_6 = STATE_VARIABLE_QualInfo_0_5;
      *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
    }
    else
    {
      MR_Word ImsList_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ImsLists_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ItemMercuryStatus_37 = ((MR_Word) ((MR_hl_field(0, ImsList_30, 0))));
      MR_Word Items_38 = ((MR_Word) ((MR_hl_field(0, ImsList_30, 1))));
      MR_Word Var_49;
      MR_Word STATE_VARIABLE_ModuleInfo_1_50;
      MR_Word STATE_VARIABLE_QualInfo_1_51;
      MR_Word STATE_VARIABLE_ErrSpecs_1_52;
      MR_Word STATE_VARIABLE_WarnSpecs_1_53;
      MR_Word STATE_VARIABLE_InfoSpecs_1_54;
      MR_Box conv9_STATE_VARIABLE_ModuleInfo_1_50;
      MR_Box conv8_STATE_VARIABLE_QualInfo_1_51;
      MR_Box conv7_STATE_VARIABLE_ErrSpecs_1_52;
      MR_Box conv6_STATE_VARIABLE_WarnSpecs_1_53;
      MR_Box conv5_STATE_VARIABLE_InfoSpecs_1_54;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      MR_Word next_value_of_STATE_VARIABLE_QualInfo_0_5;
      MR_Word next_value_of_STATE_VARIABLE_ErrSpecs_0_7;
      MR_Word next_value_of_STATE_VARIABLE_WarnSpecs_0_9;
      MR_Word next_value_of_STATE_VARIABLE_InfoSpecs_0_11;

      {
        Var_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_49, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_decl_scalar_common_2[0]));
        MR_hl_field(0, Var_49, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_decl__add_decl_pragmas_12_p_0_1));
        MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_49, 3) = ((MR_Box) (ProgressStream_1));
        MR_hl_field(0, Var_49, 4) = ((MR_Box) (ItemMercuryStatus_37));
      }
      mercury__list__foldl5_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__add_pragma_decl_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__add_pragma_decl_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__add_pragma_decl_scalar_common_1[2]), Var_49, Items_38, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_3)), &conv9_STATE_VARIABLE_ModuleInfo_1_50, ((MR_Box) (STATE_VARIABLE_QualInfo_0_5)), &conv8_STATE_VARIABLE_QualInfo_1_51, ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_7)), &conv7_STATE_VARIABLE_ErrSpecs_1_52, ((MR_Box) (STATE_VARIABLE_WarnSpecs_0_9)), &conv6_STATE_VARIABLE_WarnSpecs_1_53, ((MR_Box) (STATE_VARIABLE_InfoSpecs_0_11)), &conv5_STATE_VARIABLE_InfoSpecs_1_54);
      STATE_VARIABLE_ModuleInfo_1_50 = ((MR_Word) (conv9_STATE_VARIABLE_ModuleInfo_1_50));
      STATE_VARIABLE_QualInfo_1_51 = ((MR_Word) (conv8_STATE_VARIABLE_QualInfo_1_51));
      STATE_VARIABLE_ErrSpecs_1_52 = ((MR_Word) (conv7_STATE_VARIABLE_ErrSpecs_1_52));
      STATE_VARIABLE_WarnSpecs_1_53 = ((MR_Word) (conv6_STATE_VARIABLE_WarnSpecs_1_53));
      STATE_VARIABLE_InfoSpecs_1_54 = ((MR_Word) (conv5_STATE_VARIABLE_InfoSpecs_1_54));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ImsLists_31;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = STATE_VARIABLE_ModuleInfo_1_50;
      next_value_of_STATE_VARIABLE_QualInfo_0_5 = STATE_VARIABLE_QualInfo_1_51;
      next_value_of_STATE_VARIABLE_ErrSpecs_0_7 = STATE_VARIABLE_ErrSpecs_1_52;
      next_value_of_STATE_VARIABLE_WarnSpecs_0_9 = STATE_VARIABLE_WarnSpecs_1_53;
      next_value_of_STATE_VARIABLE_InfoSpecs_0_11 = STATE_VARIABLE_InfoSpecs_1_54;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ModuleInfo_0_3 = next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      STATE_VARIABLE_QualInfo_0_5 = next_value_of_STATE_VARIABLE_QualInfo_0_5;
      STATE_VARIABLE_ErrSpecs_0_7 = next_value_of_STATE_VARIABLE_ErrSpecs_0_7;
      STATE_VARIABLE_WarnSpecs_0_9 = next_value_of_STATE_VARIABLE_WarnSpecs_0_9;
      STATE_VARIABLE_InfoSpecs_0_11 = next_value_of_STATE_VARIABLE_InfoSpecs_0_11;
      continue;
    }
    break;
  }
}

void mercury__hlds__make_hlds__add_pragma_decl__init(void)
{
}

void mercury__hlds__make_hlds__add_pragma_decl__init_type_tables(void)
{
}

void mercury__hlds__make_hlds__add_pragma_decl__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__add_pragma_decl__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.add_pragma_decl.
