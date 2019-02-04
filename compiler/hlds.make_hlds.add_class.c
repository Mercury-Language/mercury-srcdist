/*
** Automatically generated from `add_class.m'
** by the Mercury compiler,
** version rotd-2018-11-07
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


// :- module hlds.make_hlds.add_class.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__add_class__init
ENDINIT
*/

#include "hlds.make_hlds.add_class.mih"


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
#include "hlds.add_pred.mih"
#include "hlds.const_struct.mih"
#include "hlds.default_func_mode.mih"
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
#include "hlds.hlds_module.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_clause.mih"
#include "hlds.make_hlds.goal_expr_to_goal.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.make_hlds_warn.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "hlds.make_hlds.state_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_hlds__status__type_ctor_info_item_mercury_status_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_class__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0;

static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__produce_instance_method_clause__719__1_2_p_0(
  MR_Word PredOrFunc_15,
  MR_Word ClausePredOrFunc_26);

static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_method__377__1_2_p_0(
  MR_Word WithInst_29,
  MR_Word HeadVar__2_67);

static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_method__376__1_2_p_0(
  MR_Word WithType_28,
  MR_Word HeadVar__2_63);

static MR_Word MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__func__make_hlds_fundep_2__206__1_3_f_0(
  MR_Word TVars_4,
  MR_Word LambdaHeadVar__1_11,
  MR_Word LambdaHeadVar__2_12);

static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__add_typeclass_defn__162__1_2_p_0(
  MR_Word HeadVar__1_100,
  MR_Word * HeadVar__2_101);

static MR_bool MR_CALL 
hlds__make_hlds__add_class__produce_instance_method_clause_14_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__add_class__produce_instance_method_clause_14_p_0(
  MR_Word PredOrFunc_15,
  MR_Word Context_16,
  MR_Word InstanceStatus_17,
  MR_Word InstanceClause_18,
  MR_Word TVarSet0_19,
  MR_Word * TVarSet_20,
  MR_Word STATE_VARIABLE_ModuleInfo_0_48,
  MR_Word * STATE_VARIABLE_ModuleInfo_49,
  MR_Word STATE_VARIABLE_QualInfo_0_50,
  MR_Word * STATE_VARIABLE_QualInfo_51,
  MR_Word STATE_VARIABLE_ClausesInfo_0_52,
  MR_Word * STATE_VARIABLE_ClausesInfo_53,
  MR_Word STATE_VARIABLE_Specs_0_54,
  MR_Word * STATE_VARIABLE_Specs_55);

static MR_bool MR_CALL 
hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_p_0(
  MR_Word InstanceDefnA_3,
  MR_Word InstanceDefnB_4);

static void MR_CALL 
hlds__make_hlds__add_class__check_instance_constraints_5_p_0(
  MR_Word InstanceDefnA_6,
  MR_Word ClassId_7,
  MR_Word InstanceDefnB_8,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_13_p_0(
  MR_Word ClassName_14,
  MR_Word ClassParamVars_15,
  MR_Integer ItemNumber_16,
  MR_Word MaybeItemMercuryStatus_17,
  MR_Word TypeClassStatus_18,
  MR_Word NeedQual_19,
  MR_Word Method_20,
  MR_Word STATE_VARIABLE_PredProcIds_0_55,
  MR_Word * STATE_VARIABLE_PredProcIds_56,
  MR_Word STATE_VARIABLE_ModuleInfo_0_57,
  MR_Word * STATE_VARIABLE_ModuleInfo_58,
  MR_Word STATE_VARIABLE_Specs_0_59,
  MR_Word * STATE_VARIABLE_Specs_60);

static void MR_CALL 
hlds__make_hlds__add_class__missing_pred_or_func_method_error_6_p_0(
  MR_Word MethodName_7,
  MR_Integer MethodArity_8,
  MR_Word PredOrFunc_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static MR_bool MR_CALL 
hlds__make_hlds__add_class__is_class_method_mode_item_1_p_0(
  MR_Word Method_2);

static MR_Integer MR_CALL 
hlds__make_hlds__add_class__get_list_index_3_f_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word HeadVar__1_1,
  MR_Integer N_2,
  MR_Box X_3);

static MR_Box MR_CALL 
hlds__make_hlds__add_class__make_hlds_fundep_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Word MR_CALL 
hlds__make_hlds__add_class__make_hlds_fundep_2_f_0(
  MR_Word TVars_4,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_p_0_1(
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

static void MR_CALL 
hlds__make_hlds__add_class__add_instance_defn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_class__add_instance_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_class__undefined_type_class_error_6_p_0(
  MR_Word ClassName_7,
  MR_Integer ClassArity_8,
  MR_Word Context_9,
  MR_String Description_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static void MR_CALL 
hlds__make_hlds__add_class__report_any_overlapping_instance_declarations_7_p_0(
  MR_Word ClassId_1,
  MR_Word NewTypes_2,
  MR_Word NewTVarSet_3,
  MR_Word NewContext_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7);

static MR_bool MR_CALL 
hlds__make_hlds__add_class__add_typeclass_defn_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
hlds__make_hlds__add_class__add_typeclass_defn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
hlds__make_hlds__add_class__add_typeclass_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_11_p_0(
  MR_Word ClassName_12,
  MR_Word ClassParamVars_13,
  MR_Word TypeClassStatus_14,
  MR_Word MaybeItemMercuryStatus_15,
  MR_Word NeedQual_16,
  MR_Word Methods_17,
  MR_Word * PredProcIds_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * STATE_VARIABLE_ModuleInfo_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28);

static void MR_CALL 
hlds__make_hlds__add_class__check_method_modes_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_PredProcIds_0_2,
  MR_Word * STATE_VARIABLE_PredProcIds_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * STATE_VARIABLE_ModuleInfo_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7);

static void MR_CALL 
hlds__make_hlds__add_class__pred_method_with_no_modes_error_3_p_0(
  MR_Word PredInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
hlds__make_hlds__add_class__add_class_pred_or_func_methods_11_p_0(
  MR_Word ClassName_1,
  MR_Word ClassParamVars_2,
  MR_Word MaybeItemMercuryStatus_3,
  MR_Word TypeClassStatus_4,
  MR_Word NeedQual_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11);

static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_class_method_12_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_class_method_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_method_12_p_0(
  MR_Word ClassName_13,
  MR_Word ClassParamVars_14,
  MR_Integer ItemNumber_15,
  MR_Word MaybeItemMercuryStatus_16,
  MR_Word TypeClassStatus_17,
  MR_Word NeedQual_18,
  MR_Word Method_19,
  MR_Word * MaybePredIdProcId_20,
  MR_Word STATE_VARIABLE_ModuleInfo_0_51,
  MR_Word * STATE_VARIABLE_ModuleInfo_52,
  MR_Word STATE_VARIABLE_Specs_0_53,
  MR_Word * STATE_VARIABLE_Specs_54);

static MR_bool MR_CALL 
hlds__make_hlds__add_class__class_fundeps_are_identical_2_p_0(
  MR_Word OldFunDeps0_3,
  MR_Word FunDeps0_4);

static MR_bool MR_CALL 
hlds__make_hlds__add_class__constraints_are_identical_6_p_0(
  MR_Word OldVars0_7,
  MR_Word OldVarSet_8,
  MR_Word OldConstraints0_9,
  MR_Word Vars_10,
  MR_Word VarSet_11,
  MR_Word Constraints_12);


static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_1[47][2];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_2[5][5];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_3[1][4];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_4[3][3];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_5[1][16];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_6[1][6];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_7[2][1];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_8[1][8];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_9[1][17];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_10[1][7];




static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_1[47][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_1[1]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The superclass constraints do not match."))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The functional dependencies do not match."))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[11])))
  },
  /* row 16 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 17 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[11])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "instance constraints are incompatible with"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[21])))
  },
  /* row 23 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[11])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 16U)),
    ((MR_Box) ((MR_String) "typeclass"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "without corresponding"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "method declaration."))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[11])))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: no mode declaration"))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for type class method predicate"))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: multiply defined (or overlapping)"))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "instance declarations for class"))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Previous instance declaration was here."))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[36]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 38 */
  {
    ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_7[0])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 40 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: mode declaration for type class method"))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "without corresponding"))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In instance declaration for class "))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "instance constraints here."))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[44]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 46 */
  {
    ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_7[1])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_2[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_3[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_4[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_3[0])),
    ((MR_Box) (hlds__make_hlds__add_class__module_add_class_interface_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_2[2])),
    ((MR_Box) (hlds__make_hlds__add_class__add_typeclass_defn_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_2[2])),
    ((MR_Box) (hlds__make_hlds__add_class__add_typeclass_defn_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_5[1][16] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 13)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_typeclass_status_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_7[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[37])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[45])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_8[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_9[1][17] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 14)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_instance_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_info_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_10[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__add_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_hlds__status__type_ctor_info_item_mercury_status_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_class__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__add_class__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__produce_instance_method_clause__719__1_2_p_0(
  MR_Word PredOrFunc_15,
  MR_Word ClausePredOrFunc_26)
{
  {
    MR_bool succeeded = (PredOrFunc_15 == ClausePredOrFunc_26);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_method__377__1_2_p_0(
  MR_Word WithInst_29,
  MR_Word HeadVar__2_67)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[9]), ((MR_Box) (WithInst_29)), ((MR_Box) (HeadVar__2_67)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_method__376__1_2_p_0(
  MR_Word WithType_28,
  MR_Word HeadVar__2_63)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[8]), ((MR_Box) (WithType_28)), ((MR_Box) (HeadVar__2_63)));
    return succeeded;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__func__make_hlds_fundep_2__206__1_3_f_0(
  MR_Word TVars_4,
  MR_Word LambdaHeadVar__1_11,
  MR_Word LambdaHeadVar__2_12)
{
  {
    MR_Word LambdaHeadVar__3_13;
    MR_Integer N_9;

    N_9 = hlds__make_hlds__add_class__get_list_index_3_f_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[0]), TVars_4, (MR_Integer) 1, ((MR_Box) (LambdaHeadVar__1_11)));
    LambdaHeadVar__3_13 = mercury__set__insert_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), LambdaHeadVar__2_12, ((MR_Box) (N_9)));
    return LambdaHeadVar__3_13;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__add_typeclass_defn__162__1_2_p_0(
  MR_Word HeadVar__1_100,
  MR_Word * HeadVar__2_101)
{
  {
    MR_bool succeeded;
    MR_Box conv0_HeadVar__2_101;

    succeeded = mercury__maybe__maybe_is_yes_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), HeadVar__1_100, &conv0_HeadVar__2_101);
    if (succeeded)
    {
      *HeadVar__2_101 = ((MR_Word) (conv0_HeadVar__2_101));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_class__produce_instance_method_clause_14_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_class__IntroducedFrom__pred__produce_instance_method_clause__719__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__produce_instance_method_clause_14_p_0(
  MR_Word PredOrFunc_15,
  MR_Word Context_16,
  MR_Word InstanceStatus_17,
  MR_Word InstanceClause_18,
  MR_Word TVarSet0_19,
  MR_Word * TVarSet_20,
  MR_Word STATE_VARIABLE_ModuleInfo_0_48,
  MR_Word * STATE_VARIABLE_ModuleInfo_49,
  MR_Word STATE_VARIABLE_QualInfo_0_50,
  MR_Word * STATE_VARIABLE_QualInfo_51,
  MR_Word STATE_VARIABLE_ClausesInfo_0_52,
  MR_Word * STATE_VARIABLE_ClausesInfo_53,
  MR_Word STATE_VARIABLE_Specs_0_54,
  MR_Word * STATE_VARIABLE_Specs_55)
{
  {
    MR_bool succeeded;
    MR_Word PredName_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceClause_18, (MR_Integer) 0))));
    MR_Word ClausePredOrFunc_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), InstanceClause_18, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word HeadTerms0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceClause_18, (MR_Integer) 2))));
    MR_Word CVarSet_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceClause_18, (MR_Integer) 4))));
    MR_Word MaybeBodyGoal_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceClause_18, (MR_Integer) 5))));
    MR_Word Var_56;
    MR_Word StateVar_33;
    MR_Word StateVarContext_34;

    {
      Var_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_2[4]));
      MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (hlds__make_hlds__add_class__produce_instance_method_clause_14_p_0_1));
      MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (PredOrFunc_15));
      MR_hl_field(MR_mktag(0), Var_56, 4) = ((MR_Box) (ClausePredOrFunc_26));
    }
    mercury__require__expect_3_p_0(Var_56, (MR_String) "predicate \140hlds.make_hlds.add_class.produce_instance_method_clause\'/14", (MR_String) "PredOrFunc mismatch");
    succeeded = hlds__make_hlds__state_var__illegal_state_var_func_result_4_p_0(PredOrFunc_15, HeadTerms0_27, &StateVar_33, &StateVarContext_34);
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Specs_59_59;
      MR_Word Var_61;

      *TVarSet_20 = TVarSet0_19;
      hlds__make_hlds__state_var__report_illegal_func_svar_result_5_p_0(StateVarContext_34, CVarSet_29, StateVar_33, STATE_VARIABLE_Specs_0_54, &STATE_VARIABLE_Specs_59_59);
      Var_61 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeBodyGoal_30);
      *STATE_VARIABLE_Specs_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_61, STATE_VARIABLE_Specs_59_59);
      *STATE_VARIABLE_ClausesInfo_53 = STATE_VARIABLE_ClausesInfo_0_52;
      *STATE_VARIABLE_QualInfo_51 = STATE_VARIABLE_QualInfo_0_50;
      *STATE_VARIABLE_ModuleInfo_49 = STATE_VARIABLE_ModuleInfo_0_48;
    }
    else
    if (((MR_tag((MR_Word) MaybeBodyGoal_30)) == (MR_Integer) 0))
    {
      MR_Word BodyGoalSpecs_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeBodyGoal_30, (MR_Integer) 0))));

      *TVarSet_20 = TVarSet0_19;
      *STATE_VARIABLE_Specs_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), BodyGoalSpecs_35, STATE_VARIABLE_Specs_0_54);
      *STATE_VARIABLE_ModuleInfo_49 = STATE_VARIABLE_ModuleInfo_0_48;
      *STATE_VARIABLE_QualInfo_51 = STATE_VARIABLE_QualInfo_0_50;
      *STATE_VARIABLE_ClausesInfo_53 = STATE_VARIABLE_ClausesInfo_0_52;
    }
    else
    {
      MR_Word BodyGoal_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBodyGoal_30, (MR_Integer) 0))));
      MR_Word HeadTerms_37;
      MR_Integer PredArity_38;
      MR_Integer Arity_39;
      MR_Word OldImportStatus_42;
      MR_Word PredStatus_43;
      MR_Word Goal_44;
      MR_Word VarSet_45;
      MR_Word Warnings_46;
      MR_Word SimpleCallId_47;
      MR_Word STATE_VARIABLE_Specs_67_67;
      MR_Word STATE_VARIABLE_Specs_68_68;

      hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(HeadTerms0_27, &HeadTerms_37);
      PredArity_38 = mercury__list__length_1_f_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[10]), HeadTerms_37);
      parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_15, &Arity_39, PredArity_38);
      OldImportStatus_42 = (MR_Word) (InstanceStatus_17);
      PredStatus_43 = (MR_Word) (OldImportStatus_42);
      hlds__make_hlds__add_clause__clauses_info_add_clause_24_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), CVarSet_29, TVarSet0_19, HeadTerms_37, BodyGoal_36, Context_16, (MR_Word) ((MR_Unsigned) 0U), PredStatus_43, PredOrFunc_15, Arity_39, (MR_Word) ((MR_Unsigned) 12U), &Goal_44, &VarSet_45, TVarSet_20, &Warnings_46, STATE_VARIABLE_ClausesInfo_0_52, STATE_VARIABLE_ClausesInfo_53, STATE_VARIABLE_ModuleInfo_0_48, STATE_VARIABLE_ModuleInfo_49, STATE_VARIABLE_QualInfo_0_50, STATE_VARIABLE_QualInfo_51, STATE_VARIABLE_Specs_0_54, &STATE_VARIABLE_Specs_67_67);
      {
        SimpleCallId_47 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SimpleCallId_47, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_15));
        MR_hl_field(MR_mktag(0), SimpleCallId_47, 1) = ((MR_Box) (PredName_25));
        MR_hl_field(MR_mktag(0), SimpleCallId_47, 2) = ((MR_Box) (Arity_39));
      }
      hlds__make_hlds__make_hlds_warn__warn_singletons_6_p_0(*STATE_VARIABLE_ModuleInfo_49, SimpleCallId_47, VarSet_45, Goal_44, STATE_VARIABLE_Specs_67_67, &STATE_VARIABLE_Specs_68_68);
      hlds__make_hlds__make_hlds_warn__add_quant_warnings_5_p_0(SimpleCallId_47, VarSet_45, Warnings_46, STATE_VARIABLE_Specs_68_68, STATE_VARIABLE_Specs_55);
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_p_0(
  MR_Word InstanceDefnA_3,
  MR_Word InstanceDefnB_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_55_55;
    MR_Word TypesA_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefnA_3, (MR_Integer) 1))));
    MR_Word TypesB0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefnB_4, (MR_Integer) 1))));
    MR_Word VarSetA_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefnA_3, (MR_Integer) 8))));
    MR_Word VarSetB_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefnB_4, (MR_Integer) 8))));
    MR_Word RenameApart_10;
    MR_Word TypesB1_11;
    MR_Word TVarsA_12;
    MR_Word TVarsB_13;
    MR_Integer NumTVars_14;
    MR_Word Renaming_15;
    MR_Word TypesB_16;
    MR_Integer Var_54;
    MR_Word _NewVarSet_9;

    parse_tree__prog_data__tvarset_merge_renaming_4_p_0(VarSetA_7, VarSetB_8, &_NewVarSet_9, &RenameApart_10);
    parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(RenameApart_10, TypesB0_6, &TypesB1_11);
    parse_tree__prog_type__type_vars_list_2_p_0(TypesA_5, &TVarsA_12);
    parse_tree__prog_type__type_vars_list_2_p_0(TypesB1_11, &TVarsB_13);
    mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[0]), TVarsA_12, &NumTVars_14);
    mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[0]), TVarsB_13, &Var_54);
    succeeded = (NumTVars_14 == Var_54);
    if (succeeded)
    {
      mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[0]), TVarsB_13, TVarsA_12, &Renaming_15);
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(Renaming_15, TypesB1_11, &TypesB_16);
      TypeInfo_55_55 = (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[23]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_55_55, ((MR_Box) (TypesA_5)), ((MR_Box) (TypesB_16)));
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__check_instance_constraints_5_p_0(
  MR_Word InstanceDefnA_6,
  MR_Word ClassId_7,
  MR_Word InstanceDefnB_8,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  {
    MR_bool succeeded;
    MR_Word TVarsA_10;
    MR_Word TVarSetA_11;
    MR_Word ConstraintsA_12;
    MR_Word TVarsB_13;
    MR_Word TVarSetB_14;
    MR_Word ConstraintsB_15;
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefnA_6, (MR_Integer) 1))));
    MR_Word Var_28;

    parse_tree__prog_type__type_vars_list_2_p_0(Var_27, &TVarsA_10);
    ConstraintsA_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefnA_6, (MR_Integer) 5))));
    TVarSetA_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefnA_6, (MR_Integer) 8))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefnB_8, (MR_Integer) 1))));
    parse_tree__prog_type__type_vars_list_2_p_0(Var_28, &TVarsB_13);
    ConstraintsB_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefnB_8, (MR_Integer) 5))));
    TVarSetB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefnB_8, (MR_Integer) 8))));
    succeeded = hlds__make_hlds__add_class__constraints_are_identical_6_p_0(TVarsA_10, TVarSetA_11, ConstraintsA_12, TVarsB_13, TVarSetB_14, ConstraintsB_15);
    if (succeeded)
      *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
    else
    {
      MR_Word ClassName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_7, (MR_Integer) 0))));
      MR_Integer ClassArity_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassId_7, (MR_Integer) 1))));
      MR_Word ContextA_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefnA_6, (MR_Integer) 4))));
      MR_Word PiecesA_19;
      MR_Word MsgA_20;
      MR_Word ContextB_21;
      MR_Word MsgB_23;
      MR_Word Spec_24;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_51;
      MR_Word Var_52;

      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (ClassName_16));
        MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (ClassArity_17));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (Var_33));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[22])));
      }
      {
        PiecesA_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PiecesA_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[43])));
        MR_hl_field(MR_mktag(1), PiecesA_19, 1) = ((MR_Box) (Var_31));
      }
      {
        Var_41 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (PiecesA_19));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MsgA_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MsgA_20, 0) = ((MR_Box) (ContextA_18));
        MR_hl_field(MR_mktag(0), MsgA_20, 1) = ((MR_Box) (Var_40));
      }
      ContextB_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefnB_8, (MR_Integer) 4))));
      {
        MsgB_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MsgB_23, 0) = ((MR_Box) (ContextB_21));
        MR_hl_field(MR_mktag(0), MsgB_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[46])));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MsgB_23));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (MsgA_20));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_52));
      }
      {
        Spec_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), Spec_24, 2) = ((MR_Box) (Var_51));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_26 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_24));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_25));
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_13_p_0(
  MR_Word ClassName_14,
  MR_Word ClassParamVars_15,
  MR_Integer ItemNumber_16,
  MR_Word MaybeItemMercuryStatus_17,
  MR_Word TypeClassStatus_18,
  MR_Word NeedQual_19,
  MR_Word Method_20,
  MR_Word STATE_VARIABLE_PredProcIds_0_55,
  MR_Word * STATE_VARIABLE_PredProcIds_56,
  MR_Word STATE_VARIABLE_ModuleInfo_0_57,
  MR_Word * STATE_VARIABLE_ModuleInfo_58,
  MR_Word STATE_VARIABLE_Specs_0_59,
  MR_Word * STATE_VARIABLE_Specs_60)
{
  {
    MR_bool succeeded;
    MR_Word PredName_36;
    MR_Word MaybePredOrFunc_37;
    MR_Word Modes_38;
    MR_Word Context_42;
    MR_Word PredTable_43;
    MR_Integer PredArity_44;
    MR_Word PredOrFunc_45;
    MR_Word PredIds_46;

    if (((MR_tag((MR_Word) Method_20)) == (MR_Integer) 0))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_class.add_class_pred_or_func_mode_method\'/13", (MR_String) "pred_or_func method item");
        return;
      }
    }
    else
    {
      PredName_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Method_20, (MR_Integer) 0))));
      MaybePredOrFunc_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Method_20, (MR_Integer) 1))));
      Modes_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Method_20, (MR_Integer) 2))));
      Context_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Method_20, (MR_Integer) 6))));
    }
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_57, &PredTable_43);
    PredArity_44 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_38);
    if ((MaybePredOrFunc_37 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_class.add_class_pred_or_func_mode_method\'/13", (MR_String) "unexpanded \140with_inst\140 annotation");
        return;
      }
    }
    else
      PredOrFunc_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredOrFunc_37, (MR_Integer) 0))));
    hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable_43, (MR_Integer) 0, PredOrFunc_45, PredName_36, PredArity_44, &PredIds_46);
    if ((PredIds_46 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      hlds__make_hlds__add_class__missing_pred_or_func_method_error_6_p_0(PredName_36, PredArity_44, PredOrFunc_45, Context_42, STATE_VARIABLE_Specs_0_59, STATE_VARIABLE_Specs_60);
      *STATE_VARIABLE_PredProcIds_56 = STATE_VARIABLE_PredProcIds_0_55;
      *STATE_VARIABLE_ModuleInfo_58 = STATE_VARIABLE_ModuleInfo_0_57;
    }
    else
    {
      MR_Word HeadPredId_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_46, (MR_Integer) 0))));
      MR_Word TailPredIds_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_46, (MR_Integer) 1))));

      if ((TailPredIds_48 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word PredInfo_50;
        MR_Word PredMarkers_51;

        hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_57, HeadPredId_47, &PredInfo_50);
        hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_50, &PredMarkers_51);
        succeeded = hlds__hlds_pred__check_marker_2_p_0(PredMarkers_51, (MR_Integer) 11);
        if (succeeded)
        {
          MR_Word PredProcId_52;

          hlds__make_hlds__add_class__module_add_class_method_12_p_0(ClassName_14, ClassParamVars_15, ItemNumber_16, MaybeItemMercuryStatus_17, TypeClassStatus_18, NeedQual_19, Method_20, &PredProcId_52, STATE_VARIABLE_ModuleInfo_0_57, STATE_VARIABLE_ModuleInfo_58, STATE_VARIABLE_Specs_0_59, STATE_VARIABLE_Specs_60);
          mercury__list__cons_3_p_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), ((MR_Box) (PredProcId_52)), STATE_VARIABLE_PredProcIds_0_55, STATE_VARIABLE_PredProcIds_56);
        }
        else
        {
          hlds__make_hlds__add_class__missing_pred_or_func_method_error_6_p_0(PredName_36, PredArity_44, PredOrFunc_45, Context_42, STATE_VARIABLE_Specs_0_59, STATE_VARIABLE_Specs_60);
          *STATE_VARIABLE_ModuleInfo_58 = STATE_VARIABLE_ModuleInfo_0_57;
          *STATE_VARIABLE_PredProcIds_56 = STATE_VARIABLE_PredProcIds_0_55;
        }
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_class.add_class_pred_or_func_mode_method\'/13", (MR_String) "multiple preds matching method mode");
          return;
        }
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__missing_pred_or_func_method_error_6_p_0(
  MR_Word MethodName_7,
  MR_Integer MethodArity_8,
  MR_Word PredOrFunc_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  {
    MR_Word Pieces_12;
    MR_Word Msg_13;
    MR_Word Spec_14;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_38;

    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (MethodName_7));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (MethodArity_8));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (Var_21));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 14U));
      MR_hl_field(MR_mktag(3), Var_26, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_9));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[31])));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[42])));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_22));
    }
    {
      Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[41])));
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
      MR_hl_field(MR_mktag(0), Msg_13, 0) = ((MR_Box) (Context_10));
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

static MR_bool MR_CALL 
hlds__make_hlds__add_class__is_class_method_mode_item_1_p_0(
  MR_Word Method_2)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Method_2)) == (MR_Integer) 1);

    if (succeeded)
    {
    }
    return succeeded;
  }
}

static MR_Integer MR_CALL 
hlds__make_hlds__add_class__get_list_index_3_f_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word HeadVar__1_1,
  MR_Integer N_2,
  MR_Box X_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer HeadVar__4_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.make_hlds.add_class.get_list_index\'/3", (MR_String) "element not found");
    }
    else
    {
      MR_Box E_10 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Word Es_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_16, X_3, E_10);
      if (succeeded)
        HeadVar__4_4 = N_2;
      else
      {
        MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) N_2 + (MR_Unsigned) (MR_Integer) 1);
        MR_Word next_value_of_HeadVar__1_1 = Es_11;
        MR_Integer next_value_of_N_2 = Var_14;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        N_2 = next_value_of_N_2;
        continue;
      }
    }
    return HeadVar__4_4;
    break;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_class__make_hlds_fundep_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__3_13;

    conv0_LambdaHeadVar__3_13 = hlds__make_hlds__add_class__IntroducedFrom__func__make_hlds_fundep_2__206__1_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_13));
    return wrapper_arg_3;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_class__make_hlds_fundep_2_f_0(
  MR_Word TVars_4,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Domain0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Range0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Domain_7;
    MR_Word Range_8;
    MR_Word Var_15;
    MR_Word Func_29;
    MR_Word Var_33;
    MR_Box conv1_Domain_7;
    MR_Box conv2_Range_8;

    Var_15 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
    {
      Func_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Func_29, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Func_29, 1) = ((MR_Box) (hlds__make_hlds__add_class__make_hlds_fundep_2_f_0_1));
      MR_hl_field(MR_mktag(0), Func_29, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Func_29, 3) = ((MR_Box) (TVars_4));
    }
    conv1_Domain_7 = mercury__list__foldl_3_f_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[6]), Func_29, Domain0_5, ((MR_Box) (Var_15)));
    Domain_7 = ((MR_Word) (conv1_Domain_7));
    Var_33 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
    conv2_Range_8 = mercury__list__foldl_3_f_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[6]), Func_29, Range0_6, ((MR_Box) (Var_33)));
    Range_8 = ((MR_Word) (conv2_Range_8));
    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (Domain_7));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (Range_8));
    }
    return HeadVar__3_3;
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_p_0_1(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_TVarSet_20;
    MR_Word conv3_STATE_VARIABLE_ModuleInfo_49;
    MR_Word conv2_STATE_VARIABLE_QualInfo_51;
    MR_Word conv1_STATE_VARIABLE_ClausesInfo_53;
    MR_Word conv0_STATE_VARIABLE_Specs_55;

    hlds__make_hlds__add_class__produce_instance_method_clause_14_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_TVarSet_20, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_ModuleInfo_49, ((MR_Word) (wrapper_arg_6)), &conv2_STATE_VARIABLE_QualInfo_51, ((MR_Word) (wrapper_arg_8)), &conv1_STATE_VARIABLE_ClausesInfo_53, ((MR_Word) (wrapper_arg_10)), &conv0_STATE_VARIABLE_Specs_55);
    *wrapper_arg_3 = ((MR_Box) (conv4_TVarSet_20));
    *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_ModuleInfo_49));
    *wrapper_arg_7 = ((MR_Box) (conv2_STATE_VARIABLE_QualInfo_51));
    *wrapper_arg_9 = ((MR_Box) (conv1_STATE_VARIABLE_ClausesInfo_53));
    *wrapper_arg_11 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_55));
  }
}

void MR_CALL 
hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_p_0(
  MR_Word InstanceProcDefn_17,
  MR_Word PredOrFunc_18,
  MR_Integer PredArity_19,
  MR_Word ArgTypes_20,
  MR_Word Markers_21,
  MR_Word Context_22,
  MR_Word InstanceStatus_23,
  MR_Word * ClausesInfo_24,
  MR_Word STATE_VARIABLE_TVarSet_0_47,
  MR_Word * STATE_VARIABLE_TVarSet_48,
  MR_Word STATE_VARIABLE_ModuleInfo_0_49,
  MR_Word * STATE_VARIABLE_ModuleInfo_50,
  MR_Word STATE_VARIABLE_QualInfo_0_51,
  MR_Word * STATE_VARIABLE_QualInfo_52,
  MR_Word STATE_VARIABLE_Specs_0_53,
  MR_Word * STATE_VARIABLE_Specs_54)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) InstanceProcDefn_17)) == (MR_Integer) 1))
    {
      MR_Word InstanceClauses_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstanceProcDefn_17, (MR_Integer) 0))));
      MR_Word ClausesInfo0_46;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Box conv9_STATE_VARIABLE_TVarSet_48;
      MR_Box conv8_STATE_VARIABLE_ModuleInfo_50;
      MR_Box conv7_STATE_VARIABLE_QualInfo_52;
      MR_Box conv6_ClausesInfo_24;
      MR_Box conv5_STATE_VARIABLE_Specs_54;

      Var_55 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
      hlds__hlds_clauses__clauses_info_init_4_p_0(PredOrFunc_18, PredArity_19, Var_55, &ClausesInfo0_46);
      {
        Var_56 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_9[0]));
        MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_p_0_1));
        MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (PredOrFunc_18));
        MR_hl_field(MR_mktag(0), Var_56, 4) = ((MR_Box) (Context_22));
        MR_hl_field(MR_mktag(0), Var_56, 5) = ((MR_Box) (InstanceStatus_23));
      }
      mercury__list__foldl5_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[4]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_info_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[5]), Var_56, InstanceClauses_45, ((MR_Box) (STATE_VARIABLE_TVarSet_0_47)), &conv9_STATE_VARIABLE_TVarSet_48, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_49)), &conv8_STATE_VARIABLE_ModuleInfo_50, ((MR_Box) (STATE_VARIABLE_QualInfo_0_51)), &conv7_STATE_VARIABLE_QualInfo_52, ((MR_Box) (ClausesInfo0_46)), &conv6_ClausesInfo_24, ((MR_Box) (STATE_VARIABLE_Specs_0_53)), &conv5_STATE_VARIABLE_Specs_54);
      *STATE_VARIABLE_TVarSet_48 = ((MR_Word) (conv9_STATE_VARIABLE_TVarSet_48));
      *STATE_VARIABLE_ModuleInfo_50 = ((MR_Word) (conv8_STATE_VARIABLE_ModuleInfo_50));
      *STATE_VARIABLE_QualInfo_52 = ((MR_Word) (conv7_STATE_VARIABLE_QualInfo_52));
      *ClausesInfo_24 = ((MR_Word) (conv6_ClausesInfo_24));
      *STATE_VARIABLE_Specs_54 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_54));
    }
    else
    {
      MR_Word InstancePredName_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceProcDefn_17, (MR_Integer) 0))));
      MR_Word GoalInfo0_30;
      MR_Word GoalInfo1_31;
      MR_Word HeadVars_32;
      MR_Word NonLocals_33;
      MR_Word GoalInfo2_34;
      MR_Word GoalInfo_35;
      MR_Word VarSet0_36;
      MR_Word VarSet_37;
      MR_Word IntroducedGoal_38;
      MR_Word IntroducedClause_39;
      MR_Word TVarNameMap_40;
      MR_Word VarTypes_41;
      MR_Word HeadVarVec_42;
      MR_Word ClausesRep_43;
      MR_Word RttiVarMaps_44;
      MR_Word Var_66;
      MR_Word Var_71;
      MR_Word Var_74;

      hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_30);
      hlds__hlds_goal__goal_info_set_context_3_p_0(Context_22, GoalInfo0_30, &GoalInfo1_31);
      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet0_36);
      parse_tree__prog_util__make_n_fresh_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "HeadVar__", PredArity_19, &HeadVars_32, VarSet0_36, &VarSet_37);
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_32, &NonLocals_33);
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_33, GoalInfo1_31, &GoalInfo2_34);
      succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_21, (MR_Integer) 14);
      if (succeeded)
      {
        hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, GoalInfo2_34, &GoalInfo_35);
      }
      else
      {
        succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_21, (MR_Integer) 15);
        if (succeeded)
        {
          hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 1, GoalInfo2_34, &GoalInfo_35);
        }
        else
          GoalInfo_35 = GoalInfo2_34;
      }
      Var_66 = hlds__hlds_pred__invalid_pred_id_0_f_0();
      hlds__make_hlds__qual_info__construct_pred_or_func_call_8_p_0(Var_66, PredOrFunc_18, InstancePredName_29, HeadVars_32, GoalInfo_35, &IntroducedGoal_38, STATE_VARIABLE_QualInfo_0_51, STATE_VARIABLE_QualInfo_52);
      {
        IntroducedClause_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), IntroducedClause_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), IntroducedClause_39, 1) = ((MR_Box) (IntroducedGoal_38));
        MR_hl_field(MR_mktag(0), IntroducedClause_39, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), IntroducedClause_39, 3) = ((MR_Box) (Context_22));
        MR_hl_field(MR_mktag(0), IntroducedClause_39, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[0]), &TVarNameMap_40);
      hlds__vartypes__vartypes_from_corresponding_lists_3_p_0(HeadVars_32, ArgTypes_20, &VarTypes_41);
      HeadVarVec_42 = hlds__hlds_args__proc_arg_vector_init_2_f_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[3]), PredOrFunc_18, HeadVars_32);
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (IntroducedClause_39));
        MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      hlds__hlds_clauses__set_clause_list_2_p_0(Var_71, &ClausesRep_43);
      hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&RttiVarMaps_44);
      Var_74 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        *ClausesInfo_24 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VarSet_37));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TVarNameMap_40));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarTypes_41));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarTypes_41));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (HeadVarVec_42));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ClausesRep_43));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_74));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (RttiVarMaps_44));
        MR_hl_field(MR_mktag(0), base, 8) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
      }
      *STATE_VARIABLE_TVarSet_48 = STATE_VARIABLE_TVarSet_0_47;
      *STATE_VARIABLE_ModuleInfo_50 = STATE_VARIABLE_ModuleInfo_0_49;
      *STATE_VARIABLE_Specs_54 = STATE_VARIABLE_Specs_0_53;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__add_instance_defn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Specs_26;

    hlds__make_hlds__add_class__check_instance_constraints_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Specs_26);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_26));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_class__add_instance_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

void MR_CALL 
hlds__make_hlds__add_class__add_instance_defn_5_p_0(
  MR_Word StatusItem_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37)
{
  {
    MR_bool succeeded;
    MR_Word ItemMercuryStatus_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StatusItem_6, (MR_Integer) 0))));
    MR_Word ItemInstanceInfo_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StatusItem_6, (MR_Integer) 1))));
    MR_Word ClassName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_10, (MR_Integer) 0))));
    MR_Word Types_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_10, (MR_Integer) 1))));
    MR_Word OriginalTypes_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_10, (MR_Integer) 2))));
    MR_Word Constraints_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_10, (MR_Integer) 3))));
    MR_Word InstanceBody0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_10, (MR_Integer) 4))));
    MR_Word VarSet_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_10, (MR_Integer) 5))));
    MR_Word InstanceModuleName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_10, (MR_Integer) 6))));
    MR_Word Context_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_10, (MR_Integer) 7))));
    MR_Word InstanceStatus0_20;
    MR_Word InstanceStatus_21;
    MR_Word Classes_23;
    MR_Word InstanceTable0_24;
    MR_Integer ClassArity_25;
    MR_Word ClassId_26;
    MR_Word InstanceBody_27;
    MR_Box conv0_Var_28;

    hlds__status__item_mercury_status_to_instance_status_2_p_0(ItemMercuryStatus_9, &InstanceStatus0_20);
    if ((InstanceBody0_15 == (MR_Word) ((MR_Unsigned) 0U)))
      hlds__status__instance_make_status_abstract_2_p_0(InstanceStatus0_20, &InstanceStatus_21);
    else
      InstanceStatus_21 = InstanceStatus0_20;
    hlds__hlds_module__module_info_get_class_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_34, &Classes_23);
    hlds__hlds_module__module_info_get_instance_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_34, &InstanceTable0_24);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types_12, &ClassArity_25);
    {
      ClassId_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ClassId_26, 0) = ((MR_Box) (ClassName_11));
      MR_hl_field(MR_mktag(0), ClassId_26, 1) = ((MR_Box) (ClassArity_25));
    }
    hlds__make_hlds__state_var__expand_bang_state_pairs_in_instance_body_2_p_0(InstanceBody0_15, &InstanceBody_27);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), Classes_23, ((MR_Box) (ClassId_26)), &conv0_Var_28);
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
    {
      MR_Word ProofMap_30;
      MR_Word NewInstanceDefn_31;
      MR_Word OldInstanceDefns_32;
      MR_Word InstanceTable_33;
      MR_Word STATE_VARIABLE_Specs_38_38;
      MR_Word Var_40;
      MR_Word NewTypes_58;
      MR_Word NewContext_61;
      MR_Word NewInstanceBody_63;
      MR_Word NewTVarSet_65;
      MR_Word EquivInstanceDefns_75;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Box conv1_OldInstanceDefns_32;
      MR_Box conv3_STATE_VARIABLE_Specs_37;

      mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), &ProofMap_30);
      {
        NewInstanceDefn_31 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), NewInstanceDefn_31, 0) = ((MR_Box) (InstanceModuleName_17));
        MR_hl_field(MR_mktag(0), NewInstanceDefn_31, 1) = ((MR_Box) (Types_12));
        MR_hl_field(MR_mktag(0), NewInstanceDefn_31, 2) = ((MR_Box) (OriginalTypes_13));
        MR_hl_field(MR_mktag(0), NewInstanceDefn_31, 3) = ((MR_Box) (InstanceStatus_21));
        MR_hl_field(MR_mktag(0), NewInstanceDefn_31, 4) = ((MR_Box) (Context_18));
        MR_hl_field(MR_mktag(0), NewInstanceDefn_31, 5) = ((MR_Box) (Constraints_14));
        MR_hl_field(MR_mktag(0), NewInstanceDefn_31, 6) = ((MR_Box) (InstanceBody_27));
        MR_hl_field(MR_mktag(0), NewInstanceDefn_31, 7) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), NewInstanceDefn_31, 8) = ((MR_Box) (VarSet_16));
        MR_hl_field(MR_mktag(0), NewInstanceDefn_31, 9) = ((MR_Box) (ProofMap_30));
      }
      mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[2]), InstanceTable0_24, ((MR_Box) (ClassId_26)), &conv1_OldInstanceDefns_32);
      OldInstanceDefns_32 = ((MR_Word) (conv1_OldInstanceDefns_32));
      NewTypes_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewInstanceDefn_31, (MR_Integer) 1))));
      NewContext_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewInstanceDefn_31, (MR_Integer) 4))));
      NewInstanceBody_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewInstanceDefn_31, (MR_Integer) 6))));
      NewTVarSet_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewInstanceDefn_31, (MR_Integer) 8))));
      succeeded = (NewInstanceBody_63 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        hlds__make_hlds__add_class__report_any_overlapping_instance_declarations_7_p_0(ClassId_26, NewTypes_58, NewTVarSet_65, NewContext_61, OldInstanceDefns_32, STATE_VARIABLE_Specs_0_36, &STATE_VARIABLE_Specs_38_38);
      }
      else
        STATE_VARIABLE_Specs_38_38 = STATE_VARIABLE_Specs_0_36;
      {
        Var_76 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_2[3]));
        MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (hlds__make_hlds__add_class__add_instance_defn_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_76, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_76, 3) = ((MR_Box) (NewInstanceDefn_31));
      }
      mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), Var_76, OldInstanceDefns_32, &EquivInstanceDefns_75);
      {
        Var_77 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_8[0]));
        MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (hlds__make_hlds__add_class__add_instance_defn_5_p_0_2));
        MR_hl_field(MR_mktag(0), Var_77, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_77, 3) = ((MR_Box) (NewInstanceDefn_31));
        MR_hl_field(MR_mktag(0), Var_77, 4) = ((MR_Box) (ClassId_26));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[5]), Var_77, EquivInstanceDefns_75, ((MR_Box) (STATE_VARIABLE_Specs_38_38)), &conv3_STATE_VARIABLE_Specs_37);
      *STATE_VARIABLE_Specs_37 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_37));
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (NewInstanceDefn_31));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (OldInstanceDefns_32));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[2]), ((MR_Box) (ClassId_26)), ((MR_Box) (Var_40)), InstanceTable0_24, &InstanceTable_33);
      hlds__hlds_module__module_info_set_instance_table_3_p_0(InstanceTable_33, STATE_VARIABLE_ModuleInfo_0_34, STATE_VARIABLE_ModuleInfo_35);
    }
    else
    {
      hlds__make_hlds__add_class__undefined_type_class_error_6_p_0(ClassName_11, ClassArity_25, Context_18, (MR_String) "instance declaration", STATE_VARIABLE_Specs_0_36, STATE_VARIABLE_Specs_37);
      *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__undefined_type_class_error_6_p_0(
  MR_Word ClassName_7,
  MR_Integer ClassArity_8,
  MR_Word Context_9,
  MR_String Description_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  {
    MR_Word Pieces_12;
    MR_Word Msg_13;
    MR_Word Spec_14;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_44;

    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (Description_10));
    }
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (ClassName_7));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (ClassArity_8));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[29])));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[40])));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_21));
    }
    {
      Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[39])));
      MR_hl_field(MR_mktag(1), Pieces_12, 1) = ((MR_Box) (Var_19));
    }
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (Pieces_12));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_13, 0) = ((MR_Box) (Context_9));
      MR_hl_field(MR_mktag(0), Msg_13, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Msg_13));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) (Var_44));
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

static void MR_CALL 
hlds__make_hlds__add_class__report_any_overlapping_instance_declarations_7_p_0(
  MR_Word ClassId_1,
  MR_Word NewTypes_2,
  MR_Word NewTVarSet_3,
  MR_Word NewContext_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_7 = STATE_VARIABLE_Specs_0_6;
    else
    {
      MR_Word OtherInstanceDefn_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word OtherInstanceDefns_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word OtherTypes_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OtherInstanceDefn_19, (MR_Integer) 1))));
      MR_Word OtherContext_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OtherInstanceDefn_19, (MR_Integer) 4))));
      MR_Word OtherInstanceBody_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OtherInstanceDefn_19, (MR_Integer) 6))));
      MR_Word OtherTVarSet_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OtherInstanceDefn_19, (MR_Integer) 8))));
      MR_Word STATE_VARIABLE_Specs_77_77;
      MR_Word Renaming_34;
      MR_Word NewOtherTypes_35;
      MR_Word _MergedTVarSet_33;
      MR_Word Var_36;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_6;

      succeeded = (OtherInstanceBody_28 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        parse_tree__prog_data__tvarset_merge_renaming_4_p_0(NewTVarSet_3, OtherTVarSet_30, &_MergedTVarSet_33, &Renaming_34);
        parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(Renaming_34, OtherTypes_23, &NewOtherTypes_35);
        succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(NewTypes_2, NewOtherTypes_35, &Var_36);
      }
      if (succeeded)
      {
        MR_Word ClassName_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_1, (MR_Integer) 0))));
        MR_Integer ClassArity_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassId_1, (MR_Integer) 1))));
        MR_Word NewPieces_39;
        MR_Word NewMsg_40;
        MR_Word OtherMsg_42;
        MR_Word Spec_43;
        MR_Word Var_48;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_66;
        MR_Word Var_74;
        MR_Word Var_75;

        {
          Var_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (ClassName_37));
          MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (ClassArity_38));
        }
        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (Var_53));
        }
        {
          Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
          MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[19])));
        }
        {
          Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[35])));
          MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_51));
        }
        {
          NewPieces_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), NewPieces_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[34])));
          MR_hl_field(MR_mktag(1), NewPieces_39, 1) = ((MR_Box) (Var_48));
        }
        {
          Var_61 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (NewPieces_39));
        }
        {
          Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
          MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          NewMsg_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), NewMsg_40, 0) = ((MR_Box) (NewContext_4));
          MR_hl_field(MR_mktag(0), NewMsg_40, 1) = ((MR_Box) (Var_60));
        }
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (OtherContext_26));
        }
        {
          OtherMsg_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), OtherMsg_42, 0) = ((MR_Box) (Var_66));
          MR_hl_field(MR_mktag(1), OtherMsg_42, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), OtherMsg_42, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), OtherMsg_42, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[38])));
        }
        {
          Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (OtherMsg_42));
          MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (NewMsg_40));
          MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_75));
        }
        {
          Spec_43 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_43, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_43, 1) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(0), Spec_43, 2) = ((MR_Box) (Var_74));
        }
        {
          STATE_VARIABLE_Specs_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_77_77, 0) = ((MR_Box) (Spec_43));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_77_77, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_6));
        }
      }
      else
        STATE_VARIABLE_Specs_77_77 = STATE_VARIABLE_Specs_0_6;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = OtherInstanceDefns_20;
      next_value_of_STATE_VARIABLE_Specs_0_6 = STATE_VARIABLE_Specs_77_77;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_Specs_0_6 = next_value_of_STATE_VARIABLE_Specs_0_6;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_class__add_typeclass_defn_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_101;

    succeeded = hlds__make_hlds__add_class__IntroducedFrom__pred__add_typeclass_defn__162__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__2_101);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_101));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_class__add_typeclass_defn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_101;

    succeeded = hlds__make_hlds__add_class__IntroducedFrom__pred__add_typeclass_defn__162__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_101);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_101));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_class__add_typeclass_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = hlds__make_hlds__add_class__make_hlds_fundep_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

void MR_CALL 
hlds__make_hlds__add_class__add_typeclass_defn_5_p_0(
  MR_Word SectionItem_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_58,
  MR_Word * STATE_VARIABLE_ModuleInfo_59,
  MR_Word STATE_VARIABLE_Specs_0_60,
  MR_Word * STATE_VARIABLE_Specs_61)
{
  {
    MR_bool succeeded;
    MR_Word SectionInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionItem_6, (MR_Integer) 0))));
    MR_Word ItemTypeClassInfo_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionItem_6, (MR_Integer) 1))));
    MR_Word ItemMercuryStatus_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionInfo_9, (MR_Integer) 0))));
    MR_Word NeedQual_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SectionInfo_9, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word TypeClassStatus0_13;
    MR_Word ClassName_14;
    MR_Word ClassParamVars_15;
    MR_Word Constraints_16;
    MR_Word FunDeps_17;
    MR_Word Interface_18;
    MR_Word VarSet_19;
    MR_Word Context_20;
    MR_Word Classes0_22;
    MR_Integer ClassArity_23;
    MR_Word ClassId_24;
    MR_Word TypeClassStatus1_25;
    MR_Word HLDSFunDeps_27;
    MR_Word Var_62;
    MR_Word OldDefn_28;
    MR_Box conv1_OldDefn_28;

    hlds__status__item_mercury_status_to_typeclass_status_2_p_0(ItemMercuryStatus_11, &TypeClassStatus0_13);
    ClassName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_10, (MR_Integer) 0))));
    ClassParamVars_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_10, (MR_Integer) 1))));
    Constraints_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_10, (MR_Integer) 2))));
    FunDeps_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_10, (MR_Integer) 3))));
    Interface_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_10, (MR_Integer) 4))));
    VarSet_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_10, (MR_Integer) 5))));
    Context_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_10, (MR_Integer) 6))));
    hlds__hlds_module__module_info_get_class_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_58, &Classes0_22);
    mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[0]), ClassParamVars_15, &ClassArity_23);
    {
      ClassId_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ClassId_24, 0) = ((MR_Box) (ClassName_14));
      MR_hl_field(MR_mktag(0), ClassId_24, 1) = ((MR_Box) (ClassArity_23));
    }
    if ((Interface_18 == (MR_Word) ((MR_Unsigned) 0U)))
      hlds__status__typeclass_make_status_abstract_2_p_0(TypeClassStatus0_13, &TypeClassStatus1_25);
    else
      TypeClassStatus1_25 = TypeClassStatus0_13;
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (hlds__make_hlds__add_class__add_typeclass_defn_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (ClassParamVars_15));
    }
    HLDSFunDeps_27 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0), Var_62, FunDeps_17);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), Classes0_22, ((MR_Box) (ClassId_24)), &conv1_OldDefn_28);
    if (succeeded)
    {
      OldDefn_28 = ((MR_Word) (conv1_OldDefn_28));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word OldTypeClassStatus_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldDefn_28, (MR_Integer) 0))));
      MR_Word OldConstraints_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldDefn_28, (MR_Integer) 1))));
      MR_Word OldFunDeps_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldDefn_28, (MR_Integer) 2))));
      MR_Word OldClassParamVars_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldDefn_28, (MR_Integer) 4))));
      MR_Word OldInterface_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldDefn_28, (MR_Integer) 6))));
      MR_Word OldMethods_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldDefn_28, (MR_Integer) 7))));
      MR_Word OldVarSet_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldDefn_28, (MR_Integer) 8))));
      MR_Word OldContext_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldDefn_28, (MR_Integer) 9))));
      MR_Word TypeClassStatus_39;
      MR_Word ClassMethods0_41;
      MR_Word ClassInterface_42;

      hlds__status__typeclass_combine_status_3_p_0(TypeClassStatus1_25, OldTypeClassStatus_29, &TypeClassStatus_39);
      if ((OldInterface_35 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        ClassMethods0_41 = (MR_Word) ((MR_Unsigned) 0U);
        ClassInterface_42 = Interface_18;
      }
      else
      {
        ClassMethods0_41 = OldMethods_36;
        ClassInterface_42 = OldInterface_35;
      }
      succeeded = hlds__make_hlds__add_class__constraints_are_identical_6_p_0(OldClassParamVars_33, OldVarSet_37, OldConstraints_30, ClassParamVars_15, VarSet_19, Constraints_16);
      succeeded = !(succeeded);
      if (succeeded)
      {
        hlds__make_hlds_error__report_multiple_def_error_8_p_0(ClassName_14, ClassArity_23, (MR_String) "typeclass", Context_20, OldContext_38, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[13])), STATE_VARIABLE_Specs_0_60, STATE_VARIABLE_Specs_61);
        *STATE_VARIABLE_ModuleInfo_59 = STATE_VARIABLE_ModuleInfo_0_58;
      }
      else
      {
        succeeded = hlds__make_hlds__add_class__class_fundeps_are_identical_2_p_0(OldFunDeps_31, HLDSFunDeps_27);
        succeeded = !(succeeded);
        if (succeeded)
        {
          hlds__make_hlds_error__report_multiple_def_error_8_p_0(ClassName_14, ClassArity_23, (MR_String) "typeclass", Context_20, OldContext_38, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[15])), STATE_VARIABLE_Specs_0_60, STATE_VARIABLE_Specs_61);
          *STATE_VARIABLE_ModuleInfo_59 = STATE_VARIABLE_ModuleInfo_0_58;
        }
        else
        {
          MR_Word ErrorOrPrevDef_150;
          MR_Word STATE_VARIABLE_Specs_69_151;

          succeeded = (Interface_18 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (OldInterface_35 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
            }
          }
          if (succeeded)
          {
            MR_Word Var_77 = (MR_Word) (TypeClassStatus_39);

            succeeded = (Var_77 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              STATE_VARIABLE_Specs_69_151 = STATE_VARIABLE_Specs_0_60;
            else
            {
              hlds__make_hlds_error__report_multiple_def_error_8_p_0(ClassName_14, ClassArity_23, (MR_String) "typeclass", Context_20, OldContext_38, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Specs_0_60, &STATE_VARIABLE_Specs_69_151);
            }
            ErrorOrPrevDef_150 = (MR_Integer) 1;
          }
          else
          {
            ErrorOrPrevDef_150 = (MR_Integer) 0;
            STATE_VARIABLE_Specs_69_151 = STATE_VARIABLE_Specs_0_60;
          }
          switch (ErrorOrPrevDef_150) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ClassMethods_51;
                MR_Word Kinds_53;
                MR_Word ClassDefn_54;
                MR_Word Classes_55;
                MR_Word STATE_VARIABLE_ModuleInfo_81_81;

                if ((Interface_18 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  ClassMethods_51 = ClassMethods0_41;
                  STATE_VARIABLE_ModuleInfo_81_81 = STATE_VARIABLE_ModuleInfo_0_58;
                  *STATE_VARIABLE_Specs_61 = STATE_VARIABLE_Specs_69_151;
                }
                else
                {
                  MR_Word Methods_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Interface_18, (MR_Integer) 0))));
                  MR_Word PredProcIds0_49;
                  MR_Word PredProcIds1_50;
                  MR_Word Var_80;

                  {
                    Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (ItemMercuryStatus_11));
                  }
                  hlds__make_hlds__add_class__module_add_class_interface_11_p_0(ClassName_14, ClassParamVars_15, TypeClassStatus_39, Var_80, NeedQual_12, Methods_48, &PredProcIds0_49, STATE_VARIABLE_ModuleInfo_0_58, &STATE_VARIABLE_ModuleInfo_81_81, STATE_VARIABLE_Specs_69_151, STATE_VARIABLE_Specs_61);
                  mercury__list__filter_map_3_p_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_4[1]), PredProcIds0_49, &PredProcIds1_50);
                  mercury__list__sort_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), PredProcIds1_50, &ClassMethods_51);
                }
                Kinds_53 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
                {
                  ClassDefn_54 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ClassDefn_54, 0) = ((MR_Box) (TypeClassStatus_39));
                  MR_hl_field(MR_mktag(0), ClassDefn_54, 1) = ((MR_Box) (Constraints_16));
                  MR_hl_field(MR_mktag(0), ClassDefn_54, 2) = ((MR_Box) (HLDSFunDeps_27));
                  MR_hl_field(MR_mktag(0), ClassDefn_54, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), ClassDefn_54, 4) = ((MR_Box) (ClassParamVars_15));
                  MR_hl_field(MR_mktag(0), ClassDefn_54, 5) = ((MR_Box) (Kinds_53));
                  MR_hl_field(MR_mktag(0), ClassDefn_54, 6) = ((MR_Box) (ClassInterface_42));
                  MR_hl_field(MR_mktag(0), ClassDefn_54, 7) = ((MR_Box) (ClassMethods_51));
                  MR_hl_field(MR_mktag(0), ClassDefn_54, 8) = ((MR_Box) (VarSet_19));
                  MR_hl_field(MR_mktag(0), ClassDefn_54, 9) = ((MR_Box) (Context_20));
                }
                mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ((MR_Box) (ClassId_24)), ((MR_Box) (ClassDefn_54)), Classes0_22, &Classes_55);
                hlds__hlds_module__module_info_set_class_table_3_p_0(Classes_55, STATE_VARIABLE_ModuleInfo_81_81, STATE_VARIABLE_ModuleInfo_59);
              }
              break;
            case (MR_Integer) 1:
              {
                *STATE_VARIABLE_ModuleInfo_59 = STATE_VARIABLE_ModuleInfo_0_58;
                *STATE_VARIABLE_Specs_61 = STATE_VARIABLE_Specs_69_151;
              }
              break;
          }
        }
      }
    }
    else
    {
      MR_Word Instances0_56;
      MR_Word Instances_57;
      MR_Word ClassMethods_133;
      MR_Word Kinds_135;
      MR_Word ClassDefn_136;
      MR_Word Classes_137;
      MR_Word STATE_VARIABLE_ModuleInfo_81_140;
      MR_Word STATE_VARIABLE_ModuleInfo_84_142;

      if ((Interface_18 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        ClassMethods_133 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_ModuleInfo_81_140 = STATE_VARIABLE_ModuleInfo_0_58;
        *STATE_VARIABLE_Specs_61 = STATE_VARIABLE_Specs_0_60;
      }
      else
      {
        MR_Word Methods_111 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Interface_18, (MR_Integer) 0))));
        MR_Word PredProcIds0_112;
        MR_Word PredProcIds1_113;
        MR_Word Var_114;

        {
          Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (ItemMercuryStatus_11));
        }
        hlds__make_hlds__add_class__module_add_class_interface_11_p_0(ClassName_14, ClassParamVars_15, TypeClassStatus1_25, Var_114, NeedQual_12, Methods_111, &PredProcIds0_112, STATE_VARIABLE_ModuleInfo_0_58, &STATE_VARIABLE_ModuleInfo_81_140, STATE_VARIABLE_Specs_0_60, STATE_VARIABLE_Specs_61);
        mercury__list__filter_map_3_p_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_4[2]), PredProcIds0_112, &PredProcIds1_113);
        mercury__list__sort_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), PredProcIds1_113, &ClassMethods_133);
      }
      Kinds_135 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
      {
        ClassDefn_136 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ClassDefn_136, 0) = ((MR_Box) (TypeClassStatus1_25));
        MR_hl_field(MR_mktag(0), ClassDefn_136, 1) = ((MR_Box) (Constraints_16));
        MR_hl_field(MR_mktag(0), ClassDefn_136, 2) = ((MR_Box) (HLDSFunDeps_27));
        MR_hl_field(MR_mktag(0), ClassDefn_136, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), ClassDefn_136, 4) = ((MR_Box) (ClassParamVars_15));
        MR_hl_field(MR_mktag(0), ClassDefn_136, 5) = ((MR_Box) (Kinds_135));
        MR_hl_field(MR_mktag(0), ClassDefn_136, 6) = ((MR_Box) (Interface_18));
        MR_hl_field(MR_mktag(0), ClassDefn_136, 7) = ((MR_Box) (ClassMethods_133));
        MR_hl_field(MR_mktag(0), ClassDefn_136, 8) = ((MR_Box) (VarSet_19));
        MR_hl_field(MR_mktag(0), ClassDefn_136, 9) = ((MR_Box) (Context_20));
      }
      mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ((MR_Box) (ClassId_24)), ((MR_Box) (ClassDefn_136)), Classes0_22, &Classes_137);
      hlds__hlds_module__module_info_set_class_table_3_p_0(Classes_137, STATE_VARIABLE_ModuleInfo_81_140, &STATE_VARIABLE_ModuleInfo_84_142);
      hlds__hlds_module__module_info_get_instance_table_2_p_0(STATE_VARIABLE_ModuleInfo_84_142, &Instances0_56);
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[2]), ((MR_Box) (ClassId_24)), ((MR_Box) ((MR_Unsigned) 0U)), Instances0_56, &Instances_57);
      hlds__hlds_module__module_info_set_instance_table_3_p_0(Instances_57, STATE_VARIABLE_ModuleInfo_84_142, STATE_VARIABLE_ModuleInfo_59);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_PredProcIds_56;
    MR_Word conv1_STATE_VARIABLE_ModuleInfo_58;
    MR_Word conv0_STATE_VARIABLE_Specs_60;

    hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_13_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_PredProcIds_56, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_ModuleInfo_58, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Specs_60);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_PredProcIds_56));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_58));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_60));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_class__is_class_method_mode_item_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_11_p_0(
  MR_Word ClassName_12,
  MR_Word ClassParamVars_13,
  MR_Word TypeClassStatus_14,
  MR_Word MaybeItemMercuryStatus_15,
  MR_Word NeedQual_16,
  MR_Word Methods_17,
  MR_Word * PredProcIds_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * STATE_VARIABLE_ModuleInfo_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  {
    MR_bool succeeded;
    MR_Word ModeMethods_21;
    MR_Word PredOrFuncMethods_22;
    MR_Word STATE_VARIABLE_PPIds_30_30;
    MR_Word STATE_VARIABLE_ModuleInfo_31_31;
    MR_Word STATE_VARIABLE_Specs_32_32;
    MR_Word Var_33;
    MR_Word STATE_VARIABLE_PPIds_34_34;
    MR_Word STATE_VARIABLE_ModuleInfo_35_35;
    MR_Word STATE_VARIABLE_Specs_36_36;
    MR_Box conv5_STATE_VARIABLE_PPIds_34_34;
    MR_Box conv4_STATE_VARIABLE_ModuleInfo_35_35;
    MR_Box conv3_STATE_VARIABLE_Specs_36_36;

    mercury__list__filter_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_4[0]), Methods_17, &ModeMethods_21, &PredOrFuncMethods_22);
    hlds__make_hlds__add_class__add_class_pred_or_func_methods_11_p_0(ClassName_12, ClassParamVars_13, MaybeItemMercuryStatus_15, TypeClassStatus_14, NeedQual_16, PredOrFuncMethods_22, &STATE_VARIABLE_PPIds_30_30, STATE_VARIABLE_ModuleInfo_0_25, &STATE_VARIABLE_ModuleInfo_31_31, STATE_VARIABLE_Specs_0_27, &STATE_VARIABLE_Specs_32_32);
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (hlds__make_hlds__add_class__module_add_class_interface_11_p_0_2));
      MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (ClassName_12));
      MR_hl_field(MR_mktag(0), Var_33, 4) = ((MR_Box) (ClassParamVars_13));
      MR_hl_field(MR_mktag(0), Var_33, 5) = ((MR_Box) ((MR_Integer) -1));
      MR_hl_field(MR_mktag(0), Var_33, 6) = ((MR_Box) (MaybeItemMercuryStatus_15));
      MR_hl_field(MR_mktag(0), Var_33, 7) = ((MR_Box) (TypeClassStatus_14));
      MR_hl_field(MR_mktag(0), Var_33, 8) = ((MR_Box) (NeedQual_16));
    }
    mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[7]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[5]), Var_33, ModeMethods_21, ((MR_Box) (STATE_VARIABLE_PPIds_30_30)), &conv5_STATE_VARIABLE_PPIds_34_34, ((MR_Box) (STATE_VARIABLE_ModuleInfo_31_31)), &conv4_STATE_VARIABLE_ModuleInfo_35_35, ((MR_Box) (STATE_VARIABLE_Specs_32_32)), &conv3_STATE_VARIABLE_Specs_36_36);
    STATE_VARIABLE_PPIds_34_34 = ((MR_Word) (conv5_STATE_VARIABLE_PPIds_34_34));
    STATE_VARIABLE_ModuleInfo_35_35 = ((MR_Word) (conv4_STATE_VARIABLE_ModuleInfo_35_35));
    STATE_VARIABLE_Specs_36_36 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_36_36));
    hlds__make_hlds__add_class__check_method_modes_7_p_0(Methods_17, STATE_VARIABLE_PPIds_34_34, PredProcIds_18, STATE_VARIABLE_ModuleInfo_35_35, STATE_VARIABLE_ModuleInfo_26, STATE_VARIABLE_Specs_36_36, STATE_VARIABLE_Specs_28);
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__check_method_modes_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_PredProcIds_0_2,
  MR_Word * STATE_VARIABLE_PredProcIds_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * STATE_VARIABLE_ModuleInfo_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_7 = STATE_VARIABLE_Specs_0_6;
      *STATE_VARIABLE_ModuleInfo_5 = STATE_VARIABLE_ModuleInfo_0_4;
      *STATE_VARIABLE_PredProcIds_3 = STATE_VARIABLE_PredProcIds_0_2;
    }
    else
    {
      MR_Word Method_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Methods_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Specs_70_70;
      MR_Word STATE_VARIABLE_PredProcIds_72_72;
      MR_Word STATE_VARIABLE_ModuleInfo_73_73;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_PredProcIds_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_6;

      if (((MR_tag((MR_Word) Method_17)) == (MR_Integer) 0))
      {
        MR_Word QualPredOrFuncName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method_17, (MR_Integer) 0))));
        MR_Word PorF_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Method_17, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_Word TypesAndModes_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method_17, (MR_Integer) 2))));
        MR_Word ModuleName_34;
        MR_String PredOrFuncName_35;
        MR_Integer PredArity_37;
        MR_Word PredTable_38;
        MR_Word PredIds_39;

        if (((MR_tag((MR_Word) QualPredOrFuncName_22)) == (MR_Integer) 1))
        {
          ModuleName_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), QualPredOrFuncName_22, (MR_Integer) 0))));
          PredOrFuncName_35 = ((MR_String) ((MR_hl_field(MR_mktag(1), QualPredOrFuncName_22, (MR_Integer) 1))));
        }
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_class.check_method_modes\'/7", (MR_String) "unqualified func");
            return;
          }
        }
        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), TypesAndModes_24, &PredArity_37);
        hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_4, &PredTable_38);
        hlds__pred_table__predicate_table_lookup_pf_m_n_a_7_p_0(PredTable_38, (MR_Integer) 0, PorF_23, ModuleName_34, PredOrFuncName_35, PredArity_37, &PredIds_39);
        if ((PredIds_39 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_class.check_method_modes\'/7", (MR_String) "number of preds != 1");
            return;
          }
        }
        else
        {
          MR_Word Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_39, (MR_Integer) 1))));
          MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_39, (MR_Integer) 0))));

          if ((Var_84 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word PredInfo0_41;

            hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_4, Var_85, &PredInfo0_41);
            switch (PorF_23) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word PredInfo_42;
                  MR_Word MaybeProc_43;

                  hlds__default_func_mode__maybe_add_default_func_mode_3_p_0(PredInfo0_41, &PredInfo_42, &MaybeProc_43);
                  if ((MaybeProc_43 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    STATE_VARIABLE_PredProcIds_72_72 = STATE_VARIABLE_PredProcIds_0_2;
                    STATE_VARIABLE_ModuleInfo_73_73 = STATE_VARIABLE_ModuleInfo_0_4;
                  }
                  else
                  {
                    MR_Integer ProcId_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeProc_43, (MR_Integer) 0))));
                    MR_Word NewPredProc_45;
                    MR_Word Var_71;

                    {
                      Var_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (Var_85));
                      MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (ProcId_44));
                    }
                    {
                      NewPredProc_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), NewPredProc_45, 0) = ((MR_Box) (Var_71));
                    }
                    {
                      STATE_VARIABLE_PredProcIds_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredProcIds_72_72, 0) = ((MR_Box) (NewPredProc_45));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_PredProcIds_72_72, 1) = ((MR_Box) (STATE_VARIABLE_PredProcIds_0_2));
                    }
                    hlds__hlds_module__module_info_set_pred_info_4_p_0(Var_85, PredInfo_42, STATE_VARIABLE_ModuleInfo_0_4, &STATE_VARIABLE_ModuleInfo_73_73);
                  }
                  STATE_VARIABLE_Specs_70_70 = STATE_VARIABLE_Specs_0_6;
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word Procs_46;

                  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_41, &Procs_46);
                  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_46);
                  if (succeeded)
                    hlds__make_hlds__add_class__pred_method_with_no_modes_error_3_p_0(PredInfo0_41, STATE_VARIABLE_Specs_0_6, &STATE_VARIABLE_Specs_70_70);
                  else
                    STATE_VARIABLE_Specs_70_70 = STATE_VARIABLE_Specs_0_6;
                  STATE_VARIABLE_PredProcIds_72_72 = STATE_VARIABLE_PredProcIds_0_2;
                  STATE_VARIABLE_ModuleInfo_73_73 = STATE_VARIABLE_ModuleInfo_0_4;
                }
                break;
            }
          }
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_class.check_method_modes\'/7", (MR_String) "number of preds != 1");
              return;
            }
          }
        }
      }
      else
      {
        STATE_VARIABLE_PredProcIds_72_72 = STATE_VARIABLE_PredProcIds_0_2;
        STATE_VARIABLE_ModuleInfo_73_73 = STATE_VARIABLE_ModuleInfo_0_4;
        STATE_VARIABLE_Specs_70_70 = STATE_VARIABLE_Specs_0_6;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Methods_18;
      next_value_of_STATE_VARIABLE_PredProcIds_0_2 = STATE_VARIABLE_PredProcIds_72_72;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_4 = STATE_VARIABLE_ModuleInfo_73_73;
      next_value_of_STATE_VARIABLE_Specs_0_6 = STATE_VARIABLE_Specs_70_70;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_PredProcIds_0_2 = next_value_of_STATE_VARIABLE_PredProcIds_0_2;
      STATE_VARIABLE_ModuleInfo_0_4 = next_value_of_STATE_VARIABLE_ModuleInfo_0_4;
      STATE_VARIABLE_Specs_0_6 = next_value_of_STATE_VARIABLE_Specs_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__pred_method_with_no_modes_error_3_p_0(
  MR_Word PredInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  {
    MR_Word Context_6;
    MR_Word ModuleName_7;
    MR_String PredName_8;
    MR_Integer Arity_9;
    MR_Word Pieces_10;
    MR_Word Msg_11;
    MR_Word Spec_12;
    MR_Word Var_17;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_35;

    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_4, &Context_6);
    ModuleName_7 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_4);
    PredName_8 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_4);
    Arity_9 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_4);
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (ModuleName_7));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (PredName_8));
    }
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (Arity_9));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[19])));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[33])));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
    }
    {
      Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[32])));
      MR_hl_field(MR_mktag(1), Pieces_10, 1) = ((MR_Box) (Var_17));
    }
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Pieces_10));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_11, 0) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Msg_11, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Msg_11));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) (Var_35));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_13));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__add_class_pred_or_func_methods_11_p_0(
  MR_Word ClassName_1,
  MR_Word ClassParamVars_2,
  MR_Word MaybeItemMercuryStatus_3,
  MR_Word TypeClassStatus_4,
  MR_Word NeedQual_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11)
{
  if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_11 = STATE_VARIABLE_Specs_0_10;
    *STATE_VARIABLE_ModuleInfo_9 = STATE_VARIABLE_ModuleInfo_0_8;
  }
  else
  {
    MR_Word Method_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
    MR_Word Methods_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
    MR_Word MaybePredProcId_30;
    MR_Word MaybePredProcIds_31;
    MR_Word STATE_VARIABLE_ModuleInfo_39_39;
    MR_Word STATE_VARIABLE_Specs_40_40;

    hlds__make_hlds__add_class__module_add_class_method_12_p_0(ClassName_1, ClassParamVars_2, (MR_Integer) -1, MaybeItemMercuryStatus_3, TypeClassStatus_4, NeedQual_5, Method_28, &MaybePredProcId_30, STATE_VARIABLE_ModuleInfo_0_8, &STATE_VARIABLE_ModuleInfo_39_39, STATE_VARIABLE_Specs_0_10, &STATE_VARIABLE_Specs_40_40);
    hlds__make_hlds__add_class__add_class_pred_or_func_methods_11_p_0(ClassName_1, ClassParamVars_2, MaybeItemMercuryStatus_3, TypeClassStatus_4, NeedQual_5, Methods_29, &MaybePredProcIds_31, STATE_VARIABLE_ModuleInfo_39_39, STATE_VARIABLE_ModuleInfo_9, STATE_VARIABLE_Specs_40_40, STATE_VARIABLE_Specs_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__7_7 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MaybePredProcId_30));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MaybePredProcIds_31));
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_class_method_12_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_method__377__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_class_method_12_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_method__376__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_method_12_p_0(
  MR_Word ClassName_13,
  MR_Word ClassParamVars_14,
  MR_Integer ItemNumber_15,
  MR_Word MaybeItemMercuryStatus_16,
  MR_Word TypeClassStatus_17,
  MR_Word NeedQual_18,
  MR_Word Method_19,
  MR_Word * MaybePredIdProcId_20,
  MR_Word STATE_VARIABLE_ModuleInfo_0_51,
  MR_Word * STATE_VARIABLE_ModuleInfo_52,
  MR_Word STATE_VARIABLE_Specs_0_53,
  MR_Word * STATE_VARIABLE_Specs_54)
{
  {
    MR_bool succeeded;
    MR_Word OldImportStatus_23 = (MR_Word) (TypeClassStatus_17);
    MR_Word PredStatus_24 = (MR_Word) (OldImportStatus_23);

    if (((MR_tag((MR_Word) Method_19)) == (MR_Integer) 0))
    {
      MR_Word PredName_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method_19, (MR_Integer) 0))));
      MR_Word PredOrFunc_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Method_19, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word TypesAndModes_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method_19, (MR_Integer) 2))));
      MR_Word WithType_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method_19, (MR_Integer) 3))));
      MR_Word WithInst_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method_19, (MR_Integer) 4))));
      MR_Word MaybeDetism_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method_19, (MR_Integer) 5))));
      MR_Word TypeVarSet_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method_19, (MR_Integer) 6))));
      MR_Word InstVarSet_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method_19, (MR_Integer) 7))));
      MR_Word ExistQVars_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method_19, (MR_Integer) 8))));
      MR_Word Purity_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Method_19, (MR_Integer) 9))) & (MR_Integer) 3);
      MR_Word Constraints0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method_19, (MR_Integer) 10))));
      MR_Word Context_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method_19, (MR_Integer) 11))));
      MR_Word Origin_37;
      MR_Word ClassParamTypes_38;
      MR_Word UnivConstraints0_39;
      MR_Word ExistConstraints_40;
      MR_Word UnivConstraints_41;
      MR_Word Constraints_42;
      MR_Word Markers0_43;
      MR_Word Markers_44;
      MR_Word Var_60;
      MR_Word Var_64;
      MR_Word Var_68;
      MR_Word Var_69;

      {
        Var_60 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_2[0]));
        MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (hlds__make_hlds__add_class__module_add_class_method_12_p_0_1));
        MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (WithType_28));
        MR_hl_field(MR_mktag(0), Var_60, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__require__expect_3_p_0(Var_60, (MR_String) "predicate \140hlds.make_hlds.add_class.module_add_class_method\'/12", (MR_String) "WithType != no");
      {
        Var_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_2[1]));
        MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (hlds__make_hlds__add_class__module_add_class_method_12_p_0_2));
        MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (WithInst_29));
        MR_hl_field(MR_mktag(0), Var_64, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__require__expect_3_p_0(Var_64, (MR_String) "predicate \140hlds.make_hlds.add_class.module_add_class_method\'/12", (MR_String) "WithInst != no");
      {
        Origin_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Origin_37, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(MR_mktag(3), Origin_37, 1) = ((MR_Box) (PredName_25));
      }
      Var_68 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
      parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_68, ClassParamVars_14, &ClassParamTypes_38);
      UnivConstraints0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints0_35, (MR_Integer) 0))));
      ExistConstraints_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints0_35, (MR_Integer) 1))));
      {
        Var_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (ClassName_13));
        MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (ClassParamTypes_38));
      }
      {
        UnivConstraints_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), UnivConstraints_41, 0) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(1), UnivConstraints_41, 1) = ((MR_Box) (UnivConstraints0_39));
      }
      {
        Constraints_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Constraints_42, 0) = ((MR_Box) (UnivConstraints_41));
        MR_hl_field(MR_mktag(0), Constraints_42, 1) = ((MR_Box) (ExistConstraints_40));
      }
      hlds__hlds_pred__init_markers_1_p_0(&Markers0_43);
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 11, Markers0_43, &Markers_44);
      hlds__add_pred__module_add_pred_or_func_21_p_0(Origin_37, Context_36, ItemNumber_15, MaybeItemMercuryStatus_16, PredStatus_24, NeedQual_18, PredOrFunc_26, PredName_25, TypeVarSet_31, InstVarSet_32, ExistQVars_33, TypesAndModes_27, Constraints_42, MaybeDetism_30, Purity_34, Markers_44, MaybePredIdProcId_20, STATE_VARIABLE_ModuleInfo_0_51, STATE_VARIABLE_ModuleInfo_52, STATE_VARIABLE_Specs_0_53, STATE_VARIABLE_Specs_54);
    }
    else
    {
      MR_Word MaybePredOrFunc_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Method_19, (MR_Integer) 1))));
      MR_Word Modes_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Method_19, (MR_Integer) 2))));
      MR_Word MaybeDet_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Method_19, (MR_Integer) 4))));
      MR_Word VarSet_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Method_19, (MR_Integer) 5))));
      MR_Word PredName_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Method_19, (MR_Integer) 0))));
      MR_Word Context_77 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Method_19, (MR_Integer) 6))));

      if ((MaybePredOrFunc_45 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_class.module_add_class_method\'/12", (MR_String) "no pred_or_func on mode declaration");
          return;
        }
      }
      else
      {
        MR_Word PredIdProcId_50;
        MR_Word PredOrFunc_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredOrFunc_45, (MR_Integer) 0))));

        hlds__add_pred__module_add_mode_15_p_0(Context_77, ItemNumber_15, MaybeItemMercuryStatus_16, PredStatus_24, PredOrFunc_73, PredName_75, VarSet_49, Modes_46, MaybeDet_48, (MR_Integer) 1, &PredIdProcId_50, STATE_VARIABLE_ModuleInfo_0_51, STATE_VARIABLE_ModuleInfo_52, STATE_VARIABLE_Specs_0_53, STATE_VARIABLE_Specs_54);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybePredIdProcId_20 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredIdProcId_50));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_class__class_fundeps_are_identical_2_p_0(
  MR_Word OldFunDeps0_3,
  MR_Word FunDeps0_4)
{
  {
    MR_bool succeeded;
    MR_Word OldFunDeps_5;
    MR_Word FunDeps_6;

    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0), OldFunDeps0_3, &OldFunDeps_5);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0), FunDeps0_4, &FunDeps_6);
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[17]), ((MR_Box) (OldFunDeps_5)), ((MR_Box) (FunDeps_6)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_class__constraints_are_identical_6_p_0(
  MR_Word OldVars0_7,
  MR_Word OldVarSet_8,
  MR_Word OldConstraints0_9,
  MR_Word Vars_10,
  MR_Word VarSet_11,
  MR_Word Constraints_12)
{
  {
    MR_bool succeeded;
    MR_Word Renaming_14;
    MR_Word OldConstraints1_15;
    MR_Word OldVars_16;
    MR_Word VarRenaming_17;
    MR_Word OldConstraints_18;
    MR_Word Var_13;

    parse_tree__prog_data__tvarset_merge_renaming_4_p_0(VarSet_11, OldVarSet_8, &Var_13, &Renaming_14);
    parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(Renaming_14, OldConstraints0_9, &OldConstraints1_15);
    parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_14, OldVars0_7, &OldVars_16);
    mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[0]), OldVars_16, Vars_10, &VarRenaming_17);
    parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(VarRenaming_17, OldConstraints1_15, &OldConstraints_18);
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[16]), ((MR_Box) (OldConstraints_18)), ((MR_Box) (Constraints_12)));
    return succeeded;
  }
}

void mercury__hlds__make_hlds__add_class__init(void)
{
}

void mercury__hlds__make_hlds__add_class__init_type_tables(void)
{
}

void mercury__hlds__make_hlds__add_class__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__add_class__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.add_class.
