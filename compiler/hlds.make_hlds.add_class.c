/*
** Automatically generated from `add_class.m'
** by the Mercury compiler,
** version rotd-2026-08-02
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
#include "check_hlds.check_typeclass.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
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
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.goal_expr_to_goal.mih"
#include "hlds.make_hlds.make_hlds_types.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "hlds.make_hlds.state_var.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__cord__pti_cord_1__plain_hlds__hlds_class__type_ctor_info_method_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_class__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_class_mode_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_class__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0__plain_cord__ti_cord_1parse_tree__prog_item__type_ctor_info_class_mode_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_class_mode_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__add_class_mode_decl__495__1_2_p_0(
  MR_Word PredId_17,
  MR_Word PredPredId_37);

static MR_Word MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__func__add_class_pred_or_func_and_mode_decls__463__1_2_f_0(
  MR_Word MethodPredName_49,
  MR_Word LambdaHeadVar__1_118);

static MR_Integer MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__func__convert_vars_to_arg_posns__239__1_2_f_0(
  MR_Word ProgTVars_4,
  MR_Word HeadVar__2_12);

static void MR_CALL 
hlds__make_hlds__add_class__report_mode_decl_for_undeclared_method_4_p_0(
  MR_Word MethodPredName_5,
  MR_Word ModeInfo_6,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

static void MR_CALL 
hlds__make_hlds__add_class__report_mode_decls_for_undeclared_method_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__add_class__report_mode_decls_for_undeclared_method_4_p_0(
  MR_Word MethodPredName_5,
  MR_Word ModeInfosCord_6,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10);

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

static MR_bool MR_CALL 
hlds__make_hlds__add_class__add_class_mode_decl_13_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__add_class__add_class_mode_decl_13_p_0(
  MR_Word ItemMercuryStatus_14,
  MR_Word PredStatus_15,
  MR_Word MethodPredName_16,
  MR_Word PredId_17,
  MR_Word ModeInfo_18,
  MR_Integer STATE_VARIABLE_MethodProcNum_0_40,
  MR_Integer * STATE_VARIABLE_MethodProcNum_41,
  MR_Word STATE_VARIABLE_MethodInfosCord_0_42,
  MR_Word * STATE_VARIABLE_MethodInfosCord_43,
  MR_Word STATE_VARIABLE_ModuleInfo_0_44,
  MR_Word * STATE_VARIABLE_ModuleInfo_45,
  MR_Word STATE_VARIABLE_Specs_0_46,
  MR_Word * STATE_VARIABLE_Specs_47);

static MR_Box MR_CALL 
hlds__make_hlds__add_class__add_class_pred_or_func_and_mode_decls_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_class__add_class_pred_or_func_and_mode_decls_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
hlds__make_hlds__add_class__add_class_pred_or_func_and_mode_decls_16_p_0(
  MR_Word ClassName_17,
  MR_Word ClassParamVars_18,
  MR_Word ItemMercuryStatus_19,
  MR_Word PredStatus_20,
  MR_Word NeedQual_21,
  MR_Word PredOrFuncInfo_22,
  MR_Integer STATE_VARIABLE_MethodProcNum_0_82,
  MR_Integer * STATE_VARIABLE_MethodProcNum_83,
  MR_Word STATE_VARIABLE_MethodInfosCord_0_84,
  MR_Word * STATE_VARIABLE_MethodInfosCord_85,
  MR_Word STATE_VARIABLE_ModeDeclMap_0_86,
  MR_Word * STATE_VARIABLE_ModeDeclMap_87,
  MR_Word STATE_VARIABLE_ModuleInfo_0_88,
  MR_Word * STATE_VARIABLE_ModuleInfo_89,
  MR_Word STATE_VARIABLE_Specs_0_90,
  MR_Word * STATE_VARIABLE_Specs_91);

static void MR_CALL 
hlds__make_hlds__add_class__pred_method_with_no_modes_error_3_p_0(
  MR_Word PredInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static MR_Box MR_CALL 
hlds__make_hlds__add_class__make_hlds_fundep_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
hlds__make_hlds__add_class__make_hlds_fundep_2_f_0(
  MR_Word TVars_4,
  MR_Word ProgFunDep_5);

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
  MR_Word STATE_VARIABLE_ModuleInfo_0_67,
  MR_Word * STATE_VARIABLE_ModuleInfo_68,
  MR_Word STATE_VARIABLE_Specs_0_69,
  MR_Word * STATE_VARIABLE_Specs_70);

static void MR_CALL 
hlds__make_hlds__add_class__module_declare_class_method_preds_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__make_hlds__add_class__module_declare_class_method_preds_11_p_0_1(
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
hlds__make_hlds__add_class__module_declare_class_method_preds_11_p_0(
  MR_Word ClassName_12,
  MR_Word ClassParamVars_13,
  MR_Word TypeClassStatus_14,
  MR_Word ItemMercuryStatus_15,
  MR_Word NeedQual_16,
  MR_Word ClassDecls_17,
  MR_Word * MethodInfos_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32);

static void MR_CALL 
hlds__make_hlds__add_class__classify_class_decls_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_PredOrFuncInfos_0_2,
  MR_Word * STATE_VARIABLE_PredOrFuncInfos_3,
  MR_Word STATE_VARIABLE_ModeDeclMap_0_4,
  MR_Word * STATE_VARIABLE_ModeDeclMap_5);

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


static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_1[37][2];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_2[3][3];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_3[1][11];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_4[1][9];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_5[1][19];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_6[2][7];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_7[3][6];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_8[1][16];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_9[2][5];




static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_1[37][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0))
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
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_mode_info_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_method_info_0))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The superclass constraints do not match."))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_class_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_class_scalar_common_1[5])))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The functional dependencies do not match."))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_class_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_class_scalar_common_1[5])))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_class_scalar_common_1[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "no mode declaration"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_class_scalar_common_1[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for method"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_class_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_class_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_class_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_class_scalar_common_1[19])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "instance"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_class_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_class_scalar_common_1[21])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_class_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_class_scalar_common_1[23])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_class_scalar_common_1[25]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "typeclass"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_class_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_class_scalar_common_1[26])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "corresponding"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_class_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_class_scalar_common_1[28])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "without"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_class_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_class_scalar_common_1[30])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: mode declaration for type class method"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_class_scalar_common_1[31]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a corresponding"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_class_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_class_scalar_common_1[5])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_2[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0)),
    ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_1[3]))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_6[0])),
    ((MR_Box) (hlds__make_hlds__add_class__module_declare_class_method_preds_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_9[1])),
    ((MR_Box) (hlds__make_hlds__add_class__add_instance_defn_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_3[1][11] = {
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
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_4[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_instance_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_5[1][19] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 16)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_pred_status_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_pred_or_func_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__cord__pti_cord_1__plain_hlds__hlds_class__type_ctor_info_method_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__cord__pti_cord_1__plain_hlds__hlds_class__type_ctor_info_method_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0__plain_cord__ti_cord_1parse_tree__prog_item__type_ctor_info_class_mode_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0__plain_cord__ti_cord_1parse_tree__prog_item__type_ctor_info_class_mode_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_6[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_class_mode_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_mode_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_7[3][6] = {
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
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_mode_info_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_8[1][16] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 13)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_pred_status_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_mode_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__cord__pti_cord_1__plain_hlds__hlds_class__type_ctor_info_method_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__cord__pti_cord_1__plain_hlds__hlds_class__type_ctor_info_method_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_9[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   1 */
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


static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__add_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__cord__pti_cord_1__plain_hlds__hlds_class__type_ctor_info_method_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_method_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_class__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_class_mode_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_mode_info_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_class__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0__plain_cord__ti_cord_1parse_tree__prog_item__type_ctor_info_class_mode_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0),
    (MR_PseudoTypeInfo) (&hlds__make_hlds__add_class__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_class_mode_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_class_mode_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_mode_info_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__add_class_mode_decl__495__1_2_p_0(
  MR_Word PredId_17,
  MR_Word PredPredId_37)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_17, PredPredId_37);
  return succeeded;
}

static MR_Word MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__func__add_class_pred_or_func_and_mode_decls__463__1_2_f_0(
  MR_Word MethodPredName_49,
  MR_Word LambdaHeadVar__1_118)
{
  MR_Word LambdaHeadVar__2_119;
  MR_Word MMDContext_80 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_118, 6))));

  LambdaHeadVar__2_119 = hlds__make_hlds__add_pred__report_mode_decl_after_predmode_2_f_0(MethodPredName_49, MMDContext_80);
  return LambdaHeadVar__2_119;
}

static MR_Integer MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__func__convert_vars_to_arg_posns__239__1_2_f_0(
  MR_Word ProgTVars_4,
  MR_Word HeadVar__2_12)
{
  MR_Integer HeadVar__3_13;

  HeadVar__3_13 = mercury__list__det_index1_of_first_occurrence_2_f_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), ProgTVars_4, ((MR_Box) (HeadVar__2_12)));
  return HeadVar__3_13;
}

static void MR_CALL 
hlds__make_hlds__add_class__report_mode_decl_for_undeclared_method_4_p_0(
  MR_Word MethodPredName_5,
  MR_Word ModeInfo_6,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  MR_Word PorF_8 = ((MR_Unsigned) ((MR_hl_field(0, MethodPredName_5, 0))) & (MR_Integer) 1);
  MR_Word SymName_9 = ((MR_Word) ((MR_hl_field(0, MethodPredName_5, 1))));
  MR_Word UserArity_10 = ((MR_Word) ((MR_hl_field(0, MethodPredName_5, 2))));
  MR_Integer UserArityInt_11 = (MR_Integer) (UserArity_10);
  MR_Word NameArity_12;
  MR_Word Context_19;
  MR_Word Pieces_20;
  MR_Word Spec_21;
  MR_String Var_24;
  MR_Word Var_25;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_42;
  MR_Word Var_45;

  Var_24 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_9);
  {
    NameArity_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, NameArity_12, 0) = ((MR_Box) (Var_24));
    MR_hl_field(0, NameArity_12, 1) = ((MR_Box) (UserArityInt_11));
  }
  Context_19 = ((MR_Word) ((MR_hl_field(0, ModeInfo_6, 6))));
  {
    Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 31U));
    MR_hl_field(3, Var_29, 1) = (MR_Box) ((MR_Unsigned) (PorF_8));
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_class_scalar_common_1[33])));
    MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_28));
  }
  {
    Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_34, 1) = ((MR_Box) (NameArity_12));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_32 = parse_tree__error_spec__color_as_subject_1_f_0(Var_33);
  Var_37 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_class_scalar_common_1[34])));
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_29));
    MR_hl_field(1, Var_45, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_class_scalar_common_1[36])));
  }
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_class_scalar_common_1[35])));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_45));
  }
  Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_37, Var_42);
  Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_32, Var_36);
  Pieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_25, Var_31);
  {
    Spec_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_class.report_mode_decl_for_undeclared_method\'/4"));
    MR_hl_field(0, Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(0, Spec_21, 3) = ((MR_Box) (Context_19));
    MR_hl_field(0, Spec_21, 4) = ((MR_Box) (Pieces_20));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_23 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_21));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_22));
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__report_mode_decls_for_undeclared_method_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Specs_23;

  hlds__make_hlds__add_class__report_mode_decl_for_undeclared_method_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_23);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_23));
}

static void MR_CALL 
hlds__make_hlds__add_class__report_mode_decls_for_undeclared_method_4_p_0(
  MR_Word MethodPredName_5,
  MR_Word ModeInfosCord_6,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10)
{
  MR_Word ModeInfos_8;
  MR_Word Var_11;
  MR_Box conv1_STATE_VARIABLE_Specs_10;

  ModeInfos_8 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_mode_info_0), ModeInfosCord_6);
  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_6[1]));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) (hlds__make_hlds__add_class__report_mode_decls_for_undeclared_method_4_p_0_1));
    MR_hl_field(0, Var_11, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_11, 3) = ((MR_Box) (MethodPredName_5));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_mode_info_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[0]), Var_11, ModeInfos_8, ((MR_Box) (STATE_VARIABLE_Specs_0_9)), &conv1_STATE_VARIABLE_Specs_10);
  *STATE_VARIABLE_Specs_10 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_10));
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
  MR_Word ClassName_11 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo_8, 0))));
  MR_Word Types_12 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo_8, 1))));
  MR_Word OriginalTypes_13 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo_8, 2))));
  MR_Word Constraints_14 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo_8, 3))));
  MR_Word InstanceBody0_15 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo_8, 4))));
  MR_Word TVarSet_16 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo_8, 5))));
  MR_Word InstanceModuleName_17 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo_8, 6))));
  MR_Word Context_18 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo_8, 7))));
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
    MR_Word InstanceMethods0_22 = ((MR_Word) ((MR_hl_field(1, InstanceBody0_15, 0))));
    MR_Word InstanceMethods_23;

    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_2[2]), InstanceMethods0_22, &InstanceMethods_23);
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
      MR_hl_field(0, NewInstanceDefn_32, 1) = ((MR_Box) (InstanceStatus_21));
      MR_hl_field(0, NewInstanceDefn_32, 2) = ((MR_Box) (TVarSet_16));
      MR_hl_field(0, NewInstanceDefn_32, 3) = ((MR_Box) (OriginalTypes_13));
      MR_hl_field(0, NewInstanceDefn_32, 4) = ((MR_Box) (Types_12));
      MR_hl_field(0, NewInstanceDefn_32, 5) = ((MR_Box) (Constraints_14));
      MR_hl_field(0, NewInstanceDefn_32, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, NewInstanceDefn_32, 7) = ((MR_Box) (ProofMap_31));
      MR_hl_field(0, NewInstanceDefn_32, 8) = ((MR_Box) (InstanceBody_20));
      MR_hl_field(0, NewInstanceDefn_32, 9) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, NewInstanceDefn_32, 10) = ((MR_Box) (Context_18));
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
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_59;
    MR_Word Var_60;

    {
      Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 26U));
      MR_hl_field(3, Var_57, 1) = ((MR_Box) (ClassId_27));
    }
    {
      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
      MR_hl_field(1, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_55 = parse_tree__error_spec__color_as_subject_1_f_0(Var_56);
    Var_60 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_class_scalar_common_1[32])));
    Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_class_scalar_common_1[5])));
    Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_55, Var_59);
    Pieces_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_class_scalar_common_1[24])), Var_54);
    {
      Spec_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_52, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_class.report_instance_for_undefined_typeclass\'/4"));
      MR_hl_field(0, Spec_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_52, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(0, Spec_52, 3) = ((MR_Box) (Context_18));
      MR_hl_field(0, Spec_52, 4) = ((MR_Box) (Pieces_51));
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

static MR_bool MR_CALL 
hlds__make_hlds__add_class__add_class_mode_decl_13_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__add_class__IntroducedFrom__pred__add_class_mode_decl__495__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_class__add_class_mode_decl_13_p_0(
  MR_Word ItemMercuryStatus_14,
  MR_Word PredStatus_15,
  MR_Word MethodPredName_16,
  MR_Word PredId_17,
  MR_Word ModeInfo_18,
  MR_Integer STATE_VARIABLE_MethodProcNum_0_40,
  MR_Integer * STATE_VARIABLE_MethodProcNum_41,
  MR_Word STATE_VARIABLE_MethodInfosCord_0_42,
  MR_Word * STATE_VARIABLE_MethodInfosCord_43,
  MR_Word STATE_VARIABLE_ModuleInfo_0_44,
  MR_Word * STATE_VARIABLE_ModuleInfo_45,
  MR_Word STATE_VARIABLE_Specs_0_46,
  MR_Word * STATE_VARIABLE_Specs_47)
{
  MR_bool succeeded;
  MR_Word PredOrFunc_23 = ((MR_Unsigned) ((MR_hl_field(0, MethodPredName_16, 0))) & (MR_Integer) 1);
  MR_Word PredSymName_24 = ((MR_Word) ((MR_hl_field(0, MethodPredName_16, 1))));
  MR_Word Modes_28 = ((MR_Word) ((MR_hl_field(0, ModeInfo_18, 2))));
  MR_Word MaybeDetism_30 = ((MR_Word) ((MR_hl_field(0, ModeInfo_18, 4))));
  MR_Word InstVarSet_31 = ((MR_Word) ((MR_hl_field(0, ModeInfo_18, 5))));
  MR_Word Context_32 = ((MR_Word) ((MR_hl_field(0, ModeInfo_18, 6))));
  MR_Word ItemModeDecl_35;
  MR_Word PredProcId_36;
  MR_Word PredPredId_37;
  MR_Word MethodInfo_39;
  MR_Word Var_48;
  MR_Word Var_53;
  MR_Word Var_56;

  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (PredOrFunc_23));
  }
  {
    ItemModeDecl_35 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemModeDecl_35, 0) = ((MR_Box) (PredSymName_24));
    MR_hl_field(0, ItemModeDecl_35, 1) = ((MR_Box) (Var_48));
    MR_hl_field(0, ItemModeDecl_35, 2) = ((MR_Box) (Modes_28));
    MR_hl_field(0, ItemModeDecl_35, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ItemModeDecl_35, 4) = ((MR_Box) (MaybeDetism_30));
    MR_hl_field(0, ItemModeDecl_35, 5) = ((MR_Box) (InstVarSet_31));
    MR_hl_field(0, ItemModeDecl_35, 6) = ((MR_Box) (Context_32));
    MR_hl_field(0, ItemModeDecl_35, 7) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__make_hlds__add_pred__module_add_mode_decl_10_p_0((MR_Integer) 0, (MR_Integer) 1, ItemMercuryStatus_14, PredStatus_15, ItemModeDecl_35, &PredProcId_36, STATE_VARIABLE_ModuleInfo_0_44, STATE_VARIABLE_ModuleInfo_45, STATE_VARIABLE_Specs_0_46, STATE_VARIABLE_Specs_47);
  PredPredId_37 = ((MR_Word) ((MR_hl_field(0, PredProcId_36, 0))));
  {
    Var_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_53, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_9[0]));
    MR_hl_field(0, Var_53, 1) = ((MR_Box) (hlds__make_hlds__add_class__add_class_mode_decl_13_p_0_1));
    MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_53, 3) = ((MR_Box) (PredId_17));
    MR_hl_field(0, Var_53, 4) = ((MR_Box) (PredPredId_37));
  }
  mercury__require__expect_3_p_0(Var_53, (MR_String) "predicate \140hlds.make_hlds.add_class.add_class_mode_decl\'/13", (MR_String) "pred_id mismatch");
  Var_56 = (MR_Word) (STATE_VARIABLE_MethodProcNum_0_40);
  {
    MethodInfo_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MethodInfo_39, 0) = ((MR_Box) (Var_56));
    MR_hl_field(0, MethodInfo_39, 1) = ((MR_Box) (MethodPredName_16));
    MR_hl_field(0, MethodInfo_39, 2) = ((MR_Box) (PredProcId_36));
    MR_hl_field(0, MethodInfo_39, 3) = ((MR_Box) (PredProcId_36));
  }
  *STATE_VARIABLE_MethodProcNum_41 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_MethodProcNum_0_40 + (MR_Unsigned) 1);
  mercury__cord__snoc_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_method_info_0), ((MR_Box) (MethodInfo_39)), STATE_VARIABLE_MethodInfosCord_0_42, STATE_VARIABLE_MethodInfosCord_43);
}

static MR_Box MR_CALL 
hlds__make_hlds__add_class__add_class_pred_or_func_and_mode_decls_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv9_LambdaHeadVar__2_119;

  conv9_LambdaHeadVar__2_119 = hlds__make_hlds__add_class__IntroducedFrom__func__add_class_pred_or_func_and_mode_decls__463__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv9_LambdaHeadVar__2_119));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__add_class__add_class_pred_or_func_and_mode_decls_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Integer conv4_STATE_VARIABLE_MethodProcNum_41;
  MR_Word conv3_STATE_VARIABLE_MethodInfosCord_43;
  MR_Word conv2_STATE_VARIABLE_ModuleInfo_45;
  MR_Word conv1_STATE_VARIABLE_Specs_47;

  hlds__make_hlds__add_class__add_class_mode_decl_13_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv4_STATE_VARIABLE_MethodProcNum_41, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_MethodInfosCord_43, ((MR_Word) (wrapper_arg_6)), &conv2_STATE_VARIABLE_ModuleInfo_45, ((MR_Word) (wrapper_arg_8)), &conv1_STATE_VARIABLE_Specs_47);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_MethodProcNum_41));
  *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_MethodInfosCord_43));
  *wrapper_arg_7 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_45));
  *wrapper_arg_9 = ((MR_Box) (conv1_STATE_VARIABLE_Specs_47));
}

static void MR_CALL 
hlds__make_hlds__add_class__add_class_pred_or_func_and_mode_decls_16_p_0(
  MR_Word ClassName_17,
  MR_Word ClassParamVars_18,
  MR_Word ItemMercuryStatus_19,
  MR_Word PredStatus_20,
  MR_Word NeedQual_21,
  MR_Word PredOrFuncInfo_22,
  MR_Integer STATE_VARIABLE_MethodProcNum_0_82,
  MR_Integer * STATE_VARIABLE_MethodProcNum_83,
  MR_Word STATE_VARIABLE_MethodInfosCord_0_84,
  MR_Word * STATE_VARIABLE_MethodInfosCord_85,
  MR_Word STATE_VARIABLE_ModeDeclMap_0_86,
  MR_Word * STATE_VARIABLE_ModeDeclMap_87,
  MR_Word STATE_VARIABLE_ModuleInfo_0_88,
  MR_Word * STATE_VARIABLE_ModuleInfo_89,
  MR_Word STATE_VARIABLE_Specs_0_90,
  MR_Word * STATE_VARIABLE_Specs_91)
{
  MR_bool succeeded;
  MR_Word PredSymName_28 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo_22, 0))));
  MR_Word PredOrFunc_29 = ((MR_Unsigned) ((MR_hl_field(0, PredOrFuncInfo_22, 1))) & (MR_Integer) 1);
  MR_Word ArgTypesAndMaybeModes_30 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo_22, 2))));
  MR_Word WithType_31 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo_22, 3))));
  MR_Word WithInst_32 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo_22, 4))));
  MR_Word MaybeDetism_33 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo_22, 5))));
  MR_Word TypeVarSet_34 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo_22, 6))));
  MR_Word InstVarSet_35 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo_22, 7))));
  MR_Word ExistQVars_36 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo_22, 8))));
  MR_Word Purity_37 = ((MR_Unsigned) ((MR_hl_field(0, PredOrFuncInfo_22, 9))) & (MR_Integer) 3);
  MR_Word Constraints0_38 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo_22, 10))));
  MR_Word Context_39 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo_22, 11))));
  MR_Word ClassParamTypes_40;
  MR_Word ImplicitConstraint_41;
  MR_Word UnivConstraints0_42;
  MR_Word ExistConstraints_43;
  MR_Word UnivConstraints_44;
  MR_Word Constraints_45;
  MR_Word ClassId_46;
  MR_Word PredFormArity_47;
  MR_Word UserArity_48;
  MR_Word MethodPredName_49;
  MR_Word Origin_50;
  MR_Word Attrs_51;
  MR_Word MaybeAttrs_52;
  MR_Word PredDecl_54;
  MR_Word MaybePredMaybeProcId_55;
  MR_Word Var_92;
  MR_Integer Var_93;
  MR_Word STATE_VARIABLE_ModuleInfo_1_94;
  MR_Word STATE_VARIABLE_Specs_1_95;

  Var_92 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
  parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_92, ClassParamVars_18, &ClassParamTypes_40);
  {
    ImplicitConstraint_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ImplicitConstraint_41, 0) = ((MR_Box) (ClassName_17));
    MR_hl_field(0, ImplicitConstraint_41, 1) = ((MR_Box) (ClassParamTypes_40));
  }
  UnivConstraints0_42 = ((MR_Word) ((MR_hl_field(0, Constraints0_38, 0))));
  ExistConstraints_43 = ((MR_Word) ((MR_hl_field(0, Constraints0_38, 1))));
  {
    UnivConstraints_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, UnivConstraints_44, 0) = ((MR_Box) (ImplicitConstraint_41));
    MR_hl_field(1, UnivConstraints_44, 1) = ((MR_Box) (UnivConstraints0_42));
  }
  {
    Constraints_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Constraints_45, 0) = ((MR_Box) (UnivConstraints_44));
    MR_hl_field(0, Constraints_45, 1) = ((MR_Box) (ExistConstraints_43));
  }
  Var_93 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ClassParamTypes_40);
  {
    ClassId_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ClassId_46, 0) = ((MR_Box) (ClassName_17));
    MR_hl_field(0, ClassId_46, 1) = ((MR_Box) (Var_93));
  }
  PredFormArity_47 = parse_tree__prog_item__types_and_maybe_modes_arity_1_f_0(ArgTypesAndMaybeModes_30);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_29, &UserArity_48, PredFormArity_47);
  {
    MethodPredName_49 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MethodPredName_49, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_29));
    MR_hl_field(0, MethodPredName_49, 1) = ((MR_Box) (PredSymName_28));
    MR_hl_field(0, MethodPredName_49, 2) = ((MR_Box) (UserArity_48));
  }
  {
    Origin_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Origin_50, 0) = ((MR_Box) (ClassId_46));
    MR_hl_field(1, Origin_50, 1) = ((MR_Box) (MethodPredName_49));
  }
  Attrs_51 = (MR_Word) (Origin_50);
  {
    MaybeAttrs_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MaybeAttrs_52, 0) = ((MR_Box) (Attrs_51));
  }
  {
    PredDecl_54 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredDecl_54, 0) = ((MR_Box) (PredSymName_28));
    MR_hl_field(0, PredDecl_54, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_29));
    MR_hl_field(0, PredDecl_54, 2) = ((MR_Box) (ArgTypesAndMaybeModes_30));
    MR_hl_field(0, PredDecl_54, 3) = ((MR_Box) (WithType_31));
    MR_hl_field(0, PredDecl_54, 4) = ((MR_Box) (WithInst_32));
    MR_hl_field(0, PredDecl_54, 5) = ((MR_Box) (MaybeDetism_33));
    MR_hl_field(0, PredDecl_54, 6) = ((MR_Box) (MaybeAttrs_52));
    MR_hl_field(0, PredDecl_54, 7) = ((MR_Box) (TypeVarSet_34));
    MR_hl_field(0, PredDecl_54, 8) = ((MR_Box) (InstVarSet_35));
    MR_hl_field(0, PredDecl_54, 9) = ((MR_Box) (ExistQVars_36));
    MR_hl_field(0, PredDecl_54, 10) = (MR_Box) ((MR_Unsigned) (Purity_37));
    MR_hl_field(0, PredDecl_54, 11) = ((MR_Box) (Constraints_45));
    MR_hl_field(0, PredDecl_54, 12) = ((MR_Box) (Context_39));
    MR_hl_field(0, PredDecl_54, 13) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__make_hlds__add_pred__module_add_pred_decl_9_p_0(ItemMercuryStatus_19, PredStatus_20, NeedQual_21, PredDecl_54, &MaybePredMaybeProcId_55, STATE_VARIABLE_ModuleInfo_0_88, &STATE_VARIABLE_ModuleInfo_1_94, STATE_VARIABLE_Specs_0_90, &STATE_VARIABLE_Specs_1_95);
  if ((MaybePredMaybeProcId_55 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_MethodProcNum_83 = STATE_VARIABLE_MethodProcNum_0_82;
    *STATE_VARIABLE_MethodInfosCord_85 = STATE_VARIABLE_MethodInfosCord_0_84;
    *STATE_VARIABLE_ModeDeclMap_87 = STATE_VARIABLE_ModeDeclMap_0_86;
    *STATE_VARIABLE_ModuleInfo_89 = STATE_VARIABLE_ModuleInfo_1_94;
    *STATE_VARIABLE_Specs_91 = STATE_VARIABLE_Specs_1_95;
  }
  else
  {
    MR_Word PredId_56;
    MR_Word MaybeProcId_57;
    MR_Word MethodModeDecls_59;
    MR_Word Var_96 = ((MR_Word) ((MR_hl_field(1, MaybePredMaybeProcId_55, 0))));
    MR_Word MethodModeDeclsCord_58;
    MR_Word STATE_VARIABLE_ModeDeclMap_1_97;
    MR_Box conv0_MethodModeDeclsCord_58;

    PredId_56 = ((MR_Word) ((MR_hl_field(0, Var_96, 0))));
    MaybeProcId_57 = ((MR_Word) ((MR_hl_field(0, Var_96, 1))));
    succeeded = mercury__map__remove_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[3]), ((MR_Box) (MethodPredName_49)), &conv0_MethodModeDeclsCord_58, STATE_VARIABLE_ModeDeclMap_0_86, &STATE_VARIABLE_ModeDeclMap_1_97);
    if (succeeded)
    {
      MethodModeDeclsCord_58 = ((MR_Word) (conv0_MethodModeDeclsCord_58));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *STATE_VARIABLE_ModeDeclMap_87 = STATE_VARIABLE_ModeDeclMap_1_97;
      MethodModeDecls_59 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_mode_info_0), MethodModeDeclsCord_58);
    }
    else
    {
      MethodModeDecls_59 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_ModeDeclMap_87 = STATE_VARIABLE_ModeDeclMap_0_86;
    }
    if ((MaybeProcId_57 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((MethodModeDecls_59 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word PredInfo0_60;

        hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_1_94, PredId_56, &PredInfo0_60);
        switch (PredOrFunc_29) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word PredInfo_61;
              MR_Word MaybeFuncProcId_62;

              hlds__default_func_mode__maybe_add_default_func_mode_4_p_0(STATE_VARIABLE_ModuleInfo_1_94, PredInfo0_60, &PredInfo_61, &MaybeFuncProcId_62);
              if ((MaybeFuncProcId_62 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_class.add_class_pred_or_func_and_mode_decls\'/16", (MR_String) "maybe_add_default_func_mode did not add proc");
                  return;
                }
              else
              {
                MR_Integer FuncProcId_63 = ((MR_Integer) ((MR_hl_field(1, MaybeFuncProcId_62, 0))));
                MR_Word PredProcId_64;
                MR_Word MethodInfo_65;
                MR_Word Var_102;

                hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_56, PredInfo_61, STATE_VARIABLE_ModuleInfo_1_94, STATE_VARIABLE_ModuleInfo_89);
                {
                  PredProcId_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, PredProcId_64, 0) = ((MR_Box) (PredId_56));
                  MR_hl_field(0, PredProcId_64, 1) = ((MR_Box) (FuncProcId_63));
                }
                Var_102 = (MR_Word) (STATE_VARIABLE_MethodProcNum_0_82);
                {
                  MethodInfo_65 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, MethodInfo_65, 0) = ((MR_Box) (Var_102));
                  MR_hl_field(0, MethodInfo_65, 1) = ((MR_Box) (MethodPredName_49));
                  MR_hl_field(0, MethodInfo_65, 2) = ((MR_Box) (PredProcId_64));
                  MR_hl_field(0, MethodInfo_65, 3) = ((MR_Box) (PredProcId_64));
                }
                *STATE_VARIABLE_MethodProcNum_83 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_MethodProcNum_0_82 + (MR_Unsigned) 1);
                mercury__cord__snoc_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_method_info_0), ((MR_Box) (MethodInfo_65)), STATE_VARIABLE_MethodInfosCord_0_84, STATE_VARIABLE_MethodInfosCord_85);
              }
              *STATE_VARIABLE_Specs_91 = STATE_VARIABLE_Specs_1_95;
            }
            break;
          case (MR_Integer) 0:
            {
              hlds__make_hlds__add_class__pred_method_with_no_modes_error_3_p_0(PredInfo0_60, STATE_VARIABLE_Specs_1_95, STATE_VARIABLE_Specs_91);
              *STATE_VARIABLE_MethodProcNum_83 = STATE_VARIABLE_MethodProcNum_0_82;
              *STATE_VARIABLE_MethodInfosCord_85 = STATE_VARIABLE_MethodInfosCord_0_84;
              *STATE_VARIABLE_ModuleInfo_89 = STATE_VARIABLE_ModuleInfo_1_94;
            }
            break;
        }
      }
      else
      {
        MR_Word Var_108;
        MR_Box conv8_STATE_VARIABLE_MethodProcNum_83;
        MR_Box conv7_STATE_VARIABLE_MethodInfosCord_85;
        MR_Box conv6_STATE_VARIABLE_ModuleInfo_89;
        MR_Box conv5_STATE_VARIABLE_Specs_91;

        {
          Var_108 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_108, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_8[0]));
          MR_hl_field(0, Var_108, 1) = ((MR_Box) (hlds__make_hlds__add_class__add_class_pred_or_func_and_mode_decls_16_p_0_1));
          MR_hl_field(0, Var_108, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(0, Var_108, 3) = ((MR_Box) (ItemMercuryStatus_19));
          MR_hl_field(0, Var_108, 4) = ((MR_Box) (PredStatus_20));
          MR_hl_field(0, Var_108, 5) = ((MR_Box) (MethodPredName_49));
          MR_hl_field(0, Var_108, 6) = ((MR_Box) (PredId_56));
        }
        mercury__list__foldl4_10_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_mode_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[4]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[0]), Var_108, MethodModeDecls_59, ((MR_Box) (STATE_VARIABLE_MethodProcNum_0_82)), &conv8_STATE_VARIABLE_MethodProcNum_83, ((MR_Box) (STATE_VARIABLE_MethodInfosCord_0_84)), &conv7_STATE_VARIABLE_MethodInfosCord_85, ((MR_Box) (STATE_VARIABLE_ModuleInfo_1_94)), &conv6_STATE_VARIABLE_ModuleInfo_89, ((MR_Box) (STATE_VARIABLE_Specs_1_95)), &conv5_STATE_VARIABLE_Specs_91);
        *STATE_VARIABLE_MethodProcNum_83 = ((MR_Integer) (conv8_STATE_VARIABLE_MethodProcNum_83));
        *STATE_VARIABLE_MethodInfosCord_85 = ((MR_Word) (conv7_STATE_VARIABLE_MethodInfosCord_85));
        *STATE_VARIABLE_ModuleInfo_89 = ((MR_Word) (conv6_STATE_VARIABLE_ModuleInfo_89));
        *STATE_VARIABLE_Specs_91 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_91));
      }
    else
    {
      MR_Integer ProcId_68 = ((MR_Integer) ((MR_hl_field(1, MaybeProcId_57, 0))));
      MR_Word Var_113;
      MR_Word PredProcId_122;
      MR_Word MethodInfo_123;

      {
        PredProcId_122 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredProcId_122, 0) = ((MR_Box) (PredId_56));
        MR_hl_field(0, PredProcId_122, 1) = ((MR_Box) (ProcId_68));
      }
      Var_113 = (MR_Word) (STATE_VARIABLE_MethodProcNum_0_82);
      {
        MethodInfo_123 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MethodInfo_123, 0) = ((MR_Box) (Var_113));
        MR_hl_field(0, MethodInfo_123, 1) = ((MR_Box) (MethodPredName_49));
        MR_hl_field(0, MethodInfo_123, 2) = ((MR_Box) (PredProcId_122));
        MR_hl_field(0, MethodInfo_123, 3) = ((MR_Box) (PredProcId_122));
      }
      *STATE_VARIABLE_MethodProcNum_83 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_MethodProcNum_0_82 + (MR_Unsigned) 1);
      mercury__cord__snoc_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_method_info_0), ((MR_Box) (MethodInfo_123)), STATE_VARIABLE_MethodInfosCord_0_84, STATE_VARIABLE_MethodInfosCord_85);
      if ((MethodModeDecls_59 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Specs_91 = STATE_VARIABLE_Specs_1_95;
      else
      {
        MR_Word ReportBadModeDecl_71;
        MR_Word BadModeDeclSpecs_81;

        {
          ReportBadModeDecl_71 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ReportBadModeDecl_71, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_7[2]));
          MR_hl_field(0, ReportBadModeDecl_71, 1) = ((MR_Box) (hlds__make_hlds__add_class__add_class_pred_or_func_and_mode_decls_16_p_0_2));
          MR_hl_field(0, ReportBadModeDecl_71, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, ReportBadModeDecl_71, 3) = ((MR_Box) (MethodPredName_49));
        }
        BadModeDeclSpecs_81 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_mode_info_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ReportBadModeDecl_71, MethodModeDecls_59);
        *STATE_VARIABLE_Specs_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), BadModeDeclSpecs_81, STATE_VARIABLE_Specs_1_95);
      }
      *STATE_VARIABLE_ModuleInfo_89 = STATE_VARIABLE_ModuleInfo_1_94;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__pred_method_with_no_modes_error_3_p_0(
  MR_Word PredInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  MR_Word PorF_6;
  MR_String Name_7;
  MR_Integer UserArityInt_8;
  MR_Word NameArity_9;
  MR_Word Context_10;
  MR_Word Pieces_11;
  MR_Word Spec_12;
  MR_Word Var_15;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;

  PorF_6 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_4);
  Name_7 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_4);
  Var_15 = hlds__hlds_pred__pred_info_user_arity_1_f_0(PredInfo_4);
  UserArityInt_8 = (MR_Integer) (Var_15);
  {
    NameArity_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, NameArity_9, 0) = ((MR_Box) (Name_7));
    MR_hl_field(0, NameArity_9, 1) = ((MR_Box) (UserArityInt_8));
  }
  hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_4, &Context_10);
  Var_21 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_class_scalar_common_1[14])));
  {
    Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 31U));
    MR_hl_field(3, Var_31, 1) = (MR_Box) ((MR_Unsigned) (PorF_6));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_class_scalar_common_1[15])));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_30));
  }
  {
    Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_36, 1) = ((MR_Box) (NameArity_9));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_class_scalar_common_1[17])));
  }
  Var_34 = parse_tree__error_spec__color_as_subject_1_f_0(Var_35);
  Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_34, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_class_scalar_common_1[5])));
  Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_33);
  Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_21, Var_26);
  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_class_scalar_common_1[12])), Var_20);
  {
    Spec_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_12, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_class.pred_method_with_no_modes_error\'/3"));
    MR_hl_field(0, Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(0, Spec_12, 3) = ((MR_Box) (Context_10));
    MR_hl_field(0, Spec_12, 4) = ((MR_Box) (Pieces_11));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_14 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_12));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_13));
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_class__make_hlds_fundep_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__3_13;

  conv0_HeadVar__3_13 = hlds__make_hlds__add_class__IntroducedFrom__func__convert_vars_to_arg_posns__239__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_13));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
hlds__make_hlds__add_class__make_hlds_fundep_2_f_0(
  MR_Word TVars_4,
  MR_Word ProgFunDep_5)
{
  MR_Word HLDSFunDep_6;
  MR_Word ProgDomain_7 = ((MR_Word) ((MR_hl_field(0, ProgFunDep_5, 0))));
  MR_Word ProgRange_8 = ((MR_Word) ((MR_hl_field(0, ProgFunDep_5, 1))));
  MR_Word HLDSDomain_9;
  MR_Word HLDSRange_10;
  MR_Word HLDSTVars_11;
  MR_Word ArgPosns_12;
  MR_Word Var_13;
  MR_Word HLDSTVars_16;
  MR_Word ArgPosns_17;

  HLDSTVars_11 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), ProgDomain_7);
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_7[1]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (hlds__make_hlds__add_class__make_hlds_fundep_2_f_0_1));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (TVars_4));
  }
  ArgPosns_12 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_13, HLDSTVars_11);
  mercury__set__list_to_set_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArgPosns_12, &HLDSDomain_9);
  HLDSTVars_16 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), ProgRange_8);
  ArgPosns_17 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_13, HLDSTVars_16);
  mercury__set__list_to_set_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArgPosns_17, &HLDSRange_10);
  {
    HLDSFunDep_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HLDSFunDep_6, 0) = ((MR_Box) (HLDSDomain_9));
    MR_hl_field(0, HLDSFunDep_6, 1) = ((MR_Box) (HLDSRange_10));
  }
  return HLDSFunDep_6;
}

static MR_Box MR_CALL 
hlds__make_hlds__add_class__add_typeclass_defn_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HLDSFunDep_6;

  conv0_HLDSFunDep_6 = hlds__make_hlds__add_class__make_hlds_fundep_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HLDSFunDep_6));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__add_class__add_typeclass_defn_8_p_0(
  MR_Word ItemMercuryStatus_9,
  MR_Word TypeClassStatus0_10,
  MR_Word NeedQual_11,
  MR_Word ItemTypeClassInfo_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_67,
  MR_Word * STATE_VARIABLE_ModuleInfo_68,
  MR_Word STATE_VARIABLE_Specs_0_69,
  MR_Word * STATE_VARIABLE_Specs_70)
{
  MR_bool succeeded;
  MR_Word ClassName_15 = ((MR_Word) ((MR_hl_field(0, ItemTypeClassInfo_12, 0))));
  MR_Word ClassParamTVars_16 = ((MR_Word) ((MR_hl_field(0, ItemTypeClassInfo_12, 1))));
  MR_Word Constraints_17 = ((MR_Word) ((MR_hl_field(0, ItemTypeClassInfo_12, 2))));
  MR_Word FunDeps_18 = ((MR_Word) ((MR_hl_field(0, ItemTypeClassInfo_12, 3))));
  MR_Word Interface_19 = ((MR_Word) ((MR_hl_field(0, ItemTypeClassInfo_12, 4))));
  MR_Word VarSet_20 = ((MR_Word) ((MR_hl_field(0, ItemTypeClassInfo_12, 5))));
  MR_Word Context_21 = ((MR_Word) ((MR_hl_field(0, ItemTypeClassInfo_12, 6))));
  MR_Word ClassTable0_23;
  MR_Integer ClassArity_24;
  MR_Word ClassId_25;
  MR_Word HLDSFunDeps_28;
  MR_Word Var_71;

  hlds__hlds_module__module_info_get_class_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_67, &ClassTable0_23);
  mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), ClassParamTVars_16, &ClassArity_24);
  {
    ClassId_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ClassId_25, 0) = ((MR_Box) (ClassName_15));
    MR_hl_field(0, ClassId_25, 1) = ((MR_Box) (ClassArity_24));
  }
  {
    Var_71 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_71, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_7[0]));
    MR_hl_field(0, Var_71, 1) = ((MR_Box) (hlds__make_hlds__add_class__add_typeclass_defn_8_p_0_1));
    MR_hl_field(0, Var_71, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_71, 3) = ((MR_Box) (ClassParamTVars_16));
  }
  HLDSFunDeps_28 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0), Var_71, FunDeps_18);
  if ((Interface_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word TypeClassStatus1_26;
    MR_Word OldDefn_29;
    MR_Box conv1_OldDefn_29;

    hlds__status__typeclass_make_status_abstract_2_p_0(TypeClassStatus0_10, &TypeClassStatus1_26);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable0_23, ((MR_Box) (ClassId_25)), &conv1_OldDefn_29);
    if (succeeded)
    {
      OldDefn_29 = ((MR_Word) (conv1_OldDefn_29));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word OldTypeClassStatus_30 = ((MR_Word) ((MR_hl_field(0, OldDefn_29, 0))));
      MR_Word OldVarSet_31 = ((MR_Word) ((MR_hl_field(0, OldDefn_29, 1))));
      MR_Word OldClassParamTVars_33 = ((MR_Word) ((MR_hl_field(0, OldDefn_29, 3))));
      MR_Word OldConstraints_34 = ((MR_Word) ((MR_hl_field(0, OldDefn_29, 4))));
      MR_Word OldFunDeps_35 = ((MR_Word) ((MR_hl_field(0, OldDefn_29, 5))));
      MR_Word OldInterface_37 = ((MR_Word) ((MR_hl_field(0, OldDefn_29, 7))));
      MR_Word OldClassMethodPredProcIds0_38 = ((MR_Word) ((MR_hl_field(0, OldDefn_29, 8))));
      MR_Word OldContext_39 = ((MR_Word) ((MR_hl_field(0, OldDefn_29, 9))));
      MR_Word TypeClassStatus_41;
      MR_Word OldClassMethodPredProcIds_43;
      MR_Word ClassInterface_44;
      MR_Word SuperClassMismatchPieces_45;
      MR_Word FunDepsMismatchPieces_46;
      MR_Word MismatchPieces_47;

      hlds__status__typeclass_combine_status_3_p_0(TypeClassStatus1_26, OldTypeClassStatus_30, &TypeClassStatus_41);
      if ((OldInterface_37 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        OldClassMethodPredProcIds_43 = (MR_Word) ((MR_Unsigned) 0U);
        ClassInterface_44 = Interface_19;
      }
      else
      {
        OldClassMethodPredProcIds_43 = OldClassMethodPredProcIds0_38;
        ClassInterface_44 = OldInterface_37;
      }
      succeeded = check_hlds__check_typeclass__constraints_are_identical_6_p_0(OldClassParamTVars_33, OldVarSet_31, OldConstraints_34, ClassParamTVars_16, VarSet_20, Constraints_17);
      if (succeeded)
        SuperClassMismatchPieces_45 = (MR_Word) ((MR_Unsigned) 0U);
      else
        SuperClassMismatchPieces_45 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_class_scalar_common_1[7]));
      succeeded = hlds__make_hlds__add_class__class_fundeps_are_identical_2_p_0(OldFunDeps_35, HLDSFunDeps_28);
      if (succeeded)
        FunDepsMismatchPieces_46 = (MR_Word) ((MR_Unsigned) 0U);
      else
        FunDepsMismatchPieces_46 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_class_scalar_common_1[9]));
      MismatchPieces_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SuperClassMismatchPieces_45, FunDepsMismatchPieces_46);
      if ((MismatchPieces_47 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Kinds_65;
        MR_Word ClassDefn_66;
        MR_Word ClassTable_97;

        *STATE_VARIABLE_Specs_70 = STATE_VARIABLE_Specs_0_69;
        Kinds_65 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
        {
          ClassDefn_66 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ClassDefn_66, 0) = ((MR_Box) (TypeClassStatus_41));
          MR_hl_field(0, ClassDefn_66, 1) = ((MR_Box) (VarSet_20));
          MR_hl_field(0, ClassDefn_66, 2) = ((MR_Box) (Kinds_65));
          MR_hl_field(0, ClassDefn_66, 3) = ((MR_Box) (ClassParamTVars_16));
          MR_hl_field(0, ClassDefn_66, 4) = ((MR_Box) (Constraints_17));
          MR_hl_field(0, ClassDefn_66, 5) = ((MR_Box) (HLDSFunDeps_28));
          MR_hl_field(0, ClassDefn_66, 6) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, ClassDefn_66, 7) = ((MR_Box) (ClassInterface_44));
          MR_hl_field(0, ClassDefn_66, 8) = ((MR_Box) (OldClassMethodPredProcIds_43));
          MR_hl_field(0, ClassDefn_66, 9) = ((MR_Box) (Context_21));
          MR_hl_field(0, ClassDefn_66, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ((MR_Box) (ClassId_25)), ((MR_Box) (ClassDefn_66)), ClassTable0_23, &ClassTable_97);
        hlds__hlds_module__module_info_set_class_table_3_p_0(ClassTable_97, STATE_VARIABLE_ModuleInfo_0_67, STATE_VARIABLE_ModuleInfo_68);
      }
      else
      {
        MR_Word UserArity_55 = (MR_Word) (ClassArity_24);
        MR_Word Spec_96;

        hlds__make_hlds_error__report_multiply_defined_7_p_0((MR_String) "typeclass", ClassName_15, UserArity_55, Context_21, OldContext_39, MismatchPieces_47, &Spec_96);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_70 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_96));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_69));
        }
        *STATE_VARIABLE_ModuleInfo_68 = STATE_VARIABLE_ModuleInfo_0_67;
      }
    }
    else
    {
      MR_Word Instances0_56;
      MR_Word Instances_57;
      MR_Word Kinds_498;
      MR_Word ClassDefn_499;
      MR_Word STATE_VARIABLE_ModuleInfo_1_501;
      MR_Word ClassTable_503;

      hlds__hlds_module__module_info_get_instance_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_67, &Instances0_56);
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[2]), ((MR_Box) (ClassId_25)), ((MR_Box) ((MR_Unsigned) 0U)), Instances0_56, &Instances_57);
      hlds__hlds_module__module_info_set_instance_table_3_p_0(Instances_57, STATE_VARIABLE_ModuleInfo_0_67, &STATE_VARIABLE_ModuleInfo_1_501);
      *STATE_VARIABLE_Specs_70 = STATE_VARIABLE_Specs_0_69;
      Kinds_498 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
      {
        ClassDefn_499 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ClassDefn_499, 0) = ((MR_Box) (TypeClassStatus1_26));
        MR_hl_field(0, ClassDefn_499, 1) = ((MR_Box) (VarSet_20));
        MR_hl_field(0, ClassDefn_499, 2) = ((MR_Box) (Kinds_498));
        MR_hl_field(0, ClassDefn_499, 3) = ((MR_Box) (ClassParamTVars_16));
        MR_hl_field(0, ClassDefn_499, 4) = ((MR_Box) (Constraints_17));
        MR_hl_field(0, ClassDefn_499, 5) = ((MR_Box) (HLDSFunDeps_28));
        MR_hl_field(0, ClassDefn_499, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, ClassDefn_499, 7) = ((MR_Box) (Interface_19));
        MR_hl_field(0, ClassDefn_499, 8) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, ClassDefn_499, 9) = ((MR_Box) (Context_21));
        MR_hl_field(0, ClassDefn_499, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ((MR_Box) (ClassId_25)), ((MR_Box) (ClassDefn_499)), ClassTable0_23, &ClassTable_503);
      hlds__hlds_module__module_info_set_class_table_3_p_0(ClassTable_503, STATE_VARIABLE_ModuleInfo_1_501, STATE_VARIABLE_ModuleInfo_68);
    }
  }
  else
  {
    MR_Word Var_372 = ((MR_Word) ((MR_hl_field(1, Interface_19, 0))));
    MR_Word OldDefn_219;
    MR_Box conv2_OldDefn_219;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable0_23, ((MR_Box) (ClassId_25)), &conv2_OldDefn_219);
    if (succeeded)
    {
      OldDefn_219 = ((MR_Word) (conv2_OldDefn_219));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word OldTypeClassStatus_189 = ((MR_Word) ((MR_hl_field(0, OldDefn_219, 0))));
      MR_Word OldVarSet_190 = ((MR_Word) ((MR_hl_field(0, OldDefn_219, 1))));
      MR_Word OldClassParamTVars_192 = ((MR_Word) ((MR_hl_field(0, OldDefn_219, 3))));
      MR_Word OldConstraints_193 = ((MR_Word) ((MR_hl_field(0, OldDefn_219, 4))));
      MR_Word OldFunDeps_194 = ((MR_Word) ((MR_hl_field(0, OldDefn_219, 5))));
      MR_Word OldInterface_196 = ((MR_Word) ((MR_hl_field(0, OldDefn_219, 7))));
      MR_Word OldContext_198 = ((MR_Word) ((MR_hl_field(0, OldDefn_219, 9))));
      MR_Word SuperClassMismatchPieces_200;
      MR_Word FunDepsMismatchPieces_201;
      MR_Word MismatchPieces_202;
      MR_Word TypeClassStatus_422;
      MR_Word ClassInterface_424;

      hlds__status__typeclass_combine_status_3_p_0(TypeClassStatus0_10, OldTypeClassStatus_189, &TypeClassStatus_422);
      if ((OldInterface_196 == (MR_Word) ((MR_Unsigned) 0U)))
        ClassInterface_424 = Interface_19;
      else
        ClassInterface_424 = OldInterface_196;
      succeeded = check_hlds__check_typeclass__constraints_are_identical_6_p_0(OldClassParamTVars_192, OldVarSet_190, OldConstraints_193, ClassParamTVars_16, VarSet_20, Constraints_17);
      if (succeeded)
        SuperClassMismatchPieces_200 = (MR_Word) ((MR_Unsigned) 0U);
      else
        SuperClassMismatchPieces_200 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_class_scalar_common_1[7]));
      succeeded = hlds__make_hlds__add_class__class_fundeps_are_identical_2_p_0(OldFunDeps_194, HLDSFunDeps_28);
      if (succeeded)
        FunDepsMismatchPieces_201 = (MR_Word) ((MR_Unsigned) 0U);
      else
        FunDepsMismatchPieces_201 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_class_scalar_common_1[9]));
      MismatchPieces_202 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SuperClassMismatchPieces_200, FunDepsMismatchPieces_201);
      if ((MismatchPieces_202 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word HasIncompatibility_432;
        MR_Word STATE_VARIABLE_Specs_1_444;

        succeeded = (Interface_19 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (OldInterface_196 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          MR_Word OldImportStatus_164 = (MR_Word) (TypeClassStatus_422);

          succeeded = (OldImportStatus_164 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            STATE_VARIABLE_Specs_1_444 = STATE_VARIABLE_Specs_0_69;
          else
          {
            MR_Word Spec_156;
            MR_Word Var_158 = (MR_Word) (ClassArity_24);

            hlds__make_hlds_error__report_multiply_defined_7_p_0((MR_String) "typeclass", ClassName_15, Var_158, Context_21, OldContext_198, (MR_Word) ((MR_Unsigned) 0U), &Spec_156);
            {
              STATE_VARIABLE_Specs_1_444 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_Specs_1_444, 0) = ((MR_Box) (Spec_156));
              MR_hl_field(1, STATE_VARIABLE_Specs_1_444, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_69));
            }
          }
          {
            HasIncompatibility_432 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HasIncompatibility_432, 0) = ((MR_Box) (OldDefn_219));
          }
        }
        else
        {
          HasIncompatibility_432 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_Specs_1_444 = STATE_VARIABLE_Specs_0_69;
        }
        if ((HasIncompatibility_432 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word ClassMethodPredProcIds_268;
          MR_Word Kinds_270;
          MR_Word ClassDefn_271;
          MR_Word STATE_VARIABLE_ModuleInfo_3_272;
          MR_Word ClassTable_274;

          hlds__make_hlds__add_class__module_declare_class_method_preds_11_p_0(ClassName_15, ClassParamTVars_16, TypeClassStatus_422, ItemMercuryStatus_9, NeedQual_11, Var_372, &ClassMethodPredProcIds_268, STATE_VARIABLE_ModuleInfo_0_67, &STATE_VARIABLE_ModuleInfo_3_272, STATE_VARIABLE_Specs_1_444, STATE_VARIABLE_Specs_70);
          Kinds_270 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
          {
            ClassDefn_271 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ClassDefn_271, 0) = ((MR_Box) (TypeClassStatus_422));
            MR_hl_field(0, ClassDefn_271, 1) = ((MR_Box) (VarSet_20));
            MR_hl_field(0, ClassDefn_271, 2) = ((MR_Box) (Kinds_270));
            MR_hl_field(0, ClassDefn_271, 3) = ((MR_Box) (ClassParamTVars_16));
            MR_hl_field(0, ClassDefn_271, 4) = ((MR_Box) (Constraints_17));
            MR_hl_field(0, ClassDefn_271, 5) = ((MR_Box) (HLDSFunDeps_28));
            MR_hl_field(0, ClassDefn_271, 6) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, ClassDefn_271, 7) = ((MR_Box) (ClassInterface_424));
            MR_hl_field(0, ClassDefn_271, 8) = ((MR_Box) (ClassMethodPredProcIds_268));
            MR_hl_field(0, ClassDefn_271, 9) = ((MR_Box) (Context_21));
            MR_hl_field(0, ClassDefn_271, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
          mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ((MR_Box) (ClassId_25)), ((MR_Box) (ClassDefn_271)), ClassTable0_23, &ClassTable_274);
          hlds__hlds_module__module_info_set_class_table_3_p_0(ClassTable_274, STATE_VARIABLE_ModuleInfo_3_272, STATE_VARIABLE_ModuleInfo_68);
        }
        else
        {
          MR_Word BadDefn_301;
          MR_Word ClassTable_302;
          MR_Word BaseDefn_317 = ((MR_Word) ((MR_hl_field(1, HasIncompatibility_432, 0))));
          MR_Word Var_279 = ((MR_Word) ((MR_hl_field(0, BaseDefn_317, 0))));
          MR_Word Var_280 = ((MR_Word) ((MR_hl_field(0, BaseDefn_317, 1))));
          MR_Word Var_281 = ((MR_Word) ((MR_hl_field(0, BaseDefn_317, 2))));
          MR_Word Var_282 = ((MR_Word) ((MR_hl_field(0, BaseDefn_317, 3))));
          MR_Word Var_283 = ((MR_Word) ((MR_hl_field(0, BaseDefn_317, 4))));
          MR_Word Var_284 = ((MR_Word) ((MR_hl_field(0, BaseDefn_317, 5))));
          MR_Word Var_285 = ((MR_Word) ((MR_hl_field(0, BaseDefn_317, 6))));
          MR_Word Var_286 = ((MR_Word) ((MR_hl_field(0, BaseDefn_317, 7))));
          MR_Word Var_287 = ((MR_Word) ((MR_hl_field(0, BaseDefn_317, 8))));
          MR_Word Var_288 = ((MR_Word) ((MR_hl_field(0, BaseDefn_317, 9))));

          {
            BadDefn_301 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, BadDefn_301, 0) = ((MR_Box) (Var_279));
            MR_hl_field(0, BadDefn_301, 1) = ((MR_Box) (Var_280));
            MR_hl_field(0, BadDefn_301, 2) = ((MR_Box) (Var_281));
            MR_hl_field(0, BadDefn_301, 3) = ((MR_Box) (Var_282));
            MR_hl_field(0, BadDefn_301, 4) = ((MR_Box) (Var_283));
            MR_hl_field(0, BadDefn_301, 5) = ((MR_Box) (Var_284));
            MR_hl_field(0, BadDefn_301, 6) = ((MR_Box) (Var_285));
            MR_hl_field(0, BadDefn_301, 7) = ((MR_Box) (Var_286));
            MR_hl_field(0, BadDefn_301, 8) = ((MR_Box) (Var_287));
            MR_hl_field(0, BadDefn_301, 9) = ((MR_Box) (Var_288));
            MR_hl_field(0, BadDefn_301, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ((MR_Box) (ClassId_25)), ((MR_Box) (BadDefn_301)), ClassTable0_23, &ClassTable_302);
          hlds__hlds_module__module_info_set_class_table_3_p_0(ClassTable_302, STATE_VARIABLE_ModuleInfo_0_67, STATE_VARIABLE_ModuleInfo_68);
          *STATE_VARIABLE_Specs_70 = STATE_VARIABLE_Specs_1_444;
        }
      }
      else
      {
        MR_Word UserArity_176 = (MR_Word) (ClassArity_24);
        MR_Word Spec_178;
        MR_Word BadDefn_563;
        MR_Word ClassTable_564;
        MR_Word Var_531;
        MR_Word Var_532;
        MR_Word Var_533;
        MR_Word Var_534;
        MR_Word Var_535;
        MR_Word Var_536;
        MR_Word Var_537;
        MR_Word Var_538;
        MR_Word Var_539;
        MR_Word Var_540;

        hlds__make_hlds_error__report_multiply_defined_7_p_0((MR_String) "typeclass", ClassName_15, UserArity_176, Context_21, OldContext_198, MismatchPieces_202, &Spec_178);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_70 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_178));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_69));
        }
        Var_531 = ((MR_Word) ((MR_hl_field(0, OldDefn_219, 0))));
        Var_532 = ((MR_Word) ((MR_hl_field(0, OldDefn_219, 1))));
        Var_533 = ((MR_Word) ((MR_hl_field(0, OldDefn_219, 2))));
        Var_534 = ((MR_Word) ((MR_hl_field(0, OldDefn_219, 3))));
        Var_535 = ((MR_Word) ((MR_hl_field(0, OldDefn_219, 4))));
        Var_536 = ((MR_Word) ((MR_hl_field(0, OldDefn_219, 5))));
        Var_537 = ((MR_Word) ((MR_hl_field(0, OldDefn_219, 6))));
        Var_538 = ((MR_Word) ((MR_hl_field(0, OldDefn_219, 7))));
        Var_539 = ((MR_Word) ((MR_hl_field(0, OldDefn_219, 8))));
        Var_540 = ((MR_Word) ((MR_hl_field(0, OldDefn_219, 9))));
        {
          BadDefn_563 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, BadDefn_563, 0) = ((MR_Box) (Var_531));
          MR_hl_field(0, BadDefn_563, 1) = ((MR_Box) (Var_532));
          MR_hl_field(0, BadDefn_563, 2) = ((MR_Box) (Var_533));
          MR_hl_field(0, BadDefn_563, 3) = ((MR_Box) (Var_534));
          MR_hl_field(0, BadDefn_563, 4) = ((MR_Box) (Var_535));
          MR_hl_field(0, BadDefn_563, 5) = ((MR_Box) (Var_536));
          MR_hl_field(0, BadDefn_563, 6) = ((MR_Box) (Var_537));
          MR_hl_field(0, BadDefn_563, 7) = ((MR_Box) (Var_538));
          MR_hl_field(0, BadDefn_563, 8) = ((MR_Box) (Var_539));
          MR_hl_field(0, BadDefn_563, 9) = ((MR_Box) (Var_540));
          MR_hl_field(0, BadDefn_563, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ((MR_Box) (ClassId_25)), ((MR_Box) (BadDefn_563)), ClassTable0_23, &ClassTable_564);
        hlds__hlds_module__module_info_set_class_table_3_p_0(ClassTable_564, STATE_VARIABLE_ModuleInfo_0_67, STATE_VARIABLE_ModuleInfo_68);
      }
    }
    else
    {
      MR_Word Instances0_214;
      MR_Word Instances_215;
      MR_Word ClassMethodPredProcIds_513;
      MR_Word Kinds_515;
      MR_Word ClassDefn_516;
      MR_Word STATE_VARIABLE_ModuleInfo_3_517;
      MR_Word ClassTable_519;
      MR_Word STATE_VARIABLE_ModuleInfo_1_527;

      hlds__hlds_module__module_info_get_instance_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_67, &Instances0_214);
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[2]), ((MR_Box) (ClassId_25)), ((MR_Box) ((MR_Unsigned) 0U)), Instances0_214, &Instances_215);
      hlds__hlds_module__module_info_set_instance_table_3_p_0(Instances_215, STATE_VARIABLE_ModuleInfo_0_67, &STATE_VARIABLE_ModuleInfo_1_527);
      hlds__make_hlds__add_class__module_declare_class_method_preds_11_p_0(ClassName_15, ClassParamTVars_16, TypeClassStatus0_10, ItemMercuryStatus_9, NeedQual_11, Var_372, &ClassMethodPredProcIds_513, STATE_VARIABLE_ModuleInfo_1_527, &STATE_VARIABLE_ModuleInfo_3_517, STATE_VARIABLE_Specs_0_69, STATE_VARIABLE_Specs_70);
      Kinds_515 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
      {
        ClassDefn_516 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ClassDefn_516, 0) = ((MR_Box) (TypeClassStatus0_10));
        MR_hl_field(0, ClassDefn_516, 1) = ((MR_Box) (VarSet_20));
        MR_hl_field(0, ClassDefn_516, 2) = ((MR_Box) (Kinds_515));
        MR_hl_field(0, ClassDefn_516, 3) = ((MR_Box) (ClassParamTVars_16));
        MR_hl_field(0, ClassDefn_516, 4) = ((MR_Box) (Constraints_17));
        MR_hl_field(0, ClassDefn_516, 5) = ((MR_Box) (HLDSFunDeps_28));
        MR_hl_field(0, ClassDefn_516, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, ClassDefn_516, 7) = ((MR_Box) (Interface_19));
        MR_hl_field(0, ClassDefn_516, 8) = ((MR_Box) (ClassMethodPredProcIds_513));
        MR_hl_field(0, ClassDefn_516, 9) = ((MR_Box) (Context_21));
        MR_hl_field(0, ClassDefn_516, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ((MR_Box) (ClassId_25)), ((MR_Box) (ClassDefn_516)), ClassTable0_23, &ClassTable_519);
      hlds__hlds_module__module_info_set_class_table_3_p_0(ClassTable_519, STATE_VARIABLE_ModuleInfo_3_517, STATE_VARIABLE_ModuleInfo_68);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__module_declare_class_method_preds_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_Specs_10;

  hlds__make_hlds__add_class__report_mode_decls_for_undeclared_method_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv10_STATE_VARIABLE_Specs_10);
  *wrapper_arg_4 = ((MR_Box) (conv10_STATE_VARIABLE_Specs_10));
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
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11)
{
  MR_Box closure = closure_arg;
  MR_Integer conv4_STATE_VARIABLE_MethodProcNum_83;
  MR_Word conv3_STATE_VARIABLE_MethodInfosCord_85;
  MR_Word conv2_STATE_VARIABLE_ModeDeclMap_87;
  MR_Word conv1_STATE_VARIABLE_ModuleInfo_89;
  MR_Word conv0_STATE_VARIABLE_Specs_91;

  hlds__make_hlds__add_class__add_class_pred_or_func_and_mode_decls_16_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv4_STATE_VARIABLE_MethodProcNum_83, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_MethodInfosCord_85, ((MR_Word) (wrapper_arg_6)), &conv2_STATE_VARIABLE_ModeDeclMap_87, ((MR_Word) (wrapper_arg_8)), &conv1_STATE_VARIABLE_ModuleInfo_89, ((MR_Word) (wrapper_arg_10)), &conv0_STATE_VARIABLE_Specs_91);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_MethodProcNum_83));
  *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_MethodInfosCord_85));
  *wrapper_arg_7 = ((MR_Box) (conv2_STATE_VARIABLE_ModeDeclMap_87));
  *wrapper_arg_9 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_89));
  *wrapper_arg_11 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_91));
}

static void MR_CALL 
hlds__make_hlds__add_class__module_declare_class_method_preds_11_p_0(
  MR_Word ClassName_12,
  MR_Word ClassParamVars_13,
  MR_Word TypeClassStatus_14,
  MR_Word ItemMercuryStatus_15,
  MR_Word NeedQual_16,
  MR_Word ClassDecls_17,
  MR_Word * MethodInfos_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  MR_Word ClassPredOrFuncInfosCord_21;
  MR_Word ClassModeInfoMap_22;
  MR_Word ClassPredOrFuncInfos_23;
  MR_Word OldImportStatus_24;
  MR_Word PredStatus_25;
  MR_Word MethodInfosCord_27;
  MR_Word UnhandledClassModeInfoMap_28;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_37;
  MR_Word STATE_VARIABLE_Specs_1_39;
  MR_Box conv9_Var_26;
  MR_Box conv8_MethodInfosCord_27;
  MR_Box conv7_UnhandledClassModeInfoMap_28;
  MR_Box conv6_STATE_VARIABLE_ModuleInfo_30;
  MR_Box conv5_STATE_VARIABLE_Specs_1_39;
  MR_Box conv11_STATE_VARIABLE_Specs_32;

  Var_33 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_pred_or_func_info_0));
  Var_34 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[3]));
  hlds__make_hlds__add_class__classify_class_decls_5_p_0(ClassDecls_17, Var_33, &ClassPredOrFuncInfosCord_21, Var_34, &ClassModeInfoMap_22);
  ClassPredOrFuncInfos_23 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_pred_or_func_info_0), ClassPredOrFuncInfosCord_21);
  OldImportStatus_24 = (MR_Word) (TypeClassStatus_14);
  PredStatus_25 = (MR_Word) (OldImportStatus_24);
  {
    Var_35 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_35, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_5[0]));
    MR_hl_field(0, Var_35, 1) = ((MR_Box) (hlds__make_hlds__add_class__module_declare_class_method_preds_11_p_0_1));
    MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_35, 3) = ((MR_Box) (ClassName_12));
    MR_hl_field(0, Var_35, 4) = ((MR_Box) (ClassParamVars_13));
    MR_hl_field(0, Var_35, 5) = ((MR_Box) (ItemMercuryStatus_15));
    MR_hl_field(0, Var_35, 6) = ((MR_Box) (PredStatus_25));
    MR_hl_field(0, Var_35, 7) = ((MR_Box) (NeedQual_16));
  }
  Var_37 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_method_info_0));
  mercury__list__foldl5_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_pred_or_func_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_2[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[0]), Var_35, ClassPredOrFuncInfos_23, ((MR_Box) ((MR_Integer) 1)), &conv9_Var_26, ((MR_Box) (Var_37)), &conv8_MethodInfosCord_27, ((MR_Box) (ClassModeInfoMap_22)), &conv7_UnhandledClassModeInfoMap_28, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_29)), &conv6_STATE_VARIABLE_ModuleInfo_30, ((MR_Box) (STATE_VARIABLE_Specs_0_31)), &conv5_STATE_VARIABLE_Specs_1_39);
  MethodInfosCord_27 = ((MR_Word) (conv8_MethodInfosCord_27));
  UnhandledClassModeInfoMap_28 = ((MR_Word) (conv7_UnhandledClassModeInfoMap_28));
  *STATE_VARIABLE_ModuleInfo_30 = ((MR_Word) (conv6_STATE_VARIABLE_ModuleInfo_30));
  STATE_VARIABLE_Specs_1_39 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_1_39));
  *MethodInfos_18 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_method_info_0), MethodInfosCord_27);
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[3]), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_2[1]), UnhandledClassModeInfoMap_28, ((MR_Box) (STATE_VARIABLE_Specs_1_39)), &conv11_STATE_VARIABLE_Specs_32);
  *STATE_VARIABLE_Specs_32 = ((MR_Word) (conv11_STATE_VARIABLE_Specs_32));
}

static void MR_CALL 
hlds__make_hlds__add_class__classify_class_decls_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_PredOrFuncInfos_0_2,
  MR_Word * STATE_VARIABLE_PredOrFuncInfos_3,
  MR_Word STATE_VARIABLE_ModeDeclMap_0_4,
  MR_Word * STATE_VARIABLE_ModeDeclMap_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModeDeclMap_5 = STATE_VARIABLE_ModeDeclMap_0_4;
      *STATE_VARIABLE_PredOrFuncInfos_3 = STATE_VARIABLE_PredOrFuncInfos_0_2;
    }
    else
    {
      MR_Word Decl_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Decls_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_PredOrFuncInfos_1_35;
      MR_Word STATE_VARIABLE_ModeDeclMap_1_38;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_PredOrFuncInfos_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ModeDeclMap_0_4;

      if (((MR_tag((MR_Word) Decl_12)) == (MR_Integer) 1))
      {
        MR_Word ModeInfo_17 = (MR_Word) (MR_body((MR_Word) (Decl_12), (MR_Integer) 1));
        MR_Word PredSymName_18 = ((MR_Word) ((MR_hl_field(0, ModeInfo_17, 0))));
        MR_Word MaybePredOrFunc_19 = ((MR_Word) ((MR_hl_field(0, ModeInfo_17, 1))));
        MR_Word Modes_20 = ((MR_Word) ((MR_hl_field(0, ModeInfo_17, 2))));
        MR_Word PredOrFunc_25;
        MR_Word PredFormArity_26;
        MR_Word UserArity_27;
        MR_Word MethodPredName_28;
        MR_Word ProcIdCord0_29;
        MR_Box conv0_ProcIdCord0_29;

        if ((MaybePredOrFunc_19 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_class.classify_class_decls\'/5", (MR_String) "unexpanded \140with_inst\140 annotation");
            return;
          }
        else
          PredOrFunc_25 = ((MR_Word) ((MR_hl_field(1, MaybePredOrFunc_19, 0))));
        PredFormArity_26 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_20);
        parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_25, &UserArity_27, PredFormArity_26);
        {
          MethodPredName_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MethodPredName_28, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_25));
          MR_hl_field(0, MethodPredName_28, 1) = ((MR_Box) (PredSymName_18));
          MR_hl_field(0, MethodPredName_28, 2) = ((MR_Box) (UserArity_27));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[3]), STATE_VARIABLE_ModeDeclMap_0_4, ((MR_Box) (MethodPredName_28)), &conv0_ProcIdCord0_29);
        if (succeeded)
        {
          ProcIdCord0_29 = ((MR_Word) (conv0_ProcIdCord0_29));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word ProcIdCord_30;

          mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_mode_info_0), ((MR_Box) (ModeInfo_17)), ProcIdCord0_29, &ProcIdCord_30);
          mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[3]), ((MR_Box) (MethodPredName_28)), ((MR_Box) (ProcIdCord_30)), STATE_VARIABLE_ModeDeclMap_0_4, &STATE_VARIABLE_ModeDeclMap_1_38);
        }
        else
        {
          MR_Word Var_39;

          Var_39 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_mode_info_0), ((MR_Box) (ModeInfo_17)));
          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[3]), ((MR_Box) (MethodPredName_28)), ((MR_Box) (Var_39)), STATE_VARIABLE_ModeDeclMap_0_4, &STATE_VARIABLE_ModeDeclMap_1_38);
        }
        STATE_VARIABLE_PredOrFuncInfos_1_35 = STATE_VARIABLE_PredOrFuncInfos_0_2;
      }
      else
      {
        MR_Word PredOrFuncInfo_16 = (MR_Word) ((MR_Word) (Decl_12));

        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_pred_or_func_info_0), ((MR_Box) (PredOrFuncInfo_16)), STATE_VARIABLE_PredOrFuncInfos_0_2, &STATE_VARIABLE_PredOrFuncInfos_1_35);
        STATE_VARIABLE_ModeDeclMap_1_38 = STATE_VARIABLE_ModeDeclMap_0_4;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Decls_13;
      next_value_of_STATE_VARIABLE_PredOrFuncInfos_0_2 = STATE_VARIABLE_PredOrFuncInfos_1_35;
      next_value_of_STATE_VARIABLE_ModeDeclMap_0_4 = STATE_VARIABLE_ModeDeclMap_1_38;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_PredOrFuncInfos_0_2 = next_value_of_STATE_VARIABLE_PredOrFuncInfos_0_2;
      STATE_VARIABLE_ModeDeclMap_0_4 = next_value_of_STATE_VARIABLE_ModeDeclMap_0_4;
      continue;
    }
    break;
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
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[10]), ((MR_Box) (SortedOldFunDeps_5)), ((MR_Box) (SortedFunDeps_6)));
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

  hlds__make_hlds__add_class__add_instance_defn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleInfo_36, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_38);
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
      MR_Word ImsSubList_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word ImsSubLists_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word ItemMercuryStatus_16 = ((MR_Word) ((MR_hl_field(0, ImsSubList_12, 0))));
      MR_Word Items_17 = ((MR_Word) ((MR_hl_field(0, ImsSubList_12, 1))));
      MR_Word InstanceStatus_18;
      MR_Word Var_23;
      MR_Word STATE_VARIABLE_ModuleInfo_1_24;
      MR_Word STATE_VARIABLE_Specs_1_25;
      MR_Box conv3_STATE_VARIABLE_ModuleInfo_1_24;
      MR_Box conv2_STATE_VARIABLE_Specs_1_25;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      hlds__status__item_mercury_status_to_instance_status_2_p_0(ItemMercuryStatus_16, &InstanceStatus_18);
      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_23, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_4[0]));
        MR_hl_field(0, Var_23, 1) = ((MR_Box) (hlds__make_hlds__add_class__add_instance_defns_5_p_0_1));
        MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_23, 3) = ((MR_Box) (InstanceStatus_18));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[0]), Var_23, Items_17, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_2)), &conv3_STATE_VARIABLE_ModuleInfo_1_24, ((MR_Box) (STATE_VARIABLE_Specs_0_4)), &conv2_STATE_VARIABLE_Specs_1_25);
      STATE_VARIABLE_ModuleInfo_1_24 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_1_24));
      STATE_VARIABLE_Specs_1_25 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_1_25));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ImsSubLists_13;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_1_24;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_1_25;
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
  MR_Word conv1_STATE_VARIABLE_ModuleInfo_68;
  MR_Word conv0_STATE_VARIABLE_Specs_70;

  hlds__make_hlds__add_class__add_typeclass_defn_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleInfo_68, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_70);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_68));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_70));
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
      MR_Word SecSubList_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word SecSubLists_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word SectionInfo_16 = ((MR_Word) ((MR_hl_field(0, SecSubList_12, 0))));
      MR_Word Items_17 = ((MR_Word) ((MR_hl_field(0, SecSubList_12, 1))));
      MR_Word ItemMercuryStatus_18 = ((MR_Word) ((MR_hl_field(0, SectionInfo_16, 0))));
      MR_Word NeedQual_19 = ((MR_Unsigned) ((MR_hl_field(0, SectionInfo_16, 1))) & (MR_Integer) 1);
      MR_Word TypeClassStatus0_20;
      MR_Word Var_25;
      MR_Word STATE_VARIABLE_ModuleInfo_1_26;
      MR_Word STATE_VARIABLE_Specs_1_27;
      MR_Box conv3_STATE_VARIABLE_ModuleInfo_1_26;
      MR_Box conv2_STATE_VARIABLE_Specs_1_27;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      hlds__status__item_mercury_status_to_typeclass_status_2_p_0(ItemMercuryStatus_18, &TypeClassStatus0_20);
      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_25, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_3[0]));
        MR_hl_field(0, Var_25, 1) = ((MR_Box) (hlds__make_hlds__add_class__add_typeclass_defns_5_p_0_1));
        MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_25, 3) = ((MR_Box) (ItemMercuryStatus_18));
        MR_hl_field(0, Var_25, 4) = ((MR_Box) (TypeClassStatus0_20));
        MR_hl_field(0, Var_25, 5) = ((MR_Box) (NeedQual_19));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__add_class_scalar_common_1[0]), Var_25, Items_17, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_2)), &conv3_STATE_VARIABLE_ModuleInfo_1_26, ((MR_Box) (STATE_VARIABLE_Specs_0_4)), &conv2_STATE_VARIABLE_Specs_1_27);
      STATE_VARIABLE_ModuleInfo_1_26 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_1_26));
      STATE_VARIABLE_Specs_1_27 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_1_27));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = SecSubLists_13;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_1_26;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_1_27;
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
