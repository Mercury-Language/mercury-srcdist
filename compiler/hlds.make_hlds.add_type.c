/*
** Automatically generated from `add_type.m'
** by the Mercury compiler,
** version rotd-2022-04-07
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
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "hlds.hlds_promise.mih"
#include "hlds.make_hlds.mih"
#include "hlds.make_hlds_error.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "hlds.make_hlds.make_hlds_types.mih"



struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s {
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17;
  MR_bool hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded;
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__QualifiedConsDefnsA_43;
  jmp_buf hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__commit_0;
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_94;
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__Var_112;
  MR_Box hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__conv0_OtherConsDefn_94;
};

struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s {
  MR_Word hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__TypeParams_12;
  MR_bool hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__succeeded;
  MR_Word hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__EqvType_17;
  jmp_buf hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__commit_0;
  MR_Word hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__Var_60;
  MR_Box hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__conv0_Var_60;
  jmp_buf hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__commit_1;
  MR_Word hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__TypeInfo_63_63;
  MR_Word hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__Var_62;
};


static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_type__list__ti_list_1hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_ctor_field_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__edit_seq__pti_change_hunk_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__add_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_constructor_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__add_type__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

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
hlds__make_hlds__add_type__IntroducedFrom__pred__compute_subtype_ctors_diff__1996__1_2_p_0(
  MR_Word CtorStrs0_11,
  MR_String HeadVar__2_39);

static MR_bool MR_CALL 
hlds__make_hlds__add_type__IntroducedFrom__pred__compute_subtype_ctors_diff__1995__1_2_p_0(
  MR_Word SuperCtorStrs0_12,
  MR_String HeadVar__2_37);

static MR_Word MR_CALL 
hlds__make_hlds__add_type__IntroducedFrom__func__add_type_defn_ctor__1086__1_1_f_0(
  MR_Word LambdaHeadVar__1_90);

static void MR_CALL 
hlds__make_hlds__add_type____Compare____search_type_ctor_defn_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_type____Unify____search_type_ctor_defn_error_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_type____Compare____old_defn_maybe_abstract_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_type____Unify____old_defn_maybe_abstract_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_type____Compare____maybe_set_subtype_noncanonical_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_type____Unify____maybe_set_subtype_noncanonical_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_type____Compare____maybe_first_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_type____Unify____maybe_first_0_0(
  MR_Word HeadVar__2_1,
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
hlds__make_hlds__add_type__check_subtype_ctor_arg_16_p_0(
  MR_Word TypeTable_17,
  MR_Word TVarSet_18,
  MR_Word OrigTypeStatus_19,
  MR_Word CtorSymName_20,
  MR_Word MaybeExistConstraints_21,
  MR_Word MaybeSuperExistConstraints_22,
  MR_Word CtorArg_23,
  MR_Word SuperCtorArg_24,
  MR_Integer ArgNum_25,
  MR_Integer * HeadVar__10_10,
  MR_Word STATE_VARIABLE_ExistQVarsMapping_0_39,
  MR_Word * STATE_VARIABLE_ExistQVarsMapping_40,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_41,
  MR_Word * STATE_VARIABLE_FoundInvalidType_42,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44);

static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_is_subtype_9_p_0(
  MR_Word TypeTable_10,
  MR_Word TVarSet0_11,
  MR_Word OrigTypeStatus_12,
  MR_Word TypeA_13,
  MR_Word TypeB_14,
  MR_Word MaybeExistConstraintsA_15,
  MR_Word MaybeExistConstraintsB_16,
  MR_Word STATE_VARIABLE_ExistQVarsMapping_0_65,
  MR_Word * STATE_VARIABLE_ExistQVarsMapping_66);

static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_is_subtype_higher_order_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word HeadVar__8_8,
  MR_Word HeadVar__9_9,
  MR_Word STATE_VARIABLE_ExistQVarsMapping_0_10,
  MR_Word * STATE_VARIABLE_ExistQVarsMapping_11);

static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_corresponding_args_are_subtype_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_ExistQVarsMapping_0_8,
  MR_Word * STATE_VARIABLE_ExistQVarsMapping_9);

static void MR_CALL 
hlds__make_hlds__add_type__rename_and_rec_subst_in_type_4_p_0(
  MR_Word Renaming_5,
  MR_Word TSubst_6,
  MR_Word Type0_7,
  MR_Word * Type_8);

static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_is_subtype_var_var_6_p_0(
  MR_Word VarA_7,
  MR_Word VarB_8,
  MR_Word MaybeExistConstraintsA_9,
  MR_Word MaybeExistConstraintsB_10,
  MR_Word STATE_VARIABLE_ExistQVarsMapping_0_23,
  MR_Word * STATE_VARIABLE_ExistQVarsMapping_24);

static void MR_CALL 
hlds__make_hlds__add_type__look_up_and_check_subtype_ctor_10_p_0(
  MR_Word TypeTable_11,
  MR_Word TVarSet_12,
  MR_Word TypeStatus_13,
  MR_Word SuperTypeCtor_14,
  MR_Word SuperCtors_15,
  MR_Word Ctor_16,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_29,
  MR_Word * STATE_VARIABLE_FoundInvalidType_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32);

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctor_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10);

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctor_9_p_0(
  MR_Word TypeTable_10,
  MR_Word TVarSet_11,
  MR_Word TypeStatus_12,
  MR_Word Ctor_13,
  MR_Word SuperCtor_14,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_36,
  MR_Word * STATE_VARIABLE_FoundInvalidType_37,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39);

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctor_exist_constraints_9_p_0(
  MR_Word CtorSymNameArity_10,
  MR_Word ExistConstraints_11,
  MR_Word SuperExistConstraints_12,
  MR_Word ExistQVarsMapping_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_30,
  MR_Word * STATE_VARIABLE_FoundInvalidType_31,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33);

static MR_bool MR_CALL 
hlds__make_hlds__add_type__search_ctor_by_unqual_name_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String UnqualName_7,
  MR_Integer Arity_8,
  MR_Word * Ctor_9);

static MR_bool MR_CALL 
hlds__make_hlds__add_type__subtype_defn_int_supertype_defn_impl_2_p_0(
  MR_Word SubTypeStatus_3,
  MR_Word SuperTypeStatus_4);

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
hlds__make_hlds__add_type__add_ctor_to_list_6_p_0(
  MR_Word TypeCtor_7,
  MR_String ConsName_8,
  MR_Integer Arity_9,
  MR_Word ModuleQual_10,
  MR_Word STATE_VARIABLE_ConsIds_0_14,
  MR_Word * STATE_VARIABLE_ConsIds_15);

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_defn_11_p_0(
  MR_Word TypeTable_12,
  MR_Word TVarSet_13,
  MR_Word TypeCtor_14,
  MR_Word TypeDefn_15,
  MR_Word TypeBodyDu_16,
  MR_Word SuperType_17,
  MR_Word * MaybeSetSubtypeNoncanon_18,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_35,
  MR_Word * STATE_VARIABLE_FoundInvalidType_36,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38);

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctors_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

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
  MR_Word STATE_VARIABLE_FoundInvalidType_0_45,
  MR_Word * STATE_VARIABLE_FoundInvalidType_46,
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48);

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctors_order_7_p_0(
  MR_Word TypeCtor_8,
  MR_Word Ctors_9,
  MR_Word SuperTypeCtor_10,
  MR_Word SuperCtors_11,
  MR_Word Context_12,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
hlds__make_hlds__add_type__compute_subtype_ctors_diff_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
hlds__make_hlds__add_type__compute_subtype_ctors_diff_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__make_hlds__add_type__compute_subtype_ctors_diff_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_type__compute_subtype_ctors_diff_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_type__compute_subtype_ctors_diff_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_type__compute_subtype_ctors_diff_3_p_0(
  MR_Word Ctors_4,
  MR_Word SuperCtors_5,
  MR_Word * ChangeHunkPieces_6);

static void MR_CALL 
hlds__make_hlds__add_type__search_super_type_ctor_defn_6_p_0(
  MR_Word TypeTable_7,
  MR_Word OrigTypeCtor_8,
  MR_Word OrigTypeDefn_9,
  MR_Word SuperTypeCtor_10,
  MR_Word PrevSuperTypeCtors_11,
  MR_Word * MaybeSuperTypeDefn_12);

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
hlds__make_hlds__add_type__report_non_du_supertype_4_f_0(
  MR_Word TVarSet_6,
  MR_Word OrigTypeCtor_7,
  MR_Word PrevSuperTypeCtors1_8,
  MR_Word NextSuperType_9);

static MR_Word MR_CALL 
hlds__make_hlds__add_type__supertype_ctor_defn_error_to_spec_5_f_0(
  MR_Word OrigTypeCtor_7,
  MR_Word OrigTypeDefn_8,
  MR_Word PrevSuperTypeCtors_9,
  MR_Word LastSuperTypeCtor_10,
  MR_Word Error_11);

static MR_Word MR_CALL 
hlds__make_hlds__add_type__describe_supertype_chain_3_f_0(
  MR_Word OrigTypeCtor_5,
  MR_Word PrevSuperTypeCtors_6,
  MR_Word LastSuperTypeCtor_7);

static MR_Word MR_CALL 
hlds__make_hlds__add_type__describe_which_is_supertype_of_chain_3_f_0(
  MR_Word First_5,
  MR_Word OrigTypeCtor_6,
  MR_Word SuperTypeCtors_7);

static MR_bool MR_CALL 
hlds__make_hlds__add_type__special_type_ctor_not_du_1_p_0(
  MR_Word TypeCtor_2);

static void MR_CALL 
hlds__make_hlds__add_type__check_supertype_is_du_not_foreign_4_p_0(
  MR_Word TypeDefn_5,
  MR_Word SuperTypeCtor_6,
  MR_Word SuperTypeDefn_7,
  MR_Word * MaybeSuperTypeBodyDu_8);

static void MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_for_current_target_9_p_0(
  MR_Word TypeCtor_10,
  MR_Word ForeignTypeBody_11,
  MR_Word PrevErrors_12,
  MR_Word Context_13,
  MR_Word * FoundInvalidType_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

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
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15);

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
  MR_Word STATE_VARIABLE_FieldNameTable_0_54,
  MR_Word * STATE_VARIABLE_FieldNameTable_55,
  MR_Word STATE_VARIABLE_ConsTable_0_56,
  MR_Word * STATE_VARIABLE_ConsTable_57,
  MR_Word STATE_VARIABLE_Specs_0_58,
  MR_Word * STATE_VARIABLE_Specs_59);

static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_names_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_names_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_names_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word NeedQual_2,
  MR_Word PartialQuals_3,
  MR_Word TypeCtor_4,
  MR_Word ConsId_5,
  MR_Word TypeStatus_6,
  MR_Integer FieldNumber_7,
  MR_Word STATE_VARIABLE_FieldNameTable_0_8,
  MR_Word * STATE_VARIABLE_FieldNameTable_9,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11);

static void MR_CALL 
hlds__make_hlds__add_type__convert_type_defn_to_hlds_5_p_0(
  MR_Word TypeDefn_6,
  MR_Word TypeCtor_7,
  MR_Word * HLDSBody_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_38,
  MR_Word * STATE_VARIABLE_ModuleInfo_39);

static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_foreign_12_p_0(
  MR_Word TypeStatus0_13,
  MR_Word TypeStatus1_14,
  MR_Word TypeCtor_15,
  MR_Word Body_16,
  MR_Word TypeDefn0_17,
  MR_Word Context_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_37,
  MR_Word * STATE_VARIABLE_ModuleInfo_38,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_39,
  MR_Word * STATE_VARIABLE_FoundInvalidType_40,
  MR_Word STATE_VARIABLE_Specs_0_41,
  MR_Word * STATE_VARIABLE_Specs_42);

static void MR_CALL 
hlds__make_hlds__add_type__check_for_inconsistent_foreign_type_visibility_12_p_0(
  MR_Word TypeCtor_13,
  MR_Word OldIsAbstract_14,
  MR_Word OldStatus_15,
  MR_Word OldContext_16,
  MR_Word NewStatus_17,
  MR_Word NewContext_18,
  MR_Word STATE_VARIABLE_TypeDefn_0_27,
  MR_Word * STATE_VARIABLE_TypeDefn_28,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_29,
  MR_Word * STATE_VARIABLE_FoundInvalidType_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32);

static void MR_CALL 
hlds__make_hlds__add_type__maybe_report_multiply_defined_type_10_p_0(
  MR_Word TypeStatus_11,
  MR_Word TypeCtor_12,
  MR_Word Context_13,
  MR_Word OldDefn_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_21,
  MR_Word * STATE_VARIABLE_ModuleInfo_22,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_23,
  MR_Word * STATE_VARIABLE_FoundInvalidType_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

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
hlds__make_hlds__add_type__module_add_type_defn_mercury_13_p_0(
  MR_Word TypeStatus1_14,
  MR_Word TypeCtor_15,
  MR_Word TypeParams_16,
  MR_Word ParseTreeTypeDefn_17,
  MR_Word Body_18,
  MR_Word TypeDefn0_19,
  MR_Word Context_20,
  MR_Word STATE_VARIABLE_ModuleInfo_0_35,
  MR_Word * STATE_VARIABLE_ModuleInfo_36,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_37,
  MR_Word * STATE_VARIABLE_FoundInvalidType_38,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40);

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0(
  MR_Word TypeStatus_10,
  MR_Word TypeCtor_11,
  MR_Word TypeParams_12,
  MR_Word DetailsEqv_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_22,
  MR_Word * STATE_VARIABLE_FoundInvalidType_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

static void MR_CALL 
hlds__make_hlds__add_type__check_for_invalid_user_defined_unify_compare_8_p_0(
  MR_Word TypeStatus_9,
  MR_Word TypeCtor_10,
  MR_Word DetailsDu_11,
  MR_Word Context_12,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_24,
  MR_Word * STATE_VARIABLE_FoundInvalidType_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_abstract_11_p_0(
  MR_Word TypeStatus1_12,
  MR_Word TypeCtor_13,
  MR_Word Body_14,
  MR_Word TypeDefn0_15,
  MR_Word Context_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * STATE_VARIABLE_ModuleInfo_26,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_27,
  MR_Word * STATE_VARIABLE_FoundInvalidType_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
hlds__make_hlds__add_type__check_for_inconsistent_solver_nosolver_type_8_p_0(
  MR_Word TypeCtor_9,
  MR_Word OldDefn_10,
  MR_Word NewBody_11,
  MR_Word NewContext_12,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_35,
  MR_Word * STATE_VARIABLE_FoundInvalidType_36,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38);

static void MR_CALL 
hlds__make_hlds__add_type__get_body_is_solver_type_2_p_0(
  MR_Word Body_3,
  MR_Word * IsSolverType_4);

static void MR_CALL 
hlds__make_hlds__add_type__check_for_duplicate_type_declaration_8_p_0(
  MR_Word TypeCtor_9,
  MR_Word OldDefn_10,
  MR_Word NewStatus_11,
  MR_Word NewContext_12,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_31,
  MR_Word * STATE_VARIABLE_FoundInvalidType_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34);

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


static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_1[166][2];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_2[8][3];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_3[1][1];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_4[5][5];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_5[1][8];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_6[1][9];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_7[2][7];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_8[1][13];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_9[1][19];




static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_1[166][2] = {
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ctor_field_name_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_change_hunk_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the definition"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(as opposed to the name) of a solver type such as"))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must not be exported from its defining module."))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[10])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: duplicate declaration for type"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[10])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: This declaration for type"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the previous declaration says it is exported."))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[10])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "says it is private, while"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[18])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the previous declaration says it is private."))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[10])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "says it is exported, while"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[22])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The previous declaration was here."))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[10])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: type"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "defined as foreign_type without being declared."))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[10])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the type"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "user-defined equality or comparison."))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[10])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and as such it is not allowed to have"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[32])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "contains no information,"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[34])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "cannot have user-defined equality or comparison."))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[10])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "whose body consists of a single zero-arity constructor"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[38])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Discriminated union types"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[40])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not yet implemented."))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[10])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The export of such types as abstract types"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[44])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with a monomorphic definition."))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[46])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is a polymorphic equivalence type"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[48])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "optimize the wrapper away.)"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[51]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(There is no performance penalty for this -- the compiler will"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[52])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "functor that has just one arg, instead of an equivalence type."))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[54])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A better workaround is to use a \"wrapper\" type, with just one"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[56])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "by putting the type definition in the interface section."))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[58])))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A quick workaround is to just export the type as a concrete type"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[60])))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of type"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but its"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is here."))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[10])))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the definition of the foreign type"))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "as its declaration."))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[10])))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must have the same visibility"))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[72])))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: all definitions of the foreign type"))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must have the same visibility."))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[10])))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: constructor"))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for type"))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "multiply defined."))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[10])))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has no definition that is valid when targeting"))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ";"))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "neither a Mercury definition,"))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "nor a"))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "foreign_type"))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "on other back-ends, but none for this back-end."))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[10])))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "There are representations for this type"))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[90])))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected type constructor in"))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "supertype part of subtype definition, got"))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "cannot be a supertype because it is"))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "an abstract type"))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "because it has a foreign type definition."))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[10])))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "cannot be a supertype"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[99]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[98])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "an equivalence type"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a foreign type"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a solver type"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The chain is:"))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[104]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[10])))
  },
  /* row 106 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[105])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: circularity in subtype definition chain."))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[106])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the type definition for"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[109]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not visible here."))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[10])))
  },
  /* row 113 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[112])))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[113])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[63]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not a discriminated union type."))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[116]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[10])))
  },
  /* row 118 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[117])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[118])))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[30]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not defined."))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[10])))
  },
  /* row 123 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[122])))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[123])))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[10])))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which is"))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[126]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the declared super type of"))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not a constructor of the supertype"))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "argument"))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has a type,"))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which is not a subtype of the corresponding argument type"))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the supertype."))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[10])))
  },
  /* row 137 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: existential class constraints for"))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "differ in the subtype and supertype."))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[139]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[10])))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declares some constructors"))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in a different order to its supertype"))
  },
  /* row 144 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 145 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[144])))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which are present in the subtype:"))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[146]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[145])))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "against those of the supertype\'s constructors"))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[148]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[147])))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "as shown by this diff"))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[150]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[149])))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[151])))
  },
  /* row 153 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[42])))
  },
  /* row 154 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[62])))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_type_scalar_common_1[154]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 156 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[92])))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_type_scalar_common_1[156]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[15])))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[158])))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[15])))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[160])))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[102]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[15])))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[162])))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[15])))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[164])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_2[8][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_1[4]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
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
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_4[1])),
    ((MR_Box) (hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_4[2])),
    ((MR_Box) (hlds__make_hlds__add_type__compute_subtype_ctors_diff_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_4[2])),
    ((MR_Box) (hlds__make_hlds__add_type__compute_subtype_ctors_diff_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_4[4])),
    ((MR_Box) (hlds__make_hlds__add_type__compute_subtype_ctors_diff_3_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_3[1][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_4[5][5] = {
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
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_type__edit_seq__pti_change_hunk_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_5[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_6[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_7[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0))
  },
  /* row   1 */
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

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_8[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_type_status_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_found_invalid_type_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_found_invalid_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_9[1][19] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 16)),
    ((MR_Box) (&hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_type_status_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_cons_exist_constraints_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_cons_exist_constraints_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_found_invalid_type_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_found_invalid_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_type__list__ti_list_1hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&hlds__make_hlds__add_type__list__ti_list_1hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_ctor_field_name_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ctor_field_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__edit_seq__pti_change_hunk_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__edit_seq__edit_seq__type_ctor_info_change_hunk_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
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
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_constructor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__add_type__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
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
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__add_type__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) },
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
hlds__make_hlds__add_type__IntroducedFrom__pred__compute_subtype_ctors_diff__1996__1_2_p_0(
  MR_Word CtorStrs0_11,
  MR_String HeadVar__2_39)
{
  MR_bool succeeded;

  succeeded = mercury__list__contains_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CtorStrs0_11, ((MR_Box) (HeadVar__2_39)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type__IntroducedFrom__pred__compute_subtype_ctors_diff__1995__1_2_p_0(
  MR_Word SuperCtorStrs0_12,
  MR_String HeadVar__2_37)
{
  MR_bool succeeded;

  succeeded = mercury__list__contains_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SuperCtorStrs0_12, ((MR_Box) (HeadVar__2_37)));
  return succeeded;
}

static MR_Word MR_CALL 
hlds__make_hlds__add_type__IntroducedFrom__func__add_type_defn_ctor__1086__1_1_f_0(
  MR_Word LambdaHeadVar__1_90)
{
  MR_Word LambdaHeadVar__2_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_90, (MR_Integer) 0))));

  return LambdaHeadVar__2_91;
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
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

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
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

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
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

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
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

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
  MR_Word MaybeFieldName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg0_7, (MR_Integer) 0))));
  MR_Word Type0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg0_7, (MR_Integer) 1))));
  MR_Word Context_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg0_7, (MR_Integer) 2))));
  MR_Word Type_12;
  MR_Word Type1_17;

  parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(Renaming_5, Type0_10, &Type1_17);
  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TSubst_6, Type1_17, &Type_12);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *Arg_8 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeFieldName_9));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Type_12));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_11));
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

  hlds__make_hlds__add_type__rename_and_rec_subst_in_constructor_arg_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_Arg_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_Arg_8));
}

static void MR_CALL 
hlds__make_hlds__add_type__rename_and_rec_subst_in_constructor_4_p_0(
  MR_Word Renaming_5,
  MR_Word TSubst_6,
  MR_Word Ctor0_7,
  MR_Word * Ctor_8)
{
  uint32_t Ordinal_9 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), Ctor0_7, (MR_Integer) 0)));
  MR_Word MaybeExistConstraints0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_7, (MR_Integer) 1))));
  MR_Word Name_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_7, (MR_Integer) 2))));
  MR_Word Args0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_7, (MR_Integer) 3))));
  MR_Integer NumArgs_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor0_7, (MR_Integer) 4))));
  MR_Word Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_7, (MR_Integer) 5))));
  MR_Word MaybeExistConstraints_15;
  MR_Word Args_18;
  MR_Word Var_19;

  if ((MaybeExistConstraints0_10 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeExistConstraints_15 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ExistConstraints0_16 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints0_10), (MR_Integer) 1));
    MR_Word ExistConstraints_17;
    MR_Word ExistQVars0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_16, (MR_Integer) 0))));
    MR_Word Constraints0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_16, (MR_Integer) 1))));
    MR_Word UnconstrainedExistQVars0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_16, (MR_Integer) 2))));
    MR_Word ConstrainedExistQVars0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_16, (MR_Integer) 3))));
    MR_Word ExistQVars_31;
    MR_Word Constraints1_32;
    MR_Word Constraints_33;
    MR_Word UnconstrainedExistQVars_34;
    MR_Word ConstrainedExistQVars_35;

    parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_5, ExistQVars0_27, &ExistQVars_31);
    parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(Renaming_5, Constraints0_28, &Constraints1_32);
    parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0(TSubst_6, Constraints1_32, &Constraints_33);
    parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_5, UnconstrainedExistQVars0_29, &UnconstrainedExistQVars_34);
    parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_5, ConstrainedExistQVars0_30, &ConstrainedExistQVars_35);
    {
      ExistConstraints_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ExistConstraints_17, 0) = ((MR_Box) (ExistQVars_31));
      MR_hl_field(MR_mktag(0), ExistConstraints_17, 1) = ((MR_Box) (Constraints_33));
      MR_hl_field(MR_mktag(0), ExistConstraints_17, 2) = ((MR_Box) (UnconstrainedExistQVars_34));
      MR_hl_field(MR_mktag(0), ExistConstraints_17, 3) = ((MR_Box) (ConstrainedExistQVars_35));
    }
    MaybeExistConstraints_15 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ExistConstraints_17)));
  }
  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_7[1]));
    MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (hlds__make_hlds__add_type__rename_and_rec_subst_in_constructor_4_p_0_1));
    MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (Renaming_5));
    MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) (TSubst_6));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), Var_19, Args0_12, &Args_18);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *Ctor_8 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_Word) (Ordinal_9));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeExistConstraints_15));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Name_11));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Args_18));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (NumArgs_13));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Context_14));
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__ctor_to_string_2_p_0(
  MR_Word Ctor_3,
  MR_String * Str_4)
{
  MR_Word SymName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_3, (MR_Integer) 2))));
  MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_3, (MR_Integer) 4))));
  MR_String UnqualName_11;
  MR_Word SNA_12;
  MR_Word Var_13;

  UnqualName_11 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_7);
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (UnqualName_11));
  }
  {
    SNA_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), SNA_12, 0) = ((MR_Box) (Var_13));
    MR_hl_field(MR_mktag(0), SNA_12, 1) = ((MR_Box) (Arity_9));
  }
  *Str_4 = parse_tree__prog_out__sym_name_arity_to_string_1_f_0(SNA_12);
}

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctor_arg_16_p_0(
  MR_Word TypeTable_17,
  MR_Word TVarSet_18,
  MR_Word OrigTypeStatus_19,
  MR_Word CtorSymName_20,
  MR_Word MaybeExistConstraints_21,
  MR_Word MaybeSuperExistConstraints_22,
  MR_Word CtorArg_23,
  MR_Word SuperCtorArg_24,
  MR_Integer ArgNum_25,
  MR_Integer * HeadVar__10_10,
  MR_Word STATE_VARIABLE_ExistQVarsMapping_0_39,
  MR_Word * STATE_VARIABLE_ExistQVarsMapping_40,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_41,
  MR_Word * STATE_VARIABLE_FoundInvalidType_42,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44)
{
  MR_bool succeeded;
  MR_Word ArgType_30;
  MR_Word Context_31;
  MR_Word SuperArgType_33;
  MR_Word STATE_VARIABLE_ExistQVarsMapping_46_46;

  *HeadVar__10_10 = (MR_Integer) ((MR_Unsigned) ArgNum_25 + (MR_Unsigned) 1);
  ArgType_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArg_23, (MR_Integer) 1))));
  Context_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArg_23, (MR_Integer) 2))));
  SuperArgType_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SuperCtorArg_24, (MR_Integer) 1))));
  succeeded = hlds__make_hlds__add_type__check_is_subtype_9_p_0(TypeTable_17, TVarSet_18, OrigTypeStatus_19, ArgType_30, SuperArgType_33, MaybeExistConstraints_21, MaybeSuperExistConstraints_22, STATE_VARIABLE_ExistQVarsMapping_0_39, &STATE_VARIABLE_ExistQVarsMapping_46_46);
  if (succeeded)
  {
    *STATE_VARIABLE_ExistQVarsMapping_40 = STATE_VARIABLE_ExistQVarsMapping_46_46;
    *STATE_VARIABLE_Specs_44 = STATE_VARIABLE_Specs_0_43;
    *STATE_VARIABLE_FoundInvalidType_42 = STATE_VARIABLE_FoundInvalidType_0_41;
  }
  else
  {
    MR_String ArgTypeStr_35;
    MR_String SuperArgTypeStr_36;
    MR_Word Pieces_37;
    MR_Word Spec_38;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_56;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_String Var_61;
    MR_Word Var_62;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_70;
    MR_Word Var_73;
    MR_Word Var_74;

    ArgTypeStr_35 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TVarSet_18, (MR_Integer) 0, ArgType_30);
    SuperArgTypeStr_36 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TVarSet_18, (MR_Integer) 0, SuperArgType_33);
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (ArgNum_25));
    }
    Var_61 = mdbcomp__sym_name__unqualify_name_1_f_0(CtorSymName_20);
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (ArgTypeStr_35));
    }
    {
      Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_74, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_74, 1) = ((MR_Box) (SuperArgTypeStr_36));
    }
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[136])));
    }
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[134])));
      MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_73));
    }
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[65])));
      MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_70));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_67));
    }
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[133])));
      MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_65));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_62));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[132])));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_59));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[131])));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_53));
    }
    {
      Pieces_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[130])));
      MR_hl_field(MR_mktag(1), Pieces_37, 1) = ((MR_Box) (Var_51));
    }
    {
      Spec_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_38, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_subtype_ctor_arg\'/16"));
      MR_hl_field(MR_mktag(1), Spec_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_38, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(MR_mktag(1), Spec_38, 3) = ((MR_Box) (Context_31));
      MR_hl_field(MR_mktag(1), Spec_38, 4) = ((MR_Box) (Pieces_37));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_44 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_38));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_43));
    }
    *STATE_VARIABLE_FoundInvalidType_42 = (MR_Integer) 1;
    *STATE_VARIABLE_ExistQVarsMapping_40 = STATE_VARIABLE_ExistQVarsMapping_0_39;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_is_subtype_9_p_0(
  MR_Word TypeTable_10,
  MR_Word TVarSet0_11,
  MR_Word OrigTypeStatus_12,
  MR_Word TypeA_13,
  MR_Word TypeB_14,
  MR_Word MaybeExistConstraintsA_15,
  MR_Word MaybeExistConstraintsB_16,
  MR_Word STATE_VARIABLE_ExistQVarsMapping_0_65,
  MR_Word * STATE_VARIABLE_ExistQVarsMapping_66)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) TypeA_13)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          MR_Word VarA_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeA_13, (MR_Integer) 0))));
          MR_Word Kind_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeA_13, (MR_Integer) 1))));
          MR_Word VarB_21;
          MR_Word Var_87;

          succeeded = ((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 0);
          if (succeeded)
          {
            VarB_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeB_14, (MR_Integer) 0))));
            Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeB_14, (MR_Integer) 1))));
            succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_20, Var_87);
            if (succeeded)
              succeeded = hlds__make_hlds__add_type__check_is_subtype_var_var_6_p_0(VarA_19, VarB_21, MaybeExistConstraintsA_15, MaybeExistConstraintsB_16, STATE_VARIABLE_ExistQVarsMapping_0_65, STATE_VARIABLE_ExistQVarsMapping_66);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_82_82;
          MR_Word NameA_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeA_13, (MR_Integer) 0))));
          MR_Word ArgTypesA_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeA_13, (MR_Integer) 1))));
          MR_Word NameB_24;
          MR_Word ArgTypesB_25;
          MR_Integer ArityA_26;
          MR_Integer ArityB_27;
          MR_Word Kind_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeA_13, (MR_Integer) 2))));
          MR_Word Var_88;

          succeeded = ((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 1);
          if (succeeded)
          {
            NameB_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeB_14, (MR_Integer) 0))));
            ArgTypesB_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeB_14, (MR_Integer) 1))));
            Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeB_14, (MR_Integer) 2))));
            succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_74, Var_88);
            if (succeeded)
            {
              TypeCtorInfo_82_82 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
              mercury__list__length_2_p_0(TypeCtorInfo_82_82, ArgTypesA_23, &ArityA_26);
              mercury__list__length_2_p_0(TypeCtorInfo_82_82, ArgTypesB_25, &ArityB_27);
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(NameA_22, NameB_24);
              if (succeeded)
                succeeded = (ArityA_26 == ArityB_27);
              if (succeeded)
                succeeded = hlds__make_hlds__add_type__check_corresponding_args_are_subtype_9_p_0(TypeTable_10, TVarSet0_11, OrigTypeStatus_12, ArgTypesA_23, ArgTypesB_25, MaybeExistConstraintsA_15, MaybeExistConstraintsB_16, STATE_VARIABLE_ExistQVarsMapping_0_65, STATE_VARIABLE_ExistQVarsMapping_66);
              else
              {
                MR_Word TypeInfo_83_83;
                MR_Word TypeCtorA_28;
                MR_Word TypeDefnA_29;
                MR_Word TypeBodyA_30;
                MR_Word TypeBodyDuA_31;
                MR_Word SuperTypeA_33;
                MR_Word TypeStatusA_37;
                MR_Word TVarSetA_38;
                MR_Word TypeParamsA0_39;
                MR_Word TVarSet_40;
                MR_Word RenamingA_41;
                MR_Word TypeParamsA_42;
                MR_Word TSubstA_43;
                MR_Word RenamedSuperTypeA_44;
                MR_Word Var_71;
                MR_Word next_value_of_TVarSet0_11;
                MR_Word next_value_of_TypeA_13;

                {
                  TypeCtorA_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), TypeCtorA_28, 0) = ((MR_Box) (NameA_22));
                  MR_hl_field(MR_mktag(0), TypeCtorA_28, 1) = ((MR_Box) (ArityA_26));
                }
                succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_10, TypeCtorA_28, &TypeDefnA_29);
                if (succeeded)
                {
                  hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefnA_29, &TypeBodyA_30);
                  succeeded = ((MR_tag((MR_Word) TypeBodyA_30)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    TypeBodyDuA_31 = (MR_Word) ((MR_Word) (TypeBodyA_30));
                    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDuA_31, (MR_Integer) 1))));
                    succeeded = (Var_71 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      SuperTypeA_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_71, (MR_Integer) 0))));
                      hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefnA_29, &TypeStatusA_37);
                      succeeded = hlds__make_hlds__add_type__subtype_defn_int_supertype_defn_impl_2_p_0(OrigTypeStatus_12, TypeStatusA_37);
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        hlds__hlds_data__get_type_defn_tvarset_2_p_0(TypeDefnA_29, &TVarSetA_38);
                        hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefnA_29, &TypeParamsA0_39);
                        parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet0_11, TVarSetA_38, &TVarSet_40, &RenamingA_41);
                        parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(RenamingA_41, TypeParamsA0_39, &TypeParamsA_42);
                        TypeInfo_83_83 = (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]);
                        mercury__map__from_corresponding_lists_3_p_0(TypeInfo_83_83, TypeCtorInfo_82_82, TypeParamsA_42, ArgTypesA_23, &TSubstA_43);
                        hlds__make_hlds__add_type__rename_and_rec_subst_in_type_4_p_0(RenamingA_41, TSubstA_43, SuperTypeA_33, &RenamedSuperTypeA_44);
                        // direct tailcall eliminated
                        ;
                        next_value_of_TVarSet0_11 = TVarSet_40;
                        next_value_of_TypeA_13 = RenamedSuperTypeA_44;
                        TVarSet0_11 = next_value_of_TVarSet0_11;
                        TypeA_13 = next_value_of_TypeA_13;
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
          MR_Word BuiltinType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeA_13, (MR_Integer) 0))));
          MR_Word Var_86;

          succeeded = ((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeB_14, (MR_Integer) 0))));
            succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_18, Var_86);
            if (succeeded)
            {
              *STATE_VARIABLE_ExistQVarsMapping_66 = STATE_VARIABLE_ExistQVarsMapping_0_65;
              succeeded = MR_TRUE;
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeA_13, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word TypeCtorInfo_84_84;
              MR_Integer Arity_45;
              MR_Word Kind_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_13, (MR_Integer) 2))));
              MR_Word ArgTypesA_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_13, (MR_Integer) 1))));
              MR_Word ArgTypesB_77;
              MR_Word Var_89;
              MR_Integer Var_90;

              succeeded = ((((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeB_14, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgTypesB_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_14, (MR_Integer) 1))));
                Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_14, (MR_Integer) 2))));
                succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_75, Var_89);
                if (succeeded)
                {
                  TypeCtorInfo_84_84 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                  mercury__list__length_2_p_0(TypeCtorInfo_84_84, ArgTypesA_76, &Arity_45);
                  mercury__list__length_2_p_0(TypeCtorInfo_84_84, ArgTypesB_77, &Var_90);
                  succeeded = (Arity_45 == Var_90);
                  if (succeeded)
                    succeeded = hlds__make_hlds__add_type__check_corresponding_args_are_subtype_9_p_0(TypeTable_10, TVarSet0_11, OrigTypeStatus_12, ArgTypesA_76, ArgTypesB_77, MaybeExistConstraintsA_15, MaybeExistConstraintsB_16, STATE_VARIABLE_ExistQVarsMapping_0_65, STATE_VARIABLE_ExistQVarsMapping_66);
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeCtorInfo_85_85;
              MR_Word PredOrFunc_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeA_13, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word HOInstInfoA_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_13, (MR_Integer) 3))));
              MR_Word Purity_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeA_13, (MR_Integer) 4))) & (MR_Integer) 3);
              MR_Word HOInstInfoB_50;
              MR_Word MaybeArgModesA_58;
              MR_Word MaybeArgModesB_59;
              MR_Word ArgTypesA_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_13, (MR_Integer) 2))));
              MR_Word ArgTypesB_79;
              MR_Integer Arity_80;
              MR_Word Var_91;
              MR_Word Var_92;
              MR_Integer Var_94;

              succeeded = ((((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeB_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_91 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeB_14, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgTypesB_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_14, (MR_Integer) 2))));
                HOInstInfoB_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_14, (MR_Integer) 3))));
                Var_92 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeB_14, (MR_Integer) 4))) & (MR_Integer) 3);
                succeeded = (PredOrFunc_46 == Var_91);
                if (succeeded)
                {
                  succeeded = (Purity_48 == Var_92);
                  if (succeeded)
                  {
                    succeeded = MR_TRUE;
                    if (succeeded)
                    {
                      TypeCtorInfo_85_85 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                      mercury__list__length_2_p_0(TypeCtorInfo_85_85, ArgTypesA_78, &Arity_80);
                      mercury__list__length_2_p_0(TypeCtorInfo_85_85, ArgTypesB_79, &Var_94);
                      succeeded = (Arity_80 == Var_94);
                      if (succeeded)
                      {
                        if ((HOInstInfoA_47 == (MR_Word) ((MR_Unsigned) 0U)))
                        {
                          succeeded = (HOInstInfoB_50 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            MaybeArgModesA_58 = (MR_Word) ((MR_Unsigned) 0U);
                            MaybeArgModesB_59 = (MR_Word) ((MR_Unsigned) 0U);
                            succeeded = MR_TRUE;
                          }
                        }
                        else
                        {
                          MR_Word PredInfoInfoA_51 = (MR_Word) (MR_body((MR_Word) (HOInstInfoA_47), (MR_Integer) 1));
                          MR_Word PredInfoInfoB_52;
                          MR_Word ArgModesA_53;
                          MR_Word Detism_55;
                          MR_Word ArgModesB_56;
                          MR_Word Var_95;
                          MR_Word Var_96;
                          MR_Word Var_97;

                          succeeded = (HOInstInfoB_50 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            PredInfoInfoB_52 = (MR_Word) (MR_body((MR_Word) (HOInstInfoB_50), (MR_Integer) 1));
                            Var_95 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInfoInfoA_51, (MR_Integer) 0))) & (MR_Integer) 1);
                            ArgModesA_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInfoInfoA_51, (MR_Integer) 1))));
                            Detism_55 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInfoInfoA_51, (MR_Integer) 3))) & (MR_Integer) 7);
                            succeeded = (PredOrFunc_46 == Var_95);
                            if (succeeded)
                            {
                              Var_96 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInfoInfoB_52, (MR_Integer) 0))) & (MR_Integer) 1);
                              ArgModesB_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInfoInfoB_52, (MR_Integer) 1))));
                              Var_97 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInfoInfoB_52, (MR_Integer) 3))) & (MR_Integer) 7);
                              succeeded = (PredOrFunc_46 == Var_96);
                              if (succeeded)
                              {
                                succeeded = (Detism_55 == Var_97);
                                if (succeeded)
                                {
                                  {
                                    MaybeArgModesA_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), MaybeArgModesA_58, 0) = ((MR_Box) (ArgModesA_53));
                                  }
                                  {
                                    MaybeArgModesB_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), MaybeArgModesB_59, 0) = ((MR_Box) (ArgModesB_56));
                                  }
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                          }
                        }
                        if (succeeded)
                          succeeded = hlds__make_hlds__add_type__check_is_subtype_higher_order_11_p_0(TypeTable_10, TVarSet0_11, OrigTypeStatus_12, ArgTypesA_78, ArgTypesB_79, MaybeArgModesA_58, MaybeArgModesB_59, MaybeExistConstraintsA_15, MaybeExistConstraintsB_16, STATE_VARIABLE_ExistQVarsMapping_0_65, STATE_VARIABLE_ExistQVarsMapping_66);
                      }
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeA1_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_13, (MR_Integer) 1))));
              MR_Word TypeB1_64;
              MR_Word Kind_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_13, (MR_Integer) 2))));
              MR_Word Var_98;
              MR_Word next_value_of_TypeA_13;
              MR_Word next_value_of_TypeB_14;

              succeeded = ((((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeB_14, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                TypeB1_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_14, (MR_Integer) 1))));
                Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_14, (MR_Integer) 2))));
                succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_81, Var_98);
                if (succeeded)
                {
                  // direct tailcall eliminated
                  ;
                  next_value_of_TypeA_13 = TypeA1_63;
                  next_value_of_TypeB_14 = TypeB1_64;
                  TypeA_13 = next_value_of_TypeA_13;
                  TypeB_14 = next_value_of_TypeB_14;
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
hlds__make_hlds__add_type__check_is_subtype_higher_order_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word HeadVar__8_8,
  MR_Word HeadVar__9_9,
  MR_Word STATE_VARIABLE_ExistQVarsMapping_0_10,
  MR_Word * STATE_VARIABLE_ExistQVarsMapping_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
          succeeded = (HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U));
        else
        {
          MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
          MR_Word Var_23;

          succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (HeadVar__7_7 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__7_7, (MR_Integer) 0))));
              succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
        if (succeeded)
        {
          *STATE_VARIABLE_ExistQVarsMapping_11 = STATE_VARIABLE_ExistQVarsMapping_0_10;
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      MR_Word TypeA_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word TypesA_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word TypeB_29;
      MR_Word TypesB_30;
      MR_Word MaybeModesA_36;
      MR_Word MaybeModesB_37;
      MR_Word STATE_VARIABLE_ExistQVarsMapping_44_44;
      MR_Word STATE_VARIABLE_ExistQVarsMapping_45_45;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_HeadVar__7_7;
      MR_Word next_value_of_STATE_VARIABLE_ExistQVarsMapping_0_10;

      succeeded = (HeadVar__5_5 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TypeB_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
        TypesB_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
        succeeded = hlds__make_hlds__add_type__check_is_subtype_9_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, TypeA_27, TypeB_29, HeadVar__8_8, HeadVar__9_9, STATE_VARIABLE_ExistQVarsMapping_0_10, &STATE_VARIABLE_ExistQVarsMapping_44_44);
        if (succeeded)
        {
          succeeded = hlds__make_hlds__add_type__check_is_subtype_9_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, TypeB_29, TypeA_27, HeadVar__8_8, HeadVar__9_9, STATE_VARIABLE_ExistQVarsMapping_44_44, &STATE_VARIABLE_ExistQVarsMapping_45_45);
          if (succeeded)
          {
            if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              succeeded = (HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                MaybeModesA_36 = (MR_Word) ((MR_Unsigned) 0U);
                MaybeModesB_37 = (MR_Word) ((MR_Unsigned) 0U);
                succeeded = MR_TRUE;
              }
            }
            else
            {
              MR_Word ModeA_38;
              MR_Word ModesA_39;
              MR_Word ModeB_40;
              MR_Word ModesB_41;
              MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
              MR_Word Var_47;

              succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ModeA_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 0))));
                ModesA_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 1))));
                succeeded = (HeadVar__7_7 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__7_7, (MR_Integer) 0))));
                  succeeded = (Var_47 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    ModeB_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_47, (MR_Integer) 0))));
                    ModesB_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_47, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(ModeA_38, ModeB_40);
                    if (succeeded)
                    {
                      {
                        MaybeModesA_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), MaybeModesA_36, 0) = ((MR_Box) (ModesA_39));
                      }
                      {
                        MaybeModesB_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), MaybeModesB_37, 0) = ((MR_Box) (ModesB_41));
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
              next_value_of_HeadVar__4_4 = TypesA_28;
              next_value_of_HeadVar__5_5 = TypesB_30;
              next_value_of_HeadVar__6_6 = MaybeModesA_36;
              next_value_of_HeadVar__7_7 = MaybeModesB_37;
              next_value_of_STATE_VARIABLE_ExistQVarsMapping_0_10 = STATE_VARIABLE_ExistQVarsMapping_45_45;
              HeadVar__4_4 = next_value_of_HeadVar__4_4;
              HeadVar__5_5 = next_value_of_HeadVar__5_5;
              HeadVar__6_6 = next_value_of_HeadVar__6_6;
              HeadVar__7_7 = next_value_of_HeadVar__7_7;
              STATE_VARIABLE_ExistQVarsMapping_0_10 = next_value_of_STATE_VARIABLE_ExistQVarsMapping_0_10;
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
hlds__make_hlds__add_type__check_corresponding_args_are_subtype_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_ExistQVarsMapping_0_8,
  MR_Word * STATE_VARIABLE_ExistQVarsMapping_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *STATE_VARIABLE_ExistQVarsMapping_9 = STATE_VARIABLE_ExistQVarsMapping_0_8;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word TypeA_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word TypesA_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word TypeB_23;
      MR_Word TypesB_24;
      MR_Word STATE_VARIABLE_ExistQVarsMapping_30_30;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_ExistQVarsMapping_0_8;

      succeeded = (HeadVar__5_5 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TypeB_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
        TypesB_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
        succeeded = hlds__make_hlds__add_type__check_is_subtype_9_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, TypeA_21, TypeB_23, HeadVar__6_6, HeadVar__7_7, STATE_VARIABLE_ExistQVarsMapping_0_8, &STATE_VARIABLE_ExistQVarsMapping_30_30);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__4_4 = TypesA_22;
          next_value_of_HeadVar__5_5 = TypesB_24;
          next_value_of_STATE_VARIABLE_ExistQVarsMapping_0_8 = STATE_VARIABLE_ExistQVarsMapping_30_30;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          HeadVar__5_5 = next_value_of_HeadVar__5_5;
          STATE_VARIABLE_ExistQVarsMapping_0_8 = next_value_of_STATE_VARIABLE_ExistQVarsMapping_0_8;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__rename_and_rec_subst_in_type_4_p_0(
  MR_Word Renaming_5,
  MR_Word TSubst_6,
  MR_Word Type0_7,
  MR_Word * Type_8)
{
  MR_Word Type1_9;

  parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(Renaming_5, Type0_7, &Type1_9);
  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TSubst_6, Type1_9, Type_8);
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_is_subtype_var_var_6_p_0(
  MR_Word VarA_7,
  MR_Word VarB_8,
  MR_Word MaybeExistConstraintsA_9,
  MR_Word MaybeExistConstraintsB_10,
  MR_Word STATE_VARIABLE_ExistQVarsMapping_0_23,
  MR_Word * STATE_VARIABLE_ExistQVarsMapping_24)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), ((MR_Box) (VarA_7)), ((MR_Box) (VarB_8)));
  if (succeeded)
  {
    *STATE_VARIABLE_ExistQVarsMapping_24 = STATE_VARIABLE_ExistQVarsMapping_0_23;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word VarB1_12;
    MR_Box conv0_VarB1_12;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), STATE_VARIABLE_ExistQVarsMapping_0_23, ((MR_Box) (VarB_8)), &conv0_VarB1_12);
    if (succeeded)
    {
      VarB1_12 = ((MR_Word) (conv0_VarB1_12));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), ((MR_Box) (VarB1_12)), ((MR_Box) (VarA_7)));
      if (succeeded)
      {
        *STATE_VARIABLE_ExistQVarsMapping_24 = STATE_VARIABLE_ExistQVarsMapping_0_23;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word TypeInfo_29_29;
      MR_Word ExistConstraintsA_13;
      MR_Word ExistConstraintsB_14;
      MR_Word UnconstrainedExistQVarsA_17;
      MR_Word ConstrainedExistQVarsA_18;
      MR_Word UnconstrainedExistQVarsB_21;
      MR_Word ConstrainedExistQVarsB_22;

      succeeded = (MaybeExistConstraintsA_9 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ExistConstraintsA_13 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraintsA_9), (MR_Integer) 1));
        succeeded = (MaybeExistConstraintsB_10 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ExistConstraintsB_14 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraintsB_10), (MR_Integer) 1));
          UnconstrainedExistQVarsA_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraintsA_13, (MR_Integer) 2))));
          ConstrainedExistQVarsA_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraintsA_13, (MR_Integer) 3))));
          UnconstrainedExistQVarsB_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraintsB_14, (MR_Integer) 2))));
          ConstrainedExistQVarsB_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraintsB_14, (MR_Integer) 3))));
          succeeded = mercury__list__contains_2_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), UnconstrainedExistQVarsA_17, ((MR_Box) (VarA_7)));
          if (succeeded)
            succeeded = mercury__list__contains_2_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), UnconstrainedExistQVarsB_21, ((MR_Box) (VarB_8)));
          if (!(succeeded))
          {
            succeeded = mercury__list__contains_2_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), ConstrainedExistQVarsA_18, ((MR_Box) (VarA_7)));
            if (succeeded)
              succeeded = mercury__list__contains_2_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), ConstrainedExistQVarsB_22, ((MR_Box) (VarB_8)));
          }
          if (succeeded)
          {
            TypeInfo_29_29 = (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]);
            succeeded = mercury__map__insert_4_p_0(TypeInfo_29_29, TypeInfo_29_29, ((MR_Box) (VarB_8)), ((MR_Box) (VarA_7)), STATE_VARIABLE_ExistQVarsMapping_0_23, STATE_VARIABLE_ExistQVarsMapping_24);
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_type__look_up_and_check_subtype_ctor_10_p_0(
  MR_Word TypeTable_11,
  MR_Word TVarSet_12,
  MR_Word TypeStatus_13,
  MR_Word SuperTypeCtor_14,
  MR_Word SuperCtors_15,
  MR_Word Ctor_16,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_29,
  MR_Word * STATE_VARIABLE_FoundInvalidType_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  MR_bool succeeded;
  MR_Word CtorName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 2))));
  MR_Integer Arity_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 4))));
  MR_Word Context_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 5))));
  MR_String UnqualCtorName_25;
  MR_Word SuperCtor_26;

  UnqualCtorName_25 = mdbcomp__sym_name__unqualify_name_1_f_0(CtorName_21);
  succeeded = hlds__make_hlds__add_type__search_ctor_by_unqual_name_4_p_0(SuperCtors_15, UnqualCtorName_25, Arity_23, &SuperCtor_26);
  if (succeeded)
    hlds__make_hlds__add_type__check_subtype_ctor_9_p_0(TypeTable_11, TVarSet_12, TypeStatus_13, Ctor_16, SuperCtor_26, STATE_VARIABLE_FoundInvalidType_0_29, STATE_VARIABLE_FoundInvalidType_30, STATE_VARIABLE_Specs_0_31, STATE_VARIABLE_Specs_32);
  else
  {
    MR_Word Pieces_27;
    MR_Word Spec_28;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_43;
    MR_Word Var_44;

    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (CtorName_21));
      MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (Arity_23));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (SuperTypeCtor_14));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[15])));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[129])));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_40));
    }
    {
      Pieces_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[63])));
      MR_hl_field(MR_mktag(1), Pieces_27, 1) = ((MR_Box) (Var_37));
    }
    {
      Spec_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_28, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.look_up_and_check_subtype_ctor\'/10"));
      MR_hl_field(MR_mktag(1), Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_28, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(MR_mktag(1), Spec_28, 3) = ((MR_Box) (Context_24));
      MR_hl_field(MR_mktag(1), Spec_28, 4) = ((MR_Box) (Pieces_27));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_32 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_28));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_31));
    }
    *STATE_VARIABLE_FoundInvalidType_30 = (MR_Integer) 1;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctor_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10)
{
  MR_Box closure = closure_arg;
  MR_Integer conv3_HeadVar__10_10;
  MR_Word conv2_STATE_VARIABLE_ExistQVarsMapping_40;
  MR_Word conv1_STATE_VARIABLE_FoundInvalidType_42;
  MR_Word conv0_STATE_VARIABLE_Specs_44;

  hlds__make_hlds__add_type__check_subtype_ctor_arg_16_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), &conv3_HeadVar__10_10, ((MR_Word) (wrapper_arg_5)), &conv2_STATE_VARIABLE_ExistQVarsMapping_40, ((MR_Word) (wrapper_arg_7)), &conv1_STATE_VARIABLE_FoundInvalidType_42, ((MR_Word) (wrapper_arg_9)), &conv0_STATE_VARIABLE_Specs_44);
  *wrapper_arg_4 = ((MR_Box) (conv3_HeadVar__10_10));
  *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_ExistQVarsMapping_40));
  *wrapper_arg_8 = ((MR_Box) (conv1_STATE_VARIABLE_FoundInvalidType_42));
  *wrapper_arg_10 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_44));
}

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctor_9_p_0(
  MR_Word TypeTable_10,
  MR_Word TVarSet_11,
  MR_Word TypeStatus_12,
  MR_Word Ctor_13,
  MR_Word SuperCtor_14,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_36,
  MR_Word * STATE_VARIABLE_FoundInvalidType_37,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39)
{
  MR_Word FoundInvalidType_15;
  MR_Word MaybeExistConstraints_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 1))));
  MR_Word CtorSymName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 2))));
  MR_Word Args_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 3))));
  MR_Integer Arity_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 4))));
  MR_Word Context_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 5))));
  MR_Word MaybeSuperExistConstraints_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SuperCtor_14, (MR_Integer) 1))));
  MR_Word SuperArgs_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SuperCtor_14, (MR_Integer) 3))));
  MR_Word ExistQVarsMapping_30;
  MR_Word Var_40;
  MR_Word Var_42;
  MR_Word STATE_VARIABLE_Specs_44_44;
  MR_Box conv7_Var_29;
  MR_Box conv6_ExistQVarsMapping_30;
  MR_Box conv5_FoundInvalidType_15;
  MR_Box conv4_STATE_VARIABLE_Specs_44_44;

  {
    Var_40 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_9[0]));
    MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (hlds__make_hlds__add_type__check_subtype_ctor_9_p_0_1));
    MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 6));
    MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (TypeTable_10));
    MR_hl_field(MR_mktag(0), Var_40, 4) = ((MR_Box) (TVarSet_11));
    MR_hl_field(MR_mktag(0), Var_40, 5) = ((MR_Box) (TypeStatus_12));
    MR_hl_field(MR_mktag(0), Var_40, 6) = ((MR_Box) (CtorSymName_19));
    MR_hl_field(MR_mktag(0), Var_40, 7) = ((MR_Box) (MaybeExistConstraints_18));
    MR_hl_field(MR_mktag(0), Var_40, 8) = ((MR_Box) (MaybeSuperExistConstraints_24));
  }
  Var_42 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]));
  mercury__list__foldl4_corresponding_11_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_2[1]), (MR_Word) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_found_invalid_type_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[5]), Var_40, Args_20, SuperArgs_26, ((MR_Box) ((MR_Integer) 1)), &conv7_Var_29, ((MR_Box) (Var_42)), &conv6_ExistQVarsMapping_30, ((MR_Box) ((MR_Integer) 0)), &conv5_FoundInvalidType_15, ((MR_Box) (STATE_VARIABLE_Specs_0_38)), &conv4_STATE_VARIABLE_Specs_44_44);
  ExistQVarsMapping_30 = ((MR_Word) (conv6_ExistQVarsMapping_30));
  FoundInvalidType_15 = ((MR_Word) (conv5_FoundInvalidType_15));
  STATE_VARIABLE_Specs_44_44 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_44_44));
  switch (FoundInvalidType_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      if ((MaybeExistConstraints_18 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((MaybeSuperExistConstraints_24 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *STATE_VARIABLE_FoundInvalidType_37 = STATE_VARIABLE_FoundInvalidType_0_36;
          *STATE_VARIABLE_Specs_39 = STATE_VARIABLE_Specs_44_44;
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_type.check_subtype_ctor\'/9", (MR_String) "exist_constraints mismatch");
            return;
          }
      else
      {
        MR_Word Var_68 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_18), (MR_Integer) 1));

        if ((MaybeSuperExistConstraints_24 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_type.check_subtype_ctor\'/9", (MR_String) "exist_constraints mismatch");
            return;
          }
        else
        {
          MR_Word SuperConstraints_32 = (MR_Word) (MR_body((MR_Word) (MaybeSuperExistConstraints_24), (MR_Integer) 1));
          MR_Word CtorSymNameArity_33;

          {
            CtorSymNameArity_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CtorSymNameArity_33, 0) = ((MR_Box) (CtorSymName_19));
            MR_hl_field(MR_mktag(0), CtorSymNameArity_33, 1) = ((MR_Box) (Arity_21));
          }
          hlds__make_hlds__add_type__check_subtype_ctor_exist_constraints_9_p_0(CtorSymNameArity_33, Var_68, SuperConstraints_32, ExistQVarsMapping_30, Context_22, STATE_VARIABLE_FoundInvalidType_0_36, STATE_VARIABLE_FoundInvalidType_37, STATE_VARIABLE_Specs_44_44, STATE_VARIABLE_Specs_39);
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *STATE_VARIABLE_FoundInvalidType_37 = FoundInvalidType_15;
        *STATE_VARIABLE_Specs_39 = STATE_VARIABLE_Specs_44_44;
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctor_exist_constraints_9_p_0(
  MR_Word CtorSymNameArity_10,
  MR_Word ExistConstraints_11,
  MR_Word SuperExistConstraints_12,
  MR_Word ExistQVarsMapping_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_30,
  MR_Word * STATE_VARIABLE_FoundInvalidType_31,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33)
{
  MR_bool succeeded;
  MR_Word Constraints_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints_11, (MR_Integer) 1))));
  MR_Word SuperConstraints0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SuperExistConstraints_12, (MR_Integer) 1))));
  MR_Word SuperConstraints_25;
  MR_Word SortedConstraints_26;
  MR_Word SortedSuperConstraints_27;

  parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(ExistQVarsMapping_13, SuperConstraints0_22, &SuperConstraints_25);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Constraints_18, &SortedConstraints_26);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), SuperConstraints_25, &SortedSuperConstraints_27);
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[137]), ((MR_Box) (SortedConstraints_26)), ((MR_Box) (SortedSuperConstraints_27)));
  if (succeeded)
  {
    *STATE_VARIABLE_Specs_33 = STATE_VARIABLE_Specs_0_32;
    *STATE_VARIABLE_FoundInvalidType_31 = STATE_VARIABLE_FoundInvalidType_0_30;
  }
  else
  {
    MR_Word Pieces_28;
    MR_Word Spec_29;
    MR_Word Var_36;
    MR_Word Var_37;

    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (CtorSymNameArity_10));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[140])));
    }
    {
      Pieces_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[138])));
      MR_hl_field(MR_mktag(1), Pieces_28, 1) = ((MR_Box) (Var_36));
    }
    {
      Spec_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_29, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_subtype_ctor_exist_constraints\'/9"));
      MR_hl_field(MR_mktag(1), Spec_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_29, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(MR_mktag(1), Spec_29, 3) = ((MR_Box) (Context_14));
      MR_hl_field(MR_mktag(1), Spec_29, 4) = ((MR_Box) (Pieces_28));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_33 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_29));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_32));
    }
    *STATE_VARIABLE_FoundInvalidType_31 = (MR_Integer) 1;
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
      HeadCtor_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      TailCtors_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      HeadName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCtor_5, (MR_Integer) 2))));
      Var_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadCtor_5, (MR_Integer) 4))));
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

static MR_bool MR_CALL 
hlds__make_hlds__add_type__subtype_defn_int_supertype_defn_impl_2_p_0(
  MR_Word SubTypeStatus_3,
  MR_Word SuperTypeStatus_4)
{
  MR_bool succeeded;
  MR_Word Var_5;
  MR_Word Var_6;
  MR_Word Var_7;
  MR_Word Var_8;

  Var_5 = hlds__status__type_status_defined_in_this_module_1_f_0(SubTypeStatus_3);
  succeeded = (Var_5 == (MR_Integer) 1);
  if (succeeded)
  {
    Var_6 = hlds__status__type_status_defined_in_impl_section_1_f_0(SubTypeStatus_3);
    succeeded = (Var_6 == (MR_Integer) 0);
    if (succeeded)
    {
      Var_7 = hlds__status__type_status_defined_in_this_module_1_f_0(SuperTypeStatus_4);
      succeeded = (Var_7 == (MR_Integer) 1);
      if (succeeded)
      {
        Var_8 = hlds__status__type_status_defined_in_impl_section_1_f_0(SuperTypeStatus_4);
        succeeded = (Var_8 == (MR_Integer) 1);
      }
    }
  }
  return succeeded;
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
    Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (ModuleName_8));
    MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (FieldName_6));
  }
  mercury__multi_map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0), ((MR_Box) (Var_12)), ((MR_Box) (FieldNameDefn_7)), STATE_VARIABLE_FieldNameTable_0_10, STATE_VARIABLE_FieldNameTable_11);
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type__is_conflicting_field_defn_2_p_0(
  MR_Word FieldDefnA_3,
  MR_Word FieldDefnB_4)
{
  MR_bool succeeded;
  MR_Word TypeCtor_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldDefnA_3, (MR_Integer) 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldDefnB_4, (MR_Integer) 2))));

  succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor_7, Var_14);
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_to_list_6_p_0(
  MR_Word TypeCtor_7,
  MR_String ConsName_8,
  MR_Integer Arity_9,
  MR_Word ModuleQual_10,
  MR_Word STATE_VARIABLE_ConsIds_0_14,
  MR_Word * STATE_VARIABLE_ConsIds_15)
{
  MR_Word ConsIdA_12;
  MR_Word ConsIdB_13;
  MR_Word Var_16;
  MR_Word Var_18;
  MR_Word Var_20;

  {
    Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (ModuleQual_10));
    MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (ConsName_8));
  }
  {
    ConsIdA_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), ConsIdA_12, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(MR_mktag(3), ConsIdA_12, 1) = ((MR_Box) (Var_16));
    MR_hl_field(MR_mktag(3), ConsIdA_12, 2) = ((MR_Box) (Arity_9));
    MR_hl_field(MR_mktag(3), ConsIdA_12, 3) = ((MR_Box) (TypeCtor_7));
  }
  Var_18 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
  {
    ConsIdB_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), ConsIdB_13, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(MR_mktag(3), ConsIdB_13, 1) = ((MR_Box) (Var_16));
    MR_hl_field(MR_mktag(3), ConsIdB_13, 2) = ((MR_Box) (Arity_9));
    MR_hl_field(MR_mktag(3), ConsIdB_13, 3) = ((MR_Box) (Var_18));
  }
  {
    Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (ConsIdB_13));
    MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (STATE_VARIABLE_ConsIds_0_14));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_ConsIds_15 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ConsIdA_12));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_20));
  }
}

void MR_CALL 
hlds__make_hlds__add_type__add_du_ctors_check_subtype_check_foreign_type_9_p_0(
  MR_Word TypeTable_10,
  MR_Word TypeCtor_11,
  MR_Word TypeDefn_12,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_60,
  MR_Word * STATE_VARIABLE_FoundInvalidType_61,
  MR_Word STATE_VARIABLE_ModuleInfo_0_62,
  MR_Word * STATE_VARIABLE_ModuleInfo_63,
  MR_Word STATE_VARIABLE_Specs_0_64,
  MR_Word * STATE_VARIABLE_Specs_65)
{
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
        MR_Word OoMCtors_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BodyDu_23, (MR_Integer) 0))));
        MR_Word MaybeSuperType_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BodyDu_23, (MR_Integer) 1))));
        MR_Word CtorMap0_36;
        MR_Word PQInfo_37;
        MR_Word CtorFieldMap0_38;
        MR_Word TypeCtorSymName_39;
        MR_Word TypeCtorModuleName_42;
        MR_Word HeadCtor_44;
        MR_Word TailCtors_45;
        MR_Word CtorFieldMap1_46;
        MR_Word CtorMap1_47;
        MR_Word CtorAddSpecs1_48;
        MR_Word CtorFieldMap_49;
        MR_Word CtorMap_50;
        MR_Word CtorAddSpecs_51;
        MR_Word STATE_VARIABLE_FoundInvalidType_69_69;
        MR_Word STATE_VARIABLE_Specs_70_70;
        MR_Word STATE_VARIABLE_ModuleInfo_73_73;
        MR_Word STATE_VARIABLE_ModuleInfo_77_77;

        if ((MaybeSuperType_25 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          STATE_VARIABLE_FoundInvalidType_69_69 = STATE_VARIABLE_FoundInvalidType_0_60;
          STATE_VARIABLE_ModuleInfo_73_73 = STATE_VARIABLE_ModuleInfo_0_62;
          STATE_VARIABLE_Specs_70_70 = STATE_VARIABLE_Specs_0_64;
        }
        else
        {
          MR_Word SuperType_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSuperType_25, (MR_Integer) 0))));
          MR_Word MaybeSetSubtypeNoncanon_30;

          hlds__make_hlds__add_type__check_subtype_defn_11_p_0(TypeTable_10, TVarSet_17, TypeCtor_11, TypeDefn_12, BodyDu_23, SuperType_29, &MaybeSetSubtypeNoncanon_30, STATE_VARIABLE_FoundInvalidType_0_60, &STATE_VARIABLE_FoundInvalidType_69_69, STATE_VARIABLE_Specs_0_64, &STATE_VARIABLE_Specs_70_70);
          switch (MaybeSetSubtypeNoncanon_30) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_ModuleInfo_73_73 = STATE_VARIABLE_ModuleInfo_0_62;
              break;
            case (MR_Integer) 1:
              {
                MR_Word NoncanonBodyDu_31;
                MR_Word NoncanonBody_32;
                MR_Word NoncanonTypeDefn_33;
                MR_Word TypeTable0_34;
                MR_Word TypeTable1_35;
                MR_Word Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BodyDu_23, (MR_Integer) 0))));
                MR_Word Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BodyDu_23, (MR_Integer) 1))));
                MR_Word Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BodyDu_23, (MR_Integer) 3))));
                MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BodyDu_23, (MR_Integer) 4))));

                {
                  NoncanonBodyDu_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), NoncanonBodyDu_31, 0) = ((MR_Box) (Var_81));
                  MR_hl_field(MR_mktag(0), NoncanonBodyDu_31, 1) = ((MR_Box) (Var_82));
                  MR_hl_field(MR_mktag(0), NoncanonBodyDu_31, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_3[0])));
                  MR_hl_field(MR_mktag(0), NoncanonBodyDu_31, 3) = ((MR_Box) (Var_84));
                  MR_hl_field(MR_mktag(0), NoncanonBodyDu_31, 4) = ((MR_Box) (Var_85));
                }
                NoncanonBody_32 = (MR_Word) ((MR_Word) (NoncanonBodyDu_31));
                hlds__hlds_data__set_type_defn_body_3_p_0(NoncanonBody_32, TypeDefn_12, &NoncanonTypeDefn_33);
                hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_62, &TypeTable0_34);
                hlds__hlds_data__replace_type_ctor_defn_4_p_0(TypeCtor_11, NoncanonTypeDefn_33, TypeTable0_34, &TypeTable1_35);
                hlds__hlds_module__module_info_set_type_table_3_p_0(TypeTable1_35, STATE_VARIABLE_ModuleInfo_0_62, &STATE_VARIABLE_ModuleInfo_73_73);
              }
              break;
          }
        }
        hlds__hlds_module__module_info_get_cons_table_2_p_0(STATE_VARIABLE_ModuleInfo_73_73, &CtorMap0_36);
        hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(STATE_VARIABLE_ModuleInfo_73_73, &PQInfo_37);
        hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(STATE_VARIABLE_ModuleInfo_73_73, &CtorFieldMap0_38);
        TypeCtorSymName_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_11, (MR_Integer) 0))));
        if (((MR_tag((MR_Word) TypeCtorSymName_39)) == (MR_Integer) 1))
          TypeCtorModuleName_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeCtorSymName_39, (MR_Integer) 0))));
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_type.add_du_ctors_check_subtype_check_foreign_type\'/9", (MR_String) "unqualified TypeCtorSymName");
            return;
          }
        HeadCtor_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_24, (MR_Integer) 0))));
        TailCtors_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_24, (MR_Integer) 1))));
        hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0(HeadCtor_44, TypeCtor_11, TypeCtorModuleName_42, TVarSet_17, TypeParams_18, KindMap_19, NeedQual_22, PQInfo_37, Status_21, CtorFieldMap0_38, &CtorFieldMap1_46, CtorMap0_36, &CtorMap1_47, (MR_Word) ((MR_Unsigned) 0U), &CtorAddSpecs1_48);
        hlds__make_hlds__add_type__add_type_defn_ctors_15_p_0(TailCtors_45, TypeCtor_11, TypeCtorModuleName_42, TVarSet_17, TypeParams_18, KindMap_19, NeedQual_22, PQInfo_37, Status_21, CtorFieldMap1_46, &CtorFieldMap_49, CtorMap1_47, &CtorMap_50, CtorAddSpecs1_48, &CtorAddSpecs_51);
        hlds__hlds_module__module_info_set_cons_table_3_p_0(CtorMap_50, STATE_VARIABLE_ModuleInfo_73_73, &STATE_VARIABLE_ModuleInfo_77_77);
        hlds__hlds_module__module_info_set_ctor_field_table_3_p_0(CtorFieldMap_49, STATE_VARIABLE_ModuleInfo_77_77, STATE_VARIABLE_ModuleInfo_63);
        if ((CtorAddSpecs_51 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *STATE_VARIABLE_FoundInvalidType_61 = STATE_VARIABLE_FoundInvalidType_69_69;
          *STATE_VARIABLE_Specs_65 = STATE_VARIABLE_Specs_70_70;
        }
        else
        {
          *STATE_VARIABLE_FoundInvalidType_61 = (MR_Integer) 1;
          *STATE_VARIABLE_Specs_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), CtorAddSpecs_51, STATE_VARIABLE_Specs_70_70);
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ForeignTypeBody_54 = (MR_Word) (MR_body((MR_Word) (Body_20), (MR_Integer) 1));
        MR_Word PrevErrors_55;
        MR_Word FoundInvalidTypeInForeignBody_56;

        hlds__hlds_data__get_type_defn_prev_errors_2_p_0(TypeDefn_12, &PrevErrors_55);
        hlds__make_hlds__add_type__check_foreign_type_for_current_target_9_p_0(TypeCtor_11, ForeignTypeBody_54, PrevErrors_55, Context_16, &FoundInvalidTypeInForeignBody_56, STATE_VARIABLE_ModuleInfo_0_62, STATE_VARIABLE_ModuleInfo_63, STATE_VARIABLE_Specs_0_64, STATE_VARIABLE_Specs_65);
        switch (FoundInvalidTypeInForeignBody_56) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_FoundInvalidType_61 = STATE_VARIABLE_FoundInvalidType_0_60;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_FoundInvalidType_61 = (MR_Integer) 1;
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        *STATE_VARIABLE_FoundInvalidType_61 = STATE_VARIABLE_FoundInvalidType_0_60;
        *STATE_VARIABLE_ModuleInfo_63 = STATE_VARIABLE_ModuleInfo_0_62;
        *STATE_VARIABLE_Specs_65 = STATE_VARIABLE_Specs_0_64;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Body_20, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_FoundInvalidType_61 = STATE_VARIABLE_FoundInvalidType_0_60;
            *STATE_VARIABLE_ModuleInfo_63 = STATE_VARIABLE_ModuleInfo_0_62;
            *STATE_VARIABLE_Specs_65 = STATE_VARIABLE_Specs_0_64;
          }
          break;
        case (MR_Integer) 1:
          {
            *STATE_VARIABLE_FoundInvalidType_61 = STATE_VARIABLE_FoundInvalidType_0_60;
            *STATE_VARIABLE_ModuleInfo_63 = STATE_VARIABLE_ModuleInfo_0_62;
            *STATE_VARIABLE_Specs_65 = STATE_VARIABLE_Specs_0_64;
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
  MR_Word STATE_VARIABLE_FoundInvalidType_0_35,
  MR_Word * STATE_VARIABLE_FoundInvalidType_36,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38)
{
  MR_bool succeeded;
  MR_Word SuperTypeCtor_21;
  MR_Word SuperTypeArgs_22;

  succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(SuperType_17, &SuperTypeCtor_21, &SuperTypeArgs_22);
  if (succeeded)
  {
    MR_Word SearchResult_23;

    hlds__make_hlds__add_type__search_super_type_ctor_defn_6_p_0(TypeTable_12, TypeCtor_14, TypeDefn_15, SuperTypeCtor_21, (MR_Word) ((MR_Unsigned) 0U), &SearchResult_23);
    if (((MR_tag((MR_Word) SearchResult_23)) == (MR_Integer) 0))
    {
      MR_Word SearchSpecs_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SearchResult_23, (MR_Integer) 0))));

      *STATE_VARIABLE_Specs_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), SearchSpecs_30, STATE_VARIABLE_Specs_0_37);
      *STATE_VARIABLE_FoundInvalidType_36 = (MR_Integer) 1;
      *MaybeSetSubtypeNoncanon_18 = (MR_Integer) 0;
    }
    else
    {
      MR_Word SuperTypeDefn_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SearchResult_23, (MR_Integer) 0))));
      MR_Word SuperTypeBodyDu_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SearchResult_23, (MR_Integer) 1))));
      MR_Word MaybeBaseMaybeCanon_26;

      hlds__make_hlds__add_type__check_supertypes_up_to_base_type_8_p_0(TypeTable_12, TypeCtor_14, TypeDefn_15, SuperTypeCtor_21, SuperTypeDefn_24, SuperTypeBodyDu_25, (MR_Word) ((MR_Unsigned) 0U), &MaybeBaseMaybeCanon_26);
      if (((MR_tag((MR_Word) MaybeBaseMaybeCanon_26)) == (MR_Integer) 0))
      {
        MR_Word UpToBaseSpecs_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeBaseMaybeCanon_26, (MR_Integer) 0))));

        *STATE_VARIABLE_Specs_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), UpToBaseSpecs_29, STATE_VARIABLE_Specs_0_37);
        *STATE_VARIABLE_FoundInvalidType_36 = (MR_Integer) 1;
        *MaybeSetSubtypeNoncanon_18 = (MR_Integer) 0;
      }
      else
      {
        MR_Word BaseMaybeCanon_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBaseMaybeCanon_26, (MR_Integer) 0))));

        if ((BaseMaybeCanon_27 == (MR_Word) ((MR_Unsigned) 0U)))
          *MaybeSetSubtypeNoncanon_18 = (MR_Integer) 0;
        else
          *MaybeSetSubtypeNoncanon_18 = (MR_Integer) 1;
        hlds__make_hlds__add_type__check_subtype_ctors_12_p_0(TypeTable_12, TypeCtor_14, TypeDefn_15, TypeBodyDu_16, SuperTypeCtor_21, SuperTypeDefn_24, SuperTypeBodyDu_25, SuperTypeArgs_22, STATE_VARIABLE_FoundInvalidType_0_35, STATE_VARIABLE_FoundInvalidType_36, STATE_VARIABLE_Specs_0_37, STATE_VARIABLE_Specs_38);
      }
    }
  }
  else
  {
    MR_String SuperTypeStr_31;
    MR_Word Pieces_32;
    MR_Word Context_33;
    MR_Word Spec_34;
    MR_Word Var_50;
    MR_Word Var_53;
    MR_Word Var_54;

    SuperTypeStr_31 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TVarSet_13, (MR_Integer) 0, SuperType_17);
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_54, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_54, 1) = ((MR_Box) (SuperTypeStr_31));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[15])));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[94])));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_53));
    }
    {
      Pieces_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[93])));
      MR_hl_field(MR_mktag(1), Pieces_32, 1) = ((MR_Box) (Var_50));
    }
    hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_15, &Context_33);
    {
      Spec_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_34, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_subtype_defn\'/11"));
      MR_hl_field(MR_mktag(1), Spec_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_34, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(MR_mktag(1), Spec_34, 3) = ((MR_Box) (Context_33));
      MR_hl_field(MR_mktag(1), Spec_34, 4) = ((MR_Box) (Pieces_32));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_38 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_34));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_37));
    }
    *STATE_VARIABLE_FoundInvalidType_36 = (MR_Integer) 1;
    *MaybeSetSubtypeNoncanon_18 = (MR_Integer) 0;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctors_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_FoundInvalidType_30;
  MR_Word conv1_STATE_VARIABLE_Specs_32;

  hlds__make_hlds__add_type__look_up_and_check_subtype_ctor_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_FoundInvalidType_30, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Specs_32);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_FoundInvalidType_30));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Specs_32));
}

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctors_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Ctor_8;

  hlds__make_hlds__add_type__rename_and_rec_subst_in_constructor_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_Ctor_8);
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
  MR_Word STATE_VARIABLE_FoundInvalidType_0_45,
  MR_Word * STATE_VARIABLE_FoundInvalidType_46,
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48)
{
  MR_Word TVarSet0_23;
  MR_Word TypeStatus_24;
  MR_Word SuperTVarSet_25;
  MR_Word SuperTypeParams0_26;
  MR_Word NewTVarSet_27;
  MR_Word Renaming_28;
  MR_Word SuperTypeParams_29;
  MR_Word TSubst_30;
  MR_Word OoMSuperCtors_31;
  MR_Word SuperCtors0_36;
  MR_Word SuperCtors_37;
  MR_Word OoMCtors_38;
  MR_Word Ctors_43;
  MR_Word Context_44;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word STATE_VARIABLE_Specs_52_52;
  MR_Box conv4_STATE_VARIABLE_FoundInvalidType_46;
  MR_Box conv3_STATE_VARIABLE_Specs_52_52;

  hlds__hlds_data__get_type_defn_tvarset_2_p_0(TypeDefn_15, &TVarSet0_23);
  hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_15, &TypeStatus_24);
  hlds__hlds_data__get_type_defn_tvarset_2_p_0(SuperTypeDefn_18, &SuperTVarSet_25);
  hlds__hlds_data__get_type_defn_tparams_2_p_0(SuperTypeDefn_18, &SuperTypeParams0_26);
  parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet0_23, SuperTVarSet_25, &NewTVarSet_27, &Renaming_28);
  parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_28, SuperTypeParams0_26, &SuperTypeParams_29);
  mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), SuperTypeParams_29, SuperTypeArgs_20, &TSubst_30);
  OoMSuperCtors_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SuperTypeBodyDu_19, (MR_Integer) 0))));
  SuperCtors0_36 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMSuperCtors_31);
  {
    Var_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_7[0]));
    MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (hlds__make_hlds__add_type__check_subtype_ctors_12_p_0_1));
    MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (Renaming_28));
    MR_hl_field(MR_mktag(0), Var_49, 4) = ((MR_Box) (TSubst_30));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Var_49, SuperCtors0_36, &SuperCtors_37);
  OoMCtors_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu_16, (MR_Integer) 0))));
  Ctors_43 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMCtors_38);
  {
    Var_50 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_8[0]));
    MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (hlds__make_hlds__add_type__check_subtype_ctors_12_p_0_2));
    MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (TypeTable_13));
    MR_hl_field(MR_mktag(0), Var_50, 4) = ((MR_Box) (NewTVarSet_27));
    MR_hl_field(MR_mktag(0), Var_50, 5) = ((MR_Box) (TypeStatus_24));
    MR_hl_field(MR_mktag(0), Var_50, 6) = ((MR_Box) (SuperTypeCtor_17));
    MR_hl_field(MR_mktag(0), Var_50, 7) = ((MR_Box) (SuperCtors_37));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_found_invalid_type_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[5]), Var_50, Ctors_43, ((MR_Box) (STATE_VARIABLE_FoundInvalidType_0_45)), &conv4_STATE_VARIABLE_FoundInvalidType_46, ((MR_Box) (STATE_VARIABLE_Specs_0_47)), &conv3_STATE_VARIABLE_Specs_52_52);
  *STATE_VARIABLE_FoundInvalidType_46 = ((MR_Word) (conv4_STATE_VARIABLE_FoundInvalidType_46));
  STATE_VARIABLE_Specs_52_52 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_52_52));
  hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_15, &Context_44);
  hlds__make_hlds__add_type__check_subtype_ctors_order_7_p_0(TypeCtor_14, Ctors_43, SuperTypeCtor_17, SuperCtors_37, Context_44, STATE_VARIABLE_Specs_52_52, STATE_VARIABLE_Specs_48);
}

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctors_order_7_p_0(
  MR_Word TypeCtor_8,
  MR_Word Ctors_9,
  MR_Word SuperTypeCtor_10,
  MR_Word SuperCtors_11,
  MR_Word Context_12,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  MR_Word ChangeHunkPieces_14;

  hlds__make_hlds__add_type__compute_subtype_ctors_diff_3_p_0(Ctors_9, SuperCtors_11, &ChangeHunkPieces_14);
  if ((ChangeHunkPieces_14 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
  else
  {
    MR_Word Pieces_17;
    MR_Word Spec_18;
    MR_Word Var_21;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Word Var_33;

    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (TypeCtor_8));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (SuperTypeCtor_10));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[152])));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[143])));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[142])));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[141])));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_21, ChangeHunkPieces_14);
    {
      Spec_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_subtype_ctors_order\'/7"));
      MR_hl_field(MR_mktag(1), Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(MR_mktag(1), Spec_18, 3) = ((MR_Box) (Context_12));
      MR_hl_field(MR_mktag(1), Spec_18, 4) = ((MR_Box) (Pieces_17));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_20 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_18));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_19));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__compute_subtype_ctors_diff_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_2;

  parse_tree__error_util__change_hunk_to_pieces_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type__compute_subtype_ctors_diff_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__add_type__IntroducedFrom__pred__compute_subtype_ctors_diff__1996__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type__compute_subtype_ctors_diff_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__add_type__IntroducedFrom__pred__compute_subtype_ctors_diff__1995__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_type__compute_subtype_ctors_diff_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv1_Str_4;

  hlds__make_hlds__add_type__ctor_to_string_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Str_4);
  *wrapper_arg_2 = ((MR_Box) (conv1_Str_4));
}

static void MR_CALL 
hlds__make_hlds__add_type__compute_subtype_ctors_diff_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv0_Str_4;

  hlds__make_hlds__add_type__ctor_to_string_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Str_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_Str_4));
}

static void MR_CALL 
hlds__make_hlds__add_type__compute_subtype_ctors_diff_3_p_0(
  MR_Word Ctors_4,
  MR_Word SuperCtors_5,
  MR_Word * ChangeHunkPieces_6)
{
  MR_bool succeeded;

  if ((Ctors_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *ChangeHunkPieces_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ctors_4, (MR_Integer) 1))));

    if ((Var_46 == (MR_Word) ((MR_Unsigned) 0U)))
      *ChangeHunkPieces_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word CtorStrs0_11;
      MR_Word SuperCtorStrs0_12;
      MR_Word CtorStrs_13;
      MR_Word SuperCtorStrs_14;
      MR_Word EditSeq_16;
      MR_Word DiffSeq_17;
      MR_Word ChangeHunks_18;
      MR_Word ChangeHunkPieceLists_19;
      MR_Word Var_23;
      MR_Word Var_24;

      mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_2[5]), Ctors_4, &CtorStrs0_11);
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_2[6]), SuperCtors_5, &SuperCtorStrs0_12);
      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_4[3]));
        MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (hlds__make_hlds__add_type__compute_subtype_ctors_diff_3_p_0_3));
        MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (SuperCtorStrs0_12));
      }
      mercury__list__filter_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_23, CtorStrs0_11, &CtorStrs_13);
      {
        Var_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_4[3]));
        MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (hlds__make_hlds__add_type__compute_subtype_ctors_diff_3_p_0_4));
        MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (CtorStrs0_11));
      }
      mercury__list__filter_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_24, SuperCtorStrs0_12, &SuperCtorStrs_14);
      mercury__edit_seq__find_shortest_edit_seq_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_2[3]), SuperCtorStrs_14, CtorStrs_13, &EditSeq_16);
      mercury__edit_seq__find_diff_seq_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SuperCtorStrs_14, EditSeq_16, &DiffSeq_17);
      mercury__edit_seq__find_change_hunks_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Integer) 3, DiffSeq_17, &ChangeHunks_18);
      mercury__list__map_3_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[6]), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[7]), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_2[7]), ChangeHunks_18, &ChangeHunkPieceLists_19);
      mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ChangeHunkPieceLists_19, ChangeHunkPieces_6);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__search_super_type_ctor_defn_6_p_0(
  MR_Word TypeTable_7,
  MR_Word OrigTypeCtor_8,
  MR_Word OrigTypeDefn_9,
  MR_Word SuperTypeCtor_10,
  MR_Word PrevSuperTypeCtors_11,
  MR_Word * MaybeSuperTypeDefn_12)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(SuperTypeCtor_10, OrigTypeCtor_8);
  if (!(succeeded))
    succeeded = mercury__list__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), PrevSuperTypeCtors_11, ((MR_Box) (SuperTypeCtor_10)));
  if (succeeded)
  {
    MR_Word Spec_13;
    MR_Word Var_21;

    Spec_13 = hlds__make_hlds__add_type__supertype_ctor_defn_error_to_spec_5_f_0(OrigTypeCtor_8, OrigTypeDefn_9, PrevSuperTypeCtors_11, SuperTypeCtor_10, (MR_Integer) 2);
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Spec_13));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeSuperTypeDefn_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_21));
    }
  }
  else
  {
    MR_Word SuperTypeDefn_14;

    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_7, SuperTypeCtor_10, &SuperTypeDefn_14);
    if (succeeded)
    {
      MR_Word OrigTypeStatus_15;
      MR_Word SuperTypeStatus_16;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_41;

      hlds__hlds_data__get_type_defn_status_2_p_0(OrigTypeDefn_9, &OrigTypeStatus_15);
      hlds__hlds_data__get_type_defn_status_2_p_0(SuperTypeDefn_14, &SuperTypeStatus_16);
      Var_38 = hlds__status__type_status_defined_in_this_module_1_f_0(OrigTypeStatus_15);
      succeeded = (Var_38 == (MR_Integer) 1);
      if (succeeded)
      {
        Var_39 = hlds__status__type_status_defined_in_impl_section_1_f_0(OrigTypeStatus_15);
        succeeded = (Var_39 == (MR_Integer) 0);
        if (succeeded)
        {
          Var_40 = hlds__status__type_status_defined_in_this_module_1_f_0(SuperTypeStatus_16);
          succeeded = (Var_40 == (MR_Integer) 1);
          if (succeeded)
          {
            Var_41 = hlds__status__type_status_defined_in_impl_section_1_f_0(SuperTypeStatus_16);
            succeeded = (Var_41 == (MR_Integer) 1);
          }
        }
      }
      if (succeeded)
      {
        MR_Word Var_24;
        MR_Word Spec_29;

        Spec_29 = hlds__make_hlds__add_type__supertype_ctor_defn_error_to_spec_5_f_0(OrigTypeCtor_8, OrigTypeDefn_9, PrevSuperTypeCtors_11, SuperTypeCtor_10, (MR_Integer) 0);
        {
          Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Spec_29));
          MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeSuperTypeDefn_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_24));
        }
      }
      else
      {
        MR_Word MaybeSuperTypeBodyDu_17;

        hlds__make_hlds__add_type__check_supertype_is_du_not_foreign_4_p_0(OrigTypeDefn_9, SuperTypeCtor_10, SuperTypeDefn_14, &MaybeSuperTypeBodyDu_17);
        if (((MR_tag((MR_Word) MaybeSuperTypeBodyDu_17)) == (MR_Integer) 0))
        {
          MR_Word SuperSpecs_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeSuperTypeBodyDu_17, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeSuperTypeDefn_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SuperSpecs_19));
          }
        }
        else
        {
          MR_Word SuperTypeBodyDu_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSuperTypeBodyDu_17, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *MaybeSuperTypeDefn_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SuperTypeDefn_14));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SuperTypeBodyDu_18));
          }
        }
      }
    }
    else
    {
      MR_Word Var_27;
      MR_Word Spec_32;

      Spec_32 = hlds__make_hlds__add_type__supertype_ctor_defn_error_to_spec_5_f_0(OrigTypeCtor_8, OrigTypeDefn_9, PrevSuperTypeCtors_11, SuperTypeCtor_10, (MR_Integer) 1);
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Spec_32));
        MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeSuperTypeDefn_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_27));
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
    MR_Word MaybeNextSuperType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CurSuperTypeBodyDu_14, (MR_Integer) 1))));
    MR_Word MaybeCanon_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CurSuperTypeBodyDu_14, (MR_Integer) 2))));

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((MaybeNextSuperType_18 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeBaseMaybeCanon_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MaybeCanon_19));
      }
    else
    {
      MR_Word NextSuperType_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNextSuperType_18, (MR_Integer) 0))));
      MR_Word NextSuperTypeCtor_23;

      succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(NextSuperType_22, &NextSuperTypeCtor_23);
      if (succeeded)
      {
        MR_Word PrevSuperTypeCtors1_24;

        {
          PrevSuperTypeCtors1_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), PrevSuperTypeCtors1_24, 0) = ((MR_Box) (CurSuperTypeCtor_12));
          MR_hl_field(MR_mktag(1), PrevSuperTypeCtors1_24, 1) = ((MR_Box) (PrevSuperTypeCtors0_15));
        }
        succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(NextSuperTypeCtor_23, OrigTypeCtor_10);
        if (!(succeeded))
          succeeded = mercury__list__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), PrevSuperTypeCtors1_24, ((MR_Box) (NextSuperTypeCtor_23)));
        if (succeeded)
        {
          MR_Word SearchSpecs_28;
          MR_Word Spec_45;

          Spec_45 = hlds__make_hlds__add_type__supertype_ctor_defn_error_to_spec_5_f_0(OrigTypeCtor_10, OrigTypeDefn_11, PrevSuperTypeCtors1_24, NextSuperTypeCtor_23, (MR_Integer) 2);
          {
            SearchSpecs_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SearchSpecs_28, 0) = ((MR_Box) (Spec_45));
            MR_hl_field(MR_mktag(1), SearchSpecs_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeBaseMaybeCanon_16 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SearchSpecs_28));
          }
        }
        else
        {
          MR_Word SearchResult_76;
          MR_Word SuperTypeDefn_46;

          succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_9, NextSuperTypeCtor_23, &SuperTypeDefn_46);
          if (succeeded)
          {
            MR_Word OrigTypeStatus_47;
            MR_Word SuperTypeStatus_48;
            MR_Word Var_70;
            MR_Word Var_71;
            MR_Word Var_72;
            MR_Word Var_73;

            hlds__hlds_data__get_type_defn_status_2_p_0(OrigTypeDefn_11, &OrigTypeStatus_47);
            hlds__hlds_data__get_type_defn_status_2_p_0(SuperTypeDefn_46, &SuperTypeStatus_48);
            Var_70 = hlds__status__type_status_defined_in_this_module_1_f_0(OrigTypeStatus_47);
            succeeded = (Var_70 == (MR_Integer) 1);
            if (succeeded)
            {
              Var_71 = hlds__status__type_status_defined_in_impl_section_1_f_0(OrigTypeStatus_47);
              succeeded = (Var_71 == (MR_Integer) 0);
              if (succeeded)
              {
                Var_72 = hlds__status__type_status_defined_in_this_module_1_f_0(SuperTypeStatus_48);
                succeeded = (Var_72 == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_73 = hlds__status__type_status_defined_in_impl_section_1_f_0(SuperTypeStatus_48);
                  succeeded = (Var_73 == (MR_Integer) 1);
                }
              }
            }
            if (succeeded)
            {
              MR_Word Var_56;
              MR_Word Spec_61;

              Spec_61 = hlds__make_hlds__add_type__supertype_ctor_defn_error_to_spec_5_f_0(OrigTypeCtor_10, OrigTypeDefn_11, PrevSuperTypeCtors1_24, NextSuperTypeCtor_23, (MR_Integer) 0);
              {
                Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Spec_61));
                MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                SearchResult_76 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SearchResult_76, 0) = ((MR_Box) (Var_56));
              }
            }
            else
            {
              MR_Word MaybeSuperTypeBodyDu_49;

              hlds__make_hlds__add_type__check_supertype_is_du_not_foreign_4_p_0(OrigTypeDefn_11, NextSuperTypeCtor_23, SuperTypeDefn_46, &MaybeSuperTypeBodyDu_49);
              if (((MR_tag((MR_Word) MaybeSuperTypeBodyDu_49)) == (MR_Integer) 0))
              {
                MR_Word SuperSpecs_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeSuperTypeBodyDu_49, (MR_Integer) 0))));

                {
                  SearchResult_76 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SearchResult_76, 0) = ((MR_Box) (SuperSpecs_51));
                }
              }
              else
              {
                MR_Word SuperTypeBodyDu_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSuperTypeBodyDu_49, (MR_Integer) 0))));

                {
                  SearchResult_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), SearchResult_76, 0) = ((MR_Box) (SuperTypeDefn_46));
                  MR_hl_field(MR_mktag(1), SearchResult_76, 1) = ((MR_Box) (SuperTypeBodyDu_50));
                }
              }
            }
          }
          else
          {
            MR_Word Var_59;
            MR_Word Spec_64;

            Spec_64 = hlds__make_hlds__add_type__supertype_ctor_defn_error_to_spec_5_f_0(OrigTypeCtor_10, OrigTypeDefn_11, PrevSuperTypeCtors1_24, NextSuperTypeCtor_23, (MR_Integer) 1);
            {
              Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Spec_64));
              MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              SearchResult_76 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SearchResult_76, 0) = ((MR_Box) (Var_59));
            }
          }
          if (((MR_tag((MR_Word) SearchResult_76)) == (MR_Integer) 0))
          {
            MR_Word SearchSpecs_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SearchResult_76, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeBaseMaybeCanon_16 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SearchSpecs_74));
            }
          }
          else
          {
            MR_Word NextSuperTypeDefn_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SearchResult_76, (MR_Integer) 0))));
            MR_Word NextSuperTypeBodyDu_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SearchResult_76, (MR_Integer) 1))));
            MR_Word next_value_of_CurSuperTypeCtor_12 = NextSuperTypeCtor_23;
            MR_Word next_value_of_CurSuperTypeDefn_13 = NextSuperTypeDefn_26;
            MR_Word next_value_of_CurSuperTypeBodyDu_14 = NextSuperTypeBodyDu_27;
            MR_Word next_value_of_PrevSuperTypeCtors0_15 = PrevSuperTypeCtors1_24;

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
        MR_Word TVarSet_29;
        MR_Word Pieces_30;
        MR_Word OrigTypeContext_31;
        MR_Word Spec_32;
        MR_Word Var_36;
        MR_Word PrevSuperTypeCtors1_38;

        hlds__hlds_data__get_type_defn_tvarset_2_p_0(CurSuperTypeDefn_13, &TVarSet_29);
        {
          PrevSuperTypeCtors1_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), PrevSuperTypeCtors1_38, 0) = ((MR_Box) (CurSuperTypeCtor_12));
          MR_hl_field(MR_mktag(1), PrevSuperTypeCtors1_38, 1) = ((MR_Box) (PrevSuperTypeCtors0_15));
        }
        Pieces_30 = hlds__make_hlds__add_type__report_non_du_supertype_4_f_0(TVarSet_29, OrigTypeCtor_10, PrevSuperTypeCtors1_38, NextSuperType_22);
        hlds__hlds_data__get_type_defn_context_2_p_0(OrigTypeDefn_11, &OrigTypeContext_31);
        {
          Spec_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_32, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_supertypes_up_to_base_type\'/8"));
          MR_hl_field(MR_mktag(1), Spec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_32, 2) = ((MR_Box) ((MR_Unsigned) 40U));
          MR_hl_field(MR_mktag(1), Spec_32, 3) = ((MR_Box) (OrigTypeContext_31));
          MR_hl_field(MR_mktag(1), Spec_32, 4) = ((MR_Box) (Pieces_30));
        }
        {
          Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Spec_32));
          MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeBaseMaybeCanon_16 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_36));
        }
      }
    }
    break;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_type__report_non_du_supertype_4_f_0(
  MR_Word TVarSet_6,
  MR_Word OrigTypeCtor_7,
  MR_Word PrevSuperTypeCtors1_8,
  MR_Word NextSuperType_9)
{
  MR_Word Pieces_10;
  MR_String NextSuperTypeStr_11;
  MR_Word Var_13;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_19;
  MR_Word Var_20;

  NextSuperTypeStr_11 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TVarSet_6, (MR_Integer) 0, NextSuperType_9);
  {
    Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (NextSuperTypeStr_11));
  }
  {
    Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Var_17));
    MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[63])));
    MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (Var_16));
  }
  Var_20 = hlds__make_hlds__add_type__describe_which_is_supertype_of_chain_3_f_0((MR_Integer) 1, OrigTypeCtor_7, PrevSuperTypeCtors1_8);
  Var_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_20, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[119])));
  Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_13, Var_19);
  return Pieces_10;
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
        MR_Word Var_26;
        MR_Word Var_27;

        Var_27 = hlds__make_hlds__add_type__describe_supertype_chain_3_f_0(OrigTypeCtor_7, PrevSuperTypeCtors_9, LastSuperTypeCtor_10);
        Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_27, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[15])));
        Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[108])), Var_26);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Var_72;
        MR_Word Var_73;

        Var_73 = hlds__make_hlds__add_type__describe_supertype_chain_3_f_0(OrigTypeCtor_7, PrevSuperTypeCtors_9, LastSuperTypeCtor_10);
        Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_73, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[114])));
        Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[110])), Var_72);
      }
      break;
    case (MR_Integer) 1:
      {
        succeeded = hlds__make_hlds__add_type__special_type_ctor_not_du_1_p_0(LastSuperTypeCtor_10);
        if (succeeded)
        {
          MR_Word Var_38;
          MR_Word Var_39;

          Var_39 = hlds__make_hlds__add_type__describe_supertype_chain_3_f_0(OrigTypeCtor_7, PrevSuperTypeCtors_9, LastSuperTypeCtor_10);
          Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_39, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[119])));
          Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[115])), Var_38);
        }
        else
        {
          MR_Word Var_55;
          MR_Word Var_56;

          Var_56 = hlds__make_hlds__add_type__describe_supertype_chain_3_f_0(OrigTypeCtor_7, PrevSuperTypeCtors_9, LastSuperTypeCtor_10);
          Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_56, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[124])));
          Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[120])), Var_55);
        }
      }
      break;
  }
  hlds__hlds_data__get_type_defn_context_2_p_0(OrigTypeDefn_8, &OrigTypeContext_14);
  {
    Spec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Spec_12, 0) = ((MR_Box) ((MR_String) "function \140hlds.make_hlds.add_type.supertype_ctor_defn_error_to_spec\'/5"));
    MR_hl_field(MR_mktag(1), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(1), Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(MR_mktag(1), Spec_12, 3) = ((MR_Box) (OrigTypeContext_14));
    MR_hl_field(MR_mktag(1), Spec_12, 4) = ((MR_Box) (Pieces_13));
  }
  return Spec_12;
}

static MR_Word MR_CALL 
hlds__make_hlds__add_type__describe_supertype_chain_3_f_0(
  MR_Word OrigTypeCtor_5,
  MR_Word PrevSuperTypeCtors_6,
  MR_Word LastSuperTypeCtor_7)
{
  MR_Word Pieces_8;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_17;

  {
    Var_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_10, 0) = ((MR_Box) ((MR_Unsigned) 17U));
    MR_hl_field(MR_mktag(3), Var_10, 1) = ((MR_Box) (LastSuperTypeCtor_7));
  }
  {
    Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (Var_10));
    MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[125])));
  }
  Var_17 = hlds__make_hlds__add_type__describe_which_is_supertype_of_chain_3_f_0((MR_Integer) 1, OrigTypeCtor_5, PrevSuperTypeCtors_6);
  Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_9, Var_17);
  return Pieces_8;
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
      WhichIsPieces_9 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[127]));
      break;
  }
  if ((SuperTypeCtors_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Word Var_33;

    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (OrigTypeCtor_6));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[128])));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
    }
    Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), WhichIsPieces_9, Var_29);
  }
  else
  {
    MR_Word HeadSuperTypeCtor_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SuperTypeCtors_7, (MR_Integer) 0))));
    MR_Word TailSuperTypeCtors_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SuperTypeCtors_7, (MR_Integer) 1))));
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_27;

    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (HeadSuperTypeCtor_10));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[125])));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[128])));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_19));
    }
    Var_27 = hlds__make_hlds__add_type__describe_which_is_supertype_of_chain_3_f_0((MR_Integer) 0, OrigTypeCtor_6, TailSuperTypeCtors_11);
    Var_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_16, Var_27);
    Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), WhichIsPieces_9, Var_15);
  }
  return Pieces_8;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type__special_type_ctor_not_du_1_p_0(
  MR_Word TypeCtor_2)
{
  MR_bool succeeded;

  {
    MR_Word SymName_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_2, (MR_Integer) 0))));
    MR_Integer Arity_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_2, (MR_Integer) 1))));
    MR_String TypeName_5;

    succeeded = (Arity_4 == (MR_Integer) 0);
    if (succeeded)
    {
      if (((MR_tag((MR_Word) SymName_3)) == (MR_Integer) 1))
      {
        MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_3, (MR_Integer) 0))));
        MR_Word Var_10;

        TypeName_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_3, (MR_Integer) 1))));
        Var_10 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_9, Var_10);
      }
      else
      {
        TypeName_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_3, (MR_Integer) 0))));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        succeeded = parse_tree__prog_data__is_builtin_type_name_1_p_0(TypeName_5);
    }
  }
  if (!(succeeded))
  {
    {
      MR_Word Var_6;
      MR_Word Var_7;

      succeeded = parse_tree__prog_type__type_ctor_is_higher_order_4_p_0(TypeCtor_2, &Var_6, &Var_7);
    }
    if (!(succeeded))
      succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(TypeCtor_2);
  }
  return succeeded;
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
        MR_Word IsForeign_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SuperTypeBodyDu_10, (MR_Integer) 4))));

        if ((IsForeign_15 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeSuperTypeBodyDu_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SuperTypeBodyDu_10));
          }
        else
        {
          MR_Word Pieces_17;
          MR_Word Context_18;
          MR_Word Spec_19;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_61;

          {
            Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 17U));
            MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (SuperTypeCtor_6));
          }
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
            MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[100])));
          }
          {
            Pieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[63])));
            MR_hl_field(MR_mktag(1), Pieces_17, 1) = ((MR_Box) (Var_47));
          }
          hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_5, &Context_18);
          {
            Spec_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_supertype_is_du_not_foreign\'/4"));
            MR_hl_field(MR_mktag(1), Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 40U));
            MR_hl_field(MR_mktag(1), Spec_19, 3) = ((MR_Box) (Context_18));
            MR_hl_field(MR_mktag(1), Spec_19, 4) = ((MR_Box) (Pieces_17));
          }
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Spec_19));
            MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeSuperTypeBodyDu_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_61));
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_88;
        MR_Word Var_89;
        MR_Word Var_99;
        MR_Word Pieces_101;
        MR_Word Context_102;
        MR_Word Spec_103;

        {
          Var_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_89, 0) = ((MR_Box) ((MR_Unsigned) 17U));
          MR_hl_field(MR_mktag(3), Var_89, 1) = ((MR_Box) (SuperTypeCtor_6));
        }
        {
          Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Var_89));
          MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[163])));
        }
        {
          Pieces_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_101, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[63])));
          MR_hl_field(MR_mktag(1), Pieces_101, 1) = ((MR_Box) (Var_88));
        }
        hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_5, &Context_102);
        {
          Spec_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_103, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_supertype_is_du_not_foreign\'/4"));
          MR_hl_field(MR_mktag(1), Spec_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_103, 2) = ((MR_Box) ((MR_Unsigned) 40U));
          MR_hl_field(MR_mktag(1), Spec_103, 3) = ((MR_Box) (Context_102));
          MR_hl_field(MR_mktag(1), Spec_103, 4) = ((MR_Box) (Pieces_101));
        }
        {
          Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Spec_103));
          MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeSuperTypeBodyDu_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_99));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_80;
        MR_Word Pieces_82;
        MR_Word Context_83;
        MR_Word Spec_84;

        {
          Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_70, 0) = ((MR_Box) ((MR_Unsigned) 17U));
          MR_hl_field(MR_mktag(3), Var_70, 1) = ((MR_Box) (SuperTypeCtor_6));
        }
        {
          Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
          MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[161])));
        }
        {
          Pieces_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[63])));
          MR_hl_field(MR_mktag(1), Pieces_82, 1) = ((MR_Box) (Var_69));
        }
        hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_5, &Context_83);
        {
          Spec_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_84, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_supertype_is_du_not_foreign\'/4"));
          MR_hl_field(MR_mktag(1), Spec_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_84, 2) = ((MR_Box) ((MR_Unsigned) 40U));
          MR_hl_field(MR_mktag(1), Spec_84, 3) = ((MR_Box) (Context_83));
          MR_hl_field(MR_mktag(1), Spec_84, 4) = ((MR_Box) (Pieces_82));
        }
        {
          Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Spec_84));
          MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeSuperTypeBodyDu_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_80));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), SuperTypeBody_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_107;
            MR_Word Var_108;
            MR_Word Var_118;
            MR_Word Pieces_120;
            MR_Word Context_121;
            MR_Word Spec_122;

            {
              Var_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_108, 0) = ((MR_Box) ((MR_Unsigned) 17U));
              MR_hl_field(MR_mktag(3), Var_108, 1) = ((MR_Box) (SuperTypeCtor_6));
            }
            {
              Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (Var_108));
              MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[165])));
            }
            {
              Pieces_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_120, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[63])));
              MR_hl_field(MR_mktag(1), Pieces_120, 1) = ((MR_Box) (Var_107));
            }
            hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_5, &Context_121);
            {
              Spec_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_122, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_supertype_is_du_not_foreign\'/4"));
              MR_hl_field(MR_mktag(1), Spec_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_122, 2) = ((MR_Box) ((MR_Unsigned) 40U));
              MR_hl_field(MR_mktag(1), Spec_122, 3) = ((MR_Box) (Context_121));
              MR_hl_field(MR_mktag(1), Spec_122, 4) = ((MR_Box) (Pieces_120));
            }
            {
              Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (Spec_122));
              MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeSuperTypeBodyDu_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_118));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_27;
            MR_Word Var_28;
            MR_Word Var_43;
            MR_Word Pieces_63;
            MR_Word Context_64;
            MR_Word Spec_65;

            {
              Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 17U));
              MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (SuperTypeCtor_6));
            }
            {
              Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
              MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[159])));
            }
            {
              Pieces_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[63])));
              MR_hl_field(MR_mktag(1), Pieces_63, 1) = ((MR_Box) (Var_27));
            }
            hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_5, &Context_64);
            {
              Spec_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_65, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_supertype_is_du_not_foreign\'/4"));
              MR_hl_field(MR_mktag(1), Spec_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_65, 2) = ((MR_Box) ((MR_Unsigned) 40U));
              MR_hl_field(MR_mktag(1), Spec_65, 3) = ((MR_Box) (Context_64));
              MR_hl_field(MR_mktag(1), Spec_65, 4) = ((MR_Box) (Pieces_63));
            }
            {
              Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Spec_65));
              MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeSuperTypeBodyDu_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_43));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_for_current_target_9_p_0(
  MR_Word TypeCtor_10,
  MR_Word ForeignTypeBody_11,
  MR_Word PrevErrors_12,
  MR_Word Context_13,
  MR_Word * FoundInvalidType_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_bool succeeded;
  MR_Word Globals_17;
  MR_Word Target_18;
  MR_Word Var_84;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_24, &Globals_17);
  libs__globals__get_target_2_p_0(Globals_17, &Target_18);
  backend_libs__foreign__have_foreign_type_for_backend_3_p_0(Target_18, ForeignTypeBody_11, &Var_84);
  succeeded = ((MR_Integer) 1 == Var_84);
  if (succeeded)
  {
    *FoundInvalidType_14 = (MR_Integer) 0;
    *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
  }
  else
  {
    succeeded = (PrevErrors_12 == (MR_Integer) 1);
    if (succeeded)
    {
      *FoundInvalidType_14 = (MR_Integer) 1;
      *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
    }
    else
    {
      MR_String LangStr_19;
      MR_Word MainPieces_20;
      MR_Word Msg_22;
      MR_Word Spec_23;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_41;
      MR_Word Var_44;
      MR_Word Var_47;
      MR_Word Var_50;
      MR_Word Var_53;
      MR_Word Var_56;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_81;

      LangStr_19 = libs__globals__compilation_target_string_1_f_0(Target_18);
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 17U));
        MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (TypeCtor_10));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_37, 0) = ((MR_Box) (LangStr_19));
      }
      {
        Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[15])));
      }
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[88])));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
      }
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[87])));
        MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_53));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[86])));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[85])));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[84])));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[83])));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_38));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[82])));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
      }
      {
        MainPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MainPieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[30])));
        MR_hl_field(MR_mktag(1), MainPieces_20, 1) = ((MR_Box) (Var_31));
      }
      {
        Var_73 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (MainPieces_20));
      }
      {
        Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
        MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[157])));
      }
      {
        Msg_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Msg_22, 0) = ((MR_Box) (Context_13));
        MR_hl_field(MR_mktag(2), Msg_22, 1) = ((MR_Box) (Var_72));
      }
      {
        Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Msg_22));
        MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_foreign_type_for_current_target\'/9"));
        MR_hl_field(MR_mktag(0), Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(0), Spec_23, 3) = ((MR_Box) (Var_81));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_27 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_23));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
      }
      *FoundInvalidType_14 = (MR_Integer) 1;
    }
  }
  *STATE_VARIABLE_ModuleInfo_25 = STATE_VARIABLE_ModuleInfo_0_24;
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
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_15 = STATE_VARIABLE_Specs_0_14;
      *STATE_VARIABLE_ConsTable_13 = STATE_VARIABLE_ConsTable_0_12;
      *STATE_VARIABLE_FieldNameTable_11 = STATE_VARIABLE_FieldNameTable_0_10;
    }
    else
    {
      MR_Word Ctor_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Ctors_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_FieldNameTable_52_52;
      MR_Word STATE_VARIABLE_ConsTable_53_53;
      MR_Word STATE_VARIABLE_Specs_54_54;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_FieldNameTable_0_10;
      MR_Word next_value_of_STATE_VARIABLE_ConsTable_0_12;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_14;

      hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0(Ctor_33, TypeCtor_2, TypeCtorModuleName_3, TVarSet_4, TypeParams_5, KindMap_6, NeedQual_7, PQInfo_8, TypeStatus_9, STATE_VARIABLE_FieldNameTable_0_10, &STATE_VARIABLE_FieldNameTable_52_52, STATE_VARIABLE_ConsTable_0_12, &STATE_VARIABLE_ConsTable_53_53, STATE_VARIABLE_Specs_0_14, &STATE_VARIABLE_Specs_54_54);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Ctors_34;
      next_value_of_STATE_VARIABLE_FieldNameTable_0_10 = STATE_VARIABLE_FieldNameTable_52_52;
      next_value_of_STATE_VARIABLE_ConsTable_0_12 = STATE_VARIABLE_ConsTable_53_53;
      next_value_of_STATE_VARIABLE_Specs_0_14 = STATE_VARIABLE_Specs_54_54;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_FieldNameTable_0_10 = next_value_of_STATE_VARIABLE_FieldNameTable_0_10;
      STATE_VARIABLE_ConsTable_0_12 = next_value_of_STATE_VARIABLE_ConsTable_0_12;
      STATE_VARIABLE_Specs_0_14 = next_value_of_STATE_VARIABLE_Specs_0_14;
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
  MR_Word conv3_LambdaHeadVar__2_91;

  conv3_LambdaHeadVar__2_91 = hlds__make_hlds__add_type__IntroducedFrom__func__add_type_defn_ctor__1086__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_91));
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
  MR_Word conv1_STATE_VARIABLE_ConsIds_15;

  hlds__make_hlds__add_type__add_ctor_to_list_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ConsIds_15);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ConsIds_15));
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

  (env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_94 = ((MR_Word) ((env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__conv0_OtherConsDefn_94));
  hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_2(env_ptr);
}

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_2(
  void * env_ptr_arg)
{
  struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_101;

    (env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_94, (MR_Integer) 0))));
    Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_94, (MR_Integer) 1))));
    Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_94, (MR_Integer) 2))));
    Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_94, (MR_Integer) 3))));
    Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_94, (MR_Integer) 4))));
    Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_94, (MR_Integer) 5))));
    Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_94, (MR_Integer) 6))));
    (env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0((env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17, (env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__Var_112);
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
      mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0), &(env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__conv0_OtherConsDefn_94, (env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__QualifiedConsDefnsA_43, hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_3, env_ptr);
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
  MR_Word STATE_VARIABLE_FieldNameTable_0_54,
  MR_Word * STATE_VARIABLE_FieldNameTable_55,
  MR_Word STATE_VARIABLE_ConsTable_0_56,
  MR_Word * STATE_VARIABLE_ConsTable_57,
  MR_Word STATE_VARIABLE_Specs_0_58,
  MR_Word * STATE_VARIABLE_Specs_59)
{
  struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s env;

  (env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17 = TypeCtor_17;
  {
    MR_Word MaybeExistConstraints_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 1))));
    MR_Word Name_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 2))));
    MR_Word Args_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 3))));
    MR_Integer Arity_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 4))));
    MR_Word Context_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 5))));
    MR_String BaseName_34;
    MR_Word QualifiedName_35;
    MR_Word UnqualifiedName_36;
    MR_Word QualifiedConsIdA_37;
    MR_Word QualifiedConsIdB_38;
    MR_Word UnqualifiedConsIdA_39;
    MR_Word UnqualifiedConsIdB_40;
    MR_Word ConsDefn_41;
    MR_Word PartialQuals_42;
    MR_Word FieldNames_51;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word STATE_VARIABLE_Specs_81_81;
    uint32_t _Ordinal_28 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 0)));

    BaseName_34 = mdbcomp__sym_name__unqualify_name_1_f_0(Name_30);
    {
      QualifiedName_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), QualifiedName_35, 0) = ((MR_Box) (TypeCtorModuleName_18));
      MR_hl_field(MR_mktag(1), QualifiedName_35, 1) = ((MR_Box) (BaseName_34));
    }
    {
      UnqualifiedName_36 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnqualifiedName_36, 0) = ((MR_Box) (BaseName_34));
    }
    {
      QualifiedConsIdA_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), QualifiedConsIdA_37, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), QualifiedConsIdA_37, 1) = ((MR_Box) (QualifiedName_35));
      MR_hl_field(MR_mktag(3), QualifiedConsIdA_37, 2) = ((MR_Box) (Arity_32));
      MR_hl_field(MR_mktag(3), QualifiedConsIdA_37, 3) = ((MR_Box) ((env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
    }
    Var_60 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
    {
      QualifiedConsIdB_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), QualifiedConsIdB_38, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), QualifiedConsIdB_38, 1) = ((MR_Box) (QualifiedName_35));
      MR_hl_field(MR_mktag(3), QualifiedConsIdB_38, 2) = ((MR_Box) (Arity_32));
      MR_hl_field(MR_mktag(3), QualifiedConsIdB_38, 3) = ((MR_Box) (Var_60));
    }
    {
      UnqualifiedConsIdA_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), UnqualifiedConsIdA_39, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), UnqualifiedConsIdA_39, 1) = ((MR_Box) (UnqualifiedName_36));
      MR_hl_field(MR_mktag(3), UnqualifiedConsIdA_39, 2) = ((MR_Box) (Arity_32));
      MR_hl_field(MR_mktag(3), UnqualifiedConsIdA_39, 3) = ((MR_Box) ((env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
    }
    Var_61 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
    {
      UnqualifiedConsIdB_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), UnqualifiedConsIdB_40, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), UnqualifiedConsIdB_40, 1) = ((MR_Box) (UnqualifiedName_36));
      MR_hl_field(MR_mktag(3), UnqualifiedConsIdB_40, 2) = ((MR_Box) (Arity_32));
      MR_hl_field(MR_mktag(3), UnqualifiedConsIdB_40, 3) = ((MR_Box) (Var_61));
    }
    {
      ConsDefn_41 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ConsDefn_41, 0) = ((MR_Box) ((env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
      MR_hl_field(MR_mktag(0), ConsDefn_41, 1) = ((MR_Box) (TVarSet_19));
      MR_hl_field(MR_mktag(0), ConsDefn_41, 2) = ((MR_Box) (TypeParams_20));
      MR_hl_field(MR_mktag(0), ConsDefn_41, 3) = ((MR_Box) (KindMap_21));
      MR_hl_field(MR_mktag(0), ConsDefn_41, 4) = ((MR_Box) (MaybeExistConstraints_29));
      MR_hl_field(MR_mktag(0), ConsDefn_41, 5) = ((MR_Box) (Args_31));
      MR_hl_field(MR_mktag(0), ConsDefn_41, 6) = ((MR_Box) (Context_33));
    }
    parse_tree__module_qual__get_partial_qualifiers_4_p_0((MR_Integer) 0, TypeCtorModuleName_18, PQInfo_23, &PartialQuals_42);
    (env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = hlds__hlds_cons__search_cons_table_3_p_0(STATE_VARIABLE_ConsTable_0_56, QualifiedConsIdA_37, &(env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__QualifiedConsDefnsA_43);
    if ((env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded)
      hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_4(&env);
    if ((env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded)
    {
      MR_String QualifiedConsIdStr_45;
      MR_String TypeCtorStr_46;
      MR_Word Pieces_47;
      MR_Word Spec_48;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_70;
      MR_Word Var_71;

      QualifiedConsIdStr_45 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(QualifiedConsIdA_37);
      TypeCtorStr_46 = parse_tree__prog_out__type_ctor_to_string_1_f_0((env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17);
      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (QualifiedConsIdStr_45));
      }
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (TypeCtorStr_46));
      }
      {
        Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
        MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[81])));
      }
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[79])));
        MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_70));
      }
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
        MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_67));
      }
      {
        Pieces_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[78])));
        MR_hl_field(MR_mktag(1), Pieces_47, 1) = ((MR_Box) (Var_65));
      }
      {
        Spec_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_48, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.add_type_defn_ctor\'/15"));
        MR_hl_field(MR_mktag(1), Spec_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_48, 2) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(1), Spec_48, 3) = ((MR_Box) (Context_33));
        MR_hl_field(MR_mktag(1), Spec_48, 4) = ((MR_Box) (Pieces_47));
      }
      {
        STATE_VARIABLE_Specs_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_81_81, 0) = ((MR_Box) (Spec_48));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_81_81, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_58));
      }
      *STATE_VARIABLE_ConsTable_57 = STATE_VARIABLE_ConsTable_0_56;
    }
    else
    {
      MR_Word STATE_VARIABLE_OtherConsIds_82_82;
      MR_Word STATE_VARIABLE_OtherConsIds_84_84;
      MR_Word Var_86;
      MR_Word STATE_VARIABLE_OtherConsIds_87_87;
      MR_Box conv2_STATE_VARIABLE_OtherConsIds_87_87;

      {
        STATE_VARIABLE_OtherConsIds_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_OtherConsIds_82_82, 0) = ((MR_Box) (QualifiedConsIdB_38));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_OtherConsIds_82_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      switch (NeedQual_22) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word Var_85;

            {
              Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (UnqualifiedConsIdB_40));
              MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (STATE_VARIABLE_OtherConsIds_82_82));
            }
            {
              STATE_VARIABLE_OtherConsIds_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_OtherConsIds_84_84, 0) = ((MR_Box) (UnqualifiedConsIdA_39));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_OtherConsIds_84_84, 1) = ((MR_Box) (Var_85));
            }
          }
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_OtherConsIds_84_84 = STATE_VARIABLE_OtherConsIds_82_82;
          break;
      }
      {
        Var_86 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) (hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_5));
        MR_hl_field(MR_mktag(0), Var_86, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_86, 3) = ((MR_Box) ((env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
        MR_hl_field(MR_mktag(0), Var_86, 4) = ((MR_Box) (BaseName_34));
        MR_hl_field(MR_mktag(0), Var_86, 5) = ((MR_Box) (Arity_32));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[2]), Var_86, PartialQuals_42, ((MR_Box) (STATE_VARIABLE_OtherConsIds_84_84)), &conv2_STATE_VARIABLE_OtherConsIds_87_87);
      STATE_VARIABLE_OtherConsIds_87_87 = ((MR_Word) (conv2_STATE_VARIABLE_OtherConsIds_87_87));
      hlds__hlds_cons__insert_into_cons_table_5_p_0(QualifiedConsIdA_37, STATE_VARIABLE_OtherConsIds_87_87, ConsDefn_41, STATE_VARIABLE_ConsTable_0_56, STATE_VARIABLE_ConsTable_57);
      STATE_VARIABLE_Specs_81_81 = STATE_VARIABLE_Specs_0_58;
    }
    FieldNames_51 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[3]), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_2[4]), Args_31);
    hlds__make_hlds__add_type__add_ctor_field_names_11_p_0(FieldNames_51, NeedQual_22, PartialQuals_42, (env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17, QualifiedConsIdA_37, TypeStatus_24, (MR_Integer) 1, STATE_VARIABLE_FieldNameTable_0_54, STATE_VARIABLE_FieldNameTable_55, STATE_VARIABLE_Specs_81_81, STATE_VARIABLE_Specs_59);
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_names_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_FieldNameTable_11;

  hlds__make_hlds__add_type__do_add_ctor_field_5_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_FieldNameTable_11);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_FieldNameTable_11));
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_names_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__add_type__is_conflicting_field_defn_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_names_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word NeedQual_2,
  MR_Word PartialQuals_3,
  MR_Word TypeCtor_4,
  MR_Word ConsId_5,
  MR_Word TypeStatus_6,
  MR_Integer FieldNumber_7,
  MR_Word STATE_VARIABLE_FieldNameTable_0_8,
  MR_Word * STATE_VARIABLE_FieldNameTable_9,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_11 = STATE_VARIABLE_Specs_0_10;
      *STATE_VARIABLE_FieldNameTable_9 = STATE_VARIABLE_FieldNameTable_0_8;
    }
    else
    {
      MR_Word MaybeCtorFieldName_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word MaybeCtorFieldNames_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_FieldNameTable_42_42;
      MR_Word STATE_VARIABLE_Specs_43_43;
      MR_Integer Var_44;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_FieldNumber_7;
      MR_Word next_value_of_STATE_VARIABLE_FieldNameTable_0_8;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_10;

      if ((MaybeCtorFieldName_24 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        STATE_VARIABLE_FieldNameTable_42_42 = STATE_VARIABLE_FieldNameTable_0_8;
        STATE_VARIABLE_Specs_43_43 = STATE_VARIABLE_Specs_0_10;
      }
      else
      {
        MR_Word FieldName_34;
        MR_Word FieldNameContext_35;
        MR_Word FieldDefn_36;
        MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCtorFieldName_24, (MR_Integer) 0))));
        MR_Word FieldModule_60;
        MR_Word TypeCtorInfo_37_76;
        MR_Word ExistingDefns_62;
        MR_Word Var_67;
        MR_Box conv0_ExistingDefns_62;
        MR_Box conv1__ConflictingDefn_63;

        FieldName_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 0))));
        FieldNameContext_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 1))));
        {
          FieldDefn_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), FieldDefn_36, 0) = ((MR_Box) (FieldNameContext_35));
          MR_hl_field(MR_mktag(0), FieldDefn_36, 1) = ((MR_Box) (TypeStatus_6));
          MR_hl_field(MR_mktag(0), FieldDefn_36, 2) = ((MR_Box) (TypeCtor_4));
          MR_hl_field(MR_mktag(0), FieldDefn_36, 3) = ((MR_Box) (ConsId_5));
          MR_hl_field(MR_mktag(0), FieldDefn_36, 4) = ((MR_Box) (FieldNumber_7));
        }
        if (((MR_tag((MR_Word) FieldName_34)) == (MR_Integer) 1))
          FieldModule_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldName_34, (MR_Integer) 0))));
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_type.add_ctor_field_name\'/8", (MR_String) "unqualified field name");
            return;
          }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[4]), STATE_VARIABLE_FieldNameTable_0_8, ((MR_Box) (FieldName_34)), &conv0_ExistingDefns_62);
        if (succeeded)
        {
          ExistingDefns_62 = ((MR_Word) (conv0_ExistingDefns_62));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          TypeCtorInfo_37_76 = (MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0);
          {
            Var_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (hlds__make_hlds__add_type__add_ctor_field_names_11_p_0_1));
            MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (FieldDefn_36));
          }
          succeeded = mercury__list__find_first_match_3_p_0(TypeCtorInfo_37_76, Var_67, ExistingDefns_62, &conv1__ConflictingDefn_63);
          if (succeeded)
            succeeded = MR_TRUE;
        }
        if (succeeded)
          STATE_VARIABLE_FieldNameTable_42_42 = STATE_VARIABLE_FieldNameTable_0_8;
        else
        {
          MR_String UnqualFieldName_64;
          MR_Word STATE_VARIABLE_FieldNameTable_30_69;
          MR_Word Var_70;
          MR_Word Var_71;
          MR_Box conv3_STATE_VARIABLE_FieldNameTable_42_42;

          UnqualFieldName_64 = mdbcomp__sym_name__unqualify_name_1_f_0(FieldName_34);
          switch (NeedQual_2) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Var_68;

                {
                  Var_68 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (UnqualFieldName_64));
                }
                mercury__multi_map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0), ((MR_Box) (Var_68)), ((MR_Box) (FieldDefn_36)), STATE_VARIABLE_FieldNameTable_0_8, &STATE_VARIABLE_FieldNameTable_30_69);
              }
              break;
            case (MR_Integer) 0:
              STATE_VARIABLE_FieldNameTable_30_69 = STATE_VARIABLE_FieldNameTable_0_8;
              break;
          }
          {
            Var_70 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (hlds__make_hlds__add_type__add_ctor_field_names_11_p_0_2));
            MR_hl_field(MR_mktag(0), Var_70, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_70, 3) = ((MR_Box) (UnqualFieldName_64));
            MR_hl_field(MR_mktag(0), Var_70, 4) = ((MR_Box) (FieldDefn_36));
          }
          {
            Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (FieldModule_60));
            MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (PartialQuals_3));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_2[0]), Var_70, Var_71, ((MR_Box) (STATE_VARIABLE_FieldNameTable_30_69)), &conv3_STATE_VARIABLE_FieldNameTable_42_42);
          STATE_VARIABLE_FieldNameTable_42_42 = ((MR_Word) (conv3_STATE_VARIABLE_FieldNameTable_42_42));
        }
        STATE_VARIABLE_Specs_43_43 = STATE_VARIABLE_Specs_0_10;
      }
      Var_44 = (MR_Integer) ((MR_Unsigned) FieldNumber_7 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = MaybeCtorFieldNames_25;
      next_value_of_FieldNumber_7 = Var_44;
      next_value_of_STATE_VARIABLE_FieldNameTable_0_8 = STATE_VARIABLE_FieldNameTable_42_42;
      next_value_of_STATE_VARIABLE_Specs_0_10 = STATE_VARIABLE_Specs_43_43;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      FieldNumber_7 = next_value_of_FieldNumber_7;
      STATE_VARIABLE_FieldNameTable_0_8 = next_value_of_STATE_VARIABLE_FieldNameTable_0_8;
      STATE_VARIABLE_Specs_0_10 = next_value_of_STATE_VARIABLE_Specs_0_10;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_9_p_0(
  MR_Word TypeStatus0_10,
  MR_Word NeedQual_11,
  MR_Word ItemTypeDefnInfo_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * STATE_VARIABLE_ModuleInfo_40,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_41,
  MR_Word * STATE_VARIABLE_FoundInvalidType_42,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44)
{
  MR_bool succeeded;
  MR_Word Specs_15;
  MR_Word SymName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_12, (MR_Integer) 0))));
  MR_Word TypeParams_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_12, (MR_Integer) 1))));
  MR_Word ParseTreeTypeDefn_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_12, (MR_Integer) 2))));
  MR_Word TVarSet_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_12, (MR_Integer) 3))));
  MR_Word Context_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_12, (MR_Integer) 4))));
  MR_Integer Arity_22;
  MR_Word TypeCtor_23;
  MR_Word Body_24;
  MR_Word TypeStatus_27;
  MR_Word KindMap_28;
  MR_Word HLDSTypeDefn0_29;
  MR_Word STATE_VARIABLE_ModuleInfo_45_45;

  mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), TypeParams_17, &Arity_22);
  {
    TypeCtor_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeCtor_23, 0) = ((MR_Box) (SymName_16));
    MR_hl_field(MR_mktag(0), TypeCtor_23, 1) = ((MR_Box) (Arity_22));
  }
  hlds__make_hlds__add_type__convert_type_defn_to_hlds_5_p_0(ParseTreeTypeDefn_18, TypeCtor_23, &Body_24, STATE_VARIABLE_ModuleInfo_0_39, &STATE_VARIABLE_ModuleInfo_45_45);
  if (((MR_tag((MR_Word) Body_24)) == (MR_Integer) 0))
  {
    MR_String Var_46;

    Var_46 = mercury__term__context_file_1_f_0(Context_20);
    succeeded = mercury__string__suffix_2_p_0(Var_46, (MR_String) ".int2");
  }
  else
  if (((((MR_tag((MR_Word) Body_24)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Body_24, (MR_Integer) 0)))) == (MR_Integer) 1))))
    succeeded = MR_TRUE;
  else
    succeeded = MR_FALSE;
  if (succeeded)
    hlds__status__type_make_status_abstract_2_p_0(TypeStatus0_10, &TypeStatus_27);
  else
    TypeStatus_27 = TypeStatus0_10;
  mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0), &KindMap_28);
  hlds__hlds_data__create_hlds_type_defn_10_p_0(TVarSet_19, TypeParams_17, KindMap_28, Body_24, (MR_Integer) 0, TypeStatus_27, NeedQual_11, (MR_Integer) 0, Context_20, &HLDSTypeDefn0_29);
  switch (MR_tag((MR_Word) ParseTreeTypeDefn_18)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      hlds__make_hlds__add_type__module_add_type_defn_mercury_13_p_0(TypeStatus_27, TypeCtor_23, TypeParams_17, ParseTreeTypeDefn_18, Body_24, HLDSTypeDefn0_29, Context_20, STATE_VARIABLE_ModuleInfo_45_45, STATE_VARIABLE_ModuleInfo_40, STATE_VARIABLE_FoundInvalidType_0_41, STATE_VARIABLE_FoundInvalidType_42, (MR_Word) ((MR_Unsigned) 0U), &Specs_15);
      break;
    case (MR_Integer) 2:
      {
        MR_Word Specs0_37;
        MR_Word Var_53;
        MR_Word Var_54;

        Var_53 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_27);
        succeeded = (Var_53 == (MR_Integer) 1);
        if (succeeded)
        {
          Var_54 = hlds__status__type_status_defined_in_impl_section_1_f_0(TypeStatus_27);
          succeeded = (Var_54 == (MR_Integer) 0);
        }
        if (succeeded)
        {
          MR_Word SolverPieces_35;
          MR_Word SolverSpec_36;
          MR_Word Var_57;
          MR_Word Var_60;
          MR_Word Var_61;

          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 17U));
            MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (TypeCtor_23));
          }
          {
            Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
            MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[12])));
          }
          {
            Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[9])));
            MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_60));
          }
          {
            SolverPieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SolverPieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[8])));
            MR_hl_field(MR_mktag(1), SolverPieces_35, 1) = ((MR_Box) (Var_57));
          }
          {
            SolverSpec_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SolverSpec_36, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.module_add_type_defn\'/9"));
            MR_hl_field(MR_mktag(1), SolverSpec_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), SolverSpec_36, 2) = ((MR_Box) ((MR_Unsigned) 40U));
            MR_hl_field(MR_mktag(1), SolverSpec_36, 3) = ((MR_Box) (Context_20));
            MR_hl_field(MR_mktag(1), SolverSpec_36, 4) = ((MR_Box) (SolverPieces_35));
          }
          {
            Specs0_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Specs0_37, 0) = ((MR_Box) (SolverSpec_36));
            MR_hl_field(MR_mktag(1), Specs0_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        else
          Specs0_37 = (MR_Word) ((MR_Unsigned) 0U);
        hlds__make_hlds__add_type__module_add_type_defn_mercury_13_p_0(TypeStatus_27, TypeCtor_23, TypeParams_17, ParseTreeTypeDefn_18, Body_24, HLDSTypeDefn0_29, Context_20, STATE_VARIABLE_ModuleInfo_45_45, STATE_VARIABLE_ModuleInfo_40, STATE_VARIABLE_FoundInvalidType_0_41, STATE_VARIABLE_FoundInvalidType_42, Specs0_37, &Specs_15);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ParseTreeTypeDefn_18, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          hlds__make_hlds__add_type__module_add_type_defn_mercury_13_p_0(TypeStatus_27, TypeCtor_23, TypeParams_17, ParseTreeTypeDefn_18, Body_24, HLDSTypeDefn0_29, Context_20, STATE_VARIABLE_ModuleInfo_45_45, STATE_VARIABLE_ModuleInfo_40, STATE_VARIABLE_FoundInvalidType_0_41, STATE_VARIABLE_FoundInvalidType_42, (MR_Word) ((MR_Unsigned) 0U), &Specs_15);
          break;
        case (MR_Integer) 1:
          hlds__make_hlds__add_type__module_add_type_defn_abstract_11_p_0(TypeStatus_27, TypeCtor_23, Body_24, HLDSTypeDefn0_29, Context_20, STATE_VARIABLE_ModuleInfo_45_45, STATE_VARIABLE_ModuleInfo_40, STATE_VARIABLE_FoundInvalidType_0_41, STATE_VARIABLE_FoundInvalidType_42, (MR_Word) ((MR_Unsigned) 0U), &Specs_15);
          break;
        case (MR_Integer) 2:
          hlds__make_hlds__add_type__module_add_type_defn_foreign_12_p_0(TypeStatus0_10, TypeStatus_27, TypeCtor_23, Body_24, HLDSTypeDefn0_29, Context_20, STATE_VARIABLE_ModuleInfo_45_45, STATE_VARIABLE_ModuleInfo_40, STATE_VARIABLE_FoundInvalidType_0_41, STATE_VARIABLE_FoundInvalidType_42, (MR_Word) ((MR_Unsigned) 0U), &Specs_15);
          break;
      }
      break;
  }
  *STATE_VARIABLE_Specs_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Specs_15, STATE_VARIABLE_Specs_0_43);
}

static void MR_CALL 
hlds__make_hlds__add_type__convert_type_defn_to_hlds_5_p_0(
  MR_Word TypeDefn_6,
  MR_Word TypeCtor_7,
  MR_Word * HLDSBody_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_38,
  MR_Word * STATE_VARIABLE_ModuleInfo_39)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) TypeDefn_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word DetailsDu_10 = (MR_Word) ((MR_Word) (TypeDefn_6));
        MR_Word Ctors_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_10, (MR_Integer) 0))));
        MR_Word MaybeCanon_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_10, (MR_Integer) 1))));
        MR_Word MaybeDirectArgCtors_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_10, (MR_Integer) 2))));
        MR_Word TypeBodyDu_17;

        {
          TypeBodyDu_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeBodyDu_17, 0) = ((MR_Box) (Ctors_11));
          MR_hl_field(MR_mktag(0), TypeBodyDu_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), TypeBodyDu_17, 2) = ((MR_Box) (MaybeCanon_12));
          MR_hl_field(MR_mktag(0), TypeBodyDu_17, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), TypeBodyDu_17, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *HLDSBody_8 = (MR_Word) ((MR_Word) (TypeBodyDu_17));
        if ((MaybeDirectArgCtors_13 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_ModuleInfo_39 = STATE_VARIABLE_ModuleInfo_0_38;
        else
        {
          MR_Word DirectArgCtors_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDirectArgCtors_13, (MR_Integer) 0))));
          MR_Word TypeRepnDec0_19;
          MR_Word DirectArgMap0_20;
          MR_Word OldDirectArgCtors_21;
          MR_Box conv0_OldDirectArgCtors_21;

          hlds__hlds_module__module_info_get_type_repn_dec_2_p_0(STATE_VARIABLE_ModuleInfo_0_38, &TypeRepnDec0_19);
          DirectArgMap0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeRepnDec0_19, (MR_Integer) 1))));
          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[1]), DirectArgMap0_20, ((MR_Box) (TypeCtor_7)), &conv0_OldDirectArgCtors_21);
          if (succeeded)
          {
            OldDirectArgCtors_21 = ((MR_Word) (conv0_OldDirectArgCtors_21));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[1]), ((MR_Box) (DirectArgCtors_18)), ((MR_Box) (OldDirectArgCtors_21)));
            if (!(succeeded))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_type.convert_type_defn_to_hlds\'/5", (MR_String) "different DirectArgCtors for same TypeCtor");
                return;
              }
            *STATE_VARIABLE_ModuleInfo_39 = STATE_VARIABLE_ModuleInfo_0_38;
          }
          else
          {
            MR_Word DirectArgMap_22;
            MR_Word TypeRepnDec_23;
            MR_Word Var_64;
            MR_Word Var_66;
            MR_Word Var_67;

            mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[1]), ((MR_Box) (TypeCtor_7)), ((MR_Box) (DirectArgCtors_18)), DirectArgMap0_20, &DirectArgMap_22);
            Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeRepnDec0_19, (MR_Integer) 0))));
            Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeRepnDec0_19, (MR_Integer) 2))));
            Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeRepnDec0_19, (MR_Integer) 3))));
            {
              TypeRepnDec_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeRepnDec_23, 0) = ((MR_Box) (Var_64));
              MR_hl_field(MR_mktag(0), TypeRepnDec_23, 1) = ((MR_Box) (DirectArgMap_22));
              MR_hl_field(MR_mktag(0), TypeRepnDec_23, 2) = ((MR_Box) (Var_66));
              MR_hl_field(MR_mktag(0), TypeRepnDec_23, 3) = ((MR_Box) (Var_67));
            }
            hlds__hlds_module__module_info_set_type_repn_dec_3_p_0(TypeRepnDec_23, STATE_VARIABLE_ModuleInfo_0_38, STATE_VARIABLE_ModuleInfo_39);
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DetailsSub_24 = (MR_Word) (MR_body((MR_Word) (TypeDefn_6), (MR_Integer) 1));
        MR_Word SuperType_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSub_24, (MR_Integer) 0))));
        MR_Word Ctors_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSub_24, (MR_Integer) 1))));
        MR_Word MaybeSubtype_55;
        MR_Word TypeBodyDu_58;

        {
          MaybeSubtype_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeSubtype_55, 0) = ((MR_Box) (SuperType_25));
        }
        {
          TypeBodyDu_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeBodyDu_58, 0) = ((MR_Box) (Ctors_53));
          MR_hl_field(MR_mktag(0), TypeBodyDu_58, 1) = ((MR_Box) (MaybeSubtype_55));
          MR_hl_field(MR_mktag(0), TypeBodyDu_58, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), TypeBodyDu_58, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), TypeBodyDu_58, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *HLDSBody_8 = (MR_Word) ((MR_Word) (TypeBodyDu_58));
        *STATE_VARIABLE_ModuleInfo_39 = STATE_VARIABLE_ModuleInfo_0_38;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word DetailsSolver_27 = (MR_Word) (MR_body((MR_Word) (TypeDefn_6), (MR_Integer) 2));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HLDSBody_8 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (DetailsSolver_27));
        }
        *STATE_VARIABLE_ModuleInfo_39 = STATE_VARIABLE_ModuleInfo_0_38;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_6, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word EqvType_26;
            MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_6, (MR_Integer) 1))));

            EqvType_26 = (MR_Word) (Var_49);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *HLDSBody_8 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (EqvType_26));
            }
            *STATE_VARIABLE_ModuleInfo_39 = STATE_VARIABLE_ModuleInfo_0_38;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word DetailsAbstract_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_6, (MR_Integer) 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HLDSBody_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (DetailsAbstract_28));
            }
            *STATE_VARIABLE_ModuleInfo_39 = STATE_VARIABLE_ModuleInfo_0_38;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word DetailsForeign_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_6, (MR_Integer) 1))));
            MR_Word ForeignType_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_29, (MR_Integer) 0))));
            MR_Word MaybeUserEqComp_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_29, (MR_Integer) 1))));
            MR_Word Assertions_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_29, (MR_Integer) 2))));
            MR_Word Body_35;

            switch (MR_tag((MR_Word) ForeignType_30)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word CForeignType_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignType_30, (MR_Integer) 0))));
                  MR_Word Data_34;
                  MR_Word Var_46;

                  {
                    Data_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Data_34, 0) = ((MR_Box) (CForeignType_33));
                    MR_hl_field(MR_mktag(0), Data_34, 1) = ((MR_Box) (MaybeUserEqComp_31));
                    MR_hl_field(MR_mktag(0), Data_34, 2) = ((MR_Box) (Assertions_32));
                  }
                  {
                    Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Data_34));
                  }
                  {
                    Body_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Body_35, 0) = ((MR_Box) (Var_46));
                    MR_hl_field(MR_mktag(0), Body_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(0), Body_35, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word JavaForeignType_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ForeignType_30, (MR_Integer) 0))));
                  MR_Word Var_44;
                  MR_Word Data_59;

                  {
                    Data_59 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Data_59, 0) = ((MR_Box) (JavaForeignType_36));
                    MR_hl_field(MR_mktag(0), Data_59, 1) = ((MR_Box) (MaybeUserEqComp_31));
                    MR_hl_field(MR_mktag(0), Data_59, 2) = ((MR_Box) (Assertions_32));
                  }
                  {
                    Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Data_59));
                  }
                  {
                    Body_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Body_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(0), Body_35, 1) = ((MR_Box) (Var_44));
                    MR_hl_field(MR_mktag(0), Body_35, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word CSharpForeignType_37 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ForeignType_30, (MR_Integer) 0))));
                  MR_Word Var_42;
                  MR_Word Data_60;

                  {
                    Data_60 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Data_60, 0) = ((MR_Box) (CSharpForeignType_37));
                    MR_hl_field(MR_mktag(0), Data_60, 1) = ((MR_Box) (MaybeUserEqComp_31));
                    MR_hl_field(MR_mktag(0), Data_60, 2) = ((MR_Box) (Assertions_32));
                  }
                  {
                    Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Data_60));
                  }
                  {
                    Body_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Body_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(0), Body_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(0), Body_35, 2) = ((MR_Box) (Var_42));
                  }
                }
                break;
            }
            *HLDSBody_8 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Body_35)));
            *STATE_VARIABLE_ModuleInfo_39 = STATE_VARIABLE_ModuleInfo_0_38;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_foreign_12_p_0(
  MR_Word TypeStatus0_13,
  MR_Word TypeStatus1_14,
  MR_Word TypeCtor_15,
  MR_Word Body_16,
  MR_Word TypeDefn0_17,
  MR_Word Context_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_37,
  MR_Word * STATE_VARIABLE_ModuleInfo_38,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_39,
  MR_Word * STATE_VARIABLE_FoundInvalidType_40,
  MR_Word STATE_VARIABLE_Specs_0_41,
  MR_Word * STATE_VARIABLE_Specs_42)
{
  MR_bool succeeded;
  MR_Word TypeTable0_22;
  MR_Word OldDefn_23;

  hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_37, &TypeTable0_22);
  succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable0_22, TypeCtor_15, &OldDefn_23);
  if (succeeded)
  {
    MR_Word TypeStatus_24;
    MR_Word TypeDefn1_25;
    MR_Word OldTypeStatus_26;
    MR_Word OldBody_27;
    MR_Word OldContext_28;
    MR_Word STATE_VARIABLE_FoundInvalidType_43_43;
    MR_Word STATE_VARIABLE_Specs_44_44;
    MR_Word OldTypeStatus_83;

    hlds__hlds_data__get_type_defn_status_2_p_0(OldDefn_23, &OldTypeStatus_83);
    hlds__status__type_combine_status_3_p_0(TypeStatus1_14, OldTypeStatus_83, &TypeStatus_24);
    hlds__hlds_data__set_type_defn_status_3_p_0(TypeStatus_24, TypeDefn0_17, &TypeDefn1_25);
    hlds__make_hlds__add_type__check_for_inconsistent_solver_nosolver_type_8_p_0(TypeCtor_15, OldDefn_23, Body_16, Context_18, STATE_VARIABLE_FoundInvalidType_0_39, &STATE_VARIABLE_FoundInvalidType_43_43, STATE_VARIABLE_Specs_0_41, &STATE_VARIABLE_Specs_44_44);
    hlds__hlds_data__get_type_defn_status_2_p_0(OldDefn_23, &OldTypeStatus_26);
    hlds__hlds_data__get_type_defn_body_2_p_0(OldDefn_23, &OldBody_27);
    hlds__hlds_data__get_type_defn_context_2_p_0(OldDefn_23, &OldContext_28);
    succeeded = ((((MR_tag((MR_Word) OldBody_27)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), OldBody_27, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      MR_Word TypeDefn_30;
      MR_Word TypeTable_31;

      hlds__make_hlds__add_type__check_for_inconsistent_foreign_type_visibility_12_p_0(TypeCtor_15, (MR_Integer) 0, OldTypeStatus_26, OldContext_28, TypeStatus0_13, Context_18, TypeDefn1_25, &TypeDefn_30, STATE_VARIABLE_FoundInvalidType_43_43, STATE_VARIABLE_FoundInvalidType_40, STATE_VARIABLE_Specs_44_44, STATE_VARIABLE_Specs_42);
      hlds__hlds_data__replace_type_ctor_defn_4_p_0(TypeCtor_15, TypeDefn_30, TypeTable0_22, &TypeTable_31);
      hlds__hlds_module__module_info_set_type_table_3_p_0(TypeTable_31, STATE_VARIABLE_ModuleInfo_0_37, STATE_VARIABLE_ModuleInfo_38);
    }
    else
    {
      MR_Word Globals_32;
      MR_Word MergedBody_33;

      hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_37, &Globals_32);
      succeeded = hlds__make_hlds__add_type__merge_maybe_foreign_type_bodies_4_p_0(Globals_32, OldBody_27, Body_16, &MergedBody_33);
      if (succeeded)
      {
        MR_Word TypeDefn2_34;
        MR_Word TypeDefn_71;
        MR_Word TypeTable_72;

        hlds__hlds_data__set_type_defn_body_3_p_0(MergedBody_33, TypeDefn1_25, &TypeDefn2_34);
        hlds__make_hlds__add_type__check_for_inconsistent_foreign_type_visibility_12_p_0(TypeCtor_15, (MR_Integer) 1, OldTypeStatus_26, OldContext_28, TypeStatus1_14, Context_18, TypeDefn2_34, &TypeDefn_71, STATE_VARIABLE_FoundInvalidType_43_43, STATE_VARIABLE_FoundInvalidType_40, STATE_VARIABLE_Specs_44_44, STATE_VARIABLE_Specs_42);
        hlds__hlds_data__replace_type_ctor_defn_4_p_0(TypeCtor_15, TypeDefn_71, TypeTable0_22, &TypeTable_72);
        hlds__hlds_module__module_info_set_type_table_3_p_0(TypeTable_72, STATE_VARIABLE_ModuleInfo_0_37, STATE_VARIABLE_ModuleInfo_38);
      }
      else
        hlds__make_hlds__add_type__maybe_report_multiply_defined_type_10_p_0(TypeStatus_24, TypeCtor_15, Context_18, OldDefn_23, STATE_VARIABLE_ModuleInfo_0_37, STATE_VARIABLE_ModuleInfo_38, STATE_VARIABLE_FoundInvalidType_43_43, STATE_VARIABLE_FoundInvalidType_40, STATE_VARIABLE_Specs_44_44, STATE_VARIABLE_Specs_42);
    }
  }
  else
  {
    MR_Word ForeignDeclPieces_35;
    MR_Word ForeignDeclSpec_36;
    MR_Word Var_58;
    MR_Word Var_59;

    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (TypeCtor_15));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[29])));
    }
    {
      ForeignDeclPieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ForeignDeclPieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[27])));
      MR_hl_field(MR_mktag(1), ForeignDeclPieces_35, 1) = ((MR_Box) (Var_58));
    }
    {
      ForeignDeclSpec_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ForeignDeclSpec_36, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.module_add_type_defn_foreign\'/12"));
      MR_hl_field(MR_mktag(1), ForeignDeclSpec_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), ForeignDeclSpec_36, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(MR_mktag(1), ForeignDeclSpec_36, 3) = ((MR_Box) (Context_18));
      MR_hl_field(MR_mktag(1), ForeignDeclSpec_36, 4) = ((MR_Box) (ForeignDeclPieces_35));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_42 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ForeignDeclSpec_36));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_41));
    }
    *STATE_VARIABLE_FoundInvalidType_40 = (MR_Integer) 1;
    *STATE_VARIABLE_ModuleInfo_38 = STATE_VARIABLE_ModuleInfo_0_37;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_inconsistent_foreign_type_visibility_12_p_0(
  MR_Word TypeCtor_13,
  MR_Word OldIsAbstract_14,
  MR_Word OldStatus_15,
  MR_Word OldContext_16,
  MR_Word NewStatus_17,
  MR_Word NewContext_18,
  MR_Word STATE_VARIABLE_TypeDefn_0_27,
  MR_Word * STATE_VARIABLE_TypeDefn_28,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_29,
  MR_Word * STATE_VARIABLE_FoundInvalidType_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  MR_bool succeeded;

  switch (OldIsAbstract_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_33;
        MR_Word Var_34;

        Var_33 = hlds__status__type_status_is_exported_to_non_submodules_1_f_0(OldStatus_15);
        succeeded = (Var_33 == (MR_Integer) 0);
        if (succeeded)
        {
          Var_34 = hlds__status__type_status_is_exported_to_non_submodules_1_f_0(NewStatus_17);
          succeeded = (Var_34 == (MR_Integer) 1);
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_66 = (MR_Word) (OldStatus_15);

        succeeded = (Var_66 == (MR_Word) ((MR_Unsigned) 20U));
        if (succeeded)
        {
          MR_Word Var_67;

          Var_67 = hlds__status__type_status_is_exported_to_non_submodules_1_f_0(NewStatus_17);
          succeeded = (Var_67 == (MR_Integer) 0);
        }
        else
        {
          MR_Word Var_68 = (MR_Word) (OldStatus_15);

          succeeded = (Var_68 == (MR_Word) ((MR_Unsigned) 12U));
          if (succeeded)
          {
            MR_Word Var_69 = (MR_Word) (NewStatus_17);

            succeeded = (Var_69 == (MR_Word) ((MR_Unsigned) 12U));
          }
          else
          {
            MR_Word Var_70;
            MR_Word Var_71;

            Var_70 = hlds__status__type_status_is_exported_to_non_submodules_1_f_0(OldStatus_15);
            succeeded = (Var_70 == (MR_Integer) 0);
            if (succeeded)
            {
              Var_71 = hlds__status__type_status_is_exported_to_non_submodules_1_f_0(NewStatus_17);
              succeeded = (Var_71 == (MR_Integer) 0);
            }
          }
        }
        succeeded = !(succeeded);
      }
      break;
  }
  if (succeeded)
  {
    MR_Word UTC_22;
    MR_Word Pieces_23;
    MR_Word CmpRes_24;
    MR_Word Context_25;
    MR_Word Spec_26;

    {
      UTC_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), UTC_22, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(MR_mktag(3), UTC_22, 1) = ((MR_Box) (TypeCtor_13));
    }
    switch (OldIsAbstract_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_46;

          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (UTC_22));
            MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[74])));
          }
          {
            Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[70])));
            MR_hl_field(MR_mktag(1), Pieces_23, 1) = ((MR_Box) (Var_46));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_37;

          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (UTC_22));
            MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[77])));
          }
          {
            Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[75])));
            MR_hl_field(MR_mktag(1), Pieces_23, 1) = ((MR_Box) (Var_37));
          }
        }
        break;
    }
    mercury__term____Compare____context_0_0(&CmpRes_24, OldContext_16, NewContext_18);
    switch (CmpRes_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        Context_25 = NewContext_18;
        break;
      case (MR_Integer) 2:
        Context_25 = OldContext_16;
        break;
    }
    {
      Spec_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_26, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_for_inconsistent_foreign_type_visibility\'/12"));
      MR_hl_field(MR_mktag(1), Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_26, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(MR_mktag(1), Spec_26, 3) = ((MR_Box) (Context_25));
      MR_hl_field(MR_mktag(1), Spec_26, 4) = ((MR_Box) (Pieces_23));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_32 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_26));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_31));
    }
    *STATE_VARIABLE_FoundInvalidType_30 = (MR_Integer) 1;
    hlds__hlds_data__set_type_defn_prev_errors_3_p_0((MR_Integer) 1, STATE_VARIABLE_TypeDefn_0_27, STATE_VARIABLE_TypeDefn_28);
  }
  else
  {
    *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
    *STATE_VARIABLE_FoundInvalidType_30 = STATE_VARIABLE_FoundInvalidType_0_29;
    *STATE_VARIABLE_TypeDefn_28 = STATE_VARIABLE_TypeDefn_0_27;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__maybe_report_multiply_defined_type_10_p_0(
  MR_Word TypeStatus_11,
  MR_Word TypeCtor_12,
  MR_Word Context_13,
  MR_Word OldDefn_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_21,
  MR_Word * STATE_VARIABLE_ModuleInfo_22,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_23,
  MR_Word * STATE_VARIABLE_FoundInvalidType_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  MR_bool succeeded;
  MR_Word Var_27 = (MR_Word) (TypeStatus_11);

  succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
    *STATE_VARIABLE_FoundInvalidType_24 = STATE_VARIABLE_FoundInvalidType_0_23;
  }
  else
  {
    MR_Word SymName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_12, (MR_Integer) 0))));
    MR_Integer Arity_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_12, (MR_Integer) 1))));
    MR_Word OldContext_20;
    MR_Word Var_29;

    hlds__hlds_data__get_type_defn_context_2_p_0(OldDefn_14, &OldContext_20);
    Var_29 = (MR_Word) (Arity_19);
    hlds__make_hlds_error__report_multiply_defined_8_p_0((MR_String) "type", SymName_18, Var_29, Context_13, OldContext_20, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
    *STATE_VARIABLE_FoundInvalidType_24 = (MR_Integer) 1;
  }
  *STATE_VARIABLE_ModuleInfo_22 = STATE_VARIABLE_ModuleInfo_0_21;
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
    MR_Word MaybeSuperTypeB_22;
    MR_Word MaybeForeignTypeBodyB_25;
    MR_Word ForeignTypeBodyB_26;
    MR_Word ForeignTypeBody_27;
    MR_Word Target_28;
    MR_Word OpMode_29;
    MR_Word MaybeCA_47;
    MR_Word MaybeJavaA_48;
    MR_Word MaybeCSharpA_49;
    MR_Word MaybeCB_50;
    MR_Word MaybeJavaB_51;
    MR_Word MaybeCSharpB_52;
    MR_Word MaybeC_53;
    MR_Word MaybeJava_54;
    MR_Word MaybeCSharp_55;
    MR_Word Var_34;
    MR_Word Var_43;
    MR_Word Var_35;
    MR_Word Var_36;

    succeeded = ((MR_tag((MR_Word) BodyB_7)) == (MR_Integer) 1);
    if (succeeded)
    {
      ForeignTypeBodyB_12 = (MR_Word) (MR_body((MR_Word) (BodyB_7), (MR_Integer) 1));
      MaybeSuperTypeB_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BodyDuA_11, (MR_Integer) 1))));
      MaybeForeignTypeBodyB_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BodyDuA_11, (MR_Integer) 4))));
      succeeded = (MaybeSuperTypeB_22 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        if ((MaybeForeignTypeBodyB_25 == (MR_Word) ((MR_Unsigned) 0U)))
          ForeignTypeBodyB_26 = (MR_Word) (&hlds__make_hlds__add_type_scalar_common_2[2]);
        else
          ForeignTypeBodyB_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeignTypeBodyB_25, (MR_Integer) 0))));
        MaybeCA_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyB_12, (MR_Integer) 0))));
        MaybeJavaA_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyB_12, (MR_Integer) 1))));
        MaybeCSharpA_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyB_12, (MR_Integer) 2))));
        MaybeCB_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyB_26, (MR_Integer) 0))));
        MaybeJavaB_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyB_26, (MR_Integer) 1))));
        MaybeCSharpB_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyB_26, (MR_Integer) 2))));
        if ((MaybeCA_47 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          if ((MaybeCB_50 == (MR_Word) ((MR_Unsigned) 0U)))
            MaybeC_53 = (MR_Word) ((MR_Unsigned) 0U);
          else
            MaybeC_53 = MaybeCB_50;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (MaybeCB_50 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            MaybeC_53 = MaybeCA_47;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          if ((MaybeJavaA_48 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            if ((MaybeJavaB_51 == (MR_Word) ((MR_Unsigned) 0U)))
              MaybeJava_54 = (MR_Word) ((MR_Unsigned) 0U);
            else
              MaybeJava_54 = MaybeJavaB_51;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (MaybeJavaB_51 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MaybeJava_54 = MaybeJavaA_48;
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
          {
            if ((MaybeCSharpA_49 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              if ((MaybeCSharpB_52 == (MR_Word) ((MR_Unsigned) 0U)))
                MaybeCSharp_55 = (MR_Word) ((MR_Unsigned) 0U);
              else
                MaybeCSharp_55 = MaybeCSharpB_52;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (MaybeCSharpB_52 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                MaybeCSharp_55 = MaybeCSharpA_49;
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
            {
              {
                ForeignTypeBody_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ForeignTypeBody_27, 0) = ((MR_Box) (MaybeC_53));
                MR_hl_field(MR_mktag(0), ForeignTypeBody_27, 1) = ((MR_Box) (MaybeJava_54));
                MR_hl_field(MR_mktag(0), ForeignTypeBody_27, 2) = ((MR_Box) (MaybeCSharp_55));
              }
              libs__globals__get_target_2_p_0(Globals_5, &Target_28);
              libs__globals__get_op_mode_2_p_0(Globals_5, &OpMode_29);
              Var_34 = (MR_Integer) 1;
              backend_libs__foreign__have_foreign_type_for_backend_3_p_0(Target_28, ForeignTypeBody_27, &Var_43);
              succeeded = (Var_34 == Var_43);
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) OpMode_29)) == (MR_Integer) 3);
                if (succeeded)
                {
                  Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_29, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) Var_35)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_35, (MR_Integer) 0))));
                    succeeded = (Var_36 == (MR_Word) ((MR_Unsigned) 0U));
                  }
                }
                succeeded = !(succeeded);
              }
              if (succeeded)
                *Body_8 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ForeignTypeBody_27)));
              else
              {
                MR_Word TypeBodyDu_30;
                MR_Word Var_37;
                MR_Word Var_38;
                MR_Word Var_39;
                MR_Word Var_40;
                MR_Word Var_41;

                {
                  Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (ForeignTypeBody_27));
                }
                Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BodyDuA_11, (MR_Integer) 0))));
                Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BodyDuA_11, (MR_Integer) 1))));
                Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BodyDuA_11, (MR_Integer) 2))));
                Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BodyDuA_11, (MR_Integer) 3))));
                {
                  TypeBodyDu_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), TypeBodyDu_30, 0) = ((MR_Box) (Var_38));
                  MR_hl_field(MR_mktag(0), TypeBodyDu_30, 1) = ((MR_Box) (Var_39));
                  MR_hl_field(MR_mktag(0), TypeBodyDu_30, 2) = ((MR_Box) (Var_40));
                  MR_hl_field(MR_mktag(0), TypeBodyDu_30, 3) = ((MR_Box) (Var_41));
                  MR_hl_field(MR_mktag(0), TypeBodyDu_30, 4) = ((MR_Box) (Var_37));
                }
                *Body_8 = (MR_Word) ((MR_Word) (TypeBodyDu_30));
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
      MR_Word MaybeCA_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
      MR_Word MaybeJavaA_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1))));
      MR_Word MaybeCSharpA_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 2))));
      MR_Word MaybeCB_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyB_15, (MR_Integer) 0))));
      MR_Word MaybeJavaB_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyB_15, (MR_Integer) 1))));
      MR_Word MaybeCSharpB_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyB_15, (MR_Integer) 2))));
      MR_Word MaybeC_74;
      MR_Word MaybeJava_75;
      MR_Word MaybeCSharp_76;

      if ((MaybeCA_68 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        if ((MaybeCB_71 == (MR_Word) ((MR_Unsigned) 0U)))
          MaybeC_74 = (MR_Word) ((MR_Unsigned) 0U);
        else
          MaybeC_74 = MaybeCB_71;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (MaybeCB_71 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          MaybeC_74 = MaybeCA_68;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        if ((MaybeJavaA_69 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          if ((MaybeJavaB_72 == (MR_Word) ((MR_Unsigned) 0U)))
            MaybeJava_75 = (MR_Word) ((MR_Unsigned) 0U);
          else
            MaybeJava_75 = MaybeJavaB_72;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (MaybeJavaB_72 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            MaybeJava_75 = MaybeJavaA_69;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          if ((MaybeCSharpA_70 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            if ((MaybeCSharpB_73 == (MR_Word) ((MR_Unsigned) 0U)))
              MaybeCSharp_76 = (MR_Word) ((MR_Unsigned) 0U);
            else
              MaybeCSharp_76 = MaybeCSharpB_73;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (MaybeCSharpB_73 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MaybeCSharp_76 = MaybeCSharpA_70;
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
          {
            {
              ForeignTypeBody_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ForeignTypeBody_13, 0) = ((MR_Box) (MaybeC_74));
              MR_hl_field(MR_mktag(0), ForeignTypeBody_13, 1) = ((MR_Box) (MaybeJava_75));
              MR_hl_field(MR_mktag(0), ForeignTypeBody_13, 2) = ((MR_Box) (MaybeCSharp_76));
            }
            *Body_8 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ForeignTypeBody_13)));
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
  MR_Word MaybeSuperTypeB_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDuB_7, (MR_Integer) 1))));
  MR_Word MaybeForeignTypeBodyB_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDuB_7, (MR_Integer) 4))));
  MR_Word ForeignTypeBodyB_14;
  MR_Word ForeignTypeBody_15;
  MR_Word Target_16;
  MR_Word OpMode_17;
  MR_Word MaybeCA_35;
  MR_Word MaybeJavaA_36;
  MR_Word MaybeCSharpA_37;
  MR_Word MaybeCB_38;
  MR_Word MaybeJavaB_39;
  MR_Word MaybeCSharpB_40;
  MR_Word MaybeC_41;
  MR_Word MaybeJava_42;
  MR_Word MaybeCSharp_43;
  MR_Word Var_22;
  MR_Word Var_31;
  MR_Word Var_23;
  MR_Word Var_24;

  succeeded = (MaybeSuperTypeB_10 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    if ((MaybeForeignTypeBodyB_13 == (MR_Word) ((MR_Unsigned) 0U)))
      ForeignTypeBodyB_14 = (MR_Word) (&hlds__make_hlds__add_type_scalar_common_2[2]);
    else
      ForeignTypeBodyB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeignTypeBodyB_13, (MR_Integer) 0))));
    MaybeCA_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyA_6, (MR_Integer) 0))));
    MaybeJavaA_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyA_6, (MR_Integer) 1))));
    MaybeCSharpA_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyA_6, (MR_Integer) 2))));
    MaybeCB_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyB_14, (MR_Integer) 0))));
    MaybeJavaB_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyB_14, (MR_Integer) 1))));
    MaybeCSharpB_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyB_14, (MR_Integer) 2))));
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
            ForeignTypeBody_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ForeignTypeBody_15, 0) = ((MR_Box) (MaybeC_41));
            MR_hl_field(MR_mktag(0), ForeignTypeBody_15, 1) = ((MR_Box) (MaybeJava_42));
            MR_hl_field(MR_mktag(0), ForeignTypeBody_15, 2) = ((MR_Box) (MaybeCSharp_43));
          }
          libs__globals__get_target_2_p_0(Globals_5, &Target_16);
          libs__globals__get_op_mode_2_p_0(Globals_5, &OpMode_17);
          Var_22 = (MR_Integer) 1;
          backend_libs__foreign__have_foreign_type_for_backend_3_p_0(Target_16, ForeignTypeBody_15, &Var_31);
          succeeded = (Var_22 == Var_31);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) OpMode_17)) == (MR_Integer) 3);
            if (succeeded)
            {
              Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_17, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_23, (MR_Integer) 0))));
                succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
            succeeded = !(succeeded);
          }
          if (succeeded)
            *Body_8 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ForeignTypeBody_15)));
          else
          {
            MR_Word TypeBodyDu_18;
            MR_Word Var_25;
            MR_Word Var_26;
            MR_Word Var_27;
            MR_Word Var_28;
            MR_Word Var_29;

            {
              Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (ForeignTypeBody_15));
            }
            Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDuB_7, (MR_Integer) 0))));
            Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDuB_7, (MR_Integer) 1))));
            Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDuB_7, (MR_Integer) 2))));
            Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDuB_7, (MR_Integer) 3))));
            {
              TypeBodyDu_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeBodyDu_18, 0) = ((MR_Box) (Var_26));
              MR_hl_field(MR_mktag(0), TypeBodyDu_18, 1) = ((MR_Box) (Var_27));
              MR_hl_field(MR_mktag(0), TypeBodyDu_18, 2) = ((MR_Box) (Var_28));
              MR_hl_field(MR_mktag(0), TypeBodyDu_18, 3) = ((MR_Box) (Var_29));
              MR_hl_field(MR_mktag(0), TypeBodyDu_18, 4) = ((MR_Box) (Var_25));
            }
            *Body_8 = (MR_Word) ((MR_Word) (TypeBodyDu_18));
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_mercury_13_p_0(
  MR_Word TypeStatus1_14,
  MR_Word TypeCtor_15,
  MR_Word TypeParams_16,
  MR_Word ParseTreeTypeDefn_17,
  MR_Word Body_18,
  MR_Word TypeDefn0_19,
  MR_Word Context_20,
  MR_Word STATE_VARIABLE_ModuleInfo_0_35,
  MR_Word * STATE_VARIABLE_ModuleInfo_36,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_37,
  MR_Word * STATE_VARIABLE_FoundInvalidType_38,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40)
{
  MR_bool succeeded;
  MR_Word TypeTable0_24;
  MR_Word TypeStatus_26;
  MR_Word STATE_VARIABLE_FoundInvalidType_44_44;
  MR_Word STATE_VARIABLE_Specs_45_45;
  MR_Word OldDefn_25;

  hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_35, &TypeTable0_24);
  succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable0_24, TypeCtor_15, &OldDefn_25);
  if (succeeded)
  {
    MR_Word TypeDefn_27;
    MR_Word STATE_VARIABLE_FoundInvalidType_41_41;
    MR_Word STATE_VARIABLE_Specs_42_42;
    MR_Word OldTypeStatus_59;
    MR_Word OldDefnBody_28;

    hlds__hlds_data__get_type_defn_status_2_p_0(OldDefn_25, &OldTypeStatus_59);
    hlds__status__type_combine_status_3_p_0(TypeStatus1_14, OldTypeStatus_59, &TypeStatus_26);
    hlds__hlds_data__set_type_defn_status_3_p_0(TypeStatus_26, TypeDefn0_19, &TypeDefn_27);
    hlds__make_hlds__add_type__check_for_inconsistent_solver_nosolver_type_8_p_0(TypeCtor_15, OldDefn_25, Body_18, Context_20, STATE_VARIABLE_FoundInvalidType_0_37, &STATE_VARIABLE_FoundInvalidType_41_41, STATE_VARIABLE_Specs_0_39, &STATE_VARIABLE_Specs_42_42);
    hlds__hlds_data__get_type_defn_body_2_p_0(OldDefn_25, &OldDefnBody_28);
    succeeded = ((((MR_tag((MR_Word) OldDefnBody_28)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), OldDefnBody_28, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
    }
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Word Var_77 = (MR_Word) (TypeStatus_26);

      succeeded = (Var_77 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        STATE_VARIABLE_Specs_45_45 = STATE_VARIABLE_Specs_42_42;
        STATE_VARIABLE_FoundInvalidType_44_44 = STATE_VARIABLE_FoundInvalidType_41_41;
      }
      else
      {
        MR_Word SymName_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_15, (MR_Integer) 0))));
        MR_Integer Arity_75 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_15, (MR_Integer) 1))));
        MR_Word OldContext_76;
        MR_Word Var_79;

        hlds__hlds_data__get_type_defn_context_2_p_0(OldDefn_25, &OldContext_76);
        Var_79 = (MR_Word) (Arity_75);
        hlds__make_hlds_error__report_multiply_defined_8_p_0((MR_String) "type", SymName_74, Var_79, Context_20, OldContext_76, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Specs_42_42, &STATE_VARIABLE_Specs_45_45);
        STATE_VARIABLE_FoundInvalidType_44_44 = (MR_Integer) 1;
      }
      *STATE_VARIABLE_ModuleInfo_36 = STATE_VARIABLE_ModuleInfo_0_35;
    }
    else
    {
      MR_Word TypeTable_30;

      hlds__hlds_data__replace_type_ctor_defn_4_p_0(TypeCtor_15, TypeDefn_27, TypeTable0_24, &TypeTable_30);
      hlds__hlds_module__module_info_set_type_table_3_p_0(TypeTable_30, STATE_VARIABLE_ModuleInfo_0_35, STATE_VARIABLE_ModuleInfo_36);
      STATE_VARIABLE_Specs_45_45 = STATE_VARIABLE_Specs_42_42;
      STATE_VARIABLE_FoundInvalidType_44_44 = STATE_VARIABLE_FoundInvalidType_41_41;
    }
  }
  else
  {
    MR_Word TypeTable_52;

    TypeStatus_26 = TypeStatus1_14;
    hlds__hlds_data__add_type_ctor_defn_4_p_0(TypeCtor_15, TypeDefn0_19, TypeTable0_24, &TypeTable_52);
    hlds__hlds_module__module_info_set_type_table_3_p_0(TypeTable_52, STATE_VARIABLE_ModuleInfo_0_35, STATE_VARIABLE_ModuleInfo_36);
    STATE_VARIABLE_Specs_45_45 = STATE_VARIABLE_Specs_0_39;
    STATE_VARIABLE_FoundInvalidType_44_44 = STATE_VARIABLE_FoundInvalidType_0_37;
  }
  switch (MR_tag((MR_Word) ParseTreeTypeDefn_17)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word DetailsDu_31 = (MR_Word) ((MR_Word) (ParseTreeTypeDefn_17));

        hlds__make_hlds__add_type__check_for_invalid_user_defined_unify_compare_8_p_0(TypeStatus_26, TypeCtor_15, DetailsDu_31, Context_20, STATE_VARIABLE_FoundInvalidType_44_44, STATE_VARIABLE_FoundInvalidType_38, STATE_VARIABLE_Specs_45_45, STATE_VARIABLE_Specs_40);
      }
      break;
    case (MR_Integer) 1:
      {
        *STATE_VARIABLE_FoundInvalidType_38 = STATE_VARIABLE_FoundInvalidType_44_44;
        *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_45_45;
      }
      break;
    case (MR_Integer) 2:
      {
        *STATE_VARIABLE_FoundInvalidType_38 = STATE_VARIABLE_FoundInvalidType_44_44;
        *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_45_45;
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word DetailsEqv_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ParseTreeTypeDefn_17, (MR_Integer) 1))));

        hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0(TypeStatus_26, TypeCtor_15, TypeParams_16, DetailsEqv_32, Context_20, STATE_VARIABLE_FoundInvalidType_44_44, STATE_VARIABLE_FoundInvalidType_38, STATE_VARIABLE_Specs_45_45, STATE_VARIABLE_Specs_40);
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_1(
  void * env_ptr_arg)
{
  struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_3(
  void * env_ptr_arg)
{
  struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__Var_60 = ((MR_Word) ((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__conv0_Var_60));
  hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_2(env_ptr);
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_4(
  void * env_ptr_arg)
{
  struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__commit_1, 1);
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_5(
  void * env_ptr_arg)
{
  struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__TypeInfo_63_63 = (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]);
  (env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__TypeInfo_63_63, ((MR_Box) ((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__Var_60)), ((MR_Box) ((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__Var_62)));
  if ((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__succeeded)
    hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_4(env_ptr);
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_6(
  void * env_ptr_arg)
{
  struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__commit_1) == 0)
    {
      parse_tree__prog_type__type_contains_var_2_p_0((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__EqvType_17, &(env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__Var_62, hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_5, env_ptr);
      (env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_2(
  void * env_ptr_arg)
{
  struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s *) (env_ptr_arg);

  hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_6(env_ptr);
  (env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__succeeded = !((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__succeeded);
  if ((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__succeeded)
    hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_1(env_ptr);
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_7(
  void * env_ptr_arg)
{
  struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), &(env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__conv0_Var_60, (env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__TypeParams_12, hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_3, env_ptr);
      (env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0(
  MR_Word TypeStatus_10,
  MR_Word TypeCtor_11,
  MR_Word TypeParams_12,
  MR_Word DetailsEqv_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_22,
  MR_Word * STATE_VARIABLE_FoundInvalidType_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s env;

  (env).hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__TypeParams_12 = TypeParams_12;
  {
    MR_Word Var_26;

    (env).hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__EqvType_17 = (MR_Word) (DetailsEqv_13);
    Var_26 = (MR_Word) (TypeStatus_10);
    (env).hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 20U));
    if ((env).hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__succeeded)
      hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_7(&env);
    if ((env).hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__succeeded)
    {
      MR_Word PolyEqvPieces_19;
      MR_Word PolyEqvMsg_20;
      MR_Word PolyEqvSpec_21;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_56;

      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 17U));
        MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (TypeCtor_11));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[50])));
      }
      {
        PolyEqvPieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PolyEqvPieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[30])));
        MR_hl_field(MR_mktag(1), PolyEqvPieces_19, 1) = ((MR_Box) (Var_29));
      }
      {
        Var_47 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (PolyEqvPieces_19));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[155])));
      }
      {
        PolyEqvMsg_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), PolyEqvMsg_20, 0) = ((MR_Box) (Context_14));
        MR_hl_field(MR_mktag(2), PolyEqvMsg_20, 1) = ((MR_Box) (Var_46));
      }
      {
        Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (PolyEqvMsg_20));
        MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        PolyEqvSpec_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PolyEqvSpec_21, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_for_polymorphic_eqv_type_with_monomorphic_body\'/9"));
        MR_hl_field(MR_mktag(0), PolyEqvSpec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), PolyEqvSpec_21, 2) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(0), PolyEqvSpec_21, 3) = ((MR_Box) (Var_56));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_25 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PolyEqvSpec_21));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
      }
      *STATE_VARIABLE_FoundInvalidType_23 = (MR_Integer) 1;
    }
    else
    {
      *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
      *STATE_VARIABLE_FoundInvalidType_23 = STATE_VARIABLE_FoundInvalidType_0_22;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_invalid_user_defined_unify_compare_8_p_0(
  MR_Word TypeStatus_9,
  MR_Word TypeCtor_10,
  MR_Word DetailsDu_11,
  MR_Word Context_12,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_24,
  MR_Word * STATE_VARIABLE_FoundInvalidType_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_bool succeeded;
  MR_Word Ctors_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_11, (MR_Integer) 0))));
  MR_Word MaybeCanon_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_11, (MR_Integer) 1))));
  MR_Word Var_28;

  succeeded = (MaybeCanon_16 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_28 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_9);
    succeeded = (Var_28 == (MR_Integer) 1);
  }
  if (succeeded)
  {
    MR_Word Var_30;
    MR_Word Ctor_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctors_15, (MR_Integer) 0))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctors_15, (MR_Integer) 1))));

    succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_19, (MR_Integer) 3))));
      succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_Word MainPieces_20;
      MR_Word DummyMsg_22;
      MR_Word DummySpec_23;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_67;

      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 17U));
        MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (TypeCtor_10));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[36])));
      }
      {
        MainPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MainPieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[30])));
        MR_hl_field(MR_mktag(1), MainPieces_20, 1) = ((MR_Box) (Var_33));
      }
      {
        Var_59 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (MainPieces_20));
      }
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_type_scalar_common_1[153])));
        MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_30));
      }
      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_60));
      }
      {
        DummyMsg_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), DummyMsg_22, 0) = ((MR_Box) (Context_12));
        MR_hl_field(MR_mktag(2), DummyMsg_22, 1) = ((MR_Box) (Var_58));
      }
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (DummyMsg_22));
        MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_30));
      }
      {
        DummySpec_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DummySpec_23, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_for_invalid_user_defined_unify_compare\'/8"));
        MR_hl_field(MR_mktag(0), DummySpec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), DummySpec_23, 2) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(0), DummySpec_23, 3) = ((MR_Box) (Var_67));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_27 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DummySpec_23));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
      }
      *STATE_VARIABLE_FoundInvalidType_25 = (MR_Integer) 1;
    }
    else
    {
      *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
      *STATE_VARIABLE_FoundInvalidType_25 = STATE_VARIABLE_FoundInvalidType_0_24;
    }
  }
  else
  {
    *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
    *STATE_VARIABLE_FoundInvalidType_25 = STATE_VARIABLE_FoundInvalidType_0_24;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_abstract_11_p_0(
  MR_Word TypeStatus1_12,
  MR_Word TypeCtor_13,
  MR_Word Body_14,
  MR_Word TypeDefn0_15,
  MR_Word Context_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * STATE_VARIABLE_ModuleInfo_26,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_27,
  MR_Word * STATE_VARIABLE_FoundInvalidType_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  MR_bool succeeded;
  MR_Word TypeTable0_20;
  MR_Word TypeTable_24;
  MR_Word OldDefn_21;

  hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_25, &TypeTable0_20);
  succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable0_20, TypeCtor_13, &OldDefn_21);
  if (succeeded)
  {
    MR_Word _TypeStatus_22;
    MR_Word TypeDefn_23;
    MR_Word STATE_VARIABLE_FoundInvalidType_31_31;
    MR_Word STATE_VARIABLE_Specs_32_32;
    MR_Word OldTypeStatus_42;

    hlds__make_hlds__add_type__check_for_duplicate_type_declaration_8_p_0(TypeCtor_13, OldDefn_21, TypeStatus1_12, Context_16, STATE_VARIABLE_FoundInvalidType_0_27, &STATE_VARIABLE_FoundInvalidType_31_31, STATE_VARIABLE_Specs_0_29, &STATE_VARIABLE_Specs_32_32);
    hlds__hlds_data__get_type_defn_status_2_p_0(OldDefn_21, &OldTypeStatus_42);
    hlds__status__type_combine_status_3_p_0(TypeStatus1_12, OldTypeStatus_42, &_TypeStatus_22);
    hlds__hlds_data__set_type_defn_status_3_p_0(_TypeStatus_22, TypeDefn0_15, &TypeDefn_23);
    hlds__make_hlds__add_type__check_for_inconsistent_solver_nosolver_type_8_p_0(TypeCtor_13, OldDefn_21, Body_14, Context_16, STATE_VARIABLE_FoundInvalidType_31_31, STATE_VARIABLE_FoundInvalidType_28, STATE_VARIABLE_Specs_32_32, STATE_VARIABLE_Specs_30);
    hlds__hlds_data__replace_type_ctor_defn_4_p_0(TypeCtor_13, TypeDefn_23, TypeTable0_20, &TypeTable_24);
  }
  else
  {
    hlds__hlds_data__add_type_ctor_defn_4_p_0(TypeCtor_13, TypeDefn0_15, TypeTable0_20, &TypeTable_24);
    *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
    *STATE_VARIABLE_FoundInvalidType_28 = STATE_VARIABLE_FoundInvalidType_0_27;
  }
  hlds__hlds_module__module_info_set_type_table_3_p_0(TypeTable_24, STATE_VARIABLE_ModuleInfo_0_25, STATE_VARIABLE_ModuleInfo_26);
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_inconsistent_solver_nosolver_type_8_p_0(
  MR_Word TypeCtor_9,
  MR_Word OldDefn_10,
  MR_Word NewBody_11,
  MR_Word NewContext_12,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_35,
  MR_Word * STATE_VARIABLE_FoundInvalidType_36,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38)
{
  MR_bool succeeded;
  MR_Word OldBody_15;
  MR_Word OldIsSolverType_16;
  MR_Word NewIsSolverType_17;

  hlds__hlds_data__get_type_defn_body_2_p_0(OldDefn_10, &OldBody_15);
  switch (MR_tag((MR_Word) OldBody_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      OldIsSolverType_16 = (MR_Integer) 0;
      break;
    case (MR_Integer) 2:
      OldIsSolverType_16 = (MR_Integer) 0;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), OldBody_15, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          OldIsSolverType_16 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Details_89 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OldBody_15, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) Details_89)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(Details_89)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    OldIsSolverType_16 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 3:
                    OldIsSolverType_16 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                OldIsSolverType_16 = (MR_Integer) 0;
                break;
              case (MR_Integer) 2:
                OldIsSolverType_16 = (MR_Integer) 0;
                break;
            }
          }
          break;
      }
      break;
  }
  hlds__make_hlds__add_type__get_body_is_solver_type_2_p_0(NewBody_11, &NewIsSolverType_17);
  succeeded = (OldIsSolverType_16 == NewIsSolverType_17);
  if (succeeded)
  {
    *STATE_VARIABLE_Specs_38 = STATE_VARIABLE_Specs_0_37;
    *STATE_VARIABLE_FoundInvalidType_36 = STATE_VARIABLE_FoundInvalidType_0_35;
  }
  else
  {
    MR_Word OldContext_18;
    MR_String ThisIsOrIsnt_19;
    MR_String OldIsOrIsnt_20;
    MR_String ThisDeclOrDefn_22;
    MR_String OldDeclOrDefn_24;
    MR_Word MainPieces_30;
    MR_Word OldPieces_31;
    MR_Word MainMsg_32;
    MR_Word OldMsg_33;
    MR_Word Spec_34;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_55;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_70;
    MR_Word Var_81;
    MR_Word Var_82;

    hlds__hlds_data__get_type_defn_context_2_p_0(OldDefn_10, &OldContext_18);
    switch (NewIsSolverType_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ThisIsOrIsnt_19 = (MR_String) "is not a solver type";
          OldIsOrIsnt_20 = (MR_String) "is";
        }
        break;
      case (MR_Integer) 1:
        {
          ThisIsOrIsnt_19 = (MR_String) "is a solver type";
          OldIsOrIsnt_20 = (MR_String) "is not";
        }
        break;
    }
    succeeded = ((((MR_tag((MR_Word) NewBody_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), NewBody_11, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      ThisDeclOrDefn_22 = (MR_String) "this declaration";
      succeeded = ((((MR_tag((MR_Word) OldBody_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), OldBody_15, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
        OldDeclOrDefn_24 = (MR_String) "previous declaration";
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_type.check_for_inconsistent_solver_nosolver_type\'/8", (MR_String) "definition before declaration");
          return;
        }
    }
    else
    {
      ThisDeclOrDefn_22 = (MR_String) "this definition";
      succeeded = ((((MR_tag((MR_Word) OldBody_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), OldBody_15, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
        OldDeclOrDefn_24 = (MR_String) "declaration";
      else
      {
        MR_String OldFileName_26 = ((MR_String) ((MR_hl_field(MR_mktag(0), OldContext_18, (MR_Integer) 0))));
        MR_Integer OldLineNumber_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OldContext_18, (MR_Integer) 1))));
        MR_String NewFileName_28 = ((MR_String) ((MR_hl_field(MR_mktag(0), NewContext_12, (MR_Integer) 0))));
        MR_Integer NewLineNumber_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), NewContext_12, (MR_Integer) 1))));

        succeeded = (strcmp(OldFileName_26, NewFileName_28) == 0);
        if (succeeded)
          succeeded = (OldLineNumber_27 < NewLineNumber_29);
        if (succeeded)
          OldDeclOrDefn_24 = (MR_String) "previous definition";
        else
          OldDeclOrDefn_24 = (MR_String) "other definition";
      }
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (ThisDeclOrDefn_22));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (TypeCtor_9));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (ThisIsOrIsnt_19));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (OldDeclOrDefn_24));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (OldIsOrIsnt_20));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[15])));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_60));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[66])));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_58));
    }
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[65])));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_52));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_50));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[64])));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_48));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_45));
    }
    {
      MainPieces_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MainPieces_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[63])));
      MR_hl_field(MR_mktag(1), MainPieces_30, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[69])));
    }
    {
      OldPieces_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), OldPieces_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[67])));
      MR_hl_field(MR_mktag(1), OldPieces_31, 1) = ((MR_Box) (Var_70));
    }
    {
      MainMsg_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MainMsg_32, 0) = ((MR_Box) (NewContext_12));
      MR_hl_field(MR_mktag(0), MainMsg_32, 1) = ((MR_Box) (MainPieces_30));
    }
    {
      OldMsg_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OldMsg_33, 0) = ((MR_Box) (OldContext_18));
      MR_hl_field(MR_mktag(0), OldMsg_33, 1) = ((MR_Box) (OldPieces_31));
    }
    {
      Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (OldMsg_33));
      MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (MainMsg_32));
      MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_82));
    }
    {
      Spec_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_34, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_for_inconsistent_solver_nosolver_type\'/8"));
      MR_hl_field(MR_mktag(0), Spec_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_34, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(MR_mktag(0), Spec_34, 3) = ((MR_Box) (Var_81));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_38 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_34));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_37));
    }
    *STATE_VARIABLE_FoundInvalidType_36 = (MR_Integer) 1;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__get_body_is_solver_type_2_p_0(
  MR_Word Body_3,
  MR_Word * IsSolverType_4)
{
  switch (MR_tag((MR_Word) Body_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      *IsSolverType_4 = (MR_Integer) 0;
      break;
    case (MR_Integer) 2:
      *IsSolverType_4 = (MR_Integer) 0;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Body_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *IsSolverType_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Details_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Body_3, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) Details_6)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(Details_6)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    *IsSolverType_4 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 3:
                    *IsSolverType_4 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *IsSolverType_4 = (MR_Integer) 0;
                break;
              case (MR_Integer) 2:
                *IsSolverType_4 = (MR_Integer) 0;
                break;
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_duplicate_type_declaration_8_p_0(
  MR_Word TypeCtor_9,
  MR_Word OldDefn_10,
  MR_Word NewStatus_11,
  MR_Word NewContext_12,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_31,
  MR_Word * STATE_VARIABLE_FoundInvalidType_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34)
{
  MR_bool succeeded;
  MR_Word OldContext_15;
  MR_Word OldStatus_16;
  MR_String Var_35;
  MR_String Var_37;
  MR_String Var_38;

  hlds__hlds_data__get_type_defn_context_2_p_0(OldDefn_10, &OldContext_15);
  hlds__hlds_data__get_type_defn_status_2_p_0(OldDefn_10, &OldStatus_16);
  Var_35 = mercury__term__context_file_1_f_0(OldContext_15);
  succeeded = mercury__string__suffix_2_p_0(Var_35, (MR_String) ".m");
  if (succeeded)
  {
    Var_37 = mercury__term__context_file_1_f_0(NewContext_12);
    Var_38 = (MR_String) ".m";
    succeeded = mercury__string__suffix_2_p_0(Var_37, Var_38);
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
    MR_Word UTC_24;
    MR_Word Severity_25;
    MR_Word DupPieces_26;
    MR_Word DupMsg_27;
    MR_Word FirstMsg_29;
    MR_Word DupSpec_30;
    MR_Word Var_80;
    MR_Word Var_81;

    mercury__term____Compare____context_0_0(&CmpRes_17, OldContext_15, NewContext_12);
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
      UTC_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), UTC_24, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(MR_mktag(3), UTC_24, 1) = ((MR_Box) (TypeCtor_9));
    }
    succeeded = (FirstIsExported_22 == SecondIsExported_23);
    if (succeeded)
    {
      MR_Word Var_41;

      Severity_25 = (MR_Word) ((MR_Unsigned) 4U);
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (UTC_24));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[15])));
      }
      {
        DupPieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), DupPieces_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[13])));
        MR_hl_field(MR_mktag(1), DupPieces_26, 1) = ((MR_Box) (Var_41));
      }
      *STATE_VARIABLE_FoundInvalidType_32 = STATE_VARIABLE_FoundInvalidType_0_31;
    }
    else
    {
      Severity_25 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_FoundInvalidType_32 = (MR_Integer) 1;
      switch (SecondIsExported_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_51;

            {
              Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (UTC_24));
              MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[20])));
            }
            {
              DupPieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), DupPieces_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[16])));
              MR_hl_field(MR_mktag(1), DupPieces_26, 1) = ((MR_Box) (Var_51));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_63;

            {
              Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (UTC_24));
              MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[24])));
            }
            {
              DupPieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), DupPieces_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[16])));
              MR_hl_field(MR_mktag(1), DupPieces_26, 1) = ((MR_Box) (Var_63));
            }
          }
          break;
      }
    }
    {
      DupMsg_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), DupMsg_27, 0) = ((MR_Box) (SecondContext_20));
      MR_hl_field(MR_mktag(0), DupMsg_27, 1) = ((MR_Box) (DupPieces_26));
    }
    {
      FirstMsg_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FirstMsg_29, 0) = ((MR_Box) (FirstContext_18));
      MR_hl_field(MR_mktag(0), FirstMsg_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[26])));
    }
    {
      Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (FirstMsg_29));
      MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (DupMsg_27));
      MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_81));
    }
    {
      DupSpec_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), DupSpec_30, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_for_duplicate_type_declaration\'/8"));
      MR_hl_field(MR_mktag(0), DupSpec_30, 1) = ((MR_Box) (Severity_25));
      MR_hl_field(MR_mktag(0), DupSpec_30, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(MR_mktag(0), DupSpec_30, 3) = ((MR_Box) (Var_80));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_34 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DupSpec_30));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_33));
    }
  }
  else
  {
    *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_0_33;
    *STATE_VARIABLE_FoundInvalidType_32 = STATE_VARIABLE_FoundInvalidType_0_31;
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
