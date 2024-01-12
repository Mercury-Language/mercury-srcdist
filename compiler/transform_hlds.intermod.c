/*
** Automatically generated from `intermod.m'
** by the Mercury compiler,
** version rotd-2024-01-12
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


// :- module transform_hlds.intermod.
// :- implementation.

/*
INIT mercury__transform_hlds__intermod__init
ENDINIT
*/

#include "transform_hlds.intermod.mih"


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
#include "term_subst.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.var_table_hlds.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
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
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_pragma.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_to_term.mih"
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
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.intermod_decide.mih"
#include "transform_hlds.intermod_info.mih"
#include "transform_hlds.intermod_order_pred_info.mih"
#include "transform_hlds.intermod_status.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_pred.mih"
#include "hlds.hlds_out.hlds_out_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_typeclass_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_instance_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0;

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_first_0_0;

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_first_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_ordinal_ordered_maybe_first_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_maybe_first_0[2];

static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_maybe_first_0[2];

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__strip_headvar_unifications__1066__1_4_p_0(
  MR_Word Clause0_6,
  MR_Word HeadVarMap_15,
  MR_Word LambdaHeadVar__1_23,
  MR_Word * LambdaHeadVar__2_24);

static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_write_clause__1002__1_1_p_0(
  MR_Word LambdaHeadVar__1_74);

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_write_pred_defn__898__1_4_p_0(
  MR_Word Stream_12,
  MR_Word HeadVar__2_69);

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_write_pred_defn__896__1_4_p_0(
  MR_Word Stream_12,
  MR_Word HeadVar__2_63);

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_write_pred_decl__713__1_5_p_0(
  MR_Word Stream_18,
  MR_Word Lang_54,
  MR_Word HeadVar__3_109);

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_write_pred_decl__710__1_4_p_0(
  MR_Word Stream_18,
  MR_Word HeadVar__2_104);

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_write_pred_decl__708__1_4_p_0(
  MR_Word Stream_18,
  MR_Word HeadVar__2_99);

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_write_pred_decl__706__1_5_p_0(
  MR_Word MercInfo_17,
  MR_Word Stream_18,
  MR_Word HeadVar__3_93);

static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__unmake_hlds_class_fundep_arg_posns__581__1_2_f_0(
  MR_Word TVars_4,
  MR_Integer HeadVar__2_11);

static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__gather_foreign_enum_value_pair__450__1_2_p_0(
  MR_Integer Arity_11,
  MR_Integer HeadVar__2_20);

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__write_opt_file_initial_body__256__1_5_p_0(
  MR_Word Stream_6,
  MR_Word MercInfo_32,
  MR_Word HeadVar__3_173);

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__write_opt_file_initial_body__253__1_5_p_0(
  MR_Word Stream_6,
  MR_Word MercInfo_32,
  MR_Word HeadVar__3_168);

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__write_opt_file_initial_body__250__1_5_p_0(
  MR_Word Stream_6,
  MR_Word MercInfo_32,
  MR_Word HeadVar__3_163);

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__write_opt_file_initial_body__247__1_5_p_0(
  MR_Word Stream_6,
  MR_Word MercInfo_32,
  MR_Word HeadVar__3_158);

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__write_opt_file_initial_body__244__1_5_p_0(
  MR_Word Stream_6,
  MR_Word MercInfo_32,
  MR_Word HeadVar__3_153);

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__write_opt_file_initial_body__241__1_5_p_0(
  MR_Word Stream_6,
  MR_Word MercInfo_32,
  MR_Word HeadVar__3_148);

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__write_opt_file_initial_body__196__1_3_p_0(
  MR_Word LambdaHeadVar__1_63,
  MR_Word LambdaHeadVar__2_64,
  MR_Word * LambdaHeadVar__3_65);

static void MR_CALL 
transform_hlds__intermod____Compare____maybe_first_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____maybe_first_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__intermod__intermod_write_foreign_clause_11_p_0(
  MR_Word Stream_12,
  MR_Word Procs_13,
  MR_Word PredOrFunc_14,
  MR_Word VarTable0_15,
  MR_Word PragmaImpl_16,
  MR_Word Attributes_17,
  MR_Word Args_18,
  MR_Word SymName_19,
  MR_Integer ProcId_20);

static void MR_CALL 
transform_hlds__intermod__get_pragma_foreign_code_vars_5_p_0(
  MR_Word Args_6,
  MR_Word Modes_7,
  MR_Word * PragmaVars_8,
  MR_Word STATE_VARIABLE_VarTable_0_26,
  MR_Word * STATE_VARIABLE_VarTable_27);

static void MR_CALL 
transform_hlds__intermod__intermod_write_clause_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__intermod__intermod_write_clause_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__intermod__intermod_write_clause_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__intermod__intermod_write_clause_12_p_0(
  MR_Word OutInfo_13,
  MR_Word Stream_14,
  MR_Word ModuleInfo_15,
  MR_Word PredId_16,
  MR_Word SymName_17,
  MR_Word PredOrFunc_18,
  MR_Word VarTable_19,
  MR_Word TypeQual_20,
  MR_Word HeadVars_21,
  MR_Word Clause0_22);

static MR_bool MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_from_goal_list_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVars_2,
  MR_Word HeadVar__3_3,
  MR_Word * Goals_4,
  MR_Word STATE_VARIABLE_HeadVarMap_0_5,
  MR_Word * STATE_VARIABLE_HeadVarMap_6);

static void MR_CALL 
transform_hlds__intermod__intermod_gather_instance_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_InstancesCord_0_21,
  MR_Word * STATE_VARIABLE_InstancesCord_22);

static MR_Box MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0(
  MR_Word TVars_4,
  MR_Word HLDSFunDep_5);

static MR_Box MR_CALL 
transform_hlds__intermod__intermod_gather_class_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__intermod__intermod_gather_class_5_p_0(
  MR_Word ModuleName_6,
  MR_Word ClassId_7,
  MR_Word ClassDefn_8,
  MR_Word STATE_VARIABLE_TypeClassesCord_0_26,
  MR_Word * STATE_VARIABLE_TypeClassesCord_27);

static void MR_CALL 
transform_hlds__intermod__intermod_gather_mode_5_p_0(
  MR_Word ModuleName_6,
  MR_Word ModeCtor_7,
  MR_Word ModeDefn_8,
  MR_Word STATE_VARIABLE_ModeDefnsCord_0_20,
  MR_Word * STATE_VARIABLE_ModeDefnsCord_21);

static void MR_CALL 
transform_hlds__intermod__intermod_gather_inst_5_p_0(
  MR_Word ModuleName_6,
  MR_Word InstCtor_7,
  MR_Word InstDefn_8,
  MR_Word STATE_VARIABLE_InstDefnsCord_0_26,
  MR_Word * STATE_VARIABLE_InstDefnsCord_27);

static MR_bool MR_CALL 
transform_hlds__intermod__gather_foreign_enum_value_pair_3_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__intermod__gather_foreign_enum_value_pair_3_p_0(
  MR_Word CtorRepn_4,
  MR_Word STATE_VARIABLE_RevValues_0_15,
  MR_Word * STATE_VARIABLE_RevValues_16);

static void MR_CALL 
transform_hlds__intermod__intermod_gather_type_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__intermod_gather_type_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeDefnsCord_0_56,
  MR_Word * STATE_VARIABLE_TypeDefnsCord_57,
  MR_Word STATE_VARIABLE_ForeignEnumsCord_0_58,
  MR_Word * STATE_VARIABLE_ForeignEnumsCord_59);

static void MR_CALL 
transform_hlds__intermod__maybe_acc_foreign_type_defn_info__ho2_8_p_0(
  MR_Word TypeSymName_9,
  MR_Word TypeParams_10,
  MR_Word TVarSet_11,
  MR_Word Context_12,
  MR_Word MaybeDetails_14,
  MR_Word STATE_VARIABLE_TypeDefnsCord_0_22,
  MR_Word * STATE_VARIABLE_TypeDefnsCord_23);

static void MR_CALL 
transform_hlds__intermod__maybe_acc_foreign_type_defn_info__ho1_8_p_0(
  MR_Word TypeSymName_9,
  MR_Word TypeParams_10,
  MR_Word TVarSet_11,
  MR_Word Context_12,
  MR_Word MaybeDetails_14,
  MR_Word STATE_VARIABLE_TypeDefnsCord_0_22,
  MR_Word * STATE_VARIABLE_TypeDefnsCord_23);

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_body_5_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_body_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_body_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_body_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_body_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_body_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_body_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_body_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_body_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_body_5_p_0(
  MR_Word Stream_6,
  MR_Word IntermodInfo_7,
  MR_Word * ParseTreePlainOpt_8);

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_defns_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_defns_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_defns_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_defns_10_p_0(
  MR_Word OutInfo_1,
  MR_Word Stream_2,
  MR_Word ModuleInfo_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_DeclMarkers_0_5,
  MR_Word * STATE_VARIABLE_DeclMarkers_6,
  MR_Word STATE_VARIABLE_ImplMarkers_0_7,
  MR_Word * STATE_VARIABLE_ImplMarkers_8);

static MR_Box MR_CALL 
transform_hlds__intermod__write_promise_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__intermod__write_promise_10_p_0(
  MR_Word Info_11,
  MR_Word Stream_12,
  MR_Word ModuleInfo_13,
  MR_Word TVarSet_14,
  MR_Word VarTable_15,
  MR_Word PromiseType_16,
  MR_Word HeadVars_17,
  MR_Word Clause_18);

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decls_16_p_0(
  MR_Word MercInfo_1,
  MR_Word Stream_2,
  MR_Word ModuleInfo_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_PredDeclsCord_0_5,
  MR_Word * STATE_VARIABLE_PredDeclsCord_6,
  MR_Word STATE_VARIABLE_ModeDeclsCord_0_7,
  MR_Word * STATE_VARIABLE_ModeDeclsCord_8,
  MR_Word STATE_VARIABLE_DeclMarkersCord_0_9,
  MR_Word * STATE_VARIABLE_DeclMarkersCord_10,
  MR_Word STATE_VARIABLE_ImplMarkersCord_0_11,
  MR_Word * STATE_VARIABLE_ImplMarkersCord_12,
  MR_Word STATE_VARIABLE_TypeSpecsCord_0_13,
  MR_Word * STATE_VARIABLE_TypeSpecsCord_14);

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decl_16_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decl_16_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decl_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decl_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decl_16_p_0(
  MR_Word MercInfo_17,
  MR_Word Stream_18,
  MR_Word ModuleInfo_19,
  MR_Word OrderPredInfo_20,
  MR_Word STATE_VARIABLE_PredDeclsCord_0_55,
  MR_Word * STATE_VARIABLE_PredDeclsCord_56,
  MR_Word STATE_VARIABLE_ModeDeclsCord_0_57,
  MR_Word * STATE_VARIABLE_ModeDeclsCord_58,
  MR_Word STATE_VARIABLE_DeclMarkersCord_0_59,
  MR_Word * STATE_VARIABLE_DeclMarkersCord_60,
  MR_Word STATE_VARIABLE_ImplMarkersCord_0_61,
  MR_Word * STATE_VARIABLE_ImplMarkersCord_62,
  MR_Word STATE_VARIABLE_TypeSpecsCord_0_63,
  MR_Word * STATE_VARIABLE_TypeSpecsCord_64);

static void MR_CALL 
transform_hlds__intermod__intermod_gather_pred_marker_pragmas_loop_8_p_0(
  MR_Word PredOrFunc_1,
  MR_Word PredSymName_2,
  MR_Word UserArity_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevDeclMarkers_0_5,
  MR_Word * STATE_VARIABLE_RevDeclMarkers_6,
  MR_Word STATE_VARIABLE_RevImplMarkers_0_7,
  MR_Word * STATE_VARIABLE_RevImplMarkers_8);

static void MR_CALL 
transform_hlds__intermod__intermod_gather_pred_valid_modes_4_p_0(
  MR_Word PredOrFunc_1,
  MR_Word PredSymName_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
transform_hlds__intermod__intermod_gather_instances_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__intermod_gather_instances_2_p_0(
  MR_Word InstanceDefns_3,
  MR_Word * Instances_4);

static void MR_CALL 
transform_hlds__intermod__intermod_gather_classes_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__intermod__intermod_gather_classes_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * TypeClasses_4);

static void MR_CALL 
transform_hlds__intermod__intermod_gather_modes_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__intermod__intermod_gather_modes_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * ModeDefns_4);

static void MR_CALL 
transform_hlds__intermod__intermod_gather_insts_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__intermod__intermod_gather_insts_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * InstDefns_4);

static void MR_CALL 
transform_hlds__intermod__intermod_gather_types_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__intermod__intermod_gather_types_3_p_0(
  MR_Word Types_4,
  MR_Word * TypeDefns_5,
  MR_Word * ForeignEnums_6);

static void MR_CALL 
transform_hlds__intermod__some_type_needs_to_be_written_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____maybe_first_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__intermod____Compare____maybe_first_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__intermod_scalar_common_1[16][2];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_2[10][3];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_3[3][4];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_4[2][5];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_5[13][8];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_6[6][6];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_7[4][7];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_8[1][15];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_9[1][14];




static /* final */ const MR_Box transform_hlds__intermod_scalar_common_1[16][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_1[1]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_2[3]))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_1[2]))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_1[3]))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0))
  },
  /* row  12 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row  13 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_2[10][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__intermod__intermod_gather_types_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__intermod__intermod_gather_instances_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_6[2])),
    ((MR_Box) (transform_hlds__intermod__write_opt_file_initial_body_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_6[3])),
    ((MR_Box) (transform_hlds__intermod__intermod_gather_type_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__intermod__intermod_write_clause_12_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_3[3][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_2[1])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__pt_output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_4[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_4[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_5[13][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_typeclass_info_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_typeclass_info_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&transform_hlds__intermod__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&transform_hlds__intermod__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row  10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&transform_hlds__intermod__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row  11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row  12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_6[6][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_instance_info_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_instance_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&transform_hlds__intermod__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&transform_hlds__intermod__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_7[4][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&transform_hlds__intermod__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__intermod__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_8[1][15] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_type_qual_0)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_9[1][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&transform_hlds__intermod__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_impl_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_proc_attributes_0)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__intermod__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__intermod__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__intermod__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_typeclass_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_instance_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&transform_hlds__intermod__one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__intermod__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__intermod__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0) }
};

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_first_0_0 = {
  (MR_String) "is_not_first",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_first_0_1 = {
  (MR_String) "is_first",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_ordinal_ordered_maybe_first_0[2] = {
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_first_0_0,
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_first_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_maybe_first_0[2] = {
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_first_0_1,
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_first_0_0
};

static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_maybe_first_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__intermod____Unify____maybe_first_0_0_10001)),
  ((MR_Box) (transform_hlds__intermod____Compare____maybe_first_0_0_10001)),
  (MR_String) "transform_hlds.intermod",
  (MR_String) "maybe_first",
  { transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_maybe_first_0 },
  { transform_hlds__intermod__transform_hlds__intermod__enum_ordinal_ordered_maybe_first_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__intermod__transform_hlds__intermod__functor_number_map_maybe_first_0,

};

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__strip_headvar_unifications__1066__1_4_p_0(
  MR_Word Clause0_6,
  MR_Word HeadVarMap_15,
  MR_Word LambdaHeadVar__1_23,
  MR_Word * LambdaHeadVar__2_24)
{
  MR_bool succeeded;
  MR_Word HeadTerm0_18;
  MR_Box conv0_HeadTerm0_18;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[12]), (MR_Word) (&transform_hlds__intermod_scalar_common_1[13]), HeadVarMap_15, ((MR_Box) (LambdaHeadVar__1_23)), &conv0_HeadTerm0_18);
  if (succeeded)
  {
    HeadTerm0_18 = ((MR_Word) (conv0_HeadTerm0_18));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    *LambdaHeadVar__2_24 = HeadTerm0_18;
  else
  {
    MR_Word Context_19 = ((MR_Word) ((MR_hl_field(0, Clause0_6, (MR_Integer) 3))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *LambdaHeadVar__2_24 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (LambdaHeadVar__1_23));
      MR_hl_field(1, base, 1) = ((MR_Box) (Context_19));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_write_clause__1002__1_1_p_0(
  MR_Word LambdaHeadVar__1_74)
{
  MR_bool succeeded;
  MR_Word GE_38 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_74, (MR_Integer) 0))));

  succeeded = ((((MR_tag((MR_Word) GE_38)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GE_38, (MR_Integer) 0)))) == (MR_Integer) 1)));
  if (succeeded)
  {
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_write_pred_defn__898__1_4_p_0(
  MR_Word Stream_12,
  MR_Word HeadVar__2_69)
{
  MR_Box conv0_HeadVar__4_71;

  parse_tree__parse_tree_out_pragma__mercury_format_item_impl_marker_4_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), ((MR_Box) (Stream_12)), HeadVar__2_69, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__4_71);
}

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_write_pred_defn__896__1_4_p_0(
  MR_Word Stream_12,
  MR_Word HeadVar__2_63)
{
  MR_Box conv0_HeadVar__4_65;

  parse_tree__parse_tree_out_pragma__mercury_format_item_decl_marker_4_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), ((MR_Box) (Stream_12)), HeadVar__2_63, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__4_65);
}

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_write_pred_decl__713__1_5_p_0(
  MR_Word Stream_18,
  MR_Word Lang_54,
  MR_Word HeadVar__3_109)
{
  MR_Box conv0_HeadVar__5_111;

  parse_tree__parse_tree_out_pragma__mercury_format_pragma_type_spec_5_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), ((MR_Box) (Stream_18)), Lang_54, HeadVar__3_109, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__5_111);
}

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_write_pred_decl__710__1_4_p_0(
  MR_Word Stream_18,
  MR_Word HeadVar__2_104)
{
  MR_Box conv0_HeadVar__4_106;

  parse_tree__parse_tree_out_pragma__mercury_format_item_impl_marker_4_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), ((MR_Box) (Stream_18)), HeadVar__2_104, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__4_106);
}

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_write_pred_decl__708__1_4_p_0(
  MR_Word Stream_18,
  MR_Word HeadVar__2_99)
{
  MR_Box conv0_HeadVar__4_101;

  parse_tree__parse_tree_out_pragma__mercury_format_item_decl_marker_4_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), ((MR_Box) (Stream_18)), HeadVar__2_99, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__4_101);
}

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_write_pred_decl__706__1_5_p_0(
  MR_Word MercInfo_17,
  MR_Word Stream_18,
  MR_Word HeadVar__3_93)
{
  MR_Box conv0_HeadVar__5_95;

  parse_tree__parse_tree_out__mercury_format_item_mode_decl_5_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), MercInfo_17, ((MR_Box) (Stream_18)), HeadVar__3_93, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__5_95);
}

static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__unmake_hlds_class_fundep_arg_posns__581__1_2_f_0(
  MR_Word TVars_4,
  MR_Integer HeadVar__2_11)
{
  MR_Word HeadVar__3_12;
  MR_Box conv0_HeadVar__3_12;

  conv0_HeadVar__3_12 = mercury__list__det_index1_2_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[10]), TVars_4, HeadVar__2_11);
  HeadVar__3_12 = ((MR_Word) (conv0_HeadVar__3_12));
  return HeadVar__3_12;
}

static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__gather_foreign_enum_value_pair__450__1_2_p_0(
  MR_Integer Arity_11,
  MR_Integer HeadVar__2_20)
{
  MR_bool succeeded = (Arity_11 == HeadVar__2_20);

  return succeeded;
}

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__write_opt_file_initial_body__256__1_5_p_0(
  MR_Word Stream_6,
  MR_Word MercInfo_32,
  MR_Word HeadVar__3_173)
{
  MR_Box conv0_HeadVar__5_175;

  parse_tree__parse_tree_out__mercury_format_item_instance_5_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), MercInfo_32, ((MR_Box) (Stream_6)), HeadVar__3_173, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__5_175);
}

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__write_opt_file_initial_body__253__1_5_p_0(
  MR_Word Stream_6,
  MR_Word MercInfo_32,
  MR_Word HeadVar__3_168)
{
  MR_Box conv0_HeadVar__5_170;

  parse_tree__parse_tree_out__mercury_format_item_typeclass_5_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), MercInfo_32, ((MR_Box) (Stream_6)), HeadVar__3_168, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__5_170);
}

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__write_opt_file_initial_body__250__1_5_p_0(
  MR_Word Stream_6,
  MR_Word MercInfo_32,
  MR_Word HeadVar__3_163)
{
  MR_Box conv0_HeadVar__5_165;

  parse_tree__parse_tree_out__mercury_format_item_mode_defn_5_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), MercInfo_32, ((MR_Box) (Stream_6)), HeadVar__3_163, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__5_165);
}

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__write_opt_file_initial_body__247__1_5_p_0(
  MR_Word Stream_6,
  MR_Word MercInfo_32,
  MR_Word HeadVar__3_158)
{
  MR_Box conv0_HeadVar__5_160;

  parse_tree__parse_tree_out__mercury_format_item_inst_defn_5_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), MercInfo_32, ((MR_Box) (Stream_6)), HeadVar__3_158, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__5_160);
}

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__write_opt_file_initial_body__244__1_5_p_0(
  MR_Word Stream_6,
  MR_Word MercInfo_32,
  MR_Word HeadVar__3_153)
{
  MR_Box conv0_HeadVar__5_155;

  parse_tree__parse_tree_out__mercury_format_item_foreign_enum_5_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), MercInfo_32, ((MR_Box) (Stream_6)), HeadVar__3_153, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__5_155);
}

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__write_opt_file_initial_body__241__1_5_p_0(
  MR_Word Stream_6,
  MR_Word MercInfo_32,
  MR_Word HeadVar__3_148)
{
  MR_Box conv0_HeadVar__5_150;

  parse_tree__parse_tree_out__mercury_format_item_type_defn_5_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), MercInfo_32, ((MR_Box) (Stream_6)), HeadVar__3_148, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__5_150);
}

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__write_opt_file_initial_body__196__1_3_p_0(
  MR_Word LambdaHeadVar__1_63,
  MR_Word LambdaHeadVar__2_64,
  MR_Word * LambdaHeadVar__3_65)
{
  MR_Word Var_66;

  Var_66 = mercury__term_context__dummy_context_0_f_0();
  mercury__one_or_more_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (LambdaHeadVar__1_63)), ((MR_Box) (Var_66)), LambdaHeadVar__2_64, LambdaHeadVar__3_65);
}

static void MR_CALL 
transform_hlds__intermod____Compare____maybe_first_0_0(
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

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____maybe_first_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_foreign_clause_11_p_0(
  MR_Word Stream_12,
  MR_Word Procs_13,
  MR_Word PredOrFunc_14,
  MR_Word VarTable0_15,
  MR_Word PragmaImpl_16,
  MR_Word Attributes_17,
  MR_Word Args_18,
  MR_Word SymName_19,
  MR_Integer ProcId_20)
{
  MR_Word ProcInfo_22;
  MR_Word MaybeArgModes_23;
  MR_Box conv0_ProcInfo_22;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_13, ((MR_Box) (ProcId_20)), &conv0_ProcInfo_22);
  ProcInfo_22 = ((MR_Word) (conv0_ProcInfo_22));
  hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(ProcInfo_22, &MaybeArgModes_23);
  if ((MaybeArgModes_23 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.intermod_write_foreign_clause\'/11", (MR_String) "no mode declaration");
      return;
    }
  else
  {
    MR_Word ArgModes_24 = ((MR_Word) ((MR_hl_field(1, MaybeArgModes_23, (MR_Integer) 0))));
    MR_Word PragmaVars_25;
    MR_Word VarTable_26;
    MR_Word InstVarSet_27;
    MR_Word ProgVarSet_28;
    MR_Word FPInfo_30;
    MR_Word Var_33;
    MR_Word _VarTypes_29;

    transform_hlds__intermod__get_pragma_foreign_code_vars_5_p_0(Args_18, ArgModes_24, &PragmaVars_25, VarTable0_15, &VarTable_26);
    hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_22, &InstVarSet_27);
    hlds__var_table_hlds__split_var_table_3_p_0(VarTable_26, &ProgVarSet_28, &_VarTypes_29);
    Var_33 = mercury__term_context__dummy_context_0_f_0();
    {
      FPInfo_30 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FPInfo_30, 0) = ((MR_Box) (Attributes_17));
      MR_hl_field(0, FPInfo_30, 1) = ((MR_Box) (SymName_19));
      MR_hl_field(0, FPInfo_30, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_14));
      MR_hl_field(0, FPInfo_30, 3) = ((MR_Box) (PragmaVars_25));
      MR_hl_field(0, FPInfo_30, 4) = ((MR_Box) (ProgVarSet_28));
      MR_hl_field(0, FPInfo_30, 5) = ((MR_Box) (InstVarSet_27));
      MR_hl_field(0, FPInfo_30, 6) = ((MR_Box) (PragmaImpl_16));
      MR_hl_field(0, FPInfo_30, 7) = ((MR_Box) (Var_33));
      MR_hl_field(0, FPInfo_30, 8) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    parse_tree__parse_tree_out_pragma__mercury_output_item_foreign_proc_5_p_0(Stream_12, (MR_Integer) 0, FPInfo_30);
  }
}

static void MR_CALL 
transform_hlds__intermod__get_pragma_foreign_code_vars_5_p_0(
  MR_Word Args_6,
  MR_Word Modes_7,
  MR_Word * PragmaVars_8,
  MR_Word STATE_VARIABLE_VarTable_0_26,
  MR_Word * STATE_VARIABLE_VarTable_27)
{
  if ((Args_6 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((Modes_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *PragmaVars_8 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_VarTable_27 = STATE_VARIABLE_VarTable_0_26;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.get_pragma_foreign_code_vars\'/5", (MR_String) "list length mismatch");
        return;
      }
  else
  {
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(1, Args_6, (MR_Integer) 1))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(1, Args_6, (MR_Integer) 0))));

    if ((Modes_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.get_pragma_foreign_code_vars\'/5", (MR_String) "list length mismatch");
        return;
      }
    else
    {
      MR_Word Mode_12 = ((MR_Word) ((MR_hl_field(1, Modes_7, (MR_Integer) 0))));
      MR_Word ModesTail_13 = ((MR_Word) ((MR_hl_field(1, Modes_7, (MR_Integer) 1))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, Var_37, (MR_Integer) 0))));
      MR_Word MaybeNameAndMode_15 = ((MR_Word) ((MR_hl_field(0, Var_37, (MR_Integer) 1))));
      MR_String Name_18;
      MR_Word PragmaVar_20;
      MR_Word PragmaVarsTail_21;
      MR_Word STATE_VARIABLE_VarTable_30_30;

      if ((MaybeNameAndMode_15 == (MR_Word) ((MR_Unsigned) 0U)))
        Name_18 = (MR_String) "_";
      else
      {
        MR_Word Var_28 = ((MR_Word) ((MR_hl_field(1, MaybeNameAndMode_15, (MR_Integer) 0))));

        Name_18 = ((MR_String) ((MR_hl_field(0, Var_28, (MR_Integer) 0))));
      }
      {
        PragmaVar_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PragmaVar_20, 0) = ((MR_Box) (Var_14));
        MR_hl_field(0, PragmaVar_20, 1) = ((MR_Box) (Name_18));
        MR_hl_field(0, PragmaVar_20, 2) = ((MR_Box) (Mode_12));
        MR_hl_field(0, PragmaVar_20, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      parse_tree__var_table__update_var_name_4_p_0(Var_14, Name_18, STATE_VARIABLE_VarTable_0_26, &STATE_VARIABLE_VarTable_30_30);
      transform_hlds__intermod__get_pragma_foreign_code_vars_5_p_0(Var_36, ModesTail_13, &PragmaVarsTail_21, STATE_VARIABLE_VarTable_30_30, STATE_VARIABLE_VarTable_27);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *PragmaVars_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (PragmaVar_20));
        MR_hl_field(1, base, 1) = ((MR_Box) (PragmaVarsTail_21));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_clause_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  transform_hlds__intermod__intermod_write_foreign_clause_11_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 9)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 10)))), ((MR_Integer) (wrapper_arg_1)));
}

static MR_bool MR_CALL 
transform_hlds__intermod__intermod_write_clause_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__intermod__IntroducedFrom__pred__intermod_write_clause__1002__1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_clause_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_24;

  transform_hlds__intermod__IntroducedFrom__pred__strip_headvar_unifications__1066__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_24);
  *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_24));
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_clause_12_p_0(
  MR_Word OutInfo_13,
  MR_Word Stream_14,
  MR_Word ModuleInfo_15,
  MR_Word PredId_16,
  MR_Word SymName_17,
  MR_Word PredOrFunc_18,
  MR_Word VarTable_19,
  MR_Word TypeQual_20,
  MR_Word HeadVars_21,
  MR_Word Clause0_22)
{
  MR_bool succeeded;
  MR_Word ApplicableProcIds_24 = ((MR_Word) ((MR_hl_field(0, Clause0_22, (MR_Integer) 0))));
  MR_Word Goal_25 = ((MR_Word) ((MR_hl_field(0, Clause0_22, (MR_Integer) 1))));
  MR_Word ImplLang_26 = ((MR_Word) ((MR_hl_field(0, Clause0_22, (MR_Integer) 2))));

  if ((ImplLang_26 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ClauseHeadVars_29;
    MR_Word Clause_30;
    MR_Word EmptyVarTable_31;
    MR_Word Var_65;
    MR_Word Goal0_97;
    MR_Word GoalInfo0_99;
    MR_Word Goals0_100;
    MR_Word HeadVarMap0_101;
    MR_Word Goals_102;
    MR_Word HeadVarMap_103;

    Goal0_97 = hlds__hlds_clauses__clause_body_1_f_0(Clause0_22);
    GoalInfo0_99 = ((MR_Word) ((MR_hl_field(0, Goal0_97, (MR_Integer) 1))));
    hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal0_97, &Goals0_100);
    mercury__map__init_1_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[12]), (MR_Word) (&transform_hlds__intermod_scalar_common_1[13]), &HeadVarMap0_101);
    succeeded = transform_hlds__intermod__strip_headvar_unifications_from_goal_list_6_p_0(Goals0_100, HeadVars_21, (MR_Word) ((MR_Unsigned) 0U), &Goals_102, HeadVarMap0_101, &HeadVarMap_103);
    if (succeeded)
    {
      MR_Word Goal_104;
      MR_Word Var_106;
      MR_Word Var_107;
      MR_Word Var_109;
      MR_Word Var_110;
      MR_Word Var_111;

      {
        Var_106 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_106, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_7[3]));
        MR_hl_field(0, Var_106, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_clause_12_p_0_1));
        MR_hl_field(0, Var_106, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_106, 3) = ((MR_Box) (Clause0_22));
        MR_hl_field(0, Var_106, 4) = ((MR_Box) (HeadVarMap_103));
      }
      mercury__list__map_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[12]), (MR_Word) (&transform_hlds__intermod_scalar_common_1[13]), Var_106, HeadVars_21, &ClauseHeadVars_29);
      hlds__hlds_goal__conj_list_to_goal_3_p_0(Goals_102, GoalInfo0_99, &Goal_104);
      Var_107 = ((MR_Word) ((MR_hl_field(0, Clause0_22, (MR_Integer) 0))));
      Var_109 = ((MR_Word) ((MR_hl_field(0, Clause0_22, (MR_Integer) 2))));
      Var_110 = ((MR_Word) ((MR_hl_field(0, Clause0_22, (MR_Integer) 3))));
      Var_111 = ((MR_Word) ((MR_hl_field(0, Clause0_22, (MR_Integer) 4))));
      {
        Clause_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Clause_30, 0) = ((MR_Box) (Var_107));
        MR_hl_field(0, Clause_30, 1) = ((MR_Box) (Goal_104));
        MR_hl_field(0, Clause_30, 2) = ((MR_Box) (Var_109));
        MR_hl_field(0, Clause_30, 3) = ((MR_Box) (Var_110));
        MR_hl_field(0, Clause_30, 4) = ((MR_Box) (Var_111));
      }
    }
    else
    {
      mercury__term_subst__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_21, &ClauseHeadVars_29);
      Clause_30 = Clause0_22;
    }
    parse_tree__var_table__init_var_table_1_p_0(&EmptyVarTable_31);
    {
      Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_65, 0) = ((MR_Box) (EmptyVarTable_31));
    }
    hlds__hlds_out__hlds_out_pred__write_clause_15_p_0(OutInfo_13, Stream_14, (MR_Integer) 0, ModuleInfo_15, PredId_16, PredOrFunc_18, Var_65, TypeQual_20, (MR_Integer) 1, (MR_Integer) 1, (MR_Unsigned) 1U, ClauseHeadVars_29, Clause_30);
  }
  else
  {
    MR_Word PredInfo_33;
    MR_Word Procs_34;
    MR_Word Attributes_50;
    MR_Word Args_53;
    MR_Word PragmaCode_56;
    MR_Word Var_95;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_15, PredId_16, &PredInfo_33);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_33, &Procs_34);
    Var_95 = ((MR_Word) ((MR_hl_field(0, Goal_25, (MR_Integer) 0))));
    if (((((MR_tag((MR_Word) Var_95)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_95, (MR_Integer) 0)))) == (MR_Integer) 1))))
    {
      Attributes_50 = ((MR_Word) ((MR_hl_field(3, Var_95, (MR_Integer) 1))));
      Args_53 = ((MR_Word) ((MR_hl_field(3, Var_95, (MR_Integer) 4))));
      PragmaCode_56 = ((MR_Word) ((MR_hl_field(3, Var_95, (MR_Integer) 7))));
      succeeded = MR_TRUE;
    }
    else
    if (((((MR_tag((MR_Word) Var_95)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_95, (MR_Integer) 0)))) == (MR_Integer) 2))))
    {
      MR_Word TypeCtorInfo_87_87;
      MR_Word TypeInfo_96_96;
      MR_Word Goals_35 = ((MR_Word) ((MR_hl_field(3, Var_95, (MR_Integer) 2))));
      MR_Word ForeignCodeGoal_47;
      MR_Word ForeignCodeGoalExpr_48;
      MR_Word Var_71 = ((MR_Unsigned) ((MR_hl_field(3, Var_95, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_75;
      MR_Word Var_93;

      succeeded = (Var_71 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_72 = (MR_Word) (&transform_hlds__intermod_scalar_common_2[9]);
        Var_75 = (MR_Word) ((MR_Unsigned) 0U);
        TypeCtorInfo_87_87 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
        mercury__list__filter_3_p_0(TypeCtorInfo_87_87, Var_72, Goals_35, &Var_73);
        succeeded = (Var_73 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ForeignCodeGoal_47 = ((MR_Word) ((MR_hl_field(1, Var_73, (MR_Integer) 0))));
          Var_93 = ((MR_Word) ((MR_hl_field(1, Var_73, (MR_Integer) 1))));
          TypeInfo_96_96 = (MR_Word) (&transform_hlds__intermod_scalar_common_1[15]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_96_96, ((MR_Box) (Var_75)), ((MR_Box) (Var_93)));
          if (succeeded)
          {
            ForeignCodeGoalExpr_48 = ((MR_Word) ((MR_hl_field(0, ForeignCodeGoal_47, (MR_Integer) 0))));
            succeeded = ((((MR_tag((MR_Word) ForeignCodeGoalExpr_48)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ForeignCodeGoalExpr_48, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Attributes_50 = ((MR_Word) ((MR_hl_field(3, ForeignCodeGoalExpr_48, (MR_Integer) 1))));
              Args_53 = ((MR_Word) ((MR_hl_field(3, ForeignCodeGoalExpr_48, (MR_Integer) 4))));
              PragmaCode_56 = ((MR_Word) ((MR_hl_field(3, ForeignCodeGoalExpr_48, (MR_Integer) 7))));
            }
          }
        }
      }
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
      switch (MR_tag((MR_Word) ApplicableProcIds_24)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ApplicableProcIds_24)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.intermod_write_clause\'/12", (MR_String) "all_modes foreign_proc");
                return;
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.intermod_write_clause\'/12", (MR_String) "unify modes foreign_proc");
                return;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ProcIds_61 = ((MR_Word) ((MR_hl_field(1, ApplicableProcIds_24, (MR_Integer) 0))));
            MR_Word Var_78;
            MR_Box conv1_STATE_VARIABLE_IO_63;

            {
              Var_78 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_78, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_9[0]));
              MR_hl_field(0, Var_78, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_clause_12_p_0_3));
              MR_hl_field(0, Var_78, 2) = ((MR_Box) ((MR_Integer) 8));
              MR_hl_field(0, Var_78, 3) = ((MR_Box) (Stream_14));
              MR_hl_field(0, Var_78, 4) = ((MR_Box) (Procs_34));
              MR_hl_field(0, Var_78, 5) = ((MR_Box) (PredOrFunc_18));
              MR_hl_field(0, Var_78, 6) = ((MR_Box) (VarTable_19));
              MR_hl_field(0, Var_78, 7) = ((MR_Box) (PragmaCode_56));
              MR_hl_field(0, Var_78, 8) = ((MR_Box) (Attributes_50));
              MR_hl_field(0, Var_78, 9) = ((MR_Box) (Args_53));
              MR_hl_field(0, Var_78, 10) = ((MR_Box) (SymName_17));
            }
            mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_78, ProcIds_61, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_63);
          }
          break;
      }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.intermod_write_clause\'/12", (MR_String) "did not find foreign_proc");
        return;
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_from_goal_list_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVars_2,
  MR_Word HeadVar__3_3,
  MR_Word * Goals_4,
  MR_Word STATE_VARIABLE_HeadVarMap_0_5,
  MR_Word * STATE_VARIABLE_HeadVarMap_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadVar__3_3, Goals_4);
      *STATE_VARIABLE_HeadVarMap_6 = STATE_VARIABLE_HeadVarMap_0_5;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Goal_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word RevGoals1_66;
      MR_Word STATE_VARIABLE_HeadVarMap_77_77;
      MR_Word LHSVar_19;
      MR_Word RHSTerm_27;
      MR_Word TypeInfo_79_79;
      MR_Word RHS_20;
      MR_Word Context_25;
      MR_Word Var_69 = ((MR_Word) ((MR_hl_field(0, Goal_13, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_HeadVarMap_0_5;

      succeeded = ((MR_tag((MR_Word) Var_69)) == (MR_Integer) 1);
      if (succeeded)
      {
        LHSVar_19 = ((MR_Word) ((MR_hl_field(1, Var_69, (MR_Integer) 0))));
        RHS_20 = ((MR_Word) ((MR_hl_field(1, Var_69, (MR_Integer) 1))));
        TypeInfo_79_79 = (MR_Word) (&transform_hlds__intermod_scalar_common_1[12]);
        succeeded = mercury__list__member_2_p_0(TypeInfo_79_79, ((MR_Box) (LHSVar_19)), HeadVars_2);
        if (succeeded)
        {
          Context_25 = mercury__term_context__dummy_context_0_f_0();
          if (((MR_tag((MR_Word) RHS_20)) == (MR_Integer) 1))
          {
            MR_Word ConsId_28 = ((MR_Word) ((MR_hl_field(1, RHS_20, (MR_Integer) 0))));
            MR_Word Args_30 = ((MR_Word) ((MR_hl_field(1, RHS_20, (MR_Integer) 2))));

            switch (MR_tag((MR_Word) ConsId_28)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, ConsId_28, (MR_Integer) 0))))) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word SymName_35 = ((MR_Word) ((MR_hl_field(3, ConsId_28, (MR_Integer) 1))));
                      MR_Word ArgTerms_38;

                      mercury__term_subst__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Args_30, &ArgTerms_38);
                      parse_tree__prog_util__construct_qualified_term_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SymName_35, ArgTerms_38, &RHSTerm_27);
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Word IntConst_31 = ((MR_Word) ((MR_hl_field(3, ConsId_28, (MR_Integer) 1))));

                      RHSTerm_27 = parse_tree__parse_tree_to_term__int_const_to_decimal_term_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), IntConst_31, Context_25);
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Float Float_32 = MR_unbox_float((MR_hl_field(3, ConsId_28, (MR_Integer) 1)));
                      MR_Word Var_70;

                      {
                        Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(3, Var_70, 1) = MR_box_float(Float_32);
                      }
                      {
                        RHSTerm_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, RHSTerm_27, 0) = ((MR_Box) (Var_70));
                        MR_hl_field(0, RHSTerm_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(0, RHSTerm_27, 2) = ((MR_Box) (Context_25));
                      }
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_Char Char_33 = ((MR_Char) (MR_Word) (MR_hl_field(3, ConsId_28, (MR_Integer) 1)));
                      MR_Word Var_72;
                      MR_String Var_73;

                      Var_73 = mercury__string__from_char_1_f_0(Char_33);
                      {
                        Var_72 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_72, 0) = ((MR_Box) (Var_73));
                      }
                      {
                        RHSTerm_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, RHSTerm_27, 0) = ((MR_Box) (Var_72));
                        MR_hl_field(0, RHSTerm_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(0, RHSTerm_27, 2) = ((MR_Box) (Context_25));
                      }
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      MR_String String_34 = ((MR_String) ((MR_hl_field(3, ConsId_28, (MR_Integer) 1))));
                      MR_Word Var_75;

                      {
                        Var_75 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_75, 0) = ((MR_Box) (String_34));
                      }
                      {
                        RHSTerm_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, RHSTerm_27, 0) = ((MR_Box) (Var_75));
                        MR_hl_field(0, RHSTerm_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(0, RHSTerm_27, 2) = ((MR_Box) (Context_25));
                      }
                      succeeded = MR_TRUE;
                    }
                    break;
                }
                break;
            }
          }
          else
          if (((MR_tag((MR_Word) RHS_20)) == (MR_Integer) 0))
          {
            MR_Word RHSVar_26 = ((MR_Word) ((MR_hl_field(0, RHS_20, (MR_Integer) 0))));

            {
              RHSTerm_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, RHSTerm_27, 0) = ((MR_Box) (RHSVar_26));
              MR_hl_field(1, RHSTerm_27, 1) = ((MR_Box) (Context_25));
            }
            succeeded = MR_TRUE;
          }
          else
            succeeded = MR_FALSE;
        }
      }
      if (succeeded)
      {
        succeeded = mercury__map__insert_4_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[12]), (MR_Word) (&transform_hlds__intermod_scalar_common_1[13]), ((MR_Box) (LHSVar_19)), ((MR_Box) (RHSTerm_27)), STATE_VARIABLE_HeadVarMap_0_5, &STATE_VARIABLE_HeadVarMap_77_77);
        if (succeeded)
        {
          RevGoals1_66 = HeadVar__3_3;
          succeeded = MR_TRUE;
        }
      }
      else
      {
        {
          RevGoals1_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, RevGoals1_66, 0) = ((MR_Box) (Goal_13));
          MR_hl_field(1, RevGoals1_66, 1) = ((MR_Box) (HeadVar__3_3));
        }
        STATE_VARIABLE_HeadVarMap_77_77 = STATE_VARIABLE_HeadVarMap_0_5;
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Goals0_14;
        next_value_of_HeadVar__3_3 = RevGoals1_66;
        next_value_of_STATE_VARIABLE_HeadVarMap_0_5 = STATE_VARIABLE_HeadVarMap_77_77;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_HeadVarMap_0_5 = next_value_of_STATE_VARIABLE_HeadVarMap_0_5;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_gather_instance_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_InstancesCord_0_21,
  MR_Word * STATE_VARIABLE_InstancesCord_22)
{
  MR_Word ClassId_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word InstanceDefn_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word ModuleName_7 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_5, (MR_Integer) 0))));
  MR_Word TVarSet_9 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_5, (MR_Integer) 2))));
  MR_Word OriginalTypes_10 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_5, (MR_Integer) 3))));
  MR_Word Types_11 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_5, (MR_Integer) 4))));
  MR_Word Constraints_12 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_5, (MR_Integer) 5))));
  MR_Word Body_15 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_5, (MR_Integer) 8))));
  MR_Word Context_17 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_5, (MR_Integer) 10))));
  MR_Word ClassName_18 = ((MR_Word) ((MR_hl_field(0, ClassId_4, (MR_Integer) 0))));
  MR_Word ItemInstance_20;

  {
    ItemInstance_20 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemInstance_20, 0) = ((MR_Box) (ClassName_18));
    MR_hl_field(0, ItemInstance_20, 1) = ((MR_Box) (Types_11));
    MR_hl_field(0, ItemInstance_20, 2) = ((MR_Box) (OriginalTypes_10));
    MR_hl_field(0, ItemInstance_20, 3) = ((MR_Box) (Constraints_12));
    MR_hl_field(0, ItemInstance_20, 4) = ((MR_Box) (Body_15));
    MR_hl_field(0, ItemInstance_20, 5) = ((MR_Box) (TVarSet_9));
    MR_hl_field(0, ItemInstance_20, 6) = ((MR_Box) (ModuleName_7));
    MR_hl_field(0, ItemInstance_20, 7) = ((MR_Box) (Context_17));
    MR_hl_field(0, ItemInstance_20, 8) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ((MR_Box) (ItemInstance_20)), STATE_VARIABLE_InstancesCord_0_21, STATE_VARIABLE_InstancesCord_22);
}

static MR_Box MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_12;

  conv0_HeadVar__3_12 = transform_hlds__intermod__IntroducedFrom__func__unmake_hlds_class_fundep_arg_posns__581__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_12));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0(
  MR_Word TVars_4,
  MR_Word HLDSFunDep_5)
{
  MR_Word ParseTreeFunDep_6;
  MR_Word DomainArgPosns_7 = ((MR_Word) ((MR_hl_field(0, HLDSFunDep_5, (MR_Integer) 0))));
  MR_Word RangeArgPosns_8 = ((MR_Word) ((MR_hl_field(0, HLDSFunDep_5, (MR_Integer) 1))));
  MR_Word DomainTVars_9;
  MR_Word RangeTVars_10;
  MR_Word ArgTVarsSet_11;
  MR_Word Var_12;
  MR_Word ArgTVarsSet_15;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_6[5]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (TVars_4));
  }
  ArgTVarsSet_11 = mercury__set__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[10]), Var_12, DomainArgPosns_7);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[10]), ArgTVarsSet_11, &DomainTVars_9);
  ArgTVarsSet_15 = mercury__set__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[10]), Var_12, RangeArgPosns_8);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[10]), ArgTVarsSet_15, &RangeTVars_10);
  {
    ParseTreeFunDep_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ParseTreeFunDep_6, 0) = ((MR_Box) (DomainTVars_9));
    MR_hl_field(0, ParseTreeFunDep_6, 1) = ((MR_Box) (RangeTVars_10));
  }
  return ParseTreeFunDep_6;
}

static MR_Box MR_CALL 
transform_hlds__intermod__intermod_gather_class_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_ParseTreeFunDep_6;

  conv0_ParseTreeFunDep_6 = transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_ParseTreeFunDep_6));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__intermod__intermod_gather_class_5_p_0(
  MR_Word ModuleName_6,
  MR_Word ClassId_7,
  MR_Word ClassDefn_8,
  MR_Word STATE_VARIABLE_TypeClassesCord_0_26,
  MR_Word * STATE_VARIABLE_TypeClassesCord_27)
{
  MR_bool succeeded;
  MR_Word TypeClassStatus_10 = ((MR_Word) ((MR_hl_field(0, ClassDefn_8, (MR_Integer) 0))));
  MR_Word TVarSet_11 = ((MR_Word) ((MR_hl_field(0, ClassDefn_8, (MR_Integer) 1))));
  MR_Word TVars_13 = ((MR_Word) ((MR_hl_field(0, ClassDefn_8, (MR_Integer) 3))));
  MR_Word Constraints_14 = ((MR_Word) ((MR_hl_field(0, ClassDefn_8, (MR_Integer) 4))));
  MR_Word HLDSFunDeps_15 = ((MR_Word) ((MR_hl_field(0, ClassDefn_8, (MR_Integer) 5))));
  MR_Word InstanceBody_17 = ((MR_Word) ((MR_hl_field(0, ClassDefn_8, (MR_Integer) 7))));
  MR_Word Context_19 = ((MR_Word) ((MR_hl_field(0, ClassDefn_8, (MR_Integer) 9))));
  MR_Word QualifiedClassName_21 = ((MR_Word) ((MR_hl_field(0, ClassId_7, (MR_Integer) 0))));
  MR_Word Var_28;
  MR_Word Var_36;

  succeeded = ((MR_tag((MR_Word) QualifiedClassName_21)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_36 = ((MR_Word) ((MR_hl_field(1, QualifiedClassName_21, (MR_Integer) 0))));
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_6, Var_36);
    if (succeeded)
    {
      Var_28 = transform_hlds__intermod_status__typeclass_status_to_write_1_f_0(TypeClassStatus_10);
      succeeded = (Var_28 == (MR_Integer) 1);
    }
  }
  if (succeeded)
  {
    MR_Word FunDeps_24;
    MR_Word ItemTypeClass_25;
    MR_Word Var_29;

    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_29, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_6[4]));
      MR_hl_field(0, Var_29, 1) = ((MR_Box) (transform_hlds__intermod__intermod_gather_class_5_p_0_1));
      MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_29, 3) = ((MR_Box) (TVars_13));
    }
    FunDeps_24 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0), Var_29, HLDSFunDeps_15);
    {
      ItemTypeClass_25 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ItemTypeClass_25, 0) = ((MR_Box) (QualifiedClassName_21));
      MR_hl_field(0, ItemTypeClass_25, 1) = ((MR_Box) (TVars_13));
      MR_hl_field(0, ItemTypeClass_25, 2) = ((MR_Box) (Constraints_14));
      MR_hl_field(0, ItemTypeClass_25, 3) = ((MR_Box) (FunDeps_24));
      MR_hl_field(0, ItemTypeClass_25, 4) = ((MR_Box) (InstanceBody_17));
      MR_hl_field(0, ItemTypeClass_25, 5) = ((MR_Box) (TVarSet_11));
      MR_hl_field(0, ItemTypeClass_25, 6) = ((MR_Box) (Context_19));
      MR_hl_field(0, ItemTypeClass_25, 7) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ((MR_Box) (ItemTypeClass_25)), STATE_VARIABLE_TypeClassesCord_0_26, STATE_VARIABLE_TypeClassesCord_27);
  }
  else
    *STATE_VARIABLE_TypeClassesCord_27 = STATE_VARIABLE_TypeClassesCord_0_26;
}

static void MR_CALL 
transform_hlds__intermod__intermod_gather_mode_5_p_0(
  MR_Word ModuleName_6,
  MR_Word ModeCtor_7,
  MR_Word ModeDefn_8,
  MR_Word STATE_VARIABLE_ModeDefnsCord_0_20,
  MR_Word * STATE_VARIABLE_ModeDefnsCord_21)
{
  MR_bool succeeded;
  MR_Word SymName_10 = ((MR_Word) ((MR_hl_field(0, ModeCtor_7, (MR_Integer) 0))));
  MR_Word VarSet_12 = ((MR_Word) ((MR_hl_field(0, ModeDefn_8, (MR_Integer) 0))));
  MR_Word Args_13 = ((MR_Word) ((MR_hl_field(0, ModeDefn_8, (MR_Integer) 1))));
  MR_Word Mode_14;
  MR_Word Context_15 = ((MR_Word) ((MR_hl_field(0, ModeDefn_8, (MR_Integer) 3))));
  MR_Word ModeStatus_16 = ((MR_Word) ((MR_hl_field(0, ModeDefn_8, (MR_Integer) 4))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, ModeDefn_8, (MR_Integer) 2))));
  MR_Word Var_23;
  MR_Word Var_27;

  Mode_14 = (MR_Word) (Var_22);
  succeeded = ((MR_tag((MR_Word) SymName_10)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_27 = ((MR_Word) ((MR_hl_field(1, SymName_10, (MR_Integer) 0))));
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_6, Var_27);
    if (succeeded)
    {
      Var_23 = transform_hlds__intermod_status__mode_status_to_write_1_f_0(ModeStatus_16);
      succeeded = (Var_23 == (MR_Integer) 1);
    }
  }
  if (succeeded)
  {
    MR_Word MaybeAbstractModeDefn_18;
    MR_Word ItemModeDefn_19;
    MR_Word Var_24 = (MR_Word) (Mode_14);

    {
      MaybeAbstractModeDefn_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeAbstractModeDefn_18, 0) = ((MR_Box) (Var_24));
    }
    {
      ItemModeDefn_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ItemModeDefn_19, 0) = ((MR_Box) (SymName_10));
      MR_hl_field(0, ItemModeDefn_19, 1) = ((MR_Box) (Args_13));
      MR_hl_field(0, ItemModeDefn_19, 2) = ((MR_Box) (MaybeAbstractModeDefn_18));
      MR_hl_field(0, ItemModeDefn_19, 3) = ((MR_Box) (VarSet_12));
      MR_hl_field(0, ItemModeDefn_19, 4) = ((MR_Box) (Context_15));
      MR_hl_field(0, ItemModeDefn_19, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[3]), ((MR_Box) (ItemModeDefn_19)), STATE_VARIABLE_ModeDefnsCord_0_20, STATE_VARIABLE_ModeDefnsCord_21);
  }
  else
    *STATE_VARIABLE_ModeDefnsCord_21 = STATE_VARIABLE_ModeDefnsCord_0_20;
}

static void MR_CALL 
transform_hlds__intermod__intermod_gather_inst_5_p_0(
  MR_Word ModuleName_6,
  MR_Word InstCtor_7,
  MR_Word InstDefn_8,
  MR_Word STATE_VARIABLE_InstDefnsCord_0_26,
  MR_Word * STATE_VARIABLE_InstDefnsCord_27)
{
  MR_bool succeeded;
  MR_Word SymName_10 = ((MR_Word) ((MR_hl_field(0, InstCtor_7, (MR_Integer) 0))));
  MR_Word VarSet_12 = ((MR_Word) ((MR_hl_field(0, InstDefn_8, (MR_Integer) 0))));
  MR_Word Args_13 = ((MR_Word) ((MR_hl_field(0, InstDefn_8, (MR_Integer) 1))));
  MR_Word Inst_14 = ((MR_Word) ((MR_hl_field(0, InstDefn_8, (MR_Integer) 2))));
  MR_Word IFTC_15 = ((MR_Word) ((MR_hl_field(0, InstDefn_8, (MR_Integer) 3))));
  MR_Word Context_16 = ((MR_Word) ((MR_hl_field(0, InstDefn_8, (MR_Integer) 4))));
  MR_Word InstStatus_17 = ((MR_Word) ((MR_hl_field(0, InstDefn_8, (MR_Integer) 5))));
  MR_Word Var_28;
  MR_Word Var_32;

  succeeded = ((MR_tag((MR_Word) SymName_10)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_32 = ((MR_Word) ((MR_hl_field(1, SymName_10, (MR_Integer) 0))));
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_6, Var_32);
    if (succeeded)
    {
      Var_28 = transform_hlds__intermod_status__inst_status_to_write_1_f_0(InstStatus_17);
      succeeded = (Var_28 == (MR_Integer) 1);
    }
  }
  if (succeeded)
  {
    MR_Word MaybeForTypeCtor_20;
    MR_Word ItemInstDefn_25;
    MR_Word Var_29;

    switch (MR_tag((MR_Word) IFTC_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MaybeForTypeCtor_20 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word ForTypeCtor_19 = ((MR_Word) ((MR_hl_field(1, IFTC_15, (MR_Integer) 0))));

          {
            MaybeForTypeCtor_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeForTypeCtor_20, 0) = ((MR_Box) (ForTypeCtor_19));
          }
        }
        break;
      case (MR_Integer) 2:
        MaybeForTypeCtor_20 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 3:
        MaybeForTypeCtor_20 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
    {
      Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_29, 0) = ((MR_Box) (Inst_14));
    }
    {
      ItemInstDefn_25 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ItemInstDefn_25, 0) = ((MR_Box) (SymName_10));
      MR_hl_field(0, ItemInstDefn_25, 1) = ((MR_Box) (Args_13));
      MR_hl_field(0, ItemInstDefn_25, 2) = ((MR_Box) (MaybeForTypeCtor_20));
      MR_hl_field(0, ItemInstDefn_25, 3) = ((MR_Box) (Var_29));
      MR_hl_field(0, ItemInstDefn_25, 4) = ((MR_Box) (VarSet_12));
      MR_hl_field(0, ItemInstDefn_25, 5) = ((MR_Box) (Context_16));
      MR_hl_field(0, ItemInstDefn_25, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[2]), ((MR_Box) (ItemInstDefn_25)), STATE_VARIABLE_InstDefnsCord_0_26, STATE_VARIABLE_InstDefnsCord_27);
  }
  else
    *STATE_VARIABLE_InstDefnsCord_27 = STATE_VARIABLE_InstDefnsCord_0_26;
}

static MR_bool MR_CALL 
transform_hlds__intermod__gather_foreign_enum_value_pair_3_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__intermod__IntroducedFrom__pred__gather_foreign_enum_value_pair__450__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
transform_hlds__intermod__gather_foreign_enum_value_pair_3_p_0(
  MR_Word CtorRepn_4,
  MR_Word STATE_VARIABLE_RevValues_0_15,
  MR_Word * STATE_VARIABLE_RevValues_16)
{
  MR_bool succeeded;
  MR_Word SymName_8 = ((MR_Word) ((MR_hl_field(0, CtorRepn_4, (MR_Integer) 2))));
  MR_Word Tag_9 = ((MR_Word) ((MR_hl_field(0, CtorRepn_4, (MR_Integer) 3))));
  MR_Integer Arity_11 = ((MR_Integer) ((MR_hl_field(0, CtorRepn_4, (MR_Integer) 5))));
  MR_Word Var_17;
  MR_String ForeignTag_14;

  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_4[1]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (transform_hlds__intermod__gather_foreign_enum_value_pair_3_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (Arity_11));
    MR_hl_field(0, Var_17, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__require__expect_3_p_0(Var_17, (MR_String) "predicate \140transform_hlds.intermod.gather_foreign_enum_value_pair\'/3", (MR_String) "Arity != 0");
  succeeded = ((((MR_tag((MR_Word) Tag_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Tag_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
  if (succeeded)
  {
    ForeignTag_14 = ((MR_String) ((MR_hl_field(3, Tag_9, (MR_Integer) 2))));
    {
      MR_Word Var_22;

      {
        Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_22, 0) = ((MR_Box) (SymName_8));
        MR_hl_field(0, Var_22, 1) = ((MR_Box) (ForeignTag_14));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_RevValues_16 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_22));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevValues_0_15));
      }
    }
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.gather_foreign_enum_value_pair\'/3", (MR_String) "expected foreign tag");
      return;
    }
}

static void MR_CALL 
transform_hlds__intermod__intermod_gather_type_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_RevValues_16;

  transform_hlds__intermod__gather_foreign_enum_value_pair_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_RevValues_16);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_RevValues_16));
}

static void MR_CALL 
transform_hlds__intermod__intermod_gather_type_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeDefnsCord_0_56,
  MR_Word * STATE_VARIABLE_TypeDefnsCord_57,
  MR_Word STATE_VARIABLE_ForeignEnumsCord_0_58,
  MR_Word * STATE_VARIABLE_ForeignEnumsCord_59)
{
  MR_bool succeeded;
  MR_Word TypeCtor_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word TypeDefn_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word TVarSet_10;
  MR_Word TypeParams_11;
  MR_Word Body_12;
  MR_Word Context_13;
  MR_Word TypeSymName_14;
  MR_Word MaybeForeignTypeBody_21;
  MR_Word TypeBody_26;
  MR_Word MainItemTypeDefn_32;
  MR_Word STATE_VARIABLE_TypeDefnsCord_65_65;
  MR_Word CtorRepns_44;
  MR_Word Lang_49;
  MR_Word MaybeRepnB_41;
  MR_Word RepnB_43;
  MR_Word DuTypeKind_47;
  MR_Word Var_78;

  hlds__hlds_data__get_type_defn_tvarset_2_p_0(TypeDefn_7, &TVarSet_10);
  hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_7, &TypeParams_11);
  hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_7, &Body_12);
  hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_7, &Context_13);
  TypeSymName_14 = ((MR_Word) ((MR_hl_field(0, TypeCtor_6, (MR_Integer) 0))));
  switch (MR_tag((MR_Word) Body_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TypeBodyDu_16 = (MR_Word) ((MR_Word) (Body_12));
        MR_Word Ctors_17 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_16, (MR_Integer) 0))));
        MR_Word MaybeSubType_18 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_16, (MR_Integer) 1))));
        MR_Word MaybeCanon_19 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_16, (MR_Integer) 2))));
        MR_Word MaybeRepnA_20 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_16, (MR_Integer) 3))));
        MR_Word MaybeDirectArgCtors_23;

        MaybeForeignTypeBody_21 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_16, (MR_Integer) 4))));
        if ((MaybeRepnA_20 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.intermod_gather_type\'/5", (MR_String) "MaybeRepnA = no");
            return;
          }
        else
        {
          MR_Word RepnA_22 = ((MR_Word) ((MR_hl_field(1, MaybeRepnA_20, (MR_Integer) 0))));

          MaybeDirectArgCtors_23 = ((MR_Word) ((MR_hl_field(0, RepnA_22, (MR_Integer) 4))));
        }
        if ((MaybeSubType_18 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word DetailsDu_27;

          {
            DetailsDu_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DetailsDu_27, 0) = ((MR_Box) (Ctors_17));
            MR_hl_field(0, DetailsDu_27, 1) = ((MR_Box) (MaybeCanon_19));
            MR_hl_field(0, DetailsDu_27, 2) = ((MR_Box) (MaybeDirectArgCtors_23));
          }
          TypeBody_26 = (MR_Word) ((MR_Word) (DetailsDu_27));
        }
        else
        {
          MR_Word SuperType_24 = ((MR_Word) ((MR_hl_field(1, MaybeSubType_18, (MR_Integer) 0))));
          MR_Word DetailsSub_25;

          {
            DetailsSub_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DetailsSub_25, 0) = ((MR_Box) (SuperType_24));
            MR_hl_field(0, DetailsSub_25, 1) = ((MR_Box) (Ctors_17));
          }
          TypeBody_26 = (MR_Word) (MR_mkword(1, (MR_Word) (DetailsSub_25)));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ForeignTypeBody0_30 = (MR_Word) (MR_body((MR_Word) (Body_12), (MR_Integer) 1));

        TypeBody_26 = (MR_Word) (MR_mkword(3, &transform_hlds__intermod_scalar_common_1[14]));
        {
          MaybeForeignTypeBody_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeForeignTypeBody_21, 0) = ((MR_Box) (ForeignTypeBody0_30));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word EqvType_28 = ((MR_Word) ((MR_hl_field(2, Body_12, (MR_Integer) 0))));
        MR_Word Var_62 = (MR_Word) (EqvType_28);

        {
          TypeBody_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, TypeBody_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, TypeBody_26, 1) = ((MR_Box) (Var_62));
        }
        MaybeForeignTypeBody_21 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Body_12, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word DetailsSolver_31 = ((MR_Word) ((MR_hl_field(3, Body_12, (MR_Integer) 1))));

            TypeBody_26 = (MR_Word) (MR_mkword(2, (MR_Word) (DetailsSolver_31)));
            MaybeForeignTypeBody_21 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Details_29 = ((MR_Word) ((MR_hl_field(3, Body_12, (MR_Integer) 1))));

            {
              TypeBody_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, TypeBody_26, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, TypeBody_26, 1) = ((MR_Box) (Details_29));
            }
            MaybeForeignTypeBody_21 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
      }
      break;
  }
  {
    MainItemTypeDefn_32 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MainItemTypeDefn_32, 0) = ((MR_Box) (TypeSymName_14));
    MR_hl_field(0, MainItemTypeDefn_32, 1) = ((MR_Box) (TypeParams_11));
    MR_hl_field(0, MainItemTypeDefn_32, 2) = ((MR_Box) (TypeBody_26));
    MR_hl_field(0, MainItemTypeDefn_32, 3) = ((MR_Box) (TVarSet_10));
    MR_hl_field(0, MainItemTypeDefn_32, 4) = ((MR_Box) (Context_13));
    MR_hl_field(0, MainItemTypeDefn_32, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[1]), ((MR_Box) (MainItemTypeDefn_32)), STATE_VARIABLE_TypeDefnsCord_0_56, &STATE_VARIABLE_TypeDefnsCord_65_65);
  if ((MaybeForeignTypeBody_21 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_TypeDefnsCord_57 = STATE_VARIABLE_TypeDefnsCord_65_65;
  else
  {
    MR_Word ForeignTypeBody_33 = ((MR_Word) ((MR_hl_field(1, MaybeForeignTypeBody_21, (MR_Integer) 0))));
    MR_Word MaybeC_34 = ((MR_Word) ((MR_hl_field(0, ForeignTypeBody_33, (MR_Integer) 0))));
    MR_Word MaybeJava_35 = ((MR_Word) ((MR_hl_field(0, ForeignTypeBody_33, (MR_Integer) 1))));
    MR_Word MaybeCsharp_36 = ((MR_Word) ((MR_hl_field(0, ForeignTypeBody_33, (MR_Integer) 2))));
    MR_Word STATE_VARIABLE_TypeDefnsCord_67_67;
    MR_Word STATE_VARIABLE_TypeDefnsCord_71_71;

    if ((MaybeC_34 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_TypeDefnsCord_67_67 = STATE_VARIABLE_TypeDefnsCord_65_65;
    else
    {
      MR_Word Details_102 = ((MR_Word) ((MR_hl_field(1, MaybeC_34, (MR_Integer) 0))));
      MR_Word LangForeignType_103 = ((MR_Word) ((MR_hl_field(0, Details_102, (MR_Integer) 0))));
      MR_Word MaybeUserEqComp_104 = ((MR_Word) ((MR_hl_field(0, Details_102, (MR_Integer) 1))));
      MR_Word Assertions_105 = ((MR_Word) ((MR_hl_field(0, Details_102, (MR_Integer) 2))));
      MR_Word DetailsForeign_106;
      MR_Word ItemTypeDefn_107;
      MR_Word Var_108;
      MR_Word Var_109;

      {
        Var_108 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_108, 0) = ((MR_Box) (LangForeignType_103));
      }
      {
        DetailsForeign_106 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, DetailsForeign_106, 0) = ((MR_Box) (Var_108));
        MR_hl_field(0, DetailsForeign_106, 1) = ((MR_Box) (MaybeUserEqComp_104));
        MR_hl_field(0, DetailsForeign_106, 2) = ((MR_Box) (Assertions_105));
      }
      {
        Var_109 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_109, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, Var_109, 1) = ((MR_Box) (DetailsForeign_106));
      }
      {
        ItemTypeDefn_107 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ItemTypeDefn_107, 0) = ((MR_Box) (TypeSymName_14));
        MR_hl_field(0, ItemTypeDefn_107, 1) = ((MR_Box) (TypeParams_11));
        MR_hl_field(0, ItemTypeDefn_107, 2) = ((MR_Box) (Var_109));
        MR_hl_field(0, ItemTypeDefn_107, 3) = ((MR_Box) (TVarSet_10));
        MR_hl_field(0, ItemTypeDefn_107, 4) = ((MR_Box) (Context_13));
        MR_hl_field(0, ItemTypeDefn_107, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[1]), ((MR_Box) (ItemTypeDefn_107)), STATE_VARIABLE_TypeDefnsCord_65_65, &STATE_VARIABLE_TypeDefnsCord_67_67);
    }
    transform_hlds__intermod__maybe_acc_foreign_type_defn_info__ho2_8_p_0(TypeSymName_14, TypeParams_11, TVarSet_10, Context_13, MaybeJava_35, STATE_VARIABLE_TypeDefnsCord_67_67, &STATE_VARIABLE_TypeDefnsCord_71_71);
    transform_hlds__intermod__maybe_acc_foreign_type_defn_info__ho1_8_p_0(TypeSymName_14, TypeParams_11, TVarSet_10, Context_13, MaybeCsharp_36, STATE_VARIABLE_TypeDefnsCord_71_71, STATE_VARIABLE_TypeDefnsCord_57);
  }
  succeeded = ((MR_tag((MR_Word) Body_12)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_78 = (MR_Word) ((MR_Word) (Body_12));
    MaybeRepnB_41 = ((MR_Word) ((MR_hl_field(0, Var_78, (MR_Integer) 3))));
    succeeded = (MaybeRepnB_41 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      RepnB_43 = ((MR_Word) ((MR_hl_field(1, MaybeRepnB_41, (MR_Integer) 0))));
      CtorRepns_44 = ((MR_Word) ((MR_hl_field(0, RepnB_43, (MR_Integer) 0))));
      DuTypeKind_47 = ((MR_Word) ((MR_hl_field(0, RepnB_43, (MR_Integer) 3))));
      succeeded = ((MR_tag((MR_Word) DuTypeKind_47)) == (MR_Integer) 1);
      if (succeeded)
        Lang_49 = ((MR_Unsigned) ((MR_hl_field(1, DuTypeKind_47, (MR_Integer) 0))) & (MR_Integer) 3);
    }
  }
  if (succeeded)
  {
    MR_Word RevForeignEnumVals_50;
    MR_Word ForeignEnumVals_51;
    MR_Box conv1_RevForeignEnumVals_50;

    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[6]), (MR_Word) (&transform_hlds__intermod_scalar_common_2[8]), CtorRepns_44, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_RevForeignEnumVals_50);
    RevForeignEnumVals_50 = ((MR_Word) (conv1_RevForeignEnumVals_50));
    mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_2[3]), RevForeignEnumVals_50, &ForeignEnumVals_51);
    if ((ForeignEnumVals_51 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ForeignEnumsCord_59 = STATE_VARIABLE_ForeignEnumsCord_0_58;
    else
    {
      MR_Word HeadForeignEnumVal_52 = ((MR_Word) ((MR_hl_field(1, ForeignEnumVals_51, (MR_Integer) 0))));
      MR_Word TailForeignEnumVals_53 = ((MR_Word) ((MR_hl_field(1, ForeignEnumVals_51, (MR_Integer) 1))));
      MR_Word OoMForeignEnumVals_54;
      MR_Word ForeignEnum_55;

      {
        OoMForeignEnumVals_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, OoMForeignEnumVals_54, 0) = ((MR_Box) (HeadForeignEnumVal_52));
        MR_hl_field(0, OoMForeignEnumVals_54, 1) = ((MR_Box) (TailForeignEnumVals_53));
      }
      {
        ForeignEnum_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ForeignEnum_55, 0) = (MR_Box) ((MR_Unsigned) (Lang_49));
        MR_hl_field(0, ForeignEnum_55, 1) = ((MR_Box) (TypeCtor_6));
        MR_hl_field(0, ForeignEnum_55, 2) = ((MR_Box) (OoMForeignEnumVals_54));
        MR_hl_field(0, ForeignEnum_55, 3) = ((MR_Box) (Context_13));
        MR_hl_field(0, ForeignEnum_55, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ((MR_Box) (ForeignEnum_55)), STATE_VARIABLE_ForeignEnumsCord_0_58, STATE_VARIABLE_ForeignEnumsCord_59);
    }
  }
  else
    *STATE_VARIABLE_ForeignEnumsCord_59 = STATE_VARIABLE_ForeignEnumsCord_0_58;
}

static void MR_CALL 
transform_hlds__intermod__maybe_acc_foreign_type_defn_info__ho2_8_p_0(
  MR_Word TypeSymName_9,
  MR_Word TypeParams_10,
  MR_Word TVarSet_11,
  MR_Word Context_12,
  MR_Word MaybeDetails_14,
  MR_Word STATE_VARIABLE_TypeDefnsCord_0_22,
  MR_Word * STATE_VARIABLE_TypeDefnsCord_23)
{
  if ((MaybeDetails_14 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_TypeDefnsCord_23 = STATE_VARIABLE_TypeDefnsCord_0_22;
  else
  {
    MR_Word Details_16 = ((MR_Word) ((MR_hl_field(1, MaybeDetails_14, (MR_Integer) 0))));
    MR_Word LangForeignType_17 = ((MR_Word) ((MR_hl_field(0, Details_16, (MR_Integer) 0))));
    MR_Word MaybeUserEqComp_18 = ((MR_Word) ((MR_hl_field(0, Details_16, (MR_Integer) 1))));
    MR_Word Assertions_19 = ((MR_Word) ((MR_hl_field(0, Details_16, (MR_Integer) 2))));
    MR_Word DetailsForeign_20;
    MR_Word ItemTypeDefn_21;
    MR_Word Var_24;
    MR_Word Var_25;

    {
      Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_24, 0) = ((MR_Box) (LangForeignType_17));
    }
    {
      DetailsForeign_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, DetailsForeign_20, 0) = ((MR_Box) (Var_24));
      MR_hl_field(0, DetailsForeign_20, 1) = ((MR_Box) (MaybeUserEqComp_18));
      MR_hl_field(0, DetailsForeign_20, 2) = ((MR_Box) (Assertions_19));
    }
    {
      Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, Var_25, 1) = ((MR_Box) (DetailsForeign_20));
    }
    {
      ItemTypeDefn_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ItemTypeDefn_21, 0) = ((MR_Box) (TypeSymName_9));
      MR_hl_field(0, ItemTypeDefn_21, 1) = ((MR_Box) (TypeParams_10));
      MR_hl_field(0, ItemTypeDefn_21, 2) = ((MR_Box) (Var_25));
      MR_hl_field(0, ItemTypeDefn_21, 3) = ((MR_Box) (TVarSet_11));
      MR_hl_field(0, ItemTypeDefn_21, 4) = ((MR_Box) (Context_12));
      MR_hl_field(0, ItemTypeDefn_21, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[1]), ((MR_Box) (ItemTypeDefn_21)), STATE_VARIABLE_TypeDefnsCord_0_22, STATE_VARIABLE_TypeDefnsCord_23);
  }
}

static void MR_CALL 
transform_hlds__intermod__maybe_acc_foreign_type_defn_info__ho1_8_p_0(
  MR_Word TypeSymName_9,
  MR_Word TypeParams_10,
  MR_Word TVarSet_11,
  MR_Word Context_12,
  MR_Word MaybeDetails_14,
  MR_Word STATE_VARIABLE_TypeDefnsCord_0_22,
  MR_Word * STATE_VARIABLE_TypeDefnsCord_23)
{
  if ((MaybeDetails_14 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_TypeDefnsCord_23 = STATE_VARIABLE_TypeDefnsCord_0_22;
  else
  {
    MR_Word Details_16 = ((MR_Word) ((MR_hl_field(1, MaybeDetails_14, (MR_Integer) 0))));
    MR_Word LangForeignType_17 = ((MR_Word) ((MR_hl_field(0, Details_16, (MR_Integer) 0))));
    MR_Word MaybeUserEqComp_18 = ((MR_Word) ((MR_hl_field(0, Details_16, (MR_Integer) 1))));
    MR_Word Assertions_19 = ((MR_Word) ((MR_hl_field(0, Details_16, (MR_Integer) 2))));
    MR_Word DetailsForeign_20;
    MR_Word ItemTypeDefn_21;
    MR_Word Var_24;
    MR_Word Var_25;

    {
      Var_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_24, 0) = ((MR_Box) (LangForeignType_17));
    }
    {
      DetailsForeign_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, DetailsForeign_20, 0) = ((MR_Box) (Var_24));
      MR_hl_field(0, DetailsForeign_20, 1) = ((MR_Box) (MaybeUserEqComp_18));
      MR_hl_field(0, DetailsForeign_20, 2) = ((MR_Box) (Assertions_19));
    }
    {
      Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, Var_25, 1) = ((MR_Box) (DetailsForeign_20));
    }
    {
      ItemTypeDefn_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ItemTypeDefn_21, 0) = ((MR_Box) (TypeSymName_9));
      MR_hl_field(0, ItemTypeDefn_21, 1) = ((MR_Box) (TypeParams_10));
      MR_hl_field(0, ItemTypeDefn_21, 2) = ((MR_Box) (Var_25));
      MR_hl_field(0, ItemTypeDefn_21, 3) = ((MR_Box) (TVarSet_11));
      MR_hl_field(0, ItemTypeDefn_21, 4) = ((MR_Box) (Context_12));
      MR_hl_field(0, ItemTypeDefn_21, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[1]), ((MR_Box) (ItemTypeDefn_21)), STATE_VARIABLE_TypeDefnsCord_0_22, STATE_VARIABLE_TypeDefnsCord_23);
  }
}

void MR_CALL 
transform_hlds__intermod__write_initial_opt_file_6_p_0(
  MR_Word TmpOptStream_7,
  MR_Word ModuleInfo_8,
  MR_Word * IntermodInfo_9,
  MR_Word * ParseTreePlainOpt_10)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_14;
  MR_Word PredDecls_16;
  MR_Word PredDefns_17;
  MR_Word Instances_18;
  MR_Word ModuleName_21;
  MR_String ModuleNameStr_22;
  MR_Word Var_15;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word TypeTable_23;
  MR_Word TypeCtorsDefns_24;
  MR_Word Var_30;
  MR_Word Var_60;

  transform_hlds__intermod_decide__decide_what_to_opt_export_2_p_0(ModuleInfo_8, IntermodInfo_9);
  transform_hlds__intermod_info__deconstruct_intermod_info_8_p_0(*IntermodInfo_9, &ModuleInfo_14, &Var_15, &PredDecls_16, &PredDefns_17, &Instances_18, &Var_19, &Var_20);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_14, &ModuleName_21);
  ModuleNameStr_22 = parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_to_string_1_f_0(ModuleName_21);
  mercury__io__write_string_4_p_0(TmpOptStream_7, (MR_String) ":- module ");
  mercury__io__write_string_4_p_0(TmpOptStream_7, ModuleNameStr_22);
  mercury__io__write_string_4_p_0(TmpOptStream_7, (MR_String) ".\n");
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredDecls_16);
  if (succeeded)
  {
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredDefns_17);
    if (succeeded)
    {
      succeeded = (Instances_18 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_14, &TypeTable_23);
        hlds__hlds_data__get_all_type_ctor_defns_2_p_0(TypeTable_23, &TypeCtorsDefns_24);
        Var_30 = (MR_Integer) 0;
        transform_hlds__intermod__some_type_needs_to_be_written_2_p_0(TypeCtorsDefns_24, &Var_60);
        succeeded = (Var_30 == Var_60);
      }
    }
  }
  if (succeeded)
  {
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;

    Var_31 = mercury__term_context__dummy_context_0_f_0();
    Var_32 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[0]));
    Var_33 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreePlainOpt_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_21));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_31));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_32));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_33));
      MR_hl_field(0, base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 7) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 8) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 9) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 10) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 11) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 12) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 13) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 14) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 15) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 16) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 17) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 18) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 19) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 20) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 21) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 22) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 23) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 24) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 25) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
    transform_hlds__intermod__write_opt_file_initial_body_5_p_0(TmpOptStream_7, *IntermodInfo_9, ParseTreePlainOpt_10);
}

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_body_5_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  transform_hlds__intermod__IntroducedFrom__pred__write_opt_file_initial_body__256__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_body_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  transform_hlds__intermod__IntroducedFrom__pred__write_opt_file_initial_body__253__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_body_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  transform_hlds__intermod__IntroducedFrom__pred__write_opt_file_initial_body__250__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_body_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  transform_hlds__intermod__IntroducedFrom__pred__write_opt_file_initial_body__247__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_body_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  transform_hlds__intermod__IntroducedFrom__pred__write_opt_file_initial_body__244__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_body_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  transform_hlds__intermod__IntroducedFrom__pred__write_opt_file_initial_body__241__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_body_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_fim_spec_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_body_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out__mercury_output_module_decl_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_body_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_65;

  transform_hlds__intermod__IntroducedFrom__pred__write_opt_file_initial_body__196__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_65);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_65));
}

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_body_5_p_0(
  MR_Word Stream_6,
  MR_Word IntermodInfo_7,
  MR_Word * ParseTreePlainOpt_8)
{
  MR_Word ModuleInfo_10;
  MR_Word WriteDeclPredIdSet_12;
  MR_Word WriteDefnPredIdSet_13;
  MR_Word InstanceDefns_14;
  MR_Word Types_15;
  MR_Word NeedFIMs_16;
  MR_Word WriteDeclPredIds_17;
  MR_Word WriteDefnPredIds_18;
  MR_Word AvailModuleMap_19;
  MR_Word UsedModuleNames_20;
  MR_Word UseMap_25;
  MR_Word FIMSpecsSet_27;
  MR_Word FIMSpecs_28;
  MR_Word Globals_29;
  MR_Word OutInfo0_30;
  MR_Word MercInfo0_31;
  MR_Word MercInfo_32;
  MR_Word OutInfoForPreds_34;
  MR_Word TypeDefns_35;
  MR_Word ForeignEnums_36;
  MR_Word InstDefns_37;
  MR_Word ModeDefns_38;
  MR_Word TypeClasses_39;
  MR_Word Instances_40;
  MR_Word DeclOrderPredInfos_41;
  MR_Word DefnOrderPredInfos_42;
  MR_Word PredDecls_43;
  MR_Word ModeDecls_44;
  MR_Word DeclMarkersCord0_45;
  MR_Word ImplMarkersCord0_46;
  MR_Word TypeSpecs_47;
  MR_Word DeclMarkersCord_53;
  MR_Word ImplMarkersCord_54;
  MR_Word DeclMarkers_58;
  MR_Word ImplMarkers_59;
  MR_Word ModuleName_60;
  MR_Word Var_67;
  MR_Word Var_70;
  MR_Word Var_74;
  MR_Word Var_77;
  MR_Word Var_80;
  MR_Word Var_83;
  MR_Word Var_86;
  MR_Word Var_89;
  MR_Word Var_92;
  MR_Word Var_102;
  MR_String Var_119;
  MR_Word Var_120;
  MR_Word Var_121;
  MR_Word Var_11;
  MR_Box conv1_UseMap_25;
  MR_Box conv2_STATE_VARIABLE_IO_71_71;
  MR_Box conv3_STATE_VARIABLE_IO_73_73;
  MR_Box conv4_STATE_VARIABLE_IO_75_75;
  MR_Box conv5_STATE_VARIABLE_IO_76_76;
  MR_Box conv6_STATE_VARIABLE_IO_78_78;
  MR_Box conv7_STATE_VARIABLE_IO_79_79;
  MR_Box conv8_STATE_VARIABLE_IO_81_81;
  MR_Box conv9_STATE_VARIABLE_IO_82_82;
  MR_Box conv10_STATE_VARIABLE_IO_84_84;
  MR_Box conv11_STATE_VARIABLE_IO_85_85;
  MR_Box conv12_STATE_VARIABLE_IO_87_87;
  MR_Box conv13_STATE_VARIABLE_IO_88_88;
  MR_Box conv14_STATE_VARIABLE_IO_90_90;
  MR_Box conv15_STATE_VARIABLE_IO_91_91;
  MR_Box conv16_STATE_VARIABLE_IO_93_93;

  transform_hlds__intermod_info__deconstruct_intermod_info_8_p_0(IntermodInfo_7, &ModuleInfo_10, &Var_11, &WriteDeclPredIdSet_12, &WriteDefnPredIdSet_13, &InstanceDefns_14, &Types_15, &NeedFIMs_16);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), WriteDeclPredIdSet_12, &WriteDeclPredIds_17);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), WriteDefnPredIdSet_13, &WriteDefnPredIds_18);
  hlds__hlds_module__module_info_get_avail_module_map_2_p_0(ModuleInfo_10, &AvailModuleMap_19);
  mercury__map__keys_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0), AvailModuleMap_19, &UsedModuleNames_20);
  Var_67 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
  mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&transform_hlds__intermod_scalar_common_2[0]), (MR_Word) (&transform_hlds__intermod_scalar_common_2[7]), UsedModuleNames_20, ((MR_Box) (Var_67)), &conv1_UseMap_25);
  UseMap_25 = ((MR_Word) (conv1_UseMap_25));
  switch (NeedFIMs_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word CJCsFIMs_26;

        hlds__hlds_module__module_info_get_c_j_cs_fims_2_p_0(ModuleInfo_10, &CJCsFIMs_26);
        FIMSpecsSet_27 = parse_tree__prog_data_foreign__get_all_fim_specs_1_f_0(CJCsFIMs_26);
        FIMSpecs_28 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), FIMSpecsSet_27);
      }
      break;
    case (MR_Integer) 0:
      {
        mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), &FIMSpecsSet_27);
        FIMSpecs_28 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
  }
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_10, &Globals_29);
  OutInfo0_30 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(Globals_29, (MR_Integer) 0);
  MercInfo0_31 = ((MR_Word) ((MR_hl_field(0, OutInfo0_30, (MR_Integer) 4))));
  MercInfo_32 = parse_tree__parse_tree_out_info__merc_out_info_disable_line_numbers_1_f_0(MercInfo0_31);
  Var_119 = ((MR_String) ((MR_hl_field(0, OutInfo0_30, (MR_Integer) 1))));
  Var_120 = ((MR_Word) ((MR_hl_field(0, OutInfo0_30, (MR_Integer) 2))));
  Var_121 = ((MR_Word) ((MR_hl_field(0, OutInfo0_30, (MR_Integer) 3))));
  {
    OutInfoForPreds_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, OutInfoForPreds_34, 0) = ((MR_Box) ((MR_String) ""));
    MR_hl_field(0, OutInfoForPreds_34, 1) = ((MR_Box) (Var_119));
    MR_hl_field(0, OutInfoForPreds_34, 2) = ((MR_Box) (Var_120));
    MR_hl_field(0, OutInfoForPreds_34, 3) = ((MR_Box) (Var_121));
    MR_hl_field(0, OutInfoForPreds_34, 4) = ((MR_Box) (MercInfo_32));
  }
  transform_hlds__intermod__intermod_gather_types_3_p_0(Types_15, &TypeDefns_35, &ForeignEnums_36);
  transform_hlds__intermod__intermod_gather_insts_2_p_0(ModuleInfo_10, &InstDefns_37);
  transform_hlds__intermod__intermod_gather_modes_2_p_0(ModuleInfo_10, &ModeDefns_38);
  transform_hlds__intermod__intermod_gather_classes_2_p_0(ModuleInfo_10, &TypeClasses_39);
  transform_hlds__intermod__intermod_gather_instances_2_p_0(InstanceDefns_14, &Instances_40);
  {
    Var_70 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_70, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_5[6]));
    MR_hl_field(0, Var_70, 1) = ((MR_Box) (transform_hlds__intermod__write_opt_file_initial_body_5_p_0_2));
    MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_70, 3) = ((MR_Box) (Stream_6));
    MR_hl_field(0, Var_70, 4) = ((MR_Box) ((MR_String) "use_module"));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_70, UsedModuleNames_20, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_71_71);
  parse_tree__parse_tree_out__maybe_format_block_start_blank_line_4_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), ((MR_Box) (Stream_6)), FIMSpecs_28, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_73_73);
  {
    Var_74 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_74, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_7[2]));
    MR_hl_field(0, Var_74, 1) = ((MR_Box) (transform_hlds__intermod__write_opt_file_initial_body_5_p_0_3));
    MR_hl_field(0, Var_74, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_74, 3) = ((MR_Box) (Stream_6));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_74, FIMSpecs_28, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_75_75);
  parse_tree__parse_tree_out__maybe_format_block_start_blank_line_4_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[1]), (MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), ((MR_Box) (Stream_6)), TypeDefns_35, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_76_76);
  {
    Var_77 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_77, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_5[7]));
    MR_hl_field(0, Var_77, 1) = ((MR_Box) (transform_hlds__intermod__write_opt_file_initial_body_5_p_0_4));
    MR_hl_field(0, Var_77, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_77, 3) = ((MR_Box) (Stream_6));
    MR_hl_field(0, Var_77, 4) = ((MR_Box) (MercInfo_32));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&transform_hlds__intermod_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_77, TypeDefns_35, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_78_78);
  parse_tree__parse_tree_out__maybe_format_block_start_blank_line_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), ((MR_Box) (Stream_6)), ForeignEnums_36, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_79_79);
  {
    Var_80 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_80, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_5[8]));
    MR_hl_field(0, Var_80, 1) = ((MR_Box) (transform_hlds__intermod__write_opt_file_initial_body_5_p_0_5));
    MR_hl_field(0, Var_80, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_80, 3) = ((MR_Box) (Stream_6));
    MR_hl_field(0, Var_80, 4) = ((MR_Box) (MercInfo_32));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_80, ForeignEnums_36, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_81_81);
  parse_tree__parse_tree_out__maybe_format_block_start_blank_line_4_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[2]), (MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), ((MR_Box) (Stream_6)), InstDefns_37, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_82_82);
  {
    Var_83 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_83, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_5[9]));
    MR_hl_field(0, Var_83, 1) = ((MR_Box) (transform_hlds__intermod__write_opt_file_initial_body_5_p_0_6));
    MR_hl_field(0, Var_83, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_83, 3) = ((MR_Box) (Stream_6));
    MR_hl_field(0, Var_83, 4) = ((MR_Box) (MercInfo_32));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&transform_hlds__intermod_scalar_common_1[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_83, InstDefns_37, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_84_84);
  parse_tree__parse_tree_out__maybe_format_block_start_blank_line_4_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[3]), (MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), ((MR_Box) (Stream_6)), ModeDefns_38, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_85_85);
  {
    Var_86 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_86, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_5[10]));
    MR_hl_field(0, Var_86, 1) = ((MR_Box) (transform_hlds__intermod__write_opt_file_initial_body_5_p_0_7));
    MR_hl_field(0, Var_86, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_86, 3) = ((MR_Box) (Stream_6));
    MR_hl_field(0, Var_86, 4) = ((MR_Box) (MercInfo_32));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&transform_hlds__intermod_scalar_common_1[3]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_86, ModeDefns_38, ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_IO_87_87);
  parse_tree__parse_tree_out__maybe_format_block_start_blank_line_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), ((MR_Box) (Stream_6)), TypeClasses_39, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_88_88);
  {
    Var_89 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_89, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_5[11]));
    MR_hl_field(0, Var_89, 1) = ((MR_Box) (transform_hlds__intermod__write_opt_file_initial_body_5_p_0_8));
    MR_hl_field(0, Var_89, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_89, 3) = ((MR_Box) (Stream_6));
    MR_hl_field(0, Var_89, 4) = ((MR_Box) (MercInfo_32));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_89, TypeClasses_39, ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_IO_90_90);
  parse_tree__parse_tree_out__maybe_format_block_start_blank_line_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), ((MR_Box) (Stream_6)), Instances_40, ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_IO_91_91);
  {
    Var_92 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_92, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_5[12]));
    MR_hl_field(0, Var_92, 1) = ((MR_Box) (transform_hlds__intermod__write_opt_file_initial_body_5_p_0_9));
    MR_hl_field(0, Var_92, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_92, 3) = ((MR_Box) (Stream_6));
    MR_hl_field(0, Var_92, 4) = ((MR_Box) (MercInfo_32));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_92, Instances_40, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_93_93);
  transform_hlds__intermod_order_pred_info__generate_order_pred_infos_3_p_0(ModuleInfo_10, WriteDeclPredIds_17, &DeclOrderPredInfos_41);
  transform_hlds__intermod_order_pred_info__generate_order_pred_infos_3_p_0(ModuleInfo_10, WriteDefnPredIds_18, &DefnOrderPredInfos_42);
  if ((DeclOrderPredInfos_41 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    PredDecls_43 = (MR_Word) ((MR_Unsigned) 0U);
    ModeDecls_44 = (MR_Word) ((MR_Unsigned) 0U);
    DeclMarkersCord0_45 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_opt_0));
    ImplMarkersCord0_46 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_opt_0));
    TypeSpecs_47 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word PredDeclsCord_50;
    MR_Word ModeDeclsCord_51;
    MR_Word TypeSpecsCord_52;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word OrderPredInfo_204;
    MR_Word OrderPredInfos_205;
    MR_Word STATE_VARIABLE_PredDeclsCord_61_218;
    MR_Word STATE_VARIABLE_ModeDeclsCord_62_219;
    MR_Word STATE_VARIABLE_DeclMarkersCord_63_220;
    MR_Word STATE_VARIABLE_ImplMarkersCord_64_221;
    MR_Word STATE_VARIABLE_TypeSpecsCord_65_222;

    mercury__io__nl_3_p_0(Stream_6);
    Var_95 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0));
    Var_96 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0));
    Var_97 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_opt_0));
    Var_98 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_opt_0));
    Var_99 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0));
    OrderPredInfo_204 = ((MR_Word) ((MR_hl_field(1, DeclOrderPredInfos_41, (MR_Integer) 0))));
    OrderPredInfos_205 = ((MR_Word) ((MR_hl_field(1, DeclOrderPredInfos_41, (MR_Integer) 1))));
    transform_hlds__intermod__intermod_write_pred_decl_16_p_0(MercInfo_32, Stream_6, ModuleInfo_10, OrderPredInfo_204, Var_95, &STATE_VARIABLE_PredDeclsCord_61_218, Var_96, &STATE_VARIABLE_ModeDeclsCord_62_219, Var_97, &STATE_VARIABLE_DeclMarkersCord_63_220, Var_98, &STATE_VARIABLE_ImplMarkersCord_64_221, Var_99, &STATE_VARIABLE_TypeSpecsCord_65_222);
    transform_hlds__intermod__intermod_write_pred_decls_16_p_0(MercInfo_32, Stream_6, ModuleInfo_10, OrderPredInfos_205, STATE_VARIABLE_PredDeclsCord_61_218, &PredDeclsCord_50, STATE_VARIABLE_ModeDeclsCord_62_219, &ModeDeclsCord_51, STATE_VARIABLE_DeclMarkersCord_63_220, &DeclMarkersCord0_45, STATE_VARIABLE_ImplMarkersCord_64_221, &ImplMarkersCord0_46, STATE_VARIABLE_TypeSpecsCord_65_222, &TypeSpecsCord_52);
    PredDecls_43 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), PredDeclsCord_50);
    ModeDecls_44 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), ModeDeclsCord_51);
    TypeSpecs_47 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0), TypeSpecsCord_52);
  }
  transform_hlds__intermod__intermod_write_pred_defns_10_p_0(OutInfoForPreds_34, Stream_6, ModuleInfo_10, DefnOrderPredInfos_42, DeclMarkersCord0_45, &DeclMarkersCord_53, ImplMarkersCord0_46, &ImplMarkersCord_54);
  DeclMarkers_58 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_opt_0), DeclMarkersCord_53);
  ImplMarkers_59 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_opt_0), ImplMarkersCord_54);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_10, &ModuleName_60);
  Var_102 = mercury__term_context__dummy_context_0_f_0();
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreePlainOpt_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_60));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_102));
    MR_hl_field(0, base, 2) = ((MR_Box) (UseMap_25));
    MR_hl_field(0, base, 3) = ((MR_Box) (FIMSpecsSet_27));
    MR_hl_field(0, base, 4) = ((MR_Box) (TypeDefns_35));
    MR_hl_field(0, base, 5) = ((MR_Box) (ForeignEnums_36));
    MR_hl_field(0, base, 6) = ((MR_Box) (InstDefns_37));
    MR_hl_field(0, base, 7) = ((MR_Box) (ModeDefns_38));
    MR_hl_field(0, base, 8) = ((MR_Box) (TypeClasses_39));
    MR_hl_field(0, base, 9) = ((MR_Box) (Instances_40));
    MR_hl_field(0, base, 10) = ((MR_Box) (PredDecls_43));
    MR_hl_field(0, base, 11) = ((MR_Box) (ModeDecls_44));
    MR_hl_field(0, base, 12) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 13) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 14) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 15) = ((MR_Box) (DeclMarkers_58));
    MR_hl_field(0, base, 16) = ((MR_Box) (ImplMarkers_59));
    MR_hl_field(0, base, 17) = ((MR_Box) (TypeSpecs_47));
    MR_hl_field(0, base, 18) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 19) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 20) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 21) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 22) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 23) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 24) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 25) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_defns_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  transform_hlds__intermod__intermod_write_clause_12_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 9)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 10)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 11)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_defns_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  transform_hlds__intermod__IntroducedFrom__pred__intermod_write_pred_defn__898__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_defns_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  transform_hlds__intermod__IntroducedFrom__pred__intermod_write_pred_defn__896__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_defns_10_p_0(
  MR_Word OutInfo_1,
  MR_Word Stream_2,
  MR_Word ModuleInfo_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_DeclMarkers_0_5,
  MR_Word * STATE_VARIABLE_DeclMarkers_6,
  MR_Word STATE_VARIABLE_ImplMarkers_0_7,
  MR_Word * STATE_VARIABLE_ImplMarkers_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ImplMarkers_8 = STATE_VARIABLE_ImplMarkers_0_7;
      *STATE_VARIABLE_DeclMarkers_6 = STATE_VARIABLE_DeclMarkers_0_5;
    }
    else
    {
      MR_Word OrderPredInfo_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word OrderPredInfos_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_DeclMarkers_37_37;
      MR_Word STATE_VARIABLE_ImplMarkers_38_38;
      MR_Word DeclMarkers_40;
      MR_Word ImplMarkers_41;
      MR_String PredName_42;
      MR_Word PredOrFunc_44;
      MR_Word PredId_45;
      MR_Word PredInfo_46;
      MR_Word ModuleName_47;
      MR_Word PredSymName_48;
      MR_Word ClausesInfo_49;
      MR_Word VarTable_50;
      MR_Word HeadVars_51;
      MR_Word ClausesRep_52;
      MR_Word Clauses_54;
      MR_Word GoalType_55;
      MR_Word TVarSet_56;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word ModuleName_81;
      MR_Word PredOrFunc_82;
      MR_String PredName_83;
      MR_Word PredSymName_84;
      MR_Word PredFormArity_85;
      MR_Word UserArity_86;
      MR_Word Markers_87;
      MR_Word MarkerList_88;
      MR_Word PFU_89;
      MR_Word RevDeclMarkers_90;
      MR_Word RevImplMarkers_91;
      MR_Box conv0_STATE_VARIABLE_IO_49_62;
      MR_Box conv1_STATE_VARIABLE_IO_52_65;
      MR_Word _ItemNumbers_53;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_DeclMarkers_0_5;
      MR_Word next_value_of_STATE_VARIABLE_ImplMarkers_0_7;

      mercury__io__nl_3_p_0(Stream_2);
      PredName_42 = ((MR_String) ((MR_hl_field(0, OrderPredInfo_26, (MR_Integer) 0))));
      PredOrFunc_44 = ((MR_Unsigned) ((MR_hl_field(0, OrderPredInfo_26, (MR_Integer) 2))) & (MR_Integer) 1);
      PredId_45 = ((MR_Word) ((MR_hl_field(0, OrderPredInfo_26, (MR_Integer) 3))));
      PredInfo_46 = ((MR_Word) ((MR_hl_field(0, OrderPredInfo_26, (MR_Integer) 4))));
      ModuleName_47 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_46);
      {
        PredSymName_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, PredSymName_48, 0) = ((MR_Box) (ModuleName_47));
        MR_hl_field(1, PredSymName_48, 1) = ((MR_Box) (PredName_42));
      }
      ModuleName_81 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_46);
      PredOrFunc_82 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_46);
      PredName_83 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_46);
      {
        PredSymName_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, PredSymName_84, 0) = ((MR_Box) (ModuleName_81));
        MR_hl_field(1, PredSymName_84, 1) = ((MR_Box) (PredName_83));
      }
      hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_46, &PredFormArity_85);
      parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_82, &UserArity_86, PredFormArity_85);
      hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_46, &Markers_87);
      hlds__hlds_pred__markers_to_marker_list_2_p_0(Markers_87, &MarkerList_88);
      switch (PredOrFunc_82) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          PFU_89 = (MR_Integer) 1;
          break;
        case (MR_Integer) 0:
          PFU_89 = (MR_Integer) 0;
          break;
      }
      transform_hlds__intermod__intermod_gather_pred_marker_pragmas_loop_8_p_0(PFU_89, PredSymName_84, UserArity_86, MarkerList_88, (MR_Word) ((MR_Unsigned) 0U), &RevDeclMarkers_90, (MR_Word) ((MR_Unsigned) 0U), &RevImplMarkers_91);
      mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_opt_0), RevDeclMarkers_90, &DeclMarkers_40);
      mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_opt_0), RevImplMarkers_91, &ImplMarkers_41);
      {
        Var_60 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_60, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_7[0]));
        MR_hl_field(0, Var_60, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_pred_defns_10_p_0_1));
        MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_60, 3) = ((MR_Box) (Stream_2));
      }
      Var_61 = (MR_Word) (DeclMarkers_40);
      mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_60, Var_61, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_49_62);
      {
        Var_63 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_63, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_7[1]));
        MR_hl_field(0, Var_63, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_pred_defns_10_p_0_2));
        MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_63, 3) = ((MR_Box) (Stream_2));
      }
      Var_64 = (MR_Word) (ImplMarkers_41);
      mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_63, Var_64, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_52_65);
      Var_66 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_opt_0), DeclMarkers_40);
      STATE_VARIABLE_DeclMarkers_37_37 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_opt_0), STATE_VARIABLE_DeclMarkers_0_5, Var_66);
      Var_67 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_opt_0), ImplMarkers_41);
      STATE_VARIABLE_ImplMarkers_38_38 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_opt_0), STATE_VARIABLE_ImplMarkers_0_7, Var_67);
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_46, &ClausesInfo_49);
      hlds__hlds_clauses__clauses_info_get_var_table_2_p_0(ClausesInfo_49, &VarTable_50);
      hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(ClausesInfo_49, &HeadVars_51);
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo_49, &ClausesRep_52, &_ItemNumbers_53);
      hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(ClausesRep_52, &Clauses_54);
      hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_46, &GoalType_55);
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_46, &TVarSet_56);
      if (((MR_tag((MR_Word) GoalType_55)) == (MR_Integer) 1))
      {
        MR_Word PromiseType_57 = ((MR_Unsigned) ((MR_hl_field(1, GoalType_55, (MR_Integer) 0))) & (MR_Integer) 3);

        if ((Clauses_54 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.intermod_write_pred_defn\'/10", (MR_String) "assertion not a single clause.");
            return;
          }
        else
        {
          MR_Word Var_79 = ((MR_Word) ((MR_hl_field(1, Clauses_54, (MR_Integer) 1))));
          MR_Word Var_80 = ((MR_Word) ((MR_hl_field(1, Clauses_54, (MR_Integer) 0))));

          if ((Var_79 == (MR_Word) ((MR_Unsigned) 0U)))
            transform_hlds__intermod__write_promise_10_p_0(OutInfo_1, Stream_2, ModuleInfo_3, TVarSet_56, VarTable_50, PromiseType_57, HeadVars_51, Var_80);
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.intermod_write_pred_defn\'/10", (MR_String) "assertion not a single clause.");
              return;
            }
        }
      }
      else
      {
        MR_Word TypeQual_58;
        MR_Word Var_70;
        MR_Box conv2_STATE_VARIABLE_IO_39_39;

        {
          TypeQual_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, TypeQual_58, 0) = ((MR_Box) (TVarSet_56));
          MR_hl_field(1, TypeQual_58, 1) = ((MR_Box) (VarTable_50));
        }
        {
          Var_70 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_70, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_8[0]));
          MR_hl_field(0, Var_70, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_pred_defns_10_p_0_3));
          MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 9));
          MR_hl_field(0, Var_70, 3) = ((MR_Box) (OutInfo_1));
          MR_hl_field(0, Var_70, 4) = ((MR_Box) (Stream_2));
          MR_hl_field(0, Var_70, 5) = ((MR_Box) (ModuleInfo_3));
          MR_hl_field(0, Var_70, 6) = ((MR_Box) (PredId_45));
          MR_hl_field(0, Var_70, 7) = ((MR_Box) (PredSymName_48));
          MR_hl_field(0, Var_70, 8) = ((MR_Box) (PredOrFunc_44));
          MR_hl_field(0, Var_70, 9) = ((MR_Box) (VarTable_50));
          MR_hl_field(0, Var_70, 10) = ((MR_Box) (TypeQual_58));
          MR_hl_field(0, Var_70, 11) = ((MR_Box) (HeadVars_51));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_70, Clauses_54, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_39_39);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = OrderPredInfos_27;
      next_value_of_STATE_VARIABLE_DeclMarkers_0_5 = STATE_VARIABLE_DeclMarkers_37_37;
      next_value_of_STATE_VARIABLE_ImplMarkers_0_7 = STATE_VARIABLE_ImplMarkers_38_38;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_DeclMarkers_0_5 = next_value_of_STATE_VARIABLE_DeclMarkers_0_5;
      STATE_VARIABLE_ImplMarkers_0_7 = next_value_of_STATE_VARIABLE_ImplMarkers_0_7;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod__write_promise_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = parse_tree__var_table__var_table_entry_name_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__intermod__write_promise_10_p_0(
  MR_Word Info_11,
  MR_Word Stream_12,
  MR_Word ModuleInfo_13,
  MR_Word TVarSet_14,
  MR_Word VarTable_15,
  MR_Word PromiseType_16,
  MR_Word HeadVars_17,
  MR_Word Clause_18)
{
  MR_Word HeadVarStrs_20;
  MR_String HeadVarsStr_21;
  MR_Word Goal_22;
  MR_Word InstVarSet_23;
  MR_Word InfoGoal_24;
  MR_Word Var_27;
  MR_Word Var_42;

  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_27, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_6[1]));
    MR_hl_field(0, Var_27, 1) = ((MR_Box) (transform_hlds__intermod__write_promise_10_p_0_1));
    MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_27, 3) = ((MR_Box) (VarTable_15));
  }
  HeadVarStrs_20 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[12]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_27, HeadVars_17);
  HeadVarsStr_21 = mercury__string__join_list_2_f_0((MR_String) ", ", HeadVarStrs_20);
  switch (PromiseType_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      {
        MR_String Var_40;

        Var_40 = parse_tree__parse_tree_out_misc__promise_to_string_1_f_0(PromiseType_16);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) ":- all [");
        mercury__io__write_string_4_p_0(Stream_12, HeadVarsStr_21);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) "] ");
        mercury__io__write_string_4_p_0(Stream_12, Var_40);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n(\n");
      }
      break;
    case (MR_Integer) 3:
      {
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) ":- promise all [");
        mercury__io__write_string_4_p_0(Stream_12, HeadVarsStr_21);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) "] (\n");
      }
      break;
  }
  Goal_22 = hlds__hlds_clauses__clause_body_1_f_0(Clause_18);
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_23);
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (VarTable_15));
  }
  {
    InfoGoal_24 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InfoGoal_24, 0) = ((MR_Box) (Info_11));
    MR_hl_field(0, InfoGoal_24, 1) = ((MR_Box) (ModuleInfo_13));
    MR_hl_field(0, InfoGoal_24, 2) = ((MR_Box) (Var_42));
    MR_hl_field(0, InfoGoal_24, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, InfoGoal_24, 4) = ((MR_Box) (TVarSet_14));
    MR_hl_field(0, InfoGoal_24, 5) = ((MR_Box) (InstVarSet_23));
    MR_hl_field(0, InfoGoal_24, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0(InfoGoal_24, Stream_12, (MR_Unsigned) 1U, (MR_String) "\n).\n", Goal_22);
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decls_16_p_0(
  MR_Word MercInfo_1,
  MR_Word Stream_2,
  MR_Word ModuleInfo_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_PredDeclsCord_0_5,
  MR_Word * STATE_VARIABLE_PredDeclsCord_6,
  MR_Word STATE_VARIABLE_ModeDeclsCord_0_7,
  MR_Word * STATE_VARIABLE_ModeDeclsCord_8,
  MR_Word STATE_VARIABLE_DeclMarkersCord_0_9,
  MR_Word * STATE_VARIABLE_DeclMarkersCord_10,
  MR_Word STATE_VARIABLE_ImplMarkersCord_0_11,
  MR_Word * STATE_VARIABLE_ImplMarkersCord_12,
  MR_Word STATE_VARIABLE_TypeSpecsCord_0_13,
  MR_Word * STATE_VARIABLE_TypeSpecsCord_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_TypeSpecsCord_14 = STATE_VARIABLE_TypeSpecsCord_0_13;
      *STATE_VARIABLE_ImplMarkersCord_12 = STATE_VARIABLE_ImplMarkersCord_0_11;
      *STATE_VARIABLE_DeclMarkersCord_10 = STATE_VARIABLE_DeclMarkersCord_0_9;
      *STATE_VARIABLE_ModeDeclsCord_8 = STATE_VARIABLE_ModeDeclsCord_0_7;
      *STATE_VARIABLE_PredDeclsCord_6 = STATE_VARIABLE_PredDeclsCord_0_5;
    }
    else
    {
      MR_Word OrderPredInfo_41 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word OrderPredInfos_42 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_PredDeclsCord_61_61;
      MR_Word STATE_VARIABLE_ModeDeclsCord_62_62;
      MR_Word STATE_VARIABLE_DeclMarkersCord_63_63;
      MR_Word STATE_VARIABLE_ImplMarkersCord_64_64;
      MR_Word STATE_VARIABLE_TypeSpecsCord_65_65;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_PredDeclsCord_0_5;
      MR_Word next_value_of_STATE_VARIABLE_ModeDeclsCord_0_7;
      MR_Word next_value_of_STATE_VARIABLE_DeclMarkersCord_0_9;
      MR_Word next_value_of_STATE_VARIABLE_ImplMarkersCord_0_11;
      MR_Word next_value_of_STATE_VARIABLE_TypeSpecsCord_0_13;

      transform_hlds__intermod__intermod_write_pred_decl_16_p_0(MercInfo_1, Stream_2, ModuleInfo_3, OrderPredInfo_41, STATE_VARIABLE_PredDeclsCord_0_5, &STATE_VARIABLE_PredDeclsCord_61_61, STATE_VARIABLE_ModeDeclsCord_0_7, &STATE_VARIABLE_ModeDeclsCord_62_62, STATE_VARIABLE_DeclMarkersCord_0_9, &STATE_VARIABLE_DeclMarkersCord_63_63, STATE_VARIABLE_ImplMarkersCord_0_11, &STATE_VARIABLE_ImplMarkersCord_64_64, STATE_VARIABLE_TypeSpecsCord_0_13, &STATE_VARIABLE_TypeSpecsCord_65_65);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = OrderPredInfos_42;
      next_value_of_STATE_VARIABLE_PredDeclsCord_0_5 = STATE_VARIABLE_PredDeclsCord_61_61;
      next_value_of_STATE_VARIABLE_ModeDeclsCord_0_7 = STATE_VARIABLE_ModeDeclsCord_62_62;
      next_value_of_STATE_VARIABLE_DeclMarkersCord_0_9 = STATE_VARIABLE_DeclMarkersCord_63_63;
      next_value_of_STATE_VARIABLE_ImplMarkersCord_0_11 = STATE_VARIABLE_ImplMarkersCord_64_64;
      next_value_of_STATE_VARIABLE_TypeSpecsCord_0_13 = STATE_VARIABLE_TypeSpecsCord_65_65;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_PredDeclsCord_0_5 = next_value_of_STATE_VARIABLE_PredDeclsCord_0_5;
      STATE_VARIABLE_ModeDeclsCord_0_7 = next_value_of_STATE_VARIABLE_ModeDeclsCord_0_7;
      STATE_VARIABLE_DeclMarkersCord_0_9 = next_value_of_STATE_VARIABLE_DeclMarkersCord_0_9;
      STATE_VARIABLE_ImplMarkersCord_0_11 = next_value_of_STATE_VARIABLE_ImplMarkersCord_0_11;
      STATE_VARIABLE_TypeSpecsCord_0_13 = next_value_of_STATE_VARIABLE_TypeSpecsCord_0_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decl_16_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  transform_hlds__intermod__IntroducedFrom__pred__intermod_write_pred_decl__713__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decl_16_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  transform_hlds__intermod__IntroducedFrom__pred__intermod_write_pred_decl__710__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decl_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  transform_hlds__intermod__IntroducedFrom__pred__intermod_write_pred_decl__708__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decl_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  transform_hlds__intermod__IntroducedFrom__pred__intermod_write_pred_decl__706__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decl_16_p_0(
  MR_Word MercInfo_17,
  MR_Word Stream_18,
  MR_Word ModuleInfo_19,
  MR_Word OrderPredInfo_20,
  MR_Word STATE_VARIABLE_PredDeclsCord_0_55,
  MR_Word * STATE_VARIABLE_PredDeclsCord_56,
  MR_Word STATE_VARIABLE_ModeDeclsCord_0_57,
  MR_Word * STATE_VARIABLE_ModeDeclsCord_58,
  MR_Word STATE_VARIABLE_DeclMarkersCord_0_59,
  MR_Word * STATE_VARIABLE_DeclMarkersCord_60,
  MR_Word STATE_VARIABLE_ImplMarkersCord_0_61,
  MR_Word * STATE_VARIABLE_ImplMarkersCord_62,
  MR_Word STATE_VARIABLE_TypeSpecsCord_0_63,
  MR_Word * STATE_VARIABLE_TypeSpecsCord_64)
{
  MR_bool succeeded;
  MR_String PredName_27 = ((MR_String) ((MR_hl_field(0, OrderPredInfo_20, (MR_Integer) 0))));
  MR_Word PredOrFunc_29 = ((MR_Unsigned) ((MR_hl_field(0, OrderPredInfo_20, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word PredId_30 = ((MR_Word) ((MR_hl_field(0, OrderPredInfo_20, (MR_Integer) 3))));
  MR_Word PredInfo_31 = ((MR_Word) ((MR_hl_field(0, OrderPredInfo_20, (MR_Integer) 4))));
  MR_Word ModuleName_32;
  MR_Word TVarSet_33;
  MR_Word ExistQVars_34;
  MR_Word ArgTypes_35;
  MR_Word Purity_36;
  MR_Word ClassContext_37;
  MR_Word Context_38;
  MR_Word PredSymName_39;
  MR_Word TypesAndMaybeModes_40;
  MR_Word InstVarSet_44;
  MR_Word PredDecl_46;
  MR_Word ProcMap_48;
  MR_Word SortedProcPairs_49;
  MR_Word ModeDecls_50;
  MR_Word DeclMarkers_51;
  MR_Word ImplMarkers_52;
  MR_Word TypeSpecs_53;
  MR_Word Var_70;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_78;
  MR_Word Var_82;
  MR_Word Var_84;
  MR_Word Var_86;
  MR_Word Var_88;
  MR_Word ModuleName_117;
  MR_Word PredOrFunc_118;
  MR_String PredName_119;
  MR_Word PredSymName_120;
  MR_Word PredFormArity_121;
  MR_Word UserArity_122;
  MR_Word Markers_123;
  MR_Word MarkerList_124;
  MR_Word PFU_125;
  MR_Word RevDeclMarkers_126;
  MR_Word RevImplMarkers_127;
  MR_Word TypeSpecInfo_132;
  MR_Word PragmaMap_133;
  MR_Box conv0_STATE_VARIABLE_IO_69_69;
  MR_Word TypeSpecsPrime_134;
  MR_Box conv1_STATE_VARIABLE_IO_71_71;
  MR_Box conv2_STATE_VARIABLE_IO_74_74;
  MR_Box conv3_STATE_VARIABLE_IO_77_77;
  MR_Box conv4_STATE_VARIABLE_IO_66;

  ModuleName_32 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_31);
  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_31, &TVarSet_33, &ExistQVars_34, &ArgTypes_35);
  hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_31, &Purity_36);
  hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_31, &ClassContext_37);
  hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_31, &Context_38);
  {
    PredSymName_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PredSymName_39, 0) = ((MR_Box) (ModuleName_32));
    MR_hl_field(1, PredSymName_39, 1) = ((MR_Box) (PredName_27));
  }
  {
    TypesAndMaybeModes_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypesAndMaybeModes_40, 0) = ((MR_Box) (ArgTypes_35));
  }
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_44);
  {
    PredDecl_46 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredDecl_46, 0) = ((MR_Box) (PredSymName_39));
    MR_hl_field(0, PredDecl_46, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_29));
    MR_hl_field(0, PredDecl_46, 2) = ((MR_Box) (TypesAndMaybeModes_40));
    MR_hl_field(0, PredDecl_46, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredDecl_46, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredDecl_46, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredDecl_46, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredDecl_46, 7) = ((MR_Box) (TVarSet_33));
    MR_hl_field(0, PredDecl_46, 8) = ((MR_Box) (InstVarSet_44));
    MR_hl_field(0, PredDecl_46, 9) = ((MR_Box) (ExistQVars_34));
    MR_hl_field(0, PredDecl_46, 10) = (MR_Box) ((MR_Unsigned) (Purity_36));
    MR_hl_field(0, PredDecl_46, 11) = ((MR_Box) (ClassContext_37));
    MR_hl_field(0, PredDecl_46, 12) = ((MR_Box) (Context_38));
    MR_hl_field(0, PredDecl_46, 13) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  parse_tree__parse_tree_out__mercury_format_item_pred_decl_6_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), (MR_Integer) 0, (MR_Integer) 0, ((MR_Box) (Stream_18)), PredDecl_46, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_69_69);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_31, &ProcMap_48);
  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcMap_48, &SortedProcPairs_49);
  transform_hlds__intermod__intermod_gather_pred_valid_modes_4_p_0(PredOrFunc_29, PredSymName_39, SortedProcPairs_49, &ModeDecls_50);
  ModuleName_117 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_31);
  PredOrFunc_118 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_31);
  PredName_119 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_31);
  {
    PredSymName_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PredSymName_120, 0) = ((MR_Box) (ModuleName_117));
    MR_hl_field(1, PredSymName_120, 1) = ((MR_Box) (PredName_119));
  }
  hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_31, &PredFormArity_121);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_118, &UserArity_122, PredFormArity_121);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_31, &Markers_123);
  hlds__hlds_pred__markers_to_marker_list_2_p_0(Markers_123, &MarkerList_124);
  switch (PredOrFunc_118) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      PFU_125 = (MR_Integer) 1;
      break;
    case (MR_Integer) 0:
      PFU_125 = (MR_Integer) 0;
      break;
  }
  transform_hlds__intermod__intermod_gather_pred_marker_pragmas_loop_8_p_0(PFU_125, PredSymName_120, UserArity_122, MarkerList_124, (MR_Word) ((MR_Unsigned) 0U), &RevDeclMarkers_126, (MR_Word) ((MR_Unsigned) 0U), &RevImplMarkers_127);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_opt_0), RevDeclMarkers_126, &DeclMarkers_51);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_opt_0), RevImplMarkers_127, &ImplMarkers_52);
  hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo_19, &TypeSpecInfo_132);
  PragmaMap_133 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo_132, (MR_Integer) 3))));
  succeeded = mercury__multi_map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0), PragmaMap_133, ((MR_Box) (PredId_30)), &TypeSpecsPrime_134);
  if (succeeded)
    TypeSpecs_53 = TypeSpecsPrime_134;
  else
    TypeSpecs_53 = (MR_Word) ((MR_Unsigned) 0U);
  {
    Var_70 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_70, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_5[4]));
    MR_hl_field(0, Var_70, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_pred_decl_16_p_0_1));
    MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_70, 3) = ((MR_Box) (MercInfo_17));
    MR_hl_field(0, Var_70, 4) = ((MR_Box) (Stream_18));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_70, ModeDecls_50, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_71_71);
  {
    Var_72 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_72, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_7[0]));
    MR_hl_field(0, Var_72, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_pred_decl_16_p_0_2));
    MR_hl_field(0, Var_72, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_72, 3) = ((MR_Box) (Stream_18));
  }
  Var_73 = (MR_Word) (DeclMarkers_51);
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_72, Var_73, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_74_74);
  {
    Var_75 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_75, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_7[1]));
    MR_hl_field(0, Var_75, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_pred_decl_16_p_0_3));
    MR_hl_field(0, Var_75, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_75, 3) = ((MR_Box) (Stream_18));
  }
  Var_76 = (MR_Word) (ImplMarkers_52);
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_75, Var_76, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_77_77);
  {
    Var_78 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_78, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_5[5]));
    MR_hl_field(0, Var_78, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_pred_decl_16_p_0_4));
    MR_hl_field(0, Var_78, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_78, 3) = ((MR_Box) (Stream_18));
    MR_hl_field(0, Var_78, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_78, TypeSpecs_53, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_66);
  mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), ((MR_Box) (PredDecl_46)), STATE_VARIABLE_PredDeclsCord_0_55, STATE_VARIABLE_PredDeclsCord_56);
  Var_82 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), ModeDecls_50);
  *STATE_VARIABLE_ModeDeclsCord_58 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), STATE_VARIABLE_ModeDeclsCord_0_57, Var_82);
  Var_84 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_opt_0), DeclMarkers_51);
  *STATE_VARIABLE_DeclMarkersCord_60 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_opt_0), STATE_VARIABLE_DeclMarkersCord_0_59, Var_84);
  Var_86 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_opt_0), ImplMarkers_52);
  *STATE_VARIABLE_ImplMarkersCord_62 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_opt_0), STATE_VARIABLE_ImplMarkersCord_0_61, Var_86);
  Var_88 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0), TypeSpecs_53);
  *STATE_VARIABLE_TypeSpecsCord_64 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0), STATE_VARIABLE_TypeSpecsCord_0_63, Var_88);
}

static void MR_CALL 
transform_hlds__intermod__intermod_gather_pred_marker_pragmas_loop_8_p_0(
  MR_Word PredOrFunc_1,
  MR_Word PredSymName_2,
  MR_Word UserArity_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevDeclMarkers_0_5,
  MR_Word * STATE_VARIABLE_RevDeclMarkers_6,
  MR_Word STATE_VARIABLE_RevImplMarkers_0_7,
  MR_Word * STATE_VARIABLE_RevImplMarkers_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RevImplMarkers_8 = STATE_VARIABLE_RevImplMarkers_0_7;
      *STATE_VARIABLE_RevDeclMarkers_6 = STATE_VARIABLE_RevDeclMarkers_0_5;
    }
    else
    {
      MR_Word Marker_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Markers_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_RevDeclMarkers_36_36;
      MR_Word STATE_VARIABLE_RevImplMarkers_39_39;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_RevDeclMarkers_0_5;
      MR_Word next_value_of_STATE_VARIABLE_RevImplMarkers_0_7;

      switch (Marker_21) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_RevDeclMarkers_36_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_39_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 22:
          {
            STATE_VARIABLE_RevDeclMarkers_36_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_39_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 21:
          {
            STATE_VARIABLE_RevDeclMarkers_36_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_39_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 12:
          {
            STATE_VARIABLE_RevDeclMarkers_36_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_39_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 11:
          {
            STATE_VARIABLE_RevDeclMarkers_36_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_39_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 10:
          {
            STATE_VARIABLE_RevDeclMarkers_36_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_39_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 20:
          {
            MR_Word PredSpec_26;
            MR_Word DeclMarker_27;
            MR_Word Var_34;

            {
              PredSpec_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredSpec_26, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_1));
              MR_hl_field(0, PredSpec_26, 1) = ((MR_Box) (PredSymName_2));
              MR_hl_field(0, PredSpec_26, 2) = ((MR_Box) (UserArity_3));
            }
            Var_34 = mercury__term_context__dummy_context_0_f_0();
            {
              DeclMarker_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, DeclMarker_27, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(0, DeclMarker_27, 1) = ((MR_Box) (PredSpec_26));
              MR_hl_field(0, DeclMarker_27, 2) = ((MR_Box) (Var_34));
              MR_hl_field(0, DeclMarker_27, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              STATE_VARIABLE_RevDeclMarkers_36_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevDeclMarkers_36_36, 0) = ((MR_Box) (DeclMarker_27));
              MR_hl_field(1, STATE_VARIABLE_RevDeclMarkers_36_36, 1) = ((MR_Box) (STATE_VARIABLE_RevDeclMarkers_0_5));
            }
            STATE_VARIABLE_RevImplMarkers_39_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 29:
          {
            STATE_VARIABLE_RevDeclMarkers_36_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_39_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 27:
          {
            STATE_VARIABLE_RevDeclMarkers_36_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_39_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 26:
          {
            STATE_VARIABLE_RevDeclMarkers_36_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_39_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 25:
          {
            STATE_VARIABLE_RevDeclMarkers_36_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_39_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 28:
          {
            STATE_VARIABLE_RevDeclMarkers_36_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_39_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 7:
          {
            STATE_VARIABLE_RevDeclMarkers_36_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_39_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 3:
          {
            STATE_VARIABLE_RevDeclMarkers_36_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_39_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_RevDeclMarkers_36_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_39_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 14:
          {
            STATE_VARIABLE_RevDeclMarkers_36_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_39_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 15:
          {
            STATE_VARIABLE_RevDeclMarkers_36_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_39_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 9:
          {
            STATE_VARIABLE_RevDeclMarkers_36_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_39_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 23:
          {
            MR_Word ImplMarker_29;
            MR_Word Var_37;
            MR_Word PredSpec_42;

            {
              PredSpec_42 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredSpec_42, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_1));
              MR_hl_field(0, PredSpec_42, 1) = ((MR_Box) (PredSymName_2));
              MR_hl_field(0, PredSpec_42, 2) = ((MR_Box) (UserArity_3));
            }
            Var_37 = mercury__term_context__dummy_context_0_f_0();
            {
              ImplMarker_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ImplMarker_29, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
              MR_hl_field(0, ImplMarker_29, 1) = ((MR_Box) (PredSpec_42));
              MR_hl_field(0, ImplMarker_29, 2) = ((MR_Box) (Var_37));
              MR_hl_field(0, ImplMarker_29, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              STATE_VARIABLE_RevImplMarkers_39_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevImplMarkers_39_39, 0) = ((MR_Box) (ImplMarker_29));
              MR_hl_field(1, STATE_VARIABLE_RevImplMarkers_39_39, 1) = ((MR_Box) (STATE_VARIABLE_RevImplMarkers_0_7));
            }
            STATE_VARIABLE_RevDeclMarkers_36_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
          }
          break;
        case (MR_Integer) 24:
          {
            STATE_VARIABLE_RevDeclMarkers_36_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_39_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 13:
          {
            STATE_VARIABLE_RevDeclMarkers_36_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_39_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 5:
          {
            STATE_VARIABLE_RevDeclMarkers_36_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_39_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 4:
          {
            STATE_VARIABLE_RevDeclMarkers_36_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_39_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 18:
          {
            MR_Word ImplMarker_44;
            MR_Word Var_45;
            MR_Word PredSpec_47;

            {
              PredSpec_47 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredSpec_47, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_1));
              MR_hl_field(0, PredSpec_47, 1) = ((MR_Box) (PredSymName_2));
              MR_hl_field(0, PredSpec_47, 2) = ((MR_Box) (UserArity_3));
            }
            Var_45 = mercury__term_context__dummy_context_0_f_0();
            {
              ImplMarker_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ImplMarker_44, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 7));
              MR_hl_field(0, ImplMarker_44, 1) = ((MR_Box) (PredSpec_47));
              MR_hl_field(0, ImplMarker_44, 2) = ((MR_Box) (Var_45));
              MR_hl_field(0, ImplMarker_44, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              STATE_VARIABLE_RevImplMarkers_39_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevImplMarkers_39_39, 0) = ((MR_Box) (ImplMarker_44));
              MR_hl_field(1, STATE_VARIABLE_RevImplMarkers_39_39, 1) = ((MR_Box) (STATE_VARIABLE_RevImplMarkers_0_7));
            }
            STATE_VARIABLE_RevDeclMarkers_36_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
          }
          break;
        case (MR_Integer) 16:
          {
            MR_Word ImplMarker_49;
            MR_Word Var_50;
            MR_Word PredSpec_52;

            {
              PredSpec_52 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredSpec_52, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_1));
              MR_hl_field(0, PredSpec_52, 1) = ((MR_Box) (PredSymName_2));
              MR_hl_field(0, PredSpec_52, 2) = ((MR_Box) (UserArity_3));
            }
            Var_50 = mercury__term_context__dummy_context_0_f_0();
            {
              ImplMarker_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ImplMarker_49, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 5));
              MR_hl_field(0, ImplMarker_49, 1) = ((MR_Box) (PredSpec_52));
              MR_hl_field(0, ImplMarker_49, 2) = ((MR_Box) (Var_50));
              MR_hl_field(0, ImplMarker_49, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              STATE_VARIABLE_RevImplMarkers_39_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevImplMarkers_39_39, 0) = ((MR_Box) (ImplMarker_49));
              MR_hl_field(1, STATE_VARIABLE_RevImplMarkers_39_39, 1) = ((MR_Box) (STATE_VARIABLE_RevImplMarkers_0_7));
            }
            STATE_VARIABLE_RevDeclMarkers_36_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
          }
          break;
        case (MR_Integer) 17:
          {
            MR_Word ImplMarker_54;
            MR_Word Var_55;
            MR_Word PredSpec_57;

            {
              PredSpec_57 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredSpec_57, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_1));
              MR_hl_field(0, PredSpec_57, 1) = ((MR_Box) (PredSymName_2));
              MR_hl_field(0, PredSpec_57, 2) = ((MR_Box) (UserArity_3));
            }
            Var_55 = mercury__term_context__dummy_context_0_f_0();
            {
              ImplMarker_54 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ImplMarker_54, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 6));
              MR_hl_field(0, ImplMarker_54, 1) = ((MR_Box) (PredSpec_57));
              MR_hl_field(0, ImplMarker_54, 2) = ((MR_Box) (Var_55));
              MR_hl_field(0, ImplMarker_54, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              STATE_VARIABLE_RevImplMarkers_39_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevImplMarkers_39_39, 0) = ((MR_Box) (ImplMarker_54));
              MR_hl_field(1, STATE_VARIABLE_RevImplMarkers_39_39, 1) = ((MR_Box) (STATE_VARIABLE_RevImplMarkers_0_7));
            }
            STATE_VARIABLE_RevDeclMarkers_36_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
          }
          break;
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_RevDeclMarkers_36_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_39_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 19:
          {
            MR_Word PredSpec_59;
            MR_Word DeclMarker_60;
            MR_Word Var_61;

            {
              PredSpec_59 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredSpec_59, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_1));
              MR_hl_field(0, PredSpec_59, 1) = ((MR_Box) (PredSymName_2));
              MR_hl_field(0, PredSpec_59, 2) = ((MR_Box) (UserArity_3));
            }
            Var_61 = mercury__term_context__dummy_context_0_f_0();
            {
              DeclMarker_60 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, DeclMarker_60, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(0, DeclMarker_60, 1) = ((MR_Box) (PredSpec_59));
              MR_hl_field(0, DeclMarker_60, 2) = ((MR_Box) (Var_61));
              MR_hl_field(0, DeclMarker_60, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              STATE_VARIABLE_RevDeclMarkers_36_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevDeclMarkers_36_36, 0) = ((MR_Box) (DeclMarker_60));
              MR_hl_field(1, STATE_VARIABLE_RevDeclMarkers_36_36, 1) = ((MR_Box) (STATE_VARIABLE_RevDeclMarkers_0_5));
            }
            STATE_VARIABLE_RevImplMarkers_39_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word ImplMarker_64;
            MR_Word Var_65;
            MR_Word PredSpec_67;

            {
              PredSpec_67 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredSpec_67, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_1));
              MR_hl_field(0, PredSpec_67, 1) = ((MR_Box) (PredSymName_2));
              MR_hl_field(0, PredSpec_67, 2) = ((MR_Box) (UserArity_3));
            }
            Var_65 = mercury__term_context__dummy_context_0_f_0();
            {
              ImplMarker_64 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ImplMarker_64, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(0, ImplMarker_64, 1) = ((MR_Box) (PredSpec_67));
              MR_hl_field(0, ImplMarker_64, 2) = ((MR_Box) (Var_65));
              MR_hl_field(0, ImplMarker_64, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              STATE_VARIABLE_RevImplMarkers_39_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevImplMarkers_39_39, 0) = ((MR_Box) (ImplMarker_64));
              MR_hl_field(1, STATE_VARIABLE_RevImplMarkers_39_39, 1) = ((MR_Box) (STATE_VARIABLE_RevImplMarkers_0_7));
            }
            STATE_VARIABLE_RevDeclMarkers_36_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word ImplMarker_69;
            MR_Word Var_70;
            MR_Word PredSpec_72;

            {
              PredSpec_72 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredSpec_72, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_1));
              MR_hl_field(0, PredSpec_72, 1) = ((MR_Box) (PredSymName_2));
              MR_hl_field(0, PredSpec_72, 2) = ((MR_Box) (UserArity_3));
            }
            Var_70 = mercury__term_context__dummy_context_0_f_0();
            {
              ImplMarker_69 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ImplMarker_69, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(0, ImplMarker_69, 1) = ((MR_Box) (PredSpec_72));
              MR_hl_field(0, ImplMarker_69, 2) = ((MR_Box) (Var_70));
              MR_hl_field(0, ImplMarker_69, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              STATE_VARIABLE_RevImplMarkers_39_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevImplMarkers_39_39, 0) = ((MR_Box) (ImplMarker_69));
              MR_hl_field(1, STATE_VARIABLE_RevImplMarkers_39_39, 1) = ((MR_Box) (STATE_VARIABLE_RevImplMarkers_0_7));
            }
            STATE_VARIABLE_RevDeclMarkers_36_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Markers_22;
      next_value_of_STATE_VARIABLE_RevDeclMarkers_0_5 = STATE_VARIABLE_RevDeclMarkers_36_36;
      next_value_of_STATE_VARIABLE_RevImplMarkers_0_7 = STATE_VARIABLE_RevImplMarkers_39_39;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_RevDeclMarkers_0_5 = next_value_of_STATE_VARIABLE_RevDeclMarkers_0_5;
      STATE_VARIABLE_RevImplMarkers_0_7 = next_value_of_STATE_VARIABLE_RevImplMarkers_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_gather_pred_valid_modes_4_p_0(
  MR_Word PredOrFunc_1,
  MR_Word PredSymName_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ProcIdInfo_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ProcIdInfos_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word HeadModeDecl_11;
    MR_Word TailModeDecls_12;
    MR_Word ProcInfo_14;
    MR_Word MaybeArgModes_15;
    MR_Word MaybeDetism_16;
    MR_Word ArgModes_19;
    MR_Word Detism_20;
    MR_Word InstVarSet_22;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word ArgModesPrime_17;
    MR_Word DetismPrime_18;

    transform_hlds__intermod__intermod_gather_pred_valid_modes_4_p_0(PredOrFunc_1, PredSymName_2, ProcIdInfos_10, &TailModeDecls_12);
    ProcInfo_14 = ((MR_Word) ((MR_hl_field(0, ProcIdInfo_9, (MR_Integer) 1))));
    hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(ProcInfo_14, &MaybeArgModes_15);
    hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_14, &MaybeDetism_16);
    succeeded = (MaybeArgModes_15 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgModesPrime_17 = ((MR_Word) ((MR_hl_field(1, MaybeArgModes_15, (MR_Integer) 0))));
      succeeded = (MaybeDetism_16 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        DetismPrime_18 = ((MR_Word) ((MR_hl_field(1, MaybeDetism_16, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      ArgModes_19 = ArgModesPrime_17;
      Detism_20 = DetismPrime_18;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.intermod_gather_pred_valid_modes\'/4", (MR_String) "attempt to write undeclared mode");
        return;
      }
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_22);
    {
      Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_25, 0) = ((MR_Box) (PredOrFunc_1));
    }
    {
      Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_26, 0) = ((MR_Box) (Detism_20));
    }
    Var_27 = mercury__term_context__dummy_context_0_f_0();
    {
      HeadModeDecl_11 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, HeadModeDecl_11, 0) = ((MR_Box) (PredSymName_2));
      MR_hl_field(0, HeadModeDecl_11, 1) = ((MR_Box) (Var_25));
      MR_hl_field(0, HeadModeDecl_11, 2) = ((MR_Box) (ArgModes_19));
      MR_hl_field(0, HeadModeDecl_11, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, HeadModeDecl_11, 4) = ((MR_Box) (Var_26));
      MR_hl_field(0, HeadModeDecl_11, 5) = ((MR_Box) (InstVarSet_22));
      MR_hl_field(0, HeadModeDecl_11, 6) = ((MR_Box) (Var_27));
      MR_hl_field(0, HeadModeDecl_11, 7) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadModeDecl_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (TailModeDecls_12));
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_gather_instances_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InstancesCord_22;

  transform_hlds__intermod__intermod_gather_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InstancesCord_22);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InstancesCord_22));
}

static void MR_CALL 
transform_hlds__intermod__intermod_gather_instances_2_p_0(
  MR_Word InstanceDefns_3,
  MR_Word * Instances_4)
{
  MR_Word SortedInstanceDefns_5;
  MR_Word InstancesCord_6;
  MR_Word Var_8;
  MR_Box conv1_InstancesCord_6;

  mercury__list__sort_2_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_2[4]), InstanceDefns_3, &SortedInstanceDefns_5);
  Var_8 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0));
  mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_2[4]), (MR_Word) (&transform_hlds__intermod_scalar_common_1[11]), (MR_Word) (&transform_hlds__intermod_scalar_common_2[6]), SortedInstanceDefns_5, ((MR_Box) (Var_8)), &conv1_InstancesCord_6);
  InstancesCord_6 = ((MR_Word) (conv1_InstancesCord_6));
  *Instances_4 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), InstancesCord_6);
}

static void MR_CALL 
transform_hlds__intermod__intermod_gather_classes_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeClassesCord_27;

  transform_hlds__intermod__intermod_gather_class_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_TypeClassesCord_27);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_TypeClassesCord_27));
}

static void MR_CALL 
transform_hlds__intermod__intermod_gather_classes_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * TypeClasses_4)
{
  MR_Word ModuleName_5;
  MR_Word ClassDefnMap_6;
  MR_Word TypeClassesCord_7;
  MR_Word Var_8;
  MR_Word Var_9;
  MR_Box conv1_TypeClassesCord_7;

  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_3, &ModuleName_5);
  hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_3, &ClassDefnMap_6);
  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_5[3]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (transform_hlds__intermod__intermod_gather_classes_2_p_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (ModuleName_5));
  }
  Var_9 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0));
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[9]), Var_8, ClassDefnMap_6, ((MR_Box) (Var_9)), &conv1_TypeClassesCord_7);
  TypeClassesCord_7 = ((MR_Word) (conv1_TypeClassesCord_7));
  *TypeClasses_4 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), TypeClassesCord_7);
}

static void MR_CALL 
transform_hlds__intermod__intermod_gather_modes_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModeDefnsCord_21;

  transform_hlds__intermod__intermod_gather_mode_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_ModeDefnsCord_21);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_ModeDefnsCord_21));
}

static void MR_CALL 
transform_hlds__intermod__intermod_gather_modes_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * ModeDefns_4)
{
  MR_Word ModuleName_5;
  MR_Word Modes_6;
  MR_Word ModeDefnMap_7;
  MR_Word ModeDefnsCord_8;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Box conv1_ModeDefnsCord_8;

  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_3, &ModuleName_5);
  hlds__hlds_module__module_info_get_mode_table_2_p_0(ModuleInfo_3, &Modes_6);
  hlds__hlds_inst_mode__mode_table_get_mode_defns_2_p_0(Modes_6, &ModeDefnMap_7);
  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_9, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_5[2]));
    MR_hl_field(0, Var_9, 1) = ((MR_Box) (transform_hlds__intermod__intermod_gather_modes_2_p_0_1));
    MR_hl_field(0, Var_9, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_9, 3) = ((MR_Box) (ModuleName_5));
  }
  Var_10 = mercury__cord__init_0_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[3]));
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[8]), Var_9, ModeDefnMap_7, ((MR_Box) (Var_10)), &conv1_ModeDefnsCord_8);
  ModeDefnsCord_8 = ((MR_Word) (conv1_ModeDefnsCord_8));
  *ModeDefns_4 = mercury__cord__list_1_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[3]), ModeDefnsCord_8);
}

static void MR_CALL 
transform_hlds__intermod__intermod_gather_insts_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InstDefnsCord_27;

  transform_hlds__intermod__intermod_gather_inst_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_InstDefnsCord_27);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_InstDefnsCord_27));
}

static void MR_CALL 
transform_hlds__intermod__intermod_gather_insts_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * InstDefns_4)
{
  MR_Word ModuleName_5;
  MR_Word Insts_6;
  MR_Word UserInstMap_7;
  MR_Word InstDefnsCord_8;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Box conv1_InstDefnsCord_8;

  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_3, &ModuleName_5);
  hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_3, &Insts_6);
  hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(Insts_6, &UserInstMap_7);
  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_9, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_5[1]));
    MR_hl_field(0, Var_9, 1) = ((MR_Box) (transform_hlds__intermod__intermod_gather_insts_2_p_0_1));
    MR_hl_field(0, Var_9, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_9, 3) = ((MR_Box) (ModuleName_5));
  }
  Var_10 = mercury__cord__init_0_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[2]));
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[7]), Var_9, UserInstMap_7, ((MR_Box) (Var_10)), &conv1_InstDefnsCord_8);
  InstDefnsCord_8 = ((MR_Word) (conv1_InstDefnsCord_8));
  *InstDefns_4 = mercury__cord__list_1_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[2]), InstDefnsCord_8);
}

static void MR_CALL 
transform_hlds__intermod__intermod_gather_types_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_TypeDefnsCord_57;
  MR_Word conv0_STATE_VARIABLE_ForeignEnumsCord_59;

  transform_hlds__intermod__intermod_gather_type_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_TypeDefnsCord_57, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ForeignEnumsCord_59);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_TypeDefnsCord_57));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ForeignEnumsCord_59));
}

static void MR_CALL 
transform_hlds__intermod__intermod_gather_types_3_p_0(
  MR_Word Types_4,
  MR_Word * TypeDefns_5,
  MR_Word * ForeignEnums_6)
{
  MR_Word SortedTypes_7;
  MR_Word TypeDefnsCord_8;
  MR_Word ForeignEnumsCord_9;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Box conv3_TypeDefnsCord_8;
  MR_Box conv2_ForeignEnumsCord_9;

  mercury__list__sort_2_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_2[2]), Types_4, &SortedTypes_7);
  Var_11 = mercury__cord__init_0_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[1]));
  Var_12 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0));
  mercury__list__foldl2_6_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_2[2]), (MR_Word) (&transform_hlds__intermod_scalar_common_1[4]), (MR_Word) (&transform_hlds__intermod_scalar_common_1[5]), (MR_Word) (&transform_hlds__intermod_scalar_common_2[5]), SortedTypes_7, ((MR_Box) (Var_11)), &conv3_TypeDefnsCord_8, ((MR_Box) (Var_12)), &conv2_ForeignEnumsCord_9);
  TypeDefnsCord_8 = ((MR_Word) (conv3_TypeDefnsCord_8));
  ForeignEnumsCord_9 = ((MR_Word) (conv2_ForeignEnumsCord_9));
  *TypeDefns_5 = mercury__cord__list_1_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[1]), TypeDefnsCord_8);
  *ForeignEnums_6 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ForeignEnumsCord_9);
}

static void MR_CALL 
transform_hlds__intermod__some_type_needs_to_be_written_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word TypeDefn_4;
      MR_Word TypeCtorDefns_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TypeStatus_7;
      MR_Word Var_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Var_11;

      TypeDefn_4 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 1))));
      hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_4, &TypeStatus_7);
      Var_11 = (MR_Word) (TypeStatus_7);
      if ((Var_11 == (MR_Word) ((MR_Unsigned) 20U)))
        succeeded = MR_TRUE;
      else
      if ((Var_11 == (MR_Word) ((MR_Unsigned) 28U)))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
      if (succeeded)
        *HeadVar__2_2 = (MR_Integer) 1;
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = TypeCtorDefns_5;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____maybe_first_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__intermod____Unify____maybe_first_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__intermod____Compare____maybe_first_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__intermod____Compare____maybe_first_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__intermod__init(void)
{
}

void mercury__transform_hlds__intermod__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0);
}

void mercury__transform_hlds__intermod__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__intermod__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.intermod.
