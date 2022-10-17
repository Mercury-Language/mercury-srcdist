/*
** Automatically generated from `add_class.m'
** by the Mercury compiler,
** version rotd-2022-10-17
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
#include "check_hlds.check_typeclass.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.add_pred.mih"
#include "hlds.const_struct.mih"
#include "hlds.default_func_mode.mih"
#include "hlds.goal_mode.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.goal_expr_to_goal.mih"
#include "hlds.make_hlds.make_hlds_types.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "hlds.make_hlds.state_var.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static MR_Integer MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__func__convert_vars_to_arg_posns__232__1_2_f_0(
  MR_Word ProgTVars_4,
  MR_Word HeadVar__2_11);

static void MR_CALL 
hlds__make_hlds__add_class__add_instance_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_class__add_instance_defn_6_p_0(
  MR_Word InstanceStatus0_7,
  MR_Word ItemInstanceInfo_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_35,
  MR_Word * STATE_VARIABLE_ModuleInfo_36,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38);

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
hlds__make_hlds__add_class__add_class_pred_or_func_decl_12_p_0(
  MR_Word ClassName_13,
  MR_Word ClassParamVars_14,
  MR_Word ItemMercuryStatus_15,
  MR_Word PredStatus_16,
  MR_Word NeedQual_17,
  MR_Word PredOrFuncInfo_18,
  MR_Word STATE_VARIABLE_PredProcIds_0_51,
  MR_Word * STATE_VARIABLE_PredProcIds_52,
  MR_Word STATE_VARIABLE_ModuleInfo_0_53,
  MR_Word * STATE_VARIABLE_ModuleInfo_54,
  MR_Word STATE_VARIABLE_Specs_0_55,
  MR_Word * STATE_VARIABLE_Specs_56);

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
  MR_Word STATE_VARIABLE_ModuleInfo_0_65,
  MR_Word * STATE_VARIABLE_ModuleInfo_66,
  MR_Word STATE_VARIABLE_Specs_0_67,
  MR_Word * STATE_VARIABLE_Specs_68);

static void MR_CALL 
hlds__make_hlds__add_class__module_declare_class_method_preds_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__add_class__module_declare_class_method_preds_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__add_class__module_declare_class_method_preds_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__add_class__module_declare_class_method_preds_11_p_0(
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
  MR_Word OldFunDeps_3,
  MR_Word FunDeps_4);

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


static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_1[27][2];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_2[1][11];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_3[1][9];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_4[1][15];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_5[1][12];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_6[1][10];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_7[2][3];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_8[2][6];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_9[1][5];




static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_1[27][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The superclass constraints do not match."))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_class_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_class_scalar_common_1[4])))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The functional dependencies do not match."))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_class_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_class_scalar_common_1[4])))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: no mode declaration for"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "type class method predicate"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_class_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_class_scalar_common_1[4])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_String) "instance"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_class_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_class_scalar_common_1[4])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_String) "typeclass"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_class_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_class_scalar_common_1[19])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "without corresponding"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_class_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_class_scalar_common_1[21])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: mode declaration for type class method"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "method declaration."))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_class_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_class_scalar_common_1[4])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_2[1][11] = {
  /* row   0 */
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
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_3[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_instance_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_4[1][15] = {
  /* row   0 */
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
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_5[1][12] = {
  /* row   0 */
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
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_6[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_pred_or_func_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_7[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_6[0])),
    ((MR_Box) (hlds__make_hlds__add_class__module_declare_class_method_preds_11_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_9[0])),
    ((MR_Box) (hlds__make_hlds__add_class__add_instance_defn_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_8[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_9[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0)
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

static MR_Integer MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__func__convert_vars_to_arg_posns__232__1_2_f_0(
  MR_Word ProgTVars_4,
  MR_Word HeadVar__2_11)
{
  MR_Integer HeadVar__3_12;

  HeadVar__3_12 = mercury__list__det_index1_of_first_occurrence_2_f_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), ProgTVars_4, ((MR_Box) (HeadVar__2_11)));
  return HeadVar__3_12;
}

static void MR_CALL 
hlds__make_hlds__add_class__add_instance_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  hlds__make_hlds__state_var__expand_bang_state_pairs_in_instance_method_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
hlds__make_hlds__add_class__add_instance_defn_6_p_0(
  MR_Word InstanceStatus0_7,
  MR_Word ItemInstanceInfo_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_35,
  MR_Word * STATE_VARIABLE_ModuleInfo_36,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38)
{
  MR_bool succeeded;
  MR_Word ClassName_11 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo_8, (MR_Integer) 0))));
  MR_Word Types_12 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo_8, (MR_Integer) 1))));
  MR_Word OriginalTypes_13 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo_8, (MR_Integer) 2))));
  MR_Word Constraints_14 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo_8, (MR_Integer) 3))));
  MR_Word InstanceBody0_15 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo_8, (MR_Integer) 4))));
  MR_Word VarSet_16 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo_8, (MR_Integer) 5))));
  MR_Word InstanceModuleName_17 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo_8, (MR_Integer) 6))));
  MR_Word Context_18 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo_8, (MR_Integer) 7))));
  MR_Word InstanceBody_20;
  MR_Word InstanceStatus_21;
  MR_Word Classes_24;
  MR_Word InstanceTable0_25;
  MR_Integer ClassArity_26;
  MR_Word ClassId_27;
  MR_Box conv1_Var_28;

  if ((InstanceBody0_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    InstanceBody_20 = (MR_Word) ((MR_Unsigned) 0U);
    hlds__status__instance_make_status_abstract_2_p_0(InstanceStatus0_7, &InstanceStatus_21);
  }
  else
  {
    MR_Word InstanceMethods0_22 = ((MR_Word) ((MR_hl_field(1, InstanceBody0_15, (MR_Integer) 0))));
    MR_Word InstanceMethods_23;

    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_7[1]), InstanceMethods0_22, &InstanceMethods_23);
    {
      InstanceBody_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, InstanceBody_20, 0) = ((MR_Box) (InstanceMethods_23));
    }
    InstanceStatus_21 = InstanceStatus0_7;
  }
  hlds__hlds_module__module_info_get_class_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_35, &Classes_24);
  hlds__hlds_module__module_info_get_instance_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_35, &InstanceTable0_25);
  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types_12, &ClassArity_26);
  {
    ClassId_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ClassId_27, 0) = ((MR_Box) (ClassName_11));
    MR_hl_field(0, ClassId_27, 1) = ((MR_Box) (ClassArity_26));
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), Classes_24, ((MR_Box) (ClassId_27)), &conv1_Var_28);
  if (succeeded)
    succeeded = MR_TRUE;
  if (succeeded)
  {
    MR_Word ProofMap_31;
    MR_Word NewInstanceDefn_32;
    MR_Word OldInstanceDefns_33;
    MR_Word InstanceTable_34;
    MR_Word Var_40;
    MR_Box conv2_OldInstanceDefns_33;

    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), &ProofMap_31);
    {
      NewInstanceDefn_32 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, NewInstanceDefn_32, 0) = ((MR_Box) (InstanceModuleName_17));
      MR_hl_field(0, NewInstanceDefn_32, 1) = ((MR_Box) (Types_12));
      MR_hl_field(0, NewInstanceDefn_32, 2) = ((MR_Box) (OriginalTypes_13));
      MR_hl_field(0, NewInstanceDefn_32, 3) = ((MR_Box) (InstanceStatus_21));
      MR_hl_field(0, NewInstanceDefn_32, 4) = ((MR_Box) (Context_18));
      MR_hl_field(0, NewInstanceDefn_32, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, NewInstanceDefn_32, 6) = ((MR_Box) (Constraints_14));
      MR_hl_field(0, NewInstanceDefn_32, 7) = ((MR_Box) (InstanceBody_20));
      MR_hl_field(0, NewInstanceDefn_32, 8) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, NewInstanceDefn_32, 9) = ((MR_Box) (VarSet_16));
      MR_hl_field(0, NewInstanceDefn_32, 10) = ((MR_Box) (ProofMap_31));
    }
    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[2]), InstanceTable0_25, ((MR_Box) (ClassId_27)), &conv2_OldInstanceDefns_33);
    OldInstanceDefns_33 = ((MR_Word) (conv2_OldInstanceDefns_33));
    {
      Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_40, 0) = ((MR_Box) (NewInstanceDefn_32));
      MR_hl_field(1, Var_40, 1) = ((MR_Box) (OldInstanceDefns_33));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[2]), ((MR_Box) (ClassId_27)), ((MR_Box) (Var_40)), InstanceTable0_25, &InstanceTable_34);
    hlds__hlds_module__module_info_set_instance_table_3_p_0(InstanceTable_34, STATE_VARIABLE_ModuleInfo_0_35, STATE_VARIABLE_ModuleInfo_36);
    *STATE_VARIABLE_Specs_38 = STATE_VARIABLE_Specs_0_37;
  }
  else
  {
    MR_Word Pieces_51;
    MR_Word Spec_52;
    MR_Word Var_55;
    MR_Word Var_58;
    MR_Word Var_61;
    MR_Word Var_64;
    MR_Word Var_65;

    {
      Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 23U));
      MR_hl_field(3, Var_65, 1) = ((MR_Box) (ClassId_27));
    }
    {
      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
      MR_hl_field(1, Var_64, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_class_scalar_common_1[23])));
    }
    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_class_scalar_common_1[17])));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_64));
    }
    {
      Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_58, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_class_scalar_common_1[16])));
      MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_55, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_class_scalar_common_1[15])));
      MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_58));
    }
    {
      Pieces_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_51, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_class_scalar_common_1[14])));
      MR_hl_field(1, Pieces_51, 1) = ((MR_Box) (Var_55));
    }
    {
      Spec_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_52, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_class.report_instance_for_undefined_typeclass\'/4"));
      MR_hl_field(1, Spec_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_52, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(1, Spec_52, 3) = ((MR_Box) (Context_18));
      MR_hl_field(1, Spec_52, 4) = ((MR_Box) (Pieces_51));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_38 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_52));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_37));
    }
    *STATE_VARIABLE_ModuleInfo_36 = STATE_VARIABLE_ModuleInfo_0_35;
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
  MR_bool succeeded;
  MR_Word QualPredOrFuncName_12 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo_8, (MR_Integer) 0))));
  MR_Word PorF_13 = ((MR_Unsigned) ((MR_hl_field(0, PredOrFuncInfo_8, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word TypesAndModes_14 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo_8, (MR_Integer) 2))));
  MR_Word ModuleName_24;
  MR_String PredOrFuncName_25;
  MR_Word PredFormArity_27;
  MR_Word PredTable_28;
  MR_Word PredIds_29;

  if (((MR_tag((MR_Word) QualPredOrFuncName_12)) == (MR_Integer) 1))
  {
    ModuleName_24 = ((MR_Word) ((MR_hl_field(1, QualPredOrFuncName_12, (MR_Integer) 0))));
    PredOrFuncName_25 = ((MR_String) ((MR_hl_field(1, QualPredOrFuncName_12, (MR_Integer) 1))));
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_class.handle_no_mode_decl\'/7", (MR_String) "unqualified");
      return;
    }
  PredFormArity_27 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), TypesAndModes_14);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_41, &PredTable_28);
  hlds__pred_table__predicate_table_lookup_pf_m_n_a_7_p_0(PredTable_28, (MR_Integer) 0, PorF_13, ModuleName_24, PredOrFuncName_25, PredFormArity_27, &PredIds_29);
  if ((PredIds_29 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_class.handle_no_mode_decl\'/7", (MR_String) "number of preds != 1");
      return;
    }
  else
  {
    MR_Word Var_63 = ((MR_Word) ((MR_hl_field(1, PredIds_29, (MR_Integer) 1))));
    MR_Word Var_64 = ((MR_Word) ((MR_hl_field(1, PredIds_29, (MR_Integer) 0))));

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

            hlds__default_func_mode__maybe_add_default_func_mode_4_p_0(STATE_VARIABLE_ModuleInfo_0_41, PredInfo0_31, &PredInfo_32, &MaybeProcId_33);
            if ((MaybeProcId_33 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *STATE_VARIABLE_PredProcIds_40 = STATE_VARIABLE_PredProcIds_0_39;
              *STATE_VARIABLE_ModuleInfo_42 = STATE_VARIABLE_ModuleInfo_0_41;
            }
            else
            {
              MR_Integer ProcId_34 = ((MR_Integer) ((MR_hl_field(1, MaybeProcId_33, (MR_Integer) 0))));
              MR_Word Var_50;

              {
                Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_50, 0) = ((MR_Box) (Var_64));
                MR_hl_field(0, Var_50, 1) = ((MR_Box) (ProcId_34));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_PredProcIds_40 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_50));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_PredProcIds_0_39));
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
              MR_Word Context_65;
              MR_Word ModuleName_66;
              MR_String PredName_67;
              MR_Integer Arity_68;
              MR_Word SNA_69;
              MR_Word Pieces_70;
              MR_Word Spec_71;
              MR_Word Var_72;
              MR_Word Var_75;
              MR_Word Var_78;
              MR_Word Var_79;

              hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo0_31, &Context_65);
              ModuleName_66 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo0_31);
              PredName_67 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo0_31);
              Arity_68 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo0_31);
              {
                Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_72, 0) = ((MR_Box) (ModuleName_66));
                MR_hl_field(1, Var_72, 1) = ((MR_Box) (PredName_67));
              }
              {
                SNA_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, SNA_69, 0) = ((MR_Box) (Var_72));
                MR_hl_field(0, SNA_69, 1) = ((MR_Box) (Arity_68));
              }
              {
                Var_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_79, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                MR_hl_field(3, Var_79, 1) = ((MR_Box) (SNA_69));
              }
              {
                Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_78, 0) = ((MR_Box) (Var_79));
                MR_hl_field(1, Var_78, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_class_scalar_common_1[13])));
              }
              {
                Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_75, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_class_scalar_common_1[11])));
                MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_78));
              }
              {
                Pieces_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_70, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_class_scalar_common_1[10])));
                MR_hl_field(1, Pieces_70, 1) = ((MR_Box) (Var_75));
              }
              {
                Spec_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Spec_71, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_class.pred_method_with_no_modes_error\'/3"));
                MR_hl_field(1, Spec_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, Spec_71, 2) = ((MR_Box) ((MR_Unsigned) 40U));
                MR_hl_field(1, Spec_71, 3) = ((MR_Box) (Context_65));
                MR_hl_field(1, Spec_71, 4) = ((MR_Box) (Pieces_70));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_44 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Spec_71));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_43));
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
  MR_bool succeeded;
  MR_Word PredSymName_16 = ((MR_Word) ((MR_hl_field(0, ModeInfo_12, (MR_Integer) 0))));
  MR_Word MaybePredOrFunc_17 = ((MR_Word) ((MR_hl_field(0, ModeInfo_12, (MR_Integer) 1))));
  MR_Word Modes_18 = ((MR_Word) ((MR_hl_field(0, ModeInfo_12, (MR_Integer) 2))));
  MR_Word MaybeDetism_20 = ((MR_Word) ((MR_hl_field(0, ModeInfo_12, (MR_Integer) 4))));
  MR_Word InstVarSet_21 = ((MR_Word) ((MR_hl_field(0, ModeInfo_12, (MR_Integer) 5))));
  MR_Word Context_22 = ((MR_Word) ((MR_hl_field(0, ModeInfo_12, (MR_Integer) 6))));
  MR_Word PredTable_23;
  MR_Word PredFormArity_24;
  MR_Word PredOrFunc_25;
  MR_Word PredIds_26;

  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_40, &PredTable_23);
  PredFormArity_24 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_18);
  if ((MaybePredOrFunc_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_class.add_class_mode_decl\'/9", (MR_String) "unexpanded \140with_inst\140 annotation");
      return;
    }
  else
    PredOrFunc_25 = ((MR_Word) ((MR_hl_field(1, MaybePredOrFunc_17, (MR_Integer) 0))));
  hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable_23, (MR_Integer) 0, PredOrFunc_25, PredSymName_16, PredFormArity_24, &PredIds_26);
  if ((PredIds_26 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word UserArity_58;
    MR_Integer UserArityInt_59;
    MR_Word SNA_60;
    MR_Word Pieces_61;
    MR_Word Spec_62;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_70;
    MR_Word Var_71;

    parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_25, &UserArity_58, PredFormArity_24);
    UserArityInt_59 = (MR_Integer) (UserArity_58);
    {
      SNA_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SNA_60, 0) = ((MR_Box) (PredSymName_16));
      MR_hl_field(0, SNA_60, 1) = ((MR_Box) (UserArityInt_59));
    }
    {
      Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(3, Var_66, 1) = ((MR_Box) (SNA_60));
    }
    {
      Var_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_71, 0) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(3, Var_71, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_25));
    }
    {
      Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
      MR_hl_field(1, Var_70, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_class_scalar_common_1[26])));
    }
    {
      Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_67, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_class_scalar_common_1[22])));
      MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_70));
    }
    {
      Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
      MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_67));
    }
    {
      Pieces_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_61, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_class_scalar_common_1[24])));
      MR_hl_field(1, Pieces_61, 1) = ((MR_Box) (Var_65));
    }
    {
      Spec_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_62, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_class.missing_pred_or_func_method_error\'/6"));
      MR_hl_field(1, Spec_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_62, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(1, Spec_62, 3) = ((MR_Box) (Context_22));
      MR_hl_field(1, Spec_62, 4) = ((MR_Box) (Pieces_61));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_43 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_62));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_42));
    }
    *STATE_VARIABLE_PredProcIds_39 = STATE_VARIABLE_PredProcIds_0_38;
    *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
  }
  else
  {
    MR_Word HeadPredId_27 = ((MR_Word) ((MR_hl_field(1, PredIds_26, (MR_Integer) 0))));
    MR_Word TailPredIds_28 = ((MR_Word) ((MR_hl_field(1, PredIds_26, (MR_Integer) 1))));

    if ((TailPredIds_28 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word PredInfo_30;
      MR_Word PredMarkers_31;

      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_40, HeadPredId_27, &PredInfo_30);
      hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_30, &PredMarkers_31);
      succeeded = hlds__hlds_pred__check_marker_2_p_0(PredMarkers_31, (MR_Integer) 11);
      if (succeeded)
      {
        MR_Word ItemModeDecl_34;
        MR_Word PredProcId_35;

        {
          ItemModeDecl_34 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ItemModeDecl_34, 0) = ((MR_Box) (PredSymName_16));
          MR_hl_field(0, ItemModeDecl_34, 1) = ((MR_Box) (MaybePredOrFunc_17));
          MR_hl_field(0, ItemModeDecl_34, 2) = ((MR_Box) (Modes_18));
          MR_hl_field(0, ItemModeDecl_34, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, ItemModeDecl_34, 4) = ((MR_Box) (MaybeDetism_20));
          MR_hl_field(0, ItemModeDecl_34, 5) = ((MR_Box) (InstVarSet_21));
          MR_hl_field(0, ItemModeDecl_34, 6) = ((MR_Box) (Context_22));
          MR_hl_field(0, ItemModeDecl_34, 7) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        hlds__add_pred__module_add_mode_decl_10_p_0((MR_Integer) 0, (MR_Integer) 1, ItemMercuryStatus_10, PredStatus_11, ItemModeDecl_34, &PredProcId_35, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41, STATE_VARIABLE_Specs_0_42, STATE_VARIABLE_Specs_43);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_PredProcIds_39 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (PredProcId_35));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_PredProcIds_0_38));
        }
      }
      else
      {
        MR_Word UserArity_76;
        MR_Integer UserArityInt_77;
        MR_Word SNA_78;
        MR_Word Pieces_79;
        MR_Word Spec_80;
        MR_Word Var_83;
        MR_Word Var_84;
        MR_Word Var_85;
        MR_Word Var_88;
        MR_Word Var_89;

        parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_25, &UserArity_76, PredFormArity_24);
        UserArityInt_77 = (MR_Integer) (UserArity_76);
        {
          SNA_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SNA_78, 0) = ((MR_Box) (PredSymName_16));
          MR_hl_field(0, SNA_78, 1) = ((MR_Box) (UserArityInt_77));
        }
        {
          Var_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_84, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(3, Var_84, 1) = ((MR_Box) (SNA_78));
        }
        {
          Var_89 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_89, 0) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(3, Var_89, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_25));
        }
        {
          Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_88, 0) = ((MR_Box) (Var_89));
          MR_hl_field(1, Var_88, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_class_scalar_common_1[26])));
        }
        {
          Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_85, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_class_scalar_common_1[22])));
          MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_88));
        }
        {
          Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_84));
          MR_hl_field(1, Var_83, 1) = ((MR_Box) (Var_85));
        }
        {
          Pieces_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_79, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_class_scalar_common_1[24])));
          MR_hl_field(1, Pieces_79, 1) = ((MR_Box) (Var_83));
        }
        {
          Spec_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_80, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_class.missing_pred_or_func_method_error\'/6"));
          MR_hl_field(1, Spec_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_80, 2) = ((MR_Box) ((MR_Unsigned) 40U));
          MR_hl_field(1, Spec_80, 3) = ((MR_Box) (Context_22));
          MR_hl_field(1, Spec_80, 4) = ((MR_Box) (Pieces_79));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_43 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_80));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_42));
        }
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

static void MR_CALL 
hlds__make_hlds__add_class__add_class_pred_or_func_decl_12_p_0(
  MR_Word ClassName_13,
  MR_Word ClassParamVars_14,
  MR_Word ItemMercuryStatus_15,
  MR_Word PredStatus_16,
  MR_Word NeedQual_17,
  MR_Word PredOrFuncInfo_18,
  MR_Word STATE_VARIABLE_PredProcIds_0_51,
  MR_Word * STATE_VARIABLE_PredProcIds_52,
  MR_Word STATE_VARIABLE_ModuleInfo_0_53,
  MR_Word * STATE_VARIABLE_ModuleInfo_54,
  MR_Word STATE_VARIABLE_Specs_0_55,
  MR_Word * STATE_VARIABLE_Specs_56)
{
  MR_Word PredName_22 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo_18, (MR_Integer) 0))));
  MR_Word PredOrFunc_23 = ((MR_Unsigned) ((MR_hl_field(0, PredOrFuncInfo_18, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word ArgTypesAndModes_24 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo_18, (MR_Integer) 2))));
  MR_Word WithType_25 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo_18, (MR_Integer) 3))));
  MR_Word WithInst_26 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo_18, (MR_Integer) 4))));
  MR_Word MaybeDetism_27 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo_18, (MR_Integer) 5))));
  MR_Word TypeVarSet_28 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo_18, (MR_Integer) 6))));
  MR_Word InstVarSet_29 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo_18, (MR_Integer) 7))));
  MR_Word ExistQVars_30 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo_18, (MR_Integer) 8))));
  MR_Word Purity_31 = ((MR_Unsigned) ((MR_hl_field(0, PredOrFuncInfo_18, (MR_Integer) 9))) & (MR_Integer) 3);
  MR_Word Constraints0_32 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo_18, (MR_Integer) 10))));
  MR_Word Context_33 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo_18, (MR_Integer) 11))));
  MR_Word ClassParamTypes_34;
  MR_Word ImplicitConstraint_35;
  MR_Word UnivConstraints0_36;
  MR_Word ExistConstraints_37;
  MR_Word UnivConstraints_38;
  MR_Word Constraints_39;
  MR_Word ClassId_40;
  MR_Word PredFormArity_41;
  MR_Word UserArity_42;
  MR_Word MethodId_43;
  MR_Word Origin_44;
  MR_Word Attrs_45;
  MR_Word MaybeAttrs_46;
  MR_Word PredDecl_48;
  MR_Word MaybePredProcId_49;
  MR_Word Var_57;
  MR_Integer Var_58;

  Var_57 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
  parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_57, ClassParamVars_14, &ClassParamTypes_34);
  {
    ImplicitConstraint_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ImplicitConstraint_35, 0) = ((MR_Box) (ClassName_13));
    MR_hl_field(0, ImplicitConstraint_35, 1) = ((MR_Box) (ClassParamTypes_34));
  }
  UnivConstraints0_36 = ((MR_Word) ((MR_hl_field(0, Constraints0_32, (MR_Integer) 0))));
  ExistConstraints_37 = ((MR_Word) ((MR_hl_field(0, Constraints0_32, (MR_Integer) 1))));
  {
    UnivConstraints_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, UnivConstraints_38, 0) = ((MR_Box) (ImplicitConstraint_35));
    MR_hl_field(1, UnivConstraints_38, 1) = ((MR_Box) (UnivConstraints0_36));
  }
  {
    Constraints_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Constraints_39, 0) = ((MR_Box) (UnivConstraints_38));
    MR_hl_field(0, Constraints_39, 1) = ((MR_Box) (ExistConstraints_37));
  }
  Var_58 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ClassParamTypes_34);
  {
    ClassId_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ClassId_40, 0) = ((MR_Box) (ClassName_13));
    MR_hl_field(0, ClassId_40, 1) = ((MR_Box) (Var_58));
  }
  PredFormArity_41 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), ArgTypesAndModes_24);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_23, &UserArity_42, PredFormArity_41);
  {
    MethodId_43 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MethodId_43, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_23));
    MR_hl_field(0, MethodId_43, 1) = ((MR_Box) (PredName_22));
    MR_hl_field(0, MethodId_43, 2) = ((MR_Box) (UserArity_42));
  }
  {
    Origin_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Origin_44, 0) = ((MR_Box) (ClassId_40));
    MR_hl_field(1, Origin_44, 1) = ((MR_Box) (MethodId_43));
  }
  Attrs_45 = (MR_Word) (Origin_44);
  {
    MaybeAttrs_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MaybeAttrs_46, 0) = ((MR_Box) (Attrs_45));
  }
  {
    PredDecl_48 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredDecl_48, 0) = ((MR_Box) (PredName_22));
    MR_hl_field(0, PredDecl_48, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_23));
    MR_hl_field(0, PredDecl_48, 2) = ((MR_Box) (ArgTypesAndModes_24));
    MR_hl_field(0, PredDecl_48, 3) = ((MR_Box) (WithType_25));
    MR_hl_field(0, PredDecl_48, 4) = ((MR_Box) (WithInst_26));
    MR_hl_field(0, PredDecl_48, 5) = ((MR_Box) (MaybeDetism_27));
    MR_hl_field(0, PredDecl_48, 6) = ((MR_Box) (MaybeAttrs_46));
    MR_hl_field(0, PredDecl_48, 7) = ((MR_Box) (TypeVarSet_28));
    MR_hl_field(0, PredDecl_48, 8) = ((MR_Box) (InstVarSet_29));
    MR_hl_field(0, PredDecl_48, 9) = ((MR_Box) (ExistQVars_30));
    MR_hl_field(0, PredDecl_48, 10) = (MR_Box) ((MR_Unsigned) (Purity_31));
    MR_hl_field(0, PredDecl_48, 11) = ((MR_Box) (Constraints_39));
    MR_hl_field(0, PredDecl_48, 12) = ((MR_Box) (Context_33));
    MR_hl_field(0, PredDecl_48, 13) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__add_pred__module_add_pred_decl_9_p_0(ItemMercuryStatus_15, PredStatus_16, NeedQual_17, PredDecl_48, &MaybePredProcId_49, STATE_VARIABLE_ModuleInfo_0_53, STATE_VARIABLE_ModuleInfo_54, STATE_VARIABLE_Specs_0_55, STATE_VARIABLE_Specs_56);
  if ((MaybePredProcId_49 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_PredProcIds_52 = STATE_VARIABLE_PredProcIds_0_51;
  else
  {
    MR_Word PredProcId_50 = ((MR_Word) ((MR_hl_field(1, MaybePredProcId_49, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_PredProcIds_52 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (PredProcId_50));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_PredProcIds_0_51));
    }
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_class__make_hlds_fundep_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__3_12;

  conv0_HeadVar__3_12 = hlds__make_hlds__add_class__IntroducedFrom__func__convert_vars_to_arg_posns__232__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_12));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
hlds__make_hlds__add_class__make_hlds_fundep_2_f_0(
  MR_Word TVars_4,
  MR_Word ProgFunDeps_5)
{
  MR_Word HLDSFunDeps_6;
  MR_Word ProgDomain_7 = ((MR_Word) ((MR_hl_field(0, ProgFunDeps_5, (MR_Integer) 0))));
  MR_Word ProgRange_8 = ((MR_Word) ((MR_hl_field(0, ProgFunDeps_5, (MR_Integer) 1))));
  MR_Word HLDSDomain_9;
  MR_Word HLDSRange_10;
  MR_Word ArgPosns_11;
  MR_Word Var_12;
  MR_Word ArgPosns_15;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_8[1]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (hlds__make_hlds__add_class__make_hlds_fundep_2_f_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (TVars_4));
  }
  ArgPosns_11 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_12, ProgDomain_7);
  mercury__set__list_to_set_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArgPosns_11, &HLDSDomain_9);
  ArgPosns_15 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_12, ProgRange_8);
  mercury__set__list_to_set_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArgPosns_15, &HLDSRange_10);
  {
    HLDSFunDeps_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HLDSFunDeps_6, 0) = ((MR_Box) (HLDSDomain_9));
    MR_hl_field(0, HLDSFunDeps_6, 1) = ((MR_Box) (HLDSRange_10));
  }
  return HLDSFunDeps_6;
}

static MR_Box MR_CALL 
hlds__make_hlds__add_class__add_typeclass_defn_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HLDSFunDeps_6;

  conv0_HLDSFunDeps_6 = hlds__make_hlds__add_class__make_hlds_fundep_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HLDSFunDeps_6));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__add_class__add_typeclass_defn_8_p_0(
  MR_Word ItemMercuryStatus_9,
  MR_Word TypeClassStatus0_10,
  MR_Word NeedQual_11,
  MR_Word ItemTypeClassInfo_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_65,
  MR_Word * STATE_VARIABLE_ModuleInfo_66,
  MR_Word STATE_VARIABLE_Specs_0_67,
  MR_Word * STATE_VARIABLE_Specs_68)
{
  MR_bool succeeded;
  MR_Word ClassName_15 = ((MR_Word) ((MR_hl_field(0, ItemTypeClassInfo_12, (MR_Integer) 0))));
  MR_Word ClassParamVars_16 = ((MR_Word) ((MR_hl_field(0, ItemTypeClassInfo_12, (MR_Integer) 1))));
  MR_Word Constraints_17 = ((MR_Word) ((MR_hl_field(0, ItemTypeClassInfo_12, (MR_Integer) 2))));
  MR_Word FunDeps_18 = ((MR_Word) ((MR_hl_field(0, ItemTypeClassInfo_12, (MR_Integer) 3))));
  MR_Word Interface_19 = ((MR_Word) ((MR_hl_field(0, ItemTypeClassInfo_12, (MR_Integer) 4))));
  MR_Word VarSet_20 = ((MR_Word) ((MR_hl_field(0, ItemTypeClassInfo_12, (MR_Integer) 5))));
  MR_Word Context_21 = ((MR_Word) ((MR_hl_field(0, ItemTypeClassInfo_12, (MR_Integer) 6))));
  MR_Word ClassTable0_23;
  MR_Integer ClassArity_24;
  MR_Word ClassId_25;
  MR_Word TypeClassStatus1_26;
  MR_Word HLDSFunDeps_28;
  MR_Word TypeClassStatus_41;
  MR_Word OldClassMethodPredProcIds_43;
  MR_Word ClassInterface_44;
  MR_Word HasIncompatibility_51;
  MR_Word Var_69;
  MR_Word STATE_VARIABLE_Specs_83_83;
  MR_Word STATE_VARIABLE_ModuleInfo_88_88;
  MR_Word OldDefn_29;
  MR_Box conv1_OldDefn_29;

  hlds__hlds_module__module_info_get_class_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_65, &ClassTable0_23);
  mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), ClassParamVars_16, &ClassArity_24);
  {
    ClassId_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ClassId_25, 0) = ((MR_Box) (ClassName_15));
    MR_hl_field(0, ClassId_25, 1) = ((MR_Box) (ClassArity_24));
  }
  if ((Interface_19 == (MR_Word) ((MR_Unsigned) 0U)))
    hlds__status__typeclass_make_status_abstract_2_p_0(TypeClassStatus0_10, &TypeClassStatus1_26);
  else
    TypeClassStatus1_26 = TypeClassStatus0_10;
  {
    Var_69 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_69, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_8[0]));
    MR_hl_field(0, Var_69, 1) = ((MR_Box) (hlds__make_hlds__add_class__add_typeclass_defn_8_p_0_1));
    MR_hl_field(0, Var_69, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_69, 3) = ((MR_Box) (ClassParamVars_16));
  }
  HLDSFunDeps_28 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0), Var_69, FunDeps_18);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable0_23, ((MR_Box) (ClassId_25)), &conv1_OldDefn_29);
  if (succeeded)
  {
    OldDefn_29 = ((MR_Word) (conv1_OldDefn_29));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word OldTypeClassStatus_30 = ((MR_Word) ((MR_hl_field(0, OldDefn_29, (MR_Integer) 0))));
    MR_Word OldConstraints_31 = ((MR_Word) ((MR_hl_field(0, OldDefn_29, (MR_Integer) 1))));
    MR_Word OldFunDeps_32 = ((MR_Word) ((MR_hl_field(0, OldDefn_29, (MR_Integer) 2))));
    MR_Word OldClassParamVars_34 = ((MR_Word) ((MR_hl_field(0, OldDefn_29, (MR_Integer) 4))));
    MR_Word OldInterface_36 = ((MR_Word) ((MR_hl_field(0, OldDefn_29, (MR_Integer) 6))));
    MR_Word OldClassMethodPredProcIds0_37 = ((MR_Word) ((MR_hl_field(0, OldDefn_29, (MR_Integer) 7))));
    MR_Word OldVarSet_38 = ((MR_Word) ((MR_hl_field(0, OldDefn_29, (MR_Integer) 8))));
    MR_Word OldContext_39 = ((MR_Word) ((MR_hl_field(0, OldDefn_29, (MR_Integer) 9))));
    MR_Word SuperClassMismatchPieces_45;
    MR_Word FunDepsMismatchPieces_46;
    MR_Word MismatchPieces_47;

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
    succeeded = check_hlds__check_typeclass__constraints_are_identical_6_p_0(OldClassParamVars_34, OldVarSet_38, OldConstraints_31, ClassParamVars_16, VarSet_20, Constraints_17);
    if (succeeded)
      SuperClassMismatchPieces_45 = (MR_Word) ((MR_Unsigned) 0U);
    else
      SuperClassMismatchPieces_45 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_class_scalar_common_1[6]));
    succeeded = hlds__make_hlds__add_class__class_fundeps_are_identical_2_p_0(OldFunDeps_32, HLDSFunDeps_28);
    if (succeeded)
      FunDepsMismatchPieces_46 = (MR_Word) ((MR_Unsigned) 0U);
    else
      FunDepsMismatchPieces_46 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_class_scalar_common_1[8]));
    MismatchPieces_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SuperClassMismatchPieces_45, FunDepsMismatchPieces_46);
    if ((MismatchPieces_47 == (MR_Word) ((MR_Unsigned) 0U)))
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
        MR_Word OldImportStatus_50 = (MR_Word) (TypeClassStatus_41);

        succeeded = (OldImportStatus_50 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          STATE_VARIABLE_Specs_83_83 = STATE_VARIABLE_Specs_0_67;
        else
        {
          MR_Word Var_81 = (MR_Word) (ClassArity_24);

          hlds__make_hlds_error__report_multiply_defined_8_p_0((MR_String) "typeclass", ClassName_15, Var_81, Context_21, OldContext_39, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Specs_0_67, &STATE_VARIABLE_Specs_83_83);
        }
        {
          HasIncompatibility_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HasIncompatibility_51, 0) = ((MR_Box) (OldDefn_29));
        }
      }
      else
      {
        HasIncompatibility_51 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Specs_83_83 = STATE_VARIABLE_Specs_0_67;
      }
    }
    else
    {
      MR_Word Var_85 = (MR_Word) (ClassArity_24);

      hlds__make_hlds_error__report_multiply_defined_8_p_0((MR_String) "typeclass", ClassName_15, Var_85, Context_21, OldContext_39, MismatchPieces_47, STATE_VARIABLE_Specs_0_67, &STATE_VARIABLE_Specs_83_83);
      {
        HasIncompatibility_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HasIncompatibility_51, 0) = ((MR_Box) (OldDefn_29));
      }
    }
    STATE_VARIABLE_ModuleInfo_88_88 = STATE_VARIABLE_ModuleInfo_0_65;
  }
  else
  {
    MR_Word Instances0_54;
    MR_Word Instances_55;

    HasIncompatibility_51 = (MR_Word) ((MR_Unsigned) 0U);
    OldClassMethodPredProcIds_43 = (MR_Word) ((MR_Unsigned) 0U);
    ClassInterface_44 = Interface_19;
    TypeClassStatus_41 = TypeClassStatus1_26;
    hlds__hlds_module__module_info_get_instance_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_65, &Instances0_54);
    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[2]), ((MR_Box) (ClassId_25)), ((MR_Box) ((MR_Unsigned) 0U)), Instances0_54, &Instances_55);
    hlds__hlds_module__module_info_set_instance_table_3_p_0(Instances_55, STATE_VARIABLE_ModuleInfo_0_65, &STATE_VARIABLE_ModuleInfo_88_88);
    STATE_VARIABLE_Specs_83_83 = STATE_VARIABLE_Specs_0_67;
  }
  if ((Interface_19 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HasIncompatibility_51 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Kinds_63;
      MR_Word ClassDefn_64;
      MR_Word ClassTable_95;

      *STATE_VARIABLE_Specs_68 = STATE_VARIABLE_Specs_83_83;
      Kinds_63 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
      {
        ClassDefn_64 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ClassDefn_64, 0) = ((MR_Box) (TypeClassStatus_41));
        MR_hl_field(0, ClassDefn_64, 1) = ((MR_Box) (Constraints_17));
        MR_hl_field(0, ClassDefn_64, 2) = ((MR_Box) (HLDSFunDeps_28));
        MR_hl_field(0, ClassDefn_64, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, ClassDefn_64, 4) = ((MR_Box) (ClassParamVars_16));
        MR_hl_field(0, ClassDefn_64, 5) = ((MR_Box) (Kinds_63));
        MR_hl_field(0, ClassDefn_64, 6) = ((MR_Box) (ClassInterface_44));
        MR_hl_field(0, ClassDefn_64, 7) = ((MR_Box) (OldClassMethodPredProcIds_43));
        MR_hl_field(0, ClassDefn_64, 8) = ((MR_Box) (VarSet_20));
        MR_hl_field(0, ClassDefn_64, 9) = ((MR_Box) (Context_21));
        MR_hl_field(0, ClassDefn_64, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ((MR_Box) (ClassId_25)), ((MR_Box) (ClassDefn_64)), ClassTable0_23, &ClassTable_95);
      hlds__hlds_module__module_info_set_class_table_3_p_0(ClassTable_95, STATE_VARIABLE_ModuleInfo_88_88, STATE_VARIABLE_ModuleInfo_66);
    }
    else
    {
      *STATE_VARIABLE_ModuleInfo_66 = STATE_VARIABLE_ModuleInfo_88_88;
      *STATE_VARIABLE_Specs_68 = STATE_VARIABLE_Specs_83_83;
    }
  else
  {
    MR_Word Var_144 = ((MR_Word) ((MR_hl_field(1, Interface_19, (MR_Integer) 0))));

    if ((HasIncompatibility_51 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ClassMethodPredProcIds_122;
      MR_Word Kinds_124;
      MR_Word ClassDefn_125;
      MR_Word STATE_VARIABLE_ModuleInfo_91_126;
      MR_Word ClassTable_128;

      hlds__make_hlds__add_class__module_declare_class_method_preds_11_p_0(ClassName_15, ClassParamVars_16, TypeClassStatus_41, ItemMercuryStatus_9, NeedQual_11, Var_144, &ClassMethodPredProcIds_122, STATE_VARIABLE_ModuleInfo_88_88, &STATE_VARIABLE_ModuleInfo_91_126, STATE_VARIABLE_Specs_83_83, STATE_VARIABLE_Specs_68);
      Kinds_124 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
      {
        ClassDefn_125 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ClassDefn_125, 0) = ((MR_Box) (TypeClassStatus_41));
        MR_hl_field(0, ClassDefn_125, 1) = ((MR_Box) (Constraints_17));
        MR_hl_field(0, ClassDefn_125, 2) = ((MR_Box) (HLDSFunDeps_28));
        MR_hl_field(0, ClassDefn_125, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, ClassDefn_125, 4) = ((MR_Box) (ClassParamVars_16));
        MR_hl_field(0, ClassDefn_125, 5) = ((MR_Box) (Kinds_124));
        MR_hl_field(0, ClassDefn_125, 6) = ((MR_Box) (ClassInterface_44));
        MR_hl_field(0, ClassDefn_125, 7) = ((MR_Box) (ClassMethodPredProcIds_122));
        MR_hl_field(0, ClassDefn_125, 8) = ((MR_Box) (VarSet_20));
        MR_hl_field(0, ClassDefn_125, 9) = ((MR_Box) (Context_21));
        MR_hl_field(0, ClassDefn_125, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ((MR_Box) (ClassId_25)), ((MR_Box) (ClassDefn_125)), ClassTable0_23, &ClassTable_128);
      hlds__hlds_module__module_info_set_class_table_3_p_0(ClassTable_128, STATE_VARIABLE_ModuleInfo_91_126, STATE_VARIABLE_ModuleInfo_66);
    }
    else
    {
      MR_Word BadDefn_58;
      MR_Word ClassTable_59;
      MR_Word BaseDefn_132 = ((MR_Word) ((MR_hl_field(1, HasIncompatibility_51, (MR_Integer) 0))));
      MR_Word Var_96 = ((MR_Word) ((MR_hl_field(0, BaseDefn_132, (MR_Integer) 0))));
      MR_Word Var_97 = ((MR_Word) ((MR_hl_field(0, BaseDefn_132, (MR_Integer) 1))));
      MR_Word Var_98 = ((MR_Word) ((MR_hl_field(0, BaseDefn_132, (MR_Integer) 2))));
      MR_Word Var_99 = ((MR_Word) ((MR_hl_field(0, BaseDefn_132, (MR_Integer) 3))));
      MR_Word Var_100 = ((MR_Word) ((MR_hl_field(0, BaseDefn_132, (MR_Integer) 4))));
      MR_Word Var_101 = ((MR_Word) ((MR_hl_field(0, BaseDefn_132, (MR_Integer) 5))));
      MR_Word Var_102 = ((MR_Word) ((MR_hl_field(0, BaseDefn_132, (MR_Integer) 6))));
      MR_Word Var_103 = ((MR_Word) ((MR_hl_field(0, BaseDefn_132, (MR_Integer) 7))));
      MR_Word Var_104 = ((MR_Word) ((MR_hl_field(0, BaseDefn_132, (MR_Integer) 8))));
      MR_Word Var_105 = ((MR_Word) ((MR_hl_field(0, BaseDefn_132, (MR_Integer) 9))));

      {
        BadDefn_58 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, BadDefn_58, 0) = ((MR_Box) (Var_96));
        MR_hl_field(0, BadDefn_58, 1) = ((MR_Box) (Var_97));
        MR_hl_field(0, BadDefn_58, 2) = ((MR_Box) (Var_98));
        MR_hl_field(0, BadDefn_58, 3) = ((MR_Box) (Var_99));
        MR_hl_field(0, BadDefn_58, 4) = ((MR_Box) (Var_100));
        MR_hl_field(0, BadDefn_58, 5) = ((MR_Box) (Var_101));
        MR_hl_field(0, BadDefn_58, 6) = ((MR_Box) (Var_102));
        MR_hl_field(0, BadDefn_58, 7) = ((MR_Box) (Var_103));
        MR_hl_field(0, BadDefn_58, 8) = ((MR_Box) (Var_104));
        MR_hl_field(0, BadDefn_58, 9) = ((MR_Box) (Var_105));
        MR_hl_field(0, BadDefn_58, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ((MR_Box) (ClassId_25)), ((MR_Box) (BadDefn_58)), ClassTable0_23, &ClassTable_59);
      hlds__hlds_module__module_info_set_class_table_3_p_0(ClassTable_59, STATE_VARIABLE_ModuleInfo_88_88, STATE_VARIABLE_ModuleInfo_66);
      *STATE_VARIABLE_Specs_68 = STATE_VARIABLE_Specs_83_83;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__module_declare_class_method_preds_11_p_0_3(
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
  MR_Word conv14_STATE_VARIABLE_PredProcIds_40;
  MR_Word conv13_STATE_VARIABLE_ModuleInfo_42;
  MR_Word conv12_STATE_VARIABLE_Specs_44;

  hlds__make_hlds__add_class__handle_no_mode_decl_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_STATE_VARIABLE_PredProcIds_40, ((MR_Word) (wrapper_arg_4)), &conv13_STATE_VARIABLE_ModuleInfo_42, ((MR_Word) (wrapper_arg_6)), &conv12_STATE_VARIABLE_Specs_44);
  *wrapper_arg_3 = ((MR_Box) (conv14_STATE_VARIABLE_PredProcIds_40));
  *wrapper_arg_5 = ((MR_Box) (conv13_STATE_VARIABLE_ModuleInfo_42));
  *wrapper_arg_7 = ((MR_Box) (conv12_STATE_VARIABLE_Specs_44));
}

static void MR_CALL 
hlds__make_hlds__add_class__module_declare_class_method_preds_11_p_0_2(
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
  MR_Word conv8_STATE_VARIABLE_PredProcIds_39;
  MR_Word conv7_STATE_VARIABLE_ModuleInfo_41;
  MR_Word conv6_STATE_VARIABLE_Specs_43;

  hlds__make_hlds__add_class__add_class_mode_decl_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_PredProcIds_39, ((MR_Word) (wrapper_arg_4)), &conv7_STATE_VARIABLE_ModuleInfo_41, ((MR_Word) (wrapper_arg_6)), &conv6_STATE_VARIABLE_Specs_43);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_PredProcIds_39));
  *wrapper_arg_5 = ((MR_Box) (conv7_STATE_VARIABLE_ModuleInfo_41));
  *wrapper_arg_7 = ((MR_Box) (conv6_STATE_VARIABLE_Specs_43));
}

static void MR_CALL 
hlds__make_hlds__add_class__module_declare_class_method_preds_11_p_0_1(
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
  MR_Word conv2_STATE_VARIABLE_PredProcIds_52;
  MR_Word conv1_STATE_VARIABLE_ModuleInfo_54;
  MR_Word conv0_STATE_VARIABLE_Specs_56;

  hlds__make_hlds__add_class__add_class_pred_or_func_decl_12_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_PredProcIds_52, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_ModuleInfo_54, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Specs_56);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_PredProcIds_52));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_54));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_56));
}

static void MR_CALL 
hlds__make_hlds__add_class__module_declare_class_method_preds_11_p_0(
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
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_4[0]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (hlds__make_hlds__add_class__module_declare_class_method_preds_11_p_0_1));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (ClassName_12));
    MR_hl_field(0, Var_31, 4) = ((MR_Box) (ClassParamVars_13));
    MR_hl_field(0, Var_31, 5) = ((MR_Box) (ItemMercuryStatus_15));
    MR_hl_field(0, Var_31, 6) = ((MR_Box) (PredStatus_24));
    MR_hl_field(0, Var_31, 7) = ((MR_Box) (NeedQual_16));
  }
  mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_pred_or_func_info_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[3]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[0]), Var_31, ClassPredOrFuncInfos_21, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_STATE_VARIABLE_PredProcIds_32_32, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_26)), &conv4_STATE_VARIABLE_ModuleInfo_33_33, ((MR_Box) (STATE_VARIABLE_Specs_0_28)), &conv3_STATE_VARIABLE_Specs_34_34);
  STATE_VARIABLE_PredProcIds_32_32 = ((MR_Word) (conv5_STATE_VARIABLE_PredProcIds_32_32));
  STATE_VARIABLE_ModuleInfo_33_33 = ((MR_Word) (conv4_STATE_VARIABLE_ModuleInfo_33_33));
  STATE_VARIABLE_Specs_34_34 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_34_34));
  {
    Var_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_35, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_5[0]));
    MR_hl_field(0, Var_35, 1) = ((MR_Box) (hlds__make_hlds__add_class__module_declare_class_method_preds_11_p_0_2));
    MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_35, 3) = ((MR_Box) (ItemMercuryStatus_15));
    MR_hl_field(0, Var_35, 4) = ((MR_Box) (PredStatus_24));
  }
  mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_mode_info_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[3]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[0]), Var_35, ClassModeInfos_22, ((MR_Box) (STATE_VARIABLE_PredProcIds_32_32)), &conv11_STATE_VARIABLE_PredProcIds_36_36, ((MR_Box) (STATE_VARIABLE_ModuleInfo_33_33)), &conv10_STATE_VARIABLE_ModuleInfo_37_37, ((MR_Box) (STATE_VARIABLE_Specs_34_34)), &conv9_STATE_VARIABLE_Specs_38_38);
  STATE_VARIABLE_PredProcIds_36_36 = ((MR_Word) (conv11_STATE_VARIABLE_PredProcIds_36_36));
  STATE_VARIABLE_ModuleInfo_37_37 = ((MR_Word) (conv10_STATE_VARIABLE_ModuleInfo_37_37));
  STATE_VARIABLE_Specs_38_38 = ((MR_Word) (conv9_STATE_VARIABLE_Specs_38_38));
  mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_pred_or_func_info_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[3]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_7[0]), ClassPredOrFuncInfos_21, ((MR_Box) (STATE_VARIABLE_PredProcIds_36_36)), &conv17_STATE_VARIABLE_PredProcIds_40_40, ((MR_Box) (STATE_VARIABLE_ModuleInfo_37_37)), &conv16_STATE_VARIABLE_ModuleInfo_27, ((MR_Box) (STATE_VARIABLE_Specs_38_38)), &conv15_STATE_VARIABLE_Specs_29);
  STATE_VARIABLE_PredProcIds_40_40 = ((MR_Word) (conv17_STATE_VARIABLE_PredProcIds_40_40));
  *STATE_VARIABLE_ModuleInfo_27 = ((MR_Word) (conv16_STATE_VARIABLE_ModuleInfo_27));
  *STATE_VARIABLE_Specs_29 = ((MR_Word) (conv15_STATE_VARIABLE_Specs_29));
  mercury__list__sort_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), STATE_VARIABLE_PredProcIds_40_40, STATE_VARIABLE_PredProcIds_25);
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
    MR_Word Decl_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Decls_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_PredOrFuncInfos_12_12;
    MR_Word STATE_VARIABLE_ModeInfos_13_13;

    hlds__make_hlds__add_class__classify_class_decls_3_p_0(Decls_5, &STATE_VARIABLE_PredOrFuncInfos_12_12, &STATE_VARIABLE_ModeInfos_13_13);
    if (((MR_tag((MR_Word) Decl_4)) == (MR_Integer) 1))
    {
      MR_Word ModeInfo_9 = (MR_Word) (MR_body((MR_Word) (Decl_4), (MR_Integer) 1));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ModeInfo_9));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ModeInfos_13_13));
      }
      *HeadVar__2_2 = STATE_VARIABLE_PredOrFuncInfos_12_12;
    }
    else
    {
      MR_Word PredOrFuncInfo_8 = (MR_Word) ((MR_Word) (Decl_4));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (PredOrFuncInfo_8));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_PredOrFuncInfos_12_12));
      }
      *HeadVar__3_3 = STATE_VARIABLE_ModeInfos_13_13;
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_class__class_fundeps_are_identical_2_p_0(
  MR_Word OldFunDeps_3,
  MR_Word FunDeps_4)
{
  MR_bool succeeded;
  MR_Word SortedOldFunDeps_5;
  MR_Word SortedFunDeps_6;

  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0), OldFunDeps_3, &SortedOldFunDeps_5);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0), FunDeps_4, &SortedFunDeps_6);
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[9]), ((MR_Box) (SortedOldFunDeps_5)), ((MR_Box) (SortedFunDeps_6)));
  return succeeded;
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
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ModuleInfo_36;
  MR_Word conv0_STATE_VARIABLE_Specs_38;

  hlds__make_hlds__add_class__add_instance_defn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleInfo_36, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_38);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_36));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_38));
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
      MR_Word ImsSubList_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ImsSubLists_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ItemMercuryStatus_16 = ((MR_Word) ((MR_hl_field(0, ImsSubList_12, (MR_Integer) 0))));
      MR_Word Items_17 = ((MR_Word) ((MR_hl_field(0, ImsSubList_12, (MR_Integer) 1))));
      MR_Word InstanceStatus_18;
      MR_Word Var_23;
      MR_Word STATE_VARIABLE_ModuleInfo_24_24;
      MR_Word STATE_VARIABLE_Specs_25_25;
      MR_Box conv3_STATE_VARIABLE_ModuleInfo_24_24;
      MR_Box conv2_STATE_VARIABLE_Specs_25_25;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      hlds__status__item_mercury_status_to_instance_status_2_p_0(ItemMercuryStatus_16, &InstanceStatus_18);
      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_23, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_3[0]));
        MR_hl_field(0, Var_23, 1) = ((MR_Box) (hlds__make_hlds__add_class__add_instance_defns_5_p_0_1));
        MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_23, 3) = ((MR_Box) (InstanceStatus_18));
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
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ModuleInfo_66;
  MR_Word conv0_STATE_VARIABLE_Specs_68;

  hlds__make_hlds__add_class__add_typeclass_defn_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleInfo_66, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_68);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_66));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_68));
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
      MR_Word SecSubList_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word SecSubLists_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word SectionInfo_16 = ((MR_Word) ((MR_hl_field(0, SecSubList_12, (MR_Integer) 0))));
      MR_Word Items_17 = ((MR_Word) ((MR_hl_field(0, SecSubList_12, (MR_Integer) 1))));
      MR_Word ItemMercuryStatus_18 = ((MR_Word) ((MR_hl_field(0, SectionInfo_16, (MR_Integer) 0))));
      MR_Word NeedQual_19 = ((MR_Unsigned) ((MR_hl_field(0, SectionInfo_16, (MR_Integer) 1))) & (MR_Integer) 1);
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
        MR_hl_field(0, Var_25, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_2[0]));
        MR_hl_field(0, Var_25, 1) = ((MR_Box) (hlds__make_hlds__add_class__add_typeclass_defns_5_p_0_1));
        MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_25, 3) = ((MR_Box) (ItemMercuryStatus_18));
        MR_hl_field(0, Var_25, 4) = ((MR_Box) (TypeClassStatus0_20));
        MR_hl_field(0, Var_25, 5) = ((MR_Box) (NeedQual_19));
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
