/*
** Automatically generated from `add_type.m'
** by the Mercury compiler,
** version rotd-2026-08-21
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


// :- module hlds.make_hlds.add_type.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__add_type__init
ENDINIT
*/

#include "hlds.make_hlds.add_type.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "backend_libs.foreign.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.make_hlds.mih"
#include "hlds.make_hlds_error.mih"
#include "hlds.pred_proc_id.mih"
#include "hlds.pred_table.mih"
#include "hlds.proc_info_types.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_out_type.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_inst_mode.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_pred_proc_id.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_scan.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.id_set.mih"
#include "parse_tree.module_qual.mq_info.mih"
#include "parse_tree.module_qual.qual_errors.mih"



struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s {
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17;
  MR_bool hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded;
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__QualifiedConsDefnsA_39;
  jmp_buf hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__commit_0;
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_102;
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__Var_121;
  MR_Box hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__conv0_OtherConsDefn_102;
};

struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0_s {
  MR_Word hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__TypeParams_10;
  MR_bool hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__succeeded;
  MR_Word hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__EqvType_14;
  jmp_buf hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__commit_0;
  MR_Word hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__Var_54;
  MR_Box hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__conv0_Var_54;
  jmp_buf hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__commit_1;
  MR_Word hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__TypeInfo_57_57;
  MR_Word hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__Var_56;
};


static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_type__one_or_more__ti_one_or_more_1hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_ctor_field_name_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__add_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_constructor_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_type__bimap__pti_bimap_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__add_type__bimap__ti_bimap_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_maybe_first_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_maybe_first_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_ordinal_ordered_maybe_first_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_name_ordered_maybe_first_0[2];

static const MR_Integer hlds__make_hlds__add_type__hlds__make_hlds__add_type__functor_number_map_maybe_first_0[2];

static const MR_EnumFunctorDesc hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_maybe_set_subtype_noncanonical_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_maybe_set_subtype_noncanonical_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_ordinal_ordered_maybe_set_subtype_noncanonical_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_name_ordered_maybe_set_subtype_noncanonical_0[2];

static const MR_Integer hlds__make_hlds__add_type__hlds__make_hlds__add_type__functor_number_map_maybe_set_subtype_noncanonical_0[2];

static const MR_EnumFunctorDesc hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_old_defn_maybe_abstract_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_old_defn_maybe_abstract_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_ordinal_ordered_old_defn_maybe_abstract_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_name_ordered_old_defn_maybe_abstract_0[2];

static const MR_Integer hlds__make_hlds__add_type__hlds__make_hlds__add_type__functor_number_map_old_defn_maybe_abstract_0[2];

static const MR_EnumFunctorDesc hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_search_type_ctor_defn_error_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_search_type_ctor_defn_error_0_1;

static const MR_EnumFunctorDesc hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_search_type_ctor_defn_error_0_2;

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_ordinal_ordered_search_type_ctor_defn_error_0[3];

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_name_ordered_search_type_ctor_defn_error_0[3];

static const MR_Integer hlds__make_hlds__add_type__hlds__make_hlds__add_type__functor_number_map_search_type_ctor_defn_error_0[3];

static MR_bool MR_CALL 
hlds__make_hlds__add_type__IntroducedFrom__pred__compute_subtype_ctors_diff__2048__1_2_p_0(
  MR_Word CtorStrs0_11,
  MR_String HeadVar__2_33);

static MR_bool MR_CALL 
hlds__make_hlds__add_type__IntroducedFrom__pred__compute_subtype_ctors_diff__2047__1_2_p_0(
  MR_Word SuperCtorStrs0_12,
  MR_String HeadVar__2_31);

static MR_Word MR_CALL 
hlds__make_hlds__add_type__IntroducedFrom__func__add_type_defn_ctor__1112__1_1_f_0(
  MR_Word LambdaHeadVar__1_99);

static void MR_CALL 
hlds__make_hlds__add_type____Compare____search_type_ctor_defn_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_type____Unify____search_type_ctor_defn_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_type____Compare____old_defn_maybe_abstract_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_type____Unify____old_defn_maybe_abstract_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_type____Compare____maybe_set_subtype_noncanonical_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_type____Unify____maybe_set_subtype_noncanonical_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_type____Compare____maybe_first_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_type____Unify____maybe_first_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_type____Compare____existq_tvar_mapping_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_type____Unify____existq_tvar_mapping_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_type__rename_and_rec_subst_in_constructor_arg_4_p_0(
  MR_Word Renaming_5,
  MR_Word TSubst_6,
  MR_Word Arg0_7,
  MR_Word * Arg_8);

static void MR_CALL 
hlds__make_hlds__add_type__rename_and_rec_subst_in_constructor_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_type__rename_and_rec_subst_in_constructor_4_p_0(
  MR_Word Renaming_5,
  MR_Word TSubst_6,
  MR_Word Ctor0_7,
  MR_Word * Ctor_8);

static void MR_CALL 
hlds__make_hlds__add_type__ctor_to_string_2_p_0(
  MR_Word Ctor_3,
  MR_String * Str_4);

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctor_arg_11_p_0(
  MR_Word TypeTable_12,
  MR_Word TVarSet_13,
  MR_Word OrigTypeStatus_14,
  MR_Word CtorSymName_15,
  MR_Word ExistQVarsMapping_16,
  MR_Word CtorArg_17,
  MR_Word SuperCtorArg_18,
  MR_Integer ArgNum_19,
  MR_Integer * HeadVar__9_9,
  MR_Word STATE_VARIABLE_InvalidTypeSpecs_0_32,
  MR_Word * STATE_VARIABLE_InvalidTypeSpecs_33);

static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_is_subtype_6_p_0(
  MR_Word TypeTable_7,
  MR_Word TVarSet0_8,
  MR_Word OrigTypeStatus_9,
  MR_Word ExistQVarsMapping_10,
  MR_Word TypeA_11,
  MR_Word TypeB_12);

static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_is_subtype_higher_order_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word HeadVar__8_8);

static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_corresponding_args_are_subtype_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6);

static MR_bool MR_CALL 
hlds__make_hlds__add_type__build_existq_tvars_mapping_4_p_0(
  MR_Word VarA_5,
  MR_Word VarB_6,
  MR_Word STATE_VARIABLE_ExistQVarsMapping_0_8,
  MR_Word * STATE_VARIABLE_ExistQVarsMapping_9);

static void MR_CALL 
hlds__make_hlds__add_type__look_up_and_check_subtype_ctor_8_p_0(
  MR_Word TypeTable_9,
  MR_Word TVarSet_10,
  MR_Word TypeStatus_11,
  MR_Word SuperTypeCtor_12,
  MR_Word SuperCtors_13,
  MR_Word Ctor_14,
  MR_Word STATE_VARIABLE_InvalidTypeSpecs_0_27,
  MR_Word * STATE_VARIABLE_InvalidTypeSpecs_28);

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctor_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctor_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctor_7_p_0(
  MR_Word TypeTable_8,
  MR_Word TVarSet_9,
  MR_Word TypeStatus_10,
  MR_Word Ctor_11,
  MR_Word SuperCtor_12,
  MR_Word STATE_VARIABLE_InvalidTypeSpecs_0_31,
  MR_Word * STATE_VARIABLE_InvalidTypeSpecs_32);

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctor_exist_constraints_6_p_0(
  MR_Word CtorSymNameArity_7,
  MR_Word Context_8,
  MR_Word ExistQVarsMapping_9,
  MR_Word Constraints_10,
  MR_Word SuperConstraints0_11,
  MR_Word * Result_12);

static MR_bool MR_CALL 
hlds__make_hlds__add_type__search_ctor_by_unqual_name_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String UnqualName_7,
  MR_Integer Arity_8,
  MR_Word * Ctor_9);

static void MR_CALL 
hlds__make_hlds__add_type__do_add_ctor_field_5_p_0(
  MR_String FieldName_6,
  MR_Word FieldNameDefn_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_FieldNameTable_0_10,
  MR_Word * STATE_VARIABLE_FieldNameTable_11);

static MR_bool MR_CALL 
hlds__make_hlds__add_type__is_conflicting_field_defn_2_p_0(
  MR_Word FieldDefnA_3,
  MR_Word FieldDefnB_4);

static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_to_list_4_p_0(
  MR_String ConsName_5,
  MR_Word ModuleQual_6,
  MR_Word STATE_VARIABLE_OtherSymNames_0_9,
  MR_Word * STATE_VARIABLE_OtherSymNames_10);

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_defn_11_p_0(
  MR_Word TypeTable_12,
  MR_Word TVarSet_13,
  MR_Word TypeCtor_14,
  MR_Word TypeDefn_15,
  MR_Word TypeBodyDu_16,
  MR_Word SuperType_17,
  MR_Word * MaybeSetSubtypeNoncanon_18,
  MR_Word STATE_VARIABLE_InvalidTypeSpecs_0_35,
  MR_Word * STATE_VARIABLE_InvalidTypeSpecs_36,
  MR_Word STATE_VARIABLE_WarnSpecs_0_37,
  MR_Word * STATE_VARIABLE_WarnSpecs_38);

static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctors_12_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctors_12_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctors_12_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctors_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctors_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctors_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctors_12_p_0(
  MR_Word TypeTable_13,
  MR_Word TypeCtor_14,
  MR_Word TypeDefn_15,
  MR_Word TypeBodyDu_16,
  MR_Word SuperTypeCtor_17,
  MR_Word SuperTypeDefn_18,
  MR_Word SuperTypeBodyDu_19,
  MR_Word SuperTypeArgs_20,
  MR_Word STATE_VARIABLE_InvalidTypeSpecs_0_47,
  MR_Word * STATE_VARIABLE_InvalidTypeSpecs_48,
  MR_Word STATE_VARIABLE_WarnSpecs_0_49,
  MR_Word * STATE_VARIABLE_WarnSpecs_50);

static void MR_CALL 
hlds__make_hlds__add_type__check_supertypes_up_to_base_type_8_p_0(
  MR_Word TypeTable_9,
  MR_Word OrigTypeCtor_10,
  MR_Word OrigTypeDefn_11,
  MR_Word CurSuperTypeCtor_12,
  MR_Word CurSuperTypeDefn_13,
  MR_Word CurSuperTypeBodyDu_14,
  MR_Word PrevSuperTypeCtors0_15,
  MR_Word * MaybeBaseMaybeCanon_16);

static MR_Word MR_CALL 
hlds__make_hlds__add_type__supertype_ctor_defn_error_to_spec_5_f_0(
  MR_Word OrigTypeCtor_7,
  MR_Word OrigTypeDefn_8,
  MR_Word PrevSuperTypeCtors_9,
  MR_Word LastSuperTypeCtor_10,
  MR_Word Error_11);

static MR_Word MR_CALL 
hlds__make_hlds__add_type__describe_supertype_chain_4_f_0(
  MR_Word MaybeLastSuperColor_6,
  MR_Word OrigTypeCtor_7,
  MR_Word PrevSuperTypeCtors_8,
  MR_Word LastSuperTypeCtor_9);

static MR_Word MR_CALL 
hlds__make_hlds__add_type__describe_which_is_supertype_of_chain_3_f_0(
  MR_Word First_5,
  MR_Word OrigTypeCtor_6,
  MR_Word SuperTypeCtors_7);

static void MR_CALL 
hlds__make_hlds__add_type__check_supertype_is_du_not_foreign_4_p_0(
  MR_Word TypeDefn_5,
  MR_Word SuperTypeCtor_6,
  MR_Word SuperTypeDefn_7,
  MR_Word * MaybeSuperTypeBodyDu_8);

static void MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_for_current_target_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word TypeCtor_9,
  MR_Word ForeignTypeBody_10,
  MR_Word PrevErrors_11,
  MR_Word Context_12,
  MR_Word STATE_VARIABLE_InvalidTypeSpecs_0_22,
  MR_Word * STATE_VARIABLE_InvalidTypeSpecs_23);

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctors_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TypeCtor_2,
  MR_Word TypeCtorModuleName_3,
  MR_Word TVarSet_4,
  MR_Word TypeParams_5,
  MR_Word KindMap_6,
  MR_Word NeedQual_7,
  MR_Word PQInfo_8,
  MR_Word TypeStatus_9,
  MR_Word STATE_VARIABLE_FieldNameTable_0_10,
  MR_Word * STATE_VARIABLE_FieldNameTable_11,
  MR_Word STATE_VARIABLE_ConsTable_0_12,
  MR_Word * STATE_VARIABLE_ConsTable_13,
  MR_Word STATE_VARIABLE_ErrSpecs_0_14,
  MR_Word * STATE_VARIABLE_ErrSpecs_15);

static MR_Box MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0(
  MR_Word Ctor_16,
  MR_Word TypeCtor_17,
  MR_Word TypeCtorModuleName_18,
  MR_Word TVarSet_19,
  MR_Word TypeParams_20,
  MR_Word KindMap_21,
  MR_Word NeedQual_22,
  MR_Word PQInfo_23,
  MR_Word TypeStatus_24,
  MR_Word STATE_VARIABLE_FieldNameTable_0_50,
  MR_Word * STATE_VARIABLE_FieldNameTable_51,
  MR_Word STATE_VARIABLE_ConsTable_0_52,
  MR_Word * STATE_VARIABLE_ConsTable_53,
  MR_Word STATE_VARIABLE_ErrSpecs_0_54,
  MR_Word * STATE_VARIABLE_ErrSpecs_55);

static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_names_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_names_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_names_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word NeedQual_2,
  MR_Word PartialQuals_3,
  MR_Word TypeCtor_4,
  MR_Word DuCtor_5,
  MR_Word TypeStatus_6,
  MR_Integer FieldNumber_7,
  MR_Word STATE_VARIABLE_FieldNameTable_0_8,
  MR_Word * STATE_VARIABLE_FieldNameTable_9);

static void MR_CALL 
hlds__make_hlds__add_type__convert_type_defn_to_hlds_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__add_type__convert_type_defn_to_hlds_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__add_type__convert_type_defn_to_hlds_5_p_0(
  MR_Word TypeDefn_6,
  MR_Word TypeCtor_7,
  MR_Word * HLDSBody_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * STATE_VARIABLE_ModuleInfo_40);

static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_foreign_10_p_0(
  MR_Word TypeStatus0_11,
  MR_Word TypeStatus1_12,
  MR_Word TypeCtor_13,
  MR_Word Body_14,
  MR_Word TypeDefn0_15,
  MR_Word Context_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35,
  MR_Word STATE_VARIABLE_InvalidTypeSpecs_0_36,
  MR_Word * STATE_VARIABLE_InvalidTypeSpecs_37);

static void MR_CALL 
hlds__make_hlds__add_type__check_for_inconsistent_foreign_type_visibility_10_p_0(
  MR_Word TypeCtor_11,
  MR_Word OldIsAbstract_12,
  MR_Word OldStatus_13,
  MR_Word OldContext_14,
  MR_Word NewStatus_15,
  MR_Word NewContext_16,
  MR_Word STATE_VARIABLE_TypeDefn_0_24,
  MR_Word * STATE_VARIABLE_TypeDefn_25,
  MR_Word STATE_VARIABLE_InvalidTypeSpecs_0_26,
  MR_Word * STATE_VARIABLE_InvalidTypeSpecs_27);

static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_maybe_foreign_type_bodies_4_p_0(
  MR_Word Globals_5,
  MR_Word BodyA_6,
  MR_Word BodyB_7,
  MR_Word * Body_8);

static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_and_du_type_bodies_4_p_0(
  MR_Word Globals_5,
  MR_Word ForeignTypeBodyA_6,
  MR_Word TypeBodyDuB_7,
  MR_Word * Body_8);

static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_mercury_11_p_0(
  MR_Word TypeStatus1_12,
  MR_Word TypeCtor_13,
  MR_Word TypeParams_14,
  MR_Word ParseTreeTypeDefn_15,
  MR_Word Body_16,
  MR_Word TypeDefn0_17,
  MR_Word Context_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_32,
  MR_Word * STATE_VARIABLE_ModuleInfo_33,
  MR_Word STATE_VARIABLE_InvalidTypeSpecs_0_34,
  MR_Word * STATE_VARIABLE_InvalidTypeSpecs_35);

static void MR_CALL 
hlds__make_hlds__add_type__check_for_inconsistent_solver_nosolver_type_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word OldDefn_8,
  MR_Word NewBody_9,
  MR_Word NewContext_10,
  MR_Word STATE_VARIABLE_InvalidTypeSpecs_0_32,
  MR_Word * STATE_VARIABLE_InvalidTypeSpecs_33);

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0(
  MR_Word TypeStatus_8,
  MR_Word TypeCtor_9,
  MR_Word TypeParams_10,
  MR_Word DetailsEqv_11,
  MR_Word Context_12,
  MR_Word STATE_VARIABLE_InvalidTypeSpecs_0_19,
  MR_Word * STATE_VARIABLE_InvalidTypeSpecs_20);

static void MR_CALL 
hlds__make_hlds__add_type__check_for_duplicate_type_declaration_8_p_0(
  MR_Word TypeCtor_9,
  MR_Word OldDefn_10,
  MR_Word NewStatus_11,
  MR_Word NewContext_12,
  MR_Word STATE_VARIABLE_InvalidTypeSpecs_0_34,
  MR_Word * STATE_VARIABLE_InvalidTypeSpecs_35,
  MR_Word STATE_VARIABLE_WarnSpecs_0_36,
  MR_Word * STATE_VARIABLE_WarnSpecs_37);

static MR_bool MR_CALL 
hlds__make_hlds__add_type____Unify____existq_tvar_mapping_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_type____Compare____existq_tvar_mapping_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_type____Unify____maybe_first_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_type____Compare____maybe_first_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_type____Unify____maybe_set_subtype_noncanonical_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_type____Compare____maybe_set_subtype_noncanonical_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_type____Unify____old_defn_maybe_abstract_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_type____Compare____old_defn_maybe_abstract_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_type____Unify____search_type_ctor_defn_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_type____Compare____search_type_ctor_defn_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_1[238][2];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_2[10][3];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_3[4][1];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_4[1][6];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_5[4][5];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_6[1][8];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_7[4][7];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_8[1][11];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_9[1][14];




static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_1[238][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ctor_field_name_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "(as opposed to the name) of a solver type such as"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the definition"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[7])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "must not be exported"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "from its defining module."))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[12])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The previous declaration was here."))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[12])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[17]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "duplicate declaration"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[19]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for type"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "it is exported"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "it is private"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: This declaration for type"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[27]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "says"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[29]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[31]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[32])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "while the previous declaration says"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[34]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[24])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[32])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[24])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration for the"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[39]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "foreign_type"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[40])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[42])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "undeclared type"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[45]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the type"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[47]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and as such it is"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[49]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "contains no information,"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[50])))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "user-defined equality or comparison."))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[53]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not allowed to have"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[54])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "cannot have user-defined equality or comparison."))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[12])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a single zero-arity constructor"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[58])))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "whose body consists of"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[60])))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Discriminated union types"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[62])))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is not yet implemented."))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[12])))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The export of such types as abstract types"))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[66])))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "with a monomorphic definition."))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[68])))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is a polymorphic equivalence type"))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[70])))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "optimize the wrapper away.)"))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[73]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "(There is no performance penalty for this -- the compiler will"))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[74])))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "functor that has just one arg, instead of an equivalence type."))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[76])))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "A better workaround is to use a \"wrapper\" type, with just one"))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[78])))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "by putting the type definition in the interface section."))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[80])))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "A quick workaround is to just export the type as a concrete type"))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[82])))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of type"))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[85]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but its"))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is here."))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[12])))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the definition of"))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[91]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the foreign type"))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "must have the same visibility"))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[94]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "as its declaration."))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[12])))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: all definitions of"))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[98]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "must have the same visibility."))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[100]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the function symbol"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[102]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "occurs more than once"))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[104]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the definition of type constructor"))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[106]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has no definition"))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[108]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "that is valid when targeting"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ";"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "neither a Mercury definition,"))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "nor a"))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[12])))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "on other back-ends, but none for this back-end."))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[117]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[12])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "There are representations for this type"))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[119]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[118])))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[121]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "type constructor"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[123]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in supertype part of subtype definition, got"))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[125]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[43]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "cannot be a supertype"))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[128]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "because it is"))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "because it has a"))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[131]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "foreign type definition."))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[133]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "subtype definition chain."))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[135]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "circularity in"))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[137]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[136])))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The chain is:"))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[139]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[12])))
  },
  /* row 141 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[140])))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the type definition for"))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[142]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[144]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 146 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[145])))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[146])))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not visible here."))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[148]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "discriminated union type."))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[150]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not a"))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[152]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[151])))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not defined."))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[154]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[12])))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is not a discriminated union type."))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[157]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which is"))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[159]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the declared super type of"))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is not a constructor"))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[162]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of the supertype"))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[164]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[115]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: existentially quantified type variables"))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[167]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[166])))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "do not correspond"))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[169]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "one-to-one in the subtype and supertype."))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[171]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[12])))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "existentially quantified type variables (expected"))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[173]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has wrong number of"))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[175]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[174])))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[177]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[178])))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ")."))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[180]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[12])))
  },
  /* row 182 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: existential class constraints for"))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[183]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "differ"))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[185]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in order in the subtype and supertype."))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[187]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[12])))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the subtype and supertype."))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[189]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[12])))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument of"))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has a type,"))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[193]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which is not a subtype"))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[195]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[196])))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of the corresponding argument type"))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[198]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the supertype."))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[200]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[12])))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in a different order"))
  },
  /* row 203 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[202]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 204 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declares some constructors"))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[204]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[203])))
  },
  /* row 206 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to its supertype"))
  },
  /* row 207 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[206]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 208 */
  {
    ((MR_Box) ((MR_Unsigned) 16U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 209 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[208])))
  },
  /* row 210 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the supertype, are as follows."))
  },
  /* row 211 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[210]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[209])))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and the order of the same function symbols"))
  },
  /* row 213 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[212]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[211])))
  },
  /* row 214 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the order of function symbols in the subtype,"))
  },
  /* row 215 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[214]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[213])))
  },
  /* row 216 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The differences between"))
  },
  /* row 217 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[216]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[215])))
  },
  /* row 218 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[84])))
  },
  /* row 219 */
  {
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[218]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 220 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[64])))
  },
  /* row 221 */
  {
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[220]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 222 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[120])))
  },
  /* row 223 */
  {
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[222]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 224 */
  {
    ((MR_Box) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "an"))
  },
  /* row 225 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[224]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 226 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[130]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[225])))
  },
  /* row 227 */
  {
    ((MR_Box) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "abstract type"))
  },
  /* row 228 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[227]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[24])))
  },
  /* row 229 */
  {
    ((MR_Box) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "equivalence type"))
  },
  /* row 230 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[229]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[24])))
  },
  /* row 231 */
  {
    ((MR_Box) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a"))
  },
  /* row 232 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[231]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 233 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[130]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[232])))
  },
  /* row 234 */
  {
    ((MR_Box) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "foreign type"))
  },
  /* row 235 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[234]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[24])))
  },
  /* row 236 */
  {
    ((MR_Box) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "solver type"))
  },
  /* row 237 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[236]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[24])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_2[10][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_1[4]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__bimap__bimap__type_ctor_info_bimap_2)),
    ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_1[0])),
    ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 1U))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_4[0])),
    ((MR_Box) (hlds__make_hlds__add_type__convert_type_defn_to_hlds_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_4[0])),
    ((MR_Box) (hlds__make_hlds__add_type__convert_type_defn_to_hlds_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_5[1])),
    ((MR_Box) (hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_5[2])),
    ((MR_Box) (hlds__make_hlds__add_type__check_subtype_ctors_12_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_5[2])),
    ((MR_Box) (hlds__make_hlds__add_type__check_subtype_ctors_12_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_7[2])),
    ((MR_Box) (hlds__make_hlds__add_type__check_subtype_ctor_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_3[4][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 224U) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 171U) },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_4[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_5[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_ctor_field_name_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_type__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_6[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_7[4][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__make_hlds__add_type__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__bimap__pti_bimap_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__bimap__pti_bimap_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_8[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_type_status_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_9[1][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_type_status_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__bimap__pti_bimap_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_type__one_or_more__ti_one_or_more_1hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&hlds__make_hlds__add_type__one_or_more__ti_one_or_more_1hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_ctor_field_name_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ctor_field_name_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__add_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&hlds__make_hlds__add_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__add_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__add_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&hlds__make_hlds__add_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_constructor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_type__bimap__pti_bimap_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__add_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&hlds__make_hlds__add_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__add_type__bimap__ti_bimap_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) (&hlds__make_hlds__add_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_TypeInfo) (&hlds__make_hlds__add_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_type__hlds__make_hlds__add_type__type_ctor_info_existq_tvar_mapping_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__make_hlds__add_type____Unify____existq_tvar_mapping_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_type____Compare____existq_tvar_mapping_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_type",
  (MR_String) "existq_tvar_mapping",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__add_type__bimap__ti_bimap_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_maybe_first_0_0 = {
  (MR_String) "is_not_first",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_maybe_first_0_1 = {
  (MR_String) "is_first",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_ordinal_ordered_maybe_first_0[2] = {
  &hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_maybe_first_0_0,
  &hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_maybe_first_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_name_ordered_maybe_first_0[2] = {
  &hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_maybe_first_0_1,
  &hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_maybe_first_0_0
};

static const MR_Integer hlds__make_hlds__add_type__hlds__make_hlds__add_type__functor_number_map_maybe_first_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_type__hlds__make_hlds__add_type__type_ctor_info_maybe_first_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__add_type____Unify____maybe_first_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_type____Compare____maybe_first_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_type",
  (MR_String) "maybe_first",
  { hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_name_ordered_maybe_first_0 },
  { hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_ordinal_ordered_maybe_first_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__add_type__hlds__make_hlds__add_type__functor_number_map_maybe_first_0,

};

static const MR_EnumFunctorDesc hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_maybe_set_subtype_noncanonical_0_0 = {
  (MR_String) "do_not_set_subtype_noncanon",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_maybe_set_subtype_noncanonical_0_1 = {
  (MR_String) "set_subtype_noncanon",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_ordinal_ordered_maybe_set_subtype_noncanonical_0[2] = {
  &hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_maybe_set_subtype_noncanonical_0_0,
  &hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_maybe_set_subtype_noncanonical_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_name_ordered_maybe_set_subtype_noncanonical_0[2] = {
  &hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_maybe_set_subtype_noncanonical_0_0,
  &hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_maybe_set_subtype_noncanonical_0_1
};

static const MR_Integer hlds__make_hlds__add_type__hlds__make_hlds__add_type__functor_number_map_maybe_set_subtype_noncanonical_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_type__hlds__make_hlds__add_type__type_ctor_info_maybe_set_subtype_noncanonical_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__add_type____Unify____maybe_set_subtype_noncanonical_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_type____Compare____maybe_set_subtype_noncanonical_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_type",
  (MR_String) "maybe_set_subtype_noncanonical",
  { hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_name_ordered_maybe_set_subtype_noncanonical_0 },
  { hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_ordinal_ordered_maybe_set_subtype_noncanonical_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__add_type__hlds__make_hlds__add_type__functor_number_map_maybe_set_subtype_noncanonical_0,

};

static const MR_EnumFunctorDesc hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_old_defn_maybe_abstract_0_0 = {
  (MR_String) "old_defn_is_abstract",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_old_defn_maybe_abstract_0_1 = {
  (MR_String) "old_defn_is_not_abstract",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_ordinal_ordered_old_defn_maybe_abstract_0[2] = {
  &hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_old_defn_maybe_abstract_0_0,
  &hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_old_defn_maybe_abstract_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_name_ordered_old_defn_maybe_abstract_0[2] = {
  &hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_old_defn_maybe_abstract_0_0,
  &hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_old_defn_maybe_abstract_0_1
};

static const MR_Integer hlds__make_hlds__add_type__hlds__make_hlds__add_type__functor_number_map_old_defn_maybe_abstract_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_type__hlds__make_hlds__add_type__type_ctor_info_old_defn_maybe_abstract_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__add_type____Unify____old_defn_maybe_abstract_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_type____Compare____old_defn_maybe_abstract_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_type",
  (MR_String) "old_defn_maybe_abstract",
  { hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_name_ordered_old_defn_maybe_abstract_0 },
  { hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_ordinal_ordered_old_defn_maybe_abstract_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__add_type__hlds__make_hlds__add_type__functor_number_map_old_defn_maybe_abstract_0,

};

static const MR_EnumFunctorDesc hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_search_type_ctor_defn_error_0_0 = {
  (MR_String) "supertype_is_abstract",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_search_type_ctor_defn_error_0_1 = {
  (MR_String) "supertype_is_not_defined",
  INT32_C(1)
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_search_type_ctor_defn_error_0_2 = {
  (MR_String) "circularity_detected",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_ordinal_ordered_search_type_ctor_defn_error_0[3] = {
  &hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_search_type_ctor_defn_error_0_0,
  &hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_search_type_ctor_defn_error_0_1,
  &hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_search_type_ctor_defn_error_0_2
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_name_ordered_search_type_ctor_defn_error_0[3] = {
  &hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_search_type_ctor_defn_error_0_2,
  &hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_search_type_ctor_defn_error_0_0,
  &hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_search_type_ctor_defn_error_0_1
};

static const MR_Integer hlds__make_hlds__add_type__hlds__make_hlds__add_type__functor_number_map_search_type_ctor_defn_error_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_type__hlds__make_hlds__add_type__type_ctor_info_search_type_ctor_defn_error_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__add_type____Unify____search_type_ctor_defn_error_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_type____Compare____search_type_ctor_defn_error_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_type",
  (MR_String) "search_type_ctor_defn_error",
  { hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_name_ordered_search_type_ctor_defn_error_0 },
  { hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_ordinal_ordered_search_type_ctor_defn_error_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  hlds__make_hlds__add_type__hlds__make_hlds__add_type__functor_number_map_search_type_ctor_defn_error_0,

};

static MR_bool MR_CALL 
hlds__make_hlds__add_type__IntroducedFrom__pred__compute_subtype_ctors_diff__2048__1_2_p_0(
  MR_Word CtorStrs0_11,
  MR_String HeadVar__2_33)
{
  MR_bool succeeded;

  succeeded = mercury__list__contains_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CtorStrs0_11, ((MR_Box) (HeadVar__2_33)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type__IntroducedFrom__pred__compute_subtype_ctors_diff__2047__1_2_p_0(
  MR_Word SuperCtorStrs0_12,
  MR_String HeadVar__2_31)
{
  MR_bool succeeded;

  succeeded = mercury__list__contains_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SuperCtorStrs0_12, ((MR_Box) (HeadVar__2_31)));
  return succeeded;
}

static MR_Word MR_CALL 
hlds__make_hlds__add_type__IntroducedFrom__func__add_type_defn_ctor__1112__1_1_f_0(
  MR_Word LambdaHeadVar__1_99)
{
  MR_Word LambdaHeadVar__2_100 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_99, 0))));

  return LambdaHeadVar__2_100;
}

static void MR_CALL 
hlds__make_hlds__add_type____Compare____search_type_ctor_defn_error_0_0(
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
hlds__make_hlds__add_type____Unify____search_type_ctor_defn_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_type____Compare____old_defn_maybe_abstract_0_0(
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
hlds__make_hlds__add_type____Unify____old_defn_maybe_abstract_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_type____Compare____maybe_set_subtype_noncanonical_0_0(
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
hlds__make_hlds__add_type____Unify____maybe_set_subtype_noncanonical_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_type____Compare____maybe_first_0_0(
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
hlds__make_hlds__add_type____Unify____maybe_first_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_type____Compare____existq_tvar_mapping_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type____Unify____existq_tvar_mapping_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_type__rename_and_rec_subst_in_constructor_arg_4_p_0(
  MR_Word Renaming_5,
  MR_Word TSubst_6,
  MR_Word Arg0_7,
  MR_Word * Arg_8)
{
  MR_Word MaybeFieldName_9 = ((MR_Word) ((MR_hl_field(0, Arg0_7, 0))));
  MR_Word Type0_10 = ((MR_Word) ((MR_hl_field(0, Arg0_7, 1))));
  MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, Arg0_7, 2))));
  MR_Word Type_12;
  MR_Word Type1_13;

  parse_tree__prog_type_subst__apply_renaming_to_type_3_p_0(Renaming_5, Type0_10, &Type1_13);
  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TSubst_6, Type1_13, &Type_12);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *Arg_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MaybeFieldName_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (Type_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Context_11));
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__rename_and_rec_subst_in_constructor_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Arg_8;

  hlds__make_hlds__add_type__rename_and_rec_subst_in_constructor_arg_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_Arg_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_Arg_8));
}

static void MR_CALL 
hlds__make_hlds__add_type__rename_and_rec_subst_in_constructor_4_p_0(
  MR_Word Renaming_5,
  MR_Word TSubst_6,
  MR_Word Ctor0_7,
  MR_Word * Ctor_8)
{
  uint32_t Ordinal_9 = ((uint32_t) (MR_Word) (MR_hl_field(0, Ctor0_7, 0)));
  MR_Word MaybeExistConstraints0_10 = ((MR_Word) ((MR_hl_field(0, Ctor0_7, 1))));
  MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(0, Ctor0_7, 2))));
  MR_Word Args0_12 = ((MR_Word) ((MR_hl_field(0, Ctor0_7, 3))));
  MR_Integer NumArgs_13 = ((MR_Integer) ((MR_hl_field(0, Ctor0_7, 4))));
  MR_Word Context_14 = ((MR_Word) ((MR_hl_field(0, Ctor0_7, 5))));
  MR_Word MaybeExistConstraints_15;
  MR_Word Args_18;
  MR_Word Var_19;

  if ((MaybeExistConstraints0_10 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeExistConstraints_15 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ExistConstraints0_16 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints0_10), (MR_Integer) 1));
    MR_Word ExistConstraints_17;
    MR_Word ExistQVars0_23 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_16, 0))));
    MR_Word Constraints0_24 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_16, 1))));
    MR_Word UnconstrainedExistQVars0_25 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_16, 2))));
    MR_Word ConstrainedExistQVars0_26 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_16, 3))));
    MR_Word ExistQVars_27;
    MR_Word Constraints1_28;
    MR_Word Constraints_29;
    MR_Word UnconstrainedExistQVars_30;
    MR_Word ConstrainedExistQVars_31;

    parse_tree__prog_type_subst__apply_renaming_to_tvars_3_p_0(Renaming_5, ExistQVars0_23, &ExistQVars_27);
    parse_tree__prog_type_subst__apply_renaming_to_prog_constraints_3_p_0(Renaming_5, Constraints0_24, &Constraints1_28);
    parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0(TSubst_6, Constraints1_28, &Constraints_29);
    parse_tree__prog_type_subst__apply_renaming_to_tvars_3_p_0(Renaming_5, UnconstrainedExistQVars0_25, &UnconstrainedExistQVars_30);
    parse_tree__prog_type_subst__apply_renaming_to_tvars_3_p_0(Renaming_5, ConstrainedExistQVars0_26, &ConstrainedExistQVars_31);
    {
      ExistConstraints_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ExistConstraints_17, 0) = ((MR_Box) (ExistQVars_27));
      MR_hl_field(0, ExistConstraints_17, 1) = ((MR_Box) (Constraints_29));
      MR_hl_field(0, ExistConstraints_17, 2) = ((MR_Box) (UnconstrainedExistQVars_30));
      MR_hl_field(0, ExistConstraints_17, 3) = ((MR_Box) (ConstrainedExistQVars_31));
    }
    MaybeExistConstraints_15 = (MR_Word) (MR_mkword(1, (MR_Word) (ExistConstraints_17)));
  }
  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_7[3]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (hlds__make_hlds__add_type__rename_and_rec_subst_in_constructor_4_p_0_1));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (Renaming_5));
    MR_hl_field(0, Var_19, 4) = ((MR_Box) (TSubst_6));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), Var_19, Args0_12, &Args_18);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *Ctor_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MR_Word) (Ordinal_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (MaybeExistConstraints_15));
    MR_hl_field(0, base, 2) = ((MR_Box) (SymName_11));
    MR_hl_field(0, base, 3) = ((MR_Box) (Args_18));
    MR_hl_field(0, base, 4) = ((MR_Box) (NumArgs_13));
    MR_hl_field(0, base, 5) = ((MR_Box) (Context_14));
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__ctor_to_string_2_p_0(
  MR_Word Ctor_3,
  MR_String * Str_4)
{
  MR_Word SymName_7 = ((MR_Word) ((MR_hl_field(0, Ctor_3, 2))));
  MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(0, Ctor_3, 4))));
  MR_String UnqualName_11;
  MR_Word SNA_12;
  MR_Word Var_13;

  UnqualName_11 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_7);
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (UnqualName_11));
  }
  {
    SNA_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SNA_12, 0) = ((MR_Box) (Var_13));
    MR_hl_field(0, SNA_12, 1) = ((MR_Box) (Arity_9));
  }
  *Str_4 = parse_tree__parse_tree_out_sym_name__unescaped_sym_name_arity_to_string_1_f_0(SNA_12);
}

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctor_arg_11_p_0(
  MR_Word TypeTable_12,
  MR_Word TVarSet_13,
  MR_Word OrigTypeStatus_14,
  MR_Word CtorSymName_15,
  MR_Word ExistQVarsMapping_16,
  MR_Word CtorArg_17,
  MR_Word SuperCtorArg_18,
  MR_Integer ArgNum_19,
  MR_Integer * HeadVar__9_9,
  MR_Word STATE_VARIABLE_InvalidTypeSpecs_0_32,
  MR_Word * STATE_VARIABLE_InvalidTypeSpecs_33)
{
  MR_bool succeeded;
  MR_Word ArgType_22;
  MR_Word Context_23;
  MR_Word SuperArgType_25;

  *HeadVar__9_9 = (MR_Integer) ((MR_Unsigned) ArgNum_19 + (MR_Unsigned) 1);
  ArgType_22 = ((MR_Word) ((MR_hl_field(0, CtorArg_17, 1))));
  Context_23 = ((MR_Word) ((MR_hl_field(0, CtorArg_17, 2))));
  SuperArgType_25 = ((MR_Word) ((MR_hl_field(0, SuperCtorArg_18, 1))));
  succeeded = hlds__make_hlds__add_type__check_is_subtype_6_p_0(TypeTable_12, TVarSet_13, OrigTypeStatus_14, ExistQVarsMapping_16, ArgType_22, SuperArgType_25);
  if (succeeded)
    *STATE_VARIABLE_InvalidTypeSpecs_33 = STATE_VARIABLE_InvalidTypeSpecs_0_32;
  else
  {
    MR_String ArgTypeStr_27;
    MR_String SuperArgTypeStr_28;
    MR_String CtorName_29;
    MR_Word Pieces_30;
    MR_Word Spec_31;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_54;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_70;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;

    ArgTypeStr_27 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_13, (MR_Integer) 0, ArgType_22);
    SuperArgTypeStr_28 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_13, (MR_Integer) 0, SuperArgType_25);
    CtorName_29 = mdbcomp__sym_name__unqualify_name_1_f_0(CtorSymName_15);
    {
      Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_47, 1) = ((MR_Box) (ArgNum_19));
    }
    {
      Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_52, 1) = ((MR_Box) (CtorName_29));
    }
    {
      Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
      MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_48, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[192])));
      MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_51));
    }
    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_48));
    }
    {
      Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_43, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[191])));
      MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_46));
    }
    Var_42 = parse_tree__error_spec__color_as_subject_1_f_0(Var_43);
    {
      Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_62, 1) = ((MR_Box) (ArgTypeStr_27));
    }
    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[197])));
    }
    Var_60 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_61);
    {
      Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_78, 1) = ((MR_Box) (SuperArgTypeStr_28));
    }
    {
      Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_78));
      MR_hl_field(1, Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_76 = parse_tree__error_spec__color_as_correct_1_f_0(Var_77);
    Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_76, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[201])));
    Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[199])), Var_75);
    Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, Var_70);
    Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[194])), Var_59);
    Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_42, Var_54);
    Pieces_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[127])), Var_41);
    {
      Spec_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_31, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_subtype_ctor_arg\'/11"));
      MR_hl_field(0, Spec_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_31, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(0, Spec_31, 3) = ((MR_Box) (Context_23));
      MR_hl_field(0, Spec_31, 4) = ((MR_Box) (Pieces_30));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_InvalidTypeSpecs_33 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_31));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_InvalidTypeSpecs_0_32));
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_is_subtype_6_p_0(
  MR_Word TypeTable_7,
  MR_Word TVarSet0_8,
  MR_Word OrigTypeStatus_9,
  MR_Word ExistQVarsMapping_10,
  MR_Word TypeA_11,
  MR_Word TypeB_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) TypeA_11)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          MR_Word VarA_14 = ((MR_Word) ((MR_hl_field(0, TypeA_11, 0))));
          MR_Word Kind_15 = ((MR_Word) ((MR_hl_field(0, TypeA_11, 1))));
          MR_Word VarB_16;
          MR_Word Var_74;
          MR_Word TypeInfo_11_100;

          succeeded = ((MR_tag((MR_Word) TypeB_12)) == (MR_Integer) 0);
          if (succeeded)
          {
            VarB_16 = ((MR_Word) ((MR_hl_field(0, TypeB_12, 0))));
            Var_74 = ((MR_Word) ((MR_hl_field(0, TypeB_12, 1))));
            succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_15, Var_74);
            if (succeeded)
            {
              TypeInfo_11_100 = (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_100, ((MR_Box) (VarA_14)), ((MR_Box) (VarB_16)));
              if (succeeded)
              {
                MR_Box conv0_Var_96;

                succeeded = mercury__bimap__forward_search_3_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), ExistQVarsMapping_10, ((MR_Box) (VarB_16)), &conv0_Var_96);
                if (succeeded)
                  succeeded = MR_TRUE;
                succeeded = !(succeeded);
              }
              else
              {
                MR_Word TypeInfo_12_101;
                MR_Word Var_99;
                MR_Box conv1_Var_99;

                succeeded = mercury__bimap__forward_search_3_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), ExistQVarsMapping_10, ((MR_Box) (VarB_16)), &conv1_Var_99);
                if (succeeded)
                {
                  Var_99 = ((MR_Word) (conv1_Var_99));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  TypeInfo_12_101 = (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_101, ((MR_Box) (VarA_14)), ((MR_Box) (Var_99)));
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_69_69;
          MR_Word SymNameA_17 = ((MR_Word) ((MR_hl_field(1, TypeA_11, 0))));
          MR_Word ArgTypesA_18 = ((MR_Word) ((MR_hl_field(1, TypeA_11, 1))));
          MR_Word SymNameB_19;
          MR_Word ArgTypesB_20;
          MR_Integer ArityA_21;
          MR_Integer ArityB_22;
          MR_Word Kind_61 = ((MR_Word) ((MR_hl_field(1, TypeA_11, 2))));
          MR_Word Var_75;

          succeeded = ((MR_tag((MR_Word) TypeB_12)) == (MR_Integer) 1);
          if (succeeded)
          {
            SymNameB_19 = ((MR_Word) ((MR_hl_field(1, TypeB_12, 0))));
            ArgTypesB_20 = ((MR_Word) ((MR_hl_field(1, TypeB_12, 1))));
            Var_75 = ((MR_Word) ((MR_hl_field(1, TypeB_12, 2))));
            succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_61, Var_75);
            if (succeeded)
            {
              TypeCtorInfo_69_69 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
              mercury__list__length_2_p_0(TypeCtorInfo_69_69, ArgTypesA_18, &ArityA_21);
              mercury__list__length_2_p_0(TypeCtorInfo_69_69, ArgTypesB_20, &ArityB_22);
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SymNameA_17, SymNameB_19);
              if (succeeded)
                succeeded = (ArityA_21 == ArityB_22);
              if (succeeded)
                succeeded = hlds__make_hlds__add_type__check_corresponding_args_are_subtype_6_p_0(TypeTable_7, TVarSet0_8, OrigTypeStatus_9, ExistQVarsMapping_10, ArgTypesA_18, ArgTypesB_20);
              else
              {
                MR_Word TypeInfo_70_70;
                MR_Word TypeCtorA_23;
                MR_Word TypeDefnA_24;
                MR_Word TypeBodyA_25;
                MR_Word TypeBodyDuA_26;
                MR_Word SuperTypeA_29;
                MR_Word TypeStatusA_33;
                MR_Word TVarSetA_34;
                MR_Word TypeParamsA0_35;
                MR_Word TVarSet_36;
                MR_Word RenamingA_37;
                MR_Word TypeParamsA_38;
                MR_Word TSubstA_39;
                MR_Word RenamedSuperTypeA_40;
                MR_Word Var_60;
                MR_Word Type1_95;
                MR_Word Var_91;
                MR_Word Var_92;
                MR_Word Var_93;
                MR_Word Var_94;
                MR_Word next_value_of_TVarSet0_8;
                MR_Word next_value_of_TypeA_11;

                {
                  TypeCtorA_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, TypeCtorA_23, 0) = ((MR_Box) (SymNameA_17));
                  MR_hl_field(0, TypeCtorA_23, 1) = ((MR_Box) (ArityA_21));
                }
                succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_7, TypeCtorA_23, &TypeDefnA_24);
                if (succeeded)
                {
                  hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefnA_24, &TypeBodyA_25);
                  succeeded = ((MR_tag((MR_Word) TypeBodyA_25)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    TypeBodyDuA_26 = (MR_Word) ((MR_Word) (TypeBodyA_25));
                    Var_60 = ((MR_Word) ((MR_hl_field(0, TypeBodyDuA_26, 2))));
                    succeeded = (Var_60 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      SuperTypeA_29 = ((MR_Word) ((MR_hl_field(1, Var_60, 0))));
                      hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefnA_24, &TypeStatusA_33);
                      Var_91 = hlds__status__type_status_defined_in_this_module_1_f_0(OrigTypeStatus_9);
                      succeeded = (Var_91 == (MR_Integer) 1);
                      if (succeeded)
                      {
                        Var_92 = hlds__status__type_status_defined_in_impl_section_1_f_0(OrigTypeStatus_9);
                        succeeded = (Var_92 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          Var_93 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatusA_33);
                          succeeded = (Var_93 == (MR_Integer) 1);
                          if (succeeded)
                          {
                            Var_94 = hlds__status__type_status_defined_in_impl_section_1_f_0(TypeStatusA_33);
                            succeeded = (Var_94 == (MR_Integer) 1);
                          }
                        }
                      }
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        hlds__hlds_data__get_type_defn_tvarset_2_p_0(TypeDefnA_24, &TVarSetA_34);
                        hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefnA_24, &TypeParamsA0_35);
                        parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet0_8, TVarSetA_34, &TVarSet_36, &RenamingA_37);
                        parse_tree__prog_type_subst__apply_renaming_to_tvars_3_p_0(RenamingA_37, TypeParamsA0_35, &TypeParamsA_38);
                        TypeInfo_70_70 = (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]);
                        mercury__map__from_corresponding_lists_3_p_0(TypeInfo_70_70, TypeCtorInfo_69_69, TypeParamsA_38, ArgTypesA_18, &TSubstA_39);
                        parse_tree__prog_type_subst__apply_renaming_to_type_3_p_0(RenamingA_37, SuperTypeA_29, &Type1_95);
                        parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TSubstA_39, Type1_95, &RenamedSuperTypeA_40);
                        // direct tailcall eliminated
                        ;
                        next_value_of_TVarSet0_8 = TVarSet_36;
                        next_value_of_TypeA_11 = RenamedSuperTypeA_40;
                        TVarSet0_8 = next_value_of_TVarSet0_8;
                        TypeA_11 = next_value_of_TypeA_11;
                        continue;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BuiltinType_13 = ((MR_Word) ((MR_hl_field(2, TypeA_11, 0))));
          MR_Word Var_73;

          succeeded = ((MR_tag((MR_Word) TypeB_12)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_73 = ((MR_Word) ((MR_hl_field(2, TypeB_12, 0))));
            succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_13, Var_73);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, TypeA_11, 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word TypeCtorInfo_71_71;
              MR_Integer Arity_41;
              MR_Word Kind_62 = ((MR_Word) ((MR_hl_field(3, TypeA_11, 2))));
              MR_Word ArgTypesA_63 = ((MR_Word) ((MR_hl_field(3, TypeA_11, 1))));
              MR_Word ArgTypesB_64;
              MR_Word Var_76;
              MR_Integer Var_77;

              succeeded = ((((MR_tag((MR_Word) TypeB_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_12, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgTypesB_64 = ((MR_Word) ((MR_hl_field(3, TypeB_12, 1))));
                Var_76 = ((MR_Word) ((MR_hl_field(3, TypeB_12, 2))));
                succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_62, Var_76);
                if (succeeded)
                {
                  TypeCtorInfo_71_71 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                  mercury__list__length_2_p_0(TypeCtorInfo_71_71, ArgTypesA_63, &Arity_41);
                  mercury__list__length_2_p_0(TypeCtorInfo_71_71, ArgTypesB_64, &Var_77);
                  succeeded = (Arity_41 == Var_77);
                  if (succeeded)
                    succeeded = hlds__make_hlds__add_type__check_corresponding_args_are_subtype_6_p_0(TypeTable_7, TVarSet0_8, OrigTypeStatus_9, ExistQVarsMapping_10, ArgTypesA_63, ArgTypesB_64);
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeCtorInfo_72_72;
              MR_Word PredOrFunc_42 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_11, 1))) & (MR_Integer) 1);
              MR_Word HOInstInfoA_43 = ((MR_Word) ((MR_hl_field(3, TypeA_11, 3))));
              MR_Word Purity_44 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_11, 4))) & (MR_Integer) 3);
              MR_Word HOInstInfoB_45;
              MR_Word MaybeArgModesA_53;
              MR_Word MaybeArgModesB_54;
              MR_Word ArgTypesA_65 = ((MR_Word) ((MR_hl_field(3, TypeA_11, 2))));
              MR_Word ArgTypesB_66;
              MR_Integer Arity_67;
              MR_Word Var_78;
              MR_Word Var_79;
              MR_Integer Var_80;

              succeeded = ((((MR_tag((MR_Word) TypeB_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_12, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_78 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_12, 1))) & (MR_Integer) 1);
                ArgTypesB_66 = ((MR_Word) ((MR_hl_field(3, TypeB_12, 2))));
                HOInstInfoB_45 = ((MR_Word) ((MR_hl_field(3, TypeB_12, 3))));
                Var_79 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_12, 4))) & (MR_Integer) 3);
                succeeded = (PredOrFunc_42 == Var_78);
                if (succeeded)
                {
                  succeeded = (Purity_44 == Var_79);
                  if (succeeded)
                  {
                    TypeCtorInfo_72_72 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                    mercury__list__length_2_p_0(TypeCtorInfo_72_72, ArgTypesA_65, &Arity_67);
                    mercury__list__length_2_p_0(TypeCtorInfo_72_72, ArgTypesB_66, &Var_80);
                    succeeded = (Arity_67 == Var_80);
                    if (succeeded)
                    {
                      if ((HOInstInfoA_43 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        succeeded = (HOInstInfoB_45 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          MaybeArgModesA_53 = (MR_Word) ((MR_Unsigned) 0U);
                          MaybeArgModesB_54 = (MR_Word) ((MR_Unsigned) 0U);
                          succeeded = MR_TRUE;
                        }
                      }
                      else
                      {
                        MR_Word PredInfoInfoA_46 = (MR_Word) (MR_body((MR_Word) (HOInstInfoA_43), (MR_Integer) 1));
                        MR_Word PredInfoInfoB_47;
                        MR_Word ArgModesA_48;
                        MR_Word Detism_50;
                        MR_Word ArgModesB_51;
                        MR_Word Var_81;
                        MR_Word Var_82;
                        MR_Word Var_83;

                        succeeded = (HOInstInfoB_45 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          PredInfoInfoB_47 = (MR_Word) (MR_body((MR_Word) (HOInstInfoB_45), (MR_Integer) 1));
                          Var_81 = ((MR_Unsigned) ((MR_hl_field(0, PredInfoInfoA_46, 0))) & (MR_Integer) 1);
                          ArgModesA_48 = ((MR_Word) ((MR_hl_field(0, PredInfoInfoA_46, 1))));
                          Detism_50 = ((MR_Unsigned) ((MR_hl_field(0, PredInfoInfoA_46, 3))) & (MR_Integer) 7);
                          succeeded = (PredOrFunc_42 == Var_81);
                          if (succeeded)
                          {
                            Var_82 = ((MR_Unsigned) ((MR_hl_field(0, PredInfoInfoB_47, 0))) & (MR_Integer) 1);
                            ArgModesB_51 = ((MR_Word) ((MR_hl_field(0, PredInfoInfoB_47, 1))));
                            Var_83 = ((MR_Unsigned) ((MR_hl_field(0, PredInfoInfoB_47, 3))) & (MR_Integer) 7);
                            succeeded = (PredOrFunc_42 == Var_82);
                            if (succeeded)
                            {
                              succeeded = (Detism_50 == Var_83);
                              if (succeeded)
                              {
                                {
                                  MaybeArgModesA_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, MaybeArgModesA_53, 0) = ((MR_Box) (ArgModesA_48));
                                }
                                {
                                  MaybeArgModesB_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, MaybeArgModesB_54, 0) = ((MR_Box) (ArgModesB_51));
                                }
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                        }
                      }
                      if (succeeded)
                        succeeded = hlds__make_hlds__add_type__check_is_subtype_higher_order_8_p_0(TypeTable_7, TVarSet0_8, OrigTypeStatus_9, ExistQVarsMapping_10, ArgTypesA_65, ArgTypesB_66, MaybeArgModesA_53, MaybeArgModesB_54);
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeA1_58 = ((MR_Word) ((MR_hl_field(3, TypeA_11, 1))));
              MR_Word TypeB1_59;
              MR_Word Kind_68 = ((MR_Word) ((MR_hl_field(3, TypeA_11, 2))));
              MR_Word Var_84;
              MR_Word next_value_of_TypeA_11;
              MR_Word next_value_of_TypeB_12;

              succeeded = ((((MR_tag((MR_Word) TypeB_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_12, 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                TypeB1_59 = ((MR_Word) ((MR_hl_field(3, TypeB_12, 1))));
                Var_84 = ((MR_Word) ((MR_hl_field(3, TypeB_12, 2))));
                succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_68, Var_84);
                if (succeeded)
                {
                  // direct tailcall eliminated
                  ;
                  next_value_of_TypeA_11 = TypeA1_58;
                  next_value_of_TypeB_12 = TypeB1_59;
                  TypeA_11 = next_value_of_TypeA_11;
                  TypeB_12 = next_value_of_TypeB_12;
                  continue;
                }
              }
            }
            break;
        }
        break;
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_is_subtype_higher_order_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word HeadVar__8_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
          succeeded = (HeadVar__8_8 == (MR_Word) ((MR_Unsigned) 0U));
        else
        {
          MR_Word Var_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, 0))));
          MR_Word Var_16;

          succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (HeadVar__8_8 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__8_8, 0))));
              succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    else
    {
      MR_Word TypeA_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word TypesA_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word TypeB_23;
      MR_Word TypesB_24;
      MR_Word MaybeModesA_27;
      MR_Word MaybeModesB_28;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_HeadVar__7_7;
      MR_Word next_value_of_HeadVar__8_8;

      succeeded = (HeadVar__6_6 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TypeB_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
        TypesB_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
        succeeded = hlds__make_hlds__add_type__check_is_subtype_6_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, TypeA_21, TypeB_23);
        if (succeeded)
        {
          succeeded = hlds__make_hlds__add_type__check_is_subtype_6_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, TypeB_23, TypeA_21);
          if (succeeded)
          {
            if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              succeeded = (HeadVar__8_8 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                MaybeModesA_27 = (MR_Word) ((MR_Unsigned) 0U);
                MaybeModesB_28 = (MR_Word) ((MR_Unsigned) 0U);
                succeeded = MR_TRUE;
              }
            }
            else
            {
              MR_Word ModeA_29;
              MR_Word ModesA_30;
              MR_Word ModeB_31;
              MR_Word ModesB_32;
              MR_Word Var_33 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, 0))));
              MR_Word Var_34;

              succeeded = (Var_33 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ModeA_29 = ((MR_Word) ((MR_hl_field(1, Var_33, 0))));
                ModesA_30 = ((MR_Word) ((MR_hl_field(1, Var_33, 1))));
                succeeded = (HeadVar__8_8 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__8_8, 0))));
                  succeeded = (Var_34 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    ModeB_31 = ((MR_Word) ((MR_hl_field(1, Var_34, 0))));
                    ModesB_32 = ((MR_Word) ((MR_hl_field(1, Var_34, 1))));
                    succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(ModeA_29, ModeB_31);
                    if (succeeded)
                    {
                      {
                        MaybeModesA_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, MaybeModesA_27, 0) = ((MR_Box) (ModesA_30));
                      }
                      {
                        MaybeModesB_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, MaybeModesB_28, 0) = ((MR_Box) (ModesB_32));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
              }
            }
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__5_5 = TypesA_22;
              next_value_of_HeadVar__6_6 = TypesB_24;
              next_value_of_HeadVar__7_7 = MaybeModesA_27;
              next_value_of_HeadVar__8_8 = MaybeModesB_28;
              HeadVar__5_5 = next_value_of_HeadVar__5_5;
              HeadVar__6_6 = next_value_of_HeadVar__6_6;
              HeadVar__7_7 = next_value_of_HeadVar__7_7;
              HeadVar__8_8 = next_value_of_HeadVar__8_8;
              continue;
            }
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_corresponding_args_are_subtype_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = (HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U));
    else
    {
      MR_Word TypeA_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word TypesA_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word TypeB_17;
      MR_Word TypesB_18;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_HeadVar__6_6;

      succeeded = (HeadVar__6_6 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TypeB_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
        TypesB_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
        succeeded = hlds__make_hlds__add_type__check_is_subtype_6_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, TypeA_15, TypeB_17);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__5_5 = TypesA_16;
          next_value_of_HeadVar__6_6 = TypesB_18;
          HeadVar__5_5 = next_value_of_HeadVar__5_5;
          HeadVar__6_6 = next_value_of_HeadVar__6_6;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type__build_existq_tvars_mapping_4_p_0(
  MR_Word VarA_5,
  MR_Word VarB_6,
  MR_Word STATE_VARIABLE_ExistQVarsMapping_0_8,
  MR_Word * STATE_VARIABLE_ExistQVarsMapping_9)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_ExistQVarsMapping_1_10;

  succeeded = mercury__bimap__insert_4_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), ((MR_Box) (VarB_6)), ((MR_Box) (VarA_5)), STATE_VARIABLE_ExistQVarsMapping_0_8, &STATE_VARIABLE_ExistQVarsMapping_1_10);
  if (succeeded)
  {
    *STATE_VARIABLE_ExistQVarsMapping_9 = STATE_VARIABLE_ExistQVarsMapping_1_10;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word TypeInfo_14_14;
    MR_Word Var_13;
    MR_Box conv0_Var_13;

    succeeded = mercury__bimap__forward_search_3_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), STATE_VARIABLE_ExistQVarsMapping_0_8, ((MR_Box) (VarB_6)), &conv0_Var_13);
    if (succeeded)
    {
      Var_13 = ((MR_Word) (conv0_Var_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (VarA_5)), ((MR_Box) (Var_13)));
      if (succeeded)
      {
        *STATE_VARIABLE_ExistQVarsMapping_9 = STATE_VARIABLE_ExistQVarsMapping_0_8;
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_type__look_up_and_check_subtype_ctor_8_p_0(
  MR_Word TypeTable_9,
  MR_Word TVarSet_10,
  MR_Word TypeStatus_11,
  MR_Word SuperTypeCtor_12,
  MR_Word SuperCtors_13,
  MR_Word Ctor_14,
  MR_Word STATE_VARIABLE_InvalidTypeSpecs_0_27,
  MR_Word * STATE_VARIABLE_InvalidTypeSpecs_28)
{
  MR_bool succeeded;
  MR_Word CtorName_18 = ((MR_Word) ((MR_hl_field(0, Ctor_14, 2))));
  MR_Integer Arity_20 = ((MR_Integer) ((MR_hl_field(0, Ctor_14, 4))));
  MR_Word Context_21 = ((MR_Word) ((MR_hl_field(0, Ctor_14, 5))));
  MR_String UnqualCtorName_22;
  MR_Word SuperCtor_23;

  UnqualCtorName_22 = mdbcomp__sym_name__unqualify_name_1_f_0(CtorName_18);
  succeeded = hlds__make_hlds__add_type__search_ctor_by_unqual_name_4_p_0(SuperCtors_13, UnqualCtorName_22, Arity_20, &SuperCtor_23);
  if (succeeded)
    hlds__make_hlds__add_type__check_subtype_ctor_7_p_0(TypeTable_9, TVarSet_10, TypeStatus_11, Ctor_14, SuperCtor_23, STATE_VARIABLE_InvalidTypeSpecs_0_27, STATE_VARIABLE_InvalidTypeSpecs_28);
  else
  {
    MR_Word CtorSNA_24;
    MR_Word Pieces_25;
    MR_Word Spec_26;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_45;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;

    {
      CtorSNA_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, CtorSNA_24, 0) = ((MR_Box) (CtorName_18));
      MR_hl_field(0, CtorSNA_24, 1) = ((MR_Box) (Arity_20));
    }
    {
      Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 15U));
      MR_hl_field(3, Var_37, 1) = ((MR_Box) (CtorSNA_24));
    }
    {
      Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
      MR_hl_field(1, Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_35 = parse_tree__error_spec__color_as_subject_1_f_0(Var_36);
    Var_40 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[163])));
    {
      Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 21U));
      MR_hl_field(3, Var_53, 1) = ((MR_Box) (SuperTypeCtor_12));
    }
    {
      Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
      MR_hl_field(1, Var_52, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[24])));
    }
    Var_51 = parse_tree__error_spec__color_as_subject_1_f_0(Var_52);
    Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[12])));
    Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[165])), Var_50);
    Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, Var_45);
    Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_35, Var_39);
    Pieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[127])), Var_34);
    {
      Spec_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_26, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.look_up_and_check_subtype_ctor\'/8"));
      MR_hl_field(0, Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_26, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(0, Spec_26, 3) = ((MR_Box) (Context_21));
      MR_hl_field(0, Spec_26, 4) = ((MR_Box) (Pieces_25));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_InvalidTypeSpecs_28 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_26));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_InvalidTypeSpecs_0_27));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctor_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Integer conv3_HeadVar__9_9;
  MR_Word conv2_STATE_VARIABLE_InvalidTypeSpecs_33;

  hlds__make_hlds__add_type__check_subtype_ctor_arg_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), &conv3_HeadVar__9_9, ((MR_Word) (wrapper_arg_5)), &conv2_STATE_VARIABLE_InvalidTypeSpecs_33);
  *wrapper_arg_4 = ((MR_Box) (conv3_HeadVar__9_9));
  *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_InvalidTypeSpecs_33));
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctor_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ExistQVarsMapping_9;

  succeeded = hlds__make_hlds__add_type__build_existq_tvars_mapping_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_ExistQVarsMapping_9);
  if (succeeded)
  {
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_ExistQVarsMapping_9));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctor_7_p_0(
  MR_Word TypeTable_8,
  MR_Word TVarSet_9,
  MR_Word TypeStatus_10,
  MR_Word Ctor_11,
  MR_Word SuperCtor_12,
  MR_Word STATE_VARIABLE_InvalidTypeSpecs_0_31,
  MR_Word * STATE_VARIABLE_InvalidTypeSpecs_32)
{
  MR_bool succeeded;
  MR_Word MaybeExistConstraints_15 = ((MR_Word) ((MR_hl_field(0, Ctor_11, 1))));
  MR_Word CtorSymName_16 = ((MR_Word) ((MR_hl_field(0, Ctor_11, 2))));
  MR_Word Args_17 = ((MR_Word) ((MR_hl_field(0, Ctor_11, 3))));
  MR_Integer Arity_18 = ((MR_Integer) ((MR_hl_field(0, Ctor_11, 4))));
  MR_Word Context_19 = ((MR_Word) ((MR_hl_field(0, Ctor_11, 5))));
  MR_Word MaybeSuperExistConstraints_21 = ((MR_Word) ((MR_hl_field(0, SuperCtor_12, 1))));
  MR_Word SuperArgs_23 = ((MR_Word) ((MR_hl_field(0, SuperCtor_12, 3))));
  MR_Word CtorSymNameArity_26;
  MR_Word ExistQVars_44;
  MR_Word Constraints_45;
  MR_Word SuperExistQVars_49;
  MR_Word SuperConstraints_50;
  MR_Integer NumExistQVars_54;
  MR_Integer NumSuperExistQVars_55;

  {
    CtorSymNameArity_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CtorSymNameArity_26, 0) = ((MR_Box) (CtorSymName_16));
    MR_hl_field(0, CtorSymNameArity_26, 1) = ((MR_Box) (Arity_18));
  }
  if ((MaybeExistConstraints_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    ExistQVars_44 = (MR_Word) ((MR_Unsigned) 0U);
    Constraints_45 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word ExistConstraints_46 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_15), (MR_Integer) 1));

    ExistQVars_44 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_46, 0))));
    Constraints_45 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_46, 1))));
  }
  if ((MaybeSuperExistConstraints_21 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    SuperExistQVars_49 = (MR_Word) ((MR_Unsigned) 0U);
    SuperConstraints_50 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word SuperExistConstraints_51 = (MR_Word) (MR_body((MR_Word) (MaybeSuperExistConstraints_21), (MR_Integer) 1));

    SuperExistQVars_49 = ((MR_Word) ((MR_hl_field(0, SuperExistConstraints_51, 0))));
    SuperConstraints_50 = ((MR_Word) ((MR_hl_field(0, SuperExistConstraints_51, 1))));
  }
  mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), ExistQVars_44, &NumExistQVars_54);
  mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), SuperExistQVars_49, &NumSuperExistQVars_55);
  succeeded = (NumExistQVars_54 == NumSuperExistQVars_55);
  if (succeeded)
  {
    MR_Word Result_27;
    MR_Word ExistQVarsMapping_56;
    MR_Word Var_60;
    MR_Box conv1_ExistQVarsMapping_56;

    Var_60 = mercury__bimap__init_0_f_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]));
    succeeded = mercury__list__foldl_corresponding_5_p_3((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_2[1]), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_2[9]), ExistQVars_44, SuperExistQVars_49, ((MR_Box) (Var_60)), &conv1_ExistQVarsMapping_56);
    if (succeeded)
    {
      ExistQVarsMapping_56 = ((MR_Word) (conv1_ExistQVarsMapping_56));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      hlds__make_hlds__add_type__check_subtype_ctor_exist_constraints_6_p_0(CtorSymNameArity_26, Context_19, ExistQVarsMapping_56, Constraints_45, SuperConstraints_50, &Result_27);
    else
    {
      MR_Word Pieces_57;
      MR_Word Spec_58;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_67;
      MR_Word Var_68;

      {
        Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 15U));
        MR_hl_field(3, Var_65, 1) = ((MR_Box) (CtorSymNameArity_26));
      }
      {
        Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
        MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_63 = parse_tree__error_spec__color_as_subject_1_f_0(Var_64);
      Var_68 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[170])));
      Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_68, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[172])));
      Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_63, Var_67);
      Pieces_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[168])), Var_62);
      {
        Spec_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_58, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_subtype_ctor_exist_constraints\'/5"));
        MR_hl_field(0, Spec_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_58, 2) = ((MR_Box) ((MR_Unsigned) 48U));
        MR_hl_field(0, Spec_58, 3) = ((MR_Box) (Context_19));
        MR_hl_field(0, Spec_58, 4) = ((MR_Box) (Pieces_57));
      }
      {
        Result_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Result_27, 0) = ((MR_Box) (Spec_58));
      }
    }
    if (((MR_tag((MR_Word) Result_27)) == (MR_Integer) 0))
    {
      MR_Word Spec_30 = ((MR_Word) ((MR_hl_field(0, Result_27, 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_InvalidTypeSpecs_32 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_30));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_InvalidTypeSpecs_0_31));
      }
    }
    else
    {
      MR_Word ExistQVarsMapping_28 = ((MR_Word) ((MR_hl_field(1, Result_27, 0))));
      MR_Word Var_33;
      MR_Box conv5_Var_29;
      MR_Box conv4_STATE_VARIABLE_InvalidTypeSpecs_32;

      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_33, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_9[0]));
        MR_hl_field(0, Var_33, 1) = ((MR_Box) (hlds__make_hlds__add_type__check_subtype_ctor_7_p_0_2));
        MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 5));
        MR_hl_field(0, Var_33, 3) = ((MR_Box) (TypeTable_8));
        MR_hl_field(0, Var_33, 4) = ((MR_Box) (TVarSet_9));
        MR_hl_field(0, Var_33, 5) = ((MR_Box) (TypeStatus_10));
        MR_hl_field(0, Var_33, 6) = ((MR_Box) (CtorSymName_16));
        MR_hl_field(0, Var_33, 7) = ((MR_Box) (ExistQVarsMapping_28));
      }
      mercury__list__foldl2_corresponding_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[5]), Var_33, Args_17, SuperArgs_23, ((MR_Box) ((MR_Integer) 1)), &conv5_Var_29, ((MR_Box) (STATE_VARIABLE_InvalidTypeSpecs_0_31)), &conv4_STATE_VARIABLE_InvalidTypeSpecs_32);
      *STATE_VARIABLE_InvalidTypeSpecs_32 = ((MR_Word) (conv4_STATE_VARIABLE_InvalidTypeSpecs_32));
    }
  }
  else
  {
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_87;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Pieces_98;
    MR_Word Spec_106;

    {
      Var_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_79, 0) = ((MR_Box) ((MR_Unsigned) 15U));
      MR_hl_field(3, Var_79, 1) = ((MR_Box) (CtorSymNameArity_26));
    }
    {
      Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_78, 0) = ((MR_Box) (Var_79));
      MR_hl_field(1, Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_77 = parse_tree__error_spec__color_as_subject_1_f_0(Var_78);
    {
      Var_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_85, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_85, 1) = ((MR_Box) (NumSuperExistQVars_55));
    }
    {
      Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_84, 0) = ((MR_Box) (Var_85));
      MR_hl_field(1, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_83 = parse_tree__error_spec__color_as_correct_1_f_0(Var_84);
    {
      Var_92 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_92, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_92, 1) = ((MR_Box) (NumExistQVars_54));
    }
    {
      Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
      MR_hl_field(1, Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_90 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_91);
    Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_90, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[181])));
    Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[179])), Var_89);
    Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_83, Var_87);
    Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[176])), Var_82);
    Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_77, Var_80);
    Pieces_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[127])), Var_76);
    {
      Spec_106 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_106, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_subtype_ctor_exist_constraints\'/5"));
      MR_hl_field(0, Spec_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_106, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(0, Spec_106, 3) = ((MR_Box) (Context_19));
      MR_hl_field(0, Spec_106, 4) = ((MR_Box) (Pieces_98));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_InvalidTypeSpecs_32 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_106));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_InvalidTypeSpecs_0_31));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctor_exist_constraints_6_p_0(
  MR_Word CtorSymNameArity_7,
  MR_Word Context_8,
  MR_Word ExistQVarsMapping_9,
  MR_Word Constraints_10,
  MR_Word SuperConstraints0_11,
  MR_Word * Result_12)
{
  MR_bool succeeded;
  MR_Word ExistQVarsRenaming_13;
  MR_Word SuperConstraints_14;

  ExistQVarsRenaming_13 = mercury__bimap__forward_map_1_f_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), ExistQVarsMapping_9);
  parse_tree__prog_type_subst__apply_renaming_to_prog_constraints_3_p_0(ExistQVarsRenaming_13, SuperConstraints0_11, &SuperConstraints_14);
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[182]), ((MR_Box) (Constraints_10)), ((MR_Box) (SuperConstraints_14)));
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ExistQVarsMapping_9));
    }
  else
  {
    MR_Word Pieces0_15;
    MR_Word SortedConstraints_16;
    MR_Word SortedSuperConstraints_17;
    MR_Word Pieces_18;
    MR_Word Spec_19;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_29;

    {
      Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 15U));
      MR_hl_field(3, Var_27, 1) = ((MR_Box) (CtorSymNameArity_7));
    }
    {
      Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(1, Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_25 = parse_tree__error_spec__color_as_subject_1_f_0(Var_26);
    Var_29 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[186])));
    Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_25, Var_29);
    Pieces0_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[184])), Var_24);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Constraints_10, &SortedConstraints_16);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), SuperConstraints_14, &SortedSuperConstraints_17);
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[182]), ((MR_Box) (SortedConstraints_16)), ((MR_Box) (SortedSuperConstraints_17)));
    if (succeeded)
      Pieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_15, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[188])));
    else
      Pieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_15, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[190])));
    {
      Spec_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_subtype_ctor_exist_constraints\'/6"));
      MR_hl_field(0, Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(0, Spec_19, 3) = ((MR_Box) (Context_8));
      MR_hl_field(0, Spec_19, 4) = ((MR_Box) (Pieces_18));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Spec_19));
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type__search_ctor_by_unqual_name_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String UnqualName_7,
  MR_Integer Arity_8,
  MR_Word * Ctor_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word HeadCtor_5;
    MR_Word TailCtors_6;
    MR_Word HeadName_12;
    MR_Integer Var_15;
    MR_String Var_16;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      HeadCtor_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      TailCtors_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      HeadName_12 = ((MR_Word) ((MR_hl_field(0, HeadCtor_5, 2))));
      Var_15 = ((MR_Integer) ((MR_hl_field(0, HeadCtor_5, 4))));
      succeeded = (Arity_8 == Var_15);
      if (succeeded)
      {
        Var_16 = mdbcomp__sym_name__unqualify_name_1_f_0(HeadName_12);
        succeeded = (strcmp(UnqualName_7, Var_16) == 0);
      }
      if (succeeded)
      {
        *Ctor_9 = HeadCtor_5;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = TailCtors_6;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__do_add_ctor_field_5_p_0(
  MR_String FieldName_6,
  MR_Word FieldNameDefn_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_FieldNameTable_0_10,
  MR_Word * STATE_VARIABLE_FieldNameTable_11)
{
  MR_Word Var_12;

  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (ModuleName_8));
    MR_hl_field(1, Var_12, 1) = ((MR_Box) (FieldName_6));
  }
  mercury__one_or_more_map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0), ((MR_Box) (Var_12)), ((MR_Box) (FieldNameDefn_7)), STATE_VARIABLE_FieldNameTable_0_10, STATE_VARIABLE_FieldNameTable_11);
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type__is_conflicting_field_defn_2_p_0(
  MR_Word FieldDefnA_3,
  MR_Word FieldDefnB_4)
{
  MR_bool succeeded;
  MR_Word TypeCtor_7 = ((MR_Word) ((MR_hl_field(0, FieldDefnA_3, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, FieldDefnB_4, 2))));

  succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor_7, Var_14);
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_to_list_4_p_0(
  MR_String ConsName_5,
  MR_Word ModuleQual_6,
  MR_Word STATE_VARIABLE_OtherSymNames_0_9,
  MR_Word * STATE_VARIABLE_OtherSymNames_10)
{
  MR_Word SymName_8;

  {
    SymName_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_8, 0) = ((MR_Box) (ModuleQual_6));
    MR_hl_field(1, SymName_8, 1) = ((MR_Box) (ConsName_5));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_OtherSymNames_10 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (SymName_8));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_OtherSymNames_0_9));
  }
}

void MR_CALL 
hlds__make_hlds__add_type__add_du_ctors_check_subtype_check_foreign_type_9_p_0(
  MR_Word TypeTable_10,
  MR_Word TypeCtor_11,
  MR_Word TypeDefn_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_59,
  MR_Word * STATE_VARIABLE_ModuleInfo_60,
  MR_Word STATE_VARIABLE_InvalidTypeSpecs_0_61,
  MR_Word * STATE_VARIABLE_InvalidTypeSpecs_62,
  MR_Word STATE_VARIABLE_WarnSpecs_0_63,
  MR_Word * STATE_VARIABLE_WarnSpecs_64)
{
  MR_bool succeeded;
  MR_Word Context_16;
  MR_Word TVarSet_17;
  MR_Word TypeParams_18;
  MR_Word KindMap_19;
  MR_Word Body_20;
  MR_Word Status_21;
  MR_Word NeedQual_22;

  hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_12, &Context_16);
  hlds__hlds_data__get_type_defn_tvarset_2_p_0(TypeDefn_12, &TVarSet_17);
  hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_12, &TypeParams_18);
  hlds__hlds_data__get_type_defn_kind_map_2_p_0(TypeDefn_12, &KindMap_19);
  hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_12, &Body_20);
  hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_12, &Status_21);
  hlds__hlds_data__get_type_defn_ctors_need_qualifier_2_p_0(TypeDefn_12, &NeedQual_22);
  switch (MR_tag((MR_Word) Body_20)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word BodyDu_23 = (MR_Word) ((MR_Word) (Body_20));
        MR_Word OoMCtors_24 = ((MR_Word) ((MR_hl_field(0, BodyDu_23, 0))));
        MR_Word MaybeSuperType_26 = ((MR_Word) ((MR_hl_field(0, BodyDu_23, 2))));
        MR_Word CtorMap0_38;
        MR_Word PQInfo_39;
        MR_Word CtorFieldMap0_40;
        MR_Word TypeCtorSymName_41;
        MR_Word TypeCtorModuleName_44;
        MR_Word HeadCtor_46;
        MR_Word TailCtors_47;
        MR_Word CtorFieldMap1_48;
        MR_Word CtorMap1_49;
        MR_Word CtorAddSpecs1_50;
        MR_Word CtorFieldMap_51;
        MR_Word CtorMap_52;
        MR_Word CtorAddSpecs_53;
        MR_Word STATE_VARIABLE_InvalidTypeSpecs_1_66;
        MR_Word STATE_VARIABLE_ModuleInfo_1_70;
        MR_Word STATE_VARIABLE_ModuleInfo_2_74;

        if ((MaybeSuperType_26 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          STATE_VARIABLE_ModuleInfo_1_70 = STATE_VARIABLE_ModuleInfo_0_59;
          STATE_VARIABLE_InvalidTypeSpecs_1_66 = STATE_VARIABLE_InvalidTypeSpecs_0_61;
          *STATE_VARIABLE_WarnSpecs_64 = STATE_VARIABLE_WarnSpecs_0_63;
        }
        else
        {
          MR_Word SuperType_30 = ((MR_Word) ((MR_hl_field(1, MaybeSuperType_26, 0))));
          MR_String FileName_31 = ((MR_String) ((MR_hl_field(0, Context_16, 0))));

          succeeded = mercury__string__suffix_2_p_0(FileName_31, (MR_String) ".int2");
          if (succeeded)
          {
            *STATE_VARIABLE_WarnSpecs_64 = STATE_VARIABLE_WarnSpecs_0_63;
            STATE_VARIABLE_InvalidTypeSpecs_1_66 = STATE_VARIABLE_InvalidTypeSpecs_0_61;
            STATE_VARIABLE_ModuleInfo_1_70 = STATE_VARIABLE_ModuleInfo_0_59;
          }
          else
          {
            MR_Word MaybeSetSubtypeNoncanon_32;

            hlds__make_hlds__add_type__check_subtype_defn_11_p_0(TypeTable_10, TVarSet_17, TypeCtor_11, TypeDefn_12, BodyDu_23, SuperType_30, &MaybeSetSubtypeNoncanon_32, STATE_VARIABLE_InvalidTypeSpecs_0_61, &STATE_VARIABLE_InvalidTypeSpecs_1_66, STATE_VARIABLE_WarnSpecs_0_63, STATE_VARIABLE_WarnSpecs_64);
            switch (MaybeSetSubtypeNoncanon_32) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                STATE_VARIABLE_ModuleInfo_1_70 = STATE_VARIABLE_ModuleInfo_0_59;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word NoncanonBodyDu_33;
                  MR_Word NoncanonBody_34;
                  MR_Word NoncanonTypeDefn_35;
                  MR_Word TypeTable0_36;
                  MR_Word TypeTable1_37;
                  MR_Word Var_76 = ((MR_Word) ((MR_hl_field(0, BodyDu_23, 0))));
                  MR_Word Var_77 = ((MR_Word) ((MR_hl_field(0, BodyDu_23, 1))));
                  MR_Word Var_78 = ((MR_Word) ((MR_hl_field(0, BodyDu_23, 2))));
                  MR_Word Var_80 = ((MR_Word) ((MR_hl_field(0, BodyDu_23, 4))));
                  MR_Word Var_81 = ((MR_Word) ((MR_hl_field(0, BodyDu_23, 5))));

                  {
                    NoncanonBodyDu_33 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, NoncanonBodyDu_33, 0) = ((MR_Box) (Var_76));
                    MR_hl_field(0, NoncanonBodyDu_33, 1) = ((MR_Box) (Var_77));
                    MR_hl_field(0, NoncanonBodyDu_33, 2) = ((MR_Box) (Var_78));
                    MR_hl_field(0, NoncanonBodyDu_33, 3) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_3[0])));
                    MR_hl_field(0, NoncanonBodyDu_33, 4) = ((MR_Box) (Var_80));
                    MR_hl_field(0, NoncanonBodyDu_33, 5) = ((MR_Box) (Var_81));
                  }
                  NoncanonBody_34 = (MR_Word) ((MR_Word) (NoncanonBodyDu_33));
                  hlds__hlds_data__set_type_defn_body_3_p_0(NoncanonBody_34, TypeDefn_12, &NoncanonTypeDefn_35);
                  hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_59, &TypeTable0_36);
                  hlds__hlds_data__replace_type_ctor_defn_4_p_0(TypeCtor_11, NoncanonTypeDefn_35, TypeTable0_36, &TypeTable1_37);
                  hlds__hlds_module__module_info_set_type_table_3_p_0(TypeTable1_37, STATE_VARIABLE_ModuleInfo_0_59, &STATE_VARIABLE_ModuleInfo_1_70);
                }
                break;
            }
          }
        }
        hlds__hlds_module__module_info_get_cons_table_2_p_0(STATE_VARIABLE_ModuleInfo_1_70, &CtorMap0_38);
        hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(STATE_VARIABLE_ModuleInfo_1_70, &PQInfo_39);
        hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(STATE_VARIABLE_ModuleInfo_1_70, &CtorFieldMap0_40);
        TypeCtorSymName_41 = ((MR_Word) ((MR_hl_field(0, TypeCtor_11, 0))));
        if (((MR_tag((MR_Word) TypeCtorSymName_41)) == (MR_Integer) 1))
          TypeCtorModuleName_44 = ((MR_Word) ((MR_hl_field(1, TypeCtorSymName_41, 0))));
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_type.add_du_ctors_check_subtype_check_foreign_type\'/9", (MR_String) "unqualified TypeCtorSymName");
            return;
          }
        HeadCtor_46 = ((MR_Word) ((MR_hl_field(0, OoMCtors_24, 0))));
        TailCtors_47 = ((MR_Word) ((MR_hl_field(0, OoMCtors_24, 1))));
        hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0(HeadCtor_46, TypeCtor_11, TypeCtorModuleName_44, TVarSet_17, TypeParams_18, KindMap_19, NeedQual_22, PQInfo_39, Status_21, CtorFieldMap0_40, &CtorFieldMap1_48, CtorMap0_38, &CtorMap1_49, (MR_Word) ((MR_Unsigned) 0U), &CtorAddSpecs1_50);
        hlds__make_hlds__add_type__add_type_defn_ctors_15_p_0(TailCtors_47, TypeCtor_11, TypeCtorModuleName_44, TVarSet_17, TypeParams_18, KindMap_19, NeedQual_22, PQInfo_39, Status_21, CtorFieldMap1_48, &CtorFieldMap_51, CtorMap1_49, &CtorMap_52, CtorAddSpecs1_50, &CtorAddSpecs_53);
        hlds__hlds_module__module_info_set_cons_table_3_p_0(CtorMap_52, STATE_VARIABLE_ModuleInfo_1_70, &STATE_VARIABLE_ModuleInfo_2_74);
        hlds__hlds_module__module_info_set_ctor_field_table_3_p_0(CtorFieldMap_51, STATE_VARIABLE_ModuleInfo_2_74, STATE_VARIABLE_ModuleInfo_60);
        *STATE_VARIABLE_InvalidTypeSpecs_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), CtorAddSpecs_53, STATE_VARIABLE_InvalidTypeSpecs_1_66);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ForeignTypeBody_54 = (MR_Word) (MR_body((MR_Word) (Body_20), (MR_Integer) 1));
        MR_Word PrevErrors_55;

        hlds__hlds_data__get_type_defn_prev_errors_2_p_0(TypeDefn_12, &PrevErrors_55);
        hlds__make_hlds__add_type__check_foreign_type_for_current_target_7_p_0(STATE_VARIABLE_ModuleInfo_0_59, TypeCtor_11, ForeignTypeBody_54, PrevErrors_55, Context_16, STATE_VARIABLE_InvalidTypeSpecs_0_61, STATE_VARIABLE_InvalidTypeSpecs_62);
        *STATE_VARIABLE_ModuleInfo_60 = STATE_VARIABLE_ModuleInfo_0_59;
        *STATE_VARIABLE_WarnSpecs_64 = STATE_VARIABLE_WarnSpecs_0_63;
      }
      break;
    case (MR_Integer) 2:
      {
        *STATE_VARIABLE_ModuleInfo_60 = STATE_VARIABLE_ModuleInfo_0_59;
        *STATE_VARIABLE_InvalidTypeSpecs_62 = STATE_VARIABLE_InvalidTypeSpecs_0_61;
        *STATE_VARIABLE_WarnSpecs_64 = STATE_VARIABLE_WarnSpecs_0_63;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Body_20, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_ModuleInfo_60 = STATE_VARIABLE_ModuleInfo_0_59;
            *STATE_VARIABLE_InvalidTypeSpecs_62 = STATE_VARIABLE_InvalidTypeSpecs_0_61;
            *STATE_VARIABLE_WarnSpecs_64 = STATE_VARIABLE_WarnSpecs_0_63;
          }
          break;
        case (MR_Integer) 1:
          {
            *STATE_VARIABLE_ModuleInfo_60 = STATE_VARIABLE_ModuleInfo_0_59;
            *STATE_VARIABLE_InvalidTypeSpecs_62 = STATE_VARIABLE_InvalidTypeSpecs_0_61;
            *STATE_VARIABLE_WarnSpecs_64 = STATE_VARIABLE_WarnSpecs_0_63;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_defn_11_p_0(
  MR_Word TypeTable_12,
  MR_Word TVarSet_13,
  MR_Word TypeCtor_14,
  MR_Word TypeDefn_15,
  MR_Word TypeBodyDu_16,
  MR_Word SuperType_17,
  MR_Word * MaybeSetSubtypeNoncanon_18,
  MR_Word STATE_VARIABLE_InvalidTypeSpecs_0_35,
  MR_Word * STATE_VARIABLE_InvalidTypeSpecs_36,
  MR_Word STATE_VARIABLE_WarnSpecs_0_37,
  MR_Word * STATE_VARIABLE_WarnSpecs_38)
{
  MR_bool succeeded;
  MR_Word SuperTypeCtor_21;
  MR_Word SuperTypeArgs_22;

  succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(SuperType_17, &SuperTypeCtor_21, &SuperTypeArgs_22);
  if (succeeded)
  {
    succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(SuperTypeCtor_21, TypeCtor_14);
    if (!(succeeded))
      succeeded = mercury__list__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) ((MR_Unsigned) 0U), ((MR_Box) (SuperTypeCtor_21)));
    if (succeeded)
    {
      MR_Word SearchSpecs_30;
      MR_Word Var_46;
      MR_Word Spec_80;

      Spec_80 = hlds__make_hlds__add_type__supertype_ctor_defn_error_to_spec_5_f_0(TypeCtor_14, TypeDefn_15, (MR_Word) ((MR_Unsigned) 0U), SuperTypeCtor_21, (MR_Integer) 2);
      {
        SearchSpecs_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SearchSpecs_30, 0) = ((MR_Box) (Spec_80));
        MR_hl_field(0, SearchSpecs_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_46 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), SearchSpecs_30);
      *STATE_VARIABLE_InvalidTypeSpecs_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_46, STATE_VARIABLE_InvalidTypeSpecs_0_35);
      *MaybeSetSubtypeNoncanon_18 = (MR_Integer) 0;
      *STATE_VARIABLE_WarnSpecs_38 = STATE_VARIABLE_WarnSpecs_0_37;
    }
    else
    {
      MR_Word SearchResult_110;
      MR_Word SuperTypeDefn_81;

      succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_12, SuperTypeCtor_21, &SuperTypeDefn_81);
      if (succeeded)
      {
        MR_Word OrigTypeStatus_82;
        MR_Word SuperTypeStatus_83;
        MR_Word Var_100;
        MR_Word Var_101;
        MR_Word Var_102;
        MR_Word Var_103;

        hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_15, &OrigTypeStatus_82);
        hlds__hlds_data__get_type_defn_status_2_p_0(SuperTypeDefn_81, &SuperTypeStatus_83);
        Var_100 = hlds__status__type_status_defined_in_this_module_1_f_0(OrigTypeStatus_82);
        succeeded = (Var_100 == (MR_Integer) 1);
        if (succeeded)
        {
          Var_101 = hlds__status__type_status_defined_in_impl_section_1_f_0(OrigTypeStatus_82);
          succeeded = (Var_101 == (MR_Integer) 0);
          if (succeeded)
          {
            Var_102 = hlds__status__type_status_defined_in_this_module_1_f_0(SuperTypeStatus_83);
            succeeded = (Var_102 == (MR_Integer) 1);
            if (succeeded)
            {
              Var_103 = hlds__status__type_status_defined_in_impl_section_1_f_0(SuperTypeStatus_83);
              succeeded = (Var_103 == (MR_Integer) 1);
            }
          }
        }
        if (succeeded)
        {
          MR_Word Var_91;
          MR_Word Spec_96;

          Spec_96 = hlds__make_hlds__add_type__supertype_ctor_defn_error_to_spec_5_f_0(TypeCtor_14, TypeDefn_15, (MR_Word) ((MR_Unsigned) 0U), SuperTypeCtor_21, (MR_Integer) 0);
          {
            Var_91 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_91, 0) = ((MR_Box) (Spec_96));
            MR_hl_field(0, Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            SearchResult_110 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, SearchResult_110, 0) = ((MR_Box) (Var_91));
          }
        }
        else
        {
          MR_Word MaybeSuperTypeBodyDu_84;

          hlds__make_hlds__add_type__check_supertype_is_du_not_foreign_4_p_0(TypeDefn_15, SuperTypeCtor_21, SuperTypeDefn_81, &MaybeSuperTypeBodyDu_84);
          if (((MR_tag((MR_Word) MaybeSuperTypeBodyDu_84)) == (MR_Integer) 0))
          {
            MR_Word SuperSpecs_86 = ((MR_Word) ((MR_hl_field(0, MaybeSuperTypeBodyDu_84, 0))));

            {
              SearchResult_110 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SearchResult_110, 0) = ((MR_Box) (SuperSpecs_86));
            }
          }
          else
          {
            MR_Word SuperTypeBodyDu_85 = ((MR_Word) ((MR_hl_field(1, MaybeSuperTypeBodyDu_84, 0))));

            {
              SearchResult_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, SearchResult_110, 0) = ((MR_Box) (SuperTypeDefn_81));
              MR_hl_field(1, SearchResult_110, 1) = ((MR_Box) (SuperTypeBodyDu_85));
            }
          }
        }
      }
      else
      {
        MR_Word Var_94;
        MR_Word Spec_97;

        Spec_97 = hlds__make_hlds__add_type__supertype_ctor_defn_error_to_spec_5_f_0(TypeCtor_14, TypeDefn_15, (MR_Word) ((MR_Unsigned) 0U), SuperTypeCtor_21, (MR_Integer) 1);
        {
          Var_94 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_94, 0) = ((MR_Box) (Spec_97));
          MR_hl_field(0, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          SearchResult_110 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SearchResult_110, 0) = ((MR_Box) (Var_94));
        }
      }
      if (((MR_tag((MR_Word) SearchResult_110)) == (MR_Integer) 0))
      {
        MR_Word SearchSpecs_104 = ((MR_Word) ((MR_hl_field(0, SearchResult_110, 0))));
        MR_Word Var_105;

        Var_105 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), SearchSpecs_104);
        *STATE_VARIABLE_InvalidTypeSpecs_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_105, STATE_VARIABLE_InvalidTypeSpecs_0_35);
        *MaybeSetSubtypeNoncanon_18 = (MR_Integer) 0;
        *STATE_VARIABLE_WarnSpecs_38 = STATE_VARIABLE_WarnSpecs_0_37;
      }
      else
      {
        MR_Word SuperTypeDefn_24 = ((MR_Word) ((MR_hl_field(1, SearchResult_110, 0))));
        MR_Word SuperTypeBodyDu_25 = ((MR_Word) ((MR_hl_field(1, SearchResult_110, 1))));
        MR_Word MaybeBaseMaybeCanon_26;

        hlds__make_hlds__add_type__check_supertypes_up_to_base_type_8_p_0(TypeTable_12, TypeCtor_14, TypeDefn_15, SuperTypeCtor_21, SuperTypeDefn_24, SuperTypeBodyDu_25, (MR_Word) ((MR_Unsigned) 0U), &MaybeBaseMaybeCanon_26);
        if (((MR_tag((MR_Word) MaybeBaseMaybeCanon_26)) == (MR_Integer) 0))
        {
          MR_Word UpToBaseSpecs_29 = ((MR_Word) ((MR_hl_field(0, MaybeBaseMaybeCanon_26, 0))));
          MR_Word Var_44;

          Var_44 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), UpToBaseSpecs_29);
          *STATE_VARIABLE_InvalidTypeSpecs_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_44, STATE_VARIABLE_InvalidTypeSpecs_0_35);
          *MaybeSetSubtypeNoncanon_18 = (MR_Integer) 0;
          *STATE_VARIABLE_WarnSpecs_38 = STATE_VARIABLE_WarnSpecs_0_37;
        }
        else
        {
          MR_Word BaseMaybeCanon_27 = ((MR_Word) ((MR_hl_field(1, MaybeBaseMaybeCanon_26, 0))));

          if ((BaseMaybeCanon_27 == (MR_Word) ((MR_Unsigned) 0U)))
            *MaybeSetSubtypeNoncanon_18 = (MR_Integer) 0;
          else
            *MaybeSetSubtypeNoncanon_18 = (MR_Integer) 1;
          hlds__make_hlds__add_type__check_subtype_ctors_12_p_0(TypeTable_12, TypeCtor_14, TypeDefn_15, TypeBodyDu_16, SuperTypeCtor_21, SuperTypeDefn_24, SuperTypeBodyDu_25, SuperTypeArgs_22, STATE_VARIABLE_InvalidTypeSpecs_0_35, STATE_VARIABLE_InvalidTypeSpecs_36, STATE_VARIABLE_WarnSpecs_0_37, STATE_VARIABLE_WarnSpecs_38);
        }
      }
    }
  }
  else
  {
    MR_String SuperTypeStr_31;
    MR_Word Pieces_32;
    MR_Word Context_33;
    MR_Word Spec_34;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_58;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;

    SuperTypeStr_31 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_13, (MR_Integer) 0, SuperType_17);
    Var_53 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[124])));
    {
      Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_66, 1) = ((MR_Box) (SuperTypeStr_31));
    }
    {
      Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
      MR_hl_field(1, Var_65, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[24])));
    }
    Var_64 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_65);
    Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_64, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[12])));
    Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[126])), Var_63);
    Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_53, Var_58);
    Pieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[122])), Var_52);
    hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_15, &Context_33);
    {
      Spec_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_34, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_subtype_defn\'/11"));
      MR_hl_field(0, Spec_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_34, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(0, Spec_34, 3) = ((MR_Box) (Context_33));
      MR_hl_field(0, Spec_34, 4) = ((MR_Box) (Pieces_32));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_InvalidTypeSpecs_36 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_34));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_InvalidTypeSpecs_0_35));
    }
    *MaybeSetSubtypeNoncanon_18 = (MR_Integer) 0;
    *STATE_VARIABLE_WarnSpecs_38 = STATE_VARIABLE_WarnSpecs_0_37;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctors_12_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__add_type__IntroducedFrom__pred__compute_subtype_ctors_diff__2048__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctors_12_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__add_type__IntroducedFrom__pred__compute_subtype_ctors_diff__2047__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctors_12_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv4_Str_4;

  hlds__make_hlds__add_type__ctor_to_string_2_p_0(((MR_Word) (wrapper_arg_1)), &conv4_Str_4);
  *wrapper_arg_2 = ((MR_Box) (conv4_Str_4));
}

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctors_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv3_Str_4;

  hlds__make_hlds__add_type__ctor_to_string_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_Str_4);
  *wrapper_arg_2 = ((MR_Box) (conv3_Str_4));
}

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctors_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_InvalidTypeSpecs_28;

  hlds__make_hlds__add_type__look_up_and_check_subtype_ctor_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_InvalidTypeSpecs_28);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_InvalidTypeSpecs_28));
}

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctors_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Ctor_8;

  hlds__make_hlds__add_type__rename_and_rec_subst_in_constructor_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_Ctor_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_Ctor_8));
}

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctors_12_p_0(
  MR_Word TypeTable_13,
  MR_Word TypeCtor_14,
  MR_Word TypeDefn_15,
  MR_Word TypeBodyDu_16,
  MR_Word SuperTypeCtor_17,
  MR_Word SuperTypeDefn_18,
  MR_Word SuperTypeBodyDu_19,
  MR_Word SuperTypeArgs_20,
  MR_Word STATE_VARIABLE_InvalidTypeSpecs_0_47,
  MR_Word * STATE_VARIABLE_InvalidTypeSpecs_48,
  MR_Word STATE_VARIABLE_WarnSpecs_0_49,
  MR_Word * STATE_VARIABLE_WarnSpecs_50)
{
  MR_bool succeeded;
  MR_Word TVarSet0_23;
  MR_Word TypeStatus_24;
  MR_Word SuperTVarSet_25;
  MR_Word SuperTypeParams0_26;
  MR_Word NewTVarSet_27;
  MR_Word Renaming_28;
  MR_Word SuperTypeParams_29;
  MR_Word TSubst_30;
  MR_Word OoMSuperCtors_31;
  MR_Word SuperCtors0_37;
  MR_Word SuperCtors_38;
  MR_Word OoMCtors_39;
  MR_Word Ctors_45;
  MR_Word Context_46;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Box conv2_STATE_VARIABLE_InvalidTypeSpecs_48;

  hlds__hlds_data__get_type_defn_tvarset_2_p_0(TypeDefn_15, &TVarSet0_23);
  hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_15, &TypeStatus_24);
  hlds__hlds_data__get_type_defn_tvarset_2_p_0(SuperTypeDefn_18, &SuperTVarSet_25);
  hlds__hlds_data__get_type_defn_tparams_2_p_0(SuperTypeDefn_18, &SuperTypeParams0_26);
  parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet0_23, SuperTVarSet_25, &NewTVarSet_27, &Renaming_28);
  parse_tree__prog_type_subst__apply_renaming_to_tvars_3_p_0(Renaming_28, SuperTypeParams0_26, &SuperTypeParams_29);
  mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), SuperTypeParams_29, SuperTypeArgs_20, &TSubst_30);
  OoMSuperCtors_31 = ((MR_Word) ((MR_hl_field(0, SuperTypeBodyDu_19, 0))));
  SuperCtors0_37 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMSuperCtors_31);
  {
    Var_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_51, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_7[1]));
    MR_hl_field(0, Var_51, 1) = ((MR_Box) (hlds__make_hlds__add_type__check_subtype_ctors_12_p_0_1));
    MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_51, 3) = ((MR_Box) (Renaming_28));
    MR_hl_field(0, Var_51, 4) = ((MR_Box) (TSubst_30));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Var_51, SuperCtors0_37, &SuperCtors_38);
  OoMCtors_39 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_16, 0))));
  Ctors_45 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMCtors_39);
  {
    Var_52 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_52, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_8[0]));
    MR_hl_field(0, Var_52, 1) = ((MR_Box) (hlds__make_hlds__add_type__check_subtype_ctors_12_p_0_2));
    MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_52, 3) = ((MR_Box) (TypeTable_13));
    MR_hl_field(0, Var_52, 4) = ((MR_Box) (NewTVarSet_27));
    MR_hl_field(0, Var_52, 5) = ((MR_Box) (TypeStatus_24));
    MR_hl_field(0, Var_52, 6) = ((MR_Box) (SuperTypeCtor_17));
    MR_hl_field(0, Var_52, 7) = ((MR_Box) (SuperCtors_38));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[5]), Var_52, Ctors_45, ((MR_Box) (STATE_VARIABLE_InvalidTypeSpecs_0_47)), &conv2_STATE_VARIABLE_InvalidTypeSpecs_48);
  *STATE_VARIABLE_InvalidTypeSpecs_48 = ((MR_Word) (conv2_STATE_VARIABLE_InvalidTypeSpecs_48));
  hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_15, &Context_46);
  if ((Ctors_45 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_WarnSpecs_50 = STATE_VARIABLE_WarnSpecs_0_49;
  else
  {
    MR_Word Var_110 = ((MR_Word) ((MR_hl_field(1, Ctors_45, 1))));

    if ((Var_110 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_WarnSpecs_50 = STATE_VARIABLE_WarnSpecs_0_49;
    else
    {
      MR_Word CtorStrs0_99;
      MR_Word SuperCtorStrs0_100;
      MR_Word CtorStrs_101;
      MR_Word SuperCtorStrs_102;
      MR_Word Var_106;
      MR_Word Var_107;
      MR_Word ChangeHunkPieces_113;

      mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_2[7]), Ctors_45, &CtorStrs0_99);
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_2[8]), SuperCtors_38, &SuperCtorStrs0_100);
      {
        Var_106 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_106, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_5[3]));
        MR_hl_field(0, Var_106, 1) = ((MR_Box) (hlds__make_hlds__add_type__check_subtype_ctors_12_p_0_5));
        MR_hl_field(0, Var_106, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_106, 3) = ((MR_Box) (SuperCtorStrs0_100));
      }
      mercury__list__filter_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_106, CtorStrs0_99, &CtorStrs_101);
      {
        Var_107 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_107, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_5[3]));
        MR_hl_field(0, Var_107, 1) = ((MR_Box) (hlds__make_hlds__add_type__check_subtype_ctors_12_p_0_6));
        MR_hl_field(0, Var_107, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_107, 3) = ((MR_Box) (CtorStrs0_99));
      }
      mercury__list__filter_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_107, SuperCtorStrs0_100, &SuperCtorStrs_102);
      parse_tree__error_spec__construct_diff_for_string_seqs_4_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_2[3]), SuperCtorStrs_102, CtorStrs_101, &ChangeHunkPieces_113);
      if ((ChangeHunkPieces_113 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_WarnSpecs_50 = STATE_VARIABLE_WarnSpecs_0_49;
      else
      {
        MR_Word Pieces_65;
        MR_Word Spec_67;
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Word Var_80;
        MR_Word Var_85;
        MR_Word Var_86;
        MR_Word Var_87;
        MR_Word Var_88;
        MR_Word Var_93;

        {
          Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 21U));
          MR_hl_field(3, Var_75, 1) = ((MR_Box) (TypeCtor_14));
        }
        {
          Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_74, 0) = ((MR_Box) (Var_75));
          MR_hl_field(1, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_73 = parse_tree__error_spec__color_as_subject_1_f_0(Var_74);
        Var_78 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[205])));
        {
          Var_88 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_88, 0) = ((MR_Box) ((MR_Unsigned) 21U));
          MR_hl_field(3, Var_88, 1) = ((MR_Box) (SuperTypeCtor_17));
        }
        {
          Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_87, 0) = ((MR_Box) (Var_88));
          MR_hl_field(1, Var_87, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[24])));
        }
        Var_86 = parse_tree__error_spec__color_as_subject_1_f_0(Var_87);
        Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[217])), ChangeHunkPieces_113);
        Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_86, Var_93);
        Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[207])), Var_85);
        Var_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_78, Var_80);
        Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_73, Var_77);
        Pieces_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[18])), Var_72);
        {
          Spec_67 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_67, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_subtype_ctors_order\'/7"));
          MR_hl_field(0, Spec_67, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_3[3])));
          MR_hl_field(0, Spec_67, 2) = ((MR_Box) ((MR_Unsigned) 48U));
          MR_hl_field(0, Spec_67, 3) = ((MR_Box) (Context_46));
          MR_hl_field(0, Spec_67, 4) = ((MR_Box) (Pieces_65));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_WarnSpecs_50 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_67));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_WarnSpecs_0_49));
        }
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_supertypes_up_to_base_type_8_p_0(
  MR_Word TypeTable_9,
  MR_Word OrigTypeCtor_10,
  MR_Word OrigTypeDefn_11,
  MR_Word CurSuperTypeCtor_12,
  MR_Word CurSuperTypeDefn_13,
  MR_Word CurSuperTypeBodyDu_14,
  MR_Word PrevSuperTypeCtors0_15,
  MR_Word * MaybeBaseMaybeCanon_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word MaybeNextSuperType_19 = ((MR_Word) ((MR_hl_field(0, CurSuperTypeBodyDu_14, 2))));
    MR_Word MaybeCanon_20 = ((MR_Word) ((MR_hl_field(0, CurSuperTypeBodyDu_14, 3))));

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((MaybeNextSuperType_19 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeBaseMaybeCanon_16 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (MaybeCanon_20));
      }
    else
    {
      MR_Word NextSuperType_23 = ((MR_Word) ((MR_hl_field(1, MaybeNextSuperType_19, 0))));
      MR_Word NextSuperTypeCtor_24;

      succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(NextSuperType_23, &NextSuperTypeCtor_24);
      if (succeeded)
      {
        MR_Word PrevSuperTypeCtors1_25;

        {
          PrevSuperTypeCtors1_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, PrevSuperTypeCtors1_25, 0) = ((MR_Box) (CurSuperTypeCtor_12));
          MR_hl_field(1, PrevSuperTypeCtors1_25, 1) = ((MR_Box) (PrevSuperTypeCtors0_15));
        }
        succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(NextSuperTypeCtor_24, OrigTypeCtor_10);
        if (!(succeeded))
          succeeded = mercury__list__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), PrevSuperTypeCtors1_25, ((MR_Box) (NextSuperTypeCtor_24)));
        if (succeeded)
        {
          MR_Word SearchSpecs_29;
          MR_Word Spec_36;

          Spec_36 = hlds__make_hlds__add_type__supertype_ctor_defn_error_to_spec_5_f_0(OrigTypeCtor_10, OrigTypeDefn_11, PrevSuperTypeCtors1_25, NextSuperTypeCtor_24, (MR_Integer) 2);
          {
            SearchSpecs_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, SearchSpecs_29, 0) = ((MR_Box) (Spec_36));
            MR_hl_field(0, SearchSpecs_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeBaseMaybeCanon_16 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (SearchSpecs_29));
          }
        }
        else
        {
          MR_Word SearchResult_92;
          MR_Word SuperTypeDefn_37;

          succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_9, NextSuperTypeCtor_24, &SuperTypeDefn_37);
          if (succeeded)
          {
            MR_Word OrigTypeStatus_38;
            MR_Word SuperTypeStatus_39;
            MR_Word Var_56;
            MR_Word Var_57;
            MR_Word Var_58;
            MR_Word Var_59;

            hlds__hlds_data__get_type_defn_status_2_p_0(OrigTypeDefn_11, &OrigTypeStatus_38);
            hlds__hlds_data__get_type_defn_status_2_p_0(SuperTypeDefn_37, &SuperTypeStatus_39);
            Var_56 = hlds__status__type_status_defined_in_this_module_1_f_0(OrigTypeStatus_38);
            succeeded = (Var_56 == (MR_Integer) 1);
            if (succeeded)
            {
              Var_57 = hlds__status__type_status_defined_in_impl_section_1_f_0(OrigTypeStatus_38);
              succeeded = (Var_57 == (MR_Integer) 0);
              if (succeeded)
              {
                Var_58 = hlds__status__type_status_defined_in_this_module_1_f_0(SuperTypeStatus_39);
                succeeded = (Var_58 == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_59 = hlds__status__type_status_defined_in_impl_section_1_f_0(SuperTypeStatus_39);
                  succeeded = (Var_59 == (MR_Integer) 1);
                }
              }
            }
            if (succeeded)
            {
              MR_Word Var_47;
              MR_Word Spec_52;

              Spec_52 = hlds__make_hlds__add_type__supertype_ctor_defn_error_to_spec_5_f_0(OrigTypeCtor_10, OrigTypeDefn_11, PrevSuperTypeCtors1_25, NextSuperTypeCtor_24, (MR_Integer) 0);
              {
                Var_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_47, 0) = ((MR_Box) (Spec_52));
                MR_hl_field(0, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                SearchResult_92 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, SearchResult_92, 0) = ((MR_Box) (Var_47));
              }
            }
            else
            {
              MR_Word MaybeSuperTypeBodyDu_40;

              hlds__make_hlds__add_type__check_supertype_is_du_not_foreign_4_p_0(OrigTypeDefn_11, NextSuperTypeCtor_24, SuperTypeDefn_37, &MaybeSuperTypeBodyDu_40);
              if (((MR_tag((MR_Word) MaybeSuperTypeBodyDu_40)) == (MR_Integer) 0))
              {
                MR_Word SuperSpecs_42 = ((MR_Word) ((MR_hl_field(0, MaybeSuperTypeBodyDu_40, 0))));

                {
                  SearchResult_92 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SearchResult_92, 0) = ((MR_Box) (SuperSpecs_42));
                }
              }
              else
              {
                MR_Word SuperTypeBodyDu_41 = ((MR_Word) ((MR_hl_field(1, MaybeSuperTypeBodyDu_40, 0))));

                {
                  SearchResult_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, SearchResult_92, 0) = ((MR_Box) (SuperTypeDefn_37));
                  MR_hl_field(1, SearchResult_92, 1) = ((MR_Box) (SuperTypeBodyDu_41));
                }
              }
            }
          }
          else
          {
            MR_Word Var_50;
            MR_Word Spec_53;

            Spec_53 = hlds__make_hlds__add_type__supertype_ctor_defn_error_to_spec_5_f_0(OrigTypeCtor_10, OrigTypeDefn_11, PrevSuperTypeCtors1_25, NextSuperTypeCtor_24, (MR_Integer) 1);
            {
              Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_50, 0) = ((MR_Box) (Spec_53));
              MR_hl_field(0, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              SearchResult_92 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SearchResult_92, 0) = ((MR_Box) (Var_50));
            }
          }
          if (((MR_tag((MR_Word) SearchResult_92)) == (MR_Integer) 0))
          {
            MR_Word SearchSpecs_90 = ((MR_Word) ((MR_hl_field(0, SearchResult_92, 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeBaseMaybeCanon_16 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (SearchSpecs_90));
            }
          }
          else
          {
            MR_Word NextSuperTypeDefn_27 = ((MR_Word) ((MR_hl_field(1, SearchResult_92, 0))));
            MR_Word NextSuperTypeBodyDu_28 = ((MR_Word) ((MR_hl_field(1, SearchResult_92, 1))));
            MR_Word next_value_of_CurSuperTypeCtor_12 = NextSuperTypeCtor_24;
            MR_Word next_value_of_CurSuperTypeDefn_13 = NextSuperTypeDefn_27;
            MR_Word next_value_of_CurSuperTypeBodyDu_14 = NextSuperTypeBodyDu_28;
            MR_Word next_value_of_PrevSuperTypeCtors0_15 = PrevSuperTypeCtors1_25;

            // direct tailcall eliminated
            ;
            CurSuperTypeCtor_12 = next_value_of_CurSuperTypeCtor_12;
            CurSuperTypeDefn_13 = next_value_of_CurSuperTypeDefn_13;
            CurSuperTypeBodyDu_14 = next_value_of_CurSuperTypeBodyDu_14;
            PrevSuperTypeCtors0_15 = next_value_of_PrevSuperTypeCtors0_15;
            continue;
          }
        }
      }
      else
      {
        MR_Word TVarSet_30;
        MR_Word OrigTypeContext_31;
        MR_Word Spec_32;
        MR_Word Var_33;
        MR_Word PrevSuperTypeCtors1_35;
        MR_String NextSuperTypeStr_60;
        MR_Word Pieces_61;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Var_75;
        MR_Word Var_77;
        MR_Word Var_78;

        hlds__hlds_data__get_type_defn_tvarset_2_p_0(CurSuperTypeDefn_13, &TVarSet_30);
        {
          PrevSuperTypeCtors1_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, PrevSuperTypeCtors1_35, 0) = ((MR_Box) (CurSuperTypeCtor_12));
          MR_hl_field(1, PrevSuperTypeCtors1_35, 1) = ((MR_Box) (PrevSuperTypeCtors0_15));
        }
        hlds__hlds_data__get_type_defn_context_2_p_0(OrigTypeDefn_11, &OrigTypeContext_31);
        NextSuperTypeStr_60 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_30, (MR_Integer) 0, NextSuperType_23);
        {
          Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_70, 1) = ((MR_Box) (NextSuperTypeStr_60));
        }
        {
          Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
          MR_hl_field(1, Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_68 = parse_tree__error_spec__color_as_subject_1_f_0(Var_69);
        Var_73 = hlds__make_hlds__add_type__describe_which_is_supertype_of_chain_3_f_0((MR_Integer) 1, OrigTypeCtor_10, PrevSuperTypeCtors1_35);
        Var_78 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[158])));
        Var_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_78, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[12])));
        Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[156])), Var_77);
        Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_73, Var_75);
        Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_68, Var_72);
        Pieces_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[127])), Var_67);
        {
          Spec_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_32, 0) = ((MR_Box) ((MR_String) "function \140hlds.make_hlds.add_type.report_non_du_supertype\'/5"));
          MR_hl_field(0, Spec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_32, 2) = ((MR_Box) ((MR_Unsigned) 48U));
          MR_hl_field(0, Spec_32, 3) = ((MR_Box) (OrigTypeContext_31));
          MR_hl_field(0, Spec_32, 4) = ((MR_Box) (Pieces_61));
        }
        {
          Var_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_33, 0) = ((MR_Box) (Spec_32));
          MR_hl_field(0, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeBaseMaybeCanon_16 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_33));
        }
      }
    }
    break;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_type__supertype_ctor_defn_error_to_spec_5_f_0(
  MR_Word OrigTypeCtor_7,
  MR_Word OrigTypeDefn_8,
  MR_Word PrevSuperTypeCtors_9,
  MR_Word LastSuperTypeCtor_10,
  MR_Word Error_11)
{
  MR_bool succeeded;
  MR_Word Spec_12;
  MR_Word Pieces_13;
  MR_Word OrigTypeContext_14;

  switch (Error_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      {
        MR_Word Var_103;
        MR_Word Var_104;
        MR_Word Var_112;
        MR_Word Var_121;
        MR_Word Var_122;
        MR_Word Var_123;
        MR_Word Var_124;

        Var_104 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[138])));
        Var_124 = hlds__make_hlds__add_type__describe_supertype_chain_4_f_0((MR_Word) ((MR_Unsigned) 0U), OrigTypeCtor_7, PrevSuperTypeCtors_9, LastSuperTypeCtor_10);
        Var_123 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_124, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[24])));
        Var_122 = parse_tree__error_spec__color_as_subject_1_f_0(Var_123);
        Var_121 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_122, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[12])));
        Var_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[141])), Var_121);
        Var_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_104, Var_112);
        Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[127])), Var_103);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Var_19;
        MR_Word Var_20;
        MR_Word Var_23;
        MR_Word Var_33;
        MR_Word Var_34;

        Var_20 = hlds__make_hlds__add_type__describe_supertype_chain_4_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_3[2])), OrigTypeCtor_7, PrevSuperTypeCtors_9, LastSuperTypeCtor_10);
        Var_34 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[149])));
        Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_34, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[12])));
        Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[147])), Var_33);
        Var_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_20, Var_23);
        Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[143])), Var_19);
      }
      break;
    case (MR_Integer) 1:
      {
        {
          MR_Word SymName_140 = ((MR_Word) ((MR_hl_field(0, LastSuperTypeCtor_10, 0))));
          MR_Integer Arity_141 = ((MR_Integer) ((MR_hl_field(0, LastSuperTypeCtor_10, 1))));
          MR_String TypeName_142;

          succeeded = (Arity_141 == (MR_Integer) 0);
          if (succeeded)
          {
            if (((MR_tag((MR_Word) SymName_140)) == (MR_Integer) 1))
            {
              MR_Word Var_145 = ((MR_Word) ((MR_hl_field(1, SymName_140, 0))));
              MR_Word Var_146;

              TypeName_142 = ((MR_String) ((MR_hl_field(1, SymName_140, 1))));
              Var_146 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_145, Var_146);
            }
            else
            {
              TypeName_142 = ((MR_String) ((MR_hl_field(0, SymName_140, 0))));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              succeeded = parse_tree__prog_data__is_builtin_type_name_1_p_0(TypeName_142);
          }
        }
        if (!(succeeded))
        {
          {
            MR_Word Var_143;
            MR_Word Var_144;

            succeeded = parse_tree__prog_type_test__type_ctor_is_higher_order_3_p_0(LastSuperTypeCtor_10, &Var_143, &Var_144);
          }
          if (!(succeeded))
            succeeded = parse_tree__prog_type_test__type_ctor_is_tuple_1_p_0(LastSuperTypeCtor_10);
        }
        if (succeeded)
        {
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_50;
          MR_Word Var_60;
          MR_Word Var_61;

          Var_47 = hlds__make_hlds__add_type__describe_supertype_chain_4_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_3[2])), OrigTypeCtor_7, PrevSuperTypeCtors_9, LastSuperTypeCtor_10);
          Var_61 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[153])));
          Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_61, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[12])));
          Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[147])), Var_60);
          Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, Var_50);
          Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[127])), Var_46);
        }
        else
        {
          MR_Word Var_76;
          MR_Word Var_77;
          MR_Word Var_80;
          MR_Word Var_90;
          MR_Word Var_91;

          Var_77 = hlds__make_hlds__add_type__describe_supertype_chain_4_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_3[2])), OrigTypeCtor_7, PrevSuperTypeCtors_9, LastSuperTypeCtor_10);
          Var_91 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[155])));
          Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_91, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[12])));
          Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[147])), Var_90);
          Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_77, Var_80);
          Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[48])), Var_76);
        }
      }
      break;
  }
  hlds__hlds_data__get_type_defn_context_2_p_0(OrigTypeDefn_8, &OrigTypeContext_14);
  {
    Spec_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_12, 0) = ((MR_Box) ((MR_String) "function \140hlds.make_hlds.add_type.supertype_ctor_defn_error_to_spec\'/5"));
    MR_hl_field(0, Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(0, Spec_12, 3) = ((MR_Box) (OrigTypeContext_14));
    MR_hl_field(0, Spec_12, 4) = ((MR_Box) (Pieces_13));
  }
  return Spec_12;
}

static MR_Word MR_CALL 
hlds__make_hlds__add_type__describe_supertype_chain_4_f_0(
  MR_Word MaybeLastSuperColor_6,
  MR_Word OrigTypeCtor_7,
  MR_Word PrevSuperTypeCtors_8,
  MR_Word LastSuperTypeCtor_9)
{
  MR_Word Pieces_10;
  MR_Word LastSuperPieces0_11;
  MR_Word LastSuperPieces_12;
  MR_Word Var_13;
  MR_Word Var_18;
  MR_Word Var_22;

  {
    Var_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_13, 0) = ((MR_Box) ((MR_Unsigned) 21U));
    MR_hl_field(3, Var_13, 1) = ((MR_Box) (LastSuperTypeCtor_9));
  }
  {
    LastSuperPieces0_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, LastSuperPieces0_11, 0) = ((MR_Box) (Var_13));
    MR_hl_field(1, LastSuperPieces0_11, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[32])));
  }
  LastSuperPieces_12 = parse_tree__error_spec__maybe_color_pieces_2_f_0(MaybeLastSuperColor_6, LastSuperPieces0_11);
  Var_22 = hlds__make_hlds__add_type__describe_which_is_supertype_of_chain_3_f_0((MR_Integer) 1, OrigTypeCtor_7, PrevSuperTypeCtors_8);
  Var_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[12])), Var_22);
  Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), LastSuperPieces_12, Var_18);
  return Pieces_10;
}

static MR_Word MR_CALL 
hlds__make_hlds__add_type__describe_which_is_supertype_of_chain_3_f_0(
  MR_Word First_5,
  MR_Word OrigTypeCtor_6,
  MR_Word SuperTypeCtors_7)
{
  MR_Word Pieces_8;
  MR_Word WhichIsPieces_9;

  switch (First_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      WhichIsPieces_9 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 0:
      WhichIsPieces_9 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[160]));
      break;
  }
  if ((SuperTypeCtors_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_15;
    MR_Word Var_18;
    MR_Word Var_19;

    {
      Var_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_19, 0) = ((MR_Box) ((MR_Unsigned) 21U));
      MR_hl_field(3, Var_19, 1) = ((MR_Box) (OrigTypeCtor_6));
    }
    {
      Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_18, 0) = ((MR_Box) (Var_19));
      MR_hl_field(1, Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_15, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[161])));
      MR_hl_field(1, Var_15, 1) = ((MR_Box) (Var_18));
    }
    Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), WhichIsPieces_9, Var_15);
  }
  else
  {
    MR_Word HeadSuperTypeCtor_10 = ((MR_Word) ((MR_hl_field(1, SuperTypeCtors_7, 0))));
    MR_Word TailSuperTypeCtors_11 = ((MR_Word) ((MR_hl_field(1, SuperTypeCtors_7, 1))));
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_33;

    {
      Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 21U));
      MR_hl_field(3, Var_26, 1) = ((MR_Box) (HeadSuperTypeCtor_10));
    }
    {
      Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(1, Var_25, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[156])));
    }
    {
      Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_22, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[161])));
      MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_25));
    }
    Var_33 = hlds__make_hlds__add_type__describe_which_is_supertype_of_chain_3_f_0((MR_Integer) 0, OrigTypeCtor_6, TailSuperTypeCtors_11);
    Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_22, Var_33);
    Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), WhichIsPieces_9, Var_21);
  }
  return Pieces_8;
}

static void MR_CALL 
hlds__make_hlds__add_type__check_supertype_is_du_not_foreign_4_p_0(
  MR_Word TypeDefn_5,
  MR_Word SuperTypeCtor_6,
  MR_Word SuperTypeDefn_7,
  MR_Word * MaybeSuperTypeBodyDu_8)
{
  MR_Word SuperTypeBody_9;

  hlds__hlds_data__get_type_defn_body_2_p_0(SuperTypeDefn_7, &SuperTypeBody_9);
  switch (MR_tag((MR_Word) SuperTypeBody_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SuperTypeBodyDu_10 = (MR_Word) ((MR_Word) (SuperTypeBody_9));
        MR_Word IsForeign_16 = ((MR_Word) ((MR_hl_field(0, SuperTypeBodyDu_10, 5))));

        if ((IsForeign_16 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeSuperTypeBodyDu_8 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (SuperTypeBodyDu_10));
          }
        else
        {
          MR_Word Pieces_18;
          MR_Word Context_19;
          MR_Word Spec_20;
          MR_Word Var_31;
          MR_Word Var_32;
          MR_Word Var_33;
          MR_Word Var_34;
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word Var_42;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_59;

          {
            Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 21U));
            MR_hl_field(3, Var_34, 1) = ((MR_Box) (SuperTypeCtor_6));
          }
          {
            Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
            MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_32 = parse_tree__error_spec__color_as_subject_1_f_0(Var_33);
          Var_37 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[129])));
          Var_48 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[134])));
          Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[12])));
          Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[132])), Var_47);
          Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_37, Var_42);
          Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_32, Var_36);
          Pieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[127])), Var_31);
          hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_5, &Context_19);
          {
            Spec_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_supertype_is_du_not_foreign\'/4"));
            MR_hl_field(0, Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 48U));
            MR_hl_field(0, Spec_20, 3) = ((MR_Box) (Context_19));
            MR_hl_field(0, Spec_20, 4) = ((MR_Box) (Pieces_18));
          }
          {
            Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_59, 0) = ((MR_Box) (Spec_20));
            MR_hl_field(0, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeSuperTypeBodyDu_8 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_59));
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_140;
        MR_Word Var_141;
        MR_Word Var_142;
        MR_Word Var_143;
        MR_Word Var_144;
        MR_Word Var_145;
        MR_Word Var_147;
        MR_Word Var_153;
        MR_Word Var_154;
        MR_Word Var_162;
        MR_Word Pieces_164;
        MR_Word Context_165;
        MR_Word Spec_166;

        {
          Var_143 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_143, 0) = ((MR_Box) ((MR_Unsigned) 21U));
          MR_hl_field(3, Var_143, 1) = ((MR_Box) (SuperTypeCtor_6));
        }
        {
          Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_142, 0) = ((MR_Box) (Var_143));
          MR_hl_field(1, Var_142, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_141 = parse_tree__error_spec__color_as_subject_1_f_0(Var_142);
        Var_145 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[129])));
        Var_154 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[235])));
        Var_153 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_154, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[12])));
        Var_147 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[233])), Var_153);
        Var_144 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_145, Var_147);
        Var_140 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_141, Var_144);
        Pieces_164 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[127])), Var_140);
        hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_5, &Context_165);
        {
          Spec_166 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_166, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_supertype_is_du_not_foreign\'/4"));
          MR_hl_field(0, Spec_166, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_166, 2) = ((MR_Box) ((MR_Unsigned) 48U));
          MR_hl_field(0, Spec_166, 3) = ((MR_Box) (Context_165));
          MR_hl_field(0, Spec_166, 4) = ((MR_Box) (Pieces_164));
        }
        {
          Var_162 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_162, 0) = ((MR_Box) (Spec_166));
          MR_hl_field(0, Var_162, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeSuperTypeBodyDu_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_162));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_108;
        MR_Word Var_109;
        MR_Word Var_110;
        MR_Word Var_111;
        MR_Word Var_112;
        MR_Word Var_113;
        MR_Word Var_115;
        MR_Word Var_121;
        MR_Word Var_122;
        MR_Word Var_130;
        MR_Word Pieces_132;
        MR_Word Context_133;
        MR_Word Spec_134;

        {
          Var_111 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_111, 0) = ((MR_Box) ((MR_Unsigned) 21U));
          MR_hl_field(3, Var_111, 1) = ((MR_Box) (SuperTypeCtor_6));
        }
        {
          Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_110, 0) = ((MR_Box) (Var_111));
          MR_hl_field(1, Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_109 = parse_tree__error_spec__color_as_subject_1_f_0(Var_110);
        Var_113 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[129])));
        Var_122 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[230])));
        Var_121 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_122, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[12])));
        Var_115 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[226])), Var_121);
        Var_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_113, Var_115);
        Var_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_109, Var_112);
        Pieces_132 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[127])), Var_108);
        hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_5, &Context_133);
        {
          Spec_134 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_134, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_supertype_is_du_not_foreign\'/4"));
          MR_hl_field(0, Spec_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_134, 2) = ((MR_Box) ((MR_Unsigned) 48U));
          MR_hl_field(0, Spec_134, 3) = ((MR_Box) (Context_133));
          MR_hl_field(0, Spec_134, 4) = ((MR_Box) (Pieces_132));
        }
        {
          Var_130 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_130, 0) = ((MR_Box) (Spec_134));
          MR_hl_field(0, Var_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeSuperTypeBodyDu_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_130));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, SuperTypeBody_9, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_172;
            MR_Word Var_173;
            MR_Word Var_174;
            MR_Word Var_175;
            MR_Word Var_176;
            MR_Word Var_177;
            MR_Word Var_179;
            MR_Word Var_185;
            MR_Word Var_186;
            MR_Word Var_194;
            MR_Word Pieces_196;
            MR_Word Context_197;
            MR_Word Spec_198;

            {
              Var_175 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_175, 0) = ((MR_Box) ((MR_Unsigned) 21U));
              MR_hl_field(3, Var_175, 1) = ((MR_Box) (SuperTypeCtor_6));
            }
            {
              Var_174 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_174, 0) = ((MR_Box) (Var_175));
              MR_hl_field(1, Var_174, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_173 = parse_tree__error_spec__color_as_subject_1_f_0(Var_174);
            Var_177 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[129])));
            Var_186 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[237])));
            Var_185 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_186, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[12])));
            Var_179 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[233])), Var_185);
            Var_176 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_177, Var_179);
            Var_172 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_173, Var_176);
            Pieces_196 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[127])), Var_172);
            hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_5, &Context_197);
            {
              Spec_198 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_198, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_supertype_is_du_not_foreign\'/4"));
              MR_hl_field(0, Spec_198, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_198, 2) = ((MR_Box) ((MR_Unsigned) 48U));
              MR_hl_field(0, Spec_198, 3) = ((MR_Box) (Context_197));
              MR_hl_field(0, Spec_198, 4) = ((MR_Box) (Pieces_196));
            }
            {
              Var_194 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_194, 0) = ((MR_Box) (Spec_198));
              MR_hl_field(0, Var_194, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeSuperTypeBodyDu_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_194));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_65;
            MR_Word Var_66;
            MR_Word Var_67;
            MR_Word Var_68;
            MR_Word Var_70;
            MR_Word Var_71;
            MR_Word Var_76;
            MR_Word Var_83;
            MR_Word Var_84;
            MR_Word Var_97;
            MR_Word Pieces_99;
            MR_Word Context_100;
            MR_Word Spec_101;

            {
              Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 21U));
              MR_hl_field(3, Var_68, 1) = ((MR_Box) (SuperTypeCtor_6));
            }
            {
              Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
              MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_66 = parse_tree__error_spec__color_as_subject_1_f_0(Var_67);
            Var_71 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[129])));
            Var_84 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[228])));
            Var_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_84, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[12])));
            Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[226])), Var_83);
            Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_71, Var_76);
            Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_66, Var_70);
            Pieces_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[127])), Var_65);
            hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_5, &Context_100);
            {
              Spec_101 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_101, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_supertype_is_du_not_foreign\'/4"));
              MR_hl_field(0, Spec_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_101, 2) = ((MR_Box) ((MR_Unsigned) 48U));
              MR_hl_field(0, Spec_101, 3) = ((MR_Box) (Context_100));
              MR_hl_field(0, Spec_101, 4) = ((MR_Box) (Pieces_99));
            }
            {
              Var_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_97, 0) = ((MR_Box) (Spec_101));
              MR_hl_field(0, Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeSuperTypeBodyDu_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_97));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_for_current_target_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word TypeCtor_9,
  MR_Word ForeignTypeBody_10,
  MR_Word PrevErrors_11,
  MR_Word Context_12,
  MR_Word STATE_VARIABLE_InvalidTypeSpecs_0_22,
  MR_Word * STATE_VARIABLE_InvalidTypeSpecs_23)
{
  MR_bool succeeded;
  MR_Word Globals_14;
  MR_Word Target_15;
  MR_Word Var_91;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_14);
  libs__globals__get_target_2_p_0(Globals_14, &Target_15);
  backend_libs__foreign__have_foreign_type_for_backend_3_p_0(Target_15, ForeignTypeBody_10, &Var_91);
  succeeded = ((MR_Integer) 1 == Var_91);
  if (succeeded)
    *STATE_VARIABLE_InvalidTypeSpecs_23 = STATE_VARIABLE_InvalidTypeSpecs_0_22;
  else
  {
    succeeded = (PrevErrors_11 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      *STATE_VARIABLE_InvalidTypeSpecs_23 = STATE_VARIABLE_InvalidTypeSpecs_0_22;
    else
    {
      MR_String LangStr_17;
      MR_Word MainPieces_18;
      MR_Word Msg_20;
      MR_Word Spec_21;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_40;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_48;
      MR_Word Var_51;
      MR_Word Var_54;
      MR_Word Var_57;
      MR_Word Var_60;
      MR_Word Var_63;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word Var_88;

      LangStr_17 = libs__globals__compilation_target_string_1_f_0(Target_15);
      {
        Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 21U));
        MR_hl_field(3, Var_32, 1) = ((MR_Box) (TypeCtor_9));
      }
      {
        Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_30 = parse_tree__error_spec__color_as_subject_1_f_0(Var_31);
      Var_35 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[109])));
      {
        Var_44 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_44, 0) = ((MR_Box) (LangStr_17));
      }
      {
        Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_44));
        MR_hl_field(1, Var_63, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[116])));
      }
      {
        Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_60, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[115])));
        MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_63));
      }
      {
        Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_57, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[114])));
        MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_60));
      }
      {
        Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_54, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[41])));
        MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_57));
      }
      {
        Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_51, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[113])));
        MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_54));
      }
      {
        Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_48, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[112])));
        MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_51));
      }
      {
        Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_45, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[111])));
        MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_48));
      }
      {
        Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
        MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_45));
      }
      {
        Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_40, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[110])));
        MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_43));
      }
      Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_35, Var_40);
      Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_30, Var_34);
      MainPieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[48])), Var_29);
      {
        Var_80 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_80, 0) = ((MR_Box) (MainPieces_18));
      }
      {
        Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_79, 0) = ((MR_Box) (Var_80));
        MR_hl_field(1, Var_79, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[223])));
      }
      {
        Msg_20 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Msg_20, 0) = ((MR_Box) (Context_12));
        MR_hl_field(2, Msg_20, 1) = ((MR_Box) (Var_79));
      }
      {
        Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_88, 0) = ((MR_Box) (Msg_20));
        MR_hl_field(1, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_21 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_foreign_type_for_current_target\'/7"));
        MR_hl_field(2, Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(2, Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 48U));
        MR_hl_field(2, Spec_21, 3) = ((MR_Box) (Var_88));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_InvalidTypeSpecs_23 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_21));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_InvalidTypeSpecs_0_22));
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctors_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TypeCtor_2,
  MR_Word TypeCtorModuleName_3,
  MR_Word TVarSet_4,
  MR_Word TypeParams_5,
  MR_Word KindMap_6,
  MR_Word NeedQual_7,
  MR_Word PQInfo_8,
  MR_Word TypeStatus_9,
  MR_Word STATE_VARIABLE_FieldNameTable_0_10,
  MR_Word * STATE_VARIABLE_FieldNameTable_11,
  MR_Word STATE_VARIABLE_ConsTable_0_12,
  MR_Word * STATE_VARIABLE_ConsTable_13,
  MR_Word STATE_VARIABLE_ErrSpecs_0_14,
  MR_Word * STATE_VARIABLE_ErrSpecs_15)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ErrSpecs_15 = STATE_VARIABLE_ErrSpecs_0_14;
      *STATE_VARIABLE_ConsTable_13 = STATE_VARIABLE_ConsTable_0_12;
      *STATE_VARIABLE_FieldNameTable_11 = STATE_VARIABLE_FieldNameTable_0_10;
    }
    else
    {
      MR_Word Ctor_33 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Ctors_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_FieldNameTable_1_52;
      MR_Word STATE_VARIABLE_ConsTable_1_53;
      MR_Word STATE_VARIABLE_ErrSpecs_1_54;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_FieldNameTable_0_10;
      MR_Word next_value_of_STATE_VARIABLE_ConsTable_0_12;
      MR_Word next_value_of_STATE_VARIABLE_ErrSpecs_0_14;

      hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0(Ctor_33, TypeCtor_2, TypeCtorModuleName_3, TVarSet_4, TypeParams_5, KindMap_6, NeedQual_7, PQInfo_8, TypeStatus_9, STATE_VARIABLE_FieldNameTable_0_10, &STATE_VARIABLE_FieldNameTable_1_52, STATE_VARIABLE_ConsTable_0_12, &STATE_VARIABLE_ConsTable_1_53, STATE_VARIABLE_ErrSpecs_0_14, &STATE_VARIABLE_ErrSpecs_1_54);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Ctors_34;
      next_value_of_STATE_VARIABLE_FieldNameTable_0_10 = STATE_VARIABLE_FieldNameTable_1_52;
      next_value_of_STATE_VARIABLE_ConsTable_0_12 = STATE_VARIABLE_ConsTable_1_53;
      next_value_of_STATE_VARIABLE_ErrSpecs_0_14 = STATE_VARIABLE_ErrSpecs_1_54;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_FieldNameTable_0_10 = next_value_of_STATE_VARIABLE_FieldNameTable_0_10;
      STATE_VARIABLE_ConsTable_0_12 = next_value_of_STATE_VARIABLE_ConsTable_0_12;
      STATE_VARIABLE_ErrSpecs_0_14 = next_value_of_STATE_VARIABLE_ErrSpecs_0_14;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_LambdaHeadVar__2_100;

  conv3_LambdaHeadVar__2_100 = hlds__make_hlds__add_type__IntroducedFrom__func__add_type_defn_ctor__1112__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_100));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_OtherSymNames_10;

  hlds__make_hlds__add_type__add_ctor_to_list_4_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_OtherSymNames_10);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_OtherSymNames_10));
}

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_1(
  void * env_ptr_arg)
{
  struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_3(
  void * env_ptr_arg)
{
  struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_102 = ((MR_Word) ((env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__conv0_OtherConsDefn_102));
  hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_2(env_ptr);
}

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_2(
  void * env_ptr_arg)
{
  struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Word Var_109;

    (env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__Var_121 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_102, 0))));
    (env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0((env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17, (env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__Var_121);
    if ((env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded)
      hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_1(env_ptr);
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_4(
  void * env_ptr_arg)
{
  struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0), &(env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__conv0_OtherConsDefn_102, (env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__QualifiedConsDefnsA_39, hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_3, env_ptr);
      (env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0(
  MR_Word Ctor_16,
  MR_Word TypeCtor_17,
  MR_Word TypeCtorModuleName_18,
  MR_Word TVarSet_19,
  MR_Word TypeParams_20,
  MR_Word KindMap_21,
  MR_Word NeedQual_22,
  MR_Word PQInfo_23,
  MR_Word TypeStatus_24,
  MR_Word STATE_VARIABLE_FieldNameTable_0_50,
  MR_Word * STATE_VARIABLE_FieldNameTable_51,
  MR_Word STATE_VARIABLE_ConsTable_0_52,
  MR_Word * STATE_VARIABLE_ConsTable_53,
  MR_Word STATE_VARIABLE_ErrSpecs_0_54,
  MR_Word * STATE_VARIABLE_ErrSpecs_55)
{
  struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s env;

  (env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17 = TypeCtor_17;
  {
    MR_Word MaybeExistConstraints_29 = ((MR_Word) ((MR_hl_field(0, Ctor_16, 1))));
    MR_Word SymName_30 = ((MR_Word) ((MR_hl_field(0, Ctor_16, 2))));
    MR_Word Args_31 = ((MR_Word) ((MR_hl_field(0, Ctor_16, 3))));
    MR_Integer Arity_32 = ((MR_Integer) ((MR_hl_field(0, Ctor_16, 4))));
    MR_Word Context_33 = ((MR_Word) ((MR_hl_field(0, Ctor_16, 5))));
    MR_String BaseName_34;
    MR_Word QualifiedName_35;
    MR_Word QualifiedDuCtor_36;
    MR_Word ConsDefn_37;
    MR_Word PartialQuals_38;
    MR_Word FieldNames_47;
    uint32_t _Ordinal_28;

    BaseName_34 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_30);
    {
      QualifiedName_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, QualifiedName_35, 0) = ((MR_Box) (TypeCtorModuleName_18));
      MR_hl_field(1, QualifiedName_35, 1) = ((MR_Box) (BaseName_34));
    }
    {
      QualifiedDuCtor_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, QualifiedDuCtor_36, 0) = ((MR_Box) (QualifiedName_35));
      MR_hl_field(0, QualifiedDuCtor_36, 1) = ((MR_Box) (Arity_32));
      MR_hl_field(0, QualifiedDuCtor_36, 2) = ((MR_Box) ((env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
    }
    {
      ConsDefn_37 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ConsDefn_37, 0) = ((MR_Box) ((env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
      MR_hl_field(0, ConsDefn_37, 1) = ((MR_Box) (TVarSet_19));
      MR_hl_field(0, ConsDefn_37, 2) = ((MR_Box) (TypeParams_20));
      MR_hl_field(0, ConsDefn_37, 3) = ((MR_Box) (KindMap_21));
      MR_hl_field(0, ConsDefn_37, 4) = ((MR_Box) (MaybeExistConstraints_29));
      MR_hl_field(0, ConsDefn_37, 5) = ((MR_Box) (Args_31));
      MR_hl_field(0, ConsDefn_37, 6) = ((MR_Box) (Context_33));
    }
    parse_tree__module_qual__mq_info__get_partial_qualifiers_4_p_0((MR_Integer) 0, TypeCtorModuleName_18, PQInfo_23, &PartialQuals_38);
    (env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = hlds__hlds_cons__search_cons_table_3_p_0(STATE_VARIABLE_ConsTable_0_52, QualifiedDuCtor_36, &(env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__QualifiedConsDefnsA_39);
    if ((env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded)
      hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_4(&env);
    if ((env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded)
    {
      MR_Word QualifiedConsIdA_41 = (MR_Word) (MR_mkword(1, (MR_Word) (QualifiedDuCtor_36)));
      MR_Word Pieces_42;
      MR_Word Spec_43;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_72;
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Word Var_80;

      {
        Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 29U));
        MR_hl_field(3, Var_64, 1) = ((MR_Box) (QualifiedConsIdA_41));
      }
      {
        Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
        MR_hl_field(1, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_62 = parse_tree__error_spec__color_as_subject_1_f_0(Var_63);
      Var_67 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[105])));
      {
        Var_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_80, 0) = ((MR_Box) ((MR_Unsigned) 21U));
        MR_hl_field(3, Var_80, 1) = ((MR_Box) ((env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
      }
      {
        Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_79, 0) = ((MR_Box) (Var_80));
        MR_hl_field(1, Var_79, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[24])));
      }
      Var_78 = parse_tree__error_spec__color_as_subject_1_f_0(Var_79);
      Var_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_78, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[12])));
      Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[107])), Var_77);
      Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_67, Var_72);
      Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_62, Var_66);
      Pieces_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[103])), Var_61);
      {
        Spec_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_43, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.add_type_defn_ctor\'/15"));
        MR_hl_field(0, Spec_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_43, 2) = ((MR_Box) ((MR_Unsigned) 48U));
        MR_hl_field(0, Spec_43, 3) = ((MR_Box) (Context_33));
        MR_hl_field(0, Spec_43, 4) = ((MR_Box) (Pieces_42));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_ErrSpecs_55 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_43));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_54));
      }
      *STATE_VARIABLE_ConsTable_53 = STATE_VARIABLE_ConsTable_0_52;
    }
    else
    {
      MR_Word STATE_VARIABLE_OtherSymNames_1_92;
      MR_Word Var_95;
      MR_Word STATE_VARIABLE_OtherSymNames_3_96;
      MR_Box conv2_STATE_VARIABLE_OtherSymNames_3_96;

      switch (NeedQual_22) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word UnqualifiedName_46;

            {
              UnqualifiedName_46 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, UnqualifiedName_46, 0) = ((MR_Box) (BaseName_34));
            }
            {
              STATE_VARIABLE_OtherSymNames_1_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_OtherSymNames_1_92, 0) = ((MR_Box) (UnqualifiedName_46));
              MR_hl_field(1, STATE_VARIABLE_OtherSymNames_1_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_OtherSymNames_1_92 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
      {
        Var_95 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_95, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_7[0]));
        MR_hl_field(0, Var_95, 1) = ((MR_Box) (hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_5));
        MR_hl_field(0, Var_95, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_95, 3) = ((MR_Box) (BaseName_34));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[2]), Var_95, PartialQuals_38, ((MR_Box) (STATE_VARIABLE_OtherSymNames_1_92)), &conv2_STATE_VARIABLE_OtherSymNames_3_96);
      STATE_VARIABLE_OtherSymNames_3_96 = ((MR_Word) (conv2_STATE_VARIABLE_OtherSymNames_3_96));
      hlds__hlds_cons__insert_into_cons_table_5_p_0(QualifiedDuCtor_36, STATE_VARIABLE_OtherSymNames_3_96, ConsDefn_37, STATE_VARIABLE_ConsTable_0_52, STATE_VARIABLE_ConsTable_53);
      *STATE_VARIABLE_ErrSpecs_55 = STATE_VARIABLE_ErrSpecs_0_54;
    }
    FieldNames_47 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[3]), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_2[6]), Args_31);
    hlds__make_hlds__add_type__add_ctor_field_names_9_p_0(FieldNames_47, NeedQual_22, PartialQuals_38, (env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17, QualifiedDuCtor_36, TypeStatus_24, (MR_Integer) 1, STATE_VARIABLE_FieldNameTable_0_50, STATE_VARIABLE_FieldNameTable_51);
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_names_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_FieldNameTable_11;

  hlds__make_hlds__add_type__do_add_ctor_field_5_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_FieldNameTable_11);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_FieldNameTable_11));
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_names_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__add_type__is_conflicting_field_defn_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_names_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word NeedQual_2,
  MR_Word PartialQuals_3,
  MR_Word TypeCtor_4,
  MR_Word DuCtor_5,
  MR_Word TypeStatus_6,
  MR_Integer FieldNumber_7,
  MR_Word STATE_VARIABLE_FieldNameTable_0_8,
  MR_Word * STATE_VARIABLE_FieldNameTable_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_FieldNameTable_9 = STATE_VARIABLE_FieldNameTable_0_8;
    else
    {
      MR_Word MaybeCtorFieldName_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word MaybeCtorFieldNames_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_FieldNameTable_1_34;
      MR_Integer Var_35;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_FieldNumber_7;
      MR_Word next_value_of_STATE_VARIABLE_FieldNameTable_0_8;

      if ((MaybeCtorFieldName_19 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_FieldNameTable_1_34 = STATE_VARIABLE_FieldNameTable_0_8;
      else
      {
        MR_Word FieldName_28;
        MR_Word FieldNameContext_29;
        MR_Word FieldDefn_30;
        MR_Word Var_33 = ((MR_Word) ((MR_hl_field(1, MaybeCtorFieldName_19, 0))));
        MR_Word FieldModule_39;
        MR_Word TypeCtorInfo_31_52;
        MR_Word ExistingDefns_40;
        MR_Word Var_45;
        MR_Box conv0_ExistingDefns_40;
        MR_Box conv1__ConflictingDefn_41;

        FieldName_28 = ((MR_Word) ((MR_hl_field(0, Var_33, 0))));
        FieldNameContext_29 = ((MR_Word) ((MR_hl_field(0, Var_33, 1))));
        {
          FieldDefn_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FieldDefn_30, 0) = ((MR_Box) (FieldNameContext_29));
          MR_hl_field(0, FieldDefn_30, 1) = ((MR_Box) (TypeStatus_6));
          MR_hl_field(0, FieldDefn_30, 2) = ((MR_Box) (TypeCtor_4));
          MR_hl_field(0, FieldDefn_30, 3) = ((MR_Box) (DuCtor_5));
          MR_hl_field(0, FieldDefn_30, 4) = ((MR_Box) (FieldNumber_7));
        }
        if (((MR_tag((MR_Word) FieldName_28)) == (MR_Integer) 1))
          FieldModule_39 = ((MR_Word) ((MR_hl_field(1, FieldName_28, 0))));
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_type.add_ctor_field_name\'/6", (MR_String) "unqualified field name");
            return;
          }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[4]), STATE_VARIABLE_FieldNameTable_0_8, ((MR_Box) (FieldName_28)), &conv0_ExistingDefns_40);
        if (succeeded)
        {
          ExistingDefns_40 = ((MR_Word) (conv0_ExistingDefns_40));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          TypeCtorInfo_31_52 = (MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0);
          {
            Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_45, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_5[0]));
            MR_hl_field(0, Var_45, 1) = ((MR_Box) (hlds__make_hlds__add_type__add_ctor_field_names_9_p_0_1));
            MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_45, 3) = ((MR_Box) (FieldDefn_30));
          }
          succeeded = mercury__one_or_more__find_first_match_3_p_0(TypeCtorInfo_31_52, Var_45, ExistingDefns_40, &conv1__ConflictingDefn_41);
          if (succeeded)
            succeeded = MR_TRUE;
        }
        if (succeeded)
          STATE_VARIABLE_FieldNameTable_1_34 = STATE_VARIABLE_FieldNameTable_0_8;
        else
        {
          MR_String UnqualFieldName_42;
          MR_Word STATE_VARIABLE_FieldNameTable_1_47;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Box conv3_STATE_VARIABLE_FieldNameTable_1_34;

          UnqualFieldName_42 = mdbcomp__sym_name__unqualify_name_1_f_0(FieldName_28);
          switch (NeedQual_2) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Var_46;

                {
                  Var_46 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_46, 0) = ((MR_Box) (UnqualFieldName_42));
                }
                mercury__one_or_more_map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0), ((MR_Box) (Var_46)), ((MR_Box) (FieldDefn_30)), STATE_VARIABLE_FieldNameTable_0_8, &STATE_VARIABLE_FieldNameTable_1_47);
              }
              break;
            case (MR_Integer) 0:
              STATE_VARIABLE_FieldNameTable_1_47 = STATE_VARIABLE_FieldNameTable_0_8;
              break;
          }
          {
            Var_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_48, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_6[0]));
            MR_hl_field(0, Var_48, 1) = ((MR_Box) (hlds__make_hlds__add_type__add_ctor_field_names_9_p_0_2));
            MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_48, 3) = ((MR_Box) (UnqualFieldName_42));
            MR_hl_field(0, Var_48, 4) = ((MR_Box) (FieldDefn_30));
          }
          {
            Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_49, 0) = ((MR_Box) (FieldModule_39));
            MR_hl_field(1, Var_49, 1) = ((MR_Box) (PartialQuals_3));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_2[0]), Var_48, Var_49, ((MR_Box) (STATE_VARIABLE_FieldNameTable_1_47)), &conv3_STATE_VARIABLE_FieldNameTable_1_34);
          STATE_VARIABLE_FieldNameTable_1_34 = ((MR_Word) (conv3_STATE_VARIABLE_FieldNameTable_1_34));
        }
      }
      Var_35 = (MR_Integer) ((MR_Unsigned) FieldNumber_7 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = MaybeCtorFieldNames_20;
      next_value_of_FieldNumber_7 = Var_35;
      next_value_of_STATE_VARIABLE_FieldNameTable_0_8 = STATE_VARIABLE_FieldNameTable_1_34;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      FieldNumber_7 = next_value_of_FieldNumber_7;
      STATE_VARIABLE_FieldNameTable_0_8 = next_value_of_STATE_VARIABLE_FieldNameTable_0_8;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_11_p_0(
  MR_Word TypeStatus0_12,
  MR_Word NeedQual_13,
  MR_Word ItemTypeDefnInfo_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_41,
  MR_Word * STATE_VARIABLE_ModuleInfo_42,
  MR_Word STATE_VARIABLE_InvalidTypeSpecs_0_43,
  MR_Word * STATE_VARIABLE_InvalidTypeSpecs_44,
  MR_Word STATE_VARIABLE_ErrSpecs_0_45,
  MR_Word * STATE_VARIABLE_ErrSpecs_46,
  MR_Word STATE_VARIABLE_WarnSpecs_0_47,
  MR_Word * STATE_VARIABLE_WarnSpecs_48)
{
  MR_bool succeeded;
  MR_Word SymName_19 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefnInfo_14, 0))));
  MR_Word TypeParams_20 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefnInfo_14, 1))));
  MR_Word ParseTreeTypeDefn_21 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefnInfo_14, 2))));
  MR_Word TVarSet_22 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefnInfo_14, 3))));
  MR_Word Context_23 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefnInfo_14, 4))));
  MR_Integer Arity_25;
  MR_Word TypeCtor_26;
  MR_Word Body_27;
  MR_Word TypeStatus_30;
  MR_Word KindMap_31;
  MR_Word HLDSTypeDefn0_32;
  MR_Word STATE_VARIABLE_ModuleInfo_1_49;

  mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), TypeParams_20, &Arity_25);
  {
    TypeCtor_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_26, 0) = ((MR_Box) (SymName_19));
    MR_hl_field(0, TypeCtor_26, 1) = ((MR_Box) (Arity_25));
  }
  hlds__make_hlds__add_type__convert_type_defn_to_hlds_5_p_0(ParseTreeTypeDefn_21, TypeCtor_26, &Body_27, STATE_VARIABLE_ModuleInfo_0_41, &STATE_VARIABLE_ModuleInfo_1_49);
  if (((MR_tag((MR_Word) Body_27)) == (MR_Integer) 0))
  {
    MR_String Var_50;

    Var_50 = mercury__term_context__context_file_1_f_0(Context_23);
    succeeded = mercury__string__suffix_2_p_0(Var_50, (MR_String) ".int2");
  }
  else
  if (((((MR_tag((MR_Word) Body_27)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Body_27, 0)))) == (MR_Integer) 1))))
    succeeded = MR_TRUE;
  else
    succeeded = MR_FALSE;
  if (succeeded)
    hlds__status__type_make_status_abstract_2_p_0(TypeStatus0_12, &TypeStatus_30);
  else
    TypeStatus_30 = TypeStatus0_12;
  mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0), &KindMap_31);
  hlds__hlds_data__create_hlds_type_defn_10_p_0(TVarSet_22, TypeParams_20, KindMap_31, Body_27, (MR_Integer) 0, TypeStatus_30, NeedQual_13, (MR_Word) ((MR_Unsigned) 0U), Context_23, &HLDSTypeDefn0_32);
  switch (MR_tag((MR_Word) ParseTreeTypeDefn_21)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        hlds__make_hlds__add_type__module_add_type_defn_mercury_11_p_0(TypeStatus_30, TypeCtor_26, TypeParams_20, ParseTreeTypeDefn_21, Body_27, HLDSTypeDefn0_32, Context_23, STATE_VARIABLE_ModuleInfo_1_49, STATE_VARIABLE_ModuleInfo_42, STATE_VARIABLE_InvalidTypeSpecs_0_43, STATE_VARIABLE_InvalidTypeSpecs_44);
        *STATE_VARIABLE_ErrSpecs_46 = STATE_VARIABLE_ErrSpecs_0_45;
        *STATE_VARIABLE_WarnSpecs_48 = STATE_VARIABLE_WarnSpecs_0_47;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_59;
        MR_Word Var_60;

        Var_59 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_30);
        succeeded = (Var_59 == (MR_Integer) 1);
        if (succeeded)
        {
          Var_60 = hlds__status__type_status_defined_in_impl_section_1_f_0(TypeStatus_30);
          succeeded = (Var_60 == (MR_Integer) 0);
        }
        if (succeeded)
        {
          MR_Word SolverPieces_38;
          MR_Word SolverSpec_39;
          MR_Word Var_68;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_Word Var_71;
          MR_Word Var_73;
          MR_Word Var_74;

          {
            Var_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_71, 0) = ((MR_Box) ((MR_Unsigned) 21U));
            MR_hl_field(3, Var_71, 1) = ((MR_Box) (TypeCtor_26));
          }
          {
            Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
            MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_69 = parse_tree__error_spec__color_as_subject_1_f_0(Var_70);
          Var_74 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[11])));
          Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_74, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[14])));
          Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_69, Var_73);
          SolverPieces_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[9])), Var_68);
          {
            SolverSpec_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, SolverSpec_39, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.module_add_type_defn\'/11"));
            MR_hl_field(0, SolverSpec_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, SolverSpec_39, 2) = ((MR_Box) ((MR_Unsigned) 48U));
            MR_hl_field(0, SolverSpec_39, 3) = ((MR_Box) (Context_23));
            MR_hl_field(0, SolverSpec_39, 4) = ((MR_Box) (SolverPieces_38));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_ErrSpecs_46 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (SolverSpec_39));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_45));
          }
        }
        else
          *STATE_VARIABLE_ErrSpecs_46 = STATE_VARIABLE_ErrSpecs_0_45;
        hlds__make_hlds__add_type__module_add_type_defn_mercury_11_p_0(TypeStatus_30, TypeCtor_26, TypeParams_20, ParseTreeTypeDefn_21, Body_27, HLDSTypeDefn0_32, Context_23, STATE_VARIABLE_ModuleInfo_1_49, STATE_VARIABLE_ModuleInfo_42, STATE_VARIABLE_InvalidTypeSpecs_0_43, STATE_VARIABLE_InvalidTypeSpecs_44);
        *STATE_VARIABLE_WarnSpecs_48 = STATE_VARIABLE_WarnSpecs_0_47;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ParseTreeTypeDefn_21, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            hlds__make_hlds__add_type__module_add_type_defn_mercury_11_p_0(TypeStatus_30, TypeCtor_26, TypeParams_20, ParseTreeTypeDefn_21, Body_27, HLDSTypeDefn0_32, Context_23, STATE_VARIABLE_ModuleInfo_1_49, STATE_VARIABLE_ModuleInfo_42, STATE_VARIABLE_InvalidTypeSpecs_0_43, STATE_VARIABLE_InvalidTypeSpecs_44);
            *STATE_VARIABLE_ErrSpecs_46 = STATE_VARIABLE_ErrSpecs_0_45;
            *STATE_VARIABLE_WarnSpecs_48 = STATE_VARIABLE_WarnSpecs_0_47;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeTable0_91;
            MR_Word TypeTable_95;
            MR_Word OldDefn_92;

            hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_1_49, &TypeTable0_91);
            succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable0_91, TypeCtor_26, &OldDefn_92);
            if (succeeded)
            {
              MR_Word _TypeStatus_93;
              MR_Word TypeDefn_94;
              MR_Word STATE_VARIABLE_InvalidTypeSpecs_1_96;
              MR_Word OldTypeStatus_97;

              hlds__make_hlds__add_type__check_for_duplicate_type_declaration_8_p_0(TypeCtor_26, OldDefn_92, TypeStatus_30, Context_23, STATE_VARIABLE_InvalidTypeSpecs_0_43, &STATE_VARIABLE_InvalidTypeSpecs_1_96, STATE_VARIABLE_WarnSpecs_0_47, STATE_VARIABLE_WarnSpecs_48);
              hlds__hlds_data__get_type_defn_status_2_p_0(OldDefn_92, &OldTypeStatus_97);
              hlds__status__type_combine_status_3_p_0(TypeStatus_30, OldTypeStatus_97, &_TypeStatus_93);
              hlds__hlds_data__set_type_defn_status_3_p_0(_TypeStatus_93, HLDSTypeDefn0_32, &TypeDefn_94);
              hlds__make_hlds__add_type__check_for_inconsistent_solver_nosolver_type_6_p_0(TypeCtor_26, OldDefn_92, Body_27, Context_23, STATE_VARIABLE_InvalidTypeSpecs_1_96, STATE_VARIABLE_InvalidTypeSpecs_44);
              hlds__hlds_data__replace_type_ctor_defn_4_p_0(TypeCtor_26, TypeDefn_94, TypeTable0_91, &TypeTable_95);
            }
            else
            {
              hlds__hlds_data__add_type_ctor_defn_4_p_0(TypeCtor_26, HLDSTypeDefn0_32, TypeTable0_91, &TypeTable_95);
              *STATE_VARIABLE_WarnSpecs_48 = STATE_VARIABLE_WarnSpecs_0_47;
              *STATE_VARIABLE_InvalidTypeSpecs_44 = STATE_VARIABLE_InvalidTypeSpecs_0_43;
            }
            hlds__hlds_module__module_info_set_type_table_3_p_0(TypeTable_95, STATE_VARIABLE_ModuleInfo_1_49, STATE_VARIABLE_ModuleInfo_42);
            *STATE_VARIABLE_ErrSpecs_46 = STATE_VARIABLE_ErrSpecs_0_45;
          }
          break;
        case (MR_Integer) 2:
          {
            hlds__make_hlds__add_type__module_add_type_defn_foreign_10_p_0(TypeStatus0_12, TypeStatus_30, TypeCtor_26, Body_27, HLDSTypeDefn0_32, Context_23, STATE_VARIABLE_ModuleInfo_1_49, STATE_VARIABLE_ModuleInfo_42, STATE_VARIABLE_InvalidTypeSpecs_0_43, STATE_VARIABLE_InvalidTypeSpecs_44);
            *STATE_VARIABLE_ErrSpecs_46 = STATE_VARIABLE_ErrSpecs_0_45;
            *STATE_VARIABLE_WarnSpecs_48 = STATE_VARIABLE_WarnSpecs_0_47;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__convert_type_defn_to_hlds_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_3;

  hlds__hlds_data__compare_ctors_by_name_arity_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
}

static void MR_CALL 
hlds__make_hlds__add_type__convert_type_defn_to_hlds_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  hlds__hlds_data__compare_ctors_by_name_arity_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
hlds__make_hlds__add_type__convert_type_defn_to_hlds_5_p_0(
  MR_Word TypeDefn_6,
  MR_Word TypeCtor_7,
  MR_Word * HLDSBody_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * STATE_VARIABLE_ModuleInfo_40)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) TypeDefn_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word DetailsDu_10 = (MR_Word) ((MR_Word) (TypeDefn_6));
        MR_Word Ctors_11 = ((MR_Word) ((MR_hl_field(0, DetailsDu_10, 0))));
        MR_Word MaybeCanon_12 = ((MR_Word) ((MR_hl_field(0, DetailsDu_10, 1))));
        MR_Word MaybeDirectArgCtors_13 = ((MR_Word) ((MR_hl_field(0, DetailsDu_10, 2))));
        MR_Word AlphaSortedCtors_17;
        MR_Word TypeBodyDu_18;

        mercury__one_or_more__sort_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_2[4]), Ctors_11, &AlphaSortedCtors_17);
        {
          TypeBodyDu_18 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeBodyDu_18, 0) = ((MR_Box) (Ctors_11));
          MR_hl_field(0, TypeBodyDu_18, 1) = ((MR_Box) (AlphaSortedCtors_17));
          MR_hl_field(0, TypeBodyDu_18, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, TypeBodyDu_18, 3) = ((MR_Box) (MaybeCanon_12));
          MR_hl_field(0, TypeBodyDu_18, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, TypeBodyDu_18, 5) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *HLDSBody_8 = (MR_Word) ((MR_Word) (TypeBodyDu_18));
        if ((MaybeDirectArgCtors_13 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_ModuleInfo_40 = STATE_VARIABLE_ModuleInfo_0_39;
        else
        {
          MR_Word DirectArgCtors_19 = ((MR_Word) ((MR_hl_field(1, MaybeDirectArgCtors_13, 0))));
          MR_Word TypeRepnDec0_20;
          MR_Word DirectArgMap0_21;
          MR_Word OldDirectArgCtors_22;
          MR_Box conv1_OldDirectArgCtors_22;

          hlds__hlds_module__module_info_get_type_repn_dec_2_p_0(STATE_VARIABLE_ModuleInfo_0_39, &TypeRepnDec0_20);
          DirectArgMap0_21 = ((MR_Word) ((MR_hl_field(0, TypeRepnDec0_20, 1))));
          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[1]), DirectArgMap0_21, ((MR_Box) (TypeCtor_7)), &conv1_OldDirectArgCtors_22);
          if (succeeded)
          {
            OldDirectArgCtors_22 = ((MR_Word) (conv1_OldDirectArgCtors_22));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[1]), ((MR_Box) (DirectArgCtors_19)), ((MR_Box) (OldDirectArgCtors_22)));
            if (!(succeeded))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_type.convert_type_defn_to_hlds\'/5", (MR_String) "different DirectArgCtors for same TypeCtor");
                return;
              }
            *STATE_VARIABLE_ModuleInfo_40 = STATE_VARIABLE_ModuleInfo_0_39;
          }
          else
          {
            MR_Word DirectArgMap_23;
            MR_Word TypeRepnDec_24;
            MR_Word Var_68;
            MR_Word Var_70;
            MR_Word Var_71;

            mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[1]), ((MR_Box) (TypeCtor_7)), ((MR_Box) (DirectArgCtors_19)), DirectArgMap0_21, &DirectArgMap_23);
            Var_68 = ((MR_Word) ((MR_hl_field(0, TypeRepnDec0_20, 0))));
            Var_70 = ((MR_Word) ((MR_hl_field(0, TypeRepnDec0_20, 2))));
            Var_71 = ((MR_Word) ((MR_hl_field(0, TypeRepnDec0_20, 3))));
            {
              TypeRepnDec_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeRepnDec_24, 0) = ((MR_Box) (Var_68));
              MR_hl_field(0, TypeRepnDec_24, 1) = ((MR_Box) (DirectArgMap_23));
              MR_hl_field(0, TypeRepnDec_24, 2) = ((MR_Box) (Var_70));
              MR_hl_field(0, TypeRepnDec_24, 3) = ((MR_Box) (Var_71));
            }
            hlds__hlds_module__module_info_set_type_repn_dec_3_p_0(TypeRepnDec_24, STATE_VARIABLE_ModuleInfo_0_39, STATE_VARIABLE_ModuleInfo_40);
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DetailsSub_25 = (MR_Word) (MR_body((MR_Word) (TypeDefn_6), (MR_Integer) 1));
        MR_Word SuperType_26 = ((MR_Word) ((MR_hl_field(0, DetailsSub_25, 0))));
        MR_Word Ctors_56 = ((MR_Word) ((MR_hl_field(0, DetailsSub_25, 1))));
        MR_Word MaybeSubtype_58;
        MR_Word AlphaSortedCtors_61;
        MR_Word TypeBodyDu_62;

        {
          MaybeSubtype_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeSubtype_58, 0) = ((MR_Box) (SuperType_26));
        }
        mercury__one_or_more__sort_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_2[5]), Ctors_56, &AlphaSortedCtors_61);
        {
          TypeBodyDu_62 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeBodyDu_62, 0) = ((MR_Box) (Ctors_56));
          MR_hl_field(0, TypeBodyDu_62, 1) = ((MR_Box) (AlphaSortedCtors_61));
          MR_hl_field(0, TypeBodyDu_62, 2) = ((MR_Box) (MaybeSubtype_58));
          MR_hl_field(0, TypeBodyDu_62, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, TypeBodyDu_62, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, TypeBodyDu_62, 5) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *HLDSBody_8 = (MR_Word) ((MR_Word) (TypeBodyDu_62));
        *STATE_VARIABLE_ModuleInfo_40 = STATE_VARIABLE_ModuleInfo_0_39;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word DetailsSolver_28 = (MR_Word) (MR_body((MR_Word) (TypeDefn_6), (MR_Integer) 2));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HLDSBody_8 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, base, 1) = ((MR_Box) (DetailsSolver_28));
        }
        *STATE_VARIABLE_ModuleInfo_40 = STATE_VARIABLE_ModuleInfo_0_39;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TypeDefn_6, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word EqvType_27;
            MR_Word Var_46 = ((MR_Word) ((MR_hl_field(3, TypeDefn_6, 1))));

            EqvType_27 = (MR_Word) (Var_46);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *HLDSBody_8 = base;
              MR_hl_field(2, base, 0) = ((MR_Box) (EqvType_27));
            }
            *STATE_VARIABLE_ModuleInfo_40 = STATE_VARIABLE_ModuleInfo_0_39;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word DetailsAbstract_29 = ((MR_Word) ((MR_hl_field(3, TypeDefn_6, 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HLDSBody_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = ((MR_Box) (DetailsAbstract_29));
            }
            *STATE_VARIABLE_ModuleInfo_40 = STATE_VARIABLE_ModuleInfo_0_39;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word DetailsForeign_30 = ((MR_Word) ((MR_hl_field(3, TypeDefn_6, 1))));
            MR_Word ForeignType_31 = ((MR_Word) ((MR_hl_field(0, DetailsForeign_30, 0))));
            MR_Word MaybeUserEqComp_32 = ((MR_Word) ((MR_hl_field(0, DetailsForeign_30, 1))));
            MR_Word Assertions_33 = ((MR_Word) ((MR_hl_field(0, DetailsForeign_30, 2))));
            MR_Word Body_36;

            switch (MR_tag((MR_Word) ForeignType_31)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word CForeignType_34 = ((MR_Word) ((MR_hl_field(0, ForeignType_31, 0))));
                  MR_Word Data_35;
                  MR_Word Var_47;

                  {
                    Data_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Data_35, 0) = ((MR_Box) (CForeignType_34));
                    MR_hl_field(0, Data_35, 1) = ((MR_Box) (MaybeUserEqComp_32));
                    MR_hl_field(0, Data_35, 2) = ((MR_Box) (Assertions_33));
                  }
                  {
                    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_47, 0) = ((MR_Box) (Data_35));
                  }
                  {
                    Body_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Body_36, 0) = ((MR_Box) (Var_47));
                    MR_hl_field(0, Body_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, Body_36, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word JavaForeignType_37 = ((MR_Word) ((MR_hl_field(1, ForeignType_31, 0))));
                  MR_Word Var_51;
                  MR_Word Data_63;

                  {
                    Data_63 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Data_63, 0) = ((MR_Box) (JavaForeignType_37));
                    MR_hl_field(0, Data_63, 1) = ((MR_Box) (MaybeUserEqComp_32));
                    MR_hl_field(0, Data_63, 2) = ((MR_Box) (Assertions_33));
                  }
                  {
                    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_51, 0) = ((MR_Box) (Data_63));
                  }
                  {
                    Body_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Body_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, Body_36, 1) = ((MR_Box) (Var_51));
                    MR_hl_field(0, Body_36, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word CSharpForeignType_38 = ((MR_Word) ((MR_hl_field(2, ForeignType_31, 0))));
                  MR_Word Var_55;
                  MR_Word Data_64;

                  {
                    Data_64 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Data_64, 0) = ((MR_Box) (CSharpForeignType_38));
                    MR_hl_field(0, Data_64, 1) = ((MR_Box) (MaybeUserEqComp_32));
                    MR_hl_field(0, Data_64, 2) = ((MR_Box) (Assertions_33));
                  }
                  {
                    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_55, 0) = ((MR_Box) (Data_64));
                  }
                  {
                    Body_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Body_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, Body_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, Body_36, 2) = ((MR_Box) (Var_55));
                  }
                }
                break;
            }
            *HLDSBody_8 = (MR_Word) (MR_mkword(1, (MR_Word) (Body_36)));
            *STATE_VARIABLE_ModuleInfo_40 = STATE_VARIABLE_ModuleInfo_0_39;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_foreign_10_p_0(
  MR_Word TypeStatus0_11,
  MR_Word TypeStatus1_12,
  MR_Word TypeCtor_13,
  MR_Word Body_14,
  MR_Word TypeDefn0_15,
  MR_Word Context_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35,
  MR_Word STATE_VARIABLE_InvalidTypeSpecs_0_36,
  MR_Word * STATE_VARIABLE_InvalidTypeSpecs_37)
{
  MR_bool succeeded;
  MR_Word TypeTable0_19;
  MR_Word OldDefn_20;

  hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_34, &TypeTable0_19);
  succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable0_19, TypeCtor_13, &OldDefn_20);
  if (succeeded)
  {
    MR_Word TypeStatus_21;
    MR_Word TypeDefn1_22;
    MR_Word OldTypeStatus_23;
    MR_Word OldBody_24;
    MR_Word OldContext_25;
    MR_Word STATE_VARIABLE_InvalidTypeSpecs_1_38;
    MR_Word OldTypeStatus_80;

    hlds__hlds_data__get_type_defn_status_2_p_0(OldDefn_20, &OldTypeStatus_80);
    hlds__status__type_combine_status_3_p_0(TypeStatus1_12, OldTypeStatus_80, &TypeStatus_21);
    hlds__hlds_data__set_type_defn_status_3_p_0(TypeStatus_21, TypeDefn0_15, &TypeDefn1_22);
    hlds__make_hlds__add_type__check_for_inconsistent_solver_nosolver_type_6_p_0(TypeCtor_13, OldDefn_20, Body_14, Context_16, STATE_VARIABLE_InvalidTypeSpecs_0_36, &STATE_VARIABLE_InvalidTypeSpecs_1_38);
    hlds__hlds_data__get_type_defn_status_2_p_0(OldDefn_20, &OldTypeStatus_23);
    hlds__hlds_data__get_type_defn_body_2_p_0(OldDefn_20, &OldBody_24);
    hlds__hlds_data__get_type_defn_context_2_p_0(OldDefn_20, &OldContext_25);
    succeeded = ((((MR_tag((MR_Word) OldBody_24)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, OldBody_24, 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      MR_Word TypeDefn_27;
      MR_Word TypeTable_28;

      hlds__make_hlds__add_type__check_for_inconsistent_foreign_type_visibility_10_p_0(TypeCtor_13, (MR_Integer) 0, OldTypeStatus_23, OldContext_25, TypeStatus0_11, Context_16, TypeDefn1_22, &TypeDefn_27, STATE_VARIABLE_InvalidTypeSpecs_1_38, STATE_VARIABLE_InvalidTypeSpecs_37);
      hlds__hlds_data__replace_type_ctor_defn_4_p_0(TypeCtor_13, TypeDefn_27, TypeTable0_19, &TypeTable_28);
      hlds__hlds_module__module_info_set_type_table_3_p_0(TypeTable_28, STATE_VARIABLE_ModuleInfo_0_34, STATE_VARIABLE_ModuleInfo_35);
    }
    else
    {
      MR_Word Globals_29;
      MR_Word MergedBody_30;

      hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_34, &Globals_29);
      succeeded = hlds__make_hlds__add_type__merge_maybe_foreign_type_bodies_4_p_0(Globals_29, OldBody_24, Body_14, &MergedBody_30);
      if (succeeded)
      {
        MR_Word TypeDefn2_31;
        MR_Word TypeDefn_77;
        MR_Word TypeTable_78;

        hlds__hlds_data__set_type_defn_body_3_p_0(MergedBody_30, TypeDefn1_22, &TypeDefn2_31);
        hlds__make_hlds__add_type__check_for_inconsistent_foreign_type_visibility_10_p_0(TypeCtor_13, (MR_Integer) 1, OldTypeStatus_23, OldContext_25, TypeStatus1_12, Context_16, TypeDefn2_31, &TypeDefn_77, STATE_VARIABLE_InvalidTypeSpecs_1_38, STATE_VARIABLE_InvalidTypeSpecs_37);
        hlds__hlds_data__replace_type_ctor_defn_4_p_0(TypeCtor_13, TypeDefn_77, TypeTable0_19, &TypeTable_78);
        hlds__hlds_module__module_info_set_type_table_3_p_0(TypeTable_78, STATE_VARIABLE_ModuleInfo_0_34, STATE_VARIABLE_ModuleInfo_35);
      }
      else
      {
        MR_Word Var_85 = (MR_Word) (TypeStatus_21);

        succeeded = (Var_85 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          *STATE_VARIABLE_InvalidTypeSpecs_37 = STATE_VARIABLE_InvalidTypeSpecs_1_38;
        else
        {
          MR_Word SymName_81 = ((MR_Word) ((MR_hl_field(0, TypeCtor_13, 0))));
          MR_Integer Arity_82 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_13, 1))));
          MR_Word OldContext_83;
          MR_Word Spec_84;
          MR_Word Var_87;

          hlds__hlds_data__get_type_defn_context_2_p_0(OldDefn_20, &OldContext_83);
          Var_87 = (MR_Word) (Arity_82);
          hlds__make_hlds_error__report_multiply_defined_7_p_0((MR_String) "type", SymName_81, Var_87, Context_16, OldContext_83, (MR_Word) ((MR_Unsigned) 0U), &Spec_84);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_InvalidTypeSpecs_37 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_84));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_InvalidTypeSpecs_1_38));
          }
        }
        *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
      }
    }
  }
  else
  {
    MR_Word ForeignDeclPieces_32;
    MR_Word ForeignDeclSpec_33;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;

    Var_57 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[46])));
    {
      Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 21U));
      MR_hl_field(3, Var_65, 1) = ((MR_Box) (TypeCtor_13));
    }
    {
      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
      MR_hl_field(1, Var_64, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[24])));
    }
    Var_63 = parse_tree__error_spec__color_as_subject_1_f_0(Var_64);
    Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_63, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[12])));
    Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_57, Var_62);
    ForeignDeclPieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[44])), Var_56);
    {
      ForeignDeclSpec_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ForeignDeclSpec_33, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.module_add_type_defn_foreign\'/10"));
      MR_hl_field(0, ForeignDeclSpec_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, ForeignDeclSpec_33, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(0, ForeignDeclSpec_33, 3) = ((MR_Box) (Context_16));
      MR_hl_field(0, ForeignDeclSpec_33, 4) = ((MR_Box) (ForeignDeclPieces_32));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_InvalidTypeSpecs_37 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ForeignDeclSpec_33));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_InvalidTypeSpecs_0_36));
    }
    *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_inconsistent_foreign_type_visibility_10_p_0(
  MR_Word TypeCtor_11,
  MR_Word OldIsAbstract_12,
  MR_Word OldStatus_13,
  MR_Word OldContext_14,
  MR_Word NewStatus_15,
  MR_Word NewContext_16,
  MR_Word STATE_VARIABLE_TypeDefn_0_24,
  MR_Word * STATE_VARIABLE_TypeDefn_25,
  MR_Word STATE_VARIABLE_InvalidTypeSpecs_0_26,
  MR_Word * STATE_VARIABLE_InvalidTypeSpecs_27)
{
  MR_bool succeeded;

  switch (OldIsAbstract_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_28;
        MR_Word Var_29;

        Var_28 = hlds__status__type_status_is_exported_to_non_submodules_1_f_0(OldStatus_13);
        succeeded = (Var_28 == (MR_Integer) 0);
        if (succeeded)
        {
          Var_29 = hlds__status__type_status_is_exported_to_non_submodules_1_f_0(NewStatus_15);
          succeeded = (Var_29 == (MR_Integer) 1);
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_81 = (MR_Word) (OldStatus_13);

        succeeded = (Var_81 == (MR_Word) ((MR_Unsigned) 20U));
        if (succeeded)
        {
          MR_Word Var_82;

          Var_82 = hlds__status__type_status_is_exported_to_non_submodules_1_f_0(NewStatus_15);
          succeeded = (Var_82 == (MR_Integer) 0);
        }
        else
        {
          MR_Word Var_83 = (MR_Word) (OldStatus_13);

          succeeded = (Var_83 == (MR_Word) ((MR_Unsigned) 12U));
          if (succeeded)
          {
            MR_Word Var_84 = (MR_Word) (NewStatus_15);

            succeeded = (Var_84 == (MR_Word) ((MR_Unsigned) 12U));
          }
          else
          {
            MR_Word Var_85;
            MR_Word Var_86;

            Var_85 = hlds__status__type_status_is_exported_to_non_submodules_1_f_0(OldStatus_13);
            succeeded = (Var_85 == (MR_Integer) 0);
            if (succeeded)
            {
              Var_86 = hlds__status__type_status_is_exported_to_non_submodules_1_f_0(NewStatus_15);
              succeeded = (Var_86 == (MR_Integer) 0);
            }
          }
        }
        succeeded = !(succeeded);
      }
      break;
  }
  if (succeeded)
  {
    MR_Word UTC_19;
    MR_Word Pieces_20;
    MR_Word CmpRes_21;
    MR_Word Context_22;
    MR_Word Spec_23;
    MR_Word Var_77;

    {
      UTC_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, UTC_19, 0) = ((MR_Box) ((MR_Unsigned) 21U));
      MR_hl_field(3, UTC_19, 1) = ((MR_Box) (TypeCtor_11));
    }
    switch (OldIsAbstract_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_34;
          MR_Word Var_35;
          MR_Word Var_36;
          MR_Word Var_39;
          MR_Word Var_41;
          MR_Word Var_42;

          {
            Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_39, 0) = ((MR_Box) (UTC_19));
            MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_36, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[93])));
            MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_39));
          }
          Var_35 = parse_tree__error_spec__color_as_subject_1_f_0(Var_36);
          Var_42 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[95])));
          Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_42, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[97])));
          Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_35, Var_41);
          Pieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[92])), Var_34);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_62;
          MR_Word Var_64;
          MR_Word Var_65;

          {
            Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_62, 0) = ((MR_Box) (UTC_19));
            MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_59, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[93])));
            MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_62));
          }
          Var_58 = parse_tree__error_spec__color_as_subject_1_f_0(Var_59);
          Var_65 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[101])));
          Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_65, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[12])));
          Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_58, Var_64);
          Pieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[99])), Var_57);
        }
        break;
    }
    mercury__term_context____Compare____term_context_0_0(&CmpRes_21, OldContext_14, NewContext_16);
    switch (CmpRes_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        Context_22 = NewContext_16;
        break;
      case (MR_Integer) 2:
        Context_22 = OldContext_14;
        break;
    }
    {
      Spec_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_for_inconsistent_foreign_type_visibility\'/10"));
      MR_hl_field(0, Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(0, Spec_23, 3) = ((MR_Box) (Context_22));
      MR_hl_field(0, Spec_23, 4) = ((MR_Box) (Pieces_20));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_InvalidTypeSpecs_27 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_23));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_InvalidTypeSpecs_0_26));
    }
    {
      Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_77, 0) = ((MR_Box) (Spec_23));
    }
    hlds__hlds_data__set_type_defn_prev_errors_3_p_0(Var_77, STATE_VARIABLE_TypeDefn_0_24, STATE_VARIABLE_TypeDefn_25);
  }
  else
  {
    *STATE_VARIABLE_InvalidTypeSpecs_27 = STATE_VARIABLE_InvalidTypeSpecs_0_26;
    *STATE_VARIABLE_TypeDefn_25 = STATE_VARIABLE_TypeDefn_0_24;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_maybe_foreign_type_bodies_4_p_0(
  MR_Word Globals_5,
  MR_Word BodyA_6,
  MR_Word BodyB_7,
  MR_Word * Body_8)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) BodyA_6)) == (MR_Integer) 0))
  {
    MR_Word BodyDuA_11 = (MR_Word) ((MR_Word) (BodyA_6));
    MR_Word ForeignTypeBodyB_12;
    MR_Word MaybeSuperTypeB_19;
    MR_Word MaybeForeignTypeBodyB_22;
    MR_Word ForeignTypeBodyB_23;
    MR_Word ForeignTypeBody_24;
    MR_Word Target_25;
    MR_Word OpMode_26;
    MR_Word MaybeCA_43;
    MR_Word MaybeJavaA_44;
    MR_Word MaybeCSharpA_45;
    MR_Word MaybeCB_46;
    MR_Word MaybeJavaB_47;
    MR_Word MaybeCSharpB_48;
    MR_Word MaybeC_49;
    MR_Word MaybeJava_50;
    MR_Word MaybeCSharp_51;
    MR_Word Var_32;
    MR_Word Var_42;
    MR_Word Var_33;
    MR_Word Var_34;

    succeeded = ((MR_tag((MR_Word) BodyB_7)) == (MR_Integer) 1);
    if (succeeded)
    {
      ForeignTypeBodyB_12 = (MR_Word) (MR_body((MR_Word) (BodyB_7), (MR_Integer) 1));
      MaybeSuperTypeB_19 = ((MR_Word) ((MR_hl_field(0, BodyDuA_11, 2))));
      MaybeForeignTypeBodyB_22 = ((MR_Word) ((MR_hl_field(0, BodyDuA_11, 5))));
      succeeded = (MaybeSuperTypeB_19 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        if ((MaybeForeignTypeBodyB_22 == (MR_Word) ((MR_Unsigned) 0U)))
          ForeignTypeBodyB_23 = (MR_Word) (&hlds__make_hlds__add_type_scalar_common_2[2]);
        else
          ForeignTypeBodyB_23 = ((MR_Word) ((MR_hl_field(1, MaybeForeignTypeBodyB_22, 0))));
        MaybeCA_43 = ((MR_Word) ((MR_hl_field(0, ForeignTypeBodyB_12, 0))));
        MaybeJavaA_44 = ((MR_Word) ((MR_hl_field(0, ForeignTypeBodyB_12, 1))));
        MaybeCSharpA_45 = ((MR_Word) ((MR_hl_field(0, ForeignTypeBodyB_12, 2))));
        MaybeCB_46 = ((MR_Word) ((MR_hl_field(0, ForeignTypeBodyB_23, 0))));
        MaybeJavaB_47 = ((MR_Word) ((MR_hl_field(0, ForeignTypeBodyB_23, 1))));
        MaybeCSharpB_48 = ((MR_Word) ((MR_hl_field(0, ForeignTypeBodyB_23, 2))));
        if ((MaybeCA_43 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          if ((MaybeCB_46 == (MR_Word) ((MR_Unsigned) 0U)))
            MaybeC_49 = (MR_Word) ((MR_Unsigned) 0U);
          else
            MaybeC_49 = MaybeCB_46;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (MaybeCB_46 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            MaybeC_49 = MaybeCA_43;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          if ((MaybeJavaA_44 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            if ((MaybeJavaB_47 == (MR_Word) ((MR_Unsigned) 0U)))
              MaybeJava_50 = (MR_Word) ((MR_Unsigned) 0U);
            else
              MaybeJava_50 = MaybeJavaB_47;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (MaybeJavaB_47 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MaybeJava_50 = MaybeJavaA_44;
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
          {
            if ((MaybeCSharpA_45 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              if ((MaybeCSharpB_48 == (MR_Word) ((MR_Unsigned) 0U)))
                MaybeCSharp_51 = (MR_Word) ((MR_Unsigned) 0U);
              else
                MaybeCSharp_51 = MaybeCSharpB_48;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (MaybeCSharpB_48 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                MaybeCSharp_51 = MaybeCSharpA_45;
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
            {
              {
                ForeignTypeBody_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, ForeignTypeBody_24, 0) = ((MR_Box) (MaybeC_49));
                MR_hl_field(0, ForeignTypeBody_24, 1) = ((MR_Box) (MaybeJava_50));
                MR_hl_field(0, ForeignTypeBody_24, 2) = ((MR_Box) (MaybeCSharp_51));
              }
              libs__globals__get_target_2_p_0(Globals_5, &Target_25);
              libs__globals__get_op_mode_2_p_0(Globals_5, &OpMode_26);
              Var_32 = (MR_Integer) 1;
              backend_libs__foreign__have_foreign_type_for_backend_3_p_0(Target_25, ForeignTypeBody_24, &Var_42);
              succeeded = (Var_32 == Var_42);
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_Integer) 3);
                if (succeeded)
                {
                  Var_33 = ((MR_Word) ((MR_hl_field(3, OpMode_26, 0))));
                  succeeded = ((MR_tag((MR_Word) Var_33)) == (MR_Integer) 3);
                  if (succeeded)
                  {
                    Var_34 = ((MR_Word) ((MR_hl_field(3, Var_33, 0))));
                    succeeded = (Var_34 == (MR_Word) ((MR_Unsigned) 0U));
                  }
                }
                succeeded = !(succeeded);
              }
              if (succeeded)
                *Body_8 = (MR_Word) (MR_mkword(1, (MR_Word) (ForeignTypeBody_24)));
              else
              {
                MR_Word TypeBodyDu_28;
                MR_Word Var_35;
                MR_Word Var_36;
                MR_Word Var_37;
                MR_Word Var_38;
                MR_Word Var_39;
                MR_Word Var_40;

                {
                  Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_35, 0) = ((MR_Box) (ForeignTypeBody_24));
                }
                Var_36 = ((MR_Word) ((MR_hl_field(0, BodyDuA_11, 0))));
                Var_37 = ((MR_Word) ((MR_hl_field(0, BodyDuA_11, 1))));
                Var_38 = ((MR_Word) ((MR_hl_field(0, BodyDuA_11, 2))));
                Var_39 = ((MR_Word) ((MR_hl_field(0, BodyDuA_11, 3))));
                Var_40 = ((MR_Word) ((MR_hl_field(0, BodyDuA_11, 4))));
                {
                  TypeBodyDu_28 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, TypeBodyDu_28, 0) = ((MR_Box) (Var_36));
                  MR_hl_field(0, TypeBodyDu_28, 1) = ((MR_Box) (Var_37));
                  MR_hl_field(0, TypeBodyDu_28, 2) = ((MR_Box) (Var_38));
                  MR_hl_field(0, TypeBodyDu_28, 3) = ((MR_Box) (Var_39));
                  MR_hl_field(0, TypeBodyDu_28, 4) = ((MR_Box) (Var_40));
                  MR_hl_field(0, TypeBodyDu_28, 5) = ((MR_Box) (Var_35));
                }
                *Body_8 = (MR_Word) ((MR_Word) (TypeBodyDu_28));
              }
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
  }
  else
  if (((MR_tag((MR_Word) BodyA_6)) == (MR_Integer) 1))
  {
    MR_Word Var_16 = (MR_Word) (MR_body((MR_Word) (BodyA_6), (MR_Integer) 1));

    if (((MR_tag((MR_Word) BodyB_7)) == (MR_Integer) 0))
    {
      MR_Word BodyDuB_10 = (MR_Word) ((MR_Word) (BodyB_7));

      succeeded = hlds__make_hlds__add_type__merge_foreign_and_du_type_bodies_4_p_0(Globals_5, Var_16, BodyDuB_10, Body_8);
    }
    else
    if (((MR_tag((MR_Word) BodyB_7)) == (MR_Integer) 1))
    {
      MR_Word ForeignTypeBody_13;
      MR_Word ForeignTypeBodyB_15 = (MR_Word) (MR_body((MR_Word) (BodyB_7), (MR_Integer) 1));
      MR_Word MaybeCA_61 = ((MR_Word) ((MR_hl_field(0, Var_16, 0))));
      MR_Word MaybeJavaA_62 = ((MR_Word) ((MR_hl_field(0, Var_16, 1))));
      MR_Word MaybeCSharpA_63 = ((MR_Word) ((MR_hl_field(0, Var_16, 2))));
      MR_Word MaybeCB_64 = ((MR_Word) ((MR_hl_field(0, ForeignTypeBodyB_15, 0))));
      MR_Word MaybeJavaB_65 = ((MR_Word) ((MR_hl_field(0, ForeignTypeBodyB_15, 1))));
      MR_Word MaybeCSharpB_66 = ((MR_Word) ((MR_hl_field(0, ForeignTypeBodyB_15, 2))));
      MR_Word MaybeC_67;
      MR_Word MaybeJava_68;
      MR_Word MaybeCSharp_69;

      if ((MaybeCA_61 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        if ((MaybeCB_64 == (MR_Word) ((MR_Unsigned) 0U)))
          MaybeC_67 = (MR_Word) ((MR_Unsigned) 0U);
        else
          MaybeC_67 = MaybeCB_64;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (MaybeCB_64 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          MaybeC_67 = MaybeCA_61;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        if ((MaybeJavaA_62 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          if ((MaybeJavaB_65 == (MR_Word) ((MR_Unsigned) 0U)))
            MaybeJava_68 = (MR_Word) ((MR_Unsigned) 0U);
          else
            MaybeJava_68 = MaybeJavaB_65;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (MaybeJavaB_65 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            MaybeJava_68 = MaybeJavaA_62;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          if ((MaybeCSharpA_63 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            if ((MaybeCSharpB_66 == (MR_Word) ((MR_Unsigned) 0U)))
              MaybeCSharp_69 = (MR_Word) ((MR_Unsigned) 0U);
            else
              MaybeCSharp_69 = MaybeCSharpB_66;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (MaybeCSharpB_66 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MaybeCSharp_69 = MaybeCSharpA_63;
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
          {
            {
              ForeignTypeBody_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ForeignTypeBody_13, 0) = ((MR_Box) (MaybeC_67));
              MR_hl_field(0, ForeignTypeBody_13, 1) = ((MR_Box) (MaybeJava_68));
              MR_hl_field(0, ForeignTypeBody_13, 2) = ((MR_Box) (MaybeCSharp_69));
            }
            *Body_8 = (MR_Word) (MR_mkword(1, (MR_Word) (ForeignTypeBody_13)));
            succeeded = MR_TRUE;
          }
        }
      }
    }
    else
      succeeded = MR_FALSE;
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_and_du_type_bodies_4_p_0(
  MR_Word Globals_5,
  MR_Word ForeignTypeBodyA_6,
  MR_Word TypeBodyDuB_7,
  MR_Word * Body_8)
{
  MR_bool succeeded;
  MR_Word MaybeSuperTypeB_11 = ((MR_Word) ((MR_hl_field(0, TypeBodyDuB_7, 2))));
  MR_Word MaybeForeignTypeBodyB_14 = ((MR_Word) ((MR_hl_field(0, TypeBodyDuB_7, 5))));
  MR_Word ForeignTypeBodyB_15;
  MR_Word ForeignTypeBody_16;
  MR_Word Target_17;
  MR_Word OpMode_18;
  MR_Word MaybeCA_35;
  MR_Word MaybeJavaA_36;
  MR_Word MaybeCSharpA_37;
  MR_Word MaybeCB_38;
  MR_Word MaybeJavaB_39;
  MR_Word MaybeCSharpB_40;
  MR_Word MaybeC_41;
  MR_Word MaybeJava_42;
  MR_Word MaybeCSharp_43;
  MR_Word Var_24;
  MR_Word Var_34;
  MR_Word Var_25;
  MR_Word Var_26;

  succeeded = (MaybeSuperTypeB_11 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    if ((MaybeForeignTypeBodyB_14 == (MR_Word) ((MR_Unsigned) 0U)))
      ForeignTypeBodyB_15 = (MR_Word) (&hlds__make_hlds__add_type_scalar_common_2[2]);
    else
      ForeignTypeBodyB_15 = ((MR_Word) ((MR_hl_field(1, MaybeForeignTypeBodyB_14, 0))));
    MaybeCA_35 = ((MR_Word) ((MR_hl_field(0, ForeignTypeBodyA_6, 0))));
    MaybeJavaA_36 = ((MR_Word) ((MR_hl_field(0, ForeignTypeBodyA_6, 1))));
    MaybeCSharpA_37 = ((MR_Word) ((MR_hl_field(0, ForeignTypeBodyA_6, 2))));
    MaybeCB_38 = ((MR_Word) ((MR_hl_field(0, ForeignTypeBodyB_15, 0))));
    MaybeJavaB_39 = ((MR_Word) ((MR_hl_field(0, ForeignTypeBodyB_15, 1))));
    MaybeCSharpB_40 = ((MR_Word) ((MR_hl_field(0, ForeignTypeBodyB_15, 2))));
    if ((MaybeCA_35 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      if ((MaybeCB_38 == (MR_Word) ((MR_Unsigned) 0U)))
        MaybeC_41 = (MR_Word) ((MR_Unsigned) 0U);
      else
        MaybeC_41 = MaybeCB_38;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (MaybeCB_38 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MaybeC_41 = MaybeCA_35;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      if ((MaybeJavaA_36 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        if ((MaybeJavaB_39 == (MR_Word) ((MR_Unsigned) 0U)))
          MaybeJava_42 = (MR_Word) ((MR_Unsigned) 0U);
        else
          MaybeJava_42 = MaybeJavaB_39;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (MaybeJavaB_39 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          MaybeJava_42 = MaybeJavaA_36;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        if ((MaybeCSharpA_37 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          if ((MaybeCSharpB_40 == (MR_Word) ((MR_Unsigned) 0U)))
            MaybeCSharp_43 = (MR_Word) ((MR_Unsigned) 0U);
          else
            MaybeCSharp_43 = MaybeCSharpB_40;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (MaybeCSharpB_40 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            MaybeCSharp_43 = MaybeCSharpA_37;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          {
            ForeignTypeBody_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ForeignTypeBody_16, 0) = ((MR_Box) (MaybeC_41));
            MR_hl_field(0, ForeignTypeBody_16, 1) = ((MR_Box) (MaybeJava_42));
            MR_hl_field(0, ForeignTypeBody_16, 2) = ((MR_Box) (MaybeCSharp_43));
          }
          libs__globals__get_target_2_p_0(Globals_5, &Target_17);
          libs__globals__get_op_mode_2_p_0(Globals_5, &OpMode_18);
          Var_24 = (MR_Integer) 1;
          backend_libs__foreign__have_foreign_type_for_backend_3_p_0(Target_17, ForeignTypeBody_16, &Var_34);
          succeeded = (Var_24 == Var_34);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) OpMode_18)) == (MR_Integer) 3);
            if (succeeded)
            {
              Var_25 = ((MR_Word) ((MR_hl_field(3, OpMode_18, 0))));
              succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3);
              if (succeeded)
              {
                Var_26 = ((MR_Word) ((MR_hl_field(3, Var_25, 0))));
                succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
            succeeded = !(succeeded);
          }
          if (succeeded)
            *Body_8 = (MR_Word) (MR_mkword(1, (MR_Word) (ForeignTypeBody_16)));
          else
          {
            MR_Word TypeBodyDu_20;
            MR_Word Var_27;
            MR_Word Var_28;
            MR_Word Var_29;
            MR_Word Var_30;
            MR_Word Var_31;
            MR_Word Var_32;

            {
              Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_27, 0) = ((MR_Box) (ForeignTypeBody_16));
            }
            Var_28 = ((MR_Word) ((MR_hl_field(0, TypeBodyDuB_7, 0))));
            Var_29 = ((MR_Word) ((MR_hl_field(0, TypeBodyDuB_7, 1))));
            Var_30 = ((MR_Word) ((MR_hl_field(0, TypeBodyDuB_7, 2))));
            Var_31 = ((MR_Word) ((MR_hl_field(0, TypeBodyDuB_7, 3))));
            Var_32 = ((MR_Word) ((MR_hl_field(0, TypeBodyDuB_7, 4))));
            {
              TypeBodyDu_20 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeBodyDu_20, 0) = ((MR_Box) (Var_28));
              MR_hl_field(0, TypeBodyDu_20, 1) = ((MR_Box) (Var_29));
              MR_hl_field(0, TypeBodyDu_20, 2) = ((MR_Box) (Var_30));
              MR_hl_field(0, TypeBodyDu_20, 3) = ((MR_Box) (Var_31));
              MR_hl_field(0, TypeBodyDu_20, 4) = ((MR_Box) (Var_32));
              MR_hl_field(0, TypeBodyDu_20, 5) = ((MR_Box) (Var_27));
            }
            *Body_8 = (MR_Word) ((MR_Word) (TypeBodyDu_20));
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_mercury_11_p_0(
  MR_Word TypeStatus1_12,
  MR_Word TypeCtor_13,
  MR_Word TypeParams_14,
  MR_Word ParseTreeTypeDefn_15,
  MR_Word Body_16,
  MR_Word TypeDefn0_17,
  MR_Word Context_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_32,
  MR_Word * STATE_VARIABLE_ModuleInfo_33,
  MR_Word STATE_VARIABLE_InvalidTypeSpecs_0_34,
  MR_Word * STATE_VARIABLE_InvalidTypeSpecs_35)
{
  MR_bool succeeded;
  MR_Word TypeTable0_21;
  MR_Word TypeStatus_23;
  MR_Word STATE_VARIABLE_InvalidTypeSpecs_2_37;
  MR_Word OldDefn_22;

  hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_32, &TypeTable0_21);
  succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable0_21, TypeCtor_13, &OldDefn_22);
  if (succeeded)
  {
    MR_Word TypeDefn_24;
    MR_Word STATE_VARIABLE_InvalidTypeSpecs_1_36;
    MR_Word OldTypeStatus_43;
    MR_Word OldDefnBody_25;

    hlds__hlds_data__get_type_defn_status_2_p_0(OldDefn_22, &OldTypeStatus_43);
    hlds__status__type_combine_status_3_p_0(TypeStatus1_12, OldTypeStatus_43, &TypeStatus_23);
    hlds__hlds_data__set_type_defn_status_3_p_0(TypeStatus_23, TypeDefn0_17, &TypeDefn_24);
    hlds__make_hlds__add_type__check_for_inconsistent_solver_nosolver_type_6_p_0(TypeCtor_13, OldDefn_22, Body_16, Context_18, STATE_VARIABLE_InvalidTypeSpecs_0_34, &STATE_VARIABLE_InvalidTypeSpecs_1_36);
    hlds__hlds_data__get_type_defn_body_2_p_0(OldDefn_22, &OldDefnBody_25);
    succeeded = ((((MR_tag((MR_Word) OldDefnBody_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, OldDefnBody_25, 0)))) == (MR_Integer) 1)));
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Word Var_48 = (MR_Word) (TypeStatus_23);

      succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        STATE_VARIABLE_InvalidTypeSpecs_2_37 = STATE_VARIABLE_InvalidTypeSpecs_1_36;
      else
      {
        MR_Word SymName_44 = ((MR_Word) ((MR_hl_field(0, TypeCtor_13, 0))));
        MR_Integer Arity_45 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_13, 1))));
        MR_Word OldContext_46;
        MR_Word Spec_47;
        MR_Word Var_50;

        hlds__hlds_data__get_type_defn_context_2_p_0(OldDefn_22, &OldContext_46);
        Var_50 = (MR_Word) (Arity_45);
        hlds__make_hlds_error__report_multiply_defined_7_p_0((MR_String) "type", SymName_44, Var_50, Context_18, OldContext_46, (MR_Word) ((MR_Unsigned) 0U), &Spec_47);
        {
          STATE_VARIABLE_InvalidTypeSpecs_2_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_InvalidTypeSpecs_2_37, 0) = ((MR_Box) (Spec_47));
          MR_hl_field(1, STATE_VARIABLE_InvalidTypeSpecs_2_37, 1) = ((MR_Box) (STATE_VARIABLE_InvalidTypeSpecs_1_36));
        }
      }
      *STATE_VARIABLE_ModuleInfo_33 = STATE_VARIABLE_ModuleInfo_0_32;
    }
    else
    {
      MR_Word TypeTable_27;

      hlds__hlds_data__replace_type_ctor_defn_4_p_0(TypeCtor_13, TypeDefn_24, TypeTable0_21, &TypeTable_27);
      hlds__hlds_module__module_info_set_type_table_3_p_0(TypeTable_27, STATE_VARIABLE_ModuleInfo_0_32, STATE_VARIABLE_ModuleInfo_33);
      STATE_VARIABLE_InvalidTypeSpecs_2_37 = STATE_VARIABLE_InvalidTypeSpecs_1_36;
    }
  }
  else
  {
    MR_Word TypeTable_42;

    TypeStatus_23 = TypeStatus1_12;
    hlds__hlds_data__add_type_ctor_defn_4_p_0(TypeCtor_13, TypeDefn0_17, TypeTable0_21, &TypeTable_42);
    hlds__hlds_module__module_info_set_type_table_3_p_0(TypeTable_42, STATE_VARIABLE_ModuleInfo_0_32, STATE_VARIABLE_ModuleInfo_33);
    STATE_VARIABLE_InvalidTypeSpecs_2_37 = STATE_VARIABLE_InvalidTypeSpecs_0_34;
  }
  switch (MR_tag((MR_Word) ParseTreeTypeDefn_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word DetailsDu_28 = (MR_Word) ((MR_Word) (ParseTreeTypeDefn_15));
        MR_Word Ctors_52 = ((MR_Word) ((MR_hl_field(0, DetailsDu_28, 0))));
        MR_Word MaybeCanon_53 = ((MR_Word) ((MR_hl_field(0, DetailsDu_28, 1))));
        MR_Word Var_61;

        succeeded = (MaybeCanon_53 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_61 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_23);
          succeeded = (Var_61 == (MR_Integer) 1);
        }
        if (succeeded)
        {
          MR_Word Var_63;
          MR_Word Ctor_56 = ((MR_Word) ((MR_hl_field(0, Ctors_52, 0))));
          MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, Ctors_52, 1))));

          succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_63 = ((MR_Word) ((MR_hl_field(0, Ctor_56, 3))));
            succeeded = (Var_63 == (MR_Word) ((MR_Unsigned) 0U));
          }
          if (succeeded)
          {
            MR_Word MainPieces_57;
            MR_Word DummyMsg_59;
            MR_Word DummySpec_60;
            MR_Word Var_68;
            MR_Word Var_69;
            MR_Word Var_70;
            MR_Word Var_71;
            MR_Word Var_73;
            MR_Word Var_75;
            MR_Word Var_76;
            MR_Word Var_81;
            MR_Word Var_82;
            MR_Word Var_90;

            {
              Var_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_71, 0) = ((MR_Box) ((MR_Unsigned) 21U));
              MR_hl_field(3, Var_71, 1) = ((MR_Box) (TypeCtor_13));
            }
            {
              Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
              MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_63));
            }
            Var_69 = parse_tree__error_spec__color_as_subject_1_f_0(Var_70);
            Var_76 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[56])));
            Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_76, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[12])));
            Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[52])), Var_75);
            Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_69, Var_73);
            MainPieces_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[48])), Var_68);
            {
              Var_82 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_82, 0) = ((MR_Box) (MainPieces_57));
            }
            {
              Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_82));
              MR_hl_field(1, Var_81, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[221])));
            }
            {
              DummyMsg_59 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, DummyMsg_59, 0) = ((MR_Box) (Context_18));
              MR_hl_field(2, DummyMsg_59, 1) = ((MR_Box) (Var_81));
            }
            {
              Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_90, 0) = ((MR_Box) (DummyMsg_59));
              MR_hl_field(1, Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              DummySpec_60 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, DummySpec_60, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_for_invalid_user_defined_unify_compare\'/6"));
              MR_hl_field(2, DummySpec_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(2, DummySpec_60, 2) = ((MR_Box) ((MR_Unsigned) 48U));
              MR_hl_field(2, DummySpec_60, 3) = ((MR_Box) (Var_90));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_InvalidTypeSpecs_35 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (DummySpec_60));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_InvalidTypeSpecs_2_37));
            }
          }
          else
            *STATE_VARIABLE_InvalidTypeSpecs_35 = STATE_VARIABLE_InvalidTypeSpecs_2_37;
        }
        else
          *STATE_VARIABLE_InvalidTypeSpecs_35 = STATE_VARIABLE_InvalidTypeSpecs_2_37;
      }
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_InvalidTypeSpecs_35 = STATE_VARIABLE_InvalidTypeSpecs_2_37;
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_InvalidTypeSpecs_35 = STATE_VARIABLE_InvalidTypeSpecs_2_37;
      break;
    case (MR_Integer) 3:
      {
        MR_Word DetailsEqv_29 = ((MR_Word) ((MR_hl_field(3, ParseTreeTypeDefn_15, 1))));

        hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0(TypeStatus_23, TypeCtor_13, TypeParams_14, DetailsEqv_29, Context_18, STATE_VARIABLE_InvalidTypeSpecs_2_37, STATE_VARIABLE_InvalidTypeSpecs_35);
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_inconsistent_solver_nosolver_type_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word OldDefn_8,
  MR_Word NewBody_9,
  MR_Word NewContext_10,
  MR_Word STATE_VARIABLE_InvalidTypeSpecs_0_32,
  MR_Word * STATE_VARIABLE_InvalidTypeSpecs_33)
{
  MR_bool succeeded;
  MR_Word OldBody_12;
  MR_Word OldIsSolverType_13;
  MR_Word NewIsSolverType_14;

  hlds__hlds_data__get_type_defn_body_2_p_0(OldDefn_8, &OldBody_12);
  switch (MR_tag((MR_Word) OldBody_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      OldIsSolverType_13 = (MR_Integer) 0;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, OldBody_12, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          OldIsSolverType_13 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Details_94 = ((MR_Word) ((MR_hl_field(3, OldBody_12, 1))));

            switch (MR_tag((MR_Word) Details_94)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(Details_94)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    OldIsSolverType_13 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 3:
                    OldIsSolverType_13 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                OldIsSolverType_13 = (MR_Integer) 0;
                break;
            }
          }
          break;
      }
      break;
  }
  switch (MR_tag((MR_Word) NewBody_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      NewIsSolverType_14 = (MR_Integer) 0;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, NewBody_9, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          NewIsSolverType_14 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Details_101 = ((MR_Word) ((MR_hl_field(3, NewBody_9, 1))));

            switch (MR_tag((MR_Word) Details_101)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(Details_101)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    NewIsSolverType_14 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 3:
                    NewIsSolverType_14 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                NewIsSolverType_14 = (MR_Integer) 0;
                break;
            }
          }
          break;
      }
      break;
  }
  succeeded = (OldIsSolverType_13 == NewIsSolverType_14);
  if (succeeded)
    *STATE_VARIABLE_InvalidTypeSpecs_33 = STATE_VARIABLE_InvalidTypeSpecs_0_32;
  else
  {
    MR_Word OldContext_15;
    MR_String ThisIsOrIsnt_16;
    MR_String OldIsOrIsnt_17;
    MR_String ThisDeclOrDefn_19;
    MR_String OldDeclOrDefn_21;
    MR_Word MainPieces_27;
    MR_Word OldPieces_28;
    MR_Word MainMsg_29;
    MR_Word OldMsg_30;
    MR_Word Spec_31;
    MR_Word Var_36;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_78;
    MR_Word Var_89;
    MR_Word Var_90;

    hlds__hlds_data__get_type_defn_context_2_p_0(OldDefn_8, &OldContext_15);
    switch (NewIsSolverType_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ThisIsOrIsnt_16 = (MR_String) "is not a solver type";
          OldIsOrIsnt_17 = (MR_String) "is";
        }
        break;
      case (MR_Integer) 1:
        {
          ThisIsOrIsnt_16 = (MR_String) "is a solver type";
          OldIsOrIsnt_17 = (MR_String) "is not";
        }
        break;
    }
    succeeded = ((((MR_tag((MR_Word) NewBody_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, NewBody_9, 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      ThisDeclOrDefn_19 = (MR_String) "this declaration";
      succeeded = ((((MR_tag((MR_Word) OldBody_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, OldBody_12, 0)))) == (MR_Integer) 1)));
      if (succeeded)
        OldDeclOrDefn_21 = (MR_String) "previous declaration";
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_type.check_for_inconsistent_solver_nosolver_type\'/6", (MR_String) "definition before declaration");
          return;
        }
    }
    else
    {
      ThisDeclOrDefn_19 = (MR_String) "this definition";
      succeeded = ((((MR_tag((MR_Word) OldBody_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, OldBody_12, 0)))) == (MR_Integer) 1)));
      if (succeeded)
        OldDeclOrDefn_21 = (MR_String) "declaration";
      else
      {
        MR_String OldFileName_23 = ((MR_String) ((MR_hl_field(0, OldContext_15, 0))));
        MR_Integer OldLineNumber_24 = ((MR_Integer) ((MR_hl_field(0, OldContext_15, 1))));
        MR_String NewFileName_25 = ((MR_String) ((MR_hl_field(0, NewContext_10, 0))));
        MR_Integer NewLineNumber_26 = ((MR_Integer) ((MR_hl_field(0, NewContext_10, 1))));

        succeeded = (strcmp(OldFileName_23, NewFileName_25) == 0);
        if (succeeded)
          succeeded = (OldLineNumber_24 < NewLineNumber_26);
        if (succeeded)
          OldDeclOrDefn_21 = (MR_String) "previous definition";
        else
          OldDeclOrDefn_21 = (MR_String) "other definition";
      }
    }
    {
      Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_40, 1) = ((MR_Box) (ThisDeclOrDefn_19));
    }
    {
      Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(1, Var_39, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[86])));
    }
    {
      Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_36, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[43])));
      MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 21U));
      MR_hl_field(3, Var_48, 1) = ((MR_Box) (TypeCtor_7));
    }
    {
      Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
      MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_46 = parse_tree__error_spec__color_as_subject_1_f_0(Var_47);
    {
      Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_53, 1) = ((MR_Box) (ThisIsOrIsnt_16));
    }
    {
      Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
      MR_hl_field(1, Var_52, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[32])));
    }
    Var_51 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_52);
    {
      Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_63, 1) = ((MR_Box) (OldDeclOrDefn_21));
    }
    {
      Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
      MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[87])));
      MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_62));
    }
    {
      Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_68, 1) = ((MR_Box) (OldIsOrIsnt_17));
    }
    {
      Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
      MR_hl_field(1, Var_67, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[24])));
    }
    Var_66 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_67);
    Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_66, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[12])));
    Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_59, Var_65);
    Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, Var_58);
    Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_46, Var_50);
    MainPieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_36, Var_45);
    {
      Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_78, 0) = ((MR_Box) (Var_63));
      MR_hl_field(1, Var_78, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[90])));
    }
    {
      OldPieces_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, OldPieces_28, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[88])));
      MR_hl_field(1, OldPieces_28, 1) = ((MR_Box) (Var_78));
    }
    {
      MainMsg_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MainMsg_29, 0) = ((MR_Box) (NewContext_10));
      MR_hl_field(0, MainMsg_29, 1) = ((MR_Box) (MainPieces_27));
    }
    {
      OldMsg_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, OldMsg_30, 0) = ((MR_Box) (OldContext_15));
      MR_hl_field(0, OldMsg_30, 1) = ((MR_Box) (OldPieces_28));
    }
    {
      Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_90, 0) = ((MR_Box) (OldMsg_30));
      MR_hl_field(1, Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_89, 0) = ((MR_Box) (MainMsg_29));
      MR_hl_field(1, Var_89, 1) = ((MR_Box) (Var_90));
    }
    {
      Spec_31 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Spec_31, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_for_inconsistent_solver_nosolver_type\'/6"));
      MR_hl_field(2, Spec_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, Spec_31, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(2, Spec_31, 3) = ((MR_Box) (Var_89));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_InvalidTypeSpecs_33 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_31));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_InvalidTypeSpecs_0_32));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_1(
  void * env_ptr_arg)
{
  struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_3(
  void * env_ptr_arg)
{
  struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__Var_54 = ((MR_Word) ((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__conv0_Var_54));
  hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_2(env_ptr);
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_4(
  void * env_ptr_arg)
{
  struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__commit_1, 1);
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_5(
  void * env_ptr_arg)
{
  struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__TypeInfo_57_57 = (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]);
  (env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__TypeInfo_57_57, ((MR_Box) ((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__Var_54)), ((MR_Box) ((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__Var_56)));
  if ((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__succeeded)
    hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_4(env_ptr);
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_6(
  void * env_ptr_arg)
{
  struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__commit_1) == 0)
    {
      parse_tree__prog_type_scan__type_contains_var_2_p_0((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__EqvType_14, &(env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__Var_56, hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_5, env_ptr);
      (env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_2(
  void * env_ptr_arg)
{
  struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0_s *) (env_ptr_arg);

  hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_6(env_ptr);
  (env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__succeeded = !((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__succeeded);
  if ((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__succeeded)
    hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_1(env_ptr);
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_7(
  void * env_ptr_arg)
{
  struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), &(env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__conv0_Var_54, (env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__TypeParams_10, hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_3, env_ptr);
      (env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0(
  MR_Word TypeStatus_8,
  MR_Word TypeCtor_9,
  MR_Word TypeParams_10,
  MR_Word DetailsEqv_11,
  MR_Word Context_12,
  MR_Word STATE_VARIABLE_InvalidTypeSpecs_0_19,
  MR_Word * STATE_VARIABLE_InvalidTypeSpecs_20)
{
  struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0_s env;

  (env).hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__TypeParams_10 = TypeParams_10;
  {
    MR_Word Var_21;

    (env).hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__EqvType_14 = (MR_Word) (DetailsEqv_11);
    Var_21 = (MR_Word) (TypeStatus_8);
    (env).hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 20U));
    if ((env).hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__succeeded)
      hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_7(&env);
    if ((env).hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_7_p_0_env_0__succeeded)
    {
      MR_Word PolyEqvPieces_16;
      MR_Word PolyEqvMsg_17;
      MR_Word PolyEqvSpec_18;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_51;

      {
        Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 21U));
        MR_hl_field(3, Var_25, 1) = ((MR_Box) (TypeCtor_9));
      }
      {
        Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_25));
        MR_hl_field(1, Var_24, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[72])));
      }
      {
        PolyEqvPieces_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, PolyEqvPieces_16, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_type_scalar_common_1[47])));
        MR_hl_field(1, PolyEqvPieces_16, 1) = ((MR_Box) (Var_24));
      }
      {
        Var_42 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_42, 0) = ((MR_Box) (PolyEqvPieces_16));
      }
      {
        Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
        MR_hl_field(1, Var_41, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[219])));
      }
      {
        PolyEqvMsg_17 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, PolyEqvMsg_17, 0) = ((MR_Box) (Context_12));
        MR_hl_field(2, PolyEqvMsg_17, 1) = ((MR_Box) (Var_41));
      }
      {
        Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_51, 0) = ((MR_Box) (PolyEqvMsg_17));
        MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        PolyEqvSpec_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, PolyEqvSpec_18, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_for_polymorphic_eqv_type_with_monomorphic_body\'/7"));
        MR_hl_field(2, PolyEqvSpec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(2, PolyEqvSpec_18, 2) = ((MR_Box) ((MR_Unsigned) 48U));
        MR_hl_field(2, PolyEqvSpec_18, 3) = ((MR_Box) (Var_51));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_InvalidTypeSpecs_20 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (PolyEqvSpec_18));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_InvalidTypeSpecs_0_19));
      }
    }
    else
      *STATE_VARIABLE_InvalidTypeSpecs_20 = STATE_VARIABLE_InvalidTypeSpecs_0_19;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_duplicate_type_declaration_8_p_0(
  MR_Word TypeCtor_9,
  MR_Word OldDefn_10,
  MR_Word NewStatus_11,
  MR_Word NewContext_12,
  MR_Word STATE_VARIABLE_InvalidTypeSpecs_0_34,
  MR_Word * STATE_VARIABLE_InvalidTypeSpecs_35,
  MR_Word STATE_VARIABLE_WarnSpecs_0_36,
  MR_Word * STATE_VARIABLE_WarnSpecs_37)
{
  MR_bool succeeded;
  MR_Word OldContext_15;
  MR_Word OldStatus_16;
  MR_String Var_38;
  MR_String Var_40;
  MR_String Var_41;

  hlds__hlds_data__get_type_defn_context_2_p_0(OldDefn_10, &OldContext_15);
  hlds__hlds_data__get_type_defn_status_2_p_0(OldDefn_10, &OldStatus_16);
  Var_38 = mercury__term_context__context_file_1_f_0(OldContext_15);
  succeeded = mercury__string__suffix_2_p_0(Var_38, (MR_String) ".m");
  if (succeeded)
  {
    Var_40 = mercury__term_context__context_file_1_f_0(NewContext_12);
    Var_41 = (MR_String) ".m";
    succeeded = mercury__string__suffix_2_p_0(Var_40, Var_41);
  }
  if (succeeded)
  {
    MR_Word CmpRes_17;
    MR_Word FirstContext_18;
    MR_Word FirstStatus_19;
    MR_Word SecondContext_20;
    MR_Word SecondStatus_21;
    MR_Word FirstIsExported_22;
    MR_Word SecondIsExported_23;
    MR_Word FirstMsg_25;
    MR_Word UTC_26;

    mercury__term_context____Compare____term_context_0_0(&CmpRes_17, OldContext_15, NewContext_12);
    switch (CmpRes_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          FirstContext_18 = OldContext_15;
          FirstStatus_19 = OldStatus_16;
          SecondContext_20 = NewContext_12;
          SecondStatus_21 = NewStatus_11;
        }
        break;
      case (MR_Integer) 2:
        {
          FirstContext_18 = NewContext_12;
          FirstStatus_19 = NewStatus_11;
          SecondContext_20 = OldContext_15;
          SecondStatus_21 = OldStatus_16;
        }
        break;
    }
    FirstIsExported_22 = hlds__status__type_status_is_exported_to_non_submodules_1_f_0(FirstStatus_19);
    SecondIsExported_23 = hlds__status__type_status_is_exported_to_non_submodules_1_f_0(SecondStatus_21);
    {
      FirstMsg_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FirstMsg_25, 0) = ((MR_Box) (FirstContext_18));
      MR_hl_field(0, FirstMsg_25, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[16])));
    }
    {
      UTC_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, UTC_26, 0) = ((MR_Box) ((MR_Unsigned) 21U));
      MR_hl_field(3, UTC_26, 1) = ((MR_Box) (TypeCtor_9));
    }
    succeeded = (FirstIsExported_22 == SecondIsExported_23);
    if (succeeded)
    {
      MR_Word DupPieces_28;
      MR_Word DupMsg_29;
      MR_Word DupSpec_30;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_58;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_75;
      MR_Word Var_76;

      Var_53 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[20])));
      {
        Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_65, 0) = ((MR_Box) (UTC_26));
        MR_hl_field(1, Var_65, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[24])));
      }
      Var_64 = parse_tree__error_spec__color_as_subject_1_f_0(Var_65);
      Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_64, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[12])));
      Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[22])), Var_63);
      Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_53, Var_58);
      DupPieces_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[18])), Var_52);
      {
        DupMsg_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, DupMsg_29, 0) = ((MR_Box) (SecondContext_20));
        MR_hl_field(0, DupMsg_29, 1) = ((MR_Box) (DupPieces_28));
      }
      {
        Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_76, 0) = ((MR_Box) (FirstMsg_25));
        MR_hl_field(1, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_75, 0) = ((MR_Box) (DupMsg_29));
        MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_76));
      }
      {
        DupSpec_30 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, DupSpec_30, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_for_duplicate_type_declaration\'/8"));
        MR_hl_field(2, DupSpec_30, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_3[1])));
        MR_hl_field(2, DupSpec_30, 2) = ((MR_Box) ((MR_Unsigned) 48U));
        MR_hl_field(2, DupSpec_30, 3) = ((MR_Box) (Var_75));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_WarnSpecs_37 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (DupSpec_30));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_WarnSpecs_0_36));
      }
      *STATE_VARIABLE_InvalidTypeSpecs_35 = STATE_VARIABLE_InvalidTypeSpecs_0_34;
    }
    else
    {
      MR_Word DupPiecesStart_33;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_140;
      MR_Word Var_141;
      MR_Word DupPieces_144;
      MR_Word DupMsg_145;
      MR_Word DupSpec_146;

      {
        Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_87, 0) = ((MR_Box) (UTC_26));
        MR_hl_field(1, Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_86 = parse_tree__error_spec__color_as_subject_1_f_0(Var_87);
      Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_86, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[30])));
      DupPiecesStart_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[28])), Var_85);
      switch (SecondIsExported_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_115;
            MR_Word Var_116;
            MR_Word Var_122;
            MR_Word Var_127;
            MR_Word Var_128;

            Var_116 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[33])));
            Var_128 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[36])));
            Var_127 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_128, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[12])));
            Var_122 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[35])), Var_127);
            Var_115 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_116, Var_122);
            DupPieces_144 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DupPiecesStart_33, Var_115);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_93;
            MR_Word Var_94;
            MR_Word Var_100;
            MR_Word Var_105;
            MR_Word Var_106;

            Var_94 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[37])));
            Var_106 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[38])));
            Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_106, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[12])));
            Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_type_scalar_common_1[35])), Var_105);
            Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_94, Var_100);
            DupPieces_144 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DupPiecesStart_33, Var_93);
          }
          break;
      }
      {
        DupMsg_145 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, DupMsg_145, 0) = ((MR_Box) (SecondContext_20));
        MR_hl_field(0, DupMsg_145, 1) = ((MR_Box) (DupPieces_144));
      }
      {
        Var_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_141, 0) = ((MR_Box) (FirstMsg_25));
        MR_hl_field(1, Var_141, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_140, 0) = ((MR_Box) (DupMsg_145));
        MR_hl_field(1, Var_140, 1) = ((MR_Box) (Var_141));
      }
      {
        DupSpec_146 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, DupSpec_146, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_for_duplicate_type_declaration\'/8"));
        MR_hl_field(2, DupSpec_146, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(2, DupSpec_146, 2) = ((MR_Box) ((MR_Unsigned) 48U));
        MR_hl_field(2, DupSpec_146, 3) = ((MR_Box) (Var_140));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_InvalidTypeSpecs_35 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (DupSpec_146));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_InvalidTypeSpecs_0_34));
      }
      *STATE_VARIABLE_WarnSpecs_37 = STATE_VARIABLE_WarnSpecs_0_36;
    }
  }
  else
  {
    *STATE_VARIABLE_WarnSpecs_37 = STATE_VARIABLE_WarnSpecs_0_36;
    *STATE_VARIABLE_InvalidTypeSpecs_35 = STATE_VARIABLE_InvalidTypeSpecs_0_34;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type____Unify____existq_tvar_mapping_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_type____Unify____existq_tvar_mapping_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_type____Compare____existq_tvar_mapping_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_type____Compare____existq_tvar_mapping_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type____Unify____maybe_first_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_type____Unify____maybe_first_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_type____Compare____maybe_first_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_type____Compare____maybe_first_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type____Unify____maybe_set_subtype_noncanonical_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_type____Unify____maybe_set_subtype_noncanonical_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_type____Compare____maybe_set_subtype_noncanonical_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_type____Compare____maybe_set_subtype_noncanonical_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type____Unify____old_defn_maybe_abstract_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_type____Unify____old_defn_maybe_abstract_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_type____Compare____old_defn_maybe_abstract_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_type____Compare____old_defn_maybe_abstract_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type____Unify____search_type_ctor_defn_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_type____Unify____search_type_ctor_defn_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_type____Compare____search_type_ctor_defn_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_type____Compare____search_type_ctor_defn_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__make_hlds__add_type__init(void)
{
}

void mercury__hlds__make_hlds__add_type__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__make_hlds__add_type__hlds__make_hlds__add_type__type_ctor_info_existq_tvar_mapping_0);
  MR_register_type_ctor_info(&hlds__make_hlds__add_type__hlds__make_hlds__add_type__type_ctor_info_maybe_first_0);
  MR_register_type_ctor_info(&hlds__make_hlds__add_type__hlds__make_hlds__add_type__type_ctor_info_maybe_set_subtype_noncanonical_0);
  MR_register_type_ctor_info(&hlds__make_hlds__add_type__hlds__make_hlds__add_type__type_ctor_info_old_defn_maybe_abstract_0);
  MR_register_type_ctor_info(&hlds__make_hlds__add_type__hlds__make_hlds__add_type__type_ctor_info_search_type_ctor_defn_error_0);
}

void mercury__hlds__make_hlds__add_type__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__add_type__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.add_type.
