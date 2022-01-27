/*
** Automatically generated from `add_type.m'
** by the Mercury compiler,
** version rotd-2021-04-24
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
#include "backend_libs.foreign.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
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
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.make_hlds_error.mih"
#include "hlds.pred_table.mih"
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
#include "mdbcomp.builtin_modules.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"



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

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_arity_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__edit_seq__pti_edit_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_arity_0;

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
hlds__make_hlds__add_type__IntroducedFrom__pred__compute_subtype_ctors_out_of_order__1965__1_2_p_0(
  MR_Word SuperCtorNames_12,
  MR_Word HeadVar__2_31);

static MR_Word MR_CALL 
hlds__make_hlds__add_type__IntroducedFrom__func__check_subtype_ctors_order__1937__1_1_f_0(
  MR_Word LambdaHeadVar__1_24);

static MR_Word MR_CALL 
hlds__make_hlds__add_type__IntroducedFrom__func__add_type_defn_ctor__1088__1_1_f_0(
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

static MR_bool MR_CALL 
hlds__make_hlds__add_type__edit_to_ctor_out_of_order_2_p_0(
  MR_Word Edit_3,
  MR_Word * CtorName_4);

static void MR_CALL 
hlds__make_hlds__add_type__ctor_to_unqual_sym_name_arity_2_p_0(
  MR_Word Ctor_3,
  MR_Word * UnqualNameArity_4);

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctor_arg_13_p_0(
  MR_Word TypeTable_14,
  MR_Word TVarSet_15,
  MR_Word OrigTypeStatus_16,
  MR_Word MaybeExistConstraints_17,
  MR_Word MaybeSuperExistConstraints_18,
  MR_Word CtorArg_19,
  MR_Word SuperCtorArg_20,
  MR_Word STATE_VARIABLE_ExistQVarsMapping_0_34,
  MR_Word * STATE_VARIABLE_ExistQVarsMapping_35,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_36,
  MR_Word * STATE_VARIABLE_FoundInvalidType_37,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39);

static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_is_subtype_9_p_0(
  MR_Word TypeTable_10,
  MR_Word TVarSet0_11,
  MR_Word OrigTypeStatus_12,
  MR_Word TypeA_13,
  MR_Word TypeB_14,
  MR_Word MaybeExistConstraintsA_15,
  MR_Word MaybeExistConstraintsB_16,
  MR_Word STATE_VARIABLE_ExistQVarsMapping_0_63,
  MR_Word * STATE_VARIABLE_ExistQVarsMapping_64);

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
hlds__make_hlds__add_type__check_subtype_ctor_10_p_0(
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
hlds__make_hlds__add_type__check_subtype_ctor_2_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctor_2_9_p_0(
  MR_Word TypeTable_10,
  MR_Word TVarSet_11,
  MR_Word TypeStatus_12,
  MR_Word Ctor_13,
  MR_Word SuperCtor_14,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_35,
  MR_Word * STATE_VARIABLE_FoundInvalidType_36,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38);

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
  MR_Word TypeBody_16,
  MR_Word SuperType_17,
  MR_Word * MaybeSetSubtypeNoncanon_18,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_33,
  MR_Word * STATE_VARIABLE_FoundInvalidType_34,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36);

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_defn_2_13_p_0(
  MR_Word TypeTable_14,
  MR_Word TypeCtor_15,
  MR_Word TypeDefn_16,
  MR_Word TypeBody_17,
  MR_Word SuperTypeCtor_18,
  MR_Word SuperTypeDefn_19,
  MR_Word SuperTypeArgs_20,
  MR_Word Seen0_21,
  MR_Word * MaybeSetSubtypeNoncanon_22,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_40,
  MR_Word * STATE_VARIABLE_FoundInvalidType_41,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43);

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_defn_3_14_p_0(
  MR_Word TypeTable_15,
  MR_Word TypeCtor_16,
  MR_Word TypeDefn_17,
  MR_Word TypeBody_18,
  MR_Word SuperTypeCtor_19,
  MR_Word SuperTypeDefn_20,
  MR_Word SuperTypeBody_21,
  MR_Word SuperTypeArgs_22,
  MR_Word Seen0_23,
  MR_Word * MaybeSetSubtypeNoncanon_24,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_37,
  MR_Word * STATE_VARIABLE_FoundInvalidType_38,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40);

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
  MR_Word TypeBody_16,
  MR_Word SuperTypeCtor_17,
  MR_Word SuperTypeDefn_18,
  MR_Word SuperTypeBody_19,
  MR_Word SuperTypeArgs_20,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_45,
  MR_Word * STATE_VARIABLE_FoundInvalidType_46,
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48);

static MR_Box MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctors_order_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctors_order_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctors_order_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctors_order_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctors_order_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctors_order_7_p_0(
  MR_Word TypeCtor_8,
  MR_Word Ctors_9,
  MR_Word SuperTypeCtor_10,
  MR_Word SuperCtors_11,
  MR_Word Context_12,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_has_base_type_7_p_0(
  MR_Word TypeTable_8,
  MR_Word OrigTypeStatus_9,
  MR_Word CurTypeCtor_10,
  MR_Word CurTypeDefn_11,
  MR_Word * MaybeError_12,
  MR_Word STATE_VARIABLE_Seen_0_35,
  MR_Word * STATE_VARIABLE_Seen_36);

static MR_Word MR_CALL 
hlds__make_hlds__add_type__supertype_ctor_defn_error_pieces_2_f_0(
  MR_Word SuperTypeCtor_4,
  MR_Word Error_5);

static void MR_CALL 
hlds__make_hlds__add_type__search_super_type_ctor_defn_6_p_0(
  MR_Word TypeTable_7,
  MR_Word OrigTypeStatus_8,
  MR_Word TypeCtor_9,
  MR_Word * Res_10,
  MR_Word STATE_VARIABLE_Seen_0_14,
  MR_Word * STATE_VARIABLE_Seen_15);

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
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0(
  MR_Word FieldName_9,
  MR_Word FieldDefn_10,
  MR_Word NeedQual_11,
  MR_Word PartialQuals_12,
  MR_Word STATE_VARIABLE_FieldNameTable_0_38,
  MR_Word * STATE_VARIABLE_FieldNameTable_39,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41);

static void MR_CALL 
hlds__make_hlds__add_type__convert_type_defn_to_hlds_5_p_0(
  MR_Word TypeDefn_6,
  MR_Word TypeCtor_7,
  MR_Word * HLDSBody_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35);

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
hlds__make_hlds__add_type__maybe_report_multiple_def_error_10_p_0(
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
  MR_Word DuTypeBodyB_7,
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
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_36,
  MR_Word * STATE_VARIABLE_FoundInvalidType_37,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39);

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
  MR_Word STATE_VARIABLE_FoundInvalidType_0_27,
  MR_Word * STATE_VARIABLE_FoundInvalidType_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

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


static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_1[139][2];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_2[8][3];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_3[1][8];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_4[1][9];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_5[5][5];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_6[4][1];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_7[2][7];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_8[1][13];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_9[1][16];




static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_1[139][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ctor_field_name_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_edit_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must not be exported from its defining module."))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[8])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the previous declaration says it is exported."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[8])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "says it is private, while"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the previous declaration says it is private."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[8])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "says it is exported, while"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The previous declaration was here."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[8])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "defined as foreign_type without being declared."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[8])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "user-defined equality or comparison."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[8])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and as such it is not allowed to have"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "contains no information,"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "cannot have user-defined equality or comparison."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[8])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "whose body consists of a single zero-arity constructor"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Discriminated union types"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[34])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not allowed to have"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[26])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Only base types are allowed to have"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[26])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not yet implemented."))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[8])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The export of such types as abstract types"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[42])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with a monomorphic definition."))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[44])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is a polymorphic equivalence type"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[46])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "optimize the wrapper away.)"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[49]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(There is no performance penalty for this -- the compiler will"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[50])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "functor that has just one arg, instead of an equivalence type."))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[52])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A better workaround is to use a \"wrapper\" type, with just one"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[54])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "by putting the type definition in the interface section."))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[56])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A quick workaround is to just export the type as a concrete type"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[58])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is here."))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[8])))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "as its declaration."))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[8])))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must have the same visibility"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[64])))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must have the same visibility."))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[8])))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "multiply defined."))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[8])))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "on other back-ends, but none for this back-end."))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[8])))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "There are representations for this type"))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[72])))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "because it has a foreign type definition."))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[8])))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "cannot be a supertype"))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[76])))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not a discriminated union type."))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[8])))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has a foreign type definition."))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[8])))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: circularity in subtype definition."))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[8])))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not visible here."))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[8])))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the supertype."))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[8])))
  },
  /* row 89 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "differ in the subtype and supertype."))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[8])))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 23U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[92]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[93])))
  },
  /* row 96 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: duplicate declaration for type"))
  },
  /* row 97 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: This declaration for type"))
  },
  /* row 98 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 99 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of type"))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 101 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but its"))
  },
  /* row 102 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row 103 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the type"))
  },
  /* row 104 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the subtype"))
  },
  /* row 105 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[60])))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_type_scalar_common_1[105]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 107 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the definition of the foreign type"))
  },
  /* row 108 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: all definitions of the foreign type"))
  },
  /* row 109 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: type"))
  },
  /* row 110 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the definition"))
  },
  /* row 111 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(as opposed to the name) of a solver type such as"))
  },
  /* row 112 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: field"))
  },
  /* row 113 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Here is the previous definition of field"))
  },
  /* row 114 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: constructor"))
  },
  /* row 115 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for type"))
  },
  /* row 116 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has no definition that is valid when targeting"))
  },
  /* row 117 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ";"))
  },
  /* row 118 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "neither a Mercury definition,"))
  },
  /* row 119 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "nor a"))
  },
  /* row 120 */
  {
    ((MR_Box) ((MR_Unsigned) 22U)),
    ((MR_Box) ((MR_String) "foreign_type"))
  },
  /* row 121 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 122 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 123 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[74])))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_type_scalar_common_1[123]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 125 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: undefined type"))
  },
  /* row 126 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the type definition for"))
  },
  /* row 127 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row 128 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row 129 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declares the following constructors in a"))
  },
  /* row 130 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "different order to the supertype"))
  },
  /* row 131 */
  {
    ((MR_Box) ((MR_Unsigned) 23U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[131]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 133 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "cannot be a supertype because it is"))
  },
  /* row 134 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected type constructor in"))
  },
  /* row 135 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "supertype part of subtype definition, got"))
  },
  /* row 136 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: existential class constraints for"))
  },
  /* row 137 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not a constructor of the supertype"))
  },
  /* row 138 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not a subtype of the corresponding type"))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_2[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_1[4]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_1[0])),
    ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_5[0])),
    ((MR_Box) (hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_5[1])),
    ((MR_Box) (hlds__make_hlds__add_type__check_subtype_ctors_order_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_5[1])),
    ((MR_Box) (hlds__make_hlds__add_type__check_subtype_ctors_order_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_5[3])),
    ((MR_Box) (hlds__make_hlds__add_type__check_subtype_ctors_order_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_5[4])),
    ((MR_Box) (hlds__make_hlds__add_type__check_subtype_ctors_order_7_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_3[1][8] = {
  /* row 0 */
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

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_4[1][9] = {
  /* row 0 */
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

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_5[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_ctor_field_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_arity_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_type__edit_seq__pti_edit_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_arity_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_6[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_7[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0))
  },
  /* row 1 */
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
  /* row 0 */
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
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_type_0)),
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_9[1][16] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 13)),
    ((MR_Box) (&hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_type_status_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_cons_exist_constraints_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_cons_exist_constraints_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_type_0)),
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_type_0)),
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

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_arity_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__edit_seq__pti_edit_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_arity_0 = {
  &mercury__edit_seq__edit_seq__type_ctor_info_edit_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)
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
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__make_hlds__add_type__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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
  {     hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_name_ordered_maybe_set_subtype_noncanonical_0 },
  {     hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_ordinal_ordered_maybe_set_subtype_noncanonical_0 },
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
  {     hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_name_ordered_old_defn_maybe_abstract_0 },
  {     hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_ordinal_ordered_old_defn_maybe_abstract_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__add_type__hlds__make_hlds__add_type__functor_number_map_old_defn_maybe_abstract_0,

};

static const MR_EnumFunctorDesc hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_search_type_ctor_defn_error_0_0 = {
  (MR_String) "type_is_abstract",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_search_type_ctor_defn_error_0_1 = {
  (MR_String) "not_defined",
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
  &hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_search_type_ctor_defn_error_0_1,
  &hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_search_type_ctor_defn_error_0_0
};

static const MR_Integer hlds__make_hlds__add_type__hlds__make_hlds__add_type__functor_number_map_search_type_ctor_defn_error_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
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
  {     hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_name_ordered_search_type_ctor_defn_error_0 },
  {     hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_ordinal_ordered_search_type_ctor_defn_error_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  hlds__make_hlds__add_type__hlds__make_hlds__add_type__functor_number_map_search_type_ctor_defn_error_0,

};

static MR_bool MR_CALL 
hlds__make_hlds__add_type__IntroducedFrom__pred__compute_subtype_ctors_out_of_order__1965__1_2_p_0(
  MR_Word SuperCtorNames_12,
  MR_Word HeadVar__2_31)
{
  {
    MR_bool succeeded;

    succeeded = mercury__list__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), SuperCtorNames_12, ((MR_Box) (HeadVar__2_31)));
    return succeeded;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_type__IntroducedFrom__func__check_subtype_ctors_order__1937__1_1_f_0(
  MR_Word LambdaHeadVar__1_24)
{
  {
    MR_Word LambdaHeadVar__2_25;
    MR_Word Var_26;

    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 10U));
      MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (LambdaHeadVar__1_24));
    }
    {
      LambdaHeadVar__2_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return LambdaHeadVar__2_25;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_type__IntroducedFrom__func__add_type_defn_ctor__1088__1_1_f_0(
  MR_Word LambdaHeadVar__1_90)
{
  {
    MR_Word LambdaHeadVar__2_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_90, (MR_Integer) 0))));

    return LambdaHeadVar__2_91;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type____Compare____search_type_ctor_defn_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type____Unify____search_type_ctor_defn_error_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type____Compare____old_defn_maybe_abstract_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type____Unify____old_defn_maybe_abstract_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type____Compare____maybe_set_subtype_noncanonical_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type____Unify____maybe_set_subtype_noncanonical_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type____Compare____existq_tvar_mapping_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type____Unify____existq_tvar_mapping_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__rename_and_rec_subst_in_constructor_arg_4_p_0(
  MR_Word Renaming_5,
  MR_Word TSubst_6,
  MR_Word Arg0_7,
  MR_Word * Arg_8)
{
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
}

static void MR_CALL 
hlds__make_hlds__add_type__rename_and_rec_subst_in_constructor_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Arg_8;

    hlds__make_hlds__add_type__rename_and_rec_subst_in_constructor_arg_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_Arg_8);
    *wrapper_arg_2 = ((MR_Box) (conv0_Arg_8));
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__rename_and_rec_subst_in_constructor_4_p_0(
  MR_Word Renaming_5,
  MR_Word TSubst_6,
  MR_Word Ctor0_7,
  MR_Word * Ctor_8)
{
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
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type__edit_to_ctor_out_of_order_2_p_0(
  MR_Word Edit_3,
  MR_Word * CtorName_4)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Edit_3)) == (MR_Integer) 1))
    {
      *CtorName_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Edit_3, (MR_Integer) 1))));
      succeeded = MR_TRUE;
    }
    else
    if (((MR_tag((MR_Word) Edit_3)) == (MR_Integer) 2))
    {
      *CtorName_4 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Edit_3, (MR_Integer) 1))));
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__ctor_to_unqual_sym_name_arity_2_p_0(
  MR_Word Ctor_3,
  MR_Word * UnqualNameArity_4)
{
  {
    MR_Word SymName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_3, (MR_Integer) 2))));
    MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_3, (MR_Integer) 4))));
    MR_String UnqualName_11;
    MR_Word Var_12;

    UnqualName_11 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_7);
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (UnqualName_11));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *UnqualNameArity_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Arity_9));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctor_arg_13_p_0(
  MR_Word TypeTable_14,
  MR_Word TVarSet_15,
  MR_Word OrigTypeStatus_16,
  MR_Word MaybeExistConstraints_17,
  MR_Word MaybeSuperExistConstraints_18,
  MR_Word CtorArg_19,
  MR_Word SuperCtorArg_20,
  MR_Word STATE_VARIABLE_ExistQVarsMapping_0_34,
  MR_Word * STATE_VARIABLE_ExistQVarsMapping_35,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_36,
  MR_Word * STATE_VARIABLE_FoundInvalidType_37,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39)
{
  {
    MR_bool succeeded;
    MR_Word ArgType_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArg_19, (MR_Integer) 1))));
    MR_Word Context_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArg_19, (MR_Integer) 2))));
    MR_Word SuperArgType_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SuperCtorArg_20, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_ExistQVarsMapping_40_40;

    succeeded = hlds__make_hlds__add_type__check_is_subtype_9_p_0(TypeTable_14, TVarSet_15, OrigTypeStatus_16, ArgType_25, SuperArgType_28, MaybeExistConstraints_17, MaybeSuperExistConstraints_18, STATE_VARIABLE_ExistQVarsMapping_0_34, &STATE_VARIABLE_ExistQVarsMapping_40_40);
    if (succeeded)
    {
      *STATE_VARIABLE_ExistQVarsMapping_35 = STATE_VARIABLE_ExistQVarsMapping_40_40;
      *STATE_VARIABLE_Specs_39 = STATE_VARIABLE_Specs_0_38;
      *STATE_VARIABLE_FoundInvalidType_37 = STATE_VARIABLE_FoundInvalidType_0_36;
    }
    else
    {
      MR_String ArgTypeStr_30;
      MR_String SuperArgTypeStr_31;
      MR_Word Pieces_32;
      MR_Word Spec_33;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_50;
      MR_Word Var_51;

      ArgTypeStr_30 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TVarSet_15, (MR_Integer) 0, ArgType_25);
      SuperArgTypeStr_31 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TVarSet_15, (MR_Integer) 0, SuperArgType_28);
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (ArgTypeStr_30));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (SuperArgTypeStr_31));
      }
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[88])));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[138])));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_47));
      }
      {
        Pieces_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[98])));
        MR_hl_field(MR_mktag(1), Pieces_32, 1) = ((MR_Box) (Var_45));
      }
      {
        Spec_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_33, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_subtype_ctor_arg\'/13"));
        MR_hl_field(MR_mktag(1), Spec_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_33, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(1), Spec_33, 3) = ((MR_Box) (Context_26));
        MR_hl_field(MR_mktag(1), Spec_33, 4) = ((MR_Box) (Pieces_32));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_39 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_33));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_38));
      }
      *STATE_VARIABLE_FoundInvalidType_37 = (MR_Integer) 1;
      *STATE_VARIABLE_ExistQVarsMapping_35 = STATE_VARIABLE_ExistQVarsMapping_0_34;
    }
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
  MR_Word STATE_VARIABLE_ExistQVarsMapping_0_63,
  MR_Word * STATE_VARIABLE_ExistQVarsMapping_64)
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
              succeeded = hlds__make_hlds__add_type__check_is_subtype_var_var_6_p_0(VarA_19, VarB_21, MaybeExistConstraintsA_15, MaybeExistConstraintsB_16, STATE_VARIABLE_ExistQVarsMapping_0_63, STATE_VARIABLE_ExistQVarsMapping_64);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word NameA_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeA_13, (MR_Integer) 0))));
          MR_Word ArgTypesA_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeA_13, (MR_Integer) 1))));
          MR_Word NameB_24;
          MR_Word ArgTypesB_25;
          MR_Word Kind_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeA_13, (MR_Integer) 2))));
          MR_Word Var_88;
          MR_Word TypeCtorInfo_81_81;
          MR_Integer Arity_26;
          MR_Integer Var_89;

          succeeded = ((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 1);
          if (succeeded)
          {
            NameB_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeB_14, (MR_Integer) 0))));
            ArgTypesB_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeB_14, (MR_Integer) 1))));
            Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeB_14, (MR_Integer) 2))));
            succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_72, Var_88);
            if (succeeded)
            {
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(NameA_22, NameB_24);
              if (succeeded)
              {
                TypeCtorInfo_81_81 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                mercury__list__length_2_p_0(TypeCtorInfo_81_81, ArgTypesA_23, &Arity_26);
                mercury__list__length_2_p_0(TypeCtorInfo_81_81, ArgTypesB_25, &Var_89);
                succeeded = (Arity_26 == Var_89);
              }
              if (succeeded)
                succeeded = hlds__make_hlds__add_type__check_corresponding_args_are_subtype_9_p_0(TypeTable_10, TVarSet0_11, OrigTypeStatus_12, ArgTypesA_23, ArgTypesB_25, MaybeExistConstraintsA_15, MaybeExistConstraintsB_16, STATE_VARIABLE_ExistQVarsMapping_0_63, STATE_VARIABLE_ExistQVarsMapping_64);
              else
              {
                MR_Word TypeInfo_83_83;
                MR_Integer ArityA_27;
                MR_Word TypeCtorA_28;
                MR_Word TypeDefnA_29;
                MR_Word TypeBodyA_30;
                MR_Word SuperTypeA_32;
                MR_Word TypeStatusA_36;
                MR_Word TVarSetA_37;
                MR_Word TypeParamsA0_38;
                MR_Word TVarSet_39;
                MR_Word RenamingA_40;
                MR_Word TypeParamsA_41;
                MR_Word TSubstA_42;
                MR_Word NewTypeA_43;
                MR_Word Var_69;
                MR_Word next_value_of_TVarSet0_11;
                MR_Word next_value_of_TypeA_13;

                mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesA_23, &ArityA_27);
                {
                  TypeCtorA_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), TypeCtorA_28, 0) = ((MR_Box) (NameA_22));
                  MR_hl_field(MR_mktag(0), TypeCtorA_28, 1) = ((MR_Box) (ArityA_27));
                }
                succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_10, TypeCtorA_28, &TypeDefnA_29);
                if (succeeded)
                {
                  hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefnA_29, &TypeBodyA_30);
                  succeeded = ((MR_tag((MR_Word) TypeBodyA_30)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeBodyA_30, (MR_Integer) 1))));
                    succeeded = (Var_69 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      SuperTypeA_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_69, (MR_Integer) 0))));
                      hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefnA_29, &TypeStatusA_36);
                      succeeded = hlds__make_hlds__add_type__subtype_defn_int_supertype_defn_impl_2_p_0(OrigTypeStatus_12, TypeStatusA_36);
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        hlds__hlds_data__get_type_defn_tvarset_2_p_0(TypeDefnA_29, &TVarSetA_37);
                        hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefnA_29, &TypeParamsA0_38);
                        parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet0_11, TVarSetA_37, &TVarSet_39, &RenamingA_40);
                        parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(RenamingA_40, TypeParamsA0_38, &TypeParamsA_41);
                        TypeInfo_83_83 = (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]);
                        mercury__map__from_corresponding_lists_3_p_0(TypeInfo_83_83, (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParamsA_41, ArgTypesA_23, &TSubstA_42);
                        hlds__make_hlds__add_type__rename_and_rec_subst_in_type_4_p_0(RenamingA_40, TSubstA_42, SuperTypeA_32, &NewTypeA_43);
                        // direct tailcall eliminated
                        ;
                        next_value_of_TVarSet0_11 = TVarSet_39;
                        next_value_of_TypeA_13 = NewTypeA_43;
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
              *STATE_VARIABLE_ExistQVarsMapping_64 = STATE_VARIABLE_ExistQVarsMapping_0_63;
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
              MR_Word Kind_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_13, (MR_Integer) 2))));
              MR_Word ArgTypesA_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_13, (MR_Integer) 1))));
              MR_Word ArgTypesB_75;
              MR_Integer Arity_76;
              MR_Word Var_90;
              MR_Integer Var_91;

              succeeded = ((((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeB_14, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgTypesB_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_14, (MR_Integer) 1))));
                Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_14, (MR_Integer) 2))));
                succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_73, Var_90);
                if (succeeded)
                {
                  TypeCtorInfo_84_84 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                  mercury__list__length_2_p_0(TypeCtorInfo_84_84, ArgTypesA_74, &Arity_76);
                  mercury__list__length_2_p_0(TypeCtorInfo_84_84, ArgTypesB_75, &Var_91);
                  succeeded = (Arity_76 == Var_91);
                  if (succeeded)
                    succeeded = hlds__make_hlds__add_type__check_corresponding_args_are_subtype_9_p_0(TypeTable_10, TVarSet0_11, OrigTypeStatus_12, ArgTypesA_74, ArgTypesB_75, MaybeExistConstraintsA_15, MaybeExistConstraintsB_16, STATE_VARIABLE_ExistQVarsMapping_0_63, STATE_VARIABLE_ExistQVarsMapping_64);
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeCtorInfo_85_85;
              MR_Word PredOrFunc_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeA_13, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word HOInstInfoA_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_13, (MR_Integer) 3))));
              MR_Word Purity_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeA_13, (MR_Integer) 4))) & (MR_Integer) 3);
              MR_Word HOInstInfoB_48;
              MR_Word MaybeArgModesA_56;
              MR_Word MaybeArgModesB_57;
              MR_Word ArgTypesA_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_13, (MR_Integer) 2))));
              MR_Word ArgTypesB_78;
              MR_Integer Arity_79;
              MR_Word Var_92;
              MR_Word Var_93;
              MR_Integer Var_95;

              succeeded = ((((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeB_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_92 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeB_14, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgTypesB_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_14, (MR_Integer) 2))));
                HOInstInfoB_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_14, (MR_Integer) 3))));
                Var_93 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeB_14, (MR_Integer) 4))) & (MR_Integer) 3);
                succeeded = (PredOrFunc_44 == Var_92);
                if (succeeded)
                {
                  succeeded = (Purity_46 == Var_93);
                  if (succeeded)
                  {
                    succeeded = MR_TRUE;
                    if (succeeded)
                    {
                      TypeCtorInfo_85_85 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                      mercury__list__length_2_p_0(TypeCtorInfo_85_85, ArgTypesA_77, &Arity_79);
                      mercury__list__length_2_p_0(TypeCtorInfo_85_85, ArgTypesB_78, &Var_95);
                      succeeded = (Arity_79 == Var_95);
                      if (succeeded)
                      {
                        if ((HOInstInfoA_45 == (MR_Word) ((MR_Unsigned) 0U)))
                        {
                          succeeded = (HOInstInfoB_48 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            MaybeArgModesA_56 = (MR_Word) ((MR_Unsigned) 0U);
                            MaybeArgModesB_57 = (MR_Word) ((MR_Unsigned) 0U);
                            succeeded = MR_TRUE;
                          }
                        }
                        else
                        {
                          MR_Word PredInfoInfoA_49 = (MR_Word) (MR_body((MR_Word) (HOInstInfoA_45), (MR_Integer) 1));
                          MR_Word PredInfoInfoB_50;
                          MR_Word ArgModesA_51;
                          MR_Word Detism_53;
                          MR_Word ArgModesB_54;
                          MR_Word Var_96;
                          MR_Word Var_97;
                          MR_Word Var_98;

                          succeeded = (HOInstInfoB_48 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            PredInfoInfoB_50 = (MR_Word) (MR_body((MR_Word) (HOInstInfoB_48), (MR_Integer) 1));
                            Var_96 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInfoInfoA_49, (MR_Integer) 0))) & (MR_Integer) 1);
                            ArgModesA_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInfoInfoA_49, (MR_Integer) 1))));
                            Detism_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInfoInfoA_49, (MR_Integer) 3))) & (MR_Integer) 7);
                            succeeded = (PredOrFunc_44 == Var_96);
                            if (succeeded)
                            {
                              Var_97 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInfoInfoB_50, (MR_Integer) 0))) & (MR_Integer) 1);
                              ArgModesB_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInfoInfoB_50, (MR_Integer) 1))));
                              Var_98 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInfoInfoB_50, (MR_Integer) 3))) & (MR_Integer) 7);
                              succeeded = (PredOrFunc_44 == Var_97);
                              if (succeeded)
                              {
                                succeeded = (Detism_53 == Var_98);
                                if (succeeded)
                                {
                                  {
                                    MaybeArgModesA_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), MaybeArgModesA_56, 0) = ((MR_Box) (ArgModesA_51));
                                  }
                                  {
                                    MaybeArgModesB_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), MaybeArgModesB_57, 0) = ((MR_Box) (ArgModesB_54));
                                  }
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                          }
                        }
                        if (succeeded)
                          succeeded = hlds__make_hlds__add_type__check_is_subtype_higher_order_11_p_0(TypeTable_10, TVarSet0_11, OrigTypeStatus_12, ArgTypesA_77, ArgTypesB_78, MaybeArgModesA_56, MaybeArgModesB_57, MaybeExistConstraintsA_15, MaybeExistConstraintsB_16, STATE_VARIABLE_ExistQVarsMapping_0_63, STATE_VARIABLE_ExistQVarsMapping_64);
                      }
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeA1_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_13, (MR_Integer) 1))));
              MR_Word TypeB1_62;
              MR_Word Kind_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_13, (MR_Integer) 2))));
              MR_Word Var_99;
              MR_Word next_value_of_TypeA_13;
              MR_Word next_value_of_TypeB_14;

              succeeded = ((((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeB_14, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                TypeB1_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_14, (MR_Integer) 1))));
                Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_14, (MR_Integer) 2))));
                succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_80, Var_99);
                if (succeeded)
                {
                  // direct tailcall eliminated
                  ;
                  next_value_of_TypeA_13 = TypeA1_61;
                  next_value_of_TypeB_14 = TypeB1_62;
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
  {
    MR_Word Type1_9;

    parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(Renaming_5, Type0_7, &Type1_9);
    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TSubst_6, Type1_9, Type_8);
  }
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
}

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctor_10_p_0(
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
      hlds__make_hlds__add_type__check_subtype_ctor_2_9_p_0(TypeTable_11, TVarSet_12, TypeStatus_13, Ctor_16, SuperCtor_26, STATE_VARIABLE_FoundInvalidType_0_29, STATE_VARIABLE_FoundInvalidType_30, STATE_VARIABLE_Specs_0_31, STATE_VARIABLE_Specs_32);
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
        MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 10U));
        MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (Var_39));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 14U));
        MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (SuperTypeCtor_14));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[12])));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[137])));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_40));
      }
      {
        Pieces_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[98])));
        MR_hl_field(MR_mktag(1), Pieces_27, 1) = ((MR_Box) (Var_37));
      }
      {
        Spec_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_28, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_subtype_ctor\'/10"));
        MR_hl_field(MR_mktag(1), Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_28, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
}

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctor_2_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ExistQVarsMapping_35;
    MR_Word conv1_STATE_VARIABLE_FoundInvalidType_37;
    MR_Word conv0_STATE_VARIABLE_Specs_39;

    hlds__make_hlds__add_type__check_subtype_ctor_arg_13_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_ExistQVarsMapping_35, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_FoundInvalidType_37, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_Specs_39);
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_ExistQVarsMapping_35));
    *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_FoundInvalidType_37));
    *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_39));
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctor_2_9_p_0(
  MR_Word TypeTable_10,
  MR_Word TVarSet_11,
  MR_Word TypeStatus_12,
  MR_Word Ctor_13,
  MR_Word SuperCtor_14,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_35,
  MR_Word * STATE_VARIABLE_FoundInvalidType_36,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38)
{
  {
    MR_Word FoundInvalidType_15;
    MR_Word MaybeExistConstraints_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 1))));
    MR_Word CtorName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 2))));
    MR_Word Args_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 3))));
    MR_Integer Arity_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 4))));
    MR_Word Context_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 5))));
    MR_Word MaybeSuperExistConstraints_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SuperCtor_14, (MR_Integer) 1))));
    MR_Word SuperArgs_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SuperCtor_14, (MR_Integer) 3))));
    MR_Word ExistQVarsMapping_29;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word STATE_VARIABLE_Specs_42_42;
    MR_Box conv5_ExistQVarsMapping_29;
    MR_Box conv4_FoundInvalidType_15;
    MR_Box conv3_STATE_VARIABLE_Specs_42_42;

    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (hlds__make_hlds__add_type__check_subtype_ctor_2_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (TypeTable_10));
      MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) (TVarSet_11));
      MR_hl_field(MR_mktag(0), Var_39, 5) = ((MR_Box) (TypeStatus_12));
      MR_hl_field(MR_mktag(0), Var_39, 6) = ((MR_Box) (MaybeExistConstraints_18));
      MR_hl_field(MR_mktag(0), Var_39, 7) = ((MR_Box) (MaybeSuperExistConstraints_24));
    }
    Var_40 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]));
    mercury__list__foldl3_corresponding_9_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_2[1]), (MR_Word) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_type_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[5]), Var_39, Args_20, SuperArgs_26, ((MR_Box) (Var_40)), &conv5_ExistQVarsMapping_29, ((MR_Box) ((MR_Integer) 0)), &conv4_FoundInvalidType_15, ((MR_Box) (STATE_VARIABLE_Specs_0_37)), &conv3_STATE_VARIABLE_Specs_42_42);
    ExistQVarsMapping_29 = ((MR_Word) (conv5_ExistQVarsMapping_29));
    FoundInvalidType_15 = ((MR_Word) (conv4_FoundInvalidType_15));
    STATE_VARIABLE_Specs_42_42 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_42_42));
    switch (FoundInvalidType_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        if ((MaybeExistConstraints_18 == (MR_Word) ((MR_Unsigned) 0U)))
          if ((MaybeSuperExistConstraints_24 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *STATE_VARIABLE_FoundInvalidType_36 = STATE_VARIABLE_FoundInvalidType_0_35;
            *STATE_VARIABLE_Specs_38 = STATE_VARIABLE_Specs_42_42;
          }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_type.check_subtype_ctor_2\'/9", (MR_String) "exist_constraints mismatch");
              return;
            }
        else
        {
          MR_Word Var_63 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_18), (MR_Integer) 1));

          if ((MaybeSuperExistConstraints_24 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_type.check_subtype_ctor_2\'/9", (MR_String) "exist_constraints mismatch");
              return;
            }
          else
          {
            MR_Word SuperConstraints_31 = (MR_Word) (MR_body((MR_Word) (MaybeSuperExistConstraints_24), (MR_Integer) 1));
            MR_Word CtorSymNameArity_32;

            {
              CtorSymNameArity_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), CtorSymNameArity_32, 0) = ((MR_Box) (CtorName_19));
              MR_hl_field(MR_mktag(0), CtorSymNameArity_32, 1) = ((MR_Box) (Arity_21));
            }
            hlds__make_hlds__add_type__check_subtype_ctor_exist_constraints_9_p_0(CtorSymNameArity_32, Var_63, SuperConstraints_31, ExistQVarsMapping_29, Context_22, STATE_VARIABLE_FoundInvalidType_0_35, STATE_VARIABLE_FoundInvalidType_36, STATE_VARIABLE_Specs_42_42, STATE_VARIABLE_Specs_38);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_FoundInvalidType_36 = FoundInvalidType_15;
          *STATE_VARIABLE_Specs_38 = STATE_VARIABLE_Specs_42_42;
        }
        break;
    }
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
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[89]), ((MR_Box) (SortedConstraints_26)), ((MR_Box) (SortedSuperConstraints_27)));
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
        MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 10U));
        MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (CtorSymNameArity_10));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[91])));
      }
      {
        Pieces_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[136])));
        MR_hl_field(MR_mktag(1), Pieces_28, 1) = ((MR_Box) (Var_36));
      }
      {
        Spec_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_29, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_subtype_ctor_exist_constraints\'/9"));
        MR_hl_field(MR_mktag(1), Spec_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_29, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
}

static void MR_CALL 
hlds__make_hlds__add_type__do_add_ctor_field_5_p_0(
  MR_String FieldName_6,
  MR_Word FieldNameDefn_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_FieldNameTable_0_10,
  MR_Word * STATE_VARIABLE_FieldNameTable_11)
{
  {
    MR_Word Var_12;

    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (FieldName_6));
    }
    mercury__multi_map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0), ((MR_Box) (Var_12)), ((MR_Box) (FieldNameDefn_7)), STATE_VARIABLE_FieldNameTable_0_10, STATE_VARIABLE_FieldNameTable_11);
  }
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
}

void MR_CALL 
hlds__make_hlds__add_type__add_du_ctors_check_subtype_check_foreign_type_9_p_0(
  MR_Word TypeTable_10,
  MR_Word TypeCtor_11,
  MR_Word TypeDefn_12,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_58,
  MR_Word * STATE_VARIABLE_FoundInvalidType_59,
  MR_Word STATE_VARIABLE_ModuleInfo_0_60,
  MR_Word * STATE_VARIABLE_ModuleInfo_61,
  MR_Word STATE_VARIABLE_Specs_0_62,
  MR_Word * STATE_VARIABLE_Specs_63)
{
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
          MR_Word ForeignTypeBody_52 = (MR_Word) ((MR_Word) (Body_20));
          MR_Word PrevErrors_53;
          MR_Word FoundInvalidTypeInForeignBody_54;

          hlds__hlds_data__get_type_defn_prev_errors_2_p_0(TypeDefn_12, &PrevErrors_53);
          hlds__make_hlds__add_type__check_foreign_type_for_current_target_9_p_0(TypeCtor_11, ForeignTypeBody_52, PrevErrors_53, Context_16, &FoundInvalidTypeInForeignBody_54, STATE_VARIABLE_ModuleInfo_0_60, STATE_VARIABLE_ModuleInfo_61, STATE_VARIABLE_Specs_0_62, STATE_VARIABLE_Specs_63);
          switch (FoundInvalidTypeInForeignBody_54) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_FoundInvalidType_59 = STATE_VARIABLE_FoundInvalidType_0_58;
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_FoundInvalidType_59 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word OoMCtors_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body_20, (MR_Integer) 0))));
          MR_Word MaybeSuperType_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body_20, (MR_Integer) 1))));
          MR_Word CtorMap0_34;
          MR_Word PQInfo_35;
          MR_Word CtorFieldMap0_36;
          MR_Word TypeCtorSymName_37;
          MR_Word TypeCtorModuleName_40;
          MR_Word HeadCtor_42;
          MR_Word TailCtors_43;
          MR_Word CtorFieldMap1_44;
          MR_Word CtorMap1_45;
          MR_Word CtorAddSpecs1_46;
          MR_Word CtorFieldMap_47;
          MR_Word CtorMap_48;
          MR_Word CtorAddSpecs_49;
          MR_Word STATE_VARIABLE_FoundInvalidType_67_67;
          MR_Word STATE_VARIABLE_Specs_68_68;
          MR_Word STATE_VARIABLE_ModuleInfo_71_71;
          MR_Word STATE_VARIABLE_ModuleInfo_75_75;

          if ((MaybeSuperType_24 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            STATE_VARIABLE_FoundInvalidType_67_67 = STATE_VARIABLE_FoundInvalidType_0_58;
            STATE_VARIABLE_ModuleInfo_71_71 = STATE_VARIABLE_ModuleInfo_0_60;
            STATE_VARIABLE_Specs_68_68 = STATE_VARIABLE_Specs_0_62;
          }
          else
          {
            MR_Word SuperType_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSuperType_24, (MR_Integer) 0))));
            MR_Word MaybeSetSubtypeNoncanon_29;

            hlds__make_hlds__add_type__check_subtype_defn_11_p_0(TypeTable_10, TVarSet_17, TypeCtor_11, TypeDefn_12, Body_20, SuperType_28, &MaybeSetSubtypeNoncanon_29, STATE_VARIABLE_FoundInvalidType_0_58, &STATE_VARIABLE_FoundInvalidType_67_67, STATE_VARIABLE_Specs_0_62, &STATE_VARIABLE_Specs_68_68);
            switch (MaybeSetSubtypeNoncanon_29) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                STATE_VARIABLE_ModuleInfo_71_71 = STATE_VARIABLE_ModuleInfo_0_60;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word NoncanonBody_30;
                  MR_Word NoncanonTypeDefn_31;
                  MR_Word TypeTable0_32;
                  MR_Word TypeTable1_33;
                  MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body_20, (MR_Integer) 0))));
                  MR_Word Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body_20, (MR_Integer) 1))));
                  MR_Word Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body_20, (MR_Integer) 3))));
                  MR_Word Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body_20, (MR_Integer) 4))));

                  {
                    NoncanonBody_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), NoncanonBody_30, 0) = ((MR_Box) (Var_79));
                    MR_hl_field(MR_mktag(1), NoncanonBody_30, 1) = ((MR_Box) (Var_80));
                    MR_hl_field(MR_mktag(1), NoncanonBody_30, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_6[3])));
                    MR_hl_field(MR_mktag(1), NoncanonBody_30, 3) = ((MR_Box) (Var_82));
                    MR_hl_field(MR_mktag(1), NoncanonBody_30, 4) = ((MR_Box) (Var_83));
                  }
                  hlds__hlds_data__set_type_defn_body_3_p_0(NoncanonBody_30, TypeDefn_12, &NoncanonTypeDefn_31);
                  hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_60, &TypeTable0_32);
                  hlds__hlds_data__replace_type_ctor_defn_4_p_0(TypeCtor_11, NoncanonTypeDefn_31, TypeTable0_32, &TypeTable1_33);
                  hlds__hlds_module__module_info_set_type_table_3_p_0(TypeTable1_33, STATE_VARIABLE_ModuleInfo_0_60, &STATE_VARIABLE_ModuleInfo_71_71);
                }
                break;
            }
          }
          hlds__hlds_module__module_info_get_cons_table_2_p_0(STATE_VARIABLE_ModuleInfo_71_71, &CtorMap0_34);
          hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(STATE_VARIABLE_ModuleInfo_71_71, &PQInfo_35);
          hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(STATE_VARIABLE_ModuleInfo_71_71, &CtorFieldMap0_36);
          TypeCtorSymName_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_11, (MR_Integer) 0))));
          if (((MR_tag((MR_Word) TypeCtorSymName_37)) == (MR_Integer) 1))
            TypeCtorModuleName_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeCtorSymName_37, (MR_Integer) 0))));
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_type.add_du_ctors_check_subtype_check_foreign_type\'/9", (MR_String) "unqualified TypeCtorSymName");
              return;
            }
          HeadCtor_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_23, (MR_Integer) 0))));
          TailCtors_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_23, (MR_Integer) 1))));
          hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0(HeadCtor_42, TypeCtor_11, TypeCtorModuleName_40, TVarSet_17, TypeParams_18, KindMap_19, NeedQual_22, PQInfo_35, Status_21, CtorFieldMap0_36, &CtorFieldMap1_44, CtorMap0_34, &CtorMap1_45, (MR_Word) ((MR_Unsigned) 0U), &CtorAddSpecs1_46);
          hlds__make_hlds__add_type__add_type_defn_ctors_15_p_0(TailCtors_43, TypeCtor_11, TypeCtorModuleName_40, TVarSet_17, TypeParams_18, KindMap_19, NeedQual_22, PQInfo_35, Status_21, CtorFieldMap1_44, &CtorFieldMap_47, CtorMap1_45, &CtorMap_48, CtorAddSpecs1_46, &CtorAddSpecs_49);
          hlds__hlds_module__module_info_set_cons_table_3_p_0(CtorMap_48, STATE_VARIABLE_ModuleInfo_71_71, &STATE_VARIABLE_ModuleInfo_75_75);
          hlds__hlds_module__module_info_set_ctor_field_table_3_p_0(CtorFieldMap_47, STATE_VARIABLE_ModuleInfo_75_75, STATE_VARIABLE_ModuleInfo_61);
          if ((CtorAddSpecs_49 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *STATE_VARIABLE_FoundInvalidType_59 = STATE_VARIABLE_FoundInvalidType_67_67;
            *STATE_VARIABLE_Specs_63 = STATE_VARIABLE_Specs_68_68;
          }
          else
          {
            *STATE_VARIABLE_FoundInvalidType_59 = (MR_Integer) 1;
            *STATE_VARIABLE_Specs_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), CtorAddSpecs_49, STATE_VARIABLE_Specs_68_68);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_FoundInvalidType_59 = STATE_VARIABLE_FoundInvalidType_0_58;
          *STATE_VARIABLE_ModuleInfo_61 = STATE_VARIABLE_ModuleInfo_0_60;
          *STATE_VARIABLE_Specs_63 = STATE_VARIABLE_Specs_0_62;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Body_20, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_FoundInvalidType_59 = STATE_VARIABLE_FoundInvalidType_0_58;
              *STATE_VARIABLE_ModuleInfo_61 = STATE_VARIABLE_ModuleInfo_0_60;
              *STATE_VARIABLE_Specs_63 = STATE_VARIABLE_Specs_0_62;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_FoundInvalidType_59 = STATE_VARIABLE_FoundInvalidType_0_58;
              *STATE_VARIABLE_ModuleInfo_61 = STATE_VARIABLE_ModuleInfo_0_60;
              *STATE_VARIABLE_Specs_63 = STATE_VARIABLE_Specs_0_62;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_defn_11_p_0(
  MR_Word TypeTable_12,
  MR_Word TVarSet_13,
  MR_Word TypeCtor_14,
  MR_Word TypeDefn_15,
  MR_Word TypeBody_16,
  MR_Word SuperType_17,
  MR_Word * MaybeSetSubtypeNoncanon_18,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_33,
  MR_Word * STATE_VARIABLE_FoundInvalidType_34,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36)
{
  {
    MR_bool succeeded;
    MR_Word OrigTypeStatus_21;
    MR_Word Context_22;
    MR_Word SuperTypeCtor_23;
    MR_Word SuperTypeArgs_24;

    hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_15, &OrigTypeStatus_21);
    hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_15, &Context_22);
    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(SuperType_17, &SuperTypeCtor_23, &SuperTypeArgs_24);
    if (succeeded)
    {
      MR_Word Seen0_25;
      MR_Word STATE_VARIABLE_Seen_16_72;

      Seen0_25 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_14)));
      succeeded = mercury__set__insert_new_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (SuperTypeCtor_23)), Seen0_25, &STATE_VARIABLE_Seen_16_72);
      if (succeeded)
      {
        MR_Word TypeDefn_70;

        succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_12, SuperTypeCtor_23, &TypeDefn_70);
        if (succeeded)
        {
          MR_Word TypeStatus_71;
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Word Var_82;
          MR_Word Var_83;

          hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_70, &TypeStatus_71);
          Var_80 = hlds__status__type_status_defined_in_this_module_1_f_0(OrigTypeStatus_21);
          succeeded = (Var_80 == (MR_Integer) 1);
          if (succeeded)
          {
            Var_81 = hlds__status__type_status_defined_in_impl_section_1_f_0(OrigTypeStatus_21);
            succeeded = (Var_81 == (MR_Integer) 0);
            if (succeeded)
            {
              Var_82 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_71);
              succeeded = (Var_82 == (MR_Integer) 1);
              if (succeeded)
              {
                Var_83 = hlds__status__type_status_defined_in_impl_section_1_f_0(TypeStatus_71);
                succeeded = (Var_83 == (MR_Integer) 1);
              }
            }
          }
          if (succeeded)
          {
            MR_Word Pieces_30;
            MR_Word Spec_31;

            Pieces_30 = hlds__make_hlds__add_type__supertype_ctor_defn_error_pieces_2_f_0(SuperTypeCtor_23, (MR_Integer) 0);
            {
              Spec_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_31, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_subtype_defn\'/11"));
              MR_hl_field(MR_mktag(1), Spec_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_31, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(MR_mktag(1), Spec_31, 3) = ((MR_Box) (Context_22));
              MR_hl_field(MR_mktag(1), Spec_31, 4) = ((MR_Box) (Pieces_30));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_36 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_31));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_35));
            }
            *STATE_VARIABLE_FoundInvalidType_34 = (MR_Integer) 1;
            *MaybeSetSubtypeNoncanon_18 = (MR_Integer) 0;
          }
          else
            hlds__make_hlds__add_type__check_subtype_defn_2_13_p_0(TypeTable_12, TypeCtor_14, TypeDefn_15, TypeBody_16, SuperTypeCtor_23, TypeDefn_70, SuperTypeArgs_24, STATE_VARIABLE_Seen_16_72, MaybeSetSubtypeNoncanon_18, STATE_VARIABLE_FoundInvalidType_0_33, STATE_VARIABLE_FoundInvalidType_34, STATE_VARIABLE_Specs_0_35, STATE_VARIABLE_Specs_36);
        }
        else
        {
          MR_Word Pieces_97;
          MR_Word Spec_98;

          Pieces_97 = hlds__make_hlds__add_type__supertype_ctor_defn_error_pieces_2_f_0(SuperTypeCtor_23, (MR_Integer) 1);
          {
            Spec_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_98, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_subtype_defn\'/11"));
            MR_hl_field(MR_mktag(1), Spec_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_98, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(1), Spec_98, 3) = ((MR_Box) (Context_22));
            MR_hl_field(MR_mktag(1), Spec_98, 4) = ((MR_Box) (Pieces_97));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_36 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_98));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_35));
          }
          *STATE_VARIABLE_FoundInvalidType_34 = (MR_Integer) 1;
          *MaybeSetSubtypeNoncanon_18 = (MR_Integer) 0;
        }
      }
      else
      {
        MR_Word Pieces_89;
        MR_Word Spec_90;

        Pieces_89 = hlds__make_hlds__add_type__supertype_ctor_defn_error_pieces_2_f_0(SuperTypeCtor_23, (MR_Integer) 2);
        {
          Spec_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_90, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_subtype_defn\'/11"));
          MR_hl_field(MR_mktag(1), Spec_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_90, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(1), Spec_90, 3) = ((MR_Box) (Context_22));
          MR_hl_field(MR_mktag(1), Spec_90, 4) = ((MR_Box) (Pieces_89));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_36 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_90));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_35));
        }
        *STATE_VARIABLE_FoundInvalidType_34 = (MR_Integer) 1;
        *MaybeSetSubtypeNoncanon_18 = (MR_Integer) 0;
      }
    }
    else
    {
      MR_String SuperTypeStr_32;
      MR_Word Var_47;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Pieces_60;
      MR_Word Spec_61;

      SuperTypeStr_32 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TVarSet_13, (MR_Integer) 0, SuperType_17);
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (SuperTypeStr_32));
      }
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[8])));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[135])));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
      }
      {
        Pieces_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[134])));
        MR_hl_field(MR_mktag(1), Pieces_60, 1) = ((MR_Box) (Var_47));
      }
      {
        Spec_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_61, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_subtype_defn\'/11"));
        MR_hl_field(MR_mktag(1), Spec_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_61, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(1), Spec_61, 3) = ((MR_Box) (Context_22));
        MR_hl_field(MR_mktag(1), Spec_61, 4) = ((MR_Box) (Pieces_60));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_36 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_61));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_35));
      }
      *STATE_VARIABLE_FoundInvalidType_34 = (MR_Integer) 1;
      *MaybeSetSubtypeNoncanon_18 = (MR_Integer) 0;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_defn_2_13_p_0(
  MR_Word TypeTable_14,
  MR_Word TypeCtor_15,
  MR_Word TypeDefn_16,
  MR_Word TypeBody_17,
  MR_Word SuperTypeCtor_18,
  MR_Word SuperTypeDefn_19,
  MR_Word SuperTypeArgs_20,
  MR_Word Seen0_21,
  MR_Word * MaybeSetSubtypeNoncanon_22,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_40,
  MR_Word * STATE_VARIABLE_FoundInvalidType_41,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43)
{
  {
    MR_Word Context_25;
    MR_Word SuperTypeBody_26;

    hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_16, &Context_25);
    hlds__hlds_data__get_type_defn_body_2_p_0(SuperTypeDefn_19, &SuperTypeBody_26);
    switch (MR_tag((MR_Word) SuperTypeBody_26)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String SuperTypeDesc_39;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_51;
          MR_Word Var_52;
          MR_Word Pieces_84;
          MR_Word Spec_85;

          switch (MR_tag((MR_Word) SuperTypeBody_26)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              SuperTypeDesc_39 = (MR_String) "a foreign type";
              break;
            case (MR_Integer) 2:
              SuperTypeDesc_39 = (MR_String) "an equivalence type";
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), SuperTypeBody_26, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  SuperTypeDesc_39 = (MR_String) "a solver type";
                  break;
                case (MR_Integer) 1:
                  SuperTypeDesc_39 = (MR_String) "an abstract type";
                  break;
              }
              break;
          }
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) ((MR_Unsigned) 14U));
            MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (SuperTypeCtor_18));
          }
          {
            Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (SuperTypeDesc_39));
          }
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
            MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[12])));
          }
          {
            Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[133])));
            MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_51));
          }
          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
            MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_48));
          }
          {
            Pieces_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[98])));
            MR_hl_field(MR_mktag(1), Pieces_84, 1) = ((MR_Box) (Var_46));
          }
          {
            Spec_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_85, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_subtype_defn_2\'/13"));
            MR_hl_field(MR_mktag(1), Spec_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_85, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(1), Spec_85, 3) = ((MR_Box) (Context_25));
            MR_hl_field(MR_mktag(1), Spec_85, 4) = ((MR_Box) (Pieces_84));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_43 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_85));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_42));
          }
          *STATE_VARIABLE_FoundInvalidType_41 = (MR_Integer) 1;
          *MaybeSetSubtypeNoncanon_22 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word IsForeign_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SuperTypeBody_26, (MR_Integer) 4))));

          if ((IsForeign_31 == (MR_Word) ((MR_Unsigned) 0U)))
            hlds__make_hlds__add_type__check_subtype_defn_3_14_p_0(TypeTable_14, TypeCtor_15, TypeDefn_16, TypeBody_17, SuperTypeCtor_18, SuperTypeDefn_19, SuperTypeBody_26, SuperTypeArgs_20, Seen0_21, MaybeSetSubtypeNoncanon_22, STATE_VARIABLE_FoundInvalidType_0_40, STATE_VARIABLE_FoundInvalidType_41, STATE_VARIABLE_Specs_0_42, STATE_VARIABLE_Specs_43);
          else
          {
            MR_Word Pieces_33;
            MR_Word Spec_34;
            MR_Word Var_66;
            MR_Word Var_67;

            {
              Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) ((MR_Unsigned) 14U));
              MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (SuperTypeCtor_18));
            }
            {
              Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
              MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[78])));
            }
            {
              Pieces_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[98])));
              MR_hl_field(MR_mktag(1), Pieces_33, 1) = ((MR_Box) (Var_66));
            }
            {
              Spec_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_34, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_subtype_defn_2\'/13"));
              MR_hl_field(MR_mktag(1), Spec_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_34, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(MR_mktag(1), Spec_34, 3) = ((MR_Box) (Context_25));
              MR_hl_field(MR_mktag(1), Spec_34, 4) = ((MR_Box) (Pieces_33));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_43 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_34));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_42));
            }
            *STATE_VARIABLE_FoundInvalidType_41 = (MR_Integer) 1;
            *MaybeSetSubtypeNoncanon_22 = (MR_Integer) 0;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String SuperTypeDesc_39;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_51;
          MR_Word Var_52;
          MR_Word Pieces_84;
          MR_Word Spec_85;

          switch (MR_tag((MR_Word) SuperTypeBody_26)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              SuperTypeDesc_39 = (MR_String) "a foreign type";
              break;
            case (MR_Integer) 2:
              SuperTypeDesc_39 = (MR_String) "an equivalence type";
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), SuperTypeBody_26, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  SuperTypeDesc_39 = (MR_String) "a solver type";
                  break;
                case (MR_Integer) 1:
                  SuperTypeDesc_39 = (MR_String) "an abstract type";
                  break;
              }
              break;
          }
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) ((MR_Unsigned) 14U));
            MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (SuperTypeCtor_18));
          }
          {
            Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (SuperTypeDesc_39));
          }
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
            MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[12])));
          }
          {
            Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[133])));
            MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_51));
          }
          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
            MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_48));
          }
          {
            Pieces_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[98])));
            MR_hl_field(MR_mktag(1), Pieces_84, 1) = ((MR_Box) (Var_46));
          }
          {
            Spec_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_85, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_subtype_defn_2\'/13"));
            MR_hl_field(MR_mktag(1), Spec_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_85, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(1), Spec_85, 3) = ((MR_Box) (Context_25));
            MR_hl_field(MR_mktag(1), Spec_85, 4) = ((MR_Box) (Pieces_84));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_43 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_85));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_42));
          }
          *STATE_VARIABLE_FoundInvalidType_41 = (MR_Integer) 1;
          *MaybeSetSubtypeNoncanon_22 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String SuperTypeDesc_39;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_51;
          MR_Word Var_52;
          MR_Word Pieces_84;
          MR_Word Spec_85;

          switch (MR_tag((MR_Word) SuperTypeBody_26)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              SuperTypeDesc_39 = (MR_String) "a foreign type";
              break;
            case (MR_Integer) 2:
              SuperTypeDesc_39 = (MR_String) "an equivalence type";
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), SuperTypeBody_26, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  SuperTypeDesc_39 = (MR_String) "a solver type";
                  break;
                case (MR_Integer) 1:
                  SuperTypeDesc_39 = (MR_String) "an abstract type";
                  break;
              }
              break;
          }
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) ((MR_Unsigned) 14U));
            MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (SuperTypeCtor_18));
          }
          {
            Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (SuperTypeDesc_39));
          }
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
            MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[12])));
          }
          {
            Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[133])));
            MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_51));
          }
          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
            MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_48));
          }
          {
            Pieces_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[98])));
            MR_hl_field(MR_mktag(1), Pieces_84, 1) = ((MR_Box) (Var_46));
          }
          {
            Spec_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_85, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_subtype_defn_2\'/13"));
            MR_hl_field(MR_mktag(1), Spec_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_85, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(1), Spec_85, 3) = ((MR_Box) (Context_25));
            MR_hl_field(MR_mktag(1), Spec_85, 4) = ((MR_Box) (Pieces_84));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_43 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_85));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_42));
          }
          *STATE_VARIABLE_FoundInvalidType_41 = (MR_Integer) 1;
          *MaybeSetSubtypeNoncanon_22 = (MR_Integer) 0;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_defn_3_14_p_0(
  MR_Word TypeTable_15,
  MR_Word TypeCtor_16,
  MR_Word TypeDefn_17,
  MR_Word TypeBody_18,
  MR_Word SuperTypeCtor_19,
  MR_Word SuperTypeDefn_20,
  MR_Word SuperTypeBody_21,
  MR_Word SuperTypeArgs_22,
  MR_Word Seen0_23,
  MR_Word * MaybeSetSubtypeNoncanon_24,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_37,
  MR_Word * STATE_VARIABLE_FoundInvalidType_38,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40)
{
  {
    MR_Word TypeStatus_27;
    MR_Word MaybeBaseTypeError_28;
    MR_Word _Seen_29;

    hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_17, &TypeStatus_27);
    hlds__make_hlds__add_type__check_subtype_has_base_type_7_p_0(TypeTable_15, TypeStatus_27, SuperTypeCtor_19, SuperTypeDefn_20, &MaybeBaseTypeError_28, Seen0_23, &_Seen_29);
    if (((MR_tag((MR_Word) MaybeBaseTypeError_28)) == (MR_Integer) 1))
    {
      MR_Word Pieces_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBaseTypeError_28, (MR_Integer) 0))));

      if ((Pieces_32 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
      else
      {
        MR_Word Context_35;
        MR_Word Spec_36;

        hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_17, &Context_35);
        {
          Spec_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_36, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_subtype_defn_3\'/14"));
          MR_hl_field(MR_mktag(1), Spec_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_36, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(1), Spec_36, 3) = ((MR_Box) (Context_35));
          MR_hl_field(MR_mktag(1), Spec_36, 4) = ((MR_Box) (Pieces_32));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_40 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_36));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_39));
        }
      }
      *STATE_VARIABLE_FoundInvalidType_38 = (MR_Integer) 1;
      *MaybeSetSubtypeNoncanon_24 = (MR_Integer) 0;
    }
    else
    {
      MR_Word BaseMaybeCanonical_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeBaseTypeError_28, (MR_Integer) 0))));

      if ((BaseMaybeCanonical_30 == (MR_Word) ((MR_Unsigned) 0U)))
        *MaybeSetSubtypeNoncanon_24 = (MR_Integer) 0;
      else
        *MaybeSetSubtypeNoncanon_24 = (MR_Integer) 1;
      hlds__make_hlds__add_type__check_subtype_ctors_12_p_0(TypeTable_15, TypeCtor_16, TypeDefn_17, TypeBody_18, SuperTypeCtor_19, SuperTypeDefn_20, SuperTypeBody_21, SuperTypeArgs_22, STATE_VARIABLE_FoundInvalidType_0_37, STATE_VARIABLE_FoundInvalidType_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
    }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_FoundInvalidType_30;
    MR_Word conv1_STATE_VARIABLE_Specs_32;

    hlds__make_hlds__add_type__check_subtype_ctor_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_FoundInvalidType_30, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Specs_32);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_FoundInvalidType_30));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Specs_32));
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctors_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Ctor_8;

    hlds__make_hlds__add_type__rename_and_rec_subst_in_constructor_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_Ctor_8);
    *wrapper_arg_2 = ((MR_Box) (conv0_Ctor_8));
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctors_12_p_0(
  MR_Word TypeTable_13,
  MR_Word TypeCtor_14,
  MR_Word TypeDefn_15,
  MR_Word TypeBody_16,
  MR_Word SuperTypeCtor_17,
  MR_Word SuperTypeDefn_18,
  MR_Word SuperTypeBody_19,
  MR_Word SuperTypeArgs_20,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_45,
  MR_Word * STATE_VARIABLE_FoundInvalidType_46,
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48)
{
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
    OoMSuperCtors_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SuperTypeBody_19, (MR_Integer) 0))));
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
    OoMCtors_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeBody_16, (MR_Integer) 0))));
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
    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_type_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[5]), Var_50, Ctors_43, ((MR_Box) (STATE_VARIABLE_FoundInvalidType_0_45)), &conv4_STATE_VARIABLE_FoundInvalidType_46, ((MR_Box) (STATE_VARIABLE_Specs_0_47)), &conv3_STATE_VARIABLE_Specs_52_52);
    *STATE_VARIABLE_FoundInvalidType_46 = ((MR_Word) (conv4_STATE_VARIABLE_FoundInvalidType_46));
    STATE_VARIABLE_Specs_52_52 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_52_52));
    hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_15, &Context_44);
    hlds__make_hlds__add_type__check_subtype_ctors_order_7_p_0(TypeCtor_14, Ctors_43, SuperTypeCtor_17, SuperCtors_37, Context_44, STATE_VARIABLE_Specs_52_52, STATE_VARIABLE_Specs_48);
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctors_order_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_LambdaHeadVar__2_25;

    conv3_LambdaHeadVar__2_25 = hlds__make_hlds__add_type__IntroducedFrom__func__check_subtype_ctors_order__1937__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_25));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctors_order_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv2_CtorName_4;

    succeeded = hlds__make_hlds__add_type__edit_to_ctor_out_of_order_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_CtorName_4);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv2_CtorName_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctors_order_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_type__IntroducedFrom__pred__compute_subtype_ctors_out_of_order__1965__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctors_order_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_UnqualNameArity_4;

    hlds__make_hlds__add_type__ctor_to_unqual_sym_name_arity_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_UnqualNameArity_4);
    *wrapper_arg_2 = ((MR_Box) (conv1_UnqualNameArity_4));
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctors_order_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_UnqualNameArity_4;

    hlds__make_hlds__add_type__ctor_to_unqual_sym_name_arity_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_UnqualNameArity_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_UnqualNameArity_4));
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_ctors_order_7_p_0(
  MR_Word TypeCtor_8,
  MR_Word Ctors_9,
  MR_Word SuperTypeCtor_10,
  MR_Word SuperCtors_11,
  MR_Word Context_12,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  {
    MR_bool succeeded;

    if ((Ctors_9 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_0_21;
    else
    {
      MR_Word Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ctors_9, (MR_Integer) 1))));

      if ((Var_95 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_0_21;
      else
      {
        MR_Word CtorNames0_70;
        MR_Word SuperCtorNames_71;
        MR_Word CtorNames_72;
        MR_Word EditSeq_74;
        MR_Word Var_78;
        MR_Word CtorsOutOfOrder_98;

        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_2[3]), Ctors_9, &CtorNames0_70);
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_2[4]), SuperCtors_11, &SuperCtorNames_71);
        {
          Var_78 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_5[2]));
          MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (hlds__make_hlds__add_type__check_subtype_ctors_order_7_p_0_3));
          MR_hl_field(MR_mktag(0), Var_78, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_78, 3) = ((MR_Box) (SuperCtorNames_71));
        }
        mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), Var_78, CtorNames0_70, &CtorNames_72);
        mercury__edit_seq__find_shortest_edit_seq_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_2[5]), SuperCtorNames_71, CtorNames_72, &EditSeq_74);
        mercury__list__filter_map_3_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_2[6]), EditSeq_74, &CtorsOutOfOrder_98);
        if ((CtorsOutOfOrder_98 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_0_21;
        else
        {
          MR_Word CtorsOutOfOrderPieces_17;
          MR_Word Pieces_19;
          MR_Word Spec_20;
          MR_Word Var_28;
          MR_Word Var_31;
          MR_Word Var_32;
          MR_Word Var_33;
          MR_Word Var_36;
          MR_Word Var_39;
          MR_Word Var_40;
          MR_Word Var_48;
          MR_Word Var_49;

          CtorsOutOfOrderPieces_17 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[6]), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_2[7]), CtorsOutOfOrder_98);
          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 14U));
            MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (TypeCtor_8));
          }
          {
            Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) ((MR_Unsigned) 14U));
            MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (SuperTypeCtor_10));
          }
          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
            MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[95])));
          }
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[130])));
            MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_39));
          }
          {
            Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[129])));
            MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
          }
          {
            Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
            MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
          }
          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[128])));
            MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_31));
          }
          Var_49 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(CtorsOutOfOrderPieces_17, (MR_Word) ((MR_Unsigned) 0U));
          Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_49, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[132])));
          Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_28, Var_48);
          {
            Spec_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_subtype_ctors_order\'/7"));
            MR_hl_field(MR_mktag(1), Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(1), Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(1), Spec_20, 3) = ((MR_Box) (Context_12));
            MR_hl_field(MR_mktag(1), Spec_20, 4) = ((MR_Box) (Pieces_19));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_22 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_20));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_21));
          }
        }
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_subtype_has_base_type_7_p_0(
  MR_Word TypeTable_8,
  MR_Word OrigTypeStatus_9,
  MR_Word CurTypeCtor_10,
  MR_Word CurTypeDefn_11,
  MR_Word * MaybeError_12,
  MR_Word STATE_VARIABLE_Seen_0_35,
  MR_Word * STATE_VARIABLE_Seen_36)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word CurTypeBody_14;

    // setup for model_det tailcalls optimized into a loop
    ;
    hlds__hlds_data__get_type_defn_body_2_p_0(CurTypeDefn_11, &CurTypeBody_14);
    switch (MR_tag((MR_Word) CurTypeBody_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String CurTypeDesc_34;
          MR_Word Var_39;
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Pieces_77;

          switch (MR_tag((MR_Word) CurTypeBody_14)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              CurTypeDesc_34 = (MR_String) "a foreign type";
              break;
            case (MR_Integer) 2:
              CurTypeDesc_34 = (MR_String) "an equivalence type";
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), CurTypeBody_14, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  CurTypeDesc_34 = (MR_String) "a solver type";
                  break;
                case (MR_Integer) 1:
                  CurTypeDesc_34 = (MR_String) "an abstract type";
                  break;
              }
              break;
          }
          {
            Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) ((MR_Unsigned) 14U));
            MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (CurTypeCtor_10));
          }
          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (CurTypeDesc_34));
          }
          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
            MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[12])));
          }
          {
            Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[127])));
            MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
          }
          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
            MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_41));
          }
          {
            Pieces_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[98])));
            MR_hl_field(MR_mktag(1), Pieces_77, 1) = ((MR_Box) (Var_39));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeError_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Pieces_77));
          }
          *STATE_VARIABLE_Seen_36 = STATE_VARIABLE_Seen_0_35;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MaybeSuperType_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CurTypeBody_14, (MR_Integer) 1))));
          MR_Word MaybeCanonical_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CurTypeBody_14, (MR_Integer) 2))));
          MR_Word IsForeign_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CurTypeBody_14, (MR_Integer) 4))));

          if ((IsForeign_19 == (MR_Word) ((MR_Unsigned) 0U)))
            if ((MaybeSuperType_16 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeError_12 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeCanonical_17));
              }
              *STATE_VARIABLE_Seen_36 = STATE_VARIABLE_Seen_0_35;
            }
            else
            {
              MR_Word SuperType_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSuperType_16, (MR_Integer) 0))));
              MR_Word SuperTypeCtor_21;
              MR_Word Var_22;

              succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(SuperType_20, &SuperTypeCtor_21, &Var_22);
              if (succeeded)
              {
                MR_Word SearchRes_23;
                MR_Word STATE_VARIABLE_Seen_62_62;

                hlds__make_hlds__add_type__search_super_type_ctor_defn_6_p_0(TypeTable_8, OrigTypeStatus_9, SuperTypeCtor_21, &SearchRes_23, STATE_VARIABLE_Seen_0_35, &STATE_VARIABLE_Seen_62_62);
                if (((MR_tag((MR_Word) SearchRes_23)) == (MR_Integer) 1))
                {
                  MR_Word Error_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SearchRes_23, (MR_Integer) 0))));
                  MR_Word Pieces_26;

                  Pieces_26 = hlds__make_hlds__add_type__supertype_ctor_defn_error_pieces_2_f_0(SuperTypeCtor_21, Error_25);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeError_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Pieces_26));
                  }
                  *STATE_VARIABLE_Seen_36 = STATE_VARIABLE_Seen_62_62;
                }
                else
                {
                  MR_Word SuperTypeDefn_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SearchRes_23, (MR_Integer) 0))));
                  MR_Word next_value_of_CurTypeCtor_10 = SuperTypeCtor_21;
                  MR_Word next_value_of_CurTypeDefn_11 = SuperTypeDefn_24;
                  MR_Word next_value_of_STATE_VARIABLE_Seen_0_35 = STATE_VARIABLE_Seen_62_62;

                  // direct tailcall eliminated
                  ;
                  CurTypeCtor_10 = next_value_of_CurTypeCtor_10;
                  CurTypeDefn_11 = next_value_of_CurTypeDefn_11;
                  STATE_VARIABLE_Seen_0_35 = next_value_of_STATE_VARIABLE_Seen_0_35;
                  continue;
                }
              }
              else
              {
                MR_Word TVarSet_27;
                MR_String SuperTypeStr_28;
                MR_Word Var_67;
                MR_Word Var_68;
                MR_Word Pieces_75;

                hlds__hlds_data__get_type_defn_tvarset_2_p_0(CurTypeDefn_11, &TVarSet_27);
                SuperTypeStr_28 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TVarSet_27, (MR_Integer) 0, SuperType_20);
                {
                  Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (SuperTypeStr_28));
                }
                {
                  Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
                  MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[80])));
                }
                {
                  Pieces_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[98])));
                  MR_hl_field(MR_mktag(1), Pieces_75, 1) = ((MR_Box) (Var_67));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeError_12 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Pieces_75));
                }
                *STATE_VARIABLE_Seen_36 = STATE_VARIABLE_Seen_0_35;
              }
            }
          else
          {
            MR_Word Var_54;
            MR_Word Var_55;
            MR_Word Pieces_76;

            {
              Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) ((MR_Unsigned) 14U));
              MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (CurTypeCtor_10));
            }
            {
              Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
              MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[82])));
            }
            {
              Pieces_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[98])));
              MR_hl_field(MR_mktag(1), Pieces_76, 1) = ((MR_Box) (Var_54));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeError_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Pieces_76));
            }
            *STATE_VARIABLE_Seen_36 = STATE_VARIABLE_Seen_0_35;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String CurTypeDesc_34;
          MR_Word Var_39;
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Pieces_77;

          switch (MR_tag((MR_Word) CurTypeBody_14)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              CurTypeDesc_34 = (MR_String) "a foreign type";
              break;
            case (MR_Integer) 2:
              CurTypeDesc_34 = (MR_String) "an equivalence type";
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), CurTypeBody_14, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  CurTypeDesc_34 = (MR_String) "a solver type";
                  break;
                case (MR_Integer) 1:
                  CurTypeDesc_34 = (MR_String) "an abstract type";
                  break;
              }
              break;
          }
          {
            Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) ((MR_Unsigned) 14U));
            MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (CurTypeCtor_10));
          }
          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (CurTypeDesc_34));
          }
          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
            MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[12])));
          }
          {
            Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[127])));
            MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
          }
          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
            MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_41));
          }
          {
            Pieces_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[98])));
            MR_hl_field(MR_mktag(1), Pieces_77, 1) = ((MR_Box) (Var_39));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeError_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Pieces_77));
          }
          *STATE_VARIABLE_Seen_36 = STATE_VARIABLE_Seen_0_35;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String CurTypeDesc_34;
          MR_Word Var_39;
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Pieces_77;

          switch (MR_tag((MR_Word) CurTypeBody_14)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              CurTypeDesc_34 = (MR_String) "a foreign type";
              break;
            case (MR_Integer) 2:
              CurTypeDesc_34 = (MR_String) "an equivalence type";
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), CurTypeBody_14, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  CurTypeDesc_34 = (MR_String) "a solver type";
                  break;
                case (MR_Integer) 1:
                  CurTypeDesc_34 = (MR_String) "an abstract type";
                  break;
              }
              break;
          }
          {
            Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) ((MR_Unsigned) 14U));
            MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (CurTypeCtor_10));
          }
          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (CurTypeDesc_34));
          }
          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
            MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[12])));
          }
          {
            Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[127])));
            MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
          }
          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
            MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_41));
          }
          {
            Pieces_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[98])));
            MR_hl_field(MR_mktag(1), Pieces_77, 1) = ((MR_Box) (Var_39));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeError_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Pieces_77));
          }
          *STATE_VARIABLE_Seen_36 = STATE_VARIABLE_Seen_0_35;
        }
        break;
    }
    break;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_type__supertype_ctor_defn_error_pieces_2_f_0(
  MR_Word SuperTypeCtor_4,
  MR_Word Error_5)
{
  {
    MR_bool succeeded;
    MR_Word Pieces_6;

    switch (Error_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[84]));
        break;
      case (MR_Integer) 1:
        {
          {
            MR_Word SymName_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SuperTypeCtor_4, (MR_Integer) 0))));
            MR_Integer Arity_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SuperTypeCtor_4, (MR_Integer) 1))));
            MR_String TypeName_45;

            succeeded = (Arity_44 == (MR_Integer) 0);
            if (succeeded)
            {
              if (((MR_tag((MR_Word) SymName_43)) == (MR_Integer) 1))
              {
                MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_43, (MR_Integer) 0))));
                MR_Word Var_50;

                TypeName_45 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_43, (MR_Integer) 1))));
                Var_50 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_49, Var_50);
              }
              else
              {
                TypeName_45 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_43, (MR_Integer) 0))));
                succeeded = MR_TRUE;
              }
              if (succeeded)
                succeeded = parse_tree__prog_data__is_builtin_type_name_1_p_0(TypeName_45);
            }
          }
          if (!(succeeded))
          {
            {
              MR_Word Var_46;
              MR_Word Var_47;

              succeeded = parse_tree__prog_type__type_ctor_is_higher_order_4_p_0(SuperTypeCtor_4, &Var_46, &Var_47);
            }
            if (!(succeeded))
              succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(SuperTypeCtor_4);
          }
          if (succeeded)
          {
            MR_Word Var_14;
            MR_Word Var_15;

            {
              Var_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_15, 0) = ((MR_Box) ((MR_Unsigned) 14U));
              MR_hl_field(MR_mktag(3), Var_15, 1) = ((MR_Box) (SuperTypeCtor_4));
            }
            {
              Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (Var_15));
              MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[80])));
            }
            {
              Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[98])));
              MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_14));
            }
          }
          else
          {
            MR_Word Var_24;
            MR_Word Var_25;

            {
              Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 14U));
              MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (SuperTypeCtor_4));
            }
            {
              Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
              MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[12])));
            }
            {
              Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[125])));
              MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_24));
            }
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_34;
          MR_Word Var_35;

          {
            Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 14U));
            MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (SuperTypeCtor_4));
          }
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
            MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[86])));
          }
          {
            Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[126])));
            MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_34));
          }
        }
        break;
    }
    return Pieces_6;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__search_super_type_ctor_defn_6_p_0(
  MR_Word TypeTable_7,
  MR_Word OrigTypeStatus_8,
  MR_Word TypeCtor_9,
  MR_Word * Res_10,
  MR_Word STATE_VARIABLE_Seen_0_14,
  MR_Word * STATE_VARIABLE_Seen_15)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_Seen_16_16;

    succeeded = mercury__set__insert_new_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_9)), STATE_VARIABLE_Seen_0_14, &STATE_VARIABLE_Seen_16_16);
    if (succeeded)
    {
      MR_Word TypeDefn_12;

      *STATE_VARIABLE_Seen_15 = STATE_VARIABLE_Seen_16_16;
      succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_7, TypeCtor_9, &TypeDefn_12);
      if (succeeded)
      {
        MR_Word TypeStatus_13;
        MR_Word Var_24;
        MR_Word Var_25;
        MR_Word Var_26;
        MR_Word Var_27;

        hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_12, &TypeStatus_13);
        Var_24 = hlds__status__type_status_defined_in_this_module_1_f_0(OrigTypeStatus_8);
        succeeded = (Var_24 == (MR_Integer) 1);
        if (succeeded)
        {
          Var_25 = hlds__status__type_status_defined_in_impl_section_1_f_0(OrigTypeStatus_8);
          succeeded = (Var_25 == (MR_Integer) 0);
          if (succeeded)
          {
            Var_26 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_13);
            succeeded = (Var_26 == (MR_Integer) 1);
            if (succeeded)
            {
              Var_27 = hlds__status__type_status_defined_in_impl_section_1_f_0(TypeStatus_13);
              succeeded = (Var_27 == (MR_Integer) 1);
            }
          }
        }
        if (succeeded)
          *Res_10 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_6[0]));
        else
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Res_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeDefn_12));
          }
      }
      else
        *Res_10 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_6[1]));
    }
    else
    {
      *Res_10 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_6[2]));
      *STATE_VARIABLE_Seen_15 = STATE_VARIABLE_Seen_0_14;
    }
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
          MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 14U));
          MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (TypeCtor_10));
        }
        {
          Var_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_37, 0) = ((MR_Box) (LangStr_19));
        }
        {
          Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_37));
          MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[12])));
        }
        {
          Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[122])));
          MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
        }
        {
          Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[121])));
          MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_53));
        }
        {
          Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[120])));
          MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
        }
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[119])));
          MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
        }
        {
          Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[118])));
          MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
        }
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[117])));
          MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
        }
        {
          Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
          MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_38));
        }
        {
          Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[116])));
          MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
        }
        {
          Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
          MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
        }
        {
          MainPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MainPieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[103])));
          MR_hl_field(MR_mktag(1), MainPieces_20, 1) = ((MR_Box) (Var_31));
        }
        {
          Var_73 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (MainPieces_20));
        }
        {
          Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
          MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[124])));
        }
        {
          Msg_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Msg_22, 0) = ((MR_Box) (Context_13));
          MR_hl_field(MR_mktag(1), Msg_22, 1) = ((MR_Box) (Var_72));
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
          MR_hl_field(MR_mktag(0), Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_LambdaHeadVar__2_91;

    conv3_LambdaHeadVar__2_91 = hlds__make_hlds__add_type__IntroducedFrom__func__add_type_defn_ctor__1088__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_91));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ConsIds_15;

    hlds__make_hlds__add_type__add_ctor_to_list_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ConsIds_15);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ConsIds_15));
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_1(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_3(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_94 = ((MR_Word) ((env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__conv0_OtherConsDefn_94));
    hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_2(env_ptr);
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_2(
  void * env_ptr_arg)
{
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
}

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_4(
  void * env_ptr_arg)
{
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
          MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[70])));
        }
        {
          Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[115])));
          MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_70));
        }
        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
          MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_67));
        }
        {
          Pieces_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[114])));
          MR_hl_field(MR_mktag(1), Pieces_47, 1) = ((MR_Box) (Var_65));
        }
        {
          Spec_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_48, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.add_type_defn_ctor\'/15"));
          MR_hl_field(MR_mktag(1), Spec_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_48, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
          MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_4[0]));
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
      FieldNames_51 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[3]), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_2[2]), Args_31);
      hlds__make_hlds__add_type__add_ctor_field_names_11_p_0(FieldNames_51, NeedQual_22, PartialQuals_42, (env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17, QualifiedConsIdA_37, TypeStatus_24, (MR_Integer) 1, STATE_VARIABLE_FieldNameTable_0_54, STATE_VARIABLE_FieldNameTable_55, STATE_VARIABLE_Specs_81_81, STATE_VARIABLE_Specs_59);
    }
  }
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
        hlds__make_hlds__add_type__add_ctor_field_name_8_p_0(FieldName_34, FieldDefn_36, NeedQual_2, PartialQuals_3, STATE_VARIABLE_FieldNameTable_0_8, &STATE_VARIABLE_FieldNameTable_42_42, STATE_VARIABLE_Specs_0_10, &STATE_VARIABLE_Specs_43_43);
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

static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_FieldNameTable_11;

    hlds__make_hlds__add_type__do_add_ctor_field_5_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_FieldNameTable_11);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_FieldNameTable_11));
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0(
  MR_Word FieldName_9,
  MR_Word FieldDefn_10,
  MR_Word NeedQual_11,
  MR_Word PartialQuals_12,
  MR_Word STATE_VARIABLE_FieldNameTable_0_38,
  MR_Word * STATE_VARIABLE_FieldNameTable_39,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41)
{
  {
    MR_bool succeeded;
    MR_Word FieldModule_17;
    MR_Word ConflictingDefns_19;
    MR_Box conv0_ConflictingDefns_19;

    if (((MR_tag((MR_Word) FieldName_9)) == (MR_Integer) 1))
      FieldModule_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldName_9, (MR_Integer) 0))));
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_type.add_ctor_field_name\'/8", (MR_String) "unqualified field name");
        return;
      }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[4]), STATE_VARIABLE_FieldNameTable_0_38, ((MR_Box) (FieldName_9)), &conv0_ConflictingDefns_19);
    if (succeeded)
    {
      ConflictingDefns_19 = ((MR_Word) (conv0_ConflictingDefns_19));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word OrigContext_21;
      MR_Word Context_26;
      MR_String FieldString_31;
      MR_Word Pieces_32;
      MR_Word HereMsg_33;
      MR_Word PrevPieces_34;
      MR_Word PrevMsg_35;
      MR_Word Spec_36;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_59;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word ConflictingDefn_20;
      MR_Word Var_44;

      succeeded = (ConflictingDefns_19 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ConflictingDefn_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConflictingDefns_19, (MR_Integer) 0))));
        Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConflictingDefns_19, (MR_Integer) 1))));
        succeeded = (Var_44 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
        OrigContext_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConflictingDefn_20, (MR_Integer) 0))));
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_type.add_ctor_field_name\'/8", (MR_String) "multiple conflicting fields");
          return;
        }
      Context_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldDefn_10, (MR_Integer) 0))));
      FieldString_31 = mdbcomp__sym_name__sym_name_to_string_1_f_0(FieldName_9);
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) (FieldString_31));
      }
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[70])));
      }
      {
        Pieces_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[112])));
        MR_hl_field(MR_mktag(1), Pieces_32, 1) = ((MR_Box) (Var_49));
      }
      {
        HereMsg_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), HereMsg_33, 0) = ((MR_Box) (Context_26));
        MR_hl_field(MR_mktag(0), HereMsg_33, 1) = ((MR_Box) (Pieces_32));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[12])));
      }
      {
        PrevPieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PrevPieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[113])));
        MR_hl_field(MR_mktag(1), PrevPieces_34, 1) = ((MR_Box) (Var_59));
      }
      {
        PrevMsg_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PrevMsg_35, 0) = ((MR_Box) (OrigContext_21));
        MR_hl_field(MR_mktag(0), PrevMsg_35, 1) = ((MR_Box) (PrevPieces_34));
      }
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (PrevMsg_35));
        MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (HereMsg_33));
        MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_71));
      }
      {
        Spec_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_36, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.add_ctor_field_name\'/8"));
        MR_hl_field(MR_mktag(0), Spec_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_36, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(0), Spec_36, 3) = ((MR_Box) (Var_70));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_41 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_36));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_40));
      }
      *STATE_VARIABLE_FieldNameTable_39 = STATE_VARIABLE_FieldNameTable_0_38;
    }
    else
    {
      MR_String UnqualFieldName_37;
      MR_Word STATE_VARIABLE_FieldNameTable_75_75;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Box conv2_STATE_VARIABLE_FieldNameTable_39;

      UnqualFieldName_37 = mdbcomp__sym_name__unqualify_name_1_f_0(FieldName_9);
      switch (NeedQual_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word Var_74;

            {
              Var_74 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (UnqualFieldName_37));
            }
            mercury__multi_map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0), ((MR_Box) (Var_74)), ((MR_Box) (FieldDefn_10)), STATE_VARIABLE_FieldNameTable_0_38, &STATE_VARIABLE_FieldNameTable_75_75);
          }
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_FieldNameTable_75_75 = STATE_VARIABLE_FieldNameTable_0_38;
          break;
      }
      {
        Var_76 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (hlds__make_hlds__add_type__add_ctor_field_name_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_76, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_76, 3) = ((MR_Box) (UnqualFieldName_37));
        MR_hl_field(MR_mktag(0), Var_76, 4) = ((MR_Box) (FieldDefn_10));
      }
      {
        Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (FieldModule_17));
        MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (PartialQuals_12));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_2[0]), Var_76, Var_77, ((MR_Box) (STATE_VARIABLE_FieldNameTable_75_75)), &conv2_STATE_VARIABLE_FieldNameTable_39);
      *STATE_VARIABLE_FieldNameTable_39 = ((MR_Word) (conv2_STATE_VARIABLE_FieldNameTable_39));
      *STATE_VARIABLE_Specs_41 = STATE_VARIABLE_Specs_0_40;
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_9_p_0(
  MR_Word TypeStatus0_10,
  MR_Word NeedQual_11,
  MR_Word ItemTypeDefnInfo_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * STATE_VARIABLE_ModuleInfo_44,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_45,
  MR_Word * STATE_VARIABLE_FoundInvalidType_46,
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48)
{
  {
    MR_bool succeeded;
    MR_Word Specs_15;
    MR_Word SymName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_12, (MR_Integer) 0))));
    MR_Word TypeParams_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_12, (MR_Integer) 1))));
    MR_Word ParseTreeTypeDefn_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_12, (MR_Integer) 2))));
    MR_Word TVarSet_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_12, (MR_Integer) 3))));
    MR_Word Context_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_12, (MR_Integer) 4))));
    MR_Word Globals_22;
    MR_Integer Arity_23;
    MR_Word TypeCtor_24;
    MR_Word Body_25;
    MR_Word TypeStatus_32;
    MR_Word KindMap_33;
    MR_Word HLDSTypeDefn0_34;
    MR_Word STATE_VARIABLE_ModuleInfo_49_49;
    MR_Word STATE_VARIABLE_ModuleInfo_81_81;
    MR_Word Var_84;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_43, &Globals_22);
    mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), TypeParams_17, &Arity_23);
    {
      TypeCtor_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_24, 0) = ((MR_Box) (SymName_16));
      MR_hl_field(MR_mktag(0), TypeCtor_24, 1) = ((MR_Box) (Arity_23));
    }
    hlds__make_hlds__add_type__convert_type_defn_to_hlds_5_p_0(ParseTreeTypeDefn_18, TypeCtor_24, &Body_25, STATE_VARIABLE_ModuleInfo_0_43, &STATE_VARIABLE_ModuleInfo_49_49);
    if (((MR_tag((MR_Word) Body_25)) == (MR_Integer) 1))
    {
      MR_String Var_50;

      Var_50 = mercury__term__context_file_1_f_0(Context_20);
      succeeded = mercury__string__suffix_2_p_0(Var_50, (MR_String) ".int2");
    }
    else
    if (((((MR_tag((MR_Word) Body_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Body_25, (MR_Integer) 0)))) == (MR_Integer) 1))))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
      hlds__status__type_make_status_abstract_2_p_0(TypeStatus0_10, &TypeStatus_32);
    else
      TypeStatus_32 = TypeStatus0_10;
    mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0), &KindMap_33);
    hlds__hlds_data__create_hlds_type_defn_10_p_0(TVarSet_19, TypeParams_17, KindMap_33, Body_25, (MR_Integer) 0, TypeStatus_32, NeedQual_11, (MR_Integer) 0, Context_20, &HLDSTypeDefn0_34);
    switch (MR_tag((MR_Word) ParseTreeTypeDefn_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        hlds__make_hlds__add_type__module_add_type_defn_mercury_13_p_0(TypeStatus_32, TypeCtor_24, TypeParams_17, ParseTreeTypeDefn_18, Body_25, HLDSTypeDefn0_34, Context_20, STATE_VARIABLE_ModuleInfo_49_49, &STATE_VARIABLE_ModuleInfo_81_81, STATE_VARIABLE_FoundInvalidType_0_45, STATE_VARIABLE_FoundInvalidType_46, (MR_Word) ((MR_Unsigned) 0U), &Specs_15);
        break;
      case (MR_Integer) 1:
        {
          MR_Word Specs0_41;
          MR_Word Var_57;
          MR_Word Var_58;

          Var_57 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_32);
          succeeded = (Var_57 == (MR_Integer) 1);
          if (succeeded)
          {
            Var_58 = hlds__status__type_status_defined_in_impl_section_1_f_0(TypeStatus_32);
            succeeded = (Var_58 == (MR_Integer) 0);
          }
          if (succeeded)
          {
            MR_Word SolverPieces_39;
            MR_Word SolverSpec_40;
            MR_Word Var_61;
            MR_Word Var_64;
            MR_Word Var_65;

            {
              Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) ((MR_Unsigned) 14U));
              MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (TypeCtor_24));
            }
            {
              Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
              MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[10])));
            }
            {
              Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[111])));
              MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_64));
            }
            {
              SolverPieces_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), SolverPieces_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[110])));
              MR_hl_field(MR_mktag(1), SolverPieces_39, 1) = ((MR_Box) (Var_61));
            }
            {
              SolverSpec_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), SolverSpec_40, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.module_add_type_defn\'/9"));
              MR_hl_field(MR_mktag(1), SolverSpec_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), SolverSpec_40, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(MR_mktag(1), SolverSpec_40, 3) = ((MR_Box) (Context_20));
              MR_hl_field(MR_mktag(1), SolverSpec_40, 4) = ((MR_Box) (SolverPieces_39));
            }
            {
              Specs0_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Specs0_41, 0) = ((MR_Box) (SolverSpec_40));
              MR_hl_field(MR_mktag(1), Specs0_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          else
            Specs0_41 = (MR_Word) ((MR_Unsigned) 0U);
          hlds__make_hlds__add_type__module_add_type_defn_mercury_13_p_0(TypeStatus_32, TypeCtor_24, TypeParams_17, ParseTreeTypeDefn_18, Body_25, HLDSTypeDefn0_34, Context_20, STATE_VARIABLE_ModuleInfo_49_49, &STATE_VARIABLE_ModuleInfo_81_81, STATE_VARIABLE_FoundInvalidType_0_45, STATE_VARIABLE_FoundInvalidType_46, Specs0_41, &Specs_15);
        }
        break;
      case (MR_Integer) 2:
        hlds__make_hlds__add_type__module_add_type_defn_mercury_13_p_0(TypeStatus_32, TypeCtor_24, TypeParams_17, ParseTreeTypeDefn_18, Body_25, HLDSTypeDefn0_34, Context_20, STATE_VARIABLE_ModuleInfo_49_49, &STATE_VARIABLE_ModuleInfo_81_81, STATE_VARIABLE_FoundInvalidType_0_45, STATE_VARIABLE_FoundInvalidType_46, (MR_Word) ((MR_Unsigned) 0U), &Specs_15);
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ParseTreeTypeDefn_18, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            hlds__make_hlds__add_type__module_add_type_defn_abstract_11_p_0(TypeStatus_32, TypeCtor_24, Body_25, HLDSTypeDefn0_34, Context_20, STATE_VARIABLE_ModuleInfo_49_49, &STATE_VARIABLE_ModuleInfo_81_81, STATE_VARIABLE_FoundInvalidType_0_45, STATE_VARIABLE_FoundInvalidType_46, (MR_Word) ((MR_Unsigned) 0U), &Specs_15);
            break;
          case (MR_Integer) 1:
            hlds__make_hlds__add_type__module_add_type_defn_foreign_12_p_0(TypeStatus0_10, TypeStatus_32, TypeCtor_24, Body_25, HLDSTypeDefn0_34, Context_20, STATE_VARIABLE_ModuleInfo_49_49, &STATE_VARIABLE_ModuleInfo_81_81, STATE_VARIABLE_FoundInvalidType_0_45, STATE_VARIABLE_FoundInvalidType_46, (MR_Word) ((MR_Unsigned) 0U), &Specs_15);
            break;
        }
        break;
    }
    Var_84 = parse_tree__error_util__contains_errors_2_f_0(Globals_22, Specs_15);
    succeeded = (Var_84 == (MR_Integer) 1);
    if (succeeded)
      hlds__hlds_module__module_info_incr_errors_2_p_0(STATE_VARIABLE_ModuleInfo_81_81, STATE_VARIABLE_ModuleInfo_44);
    else
      *STATE_VARIABLE_ModuleInfo_44 = STATE_VARIABLE_ModuleInfo_81_81;
    *STATE_VARIABLE_Specs_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Specs_15, STATE_VARIABLE_Specs_0_47);
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__convert_type_defn_to_hlds_5_p_0(
  MR_Word TypeDefn_6,
  MR_Word TypeCtor_7,
  MR_Word * HLDSBody_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) TypeDefn_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DetailsDu_10 = (MR_Word) ((MR_Word) (TypeDefn_6));
          MR_Word MaybeSuperType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_10, (MR_Integer) 0))));
          MR_Word Ctors_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_10, (MR_Integer) 1))));
          MR_Word MaybeUserEqComp_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_10, (MR_Integer) 2))));
          MR_Word MaybeDirectArgCtors_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_10, (MR_Integer) 3))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            *HLDSBody_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Ctors_12));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MaybeSuperType_11));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (MaybeUserEqComp_13));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          if ((MaybeDirectArgCtors_14 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
          else
          {
            MR_Word DirectArgCtors_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDirectArgCtors_14, (MR_Integer) 0))));
            MR_Word TypeRepnDec0_18;
            MR_Word DirectArgMap0_19;
            MR_Word OldDirectArgCtors_20;
            MR_Box conv0_OldDirectArgCtors_20;

            hlds__hlds_module__module_info_get_type_repn_dec_2_p_0(STATE_VARIABLE_ModuleInfo_0_34, &TypeRepnDec0_18);
            DirectArgMap0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeRepnDec0_18, (MR_Integer) 1))));
            succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[1]), DirectArgMap0_19, ((MR_Box) (TypeCtor_7)), &conv0_OldDirectArgCtors_20);
            if (succeeded)
            {
              OldDirectArgCtors_20 = ((MR_Word) (conv0_OldDirectArgCtors_20));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[1]), ((MR_Box) (DirectArgCtors_17)), ((MR_Box) (OldDirectArgCtors_20)));
              if (!(succeeded))
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_type.convert_type_defn_to_hlds\'/5", (MR_String) "different DirectArgCtors for same TypeCtor");
                  return;
                }
              *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
            }
            else
            {
              MR_Word DirectArgMap_21;
              MR_Word TypeRepnDec_22;
              MR_Word Var_55;
              MR_Word Var_57;
              MR_Word Var_58;

              mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[1]), ((MR_Box) (TypeCtor_7)), ((MR_Box) (DirectArgCtors_17)), DirectArgMap0_19, &DirectArgMap_21);
              Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeRepnDec0_18, (MR_Integer) 0))));
              Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeRepnDec0_18, (MR_Integer) 2))));
              Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeRepnDec0_18, (MR_Integer) 3))));
              {
                TypeRepnDec_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeRepnDec_22, 0) = ((MR_Box) (Var_55));
                MR_hl_field(MR_mktag(0), TypeRepnDec_22, 1) = ((MR_Box) (DirectArgMap_21));
                MR_hl_field(MR_mktag(0), TypeRepnDec_22, 2) = ((MR_Box) (Var_57));
                MR_hl_field(MR_mktag(0), TypeRepnDec_22, 3) = ((MR_Box) (Var_58));
              }
              hlds__hlds_module__module_info_set_type_repn_dec_3_p_0(TypeRepnDec_22, STATE_VARIABLE_ModuleInfo_0_34, STATE_VARIABLE_ModuleInfo_35);
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DetailsSolver_24 = (MR_Word) (MR_body((MR_Word) (TypeDefn_6), (MR_Integer) 1));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HLDSBody_8 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (DetailsSolver_24));
          }
          *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word EqvType_23;
          MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeDefn_6, (MR_Integer) 0))));

          EqvType_23 = (MR_Word) (Var_45);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *HLDSBody_8 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (EqvType_23));
          }
          *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DetailsAbstract_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_6, (MR_Integer) 1))));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HLDSBody_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (DetailsAbstract_25));
              }
              *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word DetailsForeign_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_6, (MR_Integer) 1))));
              MR_Word ForeignType_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_26, (MR_Integer) 0))));
              MR_Word Assertions_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_26, (MR_Integer) 2))));
              MR_Word Body_31;
              MR_Word MaybeUserEqComp_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_26, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ForeignType_27)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word CForeignType_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignType_27, (MR_Integer) 0))));
                    MR_Word Data_30;
                    MR_Word Var_42;

                    {
                      Data_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Data_30, 0) = ((MR_Box) (CForeignType_29));
                      MR_hl_field(MR_mktag(0), Data_30, 1) = ((MR_Box) (MaybeUserEqComp_51));
                      MR_hl_field(MR_mktag(0), Data_30, 2) = ((MR_Box) (Assertions_28));
                    }
                    {
                      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Data_30));
                    }
                    {
                      Body_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Body_31, 0) = ((MR_Box) (Var_42));
                      MR_hl_field(MR_mktag(0), Body_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(0), Body_31, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word JavaForeignType_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ForeignType_27, (MR_Integer) 0))));
                    MR_Word Var_40;
                    MR_Word Data_49;

                    {
                      Data_49 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Data_49, 0) = ((MR_Box) (JavaForeignType_32));
                      MR_hl_field(MR_mktag(0), Data_49, 1) = ((MR_Box) (MaybeUserEqComp_51));
                      MR_hl_field(MR_mktag(0), Data_49, 2) = ((MR_Box) (Assertions_28));
                    }
                    {
                      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Data_49));
                    }
                    {
                      Body_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Body_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(0), Body_31, 1) = ((MR_Box) (Var_40));
                      MR_hl_field(MR_mktag(0), Body_31, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word CSharpForeignType_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ForeignType_27, (MR_Integer) 0))));
                    MR_Word Var_38;
                    MR_Word Data_50;

                    {
                      Data_50 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Data_50, 0) = ((MR_Box) (CSharpForeignType_33));
                      MR_hl_field(MR_mktag(0), Data_50, 1) = ((MR_Box) (MaybeUserEqComp_51));
                      MR_hl_field(MR_mktag(0), Data_50, 2) = ((MR_Box) (Assertions_28));
                    }
                    {
                      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Data_50));
                    }
                    {
                      Body_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Body_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(0), Body_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(0), Body_31, 2) = ((MR_Box) (Var_38));
                    }
                  }
                  break;
              }
              *HLDSBody_8 = (MR_Word) ((MR_Word) (Body_31));
              *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
            }
            break;
        }
        break;
    }
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
          hlds__make_hlds__add_type__maybe_report_multiple_def_error_10_p_0(TypeStatus_24, TypeCtor_15, Context_18, OldDefn_23, STATE_VARIABLE_ModuleInfo_0_37, STATE_VARIABLE_ModuleInfo_38, STATE_VARIABLE_FoundInvalidType_43_43, STATE_VARIABLE_FoundInvalidType_40, STATE_VARIABLE_Specs_44_44, STATE_VARIABLE_Specs_42);
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
        MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 14U));
        MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (TypeCtor_15));
      }
      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[24])));
      }
      {
        ForeignDeclPieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ForeignDeclPieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[109])));
        MR_hl_field(MR_mktag(1), ForeignDeclPieces_35, 1) = ((MR_Box) (Var_58));
      }
      {
        ForeignDeclSpec_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ForeignDeclSpec_36, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.module_add_type_defn_foreign\'/12"));
        MR_hl_field(MR_mktag(1), ForeignDeclSpec_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), ForeignDeclSpec_36, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
        MR_hl_field(MR_mktag(3), UTC_22, 0) = ((MR_Box) ((MR_Unsigned) 14U));
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
              MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[66])));
            }
            {
              Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[107])));
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
              MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[68])));
            }
            {
              Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[108])));
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
        MR_hl_field(MR_mktag(1), Spec_26, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
}

static void MR_CALL 
hlds__make_hlds__add_type__maybe_report_multiple_def_error_10_p_0(
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

      hlds__hlds_data__get_type_defn_context_2_p_0(OldDefn_14, &OldContext_20);
      hlds__make_hlds_error__report_multiple_def_error_8_p_0(SymName_18, Arity_19, (MR_String) "type", Context_13, OldContext_20, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
      *STATE_VARIABLE_FoundInvalidType_24 = (MR_Integer) 1;
    }
    *STATE_VARIABLE_ModuleInfo_22 = STATE_VARIABLE_ModuleInfo_0_21;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_maybe_foreign_type_bodies_4_p_0(
  MR_Word Globals_5,
  MR_Word BodyA_6,
  MR_Word BodyB_7,
  MR_Word * Body_8)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) BodyA_6)) == (MR_Integer) 1))
    {
      MR_Word ForeignTypeBodyB_20;
      MR_Word MaybeSuperTypeB_30;
      MR_Word MaybeForeignTypeBodyB_33;
      MR_Word ForeignTypeBodyB_34;
      MR_Word ForeignTypeBody_35;
      MR_Word Target_36;
      MR_Word OpMode_37;
      MR_Word MaybeCA_54;
      MR_Word MaybeJavaA_55;
      MR_Word MaybeCSharpA_56;
      MR_Word MaybeCB_57;
      MR_Word MaybeJavaB_58;
      MR_Word MaybeCSharpB_59;
      MR_Word MaybeC_60;
      MR_Word MaybeJava_61;
      MR_Word MaybeCSharp_62;
      MR_Word Var_41;
      MR_Word Var_50;
      MR_Word Var_42;
      MR_Word Var_43;

      succeeded = ((MR_tag((MR_Word) BodyB_7)) == (MR_Integer) 0);
      if (succeeded)
      {
        ForeignTypeBodyB_20 = (MR_Word) ((MR_Word) (BodyB_7));
        MaybeSuperTypeB_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BodyA_6, (MR_Integer) 1))));
        MaybeForeignTypeBodyB_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BodyA_6, (MR_Integer) 4))));
        succeeded = (MaybeSuperTypeB_30 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          if ((MaybeForeignTypeBodyB_33 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              ForeignTypeBodyB_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ForeignTypeBodyB_34, 0) = ((MR_Box) (MaybeSuperTypeB_30));
              MR_hl_field(MR_mktag(0), ForeignTypeBodyB_34, 1) = ((MR_Box) (MaybeSuperTypeB_30));
              MR_hl_field(MR_mktag(0), ForeignTypeBodyB_34, 2) = ((MR_Box) (MaybeSuperTypeB_30));
            }
          else
            ForeignTypeBodyB_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeignTypeBodyB_33, (MR_Integer) 0))));
          MaybeCA_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyB_20, (MR_Integer) 0))));
          MaybeJavaA_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyB_20, (MR_Integer) 1))));
          MaybeCSharpA_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyB_20, (MR_Integer) 2))));
          MaybeCB_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyB_34, (MR_Integer) 0))));
          MaybeJavaB_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyB_34, (MR_Integer) 1))));
          MaybeCSharpB_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyB_34, (MR_Integer) 2))));
          if ((MaybeCA_54 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            if ((MaybeCB_57 == (MR_Word) ((MR_Unsigned) 0U)))
              MaybeC_60 = (MR_Word) ((MR_Unsigned) 0U);
            else
              MaybeC_60 = MaybeCB_57;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (MaybeCB_57 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MaybeC_60 = MaybeCA_54;
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
          {
            if ((MaybeJavaA_55 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              if ((MaybeJavaB_58 == (MR_Word) ((MR_Unsigned) 0U)))
                MaybeJava_61 = (MR_Word) ((MR_Unsigned) 0U);
              else
                MaybeJava_61 = MaybeJavaB_58;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (MaybeJavaB_58 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                MaybeJava_61 = MaybeJavaA_55;
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
            {
              if ((MaybeCSharpA_56 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                if ((MaybeCSharpB_59 == (MR_Word) ((MR_Unsigned) 0U)))
                  MaybeCSharp_62 = (MR_Word) ((MR_Unsigned) 0U);
                else
                  MaybeCSharp_62 = MaybeCSharpB_59;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (MaybeCSharpB_59 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  MaybeCSharp_62 = MaybeCSharpA_56;
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
              {
                {
                  ForeignTypeBody_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ForeignTypeBody_35, 0) = ((MR_Box) (MaybeC_60));
                  MR_hl_field(MR_mktag(0), ForeignTypeBody_35, 1) = ((MR_Box) (MaybeJava_61));
                  MR_hl_field(MR_mktag(0), ForeignTypeBody_35, 2) = ((MR_Box) (MaybeCSharp_62));
                }
                libs__globals__get_target_2_p_0(Globals_5, &Target_36);
                libs__globals__get_op_mode_2_p_0(Globals_5, &OpMode_37);
                Var_41 = (MR_Integer) 1;
                backend_libs__foreign__have_foreign_type_for_backend_3_p_0(Target_36, ForeignTypeBody_35, &Var_50);
                succeeded = (Var_41 == Var_50);
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) OpMode_37)) == (MR_Integer) 3);
                  if (succeeded)
                  {
                    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_37, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) Var_42)) == (MR_Integer) 2);
                    if (succeeded)
                    {
                      Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_42, (MR_Integer) 0))));
                      succeeded = (Var_43 == (MR_Word) ((MR_Unsigned) 0U));
                    }
                  }
                  succeeded = !(succeeded);
                }
                if (succeeded)
                  *Body_8 = (MR_Word) ((MR_Word) (ForeignTypeBody_35));
                else
                {
                  MR_Word Var_44;
                  MR_Word Var_45;
                  MR_Word Var_46;
                  MR_Word Var_47;
                  MR_Word Var_48;

                  {
                    Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (ForeignTypeBody_35));
                  }
                  Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BodyA_6, (MR_Integer) 0))));
                  Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BodyA_6, (MR_Integer) 1))));
                  Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BodyA_6, (MR_Integer) 2))));
                  Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BodyA_6, (MR_Integer) 3))));
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    *Body_8 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_45));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_46));
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Var_47));
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Var_48));
                    MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (Var_44));
                  }
                }
                succeeded = MR_TRUE;
              }
            }
          }
        }
      }
    }
    else
    if (((MR_tag((MR_Word) BodyA_6)) == (MR_Integer) 0))
    {
      MR_Word Var_24 = (MR_Word) ((MR_Word) (BodyA_6));

      if (((MR_tag((MR_Word) BodyB_7)) == (MR_Integer) 1))
        succeeded = hlds__make_hlds__add_type__merge_foreign_and_du_type_bodies_4_p_0(Globals_5, Var_24, BodyB_7, Body_8);
      else
      if (((MR_tag((MR_Word) BodyB_7)) == (MR_Integer) 0))
      {
        MR_Word ForeignTypeBody_21;
        MR_Word ForeignTypeBodyB_23 = (MR_Word) ((MR_Word) (BodyB_7));
        MR_Word MaybeCA_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0))));
        MR_Word MaybeJavaA_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 1))));
        MR_Word MaybeCSharpA_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 2))));
        MR_Word MaybeCB_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyB_23, (MR_Integer) 0))));
        MR_Word MaybeJavaB_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyB_23, (MR_Integer) 1))));
        MR_Word MaybeCSharpB_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyB_23, (MR_Integer) 2))));
        MR_Word MaybeC_81;
        MR_Word MaybeJava_82;
        MR_Word MaybeCSharp_83;

        if ((MaybeCA_75 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          if ((MaybeCB_78 == (MR_Word) ((MR_Unsigned) 0U)))
            MaybeC_81 = (MR_Word) ((MR_Unsigned) 0U);
          else
            MaybeC_81 = MaybeCB_78;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (MaybeCB_78 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            MaybeC_81 = MaybeCA_75;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          if ((MaybeJavaA_76 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            if ((MaybeJavaB_79 == (MR_Word) ((MR_Unsigned) 0U)))
              MaybeJava_82 = (MR_Word) ((MR_Unsigned) 0U);
            else
              MaybeJava_82 = MaybeJavaB_79;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (MaybeJavaB_79 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MaybeJava_82 = MaybeJavaA_76;
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
          {
            if ((MaybeCSharpA_77 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              if ((MaybeCSharpB_80 == (MR_Word) ((MR_Unsigned) 0U)))
                MaybeCSharp_83 = (MR_Word) ((MR_Unsigned) 0U);
              else
                MaybeCSharp_83 = MaybeCSharpB_80;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (MaybeCSharpB_80 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                MaybeCSharp_83 = MaybeCSharpA_77;
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
            {
              {
                ForeignTypeBody_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ForeignTypeBody_21, 0) = ((MR_Box) (MaybeC_81));
                MR_hl_field(MR_mktag(0), ForeignTypeBody_21, 1) = ((MR_Box) (MaybeJava_82));
                MR_hl_field(MR_mktag(0), ForeignTypeBody_21, 2) = ((MR_Box) (MaybeCSharp_83));
              }
              *Body_8 = (MR_Word) ((MR_Word) (ForeignTypeBody_21));
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
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_and_du_type_bodies_4_p_0(
  MR_Word Globals_5,
  MR_Word ForeignTypeBodyA_6,
  MR_Word DuTypeBodyB_7,
  MR_Word * Body_8)
{
  {
    MR_bool succeeded;
    MR_Word MaybeSuperTypeB_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DuTypeBodyB_7, (MR_Integer) 1))));
    MR_Word MaybeForeignTypeBodyB_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DuTypeBodyB_7, (MR_Integer) 4))));
    MR_Word ForeignTypeBodyB_14;
    MR_Word ForeignTypeBody_15;
    MR_Word Target_16;
    MR_Word OpMode_17;
    MR_Word MaybeCA_34;
    MR_Word MaybeJavaA_35;
    MR_Word MaybeCSharpA_36;
    MR_Word MaybeCB_37;
    MR_Word MaybeJavaB_38;
    MR_Word MaybeCSharpB_39;
    MR_Word MaybeC_40;
    MR_Word MaybeJava_41;
    MR_Word MaybeCSharp_42;
    MR_Word Var_21;
    MR_Word Var_30;
    MR_Word Var_22;
    MR_Word Var_23;

    succeeded = (MaybeSuperTypeB_10 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      if ((MaybeForeignTypeBodyB_13 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          ForeignTypeBodyB_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ForeignTypeBodyB_14, 0) = ((MR_Box) (MaybeSuperTypeB_10));
          MR_hl_field(MR_mktag(0), ForeignTypeBodyB_14, 1) = ((MR_Box) (MaybeSuperTypeB_10));
          MR_hl_field(MR_mktag(0), ForeignTypeBodyB_14, 2) = ((MR_Box) (MaybeSuperTypeB_10));
        }
      else
        ForeignTypeBodyB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeignTypeBodyB_13, (MR_Integer) 0))));
      MaybeCA_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyA_6, (MR_Integer) 0))));
      MaybeJavaA_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyA_6, (MR_Integer) 1))));
      MaybeCSharpA_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyA_6, (MR_Integer) 2))));
      MaybeCB_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyB_14, (MR_Integer) 0))));
      MaybeJavaB_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyB_14, (MR_Integer) 1))));
      MaybeCSharpB_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyB_14, (MR_Integer) 2))));
      if ((MaybeCA_34 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        if ((MaybeCB_37 == (MR_Word) ((MR_Unsigned) 0U)))
          MaybeC_40 = (MR_Word) ((MR_Unsigned) 0U);
        else
          MaybeC_40 = MaybeCB_37;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (MaybeCB_37 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          MaybeC_40 = MaybeCA_34;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        if ((MaybeJavaA_35 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          if ((MaybeJavaB_38 == (MR_Word) ((MR_Unsigned) 0U)))
            MaybeJava_41 = (MR_Word) ((MR_Unsigned) 0U);
          else
            MaybeJava_41 = MaybeJavaB_38;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (MaybeJavaB_38 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            MaybeJava_41 = MaybeJavaA_35;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          if ((MaybeCSharpA_36 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            if ((MaybeCSharpB_39 == (MR_Word) ((MR_Unsigned) 0U)))
              MaybeCSharp_42 = (MR_Word) ((MR_Unsigned) 0U);
            else
              MaybeCSharp_42 = MaybeCSharpB_39;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (MaybeCSharpB_39 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MaybeCSharp_42 = MaybeCSharpA_36;
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
          {
            {
              ForeignTypeBody_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ForeignTypeBody_15, 0) = ((MR_Box) (MaybeC_40));
              MR_hl_field(MR_mktag(0), ForeignTypeBody_15, 1) = ((MR_Box) (MaybeJava_41));
              MR_hl_field(MR_mktag(0), ForeignTypeBody_15, 2) = ((MR_Box) (MaybeCSharp_42));
            }
            libs__globals__get_target_2_p_0(Globals_5, &Target_16);
            libs__globals__get_op_mode_2_p_0(Globals_5, &OpMode_17);
            Var_21 = (MR_Integer) 1;
            backend_libs__foreign__have_foreign_type_for_backend_3_p_0(Target_16, ForeignTypeBody_15, &Var_30);
            succeeded = (Var_21 == Var_30);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) OpMode_17)) == (MR_Integer) 3);
              if (succeeded)
              {
                Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_17, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) Var_22)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_22, (MR_Integer) 0))));
                  succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              succeeded = !(succeeded);
            }
            if (succeeded)
              *Body_8 = (MR_Word) ((MR_Word) (ForeignTypeBody_15));
            else
            {
              MR_Word Var_24;
              MR_Word Var_25;
              MR_Word Var_26;
              MR_Word Var_27;
              MR_Word Var_28;

              {
                Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (ForeignTypeBody_15));
              }
              Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DuTypeBodyB_7, (MR_Integer) 0))));
              Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DuTypeBodyB_7, (MR_Integer) 1))));
              Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DuTypeBodyB_7, (MR_Integer) 2))));
              Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DuTypeBodyB_7, (MR_Integer) 3))));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                *Body_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_25));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_26));
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Var_27));
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Var_28));
                MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (Var_24));
              }
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
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
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_36,
  MR_Word * STATE_VARIABLE_FoundInvalidType_37,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39)
{
  {
    MR_bool succeeded;
    MR_Word TypeTable0_24;
    MR_Word TypeStatus_26;
    MR_Word STATE_VARIABLE_FoundInvalidType_43_43;
    MR_Word STATE_VARIABLE_Specs_44_44;
    MR_Word OldDefn_25;

    hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_34, &TypeTable0_24);
    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable0_24, TypeCtor_15, &OldDefn_25);
    if (succeeded)
    {
      MR_Word TypeDefn_27;
      MR_Word STATE_VARIABLE_FoundInvalidType_40_40;
      MR_Word STATE_VARIABLE_Specs_41_41;
      MR_Word OldTypeStatus_58;
      MR_Word OldDefnBody_28;

      hlds__hlds_data__get_type_defn_status_2_p_0(OldDefn_25, &OldTypeStatus_58);
      hlds__status__type_combine_status_3_p_0(TypeStatus1_14, OldTypeStatus_58, &TypeStatus_26);
      hlds__hlds_data__set_type_defn_status_3_p_0(TypeStatus_26, TypeDefn0_19, &TypeDefn_27);
      hlds__make_hlds__add_type__check_for_inconsistent_solver_nosolver_type_8_p_0(TypeCtor_15, OldDefn_25, Body_18, Context_20, STATE_VARIABLE_FoundInvalidType_0_36, &STATE_VARIABLE_FoundInvalidType_40_40, STATE_VARIABLE_Specs_0_38, &STATE_VARIABLE_Specs_41_41);
      hlds__hlds_data__get_type_defn_body_2_p_0(OldDefn_25, &OldDefnBody_28);
      succeeded = ((((MR_tag((MR_Word) OldDefnBody_28)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), OldDefnBody_28, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
      }
      succeeded = !(succeeded);
      if (succeeded)
      {
        MR_Word Var_76 = (MR_Word) (TypeStatus_26);

        succeeded = (Var_76 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          STATE_VARIABLE_Specs_44_44 = STATE_VARIABLE_Specs_41_41;
          STATE_VARIABLE_FoundInvalidType_43_43 = STATE_VARIABLE_FoundInvalidType_40_40;
        }
        else
        {
          MR_Word SymName_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_15, (MR_Integer) 0))));
          MR_Integer Arity_74 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_15, (MR_Integer) 1))));
          MR_Word OldContext_75;

          hlds__hlds_data__get_type_defn_context_2_p_0(OldDefn_25, &OldContext_75);
          hlds__make_hlds_error__report_multiple_def_error_8_p_0(SymName_73, Arity_74, (MR_String) "type", Context_20, OldContext_75, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Specs_41_41, &STATE_VARIABLE_Specs_44_44);
          STATE_VARIABLE_FoundInvalidType_43_43 = (MR_Integer) 1;
        }
        *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
      }
      else
      {
        MR_Word TypeTable_30;

        hlds__hlds_data__replace_type_ctor_defn_4_p_0(TypeCtor_15, TypeDefn_27, TypeTable0_24, &TypeTable_30);
        hlds__hlds_module__module_info_set_type_table_3_p_0(TypeTable_30, STATE_VARIABLE_ModuleInfo_0_34, STATE_VARIABLE_ModuleInfo_35);
        STATE_VARIABLE_Specs_44_44 = STATE_VARIABLE_Specs_41_41;
        STATE_VARIABLE_FoundInvalidType_43_43 = STATE_VARIABLE_FoundInvalidType_40_40;
      }
    }
    else
    {
      MR_Word TypeTable_51;

      TypeStatus_26 = TypeStatus1_14;
      hlds__hlds_data__add_type_ctor_defn_4_p_0(TypeCtor_15, TypeDefn0_19, TypeTable0_24, &TypeTable_51);
      hlds__hlds_module__module_info_set_type_table_3_p_0(TypeTable_51, STATE_VARIABLE_ModuleInfo_0_34, STATE_VARIABLE_ModuleInfo_35);
      STATE_VARIABLE_Specs_44_44 = STATE_VARIABLE_Specs_0_38;
      STATE_VARIABLE_FoundInvalidType_43_43 = STATE_VARIABLE_FoundInvalidType_0_36;
    }
    switch (MR_tag((MR_Word) ParseTreeTypeDefn_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DetailsDu_31 = (MR_Word) ((MR_Word) (ParseTreeTypeDefn_17));

          hlds__make_hlds__add_type__check_for_invalid_user_defined_unify_compare_8_p_0(TypeStatus_26, TypeCtor_15, DetailsDu_31, Context_20, STATE_VARIABLE_FoundInvalidType_43_43, STATE_VARIABLE_FoundInvalidType_37, STATE_VARIABLE_Specs_44_44, STATE_VARIABLE_Specs_39);
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_FoundInvalidType_37 = STATE_VARIABLE_FoundInvalidType_43_43;
          *STATE_VARIABLE_Specs_39 = STATE_VARIABLE_Specs_44_44;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DetailsEqv_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ParseTreeTypeDefn_17, (MR_Integer) 0))));

          hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0(TypeStatus_26, TypeCtor_15, TypeParams_16, DetailsEqv_32, Context_20, STATE_VARIABLE_FoundInvalidType_43_43, STATE_VARIABLE_FoundInvalidType_37, STATE_VARIABLE_Specs_44_44, STATE_VARIABLE_Specs_39);
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_1(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_3(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__Var_60 = ((MR_Word) ((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__conv0_Var_60));
    hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_2(env_ptr);
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_4(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_5(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__TypeInfo_63_63 = (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]);
    (env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__TypeInfo_63_63, ((MR_Box) ((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__Var_60)), ((MR_Box) ((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__Var_62)));
    if ((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__succeeded)
      hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_4(env_ptr);
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_6(
  void * env_ptr_arg)
{
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
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_2(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s *) (env_ptr_arg);

    hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_6(env_ptr);
    (env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__succeeded = !((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__succeeded);
    if ((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__succeeded)
      hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_1(env_ptr);
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_7(
  void * env_ptr_arg)
{
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
          MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 14U));
          MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (TypeCtor_11));
        }
        {
          Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
          MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[48])));
        }
        {
          PolyEqvPieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), PolyEqvPieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[103])));
          MR_hl_field(MR_mktag(1), PolyEqvPieces_19, 1) = ((MR_Box) (Var_29));
        }
        {
          Var_47 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (PolyEqvPieces_19));
        }
        {
          Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
          MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[106])));
        }
        {
          PolyEqvMsg_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), PolyEqvMsg_20, 0) = ((MR_Box) (Context_14));
          MR_hl_field(MR_mktag(1), PolyEqvMsg_20, 1) = ((MR_Box) (Var_46));
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
          MR_hl_field(MR_mktag(0), PolyEqvSpec_21, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_invalid_user_defined_unify_compare_8_p_0(
  MR_Word TypeStatus_9,
  MR_Word TypeCtor_10,
  MR_Word DetailsDu_11,
  MR_Word Context_12,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_27,
  MR_Word * STATE_VARIABLE_FoundInvalidType_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  {
    MR_bool succeeded;
    MR_Word MaybeSuperType_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_11, (MR_Integer) 0))));
    MR_Word Ctors_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_11, (MR_Integer) 1))));
    MR_Word MaybeCanonical_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_11, (MR_Integer) 2))));
    MR_Word Var_33;

    succeeded = (MaybeCanonical_17 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      if ((MaybeSuperType_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Ctor_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctors_16, (MR_Integer) 0))));
        MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctors_16, (MR_Integer) 1))));
        MR_Word Var_32;

        succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_20, (MR_Integer) 3))));
          succeeded = (Var_32 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
      else
        succeeded = MR_TRUE;
      if (succeeded)
      {
        Var_33 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_9);
        succeeded = (Var_33 == (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      MR_Word MainPieces_22;
      MR_Word VerbosePieces_23;
      MR_Word Msg_25;
      MR_Word Spec_26;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_91;

      if ((MaybeSuperType_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_57;
        MR_Word Var_58;

        {
          Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) ((MR_Unsigned) 14U));
          MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (TypeCtor_10));
        }
        {
          Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
          MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[30])));
        }
        {
          MainPieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MainPieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[103])));
          MR_hl_field(MR_mktag(1), MainPieces_22, 1) = ((MR_Box) (Var_57));
        }
        VerbosePieces_23 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[36]));
      }
      else
      {
        MR_Word Var_36;
        MR_Word Var_37;

        {
          Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 14U));
          MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (TypeCtor_10));
        }
        {
          Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
          MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[38])));
        }
        {
          MainPieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MainPieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[104])));
          MR_hl_field(MR_mktag(1), MainPieces_22, 1) = ((MR_Box) (Var_36));
        }
        VerbosePieces_23 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[40]));
      }
      {
        Var_83 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (MainPieces_22));
      }
      {
        Var_85 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_85, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(2), Var_85, 1) = ((MR_Box) (VerbosePieces_23));
      }
      {
        Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
        MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
        MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (Var_84));
      }
      {
        Msg_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Msg_25, 0) = ((MR_Box) (Context_12));
        MR_hl_field(MR_mktag(1), Msg_25, 1) = ((MR_Box) (Var_82));
      }
      {
        Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Msg_25));
        MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_26, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_type.check_for_invalid_user_defined_unify_compare\'/8"));
        MR_hl_field(MR_mktag(0), Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_26, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(0), Spec_26, 3) = ((MR_Box) (Var_91));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_30 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_26));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_29));
      }
      *STATE_VARIABLE_FoundInvalidType_28 = (MR_Integer) 1;
    }
    else
    {
      *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
      *STATE_VARIABLE_FoundInvalidType_28 = STATE_VARIABLE_FoundInvalidType_0_27;
    }
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
  {
    MR_bool succeeded;
    MR_Word OldBody_15;
    MR_Word OldIsSolverType_16;
    MR_Word NewIsSolverType_17;

    hlds__hlds_data__get_type_defn_body_2_p_0(OldDefn_10, &OldBody_15);
    switch (MR_tag((MR_Word) OldBody_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        OldIsSolverType_16 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
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
        MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) ((MR_Unsigned) 14U));
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
        MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[12])));
      }
      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_60));
      }
      {
        Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[101])));
        MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_58));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[100])));
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
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[99])));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_48));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_45));
      }
      {
        MainPieces_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MainPieces_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[98])));
        MR_hl_field(MR_mktag(1), MainPieces_30, 1) = ((MR_Box) (Var_43));
      }
      {
        Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[62])));
      }
      {
        OldPieces_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), OldPieces_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[102])));
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
        MR_hl_field(MR_mktag(0), Spec_34, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
}

static void MR_CALL 
hlds__make_hlds__add_type__get_body_is_solver_type_2_p_0(
  MR_Word Body_3,
  MR_Word * IsSolverType_4)
{
  switch (MR_tag((MR_Word) Body_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *IsSolverType_4 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
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
        MR_hl_field(MR_mktag(3), UTC_24, 0) = ((MR_Box) ((MR_Unsigned) 14U));
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
          MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[12])));
        }
        {
          DupPieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), DupPieces_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[96])));
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
                MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[16])));
              }
              {
                DupPieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), DupPieces_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[97])));
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
                MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[20])));
              }
              {
                DupPieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), DupPieces_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[97])));
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
        MR_hl_field(MR_mktag(0), FirstMsg_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[22])));
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
        MR_hl_field(MR_mktag(0), DupSpec_30, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type____Unify____existq_tvar_mapping_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__add_type____Unify____existq_tvar_mapping_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type____Compare____existq_tvar_mapping_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds__add_type____Compare____existq_tvar_mapping_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type____Unify____maybe_set_subtype_noncanonical_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__add_type____Unify____maybe_set_subtype_noncanonical_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type____Compare____maybe_set_subtype_noncanonical_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds__add_type____Compare____maybe_set_subtype_noncanonical_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type____Unify____old_defn_maybe_abstract_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__add_type____Unify____old_defn_maybe_abstract_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type____Compare____old_defn_maybe_abstract_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds__add_type____Compare____old_defn_maybe_abstract_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type____Unify____search_type_ctor_defn_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__add_type____Unify____search_type_ctor_defn_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type____Compare____search_type_ctor_defn_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds__add_type____Compare____search_type_ctor_defn_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
