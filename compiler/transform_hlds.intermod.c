/*
** Automatically generated from `intermod.m'
** by the Mercury compiler,
** version rotd-2026-05-28
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
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
#include "parse_tree.canonicalize_interface.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_item.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_pragma.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.parse_tree_to_term.mih"
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
#include "parse_tree.vartypes.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
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
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




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

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__strip_headvar_unifications__1138__1_4_p_0(
  MR_Word Clause0_6,
  MR_Word HeadVarMap_15,
  MR_Word LambdaHeadVar__1_23,
  MR_Word * LambdaHeadVar__2_24);

static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_format_clause__1074__1_1_p_0(
  MR_Word LambdaHeadVar__1_74);

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_format_pred_defn__969__1_4_p_0(
  MR_Word HeadVar__2_70,
  MR_Word HeadVar__3_71,
  MR_Word * HeadVar__4_72);

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_format_pred_defn__967__1_4_p_0(
  MR_Word HeadVar__2_64,
  MR_Word HeadVar__3_65,
  MR_Word * HeadVar__4_66);

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_format_pred_decl__781__1_5_p_0(
  MR_Word Lang_52,
  MR_Word HeadVar__3_103,
  MR_Word HeadVar__4_104,
  MR_Word * HeadVar__5_105);

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_format_pred_decl__778__1_4_p_0(
  MR_Word HeadVar__2_98,
  MR_Word HeadVar__3_99,
  MR_Word * HeadVar__4_100);

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_format_pred_decl__776__1_4_p_0(
  MR_Word HeadVar__2_93,
  MR_Word HeadVar__3_94,
  MR_Word * HeadVar__4_95);

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_format_pred_decl__774__1_5_p_0(
  MR_Word MercInfo_16,
  MR_Word HeadVar__3_87,
  MR_Word HeadVar__4_88,
  MR_Word * HeadVar__5_89);

static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__unmake_hlds_class_fundep_arg_posns__648__1_2_f_0(
  MR_Word TVars_4,
  MR_Integer HeadVar__2_12);

static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__gather_foreign_enum_value_pair__517__1_2_p_0(
  MR_Integer Arity_11,
  MR_Integer HeadVar__2_20);

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__format_opt_file_initial_body__329__1_5_p_0(
  MR_Word MercInfo_30,
  MR_Word HeadVar__3_188,
  MR_Word HeadVar__4_189,
  MR_Word * HeadVar__5_190);

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__format_opt_file_initial_body__325__1_5_p_0(
  MR_Word MercInfo_30,
  MR_Word HeadVar__3_183,
  MR_Word HeadVar__4_184,
  MR_Word * HeadVar__5_185);

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__format_opt_file_initial_body__321__1_5_p_0(
  MR_Word MercInfo_30,
  MR_Word HeadVar__3_178,
  MR_Word HeadVar__4_179,
  MR_Word * HeadVar__5_180);

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__format_opt_file_initial_body__317__1_5_p_0(
  MR_Word MercInfo_30,
  MR_Word HeadVar__3_173,
  MR_Word HeadVar__4_174,
  MR_Word * HeadVar__5_175);

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__format_opt_file_initial_body__313__1_5_p_0(
  MR_Word MercInfo_30,
  MR_Word HeadVar__3_168,
  MR_Word HeadVar__4_169,
  MR_Word * HeadVar__5_170);

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__format_opt_file_initial_body__308__1_5_p_0(
  MR_Word MercInfo_30,
  MR_Word HeadVar__3_163,
  MR_Word HeadVar__4_164,
  MR_Word * HeadVar__5_165);

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__format_opt_file_initial_body__304__1_4_p_0(
  MR_Word HeadVar__2_158,
  MR_Word HeadVar__3_159,
  MR_Word * HeadVar__4_160);

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__format_opt_file_initial_body__300__1_5_p_0(
  MR_String HeadVar__2_71,
  MR_Word HeadVar__3_151,
  MR_Word HeadVar__4_152,
  MR_Word * HeadVar__5_153);

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__format_opt_file_initial_body__260__1_3_p_0(
  MR_Word LambdaHeadVar__1_61,
  MR_Word LambdaHeadVar__2_62,
  MR_Word * LambdaHeadVar__3_63);

static void MR_CALL 
transform_hlds__intermod__intermod_format_foreign_clause_10_p_0(
  MR_Word Procs_11,
  MR_Word PredOrFunc_12,
  MR_Word VarTable0_13,
  MR_Word PragmaImpl_14,
  MR_Word Attributes_15,
  MR_Word Args_16,
  MR_Word SymName_17,
  MR_Integer ProcId_18,
  MR_Word STATE_VARIABLE_State_0_29,
  MR_Word * STATE_VARIABLE_State_30);

static void MR_CALL 
transform_hlds__intermod__get_pragma_foreign_code_vars_5_p_0(
  MR_Word Args_6,
  MR_Word Modes_7,
  MR_Word * PragmaVars_8,
  MR_Word STATE_VARIABLE_VarTable_0_26,
  MR_Word * STATE_VARIABLE_VarTable_27);

static void MR_CALL 
transform_hlds__intermod__intermod_format_clause_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__intermod__intermod_format_clause_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__intermod__intermod_format_clause_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__intermod__intermod_format_clause_11_p_0(
  MR_Word OutInfo_12,
  MR_Word ModuleInfo_13,
  MR_Word PredId_14,
  MR_Word SymName_15,
  MR_Word PredOrFunc_16,
  MR_Word VarTable_17,
  MR_Word TypeQual_18,
  MR_Word HeadVars_19,
  MR_Word Clause0_20,
  MR_Word STATE_VARIABLE_State_0_62,
  MR_Word * STATE_VARIABLE_State_63);

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
  MR_Word STATE_VARIABLE_TypeDefnsCord_0_58,
  MR_Word * STATE_VARIABLE_TypeDefnsCord_59,
  MR_Word STATE_VARIABLE_ForeignEnumsCord_0_60,
  MR_Word * STATE_VARIABLE_ForeignEnumsCord_61);

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
transform_hlds__intermod__format_opt_file_initial_body_4_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__format_opt_file_initial_body_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__format_opt_file_initial_body_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__format_opt_file_initial_body_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__format_opt_file_initial_body_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__format_opt_file_initial_body_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__format_opt_file_initial_body_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__format_opt_file_initial_body_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__format_opt_file_initial_body_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__format_opt_file_initial_body_4_p_0(
  MR_Word IntermodInfo_5,
  MR_Word * ParseTreePlainOpt_6,
  MR_Word STATE_VARIABLE_State_0_59,
  MR_Word * STATE_VARIABLE_State_60);

static void MR_CALL 
transform_hlds__intermod__intermod_format_pred_defns_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__intermod_format_pred_defns_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__intermod_format_pred_defns_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__intermod_format_pred_defns_9_p_0(
  MR_Word OutInfo_1,
  MR_Word ModuleInfo_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_DeclMarkers_0_4,
  MR_Word * STATE_VARIABLE_DeclMarkers_5,
  MR_Word STATE_VARIABLE_ImplMarkers_0_6,
  MR_Word * STATE_VARIABLE_ImplMarkers_7,
  MR_Word STATE_VARIABLE_State_0_8,
  MR_Word * STATE_VARIABLE_State_9);

static MR_Box MR_CALL 
transform_hlds__intermod__format_promise_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__intermod__format_promise_9_p_0(
  MR_Word Info_10,
  MR_Word ModuleInfo_11,
  MR_Word TVarSet_12,
  MR_Word VarTable_13,
  MR_Word PromiseType_14,
  MR_Word HeadVars_15,
  MR_Word Clause_16,
  MR_Word STATE_VARIABLE_State_0_23,
  MR_Word * STATE_VARIABLE_State_24);

static void MR_CALL 
transform_hlds__intermod__intermod_format_pred_decls_15_p_0(
  MR_Word MercInfo_1,
  MR_Word ModuleInfo_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_PredDeclsCord_0_4,
  MR_Word * STATE_VARIABLE_PredDeclsCord_5,
  MR_Word STATE_VARIABLE_ModeDeclsCord_0_6,
  MR_Word * STATE_VARIABLE_ModeDeclsCord_7,
  MR_Word STATE_VARIABLE_DeclMarkersCord_0_8,
  MR_Word * STATE_VARIABLE_DeclMarkersCord_9,
  MR_Word STATE_VARIABLE_ImplMarkersCord_0_10,
  MR_Word * STATE_VARIABLE_ImplMarkersCord_11,
  MR_Word STATE_VARIABLE_TypeSpecsCord_0_12,
  MR_Word * STATE_VARIABLE_TypeSpecsCord_13,
  MR_Word STATE_VARIABLE_State_0_14,
  MR_Word * STATE_VARIABLE_State_15);

static void MR_CALL 
transform_hlds__intermod__intermod_format_pred_decl_15_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__intermod_format_pred_decl_15_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__intermod_format_pred_decl_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__intermod_format_pred_decl_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__intermod_format_pred_decl_15_p_0(
  MR_Word MercInfo_16,
  MR_Word ModuleInfo_17,
  MR_Word OrderPredInfo_18,
  MR_Word STATE_VARIABLE_PredDeclsCord_0_53,
  MR_Word * STATE_VARIABLE_PredDeclsCord_54,
  MR_Word STATE_VARIABLE_ModeDeclsCord_0_55,
  MR_Word * STATE_VARIABLE_ModeDeclsCord_56,
  MR_Word STATE_VARIABLE_DeclMarkersCord_0_57,
  MR_Word * STATE_VARIABLE_DeclMarkersCord_58,
  MR_Word STATE_VARIABLE_ImplMarkersCord_0_59,
  MR_Word * STATE_VARIABLE_ImplMarkersCord_60,
  MR_Word STATE_VARIABLE_TypeSpecsCord_0_61,
  MR_Word * STATE_VARIABLE_TypeSpecsCord_62,
  MR_Word STATE_VARIABLE_State_0_63,
  MR_Word * STATE_VARIABLE_State_64);

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


static /* final */ const MR_Box transform_hlds__intermod_scalar_common_1[16][2];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_2[10][3];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_3[8][4];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_4[4][5];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_5[13][8];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_6[6][6];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_7[4][7];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_8[1][14];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_9[1][13];




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
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
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
    ((MR_Box) (transform_hlds__intermod__format_opt_file_initial_body_4_p_0_1)),
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
    ((MR_Box) (&transform_hlds__intermod_scalar_common_3[7])),
    ((MR_Box) (transform_hlds__intermod__intermod_format_clause_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_3[8][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_2[1])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_output__pt_output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_4[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__intermod__intermod_format_pred_decl_15_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_7[1])),
    ((MR_Box) (transform_hlds__intermod__intermod_format_pred_decl_15_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__intermod__intermod_format_pred_defns_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_7[1])),
    ((MR_Box) (transform_hlds__intermod__intermod_format_pred_defns_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_7[2])),
    ((MR_Box) (transform_hlds__intermod__format_opt_file_initial_body_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_4[4][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__string__builder__handle__arity0__string__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_3[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_5[5])),
    ((MR_Box) (transform_hlds__intermod__intermod_format_pred_decl_15_p_0_4)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_5[6])),
    ((MR_Box) (transform_hlds__intermod__format_opt_file_initial_body_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row   3 */
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
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&transform_hlds__intermod__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&transform_hlds__intermod__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row  10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&transform_hlds__intermod__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row  11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row  12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
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
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
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

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_8[1][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_type_qual_0)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_9[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&transform_hlds__intermod__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_impl_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_proc_attributes_0)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
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

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__strip_headvar_unifications__1138__1_4_p_0(
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
    MR_Word Context_19 = ((MR_Word) ((MR_hl_field(0, Clause0_6, 3))));

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
transform_hlds__intermod__IntroducedFrom__pred__intermod_format_clause__1074__1_1_p_0(
  MR_Word LambdaHeadVar__1_74)
{
  MR_bool succeeded;
  MR_Word GE_38 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_74, 0))));

  succeeded = ((((MR_tag((MR_Word) GE_38)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GE_38, 0)))) == (MR_Integer) 1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_format_pred_defn__969__1_4_p_0(
  MR_Word HeadVar__2_70,
  MR_Word HeadVar__3_71,
  MR_Word * HeadVar__4_72)
{
  parse_tree__parse_tree_out_pragma__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_105_109_112_108_95_109_97_114_107_101_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), HeadVar__2_70, HeadVar__3_71, HeadVar__4_72);
}

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_format_pred_defn__967__1_4_p_0(
  MR_Word HeadVar__2_64,
  MR_Word HeadVar__3_65,
  MR_Word * HeadVar__4_66)
{
  parse_tree__parse_tree_out_pragma__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_100_101_99_108_95_109_97_114_107_101_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), HeadVar__2_64, HeadVar__3_65, HeadVar__4_66);
}

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_format_pred_decl__781__1_5_p_0(
  MR_Word Lang_52,
  MR_Word HeadVar__3_103,
  MR_Word HeadVar__4_104,
  MR_Word * HeadVar__5_105)
{
  parse_tree__parse_tree_out_pragma__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_97_103_109_97_95_116_121_112_101_95_115_112_101_99_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), Lang_52, HeadVar__3_103, HeadVar__4_104, HeadVar__5_105);
}

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_format_pred_decl__778__1_4_p_0(
  MR_Word HeadVar__2_98,
  MR_Word HeadVar__3_99,
  MR_Word * HeadVar__4_100)
{
  parse_tree__parse_tree_out_pragma__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_105_109_112_108_95_109_97_114_107_101_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), HeadVar__2_98, HeadVar__3_99, HeadVar__4_100);
}

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_format_pred_decl__776__1_4_p_0(
  MR_Word HeadVar__2_93,
  MR_Word HeadVar__3_94,
  MR_Word * HeadVar__4_95)
{
  parse_tree__parse_tree_out_pragma__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_100_101_99_108_95_109_97_114_107_101_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), HeadVar__2_93, HeadVar__3_94, HeadVar__4_95);
}

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_format_pred_decl__774__1_5_p_0(
  MR_Word MercInfo_16,
  MR_Word HeadVar__3_87,
  MR_Word HeadVar__4_88,
  MR_Word * HeadVar__5_89)
{
  parse_tree__parse_tree_out_item__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_109_111_100_101_95_100_101_99_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), MercInfo_16, HeadVar__3_87, HeadVar__4_88, HeadVar__5_89);
}

static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__unmake_hlds_class_fundep_arg_posns__648__1_2_f_0(
  MR_Word TVars_4,
  MR_Integer HeadVar__2_12)
{
  MR_Word HeadVar__3_13;
  MR_Box conv0_HeadVar__3_13;

  conv0_HeadVar__3_13 = mercury__list__det_index1_2_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[10]), TVars_4, HeadVar__2_12);
  HeadVar__3_13 = ((MR_Word) (conv0_HeadVar__3_13));
  return HeadVar__3_13;
}

static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__gather_foreign_enum_value_pair__517__1_2_p_0(
  MR_Integer Arity_11,
  MR_Integer HeadVar__2_20)
{
  MR_bool succeeded = (Arity_11 == HeadVar__2_20);

  return succeeded;
}

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__format_opt_file_initial_body__329__1_5_p_0(
  MR_Word MercInfo_30,
  MR_Word HeadVar__3_188,
  MR_Word HeadVar__4_189,
  MR_Word * HeadVar__5_190)
{
  parse_tree__parse_tree_out_item__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_105_110_115_116_97_110_99_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), MercInfo_30, HeadVar__3_188, HeadVar__4_189, HeadVar__5_190);
}

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__format_opt_file_initial_body__325__1_5_p_0(
  MR_Word MercInfo_30,
  MR_Word HeadVar__3_183,
  MR_Word HeadVar__4_184,
  MR_Word * HeadVar__5_185)
{
  parse_tree__parse_tree_out_item__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_116_121_112_101_99_108_97_115_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), MercInfo_30, HeadVar__3_183, HeadVar__4_184, HeadVar__5_185);
}

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__format_opt_file_initial_body__321__1_5_p_0(
  MR_Word MercInfo_30,
  MR_Word HeadVar__3_178,
  MR_Word HeadVar__4_179,
  MR_Word * HeadVar__5_180)
{
  parse_tree__parse_tree_out_item__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_109_111_100_101_95_100_101_102_110_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), MercInfo_30, HeadVar__3_178, HeadVar__4_179, HeadVar__5_180);
}

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__format_opt_file_initial_body__317__1_5_p_0(
  MR_Word MercInfo_30,
  MR_Word HeadVar__3_173,
  MR_Word HeadVar__4_174,
  MR_Word * HeadVar__5_175)
{
  parse_tree__parse_tree_out_item__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_105_110_115_116_95_100_101_102_110_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), MercInfo_30, HeadVar__3_173, HeadVar__4_174, HeadVar__5_175);
}

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__format_opt_file_initial_body__313__1_5_p_0(
  MR_Word MercInfo_30,
  MR_Word HeadVar__3_168,
  MR_Word HeadVar__4_169,
  MR_Word * HeadVar__5_170)
{
  parse_tree__parse_tree_out_item__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), MercInfo_30, HeadVar__3_168, HeadVar__4_169, HeadVar__5_170);
}

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__format_opt_file_initial_body__308__1_5_p_0(
  MR_Word MercInfo_30,
  MR_Word HeadVar__3_163,
  MR_Word HeadVar__4_164,
  MR_Word * HeadVar__5_165)
{
  parse_tree__parse_tree_out_item__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_116_121_112_101_95_100_101_102_110_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), MercInfo_30, HeadVar__3_163, HeadVar__4_164, HeadVar__5_165);
}

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__format_opt_file_initial_body__304__1_4_p_0(
  MR_Word HeadVar__2_158,
  MR_Word HeadVar__3_159,
  MR_Word * HeadVar__4_160)
{
  parse_tree__parse_tree_out_item__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_105_109_95_115_112_101_99_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), HeadVar__2_158, HeadVar__3_159, HeadVar__4_160);
}

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__format_opt_file_initial_body__300__1_5_p_0(
  MR_String HeadVar__2_71,
  MR_Word HeadVar__3_151,
  MR_Word HeadVar__4_152,
  MR_Word * HeadVar__5_153)
{
  parse_tree__parse_tree_out_item__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_117_108_101_95_100_101_99_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), HeadVar__2_71, HeadVar__3_151, HeadVar__4_152, HeadVar__5_153);
}

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__format_opt_file_initial_body__260__1_3_p_0(
  MR_Word LambdaHeadVar__1_61,
  MR_Word LambdaHeadVar__2_62,
  MR_Word * LambdaHeadVar__3_63)
{
  MR_Word Var_64;

  Var_64 = mercury__term_context__dummy_context_0_f_0();
  mercury__one_or_more_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (LambdaHeadVar__1_61)), ((MR_Box) (Var_64)), LambdaHeadVar__2_62, LambdaHeadVar__3_63);
}

static void MR_CALL 
transform_hlds__intermod__intermod_format_foreign_clause_10_p_0(
  MR_Word Procs_11,
  MR_Word PredOrFunc_12,
  MR_Word VarTable0_13,
  MR_Word PragmaImpl_14,
  MR_Word Attributes_15,
  MR_Word Args_16,
  MR_Word SymName_17,
  MR_Integer ProcId_18,
  MR_Word STATE_VARIABLE_State_0_29,
  MR_Word * STATE_VARIABLE_State_30)
{
  MR_Word ProcInfo_20;
  MR_Word MaybeArgModes_21;
  MR_Box conv0_ProcInfo_20;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_11, ((MR_Box) (ProcId_18)), &conv0_ProcInfo_20);
  ProcInfo_20 = ((MR_Word) (conv0_ProcInfo_20));
  hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(ProcInfo_20, &MaybeArgModes_21);
  if ((MaybeArgModes_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.intermod_format_foreign_clause\'/10", (MR_String) "no mode declaration");
      return;
    }
  else
  {
    MR_Word ArgModes_22 = ((MR_Word) ((MR_hl_field(1, MaybeArgModes_21, 0))));
    MR_Word PragmaVars_23;
    MR_Word VarTable_24;
    MR_Word InstVarSet_25;
    MR_Word ProgVarSet_26;
    MR_Word FPInfo_28;
    MR_Word Var_31;
    MR_Word _VarTypes_27;

    transform_hlds__intermod__get_pragma_foreign_code_vars_5_p_0(Args_16, ArgModes_22, &PragmaVars_23, VarTable0_13, &VarTable_24);
    hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_20, &InstVarSet_25);
    hlds__var_table_hlds__split_var_table_3_p_0(VarTable_24, &ProgVarSet_26, &_VarTypes_27);
    Var_31 = mercury__term_context__dummy_context_0_f_0();
    {
      FPInfo_28 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FPInfo_28, 0) = ((MR_Box) (Attributes_15));
      MR_hl_field(0, FPInfo_28, 1) = ((MR_Box) (SymName_17));
      MR_hl_field(0, FPInfo_28, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_12));
      MR_hl_field(0, FPInfo_28, 3) = ((MR_Box) (PragmaVars_23));
      MR_hl_field(0, FPInfo_28, 4) = ((MR_Box) (ProgVarSet_26));
      MR_hl_field(0, FPInfo_28, 5) = ((MR_Box) (InstVarSet_25));
      MR_hl_field(0, FPInfo_28, 6) = ((MR_Box) (PragmaImpl_14));
      MR_hl_field(0, FPInfo_28, 7) = ((MR_Box) (Var_31));
      MR_hl_field(0, FPInfo_28, 8) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    parse_tree__parse_tree_out_pragma__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), (MR_Integer) 0, FPInfo_28, STATE_VARIABLE_State_0_29, STATE_VARIABLE_State_30);
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
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(1, Args_6, 1))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(1, Args_6, 0))));

    if ((Modes_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.get_pragma_foreign_code_vars\'/5", (MR_String) "list length mismatch");
        return;
      }
    else
    {
      MR_Word Mode_12 = ((MR_Word) ((MR_hl_field(1, Modes_7, 0))));
      MR_Word ModesTail_13 = ((MR_Word) ((MR_hl_field(1, Modes_7, 1))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, Var_37, 0))));
      MR_Word MaybeNameAndMode_15 = ((MR_Word) ((MR_hl_field(0, Var_37, 1))));
      MR_String Name_18;
      MR_Word PragmaVar_20;
      MR_Word PragmaVarsTail_21;
      MR_Word STATE_VARIABLE_VarTable_1_30;

      if ((MaybeNameAndMode_15 == (MR_Word) ((MR_Unsigned) 0U)))
        Name_18 = (MR_String) "_";
      else
      {
        MR_Word Var_28 = ((MR_Word) ((MR_hl_field(1, MaybeNameAndMode_15, 0))));

        Name_18 = ((MR_String) ((MR_hl_field(0, Var_28, 0))));
      }
      {
        PragmaVar_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PragmaVar_20, 0) = ((MR_Box) (Var_14));
        MR_hl_field(0, PragmaVar_20, 1) = ((MR_Box) (Name_18));
        MR_hl_field(0, PragmaVar_20, 2) = ((MR_Box) (Mode_12));
        MR_hl_field(0, PragmaVar_20, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      parse_tree__var_table__update_var_name_4_p_0(Var_14, Name_18, STATE_VARIABLE_VarTable_0_26, &STATE_VARIABLE_VarTable_1_30);
      transform_hlds__intermod__get_pragma_foreign_code_vars_5_p_0(Var_36, ModesTail_13, &PragmaVarsTail_21, STATE_VARIABLE_VarTable_1_30, STATE_VARIABLE_VarTable_27);
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
transform_hlds__intermod__intermod_format_clause_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_State_30;

  transform_hlds__intermod__intermod_format_foreign_clause_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) ((MR_hl_field(0, closure, 9)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_State_30);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_State_30));
}

static MR_bool MR_CALL 
transform_hlds__intermod__intermod_format_clause_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__intermod__IntroducedFrom__pred__intermod_format_clause__1074__1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__intermod__intermod_format_clause_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_24;

  transform_hlds__intermod__IntroducedFrom__pred__strip_headvar_unifications__1138__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_24);
  *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_24));
}

static void MR_CALL 
transform_hlds__intermod__intermod_format_clause_11_p_0(
  MR_Word OutInfo_12,
  MR_Word ModuleInfo_13,
  MR_Word PredId_14,
  MR_Word SymName_15,
  MR_Word PredOrFunc_16,
  MR_Word VarTable_17,
  MR_Word TypeQual_18,
  MR_Word HeadVars_19,
  MR_Word Clause0_20,
  MR_Word STATE_VARIABLE_State_0_62,
  MR_Word * STATE_VARIABLE_State_63)
{
  MR_bool succeeded;
  MR_Word ApplicableProcIds_22 = ((MR_Word) ((MR_hl_field(0, Clause0_20, 0))));
  MR_Word Goal_23 = ((MR_Word) ((MR_hl_field(0, Clause0_20, 1))));
  MR_Word ImplLang_24 = ((MR_Word) ((MR_hl_field(0, Clause0_20, 2))));

  if ((ImplLang_24 == (MR_Word) ((MR_Unsigned) 0U)))
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

    Goal0_97 = hlds__hlds_clauses__clause_body_1_f_0(Clause0_20);
    GoalInfo0_99 = ((MR_Word) ((MR_hl_field(0, Goal0_97, 1))));
    hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal0_97, &Goals0_100);
    mercury__map__init_1_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[12]), (MR_Word) (&transform_hlds__intermod_scalar_common_1[13]), &HeadVarMap0_101);
    succeeded = transform_hlds__intermod__strip_headvar_unifications_from_goal_list_6_p_0(Goals0_100, HeadVars_19, (MR_Word) ((MR_Unsigned) 0U), &Goals_102, HeadVarMap0_101, &HeadVarMap_103);
    if (succeeded)
    {
      MR_Word Goal_104;
      MR_Word Var_106;
      MR_Word Var_107;
      MR_Word Var_109;
      MR_Word Var_110;
      MR_Word Var_111;
      MR_Word Var_112;
      MR_Word Var_113;

      {
        Var_106 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_106, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_7[3]));
        MR_hl_field(0, Var_106, 1) = ((MR_Box) (transform_hlds__intermod__intermod_format_clause_11_p_0_1));
        MR_hl_field(0, Var_106, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_106, 3) = ((MR_Box) (Clause0_20));
        MR_hl_field(0, Var_106, 4) = ((MR_Box) (HeadVarMap_103));
      }
      mercury__list__map_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[12]), (MR_Word) (&transform_hlds__intermod_scalar_common_1[13]), Var_106, HeadVars_19, &ClauseHeadVars_29);
      hlds__hlds_goal__conj_list_to_goal_3_p_0(Goals_102, GoalInfo0_99, &Goal_104);
      Var_107 = ((MR_Word) ((MR_hl_field(0, Clause0_20, 0))));
      Var_109 = ((MR_Word) ((MR_hl_field(0, Clause0_20, 2))));
      Var_110 = ((MR_Word) ((MR_hl_field(0, Clause0_20, 3))));
      Var_111 = ((MR_Word) ((MR_hl_field(0, Clause0_20, 4))));
      Var_112 = ((MR_Word) ((MR_hl_field(0, Clause0_20, 5))));
      Var_113 = ((MR_Unsigned) ((MR_hl_field(0, Clause0_20, 6))) & (MR_Integer) 1);
      {
        Clause_30 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Clause_30, 0) = ((MR_Box) (Var_107));
        MR_hl_field(0, Clause_30, 1) = ((MR_Box) (Goal_104));
        MR_hl_field(0, Clause_30, 2) = ((MR_Box) (Var_109));
        MR_hl_field(0, Clause_30, 3) = ((MR_Box) (Var_110));
        MR_hl_field(0, Clause_30, 4) = ((MR_Box) (Var_111));
        MR_hl_field(0, Clause_30, 5) = ((MR_Box) (Var_112));
        MR_hl_field(0, Clause_30, 6) = (MR_Box) ((MR_Unsigned) (Var_113));
      }
    }
    else
    {
      mercury__term_subst__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_19, &ClauseHeadVars_29);
      Clause_30 = Clause0_20;
    }
    parse_tree__var_table__init_var_table_1_p_0(&EmptyVarTable_31);
    {
      Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_65, 0) = ((MR_Box) (EmptyVarTable_31));
    }
    hlds__hlds_out__hlds_out_pred__format_clause_14_p_0(OutInfo_12, (MR_Integer) 0, ModuleInfo_13, PredId_14, PredOrFunc_16, Var_65, TypeQual_18, (MR_Integer) 1, (MR_Integer) 1, (MR_Unsigned) 1U, ClauseHeadVars_29, Clause_30, STATE_VARIABLE_State_0_62, STATE_VARIABLE_State_63);
  }
  else
  {
    MR_Word PredInfo_33;
    MR_Word Procs_34;
    MR_Word Attributes_50;
    MR_Word Args_53;
    MR_Word PragmaCode_56;
    MR_Word Var_95;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_13, PredId_14, &PredInfo_33);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_33, &Procs_34);
    Var_95 = ((MR_Word) ((MR_hl_field(0, Goal_23, 0))));
    if (((((MR_tag((MR_Word) Var_95)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_95, 0)))) == (MR_Integer) 1))))
    {
      Attributes_50 = ((MR_Word) ((MR_hl_field(3, Var_95, 1))));
      Args_53 = ((MR_Word) ((MR_hl_field(3, Var_95, 4))));
      PragmaCode_56 = ((MR_Word) ((MR_hl_field(3, Var_95, 7))));
      succeeded = MR_TRUE;
    }
    else
    if (((((MR_tag((MR_Word) Var_95)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_95, 0)))) == (MR_Integer) 2))))
    {
      MR_Word TypeCtorInfo_87_87;
      MR_Word TypeInfo_96_96;
      MR_Word Goals_35 = ((MR_Word) ((MR_hl_field(3, Var_95, 2))));
      MR_Word ForeignCodeGoal_47;
      MR_Word ForeignCodeGoalExpr_48;
      MR_Word Var_71 = ((MR_Unsigned) ((MR_hl_field(3, Var_95, 1))) & (MR_Integer) 1);
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
          ForeignCodeGoal_47 = ((MR_Word) ((MR_hl_field(1, Var_73, 0))));
          Var_93 = ((MR_Word) ((MR_hl_field(1, Var_73, 1))));
          TypeInfo_96_96 = (MR_Word) (&transform_hlds__intermod_scalar_common_1[15]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_96_96, ((MR_Box) (Var_75)), ((MR_Box) (Var_93)));
          if (succeeded)
          {
            ForeignCodeGoalExpr_48 = ((MR_Word) ((MR_hl_field(0, ForeignCodeGoal_47, 0))));
            succeeded = ((((MR_tag((MR_Word) ForeignCodeGoalExpr_48)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ForeignCodeGoalExpr_48, 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Attributes_50 = ((MR_Word) ((MR_hl_field(3, ForeignCodeGoalExpr_48, 1))));
              Args_53 = ((MR_Word) ((MR_hl_field(3, ForeignCodeGoalExpr_48, 4))));
              PragmaCode_56 = ((MR_Word) ((MR_hl_field(3, ForeignCodeGoalExpr_48, 7))));
            }
          }
        }
      }
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
      switch (MR_tag((MR_Word) ApplicableProcIds_22)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ApplicableProcIds_22)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.intermod_format_clause\'/11", (MR_String) "all_modes foreign_proc");
                return;
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.intermod_format_clause\'/11", (MR_String) "unify modes foreign_proc");
                return;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ProcIds_61 = ((MR_Word) ((MR_hl_field(1, ApplicableProcIds_22, 0))));
            MR_Word Var_78;
            MR_Box conv2_STATE_VARIABLE_State_63;

            {
              Var_78 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_78, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_9[0]));
              MR_hl_field(0, Var_78, 1) = ((MR_Box) (transform_hlds__intermod__intermod_format_clause_11_p_0_3));
              MR_hl_field(0, Var_78, 2) = ((MR_Box) ((MR_Integer) 7));
              MR_hl_field(0, Var_78, 3) = ((MR_Box) (Procs_34));
              MR_hl_field(0, Var_78, 4) = ((MR_Box) (PredOrFunc_16));
              MR_hl_field(0, Var_78, 5) = ((MR_Box) (VarTable_17));
              MR_hl_field(0, Var_78, 6) = ((MR_Box) (PragmaCode_56));
              MR_hl_field(0, Var_78, 7) = ((MR_Box) (Attributes_50));
              MR_hl_field(0, Var_78, 8) = ((MR_Box) (Args_53));
              MR_hl_field(0, Var_78, 9) = ((MR_Box) (SymName_15));
            }
            mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_78, ProcIds_61, ((MR_Box) (STATE_VARIABLE_State_0_62)), &conv2_STATE_VARIABLE_State_63);
            *STATE_VARIABLE_State_63 = ((MR_Word) (conv2_STATE_VARIABLE_State_63));
          }
          break;
      }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.intermod_format_clause\'/11", (MR_String) "did not find foreign_proc");
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
      MR_Word Goal_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Goals0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word RevGoals1_64;
      MR_Word STATE_VARIABLE_HeadVarMap_1_76;
      MR_Word LHSVar_19;
      MR_Word RHSTerm_27;
      MR_Word TypeInfo_78_78;
      MR_Word RHS_20;
      MR_Word Context_25;
      MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, Goal_13, 0))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_HeadVarMap_0_5;

      succeeded = ((MR_tag((MR_Word) Var_67)) == (MR_Integer) 1);
      if (succeeded)
      {
        LHSVar_19 = ((MR_Word) ((MR_hl_field(1, Var_67, 0))));
        RHS_20 = ((MR_Word) ((MR_hl_field(1, Var_67, 1))));
        TypeInfo_78_78 = (MR_Word) (&transform_hlds__intermod_scalar_common_1[12]);
        succeeded = mercury__list__member_2_p_0(TypeInfo_78_78, ((MR_Box) (LHSVar_19)), HeadVars_2);
        if (succeeded)
        {
          Context_25 = mercury__term_context__dummy_context_0_f_0();
          if (((MR_tag((MR_Word) RHS_20)) == (MR_Integer) 1))
          {
            MR_Word ConsId_28 = ((MR_Word) ((MR_hl_field(1, RHS_20, 0))));
            MR_Word Args_30 = ((MR_Word) ((MR_hl_field(1, RHS_20, 2))));

            switch (MR_tag((MR_Word) ConsId_28)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word SymName_35;
                  MR_Word ArgTerms_38;
                  MR_Word Var_75 = (MR_Word) (MR_body((MR_Word) (ConsId_28), (MR_Integer) 1));

                  SymName_35 = ((MR_Word) ((MR_hl_field(0, Var_75, 0))));
                  mercury__term_subst__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Args_30, &ArgTerms_38);
                  parse_tree__prog_util__construct_qualified_term_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SymName_35, ArgTerms_38, &RHSTerm_27);
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, ConsId_28, 0))))) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Word IntConst_31 = ((MR_Word) ((MR_hl_field(3, ConsId_28, 1))));

                      RHSTerm_27 = parse_tree__parse_tree_to_term__int_const_to_decimal_term_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), IntConst_31, Context_25);
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Float Float_32 = MR_unbox_float((MR_hl_field(3, ConsId_28, 1)));
                      MR_Word Var_68;

                      {
                        Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(3, Var_68, 1) = MR_box_float(Float_32);
                      }
                      {
                        RHSTerm_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, RHSTerm_27, 0) = ((MR_Box) (Var_68));
                        MR_hl_field(0, RHSTerm_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(0, RHSTerm_27, 2) = ((MR_Box) (Context_25));
                      }
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_Char Char_33 = ((MR_Char) (MR_Word) (MR_hl_field(3, ConsId_28, 1)));
                      MR_Word Var_70;
                      MR_String Var_71;

                      Var_71 = mercury__string__from_char_1_f_0(Char_33);
                      {
                        Var_70 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_70, 0) = ((MR_Box) (Var_71));
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
                  case (MR_Integer) 8:
                    {
                      MR_String String_34 = ((MR_String) ((MR_hl_field(3, ConsId_28, 1))));
                      MR_Word Var_73;

                      {
                        Var_73 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_73, 0) = ((MR_Box) (String_34));
                      }
                      {
                        RHSTerm_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, RHSTerm_27, 0) = ((MR_Box) (Var_73));
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
            MR_Word RHSVar_26 = ((MR_Word) ((MR_hl_field(0, RHS_20, 0))));

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
        succeeded = mercury__map__insert_4_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[12]), (MR_Word) (&transform_hlds__intermod_scalar_common_1[13]), ((MR_Box) (LHSVar_19)), ((MR_Box) (RHSTerm_27)), STATE_VARIABLE_HeadVarMap_0_5, &STATE_VARIABLE_HeadVarMap_1_76);
        if (succeeded)
        {
          RevGoals1_64 = HeadVar__3_3;
          succeeded = MR_TRUE;
        }
      }
      else
      {
        {
          RevGoals1_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, RevGoals1_64, 0) = ((MR_Box) (Goal_13));
          MR_hl_field(1, RevGoals1_64, 1) = ((MR_Box) (HeadVar__3_3));
        }
        STATE_VARIABLE_HeadVarMap_1_76 = STATE_VARIABLE_HeadVarMap_0_5;
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Goals0_14;
        next_value_of_HeadVar__3_3 = RevGoals1_64;
        next_value_of_STATE_VARIABLE_HeadVarMap_0_5 = STATE_VARIABLE_HeadVarMap_1_76;
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
  MR_Word ClassId_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Word InstanceDefn_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Word ModuleName_7 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_5, 0))));
  MR_Word TVarSet_9 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_5, 2))));
  MR_Word OriginalTypes_10 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_5, 3))));
  MR_Word Types_11 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_5, 4))));
  MR_Word Constraints_12 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_5, 5))));
  MR_Word Body_15 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_5, 8))));
  MR_Word Context_17 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_5, 10))));
  MR_Word ClassName_18 = ((MR_Word) ((MR_hl_field(0, ClassId_4, 0))));
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
  MR_Word conv0_HeadVar__3_13;

  conv0_HeadVar__3_13 = transform_hlds__intermod__IntroducedFrom__func__unmake_hlds_class_fundep_arg_posns__648__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_13));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0(
  MR_Word TVars_4,
  MR_Word HLDSFunDep_5)
{
  MR_Word ParseTreeFunDep_6;
  MR_Word DomainArgPosns_7 = ((MR_Word) ((MR_hl_field(0, HLDSFunDep_5, 0))));
  MR_Word RangeArgPosns_8 = ((MR_Word) ((MR_hl_field(0, HLDSFunDep_5, 1))));
  MR_Word DomainTVars_9;
  MR_Word RangeTVars_10;
  MR_Word ArgTVarsSet_11;
  MR_Word ArgTVars_12;
  MR_Word Var_13;
  MR_Word ArgTVarsSet_16;
  MR_Word ArgTVars_17;

  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_6[5]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_1));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (TVars_4));
  }
  ArgTVarsSet_11 = mercury__set__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[10]), Var_13, DomainArgPosns_7);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[10]), ArgTVarsSet_11, &ArgTVars_12);
  mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[10]), ArgTVars_12, &DomainTVars_9);
  ArgTVarsSet_16 = mercury__set__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[10]), Var_13, RangeArgPosns_8);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[10]), ArgTVarsSet_16, &ArgTVars_17);
  mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[10]), ArgTVars_17, &RangeTVars_10);
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

  conv0_ParseTreeFunDep_6 = transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
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
  MR_Word TypeClassStatus_10 = ((MR_Word) ((MR_hl_field(0, ClassDefn_8, 0))));
  MR_Word TVarSet_11 = ((MR_Word) ((MR_hl_field(0, ClassDefn_8, 1))));
  MR_Word TVars_13 = ((MR_Word) ((MR_hl_field(0, ClassDefn_8, 3))));
  MR_Word Constraints_14 = ((MR_Word) ((MR_hl_field(0, ClassDefn_8, 4))));
  MR_Word HLDSFunDeps_15 = ((MR_Word) ((MR_hl_field(0, ClassDefn_8, 5))));
  MR_Word InstanceBody_17 = ((MR_Word) ((MR_hl_field(0, ClassDefn_8, 7))));
  MR_Word Context_19 = ((MR_Word) ((MR_hl_field(0, ClassDefn_8, 9))));
  MR_Word QualifiedClassName_21 = ((MR_Word) ((MR_hl_field(0, ClassId_7, 0))));
  MR_Word Var_28;
  MR_Word Var_36;

  succeeded = ((MR_tag((MR_Word) QualifiedClassName_21)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_36 = ((MR_Word) ((MR_hl_field(1, QualifiedClassName_21, 0))));
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
  MR_Word SymName_10 = ((MR_Word) ((MR_hl_field(0, ModeCtor_7, 0))));
  MR_Word VarSet_12 = ((MR_Word) ((MR_hl_field(0, ModeDefn_8, 0))));
  MR_Word Args_13 = ((MR_Word) ((MR_hl_field(0, ModeDefn_8, 1))));
  MR_Word Mode_14;
  MR_Word Context_15 = ((MR_Word) ((MR_hl_field(0, ModeDefn_8, 3))));
  MR_Word ModeStatus_16 = ((MR_Word) ((MR_hl_field(0, ModeDefn_8, 4))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, ModeDefn_8, 2))));
  MR_Word Var_23;
  MR_Word Var_27;

  Mode_14 = (MR_Word) (Var_22);
  succeeded = ((MR_tag((MR_Word) SymName_10)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_27 = ((MR_Word) ((MR_hl_field(1, SymName_10, 0))));
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
  MR_Word SymName_10 = ((MR_Word) ((MR_hl_field(0, InstCtor_7, 0))));
  MR_Word VarSet_12 = ((MR_Word) ((MR_hl_field(0, InstDefn_8, 0))));
  MR_Word Args_13 = ((MR_Word) ((MR_hl_field(0, InstDefn_8, 1))));
  MR_Word Inst_14 = ((MR_Word) ((MR_hl_field(0, InstDefn_8, 2))));
  MR_Word IFTC_15 = ((MR_Word) ((MR_hl_field(0, InstDefn_8, 3))));
  MR_Word Context_16 = ((MR_Word) ((MR_hl_field(0, InstDefn_8, 4))));
  MR_Word InstStatus_17 = ((MR_Word) ((MR_hl_field(0, InstDefn_8, 5))));
  MR_Word Var_28;
  MR_Word Var_32;

  succeeded = ((MR_tag((MR_Word) SymName_10)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_32 = ((MR_Word) ((MR_hl_field(1, SymName_10, 0))));
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
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        MaybeForTypeCtor_20 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word ForTypeCtor_19 = ((MR_Word) ((MR_hl_field(1, IFTC_15, 0))));

          {
            MaybeForTypeCtor_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeForTypeCtor_20, 0) = ((MR_Box) (ForTypeCtor_19));
          }
        }
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

  succeeded = transform_hlds__intermod__IntroducedFrom__pred__gather_foreign_enum_value_pair__517__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
transform_hlds__intermod__gather_foreign_enum_value_pair_3_p_0(
  MR_Word CtorRepn_4,
  MR_Word STATE_VARIABLE_RevValues_0_15,
  MR_Word * STATE_VARIABLE_RevValues_16)
{
  MR_bool succeeded;
  MR_Word SymName_8 = ((MR_Word) ((MR_hl_field(0, CtorRepn_4, 2))));
  MR_Word Tag_9 = ((MR_Word) ((MR_hl_field(0, CtorRepn_4, 3))));
  MR_Integer Arity_11 = ((MR_Integer) ((MR_hl_field(0, CtorRepn_4, 5))));
  MR_Word Var_17;
  MR_String ForeignTag_14;

  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_4[3]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (transform_hlds__intermod__gather_foreign_enum_value_pair_3_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (Arity_11));
    MR_hl_field(0, Var_17, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__require__expect_3_p_0(Var_17, (MR_String) "predicate \140transform_hlds.intermod.gather_foreign_enum_value_pair\'/3", (MR_String) "Arity != 0");
  succeeded = ((((MR_tag((MR_Word) Tag_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Tag_9, 0)))) == (MR_Integer) 1)));
  if (succeeded)
  {
    ForeignTag_14 = ((MR_String) ((MR_hl_field(3, Tag_9, 2))));
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
  MR_Word STATE_VARIABLE_TypeDefnsCord_0_58,
  MR_Word * STATE_VARIABLE_TypeDefnsCord_59,
  MR_Word STATE_VARIABLE_ForeignEnumsCord_0_60,
  MR_Word * STATE_VARIABLE_ForeignEnumsCord_61)
{
  MR_bool succeeded;
  MR_Word TypeCtor_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Word TypeDefn_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Word TVarSet_10;
  MR_Word TypeParams_11;
  MR_Word Body_12;
  MR_Word Context_13;
  MR_Word TypeSymName_14;
  MR_Word MaybeForeignTypeBody_22;
  MR_Word TypeBody_27;
  MR_Word MainItemTypeDefn_33;
  MR_Word STATE_VARIABLE_TypeDefnsCord_1_67;
  MR_Word CtorRepns_46;
  MR_Word Lang_51;
  MR_Word MaybeRepnB_43;
  MR_Word RepnB_45;
  MR_Word DuTypeKind_49;
  MR_Word Var_80;

  hlds__hlds_data__get_type_defn_tvarset_2_p_0(TypeDefn_7, &TVarSet_10);
  hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_7, &TypeParams_11);
  hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_7, &Body_12);
  hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_7, &Context_13);
  TypeSymName_14 = ((MR_Word) ((MR_hl_field(0, TypeCtor_6, 0))));
  switch (MR_tag((MR_Word) Body_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TypeBodyDu_16 = (MR_Word) ((MR_Word) (Body_12));
        MR_Word Ctors_17 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_16, 0))));
        MR_Word MaybeSubType_19 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_16, 2))));
        MR_Word MaybeCanon_20 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_16, 3))));
        MR_Word MaybeRepnA_21 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_16, 4))));
        MR_Word MaybeDirectArgCtors_24;

        MaybeForeignTypeBody_22 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_16, 5))));
        if ((MaybeRepnA_21 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.intermod_gather_type\'/5", (MR_String) "MaybeRepnA = no");
            return;
          }
        else
        {
          MR_Word RepnA_23 = ((MR_Word) ((MR_hl_field(1, MaybeRepnA_21, 0))));

          MaybeDirectArgCtors_24 = ((MR_Word) ((MR_hl_field(0, RepnA_23, 4))));
        }
        if ((MaybeSubType_19 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word DetailsDu_28;

          {
            DetailsDu_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DetailsDu_28, 0) = ((MR_Box) (Ctors_17));
            MR_hl_field(0, DetailsDu_28, 1) = ((MR_Box) (MaybeCanon_20));
            MR_hl_field(0, DetailsDu_28, 2) = ((MR_Box) (MaybeDirectArgCtors_24));
          }
          TypeBody_27 = (MR_Word) ((MR_Word) (DetailsDu_28));
        }
        else
        {
          MR_Word SuperType_25 = ((MR_Word) ((MR_hl_field(1, MaybeSubType_19, 0))));
          MR_Word DetailsSub_26;

          {
            DetailsSub_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DetailsSub_26, 0) = ((MR_Box) (SuperType_25));
            MR_hl_field(0, DetailsSub_26, 1) = ((MR_Box) (Ctors_17));
          }
          TypeBody_27 = (MR_Word) (MR_mkword(1, (MR_Word) (DetailsSub_26)));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ForeignTypeBody0_31 = (MR_Word) (MR_body((MR_Word) (Body_12), (MR_Integer) 1));

        TypeBody_27 = (MR_Word) (MR_mkword(3, &transform_hlds__intermod_scalar_common_1[14]));
        {
          MaybeForeignTypeBody_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeForeignTypeBody_22, 0) = ((MR_Box) (ForeignTypeBody0_31));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word EqvType_29 = ((MR_Word) ((MR_hl_field(2, Body_12, 0))));
        MR_Word Var_64 = (MR_Word) (EqvType_29);

        {
          TypeBody_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, TypeBody_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, TypeBody_27, 1) = ((MR_Box) (Var_64));
        }
        MaybeForeignTypeBody_22 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Body_12, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word DetailsSolver_32 = ((MR_Word) ((MR_hl_field(3, Body_12, 1))));

            TypeBody_27 = (MR_Word) (MR_mkword(2, (MR_Word) (DetailsSolver_32)));
            MaybeForeignTypeBody_22 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Details_30 = ((MR_Word) ((MR_hl_field(3, Body_12, 1))));

            {
              TypeBody_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, TypeBody_27, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, TypeBody_27, 1) = ((MR_Box) (Details_30));
            }
            MaybeForeignTypeBody_22 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
      }
      break;
  }
  {
    MainItemTypeDefn_33 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MainItemTypeDefn_33, 0) = ((MR_Box) (TypeSymName_14));
    MR_hl_field(0, MainItemTypeDefn_33, 1) = ((MR_Box) (TypeParams_11));
    MR_hl_field(0, MainItemTypeDefn_33, 2) = ((MR_Box) (TypeBody_27));
    MR_hl_field(0, MainItemTypeDefn_33, 3) = ((MR_Box) (TVarSet_10));
    MR_hl_field(0, MainItemTypeDefn_33, 4) = ((MR_Box) (Context_13));
    MR_hl_field(0, MainItemTypeDefn_33, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[1]), ((MR_Box) (MainItemTypeDefn_33)), STATE_VARIABLE_TypeDefnsCord_0_58, &STATE_VARIABLE_TypeDefnsCord_1_67);
  if ((MaybeForeignTypeBody_22 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_TypeDefnsCord_59 = STATE_VARIABLE_TypeDefnsCord_1_67;
  else
  {
    MR_Word ForeignTypeBody_34 = ((MR_Word) ((MR_hl_field(1, MaybeForeignTypeBody_22, 0))));
    MR_Word MaybeC_35 = ((MR_Word) ((MR_hl_field(0, ForeignTypeBody_34, 0))));
    MR_Word MaybeJava_36 = ((MR_Word) ((MR_hl_field(0, ForeignTypeBody_34, 1))));
    MR_Word MaybeCsharp_37 = ((MR_Word) ((MR_hl_field(0, ForeignTypeBody_34, 2))));
    MR_Word STATE_VARIABLE_TypeDefnsCord_2_69;
    MR_Word STATE_VARIABLE_TypeDefnsCord_3_73;

    if ((MaybeC_35 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_TypeDefnsCord_2_69 = STATE_VARIABLE_TypeDefnsCord_1_67;
    else
    {
      MR_Word Details_104 = ((MR_Word) ((MR_hl_field(1, MaybeC_35, 0))));
      MR_Word LangForeignType_105 = ((MR_Word) ((MR_hl_field(0, Details_104, 0))));
      MR_Word MaybeUserEqComp_106 = ((MR_Word) ((MR_hl_field(0, Details_104, 1))));
      MR_Word Assertions_107 = ((MR_Word) ((MR_hl_field(0, Details_104, 2))));
      MR_Word DetailsForeign_108;
      MR_Word ItemTypeDefn_109;
      MR_Word Var_110;
      MR_Word Var_111;

      {
        Var_110 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_110, 0) = ((MR_Box) (LangForeignType_105));
      }
      {
        DetailsForeign_108 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, DetailsForeign_108, 0) = ((MR_Box) (Var_110));
        MR_hl_field(0, DetailsForeign_108, 1) = ((MR_Box) (MaybeUserEqComp_106));
        MR_hl_field(0, DetailsForeign_108, 2) = ((MR_Box) (Assertions_107));
      }
      {
        Var_111 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_111, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, Var_111, 1) = ((MR_Box) (DetailsForeign_108));
      }
      {
        ItemTypeDefn_109 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ItemTypeDefn_109, 0) = ((MR_Box) (TypeSymName_14));
        MR_hl_field(0, ItemTypeDefn_109, 1) = ((MR_Box) (TypeParams_11));
        MR_hl_field(0, ItemTypeDefn_109, 2) = ((MR_Box) (Var_111));
        MR_hl_field(0, ItemTypeDefn_109, 3) = ((MR_Box) (TVarSet_10));
        MR_hl_field(0, ItemTypeDefn_109, 4) = ((MR_Box) (Context_13));
        MR_hl_field(0, ItemTypeDefn_109, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[1]), ((MR_Box) (ItemTypeDefn_109)), STATE_VARIABLE_TypeDefnsCord_1_67, &STATE_VARIABLE_TypeDefnsCord_2_69);
    }
    transform_hlds__intermod__maybe_acc_foreign_type_defn_info__ho2_8_p_0(TypeSymName_14, TypeParams_11, TVarSet_10, Context_13, MaybeJava_36, STATE_VARIABLE_TypeDefnsCord_2_69, &STATE_VARIABLE_TypeDefnsCord_3_73);
    transform_hlds__intermod__maybe_acc_foreign_type_defn_info__ho1_8_p_0(TypeSymName_14, TypeParams_11, TVarSet_10, Context_13, MaybeCsharp_37, STATE_VARIABLE_TypeDefnsCord_3_73, STATE_VARIABLE_TypeDefnsCord_59);
  }
  succeeded = ((MR_tag((MR_Word) Body_12)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_80 = (MR_Word) ((MR_Word) (Body_12));
    MaybeRepnB_43 = ((MR_Word) ((MR_hl_field(0, Var_80, 4))));
    succeeded = (MaybeRepnB_43 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      RepnB_45 = ((MR_Word) ((MR_hl_field(1, MaybeRepnB_43, 0))));
      CtorRepns_46 = ((MR_Word) ((MR_hl_field(0, RepnB_45, 0))));
      DuTypeKind_49 = ((MR_Word) ((MR_hl_field(0, RepnB_45, 3))));
      succeeded = ((MR_tag((MR_Word) DuTypeKind_49)) == (MR_Integer) 1);
      if (succeeded)
        Lang_51 = ((MR_Unsigned) ((MR_hl_field(1, DuTypeKind_49, 0))) & (MR_Integer) 3);
    }
  }
  if (succeeded)
  {
    MR_Word RevForeignEnumVals_52;
    MR_Word ForeignEnumVals_53;
    MR_Box conv1_RevForeignEnumVals_52;

    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[6]), (MR_Word) (&transform_hlds__intermod_scalar_common_2[8]), CtorRepns_46, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_RevForeignEnumVals_52);
    RevForeignEnumVals_52 = ((MR_Word) (conv1_RevForeignEnumVals_52));
    mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_2[3]), RevForeignEnumVals_52, &ForeignEnumVals_53);
    if ((ForeignEnumVals_53 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ForeignEnumsCord_61 = STATE_VARIABLE_ForeignEnumsCord_0_60;
    else
    {
      MR_Word HeadForeignEnumVal_54 = ((MR_Word) ((MR_hl_field(1, ForeignEnumVals_53, 0))));
      MR_Word TailForeignEnumVals_55 = ((MR_Word) ((MR_hl_field(1, ForeignEnumVals_53, 1))));
      MR_Word OoMForeignEnumVals_56;
      MR_Word ForeignEnum_57;

      {
        OoMForeignEnumVals_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, OoMForeignEnumVals_56, 0) = ((MR_Box) (HeadForeignEnumVal_54));
        MR_hl_field(0, OoMForeignEnumVals_56, 1) = ((MR_Box) (TailForeignEnumVals_55));
      }
      {
        ForeignEnum_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ForeignEnum_57, 0) = (MR_Box) ((MR_Unsigned) (Lang_51));
        MR_hl_field(0, ForeignEnum_57, 1) = ((MR_Box) (TypeCtor_6));
        MR_hl_field(0, ForeignEnum_57, 2) = ((MR_Box) (OoMForeignEnumVals_56));
        MR_hl_field(0, ForeignEnum_57, 3) = ((MR_Box) (Context_13));
        MR_hl_field(0, ForeignEnum_57, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ((MR_Box) (ForeignEnum_57)), STATE_VARIABLE_ForeignEnumsCord_0_60, STATE_VARIABLE_ForeignEnumsCord_61);
    }
  }
  else
    *STATE_VARIABLE_ForeignEnumsCord_61 = STATE_VARIABLE_ForeignEnumsCord_0_60;
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
    MR_Word Details_16 = ((MR_Word) ((MR_hl_field(1, MaybeDetails_14, 0))));
    MR_Word LangForeignType_17 = ((MR_Word) ((MR_hl_field(0, Details_16, 0))));
    MR_Word MaybeUserEqComp_18 = ((MR_Word) ((MR_hl_field(0, Details_16, 1))));
    MR_Word Assertions_19 = ((MR_Word) ((MR_hl_field(0, Details_16, 2))));
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
    MR_Word Details_16 = ((MR_Word) ((MR_hl_field(1, MaybeDetails_14, 0))));
    MR_Word LangForeignType_17 = ((MR_Word) ((MR_hl_field(0, Details_16, 0))));
    MR_Word MaybeUserEqComp_18 = ((MR_Word) ((MR_hl_field(0, Details_16, 1))));
    MR_Word Assertions_19 = ((MR_Word) ((MR_hl_field(0, Details_16, 2))));
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
transform_hlds__intermod__format_initial_opt_file_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word * IntermodInfo_7,
  MR_Word * ParseTreePlainOpt_8,
  MR_Word STATE_VARIABLE_State_0_10,
  MR_Word * STATE_VARIABLE_State_11)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_12;
  MR_Word PredDecls_14;
  MR_Word PredDefns_15;
  MR_Word Instances_16;
  MR_Word ModuleName_19;
  MR_String ModuleNameStr_20;
  MR_Word STATE_VARIABLE_State_1_25;
  MR_Word Var_59;
  MR_Word Var_61;
  MR_Word Var_13;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word TypeTable_21;
  MR_Word TypeCtorsDefns_22;
  MR_Word Var_28;
  MR_Word Var_58;

  transform_hlds__intermod_decide__decide_what_to_opt_export_2_p_0(ModuleInfo_6, IntermodInfo_7);
  transform_hlds__intermod_info__deconstruct_intermod_info_8_p_0(*IntermodInfo_7, &ModuleInfo_12, &Var_13, &PredDecls_14, &PredDefns_15, &Instances_16, &Var_17, &Var_18);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_12, &ModuleName_19);
  ModuleNameStr_20 = parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_to_string_1_f_0(ModuleName_19);
  mercury__string__builder__append_string_3_p_0((MR_String) ":- module ", STATE_VARIABLE_State_0_10, &Var_59);
  mercury__string__builder__append_string_3_p_0(ModuleNameStr_20, Var_59, &Var_61);
  mercury__string__builder__append_string_3_p_0((MR_String) ".\n", Var_61, &STATE_VARIABLE_State_1_25);
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredDecls_14);
  if (succeeded)
  {
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredDefns_15);
    if (succeeded)
    {
      succeeded = (Instances_16 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_12, &TypeTable_21);
        hlds__hlds_data__get_all_type_ctor_defns_2_p_0(TypeTable_21, &TypeCtorsDefns_22);
        Var_28 = (MR_Integer) 0;
        transform_hlds__intermod__some_type_needs_to_be_written_2_p_0(TypeCtorsDefns_22, &Var_58);
        succeeded = (Var_28 == Var_58);
      }
    }
  }
  if (succeeded)
  {
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;

    Var_29 = mercury__term_context__dummy_context_0_f_0();
    Var_30 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[0]));
    Var_31 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreePlainOpt_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_19));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_29));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_30));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_31));
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
    *STATE_VARIABLE_State_11 = STATE_VARIABLE_State_1_25;
  }
  else
    transform_hlds__intermod__format_opt_file_initial_body_4_p_0(*IntermodInfo_7, ParseTreePlainOpt_8, STATE_VARIABLE_State_1_25, STATE_VARIABLE_State_11);
}

static void MR_CALL 
transform_hlds__intermod__format_opt_file_initial_body_4_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv16_HeadVar__5_190;

  transform_hlds__intermod__IntroducedFrom__pred__format_opt_file_initial_body__329__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv16_HeadVar__5_190);
  *wrapper_arg_3 = ((MR_Box) (conv16_HeadVar__5_190));
}

static void MR_CALL 
transform_hlds__intermod__format_opt_file_initial_body_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv14_HeadVar__5_185;

  transform_hlds__intermod__IntroducedFrom__pred__format_opt_file_initial_body__325__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_HeadVar__5_185);
  *wrapper_arg_3 = ((MR_Box) (conv14_HeadVar__5_185));
}

static void MR_CALL 
transform_hlds__intermod__format_opt_file_initial_body_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_HeadVar__5_180;

  transform_hlds__intermod__IntroducedFrom__pred__format_opt_file_initial_body__321__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_HeadVar__5_180);
  *wrapper_arg_3 = ((MR_Box) (conv12_HeadVar__5_180));
}

static void MR_CALL 
transform_hlds__intermod__format_opt_file_initial_body_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_HeadVar__5_175;

  transform_hlds__intermod__IntroducedFrom__pred__format_opt_file_initial_body__317__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_HeadVar__5_175);
  *wrapper_arg_3 = ((MR_Box) (conv10_HeadVar__5_175));
}

static void MR_CALL 
transform_hlds__intermod__format_opt_file_initial_body_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_HeadVar__5_170;

  transform_hlds__intermod__IntroducedFrom__pred__format_opt_file_initial_body__313__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_HeadVar__5_170);
  *wrapper_arg_3 = ((MR_Box) (conv8_HeadVar__5_170));
}

static void MR_CALL 
transform_hlds__intermod__format_opt_file_initial_body_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__5_165;

  transform_hlds__intermod__IntroducedFrom__pred__format_opt_file_initial_body__308__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_HeadVar__5_165);
  *wrapper_arg_3 = ((MR_Box) (conv6_HeadVar__5_165));
}

static void MR_CALL 
transform_hlds__intermod__format_opt_file_initial_body_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__4_160;

  transform_hlds__intermod__IntroducedFrom__pred__format_opt_file_initial_body__304__1_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadVar__4_160);
  *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__4_160));
}

static void MR_CALL 
transform_hlds__intermod__format_opt_file_initial_body_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__5_153;

  transform_hlds__intermod__IntroducedFrom__pred__format_opt_file_initial_body__300__1_5_p_0(((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__5_153);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__5_153));
}

static void MR_CALL 
transform_hlds__intermod__format_opt_file_initial_body_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_63;

  transform_hlds__intermod__IntroducedFrom__pred__format_opt_file_initial_body__260__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_63);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_63));
}

static void MR_CALL 
transform_hlds__intermod__format_opt_file_initial_body_4_p_0(
  MR_Word IntermodInfo_5,
  MR_Word * ParseTreePlainOpt_6,
  MR_Word STATE_VARIABLE_State_0_59,
  MR_Word * STATE_VARIABLE_State_60)
{
  MR_Word ModuleInfo_8;
  MR_Word WriteDeclPredIdSet_10;
  MR_Word WriteDefnPredIdSet_11;
  MR_Word InstanceDefns_12;
  MR_Word Types_13;
  MR_Word NeedFIMs_14;
  MR_Word WriteDeclPredIds_15;
  MR_Word WriteDefnPredIds_16;
  MR_Word AvailModuleMap_17;
  MR_Word UsedModuleNames_18;
  MR_Word UseMap_23;
  MR_Word FIMSpecsSet_25;
  MR_Word FIMSpecs_26;
  MR_Word Globals_27;
  MR_Word OutInfo0_28;
  MR_Word MercInfo0_29;
  MR_Word MercInfo_30;
  MR_Word OutInfo_31;
  MR_Word OutInfoForPreds_32;
  MR_Word TypeDefns_33;
  MR_Word ForeignEnums_34;
  MR_Word InstDefns_35;
  MR_Word ModeDefns_36;
  MR_Word TypeClasses_37;
  MR_Word Instances_38;
  MR_Word DeclOrderPredInfos_39;
  MR_Word DefnOrderPredInfos_40;
  MR_Word PredDecls_41;
  MR_Word ModeDecls_42;
  MR_Word DeclMarkersCord0_43;
  MR_Word ImplMarkersCord0_44;
  MR_Word TypeSpecs_45;
  MR_Word DeclMarkersCord_51;
  MR_Word ImplMarkersCord_52;
  MR_Word DeclMarkers_56;
  MR_Word ImplMarkers_57;
  MR_Word ModuleName_58;
  MR_Word Var_65;
  MR_Word Var_67;
  MR_Word STATE_VARIABLE_State_1_69;
  MR_Word STATE_VARIABLE_State_2_73;
  MR_Word STATE_VARIABLE_State_3_75;
  MR_Word STATE_VARIABLE_State_4_78;
  MR_Word Var_79;
  MR_Word STATE_VARIABLE_State_5_80;
  MR_Word STATE_VARIABLE_State_6_83;
  MR_Word Var_84;
  MR_Word STATE_VARIABLE_State_7_85;
  MR_Word STATE_VARIABLE_State_8_88;
  MR_Word Var_89;
  MR_Word STATE_VARIABLE_State_9_90;
  MR_Word STATE_VARIABLE_State_10_93;
  MR_Word Var_94;
  MR_Word STATE_VARIABLE_State_11_95;
  MR_Word STATE_VARIABLE_State_12_98;
  MR_Word Var_99;
  MR_Word STATE_VARIABLE_State_13_100;
  MR_Word STATE_VARIABLE_State_14_103;
  MR_Word Var_104;
  MR_Word STATE_VARIABLE_State_15_105;
  MR_Word STATE_VARIABLE_State_17_114;
  MR_Word Var_116;
  MR_Word Var_9;
  MR_Box conv1_UseMap_23;
  MR_Word Var_132;
  MR_Word Var_133;
  MR_Word Var_134;
  MR_Word Var_135;
  MR_Word Var_138;
  MR_Word Var_139;
  MR_Word Var_140;
  MR_Word Var_141;
  MR_Box conv3_STATE_VARIABLE_State_1_69;
  MR_Box conv5_STATE_VARIABLE_State_3_75;
  MR_Box conv7_STATE_VARIABLE_State_5_80;
  MR_Box conv9_STATE_VARIABLE_State_7_85;
  MR_Box conv11_STATE_VARIABLE_State_9_90;
  MR_Box conv13_STATE_VARIABLE_State_11_95;
  MR_Box conv15_STATE_VARIABLE_State_13_100;
  MR_Box conv17_STATE_VARIABLE_State_15_105;

  transform_hlds__intermod_info__deconstruct_intermod_info_8_p_0(IntermodInfo_5, &ModuleInfo_8, &Var_9, &WriteDeclPredIdSet_10, &WriteDefnPredIdSet_11, &InstanceDefns_12, &Types_13, &NeedFIMs_14);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), WriteDeclPredIdSet_10, &WriteDeclPredIds_15);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), WriteDefnPredIdSet_11, &WriteDefnPredIds_16);
  hlds__hlds_module__module_info_get_avail_module_map_2_p_0(ModuleInfo_8, &AvailModuleMap_17);
  mercury__map__keys_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0), AvailModuleMap_17, &UsedModuleNames_18);
  Var_65 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
  mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&transform_hlds__intermod_scalar_common_2[0]), (MR_Word) (&transform_hlds__intermod_scalar_common_2[7]), UsedModuleNames_18, ((MR_Box) (Var_65)), &conv1_UseMap_23);
  UseMap_23 = ((MR_Word) (conv1_UseMap_23));
  switch (NeedFIMs_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word CJCsFIMs_24;

        hlds__hlds_module__module_info_get_c_j_cs_fims_2_p_0(ModuleInfo_8, &CJCsFIMs_24);
        FIMSpecsSet_25 = parse_tree__prog_data_foreign__get_all_fim_specs_1_f_0(CJCsFIMs_24);
        FIMSpecs_26 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), FIMSpecsSet_25);
      }
      break;
    case (MR_Integer) 0:
      {
        mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), &FIMSpecsSet_25);
        FIMSpecs_26 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
  }
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_27);
  OutInfo0_28 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(Globals_27, (MR_Integer) 0);
  MercInfo0_29 = ((MR_Word) ((MR_hl_field(0, OutInfo0_28, 4))));
  MercInfo_30 = parse_tree__parse_tree_out_info__merc_out_info_disable_line_numbers_1_f_0(MercInfo0_29);
  Var_132 = ((MR_Word) ((MR_hl_field(0, OutInfo0_28, 0))));
  Var_133 = ((MR_Word) ((MR_hl_field(0, OutInfo0_28, 1))));
  Var_134 = ((MR_Word) ((MR_hl_field(0, OutInfo0_28, 2))));
  Var_135 = ((MR_Word) ((MR_hl_field(0, OutInfo0_28, 3))));
  {
    OutInfo_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, OutInfo_31, 0) = ((MR_Box) (Var_132));
    MR_hl_field(0, OutInfo_31, 1) = ((MR_Box) (Var_133));
    MR_hl_field(0, OutInfo_31, 2) = ((MR_Box) (Var_134));
    MR_hl_field(0, OutInfo_31, 3) = ((MR_Box) (Var_135));
    MR_hl_field(0, OutInfo_31, 4) = ((MR_Box) (MercInfo_30));
  }
  Var_67 = hlds__hlds_out__hlds_out_util__empty_dump_options_0_f_0();
  Var_138 = ((MR_Word) ((MR_hl_field(0, OutInfo_31, 1))));
  Var_139 = ((MR_Word) ((MR_hl_field(0, OutInfo_31, 2))));
  Var_140 = ((MR_Word) ((MR_hl_field(0, OutInfo_31, 3))));
  Var_141 = ((MR_Word) ((MR_hl_field(0, OutInfo_31, 4))));
  {
    OutInfoForPreds_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, OutInfoForPreds_32, 0) = ((MR_Box) (Var_67));
    MR_hl_field(0, OutInfoForPreds_32, 1) = ((MR_Box) (Var_138));
    MR_hl_field(0, OutInfoForPreds_32, 2) = ((MR_Box) (Var_139));
    MR_hl_field(0, OutInfoForPreds_32, 3) = ((MR_Box) (Var_140));
    MR_hl_field(0, OutInfoForPreds_32, 4) = ((MR_Box) (Var_141));
  }
  transform_hlds__intermod__intermod_gather_types_3_p_0(Types_13, &TypeDefns_33, &ForeignEnums_34);
  transform_hlds__intermod__intermod_gather_insts_2_p_0(ModuleInfo_8, &InstDefns_35);
  transform_hlds__intermod__intermod_gather_modes_2_p_0(ModuleInfo_8, &ModeDefns_36);
  transform_hlds__intermod__intermod_gather_classes_2_p_0(ModuleInfo_8, &TypeClasses_37);
  transform_hlds__intermod__intermod_gather_instances_2_p_0(InstanceDefns_12, &Instances_38);
  mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), (MR_Word) (&transform_hlds__intermod_scalar_common_4[2]), UsedModuleNames_18, ((MR_Box) (STATE_VARIABLE_State_0_59)), &conv3_STATE_VARIABLE_State_1_69);
  STATE_VARIABLE_State_1_69 = ((MR_Word) (conv3_STATE_VARIABLE_State_1_69));
  parse_tree__parse_tree_out_item__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_97_121_98_101_95_102_111_114_109_97_116_95_98_108_111_99_107_95_115_116_97_114_116_95_98_108_97_110_107_95_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), FIMSpecs_26, STATE_VARIABLE_State_1_69, &STATE_VARIABLE_State_2_73);
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), (MR_Word) (&transform_hlds__intermod_scalar_common_3[6]), FIMSpecs_26, ((MR_Box) (STATE_VARIABLE_State_2_73)), &conv5_STATE_VARIABLE_State_3_75);
  STATE_VARIABLE_State_3_75 = ((MR_Word) (conv5_STATE_VARIABLE_State_3_75));
  parse_tree__parse_tree_out_item__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_97_121_98_101_95_102_111_114_109_97_116_95_98_108_111_99_107_95_115_116_97_114_116_95_98_108_97_110_107_95_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[1]), (MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), TypeDefns_33, STATE_VARIABLE_State_3_75, &STATE_VARIABLE_State_4_78);
  {
    Var_79 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_79, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_5[7]));
    MR_hl_field(0, Var_79, 1) = ((MR_Box) (transform_hlds__intermod__format_opt_file_initial_body_4_p_0_4));
    MR_hl_field(0, Var_79, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_79, 3) = ((MR_Box) (MercInfo_30));
    MR_hl_field(0, Var_79, 4) = NULL;
  }
  mercury__list__foldl_4_p_2((MR_Word) (&transform_hlds__intermod_scalar_common_1[1]), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_79, TypeDefns_33, ((MR_Box) (STATE_VARIABLE_State_4_78)), &conv7_STATE_VARIABLE_State_5_80);
  STATE_VARIABLE_State_5_80 = ((MR_Word) (conv7_STATE_VARIABLE_State_5_80));
  parse_tree__parse_tree_out_item__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_97_121_98_101_95_102_111_114_109_97_116_95_98_108_111_99_107_95_115_116_97_114_116_95_98_108_97_110_107_95_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), ForeignEnums_34, STATE_VARIABLE_State_5_80, &STATE_VARIABLE_State_6_83);
  {
    Var_84 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_84, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_5[8]));
    MR_hl_field(0, Var_84, 1) = ((MR_Box) (transform_hlds__intermod__format_opt_file_initial_body_4_p_0_5));
    MR_hl_field(0, Var_84, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_84, 3) = ((MR_Box) (MercInfo_30));
    MR_hl_field(0, Var_84, 4) = NULL;
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_84, ForeignEnums_34, ((MR_Box) (STATE_VARIABLE_State_6_83)), &conv9_STATE_VARIABLE_State_7_85);
  STATE_VARIABLE_State_7_85 = ((MR_Word) (conv9_STATE_VARIABLE_State_7_85));
  parse_tree__parse_tree_out_item__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_97_121_98_101_95_102_111_114_109_97_116_95_98_108_111_99_107_95_115_116_97_114_116_95_98_108_97_110_107_95_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[2]), (MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), InstDefns_35, STATE_VARIABLE_State_7_85, &STATE_VARIABLE_State_8_88);
  {
    Var_89 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_89, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_5[9]));
    MR_hl_field(0, Var_89, 1) = ((MR_Box) (transform_hlds__intermod__format_opt_file_initial_body_4_p_0_6));
    MR_hl_field(0, Var_89, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_89, 3) = ((MR_Box) (MercInfo_30));
    MR_hl_field(0, Var_89, 4) = NULL;
  }
  mercury__list__foldl_4_p_2((MR_Word) (&transform_hlds__intermod_scalar_common_1[2]), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_89, InstDefns_35, ((MR_Box) (STATE_VARIABLE_State_8_88)), &conv11_STATE_VARIABLE_State_9_90);
  STATE_VARIABLE_State_9_90 = ((MR_Word) (conv11_STATE_VARIABLE_State_9_90));
  parse_tree__parse_tree_out_item__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_97_121_98_101_95_102_111_114_109_97_116_95_98_108_111_99_107_95_115_116_97_114_116_95_98_108_97_110_107_95_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[3]), (MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), ModeDefns_36, STATE_VARIABLE_State_9_90, &STATE_VARIABLE_State_10_93);
  {
    Var_94 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_94, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_5[10]));
    MR_hl_field(0, Var_94, 1) = ((MR_Box) (transform_hlds__intermod__format_opt_file_initial_body_4_p_0_7));
    MR_hl_field(0, Var_94, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_94, 3) = ((MR_Box) (MercInfo_30));
    MR_hl_field(0, Var_94, 4) = NULL;
  }
  mercury__list__foldl_4_p_2((MR_Word) (&transform_hlds__intermod_scalar_common_1[3]), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_94, ModeDefns_36, ((MR_Box) (STATE_VARIABLE_State_10_93)), &conv13_STATE_VARIABLE_State_11_95);
  STATE_VARIABLE_State_11_95 = ((MR_Word) (conv13_STATE_VARIABLE_State_11_95));
  parse_tree__parse_tree_out_item__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_97_121_98_101_95_102_111_114_109_97_116_95_98_108_111_99_107_95_115_116_97_114_116_95_98_108_97_110_107_95_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), TypeClasses_37, STATE_VARIABLE_State_11_95, &STATE_VARIABLE_State_12_98);
  {
    Var_99 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_99, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_5[11]));
    MR_hl_field(0, Var_99, 1) = ((MR_Box) (transform_hlds__intermod__format_opt_file_initial_body_4_p_0_8));
    MR_hl_field(0, Var_99, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_99, 3) = ((MR_Box) (MercInfo_30));
    MR_hl_field(0, Var_99, 4) = NULL;
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_99, TypeClasses_37, ((MR_Box) (STATE_VARIABLE_State_12_98)), &conv15_STATE_VARIABLE_State_13_100);
  STATE_VARIABLE_State_13_100 = ((MR_Word) (conv15_STATE_VARIABLE_State_13_100));
  parse_tree__parse_tree_out_item__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_97_121_98_101_95_102_111_114_109_97_116_95_98_108_111_99_107_95_115_116_97_114_116_95_98_108_97_110_107_95_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), Instances_38, STATE_VARIABLE_State_13_100, &STATE_VARIABLE_State_14_103);
  {
    Var_104 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_104, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_5[12]));
    MR_hl_field(0, Var_104, 1) = ((MR_Box) (transform_hlds__intermod__format_opt_file_initial_body_4_p_0_9));
    MR_hl_field(0, Var_104, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_104, 3) = ((MR_Box) (MercInfo_30));
    MR_hl_field(0, Var_104, 4) = NULL;
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_104, Instances_38, ((MR_Box) (STATE_VARIABLE_State_14_103)), &conv17_STATE_VARIABLE_State_15_105);
  STATE_VARIABLE_State_15_105 = ((MR_Word) (conv17_STATE_VARIABLE_State_15_105));
  transform_hlds__intermod_order_pred_info__generate_order_pred_infos_3_p_0(ModuleInfo_8, WriteDeclPredIds_15, &DeclOrderPredInfos_39);
  transform_hlds__intermod_order_pred_info__generate_order_pred_infos_3_p_0(ModuleInfo_8, WriteDefnPredIds_16, &DefnOrderPredInfos_40);
  if ((DeclOrderPredInfos_39 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    PredDecls_41 = (MR_Word) ((MR_Unsigned) 0U);
    ModeDecls_42 = (MR_Word) ((MR_Unsigned) 0U);
    DeclMarkersCord0_43 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_opt_0));
    ImplMarkersCord0_44 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_opt_0));
    TypeSpecs_45 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_State_17_114 = STATE_VARIABLE_State_15_105;
  }
  else
  {
    MR_Word PredDeclsCord_48;
    MR_Word ModeDeclsCord_49;
    MR_Word TypeSpecsCord_50;
    MR_Word STATE_VARIABLE_State_16_108;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word OrderPredInfo_217;
    MR_Word OrderPredInfos_218;
    MR_Word STATE_VARIABLE_PredDeclsCord_1_231;
    MR_Word STATE_VARIABLE_ModeDeclsCord_1_232;
    MR_Word STATE_VARIABLE_DeclMarkersCord_1_233;
    MR_Word STATE_VARIABLE_ImplMarkersCord_1_234;
    MR_Word STATE_VARIABLE_TypeSpecsCord_1_235;
    MR_Word STATE_VARIABLE_State_1_236;

    mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_15_105, &STATE_VARIABLE_State_16_108);
    Var_109 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0));
    Var_110 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0));
    Var_111 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_opt_0));
    Var_112 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_opt_0));
    Var_113 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0));
    OrderPredInfo_217 = ((MR_Word) ((MR_hl_field(1, DeclOrderPredInfos_39, 0))));
    OrderPredInfos_218 = ((MR_Word) ((MR_hl_field(1, DeclOrderPredInfos_39, 1))));
    transform_hlds__intermod__intermod_format_pred_decl_15_p_0(MercInfo_30, ModuleInfo_8, OrderPredInfo_217, Var_109, &STATE_VARIABLE_PredDeclsCord_1_231, Var_110, &STATE_VARIABLE_ModeDeclsCord_1_232, Var_111, &STATE_VARIABLE_DeclMarkersCord_1_233, Var_112, &STATE_VARIABLE_ImplMarkersCord_1_234, Var_113, &STATE_VARIABLE_TypeSpecsCord_1_235, STATE_VARIABLE_State_16_108, &STATE_VARIABLE_State_1_236);
    transform_hlds__intermod__intermod_format_pred_decls_15_p_0(MercInfo_30, ModuleInfo_8, OrderPredInfos_218, STATE_VARIABLE_PredDeclsCord_1_231, &PredDeclsCord_48, STATE_VARIABLE_ModeDeclsCord_1_232, &ModeDeclsCord_49, STATE_VARIABLE_DeclMarkersCord_1_233, &DeclMarkersCord0_43, STATE_VARIABLE_ImplMarkersCord_1_234, &ImplMarkersCord0_44, STATE_VARIABLE_TypeSpecsCord_1_235, &TypeSpecsCord_50, STATE_VARIABLE_State_1_236, &STATE_VARIABLE_State_17_114);
    PredDecls_41 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), PredDeclsCord_48);
    ModeDecls_42 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), ModeDeclsCord_49);
    TypeSpecs_45 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0), TypeSpecsCord_50);
  }
  transform_hlds__intermod__intermod_format_pred_defns_9_p_0(OutInfoForPreds_32, ModuleInfo_8, DefnOrderPredInfos_40, DeclMarkersCord0_43, &DeclMarkersCord_51, ImplMarkersCord0_44, &ImplMarkersCord_52, STATE_VARIABLE_State_17_114, STATE_VARIABLE_State_60);
  DeclMarkers_56 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_opt_0), DeclMarkersCord_51);
  ImplMarkers_57 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_opt_0), ImplMarkersCord_52);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_8, &ModuleName_58);
  Var_116 = mercury__term_context__dummy_context_0_f_0();
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreePlainOpt_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_58));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_116));
    MR_hl_field(0, base, 2) = ((MR_Box) (UseMap_23));
    MR_hl_field(0, base, 3) = ((MR_Box) (FIMSpecsSet_25));
    MR_hl_field(0, base, 4) = ((MR_Box) (TypeDefns_33));
    MR_hl_field(0, base, 5) = ((MR_Box) (ForeignEnums_34));
    MR_hl_field(0, base, 6) = ((MR_Box) (InstDefns_35));
    MR_hl_field(0, base, 7) = ((MR_Box) (ModeDefns_36));
    MR_hl_field(0, base, 8) = ((MR_Box) (TypeClasses_37));
    MR_hl_field(0, base, 9) = ((MR_Box) (Instances_38));
    MR_hl_field(0, base, 10) = ((MR_Box) (PredDecls_41));
    MR_hl_field(0, base, 11) = ((MR_Box) (ModeDecls_42));
    MR_hl_field(0, base, 12) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 13) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 14) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 15) = ((MR_Box) (DeclMarkers_56));
    MR_hl_field(0, base, 16) = ((MR_Box) (ImplMarkers_57));
    MR_hl_field(0, base, 17) = ((MR_Box) (TypeSpecs_45));
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
transform_hlds__intermod__intermod_format_pred_defns_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_State_63;

  transform_hlds__intermod__intermod_format_clause_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) ((MR_hl_field(0, closure, 9)))), ((MR_Word) ((MR_hl_field(0, closure, 10)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_State_63);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_State_63));
}

static void MR_CALL 
transform_hlds__intermod__intermod_format_pred_defns_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__4_72;

  transform_hlds__intermod__IntroducedFrom__pred__intermod_format_pred_defn__969__1_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__4_72);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__4_72));
}

static void MR_CALL 
transform_hlds__intermod__intermod_format_pred_defns_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_66;

  transform_hlds__intermod__IntroducedFrom__pred__intermod_format_pred_defn__967__1_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__4_66);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_66));
}

static void MR_CALL 
transform_hlds__intermod__intermod_format_pred_defns_9_p_0(
  MR_Word OutInfo_1,
  MR_Word ModuleInfo_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_DeclMarkers_0_4,
  MR_Word * STATE_VARIABLE_DeclMarkers_5,
  MR_Word STATE_VARIABLE_ImplMarkers_0_6,
  MR_Word * STATE_VARIABLE_ImplMarkers_7,
  MR_Word STATE_VARIABLE_State_0_8,
  MR_Word * STATE_VARIABLE_State_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_State_9 = STATE_VARIABLE_State_0_8;
      *STATE_VARIABLE_ImplMarkers_7 = STATE_VARIABLE_ImplMarkers_0_6;
      *STATE_VARIABLE_DeclMarkers_5 = STATE_VARIABLE_DeclMarkers_0_4;
    }
    else
    {
      MR_Word OrderPredInfo_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word OrderPredInfos_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word STATE_VARIABLE_DeclMarkers_1_34;
      MR_Word STATE_VARIABLE_ImplMarkers_1_35;
      MR_Word STATE_VARIABLE_State_1_36;
      MR_String PredName_37;
      MR_Word PredOrFunc_39;
      MR_Word PredId_40;
      MR_Word PredInfo_41;
      MR_Word ModuleName_42;
      MR_Word PredSymName_43;
      MR_Word DeclMarkers_44;
      MR_Word ImplMarkers_45;
      MR_Word ClausesInfo_46;
      MR_Word VarTable_47;
      MR_Word HeadVars_48;
      MR_Word ClausesRep_49;
      MR_Word Clauses_51;
      MR_Word GoalType_52;
      MR_Word TVarSet_53;
      MR_Word STATE_VARIABLE_State_1_57;
      MR_Word Var_59;
      MR_Word STATE_VARIABLE_State_2_60;
      MR_Word Var_63;
      MR_Word STATE_VARIABLE_State_3_64;
      MR_Word ModuleName_79;
      MR_Word PredOrFunc_80;
      MR_String PredName_81;
      MR_Word PredSymName_82;
      MR_Word PredFormArity_83;
      MR_Word UserArity_84;
      MR_Word Markers_85;
      MR_Word MarkerList_86;
      MR_Word PFU_87;
      MR_Word RevDeclMarkers_88;
      MR_Word RevImplMarkers_89;
      MR_Box conv1_STATE_VARIABLE_State_2_60;
      MR_Box conv3_STATE_VARIABLE_State_3_64;
      MR_Word _ItemNumbers_50;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_DeclMarkers_0_4;
      MR_Word next_value_of_STATE_VARIABLE_ImplMarkers_0_6;
      MR_Word next_value_of_STATE_VARIABLE_State_0_8;

      mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_0_8, &STATE_VARIABLE_State_1_57);
      PredName_37 = ((MR_String) ((MR_hl_field(0, OrderPredInfo_23, 0))));
      PredOrFunc_39 = ((MR_Unsigned) ((MR_hl_field(0, OrderPredInfo_23, 2))) & (MR_Integer) 1);
      PredId_40 = ((MR_Word) ((MR_hl_field(0, OrderPredInfo_23, 3))));
      PredInfo_41 = ((MR_Word) ((MR_hl_field(0, OrderPredInfo_23, 4))));
      ModuleName_42 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_41);
      {
        PredSymName_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, PredSymName_43, 0) = ((MR_Box) (ModuleName_42));
        MR_hl_field(1, PredSymName_43, 1) = ((MR_Box) (PredName_37));
      }
      ModuleName_79 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_41);
      PredOrFunc_80 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_41);
      PredName_81 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_41);
      {
        PredSymName_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, PredSymName_82, 0) = ((MR_Box) (ModuleName_79));
        MR_hl_field(1, PredSymName_82, 1) = ((MR_Box) (PredName_81));
      }
      hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_41, &PredFormArity_83);
      parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_80, &UserArity_84, PredFormArity_83);
      hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_41, &Markers_85);
      hlds__hlds_markers__markers_to_marker_list_2_p_0(Markers_85, &MarkerList_86);
      switch (PredOrFunc_80) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          PFU_87 = (MR_Integer) 1;
          break;
        case (MR_Integer) 0:
          PFU_87 = (MR_Integer) 0;
          break;
      }
      transform_hlds__intermod__intermod_gather_pred_marker_pragmas_loop_8_p_0(PFU_87, PredSymName_82, UserArity_84, MarkerList_86, (MR_Word) ((MR_Unsigned) 0U), &RevDeclMarkers_88, (MR_Word) ((MR_Unsigned) 0U), &RevImplMarkers_89);
      mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_opt_0), RevDeclMarkers_88, &DeclMarkers_44);
      mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_opt_0), RevImplMarkers_89, &ImplMarkers_45);
      Var_59 = (MR_Word) (DeclMarkers_44);
      mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), (MR_Word) (&transform_hlds__intermod_scalar_common_3[4]), Var_59, ((MR_Box) (STATE_VARIABLE_State_1_57)), &conv1_STATE_VARIABLE_State_2_60);
      STATE_VARIABLE_State_2_60 = ((MR_Word) (conv1_STATE_VARIABLE_State_2_60));
      Var_63 = (MR_Word) (ImplMarkers_45);
      mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), (MR_Word) (&transform_hlds__intermod_scalar_common_3[5]), Var_63, ((MR_Box) (STATE_VARIABLE_State_2_60)), &conv3_STATE_VARIABLE_State_3_64);
      STATE_VARIABLE_State_3_64 = ((MR_Word) (conv3_STATE_VARIABLE_State_3_64));
      mercury__cord__snoc_list_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_opt_0), DeclMarkers_44, STATE_VARIABLE_DeclMarkers_0_4, &STATE_VARIABLE_DeclMarkers_1_34);
      mercury__cord__snoc_list_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_opt_0), ImplMarkers_45, STATE_VARIABLE_ImplMarkers_0_6, &STATE_VARIABLE_ImplMarkers_1_35);
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_41, &ClausesInfo_46);
      hlds__hlds_clauses__clauses_info_get_var_table_2_p_0(ClausesInfo_46, &VarTable_47);
      hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(ClausesInfo_46, &HeadVars_48);
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo_46, &ClausesRep_49, &_ItemNumbers_50);
      hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(ClausesRep_49, &Clauses_51);
      hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_41, &GoalType_52);
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_41, &TVarSet_53);
      if (((MR_tag((MR_Word) GoalType_52)) == (MR_Integer) 1))
      {
        MR_Word PromiseType_54 = ((MR_Unsigned) ((MR_hl_field(1, GoalType_52, 0))) & (MR_Integer) 3);

        if ((Clauses_51 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.intermod_format_pred_defn\'/9", (MR_String) "assertion not a single clause.");
            return;
          }
        else
        {
          MR_Word Var_77 = ((MR_Word) ((MR_hl_field(1, Clauses_51, 1))));
          MR_Word Var_78 = ((MR_Word) ((MR_hl_field(1, Clauses_51, 0))));

          if ((Var_77 == (MR_Word) ((MR_Unsigned) 0U)))
            transform_hlds__intermod__format_promise_9_p_0(OutInfo_1, ModuleInfo_2, TVarSet_53, VarTable_47, PromiseType_54, HeadVars_48, Var_78, STATE_VARIABLE_State_3_64, &STATE_VARIABLE_State_1_36);
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.intermod_format_pred_defn\'/9", (MR_String) "assertion not a single clause.");
              return;
            }
        }
      }
      else
      {
        MR_Word TypeQual_55;
        MR_Word Var_68;
        MR_Box conv5_STATE_VARIABLE_State_1_36;

        {
          TypeQual_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, TypeQual_55, 0) = ((MR_Box) (TVarSet_53));
          MR_hl_field(1, TypeQual_55, 1) = ((MR_Box) (VarTable_47));
        }
        {
          Var_68 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_68, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_8[0]));
          MR_hl_field(0, Var_68, 1) = ((MR_Box) (transform_hlds__intermod__intermod_format_pred_defns_9_p_0_3));
          MR_hl_field(0, Var_68, 2) = ((MR_Box) ((MR_Integer) 8));
          MR_hl_field(0, Var_68, 3) = ((MR_Box) (OutInfo_1));
          MR_hl_field(0, Var_68, 4) = ((MR_Box) (ModuleInfo_2));
          MR_hl_field(0, Var_68, 5) = ((MR_Box) (PredId_40));
          MR_hl_field(0, Var_68, 6) = ((MR_Box) (PredSymName_43));
          MR_hl_field(0, Var_68, 7) = ((MR_Box) (PredOrFunc_39));
          MR_hl_field(0, Var_68, 8) = ((MR_Box) (VarTable_47));
          MR_hl_field(0, Var_68, 9) = ((MR_Box) (TypeQual_55));
          MR_hl_field(0, Var_68, 10) = ((MR_Box) (HeadVars_48));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_68, Clauses_51, ((MR_Box) (STATE_VARIABLE_State_3_64)), &conv5_STATE_VARIABLE_State_1_36);
        STATE_VARIABLE_State_1_36 = ((MR_Word) (conv5_STATE_VARIABLE_State_1_36));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = OrderPredInfos_24;
      next_value_of_STATE_VARIABLE_DeclMarkers_0_4 = STATE_VARIABLE_DeclMarkers_1_34;
      next_value_of_STATE_VARIABLE_ImplMarkers_0_6 = STATE_VARIABLE_ImplMarkers_1_35;
      next_value_of_STATE_VARIABLE_State_0_8 = STATE_VARIABLE_State_1_36;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_DeclMarkers_0_4 = next_value_of_STATE_VARIABLE_DeclMarkers_0_4;
      STATE_VARIABLE_ImplMarkers_0_6 = next_value_of_STATE_VARIABLE_ImplMarkers_0_6;
      STATE_VARIABLE_State_0_8 = next_value_of_STATE_VARIABLE_State_0_8;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod__format_promise_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = parse_tree__var_table__var_table_entry_name_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__intermod__format_promise_9_p_0(
  MR_Word Info_10,
  MR_Word ModuleInfo_11,
  MR_Word TVarSet_12,
  MR_Word VarTable_13,
  MR_Word PromiseType_14,
  MR_Word HeadVars_15,
  MR_Word Clause_16,
  MR_Word STATE_VARIABLE_State_0_23,
  MR_Word * STATE_VARIABLE_State_24)
{
  MR_Word HeadVarStrs_18;
  MR_String HeadVarsStr_19;
  MR_Word Goal_20;
  MR_Word InstVarSet_21;
  MR_Word InfoGoal_22;
  MR_Word Var_25;
  MR_Word STATE_VARIABLE_State_1_29;
  MR_Word Var_40;

  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_6[1]));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (transform_hlds__intermod__format_promise_9_p_0_1));
    MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_25, 3) = ((MR_Box) (VarTable_13));
  }
  HeadVarStrs_18 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[12]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_25, HeadVars_15);
  HeadVarsStr_19 = mercury__string__join_list_2_f_0((MR_String) ", ", HeadVarStrs_18);
  switch (PromiseType_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      {
        MR_String Var_38;
        MR_Word Var_54;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_59;

        Var_38 = parse_tree__parse_tree_out_misc__promise_to_string_1_f_0(PromiseType_14);
        mercury__string__builder__append_string_3_p_0((MR_String) ":- all [", STATE_VARIABLE_State_0_23, &Var_54);
        mercury__string__builder__append_string_3_p_0(HeadVarsStr_19, Var_54, &Var_56);
        mercury__string__builder__append_string_3_p_0((MR_String) "] ", Var_56, &Var_57);
        mercury__string__builder__append_string_3_p_0(Var_38, Var_57, &Var_59);
        mercury__string__builder__append_string_3_p_0((MR_String) "\n(\n", Var_59, &STATE_VARIABLE_State_1_29);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Var_50;
        MR_Word Var_52;

        mercury__string__builder__append_string_3_p_0((MR_String) ":- promise all [", STATE_VARIABLE_State_0_23, &Var_50);
        mercury__string__builder__append_string_3_p_0(HeadVarsStr_19, Var_50, &Var_52);
        mercury__string__builder__append_string_3_p_0((MR_String) "] (\n", Var_52, &STATE_VARIABLE_State_1_29);
      }
      break;
  }
  Goal_20 = hlds__hlds_clauses__clause_body_1_f_0(Clause_16);
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_21);
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (VarTable_13));
  }
  {
    InfoGoal_22 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InfoGoal_22, 0) = ((MR_Box) (Info_10));
    MR_hl_field(0, InfoGoal_22, 1) = ((MR_Box) (ModuleInfo_11));
    MR_hl_field(0, InfoGoal_22, 2) = ((MR_Box) (Var_40));
    MR_hl_field(0, InfoGoal_22, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, InfoGoal_22, 4) = ((MR_Box) (TVarSet_12));
    MR_hl_field(0, InfoGoal_22, 5) = ((MR_Box) (InstVarSet_21));
    MR_hl_field(0, InfoGoal_22, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0(InfoGoal_22, (MR_Unsigned) 1U, (MR_String) "\n).\n", Goal_20, STATE_VARIABLE_State_1_29, STATE_VARIABLE_State_24);
}

static void MR_CALL 
transform_hlds__intermod__intermod_format_pred_decls_15_p_0(
  MR_Word MercInfo_1,
  MR_Word ModuleInfo_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_PredDeclsCord_0_4,
  MR_Word * STATE_VARIABLE_PredDeclsCord_5,
  MR_Word STATE_VARIABLE_ModeDeclsCord_0_6,
  MR_Word * STATE_VARIABLE_ModeDeclsCord_7,
  MR_Word STATE_VARIABLE_DeclMarkersCord_0_8,
  MR_Word * STATE_VARIABLE_DeclMarkersCord_9,
  MR_Word STATE_VARIABLE_ImplMarkersCord_0_10,
  MR_Word * STATE_VARIABLE_ImplMarkersCord_11,
  MR_Word STATE_VARIABLE_TypeSpecsCord_0_12,
  MR_Word * STATE_VARIABLE_TypeSpecsCord_13,
  MR_Word STATE_VARIABLE_State_0_14,
  MR_Word * STATE_VARIABLE_State_15)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_State_15 = STATE_VARIABLE_State_0_14;
      *STATE_VARIABLE_TypeSpecsCord_13 = STATE_VARIABLE_TypeSpecsCord_0_12;
      *STATE_VARIABLE_ImplMarkersCord_11 = STATE_VARIABLE_ImplMarkersCord_0_10;
      *STATE_VARIABLE_DeclMarkersCord_9 = STATE_VARIABLE_DeclMarkersCord_0_8;
      *STATE_VARIABLE_ModeDeclsCord_7 = STATE_VARIABLE_ModeDeclsCord_0_6;
      *STATE_VARIABLE_PredDeclsCord_5 = STATE_VARIABLE_PredDeclsCord_0_4;
    }
    else
    {
      MR_Word OrderPredInfo_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word OrderPredInfos_39 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word STATE_VARIABLE_PredDeclsCord_1_58;
      MR_Word STATE_VARIABLE_ModeDeclsCord_1_59;
      MR_Word STATE_VARIABLE_DeclMarkersCord_1_60;
      MR_Word STATE_VARIABLE_ImplMarkersCord_1_61;
      MR_Word STATE_VARIABLE_TypeSpecsCord_1_62;
      MR_Word STATE_VARIABLE_State_1_63;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_PredDeclsCord_0_4;
      MR_Word next_value_of_STATE_VARIABLE_ModeDeclsCord_0_6;
      MR_Word next_value_of_STATE_VARIABLE_DeclMarkersCord_0_8;
      MR_Word next_value_of_STATE_VARIABLE_ImplMarkersCord_0_10;
      MR_Word next_value_of_STATE_VARIABLE_TypeSpecsCord_0_12;
      MR_Word next_value_of_STATE_VARIABLE_State_0_14;

      transform_hlds__intermod__intermod_format_pred_decl_15_p_0(MercInfo_1, ModuleInfo_2, OrderPredInfo_38, STATE_VARIABLE_PredDeclsCord_0_4, &STATE_VARIABLE_PredDeclsCord_1_58, STATE_VARIABLE_ModeDeclsCord_0_6, &STATE_VARIABLE_ModeDeclsCord_1_59, STATE_VARIABLE_DeclMarkersCord_0_8, &STATE_VARIABLE_DeclMarkersCord_1_60, STATE_VARIABLE_ImplMarkersCord_0_10, &STATE_VARIABLE_ImplMarkersCord_1_61, STATE_VARIABLE_TypeSpecsCord_0_12, &STATE_VARIABLE_TypeSpecsCord_1_62, STATE_VARIABLE_State_0_14, &STATE_VARIABLE_State_1_63);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = OrderPredInfos_39;
      next_value_of_STATE_VARIABLE_PredDeclsCord_0_4 = STATE_VARIABLE_PredDeclsCord_1_58;
      next_value_of_STATE_VARIABLE_ModeDeclsCord_0_6 = STATE_VARIABLE_ModeDeclsCord_1_59;
      next_value_of_STATE_VARIABLE_DeclMarkersCord_0_8 = STATE_VARIABLE_DeclMarkersCord_1_60;
      next_value_of_STATE_VARIABLE_ImplMarkersCord_0_10 = STATE_VARIABLE_ImplMarkersCord_1_61;
      next_value_of_STATE_VARIABLE_TypeSpecsCord_0_12 = STATE_VARIABLE_TypeSpecsCord_1_62;
      next_value_of_STATE_VARIABLE_State_0_14 = STATE_VARIABLE_State_1_63;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_PredDeclsCord_0_4 = next_value_of_STATE_VARIABLE_PredDeclsCord_0_4;
      STATE_VARIABLE_ModeDeclsCord_0_6 = next_value_of_STATE_VARIABLE_ModeDeclsCord_0_6;
      STATE_VARIABLE_DeclMarkersCord_0_8 = next_value_of_STATE_VARIABLE_DeclMarkersCord_0_8;
      STATE_VARIABLE_ImplMarkersCord_0_10 = next_value_of_STATE_VARIABLE_ImplMarkersCord_0_10;
      STATE_VARIABLE_TypeSpecsCord_0_12 = next_value_of_STATE_VARIABLE_TypeSpecsCord_0_12;
      STATE_VARIABLE_State_0_14 = next_value_of_STATE_VARIABLE_State_0_14;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_format_pred_decl_15_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__5_105;

  transform_hlds__intermod__IntroducedFrom__pred__intermod_format_pred_decl__781__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_HeadVar__5_105);
  *wrapper_arg_3 = ((MR_Box) (conv6_HeadVar__5_105));
}

static void MR_CALL 
transform_hlds__intermod__intermod_format_pred_decl_15_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__4_100;

  transform_hlds__intermod__IntroducedFrom__pred__intermod_format_pred_decl__778__1_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadVar__4_100);
  *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__4_100));
}

static void MR_CALL 
transform_hlds__intermod__intermod_format_pred_decl_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__4_95;

  transform_hlds__intermod__IntroducedFrom__pred__intermod_format_pred_decl__776__1_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__4_95);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__4_95));
}

static void MR_CALL 
transform_hlds__intermod__intermod_format_pred_decl_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__5_89;

  transform_hlds__intermod__IntroducedFrom__pred__intermod_format_pred_decl__774__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__5_89);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__5_89));
}

static void MR_CALL 
transform_hlds__intermod__intermod_format_pred_decl_15_p_0(
  MR_Word MercInfo_16,
  MR_Word ModuleInfo_17,
  MR_Word OrderPredInfo_18,
  MR_Word STATE_VARIABLE_PredDeclsCord_0_53,
  MR_Word * STATE_VARIABLE_PredDeclsCord_54,
  MR_Word STATE_VARIABLE_ModeDeclsCord_0_55,
  MR_Word * STATE_VARIABLE_ModeDeclsCord_56,
  MR_Word STATE_VARIABLE_DeclMarkersCord_0_57,
  MR_Word * STATE_VARIABLE_DeclMarkersCord_58,
  MR_Word STATE_VARIABLE_ImplMarkersCord_0_59,
  MR_Word * STATE_VARIABLE_ImplMarkersCord_60,
  MR_Word STATE_VARIABLE_TypeSpecsCord_0_61,
  MR_Word * STATE_VARIABLE_TypeSpecsCord_62,
  MR_Word STATE_VARIABLE_State_0_63,
  MR_Word * STATE_VARIABLE_State_64)
{
  MR_bool succeeded;
  MR_String PredName_25 = ((MR_String) ((MR_hl_field(0, OrderPredInfo_18, 0))));
  MR_Word PredOrFunc_27 = ((MR_Unsigned) ((MR_hl_field(0, OrderPredInfo_18, 2))) & (MR_Integer) 1);
  MR_Word PredId_28 = ((MR_Word) ((MR_hl_field(0, OrderPredInfo_18, 3))));
  MR_Word PredInfo_29 = ((MR_Word) ((MR_hl_field(0, OrderPredInfo_18, 4))));
  MR_Word ModuleName_30;
  MR_Word TVarSet_31;
  MR_Word ExistQVars_32;
  MR_Word ArgTypes_33;
  MR_Word Purity_34;
  MR_Word ClassContext_35;
  MR_Word Context_36;
  MR_Word PredSymName_37;
  MR_Word TypesAndMaybeModes_38;
  MR_Word InstVarSet_42;
  MR_Word PredDecl_44;
  MR_Word ProcMap_46;
  MR_Word SortedProcPairs_47;
  MR_Word ModeDecls_48;
  MR_Word DeclMarkers_49;
  MR_Word ImplMarkers_50;
  MR_Word TypeSpecs_51;
  MR_Word STATE_VARIABLE_State_1_68;
  MR_Word Var_69;
  MR_Word STATE_VARIABLE_State_2_70;
  MR_Word Var_73;
  MR_Word STATE_VARIABLE_State_3_74;
  MR_Word Var_77;
  MR_Word STATE_VARIABLE_State_4_78;
  MR_Word ModuleName_111;
  MR_Word PredOrFunc_112;
  MR_String PredName_113;
  MR_Word PredSymName_114;
  MR_Word PredFormArity_115;
  MR_Word UserArity_116;
  MR_Word Markers_117;
  MR_Word MarkerList_118;
  MR_Word PFU_119;
  MR_Word RevDeclMarkers_120;
  MR_Word RevImplMarkers_121;
  MR_Word TypeSpecTables_126;
  MR_Word PragmaMap_127;
  MR_Word OoMTypeSpecs_128;
  MR_Box conv1_STATE_VARIABLE_State_2_70;
  MR_Box conv3_STATE_VARIABLE_State_3_74;
  MR_Box conv5_STATE_VARIABLE_State_4_78;
  MR_Box conv7_STATE_VARIABLE_State_64;

  ModuleName_30 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_29);
  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_29, &TVarSet_31, &ExistQVars_32, &ArgTypes_33);
  hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_29, &Purity_34);
  hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_29, &ClassContext_35);
  hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_29, &Context_36);
  {
    PredSymName_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PredSymName_37, 0) = ((MR_Box) (ModuleName_30));
    MR_hl_field(1, PredSymName_37, 1) = ((MR_Box) (PredName_25));
  }
  {
    TypesAndMaybeModes_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypesAndMaybeModes_38, 0) = ((MR_Box) (ArgTypes_33));
  }
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_42);
  {
    PredDecl_44 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredDecl_44, 0) = ((MR_Box) (PredSymName_37));
    MR_hl_field(0, PredDecl_44, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_27));
    MR_hl_field(0, PredDecl_44, 2) = ((MR_Box) (TypesAndMaybeModes_38));
    MR_hl_field(0, PredDecl_44, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredDecl_44, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredDecl_44, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredDecl_44, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredDecl_44, 7) = ((MR_Box) (TVarSet_31));
    MR_hl_field(0, PredDecl_44, 8) = ((MR_Box) (InstVarSet_42));
    MR_hl_field(0, PredDecl_44, 9) = ((MR_Box) (ExistQVars_32));
    MR_hl_field(0, PredDecl_44, 10) = (MR_Box) ((MR_Unsigned) (Purity_34));
    MR_hl_field(0, PredDecl_44, 11) = ((MR_Box) (ClassContext_35));
    MR_hl_field(0, PredDecl_44, 12) = ((MR_Box) (Context_36));
    MR_hl_field(0, PredDecl_44, 13) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  parse_tree__parse_tree_out_item__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_112_114_101_100_95_100_101_99_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_3[1]), (MR_Integer) 0, (MR_Integer) 0, PredDecl_44, STATE_VARIABLE_State_0_63, &STATE_VARIABLE_State_1_68);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_29, &ProcMap_46);
  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcMap_46, &SortedProcPairs_47);
  transform_hlds__intermod__intermod_gather_pred_valid_modes_4_p_0(PredOrFunc_27, PredSymName_37, SortedProcPairs_47, &ModeDecls_48);
  ModuleName_111 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_29);
  PredOrFunc_112 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_29);
  PredName_113 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_29);
  {
    PredSymName_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PredSymName_114, 0) = ((MR_Box) (ModuleName_111));
    MR_hl_field(1, PredSymName_114, 1) = ((MR_Box) (PredName_113));
  }
  hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_29, &PredFormArity_115);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_112, &UserArity_116, PredFormArity_115);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_29, &Markers_117);
  hlds__hlds_markers__markers_to_marker_list_2_p_0(Markers_117, &MarkerList_118);
  switch (PredOrFunc_112) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      PFU_119 = (MR_Integer) 1;
      break;
    case (MR_Integer) 0:
      PFU_119 = (MR_Integer) 0;
      break;
  }
  transform_hlds__intermod__intermod_gather_pred_marker_pragmas_loop_8_p_0(PFU_119, PredSymName_114, UserArity_116, MarkerList_118, (MR_Word) ((MR_Unsigned) 0U), &RevDeclMarkers_120, (MR_Word) ((MR_Unsigned) 0U), &RevImplMarkers_121);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_opt_0), RevDeclMarkers_120, &DeclMarkers_49);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_opt_0), RevImplMarkers_121, &ImplMarkers_50);
  hlds__hlds_module__module_info_get_type_spec_tables_2_p_0(ModuleInfo_17, &TypeSpecTables_126);
  PragmaMap_127 = ((MR_Word) ((MR_hl_field(0, TypeSpecTables_126, 3))));
  succeeded = mercury__one_or_more_map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0), PragmaMap_127, ((MR_Box) (PredId_28)), &OoMTypeSpecs_128);
  if (succeeded)
    TypeSpecs_51 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0), OoMTypeSpecs_128);
  else
    TypeSpecs_51 = (MR_Word) ((MR_Unsigned) 0U);
  {
    Var_69 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_69, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_5[4]));
    MR_hl_field(0, Var_69, 1) = ((MR_Box) (transform_hlds__intermod__intermod_format_pred_decl_15_p_0_1));
    MR_hl_field(0, Var_69, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_69, 3) = ((MR_Box) (MercInfo_16));
    MR_hl_field(0, Var_69, 4) = NULL;
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_69, ModeDecls_48, ((MR_Box) (STATE_VARIABLE_State_1_68)), &conv1_STATE_VARIABLE_State_2_70);
  STATE_VARIABLE_State_2_70 = ((MR_Word) (conv1_STATE_VARIABLE_State_2_70));
  Var_73 = (MR_Word) (DeclMarkers_49);
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), (MR_Word) (&transform_hlds__intermod_scalar_common_3[2]), Var_73, ((MR_Box) (STATE_VARIABLE_State_2_70)), &conv3_STATE_VARIABLE_State_3_74);
  STATE_VARIABLE_State_3_74 = ((MR_Word) (conv3_STATE_VARIABLE_State_3_74));
  Var_77 = (MR_Word) (ImplMarkers_50);
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), (MR_Word) (&transform_hlds__intermod_scalar_common_3[3]), Var_77, ((MR_Box) (STATE_VARIABLE_State_3_74)), &conv5_STATE_VARIABLE_State_4_78);
  STATE_VARIABLE_State_4_78 = ((MR_Word) (conv5_STATE_VARIABLE_State_4_78));
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), (MR_Word) (&transform_hlds__intermod_scalar_common_4[1]), TypeSpecs_51, ((MR_Box) (STATE_VARIABLE_State_4_78)), &conv7_STATE_VARIABLE_State_64);
  *STATE_VARIABLE_State_64 = ((MR_Word) (conv7_STATE_VARIABLE_State_64));
  mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), ((MR_Box) (PredDecl_44)), STATE_VARIABLE_PredDeclsCord_0_53, STATE_VARIABLE_PredDeclsCord_54);
  mercury__cord__snoc_list_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), ModeDecls_48, STATE_VARIABLE_ModeDeclsCord_0_55, STATE_VARIABLE_ModeDeclsCord_56);
  mercury__cord__snoc_list_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_opt_0), DeclMarkers_49, STATE_VARIABLE_DeclMarkersCord_0_57, STATE_VARIABLE_DeclMarkersCord_58);
  mercury__cord__snoc_list_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_opt_0), ImplMarkers_50, STATE_VARIABLE_ImplMarkersCord_0_59, STATE_VARIABLE_ImplMarkersCord_60);
  mercury__cord__snoc_list_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0), TypeSpecs_51, STATE_VARIABLE_TypeSpecsCord_0_61, STATE_VARIABLE_TypeSpecsCord_62);
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
      MR_Word Marker_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word Markers_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word STATE_VARIABLE_RevDeclMarkers_1_36;
      MR_Word STATE_VARIABLE_RevImplMarkers_1_39;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_RevDeclMarkers_0_5;
      MR_Word next_value_of_STATE_VARIABLE_RevImplMarkers_0_7;

      switch (Marker_21) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_RevDeclMarkers_1_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_1_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 23:
          {
            STATE_VARIABLE_RevDeclMarkers_1_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_1_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 22:
          {
            STATE_VARIABLE_RevDeclMarkers_1_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_1_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 13:
          {
            STATE_VARIABLE_RevDeclMarkers_1_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_1_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 12:
          {
            STATE_VARIABLE_RevDeclMarkers_1_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_1_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 10:
          {
            STATE_VARIABLE_RevDeclMarkers_1_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_1_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 21:
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
              STATE_VARIABLE_RevDeclMarkers_1_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevDeclMarkers_1_36, 0) = ((MR_Box) (DeclMarker_27));
              MR_hl_field(1, STATE_VARIABLE_RevDeclMarkers_1_36, 1) = ((MR_Box) (STATE_VARIABLE_RevDeclMarkers_0_5));
            }
            STATE_VARIABLE_RevImplMarkers_1_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 20:
          {
            MR_Word PredSpec_44;
            MR_Word DeclMarker_45;
            MR_Word Var_46;

            {
              PredSpec_44 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredSpec_44, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_1));
              MR_hl_field(0, PredSpec_44, 1) = ((MR_Box) (PredSymName_2));
              MR_hl_field(0, PredSpec_44, 2) = ((MR_Box) (UserArity_3));
            }
            Var_46 = mercury__term_context__dummy_context_0_f_0();
            {
              DeclMarker_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, DeclMarker_45, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(0, DeclMarker_45, 1) = ((MR_Box) (PredSpec_44));
              MR_hl_field(0, DeclMarker_45, 2) = ((MR_Box) (Var_46));
              MR_hl_field(0, DeclMarker_45, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              STATE_VARIABLE_RevDeclMarkers_1_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevDeclMarkers_1_36, 0) = ((MR_Box) (DeclMarker_45));
              MR_hl_field(1, STATE_VARIABLE_RevDeclMarkers_1_36, 1) = ((MR_Box) (STATE_VARIABLE_RevDeclMarkers_0_5));
            }
            STATE_VARIABLE_RevImplMarkers_1_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 30:
          {
            STATE_VARIABLE_RevDeclMarkers_1_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_1_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 28:
          {
            STATE_VARIABLE_RevDeclMarkers_1_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_1_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 27:
          {
            STATE_VARIABLE_RevDeclMarkers_1_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_1_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 26:
          {
            STATE_VARIABLE_RevDeclMarkers_1_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_1_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 29:
          {
            STATE_VARIABLE_RevDeclMarkers_1_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_1_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 7:
          {
            STATE_VARIABLE_RevDeclMarkers_1_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_1_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 3:
          {
            STATE_VARIABLE_RevDeclMarkers_1_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_1_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_RevDeclMarkers_1_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_1_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 15:
          {
            STATE_VARIABLE_RevDeclMarkers_1_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_1_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 16:
          {
            STATE_VARIABLE_RevDeclMarkers_1_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_1_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 9:
          {
            STATE_VARIABLE_RevDeclMarkers_1_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_1_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 24:
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
              STATE_VARIABLE_RevImplMarkers_1_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevImplMarkers_1_39, 0) = ((MR_Box) (ImplMarker_29));
              MR_hl_field(1, STATE_VARIABLE_RevImplMarkers_1_39, 1) = ((MR_Box) (STATE_VARIABLE_RevImplMarkers_0_7));
            }
            STATE_VARIABLE_RevDeclMarkers_1_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
          }
          break;
        case (MR_Integer) 19:
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
              MR_hl_field(0, ImplMarker_49, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 7));
              MR_hl_field(0, ImplMarker_49, 1) = ((MR_Box) (PredSpec_52));
              MR_hl_field(0, ImplMarker_49, 2) = ((MR_Box) (Var_50));
              MR_hl_field(0, ImplMarker_49, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              STATE_VARIABLE_RevImplMarkers_1_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevImplMarkers_1_39, 0) = ((MR_Box) (ImplMarker_49));
              MR_hl_field(1, STATE_VARIABLE_RevImplMarkers_1_39, 1) = ((MR_Box) (STATE_VARIABLE_RevImplMarkers_0_7));
            }
            STATE_VARIABLE_RevDeclMarkers_1_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
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
              MR_hl_field(0, ImplMarker_54, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 5));
              MR_hl_field(0, ImplMarker_54, 1) = ((MR_Box) (PredSpec_57));
              MR_hl_field(0, ImplMarker_54, 2) = ((MR_Box) (Var_55));
              MR_hl_field(0, ImplMarker_54, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              STATE_VARIABLE_RevImplMarkers_1_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevImplMarkers_1_39, 0) = ((MR_Box) (ImplMarker_54));
              MR_hl_field(1, STATE_VARIABLE_RevImplMarkers_1_39, 1) = ((MR_Box) (STATE_VARIABLE_RevImplMarkers_0_7));
            }
            STATE_VARIABLE_RevDeclMarkers_1_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
          }
          break;
        case (MR_Integer) 18:
          {
            MR_Word ImplMarker_59;
            MR_Word Var_60;
            MR_Word PredSpec_62;

            {
              PredSpec_62 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredSpec_62, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_1));
              MR_hl_field(0, PredSpec_62, 1) = ((MR_Box) (PredSymName_2));
              MR_hl_field(0, PredSpec_62, 2) = ((MR_Box) (UserArity_3));
            }
            Var_60 = mercury__term_context__dummy_context_0_f_0();
            {
              ImplMarker_59 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ImplMarker_59, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 6));
              MR_hl_field(0, ImplMarker_59, 1) = ((MR_Box) (PredSpec_62));
              MR_hl_field(0, ImplMarker_59, 2) = ((MR_Box) (Var_60));
              MR_hl_field(0, ImplMarker_59, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              STATE_VARIABLE_RevImplMarkers_1_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevImplMarkers_1_39, 0) = ((MR_Box) (ImplMarker_59));
              MR_hl_field(1, STATE_VARIABLE_RevImplMarkers_1_39, 1) = ((MR_Box) (STATE_VARIABLE_RevImplMarkers_0_7));
            }
            STATE_VARIABLE_RevDeclMarkers_1_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
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
              STATE_VARIABLE_RevImplMarkers_1_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevImplMarkers_1_39, 0) = ((MR_Box) (ImplMarker_64));
              MR_hl_field(1, STATE_VARIABLE_RevImplMarkers_1_39, 1) = ((MR_Box) (STATE_VARIABLE_RevImplMarkers_0_7));
            }
            STATE_VARIABLE_RevDeclMarkers_1_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
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
              STATE_VARIABLE_RevImplMarkers_1_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevImplMarkers_1_39, 0) = ((MR_Box) (ImplMarker_69));
              MR_hl_field(1, STATE_VARIABLE_RevImplMarkers_1_39, 1) = ((MR_Box) (STATE_VARIABLE_RevImplMarkers_0_7));
            }
            STATE_VARIABLE_RevDeclMarkers_1_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
          }
          break;
        case (MR_Integer) 25:
          {
            STATE_VARIABLE_RevDeclMarkers_1_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_1_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 14:
          {
            STATE_VARIABLE_RevDeclMarkers_1_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_1_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 5:
          {
            STATE_VARIABLE_RevDeclMarkers_1_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_1_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 4:
          {
            STATE_VARIABLE_RevDeclMarkers_1_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_1_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 11:
          {
            STATE_VARIABLE_RevDeclMarkers_1_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_1_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_RevDeclMarkers_1_36 = STATE_VARIABLE_RevDeclMarkers_0_5;
            STATE_VARIABLE_RevImplMarkers_1_39 = STATE_VARIABLE_RevImplMarkers_0_7;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Markers_22;
      next_value_of_STATE_VARIABLE_RevDeclMarkers_0_5 = STATE_VARIABLE_RevDeclMarkers_1_36;
      next_value_of_STATE_VARIABLE_RevImplMarkers_0_7 = STATE_VARIABLE_RevImplMarkers_1_39;
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
    MR_Word ProcIdInfo_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word ProcIdInfos_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
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
    ProcInfo_14 = ((MR_Word) ((MR_hl_field(0, ProcIdInfo_9, 1))));
    hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(ProcInfo_14, &MaybeArgModes_15);
    hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_14, &MaybeDetism_16);
    succeeded = (MaybeArgModes_15 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgModesPrime_17 = ((MR_Word) ((MR_hl_field(1, MaybeArgModes_15, 0))));
      succeeded = (MaybeDetism_16 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        DetismPrime_18 = ((MR_Word) ((MR_hl_field(1, MaybeDetism_16, 0))));
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

  transform_hlds__intermod__intermod_gather_class_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_TypeClassesCord_27);
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

  transform_hlds__intermod__intermod_gather_mode_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_ModeDefnsCord_21);
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

  transform_hlds__intermod__intermod_gather_inst_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_InstDefnsCord_27);
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
  MR_Word conv1_STATE_VARIABLE_TypeDefnsCord_59;
  MR_Word conv0_STATE_VARIABLE_ForeignEnumsCord_61;

  transform_hlds__intermod__intermod_gather_type_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_TypeDefnsCord_59, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ForeignEnumsCord_61);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_TypeDefnsCord_59));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ForeignEnumsCord_61));
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
      MR_Word TypeCtorDefns_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word TypeStatus_7;
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Var_13;

      TypeDefn_4 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
      hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_4, &TypeStatus_7);
      Var_13 = (MR_Word) (TypeStatus_7);
      switch (MR_tag((MR_Word) Var_13)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          switch (MR_unmkbody(Var_13)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 3:
              {
                MR_Word TypeBody_8;

                hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_4, &TypeBody_8);
                succeeded = transform_hlds__intermod_decide__is_du_type_with_direct_arg_ctors_1_p_0(TypeBody_8);
              }
              break;
            case (MR_Integer) 5:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 7:
              succeeded = MR_TRUE;
              break;
          }
          break;
      }
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

void mercury__transform_hlds__intermod__init(void)
{
}

void mercury__transform_hlds__intermod__init_type_tables(void)
{
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
