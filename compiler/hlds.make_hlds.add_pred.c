/*
** Automatically generated from `add_pred.m'
** by the Mercury compiler,
** version rotd-2025-09-08
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


// :- module hlds.make_hlds.add_pred.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__add_pred__init
ENDINIT
*/

#include "hlds.make_hlds.add_pred.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
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
#include "hlds.hlds_args.mih"
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
#include "hlds.var_table_hlds.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.check_field_access_functions.mih"
#include "hlds.make_hlds.make_hlds_types.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pred__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pred__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_DuFunctorDesc hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__du_functor_desc_maybe_stub_0_0;

static const MR_PseudoTypeInfo hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__field_types_maybe_stub_0_1[1];

static const MR_DuFunctorDesc hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__du_functor_desc_maybe_stub_0_1;

static const MR_DuFunctorDescPtr hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__du_stag_ordered_maybe_stub_0_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__du_stag_ordered_maybe_stub_0_1[1];

static const MR_DuPtagLayout hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__du_ptag_ordered_maybe_stub_0[2];

static const MR_DuFunctorDescPtr hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__du_name_ordered_maybe_stub_0[2];

static const MR_Integer hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__functor_number_map_maybe_stub_0[2];

static const MR_EnumFunctorDesc hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__enum_functor_desc_part_of_predmode_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__enum_functor_desc_part_of_predmode_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__enum_ordinal_ordered_part_of_predmode_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__enum_name_ordered_part_of_predmode_0[2];

static const MR_Integer hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__functor_number_map_part_of_predmode_0[2];

static MR_bool MR_CALL 
hlds__make_hlds__add_pred__IntroducedFrom__pred__module_add_mode_decl__779__1_2_p_0(
  MR_Word WithInst_22,
  MR_Word HeadVar__2_57);

static MR_bool MR_CALL 
hlds__make_hlds__add_pred__IntroducedFrom__pred__module_add_pred_decl__193__1_2_p_0(
  MR_Word NewPredId_45,
  MR_Word ModePredId_49);

static MR_bool MR_CALL 
hlds__make_hlds__add_pred__IntroducedFrom__pred__module_add_pred_decl__147__1_2_p_0(
  MR_Word WithInst_21,
  MR_Word HeadVar__2_64);

static MR_bool MR_CALL 
hlds__make_hlds__add_pred__IntroducedFrom__pred__module_add_pred_decl__146__1_2_p_0(
  MR_Word WithType_20,
  MR_Word HeadVar__2_60);

static void MR_CALL 
hlds__make_hlds__add_pred____Compare____maybe_stub_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pred____Unify____maybe_stub_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
hlds__make_hlds__add_pred__module_add_pred_decl_9_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__make_hlds__add_pred__module_add_pred_decl_9_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__make_hlds__add_pred__module_add_pred_decl_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__add_pred__add_new_pred_20_p_0(
  MR_Word PredOrigin_21,
  MR_Word Context_22,
  MR_Word SeqNum_23,
  MR_Word PredStatus0_24,
  MR_Word NeedQual_25,
  MR_Word PredOrFunc_26,
  MR_Word PredModuleName_27,
  MR_String PredName_28,
  MR_Word TVarSet_29,
  MR_Word ExistQVars_30,
  MR_Word Types_31,
  MR_Word Constraints_32,
  MR_Word PredmodeDecl_33,
  MR_Word Purity_34,
  MR_Word Markers0_35,
  MR_Word * MaybeNewPredId_36,
  MR_Word STATE_VARIABLE_ModuleInfo_0_67,
  MR_Word * STATE_VARIABLE_ModuleInfo_68,
  MR_Word STATE_VARIABLE_Specs_0_69,
  MR_Word * STATE_VARIABLE_Specs_70);

static void MR_CALL 
hlds__make_hlds__add_pred__add_builtin_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word CompilationTarget_8,
  MR_Word PredId_9,
  MR_Word HeadTypes0_10,
  MR_Word STATE_VARIABLE_PredInfo_0_62,
  MR_Word * STATE_VARIABLE_PredInfo_63);

static void MR_CALL 
hlds__make_hlds__add_pred__report_any_unqualified_type_5_p_0(
  MR_Word PredSymName_6,
  MR_Word Context_7,
  MR_Word Type_8,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
hlds__make_hlds__add_pred__report_any_unqualified_types_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5);

static void MR_CALL 
hlds__make_hlds__add_pred__check_for_modeless_predmode_decl_8_p_0(
  MR_Word PredStatus_9,
  MR_Word PredOrFunc_10,
  MR_Word PredSymName_11,
  MR_Word ArgTypes_12,
  MR_Word MaybeDetism_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

static void MR_CALL 
hlds__make_hlds__add_pred__record_pred_origin_7_p_0(
  MR_Word PredOrFunc_8,
  MR_Word PredSymName_9,
  MR_Word UserArity_10,
  MR_Word Origin_11,
  MR_Word Context_12,
  MR_Word * PredOrigin_13,
  MR_Word * Markers_14);

static void MR_CALL 
hlds__make_hlds__add_pred__compute_arg_types_maybe_modes_7_p_0(
  MR_Word PredOrFunc_8,
  MR_Word ArgTypesAndMaybeModes_9,
  MR_Word MaybeDetism_10,
  MR_Word * UserArity_11,
  MR_Word * ArgTypes_12,
  MR_Word * MaybeArgModes_13,
  MR_Word * PredmodeDecl_14);

static MR_bool MR_CALL 
hlds__make_hlds__add_pred__module_add_mode_decl_10_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__add_pred__module_do_add_mode_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word PartOfPredmode_12,
  MR_Word IsClassMethod_13,
  MR_Word ItemMercuryStatus_14,
  MR_Word ItemModeDecl_15,
  MR_Word STATE_VARIABLE_PredInfo_0_39,
  MR_Word * STATE_VARIABLE_PredInfo_40,
  MR_Integer * ProcId_17,
  MR_Word STATE_VARIABLE_Specs_0_41,
  MR_Word * STATE_VARIABLE_Specs_42);

static void MR_CALL 
hlds__make_hlds__add_pred__check_for_mode_decl_in_wrong_section_8_p_0(
  MR_Word PredDeclSection_9,
  MR_Word ItemExport_10,
  MR_Word PredOrFunc_11,
  MR_String PredName_12,
  MR_Word PredFormArity_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

static void MR_CALL 
hlds__make_hlds__add_pred__check_that_detism_is_declared_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word PredInfo_13,
  MR_Word IsClassMethod_14,
  MR_Word PredOrFunc_15,
  MR_String PredName_16,
  MR_Word PredFormArity_17,
  MR_Word MaybeDetism_18,
  MR_Word Context_19,
  MR_Word * DetismDecl_20,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28);

static void MR_CALL 
hlds__make_hlds__add_pred__maybe_report_unspecified_det_for_local_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PorF_9,
  MR_Word SymName_10,
  MR_Word PredFormArity_11,
  MR_Word Context_12,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

static MR_bool MR_CALL 
hlds__make_hlds__add_pred____Unify____maybe_stub_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pred____Compare____maybe_stub_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pred____Unify____part_of_predmode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pred____Compare____part_of_predmode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_1[94][2];

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_2[4][1];

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_3[2][3];

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_4[3][5];




static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_1[94][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: you cannot declare"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "whose name is a variable."))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: you cannot declare a mode for a"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "predicate"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[15])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has its"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "combined with a mode declaration, so"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[21])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "it may not have a separate mode declaration."))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: predicate"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declares a determinism"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[28]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the modes of its arguments."))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[30]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "without declaring"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[31])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: unqualified type"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in automatically generated interface file."))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The problem is that the definition of this type"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is not visible in the source file of the"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[9])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[39])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "or a missing"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[41])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "either a typo in the type name,"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[43])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The cause is probably"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[45])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "module."))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[47])))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_2[3]))
  },
  /* row  51 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: mode declaration in the"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[54]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "section"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[56]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[59]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "It should be in the"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[61]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "section,"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[63]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "because the corresponding"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration is there."))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[9])))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "no determinism declaration"))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[69]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for type class method"))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for exported"))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for local"))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the determinism of local predicates.)"))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[9])))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "if you want the compiler to automatically infer"))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[75])))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "option"))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[77])))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--infer-det"))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[79])))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Use the"))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[81])))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "option."))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[83])))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--no-infer-det"))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[85])))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "you specified the"))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[87])))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "(This is an error because"))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[89])))
  },
  /* row  92 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[91])))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_mkword(2, &hlds__make_hlds__add_pred_scalar_common_1[92]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_2[4][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   3 */
  { ((MR_Box) ((MR_Integer) 0)) },
};

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_3[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[50]))),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pred_scalar_common_4[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_pred__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&hlds__make_hlds__add_pred__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_pred__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pred__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pred__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pred__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_DuFunctorDesc hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__du_functor_desc_maybe_stub_0_0 = {
  (MR_String) "stub",
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

static const MR_PseudoTypeInfo hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__field_types_maybe_stub_0_1[1] = { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0) };

static const MR_DuFunctorDesc hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__du_functor_desc_maybe_stub_0_1 = {
  (MR_String) "non_stub",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__field_types_maybe_stub_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__du_stag_ordered_maybe_stub_0_0[1] = { &hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__du_functor_desc_maybe_stub_0_0 };

static const MR_DuFunctorDescPtr hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__du_stag_ordered_maybe_stub_0_1[1] = { &hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__du_functor_desc_maybe_stub_0_1 };

static const MR_DuPtagLayout hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__du_ptag_ordered_maybe_stub_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__du_stag_ordered_maybe_stub_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__du_stag_ordered_maybe_stub_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__du_name_ordered_maybe_stub_0[2] = {
  &hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__du_functor_desc_maybe_stub_0_1,
  &hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__du_functor_desc_maybe_stub_0_0
};

static const MR_Integer hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__functor_number_map_maybe_stub_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__type_ctor_info_maybe_stub_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__add_pred____Unify____maybe_stub_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_pred____Compare____maybe_stub_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_pred",
  (MR_String) "maybe_stub",
  { hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__du_name_ordered_maybe_stub_0 },
  { hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__du_ptag_ordered_maybe_stub_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__functor_number_map_maybe_stub_0,

};

static const MR_EnumFunctorDesc hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__enum_functor_desc_part_of_predmode_0_0 = {
  (MR_String) "not_part_of_predmode",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__enum_functor_desc_part_of_predmode_0_1 = {
  (MR_String) "part_of_predmode",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__enum_ordinal_ordered_part_of_predmode_0[2] = {
  &hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__enum_functor_desc_part_of_predmode_0_0,
  &hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__enum_functor_desc_part_of_predmode_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__enum_name_ordered_part_of_predmode_0[2] = {
  &hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__enum_functor_desc_part_of_predmode_0_0,
  &hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__enum_functor_desc_part_of_predmode_0_1
};

static const MR_Integer hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__functor_number_map_part_of_predmode_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__type_ctor_info_part_of_predmode_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__add_pred____Unify____part_of_predmode_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_pred____Compare____part_of_predmode_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_pred",
  (MR_String) "part_of_predmode",
  { hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__enum_name_ordered_part_of_predmode_0 },
  { hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__enum_ordinal_ordered_part_of_predmode_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__functor_number_map_part_of_predmode_0,

};

static MR_bool MR_CALL 
hlds__make_hlds__add_pred__IntroducedFrom__pred__module_add_mode_decl__779__1_2_p_0(
  MR_Word WithInst_22,
  MR_Word HeadVar__2_57)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_pred_scalar_common_1[1]), ((MR_Box) (WithInst_22)), ((MR_Box) (HeadVar__2_57)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pred__IntroducedFrom__pred__module_add_pred_decl__193__1_2_p_0(
  MR_Word NewPredId_45,
  MR_Word ModePredId_49)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_pred____Unify____pred_id_0_0(NewPredId_45, ModePredId_49);
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pred__IntroducedFrom__pred__module_add_pred_decl__147__1_2_p_0(
  MR_Word WithInst_21,
  MR_Word HeadVar__2_64)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_pred_scalar_common_1[1]), ((MR_Box) (WithInst_21)), ((MR_Box) (HeadVar__2_64)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pred__IntroducedFrom__pred__module_add_pred_decl__146__1_2_p_0(
  MR_Word WithType_20,
  MR_Word HeadVar__2_60)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_pred_scalar_common_1[0]), ((MR_Box) (WithType_20)), ((MR_Box) (HeadVar__2_60)));
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__add_pred____Compare____part_of_predmode_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
hlds__make_hlds__add_pred____Unify____part_of_predmode_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pred____Compare____maybe_stub_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
    MR_Word ArgY1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

    hlds__hlds_goal____Compare____hlds_goal_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pred____Unify____maybe_stub_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
      succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pred__module_add_pred_decl_9_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__add_pred__IntroducedFrom__pred__module_add_pred_decl__193__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pred__module_add_pred_decl_9_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__add_pred__IntroducedFrom__pred__module_add_pred_decl__147__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pred__module_add_pred_decl_9_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__add_pred__IntroducedFrom__pred__module_add_pred_decl__146__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__add_pred__module_add_pred_decl_9_p_0(
  MR_Word ItemMercuryStatus_10,
  MR_Word PredStatus_11,
  MR_Word NeedQual_12,
  MR_Word ItemPredDecl_13,
  MR_Word * MaybePredMaybeProcId_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_51,
  MR_Word * STATE_VARIABLE_ModuleInfo_52,
  MR_Word STATE_VARIABLE_Specs_0_53,
  MR_Word * STATE_VARIABLE_Specs_54)
{
  MR_bool succeeded;
  MR_Word PredSymName_17 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_13, 0))));
  MR_Word PredOrFunc_18 = ((MR_Unsigned) ((MR_hl_field(0, ItemPredDecl_13, 1))) & (MR_Integer) 1);
  MR_Word ArgTypesAndMaybeModes_19 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_13, 2))));
  MR_Word WithType_20 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_13, 3))));
  MR_Word WithInst_21 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_13, 4))));
  MR_Word MaybeDetism_22 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_13, 5))));
  MR_Word Origin_23 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_13, 6))));
  MR_Word TypeVarSet_24 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_13, 7))));
  MR_Word InstVarSet_25 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_13, 8))));
  MR_Word ExistQVars_26 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_13, 9))));
  MR_Word Purity_27 = ((MR_Unsigned) ((MR_hl_field(0, ItemPredDecl_13, 10))) & (MR_Integer) 3);
  MR_Word Constraints_28 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_13, 11))));
  MR_Word Context_29 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_13, 12))));
  MR_Word SeqNum_30 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_13, 13))));
  MR_Word PredModuleName_32;
  MR_String PredName_33;
  MR_Word Var_57;
  MR_Word Var_61;

  if (((MR_tag((MR_Word) PredSymName_17)) == (MR_Integer) 1))
  {
    PredModuleName_32 = ((MR_Word) ((MR_hl_field(1, PredSymName_17, 0))));
    PredName_33 = ((MR_String) ((MR_hl_field(1, PredSymName_17, 1))));
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_pred.module_add_pred_decl\'/9", (MR_String) "unqualified PredSymName");
      return;
    }
  {
    Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_57, 0) = ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_4[1]));
    MR_hl_field(0, Var_57, 1) = ((MR_Box) (hlds__make_hlds__add_pred__module_add_pred_decl_9_p_0_1));
    MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_57, 3) = ((MR_Box) (WithType_20));
    MR_hl_field(0, Var_57, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_57, (MR_String) "predicate \140hlds.make_hlds.add_pred.module_add_pred_decl\'/9", (MR_String) "WithType != no");
  {
    Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_61, 0) = ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_4[0]));
    MR_hl_field(0, Var_61, 1) = ((MR_Box) (hlds__make_hlds__add_pred__module_add_pred_decl_9_p_0_2));
    MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_61, 3) = ((MR_Box) (WithInst_21));
    MR_hl_field(0, Var_61, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_61, (MR_String) "predicate \140hlds.make_hlds.add_pred.module_add_pred_decl\'/9", (MR_String) "WithInst != no");
  succeeded = (strcmp(PredName_33, (MR_String) "") == 0);
  if (succeeded)
  {
    MR_String PredOrFuncStr_34;
    MR_Word Pieces_35;
    MR_Word Spec_36;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_77;
    MR_Word Var_78;

    PredOrFuncStr_34 = mdbcomp__prim_data__pred_or_func_to_full_str_1_f_0(PredOrFunc_18);
    {
      Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_75, 1) = ((MR_Box) (PredOrFuncStr_34));
    }
    {
      Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_74, 0) = ((MR_Box) (Var_75));
      MR_hl_field(1, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_71, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[6])));
      MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_74));
    }
    Var_70 = parse_tree__error_spec__color_as_subject_1_f_0(Var_71);
    Var_78 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[8])));
    Var_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_78, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[9])));
    Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_70, Var_77);
    Pieces_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[5])), Var_69);
    {
      Spec_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_36, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pred.module_add_pred_decl\'/9"));
      MR_hl_field(0, Spec_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_36, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_36, 3) = ((MR_Box) (Context_29));
      MR_hl_field(0, Spec_36, 4) = ((MR_Box) (Pieces_35));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_54 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_36));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_53));
    }
    *MaybePredMaybeProcId_14 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ModuleInfo_52 = STATE_VARIABLE_ModuleInfo_0_51;
  }
  else
  {
    MR_Word UserArity_37;
    MR_Word ArgTypes_38;
    MR_Word MaybeArgModes_39;
    MR_Word PredmodeDecl_40;
    MR_Word PredOrigin_41;
    MR_Word Markers_42;
    MR_Word MaybeNewPredId_43;
    MR_Word STATE_VARIABLE_ModuleInfo_1_90;
    MR_Word STATE_VARIABLE_Specs_2_91;

    hlds__make_hlds__add_pred__compute_arg_types_maybe_modes_7_p_0(PredOrFunc_18, ArgTypesAndMaybeModes_19, MaybeDetism_22, &UserArity_37, &ArgTypes_38, &MaybeArgModes_39, &PredmodeDecl_40);
    hlds__make_hlds__add_pred__record_pred_origin_7_p_0(PredOrFunc_18, PredSymName_17, UserArity_37, Origin_23, Context_29, &PredOrigin_41, &Markers_42);
    hlds__make_hlds__add_pred__add_new_pred_20_p_0(PredOrigin_41, Context_29, SeqNum_30, PredStatus_11, NeedQual_12, PredOrFunc_18, PredModuleName_32, PredName_33, TypeVarSet_24, ExistQVars_26, ArgTypes_38, Constraints_28, PredmodeDecl_40, Purity_27, Markers_42, &MaybeNewPredId_43, STATE_VARIABLE_ModuleInfo_0_51, &STATE_VARIABLE_ModuleInfo_1_90, STATE_VARIABLE_Specs_0_53, &STATE_VARIABLE_Specs_2_91);
    if ((MaybeArgModes_39 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      if ((MaybeNewPredId_43 == (MR_Word) ((MR_Unsigned) 0U)))
        *MaybePredMaybeProcId_14 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Var_102;
        MR_Word NewPredId_105 = ((MR_Word) ((MR_hl_field(1, MaybeNewPredId_43, 0))));

        {
          Var_102 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_102, 0) = ((MR_Box) (NewPredId_105));
          MR_hl_field(0, Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybePredMaybeProcId_14 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_102));
        }
      }
      hlds__make_hlds__add_pred__check_for_modeless_predmode_decl_8_p_0(PredStatus_11, PredOrFunc_18, PredSymName_17, ArgTypes_38, MaybeDetism_22, Context_29, STATE_VARIABLE_Specs_2_91, STATE_VARIABLE_Specs_54);
      *STATE_VARIABLE_ModuleInfo_52 = STATE_VARIABLE_ModuleInfo_1_90;
    }
    else
    {
      MR_Word ArgModes_44 = ((MR_Word) ((MR_hl_field(1, MaybeArgModes_39, 0))));

      if ((MaybeNewPredId_43 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *MaybePredMaybeProcId_14 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_ModuleInfo_52 = STATE_VARIABLE_ModuleInfo_1_90;
        *STATE_VARIABLE_Specs_54 = STATE_VARIABLE_Specs_2_91;
      }
      else
      {
        MR_Word NewPredId_45 = ((MR_Word) ((MR_hl_field(1, MaybeNewPredId_43, 0))));
        MR_Word IsClassMethod_46;
        MR_Word ItemModeDecl_47;
        MR_Word ModePredProcId_48;
        MR_Word ModePredId_49;
        MR_Integer ModeProcId_50;
        MR_Word Var_93;
        MR_Word Var_97;
        MR_Word Var_100;
        MR_Word Var_101;

        succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_42, (MR_Integer) 12);
        if (succeeded)
          IsClassMethod_46 = (MR_Integer) 1;
        else
          IsClassMethod_46 = (MR_Integer) 0;
        {
          Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_93, 0) = ((MR_Box) (PredOrFunc_18));
        }
        {
          ItemModeDecl_47 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ItemModeDecl_47, 0) = ((MR_Box) (PredSymName_17));
          MR_hl_field(0, ItemModeDecl_47, 1) = ((MR_Box) (Var_93));
          MR_hl_field(0, ItemModeDecl_47, 2) = ((MR_Box) (ArgModes_44));
          MR_hl_field(0, ItemModeDecl_47, 3) = ((MR_Box) (WithInst_21));
          MR_hl_field(0, ItemModeDecl_47, 4) = ((MR_Box) (MaybeDetism_22));
          MR_hl_field(0, ItemModeDecl_47, 5) = ((MR_Box) (InstVarSet_25));
          MR_hl_field(0, ItemModeDecl_47, 6) = ((MR_Box) (Context_29));
          MR_hl_field(0, ItemModeDecl_47, 7) = ((MR_Box) (SeqNum_30));
        }
        hlds__make_hlds__add_pred__module_add_mode_decl_10_p_0((MR_Integer) 1, IsClassMethod_46, ItemMercuryStatus_10, PredStatus_11, ItemModeDecl_47, &ModePredProcId_48, STATE_VARIABLE_ModuleInfo_1_90, STATE_VARIABLE_ModuleInfo_52, STATE_VARIABLE_Specs_2_91, STATE_VARIABLE_Specs_54);
        ModePredId_49 = ((MR_Word) ((MR_hl_field(0, ModePredProcId_48, 0))));
        ModeProcId_50 = ((MR_Integer) ((MR_hl_field(0, ModePredProcId_48, 1))));
        {
          Var_97 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_97, 0) = ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_4[2]));
          MR_hl_field(0, Var_97, 1) = ((MR_Box) (hlds__make_hlds__add_pred__module_add_pred_decl_9_p_0_3));
          MR_hl_field(0, Var_97, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_97, 3) = ((MR_Box) (NewPredId_45));
          MR_hl_field(0, Var_97, 4) = ((MR_Box) (ModePredId_49));
        }
        mercury__require__expect_3_p_0(Var_97, (MR_String) "predicate \140hlds.make_hlds.add_pred.module_add_pred_decl\'/9", (MR_String) "NewPredId != ModePredId");
        {
          Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_101, 0) = ((MR_Box) (ModeProcId_50));
        }
        {
          Var_100 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_100, 0) = ((MR_Box) (NewPredId_45));
          MR_hl_field(0, Var_100, 1) = ((MR_Box) (Var_101));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybePredMaybeProcId_14 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_100));
        }
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pred__add_new_pred_20_p_0(
  MR_Word PredOrigin_21,
  MR_Word Context_22,
  MR_Word SeqNum_23,
  MR_Word PredStatus0_24,
  MR_Word NeedQual_25,
  MR_Word PredOrFunc_26,
  MR_Word PredModuleName_27,
  MR_String PredName_28,
  MR_Word TVarSet_29,
  MR_Word ExistQVars_30,
  MR_Word Types_31,
  MR_Word Constraints_32,
  MR_Word PredmodeDecl_33,
  MR_Word Purity_34,
  MR_Word Markers0_35,
  MR_Word * MaybeNewPredId_36,
  MR_Word STATE_VARIABLE_ModuleInfo_0_67,
  MR_Word * STATE_VARIABLE_ModuleInfo_68,
  MR_Word STATE_VARIABLE_Specs_0_69,
  MR_Word * STATE_VARIABLE_Specs_70)
{
  MR_bool succeeded;
  MR_Word PredStatus_39;
  MR_Word PredFormArity_40;
  MR_Word PredSymName_41;
  MR_Word MaybeCurUserDecl_42;
  MR_Word PredTable0_44;
  MR_Word ClausesInfo_45;
  MR_Word Proofs_46;
  MR_Word ConstraintMap_47;
  MR_Word PurityMarkers_48;
  MR_Word Markers_49;
  MR_Word VarNameRemap_50;
  MR_Word PredInfo0_51;
  MR_Word MaybeOrigPredId_52;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word STATE_VARIABLE_Specs_1_79;
  MR_Word DefnThisModule_92;
  MR_Word Var_71 = (MR_Word) (PredStatus0_24);
  MR_Word ItemExport_89;
  MR_Word OldItemStatus_88;

  succeeded = (Var_71 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    PredStatus_39 = (MR_Word) (((MR_Box) (MR_mkword(2, &hlds__make_hlds__add_pred_scalar_common_2[2]))));
  else
    PredStatus_39 = PredStatus0_24;
  PredFormArity_40 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types_31);
  {
    PredSymName_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PredSymName_41, 0) = ((MR_Box) (PredModuleName_27));
    MR_hl_field(1, PredSymName_41, 1) = ((MR_Box) (PredName_28));
  }
  OldItemStatus_88 = (MR_Word) (PredStatus_39);
  switch (MR_tag((MR_Word) OldItemStatus_88)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      switch (MR_unmkbody(OldItemStatus_88)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 3:
          {
            ItemExport_89 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 7:
          {
            ItemExport_89 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 8:
          {
            ItemExport_89 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
  }
  if (succeeded)
  {
    MR_Word DeclSection_90;
    MR_Word Var_91;

    switch (ItemExport_89) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        DeclSection_90 = (MR_Integer) 0;
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        DeclSection_90 = (MR_Integer) 1;
        break;
    }
    {
      Var_91 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_91, 0) = (MR_Box) (((((MR_Unsigned) (DeclSection_90) << 1)) | (MR_Unsigned) (PredmodeDecl_33)));
      MR_hl_field(0, Var_91, 1) = ((MR_Box) (SeqNum_23));
    }
    {
      MaybeCurUserDecl_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeCurUserDecl_42, 0) = ((MR_Box) (Var_91));
    }
  }
  else
    MaybeCurUserDecl_42 = (MR_Word) ((MR_Unsigned) 0U);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_67, &PredTable0_44);
  {
    Var_75 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_75, 0) = ((MR_Box) (PredFormArity_40));
  }
  Var_76 = hlds__hlds_clauses__init_clause_item_numbers_user_0_f_0();
  hlds__hlds_clauses__clauses_info_init_4_p_0(PredOrFunc_26, Var_75, Var_76, &ClausesInfo_45);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), &Proofs_46);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), &ConstraintMap_47);
  hlds__hlds_markers__purity_to_markers_2_p_0(Purity_34, &PurityMarkers_48);
  hlds__hlds_markers__add_markers_3_p_0(PurityMarkers_48, Markers0_35, &Markers_49);
  mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__add_pred_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &VarNameRemap_50);
  hlds__hlds_pred__pred_info_init_19_p_0(PredOrFunc_26, PredModuleName_27, PredName_28, PredFormArity_40, Context_22, PredOrigin_21, PredStatus_39, MaybeCurUserDecl_42, (MR_Word) (&hlds__make_hlds__add_pred_scalar_common_2[0]), Markers_49, Types_31, TVarSet_29, ExistQVars_30, Constraints_32, Proofs_46, ConstraintMap_47, ClausesInfo_45, VarNameRemap_50, &PredInfo0_51);
  hlds__pred_table__predicate_table_search_pf_fqm_n_a_6_p_0(PredTable0_44, PredOrFunc_26, PredModuleName_27, PredName_28, PredFormArity_40, &MaybeOrigPredId_52);
  if ((MaybeOrigPredId_52 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word PQInfo_58;
    MR_Word PredId_59;
    MR_Word PredTable1_60;
    MR_Word PredTable_66;

    hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_67, &PQInfo_58);
    hlds__pred_table__predicate_table_insert_qual_6_p_0(PredInfo0_51, NeedQual_25, PQInfo_58, &PredId_59, PredTable0_44, &PredTable1_60);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeNewPredId_36 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (PredId_59));
    }
    succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(PredInfo0_51);
    if (succeeded)
    {
      MR_Word Globals_61;
      MR_Word CompilationTarget_62;
      MR_Word PredInfo_63;
      MR_Word PredIdTable1_64;
      MR_Word PredIdTable_65;

      hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_67, &Globals_61);
      libs__globals__get_target_2_p_0(Globals_61, &CompilationTarget_62);
      hlds__make_hlds__add_pred__add_builtin_6_p_0(STATE_VARIABLE_ModuleInfo_0_67, CompilationTarget_62, PredId_59, Types_31, PredInfo0_51, &PredInfo_63);
      hlds__pred_table__predicate_table_get_pred_id_table_2_p_0(PredTable1_60, &PredIdTable1_64);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_59)), ((MR_Box) (PredInfo_63)), PredIdTable1_64, &PredIdTable_65);
      hlds__pred_table__predicate_table_set_pred_id_table_3_p_0(PredIdTable_65, PredTable1_60, &PredTable_66);
    }
    else
      PredTable_66 = PredTable1_60;
    hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_66, STATE_VARIABLE_ModuleInfo_0_67, STATE_VARIABLE_ModuleInfo_68);
    STATE_VARIABLE_Specs_1_79 = STATE_VARIABLE_Specs_0_69;
  }
  else
  {
    MR_Word OrigPredId_53 = ((MR_Word) ((MR_hl_field(1, MaybeOrigPredId_52, 0))));
    MR_Word OrigPredInfo_54;
    MR_Word OrigContext_55;
    MR_Word Var_77;

    *MaybeNewPredId_36 = (MR_Word) ((MR_Unsigned) 0U);
    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_67, OrigPredId_53, &OrigPredInfo_54);
    hlds__hlds_pred__pred_info_get_context_2_p_0(OrigPredInfo_54, &OrigContext_55);
    Var_77 = (MR_Word) (PredStatus0_24);
    succeeded = (Var_77 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      STATE_VARIABLE_Specs_1_79 = STATE_VARIABLE_Specs_0_69;
    else
    {
      MR_String PredOrFuncStr_56;
      MR_Word UserArity_57;

      PredOrFuncStr_56 = mdbcomp__prim_data__pred_or_func_to_full_str_1_f_0(PredOrFunc_26);
      parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_26, &UserArity_57, PredFormArity_40);
      hlds__make_hlds_error__report_multiply_defined_8_p_0(PredOrFuncStr_56, PredSymName_41, UserArity_57, Context_22, OrigContext_55, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Specs_0_69, &STATE_VARIABLE_Specs_1_79);
    }
    *STATE_VARIABLE_ModuleInfo_68 = STATE_VARIABLE_ModuleInfo_0_67;
  }
  DefnThisModule_92 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus0_24);
  switch (DefnThisModule_92) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      hlds__make_hlds__add_pred__report_any_unqualified_types_5_p_0(PredSymName_41, Context_22, Types_31, STATE_VARIABLE_Specs_1_79, STATE_VARIABLE_Specs_70);
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Specs_70 = STATE_VARIABLE_Specs_1_79;
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pred__add_builtin_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word CompilationTarget_8,
  MR_Word PredId_9,
  MR_Word HeadTypes0_10,
  MR_Word STATE_VARIABLE_PredInfo_0_62,
  MR_Word * STATE_VARIABLE_PredInfo_63)
{
  MR_bool succeeded;
  MR_Word ModuleName_12;
  MR_String Name_13;
  MR_Word Context_14;
  MR_Word ClausesInfo0_15;
  MR_Word VarSet0_16;
  MR_Word ProcArgVector_17;
  MR_Word HeadVars0_18;
  MR_Word GoalInfo0_19;
  MR_Word NonLocals_20;
  MR_Word GoalInfo1_21;
  MR_Word HeadVars_23;
  MR_Word HeadTypes_24;
  MR_Word VarSet_25;
  MR_Word MaybeStub_26;
  MR_Word ExplicitVarTypes_52;
  MR_Word VarTable_53;
  MR_Word RttiVarMaps_54;
  MR_Word TVarNameMap_55;
  MR_Word Markers_60;
  MR_Word Var_112;
  MR_Word STATE_VARIABLE_PredInfo_1_115;
  MR_Word Var_131;

  ModuleName_12 = hlds__hlds_pred__pred_info_module_1_f_0(STATE_VARIABLE_PredInfo_0_62);
  Name_13 = hlds__hlds_pred__pred_info_name_1_f_0(STATE_VARIABLE_PredInfo_0_62);
  hlds__hlds_pred__pred_info_get_context_2_p_0(STATE_VARIABLE_PredInfo_0_62, &Context_14);
  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_0_62, &ClausesInfo0_15);
  hlds__hlds_clauses__clauses_info_get_varset_2_p_0(ClausesInfo0_15, &VarSet0_16);
  hlds__hlds_clauses__clauses_info_get_arg_vector_2_p_0(ClausesInfo0_15, &ProcArgVector_17);
  HeadVars0_18 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&hlds__make_hlds__add_pred_scalar_common_1[3]), ProcArgVector_17);
  hlds__hlds_goal__goal_info_init_2_p_0(Context_14, &GoalInfo0_19);
  NonLocals_20 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars0_18);
  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_20, GoalInfo0_19, &GoalInfo1_21);
  Var_131 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_12, Var_131);
  if (succeeded)
  {
    succeeded = (strcmp(Name_13, (MR_String) "store_at_ref_impure") == 0);
    if (succeeded)
      switch (CompilationTarget_8) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          succeeded = MR_TRUE;
          break;
      }
  }
  if (succeeded)
  {
    HeadVars_23 = HeadVars0_18;
    HeadTypes_24 = HeadTypes0_10;
    VarSet_25 = VarSet0_16;
    MaybeStub_26 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    {
      MR_Word Var_132;

      Var_132 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_12, Var_132);
      if (succeeded)
        succeeded = (strcmp(Name_13, (MR_String) "trace_get_io_state") == 0);
    }
    if (!(succeeded))
    {
      MR_Word Var_133;

      Var_133 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_12, Var_133);
      if (succeeded)
        succeeded = (strcmp(Name_13, (MR_String) "unsafe_get_io_state") == 0);
    }
    if (succeeded)
    {
      MR_Word LHS_29;
      MR_Word UnifyMode_31;
      MR_Word Unification_32;
      MR_Word AssignExpr_34;
      MR_Word GoalInfoWithZero_35;
      MR_Word AssignGoal_36;
      MR_Word CastExpr_37;
      MR_Word GoalInfoWithZeroHeadVars_38;
      MR_Word CastGoal_39;
      MR_Word ConjExpr_40;
      MR_Word ConjGoal_41;
      MR_Word GoalExpr_43;
      MR_Word Var_64;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_74;
      MR_Word Var_81;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_91;
      MR_Word Var_93;
      MR_Word Var_94;
      MR_Word Var_97;

      mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &LHS_29, VarSet0_16, &VarSet_25);
      {
        HeadVars_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVars_23, 0) = ((MR_Box) (LHS_29));
        MR_hl_field(1, HeadVars_23, 1) = ((MR_Box) (HeadVars0_18));
      }
      Var_64 = parse_tree__builtin_lib_types__int_type_0_f_0();
      {
        HeadTypes_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadTypes_24, 0) = ((MR_Box) (Var_64));
        MR_hl_field(1, HeadTypes_24, 1) = ((MR_Box) (HeadTypes0_10));
      }
      Var_70 = parse_tree__prog_mode__ground_inst_0_f_0();
      Var_71 = parse_tree__prog_mode__ground_inst_0_f_0();
      Var_72 = parse_tree__prog_mode__ground_inst_0_f_0();
      {
        UnifyMode_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, UnifyMode_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, UnifyMode_31, 1) = ((MR_Box) (Var_70));
        MR_hl_field(0, UnifyMode_31, 2) = ((MR_Box) (Var_71));
        MR_hl_field(0, UnifyMode_31, 3) = ((MR_Box) (Var_72));
      }
      {
        Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_74, 0) = ((MR_Box) (UnifyMode_31));
        MR_hl_field(1, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Unification_32 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Unification_32, 0) = ((MR_Box) (LHS_29));
        MR_hl_field(0, Unification_32, 1) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[50])));
        MR_hl_field(0, Unification_32, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Unification_32, 3) = ((MR_Box) (Var_74));
        MR_hl_field(0, Unification_32, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Unification_32, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(0, Unification_32, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        AssignExpr_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, AssignExpr_34, 0) = ((MR_Box) (LHS_29));
        MR_hl_field(1, AssignExpr_34, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_3[0])));
        MR_hl_field(1, AssignExpr_34, 2) = ((MR_Box) (UnifyMode_31));
        MR_hl_field(1, AssignExpr_34, 3) = ((MR_Box) (Unification_32));
        MR_hl_field(1, AssignExpr_34, 4) = ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_1[51]));
      }
      Var_81 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LHS_29);
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(Var_81, GoalInfo0_19, &GoalInfoWithZero_35);
      {
        AssignGoal_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, AssignGoal_36, 0) = ((MR_Box) (AssignExpr_34));
        MR_hl_field(0, AssignGoal_36, 1) = ((MR_Box) (GoalInfoWithZero_35));
      }
      Var_85 = parse_tree__prog_mode__in_mode_0_f_0();
      Var_87 = parse_tree__prog_mode__uo_mode_0_f_0();
      {
        Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_86, 0) = ((MR_Box) (Var_87));
        MR_hl_field(1, Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_84, 0) = ((MR_Box) (Var_85));
        MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_86));
      }
      {
        CastExpr_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, CastExpr_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, CastExpr_37, 1) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_2[2])));
        MR_hl_field(3, CastExpr_37, 2) = ((MR_Box) (HeadVars_23));
        MR_hl_field(3, CastExpr_37, 3) = ((MR_Box) (Var_84));
        MR_hl_field(3, CastExpr_37, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, CastExpr_37, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      Var_91 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_23);
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(Var_91, GoalInfo0_19, &GoalInfoWithZeroHeadVars_38);
      {
        CastGoal_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, CastGoal_39, 0) = ((MR_Box) (CastExpr_37));
        MR_hl_field(0, CastGoal_39, 1) = ((MR_Box) (GoalInfoWithZeroHeadVars_38));
      }
      {
        Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_94, 0) = ((MR_Box) (CastGoal_39));
        MR_hl_field(1, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_93, 0) = ((MR_Box) (AssignGoal_36));
        MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_94));
      }
      {
        ConjExpr_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ConjExpr_40, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, ConjExpr_40, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(3, ConjExpr_40, 2) = ((MR_Box) (Var_93));
      }
      {
        ConjGoal_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ConjGoal_41, 0) = ((MR_Box) (ConjExpr_40));
        MR_hl_field(0, ConjGoal_41, 1) = ((MR_Box) (GoalInfoWithZeroHeadVars_38));
      }
      {
        GoalExpr_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, GoalExpr_43, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, GoalExpr_43, 1) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[52])));
        MR_hl_field(3, GoalExpr_43, 2) = ((MR_Box) (ConjGoal_41));
      }
      {
        Var_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_97, 0) = ((MR_Box) (GoalExpr_43));
        MR_hl_field(0, Var_97, 1) = ((MR_Box) (GoalInfo1_21));
      }
      MaybeStub_26 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_97)));
    }
    else
    {
      {
        MR_Word Var_134;

        Var_134 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_12, Var_134);
        if (succeeded)
          succeeded = (strcmp(Name_13, (MR_String) "trace_set_io_state") == 0);
      }
      if (!(succeeded))
      {
        MR_Word Var_135;

        Var_135 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_12, Var_135);
        if (succeeded)
          succeeded = (strcmp(Name_13, (MR_String) "unsafe_set_io_state") == 0);
      }
      if (succeeded)
      {
        MR_Word Var_101;
        MR_Word ConjGoal_121;
        MR_Word GoalExpr_123;

        {
          ConjGoal_121 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ConjGoal_121, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_3[1])));
          MR_hl_field(0, ConjGoal_121, 1) = ((MR_Box) (GoalInfo1_21));
        }
        {
          GoalExpr_123 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, GoalExpr_123, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, GoalExpr_123, 1) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[53])));
          MR_hl_field(3, GoalExpr_123, 2) = ((MR_Box) (ConjGoal_121));
        }
        HeadVars_23 = HeadVars0_18;
        HeadTypes_24 = HeadTypes0_10;
        VarSet_25 = VarSet0_16;
        {
          Var_101 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_101, 0) = ((MR_Box) (GoalExpr_123));
          MR_hl_field(0, Var_101, 1) = ((MR_Box) (GoalInfo1_21));
        }
        MaybeStub_26 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_101)));
      }
      else
      {
        MR_Word SymName_45;
        MR_Integer ModeId_46;
        MR_Word Purity_48;
        MR_Word Var_103;
        MR_Word GoalExpr_125;
        MR_Word GoalInfo_126;

        {
          SymName_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SymName_45, 0) = ((MR_Box) (ModuleName_12));
          MR_hl_field(1, SymName_45, 1) = ((MR_Box) (Name_13));
        }
        ModeId_46 = hlds__hlds_pred__invalid_proc_id_0_f_0();
        {
          GoalExpr_125 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, GoalExpr_125, 0) = ((MR_Box) (PredId_9));
          MR_hl_field(2, GoalExpr_125, 1) = ((MR_Box) (ModeId_46));
          MR_hl_field(2, GoalExpr_125, 2) = ((MR_Box) (HeadVars0_18));
          MR_hl_field(2, GoalExpr_125, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(2, GoalExpr_125, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, GoalExpr_125, 5) = ((MR_Box) (SymName_45));
        }
        hlds__hlds_pred__pred_info_get_purity_2_p_0(STATE_VARIABLE_PredInfo_0_62, &Purity_48);
        hlds__hlds_goal__goal_info_set_purity_3_p_0(Purity_48, GoalInfo1_21, &GoalInfo_126);
        HeadVars_23 = HeadVars0_18;
        HeadTypes_24 = HeadTypes0_10;
        VarSet_25 = VarSet0_16;
        {
          Var_103 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_103, 0) = ((MR_Box) (GoalExpr_125));
          MR_hl_field(0, Var_103, 1) = ((MR_Box) (GoalInfo_126));
        }
        MaybeStub_26 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_103)));
      }
    }
  }
  parse_tree__vartypes__vartypes_from_corresponding_lists_3_p_0(HeadVars_23, HeadTypes_24, &ExplicitVarTypes_52);
  hlds__var_table_hlds__corresponding_vars_types_to_var_table_5_p_0(ModuleInfo_7, VarSet_25, HeadVars_23, HeadTypes_24, &VarTable_53);
  hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&RttiVarMaps_54);
  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__make_hlds__add_pred_scalar_common_1[2]), &TVarNameMap_55);
  Var_112 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
  if ((MaybeStub_26 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Markers2_59;
    MR_Word ClausesRep_141;
    MR_Word ClausesInfo_142;
    MR_Word Markers0_143;
    MR_Word Markers1_144;

    hlds__hlds_clauses__set_clause_list_2_p_0((MR_Word) ((MR_Unsigned) 0U), &ClausesRep_141);
    {
      ClausesInfo_142 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ClausesInfo_142, 0) = ((MR_Box) (VarSet_25));
      MR_hl_field(0, ClausesInfo_142, 1) = ((MR_Box) (ExplicitVarTypes_52));
      MR_hl_field(0, ClausesInfo_142, 2) = ((MR_Box) (VarTable_53));
      MR_hl_field(0, ClausesInfo_142, 3) = ((MR_Box) (RttiVarMaps_54));
      MR_hl_field(0, ClausesInfo_142, 4) = ((MR_Box) (TVarNameMap_55));
      MR_hl_field(0, ClausesInfo_142, 5) = ((MR_Box) (ProcArgVector_17));
      MR_hl_field(0, ClausesInfo_142, 6) = ((MR_Box) (ClausesRep_141));
      MR_hl_field(0, ClausesInfo_142, 7) = ((MR_Box) (Var_112));
      MR_hl_field(0, ClausesInfo_142, 8) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
    }
    hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_142, STATE_VARIABLE_PredInfo_0_62, &STATE_VARIABLE_PredInfo_1_115);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_1_115, &Markers0_143);
    hlds__hlds_markers__add_marker_3_p_0((MR_Integer) 8, Markers0_143, &Markers1_144);
    hlds__hlds_markers__add_marker_3_p_0((MR_Integer) 0, Markers1_144, &Markers2_59);
    hlds__hlds_markers__add_marker_3_p_0((MR_Integer) 1, Markers2_59, &Markers_60);
  }
  else
  {
    MR_Word ClausesRep_49;
    MR_Word Goal_50 = (MR_Word) (MR_body((MR_Word) (MaybeStub_26), (MR_Integer) 1));
    MR_Word Clause_51;
    MR_Word ClausesInfo_56;
    MR_Word Markers0_57;
    MR_Word Var_108;
    MR_Word Var_110;

    Var_108 = hlds__hlds_clauses__init_unused_statevar_arg_map_0_f_0();
    {
      Clause_51 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Clause_51, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Clause_51, 1) = ((MR_Box) (Goal_50));
      MR_hl_field(0, Clause_51, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Clause_51, 3) = ((MR_Box) (Context_14));
      MR_hl_field(0, Clause_51, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Clause_51, 5) = ((MR_Box) (Var_108));
      MR_hl_field(0, Clause_51, 6) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    {
      Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_110, 0) = ((MR_Box) (Clause_51));
      MR_hl_field(1, Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    hlds__hlds_clauses__set_clause_list_2_p_0(Var_110, &ClausesRep_49);
    {
      ClausesInfo_56 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ClausesInfo_56, 0) = ((MR_Box) (VarSet_25));
      MR_hl_field(0, ClausesInfo_56, 1) = ((MR_Box) (ExplicitVarTypes_52));
      MR_hl_field(0, ClausesInfo_56, 2) = ((MR_Box) (VarTable_53));
      MR_hl_field(0, ClausesInfo_56, 3) = ((MR_Box) (RttiVarMaps_54));
      MR_hl_field(0, ClausesInfo_56, 4) = ((MR_Box) (TVarNameMap_55));
      MR_hl_field(0, ClausesInfo_56, 5) = ((MR_Box) (ProcArgVector_17));
      MR_hl_field(0, ClausesInfo_56, 6) = ((MR_Box) (ClausesRep_49));
      MR_hl_field(0, ClausesInfo_56, 7) = ((MR_Box) (Var_112));
      MR_hl_field(0, ClausesInfo_56, 8) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
    }
    hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_56, STATE_VARIABLE_PredInfo_0_62, &STATE_VARIABLE_PredInfo_1_115);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_1_115, &Markers0_57);
    hlds__hlds_markers__add_marker_3_p_0((MR_Integer) 8, Markers0_57, &Markers_60);
  }
  hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_60, STATE_VARIABLE_PredInfo_1_115, STATE_VARIABLE_PredInfo_63);
}

static void MR_CALL 
hlds__make_hlds__add_pred__report_any_unqualified_type_5_p_0(
  MR_Word PredSymName_6,
  MR_Word Context_7,
  MR_Word Type_8,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Type_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorSymName_10 = ((MR_Word) ((MR_hl_field(1, Type_8, 0))));
          MR_Word ArgTypes_11 = ((MR_Word) ((MR_hl_field(1, Type_8, 1))));
          MR_Word STATE_VARIABLE_Specs_1_70;

          if (((MR_tag((MR_Word) TypeCtorSymName_10)) == (MR_Integer) 1))
            STATE_VARIABLE_Specs_1_70 = STATE_VARIABLE_Specs_0_29;
          else
          {
            MR_String TypeCtorName_15 = ((MR_String) ((MR_hl_field(0, TypeCtorSymName_10, 0))));

            if (((MR_tag((MR_Word) PredSymName_6)) == (MR_Integer) 1))
            {
              MR_Word PredModuleName_16 = ((MR_Word) ((MR_hl_field(1, PredSymName_6, 0))));
              MR_Word Pieces_18;
              MR_Word Spec_19;
              MR_Word Var_33;
              MR_Word Var_34;
              MR_Word Var_35;
              MR_Word Var_38;
              MR_Word Var_41;
              MR_Word Var_44;
              MR_Word Var_45;

              {
                Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_34, 1) = ((MR_Box) (TypeCtorName_15));
              }
              {
                Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                MR_hl_field(3, Var_45, 1) = ((MR_Box) (PredModuleName_16));
              }
              {
                Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
                MR_hl_field(1, Var_44, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[49])));
              }
              {
                Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_41, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[37])));
                MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_44));
              }
              {
                Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_38, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[36])));
                MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_41));
              }
              {
                Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[35])));
                MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
              }
              {
                Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
                MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_35));
              }
              {
                Pieces_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_18, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[34])));
                MR_hl_field(1, Pieces_18, 1) = ((MR_Box) (Var_33));
              }
              {
                Spec_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pred.report_any_unqualified_type\'/5"));
                MR_hl_field(0, Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                MR_hl_field(0, Spec_19, 3) = ((MR_Box) (Context_7));
                MR_hl_field(0, Spec_19, 4) = ((MR_Box) (Pieces_18));
              }
              {
                STATE_VARIABLE_Specs_1_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_Specs_1_70, 0) = ((MR_Box) (Spec_19));
                MR_hl_field(1, STATE_VARIABLE_Specs_1_70, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_29));
              }
            }
            else
              STATE_VARIABLE_Specs_1_70 = STATE_VARIABLE_Specs_0_29;
          }
          hlds__make_hlds__add_pred__report_any_unqualified_types_5_p_0(PredSymName_6, Context_7, ArgTypes_11, STATE_VARIABLE_Specs_1_70, STATE_VARIABLE_Specs_30);
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Type_8, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgTypes_77 = ((MR_Word) ((MR_hl_field(3, Type_8, 1))));

              hlds__make_hlds__add_pred__report_any_unqualified_types_5_p_0(PredSymName_6, Context_7, ArgTypes_77, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgTypes_79 = ((MR_Word) ((MR_hl_field(3, Type_8, 2))));

              hlds__make_hlds__add_pred__report_any_unqualified_types_5_p_0(PredSymName_6, Context_7, ArgTypes_79, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgTypes_81 = ((MR_Word) ((MR_hl_field(3, Type_8, 2))));

              hlds__make_hlds__add_pred__report_any_unqualified_types_5_p_0(PredSymName_6, Context_7, ArgTypes_81, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubType_25 = ((MR_Word) ((MR_hl_field(3, Type_8, 1))));
              MR_Word next_value_of_Type_8 = SubType_25;

              // direct tailcall eliminated
              ;
              Type_8 = next_value_of_Type_8;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pred__report_any_unqualified_types_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
    else
    {
      MR_Word Type_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Types_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word STATE_VARIABLE_Specs_1_18;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      hlds__make_hlds__add_pred__report_any_unqualified_type_5_p_0(HeadVar__1_1, HeadVar__2_2, Type_13, STATE_VARIABLE_Specs_0_4, &STATE_VARIABLE_Specs_1_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Types_14;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_1_18;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pred__check_for_modeless_predmode_decl_8_p_0(
  MR_Word PredStatus_9,
  MR_Word PredOrFunc_10,
  MR_Word PredSymName_11,
  MR_Word ArgTypes_12,
  MR_Word MaybeDetism_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  MR_bool succeeded = (MaybeDetism_13 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Var_25;

  if (succeeded)
  {
    succeeded = (PredOrFunc_10 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (ArgTypes_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_25 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus_9);
        succeeded = (Var_25 == (MR_Integer) 1);
      }
    }
  }
  if (succeeded)
  {
    MR_Integer PredFormArity_19;
    MR_Word SNA_20;
    MR_Word Pieces_21;
    MR_Word Spec_22;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_35;
    MR_Word Var_40;
    MR_Word Var_41;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_12, &PredFormArity_19);
    {
      SNA_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SNA_20, 0) = ((MR_Box) (PredSymName_11));
      MR_hl_field(0, SNA_20, 1) = ((MR_Box) (PredFormArity_19));
    }
    {
      Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 15U));
      MR_hl_field(3, Var_33, 1) = ((MR_Box) (SNA_20));
    }
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_31 = parse_tree__error_spec__color_as_subject_1_f_0(Var_32);
    Var_41 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[33])));
    Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_41, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[9])));
    Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[29])), Var_40);
    Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, Var_35);
    Pieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[27])), Var_30);
    {
      Spec_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_22, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pred.check_for_modeless_predmode_decl\'/8"));
      MR_hl_field(0, Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_22, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_22, 3) = ((MR_Box) (Context_14));
      MR_hl_field(0, Spec_22, 4) = ((MR_Box) (Pieces_21));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_24 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_22));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
    }
  }
  else
    *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
}

static void MR_CALL 
hlds__make_hlds__add_pred__record_pred_origin_7_p_0(
  MR_Word PredOrFunc_8,
  MR_Word PredSymName_9,
  MR_Word UserArity_10,
  MR_Word Origin_11,
  MR_Word Context_12,
  MR_Word * PredOrigin_13,
  MR_Word * Markers_14)
{
  MR_Word Markers0_15;

  hlds__hlds_markers__init_markers_1_p_0(&Markers0_15);
  if ((Origin_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_29;

    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_29, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_8));
      MR_hl_field(0, Var_29, 1) = ((MR_Box) (PredSymName_9));
      MR_hl_field(0, Var_29, 2) = ((MR_Box) (UserArity_10));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *PredOrigin_13 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_29));
    }
    *Markers_14 = Markers0_15;
  }
  else
  {
    MR_Word CompilerAttrs_16 = ((MR_Word) ((MR_hl_field(1, Origin_11, 0))));
    MR_Word CompilerOrigin_17 = (MR_Word) (CompilerAttrs_16);

    switch (MR_tag((MR_Word) CompilerOrigin_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(CompilerOrigin_17)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String File_27 = ((MR_String) ((MR_hl_field(0, Context_12, 0))));
              MR_Integer Line_28 = ((MR_Integer) ((MR_hl_field(0, Context_12, 1))));
              MR_Word Var_36;

              {
                Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, Var_36, 1) = ((MR_Box) (File_27));
                MR_hl_field(3, Var_36, 2) = ((MR_Box) (Line_28));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *PredOrigin_13 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_36));
              }
              *Markers_14 = Markers0_15;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_37;
              MR_String File_38 = ((MR_String) ((MR_hl_field(0, Context_12, 0))));
              MR_Integer Line_39 = ((MR_Integer) ((MR_hl_field(0, Context_12, 1))));

              {
                Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, Var_37, 1) = ((MR_Box) (File_38));
                MR_hl_field(3, Var_37, 2) = ((MR_Box) (Line_39));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *PredOrigin_13 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_37));
              }
              *Markers_14 = Markers0_15;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ClassId_18 = ((MR_Word) ((MR_hl_field(1, CompilerOrigin_17, 0))));
          MR_Word MethodId_19 = ((MR_Word) ((MR_hl_field(1, CompilerOrigin_17, 1))));
          MR_Word Var_30;

          {
            Var_30 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_30, 0) = ((MR_Box) (ClassId_18));
            MR_hl_field(2, Var_30, 1) = ((MR_Box) (MethodId_19));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *PredOrigin_13 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_30));
          }
          hlds__hlds_markers__add_marker_3_p_0((MR_Integer) 12, Markers0_15, Markers_14);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeCtor_20 = ((MR_Word) ((MR_hl_field(2, CompilerOrigin_17, 0))));
          MR_Word SolverPredKind_21 = ((MR_Unsigned) ((MR_hl_field(2, CompilerOrigin_17, 1))) & (MR_Integer) 3);
          MR_Word Var_32;

          {
            Var_32 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_32, 0) = ((MR_Box) (TypeCtor_20));
            MR_hl_field(2, Var_32, 1) = (MR_Box) ((MR_Unsigned) (SolverPredKind_21));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *PredOrigin_13 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_32));
          }
          *Markers_14 = Markers0_15;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, CompilerOrigin_17, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ModuleName_24 = ((MR_Word) ((MR_hl_field(3, CompilerOrigin_17, 1))));
              MR_String MutableName_25 = ((MR_String) ((MR_hl_field(3, CompilerOrigin_17, 2))));
              MR_Word MutablePredKind_26 = ((MR_Unsigned) ((MR_hl_field(3, CompilerOrigin_17, 3))) & (MR_Integer) 15);
              MR_Word Var_34;

              {
                Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Var_34, 1) = ((MR_Box) (ModuleName_24));
                MR_hl_field(3, Var_34, 2) = ((MR_Box) (MutableName_25));
                MR_hl_field(3, Var_34, 3) = (MR_Box) ((MR_Unsigned) (MutablePredKind_26));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *PredOrigin_13 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_34));
              }
              hlds__hlds_markers__add_marker_3_p_0((MR_Integer) 25, Markers0_15, Markers_14);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PFSymNameArity_22 = ((MR_Word) ((MR_hl_field(3, CompilerOrigin_17, 1))));
              MR_Word TablingPredKind_23 = ((MR_Unsigned) ((MR_hl_field(3, CompilerOrigin_17, 2))) & (MR_Integer) 1);
              MR_Word Var_33;

              {
                Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_33, 1) = ((MR_Box) (PFSymNameArity_22));
                MR_hl_field(3, Var_33, 2) = (MR_Box) ((MR_Unsigned) (TablingPredKind_23));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *PredOrigin_13 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_33));
              }
              *Markers_14 = Markers0_15;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pred__compute_arg_types_maybe_modes_7_p_0(
  MR_Word PredOrFunc_8,
  MR_Word ArgTypesAndMaybeModes_9,
  MR_Word MaybeDetism_10,
  MR_Word * UserArity_11,
  MR_Word * ArgTypes_12,
  MR_Word * MaybeArgModes_13,
  MR_Word * PredmodeDecl_14)
{
  MR_Word PredFormArity_15;

  PredFormArity_15 = parse_tree__prog_item__types_and_maybe_modes_arity_1_f_0(ArgTypesAndMaybeModes_9);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_8, UserArity_11, PredFormArity_15);
  switch (PredOrFunc_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      switch (MR_tag((MR_Word) ArgTypesAndMaybeModes_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_pred.compute_arg_types_maybe_modes\'/7", (MR_String) "no_types_arity_zero");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            *ArgTypes_12 = ((MR_Word) ((MR_hl_field(1, ArgTypesAndMaybeModes_9, 0))));
            if ((MaybeDetism_10 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *MaybeArgModes_13 = (MR_Word) ((MR_Unsigned) 0U);
              *PredmodeDecl_14 = (MR_Integer) 0;
            }
            else
            {
              MR_Integer UserArityInt_20 = (MR_Integer) (*UserArity_11);
              MR_Word InMode_21;
              MR_Word InModes_22;
              MR_Word OutMode_23;
              MR_Word Var_28;
              MR_Word Var_29;

              parse_tree__prog_mode__in_mode_1_p_0(&InMode_21);
              mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), UserArityInt_20, ((MR_Box) (InMode_21)), &InModes_22);
              parse_tree__prog_mode__out_mode_1_p_0(&OutMode_23);
              {
                Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_29, 0) = ((MR_Box) (OutMode_23));
                MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), InModes_22, Var_29);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeArgModes_13 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_28));
              }
              *PredmodeDecl_14 = (MR_Integer) 1;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgTypesAndModes_31 = ((MR_Word) ((MR_hl_field(2, ArgTypesAndMaybeModes_9, 0))));
            MR_Word ArgModes0_32;

            parse_tree__prog_item__split_types_and_modes_3_p_0(ArgTypesAndModes_31, ArgTypes_12, &ArgModes0_32);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeArgModes_13 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (ArgModes0_32));
            }
            *PredmodeDecl_14 = (MR_Integer) 1;
          }
          break;
      }
      break;
    case (MR_Integer) 0:
      switch (MR_tag((MR_Word) ArgTypesAndMaybeModes_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *ArgTypes_12 = (MR_Word) ((MR_Unsigned) 0U);
            if ((MaybeDetism_10 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *MaybeArgModes_13 = (MR_Word) ((MR_Unsigned) 0U);
              *PredmodeDecl_14 = (MR_Integer) 0;
            }
            else
            {
              *MaybeArgModes_13 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_2[1]));
              *PredmodeDecl_14 = (MR_Integer) 1;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            *ArgTypes_12 = ((MR_Word) ((MR_hl_field(1, ArgTypesAndMaybeModes_9, 0))));
            *MaybeArgModes_13 = (MR_Word) ((MR_Unsigned) 0U);
            *PredmodeDecl_14 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgTypesAndModes_17 = ((MR_Word) ((MR_hl_field(2, ArgTypesAndMaybeModes_9, 0))));
            MR_Word ArgModes0_18;

            parse_tree__prog_item__split_types_and_modes_3_p_0(ArgTypesAndModes_17, ArgTypes_12, &ArgModes0_18);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeArgModes_13 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (ArgModes0_18));
            }
            *PredmodeDecl_14 = (MR_Integer) 1;
          }
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pred__module_add_mode_decl_10_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__add_pred__IntroducedFrom__pred__module_add_mode_decl__779__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__add_pred__module_add_mode_decl_10_p_0(
  MR_Word PartOfPredmode_11,
  MR_Word IsClassMethod_12,
  MR_Word ItemMercuryStatus_13,
  MR_Word PredStatus_14,
  MR_Word ItemModeDecl_15,
  MR_Word * PredProcId_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_46,
  MR_Word * STATE_VARIABLE_ModuleInfo_47,
  MR_Word STATE_VARIABLE_Specs_0_48,
  MR_Word * STATE_VARIABLE_Specs_49)
{
  MR_bool succeeded;
  MR_Word PredSymName_19 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl_15, 0))));
  MR_Word MaybePredOrFunc_20 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl_15, 1))));
  MR_Word Modes_21 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl_15, 2))));
  MR_Word WithInst_22 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl_15, 3))));
  MR_Word Context_25 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl_15, 6))));
  MR_Word PredModuleName_28;
  MR_String PredName_29;
  MR_Word PredOrFunc_30;
  MR_Word Var_54;

  if (((MR_tag((MR_Word) PredSymName_19)) == (MR_Integer) 1))
  {
    PredModuleName_28 = ((MR_Word) ((MR_hl_field(1, PredSymName_19, 0))));
    PredName_29 = ((MR_String) ((MR_hl_field(1, PredSymName_19, 1))));
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_pred.module_add_mode_decl\'/10", (MR_String) "unqualified PredSymName");
      return;
    }
  if ((MaybePredOrFunc_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_pred.module_add_mode_decl\'/10", (MR_String) "no pred_or_func on mode declaration");
      return;
    }
  else
    PredOrFunc_30 = ((MR_Word) ((MR_hl_field(1, MaybePredOrFunc_20, 0))));
  {
    Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_54, 0) = ((MR_Box) (&hlds__make_hlds__add_pred_scalar_common_4[0]));
    MR_hl_field(0, Var_54, 1) = ((MR_Box) (hlds__make_hlds__add_pred__module_add_mode_decl_10_p_0_1));
    MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_54, 3) = ((MR_Box) (WithInst_22));
    MR_hl_field(0, Var_54, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_54, (MR_String) "predicate \140hlds.make_hlds.add_pred.module_add_mode_decl\'/10", (MR_String) "WithInst != no");
  succeeded = (strcmp(PredName_29, (MR_String) "") == 0);
  if (succeeded)
  {
    MR_Word Pieces_31;
    MR_Word Spec_32;
    MR_Word Var_58;
    MR_Integer Var_59;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_70;
    MR_Word Var_71;

    Var_58 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    Var_59 = hlds__hlds_pred__invalid_proc_id_0_f_0();
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *PredProcId_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_58));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_59));
    }
    Var_65 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[13])));
    Var_71 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[8])));
    Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_71, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[9])));
    Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_65, Var_70);
    Pieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[11])), Var_64);
    {
      Spec_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_32, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pred.module_add_mode_decl\'/10"));
      MR_hl_field(0, Spec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_32, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_32, 3) = ((MR_Box) (Context_25));
      MR_hl_field(0, Spec_32, 4) = ((MR_Box) (Pieces_31));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_49 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_32));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_48));
    }
    *STATE_VARIABLE_ModuleInfo_47 = STATE_VARIABLE_ModuleInfo_0_46;
  }
  else
  {
    MR_Word PredFormArity_33;
    MR_Word PredicateTable0_34;
    MR_Word MaybePredId_35;
    MR_Word PredId_36;
    MR_Word PredicateTable1_39;
    MR_Word PredIdTable0_40;
    MR_Word PredInfo0_41;
    MR_Word PredInfo_42;
    MR_Integer ProcId_43;
    MR_Word PredIdTable_44;
    MR_Word PredicateTable_45;
    MR_Word STATE_VARIABLE_ModuleInfo_1_85;
    MR_Word STATE_VARIABLE_Specs_2_86;
    MR_Box conv0_PredInfo0_41;

    PredFormArity_33 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_21);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_46, &PredicateTable0_34);
    hlds__pred_table__predicate_table_search_pf_fqm_n_a_6_p_0(PredicateTable0_34, PredOrFunc_30, PredModuleName_28, PredName_29, PredFormArity_33, &MaybePredId_35);
    if ((MaybePredId_35 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word UserArity_37;
      MR_Word Origin_38;
      MR_Word Var_83;

      parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_30, &UserArity_37, PredFormArity_33);
      {
        Var_83 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_83, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_30));
        MR_hl_field(0, Var_83, 1) = ((MR_Box) (PredSymName_19));
        MR_hl_field(0, Var_83, 2) = ((MR_Box) (UserArity_37));
      }
      {
        Origin_38 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Origin_38, 0) = ((MR_Box) (Var_83));
      }
      hlds__make_hlds__add_pred__add_implicit_pred_decl_report_error_14_p_0(PredOrFunc_30, PredModuleName_28, PredName_29, PredFormArity_33, PredStatus_14, IsClassMethod_12, Context_25, Origin_38, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[17])), &PredId_36, STATE_VARIABLE_ModuleInfo_0_46, &STATE_VARIABLE_ModuleInfo_1_85, STATE_VARIABLE_Specs_0_48, &STATE_VARIABLE_Specs_2_86);
    }
    else
    {
      PredId_36 = ((MR_Word) ((MR_hl_field(1, MaybePredId_35, 0))));
      STATE_VARIABLE_ModuleInfo_1_85 = STATE_VARIABLE_ModuleInfo_0_46;
      STATE_VARIABLE_Specs_2_86 = STATE_VARIABLE_Specs_0_48;
    }
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_1_85, &PredicateTable1_39);
    hlds__pred_table__predicate_table_get_pred_id_table_2_p_0(PredicateTable1_39, &PredIdTable0_40);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable0_40, ((MR_Box) (PredId_36)), &conv0_PredInfo0_41);
    PredInfo0_41 = ((MR_Word) (conv0_PredInfo0_41));
    hlds__make_hlds__add_pred__module_do_add_mode_10_p_0(STATE_VARIABLE_ModuleInfo_1_85, PartOfPredmode_11, IsClassMethod_12, ItemMercuryStatus_13, ItemModeDecl_15, PredInfo0_41, &PredInfo_42, &ProcId_43, STATE_VARIABLE_Specs_2_86, STATE_VARIABLE_Specs_49);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_36)), ((MR_Box) (PredInfo_42)), PredIdTable0_40, &PredIdTable_44);
    hlds__pred_table__predicate_table_set_pred_id_table_3_p_0(PredIdTable_44, PredicateTable1_39, &PredicateTable_45);
    hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredicateTable_45, STATE_VARIABLE_ModuleInfo_1_85, STATE_VARIABLE_ModuleInfo_47);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *PredProcId_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (PredId_36));
      MR_hl_field(0, base, 1) = ((MR_Box) (ProcId_43));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pred__module_do_add_mode_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word PartOfPredmode_12,
  MR_Word IsClassMethod_13,
  MR_Word ItemMercuryStatus_14,
  MR_Word ItemModeDecl_15,
  MR_Word STATE_VARIABLE_PredInfo_0_39,
  MR_Word * STATE_VARIABLE_PredInfo_40,
  MR_Integer * ProcId_17,
  MR_Word STATE_VARIABLE_Specs_0_41,
  MR_Word * STATE_VARIABLE_Specs_42)
{
  MR_bool succeeded;
  MR_String PredName_19;
  MR_Word PredOrFunc_20;
  MR_Word Modes_23;
  MR_Word MaybeDetism_25;
  MR_Word InstVarSet_26;
  MR_Word Context_27;
  MR_Word SeqNum_28;
  MR_Word PredFormArity_29;
  MR_Word DetismDecl_30;
  MR_Word MaybeCurUserDecl_31;
  MR_Word STATE_VARIABLE_Specs_1_43;
  MR_Word Var_46;

  PredName_19 = hlds__hlds_pred__pred_info_name_1_f_0(STATE_VARIABLE_PredInfo_0_39);
  PredOrFunc_20 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(STATE_VARIABLE_PredInfo_0_39);
  Modes_23 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl_15, 2))));
  MaybeDetism_25 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl_15, 4))));
  InstVarSet_26 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl_15, 5))));
  Context_27 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl_15, 6))));
  SeqNum_28 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl_15, 7))));
  PredFormArity_29 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_23);
  hlds__make_hlds__add_pred__check_that_detism_is_declared_11_p_0(ModuleInfo_11, STATE_VARIABLE_PredInfo_0_39, IsClassMethod_13, PredOrFunc_20, PredName_19, PredFormArity_29, MaybeDetism_25, Context_27, &DetismDecl_30, STATE_VARIABLE_Specs_0_41, &STATE_VARIABLE_Specs_1_43);
  hlds__hlds_pred__pred_info_get_cur_user_decl_info_2_p_0(STATE_VARIABLE_PredInfo_0_39, &MaybeCurUserDecl_31);
  if ((MaybeCurUserDecl_31 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_1_43;
  else
  {
    MR_Word CurUserDecl_32 = ((MR_Word) ((MR_hl_field(1, MaybeCurUserDecl_31, 0))));
    MR_Word PredDeclSection_33 = ((((MR_Unsigned) ((MR_hl_field(0, CurUserDecl_32, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word PredIsPredMode_34 = ((MR_Unsigned) ((MR_hl_field(0, CurUserDecl_32, 0))) & (MR_Integer) 1);
    MR_Word ItemExport_36;

    succeeded = (PartOfPredmode_12 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) ItemMercuryStatus_14)) == (MR_Integer) 0);
      if (succeeded)
        ItemExport_36 = ((MR_Unsigned) ((MR_hl_field(0, ItemMercuryStatus_14, 0))) & (MR_Integer) 3);
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Specs_2_44;

      hlds__make_hlds__add_pred__check_for_mode_decl_in_wrong_section_8_p_0(PredDeclSection_33, ItemExport_36, PredOrFunc_20, PredName_19, PredFormArity_29, Context_27, STATE_VARIABLE_Specs_1_43, &STATE_VARIABLE_Specs_2_44);
      switch (PredIsPredMode_34) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_2_44;
          break;
        case (MR_Integer) 1:
          {
            MR_Word UserArity_49;
            MR_Word PFNameArity_50;
            MR_Word PredModeSpec_51;
            MR_Word Var_52;

            parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_20, &UserArity_49, PredFormArity_29);
            {
              Var_52 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_52, 0) = ((MR_Box) (PredName_19));
            }
            {
              PFNameArity_50 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PFNameArity_50, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_20));
              MR_hl_field(0, PFNameArity_50, 1) = ((MR_Box) (Var_52));
              MR_hl_field(0, PFNameArity_50, 2) = ((MR_Box) (UserArity_49));
            }
            PredModeSpec_51 = hlds__make_hlds__add_pred__report_mode_decl_after_predmode_2_f_0(PFNameArity_50, Context_27);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_42 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (PredModeSpec_51));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_2_44));
            }
          }
          break;
      }
    }
    else
      *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_1_43;
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (Modes_23));
  }
  hlds__hlds_pred__add_new_proc_14_p_0(ModuleInfo_11, Context_27, SeqNum_28, InstVarSet_26, Modes_23, Var_46, (MR_Word) ((MR_Unsigned) 0U), DetismDecl_30, MaybeDetism_25, (MR_Integer) 1, (MR_Integer) 1, STATE_VARIABLE_PredInfo_0_39, STATE_VARIABLE_PredInfo_40, ProcId_17);
}

static void MR_CALL 
hlds__make_hlds__add_pred__check_for_mode_decl_in_wrong_section_8_p_0(
  MR_Word PredDeclSection_9,
  MR_Word ItemExport_10,
  MR_Word PredOrFunc_11,
  MR_String PredName_12,
  MR_Word PredFormArity_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  MR_bool succeeded;
  MR_Word ModeDeclSection_16;

  switch (ItemExport_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      ModeDeclSection_16 = (MR_Integer) 0;
      break;
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      ModeDeclSection_16 = (MR_Integer) 1;
      break;
  }
  succeeded = (PredDeclSection_9 == ModeDeclSection_16);
  if (succeeded)
    *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
  else
  {
    MR_String ModeSectionStr_17;
    MR_String PredSectionStr_18;
    MR_Integer UserArityInt_19;
    MR_Word NA_20;
    MR_String PredOrFuncDecl_21;
    MR_Word Pieces_22;
    MR_Word Spec_23;
    MR_Word Var_26;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_54;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_67;
    MR_Word Var_70;
    MR_Word Var_71;

    switch (ModeDeclSection_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ModeSectionStr_17 = (MR_String) "implementation";
        break;
      case (MR_Integer) 0:
        ModeSectionStr_17 = (MR_String) "interface";
        break;
    }
    switch (PredDeclSection_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        PredSectionStr_18 = (MR_String) "implementation";
        break;
      case (MR_Integer) 0:
        PredSectionStr_18 = (MR_String) "interface";
        break;
    }
    parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_11, &Var_26, PredFormArity_13);
    UserArityInt_19 = (MR_Integer) (Var_26);
    {
      NA_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, NA_20, 0) = ((MR_Box) (PredName_12));
      MR_hl_field(0, NA_20, 1) = ((MR_Box) (UserArityInt_19));
    }
    PredOrFuncDecl_21 = mdbcomp__prim_data__pred_or_func_to_str_1_f_0(PredOrFunc_11);
    {
      Var_34 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_34, 0) = ((MR_Box) (ModeSectionStr_17));
    }
    {
      Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(1, Var_33, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[57])));
    }
    Var_32 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_33);
    {
      Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 31U));
      MR_hl_field(3, Var_44, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_11));
    }
    {
      Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_40, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[58])));
      MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 13U));
      MR_hl_field(3, Var_49, 1) = ((MR_Box) (NA_20));
    }
    {
      Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
      MR_hl_field(1, Var_48, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[60])));
    }
    Var_47 = parse_tree__error_spec__color_as_subject_1_f_0(Var_48);
    {
      Var_62 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_62, 0) = ((MR_Box) (PredSectionStr_18));
    }
    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[64])));
    }
    Var_60 = parse_tree__error_spec__color_as_correct_1_f_0(Var_61);
    {
      Var_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_71, 0) = ((MR_Box) ((MR_Unsigned) 35U));
      MR_hl_field(3, Var_71, 1) = ((MR_Box) (PredOrFuncDecl_21));
    }
    {
      Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
      MR_hl_field(1, Var_70, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[67])));
    }
    {
      Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_67, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[65])));
      MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_70));
    }
    Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, Var_67);
    Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[62])), Var_59);
    Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, Var_54);
    Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, Var_46);
    Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_32, Var_39);
    Pieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[55])), Var_31);
    {
      Spec_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pred.check_for_mode_decl_in_wrong_section\'/8"));
      MR_hl_field(0, Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_23, 3) = ((MR_Box) (Context_14));
      MR_hl_field(0, Spec_23, 4) = ((MR_Box) (Pieces_22));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_25 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_23));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pred__check_that_detism_is_declared_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word PredInfo_13,
  MR_Word IsClassMethod_14,
  MR_Word PredOrFunc_15,
  MR_String PredName_16,
  MR_Word PredFormArity_17,
  MR_Word MaybeDetism_18,
  MR_Word Context_19,
  MR_Word * DetismDecl_20,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  if ((MaybeDetism_18 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word PredStatus_22;
    MR_Word PredModuleName_23;
    MR_Word PredSymName_24;

    *DetismDecl_20 = (MR_Integer) 2;
    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_13, &PredStatus_22);
    PredModuleName_23 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_13);
    {
      PredSymName_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, PredSymName_24, 0) = ((MR_Box) (PredModuleName_23));
      MR_hl_field(1, PredSymName_24, 1) = ((MR_Box) (PredName_16));
    }
    switch (IsClassMethod_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer UserArityInt_29;
          MR_Word SNA_30;
          MR_Word Pieces_31;
          MR_Word Spec_32;
          MR_Word Var_33;
          MR_Word Var_38;
          MR_Word Var_39;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word Var_51;
          MR_Word Var_52;
          MR_Word Var_53;
          MR_Word Var_54;

          parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_15, &Var_33, PredFormArity_17);
          UserArityInt_29 = (MR_Integer) (Var_33);
          {
            SNA_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, SNA_30, 0) = ((MR_Box) (PredSymName_24));
            MR_hl_field(0, SNA_30, 1) = ((MR_Box) (UserArityInt_29));
          }
          Var_39 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[70])));
          {
            Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 31U));
            MR_hl_field(3, Var_49, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_15));
          }
          {
            Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
            MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_45, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[71])));
            MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_48));
          }
          {
            Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 15U));
            MR_hl_field(3, Var_54, 1) = ((MR_Box) (SNA_30));
          }
          {
            Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
            MR_hl_field(1, Var_53, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[60])));
          }
          Var_52 = parse_tree__error_spec__color_as_subject_1_f_0(Var_53);
          Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_52, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[9])));
          Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_45, Var_51);
          Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_39, Var_44);
          Pieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[68])), Var_38);
          {
            Spec_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_32, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pred.report_unspecified_det_for_method\'/6"));
            MR_hl_field(0, Spec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_32, 2) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(0, Spec_32, 3) = ((MR_Box) (Context_19));
            MR_hl_field(0, Spec_32, 4) = ((MR_Box) (Pieces_31));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_28 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_32));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_27));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word IsExported_25;

          IsExported_25 = hlds__status__pred_status_is_exported_1_f_0(PredStatus_22);
          switch (IsExported_25) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              hlds__make_hlds__add_pred__maybe_report_unspecified_det_for_local_7_p_0(ModuleInfo_12, PredOrFunc_15, PredSymName_24, PredFormArity_17, Context_19, STATE_VARIABLE_Specs_0_27, STATE_VARIABLE_Specs_28);
              break;
            case (MR_Integer) 1:
              {
                MR_Integer UserArityInt_66;
                MR_Word SNA_67;
                MR_Word Pieces_68;
                MR_Word Spec_69;
                MR_Word Var_70;
                MR_Word Var_75;
                MR_Word Var_76;
                MR_Word Var_81;
                MR_Word Var_82;
                MR_Word Var_85;
                MR_Word Var_86;
                MR_Word Var_88;
                MR_Word Var_89;
                MR_Word Var_90;
                MR_Word Var_91;

                parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_15, &Var_70, PredFormArity_17);
                UserArityInt_66 = (MR_Integer) (Var_70);
                {
                  SNA_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SNA_67, 0) = ((MR_Box) (PredSymName_24));
                  MR_hl_field(0, SNA_67, 1) = ((MR_Box) (UserArityInt_66));
                }
                Var_76 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[70])));
                {
                  Var_86 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_86, 0) = ((MR_Box) ((MR_Unsigned) 31U));
                  MR_hl_field(3, Var_86, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_15));
                }
                {
                  Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_85, 0) = ((MR_Box) (Var_86));
                  MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_82, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[72])));
                  MR_hl_field(1, Var_82, 1) = ((MR_Box) (Var_85));
                }
                {
                  Var_91 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_91, 0) = ((MR_Box) ((MR_Unsigned) 15U));
                  MR_hl_field(3, Var_91, 1) = ((MR_Box) (SNA_67));
                }
                {
                  Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_90, 0) = ((MR_Box) (Var_91));
                  MR_hl_field(1, Var_90, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[60])));
                }
                Var_89 = parse_tree__error_spec__color_as_subject_1_f_0(Var_90);
                Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_89, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[9])));
                Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_82, Var_88);
                Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_76, Var_81);
                Pieces_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[68])), Var_75);
                {
                  Spec_69 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Spec_69, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pred.report_unspecified_det_for_exported\'/6"));
                  MR_hl_field(0, Spec_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, Spec_69, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                  MR_hl_field(0, Spec_69, 3) = ((MR_Box) (Context_19));
                  MR_hl_field(0, Spec_69, 4) = ((MR_Box) (Pieces_68));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_28 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Spec_69));
                  MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_27));
                }
              }
              break;
          }
        }
        break;
    }
  }
  else
  {
    *DetismDecl_20 = (MR_Integer) 0;
    *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pred__maybe_report_unspecified_det_for_local_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PorF_9,
  MR_Word SymName_10,
  MR_Word PredFormArity_11,
  MR_Word Context_12,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  MR_Word Globals_14;
  MR_Word InferDet_15;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_14);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 123, &InferDet_15);
  switch (InferDet_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer UserArityInt_16;
        MR_Word SNA_17;
        MR_Word MainPieces_18;
        MR_Word Msg_20;
        MR_Word Spec_21;
        MR_Word Var_25;
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_40;
        MR_Word Var_41;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_83;
        MR_Word Var_84;
        MR_Word Var_92;

        parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PorF_9, &Var_25, PredFormArity_11);
        UserArityInt_16 = (MR_Integer) (Var_25);
        {
          SNA_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SNA_17, 0) = ((MR_Box) (SymName_10));
          MR_hl_field(0, SNA_17, 1) = ((MR_Box) (UserArityInt_16));
        }
        Var_31 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[70])));
        {
          Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 31U));
          MR_hl_field(3, Var_41, 1) = (MR_Box) ((MR_Unsigned) (PorF_9));
        }
        {
          Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_40, 0) = ((MR_Box) (Var_41));
          MR_hl_field(1, Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_37, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[73])));
          MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_40));
        }
        {
          Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 15U));
          MR_hl_field(3, Var_46, 1) = ((MR_Box) (SNA_17));
        }
        {
          Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
          MR_hl_field(1, Var_45, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[60])));
        }
        Var_44 = parse_tree__error_spec__color_as_subject_1_f_0(Var_45);
        Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[9])));
        Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_37, Var_43);
        Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, Var_36);
        MainPieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[68])), Var_30);
        {
          Var_84 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_84, 0) = ((MR_Box) (MainPieces_18));
        }
        {
          Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_84));
          MR_hl_field(1, Var_83, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[93])));
        }
        {
          Msg_20 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Msg_20, 0) = ((MR_Box) (Context_12));
          MR_hl_field(2, Msg_20, 1) = ((MR_Box) (Var_83));
        }
        {
          Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_92, 0) = ((MR_Box) (Msg_20));
          MR_hl_field(1, Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_21 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pred.maybe_report_unspecified_det_for_local\'/7"));
          MR_hl_field(2, Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(2, Spec_21, 3) = ((MR_Box) (Var_92));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_23 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_21));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_22));
        }
      }
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
      break;
  }
}

MR_Word MR_CALL 
hlds__make_hlds__add_pred__report_mode_decl_after_predmode_2_f_0(
  MR_Word PFNameArity_4,
  MR_Word Context_5)
{
  MR_Word Spec_6;
  MR_Word PredOrFunc_7 = ((MR_Unsigned) ((MR_hl_field(0, PFNameArity_4, 0))) & (MR_Integer) 1);
  MR_Word SymName_8 = ((MR_Word) ((MR_hl_field(0, PFNameArity_4, 1))));
  MR_Word UserArity_9 = ((MR_Word) ((MR_hl_field(0, PFNameArity_4, 2))));
  MR_Integer UserArityInt_10 = (MR_Integer) (UserArity_9);
  MR_Word NA_11;
  MR_Word Pieces_12;
  MR_String Var_13;
  MR_Word Var_14;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_29;
  MR_Word Var_38;
  MR_Word Var_39;

  Var_13 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_8);
  {
    NA_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, NA_11, 0) = ((MR_Box) (Var_13));
    MR_hl_field(0, NA_11, 1) = ((MR_Box) (UserArityInt_10));
  }
  {
    Var_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_18, 0) = ((MR_Box) ((MR_Unsigned) 31U));
    MR_hl_field(3, Var_18, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_7));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_18));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[18])));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) (Var_17));
  }
  {
    Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_23, 1) = ((MR_Box) (NA_11));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_21 = parse_tree__error_spec__color_as_subject_1_f_0(Var_22);
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_18));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[22])));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pred_scalar_common_1[19])));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_29));
  }
  Var_39 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[24])));
  Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_39, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pred_scalar_common_1[9])));
  Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_26, Var_38);
  Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_21, Var_25);
  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_14, Var_20);
  {
    Spec_6 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_6, 0) = ((MR_Box) ((MR_String) "function \140hlds.make_hlds.add_pred.report_mode_decl_after_predmode\'/2"));
    MR_hl_field(0, Spec_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_6, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(0, Spec_6, 3) = ((MR_Box) (Context_5));
    MR_hl_field(0, Spec_6, 4) = ((MR_Box) (Pieces_12));
  }
  return Spec_6;
}

void MR_CALL 
hlds__make_hlds__add_pred__add_implicit_pred_decl_report_error_14_p_0(
  MR_Word PredOrFunc_15,
  MR_Word PredModuleName_16,
  MR_String PredName_17,
  MR_Word PredFormArity_18,
  MR_Word Status_19,
  MR_Word IsClassMethod_20,
  MR_Word Context_21,
  MR_Word PredOrigin_22,
  MR_Word DescPieces_23,
  MR_Word * PredId_24,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34)
{
  MR_Word PredSymName_27;
  MR_Word ClausesInfo_29;
  MR_Word STATE_VARIABLE_Specs_1_35;
  MR_Word Var_38;
  MR_Word Var_39;

  {
    PredSymName_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PredSymName_27, 0) = ((MR_Box) (PredModuleName_16));
    MR_hl_field(1, PredSymName_27, 1) = ((MR_Box) (PredName_17));
  }
  hlds__make_hlds_error__maybe_report_undefined_pred_error_10_p_0(STATE_VARIABLE_ModuleInfo_0_31, PredOrFunc_15, PredSymName_27, PredFormArity_18, Status_19, IsClassMethod_20, Context_21, DescPieces_23, STATE_VARIABLE_Specs_0_33, &STATE_VARIABLE_Specs_1_35);
  switch (PredOrFunc_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word UserArity_28;

        parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 1, &UserArity_28, PredFormArity_18);
        hlds__make_hlds__check_field_access_functions__maybe_check_field_access_function_7_p_0(STATE_VARIABLE_ModuleInfo_0_31, PredSymName_27, UserArity_28, Status_19, Context_21, STATE_VARIABLE_Specs_1_35, STATE_VARIABLE_Specs_34);
      }
      break;
    case (MR_Integer) 0:
      *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_1_35;
      break;
  }
  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_38, 0) = ((MR_Box) (PredFormArity_18));
  }
  Var_39 = hlds__hlds_clauses__init_clause_item_numbers_user_0_f_0();
  hlds__hlds_clauses__clauses_info_init_4_p_0(PredOrFunc_15, Var_38, Var_39, &ClausesInfo_29);
  hlds__make_hlds__add_pred__add_implicit_pred_decl_12_p_0(PredOrFunc_15, PredModuleName_16, PredName_17, PredFormArity_18, Status_19, Context_21, PredOrigin_22, (MR_Word) (&hlds__make_hlds__add_pred_scalar_common_2[0]), ClausesInfo_29, PredId_24, STATE_VARIABLE_ModuleInfo_0_31, STATE_VARIABLE_ModuleInfo_32);
}

void MR_CALL 
hlds__make_hlds__add_pred__add_implicit_pred_decl_12_p_0(
  MR_Word PredOrFunc_13,
  MR_Word PredModuleName_14,
  MR_String PredName_15,
  MR_Word PredFormArity_16,
  MR_Word PredStatus_17,
  MR_Word Context_18,
  MR_Word PredOrigin_19,
  MR_Word GoalType_20,
  MR_Word ClausesInfo_21,
  MR_Word * PredId_22,
  MR_Word STATE_VARIABLE_ModuleInfo_0_51,
  MR_Word * STATE_VARIABLE_ModuleInfo_52)
{
  MR_bool succeeded;
  MR_Word Markers0_25;
  MR_Word TVarSet0_26;
  MR_Integer PredFormArityInt_27;
  MR_Word TypeVars_28;
  MR_Word TVarSet_29;
  MR_Word Types_30;
  MR_Word Proofs_33;
  MR_Word ConstraintMap_34;
  MR_Word VarNameRemap_35;
  MR_Word PredInfo0_36;
  MR_Word Markers1_37;
  MR_Word Markers_38;
  MR_Word PredInfo_39;
  MR_Word PredicateTable0_40;
  MR_Word MaybePredId_41;
  MR_Word Var_54;

  hlds__hlds_markers__init_markers_1_p_0(&Markers0_25);
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet0_26);
  PredFormArityInt_27 = (MR_Integer) (PredFormArity_16);
  parse_tree__prog_util__make_n_fresh_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_String) "T", PredFormArityInt_27, &TypeVars_28, TVarSet0_26, &TVarSet_29);
  Var_54 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__add_pred_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
  parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_54, TypeVars_28, &Types_30);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), &Proofs_33);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), &ConstraintMap_34);
  mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__add_pred_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &VarNameRemap_35);
  hlds__hlds_pred__pred_info_init_19_p_0(PredOrFunc_13, PredModuleName_14, PredName_15, PredFormArity_16, Context_18, PredOrigin_19, PredStatus_17, (MR_Word) ((MR_Unsigned) 0U), GoalType_20, Markers0_25, Types_30, TVarSet_29, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (&hlds__make_hlds__add_pred_scalar_common_1[25]), Proofs_33, ConstraintMap_34, ClausesInfo_21, VarNameRemap_35, &PredInfo0_36);
  hlds__hlds_markers__add_marker_3_p_0((MR_Integer) 2, Markers0_25, &Markers1_37);
  hlds__hlds_markers__add_marker_3_p_0((MR_Integer) 4, Markers1_37, &Markers_38);
  hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_38, PredInfo0_36, &PredInfo_39);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_51, &PredicateTable0_40);
  hlds__pred_table__predicate_table_search_pf_fqm_n_a_6_p_0(PredicateTable0_40, PredOrFunc_13, PredModuleName_14, PredName_15, PredFormArity_16, &MaybePredId_41);
  if ((MaybePredId_41 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word MQInfo_42;
    MR_Word PredicateTable_43;

    hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_51, &MQInfo_42);
    hlds__pred_table__predicate_table_insert_qual_6_p_0(PredInfo_39, (MR_Integer) 1, MQInfo_42, PredId_22, PredicateTable0_40, &PredicateTable_43);
    hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredicateTable_43, STATE_VARIABLE_ModuleInfo_0_51, STATE_VARIABLE_ModuleInfo_52);
  }
  else
  {
    MR_Word Var_61;

    succeeded = ((MR_tag((MR_Word) PredOrigin_19)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_61 = ((MR_Word) ((MR_hl_field(0, PredOrigin_19, 0))));
      succeeded = ((((MR_tag((MR_Word) Var_61)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_61, 0)))) == (MR_Integer) 1)));
    }
    if (succeeded)
    {
      MR_Word PredSymName_48;
      MR_String NameString_49;
      MR_String UnexpectedMsg_50;
      MR_String Var_87;
      MR_String Var_89;
      MR_String Var_90;
      MR_String Var_92;
      MR_String Var_93;
      MR_String Var_95;

      {
        PredSymName_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, PredSymName_48, 0) = ((MR_Box) (PredModuleName_14));
        MR_hl_field(1, PredSymName_48, 1) = ((MR_Box) (PredName_15));
      }
      NameString_49 = mdbcomp__sym_name__sym_name_to_string_1_f_0(PredSymName_48);
      Var_87 = mercury__string__f_43_43_2_f_0(NameString_49, (MR_String) ").\n");
      Var_89 = mercury__string__f_43_43_2_f_0((MR_String) " (", Var_87);
      Var_90 = mercury__string__f_43_43_2_f_0((MR_String) "an existing predicate", Var_89);
      Var_92 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_90);
      Var_93 = mercury__string__f_43_43_2_f_0((MR_String) "with a name that is identical to the name of", Var_92);
      Var_95 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_93);
      UnexpectedMsg_50 = mercury__string__f_43_43_2_f_0((MR_String) "Attempted to introduce a predicate for a promise", Var_95);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_pred.add_implicit_pred_decl\'/12", UnexpectedMsg_50);
        return;
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_pred.add_implicit_pred_decl\'/12", (MR_String) "search succeeded");
        return;
      }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pred____Unify____maybe_stub_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_pred____Unify____maybe_stub_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pred____Compare____maybe_stub_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_pred____Compare____maybe_stub_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pred____Unify____part_of_predmode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_pred____Unify____part_of_predmode_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pred____Compare____part_of_predmode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_pred____Compare____part_of_predmode_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__make_hlds__add_pred__init(void)
{
}

void mercury__hlds__make_hlds__add_pred__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__type_ctor_info_maybe_stub_0);
  MR_register_type_ctor_info(&hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__type_ctor_info_part_of_predmode_0);
}

void mercury__hlds__make_hlds__add_pred__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__add_pred__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.add_pred.
