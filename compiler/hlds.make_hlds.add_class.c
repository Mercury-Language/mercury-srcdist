/*
** Automatically generated from `add_class.m'
** by the Mercury compiler,
** version 22.01
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
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__produce_instance_method_clause__759__1_2_p_0(
  MR_Word PredOrFunc_15,
  MR_Word ClausePredOrFunc_25);

static MR_Integer MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__func__convert_vars_to_arg_posns__232__1_2_f_0(
  MR_Word TVars_4,
  MR_Word LambdaHeadVar__1_10);

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
  MR_Word STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * STATE_VARIABLE_ModuleInfo_48,
  MR_Word STATE_VARIABLE_QualInfo_0_49,
  MR_Word * STATE_VARIABLE_QualInfo_50,
  MR_Word STATE_VARIABLE_ClausesInfo_0_51,
  MR_Word * STATE_VARIABLE_ClausesInfo_52,
  MR_Word STATE_VARIABLE_Specs_0_53,
  MR_Word * STATE_VARIABLE_Specs_54);

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
hlds__make_hlds__add_class__add_instance_defn_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_class__add_instance_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_class__add_instance_defn_6_p_0(
  MR_Word InstanceStatus0_7,
  MR_Word ItemInstanceInfo_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_33,
  MR_Word * STATE_VARIABLE_ModuleInfo_34,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36);

static void MR_CALL 
hlds__make_hlds__add_class__undefined_type_class_error_6_p_0(
  MR_Word ClassName_7,
  MR_Integer ClassArity_8,
  MR_Word Context_9,
  MR_String Description_10,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15);

static void MR_CALL 
hlds__make_hlds__add_class__report_any_overlapping_instance_declarations_7_p_0(
  MR_Word ClassId_1,
  MR_Word NewTypes_2,
  MR_Word NewTVarSet_3,
  MR_Word NewContext_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7);

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
hlds__make_hlds__add_class__add_class_mode_decl_9_p_0(
  MR_Word ItemMercuryStatus_10,
  MR_Word PredStatus_11,
  MR_Word ModeInfo_12,
  MR_Word STATE_VARIABLE_PredProcIds_0_38,
  MR_Word * STATE_VARIABLE_PredProcIds_39,
  MR_Word STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * STATE_VARIABLE_ModuleInfo_41,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43);

static void MR_CALL 
hlds__make_hlds__add_class__missing_pred_or_func_method_error_6_p_0(
  MR_Word MethodName_7,
  MR_Integer MethodArity_8,
  MR_Word PredOrFunc_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15);

static void MR_CALL 
hlds__make_hlds__add_class__add_class_pred_or_func_decl_12_p_0(
  MR_Word ClassName_13,
  MR_Word ClassParamVars_14,
  MR_Word ItemMercuryStatus_15,
  MR_Word PredStatus_16,
  MR_Word NeedQual_17,
  MR_Word PredOrFuncInfo_18,
  MR_Word STATE_VARIABLE_PredProcIds_0_49,
  MR_Word * STATE_VARIABLE_PredProcIds_50,
  MR_Word STATE_VARIABLE_ModuleInfo_0_51,
  MR_Word * STATE_VARIABLE_ModuleInfo_52,
  MR_Word STATE_VARIABLE_Specs_0_53,
  MR_Word * STATE_VARIABLE_Specs_54);

static MR_Integer MR_CALL 
hlds__make_hlds__add_class__get_list_index_3_f_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word HeadVar__1_1,
  MR_Integer CurPos_2,
  MR_Box X_3);

static MR_Box MR_CALL 
hlds__make_hlds__add_class__make_hlds_fundep_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
hlds__make_hlds__add_class__make_hlds_fundep_2_f_0(
  MR_Word TVars_4,
  MR_Word ProgFunDeps_5);

static MR_Box MR_CALL 
hlds__make_hlds__add_class__add_typeclass_defn_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_class__add_typeclass_defn_8_p_0(
  MR_Word ItemMercuryStatus_9,
  MR_Word TypeClassStatus0_10,
  MR_Word NeedQual_11,
  MR_Word ItemTypeClassInfo_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_60,
  MR_Word * STATE_VARIABLE_ModuleInfo_61,
  MR_Word STATE_VARIABLE_Specs_0_62,
  MR_Word * STATE_VARIABLE_Specs_63);

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
  MR_Word ItemMercuryStatus_15,
  MR_Word NeedQual_16,
  MR_Word ClassDecls_17,
  MR_Word * STATE_VARIABLE_PredProcIds_25,
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29);

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
hlds__make_hlds__add_class__add_instance_defns_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__add_class__add_typeclass_defns_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);


static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_1[45][2];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_2[1][1];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_3[1][11];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_4[1][9];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_5[1][17];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_6[1][15];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_7[1][12];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_8[1][10];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_9[1][3];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_10[2][6];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_11[2][5];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_12[1][8];




static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_1[45][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
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
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The superclass constraints do not match."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The functional dependencies do not match."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[7])))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: multiply defined (or overlapping)"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "instance declarations for class"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[7])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Previous instance declaration was here."))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 20 */
  {
    ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_2[0])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In instance declaration for class"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "are incompatible with ..."))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[7])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the instance constraints here"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[25])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "... the instance constraints here."))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[7])))
  },
  /* row 31 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: no mode declaration"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for type class method predicate"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[7])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "typeclass"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[37])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "without corresponding"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[39])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: mode declaration for type class method"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "method declaration."))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[7])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[19])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_3[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_typeclass_status_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_4[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_instance_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_5[1][17] = {
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

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_6[1][15] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
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

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_7[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
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

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_8[1][10] = {
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

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_9[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_8[0])),
    ((MR_Box) (hlds__make_hlds__add_class__module_add_class_interface_11_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_10[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_11[2][5] = {
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

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_12[1][8] = {
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



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
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

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__produce_instance_method_clause__759__1_2_p_0(
  MR_Word PredOrFunc_15,
  MR_Word ClausePredOrFunc_25)
{
  {
    MR_bool succeeded = (PredOrFunc_15 == ClausePredOrFunc_25);

    return succeeded;
  }
}

static MR_Integer MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__func__convert_vars_to_arg_posns__232__1_2_f_0(
  MR_Word TVars_4,
  MR_Word LambdaHeadVar__1_10)
{
  {
    MR_Integer LambdaHeadVar__2_11;

    LambdaHeadVar__2_11 = hlds__make_hlds__add_class__get_list_index_3_f_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), TVars_4, (MR_Integer) 1, ((MR_Box) (LambdaHeadVar__1_10)));
    return LambdaHeadVar__2_11;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_class__produce_instance_method_clause_14_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_class__IntroducedFrom__pred__produce_instance_method_clause__759__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
  MR_Word STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * STATE_VARIABLE_ModuleInfo_48,
  MR_Word STATE_VARIABLE_QualInfo_0_49,
  MR_Word * STATE_VARIABLE_QualInfo_50,
  MR_Word STATE_VARIABLE_ClausesInfo_0_51,
  MR_Word * STATE_VARIABLE_ClausesInfo_52,
  MR_Word STATE_VARIABLE_Specs_0_53,
  MR_Word * STATE_VARIABLE_Specs_54)
{
  {
    MR_bool succeeded;
    MR_Word ClausePredOrFunc_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), InstanceClause_18, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word PredName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceClause_18, (MR_Integer) 1))));
    MR_Word HeadTerms0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceClause_18, (MR_Integer) 2))));
    MR_Word ClauseVarSet_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceClause_18, (MR_Integer) 3))));
    MR_Word MaybeBodyGoal_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceClause_18, (MR_Integer) 4))));
    MR_Word Var_55;
    MR_Word StateVar_32;
    MR_Word StateVarContext_33;

    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_11[1]));
      MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (hlds__make_hlds__add_class__produce_instance_method_clause_14_p_0_1));
      MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (PredOrFunc_15));
      MR_hl_field(MR_mktag(0), Var_55, 4) = ((MR_Box) (ClausePredOrFunc_25));
    }
    mercury__require__expect_3_p_0(Var_55, (MR_String) "predicate \140hlds.make_hlds.add_class.produce_instance_method_clause\'/14", (MR_String) "PredOrFunc mismatch");
    succeeded = hlds__make_hlds__state_var__illegal_state_var_func_result_4_p_0(PredOrFunc_15, HeadTerms0_27, &StateVar_32, &StateVarContext_33);
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Specs_58_58;
      MR_Word Var_60;

      *TVarSet_20 = TVarSet0_19;
      hlds__make_hlds__state_var__report_illegal_func_svar_result_5_p_0(StateVarContext_33, ClauseVarSet_28, StateVar_32, STATE_VARIABLE_Specs_0_53, &STATE_VARIABLE_Specs_58_58);
      Var_60 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeBodyGoal_29);
      *STATE_VARIABLE_Specs_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_60, STATE_VARIABLE_Specs_58_58);
      *STATE_VARIABLE_ClausesInfo_52 = STATE_VARIABLE_ClausesInfo_0_51;
      *STATE_VARIABLE_QualInfo_50 = STATE_VARIABLE_QualInfo_0_49;
      *STATE_VARIABLE_ModuleInfo_48 = STATE_VARIABLE_ModuleInfo_0_47;
    }
    else
    if (((MR_tag((MR_Word) MaybeBodyGoal_29)) == (MR_Integer) 0))
    {
      MR_Word BodyGoalSpecs_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeBodyGoal_29, (MR_Integer) 0))));

      *TVarSet_20 = TVarSet0_19;
      *STATE_VARIABLE_Specs_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), BodyGoalSpecs_34, STATE_VARIABLE_Specs_0_53);
      *STATE_VARIABLE_ModuleInfo_48 = STATE_VARIABLE_ModuleInfo_0_47;
      *STATE_VARIABLE_QualInfo_50 = STATE_VARIABLE_QualInfo_0_49;
      *STATE_VARIABLE_ClausesInfo_52 = STATE_VARIABLE_ClausesInfo_0_51;
    }
    else
    {
      MR_Word BodyGoal_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBodyGoal_29, (MR_Integer) 0))));
      MR_Word BodyGoalWarningSpecs_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBodyGoal_29, (MR_Integer) 1))));
      MR_Word HeadTerms_37;
      MR_Integer PredArity_38;
      MR_Integer Arity_39;
      MR_Word OldImportStatus_41;
      MR_Word PredStatus_42;
      MR_Word Warnings_43;
      MR_Word Goal_44;
      MR_Word VarSet_45;
      MR_Word PFSymNameArity_46;
      MR_Word STATE_VARIABLE_Specs_61_61;
      MR_Word STATE_VARIABLE_Specs_68_68;
      MR_Word STATE_VARIABLE_Specs_69_69;

      STATE_VARIABLE_Specs_61_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), BodyGoalWarningSpecs_36, STATE_VARIABLE_Specs_0_53);
      hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(HeadTerms0_27, &HeadTerms_37);
      PredArity_38 = mercury__list__length_1_f_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[6]), HeadTerms_37);
      parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_15, &Arity_39, PredArity_38);
      OldImportStatus_41 = (MR_Word) (InstanceStatus_17);
      PredStatus_42 = (MR_Word) (OldImportStatus_41);
      hlds__make_hlds__add_clause__clauses_info_add_clause_24_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), PredStatus_42, (MR_Word) ((MR_Unsigned) 0U), PredOrFunc_15, Arity_39, HeadTerms_37, Context_16, (MR_Word) ((MR_Unsigned) 0U), &Warnings_43, BodyGoal_35, &Goal_44, ClauseVarSet_28, &VarSet_45, TVarSet0_19, TVarSet_20, STATE_VARIABLE_ClausesInfo_0_51, STATE_VARIABLE_ClausesInfo_52, STATE_VARIABLE_ModuleInfo_0_47, STATE_VARIABLE_ModuleInfo_48, STATE_VARIABLE_QualInfo_0_49, STATE_VARIABLE_QualInfo_50, STATE_VARIABLE_Specs_61_61, &STATE_VARIABLE_Specs_68_68);
      {
        PFSymNameArity_46 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PFSymNameArity_46, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_15));
        MR_hl_field(MR_mktag(0), PFSymNameArity_46, 1) = ((MR_Box) (PredName_26));
        MR_hl_field(MR_mktag(0), PFSymNameArity_46, 2) = ((MR_Box) (Arity_39));
      }
      hlds__make_hlds__make_hlds_warn__warn_singletons_6_p_0(*STATE_VARIABLE_ModuleInfo_48, PFSymNameArity_46, VarSet_45, Goal_44, STATE_VARIABLE_Specs_68_68, &STATE_VARIABLE_Specs_69_69);
      hlds__make_hlds__make_hlds_warn__add_quant_warnings_5_p_0(PFSymNameArity_46, VarSet_45, Warnings_43, STATE_VARIABLE_Specs_69_69, STATE_VARIABLE_Specs_54);
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
    mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), TVarsA_12, &NumTVars_14);
    mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), TVarsB_13, &Var_54);
    succeeded = (NumTVars_14 == Var_54);
    if (succeeded)
    {
      mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), TVarsB_13, TVarsA_12, &Renaming_15);
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(Renaming_15, TypesB1_11, &TypesB_16);
      TypeInfo_55_55 = (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[31]);
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
      MR_Word Var_59;
      MR_Word Var_60;

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
        MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 10U));
        MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (ClassSNA_18));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[28])));
      }
      {
        SecondDeclPieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SecondDeclPieces_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[21])));
        MR_hl_field(MR_mktag(1), SecondDeclPieces_24, 1) = ((MR_Box) (Var_35));
      }
      {
        SecondDeclMsg_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SecondDeclMsg_25, 0) = ((MR_Box) (SecondContext_23));
        MR_hl_field(MR_mktag(0), SecondDeclMsg_25, 1) = ((MR_Box) (SecondDeclPieces_24));
      }
      {
        FirstDeclMsg_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FirstDeclMsg_27, 0) = ((MR_Box) (FirstContext_22));
        MR_hl_field(MR_mktag(0), FirstDeclMsg_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[30])));
      }
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (FirstDeclMsg_27));
        MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (SecondDeclMsg_25));
        MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_60));
      }
      {
        Spec_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_28, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_class.check_instance_constraints\'/5"));
        MR_hl_field(MR_mktag(0), Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_28, 2) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(0), Spec_28, 3) = ((MR_Box) (Var_59));
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
hlds__make_hlds__add_class__add_instance_defn_6_p_0_2(
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
hlds__make_hlds__add_class__add_instance_defn_6_p_0_1(
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

static void MR_CALL 
hlds__make_hlds__add_class__add_instance_defn_6_p_0(
  MR_Word InstanceStatus0_7,
  MR_Word ItemInstanceInfo_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_33,
  MR_Word * STATE_VARIABLE_ModuleInfo_34,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36)
{
  {
    MR_bool succeeded;
    MR_Word ClassName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_8, (MR_Integer) 0))));
    MR_Word Types_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_8, (MR_Integer) 1))));
    MR_Word OriginalTypes_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_8, (MR_Integer) 2))));
    MR_Word Constraints_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_8, (MR_Integer) 3))));
    MR_Word InstanceBody0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_8, (MR_Integer) 4))));
    MR_Word VarSet_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_8, (MR_Integer) 5))));
    MR_Word InstanceModuleName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_8, (MR_Integer) 6))));
    MR_Word Context_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_8, (MR_Integer) 7))));
    MR_Word InstanceStatus_20;
    MR_Word Classes_22;
    MR_Word InstanceTable0_23;
    MR_Integer ClassArity_24;
    MR_Word ClassId_25;
    MR_Word InstanceBody_26;
    MR_Box conv0_Var_27;

    if ((InstanceBody0_15 == (MR_Word) ((MR_Unsigned) 0U)))
      hlds__status__instance_make_status_abstract_2_p_0(InstanceStatus0_7, &InstanceStatus_20);
    else
      InstanceStatus_20 = InstanceStatus0_7;
    hlds__hlds_module__module_info_get_class_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_33, &Classes_22);
    hlds__hlds_module__module_info_get_instance_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_33, &InstanceTable0_23);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types_12, &ClassArity_24);
    {
      ClassId_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ClassId_25, 0) = ((MR_Box) (ClassName_11));
      MR_hl_field(MR_mktag(0), ClassId_25, 1) = ((MR_Box) (ClassArity_24));
    }
    hlds__make_hlds__state_var__expand_bang_state_pairs_in_instance_body_2_p_0(InstanceBody0_15, &InstanceBody_26);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), Classes_22, ((MR_Box) (ClassId_25)), &conv0_Var_27);
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
    {
      MR_Word ProofMap_29;
      MR_Word NewInstanceDefn_30;
      MR_Word OldInstanceDefns_31;
      MR_Word InstanceTable_32;
      MR_Word STATE_VARIABLE_Specs_37_37;
      MR_Word Var_39;
      MR_Word NewTypes_57;
      MR_Word NewContext_60;
      MR_Word NewInstanceBody_62;
      MR_Word NewTVarSet_64;
      MR_Word EquivInstanceDefns_74;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Box conv1_OldInstanceDefns_31;
      MR_Box conv3_STATE_VARIABLE_Specs_36;

      mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), &ProofMap_29);
      {
        NewInstanceDefn_30 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), NewInstanceDefn_30, 0) = ((MR_Box) (InstanceModuleName_17));
        MR_hl_field(MR_mktag(0), NewInstanceDefn_30, 1) = ((MR_Box) (Types_12));
        MR_hl_field(MR_mktag(0), NewInstanceDefn_30, 2) = ((MR_Box) (OriginalTypes_13));
        MR_hl_field(MR_mktag(0), NewInstanceDefn_30, 3) = ((MR_Box) (InstanceStatus_20));
        MR_hl_field(MR_mktag(0), NewInstanceDefn_30, 4) = ((MR_Box) (Context_18));
        MR_hl_field(MR_mktag(0), NewInstanceDefn_30, 5) = ((MR_Box) (Constraints_14));
        MR_hl_field(MR_mktag(0), NewInstanceDefn_30, 6) = ((MR_Box) (InstanceBody_26));
        MR_hl_field(MR_mktag(0), NewInstanceDefn_30, 7) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), NewInstanceDefn_30, 8) = ((MR_Box) (VarSet_16));
        MR_hl_field(MR_mktag(0), NewInstanceDefn_30, 9) = ((MR_Box) (ProofMap_29));
      }
      mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[4]), InstanceTable0_23, ((MR_Box) (ClassId_25)), &conv1_OldInstanceDefns_31);
      OldInstanceDefns_31 = ((MR_Word) (conv1_OldInstanceDefns_31));
      NewTypes_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewInstanceDefn_30, (MR_Integer) 1))));
      NewContext_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewInstanceDefn_30, (MR_Integer) 4))));
      NewInstanceBody_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewInstanceDefn_30, (MR_Integer) 6))));
      NewTVarSet_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewInstanceDefn_30, (MR_Integer) 8))));
      succeeded = (NewInstanceBody_62 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        hlds__make_hlds__add_class__report_any_overlapping_instance_declarations_7_p_0(ClassId_25, NewTypes_57, NewTVarSet_64, NewContext_60, OldInstanceDefns_31, STATE_VARIABLE_Specs_0_35, &STATE_VARIABLE_Specs_37_37);
      else
        STATE_VARIABLE_Specs_37_37 = STATE_VARIABLE_Specs_0_35;
      {
        Var_75 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_11[0]));
        MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (hlds__make_hlds__add_class__add_instance_defn_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_75, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_75, 3) = ((MR_Box) (NewInstanceDefn_30));
      }
      mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), Var_75, OldInstanceDefns_31, &EquivInstanceDefns_74);
      {
        Var_76 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_12[0]));
        MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (hlds__make_hlds__add_class__add_instance_defn_6_p_0_2));
        MR_hl_field(MR_mktag(0), Var_76, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_76, 3) = ((MR_Box) (NewInstanceDefn_30));
        MR_hl_field(MR_mktag(0), Var_76, 4) = ((MR_Box) (ClassId_25));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[0]), Var_76, EquivInstanceDefns_74, ((MR_Box) (STATE_VARIABLE_Specs_37_37)), &conv3_STATE_VARIABLE_Specs_36);
      *STATE_VARIABLE_Specs_36 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_36));
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (NewInstanceDefn_30));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (OldInstanceDefns_31));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[4]), ((MR_Box) (ClassId_25)), ((MR_Box) (Var_39)), InstanceTable0_23, &InstanceTable_32);
      hlds__hlds_module__module_info_set_instance_table_3_p_0(InstanceTable_32, STATE_VARIABLE_ModuleInfo_0_33, STATE_VARIABLE_ModuleInfo_34);
    }
    else
    {
      hlds__make_hlds__add_class__undefined_type_class_error_6_p_0(ClassName_11, ClassArity_24, Context_18, (MR_String) "instance declaration", STATE_VARIABLE_Specs_0_35, STATE_VARIABLE_Specs_36);
      *STATE_VARIABLE_ModuleInfo_34 = STATE_VARIABLE_ModuleInfo_0_33;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__undefined_type_class_error_6_p_0(
  MR_Word ClassName_7,
  MR_Integer ClassArity_8,
  MR_Word Context_9,
  MR_String Description_10,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  {
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
      MR_hl_field(MR_mktag(3), Var_19, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_19, 1) = ((MR_Box) (Description_10));
    }
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (ClassName_7));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (ClassArity_8));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 10U));
      MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[41])));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[35])));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_20));
    }
    {
      Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[34])));
      MR_hl_field(MR_mktag(1), Pieces_12, 1) = ((MR_Box) (Var_18));
    }
    {
      Spec_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_class.undefined_type_class_error\'/6"));
      MR_hl_field(MR_mktag(1), Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(MR_mktag(1), Spec_13, 3) = ((MR_Box) (Context_9));
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
      MR_Word STATE_VARIABLE_Specs_75_75;
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
        MR_Word Var_63;
        MR_Word Var_72;
        MR_Word Var_73;

        {
          Var_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (ClassName_37));
          MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (ClassArity_38));
        }
        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (Var_53));
        }
        {
          Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
          MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[17])));
        }
        {
          Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[15])));
          MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_51));
        }
        {
          NewPieces_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), NewPieces_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[14])));
          MR_hl_field(MR_mktag(1), NewPieces_39, 1) = ((MR_Box) (Var_48));
        }
        {
          NewMsg_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), NewMsg_40, 0) = ((MR_Box) (NewContext_4));
          MR_hl_field(MR_mktag(0), NewMsg_40, 1) = ((MR_Box) (NewPieces_39));
        }
        {
          Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (OtherContext_26));
        }
        {
          OtherMsg_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), OtherMsg_42, 0) = ((MR_Box) (Var_63));
          MR_hl_field(MR_mktag(3), OtherMsg_42, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), OtherMsg_42, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), OtherMsg_42, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[20])));
        }
        {
          Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (OtherMsg_42));
          MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (NewMsg_40));
          MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_73));
        }
        {
          Spec_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_43, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_class.report_any_overlapping_instance_declarations\'/7"));
          MR_hl_field(MR_mktag(0), Spec_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_43, 2) = ((MR_Box) ((MR_Unsigned) 40U));
          MR_hl_field(MR_mktag(0), Spec_43, 3) = ((MR_Box) (Var_72));
        }
        {
          STATE_VARIABLE_Specs_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_75_75, 0) = ((MR_Box) (Spec_43));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_75_75, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_6));
        }
      }
      else
        STATE_VARIABLE_Specs_75_75 = STATE_VARIABLE_Specs_0_6;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = OtherInstanceDefns_20;
      next_value_of_STATE_VARIABLE_Specs_0_6 = STATE_VARIABLE_Specs_75_75;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_Specs_0_6 = next_value_of_STATE_VARIABLE_Specs_0_6;
      continue;
    }
    break;
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
              {
                MR_Word Context_69;
                MR_Word ModuleName_70;
                MR_String PredName_71;
                MR_Integer Arity_72;
                MR_Word Pieces_73;
                MR_Word Spec_74;
                MR_Word Var_77;
                MR_Word Var_80;
                MR_Word Var_81;
                MR_Word Var_82;
                MR_Word Var_83;

                hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo0_31, &Context_69);
                ModuleName_70 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo0_31);
                PredName_71 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo0_31);
                Arity_72 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo0_31);
                {
                  Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (ModuleName_70));
                  MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (PredName_71));
                }
                {
                  Var_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (Var_83));
                  MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (Arity_72));
                }
                {
                  Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                  MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (Var_82));
                }
                {
                  Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
                  MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[17])));
                }
                {
                  Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[33])));
                  MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_80));
                }
                {
                  Pieces_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_73, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[32])));
                  MR_hl_field(MR_mktag(1), Pieces_73, 1) = ((MR_Box) (Var_77));
                }
                {
                  Spec_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_74, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_class.pred_method_with_no_modes_error\'/3"));
                  MR_hl_field(MR_mktag(1), Spec_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_74, 2) = ((MR_Box) ((MR_Unsigned) 40U));
                  MR_hl_field(MR_mktag(1), Spec_74, 3) = ((MR_Box) (Context_69));
                  MR_hl_field(MR_mktag(1), Spec_74, 4) = ((MR_Box) (Pieces_73));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_44 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_74));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_43));
                }
              }
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
hlds__make_hlds__add_class__add_class_mode_decl_9_p_0(
  MR_Word ItemMercuryStatus_10,
  MR_Word PredStatus_11,
  MR_Word ModeInfo_12,
  MR_Word STATE_VARIABLE_PredProcIds_0_38,
  MR_Word * STATE_VARIABLE_PredProcIds_39,
  MR_Word STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * STATE_VARIABLE_ModuleInfo_41,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43)
{
  {
    MR_bool succeeded;
    MR_Word PredSymName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_12, (MR_Integer) 0))));
    MR_Word MaybePredOrFunc_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_12, (MR_Integer) 1))));
    MR_Word Modes_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_12, (MR_Integer) 2))));
    MR_Word MaybeDetism_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_12, (MR_Integer) 4))));
    MR_Word InstVarSet_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_12, (MR_Integer) 5))));
    MR_Word Context_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_12, (MR_Integer) 6))));
    MR_Word PredTable_23;
    MR_Integer PredArity_24;
    MR_Word PredOrFunc_25;
    MR_Word PredIds_26;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_40, &PredTable_23);
    PredArity_24 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_18);
    if ((MaybePredOrFunc_17 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_class.add_class_mode_decl\'/9", (MR_String) "unexpanded \140with_inst\140 annotation");
        return;
      }
    else
      PredOrFunc_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredOrFunc_17, (MR_Integer) 0))));
    hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable_23, (MR_Integer) 0, PredOrFunc_25, PredSymName_16, PredArity_24, &PredIds_26);
    if ((PredIds_26 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Pieces_65;
      MR_Word Spec_66;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_75;
      MR_Word Var_76;

      {
        Var_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (PredSymName_16));
        MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (PredArity_24));
      }
      {
        Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_70, 0) = ((MR_Box) ((MR_Unsigned) 10U));
        MR_hl_field(MR_mktag(3), Var_70, 1) = ((MR_Box) (Var_71));
      }
      {
        Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) ((MR_Unsigned) 27U));
        MR_hl_field(MR_mktag(3), Var_76, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_25));
      }
      {
        Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
        MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[44])));
      }
      {
        Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[40])));
        MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_75));
      }
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_72));
      }
      {
        Pieces_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[42])));
        MR_hl_field(MR_mktag(1), Pieces_65, 1) = ((MR_Box) (Var_69));
      }
      {
        Spec_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_66, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_class.missing_pred_or_func_method_error\'/6"));
        MR_hl_field(MR_mktag(1), Spec_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_66, 2) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(1), Spec_66, 3) = ((MR_Box) (Context_22));
        MR_hl_field(MR_mktag(1), Spec_66, 4) = ((MR_Box) (Pieces_65));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_43 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_66));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_42));
      }
      *STATE_VARIABLE_PredProcIds_39 = STATE_VARIABLE_PredProcIds_0_38;
      *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
    }
    else
    {
      MR_Word HeadPredId_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_26, (MR_Integer) 0))));
      MR_Word TailPredIds_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_26, (MR_Integer) 1))));

      if ((TailPredIds_28 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word PredInfo_30;
        MR_Word PredMarkers_31;

        hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_40, HeadPredId_27, &PredInfo_30);
        hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_30, &PredMarkers_31);
        succeeded = hlds__hlds_pred__check_marker_2_p_0(PredMarkers_31, (MR_Integer) 10);
        if (succeeded)
        {
          MR_Word ItemModeDecl_34;
          MR_Word PredProcId_35;

          {
            ItemModeDecl_34 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ItemModeDecl_34, 0) = ((MR_Box) (PredSymName_16));
            MR_hl_field(MR_mktag(0), ItemModeDecl_34, 1) = ((MR_Box) (MaybePredOrFunc_17));
            MR_hl_field(MR_mktag(0), ItemModeDecl_34, 2) = ((MR_Box) (Modes_18));
            MR_hl_field(MR_mktag(0), ItemModeDecl_34, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), ItemModeDecl_34, 4) = ((MR_Box) (MaybeDetism_20));
            MR_hl_field(MR_mktag(0), ItemModeDecl_34, 5) = ((MR_Box) (InstVarSet_21));
            MR_hl_field(MR_mktag(0), ItemModeDecl_34, 6) = ((MR_Box) (Context_22));
            MR_hl_field(MR_mktag(0), ItemModeDecl_34, 7) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          hlds__add_pred__module_add_mode_decl_10_p_0((MR_Integer) 0, (MR_Integer) 1, ItemMercuryStatus_10, PredStatus_11, ItemModeDecl_34, &PredProcId_35, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41, STATE_VARIABLE_Specs_0_42, STATE_VARIABLE_Specs_43);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_PredProcIds_39 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredProcId_35));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_PredProcIds_0_38));
          }
        }
        else
        {
          hlds__make_hlds__add_class__missing_pred_or_func_method_error_6_p_0(PredSymName_16, PredArity_24, PredOrFunc_25, Context_22, STATE_VARIABLE_Specs_0_42, STATE_VARIABLE_Specs_43);
          *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
          *STATE_VARIABLE_PredProcIds_39 = STATE_VARIABLE_PredProcIds_0_38;
        }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_class.add_class_mode_decl\'/9", (MR_String) "multiple preds matching method mode");
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
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  {
    MR_Word Pieces_12;
    MR_Word Spec_13;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_24;
    MR_Word Var_25;

    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (MethodName_7));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (MethodArity_8));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_19, 0) = ((MR_Box) ((MR_Unsigned) 10U));
      MR_hl_field(MR_mktag(3), Var_19, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 27U));
      MR_hl_field(MR_mktag(3), Var_25, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_9));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[44])));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[40])));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_21));
    }
    {
      Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[42])));
      MR_hl_field(MR_mktag(1), Pieces_12, 1) = ((MR_Box) (Var_18));
    }
    {
      Spec_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_class.missing_pred_or_func_method_error\'/6"));
      MR_hl_field(MR_mktag(1), Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(MR_mktag(1), Spec_13, 3) = ((MR_Box) (Context_10));
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

static void MR_CALL 
hlds__make_hlds__add_class__add_class_pred_or_func_decl_12_p_0(
  MR_Word ClassName_13,
  MR_Word ClassParamVars_14,
  MR_Word ItemMercuryStatus_15,
  MR_Word PredStatus_16,
  MR_Word NeedQual_17,
  MR_Word PredOrFuncInfo_18,
  MR_Word STATE_VARIABLE_PredProcIds_0_49,
  MR_Word * STATE_VARIABLE_PredProcIds_50,
  MR_Word STATE_VARIABLE_ModuleInfo_0_51,
  MR_Word * STATE_VARIABLE_ModuleInfo_52,
  MR_Word STATE_VARIABLE_Specs_0_53,
  MR_Word * STATE_VARIABLE_Specs_54)
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
    MR_Word ClassId_40;
    MR_Word MethodId_41;
    MR_Word Origin_42;
    MR_Word Attrs_43;
    MR_Word MaybeAttrs_44;
    MR_Word PredDecl_46;
    MR_Word MaybePredProcId_47;
    MR_Word Var_55;
    MR_Integer Var_56;
    MR_Integer Var_57;

    Var_55 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
    parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_55, ClassParamVars_14, &ClassParamTypes_34);
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
    Var_56 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ClassParamTypes_34);
    {
      ClassId_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ClassId_40, 0) = ((MR_Box) (ClassName_13));
      MR_hl_field(MR_mktag(0), ClassId_40, 1) = ((MR_Box) (Var_56));
    }
    Var_57 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), ArgTypesAndModes_24);
    {
      MethodId_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MethodId_41, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_23));
      MR_hl_field(MR_mktag(0), MethodId_41, 1) = ((MR_Box) (PredName_22));
      MR_hl_field(MR_mktag(0), MethodId_41, 2) = ((MR_Box) (Var_57));
    }
    {
      Origin_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Origin_42, 0) = ((MR_Box) (ClassId_40));
      MR_hl_field(MR_mktag(1), Origin_42, 1) = ((MR_Box) (MethodId_41));
    }
    Attrs_43 = (MR_Word) (Origin_42);
    {
      MaybeAttrs_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeAttrs_44, 0) = ((MR_Box) (Attrs_43));
    }
    {
      PredDecl_46 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredDecl_46, 0) = ((MR_Box) (PredName_22));
      MR_hl_field(MR_mktag(0), PredDecl_46, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_23));
      MR_hl_field(MR_mktag(0), PredDecl_46, 2) = ((MR_Box) (ArgTypesAndModes_24));
      MR_hl_field(MR_mktag(0), PredDecl_46, 3) = ((MR_Box) (WithType_25));
      MR_hl_field(MR_mktag(0), PredDecl_46, 4) = ((MR_Box) (WithInst_26));
      MR_hl_field(MR_mktag(0), PredDecl_46, 5) = ((MR_Box) (MaybeDetism_27));
      MR_hl_field(MR_mktag(0), PredDecl_46, 6) = ((MR_Box) (MaybeAttrs_44));
      MR_hl_field(MR_mktag(0), PredDecl_46, 7) = ((MR_Box) (TypeVarSet_28));
      MR_hl_field(MR_mktag(0), PredDecl_46, 8) = ((MR_Box) (InstVarSet_29));
      MR_hl_field(MR_mktag(0), PredDecl_46, 9) = ((MR_Box) (ExistQVars_30));
      MR_hl_field(MR_mktag(0), PredDecl_46, 10) = (MR_Box) ((MR_Unsigned) (Purity_31));
      MR_hl_field(MR_mktag(0), PredDecl_46, 11) = ((MR_Box) (Constraints_39));
      MR_hl_field(MR_mktag(0), PredDecl_46, 12) = ((MR_Box) (Context_33));
      MR_hl_field(MR_mktag(0), PredDecl_46, 13) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    hlds__add_pred__module_add_pred_decl_9_p_0(ItemMercuryStatus_15, PredStatus_16, NeedQual_17, PredDecl_46, &MaybePredProcId_47, STATE_VARIABLE_ModuleInfo_0_51, STATE_VARIABLE_ModuleInfo_52, STATE_VARIABLE_Specs_0_53, STATE_VARIABLE_Specs_54);
    if ((MaybePredProcId_47 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_PredProcIds_50 = STATE_VARIABLE_PredProcIds_0_49;
    else
    {
      MR_Word PredProcId_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredProcId_47, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_PredProcIds_50 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredProcId_48));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_PredProcIds_0_49));
      }
    }
  }
}

static MR_Integer MR_CALL 
hlds__make_hlds__add_class__get_list_index_3_f_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word HeadVar__1_1,
  MR_Integer CurPos_2,
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
        HeadVar__4_4 = CurPos_2;
      else
      {
        MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) CurPos_2 + (MR_Unsigned) 1);
        MR_Word next_value_of_HeadVar__1_1 = Es_11;
        MR_Integer next_value_of_CurPos_2 = Var_14;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        CurPos_2 = next_value_of_CurPos_2;
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
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv0_LambdaHeadVar__2_11;

    conv0_LambdaHeadVar__2_11 = hlds__make_hlds__add_class__IntroducedFrom__func__convert_vars_to_arg_posns__232__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_11));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_class__make_hlds_fundep_2_f_0(
  MR_Word TVars_4,
  MR_Word ProgFunDeps_5)
{
  {
    MR_Word HLDSFunDeps_6;
    MR_Word ProgDomain_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProgFunDeps_5, (MR_Integer) 0))));
    MR_Word ProgRange_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProgFunDeps_5, (MR_Integer) 1))));
    MR_Word HLDSDomain_9;
    MR_Word HLDSRange_10;
    MR_Word ArgPosns_16;
    MR_Word TVarToArgPosFunc_27;
    MR_Word ArgPosns_29;

    {
      TVarToArgPosFunc_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TVarToArgPosFunc_27, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_10[1]));
      MR_hl_field(MR_mktag(0), TVarToArgPosFunc_27, 1) = ((MR_Box) (hlds__make_hlds__add_class__make_hlds_fundep_2_f_0_1));
      MR_hl_field(MR_mktag(0), TVarToArgPosFunc_27, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), TVarToArgPosFunc_27, 3) = ((MR_Box) (TVars_4));
    }
    ArgPosns_16 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TVarToArgPosFunc_27, ProgDomain_7);
    mercury__set__list_to_set_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArgPosns_16, &HLDSDomain_9);
    ArgPosns_29 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TVarToArgPosFunc_27, ProgRange_8);
    mercury__set__list_to_set_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArgPosns_29, &HLDSRange_10);
    {
      HLDSFunDeps_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HLDSFunDeps_6, 0) = ((MR_Box) (HLDSDomain_9));
      MR_hl_field(MR_mktag(0), HLDSFunDeps_6, 1) = ((MR_Box) (HLDSRange_10));
    }
    return HLDSFunDeps_6;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_class__add_typeclass_defn_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HLDSFunDeps_6;

    conv0_HLDSFunDeps_6 = hlds__make_hlds__add_class__make_hlds_fundep_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HLDSFunDeps_6));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__add_typeclass_defn_8_p_0(
  MR_Word ItemMercuryStatus_9,
  MR_Word TypeClassStatus0_10,
  MR_Word NeedQual_11,
  MR_Word ItemTypeClassInfo_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_60,
  MR_Word * STATE_VARIABLE_ModuleInfo_61,
  MR_Word STATE_VARIABLE_Specs_0_62,
  MR_Word * STATE_VARIABLE_Specs_63)
{
  {
    MR_bool succeeded;
    MR_Word ClassName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_12, (MR_Integer) 0))));
    MR_Word ClassParamVars_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_12, (MR_Integer) 1))));
    MR_Word Constraints_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_12, (MR_Integer) 2))));
    MR_Word FunDeps_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_12, (MR_Integer) 3))));
    MR_Word Interface_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_12, (MR_Integer) 4))));
    MR_Word VarSet_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_12, (MR_Integer) 5))));
    MR_Word Context_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_12, (MR_Integer) 6))));
    MR_Word ClassTable0_23;
    MR_Integer ClassArity_24;
    MR_Word ClassId_25;
    MR_Word TypeClassStatus1_26;
    MR_Word HLDSFunDeps_28;
    MR_Word TypeClassStatus_41;
    MR_Word OldClassMethodPredProcIds_43;
    MR_Word ClassInterface_44;
    MR_Word HasIncompatibility_46;
    MR_Word Var_64;
    MR_Word STATE_VARIABLE_Specs_71_71;
    MR_Word STATE_VARIABLE_ModuleInfo_83_83;
    MR_Word OldDefn_29;
    MR_Box conv1_OldDefn_29;

    hlds__hlds_module__module_info_get_class_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_60, &ClassTable0_23);
    mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), ClassParamVars_16, &ClassArity_24);
    {
      ClassId_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ClassId_25, 0) = ((MR_Box) (ClassName_15));
      MR_hl_field(MR_mktag(0), ClassId_25, 1) = ((MR_Box) (ClassArity_24));
    }
    if ((Interface_19 == (MR_Word) ((MR_Unsigned) 0U)))
      hlds__status__typeclass_make_status_abstract_2_p_0(TypeClassStatus0_10, &TypeClassStatus1_26);
    else
      TypeClassStatus1_26 = TypeClassStatus0_10;
    {
      Var_64 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (hlds__make_hlds__add_class__add_typeclass_defn_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (ClassParamVars_16));
    }
    HLDSFunDeps_28 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0), Var_64, FunDeps_18);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable0_23, ((MR_Box) (ClassId_25)), &conv1_OldDefn_29);
    if (succeeded)
    {
      OldDefn_29 = ((MR_Word) (conv1_OldDefn_29));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word OldTypeClassStatus_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldDefn_29, (MR_Integer) 0))));
      MR_Word OldConstraints_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldDefn_29, (MR_Integer) 1))));
      MR_Word OldFunDeps_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldDefn_29, (MR_Integer) 2))));
      MR_Word OldClassParamVars_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldDefn_29, (MR_Integer) 4))));
      MR_Word OldInterface_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldDefn_29, (MR_Integer) 6))));
      MR_Word OldClassMethodPredProcIds0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldDefn_29, (MR_Integer) 7))));
      MR_Word OldVarSet_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldDefn_29, (MR_Integer) 8))));
      MR_Word OldContext_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldDefn_29, (MR_Integer) 9))));

      hlds__status__typeclass_combine_status_3_p_0(TypeClassStatus1_26, OldTypeClassStatus_30, &TypeClassStatus_41);
      if ((OldInterface_36 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        OldClassMethodPredProcIds_43 = (MR_Word) ((MR_Unsigned) 0U);
        ClassInterface_44 = Interface_19;
      }
      else
      {
        OldClassMethodPredProcIds_43 = OldClassMethodPredProcIds0_37;
        ClassInterface_44 = OldInterface_36;
      }
      succeeded = hlds__make_hlds__add_class__constraints_are_identical_6_p_0(OldClassParamVars_34, OldVarSet_38, OldConstraints_31, ClassParamVars_16, VarSet_20, Constraints_17);
      succeeded = !(succeeded);
      if (succeeded)
      {
        hlds__make_hlds_error__report_multiple_def_error_8_p_0(ClassName_15, ClassArity_24, (MR_String) "typeclass", Context_21, OldContext_39, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[9])), STATE_VARIABLE_Specs_0_62, &STATE_VARIABLE_Specs_71_71);
        {
          HasIncompatibility_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HasIncompatibility_46, 0) = ((MR_Box) (OldDefn_29));
        }
      }
      else
      {
        succeeded = hlds__make_hlds__add_class__class_fundeps_are_identical_2_p_0(OldFunDeps_32, HLDSFunDeps_28);
        succeeded = !(succeeded);
        if (succeeded)
        {
          hlds__make_hlds_error__report_multiple_def_error_8_p_0(ClassName_15, ClassArity_24, (MR_String) "typeclass", Context_21, OldContext_39, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[11])), STATE_VARIABLE_Specs_0_62, &STATE_VARIABLE_Specs_71_71);
          {
            HasIncompatibility_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HasIncompatibility_46, 0) = ((MR_Box) (OldDefn_29));
          }
        }
        else
        {
          succeeded = (Interface_19 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (OldInterface_36 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
            }
          }
          if (succeeded)
          {
            MR_Word Var_79 = (MR_Word) (TypeClassStatus_41);

            succeeded = (Var_79 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              STATE_VARIABLE_Specs_71_71 = STATE_VARIABLE_Specs_0_62;
            else
              hlds__make_hlds_error__report_multiple_def_error_8_p_0(ClassName_15, ClassArity_24, (MR_String) "typeclass", Context_21, OldContext_39, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Specs_0_62, &STATE_VARIABLE_Specs_71_71);
            {
              HasIncompatibility_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), HasIncompatibility_46, 0) = ((MR_Box) (OldDefn_29));
            }
          }
          else
          {
            HasIncompatibility_46 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_Specs_71_71 = STATE_VARIABLE_Specs_0_62;
          }
        }
      }
      STATE_VARIABLE_ModuleInfo_83_83 = STATE_VARIABLE_ModuleInfo_0_60;
    }
    else
    {
      MR_Word Instances0_49;
      MR_Word Instances_50;

      HasIncompatibility_46 = (MR_Word) ((MR_Unsigned) 0U);
      OldClassMethodPredProcIds_43 = (MR_Word) ((MR_Unsigned) 0U);
      ClassInterface_44 = Interface_19;
      TypeClassStatus_41 = TypeClassStatus1_26;
      hlds__hlds_module__module_info_get_instance_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_60, &Instances0_49);
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[4]), ((MR_Box) (ClassId_25)), ((MR_Box) ((MR_Unsigned) 0U)), Instances0_49, &Instances_50);
      hlds__hlds_module__module_info_set_instance_table_3_p_0(Instances_50, STATE_VARIABLE_ModuleInfo_0_60, &STATE_VARIABLE_ModuleInfo_83_83);
      STATE_VARIABLE_Specs_71_71 = STATE_VARIABLE_Specs_0_62;
    }
    if ((Interface_19 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HasIncompatibility_46 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Kinds_58;
        MR_Word ClassDefn_59;
        MR_Word ClassTable_96;

        *STATE_VARIABLE_Specs_63 = STATE_VARIABLE_Specs_71_71;
        Kinds_58 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
        {
          ClassDefn_59 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ClassDefn_59, 0) = ((MR_Box) (TypeClassStatus_41));
          MR_hl_field(MR_mktag(0), ClassDefn_59, 1) = ((MR_Box) (Constraints_17));
          MR_hl_field(MR_mktag(0), ClassDefn_59, 2) = ((MR_Box) (HLDSFunDeps_28));
          MR_hl_field(MR_mktag(0), ClassDefn_59, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), ClassDefn_59, 4) = ((MR_Box) (ClassParamVars_16));
          MR_hl_field(MR_mktag(0), ClassDefn_59, 5) = ((MR_Box) (Kinds_58));
          MR_hl_field(MR_mktag(0), ClassDefn_59, 6) = ((MR_Box) (ClassInterface_44));
          MR_hl_field(MR_mktag(0), ClassDefn_59, 7) = ((MR_Box) (OldClassMethodPredProcIds_43));
          MR_hl_field(MR_mktag(0), ClassDefn_59, 8) = ((MR_Box) (VarSet_20));
          MR_hl_field(MR_mktag(0), ClassDefn_59, 9) = ((MR_Box) (Context_21));
          MR_hl_field(MR_mktag(0), ClassDefn_59, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ((MR_Box) (ClassId_25)), ((MR_Box) (ClassDefn_59)), ClassTable0_23, &ClassTable_96);
        hlds__hlds_module__module_info_set_class_table_3_p_0(ClassTable_96, STATE_VARIABLE_ModuleInfo_83_83, STATE_VARIABLE_ModuleInfo_61);
      }
      else
      {
        *STATE_VARIABLE_ModuleInfo_61 = STATE_VARIABLE_ModuleInfo_83_83;
        *STATE_VARIABLE_Specs_63 = STATE_VARIABLE_Specs_71_71;
      }
    else
    {
      MR_Word Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Interface_19, (MR_Integer) 0))));

      if ((HasIncompatibility_46 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ClassMethodPredProcIds_122;
        MR_Word Kinds_124;
        MR_Word ClassDefn_125;
        MR_Word STATE_VARIABLE_ModuleInfo_84_126;
        MR_Word ClassTable_128;

        hlds__make_hlds__add_class__module_add_class_interface_11_p_0(ClassName_15, ClassParamVars_16, TypeClassStatus_41, ItemMercuryStatus_9, NeedQual_11, Var_144, &ClassMethodPredProcIds_122, STATE_VARIABLE_ModuleInfo_83_83, &STATE_VARIABLE_ModuleInfo_84_126, STATE_VARIABLE_Specs_71_71, STATE_VARIABLE_Specs_63);
        Kinds_124 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
        {
          ClassDefn_125 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ClassDefn_125, 0) = ((MR_Box) (TypeClassStatus_41));
          MR_hl_field(MR_mktag(0), ClassDefn_125, 1) = ((MR_Box) (Constraints_17));
          MR_hl_field(MR_mktag(0), ClassDefn_125, 2) = ((MR_Box) (HLDSFunDeps_28));
          MR_hl_field(MR_mktag(0), ClassDefn_125, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), ClassDefn_125, 4) = ((MR_Box) (ClassParamVars_16));
          MR_hl_field(MR_mktag(0), ClassDefn_125, 5) = ((MR_Box) (Kinds_124));
          MR_hl_field(MR_mktag(0), ClassDefn_125, 6) = ((MR_Box) (ClassInterface_44));
          MR_hl_field(MR_mktag(0), ClassDefn_125, 7) = ((MR_Box) (ClassMethodPredProcIds_122));
          MR_hl_field(MR_mktag(0), ClassDefn_125, 8) = ((MR_Box) (VarSet_20));
          MR_hl_field(MR_mktag(0), ClassDefn_125, 9) = ((MR_Box) (Context_21));
          MR_hl_field(MR_mktag(0), ClassDefn_125, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ((MR_Box) (ClassId_25)), ((MR_Box) (ClassDefn_125)), ClassTable0_23, &ClassTable_128);
        hlds__hlds_module__module_info_set_class_table_3_p_0(ClassTable_128, STATE_VARIABLE_ModuleInfo_84_126, STATE_VARIABLE_ModuleInfo_61);
      }
      else
      {
        MR_Word BadDefn_53;
        MR_Word ClassTable_54;
        MR_Word BaseDefn_132 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HasIncompatibility_46, (MR_Integer) 0))));
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
          BadDefn_53 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), BadDefn_53, 0) = ((MR_Box) (Var_97));
          MR_hl_field(MR_mktag(0), BadDefn_53, 1) = ((MR_Box) (Var_98));
          MR_hl_field(MR_mktag(0), BadDefn_53, 2) = ((MR_Box) (Var_99));
          MR_hl_field(MR_mktag(0), BadDefn_53, 3) = ((MR_Box) (Var_100));
          MR_hl_field(MR_mktag(0), BadDefn_53, 4) = ((MR_Box) (Var_101));
          MR_hl_field(MR_mktag(0), BadDefn_53, 5) = ((MR_Box) (Var_102));
          MR_hl_field(MR_mktag(0), BadDefn_53, 6) = ((MR_Box) (Var_103));
          MR_hl_field(MR_mktag(0), BadDefn_53, 7) = ((MR_Box) (Var_104));
          MR_hl_field(MR_mktag(0), BadDefn_53, 8) = ((MR_Box) (Var_105));
          MR_hl_field(MR_mktag(0), BadDefn_53, 9) = ((MR_Box) (Var_106));
          MR_hl_field(MR_mktag(0), BadDefn_53, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ((MR_Box) (ClassId_25)), ((MR_Box) (BadDefn_53)), ClassTable0_23, &ClassTable_54);
        hlds__hlds_module__module_info_set_class_table_3_p_0(ClassTable_54, STATE_VARIABLE_ModuleInfo_83_83, STATE_VARIABLE_ModuleInfo_61);
        *STATE_VARIABLE_Specs_63 = STATE_VARIABLE_Specs_71_71;
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
    MR_Word conv8_STATE_VARIABLE_PredProcIds_39;
    MR_Word conv7_STATE_VARIABLE_ModuleInfo_41;
    MR_Word conv6_STATE_VARIABLE_Specs_43;

    hlds__make_hlds__add_class__add_class_mode_decl_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_PredProcIds_39, ((MR_Word) (wrapper_arg_4)), &conv7_STATE_VARIABLE_ModuleInfo_41, ((MR_Word) (wrapper_arg_6)), &conv6_STATE_VARIABLE_Specs_43);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_PredProcIds_39));
    *wrapper_arg_5 = ((MR_Box) (conv7_STATE_VARIABLE_ModuleInfo_41));
    *wrapper_arg_7 = ((MR_Box) (conv6_STATE_VARIABLE_Specs_43));
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
    MR_Word conv2_STATE_VARIABLE_PredProcIds_50;
    MR_Word conv1_STATE_VARIABLE_ModuleInfo_52;
    MR_Word conv0_STATE_VARIABLE_Specs_54;

    hlds__make_hlds__add_class__add_class_pred_or_func_decl_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_PredProcIds_50, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_ModuleInfo_52, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Specs_54);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_PredProcIds_50));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_52));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_54));
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_11_p_0(
  MR_Word ClassName_12,
  MR_Word ClassParamVars_13,
  MR_Word TypeClassStatus_14,
  MR_Word ItemMercuryStatus_15,
  MR_Word NeedQual_16,
  MR_Word ClassDecls_17,
  MR_Word * STATE_VARIABLE_PredProcIds_25,
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  {
    MR_Word ClassPredOrFuncInfos_21;
    MR_Word ClassModeInfos_22;
    MR_Word OldImportStatus_23;
    MR_Word PredStatus_24;
    MR_Word Var_31;
    MR_Word STATE_VARIABLE_PredProcIds_32_32;
    MR_Word STATE_VARIABLE_ModuleInfo_33_33;
    MR_Word STATE_VARIABLE_Specs_34_34;
    MR_Word Var_35;
    MR_Word STATE_VARIABLE_PredProcIds_36_36;
    MR_Word STATE_VARIABLE_ModuleInfo_37_37;
    MR_Word STATE_VARIABLE_Specs_38_38;
    MR_Word STATE_VARIABLE_PredProcIds_40_40;
    MR_Box conv5_STATE_VARIABLE_PredProcIds_32_32;
    MR_Box conv4_STATE_VARIABLE_ModuleInfo_33_33;
    MR_Box conv3_STATE_VARIABLE_Specs_34_34;
    MR_Box conv11_STATE_VARIABLE_PredProcIds_36_36;
    MR_Box conv10_STATE_VARIABLE_ModuleInfo_37_37;
    MR_Box conv9_STATE_VARIABLE_Specs_38_38;
    MR_Box conv17_STATE_VARIABLE_PredProcIds_40_40;
    MR_Box conv16_STATE_VARIABLE_ModuleInfo_27;
    MR_Box conv15_STATE_VARIABLE_Specs_29;

    hlds__make_hlds__add_class__classify_class_decls_3_p_0(ClassDecls_17, &ClassPredOrFuncInfos_21, &ClassModeInfos_22);
    OldImportStatus_23 = (MR_Word) (TypeClassStatus_14);
    PredStatus_24 = (MR_Word) (OldImportStatus_23);
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (hlds__make_hlds__add_class__module_add_class_interface_11_p_0_1));
      MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (ClassName_12));
      MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (ClassParamVars_13));
      MR_hl_field(MR_mktag(0), Var_31, 5) = ((MR_Box) (ItemMercuryStatus_15));
      MR_hl_field(MR_mktag(0), Var_31, 6) = ((MR_Box) (PredStatus_24));
      MR_hl_field(MR_mktag(0), Var_31, 7) = ((MR_Box) (NeedQual_16));
    }
    mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_pred_or_func_info_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[5]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[0]), Var_31, ClassPredOrFuncInfos_21, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_STATE_VARIABLE_PredProcIds_32_32, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_26)), &conv4_STATE_VARIABLE_ModuleInfo_33_33, ((MR_Box) (STATE_VARIABLE_Specs_0_28)), &conv3_STATE_VARIABLE_Specs_34_34);
    STATE_VARIABLE_PredProcIds_32_32 = ((MR_Word) (conv5_STATE_VARIABLE_PredProcIds_32_32));
    STATE_VARIABLE_ModuleInfo_33_33 = ((MR_Word) (conv4_STATE_VARIABLE_ModuleInfo_33_33));
    STATE_VARIABLE_Specs_34_34 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_34_34));
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (hlds__make_hlds__add_class__module_add_class_interface_11_p_0_2));
      MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (ItemMercuryStatus_15));
      MR_hl_field(MR_mktag(0), Var_35, 4) = ((MR_Box) (PredStatus_24));
    }
    mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_mode_info_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[5]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[0]), Var_35, ClassModeInfos_22, ((MR_Box) (STATE_VARIABLE_PredProcIds_32_32)), &conv11_STATE_VARIABLE_PredProcIds_36_36, ((MR_Box) (STATE_VARIABLE_ModuleInfo_33_33)), &conv10_STATE_VARIABLE_ModuleInfo_37_37, ((MR_Box) (STATE_VARIABLE_Specs_34_34)), &conv9_STATE_VARIABLE_Specs_38_38);
    STATE_VARIABLE_PredProcIds_36_36 = ((MR_Word) (conv11_STATE_VARIABLE_PredProcIds_36_36));
    STATE_VARIABLE_ModuleInfo_37_37 = ((MR_Word) (conv10_STATE_VARIABLE_ModuleInfo_37_37));
    STATE_VARIABLE_Specs_38_38 = ((MR_Word) (conv9_STATE_VARIABLE_Specs_38_38));
    mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_pred_or_func_info_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[5]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_9[0]), ClassPredOrFuncInfos_21, ((MR_Box) (STATE_VARIABLE_PredProcIds_36_36)), &conv17_STATE_VARIABLE_PredProcIds_40_40, ((MR_Box) (STATE_VARIABLE_ModuleInfo_37_37)), &conv16_STATE_VARIABLE_ModuleInfo_27, ((MR_Box) (STATE_VARIABLE_Specs_38_38)), &conv15_STATE_VARIABLE_Specs_29);
    STATE_VARIABLE_PredProcIds_40_40 = ((MR_Word) (conv17_STATE_VARIABLE_PredProcIds_40_40));
    *STATE_VARIABLE_ModuleInfo_27 = ((MR_Word) (conv16_STATE_VARIABLE_ModuleInfo_27));
    *STATE_VARIABLE_Specs_29 = ((MR_Word) (conv15_STATE_VARIABLE_Specs_29));
    mercury__list__sort_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), STATE_VARIABLE_PredProcIds_40_40, STATE_VARIABLE_PredProcIds_25);
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
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[13]), ((MR_Box) (OldFunDeps_5)), ((MR_Box) (FunDeps_6)));
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
    mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), OldVars_16, Vars_10, &VarRenaming_17);
    parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(VarRenaming_17, OldConstraints1_15, &OldConstraints_18);
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[12]), ((MR_Box) (OldConstraints_18)), ((MR_Box) (Constraints_12)));
    return succeeded;
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
    MR_Word conv3_STATE_VARIABLE_ModuleInfo_48;
    MR_Word conv2_STATE_VARIABLE_QualInfo_50;
    MR_Word conv1_STATE_VARIABLE_ClausesInfo_52;
    MR_Word conv0_STATE_VARIABLE_Specs_54;

    hlds__make_hlds__add_class__produce_instance_method_clause_14_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_TVarSet_20, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_ModuleInfo_48, ((MR_Word) (wrapper_arg_6)), &conv2_STATE_VARIABLE_QualInfo_50, ((MR_Word) (wrapper_arg_8)), &conv1_STATE_VARIABLE_ClausesInfo_52, ((MR_Word) (wrapper_arg_10)), &conv0_STATE_VARIABLE_Specs_54);
    *wrapper_arg_3 = ((MR_Box) (conv4_TVarSet_20));
    *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_ModuleInfo_48));
    *wrapper_arg_7 = ((MR_Box) (conv2_STATE_VARIABLE_QualInfo_50));
    *wrapper_arg_9 = ((MR_Box) (conv1_STATE_VARIABLE_ClausesInfo_52));
    *wrapper_arg_11 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_54));
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
        MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_p_0_1));
        MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (PredOrFunc_18));
        MR_hl_field(MR_mktag(0), Var_56, 4) = ((MR_Box) (Context_22));
        MR_hl_field(MR_mktag(0), Var_56, 5) = ((MR_Box) (InstanceStatus_23));
      }
      mercury__list__foldl5_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[3]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_info_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[0]), Var_56, InstanceClauses_45, ((MR_Box) (STATE_VARIABLE_TVarSet_0_47)), &conv9_STATE_VARIABLE_TVarSet_48, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_49)), &conv8_STATE_VARIABLE_ModuleInfo_50, ((MR_Box) (STATE_VARIABLE_QualInfo_0_51)), &conv7_STATE_VARIABLE_QualInfo_52, ((MR_Box) (ClausesInfo0_46)), &conv6_ClausesInfo_24, ((MR_Box) (STATE_VARIABLE_Specs_0_53)), &conv5_STATE_VARIABLE_Specs_54);
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
      mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), &TVarNameMap_40);
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
hlds__make_hlds__add_class__add_instance_defns_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ModuleInfo_34;
    MR_Word conv0_STATE_VARIABLE_Specs_36;

    hlds__make_hlds__add_class__add_instance_defn_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleInfo_34, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_36);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_34));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_36));
  }
}

void MR_CALL 
hlds__make_hlds__add_class__add_instance_defns_5_p_0(
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
      MR_Word ImsSubList_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ImsSubLists_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ItemMercuryStatus_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImsSubList_12, (MR_Integer) 0))));
      MR_Word Items_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImsSubList_12, (MR_Integer) 1))));
      MR_Word InstanceStatus0_18;
      MR_Word Var_23;
      MR_Word STATE_VARIABLE_ModuleInfo_24_24;
      MR_Word STATE_VARIABLE_Specs_25_25;
      MR_Box conv3_STATE_VARIABLE_ModuleInfo_24_24;
      MR_Box conv2_STATE_VARIABLE_Specs_25_25;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      hlds__status__item_mercury_status_to_instance_status_2_p_0(ItemMercuryStatus_16, &InstanceStatus0_18);
      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (hlds__make_hlds__add_class__add_instance_defns_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (InstanceStatus0_18));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[0]), Var_23, Items_17, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_2)), &conv3_STATE_VARIABLE_ModuleInfo_24_24, ((MR_Box) (STATE_VARIABLE_Specs_0_4)), &conv2_STATE_VARIABLE_Specs_25_25);
      STATE_VARIABLE_ModuleInfo_24_24 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_24_24));
      STATE_VARIABLE_Specs_25_25 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_25_25));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ImsSubLists_13;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_24_24;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_25_25;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__add_typeclass_defns_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ModuleInfo_61;
    MR_Word conv0_STATE_VARIABLE_Specs_63;

    hlds__make_hlds__add_class__add_typeclass_defn_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleInfo_61, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_63);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_61));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_63));
  }
}

void MR_CALL 
hlds__make_hlds__add_class__add_typeclass_defns_5_p_0(
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
      MR_Word SecSubList_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word SecSubLists_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word SectionInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SecSubList_12, (MR_Integer) 0))));
      MR_Word Items_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SecSubList_12, (MR_Integer) 1))));
      MR_Word ItemMercuryStatus_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionInfo_16, (MR_Integer) 0))));
      MR_Word NeedQual_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SectionInfo_16, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word TypeClassStatus0_20;
      MR_Word Var_25;
      MR_Word STATE_VARIABLE_ModuleInfo_26_26;
      MR_Word STATE_VARIABLE_Specs_27_27;
      MR_Box conv3_STATE_VARIABLE_ModuleInfo_26_26;
      MR_Box conv2_STATE_VARIABLE_Specs_27_27;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      hlds__status__item_mercury_status_to_typeclass_status_2_p_0(ItemMercuryStatus_18, &TypeClassStatus0_20);
      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (hlds__make_hlds__add_class__add_typeclass_defns_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (ItemMercuryStatus_18));
        MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (TypeClassStatus0_20));
        MR_hl_field(MR_mktag(0), Var_25, 5) = ((MR_Box) (NeedQual_19));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[0]), Var_25, Items_17, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_2)), &conv3_STATE_VARIABLE_ModuleInfo_26_26, ((MR_Box) (STATE_VARIABLE_Specs_0_4)), &conv2_STATE_VARIABLE_Specs_27_27);
      STATE_VARIABLE_ModuleInfo_26_26 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_26_26));
      STATE_VARIABLE_Specs_27_27 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_27_27));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = SecSubLists_13;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_26_26;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_27_27;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
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
