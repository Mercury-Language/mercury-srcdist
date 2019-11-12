/*
** Automatically generated from `add_class.m'
** by the Mercury compiler,
** version rotd-2019-11-12
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
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_clause.mih"
#include "hlds.make_hlds.goal_expr_to_goal.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.make_hlds_warn.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "hlds.make_hlds.state_var.mih"




static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_hlds__status__type_ctor_info_item_mercury_status_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0;

static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__produce_instance_method_clause__721__1_2_p_0(
  MR_Word PredOrFunc_15,
  MR_Word ClausePredOrFunc_26);

static MR_Word MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__func__make_hlds_fundep_2__205__1_3_f_0(
  MR_Word TVars_4,
  MR_Word LambdaHeadVar__1_11,
  MR_Word LambdaHeadVar__2_12);

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
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
hlds__make_hlds__add_class__handle_no_mode_decl_7_p_0(
  MR_Word PredOrFuncInfo_8,
  MR_Word STATE_VARIABLE_PredProcIds_0_39,
  MR_Word * STATE_VARIABLE_PredProcIds_40,
  MR_Word STATE_VARIABLE_ModuleInfo_0_41,
  MR_Word * STATE_VARIABLE_ModuleInfo_42,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44);

static void MR_CALL 
hlds__make_hlds__add_class__pred_method_with_no_modes_error_3_p_0(
  MR_Word PredInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
hlds__make_hlds__add_class__add_class_mode_decl_10_p_0(
  MR_Integer ItemNumber_11,
  MR_Word MaybeItemMercuryStatus_12,
  MR_Word PredStatus_13,
  MR_Word ModeInfo_14,
  MR_Word STATE_VARIABLE_PredProcIds_0_37,
  MR_Word * STATE_VARIABLE_PredProcIds_38,
  MR_Word STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * STATE_VARIABLE_ModuleInfo_40,
  MR_Word STATE_VARIABLE_Specs_0_41,
  MR_Word * STATE_VARIABLE_Specs_42);

static void MR_CALL 
hlds__make_hlds__add_class__missing_pred_or_func_method_error_6_p_0(
  MR_Word MethodName_7,
  MR_Integer MethodArity_8,
  MR_Word PredOrFunc_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static void MR_CALL 
hlds__make_hlds__add_class__add_class_pred_or_func_decl_12_p_0(
  MR_Word ClassName_13,
  MR_Word ClassParamVars_14,
  MR_Integer ItemNumber_15,
  MR_Word PredStatus_16,
  MR_Word NeedQual_17,
  MR_Word PredOrFuncInfo_18,
  MR_Word STATE_VARIABLE_PredProcIds_0_45,
  MR_Word * STATE_VARIABLE_PredProcIds_46,
  MR_Word STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * STATE_VARIABLE_ModuleInfo_48,
  MR_Word STATE_VARIABLE_Specs_0_49,
  MR_Word * STATE_VARIABLE_Specs_50);

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

static MR_Box MR_CALL 
hlds__make_hlds__add_class__add_typeclass_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

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

static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_11_p_0(
  MR_Word ClassName_12,
  MR_Word ClassParamVars_13,
  MR_Word TypeClassStatus_14,
  MR_Word MaybeItemMercuryStatus_15,
  MR_Word NeedQual_16,
  MR_Word ClassDecls_17,
  MR_Word * STATE_VARIABLE_PredProcIds_26,
  MR_Word STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * STATE_VARIABLE_ModuleInfo_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
hlds__make_hlds__add_class__classify_class_decls_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3);

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


static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_1[48][2];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_2[1][15];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_3[1][13];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_4[1][10];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_5[1][3];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_6[1][6];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_7[3][1];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_8[2][5];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_9[1][8];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_10[1][17];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_11[1][7];




static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_1[48][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The superclass constraints do not match."))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The functional dependencies do not match."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[8])))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[8])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "are incompatible with ..."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[8])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the instance constraints here"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[20])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "... the instance constraints here."))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[8])))
  },
  /* row 26 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[8])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 18U)),
    ((MR_Box) ((MR_String) "typeclass"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "without corresponding"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[30])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "method declaration."))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[8])))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: multiply defined (or overlapping)"))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "instance declarations for class"))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Previous instance declaration was here."))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[37]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 39 */
  {
    ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_7[0])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 40 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: mode declaration for type class method"))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "without corresponding"))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: no mode declaration"))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for type class method predicate"))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In instance declaration for class"))
  },
  /* row 47 */
  {
    ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_7[2])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_2[1][15] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_pred_status_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_pred_or_func_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_3[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_pred_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_mode_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_4[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_pred_or_func_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_5[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_4[0])),
    ((MR_Box) (hlds__make_hlds__add_class__module_add_class_interface_11_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
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

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_7[3][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[38])))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 8U))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[25])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_8[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_9[1][8] = {
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

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_10[1][17] = {
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

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_11[1][7] = {
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



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



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

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_hlds__status__type_ctor_info_item_mercury_status_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)
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
hlds__make_hlds__add_class__IntroducedFrom__pred__produce_instance_method_clause__721__1_2_p_0(
  MR_Word PredOrFunc_15,
  MR_Word ClausePredOrFunc_26)
{
  {
    MR_bool succeeded = (PredOrFunc_15 == ClausePredOrFunc_26);

    return succeeded;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__func__make_hlds_fundep_2__205__1_3_f_0(
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
hlds__make_hlds__add_class__produce_instance_method_clause_14_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_class__IntroducedFrom__pred__produce_instance_method_clause__721__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
      MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_8[1]));
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
      PredArity_38 = mercury__list__length_1_f_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[7]), HeadTerms_37);
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
      TypeInfo_55_55 = (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[26]);
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
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  {
    MR_bool succeeded;
    MR_Word TVarsA_10;
    MR_Word TVarSetA_11;
    MR_Word ConstraintsA_12;
    MR_Word TVarsB_13;
    MR_Word TVarSetB_14;
    MR_Word ConstraintsB_15;
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefnA_6, (MR_Integer) 1))));
    MR_Word Var_32;

    parse_tree__prog_type__type_vars_list_2_p_0(Var_31, &TVarsA_10);
    ConstraintsA_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefnA_6, (MR_Integer) 5))));
    TVarSetA_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefnA_6, (MR_Integer) 8))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefnB_8, (MR_Integer) 1))));
    parse_tree__prog_type__type_vars_list_2_p_0(Var_32, &TVarsB_13);
    ConstraintsB_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefnB_8, (MR_Integer) 5))));
    TVarSetB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefnB_8, (MR_Integer) 8))));
    succeeded = hlds__make_hlds__add_class__constraints_are_identical_6_p_0(TVarsA_10, TVarSetA_11, ConstraintsA_12, TVarsB_13, TVarSetB_14, ConstraintsB_15);
    if (succeeded)
      *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
    else
    {
      MR_Word ClassName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_7, (MR_Integer) 0))));
      MR_Integer ClassArity_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassId_7, (MR_Integer) 1))));
      MR_Word ClassSNA_18;
      MR_Word ContextA_19;
      MR_Word ContextB_20;
      MR_Word CmpRes_21;
      MR_Word FirstContext_22;
      MR_Word SecondContext_23;
      MR_Word SecondDeclPieces_24;
      MR_Word SecondDeclMsg_25;
      MR_Word FirstDeclMsg_27;
      MR_Word Spec_28;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_64;
      MR_Word Var_65;

      {
        ClassSNA_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ClassSNA_18, 0) = ((MR_Box) (ClassName_16));
        MR_hl_field(MR_mktag(0), ClassSNA_18, 1) = ((MR_Box) (ClassArity_17));
      }
      ContextA_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefnA_6, (MR_Integer) 4))));
      ContextB_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefnB_8, (MR_Integer) 4))));
      mercury__term____Compare____context_0_0(&CmpRes_21, ContextA_19, ContextB_20);
      switch (CmpRes_21) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 0:
          {
            FirstContext_22 = ContextA_19;
            SecondContext_23 = ContextB_20;
          }
          break;
        case (MR_Integer) 2:
          {
            FirstContext_22 = ContextB_20;
            SecondContext_23 = ContextA_19;
          }
          break;
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (ClassSNA_18));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[23])));
      }
      {
        SecondDeclPieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SecondDeclPieces_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[46])));
        MR_hl_field(MR_mktag(1), SecondDeclPieces_24, 1) = ((MR_Box) (Var_35));
      }
      {
        Var_52 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (SecondDeclPieces_24));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        SecondDeclMsg_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SecondDeclMsg_25, 0) = ((MR_Box) (SecondContext_23));
        MR_hl_field(MR_mktag(1), SecondDeclMsg_25, 1) = ((MR_Box) (Var_51));
      }
      {
        FirstDeclMsg_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FirstDeclMsg_27, 0) = ((MR_Box) (FirstContext_22));
        MR_hl_field(MR_mktag(1), FirstDeclMsg_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[47])));
      }
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (FirstDeclMsg_27));
        MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (SecondDeclMsg_25));
        MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_65));
      }
      {
        Spec_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), Spec_28, 2) = ((MR_Box) (Var_64));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_30 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_28));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_29));
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__handle_no_mode_decl_7_p_0(
  MR_Word PredOrFuncInfo_8,
  MR_Word STATE_VARIABLE_PredProcIds_0_39,
  MR_Word * STATE_VARIABLE_PredProcIds_40,
  MR_Word STATE_VARIABLE_ModuleInfo_0_41,
  MR_Word * STATE_VARIABLE_ModuleInfo_42,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44)
{
  {
    MR_bool succeeded;
    MR_Word QualPredOrFuncName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_8, (MR_Integer) 0))));
    MR_Word PorF_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_8, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word TypesAndModes_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_8, (MR_Integer) 2))));
    MR_Word ModuleName_24;
    MR_String PredOrFuncName_25;
    MR_Integer PredArity_27;
    MR_Word PredTable_28;
    MR_Word PredIds_29;

    if (((MR_tag((MR_Word) QualPredOrFuncName_12)) == (MR_Integer) 1))
    {
      ModuleName_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), QualPredOrFuncName_12, (MR_Integer) 0))));
      PredOrFuncName_25 = ((MR_String) ((MR_hl_field(MR_mktag(1), QualPredOrFuncName_12, (MR_Integer) 1))));
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_class.handle_no_mode_decl\'/7", (MR_String) "unqualified");
        return;
      }
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), TypesAndModes_14, &PredArity_27);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_41, &PredTable_28);
    hlds__pred_table__predicate_table_lookup_pf_m_n_a_7_p_0(PredTable_28, (MR_Integer) 0, PorF_13, ModuleName_24, PredOrFuncName_25, PredArity_27, &PredIds_29);
    if ((PredIds_29 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_class.handle_no_mode_decl\'/7", (MR_String) "number of preds != 1");
        return;
      }
    else
    {
      MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_29, (MR_Integer) 1))));
      MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_29, (MR_Integer) 0))));

      if ((Var_63 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word PredInfo0_31;

        hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_41, Var_64, &PredInfo0_31);
        switch (PorF_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word PredInfo_32;
              MR_Word MaybeProcId_33;

              hlds__default_func_mode__maybe_add_default_func_mode_3_p_0(PredInfo0_31, &PredInfo_32, &MaybeProcId_33);
              if ((MaybeProcId_33 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                *STATE_VARIABLE_PredProcIds_40 = STATE_VARIABLE_PredProcIds_0_39;
                *STATE_VARIABLE_ModuleInfo_42 = STATE_VARIABLE_ModuleInfo_0_41;
              }
              else
              {
                MR_Integer ProcId_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeProcId_33, (MR_Integer) 0))));
                MR_Word Var_54;

                {
                  Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (Var_64));
                  MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (ProcId_34));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_PredProcIds_40 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_54));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_PredProcIds_0_39));
                }
                hlds__hlds_module__module_info_set_pred_info_4_p_0(Var_64, PredInfo_32, STATE_VARIABLE_ModuleInfo_0_41, STATE_VARIABLE_ModuleInfo_42);
              }
              *STATE_VARIABLE_Specs_44 = STATE_VARIABLE_Specs_0_43;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word Procs_35;

              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_31, &Procs_35);
              succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_35);
              if (succeeded)
                hlds__make_hlds__add_class__pred_method_with_no_modes_error_3_p_0(PredInfo0_31, STATE_VARIABLE_Specs_0_43, STATE_VARIABLE_Specs_44);
              else
                *STATE_VARIABLE_Specs_44 = STATE_VARIABLE_Specs_0_43;
              *STATE_VARIABLE_PredProcIds_40 = STATE_VARIABLE_PredProcIds_0_39;
              *STATE_VARIABLE_ModuleInfo_42 = STATE_VARIABLE_ModuleInfo_0_41;
            }
            break;
        }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_class.handle_no_mode_decl\'/7", (MR_String) "number of preds != 1");
          return;
        }
    }
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
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[16])));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[45])));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
    }
    {
      Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[44])));
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
      Msg_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Msg_11, 0) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(1), Msg_11, 1) = ((MR_Box) (Var_30));
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
hlds__make_hlds__add_class__add_class_mode_decl_10_p_0(
  MR_Integer ItemNumber_11,
  MR_Word MaybeItemMercuryStatus_12,
  MR_Word PredStatus_13,
  MR_Word ModeInfo_14,
  MR_Word STATE_VARIABLE_PredProcIds_0_37,
  MR_Word * STATE_VARIABLE_PredProcIds_38,
  MR_Word STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * STATE_VARIABLE_ModuleInfo_40,
  MR_Word STATE_VARIABLE_Specs_0_41,
  MR_Word * STATE_VARIABLE_Specs_42)
{
  {
    MR_bool succeeded;
    MR_Word PredName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_14, (MR_Integer) 0))));
    MR_Word MaybePredOrFunc_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_14, (MR_Integer) 1))));
    MR_Word Modes_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_14, (MR_Integer) 2))));
    MR_Word MaybeDetism_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_14, (MR_Integer) 4))));
    MR_Word VarSet_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_14, (MR_Integer) 5))));
    MR_Word Context_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_14, (MR_Integer) 6))));
    MR_Word PredTable_25;
    MR_Integer PredArity_26;
    MR_Word PredOrFunc_27;
    MR_Word PredIds_28;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_39, &PredTable_25);
    PredArity_26 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_20);
    if ((MaybePredOrFunc_19 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_class.add_class_mode_decl\'/10", (MR_String) "unexpanded \140with_inst\140 annotation");
        return;
      }
    else
      PredOrFunc_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredOrFunc_19, (MR_Integer) 0))));
    hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable_25, (MR_Integer) 0, PredOrFunc_27, PredName_18, PredArity_26, &PredIds_28);
    if ((PredIds_28 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Pieces_63;
      MR_Word Msg_64;
      MR_Word Spec_65;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_87;

      {
        Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (PredName_18));
        MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (PredArity_26));
      }
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(MR_mktag(3), Var_69, 1) = ((MR_Box) (Var_70));
      }
      {
        Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(3), Var_75, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_27));
      }
      {
        Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[34])));
      }
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[43])));
        MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_74));
      }
      {
        Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_71));
      }
      {
        Pieces_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[42])));
        MR_hl_field(MR_mktag(1), Pieces_63, 1) = ((MR_Box) (Var_68));
      }
      {
        Var_83 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (Pieces_63));
      }
      {
        Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
        MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Msg_64, 0) = ((MR_Box) (Context_24));
        MR_hl_field(MR_mktag(1), Msg_64, 1) = ((MR_Box) (Var_82));
      }
      {
        Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Msg_64));
        MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_65 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_65, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_65, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), Spec_65, 2) = ((MR_Box) (Var_87));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_42 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_65));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_41));
      }
      *STATE_VARIABLE_PredProcIds_38 = STATE_VARIABLE_PredProcIds_0_37;
      *STATE_VARIABLE_ModuleInfo_40 = STATE_VARIABLE_ModuleInfo_0_39;
    }
    else
    {
      MR_Word HeadPredId_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_28, (MR_Integer) 0))));
      MR_Word TailPredIds_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_28, (MR_Integer) 1))));

      if ((TailPredIds_30 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word PredInfo_32;
        MR_Word PredMarkers_33;

        hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_39, HeadPredId_29, &PredInfo_32);
        hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_32, &PredMarkers_33);
        succeeded = hlds__hlds_pred__check_marker_2_p_0(PredMarkers_33, (MR_Integer) 10);
        if (succeeded)
        {
          MR_Word PredProcId_34;

          hlds__add_pred__module_add_mode_15_p_0(Context_24, ItemNumber_11, MaybeItemMercuryStatus_12, PredStatus_13, PredOrFunc_27, PredName_18, VarSet_23, Modes_20, MaybeDetism_22, (MR_Integer) 1, &PredProcId_34, STATE_VARIABLE_ModuleInfo_0_39, STATE_VARIABLE_ModuleInfo_40, STATE_VARIABLE_Specs_0_41, STATE_VARIABLE_Specs_42);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_PredProcIds_38 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredProcId_34));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_PredProcIds_0_37));
          }
        }
        else
        {
          hlds__make_hlds__add_class__missing_pred_or_func_method_error_6_p_0(PredName_18, PredArity_26, PredOrFunc_27, Context_24, STATE_VARIABLE_Specs_0_41, STATE_VARIABLE_Specs_42);
          *STATE_VARIABLE_ModuleInfo_40 = STATE_VARIABLE_ModuleInfo_0_39;
          *STATE_VARIABLE_PredProcIds_38 = STATE_VARIABLE_PredProcIds_0_37;
        }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_class.add_class_mode_decl\'/10", (MR_String) "multiple preds matching method mode");
          return;
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
      MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(3), Var_26, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_9));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[34])));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[43])));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_22));
    }
    {
      Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[42])));
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
      Msg_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Msg_13, 0) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(1), Msg_13, 1) = ((MR_Box) (Var_33));
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

static void MR_CALL 
hlds__make_hlds__add_class__add_class_pred_or_func_decl_12_p_0(
  MR_Word ClassName_13,
  MR_Word ClassParamVars_14,
  MR_Integer ItemNumber_15,
  MR_Word PredStatus_16,
  MR_Word NeedQual_17,
  MR_Word PredOrFuncInfo_18,
  MR_Word STATE_VARIABLE_PredProcIds_0_45,
  MR_Word * STATE_VARIABLE_PredProcIds_46,
  MR_Word STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * STATE_VARIABLE_ModuleInfo_48,
  MR_Word STATE_VARIABLE_Specs_0_49,
  MR_Word * STATE_VARIABLE_Specs_50)
{
  {
    MR_Word PredName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_18, (MR_Integer) 0))));
    MR_Word PredOrFunc_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_18, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgTypesAndModes_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_18, (MR_Integer) 2))));
    MR_Word WithType_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_18, (MR_Integer) 3))));
    MR_Word WithInst_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_18, (MR_Integer) 4))));
    MR_Word MaybeDetism_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_18, (MR_Integer) 5))));
    MR_Word TypeVarSet_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_18, (MR_Integer) 6))));
    MR_Word InstVarSet_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_18, (MR_Integer) 7))));
    MR_Word ExistQVars_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_18, (MR_Integer) 8))));
    MR_Word Purity_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_18, (MR_Integer) 9))) & (MR_Integer) 3);
    MR_Word Constraints0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_18, (MR_Integer) 10))));
    MR_Word Context_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_18, (MR_Integer) 11))));
    MR_Word ClassParamTypes_34;
    MR_Word ImplicitConstraint_35;
    MR_Word UnivConstraints0_36;
    MR_Word ExistConstraints_37;
    MR_Word UnivConstraints_38;
    MR_Word Constraints_39;
    MR_Word PredDecl_42;
    MR_Word MaybePredProcId_43;
    MR_Word Var_51;

    Var_51 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
    parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_51, ClassParamVars_14, &ClassParamTypes_34);
    {
      ImplicitConstraint_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ImplicitConstraint_35, 0) = ((MR_Box) (ClassName_13));
      MR_hl_field(MR_mktag(0), ImplicitConstraint_35, 1) = ((MR_Box) (ClassParamTypes_34));
    }
    UnivConstraints0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints0_32, (MR_Integer) 0))));
    ExistConstraints_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints0_32, (MR_Integer) 1))));
    {
      UnivConstraints_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), UnivConstraints_38, 0) = ((MR_Box) (ImplicitConstraint_35));
      MR_hl_field(MR_mktag(1), UnivConstraints_38, 1) = ((MR_Box) (UnivConstraints0_36));
    }
    {
      Constraints_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Constraints_39, 0) = ((MR_Box) (UnivConstraints_38));
      MR_hl_field(MR_mktag(0), Constraints_39, 1) = ((MR_Box) (ExistConstraints_37));
    }
    {
      PredDecl_42 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredDecl_42, 0) = ((MR_Box) (PredName_22));
      MR_hl_field(MR_mktag(0), PredDecl_42, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_23));
      MR_hl_field(MR_mktag(0), PredDecl_42, 2) = ((MR_Box) (ArgTypesAndModes_24));
      MR_hl_field(MR_mktag(0), PredDecl_42, 3) = ((MR_Box) (WithType_25));
      MR_hl_field(MR_mktag(0), PredDecl_42, 4) = ((MR_Box) (WithInst_26));
      MR_hl_field(MR_mktag(0), PredDecl_42, 5) = ((MR_Box) (MaybeDetism_27));
      MR_hl_field(MR_mktag(0), PredDecl_42, 6) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_7[1])));
      MR_hl_field(MR_mktag(0), PredDecl_42, 7) = ((MR_Box) (TypeVarSet_28));
      MR_hl_field(MR_mktag(0), PredDecl_42, 8) = ((MR_Box) (InstVarSet_29));
      MR_hl_field(MR_mktag(0), PredDecl_42, 9) = ((MR_Box) (ExistQVars_30));
      MR_hl_field(MR_mktag(0), PredDecl_42, 10) = (MR_Box) ((MR_Unsigned) (Purity_31));
      MR_hl_field(MR_mktag(0), PredDecl_42, 11) = ((MR_Box) (Constraints_39));
      MR_hl_field(MR_mktag(0), PredDecl_42, 12) = ((MR_Box) (Context_33));
      MR_hl_field(MR_mktag(0), PredDecl_42, 13) = ((MR_Box) (ItemNumber_15));
    }
    hlds__add_pred__module_add_pred_decl_8_p_0(PredStatus_16, NeedQual_17, PredDecl_42, &MaybePredProcId_43, STATE_VARIABLE_ModuleInfo_0_47, STATE_VARIABLE_ModuleInfo_48, STATE_VARIABLE_Specs_0_49, STATE_VARIABLE_Specs_50);
    if ((MaybePredProcId_43 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_PredProcIds_46 = STATE_VARIABLE_PredProcIds_0_45;
    else
    {
      MR_Word PredProcId_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredProcId_43, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_PredProcIds_46 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredProcId_44));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_PredProcIds_0_45));
      }
    }
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
      mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.make_hlds.add_class.get_list_index\'/3", (MR_String) "element not found");
    else
    {
      MR_Box E_10 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Word Es_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_16, X_3, E_10);
      if (succeeded)
        HeadVar__4_4 = N_2;
      else
      {
        MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) N_2 + (MR_Unsigned) 1);
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

    conv0_LambdaHeadVar__3_13 = hlds__make_hlds__add_class__IntroducedFrom__func__make_hlds_fundep_2__205__1_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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
      MR_hl_field(MR_mktag(0), Func_29, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), Func_29, 1) = ((MR_Box) (hlds__make_hlds__add_class__make_hlds_fundep_2_f_0_1));
      MR_hl_field(MR_mktag(0), Func_29, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Func_29, 3) = ((MR_Box) (TVars_4));
    }
    conv1_Domain_7 = mercury__list__foldl_3_f_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[5]), Func_29, Domain0_5, ((MR_Box) (Var_15)));
    Domain_7 = ((MR_Word) (conv1_Domain_7));
    Var_33 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
    conv2_Range_8 = mercury__list__foldl_3_f_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[5]), Func_29, Range0_6, ((MR_Box) (Var_33)));
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
        MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_10[0]));
        MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_p_0_1));
        MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (PredOrFunc_18));
        MR_hl_field(MR_mktag(0), Var_56, 4) = ((MR_Box) (Context_22));
        MR_hl_field(MR_mktag(0), Var_56, 5) = ((MR_Box) (InstanceStatus_23));
      }
      mercury__list__foldl5_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[3]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_info_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[4]), Var_56, InstanceClauses_45, ((MR_Box) (STATE_VARIABLE_TVarSet_0_47)), &conv9_STATE_VARIABLE_TVarSet_48, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_49)), &conv8_STATE_VARIABLE_ModuleInfo_50, ((MR_Box) (STATE_VARIABLE_QualInfo_0_51)), &conv7_STATE_VARIABLE_QualInfo_52, ((MR_Box) (ClausesInfo0_46)), &conv6_ClausesInfo_24, ((MR_Box) (STATE_VARIABLE_Specs_0_53)), &conv5_STATE_VARIABLE_Specs_54);
      *STATE_VARIABLE_TVarSet_48 = ((MR_Word) (conv9_STATE_VARIABLE_TVarSet_48));
      *STATE_VARIABLE_ModuleInfo_50 = ((MR_Word) (conv8_STATE_VARIABLE_ModuleInfo_50));
      *STATE_VARIABLE_QualInfo_52 = ((MR_Word) (conv7_STATE_VARIABLE_QualInfo_52));
      *ClausesInfo_24 = ((MR_Word) (conv6_ClausesInfo_24));
      *STATE_VARIABLE_Specs_54 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_54));
    }
    else
    {
      MR_Word InstancePredName_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceProcDefn_17, (MR_Integer) 0))));
      MR_Word HeadVars_30;
      MR_Word NonLocals_31;
      MR_Word Purity_32;
      MR_Word DummyInstMapDelta_33;
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
      MR_Word Var_64;
      MR_Word Var_69;
      MR_Word Var_72;

      succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_21, (MR_Integer) 13);
      if (succeeded)
        Purity_32 = (MR_Integer) 2;
      else
      {
        succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_21, (MR_Integer) 14);
        if (succeeded)
          Purity_32 = (MR_Integer) 1;
        else
          Purity_32 = (MR_Integer) 0;
      }
      hlds__instmap__instmap_delta_init_unreachable_1_p_0(&DummyInstMapDelta_33);
      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet0_36);
      parse_tree__prog_util__make_n_fresh_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "HeadVar__", PredArity_19, &HeadVars_30, VarSet0_36, &VarSet_37);
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_30, &NonLocals_31);
      hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_31, DummyInstMapDelta_33, (MR_Integer) 6, Purity_32, Context_22, &GoalInfo_35);
      Var_64 = hlds__hlds_pred__invalid_pred_id_0_f_0();
      hlds__make_hlds__qual_info__construct_pred_or_func_call_8_p_0(Var_64, PredOrFunc_18, InstancePredName_29, HeadVars_30, GoalInfo_35, &IntroducedGoal_38, STATE_VARIABLE_QualInfo_0_51, STATE_VARIABLE_QualInfo_52);
      {
        IntroducedClause_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), IntroducedClause_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), IntroducedClause_39, 1) = ((MR_Box) (IntroducedGoal_38));
        MR_hl_field(MR_mktag(0), IntroducedClause_39, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), IntroducedClause_39, 3) = ((MR_Box) (Context_22));
        MR_hl_field(MR_mktag(0), IntroducedClause_39, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[0]), &TVarNameMap_40);
      hlds__vartypes__vartypes_from_corresponding_lists_3_p_0(HeadVars_30, ArgTypes_20, &VarTypes_41);
      HeadVarVec_42 = hlds__hlds_args__proc_arg_vector_init_2_f_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[2]), PredOrFunc_18, HeadVars_30);
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (IntroducedClause_39));
        MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      hlds__hlds_clauses__set_clause_list_2_p_0(Var_69, &ClausesRep_43);
      hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&RttiVarMaps_44);
      Var_72 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
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
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_72));
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
    MR_Word conv2_STATE_VARIABLE_Specs_30;

    hlds__make_hlds__add_class__check_instance_constraints_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Specs_30);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_30));
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
      mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), InstanceTable0_24, ((MR_Box) (ClassId_26)), &conv1_OldInstanceDefns_32);
      OldInstanceDefns_32 = ((MR_Word) (conv1_OldInstanceDefns_32));
      NewTypes_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewInstanceDefn_31, (MR_Integer) 1))));
      NewContext_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewInstanceDefn_31, (MR_Integer) 4))));
      NewInstanceBody_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewInstanceDefn_31, (MR_Integer) 6))));
      NewTVarSet_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewInstanceDefn_31, (MR_Integer) 8))));
      succeeded = (NewInstanceBody_63 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        hlds__make_hlds__add_class__report_any_overlapping_instance_declarations_7_p_0(ClassId_26, NewTypes_58, NewTVarSet_65, NewContext_61, OldInstanceDefns_32, STATE_VARIABLE_Specs_0_36, &STATE_VARIABLE_Specs_38_38);
      else
        STATE_VARIABLE_Specs_38_38 = STATE_VARIABLE_Specs_0_36;
      {
        Var_76 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_8[0]));
        MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (hlds__make_hlds__add_class__add_instance_defn_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_76, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_76, 3) = ((MR_Box) (NewInstanceDefn_31));
      }
      mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), Var_76, OldInstanceDefns_32, &EquivInstanceDefns_75);
      {
        Var_77 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_9[0]));
        MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (hlds__make_hlds__add_class__add_instance_defn_5_p_0_2));
        MR_hl_field(MR_mktag(0), Var_77, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_77, 3) = ((MR_Box) (NewInstanceDefn_31));
        MR_hl_field(MR_mktag(0), Var_77, 4) = ((MR_Box) (ClassId_26));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[4]), Var_77, EquivInstanceDefns_75, ((MR_Box) (STATE_VARIABLE_Specs_38_38)), &conv3_STATE_VARIABLE_Specs_37);
      *STATE_VARIABLE_Specs_37 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_37));
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (NewInstanceDefn_31));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (OldInstanceDefns_32));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), ((MR_Box) (ClassId_26)), ((MR_Box) (Var_40)), InstanceTable0_24, &InstanceTable_33);
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
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[32])));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[41])));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_21));
    }
    {
      Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[40])));
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
      Msg_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Msg_13, 0) = ((MR_Box) (Context_9));
      MR_hl_field(MR_mktag(1), Msg_13, 1) = ((MR_Box) (Var_39));
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
          MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[16])));
        }
        {
          Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[36])));
          MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_51));
        }
        {
          NewPieces_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), NewPieces_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[35])));
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
          NewMsg_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), NewMsg_40, 0) = ((MR_Box) (NewContext_4));
          MR_hl_field(MR_mktag(1), NewMsg_40, 1) = ((MR_Box) (Var_60));
        }
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (OtherContext_26));
        }
        {
          OtherMsg_42 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), OtherMsg_42, 0) = ((MR_Box) (Var_66));
          MR_hl_field(MR_mktag(2), OtherMsg_42, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(2), OtherMsg_42, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(2), OtherMsg_42, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[39])));
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
  MR_Word STATE_VARIABLE_ModuleInfo_0_59,
  MR_Word * STATE_VARIABLE_ModuleInfo_60,
  MR_Word STATE_VARIABLE_Specs_0_61,
  MR_Word * STATE_VARIABLE_Specs_62)
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
    MR_Word ClassTable0_22;
    MR_Integer ClassArity_23;
    MR_Word ClassId_24;
    MR_Word TypeClassStatus1_25;
    MR_Word HLDSFunDeps_27;
    MR_Word TypeClassStatus_40;
    MR_Word OldClassMethodPredProcIds_42;
    MR_Word ClassInterface_43;
    MR_Word HasIncompatibility_45;
    MR_Word Var_63;
    MR_Word STATE_VARIABLE_Specs_70_70;
    MR_Word STATE_VARIABLE_ModuleInfo_82_82;
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
    hlds__hlds_module__module_info_get_class_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_59, &ClassTable0_22);
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
      Var_63 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (hlds__make_hlds__add_class__add_typeclass_defn_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (ClassParamVars_15));
    }
    HLDSFunDeps_27 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0), Var_63, FunDeps_17);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable0_22, ((MR_Box) (ClassId_24)), &conv1_OldDefn_28);
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
      MR_Word OldClassMethodPredProcIds0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldDefn_28, (MR_Integer) 7))));
      MR_Word OldVarSet_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldDefn_28, (MR_Integer) 8))));
      MR_Word OldContext_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldDefn_28, (MR_Integer) 9))));

      hlds__status__typeclass_combine_status_3_p_0(TypeClassStatus1_25, OldTypeClassStatus_29, &TypeClassStatus_40);
      if ((OldInterface_35 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        OldClassMethodPredProcIds_42 = (MR_Word) ((MR_Unsigned) 0U);
        ClassInterface_43 = Interface_18;
      }
      else
      {
        OldClassMethodPredProcIds_42 = OldClassMethodPredProcIds0_36;
        ClassInterface_43 = OldInterface_35;
      }
      succeeded = hlds__make_hlds__add_class__constraints_are_identical_6_p_0(OldClassParamVars_33, OldVarSet_37, OldConstraints_30, ClassParamVars_15, VarSet_19, Constraints_16);
      succeeded = !(succeeded);
      if (succeeded)
      {
        hlds__make_hlds_error__report_multiple_def_error_8_p_0(ClassName_14, ClassArity_23, (MR_String) "typeclass", Context_20, OldContext_38, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[10])), STATE_VARIABLE_Specs_0_61, &STATE_VARIABLE_Specs_70_70);
        {
          HasIncompatibility_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HasIncompatibility_45, 0) = ((MR_Box) (OldDefn_28));
        }
      }
      else
      {
        succeeded = hlds__make_hlds__add_class__class_fundeps_are_identical_2_p_0(OldFunDeps_31, HLDSFunDeps_27);
        succeeded = !(succeeded);
        if (succeeded)
        {
          hlds__make_hlds_error__report_multiple_def_error_8_p_0(ClassName_14, ClassArity_23, (MR_String) "typeclass", Context_20, OldContext_38, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[12])), STATE_VARIABLE_Specs_0_61, &STATE_VARIABLE_Specs_70_70);
          {
            HasIncompatibility_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HasIncompatibility_45, 0) = ((MR_Box) (OldDefn_28));
          }
        }
        else
        {
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
            MR_Word Var_78 = (MR_Word) (TypeClassStatus_40);

            succeeded = (Var_78 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              STATE_VARIABLE_Specs_70_70 = STATE_VARIABLE_Specs_0_61;
            else
              hlds__make_hlds_error__report_multiple_def_error_8_p_0(ClassName_14, ClassArity_23, (MR_String) "typeclass", Context_20, OldContext_38, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Specs_0_61, &STATE_VARIABLE_Specs_70_70);
            {
              HasIncompatibility_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), HasIncompatibility_45, 0) = ((MR_Box) (OldDefn_28));
            }
          }
          else
          {
            HasIncompatibility_45 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_Specs_70_70 = STATE_VARIABLE_Specs_0_61;
          }
        }
      }
      STATE_VARIABLE_ModuleInfo_82_82 = STATE_VARIABLE_ModuleInfo_0_59;
    }
    else
    {
      MR_Word Instances0_48;
      MR_Word Instances_49;

      HasIncompatibility_45 = (MR_Word) ((MR_Unsigned) 0U);
      OldClassMethodPredProcIds_42 = (MR_Word) ((MR_Unsigned) 0U);
      ClassInterface_43 = Interface_18;
      TypeClassStatus_40 = TypeClassStatus1_25;
      hlds__hlds_module__module_info_get_instance_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_59, &Instances0_48);
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), ((MR_Box) (ClassId_24)), ((MR_Box) ((MR_Unsigned) 0U)), Instances0_48, &Instances_49);
      hlds__hlds_module__module_info_set_instance_table_3_p_0(Instances_49, STATE_VARIABLE_ModuleInfo_0_59, &STATE_VARIABLE_ModuleInfo_82_82);
      STATE_VARIABLE_Specs_70_70 = STATE_VARIABLE_Specs_0_61;
    }
    if ((Interface_18 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HasIncompatibility_45 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Kinds_57;
        MR_Word ClassDefn_58;
        MR_Word ClassTable_96;

        *STATE_VARIABLE_Specs_62 = STATE_VARIABLE_Specs_70_70;
        Kinds_57 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
        {
          ClassDefn_58 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ClassDefn_58, 0) = ((MR_Box) (TypeClassStatus_40));
          MR_hl_field(MR_mktag(0), ClassDefn_58, 1) = ((MR_Box) (Constraints_16));
          MR_hl_field(MR_mktag(0), ClassDefn_58, 2) = ((MR_Box) (HLDSFunDeps_27));
          MR_hl_field(MR_mktag(0), ClassDefn_58, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), ClassDefn_58, 4) = ((MR_Box) (ClassParamVars_15));
          MR_hl_field(MR_mktag(0), ClassDefn_58, 5) = ((MR_Box) (Kinds_57));
          MR_hl_field(MR_mktag(0), ClassDefn_58, 6) = ((MR_Box) (ClassInterface_43));
          MR_hl_field(MR_mktag(0), ClassDefn_58, 7) = ((MR_Box) (OldClassMethodPredProcIds_42));
          MR_hl_field(MR_mktag(0), ClassDefn_58, 8) = ((MR_Box) (VarSet_19));
          MR_hl_field(MR_mktag(0), ClassDefn_58, 9) = ((MR_Box) (Context_20));
          MR_hl_field(MR_mktag(0), ClassDefn_58, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ((MR_Box) (ClassId_24)), ((MR_Box) (ClassDefn_58)), ClassTable0_22, &ClassTable_96);
        hlds__hlds_module__module_info_set_class_table_3_p_0(ClassTable_96, STATE_VARIABLE_ModuleInfo_82_82, STATE_VARIABLE_ModuleInfo_60);
      }
      else
      {
        *STATE_VARIABLE_ModuleInfo_60 = STATE_VARIABLE_ModuleInfo_82_82;
        *STATE_VARIABLE_Specs_62 = STATE_VARIABLE_Specs_70_70;
      }
    else
    {
      MR_Word Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Interface_18, (MR_Integer) 0))));

      if ((HasIncompatibility_45 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_83;
        MR_Word ClassMethodPredProcIds_122;
        MR_Word Kinds_124;
        MR_Word ClassDefn_125;
        MR_Word STATE_VARIABLE_ModuleInfo_84_126;
        MR_Word ClassTable_128;

        {
          Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (ItemMercuryStatus_11));
        }
        hlds__make_hlds__add_class__module_add_class_interface_11_p_0(ClassName_14, ClassParamVars_15, TypeClassStatus_40, Var_83, NeedQual_12, Var_144, &ClassMethodPredProcIds_122, STATE_VARIABLE_ModuleInfo_82_82, &STATE_VARIABLE_ModuleInfo_84_126, STATE_VARIABLE_Specs_70_70, STATE_VARIABLE_Specs_62);
        Kinds_124 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
        {
          ClassDefn_125 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ClassDefn_125, 0) = ((MR_Box) (TypeClassStatus_40));
          MR_hl_field(MR_mktag(0), ClassDefn_125, 1) = ((MR_Box) (Constraints_16));
          MR_hl_field(MR_mktag(0), ClassDefn_125, 2) = ((MR_Box) (HLDSFunDeps_27));
          MR_hl_field(MR_mktag(0), ClassDefn_125, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), ClassDefn_125, 4) = ((MR_Box) (ClassParamVars_15));
          MR_hl_field(MR_mktag(0), ClassDefn_125, 5) = ((MR_Box) (Kinds_124));
          MR_hl_field(MR_mktag(0), ClassDefn_125, 6) = ((MR_Box) (ClassInterface_43));
          MR_hl_field(MR_mktag(0), ClassDefn_125, 7) = ((MR_Box) (ClassMethodPredProcIds_122));
          MR_hl_field(MR_mktag(0), ClassDefn_125, 8) = ((MR_Box) (VarSet_19));
          MR_hl_field(MR_mktag(0), ClassDefn_125, 9) = ((MR_Box) (Context_20));
          MR_hl_field(MR_mktag(0), ClassDefn_125, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ((MR_Box) (ClassId_24)), ((MR_Box) (ClassDefn_125)), ClassTable0_22, &ClassTable_128);
        hlds__hlds_module__module_info_set_class_table_3_p_0(ClassTable_128, STATE_VARIABLE_ModuleInfo_84_126, STATE_VARIABLE_ModuleInfo_60);
      }
      else
      {
        MR_Word BadDefn_52;
        MR_Word ClassTable_53;
        MR_Word BaseDefn_132 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HasIncompatibility_45, (MR_Integer) 0))));
        MR_Word Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BaseDefn_132, (MR_Integer) 0))));
        MR_Word Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BaseDefn_132, (MR_Integer) 1))));
        MR_Word Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BaseDefn_132, (MR_Integer) 2))));
        MR_Word Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BaseDefn_132, (MR_Integer) 3))));
        MR_Word Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BaseDefn_132, (MR_Integer) 4))));
        MR_Word Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BaseDefn_132, (MR_Integer) 5))));
        MR_Word Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BaseDefn_132, (MR_Integer) 6))));
        MR_Word Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BaseDefn_132, (MR_Integer) 7))));
        MR_Word Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BaseDefn_132, (MR_Integer) 8))));
        MR_Word Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BaseDefn_132, (MR_Integer) 9))));

        {
          BadDefn_52 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), BadDefn_52, 0) = ((MR_Box) (Var_97));
          MR_hl_field(MR_mktag(0), BadDefn_52, 1) = ((MR_Box) (Var_98));
          MR_hl_field(MR_mktag(0), BadDefn_52, 2) = ((MR_Box) (Var_99));
          MR_hl_field(MR_mktag(0), BadDefn_52, 3) = ((MR_Box) (Var_100));
          MR_hl_field(MR_mktag(0), BadDefn_52, 4) = ((MR_Box) (Var_101));
          MR_hl_field(MR_mktag(0), BadDefn_52, 5) = ((MR_Box) (Var_102));
          MR_hl_field(MR_mktag(0), BadDefn_52, 6) = ((MR_Box) (Var_103));
          MR_hl_field(MR_mktag(0), BadDefn_52, 7) = ((MR_Box) (Var_104));
          MR_hl_field(MR_mktag(0), BadDefn_52, 8) = ((MR_Box) (Var_105));
          MR_hl_field(MR_mktag(0), BadDefn_52, 9) = ((MR_Box) (Var_106));
          MR_hl_field(MR_mktag(0), BadDefn_52, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ((MR_Box) (ClassId_24)), ((MR_Box) (BadDefn_52)), ClassTable0_22, &ClassTable_53);
        hlds__hlds_module__module_info_set_class_table_3_p_0(ClassTable_53, STATE_VARIABLE_ModuleInfo_82_82, STATE_VARIABLE_ModuleInfo_60);
        *STATE_VARIABLE_Specs_62 = STATE_VARIABLE_Specs_70_70;
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_11_p_0_3(
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
    MR_Word conv14_STATE_VARIABLE_PredProcIds_40;
    MR_Word conv13_STATE_VARIABLE_ModuleInfo_42;
    MR_Word conv12_STATE_VARIABLE_Specs_44;

    hlds__make_hlds__add_class__handle_no_mode_decl_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_STATE_VARIABLE_PredProcIds_40, ((MR_Word) (wrapper_arg_4)), &conv13_STATE_VARIABLE_ModuleInfo_42, ((MR_Word) (wrapper_arg_6)), &conv12_STATE_VARIABLE_Specs_44);
    *wrapper_arg_3 = ((MR_Box) (conv14_STATE_VARIABLE_PredProcIds_40));
    *wrapper_arg_5 = ((MR_Box) (conv13_STATE_VARIABLE_ModuleInfo_42));
    *wrapper_arg_7 = ((MR_Box) (conv12_STATE_VARIABLE_Specs_44));
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
    MR_Word conv8_STATE_VARIABLE_PredProcIds_38;
    MR_Word conv7_STATE_VARIABLE_ModuleInfo_40;
    MR_Word conv6_STATE_VARIABLE_Specs_42;

    hlds__make_hlds__add_class__add_class_mode_decl_10_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_PredProcIds_38, ((MR_Word) (wrapper_arg_4)), &conv7_STATE_VARIABLE_ModuleInfo_40, ((MR_Word) (wrapper_arg_6)), &conv6_STATE_VARIABLE_Specs_42);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_PredProcIds_38));
    *wrapper_arg_5 = ((MR_Box) (conv7_STATE_VARIABLE_ModuleInfo_40));
    *wrapper_arg_7 = ((MR_Box) (conv6_STATE_VARIABLE_Specs_42));
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_11_p_0_1(
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
    MR_Word conv2_STATE_VARIABLE_PredProcIds_46;
    MR_Word conv1_STATE_VARIABLE_ModuleInfo_48;
    MR_Word conv0_STATE_VARIABLE_Specs_50;

    hlds__make_hlds__add_class__add_class_pred_or_func_decl_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_PredProcIds_46, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_ModuleInfo_48, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Specs_50);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_PredProcIds_46));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_48));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_50));
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_11_p_0(
  MR_Word ClassName_12,
  MR_Word ClassParamVars_13,
  MR_Word TypeClassStatus_14,
  MR_Word MaybeItemMercuryStatus_15,
  MR_Word NeedQual_16,
  MR_Word ClassDecls_17,
  MR_Word * STATE_VARIABLE_PredProcIds_26,
  MR_Word STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * STATE_VARIABLE_ModuleInfo_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  {
    MR_Word ClassPredOrFuncInfos_21;
    MR_Word ClassModeInfos_22;
    MR_Word OldImportStatus_23;
    MR_Word PredStatus_24;
    MR_Word Var_32;
    MR_Word STATE_VARIABLE_PredProcIds_33_33;
    MR_Word STATE_VARIABLE_ModuleInfo_34_34;
    MR_Word STATE_VARIABLE_Specs_35_35;
    MR_Word Var_36;
    MR_Word STATE_VARIABLE_PredProcIds_37_37;
    MR_Word STATE_VARIABLE_ModuleInfo_38_38;
    MR_Word STATE_VARIABLE_Specs_39_39;
    MR_Word STATE_VARIABLE_PredProcIds_41_41;
    MR_Box conv5_STATE_VARIABLE_PredProcIds_33_33;
    MR_Box conv4_STATE_VARIABLE_ModuleInfo_34_34;
    MR_Box conv3_STATE_VARIABLE_Specs_35_35;
    MR_Box conv11_STATE_VARIABLE_PredProcIds_37_37;
    MR_Box conv10_STATE_VARIABLE_ModuleInfo_38_38;
    MR_Box conv9_STATE_VARIABLE_Specs_39_39;
    MR_Box conv17_STATE_VARIABLE_PredProcIds_41_41;
    MR_Box conv16_STATE_VARIABLE_ModuleInfo_28;
    MR_Box conv15_STATE_VARIABLE_Specs_30;

    hlds__make_hlds__add_class__classify_class_decls_3_p_0(ClassDecls_17, &ClassPredOrFuncInfos_21, &ClassModeInfos_22);
    OldImportStatus_23 = (MR_Word) (TypeClassStatus_14);
    PredStatus_24 = (MR_Word) (OldImportStatus_23);
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (hlds__make_hlds__add_class__module_add_class_interface_11_p_0_1));
      MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (ClassName_12));
      MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) (ClassParamVars_13));
      MR_hl_field(MR_mktag(0), Var_32, 5) = ((MR_Box) ((MR_Integer) -1));
      MR_hl_field(MR_mktag(0), Var_32, 6) = ((MR_Box) (PredStatus_24));
      MR_hl_field(MR_mktag(0), Var_32, 7) = ((MR_Box) (NeedQual_16));
    }
    mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_pred_or_func_info_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[6]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[4]), Var_32, ClassPredOrFuncInfos_21, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_STATE_VARIABLE_PredProcIds_33_33, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_27)), &conv4_STATE_VARIABLE_ModuleInfo_34_34, ((MR_Box) (STATE_VARIABLE_Specs_0_29)), &conv3_STATE_VARIABLE_Specs_35_35);
    STATE_VARIABLE_PredProcIds_33_33 = ((MR_Word) (conv5_STATE_VARIABLE_PredProcIds_33_33));
    STATE_VARIABLE_ModuleInfo_34_34 = ((MR_Word) (conv4_STATE_VARIABLE_ModuleInfo_34_34));
    STATE_VARIABLE_Specs_35_35 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_35_35));
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (hlds__make_hlds__add_class__module_add_class_interface_11_p_0_2));
      MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) ((MR_Integer) -1));
      MR_hl_field(MR_mktag(0), Var_36, 4) = ((MR_Box) (MaybeItemMercuryStatus_15));
      MR_hl_field(MR_mktag(0), Var_36, 5) = ((MR_Box) (PredStatus_24));
    }
    mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_mode_info_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[6]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[4]), Var_36, ClassModeInfos_22, ((MR_Box) (STATE_VARIABLE_PredProcIds_33_33)), &conv11_STATE_VARIABLE_PredProcIds_37_37, ((MR_Box) (STATE_VARIABLE_ModuleInfo_34_34)), &conv10_STATE_VARIABLE_ModuleInfo_38_38, ((MR_Box) (STATE_VARIABLE_Specs_35_35)), &conv9_STATE_VARIABLE_Specs_39_39);
    STATE_VARIABLE_PredProcIds_37_37 = ((MR_Word) (conv11_STATE_VARIABLE_PredProcIds_37_37));
    STATE_VARIABLE_ModuleInfo_38_38 = ((MR_Word) (conv10_STATE_VARIABLE_ModuleInfo_38_38));
    STATE_VARIABLE_Specs_39_39 = ((MR_Word) (conv9_STATE_VARIABLE_Specs_39_39));
    mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_pred_or_func_info_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[6]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_5[0]), ClassPredOrFuncInfos_21, ((MR_Box) (STATE_VARIABLE_PredProcIds_37_37)), &conv17_STATE_VARIABLE_PredProcIds_41_41, ((MR_Box) (STATE_VARIABLE_ModuleInfo_38_38)), &conv16_STATE_VARIABLE_ModuleInfo_28, ((MR_Box) (STATE_VARIABLE_Specs_39_39)), &conv15_STATE_VARIABLE_Specs_30);
    STATE_VARIABLE_PredProcIds_41_41 = ((MR_Word) (conv17_STATE_VARIABLE_PredProcIds_41_41));
    *STATE_VARIABLE_ModuleInfo_28 = ((MR_Word) (conv16_STATE_VARIABLE_ModuleInfo_28));
    *STATE_VARIABLE_Specs_30 = ((MR_Word) (conv15_STATE_VARIABLE_Specs_30));
    mercury__list__sort_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), STATE_VARIABLE_PredProcIds_41_41, STATE_VARIABLE_PredProcIds_26);
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__classify_class_decls_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Decl_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Decls_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_PredOrFuncInfos_12_12;
    MR_Word STATE_VARIABLE_ModeInfos_13_13;

    hlds__make_hlds__add_class__classify_class_decls_3_p_0(Decls_5, &STATE_VARIABLE_PredOrFuncInfos_12_12, &STATE_VARIABLE_ModeInfos_13_13);
    if (((MR_tag((MR_Word) Decl_4)) == (MR_Integer) 1))
    {
      MR_Word ModeInfo_9 = (MR_Word) (MR_body((MR_Word) (Decl_4), (MR_Integer) 1));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModeInfo_9));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ModeInfos_13_13));
      }
      *HeadVar__2_2 = STATE_VARIABLE_PredOrFuncInfos_12_12;
    }
    else
    {
      MR_Word PredOrFuncInfo_8 = (MR_Word) ((MR_Word) (Decl_4));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredOrFuncInfo_8));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_PredOrFuncInfos_12_12));
      }
      *HeadVar__3_3 = STATE_VARIABLE_ModeInfos_13_13;
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
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[14]), ((MR_Box) (OldFunDeps_5)), ((MR_Box) (FunDeps_6)));
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
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[13]), ((MR_Box) (OldConstraints_18)), ((MR_Box) (Constraints_12)));
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
