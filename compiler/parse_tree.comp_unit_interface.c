/*
** Automatically generated from `comp_unit_interface.m'
** by the Mercury compiler,
** version rotd-2021-07-19
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


// :- module parse_tree.comp_unit_interface.
// :- implementation.

/*
INIT mercury__parse_tree__comp_unit_interface__init
ENDINIT
*/

#include "parse_tree.comp_unit_interface.mih"


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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.check_parse_tree_type_defns.mih"
#include "parse_tree.convert_parse_tree.mih"
#include "parse_tree.decide_type_repn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mutable.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"



struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s {
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefnMap_7;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TVarSet_8;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__Type_9;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeCtor_10;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeArgs_11;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__CoveredTypes0_12;
  MR_bool parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded;
  jmp_buf parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__commit_0;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__ItemTypeDefnInfo_14;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefnTypeParams_16;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefn_17;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefnTVarSet_18;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__DetailsDu_21;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__MaybeSuperType_22;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__OoMCtors_23;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__MaybeEqCmp_24;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__MaybeDirectArgCtors_25;
  MR_Box parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__conv0_ItemTypeDefnInfo_14;
  jmp_buf parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__commit_1;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__BaseType_28;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__Var_30;
};

struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s {
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefnMap_6;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TVarSet_7;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__Type_8;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__CoveredTypes0_9;
  MR_bool parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeArgs_12;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeCtor_15;
  jmp_buf parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__commit_0;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__ItemTypeDefnInfo_43;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefnTypeParams_45;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefn_46;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefnTVarSet_47;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__DetailsDu_50;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__MaybeSuperType_51;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__OoMCtors_52;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__MaybeEqCmp_53;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__MaybeDirectArgCtors_54;
  MR_Box parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__conv0_ItemTypeDefnInfo_43;
  jmp_buf parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__commit_1;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__BaseType_57;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__Var_59;
};

struct parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0_s {
  MR_Word parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefnMap_6;
  MR_Word parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TVarSet_7;
  MR_Word parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__Type_8;
  MR_Word * parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__BaseType_9;
  MR_Cont parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__cont;
  void * parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__cont_env_ptr;
  MR_bool parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__succeeded;
  MR_Word parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeArgs_12;
  MR_Word parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__SeenTypes1_14;
  MR_Word parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__ItemTypeDefnInfo_18;
  MR_Word parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefnTypeParams_20;
  MR_Word parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefn_21;
  MR_Word parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefnTVarSet_22;
  MR_Word parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__DetailsDu_25;
  MR_Word parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__MaybeSuperType_26;
  MR_Box parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__conv0_ItemTypeDefnInfo_18;
};


static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__one_or_more__ti_one_or_more_1term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_include_module_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__one_or_more__pti_one_or_more_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0;

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_unqual_symnames_0_0;

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_unqual_symnames_0_1;

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_ordinal_ordered_maybe_unqual_symnames_0[2];

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_maybe_unqual_symnames_0[2];

static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_maybe_unqual_symnames_0[2];

static const MR_FA_TypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__comp_unit_interface__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____type_defn_pair_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____type_defn_pair_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____type_defn_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____type_defn_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_unqual_symnames_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_unqual_symnames_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_instance_abstract_1_f_0(
  MR_Word Instance_3);

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_typeclass_abstract_1_f_0(
  MR_Word TypeClass_3);

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_mode_defn_abstract_1_f_0(
  MR_Word ModeDefn_3);

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_inst_defn_abstract_1_f_0(
  MR_Word InstDefn_3);

static void MR_CALL 
parse_tree__comp_unit_interface__delete_uc_preds_make_solver_type_dummy_2_p_0(
  MR_Word ItemTypeDefn0_3,
  MR_Word * ItemTypeDefn_4);

static void MR_CALL 
parse_tree__comp_unit_interface__make_imports_into_uses_int_only_maybe_implicit_6_p_0(
  MR_Word UnqualSymNames_7,
  MR_Word UsedModuleNames_8,
  MR_Word ModuleName_9,
  MR_Word ImportUse0_10,
  MR_Word STATE_VARIABLE_ShortImportUseMap_0_20,
  MR_Word * STATE_VARIABLE_ShortImportUseMap_21);

static void MR_CALL 
parse_tree__comp_unit_interface__add_only_int_include_4_p_0(
  MR_Word ModuleName_5,
  MR_Word InclInfo_6,
  MR_Word STATE_VARIABLE_IntInclMap_0_10,
  MR_Word * STATE_VARIABLE_IntInclMap_11);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__fim_spec_is_for_needed_language_2_p_0(
  MR_Word NeededLangs_3,
  MR_Word FIMSpec_4);

static void MR_CALL 
parse_tree__comp_unit_interface__add_foreign_enum_item_if_needed_6_p_0(
  MR_Word IntTypesMap_7,
  MR_Word ForeignEnumItem_8,
  MR_Word STATE_VARIABLE_ImpForeignEnumItems_0_17,
  MR_Word * STATE_VARIABLE_ImpForeignEnumItems_18,
  MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_0_19,
  MR_Word * STATE_VARIABLE_ImpImplicitFIMLangs_20);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__some_type_defn_is_non_abstract_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__is_pure_abstract_type_defn_1_p_0(
  MR_Word ImpItemTypeDefnInfo_2);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__maybe_add_maybe_abstract_type_defns_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__maybe_add_maybe_abstract_type_defns_9_p_0(
  MR_Word BothTypesMap_10,
  MR_Word IntTypesMap_11,
  MR_Word NeededTypeCtors_12,
  MR_Word TypeCtor_13,
  MR_Word ImpItemTypeDefnInfos_14,
  MR_Word STATE_VARIABLE_ImpTypeDefns_0_18,
  MR_Word * STATE_VARIABLE_ImpTypeDefns_19,
  MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_0_20,
  MR_Word * STATE_VARIABLE_ImpImplicitFIMLangs_21);

static void MR_CALL 
parse_tree__comp_unit_interface__add_type_defn_items_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevImpTypeDefns_0_2,
  MR_Word * STATE_VARIABLE_RevImpTypeDefns_3,
  MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_0_4,
  MR_Word * STATE_VARIABLE_ImpImplicitFIMLangs_5);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_used_by_type_ctor_3_p_0(
  MR_Word TypeCtor_4,
  MR_Word STATE_VARIABLE_Modules_0_11,
  MR_Word * STATE_VARIABLE_Modules_12);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0(
  MR_Word ImpTypesMap_9,
  MR_Word ImpItemTypeDefnInfo_10,
  MR_Word STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_33,
  MR_Word * STATE_VARIABLE_AbsExpEqvRhsTypeCtors_34,
  MR_Word STATE_VARIABLE_DuArgTypeCtors_0_35,
  MR_Word * STATE_VARIABLE_DuArgTypeCtors_36,
  MR_Word STATE_VARIABLE_ModulesNeededByTypeDefns_0_37,
  MR_Word * STATE_VARIABLE_ModulesNeededByTypeDefns_38);

static void MR_CALL 
parse_tree__comp_unit_interface__ctors_to_user_type_ctor_set_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeCtors_0_2,
  MR_Word * STATE_VARIABLE_TypeCtors_3);

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_args_to_user_type_ctor_set_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeCtors_0_2,
  MR_Word * STATE_VARIABLE_TypeCtors_3);

static void MR_CALL 
parse_tree__comp_unit_interface__type_to_user_type_ctor_set_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__type_to_user_type_ctor_set_3_p_0(
  MR_Word Type_4,
  MR_Word STATE_VARIABLE_TypeCtors_0_13,
  MR_Word * STATE_VARIABLE_TypeCtors_14);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_rhs_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_rhs_8_p_0(
  MR_Word ImpTypesMap_9,
  MR_Word TypeCtor_10,
  MR_Word STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_15,
  MR_Word * STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16,
  MR_Word STATE_VARIABLE_DuArgTypeCtors_0_17,
  MR_Word * STATE_VARIABLE_DuArgTypeCtors_18,
  MR_Word STATE_VARIABLE_ModulesNeededByTypeDefns_0_19,
  MR_Word * STATE_VARIABLE_ModulesNeededByTypeDefns_20);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_eqv_and_supertypes_in_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_eqv_and_supertypes_in_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_eqv_and_supertypes_in_defn_7_p_0(
  MR_Word BothTypesMap_8,
  MR_Word TypeCtor_9,
  MR_Word ItemTypeDefnInfo_10,
  MR_Word STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_32,
  MR_Word * STATE_VARIABLE_AbsExpEqvLhsTypeCtors_33,
  MR_Word STATE_VARIABLE_Seen_0_34,
  MR_Word * STATE_VARIABLE_Seen_35);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_10_p_0(
  MR_Word IntTypesMap_11,
  MR_Word BothTypesMap_12,
  MR_Word TypeCtor_13,
  MR_Word ImpItemTypeDefnInfos_14,
  MR_Word STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_22,
  MR_Word * STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23,
  MR_Word STATE_VARIABLE_AbsExpEnumTypeCtors_0_24,
  MR_Word * STATE_VARIABLE_AbsExpEnumTypeCtors_25,
  MR_Word STATE_VARIABLE_DirectDummyTypeCtors_0_26,
  MR_Word * STATE_VARIABLE_DirectDummyTypeCtors_27);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_in_defn_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_in_defn_10_p_0(
  MR_Word IntTypesMap_11,
  MR_Word BothTypesMap_12,
  MR_Word TypeCtor_13,
  MR_Word ImpItemTypeDefnInfo_14,
  MR_Word STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_42,
  MR_Word * STATE_VARIABLE_AbsExpEqvLhsTypeCtors_43,
  MR_Word STATE_VARIABLE_AbsExpEnumTypeCtors_0_44,
  MR_Word * STATE_VARIABLE_AbsExpEnumTypeCtors_45,
  MR_Word STATE_VARIABLE_DirectDummyTypeCtors_0_46,
  MR_Word * STATE_VARIABLE_DirectDummyTypeCtors_47);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__non_sub_du_constructor_list_represents_dummy_type_5_p_0(
  MR_Word TypeDefnMap_6,
  MR_Word TVarSet_7,
  MR_Word OoMCtors_8,
  MR_Word MaybeCanonical_9,
  MR_Word MaybeDirectArgCtors_10);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__non_sub_du_constructor_list_represents_dummy_type_2_6_p_0(
  MR_Word TypeDefnMap_7,
  MR_Word TVarSet_8,
  MR_Word OoMCtors_9,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word CoveredTypes_10);

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_7(
  void * env_ptr_arg);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0(
  MR_Word TypeDefnMap_7,
  MR_Word TVarSet_8,
  MR_Word Type_9,
  MR_Word TypeCtor_10,
  MR_Word TypeArgs_11,
  MR_Word CoveredTypes0_12);

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_3(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_4(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_5(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_6(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_7(
  void * env_ptr_arg);

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0(
  MR_Word TypeDefnMap_6,
  MR_Word TVarSet_7,
  MR_Word Type_8,
  MR_Word CoveredTypes0_9);

static void MR_CALL 
parse_tree__comp_unit_interface__get_base_type_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__get_base_type_5_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__get_base_type_5_p_0(
  MR_Word TypeDefnMap_6,
  MR_Word TVarSet_7,
  MR_Word Type_8,
  MR_Word * BaseType_9,
  MR_Word SeenTypes0_10,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
parse_tree__comp_unit_interface__merge_tvarsets_and_subst_type_args_6_p_0(
  MR_Word TVarSet_7,
  MR_Word TypeArgs_8,
  MR_Word TVarSet0_9,
  MR_Word TypeParams0_10,
  MR_Word Type0_11,
  MR_Word * Type_12);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_from_constraint_3_p_0(
  MR_Word Constraint_4,
  MR_Word STATE_VARIABLE_Modules_0_11,
  MR_Word * STATE_VARIABLE_Modules_12);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_from_type_3_p_0(
  MR_Word Type_4,
  MR_Word STATE_VARIABLE_Modules_0_22,
  MR_Word * STATE_VARIABLE_Modules_23);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_from_types_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Modules_0_2,
  MR_Word * STATE_VARIABLE_Modules_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__keep_promise_item_int_1_p_0(
  MR_Word ItemPromise_2);

static void MR_CALL 
parse_tree__comp_unit_interface__record_implicit_fim_lang_for_foreign_enum_imp_3_p_0(
  MR_Word ItemForeignEnum_4,
  MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_0_11,
  MR_Word * STATE_VARIABLE_ImpImplicitFIMLangs_12);

static void MR_CALL 
parse_tree__comp_unit_interface__record_modules_needed_by_typeclass_imp_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__record_modules_needed_by_typeclass_imp_3_p_0(
  MR_Word ItemTypeClass_4,
  MR_Word STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_7,
  MR_Word * STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_8);

static void MR_CALL 
parse_tree__comp_unit_interface__record_type_defn_imp_3_p_0(
  MR_Word ItemTypeDefn_4,
  MR_Word STATE_VARIABLE_ImpTypesMap_0_20,
  MR_Word * STATE_VARIABLE_ImpTypesMap_21);

static void MR_CALL 
parse_tree__comp_unit_interface__record_type_defn_int_5_p_0(
  MR_Word ItemTypeDefn_6,
  MR_Word STATE_VARIABLE_IntImplicitFIMLangs_0_25,
  MR_Word * STATE_VARIABLE_IntImplicitFIMLangs_26,
  MR_Word STATE_VARIABLE_IntTypesMap_0_27,
  MR_Word * STATE_VARIABLE_IntTypesMap_28);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__make_imports_into_uses_maybe_implicit_4_p_0(
  MR_Word ImpNeededModules_5,
  MR_Word ModuleName_6,
  MR_Word ImportUse0_7,
  MR_Word * ImportUse_8);

static void MR_CALL 
parse_tree__comp_unit_interface__add_self_fim_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Lang_6,
  MR_Word STATE_VARIABLE_FIMSpecs_0_9,
  MR_Word * STATE_VARIABLE_FIMSpecs_10);

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_typeclass_abstract_for_int3_1_f_0(
  MR_Word OrigTypeClass_3);

static void MR_CALL 
parse_tree__comp_unit_interface__make_type_defn_abstract_type_for_int3_2_p_0(
  MR_Word ItemTypeDefn0_3,
  MR_Word * ItemTypeDefn_4);

static void MR_CALL 
parse_tree__comp_unit_interface__keep_only_one_abstract_type_defn_2_p_0(
  MR_Word AllDefns0_3,
  MR_Word * AllDefns_4);

static void MR_CALL 
parse_tree__comp_unit_interface__acc_int_imports_6_p_0(
  MR_Word ModuleName_7,
  MR_Word ImportUseInfo_8,
  MR_Word STATE_VARIABLE_ContextMap_0_20,
  MR_Word * STATE_VARIABLE_ContextMap_21,
  MR_Word STATE_VARIABLE_ImportUseMap_0_22,
  MR_Word * STATE_VARIABLE_ImportUseMap_23);

static void MR_CALL 
parse_tree__comp_unit_interface__acc_int_includes_6_p_0(
  MR_Word ModuleName_7,
  MR_Word InclInfo_8,
  MR_Word STATE_VARIABLE_ContextMap_0_13,
  MR_Word * STATE_VARIABLE_ContextMap_14,
  MR_Word STATE_VARIABLE_IncludeMap_0_15,
  MR_Word * STATE_VARIABLE_IncludeMap_16);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_12_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_12_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_12_p_0(
  MR_Word AugCompUnit_13,
  MR_Word IntImportUseMap_14,
  MR_Word IntExplicitFIMSpecs_15,
  MR_Word ImpExplicitFIMSpecs_16,
  MR_Word IntTypeDefns_17,
  MR_Word IntInstDefns_18,
  MR_Word IntModeDefns_19,
  MR_Word IntTypeClasses_20,
  MR_Word IntInstances_21,
  MR_Word ImpTypeDefns_22,
  MR_Word TypeCtorRepnMap_23,
  MR_Word * ParseTreeInt2_24);

static void MR_CALL 
parse_tree__comp_unit_interface__get_int2_items_from_int1_imp_types_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_0_2,
  MR_Word * STATE_VARIABLE_ImpImplicitFIMLangs_3);

static void MR_CALL 
parse_tree__comp_unit_interface__get_int2_items_from_int1_int_instance_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_2,
  MR_Word * STATE_VARIABLE_MaybeUnqual_3,
  MR_Word STATE_VARIABLE_ModuleNames_0_4,
  MR_Word * STATE_VARIABLE_ModuleNames_5,
  MR_Word STATE_VARIABLE_IntInstancesCord_0_6,
  MR_Word * STATE_VARIABLE_IntInstancesCord_7);

static void MR_CALL 
parse_tree__comp_unit_interface__get_int2_items_from_int1_int_typeclass_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_2,
  MR_Word * STATE_VARIABLE_MaybeUnqual_3,
  MR_Word STATE_VARIABLE_ModuleNames_0_4,
  MR_Word * STATE_VARIABLE_ModuleNames_5,
  MR_Word STATE_VARIABLE_IntTypeClassesCord_0_6,
  MR_Word * STATE_VARIABLE_IntTypeClassesCord_7);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_constraints_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_2,
  MR_Word * STATE_VARIABLE_MaybeUnqual_3,
  MR_Word STATE_VARIABLE_ModuleNames_0_4,
  MR_Word * STATE_VARIABLE_ModuleNames_5);

static void MR_CALL 
parse_tree__comp_unit_interface__get_int2_items_from_int1_int_mode_defn_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_2,
  MR_Word * STATE_VARIABLE_MaybeUnqual_3,
  MR_Word STATE_VARIABLE_ModuleNames_0_4,
  MR_Word * STATE_VARIABLE_ModuleNames_5);

static void MR_CALL 
parse_tree__comp_unit_interface__get_int2_items_from_int1_int_inst_defn_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_2,
  MR_Word * STATE_VARIABLE_MaybeUnqual_3,
  MR_Word STATE_VARIABLE_ModuleNames_0_4,
  MR_Word * STATE_VARIABLE_ModuleNames_5);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_inst_5_p_0(
  MR_Word tscc_proc_1_input_1_Inst_6,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_MaybeUnqual_21,
  MR_Word tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_ModuleNames_23);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_inst_name_5_p_0(
  MR_Word tscc_proc_2_input_1_InstName_6,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_MaybeUnqual_21,
  MR_Word tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_ModuleNames_23);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_insts_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_2,
  MR_Word * STATE_VARIABLE_MaybeUnqual_3,
  MR_Word STATE_VARIABLE_ModuleNames_0_4,
  MR_Word * STATE_VARIABLE_ModuleNames_5);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_bound_insts_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_2,
  MR_Word * STATE_VARIABLE_MaybeUnqual_3,
  MR_Word STATE_VARIABLE_ModuleNames_0_4,
  MR_Word * STATE_VARIABLE_ModuleNames_5);

static void MR_CALL 
parse_tree__comp_unit_interface__get_int2_items_from_int1_int_type_defn_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_2,
  MR_Word * STATE_VARIABLE_MaybeUnqual_3,
  MR_Word STATE_VARIABLE_ModuleNames_0_4,
  MR_Word * STATE_VARIABLE_ModuleNames_5,
  MR_Word STATE_VARIABLE_IntTypeDefnsCord_0_6,
  MR_Word * STATE_VARIABLE_IntTypeDefnsCord_7,
  MR_Word STATE_VARIABLE_IntImplicitFIMLangs_0_8,
  MR_Word * STATE_VARIABLE_IntImplicitFIMLangs_9);

static void MR_CALL 
parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_117_99_95_112_114_101_100_115_95_102_114_111_109_95_102_111_114_101_105_103_110_95_116_121_112_101_95_95_91_49_93_95_48_2_p_0(
  MR_Word DetailsForeign0_3,
  MR_Word * DetailsForeign_4);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_type_5_p_0(
  MR_Word Type_6,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_21,
  MR_Word * STATE_VARIABLE_MaybeUnqual_22,
  MR_Word STATE_VARIABLE_ModuleNames_0_23,
  MR_Word * STATE_VARIABLE_ModuleNames_24);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_types_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_2,
  MR_Word * STATE_VARIABLE_MaybeUnqual_3,
  MR_Word STATE_VARIABLE_ModuleNames_0_4,
  MR_Word * STATE_VARIABLE_ModuleNames_5);

static void MR_CALL 
parse_tree__comp_unit_interface__delete_uc_preds_from_du_type_2_p_0(
  MR_Word DetailsDu0_3,
  MR_Word * DetailsDu_4);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_15_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_15_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_15_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_15_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_15_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_15_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_15_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_15_p_0(
  MR_Word Globals_16,
  MR_Word AugCompUnit_17,
  MR_Word * IntImportUseMap_18,
  MR_Word * IntExplicitFIMSpecs_19,
  MR_Word * ImpExplicitFIMSpecs_20,
  MR_Word * IntTypeDefns_21,
  MR_Word * IntInstDefns_22,
  MR_Word * IntModeDefns_23,
  MR_Word * IntTypeClasses_24,
  MR_Word * IntInstances_25,
  MR_Word * ImpTypeDefns_26,
  MR_Word * TypeCtorRepnMap_27,
  MR_Word * ParseTreeInt1_28,
  MR_Word STATE_VARIABLE_Specs_0_111,
  MR_Word * STATE_VARIABLE_Specs_112);

static void MR_CALL 
parse_tree__comp_unit_interface__get_requirements_of_imp_exported_types_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
parse_tree__comp_unit_interface__get_requirements_of_imp_exported_types_5_p_0_1(
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
parse_tree__comp_unit_interface__get_requirements_of_imp_exported_types_5_p_0(
  MR_Word IntTypesMap_6,
  MR_Word ImpTypesMap_7,
  MR_Word BothTypesMap_8,
  MR_Word * NeededImpTypeCtors_9,
  MR_Word * ModulesNeededByTypeDefns_10);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_unqual_symnames_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_unqual_symnames_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____type_defn_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____type_defn_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____type_defn_pair_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____type_defn_pair_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_1[16][2];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_2[32][3];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_3[3][4];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_4[1][1];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_5[4][9];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_6[7][5];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_7[8][6];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_8[2][13];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_9[2][11];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_10[1][8];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_11[3][7];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_12[1][12];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_13[1][10];




static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_1[16][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[1]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[1]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 12U))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_3[0])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_2[32][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[4]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[1]))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[2])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[3])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[4])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[5])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[3])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[3])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[3])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[4])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[4])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[4])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[2])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_10[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_15_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[2])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_15_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_3[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_15_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[3])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_15_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[4])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_15_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_11[2])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[5])),
    ((MR_Box) (parse_tree__comp_unit_interface__record_modules_needed_by_typeclass_imp_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[6])),
    ((MR_Box) (parse_tree__comp_unit_interface__type_to_user_type_ctor_set_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[7])),
    ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 30 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[7])),
    ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 31 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_3[2])),
    ((MR_Box) (parse_tree__comp_unit_interface__maybe_add_maybe_abstract_type_defns_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_3[3][4] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__comp_unit_interface_scalar_common_2[5]))),
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__comp_unit_interface_scalar_common_1[15])))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_5[4][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_include_module_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_include_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_unqual_symnames_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_6[7][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_7[8][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_8[2][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__one_or_more__pti_one_or_more_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_9[2][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_10[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_11[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_include_module_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_include_module_info_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_12[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__one_or_more__pti_one_or_more_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_13[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__one_or_more__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__comp_unit_interface__one_or_more__ti_one_or_more_1term__type_ctor_info_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_include_module_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&parse_tree__comp_unit_interface__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__comp_unit_interface__one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__one_or_more__pti_one_or_more_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__comp_unit_interface__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__comp_unit_interface__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)
  }
};

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_unqual_symnames_0_0 = {
  (MR_String) "no_unqual_symnames",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_unqual_symnames_0_1 = {
  (MR_String) "some_unqual_symnames",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_ordinal_ordered_maybe_unqual_symnames_0[2] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_unqual_symnames_0_0,
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_unqual_symnames_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_maybe_unqual_symnames_0[2] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_unqual_symnames_0_0,
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_unqual_symnames_0_1
};

static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_maybe_unqual_symnames_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_unqual_symnames_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__comp_unit_interface____Unify____maybe_unqual_symnames_0_0_10001)),
  ((MR_Box) (parse_tree__comp_unit_interface____Compare____maybe_unqual_symnames_0_0_10001)),
  (MR_String) "parse_tree.comp_unit_interface",
  (MR_String) "maybe_unqual_symnames",
  {     parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_maybe_unqual_symnames_0 },
  {     parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_ordinal_ordered_maybe_unqual_symnames_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_maybe_unqual_symnames_0,

};

static const MR_FA_TypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&parse_tree__comp_unit_interface__one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_type_defn_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__comp_unit_interface____Unify____type_defn_map_0_0_10001)),
  ((MR_Box) (parse_tree__comp_unit_interface____Compare____type_defn_map_0_0_10001)),
  (MR_String) "parse_tree.comp_unit_interface",
  (MR_String) "type_defn_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__comp_unit_interface__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 parse_tree__comp_unit_interface__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&parse_tree__comp_unit_interface__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_type_defn_pair_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__comp_unit_interface____Unify____type_defn_pair_0_0_10001)),
  ((MR_Box) (parse_tree__comp_unit_interface____Compare____type_defn_pair_0_0_10001)),
  (MR_String) "parse_tree.comp_unit_interface",
  (MR_String) "type_defn_pair",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__comp_unit_interface__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____type_defn_pair_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____type_defn_pair_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____type_defn_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____type_defn_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_unqual_symnames_0_0(
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
parse_tree__comp_unit_interface____Unify____maybe_unqual_symnames_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_instance_abstract_1_f_0(
  MR_Word Instance_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance_3, (MR_Integer) 0))));
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance_3, (MR_Integer) 1))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance_3, (MR_Integer) 2))));
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance_3, (MR_Integer) 3))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance_3, (MR_Integer) 5))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance_3, (MR_Integer) 6))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance_3, (MR_Integer) 7))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance_3, (MR_Integer) 8))));

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 2) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 3) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 5) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 6) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 7) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 8) = ((MR_Box) (Var_13));
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_typeclass_abstract_1_f_0(
  MR_Word TypeClass_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeClass_3, (MR_Integer) 0))));
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeClass_3, (MR_Integer) 1))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeClass_3, (MR_Integer) 2))));
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeClass_3, (MR_Integer) 3))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeClass_3, (MR_Integer) 5))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeClass_3, (MR_Integer) 6))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeClass_3, (MR_Integer) 7))));

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 2) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 3) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 5) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 6) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 7) = ((MR_Box) (Var_12));
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_mode_defn_abstract_1_f_0(
  MR_Word ModeDefn_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefn_3, (MR_Integer) 0))));
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefn_3, (MR_Integer) 1))));
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefn_3, (MR_Integer) 3))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefn_3, (MR_Integer) 4))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefn_3, (MR_Integer) 5))));

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 3) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 4) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 5) = ((MR_Box) (Var_10));
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_inst_defn_abstract_1_f_0(
  MR_Word InstDefn_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_3, (MR_Integer) 0))));
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_3, (MR_Integer) 1))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_3, (MR_Integer) 2))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_3, (MR_Integer) 4))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_3, (MR_Integer) 5))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_3, (MR_Integer) 6))));

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 2) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 4) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 5) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 6) = ((MR_Box) (Var_11));
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__delete_uc_preds_make_solver_type_dummy_2_p_0(
  MR_Word ItemTypeDefn0_3,
  MR_Word * ItemTypeDefn_4)
{
  {
    MR_Word TypeDefn0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_3, (MR_Integer) 2))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_3, (MR_Integer) 0))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_3, (MR_Integer) 1))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_3, (MR_Integer) 3))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_3, (MR_Integer) 4))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_3, (MR_Integer) 5))));

    switch (MR_tag((MR_Word) TypeDefn0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DetailsDu0_6 = (MR_Word) ((MR_Word) (TypeDefn0_5));
          MR_Word DetailsDu_7;
          MR_Word TypeDefn_8;
          MR_Word MaybeCanonical_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_6, (MR_Integer) 2))));
          MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_6, (MR_Integer) 0))));
          MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_6, (MR_Integer) 1))));
          MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_6, (MR_Integer) 3))));

          if ((MaybeCanonical_43 == (MR_Word) ((MR_Unsigned) 0U)))
            DetailsDu_7 = DetailsDu0_6;
          else
            {
              DetailsDu_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), DetailsDu_7, 0) = ((MR_Box) (Var_48));
              MR_hl_field(MR_mktag(0), DetailsDu_7, 1) = ((MR_Box) (Var_49));
              MR_hl_field(MR_mktag(0), DetailsDu_7, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__comp_unit_interface_scalar_common_4[0])));
              MR_hl_field(MR_mktag(0), DetailsDu_7, 3) = ((MR_Box) (Var_50));
            }
          TypeDefn_8 = (MR_Word) ((MR_Word) (DetailsDu_7));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            *ItemTypeDefn_4 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_18));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypeDefn_8));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_19));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_20));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_21));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          *ItemTypeDefn_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_18));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[14])))));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_19));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_20));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_21));
        }
        break;
      case (MR_Integer) 2:
        *ItemTypeDefn_4 = ItemTypeDefn0_3;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn0_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *ItemTypeDefn_4 = ItemTypeDefn0_3;
            break;
          case (MR_Integer) 1:
            {
              MR_Word DetailsForeign0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn0_5, (MR_Integer) 1))));
              MR_Word DetailsForeign_13;
              MR_Word TypeDefn_16;
              MR_Word MaybeCanonical0_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_12, (MR_Integer) 1))));
              MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_12, (MR_Integer) 0))));
              MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_12, (MR_Integer) 2))));

              if ((MaybeCanonical0_57 == (MR_Word) ((MR_Unsigned) 0U)))
                DetailsForeign_13 = DetailsForeign0_12;
              else
                {
                  DetailsForeign_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), DetailsForeign_13, 0) = ((MR_Box) (Var_62));
                  MR_hl_field(MR_mktag(0), DetailsForeign_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__comp_unit_interface_scalar_common_4[0])));
                  MR_hl_field(MR_mktag(0), DetailsForeign_13, 2) = ((MR_Box) (Var_63));
                }
              {
                TypeDefn_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TypeDefn_16, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), TypeDefn_16, 1) = ((MR_Box) (DetailsForeign_13));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                *ItemTypeDefn_4 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_18));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypeDefn_16));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_19));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_20));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_21));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__make_imports_into_uses_int_only_maybe_implicit_6_p_0(
  MR_Word UnqualSymNames_7,
  MR_Word UsedModuleNames_8,
  MR_Word ModuleName_9,
  MR_Word ImportUse0_10,
  MR_Word STATE_VARIABLE_ShortImportUseMap_0_20,
  MR_Word * STATE_VARIABLE_ShortImportUseMap_21)
{
  {
    MR_bool succeeded = (UnqualSymNames_7 == (MR_Integer) 0);
    MR_Word TypeCtorInfo_39_39;

    if (succeeded)
    {
      TypeCtorInfo_39_39 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
      succeeded = mercury__set__contains_2_p_0(TypeCtorInfo_39_39, UsedModuleNames_8, ((MR_Box) (ModuleName_9)));
      succeeded = !(succeeded);
    }
    if (succeeded)
      *STATE_VARIABLE_ShortImportUseMap_21 = STATE_VARIABLE_ShortImportUseMap_0_20;
    else
    if (((MR_tag((MR_Word) ImportUse0_10)) == (MR_Integer) 0))
    {
      MR_Word Explicit0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImportUse0_10, (MR_Integer) 0))));
      MR_Word Explicit_13;

      switch (MR_tag((MR_Word) Explicit0_12)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            MR_Word IntContext_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Explicit0_12, (MR_Integer) 0))));

            {
              Explicit_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Explicit_13, 0) = ((MR_Box) (IntContext_48));
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 1:
          {
            Explicit_13 = Explicit0_12;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Explicit0_12, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word IntContext_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Explicit0_12, (MR_Integer) 1))));

                {
                  Explicit_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Explicit_13, 0) = ((MR_Box) (IntContext_55));
                }
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
      }
      if (succeeded)
      {
        MR_Word ImportUse_14;

        {
          ImportUse_14 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ImportUse_14, 0) = ((MR_Box) (Explicit_13));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), ((MR_Box) (ModuleName_9)), ((MR_Box) (ImportUse_14)), STATE_VARIABLE_ShortImportUseMap_0_20, STATE_VARIABLE_ShortImportUseMap_21);
      }
      else
        *STATE_VARIABLE_ShortImportUseMap_21 = STATE_VARIABLE_ShortImportUseMap_0_20;
    }
    else
    {
      MR_Word Implicit0_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ImportUse0_10, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word MaybeExplicit0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImportUse0_10, (MR_Integer) 1))));
      MR_Word MaybeExplicit_18;
      MR_Word Explicit1_17;
      MR_Word Explicit0_25;

      succeeded = (MaybeExplicit0_16 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Explicit0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeExplicit0_16, (MR_Integer) 0))));
        switch (MR_tag((MR_Word) Explicit0_25)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word IntContext_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Explicit0_25, (MR_Integer) 0))));

              {
                Explicit1_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Explicit1_17, 0) = ((MR_Box) (IntContext_58));
              }
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              Explicit1_17 = Explicit0_25;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Explicit0_25, (MR_Integer) 0))))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word IntContext_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Explicit0_25, (MR_Integer) 1))));

                  {
                    Explicit1_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Explicit1_17, 0) = ((MR_Box) (IntContext_65));
                  }
                  succeeded = MR_TRUE;
                }
                break;
            }
            break;
        }
      }
      if (succeeded)
        {
          MaybeExplicit_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeExplicit_18, 0) = ((MR_Box) (Explicit1_17));
        }
      else
        MaybeExplicit_18 = (MR_Word) ((MR_Unsigned) 0U);
      switch (Implicit0_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          if ((MaybeExplicit_18 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_ShortImportUseMap_21 = STATE_VARIABLE_ShortImportUseMap_0_20;
          else
          {
            MR_Word Explicit_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeExplicit_18, (MR_Integer) 0))));
            MR_Word ImportUse_29;

            {
              ImportUse_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ImportUse_29, 0) = ((MR_Box) (Explicit_28));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), ((MR_Box) (ModuleName_9)), ((MR_Box) (ImportUse_29)), STATE_VARIABLE_ShortImportUseMap_0_20, STATE_VARIABLE_ShortImportUseMap_21);
          }
          break;
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            MR_Word ImportUse_27;

            {
              ImportUse_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ImportUse_27, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(1), ImportUse_27, 1) = ((MR_Box) (MaybeExplicit_18));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), ((MR_Box) (ModuleName_9)), ((MR_Box) (ImportUse_27)), STATE_VARIABLE_ShortImportUseMap_0_20, STATE_VARIABLE_ShortImportUseMap_21);
          }
          break;
      }
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__add_only_int_include_4_p_0(
  MR_Word ModuleName_5,
  MR_Word InclInfo_6,
  MR_Word STATE_VARIABLE_IntInclMap_0_10,
  MR_Word * STATE_VARIABLE_IntInclMap_11)
{
  {
    MR_Word Section_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), InclInfo_6, (MR_Integer) 0))) & (MR_Integer) 1);

    switch (Section_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *STATE_VARIABLE_IntInclMap_11 = STATE_VARIABLE_IntInclMap_0_10;
        break;
      case (MR_Integer) 0:
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), ((MR_Box) (ModuleName_5)), ((MR_Box) (InclInfo_6)), STATE_VARIABLE_IntInclMap_0_10, STATE_VARIABLE_IntInclMap_11);
        break;
    }
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__fim_spec_is_for_needed_language_2_p_0(
  MR_Word NeededLangs_3,
  MR_Word FIMSpec_4)
{
  {
    MR_bool succeeded;
    MR_Word Lang_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FIMSpec_4, (MR_Integer) 0))) & (MR_Integer) 3);

    succeeded = mercury__set__contains_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), NeededLangs_3, ((MR_Box) (Lang_5)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__add_foreign_enum_item_if_needed_6_p_0(
  MR_Word IntTypesMap_7,
  MR_Word ForeignEnumItem_8,
  MR_Word STATE_VARIABLE_ImpForeignEnumItems_0_17,
  MR_Word * STATE_VARIABLE_ImpForeignEnumItems_18,
  MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_0_19,
  MR_Word * STATE_VARIABLE_ImpImplicitFIMLangs_20)
{
  {
    MR_bool succeeded;
    MR_Word Lang_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ForeignEnumItem_8, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word TypeCtor_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignEnumItem_8, (MR_Integer) 1))));
    MR_Word TypeInfo_26_26;
    MR_Word Defns_16;
    MR_Word Var_21;
    MR_Box conv0_Defns_16;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), IntTypesMap_7, ((MR_Box) (TypeCtor_12)), &conv0_Defns_16);
    if (succeeded)
    {
      Defns_16 = ((MR_Word) (conv0_Defns_16));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeInfo_26_26 = (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]);
      Var_21 = mercury__one_or_more__one_or_more_to_list_1_f_1(TypeInfo_26_26, Defns_16);
      succeeded = parse_tree__comp_unit_interface__some_type_defn_is_non_abstract_1_p_0(Var_21);
    }
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_ImpForeignEnumItems_18 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ForeignEnumItem_8));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ImpForeignEnumItems_0_17));
      }
      mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_11)), STATE_VARIABLE_ImpImplicitFIMLangs_0_19, STATE_VARIABLE_ImpImplicitFIMLangs_20);
    }
    else
    {
      *STATE_VARIABLE_ImpImplicitFIMLangs_20 = STATE_VARIABLE_ImpImplicitFIMLangs_0_19;
      *STATE_VARIABLE_ImpForeignEnumItems_18 = STATE_VARIABLE_ImpForeignEnumItems_0_17;
    }
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__some_type_defn_is_non_abstract_1_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Defn_2;
    MR_Word Defns_3;
    MR_Word Body_6;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Defn_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Defns_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      Body_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Defn_2, (MR_Integer) 2))));
      succeeded = ((((MR_tag((MR_Word) Body_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Body_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
      if (succeeded)
      {
        MR_Word next_value_of_HeadVar__1_1 = Defns_3;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
      else
        succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__is_pure_abstract_type_defn_1_p_0(
  MR_Word ImpItemTypeDefnInfo_2)
{
  {
    MR_bool succeeded;
    MR_Word Details_3;
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpItemTypeDefnInfo_2, (MR_Integer) 2))));

    succeeded = ((((MR_tag((MR_Word) Var_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (succeeded)
    {
      Details_3 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_6, (MR_Integer) 1))));
      switch (MR_tag((MR_Word) Details_3)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          switch (MR_unmkbody(Details_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 2:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 3:
              succeeded = MR_TRUE;
              break;
          }
          break;
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__maybe_add_maybe_abstract_type_defns_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__comp_unit_interface__is_pure_abstract_type_defn_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__maybe_add_maybe_abstract_type_defns_9_p_0(
  MR_Word BothTypesMap_10,
  MR_Word IntTypesMap_11,
  MR_Word NeededTypeCtors_12,
  MR_Word TypeCtor_13,
  MR_Word ImpItemTypeDefnInfos_14,
  MR_Word STATE_VARIABLE_ImpTypeDefns_0_18,
  MR_Word * STATE_VARIABLE_ImpTypeDefns_19,
  MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_0_20,
  MR_Word * STATE_VARIABLE_ImpImplicitFIMLangs_21)
{
  {
    MR_bool succeeded;
    MR_Word AbstractImpItemTypeDefnInfos_17;
    MR_Word HeadImpItemTypeDefnInfo0_34;
    MR_Word TailImpItemTypeDefnInfos0_35;
    MR_Word TypeInfo_27_27;
    MR_Word Var_22;

    succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_13)), NeededTypeCtors_12);
    if (succeeded)
    {
      HeadImpItemTypeDefnInfo0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpItemTypeDefnInfos_14, (MR_Integer) 0))));
      TailImpItemTypeDefnInfos0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpItemTypeDefnInfos_14, (MR_Integer) 1))));
      if ((TailImpItemTypeDefnInfos0_35 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word HeadImpItemTypeDefnInfo_36;
        MR_Word TypeDefn0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadImpItemTypeDefnInfo0_34, (MR_Integer) 2))));
        MR_Word TVarSet_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadImpItemTypeDefnInfo0_34, (MR_Integer) 3))));

        switch (MR_tag((MR_Word) TypeDefn0_47)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DetailsDu0_51 = (MR_Word) ((MR_Word) (TypeDefn0_47));
              MR_Word MaybeSuperType_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_51, (MR_Integer) 0))));
              MR_Word OoMCtors_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_51, (MR_Integer) 1))));
              MR_Word MaybeEqCmp_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_51, (MR_Integer) 2))));
              MR_Word MaybeDirectArgCtors_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_51, (MR_Integer) 3))));

              if ((MaybeSuperType_52 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                succeeded = parse_tree__comp_unit_interface__non_sub_du_constructor_list_represents_dummy_type_5_p_0(BothTypesMap_10, TVarSet_48, OoMCtors_53, MaybeEqCmp_54, MaybeDirectArgCtors_55);
                if (succeeded)
                  HeadImpItemTypeDefnInfo_36 = HeadImpItemTypeDefnInfo0_34;
                else
                {
                  MR_Word DetailsAbs_58;
                  MR_Word TypeDefn_59;
                  MR_Integer NumFunctors_56;
                  MR_Word Var_72;
                  MR_Word Var_73;
                  MR_Word Var_75;
                  MR_Word Var_76;
                  MR_Word Var_77;

                  succeeded = parse_tree__prog_type__non_sub_du_type_is_enum_2_p_0(DetailsDu0_51, &NumFunctors_56);
                  if (succeeded)
                  {
                    MR_Integer NumBits_57;

                    parse_tree__prog_type__num_bits_needed_for_n_dense_values_2_p_0(NumFunctors_56, &NumBits_57);
                    {
                      DetailsAbs_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), DetailsAbs_58, 0) = ((MR_Box) (NumBits_57));
                    }
                  }
                  else
                    DetailsAbs_58 = (MR_Word) ((MR_Unsigned) 0U);
                  {
                    TypeDefn_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), TypeDefn_59, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), TypeDefn_59, 1) = ((MR_Box) (DetailsAbs_58));
                  }
                  Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadImpItemTypeDefnInfo0_34, (MR_Integer) 0))));
                  Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadImpItemTypeDefnInfo0_34, (MR_Integer) 1))));
                  Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadImpItemTypeDefnInfo0_34, (MR_Integer) 3))));
                  Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadImpItemTypeDefnInfo0_34, (MR_Integer) 4))));
                  Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadImpItemTypeDefnInfo0_34, (MR_Integer) 5))));
                  {
                    HeadImpItemTypeDefnInfo_36 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), HeadImpItemTypeDefnInfo_36, 0) = ((MR_Box) (Var_72));
                    MR_hl_field(MR_mktag(0), HeadImpItemTypeDefnInfo_36, 1) = ((MR_Box) (Var_73));
                    MR_hl_field(MR_mktag(0), HeadImpItemTypeDefnInfo_36, 2) = ((MR_Box) (TypeDefn_59));
                    MR_hl_field(MR_mktag(0), HeadImpItemTypeDefnInfo_36, 3) = ((MR_Box) (Var_75));
                    MR_hl_field(MR_mktag(0), HeadImpItemTypeDefnInfo_36, 4) = ((MR_Box) (Var_76));
                    MR_hl_field(MR_mktag(0), HeadImpItemTypeDefnInfo_36, 5) = ((MR_Box) (Var_77));
                  }
                }
              }
              else
              {
                MR_Word SuperType_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSuperType_52, (MR_Integer) 0))));
                MR_Word SuperTypeCtor_61;
                MR_Word DetailsAbs_70;
                MR_Word TypeDefn_71;
                MR_Word Var_78;
                MR_Word Var_79;
                MR_Word Var_81;
                MR_Word Var_82;
                MR_Word Var_83;

                parse_tree__prog_type__type_to_ctor_det_2_p_0(SuperType_60, &SuperTypeCtor_61);
                DetailsAbs_70 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (SuperTypeCtor_61)));
                {
                  TypeDefn_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), TypeDefn_71, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), TypeDefn_71, 1) = ((MR_Box) (DetailsAbs_70));
                }
                Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadImpItemTypeDefnInfo0_34, (MR_Integer) 0))));
                Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadImpItemTypeDefnInfo0_34, (MR_Integer) 1))));
                Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadImpItemTypeDefnInfo0_34, (MR_Integer) 3))));
                Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadImpItemTypeDefnInfo0_34, (MR_Integer) 4))));
                Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadImpItemTypeDefnInfo0_34, (MR_Integer) 5))));
                {
                  HeadImpItemTypeDefnInfo_36 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), HeadImpItemTypeDefnInfo_36, 0) = ((MR_Box) (Var_78));
                  MR_hl_field(MR_mktag(0), HeadImpItemTypeDefnInfo_36, 1) = ((MR_Box) (Var_79));
                  MR_hl_field(MR_mktag(0), HeadImpItemTypeDefnInfo_36, 2) = ((MR_Box) (TypeDefn_71));
                  MR_hl_field(MR_mktag(0), HeadImpItemTypeDefnInfo_36, 3) = ((MR_Box) (Var_81));
                  MR_hl_field(MR_mktag(0), HeadImpItemTypeDefnInfo_36, 4) = ((MR_Box) (Var_82));
                  MR_hl_field(MR_mktag(0), HeadImpItemTypeDefnInfo_36, 5) = ((MR_Box) (Var_83));
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.make_imp_type_abstract\'/3", (MR_String) "solver type should have been made abstract");
              return;
            }
            break;
          case (MR_Integer) 2:
            HeadImpItemTypeDefnInfo_36 = HeadImpItemTypeDefnInfo0_34;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn0_47, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                HeadImpItemTypeDefnInfo_36 = HeadImpItemTypeDefnInfo0_34;
                break;
              case (MR_Integer) 1:
                HeadImpItemTypeDefnInfo_36 = HeadImpItemTypeDefnInfo0_34;
                break;
            }
            break;
        }
        {
          AbstractImpItemTypeDefnInfos_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), AbstractImpItemTypeDefnInfos_17, 0) = ((MR_Box) (HeadImpItemTypeDefnInfo_36));
          MR_hl_field(MR_mktag(0), AbstractImpItemTypeDefnInfos_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
        AbstractImpItemTypeDefnInfos_17 = ImpItemTypeDefnInfos_14;
      TypeInfo_27_27 = (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]);
      succeeded = mercury__one_or_more_map__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), TypeInfo_27_27, IntTypesMap_11, ((MR_Box) (TypeCtor_13)));
      if (succeeded)
      {
        Var_22 = (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[31]);
        succeeded = mercury__one_or_more__all_true_2_p_0(TypeInfo_27_27, Var_22, AbstractImpItemTypeDefnInfos_17);
      }
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word Var_23;

      Var_23 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), AbstractImpItemTypeDefnInfos_17);
      parse_tree__comp_unit_interface__add_type_defn_items_5_p_0(Var_23, STATE_VARIABLE_ImpTypeDefns_0_18, STATE_VARIABLE_ImpTypeDefns_19, STATE_VARIABLE_ImpImplicitFIMLangs_0_20, STATE_VARIABLE_ImpImplicitFIMLangs_21);
    }
    else
    {
      *STATE_VARIABLE_ImpImplicitFIMLangs_21 = STATE_VARIABLE_ImpImplicitFIMLangs_0_20;
      *STATE_VARIABLE_ImpTypeDefns_19 = STATE_VARIABLE_ImpTypeDefns_0_18;
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__add_type_defn_items_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevImpTypeDefns_0_2,
  MR_Word * STATE_VARIABLE_RevImpTypeDefns_3,
  MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_0_4,
  MR_Word * STATE_VARIABLE_ImpImplicitFIMLangs_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ImpImplicitFIMLangs_5 = STATE_VARIABLE_ImpImplicitFIMLangs_0_4;
      *STATE_VARIABLE_RevImpTypeDefns_3 = STATE_VARIABLE_RevImpTypeDefns_0_2;
    }
    else
    {
      MR_Word ImpTypeDefn_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ImpTypeDefns_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TypeDefn_18;
      MR_Word STATE_VARIABLE_RevImpTypeDefns_30_30;
      MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_32_32;
      MR_Word ForeignType_23;
      MR_Word DetailsForeign_22;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevImpTypeDefns_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ImpImplicitFIMLangs_0_4;

      {
        STATE_VARIABLE_RevImpTypeDefns_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevImpTypeDefns_30_30, 0) = ((MR_Box) (ImpTypeDefn_12));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevImpTypeDefns_30_30, 1) = ((MR_Box) (STATE_VARIABLE_RevImpTypeDefns_0_2));
      }
      TypeDefn_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpTypeDefn_12, (MR_Integer) 2))));
      succeeded = ((((MR_tag((MR_Word) TypeDefn_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_18, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        DetailsForeign_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_18, (MR_Integer) 1))));
        ForeignType_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_22, (MR_Integer) 0))));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Var_31;

        Var_31 = parse_tree__prog_foreign__foreign_type_language_1_f_0(ForeignType_23);
        mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Var_31)), STATE_VARIABLE_ImpImplicitFIMLangs_0_4, &STATE_VARIABLE_ImpImplicitFIMLangs_32_32);
      }
      else
        STATE_VARIABLE_ImpImplicitFIMLangs_32_32 = STATE_VARIABLE_ImpImplicitFIMLangs_0_4;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ImpTypeDefns_13;
      next_value_of_STATE_VARIABLE_RevImpTypeDefns_0_2 = STATE_VARIABLE_RevImpTypeDefns_30_30;
      next_value_of_STATE_VARIABLE_ImpImplicitFIMLangs_0_4 = STATE_VARIABLE_ImpImplicitFIMLangs_32_32;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevImpTypeDefns_0_2 = next_value_of_STATE_VARIABLE_RevImpTypeDefns_0_2;
      STATE_VARIABLE_ImpImplicitFIMLangs_0_4 = next_value_of_STATE_VARIABLE_ImpImplicitFIMLangs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_used_by_type_ctor_3_p_0(
  MR_Word TypeCtor_4,
  MR_Word STATE_VARIABLE_Modules_0_11,
  MR_Word * STATE_VARIABLE_Modules_12)
{
  {
    MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_4, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) SymName_6)) == (MR_Integer) 1))
    {
      MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_6, (MR_Integer) 0))));

      mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_8)), STATE_VARIABLE_Modules_0_11, STATE_VARIABLE_Modules_12);
    }
    else
      *STATE_VARIABLE_Modules_12 = STATE_VARIABLE_Modules_0_11;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_3(
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
    MR_Word conv6_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16;
    MR_Word conv5_STATE_VARIABLE_DuArgTypeCtors_18;
    MR_Word conv4_STATE_VARIABLE_ModulesNeededByTypeDefns_20;

    parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_rhs_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16, ((MR_Word) (wrapper_arg_4)), &conv5_STATE_VARIABLE_DuArgTypeCtors_18, ((MR_Word) (wrapper_arg_6)), &conv4_STATE_VARIABLE_ModulesNeededByTypeDefns_20);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16));
    *wrapper_arg_5 = ((MR_Box) (conv5_STATE_VARIABLE_DuArgTypeCtors_18));
    *wrapper_arg_7 = ((MR_Box) (conv4_STATE_VARIABLE_ModulesNeededByTypeDefns_20));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Modules_12;

    parse_tree__comp_unit_interface__accumulate_modules_used_by_type_ctor_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Modules_12);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Modules_12));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Modules_12;

    parse_tree__comp_unit_interface__accumulate_modules_used_by_type_ctor_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Modules_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Modules_12));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0(
  MR_Word ImpTypesMap_9,
  MR_Word ImpItemTypeDefnInfo_10,
  MR_Word STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_33,
  MR_Word * STATE_VARIABLE_AbsExpEqvRhsTypeCtors_34,
  MR_Word STATE_VARIABLE_DuArgTypeCtors_0_35,
  MR_Word * STATE_VARIABLE_DuArgTypeCtors_36,
  MR_Word STATE_VARIABLE_ModulesNeededByTypeDefns_0_37,
  MR_Word * STATE_VARIABLE_ModulesNeededByTypeDefns_38)
{
  {
    MR_Word ImpTypeDefn_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpItemTypeDefnInfo_10, (MR_Integer) 2))));

    switch (MR_tag((MR_Word) ImpTypeDefn_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DetailsDu_25 = (MR_Word) ((MR_Word) (ImpTypeDefn_16));
          MR_Word OoMCtors_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_25, (MR_Integer) 1))));
          MR_Word Var_39;
          MR_Word Var_40;
          MR_Word RhsTypeCtors_52;
          MR_Box conv1_STATE_VARIABLE_ModulesNeededByTypeDefns_38;

          Var_39 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMCtors_27);
          Var_40 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
          parse_tree__comp_unit_interface__ctors_to_user_type_ctor_set_3_p_0(Var_39, Var_40, &RhsTypeCtors_52);
          mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), RhsTypeCtors_52, STATE_VARIABLE_DuArgTypeCtors_0_35, STATE_VARIABLE_DuArgTypeCtors_36);
          mercury__set__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[5]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[29]), RhsTypeCtors_52, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_0_37)), &conv1_STATE_VARIABLE_ModulesNeededByTypeDefns_38);
          *STATE_VARIABLE_ModulesNeededByTypeDefns_38 = ((MR_Word) (conv1_STATE_VARIABLE_ModulesNeededByTypeDefns_38));
          *STATE_VARIABLE_AbsExpEqvRhsTypeCtors_34 = STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_33;
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_AbsExpEqvRhsTypeCtors_34 = STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_33;
          *STATE_VARIABLE_DuArgTypeCtors_36 = STATE_VARIABLE_DuArgTypeCtors_0_35;
          *STATE_VARIABLE_ModulesNeededByTypeDefns_38 = STATE_VARIABLE_ModulesNeededByTypeDefns_0_37;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DetailsEqv_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ImpTypeDefn_16, (MR_Integer) 0))));
          MR_Word RhsType_21 = (MR_Word) (DetailsEqv_20);
          MR_Word RhsTypeCtors_22;
          MR_Word NewRhsTypeCtors_23;
          MR_Word Var_44;
          MR_Word STATE_VARIABLE_AbsExpEqvRhsTypeCtors_45_45;
          MR_Word STATE_VARIABLE_ModulesNeededByTypeDefns_47_47;
          MR_Word Var_48;
          MR_Word Var_50;
          MR_Box conv3_STATE_VARIABLE_ModulesNeededByTypeDefns_47_47;
          MR_Box conv9_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_34;
          MR_Box conv8_Var_24;
          MR_Box conv7_STATE_VARIABLE_ModulesNeededByTypeDefns_38;

          Var_44 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
          parse_tree__comp_unit_interface__type_to_user_type_ctor_set_3_p_0(RhsType_21, Var_44, &RhsTypeCtors_22);
          mercury__set__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), RhsTypeCtors_22, STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_33, &NewRhsTypeCtors_23);
          mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), NewRhsTypeCtors_23, STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_33, &STATE_VARIABLE_AbsExpEqvRhsTypeCtors_45_45);
          mercury__set__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[5]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[30]), NewRhsTypeCtors_23, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_0_37)), &conv3_STATE_VARIABLE_ModulesNeededByTypeDefns_47_47);
          STATE_VARIABLE_ModulesNeededByTypeDefns_47_47 = ((MR_Word) (conv3_STATE_VARIABLE_ModulesNeededByTypeDefns_47_47));
          {
            Var_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_9[0]));
            MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_3));
            MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (ImpTypesMap_9));
          }
          Var_50 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
          mercury__set__fold3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[5]), Var_48, NewRhsTypeCtors_23, ((MR_Box) (STATE_VARIABLE_AbsExpEqvRhsTypeCtors_45_45)), &conv9_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_34, ((MR_Box) (Var_50)), &conv8_Var_24, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_47_47)), &conv7_STATE_VARIABLE_ModulesNeededByTypeDefns_38);
          *STATE_VARIABLE_AbsExpEqvRhsTypeCtors_34 = ((MR_Word) (conv9_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_34));
          *STATE_VARIABLE_ModulesNeededByTypeDefns_38 = ((MR_Word) (conv7_STATE_VARIABLE_ModulesNeededByTypeDefns_38));
          *STATE_VARIABLE_DuArgTypeCtors_36 = STATE_VARIABLE_DuArgTypeCtors_0_35;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ImpTypeDefn_16, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_AbsExpEqvRhsTypeCtors_34 = STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_33;
              *STATE_VARIABLE_DuArgTypeCtors_36 = STATE_VARIABLE_DuArgTypeCtors_0_35;
              *STATE_VARIABLE_ModulesNeededByTypeDefns_38 = STATE_VARIABLE_ModulesNeededByTypeDefns_0_37;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_AbsExpEqvRhsTypeCtors_34 = STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_33;
              *STATE_VARIABLE_DuArgTypeCtors_36 = STATE_VARIABLE_DuArgTypeCtors_0_35;
              *STATE_VARIABLE_ModulesNeededByTypeDefns_38 = STATE_VARIABLE_ModulesNeededByTypeDefns_0_37;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctors_to_user_type_ctor_set_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeCtors_0_2,
  MR_Word * STATE_VARIABLE_TypeCtors_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_TypeCtors_3 = STATE_VARIABLE_TypeCtors_0_2;
    else
    {
      MR_Word Ctor_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Ctors_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word CtorArgs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 3))));
      MR_Word STATE_VARIABLE_TypeCtors_18_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeCtors_0_2;

      parse_tree__comp_unit_interface__ctor_args_to_user_type_ctor_set_3_p_0(CtorArgs_13, STATE_VARIABLE_TypeCtors_0_2, &STATE_VARIABLE_TypeCtors_18_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Ctors_8;
      next_value_of_STATE_VARIABLE_TypeCtors_0_2 = STATE_VARIABLE_TypeCtors_18_18;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TypeCtors_0_2 = next_value_of_STATE_VARIABLE_TypeCtors_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_args_to_user_type_ctor_set_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeCtors_0_2,
  MR_Word * STATE_VARIABLE_TypeCtors_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_TypeCtors_3 = STATE_VARIABLE_TypeCtors_0_2;
    else
    {
      MR_Word Arg_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Args_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Type_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_7, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_TypeCtors_15_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeCtors_0_2;

      parse_tree__comp_unit_interface__type_to_user_type_ctor_set_3_p_0(Type_11, STATE_VARIABLE_TypeCtors_0_2, &STATE_VARIABLE_TypeCtors_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Args_8;
      next_value_of_STATE_VARIABLE_TypeCtors_0_2 = STATE_VARIABLE_TypeCtors_15_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TypeCtors_0_2 = next_value_of_STATE_VARIABLE_TypeCtors_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__type_to_user_type_ctor_set_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_TypeCtors_14;

    parse_tree__comp_unit_interface__type_to_user_type_ctor_set_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeCtors_14);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeCtors_14));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__type_to_user_type_ctor_set_3_p_0(
  MR_Word Type_4,
  MR_Word STATE_VARIABLE_TypeCtors_0_13,
  MR_Word * STATE_VARIABLE_TypeCtors_14)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtor_6;
    MR_Word ArgTypes_7;

    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_4, &TypeCtor_6, &ArgTypes_7);
    if (succeeded)
    {
      MR_Word SymName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_6, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_TypeCtors_15_15;
      MR_Box conv1_STATE_VARIABLE_TypeCtors_14;

      succeeded = parse_tree__prog_data__is_builtin_type_sym_name_1_p_0(SymName_8);
      if (!(succeeded))
      {
        {
          MR_Word Var_10;
          MR_Word Var_11;

          succeeded = parse_tree__prog_type__type_ctor_is_higher_order_4_p_0(TypeCtor_6, &Var_10, &Var_11);
        }
        if (!(succeeded))
          succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(TypeCtor_6);
      }
      if (succeeded)
        STATE_VARIABLE_TypeCtors_15_15 = STATE_VARIABLE_TypeCtors_0_13;
      else
        mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_6)), STATE_VARIABLE_TypeCtors_0_13, &STATE_VARIABLE_TypeCtors_15_15);
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[28]), ArgTypes_7, ((MR_Box) (STATE_VARIABLE_TypeCtors_15_15)), &conv1_STATE_VARIABLE_TypeCtors_14);
      *STATE_VARIABLE_TypeCtors_14 = ((MR_Word) (conv1_STATE_VARIABLE_TypeCtors_14));
    }
    else
      *STATE_VARIABLE_TypeCtors_14 = STATE_VARIABLE_TypeCtors_0_13;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_rhs_8_p_0_1(
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
    MR_Word conv3_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_34;
    MR_Word conv2_STATE_VARIABLE_DuArgTypeCtors_36;
    MR_Word conv1_STATE_VARIABLE_ModulesNeededByTypeDefns_38;

    parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_34, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_DuArgTypeCtors_36, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_ModulesNeededByTypeDefns_38);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_34));
    *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_DuArgTypeCtors_36));
    *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_ModulesNeededByTypeDefns_38));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_rhs_8_p_0(
  MR_Word ImpTypesMap_9,
  MR_Word TypeCtor_10,
  MR_Word STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_15,
  MR_Word * STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16,
  MR_Word STATE_VARIABLE_DuArgTypeCtors_0_17,
  MR_Word * STATE_VARIABLE_DuArgTypeCtors_18,
  MR_Word STATE_VARIABLE_ModulesNeededByTypeDefns_0_19,
  MR_Word * STATE_VARIABLE_ModulesNeededByTypeDefns_20)
{
  {
    MR_bool succeeded;
    MR_Word ImpTypeDefns_14;
    MR_Box conv0_ImpTypeDefns_14;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), ImpTypesMap_9, ((MR_Box) (TypeCtor_10)), &conv0_ImpTypeDefns_14);
    if (succeeded)
    {
      ImpTypeDefns_14 = ((MR_Word) (conv0_ImpTypeDefns_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_21;
      MR_Box conv6_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16;
      MR_Box conv5_STATE_VARIABLE_DuArgTypeCtors_18;
      MR_Box conv4_STATE_VARIABLE_ModulesNeededByTypeDefns_20;

      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_9[1]));
        MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_rhs_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (ImpTypesMap_9));
      }
      mercury__one_or_more__foldl3_8_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[5]), Var_21, ImpTypeDefns_14, ((MR_Box) (STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_15)), &conv6_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16, ((MR_Box) (STATE_VARIABLE_DuArgTypeCtors_0_17)), &conv5_STATE_VARIABLE_DuArgTypeCtors_18, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_0_19)), &conv4_STATE_VARIABLE_ModulesNeededByTypeDefns_20);
      *STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16 = ((MR_Word) (conv6_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16));
      *STATE_VARIABLE_DuArgTypeCtors_18 = ((MR_Word) (conv5_STATE_VARIABLE_DuArgTypeCtors_18));
      *STATE_VARIABLE_ModulesNeededByTypeDefns_20 = ((MR_Word) (conv4_STATE_VARIABLE_ModulesNeededByTypeDefns_20));
    }
    else
    {
      *STATE_VARIABLE_ModulesNeededByTypeDefns_20 = STATE_VARIABLE_ModulesNeededByTypeDefns_0_19;
      *STATE_VARIABLE_DuArgTypeCtors_18 = STATE_VARIABLE_DuArgTypeCtors_0_17;
      *STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16 = STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_15;
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_eqv_and_supertypes_in_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_33;
    MR_Word conv6_STATE_VARIABLE_Seen_35;

    parse_tree__comp_unit_interface__accumulate_eqv_and_supertypes_in_defn_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_33, ((MR_Word) (wrapper_arg_4)), &conv6_STATE_VARIABLE_Seen_35);
    *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_33));
    *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_Seen_35));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_eqv_and_supertypes_in_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_33;
    MR_Word conv1_STATE_VARIABLE_Seen_35;

    parse_tree__comp_unit_interface__accumulate_eqv_and_supertypes_in_defn_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_33, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Seen_35);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_33));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Seen_35));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_eqv_and_supertypes_in_defn_7_p_0(
  MR_Word BothTypesMap_8,
  MR_Word TypeCtor_9,
  MR_Word ItemTypeDefnInfo_10,
  MR_Word STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_32,
  MR_Word * STATE_VARIABLE_AbsExpEqvLhsTypeCtors_33,
  MR_Word STATE_VARIABLE_Seen_0_34,
  MR_Word * STATE_VARIABLE_Seen_35)
{
  {
    MR_bool succeeded;
    MR_Word TypeDefn_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_10, (MR_Integer) 2))));

    switch (MR_tag((MR_Word) TypeDefn_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DetailsDu_22 = (MR_Word) ((MR_Word) (TypeDefn_15));
          MR_Word MaybeSuperType_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_22, (MR_Integer) 0))));

          if ((MaybeSuperType_23 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_33 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_32;
            *STATE_VARIABLE_Seen_35 = STATE_VARIABLE_Seen_0_34;
          }
          else
          {
            MR_Word SuperType_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSuperType_23, (MR_Integer) 0))));
            MR_Word STATE_VARIABLE_AbsExpEqvLhsTypeCtors_36_36;
            MR_Word SuperTypeCtor_28;

            mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_9)), STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_32, &STATE_VARIABLE_AbsExpEqvLhsTypeCtors_36_36);
            succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(SuperType_27, &SuperTypeCtor_28);
            if (succeeded)
            {
              MR_Word STATE_VARIABLE_Seen_16_53;

              succeeded = mercury__set__insert_new_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (SuperTypeCtor_28)), STATE_VARIABLE_Seen_0_34, &STATE_VARIABLE_Seen_16_53);
              if (succeeded)
              {
                MR_Word STATE_VARIABLE_AbsExpEqvLhsTypeCtors_17_54;
                MR_Word ItemTypeDefnInfos_52;
                MR_Box conv0_ItemTypeDefnInfos_52;

                mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (SuperTypeCtor_28)), STATE_VARIABLE_AbsExpEqvLhsTypeCtors_36_36, &STATE_VARIABLE_AbsExpEqvLhsTypeCtors_17_54);
                succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), BothTypesMap_8, ((MR_Box) (SuperTypeCtor_28)), &conv0_ItemTypeDefnInfos_52);
                if (succeeded)
                {
                  ItemTypeDefnInfos_52 = ((MR_Word) (conv0_ItemTypeDefnInfos_52));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Word Var_55;
                  MR_Box conv4_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_33;
                  MR_Box conv3_STATE_VARIABLE_Seen_35;

                  {
                    Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_13[0]));
                    MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (parse_tree__comp_unit_interface__accumulate_eqv_and_supertypes_in_defn_7_p_0_1));
                    MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (BothTypesMap_8));
                    MR_hl_field(MR_mktag(0), Var_55, 4) = ((MR_Box) (SuperTypeCtor_28));
                  }
                  mercury__one_or_more__foldl2_6_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), Var_55, ItemTypeDefnInfos_52, ((MR_Box) (STATE_VARIABLE_AbsExpEqvLhsTypeCtors_17_54)), &conv4_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_33, ((MR_Box) (STATE_VARIABLE_Seen_16_53)), &conv3_STATE_VARIABLE_Seen_35);
                  *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_33 = ((MR_Word) (conv4_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_33));
                  *STATE_VARIABLE_Seen_35 = ((MR_Word) (conv3_STATE_VARIABLE_Seen_35));
                }
                else
                {
                  *STATE_VARIABLE_Seen_35 = STATE_VARIABLE_Seen_16_53;
                  *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_33 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_17_54;
                }
              }
              else
              {
                *STATE_VARIABLE_Seen_35 = STATE_VARIABLE_Seen_0_34;
                *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_33 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_36_36;
              }
            }
            else
            {
              *STATE_VARIABLE_Seen_35 = STATE_VARIABLE_Seen_0_34;
              *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_33 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_36_36;
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_33 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_32;
          *STATE_VARIABLE_Seen_35 = STATE_VARIABLE_Seen_0_34;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DetailsEqv_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeDefn_15, (MR_Integer) 0))));
          MR_Word RhsType_20;
          MR_Word STATE_VARIABLE_AbsExpEqvLhsTypeCtors_39_39;
          MR_Word RhsTypeCtor_21;

          mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_9)), STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_32, &STATE_VARIABLE_AbsExpEqvLhsTypeCtors_39_39);
          RhsType_20 = (MR_Word) (DetailsEqv_19);
          succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(RhsType_20, &RhsTypeCtor_21);
          if (succeeded)
          {
            MR_Word STATE_VARIABLE_Seen_16_77;

            succeeded = mercury__set__insert_new_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (RhsTypeCtor_21)), STATE_VARIABLE_Seen_0_34, &STATE_VARIABLE_Seen_16_77);
            if (succeeded)
            {
              MR_Word STATE_VARIABLE_AbsExpEqvLhsTypeCtors_17_78;
              MR_Word ItemTypeDefnInfos_76;
              MR_Box conv5_ItemTypeDefnInfos_76;

              mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (RhsTypeCtor_21)), STATE_VARIABLE_AbsExpEqvLhsTypeCtors_39_39, &STATE_VARIABLE_AbsExpEqvLhsTypeCtors_17_78);
              succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), BothTypesMap_8, ((MR_Box) (RhsTypeCtor_21)), &conv5_ItemTypeDefnInfos_76);
              if (succeeded)
              {
                ItemTypeDefnInfos_76 = ((MR_Word) (conv5_ItemTypeDefnInfos_76));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word Var_79;
                MR_Box conv9_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_33;
                MR_Box conv8_STATE_VARIABLE_Seen_35;

                {
                  Var_79 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_13[0]));
                  MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (parse_tree__comp_unit_interface__accumulate_eqv_and_supertypes_in_defn_7_p_0_2));
                  MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_79, 3) = ((MR_Box) (BothTypesMap_8));
                  MR_hl_field(MR_mktag(0), Var_79, 4) = ((MR_Box) (RhsTypeCtor_21));
                }
                mercury__one_or_more__foldl2_6_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), Var_79, ItemTypeDefnInfos_76, ((MR_Box) (STATE_VARIABLE_AbsExpEqvLhsTypeCtors_17_78)), &conv9_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_33, ((MR_Box) (STATE_VARIABLE_Seen_16_77)), &conv8_STATE_VARIABLE_Seen_35);
                *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_33 = ((MR_Word) (conv9_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_33));
                *STATE_VARIABLE_Seen_35 = ((MR_Word) (conv8_STATE_VARIABLE_Seen_35));
              }
              else
              {
                *STATE_VARIABLE_Seen_35 = STATE_VARIABLE_Seen_16_77;
                *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_33 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_17_78;
              }
            }
            else
            {
              *STATE_VARIABLE_Seen_35 = STATE_VARIABLE_Seen_0_34;
              *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_33 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_39_39;
            }
          }
          else
          {
            *STATE_VARIABLE_Seen_35 = STATE_VARIABLE_Seen_0_34;
            *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_33 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_39_39;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_15, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_33 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_32;
              *STATE_VARIABLE_Seen_35 = STATE_VARIABLE_Seen_0_34;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_33 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_32;
              *STATE_VARIABLE_Seen_35 = STATE_VARIABLE_Seen_0_34;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_10_p_0_1(
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
    MR_Word conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_43;
    MR_Word conv1_STATE_VARIABLE_AbsExpEnumTypeCtors_45;
    MR_Word conv0_STATE_VARIABLE_DirectDummyTypeCtors_47;

    parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_in_defn_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_43, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_AbsExpEnumTypeCtors_45, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_DirectDummyTypeCtors_47);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_43));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_AbsExpEnumTypeCtors_45));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_DirectDummyTypeCtors_47));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_10_p_0(
  MR_Word IntTypesMap_11,
  MR_Word BothTypesMap_12,
  MR_Word TypeCtor_13,
  MR_Word ImpItemTypeDefnInfos_14,
  MR_Word STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_22,
  MR_Word * STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23,
  MR_Word STATE_VARIABLE_AbsExpEnumTypeCtors_0_24,
  MR_Word * STATE_VARIABLE_AbsExpEnumTypeCtors_25,
  MR_Word STATE_VARIABLE_DirectDummyTypeCtors_0_26,
  MR_Word * STATE_VARIABLE_DirectDummyTypeCtors_27)
{
  {
    MR_Word HeadImpItemTypeDefnInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpItemTypeDefnInfos_14, (MR_Integer) 0))));
    MR_Word TailImpItemTypeDefnInfos_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpItemTypeDefnInfos_14, (MR_Integer) 1))));

    if ((TailImpItemTypeDefnInfos_19 == (MR_Word) ((MR_Unsigned) 0U)))
      parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_in_defn_10_p_0(IntTypesMap_11, BothTypesMap_12, TypeCtor_13, HeadImpItemTypeDefnInfo_18, STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_22, STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23, STATE_VARIABLE_AbsExpEnumTypeCtors_0_24, STATE_VARIABLE_AbsExpEnumTypeCtors_25, STATE_VARIABLE_DirectDummyTypeCtors_0_26, STATE_VARIABLE_DirectDummyTypeCtors_27);
    else
    {
      MR_Word Var_28;
      MR_Box conv5_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23;
      MR_Box conv4_STATE_VARIABLE_AbsExpEnumTypeCtors_25;
      MR_Box conv3_STATE_VARIABLE_DirectDummyTypeCtors_27;

      {
        Var_28 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_8[1]));
        MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_10_p_0_1));
        MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (IntTypesMap_11));
        MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) (BothTypesMap_12));
        MR_hl_field(MR_mktag(0), Var_28, 5) = ((MR_Box) (TypeCtor_13));
      }
      mercury__one_or_more__foldl3_8_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), Var_28, ImpItemTypeDefnInfos_14, ((MR_Box) (STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_22)), &conv5_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23, ((MR_Box) (STATE_VARIABLE_AbsExpEnumTypeCtors_0_24)), &conv4_STATE_VARIABLE_AbsExpEnumTypeCtors_25, ((MR_Box) (STATE_VARIABLE_DirectDummyTypeCtors_0_26)), &conv3_STATE_VARIABLE_DirectDummyTypeCtors_27);
      *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23 = ((MR_Word) (conv5_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23));
      *STATE_VARIABLE_AbsExpEnumTypeCtors_25 = ((MR_Word) (conv4_STATE_VARIABLE_AbsExpEnumTypeCtors_25));
      *STATE_VARIABLE_DirectDummyTypeCtors_27 = ((MR_Word) (conv3_STATE_VARIABLE_DirectDummyTypeCtors_27));
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_in_defn_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_33;
    MR_Word conv3_STATE_VARIABLE_Seen_35;

    parse_tree__comp_unit_interface__accumulate_eqv_and_supertypes_in_defn_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_33, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_Seen_35);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_33));
    *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_Seen_35));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_in_defn_10_p_0(
  MR_Word IntTypesMap_11,
  MR_Word BothTypesMap_12,
  MR_Word TypeCtor_13,
  MR_Word ImpItemTypeDefnInfo_14,
  MR_Word STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_42,
  MR_Word * STATE_VARIABLE_AbsExpEqvLhsTypeCtors_43,
  MR_Word STATE_VARIABLE_AbsExpEnumTypeCtors_0_44,
  MR_Word * STATE_VARIABLE_AbsExpEnumTypeCtors_45,
  MR_Word STATE_VARIABLE_DirectDummyTypeCtors_0_46,
  MR_Word * STATE_VARIABLE_DirectDummyTypeCtors_47)
{
  {
    MR_bool succeeded;
    MR_Word ImpTypeDefn_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpItemTypeDefnInfo_14, (MR_Integer) 2))));
    MR_Word TVarSet_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpItemTypeDefnInfo_14, (MR_Integer) 3))));

    switch (MR_tag((MR_Word) ImpTypeDefn_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DetailsDu_28 = (MR_Word) ((MR_Word) (ImpTypeDefn_20));
          MR_Word MaybeSuperType_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_28, (MR_Integer) 0))));
          MR_Word OoMCtors_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_28, (MR_Integer) 1))));
          MR_Word MaybeEqCmp_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_28, (MR_Integer) 2))));
          MR_Word MaybeDirectArgCtors_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_28, (MR_Integer) 3))));

          if ((MaybeSuperType_29 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Box conv0_Var_33;
            MR_Integer _NumFunctors_34;

            succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), IntTypesMap_11, ((MR_Box) (TypeCtor_13)), &conv0_Var_33);
            if (succeeded)
              succeeded = MR_TRUE;
            if (succeeded)
              succeeded = parse_tree__prog_type__non_sub_du_type_is_enum_2_p_0(DetailsDu_28, &_NumFunctors_34);
            if (succeeded)
            {
              mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_13)), STATE_VARIABLE_AbsExpEnumTypeCtors_0_44, STATE_VARIABLE_AbsExpEnumTypeCtors_45);
              *STATE_VARIABLE_DirectDummyTypeCtors_47 = STATE_VARIABLE_DirectDummyTypeCtors_0_46;
            }
            else
            {
              succeeded = parse_tree__comp_unit_interface__non_sub_du_constructor_list_represents_dummy_type_5_p_0(BothTypesMap_12, TVarSet_21, OoMCtors_30, MaybeEqCmp_31, MaybeDirectArgCtors_32);
              if (succeeded)
                mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_13)), STATE_VARIABLE_DirectDummyTypeCtors_0_46, STATE_VARIABLE_DirectDummyTypeCtors_47);
              else
                *STATE_VARIABLE_DirectDummyTypeCtors_47 = STATE_VARIABLE_DirectDummyTypeCtors_0_46;
              *STATE_VARIABLE_AbsExpEnumTypeCtors_45 = STATE_VARIABLE_AbsExpEnumTypeCtors_0_44;
            }
            *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_43 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_42;
          }
          else
          {
            MR_Word SuperType_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSuperType_29, (MR_Integer) 0))));
            MR_Box conv1_Var_36;

            succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), IntTypesMap_11, ((MR_Box) (TypeCtor_13)), &conv1_Var_36);
            if (succeeded)
              succeeded = MR_TRUE;
            if (succeeded)
            {
              MR_Word STATE_VARIABLE_AbsExpEqvLhsTypeCtors_48_48;
              MR_Word SuperTypeCtor_37;

              mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_13)), STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_42, &STATE_VARIABLE_AbsExpEqvLhsTypeCtors_48_48);
              succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(SuperType_35, &SuperTypeCtor_37);
              if (succeeded)
              {
                MR_Word Seen0_38;
                MR_Word STATE_VARIABLE_Seen_16_76;

                mercury__set__singleton_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_13)), &Seen0_38);
                succeeded = mercury__set__insert_new_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (SuperTypeCtor_37)), Seen0_38, &STATE_VARIABLE_Seen_16_76);
                if (succeeded)
                {
                  MR_Word STATE_VARIABLE_AbsExpEqvLhsTypeCtors_17_77;
                  MR_Word ItemTypeDefnInfos_75;
                  MR_Box conv2_ItemTypeDefnInfos_75;

                  mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (SuperTypeCtor_37)), STATE_VARIABLE_AbsExpEqvLhsTypeCtors_48_48, &STATE_VARIABLE_AbsExpEqvLhsTypeCtors_17_77);
                  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), BothTypesMap_12, ((MR_Box) (SuperTypeCtor_37)), &conv2_ItemTypeDefnInfos_75);
                  if (succeeded)
                  {
                    ItemTypeDefnInfos_75 = ((MR_Word) (conv2_ItemTypeDefnInfos_75));
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    MR_Word Var_78;
                    MR_Box conv6_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_43;
                    MR_Box conv5__Seen_39;

                    {
                      Var_78 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_13[0]));
                      MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_in_defn_10_p_0_1));
                      MR_hl_field(MR_mktag(0), Var_78, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_78, 3) = ((MR_Box) (BothTypesMap_12));
                      MR_hl_field(MR_mktag(0), Var_78, 4) = ((MR_Box) (SuperTypeCtor_37));
                    }
                    mercury__one_or_more__foldl2_6_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), Var_78, ItemTypeDefnInfos_75, ((MR_Box) (STATE_VARIABLE_AbsExpEqvLhsTypeCtors_17_77)), &conv6_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_43, ((MR_Box) (STATE_VARIABLE_Seen_16_76)), &conv5__Seen_39);
                    *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_43 = ((MR_Word) (conv6_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_43));
                  }
                  else
                    *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_43 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_17_77;
                }
                else
                  *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_43 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_48_48;
              }
              else
                *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_43 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_48_48;
            }
            else
              *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_43 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_42;
            *STATE_VARIABLE_AbsExpEnumTypeCtors_45 = STATE_VARIABLE_AbsExpEnumTypeCtors_0_44;
            *STATE_VARIABLE_DirectDummyTypeCtors_47 = STATE_VARIABLE_DirectDummyTypeCtors_0_46;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_43 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_42;
          *STATE_VARIABLE_AbsExpEnumTypeCtors_45 = STATE_VARIABLE_AbsExpEnumTypeCtors_0_44;
          *STATE_VARIABLE_DirectDummyTypeCtors_47 = STATE_VARIABLE_DirectDummyTypeCtors_0_46;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box conv7_Var_25;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), IntTypesMap_11, ((MR_Box) (TypeCtor_13)), &conv7_Var_25);
          if (succeeded)
            succeeded = MR_TRUE;
          if (succeeded)
            mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_13)), STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_42, STATE_VARIABLE_AbsExpEqvLhsTypeCtors_43);
          else
            *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_43 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_42;
          *STATE_VARIABLE_AbsExpEnumTypeCtors_45 = STATE_VARIABLE_AbsExpEnumTypeCtors_0_44;
          *STATE_VARIABLE_DirectDummyTypeCtors_47 = STATE_VARIABLE_DirectDummyTypeCtors_0_46;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ImpTypeDefn_20, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_43 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_42;
              *STATE_VARIABLE_AbsExpEnumTypeCtors_45 = STATE_VARIABLE_AbsExpEnumTypeCtors_0_44;
              *STATE_VARIABLE_DirectDummyTypeCtors_47 = STATE_VARIABLE_DirectDummyTypeCtors_0_46;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box conv8_Var_27;

              succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), IntTypesMap_11, ((MR_Box) (TypeCtor_13)), &conv8_Var_27);
              if (succeeded)
                succeeded = MR_TRUE;
              if (succeeded)
                mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_13)), STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_42, STATE_VARIABLE_AbsExpEqvLhsTypeCtors_43);
              else
                *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_43 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_42;
              *STATE_VARIABLE_AbsExpEnumTypeCtors_45 = STATE_VARIABLE_AbsExpEnumTypeCtors_0_44;
              *STATE_VARIABLE_DirectDummyTypeCtors_47 = STATE_VARIABLE_DirectDummyTypeCtors_0_46;
            }
            break;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__non_sub_du_constructor_list_represents_dummy_type_5_p_0(
  MR_Word TypeDefnMap_6,
  MR_Word TVarSet_7,
  MR_Word OoMCtors_8,
  MR_Word MaybeCanonical_9,
  MR_Word MaybeDirectArgCtors_10)
{
  {
    MR_bool succeeded = (MaybeCanonical_9 == (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Var_11;
    MR_Word Ctor_16;
    MR_Word MaybeExistConstraints_18;
    MR_Word CtorArgs_20;
    MR_Word Var_26;

    if (succeeded)
    {
      succeeded = (MaybeDirectArgCtors_10 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_11 = (MR_Word) ((MR_Unsigned) 0U);
        Ctor_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_8, (MR_Integer) 0))));
        Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_8, (MR_Integer) 1))));
        succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          MaybeExistConstraints_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 1))));
          CtorArgs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 3))));
          succeeded = (MaybeExistConstraints_18 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            if ((CtorArgs_20 == (MR_Word) ((MR_Unsigned) 0U)))
              succeeded = MR_TRUE;
            else
            {
              MR_Word ArgType_24;
              MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorArgs_20, (MR_Integer) 0))));
              MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorArgs_20, (MR_Integer) 1))));

              succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ArgType_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 1))));
                if (((MR_tag((MR_Word) ArgType_24)) == (MR_Integer) 1))
                {
                  MR_Word SymName_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgType_24, (MR_Integer) 0))));
                  MR_Word TypeArgs_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgType_24, (MR_Integer) 1))));

                  succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (ArgType_24)), Var_11);
                  if (succeeded)
                    succeeded = MR_FALSE;
                  else
                  {
                    MR_Integer Arity_38;
                    MR_Word TypeCtor_39;

                    Arity_38 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeArgs_36);
                    {
                      TypeCtor_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), TypeCtor_39, 0) = ((MR_Box) (SymName_35));
                      MR_hl_field(MR_mktag(0), TypeCtor_39, 1) = ((MR_Box) (Arity_38));
                    }
                    {
                      MR_Word Var_57;

                      Var_57 = parse_tree__prog_type__is_type_ctor_a_builtin_dummy_1_f_0(TypeCtor_39);
                      succeeded = (Var_57 == (MR_Integer) 0);
                    }
                    if (!(succeeded))
                      succeeded = parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0(TypeDefnMap_6, TVarSet_7, ArgType_24, TypeCtor_39, TypeArgs_36, Var_11);
                  }
                }
                else
                if (((((MR_tag((MR_Word) ArgType_24)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgType_24, (MR_Integer) 0)))) == (MR_Integer) 3))))
                {
                  mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.comp_unit_interface.ctor_arg_is_dummy_type\'/4", (MR_String) "kinded_type");
                  succeeded = MR_TRUE;
                }
                else
                  succeeded = MR_FALSE;
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__non_sub_du_constructor_list_represents_dummy_type_2_6_p_0(
  MR_Word TypeDefnMap_7,
  MR_Word TVarSet_8,
  MR_Word OoMCtors_9,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word CoveredTypes_10)
{
  {
    MR_bool succeeded = (HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Ctor_11;
    MR_Word MaybeExistConstraints_13;
    MR_Word CtorArgs_15;
    MR_Word Var_21;

    if (succeeded)
    {
      succeeded = (HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Ctor_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_9, (MR_Integer) 0))));
        Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_9, (MR_Integer) 1))));
        succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          MaybeExistConstraints_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_11, (MR_Integer) 1))));
          CtorArgs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_11, (MR_Integer) 3))));
          succeeded = (MaybeExistConstraints_13 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            if ((CtorArgs_15 == (MR_Word) ((MR_Unsigned) 0U)))
              succeeded = MR_TRUE;
            else
            {
              MR_Word ArgType_19;
              MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorArgs_15, (MR_Integer) 0))));
              MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorArgs_15, (MR_Integer) 1))));

              succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ArgType_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 1))));
                if (((MR_tag((MR_Word) ArgType_19)) == (MR_Integer) 1))
                {
                  MR_Word SymName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgType_19, (MR_Integer) 0))));
                  MR_Word TypeArgs_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgType_19, (MR_Integer) 1))));

                  succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (ArgType_19)), CoveredTypes_10);
                  if (succeeded)
                    succeeded = MR_FALSE;
                  else
                  {
                    MR_Integer Arity_33;
                    MR_Word TypeCtor_34;

                    Arity_33 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeArgs_31);
                    {
                      TypeCtor_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), TypeCtor_34, 0) = ((MR_Box) (SymName_30));
                      MR_hl_field(MR_mktag(0), TypeCtor_34, 1) = ((MR_Box) (Arity_33));
                    }
                    {
                      MR_Word Var_52;

                      Var_52 = parse_tree__prog_type__is_type_ctor_a_builtin_dummy_1_f_0(TypeCtor_34);
                      succeeded = (Var_52 == (MR_Integer) 0);
                    }
                    if (!(succeeded))
                      succeeded = parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0(TypeDefnMap_7, TVarSet_8, ArgType_19, TypeCtor_34, TypeArgs_31, CoveredTypes_10);
                  }
                }
                else
                if (((((MR_tag((MR_Word) ArgType_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgType_19, (MR_Integer) 0)))) == (MR_Integer) 3))))
                {
                  mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.comp_unit_interface.ctor_arg_is_dummy_type\'/4", (MR_String) "kinded_type");
                  succeeded = MR_TRUE;
                }
                else
                  succeeded = MR_FALSE;
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_1(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_3(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__ItemTypeDefnInfo_14 = ((MR_Word) ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__conv0_ItemTypeDefnInfo_14));
    parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_2(env_ptr);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_4(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_5(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__Var_30 = parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefnMap_7, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TVarSet_8, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__BaseType_28, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__CoveredTypes0_12);
    (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__Var_30 == (MR_Integer) 1);
    if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded)
      parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_4(env_ptr);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_6(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__commit_1) == 0)
      {
        {
          MR_Word SuperType0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__MaybeSuperType_22, (MR_Integer) 0))));
          MR_Word SuperType_27;
          MR_Word Var_29;

          parse_tree__comp_unit_interface__merge_tvarsets_and_subst_type_args_6_p_0((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TVarSet_8, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeArgs_11, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefnTVarSet_18, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefnTypeParams_16, SuperType0_26, &SuperType_27);
          Var_29 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
          parse_tree__comp_unit_interface__get_base_type_5_p_0((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefnMap_7, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TVarSet_8, SuperType_27, &(env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__BaseType_28, Var_29, parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_5, env_ptr);
        }
        (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_2(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word _TypeCtor_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__ItemTypeDefnInfo_14, (MR_Integer) 0))));
      MR_Word _Context_19;
      MR_Word _SeqNum_20;

      (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefnTypeParams_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__ItemTypeDefnInfo_14, (MR_Integer) 1))));
      (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefn_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__ItemTypeDefnInfo_14, (MR_Integer) 2))));
      (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefnTVarSet_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__ItemTypeDefnInfo_14, (MR_Integer) 3))));
      _Context_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__ItemTypeDefnInfo_14, (MR_Integer) 4))));
      _SeqNum_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__ItemTypeDefnInfo_14, (MR_Integer) 5))));
      (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefn_17)) == (MR_Integer) 0);
      if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded)
      {
        (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__DetailsDu_21 = (MR_Word) ((MR_Word) ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefn_17));
        (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__MaybeSuperType_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__DetailsDu_21, (MR_Integer) 0))));
        (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__OoMCtors_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__DetailsDu_21, (MR_Integer) 1))));
        (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__MaybeEqCmp_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__DetailsDu_21, (MR_Integer) 2))));
        (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__MaybeDirectArgCtors_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__DetailsDu_21, (MR_Integer) 3))));
        if (((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__MaybeSuperType_22 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_31;
          MR_Word Ctor_39;
          MR_Word MaybeExistConstraints_41;
          MR_Word CtorArgs_43;
          MR_Word Var_49;
          uint32_t _Ordinal_40;
          MR_Word _Name_42;
          MR_Integer _Arity_44;
          MR_Word _Context_45;

          (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__MaybeEqCmp_24 == (MR_Word) ((MR_Unsigned) 0U));
          if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded)
          {
            (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__MaybeDirectArgCtors_25 == (MR_Word) ((MR_Unsigned) 0U));
            if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded)
            {
              Ctor_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__OoMCtors_23, (MR_Integer) 0))));
              Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__OoMCtors_23, (MR_Integer) 1))));
              (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = (Var_49 == (MR_Word) ((MR_Unsigned) 0U));
              if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded)
              {
                _Ordinal_40 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), Ctor_39, (MR_Integer) 0)));
                MaybeExistConstraints_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_39, (MR_Integer) 1))));
                _Name_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_39, (MR_Integer) 2))));
                CtorArgs_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_39, (MR_Integer) 3))));
                _Arity_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_39, (MR_Integer) 4))));
                _Context_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_39, (MR_Integer) 5))));
                (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = (MaybeExistConstraints_41 == (MR_Word) ((MR_Unsigned) 0U));
                if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded)
                {
                  {
                    Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__Type_9));
                    MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__CoveredTypes0_12));
                  }
                  if ((CtorArgs_43 == (MR_Word) ((MR_Unsigned) 0U)))
                    (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = MR_TRUE;
                  else
                  {
                    MR_Word ArgType_47;
                    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorArgs_43, (MR_Integer) 0))));
                    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorArgs_43, (MR_Integer) 1))));
                    MR_Word Var_46;
                    MR_Word Var_48;

                    (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = (Var_51 == (MR_Word) ((MR_Unsigned) 0U));
                    if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded)
                    {
                      Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 0))));
                      ArgType_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 1))));
                      Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 2))));
                      if (((MR_tag((MR_Word) ArgType_47)) == (MR_Integer) 1))
                      {
                        MR_Word SymName_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgType_47, (MR_Integer) 0))));
                        MR_Word TypeArgs_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgType_47, (MR_Integer) 1))));
                        MR_Word _Kind_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgType_47, (MR_Integer) 2))));

                        (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (ArgType_47)), Var_31);
                        if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded)
                          (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = MR_FALSE;
                        else
                        {
                          MR_Integer Arity_61;
                          MR_Word TypeCtor_62;

                          Arity_61 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeArgs_59);
                          {
                            TypeCtor_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), TypeCtor_62, 0) = ((MR_Box) (SymName_58));
                            MR_hl_field(MR_mktag(0), TypeCtor_62, 1) = ((MR_Box) (Arity_61));
                          }
                          {
                            MR_Word Var_80;

                            Var_80 = parse_tree__prog_type__is_type_ctor_a_builtin_dummy_1_f_0(TypeCtor_62);
                            (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = (Var_80 == (MR_Integer) 0);
                          }
                          if (!((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded))
                            (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefnMap_7, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TVarSet_8, ArgType_47, TypeCtor_62, TypeArgs_59, Var_31);
                        }
                      }
                      else
                      if (((((MR_tag((MR_Word) ArgType_47)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgType_47, (MR_Integer) 0)))) == (MR_Integer) 3))))
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.comp_unit_interface.ctor_arg_is_dummy_type\'/4", (MR_String) "kinded_type");
                          return;
                        }
                        (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = MR_TRUE;
                      }
                      else
                        (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = MR_FALSE;
                    }
                  }
                }
              }
            }
          }
        }
        else
          parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_6(env_ptr);
        if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded)
          parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_1(env_ptr);
      }
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_7(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word ItemTypeDefnInfos_13;

          (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = mercury__one_or_more_map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefnMap_7, ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeCtor_10)), &ItemTypeDefnInfos_13);
          if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded)
            mercury__one_or_more__member_2_p_1((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), &(env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__conv0_ItemTypeDefnInfo_14, ItemTypeDefnInfos_13, parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_3, env_ptr);
        }
        (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0(
  MR_Word TypeDefnMap_7,
  MR_Word TVarSet_8,
  MR_Word Type_9,
  MR_Word TypeCtor_10,
  MR_Word TypeArgs_11,
  MR_Word CoveredTypes0_12)
{
  {
    struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s env;

    (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefnMap_7 = TypeDefnMap_7;
    (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TVarSet_8 = TVarSet_8;
    (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__Type_9 = Type_9;
    (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeCtor_10 = TypeCtor_10;
    (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeArgs_11 = TypeArgs_11;
    (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__CoveredTypes0_12 = CoveredTypes0_12;
    parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_7(&env);
    return (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_1(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_3(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__ItemTypeDefnInfo_43 = ((MR_Word) ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__conv0_ItemTypeDefnInfo_43));
    parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_2(env_ptr);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_4(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_5(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__Var_59 = parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefnMap_6, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TVarSet_7, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__BaseType_57, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__CoveredTypes0_9);
    (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded = ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__Var_59 == (MR_Integer) 1);
    if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded)
      parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_4(env_ptr);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_6(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__commit_1) == 0)
      {
        {
          MR_Word SuperType0_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__MaybeSuperType_51, (MR_Integer) 0))));
          MR_Word SuperType_56;
          MR_Word Var_58;

          parse_tree__comp_unit_interface__merge_tvarsets_and_subst_type_args_6_p_0((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TVarSet_7, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeArgs_12, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefnTVarSet_47, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefnTypeParams_45, SuperType0_55, &SuperType_56);
          Var_58 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
          parse_tree__comp_unit_interface__get_base_type_5_p_0((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefnMap_6, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TVarSet_7, SuperType_56, &(env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__BaseType_57, Var_58, parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_5, env_ptr);
        }
        (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_2(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word _TypeCtor_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__ItemTypeDefnInfo_43, (MR_Integer) 0))));
      MR_Word _Context_48;
      MR_Word _SeqNum_49;

      (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefnTypeParams_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__ItemTypeDefnInfo_43, (MR_Integer) 1))));
      (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefn_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__ItemTypeDefnInfo_43, (MR_Integer) 2))));
      (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefnTVarSet_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__ItemTypeDefnInfo_43, (MR_Integer) 3))));
      _Context_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__ItemTypeDefnInfo_43, (MR_Integer) 4))));
      _SeqNum_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__ItemTypeDefnInfo_43, (MR_Integer) 5))));
      (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefn_46)) == (MR_Integer) 0);
      if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded)
      {
        (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__DetailsDu_50 = (MR_Word) ((MR_Word) ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefn_46));
        (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__MaybeSuperType_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__DetailsDu_50, (MR_Integer) 0))));
        (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__OoMCtors_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__DetailsDu_50, (MR_Integer) 1))));
        (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__MaybeEqCmp_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__DetailsDu_50, (MR_Integer) 2))));
        (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__MaybeDirectArgCtors_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__DetailsDu_50, (MR_Integer) 3))));
        if (((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__MaybeSuperType_51 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_60;

          {
            Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__Type_8));
            MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__CoveredTypes0_9));
          }
          (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded = parse_tree__comp_unit_interface__non_sub_du_constructor_list_represents_dummy_type_2_6_p_0((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefnMap_6, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TVarSet_7, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__OoMCtors_52, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__MaybeEqCmp_53, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__MaybeDirectArgCtors_54, Var_60);
        }
        else
          parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_6(env_ptr);
        if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded)
          parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_1(env_ptr);
      }
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_7(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__commit_0) == 0)
      {
        {
          MR_Word ItemTypeDefnInfos_42;

          (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded = mercury__one_or_more_map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefnMap_6, ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeCtor_15)), &ItemTypeDefnInfos_42);
          if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded)
            mercury__one_or_more__member_2_p_1((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), &(env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__conv0_ItemTypeDefnInfo_43, ItemTypeDefnInfos_42, parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_3, env_ptr);
        }
        (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0(
  MR_Word TypeDefnMap_6,
  MR_Word TVarSet_7,
  MR_Word Type_8,
  MR_Word CoveredTypes0_9)
{
  {
    struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s env;

    (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefnMap_6 = TypeDefnMap_6;
    (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TVarSet_7 = TVarSet_7;
    (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__Type_8 = Type_8;
    (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__CoveredTypes0_9 = CoveredTypes0_9;
    {
      MR_Word IsDummyType_10;

      switch (MR_tag((MR_Word) (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__Type_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 2:
          IsDummyType_10 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          {
            MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__Type_8, (MR_Integer) 0))));
            MR_Word _Kind_13;

            (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeArgs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__Type_8, (MR_Integer) 1))));
            _Kind_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__Type_8, (MR_Integer) 2))));
            (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) ((env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__Type_8)), (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__CoveredTypes0_9);
            if ((env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded)
              IsDummyType_10 = (MR_Integer) 0;
            else
            {
              MR_Integer Arity_14;

              Arity_14 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeArgs_12);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeCtor_15 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_11));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Arity_14));
              }
              {
                MR_Word Var_33;

                Var_33 = parse_tree__prog_type__is_type_ctor_a_builtin_dummy_1_f_0((env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeCtor_15);
                (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded = (Var_33 == (MR_Integer) 0);
              }
              if (!((env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded))
                parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_7(&env);
              if ((env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded)
                IsDummyType_10 = (MR_Integer) 1;
              else
                IsDummyType_10 = (MR_Integer) 0;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__Type_8, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              IsDummyType_10 = (MR_Integer) 0;
              break;
            case (MR_Integer) 3:
              mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.comp_unit_interface.ctor_arg_is_dummy_type\'/4", (MR_String) "kinded_type");
              break;
          }
          break;
      }
      return IsDummyType_10;
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_base_type_5_p_0_2(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__ItemTypeDefnInfo_18 = ((MR_Word) ((env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__conv0_ItemTypeDefnInfo_18));
    parse_tree__comp_unit_interface__get_base_type_5_p_0_1(env_ptr);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_base_type_5_p_0_1(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word _TypeCtor_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__ItemTypeDefnInfo_18, (MR_Integer) 0))));
      MR_Word _Context_23;
      MR_Word _SeqNum_24;
      MR_Word _OoMCtors_27;
      MR_Word _MaybeEqCmp_28;
      MR_Word _MaybeDirectArgCtors_29;

      (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefnTypeParams_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__ItemTypeDefnInfo_18, (MR_Integer) 1))));
      (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefn_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__ItemTypeDefnInfo_18, (MR_Integer) 2))));
      (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefnTVarSet_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__ItemTypeDefnInfo_18, (MR_Integer) 3))));
      _Context_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__ItemTypeDefnInfo_18, (MR_Integer) 4))));
      _SeqNum_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__ItemTypeDefnInfo_18, (MR_Integer) 5))));
      (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefn_21)) == (MR_Integer) 0);
      if ((env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__succeeded)
      {
        (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__DetailsDu_25 = (MR_Word) ((MR_Word) ((env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefn_21));
        (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__MaybeSuperType_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__DetailsDu_25, (MR_Integer) 0))));
        _OoMCtors_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__DetailsDu_25, (MR_Integer) 1))));
        _MaybeEqCmp_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__DetailsDu_25, (MR_Integer) 2))));
        _MaybeDirectArgCtors_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__DetailsDu_25, (MR_Integer) 3))));
        if (((env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__MaybeSuperType_26 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *((env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__BaseType_9) = (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__Type_8;
          ((env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__cont)((env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__cont_env_ptr);
        }
        else
        {
          MR_Word SuperType0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__MaybeSuperType_26, (MR_Integer) 0))));
          MR_Word SuperType_31;
          MR_Word Renaming_42;
          MR_Word TypeParams_43;
          MR_Word TSubst_44;
          MR_Word Type1_45;
          MR_Word _MergedTVarSet_41;

          parse_tree__prog_data__tvarset_merge_renaming_4_p_0((env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TVarSet_7, (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefnTVarSet_22, &_MergedTVarSet_41, &Renaming_42);
          parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_42, (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefnTypeParams_20, &TypeParams_43);
          mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[10]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_43, (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeArgs_12, &TSubst_44);
          parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(Renaming_42, SuperType0_30, &Type1_45);
          parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TSubst_44, Type1_45, &SuperType_31);
          parse_tree__comp_unit_interface__get_base_type_5_p_0((env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefnMap_6, (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TVarSet_7, SuperType_31, (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__BaseType_9, (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__SeenTypes1_14, (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__cont, (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__cont_env_ptr);
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_base_type_5_p_0(
  MR_Word TypeDefnMap_6,
  MR_Word TVarSet_7,
  MR_Word Type_8,
  MR_Word * BaseType_9,
  MR_Word SeenTypes0_10,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0_s env;

    (env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefnMap_6 = TypeDefnMap_6;
    (env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TVarSet_7 = TVarSet_7;
    (env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__Type_8 = Type_8;
    (env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__BaseType_9 = BaseType_9;
    (env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__cont = cont;
    (env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Word TypeCtorInfo_32_32;
      MR_Word TypeCtorInfo_33_33;
      MR_Word TypeInfo_34_34;
      MR_Word SymName_11;
      MR_Integer Arity_15;
      MR_Word TypeCtor_16;
      MR_Word ItemTypeDefnInfos_17;
      MR_Word _Kind_13;

      (env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__Type_8)) == (MR_Integer) 1);
      if ((env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__succeeded)
      {
        SymName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__Type_8, (MR_Integer) 0))));
        (env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeArgs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__Type_8, (MR_Integer) 1))));
        _Kind_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__Type_8, (MR_Integer) 2))));
        TypeCtorInfo_32_32 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        (env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__succeeded = mercury__set__insert_new_3_p_0(TypeCtorInfo_32_32, ((MR_Box) ((env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__Type_8)), SeenTypes0_10, &(env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__SeenTypes1_14);
        if ((env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__succeeded)
        {
          Arity_15 = mercury__list__length_1_f_0(TypeCtorInfo_32_32, (env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeArgs_12);
          TypeCtorInfo_33_33 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
          TypeInfo_34_34 = (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]);
          {
            TypeCtor_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeCtor_16, 0) = ((MR_Box) (SymName_11));
            MR_hl_field(MR_mktag(0), TypeCtor_16, 1) = ((MR_Box) (Arity_15));
          }
          (env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__succeeded = mercury__one_or_more_map__search_3_p_0(TypeCtorInfo_33_33, TypeInfo_34_34, (env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefnMap_6, ((MR_Box) (TypeCtor_16)), &ItemTypeDefnInfos_17);
          if ((env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__succeeded)
            mercury__one_or_more__member_2_p_1(TypeInfo_34_34, &(env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__conv0_ItemTypeDefnInfo_18, ItemTypeDefnInfos_17, parse_tree__comp_unit_interface__get_base_type_5_p_0_2, &env);
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__merge_tvarsets_and_subst_type_args_6_p_0(
  MR_Word TVarSet_7,
  MR_Word TypeArgs_8,
  MR_Word TVarSet0_9,
  MR_Word TypeParams0_10,
  MR_Word Type0_11,
  MR_Word * Type_12)
{
  {
    MR_Word Renaming_14;
    MR_Word TypeParams_15;
    MR_Word TSubst_16;
    MR_Word Type1_17;
    MR_Word _MergedTVarSet_13;

    parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet_7, TVarSet0_9, &_MergedTVarSet_13, &Renaming_14);
    parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_14, TypeParams0_10, &TypeParams_15);
    mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[10]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_15, TypeArgs_8, &TSubst_16);
    parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(Renaming_14, Type0_11, &Type1_17);
    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TSubst_16, Type1_17, Type_12);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_from_constraint_3_p_0(
  MR_Word Constraint_4,
  MR_Word STATE_VARIABLE_Modules_0_11,
  MR_Word * STATE_VARIABLE_Modules_12)
{
  {
    MR_Word ClassName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_4, (MR_Integer) 0))));
    MR_Word ArgTypes_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_4, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_Modules_15_15;

    if (((MR_tag((MR_Word) ClassName_6)) == (MR_Integer) 1))
    {
      MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ClassName_6, (MR_Integer) 0))));

      mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_8)), STATE_VARIABLE_Modules_0_11, &STATE_VARIABLE_Modules_15_15);
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.accumulate_modules_from_constraint\'/3", (MR_String) "unknown typeclass in constraint");
        return;
      }
    parse_tree__comp_unit_interface__accumulate_modules_from_types_3_p_0(ArgTypes_7, STATE_VARIABLE_Modules_15_15, STATE_VARIABLE_Modules_12);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_from_type_3_p_0(
  MR_Word Type_4,
  MR_Word STATE_VARIABLE_Modules_0_22,
  MR_Word * STATE_VARIABLE_Modules_23)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Type_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Modules_23 = STATE_VARIABLE_Modules_0_22;
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type_4, (MR_Integer) 0))));
          MR_Word ArgTypes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type_4, (MR_Integer) 1))));
          MR_Word ModuleName_12;
          MR_Word STATE_VARIABLE_Modules_26_26;

          mdbcomp__sym_name__det_sym_name_get_module_name_2_p_0(TypeName_9, &ModuleName_12);
          mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_12)), STATE_VARIABLE_Modules_0_22, &STATE_VARIABLE_Modules_26_26);
          parse_tree__comp_unit_interface__accumulate_modules_from_types_3_p_0(ArgTypes_10, STATE_VARIABLE_Modules_26_26, STATE_VARIABLE_Modules_23);
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_Modules_23 = STATE_VARIABLE_Modules_0_22;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgTypes_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_4, (MR_Integer) 1))));

              parse_tree__comp_unit_interface__accumulate_modules_from_types_3_p_0(ArgTypes_31, STATE_VARIABLE_Modules_0_22, STATE_VARIABLE_Modules_23);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgTypes_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_4, (MR_Integer) 2))));

              parse_tree__comp_unit_interface__accumulate_modules_from_types_3_p_0(ArgTypes_30, STATE_VARIABLE_Modules_0_22, STATE_VARIABLE_Modules_23);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgTypes_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_4, (MR_Integer) 2))));

              parse_tree__comp_unit_interface__accumulate_modules_from_types_3_p_0(ArgTypes_28, STATE_VARIABLE_Modules_0_22, STATE_VARIABLE_Modules_23);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word KindedType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_4, (MR_Integer) 1))));
              MR_Word next_value_of_Type_4 = KindedType_13;

              // direct tailcall eliminated
              ;
              Type_4 = next_value_of_Type_4;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_from_types_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Modules_0_2,
  MR_Word * STATE_VARIABLE_Modules_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Modules_3 = STATE_VARIABLE_Modules_0_2;
    else
    {
      MR_Word Type_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Types_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Modules_12_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Modules_0_2;

      parse_tree__comp_unit_interface__accumulate_modules_from_type_3_p_0(Type_7, STATE_VARIABLE_Modules_0_2, &STATE_VARIABLE_Modules_12_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Types_8;
      next_value_of_STATE_VARIABLE_Modules_0_2 = STATE_VARIABLE_Modules_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Modules_0_2 = next_value_of_STATE_VARIABLE_Modules_0_2;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__keep_promise_item_int_1_p_0(
  MR_Word ItemPromise_2)
{
  {
    MR_bool succeeded;
    MR_Word PromiseType_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPromise_2, (MR_Integer) 0))) & (MR_Integer) 3);

    switch (PromiseType_3) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 2:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 1:
        succeeded = MR_TRUE;
        break;
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__record_implicit_fim_lang_for_foreign_enum_imp_3_p_0(
  MR_Word ItemForeignEnum_4,
  MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_0_11,
  MR_Word * STATE_VARIABLE_ImpImplicitFIMLangs_12)
{
  {
    MR_Word Lang_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemForeignEnum_4, (MR_Integer) 0))) & (MR_Integer) 3);

    mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_6)), STATE_VARIABLE_ImpImplicitFIMLangs_0_11, STATE_VARIABLE_ImpImplicitFIMLangs_12);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__record_modules_needed_by_typeclass_imp_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Modules_12;

    parse_tree__comp_unit_interface__accumulate_modules_from_constraint_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Modules_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Modules_12));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__record_modules_needed_by_typeclass_imp_3_p_0(
  MR_Word ItemTypeClass_4,
  MR_Word STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_7,
  MR_Word * STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_8)
{
  {
    MR_Word Constraints_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_4, (MR_Integer) 2))));
    MR_Box conv1_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_8;

    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[5]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[27]), Constraints_6, ((MR_Box) (STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_7)), &conv1_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_8);
    *STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_8 = ((MR_Word) (conv1_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_8));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__record_type_defn_imp_3_p_0(
  MR_Word ItemTypeDefn_4,
  MR_Word STATE_VARIABLE_ImpTypesMap_0_20,
  MR_Word * STATE_VARIABLE_ImpTypesMap_21)
{
  {
    MR_Word Name_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_4, (MR_Integer) 0))));
    MR_Word TypeParams_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_4, (MR_Integer) 1))));
    MR_Word TypeDefn_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_4, (MR_Integer) 2))));
    MR_Word TypeCtor_12;
    MR_Word ItemTypeDefn1_15;
    MR_Integer Var_22;

    Var_22 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[10]), TypeParams_7);
    {
      TypeCtor_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_12, 0) = ((MR_Box) (Name_6));
      MR_hl_field(MR_mktag(0), TypeCtor_12, 1) = ((MR_Box) (Var_22));
    }
    switch (MR_tag((MR_Word) TypeDefn_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ItemTypeDefn1_15 = ItemTypeDefn_4;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_4, (MR_Integer) 0))));
          MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_4, (MR_Integer) 1))));
          MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_4, (MR_Integer) 3))));
          MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_4, (MR_Integer) 4))));
          MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_4, (MR_Integer) 5))));

          {
            ItemTypeDefn1_15 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ItemTypeDefn1_15, 0) = ((MR_Box) (Var_25));
            MR_hl_field(MR_mktag(0), ItemTypeDefn1_15, 1) = ((MR_Box) (Var_26));
            MR_hl_field(MR_mktag(0), ItemTypeDefn1_15, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__comp_unit_interface_scalar_common_1[13])));
            MR_hl_field(MR_mktag(0), ItemTypeDefn1_15, 3) = ((MR_Box) (Var_28));
            MR_hl_field(MR_mktag(0), ItemTypeDefn1_15, 4) = ((MR_Box) (Var_29));
            MR_hl_field(MR_mktag(0), ItemTypeDefn1_15, 5) = ((MR_Box) (Var_30));
          }
        }
        break;
      case (MR_Integer) 2:
        ItemTypeDefn1_15 = ItemTypeDefn_4;
        break;
      case (MR_Integer) 3:
        ItemTypeDefn1_15 = ItemTypeDefn_4;
        break;
    }
    mercury__one_or_more_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), ((MR_Box) (TypeCtor_12)), ((MR_Box) (ItemTypeDefn1_15)), STATE_VARIABLE_ImpTypesMap_0_20, STATE_VARIABLE_ImpTypesMap_21);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__record_type_defn_int_5_p_0(
  MR_Word ItemTypeDefn_6,
  MR_Word STATE_VARIABLE_IntImplicitFIMLangs_0_25,
  MR_Word * STATE_VARIABLE_IntImplicitFIMLangs_26,
  MR_Word STATE_VARIABLE_IntTypesMap_0_27,
  MR_Word * STATE_VARIABLE_IntTypesMap_28)
{
  {
    MR_Word Name_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_6, (MR_Integer) 0))));
    MR_Word TypeParams_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_6, (MR_Integer) 1))));
    MR_Word TypeDefn_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_6, (MR_Integer) 2))));
    MR_Word TypeCtor_15;
    MR_Integer Var_29;

    Var_29 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[10]), TypeParams_10);
    {
      TypeCtor_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_15, 0) = ((MR_Box) (Name_9));
      MR_hl_field(MR_mktag(0), TypeCtor_15, 1) = ((MR_Box) (Var_29));
    }
    switch (MR_tag((MR_Word) TypeDefn_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_IntImplicitFIMLangs_26 = STATE_VARIABLE_IntImplicitFIMLangs_0_25;
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_IntImplicitFIMLangs_26 = STATE_VARIABLE_IntImplicitFIMLangs_0_25;
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_IntImplicitFIMLangs_26 = STATE_VARIABLE_IntImplicitFIMLangs_0_25;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_11, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_IntImplicitFIMLangs_26 = STATE_VARIABLE_IntImplicitFIMLangs_0_25;
            break;
          case (MR_Integer) 1:
            {
              MR_Word DetailsForeign_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_11, (MR_Integer) 1))));
              MR_Word ForeignType_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_16, (MR_Integer) 0))));
              MR_Word Lang_20;

              Lang_20 = parse_tree__prog_foreign__foreign_type_language_1_f_0(ForeignType_17);
              mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_20)), STATE_VARIABLE_IntImplicitFIMLangs_0_25, STATE_VARIABLE_IntImplicitFIMLangs_26);
            }
            break;
        }
        break;
    }
    mercury__one_or_more_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), ((MR_Box) (TypeCtor_15)), ((MR_Box) (ItemTypeDefn_6)), STATE_VARIABLE_IntTypesMap_0_27, STATE_VARIABLE_IntTypesMap_28);
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__make_imports_into_uses_maybe_implicit_4_p_0(
  MR_Word ImpNeededModules_5,
  MR_Word ModuleName_6,
  MR_Word ImportUse0_7,
  MR_Word * ImportUse_8)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) ImportUse0_7)) == (MR_Integer) 0))
    {
      MR_Word Explicit0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImportUse0_7, (MR_Integer) 0))));
      MR_Word Explicit_10;

      switch (MR_tag((MR_Word) Explicit0_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word IntContext_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Explicit0_9, (MR_Integer) 0))));

            {
              Explicit_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Explicit_10, 0) = ((MR_Box) (IntContext_25));
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 1:
          {
            Explicit_10 = Explicit0_9;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ImpContext_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Explicit0_9, (MR_Integer) 0))));

            succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpNeededModules_5, ((MR_Box) (ModuleName_6)));
            if (succeeded)
            {
              {
                Explicit_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Explicit_10, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Explicit_10, 1) = ((MR_Box) (ImpContext_27));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Explicit0_9, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpNeededModules_5, ((MR_Box) (ModuleName_6)));
                if (succeeded)
                {
                  Explicit_10 = Explicit0_9;
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word IntContext_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Explicit0_9, (MR_Integer) 1))));

                {
                  Explicit_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Explicit_10, 0) = ((MR_Box) (IntContext_34));
                }
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
      }
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *ImportUse_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Explicit_10));
        }
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word Implicit0_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ImportUse0_7, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word MaybeExplicit0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImportUse0_7, (MR_Integer) 1))));
      MR_Word Implicit_13;
      MR_Word MaybeExplicit_14;

      switch (Implicit0_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          Implicit_13 = (MR_Integer) 2;
          break;
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          Implicit_13 = (MR_Integer) 1;
          break;
      }
      if ((MaybeExplicit0_12 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MaybeExplicit_14 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Explicit0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeExplicit0_12, (MR_Integer) 0))));
        MR_Word Explicit_16;

        switch (MR_tag((MR_Word) Explicit0_15)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word IntContext_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Explicit0_15, (MR_Integer) 0))));

              {
                Explicit_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Explicit_16, 0) = ((MR_Box) (IntContext_39));
              }
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              Explicit_16 = Explicit0_15;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ImpContext_41 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Explicit0_15, (MR_Integer) 0))));

              succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpNeededModules_5, ((MR_Box) (ModuleName_6)));
              if (succeeded)
              {
                {
                  Explicit_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Explicit_16, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Explicit_16, 1) = ((MR_Box) (ImpContext_41));
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Explicit0_15, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpNeededModules_5, ((MR_Box) (ModuleName_6)));
                  if (succeeded)
                  {
                    Explicit_16 = Explicit0_15;
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word IntContext_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Explicit0_15, (MR_Integer) 1))));

                  {
                    Explicit_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Explicit_16, 0) = ((MR_Box) (IntContext_48));
                  }
                  succeeded = MR_TRUE;
                }
                break;
            }
            break;
        }
        if (succeeded)
        {
          {
            MaybeExplicit_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeExplicit_14, 0) = ((MR_Box) (Explicit_16));
          }
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *ImportUse_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = (MR_Box) ((MR_Unsigned) (Implicit_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MaybeExplicit_14));
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__add_self_fim_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Lang_6,
  MR_Word STATE_VARIABLE_FIMSpecs_0_9,
  MR_Word * STATE_VARIABLE_FIMSpecs_10)
{
  {
    MR_Word FIMSpec_8;

    {
      FIMSpec_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FIMSpec_8, 0) = (MR_Box) ((MR_Unsigned) (Lang_6));
      MR_hl_field(MR_mktag(0), FIMSpec_8, 1) = ((MR_Box) (ModuleName_5));
    }
    mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ((MR_Box) (FIMSpec_8)), STATE_VARIABLE_FIMSpecs_0_9, STATE_VARIABLE_FIMSpecs_10);
  }
}

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_typeclass_abstract_for_int3_1_f_0(
  MR_Word OrigTypeClass_3)
{
  {
    MR_Word TypeClass_4;
    MR_Word ClassName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigTypeClass_3, (MR_Integer) 0))));
    MR_Word ParamsTVars_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigTypeClass_3, (MR_Integer) 1))));
    MR_Word TVarSet_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigTypeClass_3, (MR_Integer) 5))));
    MR_Word Context_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigTypeClass_3, (MR_Integer) 6))));
    MR_Word SeqNum_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigTypeClass_3, (MR_Integer) 7))));

    {
      TypeClass_4 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeClass_4, 0) = ((MR_Box) (ClassName_5));
      MR_hl_field(MR_mktag(0), TypeClass_4, 1) = ((MR_Box) (ParamsTVars_6));
      MR_hl_field(MR_mktag(0), TypeClass_4, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), TypeClass_4, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), TypeClass_4, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), TypeClass_4, 5) = ((MR_Box) (TVarSet_10));
      MR_hl_field(MR_mktag(0), TypeClass_4, 6) = ((MR_Box) (Context_11));
      MR_hl_field(MR_mktag(0), TypeClass_4, 7) = ((MR_Box) (SeqNum_12));
    }
    return TypeClass_4;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__make_type_defn_abstract_type_for_int3_2_p_0(
  MR_Word ItemTypeDefn0_3,
  MR_Word * ItemTypeDefn_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeDefn0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_3, (MR_Integer) 2))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_3, (MR_Integer) 0))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_3, (MR_Integer) 1))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_3, (MR_Integer) 3))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_3, (MR_Integer) 4))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_3, (MR_Integer) 5))));

    switch (MR_tag((MR_Word) TypeDefn0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DetailsDu_6 = (MR_Word) ((MR_Word) (TypeDefn0_5));
          MR_Word DetailsAbstract_7;
          MR_Word Var_16;
          MR_Word MaybeSuperType_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_6, (MR_Integer) 0))));
          MR_Word Ctors_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_6, (MR_Integer) 1))));
          MR_Word MaybeCanonical_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_6, (MR_Integer) 2))));

          if ((MaybeSuperType_51 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Integer NumFunctors_55;

            succeeded = parse_tree__prog_type__non_sub_du_type_is_enum_2_p_0(DetailsDu_6, &NumFunctors_55);
            if (succeeded)
            {
              MR_Integer NumBits_56;

              parse_tree__prog_type__num_bits_needed_for_n_dense_values_2_p_0(NumFunctors_55, &NumBits_56);
              {
                DetailsAbstract_7 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), DetailsAbstract_7, 0) = ((MR_Box) (NumBits_56));
              }
            }
            else
            {
              succeeded = parse_tree__prog_type__non_sub_du_type_is_notag_2_p_0(Ctors_52, MaybeCanonical_53);
              if (succeeded)
                DetailsAbstract_7 = (MR_Word) ((MR_Unsigned) 8U);
              else
              {
                succeeded = parse_tree__prog_type__non_sub_du_type_is_dummy_1_p_0(DetailsDu_6);
                if (succeeded)
                  DetailsAbstract_7 = (MR_Word) ((MR_Unsigned) 4U);
                else
                  DetailsAbstract_7 = (MR_Word) ((MR_Unsigned) 0U);
              }
            }
          }
          else
          {
            MR_Word SuperType_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSuperType_51, (MR_Integer) 0))));
            MR_Word SuperTypeCtor_58;

            parse_tree__prog_type__type_to_ctor_det_2_p_0(SuperType_57, &SuperTypeCtor_58);
            DetailsAbstract_7 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (SuperTypeCtor_58)));
          }
          {
            Var_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_16, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_16, 1) = ((MR_Box) (DetailsAbstract_7));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            *ItemTypeDefn_4 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_19));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_20));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_16));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_21));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_22));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_23));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          *ItemTypeDefn_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_19));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_20));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__comp_unit_interface_scalar_common_1[13])));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_21));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_22));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_23));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          *ItemTypeDefn_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_19));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_20));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__comp_unit_interface_scalar_common_1[12])));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_21));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_22));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_23));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn0_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *ItemTypeDefn_4 = ItemTypeDefn0_3;
            break;
          case (MR_Integer) 1:
            {
              MR_Word DetailsForeign0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn0_5, (MR_Integer) 1))));
              MR_Word DetailsForeign_12;
              MR_Word TypeDefn_13;
              MR_Word MaybeCanonical0_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_11, (MR_Integer) 1))));
              MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_11, (MR_Integer) 0))));
              MR_Word Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_11, (MR_Integer) 2))));

              if ((MaybeCanonical0_61 == (MR_Word) ((MR_Unsigned) 0U)))
                DetailsForeign_12 = DetailsForeign0_11;
              else
                {
                  DetailsForeign_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), DetailsForeign_12, 0) = ((MR_Box) (Var_66));
                  MR_hl_field(MR_mktag(0), DetailsForeign_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__comp_unit_interface_scalar_common_4[0])));
                  MR_hl_field(MR_mktag(0), DetailsForeign_12, 2) = ((MR_Box) (Var_67));
                }
              {
                TypeDefn_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TypeDefn_13, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), TypeDefn_13, 1) = ((MR_Box) (DetailsForeign_12));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                *ItemTypeDefn_4 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_19));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_20));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypeDefn_13));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_21));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_22));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_23));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__keep_only_one_abstract_type_defn_2_p_0(
  MR_Word AllDefns0_3,
  MR_Word * AllDefns_4)
{
  {
    MR_Word SolverAbs0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns0_3, (MR_Integer) 0))));
    MR_Word SolverNonAbs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns0_3, (MR_Integer) 1))));
    MR_Word StdAbs0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns0_3, (MR_Integer) 2))));
    MR_Word StdEqv_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns0_3, (MR_Integer) 3))));
    MR_Word StdDu_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns0_3, (MR_Integer) 4))));
    MR_Word StdForeign_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns0_3, (MR_Integer) 5))));
    MR_Word SolverAbs_13;
    MR_Word StdAbs_16;

    if ((SolverAbs0_5 == (MR_Word) ((MR_Unsigned) 0U)))
      SolverAbs_13 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word HeadSolverAbs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SolverAbs0_5, (MR_Integer) 0))));

      {
        SolverAbs_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SolverAbs_13, 0) = ((MR_Box) (HeadSolverAbs_11));
        MR_hl_field(MR_mktag(1), SolverAbs_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    if ((StdAbs0_7 == (MR_Word) ((MR_Unsigned) 0U)))
      StdAbs_16 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word HeadStdAbs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StdAbs0_7, (MR_Integer) 0))));

      {
        StdAbs_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), StdAbs_16, 0) = ((MR_Box) (HeadStdAbs_14));
        MR_hl_field(MR_mktag(1), StdAbs_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *AllDefns_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SolverAbs_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (SolverNonAbs_6));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (StdAbs_16));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (StdEqv_8));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (StdDu_9));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (StdForeign_10));
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__acc_int_imports_6_p_0(
  MR_Word ModuleName_7,
  MR_Word ImportUseInfo_8,
  MR_Word STATE_VARIABLE_ContextMap_0_20,
  MR_Word * STATE_VARIABLE_ContextMap_21,
  MR_Word STATE_VARIABLE_ImportUseMap_0_22,
  MR_Word * STATE_VARIABLE_ImportUseMap_23)
{
  if (((MR_tag((MR_Word) ImportUseInfo_8)) == (MR_Integer) 0))
  {
    MR_Word SectionImportAndOrUse_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImportUseInfo_8, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) SectionImportAndOrUse_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionImportAndOrUse_13, (MR_Integer) 0))));

          mercury__one_or_more_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (ModuleName_7)), ((MR_Box) (Context_14)), STATE_VARIABLE_ContextMap_0_20, STATE_VARIABLE_ContextMap_21);
          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), ((MR_Box) (ModuleName_7)), ((MR_Box) (ImportUseInfo_8)), STATE_VARIABLE_ImportUseMap_0_22, STATE_VARIABLE_ImportUseMap_23);
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_ContextMap_21 = STATE_VARIABLE_ContextMap_0_20;
          *STATE_VARIABLE_ImportUseMap_23 = STATE_VARIABLE_ImportUseMap_0_22;
        }
        break;
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_ContextMap_21 = STATE_VARIABLE_ContextMap_0_20;
          *STATE_VARIABLE_ImportUseMap_23 = STATE_VARIABLE_ImportUseMap_0_22;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), SectionImportAndOrUse_13, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_ContextMap_21 = STATE_VARIABLE_ContextMap_0_20;
              *STATE_VARIABLE_ImportUseMap_23 = STATE_VARIABLE_ImportUseMap_0_22;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_ContextMap_21 = STATE_VARIABLE_ContextMap_0_20;
              *STATE_VARIABLE_ImportUseMap_23 = STATE_VARIABLE_ImportUseMap_0_22;
            }
            break;
        }
        break;
    }
  }
  else
  {
    *STATE_VARIABLE_ContextMap_21 = STATE_VARIABLE_ContextMap_0_20;
    *STATE_VARIABLE_ImportUseMap_23 = STATE_VARIABLE_ImportUseMap_0_22;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__acc_int_includes_6_p_0(
  MR_Word ModuleName_7,
  MR_Word InclInfo_8,
  MR_Word STATE_VARIABLE_ContextMap_0_13,
  MR_Word * STATE_VARIABLE_ContextMap_14,
  MR_Word STATE_VARIABLE_IncludeMap_0_15,
  MR_Word * STATE_VARIABLE_IncludeMap_16)
{
  {
    MR_Word Section_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), InclInfo_8, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InclInfo_8, (MR_Integer) 1))));

    switch (Section_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_ContextMap_14 = STATE_VARIABLE_ContextMap_0_13;
          *STATE_VARIABLE_IncludeMap_16 = STATE_VARIABLE_IncludeMap_0_15;
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__one_or_more_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (ModuleName_7)), ((MR_Box) (Context_12)), STATE_VARIABLE_ContextMap_0_13, STATE_VARIABLE_ContextMap_14);
          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), ((MR_Box) (ModuleName_7)), ((MR_Box) (InclInfo_8)), STATE_VARIABLE_IncludeMap_0_15, STATE_VARIABLE_IncludeMap_16);
        }
        break;
    }
  }
}

MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_foreign_import_2_f_0(
  MR_Word ModuleName_4,
  MR_Word Lang_5)
{
  {
    MR_Word FIM_6;
    MR_Word Var_7;

    Var_7 = mercury__term__context_init_0_f_0();
    {
      FIM_6 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FIM_6, 0) = (MR_Box) ((MR_Unsigned) (Lang_5));
      MR_hl_field(MR_mktag(0), FIM_6, 1) = ((MR_Box) (ModuleName_4));
      MR_hl_field(MR_mktag(0), FIM_6, 2) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), FIM_6, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return FIM_6;
  }
}

void MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_6_p_0(
  MR_Word Globals_7,
  MR_Word AugCompUnit_8,
  MR_Word * ParseTreeInt1_9,
  MR_Word * ParseTreeInt2_10,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  {
    MR_Word IntImportUseMap_12;
    MR_Word IntExplicitFIMSpecs_13;
    MR_Word ImpExplicitFIMSpecs_14;
    MR_Word IntTypeDefns_15;
    MR_Word IntInstDefns_16;
    MR_Word IntModeDefns_17;
    MR_Word IntTypeClasses_18;
    MR_Word IntInstances_19;
    MR_Word ImpTypeDefns_20;
    MR_Word TypeCtorRepnMap_21;

    parse_tree__comp_unit_interface__generate_interface_int1_15_p_0(Globals_7, AugCompUnit_8, &IntImportUseMap_12, &IntExplicitFIMSpecs_13, &ImpExplicitFIMSpecs_14, &IntTypeDefns_15, &IntInstDefns_16, &IntModeDefns_17, &IntTypeClasses_18, &IntInstances_19, &ImpTypeDefns_20, &TypeCtorRepnMap_21, ParseTreeInt1_9, STATE_VARIABLE_Specs_0_22, STATE_VARIABLE_Specs_23);
    parse_tree__comp_unit_interface__generate_interface_int2_12_p_0(AugCompUnit_8, IntImportUseMap_12, IntExplicitFIMSpecs_13, ImpExplicitFIMSpecs_14, IntTypeDefns_15, IntInstDefns_16, IntModeDefns_17, IntTypeClasses_18, IntInstances_19, ImpTypeDefns_20, TypeCtorRepnMap_21, ParseTreeInt2_10);
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_12_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__comp_unit_interface__fim_spec_is_for_needed_language_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_12_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_FIMSpecs_10;

    parse_tree__comp_unit_interface__add_self_fim_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_FIMSpecs_10);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_FIMSpecs_10));
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__comp_unit_interface__fim_spec_is_for_needed_language_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ShortImportUseMap_21;

    parse_tree__comp_unit_interface__make_imports_into_uses_int_only_maybe_implicit_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_ShortImportUseMap_21);
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_ShortImportUseMap_21));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_IntInclMap_11;

    parse_tree__comp_unit_interface__add_only_int_include_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_IntInclMap_11);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_IntInclMap_11));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_12_p_0(
  MR_Word AugCompUnit_13,
  MR_Word IntImportUseMap_14,
  MR_Word IntExplicitFIMSpecs_15,
  MR_Word ImpExplicitFIMSpecs_16,
  MR_Word IntTypeDefns_17,
  MR_Word IntInstDefns_18,
  MR_Word IntModeDefns_19,
  MR_Word IntTypeClasses_20,
  MR_Word IntInstances_21,
  MR_Word ImpTypeDefns_22,
  MR_Word TypeCtorRepnMap_23,
  MR_Word * ParseTreeInt2_24)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_13, (MR_Integer) 0))));
    MR_Word ModuleNameContext_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_13, (MR_Integer) 1))));
    MR_Word ParseTreeModuleSrc_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_13, (MR_Integer) 3))));
    MR_Word IntInclMap_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_28, (MR_Integer) 2))));
    MR_Word InclMap_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_28, (MR_Integer) 4))));
    MR_Word ShortInclMap_38;
    MR_Word UnqualSymNames_39;
    MR_Word UsedModuleNames_40;
    MR_Word ShortIntTypeDefnsCord_41;
    MR_Word ShortIntImplicitFIMLangs_42;
    MR_Word ShortIntTypeClassesCord_43;
    MR_Word ShortIntInstancesCord_44;
    MR_Word ShortIntTypeDefns_45;
    MR_Word ShortIntTypeClasses_48;
    MR_Word ShortIntInstances_49;
    MR_Word ShortImpImplicitFIMLangs_50;
    MR_Word ShortIntUseMap_51;
    MR_Word ImportUseMap_52;
    MR_Word ShortImportUseMap_53;
    MR_Word ShortIntExplicitFIMSpecs_54;
    MR_Word ShortIntFIMSpecs_55;
    MR_Word ExplicitFIMSpecs_56;
    MR_Word ShortImpExplicitFIMSpecs_57;
    MR_Word ShortImpFIMSpecs0_58;
    MR_Word ShortImpFIMSpecs_59;
    MR_Word ShortIntTypeDefnMap_62;
    MR_Word ShortIntInstDefnMap_63;
    MR_Word ShortIntModeDefnMap_64;
    MR_Word ShortImpTypeDefnMap_65;
    MR_Word Var_67;
    MR_Word STATE_VARIABLE_UsedModuleNames_69_69;
    MR_Word STATE_VARIABLE_UnqualSymNames_70_70;
    MR_Word STATE_VARIABLE_UsedModuleNames_71_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word STATE_VARIABLE_UnqualSymNames_74_74;
    MR_Word STATE_VARIABLE_UsedModuleNames_75_75;
    MR_Word STATE_VARIABLE_UnqualSymNames_76_76;
    MR_Word STATE_VARIABLE_UsedModuleNames_77_77;
    MR_Word STATE_VARIABLE_UnqualSymNames_78_78;
    MR_Word STATE_VARIABLE_UsedModuleNames_79_79;
    MR_Word Var_80;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Box conv1_ShortInclMap_38;
    MR_Box conv3_ShortImportUseMap_53;
    MR_Box conv5_ShortIntFIMSpecs_55;
    MR_Box conv6_ShortImpFIMSpecs0_58;

    Var_67 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[1]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[26]), InclMap_37, ((MR_Box) (Var_67)), &conv1_ShortInclMap_38);
    ShortInclMap_38 = ((MR_Word) (conv1_ShortInclMap_38));
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_UsedModuleNames_69_69);
    Var_72 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]));
    Var_73 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    parse_tree__comp_unit_interface__get_int2_items_from_int1_int_type_defn_9_p_0(IntTypeDefns_17, (MR_Integer) 0, &STATE_VARIABLE_UnqualSymNames_70_70, STATE_VARIABLE_UsedModuleNames_69_69, &STATE_VARIABLE_UsedModuleNames_71_71, Var_72, &ShortIntTypeDefnsCord_41, Var_73, &ShortIntImplicitFIMLangs_42);
    parse_tree__comp_unit_interface__get_int2_items_from_int1_int_inst_defn_5_p_0(IntInstDefns_18, STATE_VARIABLE_UnqualSymNames_70_70, &STATE_VARIABLE_UnqualSymNames_74_74, STATE_VARIABLE_UsedModuleNames_71_71, &STATE_VARIABLE_UsedModuleNames_75_75);
    parse_tree__comp_unit_interface__get_int2_items_from_int1_int_mode_defn_5_p_0(IntModeDefns_19, STATE_VARIABLE_UnqualSymNames_74_74, &STATE_VARIABLE_UnqualSymNames_76_76, STATE_VARIABLE_UsedModuleNames_75_75, &STATE_VARIABLE_UsedModuleNames_77_77);
    Var_80 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0));
    parse_tree__comp_unit_interface__get_int2_items_from_int1_int_typeclass_7_p_0(IntTypeClasses_20, STATE_VARIABLE_UnqualSymNames_76_76, &STATE_VARIABLE_UnqualSymNames_78_78, STATE_VARIABLE_UsedModuleNames_77_77, &STATE_VARIABLE_UsedModuleNames_79_79, Var_80, &ShortIntTypeClassesCord_43);
    Var_83 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0));
    parse_tree__comp_unit_interface__get_int2_items_from_int1_int_instance_7_p_0(IntInstances_21, STATE_VARIABLE_UnqualSymNames_78_78, &UnqualSymNames_39, STATE_VARIABLE_UsedModuleNames_79_79, &UsedModuleNames_40, Var_83, &ShortIntInstancesCord_44);
    ShortIntTypeDefns_45 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), ShortIntTypeDefnsCord_41);
    ShortIntTypeClasses_48 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ShortIntTypeClassesCord_43);
    ShortIntInstances_49 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ShortIntInstancesCord_44);
    Var_84 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    parse_tree__comp_unit_interface__get_int2_items_from_int1_imp_types_3_p_0(ImpTypeDefns_22, Var_84, &ShortImpImplicitFIMLangs_50);
    switch (UnqualSymNames_39) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__one_or_more_map__select_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntImportUseMap_14, UsedModuleNames_40, &ShortIntUseMap_51);
        break;
      case (MR_Integer) 1:
        ShortIntUseMap_51 = IntImportUseMap_14;
        break;
    }
    ImportUseMap_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_28, (MR_Integer) 9))));
    {
      Var_85 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[3]));
      MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_12_p_0_2));
      MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (UnqualSymNames_39));
      MR_hl_field(MR_mktag(0), Var_85, 4) = ((MR_Box) (UsedModuleNames_40));
    }
    Var_86 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[2]), Var_85, ImportUseMap_52, ((MR_Box) (Var_86)), &conv3_ShortImportUseMap_53);
    ShortImportUseMap_53 = ((MR_Word) (conv3_ShortImportUseMap_53));
    {
      Var_87 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[6]));
      MR_hl_field(MR_mktag(0), Var_87, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_12_p_0_3));
      MR_hl_field(MR_mktag(0), Var_87, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_87, 3) = ((MR_Box) (ShortIntImplicitFIMLangs_42));
    }
    mercury__set__filter_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_87, IntExplicitFIMSpecs_15, &ShortIntExplicitFIMSpecs_54);
    {
      Var_88 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_88, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_11[1]));
      MR_hl_field(MR_mktag(0), Var_88, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_12_p_0_4));
      MR_hl_field(MR_mktag(0), Var_88, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_88, 3) = ((MR_Box) (ModuleName_25));
    }
    mercury__set__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[8]), Var_88, ShortIntImplicitFIMLangs_42, ((MR_Box) (ShortIntExplicitFIMSpecs_54)), &conv5_ShortIntFIMSpecs_55);
    ShortIntFIMSpecs_55 = ((MR_Word) (conv5_ShortIntFIMSpecs_55));
    mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), IntExplicitFIMSpecs_15, ImpExplicitFIMSpecs_16, &ExplicitFIMSpecs_56);
    {
      Var_89 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_89, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[6]));
      MR_hl_field(MR_mktag(0), Var_89, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_12_p_0_5));
      MR_hl_field(MR_mktag(0), Var_89, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_89, 3) = ((MR_Box) (ShortImpImplicitFIMLangs_50));
    }
    mercury__set__filter_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_89, ExplicitFIMSpecs_56, &ShortImpExplicitFIMSpecs_57);
    mercury__set__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[8]), Var_88, ShortImpImplicitFIMLangs_50, ((MR_Box) (ShortImpExplicitFIMSpecs_57)), &conv6_ShortImpFIMSpecs0_58);
    ShortImpFIMSpecs0_58 = ((MR_Word) (conv6_ShortImpFIMSpecs0_58));
    mercury__set__difference_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ShortImpFIMSpecs0_58, ShortIntFIMSpecs_55, &ShortImpFIMSpecs_59);
    ShortIntTypeDefnMap_62 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(ShortIntTypeDefns_45);
    ShortIntInstDefnMap_63 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns_18);
    ShortIntModeDefnMap_64 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns_19);
    ShortImpTypeDefnMap_65 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(ImpTypeDefns_22);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt2_24 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_25));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_26));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (IntInclMap_36));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ShortInclMap_38));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ShortIntUseMap_51));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ShortImportUseMap_53));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ShortIntFIMSpecs_55));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ShortImpFIMSpecs_59));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ShortIntTypeDefnMap_62));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ShortIntInstDefnMap_63));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ShortIntModeDefnMap_64));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ShortIntTypeClasses_48));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ShortIntInstances_49));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (TypeCtorRepnMap_23));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (ShortImpTypeDefnMap_65));
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_int2_items_from_int1_imp_types_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_0_2,
  MR_Word * STATE_VARIABLE_ImpImplicitFIMLangs_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ImpImplicitFIMLangs_3 = STATE_VARIABLE_ImpImplicitFIMLangs_0_2;
    else
    {
      MR_Word ImpTypeDefn_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ImpTypeDefns_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TypeDefn_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpTypeDefn_7, (MR_Integer) 2))));
      MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_18_18;
      MR_Word DetailsForeign_11;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImpImplicitFIMLangs_0_2;

      succeeded = ((((MR_tag((MR_Word) TypeDefn_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_10, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        DetailsForeign_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_10, (MR_Integer) 1))));
        {
          MR_Word ForeignType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_11, (MR_Integer) 0))));
          MR_Word Lang_15;

          Lang_15 = parse_tree__prog_foreign__foreign_type_language_1_f_0(ForeignType_12);
          mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_15)), STATE_VARIABLE_ImpImplicitFIMLangs_0_2, &STATE_VARIABLE_ImpImplicitFIMLangs_18_18);
        }
      }
      else
        STATE_VARIABLE_ImpImplicitFIMLangs_18_18 = STATE_VARIABLE_ImpImplicitFIMLangs_0_2;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ImpTypeDefns_8;
      next_value_of_STATE_VARIABLE_ImpImplicitFIMLangs_0_2 = STATE_VARIABLE_ImpImplicitFIMLangs_18_18;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ImpImplicitFIMLangs_0_2 = next_value_of_STATE_VARIABLE_ImpImplicitFIMLangs_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_int2_items_from_int1_int_instance_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_2,
  MR_Word * STATE_VARIABLE_MaybeUnqual_3,
  MR_Word STATE_VARIABLE_ModuleNames_0_4,
  MR_Word * STATE_VARIABLE_ModuleNames_5,
  MR_Word STATE_VARIABLE_IntInstancesCord_0_6,
  MR_Word * STATE_VARIABLE_IntInstancesCord_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_IntInstancesCord_7 = STATE_VARIABLE_IntInstancesCord_0_6;
      *STATE_VARIABLE_ModuleNames_5 = STATE_VARIABLE_ModuleNames_0_4;
      *STATE_VARIABLE_MaybeUnqual_3 = STATE_VARIABLE_MaybeUnqual_0_2;
    }
    else
    {
      MR_Word InstanceInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word InstanceInfos_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ClassSymName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo_17, (MR_Integer) 0))));
      MR_Word ArgTypes_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo_17, (MR_Integer) 1))));
      MR_Word OrigArgTypes_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo_17, (MR_Integer) 2))));
      MR_Word ClassConstraints_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo_17, (MR_Integer) 3))));
      MR_Word TVarSet_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo_17, (MR_Integer) 5))));
      MR_Word ContainingModuleName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo_17, (MR_Integer) 6))));
      MR_Word Context_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo_17, (MR_Integer) 7))));
      MR_Word SeqNum_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo_17, (MR_Integer) 8))));
      MR_Word AbstractInstanceInfo_32;
      MR_Word STATE_VARIABLE_MaybeUnqual_39_39;
      MR_Word STATE_VARIABLE_ModuleNames_40_40;
      MR_Word STATE_VARIABLE_MaybeUnqual_41_41;
      MR_Word STATE_VARIABLE_ModuleNames_42_42;
      MR_Word STATE_VARIABLE_MaybeUnqual_43_43;
      MR_Word STATE_VARIABLE_ModuleNames_44_44;
      MR_Word STATE_VARIABLE_MaybeUnqual_45_45;
      MR_Word STATE_VARIABLE_ModuleNames_46_46;
      MR_Word STATE_VARIABLE_IntInstancesCord_47_47;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_MaybeUnqual_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleNames_0_4;
      MR_Word next_value_of_STATE_VARIABLE_IntInstancesCord_0_6;

      if (((MR_tag((MR_Word) ClassSymName_22)) == (MR_Integer) 1))
      {
        MR_Word ModuleName_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ClassSymName_22, (MR_Integer) 0))));

        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_60)), STATE_VARIABLE_ModuleNames_0_4, &STATE_VARIABLE_ModuleNames_40_40);
        STATE_VARIABLE_MaybeUnqual_39_39 = STATE_VARIABLE_MaybeUnqual_0_2;
      }
      else
      {
        STATE_VARIABLE_MaybeUnqual_39_39 = (MR_Integer) 1;
        STATE_VARIABLE_ModuleNames_40_40 = STATE_VARIABLE_ModuleNames_0_4;
      }
      parse_tree__comp_unit_interface__accumulate_modules_in_types_5_p_0(ArgTypes_23, STATE_VARIABLE_MaybeUnqual_39_39, &STATE_VARIABLE_MaybeUnqual_41_41, STATE_VARIABLE_ModuleNames_40_40, &STATE_VARIABLE_ModuleNames_42_42);
      parse_tree__comp_unit_interface__accumulate_modules_in_types_5_p_0(OrigArgTypes_24, STATE_VARIABLE_MaybeUnqual_41_41, &STATE_VARIABLE_MaybeUnqual_43_43, STATE_VARIABLE_ModuleNames_42_42, &STATE_VARIABLE_ModuleNames_44_44);
      parse_tree__comp_unit_interface__accumulate_modules_in_constraints_5_p_0(ClassConstraints_25, STATE_VARIABLE_MaybeUnqual_43_43, &STATE_VARIABLE_MaybeUnqual_45_45, STATE_VARIABLE_ModuleNames_44_44, &STATE_VARIABLE_ModuleNames_46_46);
      {
        AbstractInstanceInfo_32 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), AbstractInstanceInfo_32, 0) = ((MR_Box) (ClassSymName_22));
        MR_hl_field(MR_mktag(0), AbstractInstanceInfo_32, 1) = ((MR_Box) (ArgTypes_23));
        MR_hl_field(MR_mktag(0), AbstractInstanceInfo_32, 2) = ((MR_Box) (OrigArgTypes_24));
        MR_hl_field(MR_mktag(0), AbstractInstanceInfo_32, 3) = ((MR_Box) (ClassConstraints_25));
        MR_hl_field(MR_mktag(0), AbstractInstanceInfo_32, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), AbstractInstanceInfo_32, 5) = ((MR_Box) (TVarSet_27));
        MR_hl_field(MR_mktag(0), AbstractInstanceInfo_32, 6) = ((MR_Box) (ContainingModuleName_28));
        MR_hl_field(MR_mktag(0), AbstractInstanceInfo_32, 7) = ((MR_Box) (Context_29));
        MR_hl_field(MR_mktag(0), AbstractInstanceInfo_32, 8) = ((MR_Box) (SeqNum_30));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ((MR_Box) (AbstractInstanceInfo_32)), STATE_VARIABLE_IntInstancesCord_0_6, &STATE_VARIABLE_IntInstancesCord_47_47);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = InstanceInfos_18;
      next_value_of_STATE_VARIABLE_MaybeUnqual_0_2 = STATE_VARIABLE_MaybeUnqual_45_45;
      next_value_of_STATE_VARIABLE_ModuleNames_0_4 = STATE_VARIABLE_ModuleNames_46_46;
      next_value_of_STATE_VARIABLE_IntInstancesCord_0_6 = STATE_VARIABLE_IntInstancesCord_47_47;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_MaybeUnqual_0_2 = next_value_of_STATE_VARIABLE_MaybeUnqual_0_2;
      STATE_VARIABLE_ModuleNames_0_4 = next_value_of_STATE_VARIABLE_ModuleNames_0_4;
      STATE_VARIABLE_IntInstancesCord_0_6 = next_value_of_STATE_VARIABLE_IntInstancesCord_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_int2_items_from_int1_int_typeclass_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_2,
  MR_Word * STATE_VARIABLE_MaybeUnqual_3,
  MR_Word STATE_VARIABLE_ModuleNames_0_4,
  MR_Word * STATE_VARIABLE_ModuleNames_5,
  MR_Word STATE_VARIABLE_IntTypeClassesCord_0_6,
  MR_Word * STATE_VARIABLE_IntTypeClassesCord_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_IntTypeClassesCord_7 = STATE_VARIABLE_IntTypeClassesCord_0_6;
      *STATE_VARIABLE_ModuleNames_5 = STATE_VARIABLE_ModuleNames_0_4;
      *STATE_VARIABLE_MaybeUnqual_3 = STATE_VARIABLE_MaybeUnqual_0_2;
    }
    else
    {
      MR_Word TypeClassInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TypeClassInfos_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ClassSymName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeClassInfo_17, (MR_Integer) 0))));
      MR_Word TypeParams_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeClassInfo_17, (MR_Integer) 1))));
      MR_Word SuperclassConstraints_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeClassInfo_17, (MR_Integer) 2))));
      MR_Word FunDeps_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeClassInfo_17, (MR_Integer) 3))));
      MR_Word TVarSet_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeClassInfo_17, (MR_Integer) 5))));
      MR_Word Context_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeClassInfo_17, (MR_Integer) 6))));
      MR_Word SeqNum_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeClassInfo_17, (MR_Integer) 7))));
      MR_Word AbstractTypeClassInfo_31;
      MR_Word STATE_VARIABLE_MaybeUnqual_38_38;
      MR_Word STATE_VARIABLE_ModuleNames_39_39;
      MR_Word STATE_VARIABLE_IntTypeClassesCord_40_40;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_MaybeUnqual_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleNames_0_4;
      MR_Word next_value_of_STATE_VARIABLE_IntTypeClassesCord_0_6;

      parse_tree__comp_unit_interface__accumulate_modules_in_constraints_5_p_0(SuperclassConstraints_24, STATE_VARIABLE_MaybeUnqual_0_2, &STATE_VARIABLE_MaybeUnqual_38_38, STATE_VARIABLE_ModuleNames_0_4, &STATE_VARIABLE_ModuleNames_39_39);
      {
        AbstractTypeClassInfo_31 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), AbstractTypeClassInfo_31, 0) = ((MR_Box) (ClassSymName_22));
        MR_hl_field(MR_mktag(0), AbstractTypeClassInfo_31, 1) = ((MR_Box) (TypeParams_23));
        MR_hl_field(MR_mktag(0), AbstractTypeClassInfo_31, 2) = ((MR_Box) (SuperclassConstraints_24));
        MR_hl_field(MR_mktag(0), AbstractTypeClassInfo_31, 3) = ((MR_Box) (FunDeps_25));
        MR_hl_field(MR_mktag(0), AbstractTypeClassInfo_31, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), AbstractTypeClassInfo_31, 5) = ((MR_Box) (TVarSet_27));
        MR_hl_field(MR_mktag(0), AbstractTypeClassInfo_31, 6) = ((MR_Box) (Context_28));
        MR_hl_field(MR_mktag(0), AbstractTypeClassInfo_31, 7) = ((MR_Box) (SeqNum_29));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ((MR_Box) (AbstractTypeClassInfo_31)), STATE_VARIABLE_IntTypeClassesCord_0_6, &STATE_VARIABLE_IntTypeClassesCord_40_40);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = TypeClassInfos_18;
      next_value_of_STATE_VARIABLE_MaybeUnqual_0_2 = STATE_VARIABLE_MaybeUnqual_38_38;
      next_value_of_STATE_VARIABLE_ModuleNames_0_4 = STATE_VARIABLE_ModuleNames_39_39;
      next_value_of_STATE_VARIABLE_IntTypeClassesCord_0_6 = STATE_VARIABLE_IntTypeClassesCord_40_40;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_MaybeUnqual_0_2 = next_value_of_STATE_VARIABLE_MaybeUnqual_0_2;
      STATE_VARIABLE_ModuleNames_0_4 = next_value_of_STATE_VARIABLE_ModuleNames_0_4;
      STATE_VARIABLE_IntTypeClassesCord_0_6 = next_value_of_STATE_VARIABLE_IntTypeClassesCord_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_constraints_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_2,
  MR_Word * STATE_VARIABLE_MaybeUnqual_3,
  MR_Word STATE_VARIABLE_ModuleNames_0_4,
  MR_Word * STATE_VARIABLE_ModuleNames_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleNames_5 = STATE_VARIABLE_ModuleNames_0_4;
      *STATE_VARIABLE_MaybeUnqual_3 = STATE_VARIABLE_MaybeUnqual_0_2;
    }
    else
    {
      MR_Word Constraint_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Constraints_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_MaybeUnqual_20_20;
      MR_Word STATE_VARIABLE_ModuleNames_21_21;
      MR_Word ClassSymName_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_12, (MR_Integer) 0))));
      MR_Word ArgTypes_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_12, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_MaybeUnqual_15_33;
      MR_Word STATE_VARIABLE_ModuleNames_16_34;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_MaybeUnqual_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleNames_0_4;

      if (((MR_tag((MR_Word) ClassSymName_31)) == (MR_Integer) 1))
      {
        MR_Word ModuleName_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ClassSymName_31, (MR_Integer) 0))));

        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_45)), STATE_VARIABLE_ModuleNames_0_4, &STATE_VARIABLE_ModuleNames_16_34);
        STATE_VARIABLE_MaybeUnqual_15_33 = STATE_VARIABLE_MaybeUnqual_0_2;
      }
      else
      {
        STATE_VARIABLE_MaybeUnqual_15_33 = (MR_Integer) 1;
        STATE_VARIABLE_ModuleNames_16_34 = STATE_VARIABLE_ModuleNames_0_4;
      }
      parse_tree__comp_unit_interface__accumulate_modules_in_types_5_p_0(ArgTypes_32, STATE_VARIABLE_MaybeUnqual_15_33, &STATE_VARIABLE_MaybeUnqual_20_20, STATE_VARIABLE_ModuleNames_16_34, &STATE_VARIABLE_ModuleNames_21_21);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Constraints_13;
      next_value_of_STATE_VARIABLE_MaybeUnqual_0_2 = STATE_VARIABLE_MaybeUnqual_20_20;
      next_value_of_STATE_VARIABLE_ModuleNames_0_4 = STATE_VARIABLE_ModuleNames_21_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_MaybeUnqual_0_2 = next_value_of_STATE_VARIABLE_MaybeUnqual_0_2;
      STATE_VARIABLE_ModuleNames_0_4 = next_value_of_STATE_VARIABLE_ModuleNames_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_int2_items_from_int1_int_mode_defn_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_2,
  MR_Word * STATE_VARIABLE_MaybeUnqual_3,
  MR_Word STATE_VARIABLE_ModuleNames_0_4,
  MR_Word * STATE_VARIABLE_ModuleNames_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleNames_5 = STATE_VARIABLE_ModuleNames_0_4;
      *STATE_VARIABLE_MaybeUnqual_3 = STATE_VARIABLE_MaybeUnqual_0_2;
    }
    else
    {
      MR_Word ModeDefnInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ModeDefnInfos_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MaybeAbstractModeDefn_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefnInfo_12, (MR_Integer) 2))));
      MR_Word STATE_VARIABLE_MaybeUnqual_28_28;
      MR_Word STATE_VARIABLE_ModuleNames_29_29;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_MaybeUnqual_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleNames_0_4;

      if ((MaybeAbstractModeDefn_18 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        STATE_VARIABLE_MaybeUnqual_28_28 = STATE_VARIABLE_MaybeUnqual_0_2;
        STATE_VARIABLE_ModuleNames_29_29 = STATE_VARIABLE_ModuleNames_0_4;
      }
      else
      {
        MR_Word ModeDefn_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAbstractModeDefn_18, (MR_Integer) 0))));
        MR_Word Mode_23 = (MR_Word) (ModeDefn_22);

        if (((MR_tag((MR_Word) Mode_23)) == (MR_Integer) 0))
        {
          MR_Word InstA_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_23, (MR_Integer) 0))));
          MR_Word InstB_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_23, (MR_Integer) 1))));
          MR_Word STATE_VARIABLE_MaybeUnqual_21_47;
          MR_Word STATE_VARIABLE_ModuleNames_22_48;

          parse_tree__comp_unit_interface__accumulate_modules_in_inst_5_p_0(InstA_39, STATE_VARIABLE_MaybeUnqual_0_2, &STATE_VARIABLE_MaybeUnqual_21_47, STATE_VARIABLE_ModuleNames_0_4, &STATE_VARIABLE_ModuleNames_22_48);
          parse_tree__comp_unit_interface__accumulate_modules_in_inst_5_p_0(InstB_40, STATE_VARIABLE_MaybeUnqual_21_47, &STATE_VARIABLE_MaybeUnqual_28_28, STATE_VARIABLE_ModuleNames_22_48, &STATE_VARIABLE_ModuleNames_29_29);
        }
        else
        {
          MR_Word SymName_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode_23, (MR_Integer) 0))));
          MR_Word ArgInsts_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode_23, (MR_Integer) 1))));
          MR_Word STATE_VARIABLE_MaybeUnqual_17_43;
          MR_Word STATE_VARIABLE_ModuleNames_18_44;

          if (((MR_tag((MR_Word) SymName_41)) == (MR_Integer) 1))
          {
            MR_Word ModuleName_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_41, (MR_Integer) 0))));

            mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_59)), STATE_VARIABLE_ModuleNames_0_4, &STATE_VARIABLE_ModuleNames_18_44);
            STATE_VARIABLE_MaybeUnqual_17_43 = STATE_VARIABLE_MaybeUnqual_0_2;
          }
          else
          {
            STATE_VARIABLE_MaybeUnqual_17_43 = (MR_Integer) 1;
            STATE_VARIABLE_ModuleNames_18_44 = STATE_VARIABLE_ModuleNames_0_4;
          }
          parse_tree__comp_unit_interface__accumulate_modules_in_insts_5_p_0(ArgInsts_42, STATE_VARIABLE_MaybeUnqual_17_43, &STATE_VARIABLE_MaybeUnqual_28_28, STATE_VARIABLE_ModuleNames_18_44, &STATE_VARIABLE_ModuleNames_29_29);
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ModeDefnInfos_13;
      next_value_of_STATE_VARIABLE_MaybeUnqual_0_2 = STATE_VARIABLE_MaybeUnqual_28_28;
      next_value_of_STATE_VARIABLE_ModuleNames_0_4 = STATE_VARIABLE_ModuleNames_29_29;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_MaybeUnqual_0_2 = next_value_of_STATE_VARIABLE_MaybeUnqual_0_2;
      STATE_VARIABLE_ModuleNames_0_4 = next_value_of_STATE_VARIABLE_ModuleNames_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_int2_items_from_int1_int_inst_defn_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_2,
  MR_Word * STATE_VARIABLE_MaybeUnqual_3,
  MR_Word STATE_VARIABLE_ModuleNames_0_4,
  MR_Word * STATE_VARIABLE_ModuleNames_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleNames_5 = STATE_VARIABLE_ModuleNames_0_4;
      *STATE_VARIABLE_MaybeUnqual_3 = STATE_VARIABLE_MaybeUnqual_0_2;
    }
    else
    {
      MR_Word InstDefnInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word InstDefnInfos_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MaybeForTypeCtor_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefnInfo_12, (MR_Integer) 2))));
      MR_Word MaybeAbstractInstDefn_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefnInfo_12, (MR_Integer) 3))));
      MR_Word STATE_VARIABLE_MaybeUnqual_32_32;
      MR_Word STATE_VARIABLE_ModuleNames_33_33;
      MR_Word STATE_VARIABLE_MaybeUnqual_34_34;
      MR_Word STATE_VARIABLE_ModuleNames_35_35;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_MaybeUnqual_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleNames_0_4;

      if ((MaybeForTypeCtor_18 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        STATE_VARIABLE_MaybeUnqual_32_32 = STATE_VARIABLE_MaybeUnqual_0_2;
        STATE_VARIABLE_ModuleNames_33_33 = STATE_VARIABLE_ModuleNames_0_4;
      }
      else
      {
        MR_Word TypeCtor_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForTypeCtor_18, (MR_Integer) 0))));
        MR_Word TypeCtorSymName_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_23, (MR_Integer) 0))));

        if (((MR_tag((MR_Word) TypeCtorSymName_24)) == (MR_Integer) 1))
        {
          MR_Word ModuleName_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeCtorSymName_24, (MR_Integer) 0))));

          mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_46)), STATE_VARIABLE_ModuleNames_0_4, &STATE_VARIABLE_ModuleNames_33_33);
          STATE_VARIABLE_MaybeUnqual_32_32 = STATE_VARIABLE_MaybeUnqual_0_2;
        }
        else
        {
          STATE_VARIABLE_MaybeUnqual_32_32 = (MR_Integer) 1;
          STATE_VARIABLE_ModuleNames_33_33 = STATE_VARIABLE_ModuleNames_0_4;
        }
      }
      if ((MaybeAbstractInstDefn_19 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        STATE_VARIABLE_MaybeUnqual_34_34 = STATE_VARIABLE_MaybeUnqual_32_32;
        STATE_VARIABLE_ModuleNames_35_35 = STATE_VARIABLE_ModuleNames_33_33;
      }
      else
      {
        MR_Word InstDefn_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAbstractInstDefn_19, (MR_Integer) 0))));
        MR_Word Inst_27 = (MR_Word) (InstDefn_26);

        parse_tree__comp_unit_interface__accumulate_modules_in_inst_5_p_0(Inst_27, STATE_VARIABLE_MaybeUnqual_32_32, &STATE_VARIABLE_MaybeUnqual_34_34, STATE_VARIABLE_ModuleNames_33_33, &STATE_VARIABLE_ModuleNames_35_35);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = InstDefnInfos_13;
      next_value_of_STATE_VARIABLE_MaybeUnqual_0_2 = STATE_VARIABLE_MaybeUnqual_34_34;
      next_value_of_STATE_VARIABLE_ModuleNames_0_4 = STATE_VARIABLE_ModuleNames_35_35;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_MaybeUnqual_0_2 = next_value_of_STATE_VARIABLE_MaybeUnqual_0_2;
      STATE_VARIABLE_ModuleNames_0_4 = next_value_of_STATE_VARIABLE_ModuleNames_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_inst_5_p_0(
  MR_Word tscc_proc_1_input_1_Inst_6,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_MaybeUnqual_21,
  MR_Word tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_ModuleNames_23)
{
  {
    MR_Word tscc_proc_2_input_1_InstName_6;
    MR_Word tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
    MR_Word tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;
    MR_Word tscc_output_1_STATE_VARIABLE_MaybeUnqual_21;
    MR_Word tscc_output_2_STATE_VARIABLE_ModuleNames_23;

    // The code for TSCC PROC 1: pred parse_tree.comp_unit_interface.accumulate_modules_in_inst/5-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred parse_tree.comp_unit_interface.accumulate_modules_in_inst/5-0
    ;
    // proc 2 in TSCC: pred parse_tree.comp_unit_interface.accumulate_modules_in_inst_name/5-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word Inst_6 = tscc_proc_1_input_1_Inst_6;
      MR_Word STATE_VARIABLE_MaybeUnqual_0_20 = tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20;
      MR_Word STATE_VARIABLE_MaybeUnqual_21;
      MR_Word STATE_VARIABLE_ModuleNames_0_22 = tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22;
      MR_Word STATE_VARIABLE_ModuleNames_23;

      switch (MR_tag((MR_Word) Inst_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Inst_6)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_MaybeUnqual_21 = STATE_VARIABLE_MaybeUnqual_0_20;
                STATE_VARIABLE_ModuleNames_23 = STATE_VARIABLE_ModuleNames_0_22;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_MaybeUnqual_21 = STATE_VARIABLE_MaybeUnqual_0_20;
                STATE_VARIABLE_ModuleNames_23 = STATE_VARIABLE_ModuleNames_0_22;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inst_6, (MR_Integer) 0))));

            parse_tree__comp_unit_interface__accumulate_modules_in_type_5_p_0(Type_12, STATE_VARIABLE_MaybeUnqual_0_20, &STATE_VARIABLE_MaybeUnqual_21, STATE_VARIABLE_ModuleNames_0_22, &STATE_VARIABLE_ModuleNames_23);
          }
          break;
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_MaybeUnqual_21 = STATE_VARIABLE_MaybeUnqual_0_20;
            STATE_VARIABLE_ModuleNames_23 = STATE_VARIABLE_ModuleNames_0_22;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word BoundInsts_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 3))));

                parse_tree__comp_unit_interface__accumulate_modules_in_bound_insts_5_p_0(BoundInsts_14, STATE_VARIABLE_MaybeUnqual_0_20, &STATE_VARIABLE_MaybeUnqual_21, STATE_VARIABLE_ModuleNames_0_22, &STATE_VARIABLE_ModuleNames_23);
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_MaybeUnqual_21 = STATE_VARIABLE_MaybeUnqual_0_20;
                STATE_VARIABLE_ModuleNames_23 = STATE_VARIABLE_ModuleNames_0_22;
              }
              break;
            case (MR_Integer) 2:
              {
                STATE_VARIABLE_MaybeUnqual_21 = STATE_VARIABLE_MaybeUnqual_0_20;
                STATE_VARIABLE_ModuleNames_23 = STATE_VARIABLE_ModuleNames_0_22;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ArgInst_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_Inst_6 = ArgInst_16;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20 = STATE_VARIABLE_MaybeUnqual_0_20;
                MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22 = STATE_VARIABLE_ModuleNames_0_22;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Inst_6 = next_value_of_tscc_proc_1_input_1_Inst_6;
                tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20;
                tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word InstName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_InstName_6 = InstName_17;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = STATE_VARIABLE_MaybeUnqual_0_20;
                MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = STATE_VARIABLE_ModuleNames_0_22;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_InstName_6 = next_value_of_tscc_proc_2_input_1_InstName_6;
                tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
                tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SymName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 1))));
                MR_Word ArgInsts_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2))));
                MR_Word STATE_VARIABLE_MaybeUnqual_24_24;
                MR_Word STATE_VARIABLE_ModuleNames_25_25;

                if (((MR_tag((MR_Word) SymName_18)) == (MR_Integer) 1))
                {
                  MR_Word ModuleName_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_18, (MR_Integer) 0))));

                  mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_50)), STATE_VARIABLE_ModuleNames_0_22, &STATE_VARIABLE_ModuleNames_25_25);
                  STATE_VARIABLE_MaybeUnqual_24_24 = STATE_VARIABLE_MaybeUnqual_0_20;
                }
                else
                {
                  STATE_VARIABLE_MaybeUnqual_24_24 = (MR_Integer) 1;
                  STATE_VARIABLE_ModuleNames_25_25 = STATE_VARIABLE_ModuleNames_0_22;
                }
                parse_tree__comp_unit_interface__accumulate_modules_in_insts_5_p_0(ArgInsts_19, STATE_VARIABLE_MaybeUnqual_24_24, &STATE_VARIABLE_MaybeUnqual_21, STATE_VARIABLE_ModuleNames_25_25, &STATE_VARIABLE_ModuleNames_23);
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_MaybeUnqual_21 = STATE_VARIABLE_MaybeUnqual_21;
      tscc_output_2_STATE_VARIABLE_ModuleNames_23 = STATE_VARIABLE_ModuleNames_23;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word InstName_6 = tscc_proc_2_input_1_InstName_6;
      MR_Word STATE_VARIABLE_MaybeUnqual_0_18 = tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
      MR_Word STATE_VARIABLE_MaybeUnqual_19;
      MR_Word STATE_VARIABLE_ModuleNames_0_20 = tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;
      MR_Word STATE_VARIABLE_ModuleNames_21;

      switch (MR_tag((MR_Word) InstName_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SymName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_6, (MR_Integer) 0))));
            MR_Word ArgInsts_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_6, (MR_Integer) 1))));
            MR_Word STATE_VARIABLE_MaybeUnqual_35_35;
            MR_Word STATE_VARIABLE_ModuleNames_36_36;

            if (((MR_tag((MR_Word) SymName_9)) == (MR_Integer) 1))
            {
              MR_Word ModuleName_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_9, (MR_Integer) 0))));

              mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_68)), STATE_VARIABLE_ModuleNames_0_20, &STATE_VARIABLE_ModuleNames_36_36);
              STATE_VARIABLE_MaybeUnqual_35_35 = STATE_VARIABLE_MaybeUnqual_0_18;
            }
            else
            {
              STATE_VARIABLE_MaybeUnqual_35_35 = (MR_Integer) 1;
              STATE_VARIABLE_ModuleNames_36_36 = STATE_VARIABLE_ModuleNames_0_20;
            }
            parse_tree__comp_unit_interface__accumulate_modules_in_insts_5_p_0(ArgInsts_10, STATE_VARIABLE_MaybeUnqual_35_35, &STATE_VARIABLE_MaybeUnqual_19, STATE_VARIABLE_ModuleNames_36_36, &STATE_VARIABLE_ModuleNames_21);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgInstB_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstName_6, (MR_Integer) 2))));
            MR_Word Inst_133 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstName_6, (MR_Integer) 1))));
            MR_Word Insts_134;
            MR_Word STATE_VARIABLE_MaybeUnqual_20_141;
            MR_Word STATE_VARIABLE_ModuleNames_21_142;
            MR_Word Inst_151;
            MR_Word next_value_of_tscc_proc_1_input_1_Inst_6;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20;
            MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22;

            {
              Insts_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Insts_134, 0) = ((MR_Box) (ArgInstB_56));
              MR_hl_field(MR_mktag(1), Insts_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            parse_tree__comp_unit_interface__accumulate_modules_in_inst_5_p_0(Inst_133, STATE_VARIABLE_MaybeUnqual_0_18, &STATE_VARIABLE_MaybeUnqual_20_141, STATE_VARIABLE_ModuleNames_0_20, &STATE_VARIABLE_ModuleNames_21_142);
            Inst_151 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Insts_134, (MR_Integer) 0))));
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_1_input_1_Inst_6 = Inst_151;
            next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20 = STATE_VARIABLE_MaybeUnqual_20_141;
            next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22 = STATE_VARIABLE_ModuleNames_21_142;
            tscc_proc_1_input_1_Inst_6 = next_value_of_tscc_proc_1_input_1_Inst_6;
            tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20;
            tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgInstB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstName_6, (MR_Integer) 1))));
            MR_Word Inst_79 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstName_6, (MR_Integer) 0))));
            MR_Word Insts_80;
            MR_Word STATE_VARIABLE_MaybeUnqual_20_87;
            MR_Word STATE_VARIABLE_ModuleNames_21_88;
            MR_Word Inst_97;
            MR_Word next_value_of_tscc_proc_1_input_1_Inst_6;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20;
            MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22;

            {
              Insts_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Insts_80, 0) = ((MR_Box) (ArgInstB_14));
              MR_hl_field(MR_mktag(1), Insts_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            parse_tree__comp_unit_interface__accumulate_modules_in_inst_5_p_0(Inst_79, STATE_VARIABLE_MaybeUnqual_0_18, &STATE_VARIABLE_MaybeUnqual_20_87, STATE_VARIABLE_ModuleNames_0_20, &STATE_VARIABLE_ModuleNames_21_88);
            Inst_97 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Insts_80, (MR_Integer) 0))));
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_1_input_1_Inst_6 = Inst_97;
            next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20 = STATE_VARIABLE_MaybeUnqual_20_87;
            next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22 = STATE_VARIABLE_ModuleNames_21_88;
            tscc_proc_1_input_1_Inst_6 = next_value_of_tscc_proc_1_input_1_Inst_6;
            tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20;
            tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstName_6, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgInstName_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_InstName_6 = ArgInstName_52;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = STATE_VARIABLE_MaybeUnqual_0_18;
                MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = STATE_VARIABLE_ModuleNames_0_20;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_InstName_6 = next_value_of_tscc_proc_2_input_1_InstName_6;
                tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
                tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgInstName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_InstName_6 = ArgInstName_15;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = STATE_VARIABLE_MaybeUnqual_0_18;
                MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = STATE_VARIABLE_ModuleNames_0_20;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_InstName_6 = next_value_of_tscc_proc_2_input_1_InstName_6;
                tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
                tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgInstName_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_InstName_6 = ArgInstName_54;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = STATE_VARIABLE_MaybeUnqual_0_18;
                MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = STATE_VARIABLE_ModuleNames_0_20;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_InstName_6 = next_value_of_tscc_proc_2_input_1_InstName_6;
                tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
                tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ArgInstName_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_InstName_6 = ArgInstName_53;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = STATE_VARIABLE_MaybeUnqual_0_18;
                MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = STATE_VARIABLE_ModuleNames_0_20;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_InstName_6 = next_value_of_tscc_proc_2_input_1_InstName_6;
                tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
                tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Type_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_6, (MR_Integer) 2))));

                parse_tree__comp_unit_interface__accumulate_modules_in_type_5_p_0(Type_17, STATE_VARIABLE_MaybeUnqual_0_18, &STATE_VARIABLE_MaybeUnqual_19, STATE_VARIABLE_ModuleNames_0_20, &STATE_VARIABLE_ModuleNames_21);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word STATE_VARIABLE_MaybeUnqual_22_22;
                MR_Word STATE_VARIABLE_ModuleNames_23_23;
                MR_Word ArgInstName_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_6, (MR_Integer) 2))));
                MR_Word Type_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_InstName_6;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
                MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;

                parse_tree__comp_unit_interface__accumulate_modules_in_type_5_p_0(Type_51, STATE_VARIABLE_MaybeUnqual_0_18, &STATE_VARIABLE_MaybeUnqual_22_22, STATE_VARIABLE_ModuleNames_0_20, &STATE_VARIABLE_ModuleNames_23_23);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_InstName_6 = ArgInstName_50;
                next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = STATE_VARIABLE_MaybeUnqual_22_22;
                next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = STATE_VARIABLE_ModuleNames_23_23;
                tscc_proc_2_input_1_InstName_6 = next_value_of_tscc_proc_2_input_1_InstName_6;
                tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
                tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;
                goto top_of_proc_2;
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_MaybeUnqual_21 = STATE_VARIABLE_MaybeUnqual_19;
      tscc_output_2_STATE_VARIABLE_ModuleNames_23 = STATE_VARIABLE_ModuleNames_21;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_MaybeUnqual_21 = tscc_output_1_STATE_VARIABLE_MaybeUnqual_21;
    *tscc_output_ptr_2_STATE_VARIABLE_ModuleNames_23 = tscc_output_2_STATE_VARIABLE_ModuleNames_23;
    return;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_inst_name_5_p_0(
  MR_Word tscc_proc_2_input_1_InstName_6,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_MaybeUnqual_21,
  MR_Word tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_ModuleNames_23)
{
  {
    MR_Word tscc_proc_1_input_1_Inst_6;
    MR_Word tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20;
    MR_Word tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22;
    MR_Word tscc_output_1_STATE_VARIABLE_MaybeUnqual_21;
    MR_Word tscc_output_2_STATE_VARIABLE_ModuleNames_23;

    // The code for TSCC PROC 2: pred parse_tree.comp_unit_interface.accumulate_modules_in_inst_name/5-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred parse_tree.comp_unit_interface.accumulate_modules_in_inst/5-0
    ;
    // proc 2 in TSCC: pred parse_tree.comp_unit_interface.accumulate_modules_in_inst_name/5-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word Inst_6 = tscc_proc_1_input_1_Inst_6;
      MR_Word STATE_VARIABLE_MaybeUnqual_0_20 = tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20;
      MR_Word STATE_VARIABLE_MaybeUnqual_21;
      MR_Word STATE_VARIABLE_ModuleNames_0_22 = tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22;
      MR_Word STATE_VARIABLE_ModuleNames_23;

      switch (MR_tag((MR_Word) Inst_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Inst_6)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_MaybeUnqual_21 = STATE_VARIABLE_MaybeUnqual_0_20;
                STATE_VARIABLE_ModuleNames_23 = STATE_VARIABLE_ModuleNames_0_22;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_MaybeUnqual_21 = STATE_VARIABLE_MaybeUnqual_0_20;
                STATE_VARIABLE_ModuleNames_23 = STATE_VARIABLE_ModuleNames_0_22;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inst_6, (MR_Integer) 0))));

            parse_tree__comp_unit_interface__accumulate_modules_in_type_5_p_0(Type_12, STATE_VARIABLE_MaybeUnqual_0_20, &STATE_VARIABLE_MaybeUnqual_21, STATE_VARIABLE_ModuleNames_0_22, &STATE_VARIABLE_ModuleNames_23);
          }
          break;
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_MaybeUnqual_21 = STATE_VARIABLE_MaybeUnqual_0_20;
            STATE_VARIABLE_ModuleNames_23 = STATE_VARIABLE_ModuleNames_0_22;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word BoundInsts_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 3))));

                parse_tree__comp_unit_interface__accumulate_modules_in_bound_insts_5_p_0(BoundInsts_14, STATE_VARIABLE_MaybeUnqual_0_20, &STATE_VARIABLE_MaybeUnqual_21, STATE_VARIABLE_ModuleNames_0_22, &STATE_VARIABLE_ModuleNames_23);
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_MaybeUnqual_21 = STATE_VARIABLE_MaybeUnqual_0_20;
                STATE_VARIABLE_ModuleNames_23 = STATE_VARIABLE_ModuleNames_0_22;
              }
              break;
            case (MR_Integer) 2:
              {
                STATE_VARIABLE_MaybeUnqual_21 = STATE_VARIABLE_MaybeUnqual_0_20;
                STATE_VARIABLE_ModuleNames_23 = STATE_VARIABLE_ModuleNames_0_22;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ArgInst_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_Inst_6 = ArgInst_16;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20 = STATE_VARIABLE_MaybeUnqual_0_20;
                MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22 = STATE_VARIABLE_ModuleNames_0_22;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Inst_6 = next_value_of_tscc_proc_1_input_1_Inst_6;
                tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20;
                tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word InstName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_InstName_6 = InstName_17;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = STATE_VARIABLE_MaybeUnqual_0_20;
                MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = STATE_VARIABLE_ModuleNames_0_22;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_InstName_6 = next_value_of_tscc_proc_2_input_1_InstName_6;
                tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
                tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SymName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 1))));
                MR_Word ArgInsts_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2))));
                MR_Word STATE_VARIABLE_MaybeUnqual_24_24;
                MR_Word STATE_VARIABLE_ModuleNames_25_25;

                if (((MR_tag((MR_Word) SymName_18)) == (MR_Integer) 1))
                {
                  MR_Word ModuleName_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_18, (MR_Integer) 0))));

                  mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_50)), STATE_VARIABLE_ModuleNames_0_22, &STATE_VARIABLE_ModuleNames_25_25);
                  STATE_VARIABLE_MaybeUnqual_24_24 = STATE_VARIABLE_MaybeUnqual_0_20;
                }
                else
                {
                  STATE_VARIABLE_MaybeUnqual_24_24 = (MR_Integer) 1;
                  STATE_VARIABLE_ModuleNames_25_25 = STATE_VARIABLE_ModuleNames_0_22;
                }
                parse_tree__comp_unit_interface__accumulate_modules_in_insts_5_p_0(ArgInsts_19, STATE_VARIABLE_MaybeUnqual_24_24, &STATE_VARIABLE_MaybeUnqual_21, STATE_VARIABLE_ModuleNames_25_25, &STATE_VARIABLE_ModuleNames_23);
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_MaybeUnqual_21 = STATE_VARIABLE_MaybeUnqual_21;
      tscc_output_2_STATE_VARIABLE_ModuleNames_23 = STATE_VARIABLE_ModuleNames_23;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word InstName_6 = tscc_proc_2_input_1_InstName_6;
      MR_Word STATE_VARIABLE_MaybeUnqual_0_18 = tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
      MR_Word STATE_VARIABLE_MaybeUnqual_19;
      MR_Word STATE_VARIABLE_ModuleNames_0_20 = tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;
      MR_Word STATE_VARIABLE_ModuleNames_21;

      switch (MR_tag((MR_Word) InstName_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SymName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_6, (MR_Integer) 0))));
            MR_Word ArgInsts_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_6, (MR_Integer) 1))));
            MR_Word STATE_VARIABLE_MaybeUnqual_35_35;
            MR_Word STATE_VARIABLE_ModuleNames_36_36;

            if (((MR_tag((MR_Word) SymName_9)) == (MR_Integer) 1))
            {
              MR_Word ModuleName_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_9, (MR_Integer) 0))));

              mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_68)), STATE_VARIABLE_ModuleNames_0_20, &STATE_VARIABLE_ModuleNames_36_36);
              STATE_VARIABLE_MaybeUnqual_35_35 = STATE_VARIABLE_MaybeUnqual_0_18;
            }
            else
            {
              STATE_VARIABLE_MaybeUnqual_35_35 = (MR_Integer) 1;
              STATE_VARIABLE_ModuleNames_36_36 = STATE_VARIABLE_ModuleNames_0_20;
            }
            parse_tree__comp_unit_interface__accumulate_modules_in_insts_5_p_0(ArgInsts_10, STATE_VARIABLE_MaybeUnqual_35_35, &STATE_VARIABLE_MaybeUnqual_19, STATE_VARIABLE_ModuleNames_36_36, &STATE_VARIABLE_ModuleNames_21);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgInstB_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstName_6, (MR_Integer) 2))));
            MR_Word Inst_133 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstName_6, (MR_Integer) 1))));
            MR_Word Insts_134;
            MR_Word STATE_VARIABLE_MaybeUnqual_20_141;
            MR_Word STATE_VARIABLE_ModuleNames_21_142;
            MR_Word Inst_151;
            MR_Word next_value_of_tscc_proc_1_input_1_Inst_6;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20;
            MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22;

            {
              Insts_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Insts_134, 0) = ((MR_Box) (ArgInstB_56));
              MR_hl_field(MR_mktag(1), Insts_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            parse_tree__comp_unit_interface__accumulate_modules_in_inst_5_p_0(Inst_133, STATE_VARIABLE_MaybeUnqual_0_18, &STATE_VARIABLE_MaybeUnqual_20_141, STATE_VARIABLE_ModuleNames_0_20, &STATE_VARIABLE_ModuleNames_21_142);
            Inst_151 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Insts_134, (MR_Integer) 0))));
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_1_input_1_Inst_6 = Inst_151;
            next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20 = STATE_VARIABLE_MaybeUnqual_20_141;
            next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22 = STATE_VARIABLE_ModuleNames_21_142;
            tscc_proc_1_input_1_Inst_6 = next_value_of_tscc_proc_1_input_1_Inst_6;
            tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20;
            tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgInstB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstName_6, (MR_Integer) 1))));
            MR_Word Inst_79 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstName_6, (MR_Integer) 0))));
            MR_Word Insts_80;
            MR_Word STATE_VARIABLE_MaybeUnqual_20_87;
            MR_Word STATE_VARIABLE_ModuleNames_21_88;
            MR_Word Inst_97;
            MR_Word next_value_of_tscc_proc_1_input_1_Inst_6;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20;
            MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22;

            {
              Insts_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Insts_80, 0) = ((MR_Box) (ArgInstB_14));
              MR_hl_field(MR_mktag(1), Insts_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            parse_tree__comp_unit_interface__accumulate_modules_in_inst_5_p_0(Inst_79, STATE_VARIABLE_MaybeUnqual_0_18, &STATE_VARIABLE_MaybeUnqual_20_87, STATE_VARIABLE_ModuleNames_0_20, &STATE_VARIABLE_ModuleNames_21_88);
            Inst_97 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Insts_80, (MR_Integer) 0))));
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_1_input_1_Inst_6 = Inst_97;
            next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20 = STATE_VARIABLE_MaybeUnqual_20_87;
            next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22 = STATE_VARIABLE_ModuleNames_21_88;
            tscc_proc_1_input_1_Inst_6 = next_value_of_tscc_proc_1_input_1_Inst_6;
            tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20;
            tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstName_6, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgInstName_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_InstName_6 = ArgInstName_52;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = STATE_VARIABLE_MaybeUnqual_0_18;
                MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = STATE_VARIABLE_ModuleNames_0_20;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_InstName_6 = next_value_of_tscc_proc_2_input_1_InstName_6;
                tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
                tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgInstName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_InstName_6 = ArgInstName_15;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = STATE_VARIABLE_MaybeUnqual_0_18;
                MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = STATE_VARIABLE_ModuleNames_0_20;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_InstName_6 = next_value_of_tscc_proc_2_input_1_InstName_6;
                tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
                tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgInstName_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_InstName_6 = ArgInstName_54;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = STATE_VARIABLE_MaybeUnqual_0_18;
                MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = STATE_VARIABLE_ModuleNames_0_20;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_InstName_6 = next_value_of_tscc_proc_2_input_1_InstName_6;
                tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
                tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ArgInstName_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_InstName_6 = ArgInstName_53;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = STATE_VARIABLE_MaybeUnqual_0_18;
                MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = STATE_VARIABLE_ModuleNames_0_20;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_InstName_6 = next_value_of_tscc_proc_2_input_1_InstName_6;
                tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
                tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Type_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_6, (MR_Integer) 2))));

                parse_tree__comp_unit_interface__accumulate_modules_in_type_5_p_0(Type_17, STATE_VARIABLE_MaybeUnqual_0_18, &STATE_VARIABLE_MaybeUnqual_19, STATE_VARIABLE_ModuleNames_0_20, &STATE_VARIABLE_ModuleNames_21);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word STATE_VARIABLE_MaybeUnqual_22_22;
                MR_Word STATE_VARIABLE_ModuleNames_23_23;
                MR_Word ArgInstName_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_6, (MR_Integer) 2))));
                MR_Word Type_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_InstName_6;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
                MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;

                parse_tree__comp_unit_interface__accumulate_modules_in_type_5_p_0(Type_51, STATE_VARIABLE_MaybeUnqual_0_18, &STATE_VARIABLE_MaybeUnqual_22_22, STATE_VARIABLE_ModuleNames_0_20, &STATE_VARIABLE_ModuleNames_23_23);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_InstName_6 = ArgInstName_50;
                next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = STATE_VARIABLE_MaybeUnqual_22_22;
                next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = STATE_VARIABLE_ModuleNames_23_23;
                tscc_proc_2_input_1_InstName_6 = next_value_of_tscc_proc_2_input_1_InstName_6;
                tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
                tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;
                goto top_of_proc_2;
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_MaybeUnqual_21 = STATE_VARIABLE_MaybeUnqual_19;
      tscc_output_2_STATE_VARIABLE_ModuleNames_23 = STATE_VARIABLE_ModuleNames_21;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_MaybeUnqual_21 = tscc_output_1_STATE_VARIABLE_MaybeUnqual_21;
    *tscc_output_ptr_2_STATE_VARIABLE_ModuleNames_23 = tscc_output_2_STATE_VARIABLE_ModuleNames_23;
    return;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_insts_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_2,
  MR_Word * STATE_VARIABLE_MaybeUnqual_3,
  MR_Word STATE_VARIABLE_ModuleNames_0_4,
  MR_Word * STATE_VARIABLE_ModuleNames_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleNames_5 = STATE_VARIABLE_ModuleNames_0_4;
      *STATE_VARIABLE_MaybeUnqual_3 = STATE_VARIABLE_MaybeUnqual_0_2;
    }
    else
    {
      MR_Word Inst_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Insts_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_MaybeUnqual_20_20;
      MR_Word STATE_VARIABLE_ModuleNames_21_21;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_MaybeUnqual_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleNames_0_4;

      parse_tree__comp_unit_interface__accumulate_modules_in_inst_5_p_0(Inst_12, STATE_VARIABLE_MaybeUnqual_0_2, &STATE_VARIABLE_MaybeUnqual_20_20, STATE_VARIABLE_ModuleNames_0_4, &STATE_VARIABLE_ModuleNames_21_21);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Insts_13;
      next_value_of_STATE_VARIABLE_MaybeUnqual_0_2 = STATE_VARIABLE_MaybeUnqual_20_20;
      next_value_of_STATE_VARIABLE_ModuleNames_0_4 = STATE_VARIABLE_ModuleNames_21_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_MaybeUnqual_0_2 = next_value_of_STATE_VARIABLE_MaybeUnqual_0_2;
      STATE_VARIABLE_ModuleNames_0_4 = next_value_of_STATE_VARIABLE_ModuleNames_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_bound_insts_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_2,
  MR_Word * STATE_VARIABLE_MaybeUnqual_3,
  MR_Word STATE_VARIABLE_ModuleNames_0_4,
  MR_Word * STATE_VARIABLE_ModuleNames_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleNames_5 = STATE_VARIABLE_ModuleNames_0_4;
      *STATE_VARIABLE_MaybeUnqual_3 = STATE_VARIABLE_MaybeUnqual_0_2;
    }
    else
    {
      MR_Word BoundInst_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word BoundInsts_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_MaybeUnqual_20_20;
      MR_Word STATE_VARIABLE_ModuleNames_21_21;
      MR_Word ConsId_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_12, (MR_Integer) 0))));
      MR_Word ArgInsts_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_12, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_MaybeUnqual_22_40;
      MR_Word STATE_VARIABLE_ModuleNames_23_41;
      MR_Word SymName_33;
      MR_Word TypeCtor_35;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_MaybeUnqual_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleNames_0_4;

      succeeded = ((((MR_tag((MR_Word) ConsId_31)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_31, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        SymName_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_31, (MR_Integer) 1))));
        TypeCtor_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_31, (MR_Integer) 3))));
        {
          MR_Word TypeCtorSymName_36;
          MR_Word STATE_VARIABLE_MaybeUnqual_20_38;
          MR_Word STATE_VARIABLE_ModuleNames_21_39;

          if (((MR_tag((MR_Word) SymName_33)) == (MR_Integer) 1))
          {
            MR_Word ModuleName_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_33, (MR_Integer) 0))));

            mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_52)), STATE_VARIABLE_ModuleNames_0_4, &STATE_VARIABLE_ModuleNames_21_39);
            STATE_VARIABLE_MaybeUnqual_20_38 = STATE_VARIABLE_MaybeUnqual_0_2;
          }
          else
          {
            STATE_VARIABLE_MaybeUnqual_20_38 = (MR_Integer) 1;
            STATE_VARIABLE_ModuleNames_21_39 = STATE_VARIABLE_ModuleNames_0_4;
          }
          TypeCtorSymName_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_35, (MR_Integer) 0))));
          if (((MR_tag((MR_Word) TypeCtorSymName_36)) == (MR_Integer) 1))
          {
            MR_Word ModuleName_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeCtorSymName_36, (MR_Integer) 0))));

            mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_65)), STATE_VARIABLE_ModuleNames_21_39, &STATE_VARIABLE_ModuleNames_23_41);
            STATE_VARIABLE_MaybeUnqual_22_40 = STATE_VARIABLE_MaybeUnqual_20_38;
          }
          else
          {
            STATE_VARIABLE_MaybeUnqual_22_40 = (MR_Integer) 1;
            STATE_VARIABLE_ModuleNames_23_41 = STATE_VARIABLE_ModuleNames_21_39;
          }
        }
      }
      else
      {
        STATE_VARIABLE_ModuleNames_23_41 = STATE_VARIABLE_ModuleNames_0_4;
        STATE_VARIABLE_MaybeUnqual_22_40 = STATE_VARIABLE_MaybeUnqual_0_2;
      }
      parse_tree__comp_unit_interface__accumulate_modules_in_insts_5_p_0(ArgInsts_32, STATE_VARIABLE_MaybeUnqual_22_40, &STATE_VARIABLE_MaybeUnqual_20_20, STATE_VARIABLE_ModuleNames_23_41, &STATE_VARIABLE_ModuleNames_21_21);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = BoundInsts_13;
      next_value_of_STATE_VARIABLE_MaybeUnqual_0_2 = STATE_VARIABLE_MaybeUnqual_20_20;
      next_value_of_STATE_VARIABLE_ModuleNames_0_4 = STATE_VARIABLE_ModuleNames_21_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_MaybeUnqual_0_2 = next_value_of_STATE_VARIABLE_MaybeUnqual_0_2;
      STATE_VARIABLE_ModuleNames_0_4 = next_value_of_STATE_VARIABLE_ModuleNames_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_int2_items_from_int1_int_type_defn_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_2,
  MR_Word * STATE_VARIABLE_MaybeUnqual_3,
  MR_Word STATE_VARIABLE_ModuleNames_0_4,
  MR_Word * STATE_VARIABLE_ModuleNames_5,
  MR_Word STATE_VARIABLE_IntTypeDefnsCord_0_6,
  MR_Word * STATE_VARIABLE_IntTypeDefnsCord_7,
  MR_Word STATE_VARIABLE_IntImplicitFIMLangs_0_8,
  MR_Word * STATE_VARIABLE_IntImplicitFIMLangs_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_IntImplicitFIMLangs_9 = STATE_VARIABLE_IntImplicitFIMLangs_0_8;
      *STATE_VARIABLE_IntTypeDefnsCord_7 = STATE_VARIABLE_IntTypeDefnsCord_0_6;
      *STATE_VARIABLE_ModuleNames_5 = STATE_VARIABLE_ModuleNames_0_4;
      *STATE_VARIABLE_MaybeUnqual_3 = STATE_VARIABLE_MaybeUnqual_0_2;
    }
    else
    {
      MR_Word TypeDefnInfo0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TypeDefnInfos0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TypeDefn0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo0_22, (MR_Integer) 2))));
      MR_Word STATE_VARIABLE_MaybeUnqual_52_52;
      MR_Word STATE_VARIABLE_ModuleNames_53_53;
      MR_Word STATE_VARIABLE_IntImplicitFIMLangs_55_55;
      MR_Word STATE_VARIABLE_IntTypeDefnsCord_59_59;
      MR_Word Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo0_22, (MR_Integer) 0))));
      MR_Word Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo0_22, (MR_Integer) 1))));
      MR_Word Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo0_22, (MR_Integer) 3))));
      MR_Word Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo0_22, (MR_Integer) 4))));
      MR_Word Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo0_22, (MR_Integer) 5))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_MaybeUnqual_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleNames_0_4;
      MR_Word next_value_of_STATE_VARIABLE_IntTypeDefnsCord_0_6;
      MR_Word next_value_of_STATE_VARIABLE_IntImplicitFIMLangs_0_8;

      switch (MR_tag((MR_Word) TypeDefn0_28)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word DetailsDu0_29 = (MR_Word) ((MR_Word) (TypeDefn0_28));
            MR_Word DetailsDu_30;
            MR_Word TypeDefn_31;
            MR_Word TypeDefnInfo_32;
            MR_Word Var_73;
            MR_Word Var_74;
            MR_Word Var_76;
            MR_Word Var_77;
            MR_Word Var_78;

            parse_tree__comp_unit_interface__delete_uc_preds_from_du_type_2_p_0(DetailsDu0_29, &DetailsDu_30);
            TypeDefn_31 = (MR_Word) ((MR_Word) (DetailsDu_30));
            Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo0_22, (MR_Integer) 0))));
            Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo0_22, (MR_Integer) 1))));
            Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo0_22, (MR_Integer) 3))));
            Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo0_22, (MR_Integer) 4))));
            Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo0_22, (MR_Integer) 5))));
            {
              TypeDefnInfo_32 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeDefnInfo_32, 0) = ((MR_Box) (Var_73));
              MR_hl_field(MR_mktag(0), TypeDefnInfo_32, 1) = ((MR_Box) (Var_74));
              MR_hl_field(MR_mktag(0), TypeDefnInfo_32, 2) = ((MR_Box) (TypeDefn_31));
              MR_hl_field(MR_mktag(0), TypeDefnInfo_32, 3) = ((MR_Box) (Var_76));
              MR_hl_field(MR_mktag(0), TypeDefnInfo_32, 4) = ((MR_Box) (Var_77));
              MR_hl_field(MR_mktag(0), TypeDefnInfo_32, 5) = ((MR_Box) (Var_78));
            }
            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), ((MR_Box) (TypeDefnInfo_32)), STATE_VARIABLE_IntTypeDefnsCord_0_6, &STATE_VARIABLE_IntTypeDefnsCord_59_59);
            STATE_VARIABLE_MaybeUnqual_52_52 = STATE_VARIABLE_MaybeUnqual_0_2;
            STATE_VARIABLE_ModuleNames_53_53 = STATE_VARIABLE_ModuleNames_0_4;
            STATE_VARIABLE_IntImplicitFIMLangs_55_55 = STATE_VARIABLE_IntImplicitFIMLangs_0_8;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeDefnInfo_65;

            {
              TypeDefnInfo_65 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeDefnInfo_65, 0) = ((MR_Box) (Var_68));
              MR_hl_field(MR_mktag(0), TypeDefnInfo_65, 1) = ((MR_Box) (Var_69));
              MR_hl_field(MR_mktag(0), TypeDefnInfo_65, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__comp_unit_interface_scalar_common_1[13])));
              MR_hl_field(MR_mktag(0), TypeDefnInfo_65, 3) = ((MR_Box) (Var_70));
              MR_hl_field(MR_mktag(0), TypeDefnInfo_65, 4) = ((MR_Box) (Var_71));
              MR_hl_field(MR_mktag(0), TypeDefnInfo_65, 5) = ((MR_Box) (Var_72));
            }
            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), ((MR_Box) (TypeDefnInfo_65)), STATE_VARIABLE_IntTypeDefnsCord_0_6, &STATE_VARIABLE_IntTypeDefnsCord_59_59);
            STATE_VARIABLE_MaybeUnqual_52_52 = STATE_VARIABLE_MaybeUnqual_0_2;
            STATE_VARIABLE_ModuleNames_53_53 = STATE_VARIABLE_ModuleNames_0_4;
            STATE_VARIABLE_IntImplicitFIMLangs_55_55 = STATE_VARIABLE_IntImplicitFIMLangs_0_8;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word DetailsEqv0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeDefn0_28, (MR_Integer) 0))));
            MR_Word EqvType0_42;

            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), ((MR_Box) (TypeDefnInfo0_22)), STATE_VARIABLE_IntTypeDefnsCord_0_6, &STATE_VARIABLE_IntTypeDefnsCord_59_59);
            EqvType0_42 = (MR_Word) (DetailsEqv0_41);
            parse_tree__comp_unit_interface__accumulate_modules_in_type_5_p_0(EqvType0_42, STATE_VARIABLE_MaybeUnqual_0_2, &STATE_VARIABLE_MaybeUnqual_52_52, STATE_VARIABLE_ModuleNames_0_4, &STATE_VARIABLE_ModuleNames_53_53);
            STATE_VARIABLE_IntImplicitFIMLangs_55_55 = STATE_VARIABLE_IntImplicitFIMLangs_0_8;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn0_28, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), ((MR_Box) (TypeDefnInfo0_22)), STATE_VARIABLE_IntTypeDefnsCord_0_6, &STATE_VARIABLE_IntTypeDefnsCord_59_59);
                STATE_VARIABLE_MaybeUnqual_52_52 = STATE_VARIABLE_MaybeUnqual_0_2;
                STATE_VARIABLE_ModuleNames_53_53 = STATE_VARIABLE_ModuleNames_0_4;
                STATE_VARIABLE_IntImplicitFIMLangs_55_55 = STATE_VARIABLE_IntImplicitFIMLangs_0_8;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word DetailsForeign0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn0_28, (MR_Integer) 1))));
                MR_Word DetailsForeign_36;
                MR_Word ForeignType_37;
                MR_Word Lang_40;
                MR_Word TypeDefn_66;
                MR_Word TypeDefnInfo_67;
                MR_Word Var_85;
                MR_Word Var_86;
                MR_Word Var_88;
                MR_Word Var_89;
                MR_Word Var_90;

                parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_117_99_95_112_114_101_100_115_95_102_114_111_109_95_102_111_114_101_105_103_110_95_116_121_112_101_95_95_91_49_93_95_48_2_p_0(DetailsForeign0_35, &DetailsForeign_36);
                {
                  TypeDefn_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), TypeDefn_66, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), TypeDefn_66, 1) = ((MR_Box) (DetailsForeign_36));
                }
                Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo0_22, (MR_Integer) 0))));
                Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo0_22, (MR_Integer) 1))));
                Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo0_22, (MR_Integer) 3))));
                Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo0_22, (MR_Integer) 4))));
                Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo0_22, (MR_Integer) 5))));
                {
                  TypeDefnInfo_67 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), TypeDefnInfo_67, 0) = ((MR_Box) (Var_85));
                  MR_hl_field(MR_mktag(0), TypeDefnInfo_67, 1) = ((MR_Box) (Var_86));
                  MR_hl_field(MR_mktag(0), TypeDefnInfo_67, 2) = ((MR_Box) (TypeDefn_66));
                  MR_hl_field(MR_mktag(0), TypeDefnInfo_67, 3) = ((MR_Box) (Var_88));
                  MR_hl_field(MR_mktag(0), TypeDefnInfo_67, 4) = ((MR_Box) (Var_89));
                  MR_hl_field(MR_mktag(0), TypeDefnInfo_67, 5) = ((MR_Box) (Var_90));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), ((MR_Box) (TypeDefnInfo_67)), STATE_VARIABLE_IntTypeDefnsCord_0_6, &STATE_VARIABLE_IntTypeDefnsCord_59_59);
                ForeignType_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_36, (MR_Integer) 0))));
                Lang_40 = parse_tree__prog_foreign__foreign_type_language_1_f_0(ForeignType_37);
                mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_40)), STATE_VARIABLE_IntImplicitFIMLangs_0_8, &STATE_VARIABLE_IntImplicitFIMLangs_55_55);
                STATE_VARIABLE_MaybeUnqual_52_52 = STATE_VARIABLE_MaybeUnqual_0_2;
                STATE_VARIABLE_ModuleNames_53_53 = STATE_VARIABLE_ModuleNames_0_4;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = TypeDefnInfos0_23;
      next_value_of_STATE_VARIABLE_MaybeUnqual_0_2 = STATE_VARIABLE_MaybeUnqual_52_52;
      next_value_of_STATE_VARIABLE_ModuleNames_0_4 = STATE_VARIABLE_ModuleNames_53_53;
      next_value_of_STATE_VARIABLE_IntTypeDefnsCord_0_6 = STATE_VARIABLE_IntTypeDefnsCord_59_59;
      next_value_of_STATE_VARIABLE_IntImplicitFIMLangs_0_8 = STATE_VARIABLE_IntImplicitFIMLangs_55_55;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_MaybeUnqual_0_2 = next_value_of_STATE_VARIABLE_MaybeUnqual_0_2;
      STATE_VARIABLE_ModuleNames_0_4 = next_value_of_STATE_VARIABLE_ModuleNames_0_4;
      STATE_VARIABLE_IntTypeDefnsCord_0_6 = next_value_of_STATE_VARIABLE_IntTypeDefnsCord_0_6;
      STATE_VARIABLE_IntImplicitFIMLangs_0_8 = next_value_of_STATE_VARIABLE_IntImplicitFIMLangs_0_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_117_99_95_112_114_101_100_115_95_102_114_111_109_95_102_111_114_101_105_103_110_95_116_121_112_101_95_95_91_49_93_95_48_2_p_0(
  MR_Word DetailsForeign0_3,
  MR_Word * DetailsForeign_4)
{
  {
    MR_Word MaybeCanonical0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_3, (MR_Integer) 1))));
    MR_Box Var_10 = (MR_hl_field(MR_mktag(0), DetailsForeign0_3, (MR_Integer) 0));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_3, (MR_Integer) 2))));

    if ((MaybeCanonical0_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *DetailsForeign_4 = DetailsForeign0_3;
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *DetailsForeign_4 = base;
        MR_hl_field(MR_mktag(0), base, 0) = Var_10;
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__comp_unit_interface_scalar_common_4[0])));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_type_5_p_0(
  MR_Word Type_6,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_21,
  MR_Word * STATE_VARIABLE_MaybeUnqual_22,
  MR_Word STATE_VARIABLE_ModuleNames_0_23,
  MR_Word * STATE_VARIABLE_ModuleNames_24)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Type_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_MaybeUnqual_22 = STATE_VARIABLE_MaybeUnqual_0_21;
          *STATE_VARIABLE_ModuleNames_24 = STATE_VARIABLE_ModuleNames_0_23;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SymName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type_6, (MR_Integer) 0))));
          MR_Word ArgTypes_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type_6, (MR_Integer) 1))));
          MR_Word STATE_VARIABLE_MaybeUnqual_29_29;
          MR_Word STATE_VARIABLE_ModuleNames_30_30;

          if (((MR_tag((MR_Word) SymName_12)) == (MR_Integer) 1))
          {
            MR_Word ModuleName_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_12, (MR_Integer) 0))));

            mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_50)), STATE_VARIABLE_ModuleNames_0_23, &STATE_VARIABLE_ModuleNames_30_30);
            STATE_VARIABLE_MaybeUnqual_29_29 = STATE_VARIABLE_MaybeUnqual_0_21;
          }
          else
          {
            STATE_VARIABLE_MaybeUnqual_29_29 = (MR_Integer) 1;
            STATE_VARIABLE_ModuleNames_30_30 = STATE_VARIABLE_ModuleNames_0_23;
          }
          parse_tree__comp_unit_interface__accumulate_modules_in_types_5_p_0(ArgTypes_13, STATE_VARIABLE_MaybeUnqual_29_29, STATE_VARIABLE_MaybeUnqual_22, STATE_VARIABLE_ModuleNames_30_30, STATE_VARIABLE_ModuleNames_24);
        }
        break;
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_MaybeUnqual_22 = STATE_VARIABLE_MaybeUnqual_0_21;
          *STATE_VARIABLE_ModuleNames_24 = STATE_VARIABLE_ModuleNames_0_23;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgTypes_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_6, (MR_Integer) 1))));

              parse_tree__comp_unit_interface__accumulate_modules_in_types_5_p_0(ArgTypes_41, STATE_VARIABLE_MaybeUnqual_0_21, STATE_VARIABLE_MaybeUnqual_22, STATE_VARIABLE_ModuleNames_0_23, STATE_VARIABLE_ModuleNames_24);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgTypes_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_6, (MR_Integer) 2))));

              parse_tree__comp_unit_interface__accumulate_modules_in_types_5_p_0(ArgTypes_40, STATE_VARIABLE_MaybeUnqual_0_21, STATE_VARIABLE_MaybeUnqual_22, STATE_VARIABLE_ModuleNames_0_23, STATE_VARIABLE_ModuleNames_24);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgTypes_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_6, (MR_Integer) 2))));

              parse_tree__comp_unit_interface__accumulate_modules_in_types_5_p_0(ArgTypes_36, STATE_VARIABLE_MaybeUnqual_0_21, STATE_VARIABLE_MaybeUnqual_22, STATE_VARIABLE_ModuleNames_0_23, STATE_VARIABLE_ModuleNames_24);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgType_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_6, (MR_Integer) 1))));
              MR_Word next_value_of_Type_6 = ArgType_20;

              // direct tailcall eliminated
              ;
              Type_6 = next_value_of_Type_6;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_types_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_2,
  MR_Word * STATE_VARIABLE_MaybeUnqual_3,
  MR_Word STATE_VARIABLE_ModuleNames_0_4,
  MR_Word * STATE_VARIABLE_ModuleNames_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleNames_5 = STATE_VARIABLE_ModuleNames_0_4;
      *STATE_VARIABLE_MaybeUnqual_3 = STATE_VARIABLE_MaybeUnqual_0_2;
    }
    else
    {
      MR_Word Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Types_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_MaybeUnqual_20_20;
      MR_Word STATE_VARIABLE_ModuleNames_21_21;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_MaybeUnqual_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleNames_0_4;

      parse_tree__comp_unit_interface__accumulate_modules_in_type_5_p_0(Type_12, STATE_VARIABLE_MaybeUnqual_0_2, &STATE_VARIABLE_MaybeUnqual_20_20, STATE_VARIABLE_ModuleNames_0_4, &STATE_VARIABLE_ModuleNames_21_21);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Types_13;
      next_value_of_STATE_VARIABLE_MaybeUnqual_0_2 = STATE_VARIABLE_MaybeUnqual_20_20;
      next_value_of_STATE_VARIABLE_ModuleNames_0_4 = STATE_VARIABLE_ModuleNames_21_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_MaybeUnqual_0_2 = next_value_of_STATE_VARIABLE_MaybeUnqual_0_2;
      STATE_VARIABLE_ModuleNames_0_4 = next_value_of_STATE_VARIABLE_ModuleNames_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__delete_uc_preds_from_du_type_2_p_0(
  MR_Word DetailsDu0_3,
  MR_Word * DetailsDu_4)
{
  {
    MR_Word MaybeCanonical_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_3, (MR_Integer) 2))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_3, (MR_Integer) 0))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_3, (MR_Integer) 1))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_3, (MR_Integer) 3))));

    if ((MaybeCanonical_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *DetailsDu_4 = DetailsDu0_3;
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *DetailsDu_4 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_10));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_11));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__comp_unit_interface_scalar_common_4[0])));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_15_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv19_STATE_VARIABLE_FIMSpecs_10;

    parse_tree__comp_unit_interface__add_self_fim_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv19_STATE_VARIABLE_FIMSpecs_10);
    *wrapper_arg_3 = ((MR_Box) (conv19_STATE_VARIABLE_FIMSpecs_10));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_15_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv16_STATE_VARIABLE_ImpForeignEnumItems_18;
    MR_Word conv15_STATE_VARIABLE_ImpImplicitFIMLangs_20;

    parse_tree__comp_unit_interface__add_foreign_enum_item_if_needed_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv16_STATE_VARIABLE_ImpForeignEnumItems_18, ((MR_Word) (wrapper_arg_4)), &conv15_STATE_VARIABLE_ImpImplicitFIMLangs_20);
    *wrapper_arg_3 = ((MR_Box) (conv16_STATE_VARIABLE_ImpForeignEnumItems_18));
    *wrapper_arg_5 = ((MR_Box) (conv15_STATE_VARIABLE_ImpImplicitFIMLangs_20));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_15_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_STATE_VARIABLE_ImpTypeDefns_19;
    MR_Word conv11_STATE_VARIABLE_ImpImplicitFIMLangs_21;

    parse_tree__comp_unit_interface__maybe_add_maybe_abstract_type_defns_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv12_STATE_VARIABLE_ImpTypeDefns_19, ((MR_Word) (wrapper_arg_5)), &conv11_STATE_VARIABLE_ImpImplicitFIMLangs_21);
    *wrapper_arg_4 = ((MR_Box) (conv12_STATE_VARIABLE_ImpTypeDefns_19));
    *wrapper_arg_6 = ((MR_Box) (conv11_STATE_VARIABLE_ImpImplicitFIMLangs_21));
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_15_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv10_ImportUse_8;

    succeeded = parse_tree__comp_unit_interface__make_imports_into_uses_maybe_implicit_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_ImportUse_8);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv10_ImportUse_8));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_15_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_ImpImplicitFIMLangs_12;

    parse_tree__comp_unit_interface__record_implicit_fim_lang_for_foreign_enum_imp_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_ImpImplicitFIMLangs_12);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_ImpImplicitFIMLangs_12));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_15_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_8;

    parse_tree__comp_unit_interface__record_modules_needed_by_typeclass_imp_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_8);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_8));
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_15_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__comp_unit_interface__keep_promise_item_int_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_ImpTypesMap_21;

    parse_tree__comp_unit_interface__record_type_defn_imp_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ImpTypesMap_21);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ImpTypesMap_21));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_IntImplicitFIMLangs_26;
    MR_Word conv0_STATE_VARIABLE_IntTypesMap_28;

    parse_tree__comp_unit_interface__record_type_defn_int_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_IntImplicitFIMLangs_26, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_IntTypesMap_28);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_IntImplicitFIMLangs_26));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_IntTypesMap_28));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_15_p_0(
  MR_Word Globals_16,
  MR_Word AugCompUnit_17,
  MR_Word * IntImportUseMap_18,
  MR_Word * IntExplicitFIMSpecs_19,
  MR_Word * ImpExplicitFIMSpecs_20,
  MR_Word * IntTypeDefns_21,
  MR_Word * IntInstDefns_22,
  MR_Word * IntModeDefns_23,
  MR_Word * IntTypeClasses_24,
  MR_Word * IntInstances_25,
  MR_Word * ImpTypeDefns_26,
  MR_Word * TypeCtorRepnMap_27,
  MR_Word * ParseTreeInt1_28,
  MR_Word STATE_VARIABLE_Specs_0_111,
  MR_Word * STATE_VARIABLE_Specs_112)
{
  {
    MR_bool succeeded;
    MR_Word ParseTreeModuleSrc_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_17, (MR_Integer) 3))));
    MR_Word DirectIntSpecs_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_17, (MR_Integer) 5))));
    MR_Word IndirectIntSpecs_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_17, (MR_Integer) 6))));
    MR_Word ModuleName_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, (MR_Integer) 0))));
    MR_Word ModuleNameContext_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, (MR_Integer) 1))));
    MR_Word IntInclMap_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, (MR_Integer) 2))));
    MR_Word ImpInclMap_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, (MR_Integer) 3))));
    MR_Word InclMap_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, (MR_Integer) 4))));
    MR_Word IntImportMap_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, (MR_Integer) 5))));
    MR_Word IntUseMap_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, (MR_Integer) 6))));
    MR_Word ImpImportMap_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, (MR_Integer) 7))));
    MR_Word ImpUseMap_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, (MR_Integer) 8))));
    MR_Word ImportUseMap0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, (MR_Integer) 9))));
    MR_Word IntFIMSpecMap_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, (MR_Integer) 10))));
    MR_Word ImpFIMSpecMap_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, (MR_Integer) 11))));
    MR_Word MaybeImplicitFIMLangs_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, (MR_Integer) 12))));
    MR_Word IntTypeDefnsAbs_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, (MR_Integer) 13))));
    MR_Word IntTypeDefnsMer_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, (MR_Integer) 14))));
    MR_Word IntTypeDefnsForeign_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, (MR_Integer) 15))));
    MR_Word IntPredDecls_57;
    MR_Word IntModeDecls_58;
    MR_Word IntDeclPragmas_59;
    MR_Word IntPromises0_60;
    MR_Word ImpTypeDefnsAbs_62;
    MR_Word ImpTypeDefnsMer_63;
    MR_Word ImpTypeDefnsForeign_64;
    MR_Word ImpTypeClasses_67;
    MR_Word ImpForeignEnums0_72;
    MR_Word OrigImpTypeDefns_80;
    MR_Word IntImplicitFIMLangs_81;
    MR_Word IntTypesMap_82;
    MR_Word ImpTypesMap_83;
    MR_Word IntPromises_84;
    MR_Word ImpModulesNeededByTypeClassDefns_85;
    MR_Word ImpImplicitFIMLangs1_86;
    MR_Word BothTypesMap_87;
    MR_Word NeededImpTypeCtors_88;
    MR_Word ImpModulesNeededByTypeDefns_89;
    MR_Word ImpNeededModules_90;
    MR_Word ImpImportUseMap1_91;
    MR_Word ImportUseMap_92;
    MR_Word ImpImportUseMap_93;
    MR_Word ImpImplicitFIMLangs2_94;
    MR_Word ImpForeignEnums_95;
    MR_Word ImpImplicitFIMLangs_96;
    MR_Word ImplicitFIMLangs_97;
    MR_Word IntFIMSpecs_98;
    MR_Word ImpFIMSpecs0_99;
    MR_Word ImpFIMSpecs_100;
    MR_Word IntTypeDefnMap_101;
    MR_Word IntInstDefnMap_102;
    MR_Word IntModeDefnMap_103;
    MR_Word OrigImpTypeDefnMap_104;
    MR_Word ImpTypeDefnMap_105;
    MR_Word ImpForeignEnumMap_106;
    MR_Word TypeCtorCheckedMap_107;
    MR_Word Experiment1_108;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_119;
    MR_Word Var_122;
    MR_Word Var_124;
    MR_Word Var_125;
    MR_Word Var_126;
    MR_Word Var_128;
    MR_Word Var_132;
    MR_Word Var_133;
    MR_Word STATE_VARIABLE_Specs_136_136;
    MR_Box conv3_IntImplicitFIMLangs_81;
    MR_Box conv2_IntTypesMap_82;
    MR_Box conv5_ImpTypesMap_83;
    MR_Box conv7_ImpModulesNeededByTypeClassDefns_85;
    MR_Box conv9_ImpImplicitFIMLangs1_86;
    MR_Box conv14_ImpTypeDefns_26;
    MR_Box conv13_ImpImplicitFIMLangs2_94;
    MR_Box conv18_ImpForeignEnums_95;
    MR_Box conv17_ImpImplicitFIMLangs_96;
    MR_Box conv20_IntFIMSpecs_98;
    MR_Box conv21_ImpFIMSpecs0_99;

    *IntInstDefns_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, (MR_Integer) 16))));
    *IntModeDefns_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, (MR_Integer) 17))));
    *IntTypeClasses_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, (MR_Integer) 18))));
    *IntInstances_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, (MR_Integer) 19))));
    IntPredDecls_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, (MR_Integer) 20))));
    IntModeDecls_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, (MR_Integer) 21))));
    IntDeclPragmas_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, (MR_Integer) 22))));
    IntPromises0_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, (MR_Integer) 23))));
    ImpTypeDefnsAbs_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, (MR_Integer) 25))));
    ImpTypeDefnsMer_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, (MR_Integer) 26))));
    ImpTypeDefnsForeign_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, (MR_Integer) 27))));
    ImpTypeClasses_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, (MR_Integer) 30))));
    ImpForeignEnums0_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, (MR_Integer) 35))));
    mercury__map__keys_as_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntFIMSpecMap_51, IntExplicitFIMSpecs_19);
    mercury__map__keys_as_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpFIMSpecMap_52, ImpExplicitFIMSpecs_20);
    Var_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), IntTypeDefnsMer_55, IntTypeDefnsForeign_56);
    *IntTypeDefns_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), IntTypeDefnsAbs_54, Var_113);
    Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), ImpTypeDefnsMer_63, ImpTypeDefnsForeign_64);
    OrigImpTypeDefns_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), ImpTypeDefnsAbs_62, Var_114);
    Var_116 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    Var_117 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]));
    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[21]), *IntTypeDefns_21, ((MR_Box) (Var_116)), &conv3_IntImplicitFIMLangs_81, ((MR_Box) (Var_117)), &conv2_IntTypesMap_82);
    IntImplicitFIMLangs_81 = ((MR_Word) (conv3_IntImplicitFIMLangs_81));
    IntTypesMap_82 = ((MR_Word) (conv2_IntTypesMap_82));
    Var_119 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[22]), OrigImpTypeDefns_80, ((MR_Box) (Var_119)), &conv5_ImpTypesMap_83);
    ImpTypesMap_83 = ((MR_Word) (conv5_ImpTypesMap_83));
    mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[23]), IntPromises0_60, &IntPromises_84);
    Var_122 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[5]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[24]), ImpTypeClasses_67, ((MR_Box) (Var_122)), &conv7_ImpModulesNeededByTypeClassDefns_85);
    ImpModulesNeededByTypeClassDefns_85 = ((MR_Word) (conv7_ImpModulesNeededByTypeClassDefns_85));
    Var_124 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[25]), ImpForeignEnums0_72, ((MR_Box) (Var_124)), &conv9_ImpImplicitFIMLangs1_86);
    ImpImplicitFIMLangs1_86 = ((MR_Word) (conv9_ImpImplicitFIMLangs1_86));
    BothTypesMap_87 = mercury__one_or_more_map__merge_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), IntTypesMap_82, ImpTypesMap_83);
    parse_tree__comp_unit_interface__get_requirements_of_imp_exported_types_5_p_0(IntTypesMap_82, ImpTypesMap_83, BothTypesMap_87, &NeededImpTypeCtors_88, &ImpModulesNeededByTypeDefns_89);
    mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpModulesNeededByTypeClassDefns_85, ImpModulesNeededByTypeDefns_89, &ImpNeededModules_90);
    mercury__one_or_more_map__merge_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntImportMap_46, IntUseMap_47, IntImportUseMap_18);
    mercury__one_or_more_map__merge_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpImportMap_48, ImpUseMap_49, &ImpImportUseMap1_91);
    {
      Var_125 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_125, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), Var_125, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_15_p_0_6));
      MR_hl_field(MR_mktag(0), Var_125, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_125, 3) = ((MR_Box) (ImpNeededModules_90));
    }
    mercury__map__filter_map_values_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), Var_125, ImportUseMap0_50, &ImportUseMap_92);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpNeededModules_90);
    if (succeeded)
      mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), &ImpImportUseMap_93);
    else
      mercury__one_or_more_map__select_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpImportUseMap1_91, ImpNeededModules_90, &ImpImportUseMap_93);
    {
      Var_126 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_126, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_12[0]));
      MR_hl_field(MR_mktag(0), Var_126, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_15_p_0_7));
      MR_hl_field(MR_mktag(0), Var_126, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_126, 3) = ((MR_Box) (BothTypesMap_87));
      MR_hl_field(MR_mktag(0), Var_126, 4) = ((MR_Box) (IntTypesMap_82));
      MR_hl_field(MR_mktag(0), Var_126, 5) = ((MR_Box) (NeededImpTypeCtors_88));
    }
    mercury__map__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[6]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[3]), Var_126, ImpTypesMap_83, ((MR_Box) ((MR_Unsigned) 0U)), &conv14_ImpTypeDefns_26, ((MR_Box) (ImpImplicitFIMLangs1_86)), &conv13_ImpImplicitFIMLangs2_94);
    *ImpTypeDefns_26 = ((MR_Word) (conv14_ImpTypeDefns_26));
    ImpImplicitFIMLangs2_94 = ((MR_Word) (conv13_ImpImplicitFIMLangs2_94));
    {
      Var_128 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_128, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_128, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_15_p_0_8));
      MR_hl_field(MR_mktag(0), Var_128, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_128, 3) = ((MR_Box) (IntTypesMap_82));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[7]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[3]), Var_128, ImpForeignEnums0_72, ((MR_Box) ((MR_Unsigned) 0U)), &conv18_ImpForeignEnums_95, ((MR_Box) (ImpImplicitFIMLangs2_94)), &conv17_ImpImplicitFIMLangs_96);
    ImpForeignEnums_95 = ((MR_Word) (conv18_ImpForeignEnums_95));
    ImpImplicitFIMLangs_96 = ((MR_Word) (conv17_ImpImplicitFIMLangs_96));
    if ((MaybeImplicitFIMLangs_53 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.generate_interface_int1\'/15", (MR_String) "MaybeImplicitFIMLangs = no");
        return;
      }
    else
      ImplicitFIMLangs_97 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeImplicitFIMLangs_53, (MR_Integer) 0))));
    {
      Var_132 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_132, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_11[1]));
      MR_hl_field(MR_mktag(0), Var_132, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_15_p_0_9));
      MR_hl_field(MR_mktag(0), Var_132, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_132, 3) = ((MR_Box) (ModuleName_41));
    }
    Var_133 = mercury__set__union_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), IntImplicitFIMLangs_81, ImplicitFIMLangs_97);
    mercury__set__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[8]), Var_132, Var_133, ((MR_Box) (*IntExplicitFIMSpecs_19)), &conv20_IntFIMSpecs_98);
    IntFIMSpecs_98 = ((MR_Word) (conv20_IntFIMSpecs_98));
    mercury__set__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[8]), Var_132, ImpImplicitFIMLangs_96, ((MR_Box) (*ImpExplicitFIMSpecs_20)), &conv21_ImpFIMSpecs0_99);
    ImpFIMSpecs0_99 = ((MR_Word) (conv21_ImpFIMSpecs0_99));
    mercury__set__difference_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ImpFIMSpecs0_99, IntFIMSpecs_98, &ImpFIMSpecs_100);
    IntTypeDefnMap_101 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(*IntTypeDefns_21);
    IntInstDefnMap_102 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(*IntInstDefns_22);
    IntModeDefnMap_103 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(*IntModeDefns_23);
    OrigImpTypeDefnMap_104 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(OrigImpTypeDefns_80);
    ImpTypeDefnMap_105 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(*ImpTypeDefns_26);
    ImpForeignEnumMap_106 = parse_tree__convert_parse_tree__type_ctor_foreign_enum_items_to_map_1_f_0(ImpForeignEnums_95);
    parse_tree__check_parse_tree_type_defns__create_type_ctor_checked_map_7_p_0((MR_Integer) 1, IntTypeDefnMap_101, OrigImpTypeDefnMap_104, ImpForeignEnumMap_106, &TypeCtorCheckedMap_107, STATE_VARIABLE_Specs_0_111, &STATE_VARIABLE_Specs_136_136);
    libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 706, &Experiment1_108);
    switch (Experiment1_108) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[9]), TypeCtorRepnMap_27);
          *STATE_VARIABLE_Specs_112 = STATE_VARIABLE_Specs_136_136;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word RepnSpecs_109;

          parse_tree__decide_type_repn__decide_repns_for_all_types_for_int1_7_p_0(Globals_16, ModuleName_41, TypeCtorCheckedMap_107, DirectIntSpecs_35, IndirectIntSpecs_36, TypeCtorRepnMap_27, &RepnSpecs_109);
          *STATE_VARIABLE_Specs_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), STATE_VARIABLE_Specs_136_136, RepnSpecs_109);
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (24 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt1_28 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_41));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_42));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (IntInclMap_43));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ImpInclMap_44));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (InclMap_45));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (*IntImportUseMap_18));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ImpImportUseMap_93));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ImportUseMap_92));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (IntFIMSpecs_98));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ImpFIMSpecs_100));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (IntTypeDefnMap_101));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (IntInstDefnMap_102));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (IntModeDefnMap_103));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (*IntTypeClasses_24));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (*IntInstances_25));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (IntPredDecls_57));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (IntModeDecls_58));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (IntDeclPragmas_59));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (IntPromises_84));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (*TypeCtorRepnMap_27));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (ImpTypeDefnMap_105));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (ImpForeignEnumMap_106));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (ImpTypeClasses_67));
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_requirements_of_imp_exported_types_5_p_0_2(
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
    MR_Word conv8_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16;
    MR_Word conv7_STATE_VARIABLE_DuArgTypeCtors_18;
    MR_Word conv6_STATE_VARIABLE_ModulesNeededByTypeDefns_20;

    parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_rhs_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16, ((MR_Word) (wrapper_arg_4)), &conv7_STATE_VARIABLE_DuArgTypeCtors_18, ((MR_Word) (wrapper_arg_6)), &conv6_STATE_VARIABLE_ModulesNeededByTypeDefns_20);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16));
    *wrapper_arg_5 = ((MR_Box) (conv7_STATE_VARIABLE_DuArgTypeCtors_18));
    *wrapper_arg_7 = ((MR_Box) (conv6_STATE_VARIABLE_ModulesNeededByTypeDefns_20));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_requirements_of_imp_exported_types_5_p_0_1(
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
    MR_Word conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23;
    MR_Word conv1_STATE_VARIABLE_AbsExpEnumTypeCtors_25;
    MR_Word conv0_STATE_VARIABLE_DirectDummyTypeCtors_27;

    parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_AbsExpEnumTypeCtors_25, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_DirectDummyTypeCtors_27);
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23));
    *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_AbsExpEnumTypeCtors_25));
    *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_DirectDummyTypeCtors_27));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_requirements_of_imp_exported_types_5_p_0(
  MR_Word IntTypesMap_6,
  MR_Word ImpTypesMap_7,
  MR_Word BothTypesMap_8,
  MR_Word * NeededImpTypeCtors_9,
  MR_Word * ModulesNeededByTypeDefns_10)
{
  {
    MR_Word AbsExpEqvLhsTypeCtors_11;
    MR_Word AbsExpEnumTypeCtors_12;
    MR_Word DirectDummyTypeCtors_13;
    MR_Word AbsExpEqvRhsTypeCtors_14;
    MR_Word DuArgTypeCtors_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Box conv5_AbsExpEqvLhsTypeCtors_11;
    MR_Box conv4_AbsExpEnumTypeCtors_12;
    MR_Box conv3_DirectDummyTypeCtors_13;
    MR_Box conv11_AbsExpEqvRhsTypeCtors_14;
    MR_Box conv10_DuArgTypeCtors_15;
    MR_Box conv9_ModulesNeededByTypeDefns_10;

    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (parse_tree__comp_unit_interface__get_requirements_of_imp_exported_types_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (IntTypesMap_6));
      MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (BothTypesMap_8));
    }
    Var_17 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    Var_18 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    Var_19 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    mercury__map__foldl3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), Var_16, ImpTypesMap_7, ((MR_Box) (Var_17)), &conv5_AbsExpEqvLhsTypeCtors_11, ((MR_Box) (Var_18)), &conv4_AbsExpEnumTypeCtors_12, ((MR_Box) (Var_19)), &conv3_DirectDummyTypeCtors_13);
    AbsExpEqvLhsTypeCtors_11 = ((MR_Word) (conv5_AbsExpEqvLhsTypeCtors_11));
    AbsExpEnumTypeCtors_12 = ((MR_Word) (conv4_AbsExpEnumTypeCtors_12));
    DirectDummyTypeCtors_13 = ((MR_Word) (conv3_DirectDummyTypeCtors_13));
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (parse_tree__comp_unit_interface__get_requirements_of_imp_exported_types_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (ImpTypesMap_7));
    }
    Var_21 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    Var_22 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    Var_23 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__set__fold3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[5]), Var_20, AbsExpEqvLhsTypeCtors_11, ((MR_Box) (Var_21)), &conv11_AbsExpEqvRhsTypeCtors_14, ((MR_Box) (Var_22)), &conv10_DuArgTypeCtors_15, ((MR_Box) (Var_23)), &conv9_ModulesNeededByTypeDefns_10);
    AbsExpEqvRhsTypeCtors_14 = ((MR_Word) (conv11_AbsExpEqvRhsTypeCtors_14));
    DuArgTypeCtors_15 = ((MR_Word) (conv10_DuArgTypeCtors_15));
    *ModulesNeededByTypeDefns_10 = ((MR_Word) (conv9_ModulesNeededByTypeDefns_10));
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (DuArgTypeCtors_15));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (DirectDummyTypeCtors_13));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (AbsExpEnumTypeCtors_12));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (AbsExpEqvRhsTypeCtors_14));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (AbsExpEqvLhsTypeCtors_11));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_25));
    }
    *NeededImpTypeCtors_9 = mercury__set__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_24);
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__2_2;

    conv4_HeadVar__2_2 = parse_tree__comp_unit_interface__make_typeclass_abstract_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_ItemTypeDefn_4;

    parse_tree__comp_unit_interface__delete_uc_preds_make_solver_type_dummy_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_ItemTypeDefn_4);
    *wrapper_arg_2 = ((MR_Box) (conv3_ItemTypeDefn_4));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_ItemTypeDefn_4;

    parse_tree__comp_unit_interface__delete_uc_preds_make_solver_type_dummy_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_ItemTypeDefn_4);
    *wrapper_arg_2 = ((MR_Box) (conv2_ItemTypeDefn_4));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_ItemTypeDefn_4;

    parse_tree__comp_unit_interface__delete_uc_preds_make_solver_type_dummy_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_ItemTypeDefn_4);
    *wrapper_arg_2 = ((MR_Box) (conv1_ItemTypeDefn_4));
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__comp_unit_interface__make_instance_abstract_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0(
  MR_Word ParseTreeModuleSrc_3,
  MR_Word * IntParseTreeModuleSrc_4)
{
  {
    MR_Word ModuleName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 0))));
    MR_Word ModuleNameContext_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 1))));
    MR_Word IntInclMap_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 2))));
    MR_Word ImpInclMap_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 3))));
    MR_Word InclMap_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 4))));
    MR_Word IntImportMap_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 5))));
    MR_Word IntUseMap_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 6))));
    MR_Word ImpImportMap_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 7))));
    MR_Word ImpUseMap_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 8))));
    MR_Word ImportUseMap_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 9))));
    MR_Word IntFIMSpecMap_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 10))));
    MR_Word ImpFIMSpecMap_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 11))));
    MR_Word MaybeImplicitFIMLangs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 12))));
    MR_Word IntTypeDefnsAbs_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 13))));
    MR_Word IntTypeDefnsMer_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 14))));
    MR_Word IntTypeDefnsFor_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 15))));
    MR_Word IntInstDefns_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 16))));
    MR_Word IntModeDefns_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 17))));
    MR_Word IntTypeClasses_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 18))));
    MR_Word IntInstances_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 19))));
    MR_Word IntPredDecls_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 20))));
    MR_Word IntModeDecls_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 21))));
    MR_Word IntDeclPragmas_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 22))));
    MR_Word IntPromises_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 23))));
    MR_Word IntBadPreds_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 24))));
    MR_Word ImpTypeDefnsAbs0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 25))));
    MR_Word ImpTypeDefnsMer0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 26))));
    MR_Word ImpTypeDefnsFor0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 27))));
    MR_Word ImpTypeClasses_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 30))));
    MR_Word ImpForeignEnums_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 35))));
    MR_Word IntInstancesAbstract_48;
    MR_Word ImpTypeDefnsAbs_49;
    MR_Word ImpTypeDefnsMer_50;
    MR_Word ImpTypeDefnsFor_51;
    MR_Word AbstractImpTypeClasses_52;

    IntInstancesAbstract_48 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[16]), IntInstances_24);
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[17]), ImpTypeDefnsAbs0_30, &ImpTypeDefnsAbs_49);
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[18]), ImpTypeDefnsMer0_31, &ImpTypeDefnsMer_50);
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[19]), ImpTypeDefnsFor0_32, &ImpTypeDefnsFor_51);
    AbstractImpTypeClasses_52 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[20]), ImpTypeClasses_35);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
      *IntParseTreeModuleSrc_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_6));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (IntInclMap_7));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ImpInclMap_8));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (InclMap_9));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (IntImportMap_10));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (IntUseMap_11));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ImpImportMap_12));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ImpUseMap_13));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ImportUseMap_14));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (IntFIMSpecMap_15));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ImpFIMSpecMap_16));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (MaybeImplicitFIMLangs_17));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (IntTypeDefnsAbs_18));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (IntTypeDefnsMer_19));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (IntTypeDefnsFor_20));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (IntInstDefns_21));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (IntModeDefns_22));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (IntTypeClasses_23));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (IntInstancesAbstract_48));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (IntPredDecls_25));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (IntModeDecls_26));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (IntDeclPragmas_27));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (IntPromises_28));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (IntBadPreds_29));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (ImpTypeDefnsAbs_49));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (ImpTypeDefnsMer_50));
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (ImpTypeDefnsFor_51));
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 29) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 30) = ((MR_Box) (AbstractImpTypeClasses_52));
      MR_hl_field(MR_mktag(0), base, 31) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 32) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 33) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 34) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 35) = ((MR_Box) (ImpForeignEnums_40));
      MR_hl_field(MR_mktag(0), base, 36) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 37) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 38) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 39) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 40) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 41) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 42) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__3_3;

    conv4_HeadVar__3_3 = parse_tree__prog_mutable__declare_mutable_aux_preds_for_int0_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_2;

    conv3_HeadVar__2_2 = parse_tree__comp_unit_interface__make_instance_abstract_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    conv2_HeadVar__2_2 = parse_tree__comp_unit_interface__make_instance_abstract_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    conv1_HeadVar__3_3 = parse_tree__item_util__fim_module_lang_to_spec_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

void MR_CALL 
parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0(
  MR_Word AugCompUnit_5,
  MR_Word * ParseTreeInt0_6,
  MR_Word STATE_VARIABLE_Specs_0_82,
  MR_Word * STATE_VARIABLE_Specs_83)
{
  {
    MR_bool succeeded;
    MR_Word ModuleVersionNumbers_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 2))));
    MR_Word ParseTreeModuleSrc_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 3))));
    MR_Word ModuleName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 0))));
    MR_Word MaybeVersionNumbers_21;
    MR_Word ModuleNameContext_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 1))));
    MR_Word IntInclMap_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 2))));
    MR_Word ImpInclMap_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 3))));
    MR_Word InclMap_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 4))));
    MR_Word IntImportMap_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 5))));
    MR_Word IntUseMap_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 6))));
    MR_Word ImpImportMap_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 7))));
    MR_Word ImpUseMap_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 8))));
    MR_Word ImportUseMap_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 9))));
    MR_Word IntFIMSpecMap_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 10))));
    MR_Word ImpFIMSpecMap_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 11))));
    MR_Word MaybeImplicitFIMLangs_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 12))));
    MR_Word IntTypeDefnsAbs_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 13))));
    MR_Word IntTypeDefnsMer_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 14))));
    MR_Word IntTypeDefnsForeign_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 15))));
    MR_Word IntInstDefns_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 16))));
    MR_Word IntModeDefns_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 17))));
    MR_Word IntTypeClasses_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 18))));
    MR_Word IntInstances0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 19))));
    MR_Word IntPredDecls_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 20))));
    MR_Word IntModeDecls_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 21))));
    MR_Word IntDeclPragmas_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 22))));
    MR_Word IntPromises_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 23))));
    MR_Word ImpTypeDefnsAbs_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 25))));
    MR_Word ImpTypeDefnsMer_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 26))));
    MR_Word ImpTypeDefnsForeign_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 27))));
    MR_Word ImpInstDefns_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 28))));
    MR_Word ImpModeDefns_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 29))));
    MR_Word ImpTypeClasses_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 30))));
    MR_Word ImpInstances0_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 31))));
    MR_Word ImpPredDecls0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 32))));
    MR_Word ImpModeDecls_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 33))));
    MR_Word ImpForeignEnums_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 35))));
    MR_Word ImpDeclPragmas_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 37))));
    MR_Word ImpPromises_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 39))));
    MR_Word ImpMutables_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 42))));
    MR_Word IntFIMSpecs0_64;
    MR_Word ImpFIMSpecs0_65;
    MR_Word IntFIMSpecs_67;
    MR_Word ImpFIMSpecs_68;
    MR_Word IntInstances_69;
    MR_Word ImpInstances_70;
    MR_Word ImpPredDecls_71;
    MR_Word IntTypeDefns_72;
    MR_Word ImpTypeDefns_73;
    MR_Word IntTypeDefnMap_74;
    MR_Word IntInstDefnMap_75;
    MR_Word IntModeDefnMap_76;
    MR_Word ImpTypeDefnMap_77;
    MR_Word ImpInstDefnMap_78;
    MR_Word ImpModeDefnMap_79;
    MR_Word ImpForeignEnumMap_80;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word VersionNumbers_20;
    MR_Box conv0_VersionNumbers_20;
    MR_Word _TypeCtorCheckedMap_81;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_version_numbers_0), ModuleVersionNumbers_10, ((MR_Box) (ModuleName_19)), &conv0_VersionNumbers_20);
    if (succeeded)
    {
      VersionNumbers_20 = ((MR_Word) (conv0_VersionNumbers_20));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      {
        MaybeVersionNumbers_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeVersionNumbers_21, 0) = ((MR_Box) (VersionNumbers_20));
      }
    else
      MaybeVersionNumbers_21 = (MR_Word) ((MR_Unsigned) 0U);
    mercury__map__keys_as_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntFIMSpecMap_31, &IntFIMSpecs0_64);
    mercury__map__keys_as_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpFIMSpecMap_32, &ImpFIMSpecs0_65);
    if ((MaybeImplicitFIMLangs_33 == (MR_Word) ((MR_Unsigned) 0U)))
      IntFIMSpecs_67 = IntFIMSpecs0_64;
    else
    {
      MR_Word ImplicitFIMLangs_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeImplicitFIMLangs_33, (MR_Integer) 0))));
      MR_Word Var_84;
      MR_Word Var_85;

      {
        Var_85 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[0]));
        MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (ModuleName_19));
      }
      Var_84 = mercury__set__map_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_85, ImplicitFIMLangs_66);
      mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_84, IntFIMSpecs0_64, &IntFIMSpecs_67);
    }
    mercury__set__difference_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ImpFIMSpecs0_65, IntFIMSpecs_67, &ImpFIMSpecs_68);
    IntInstances_69 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[14]), IntInstances0_40);
    ImpInstances_70 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[15]), ImpInstances0_52);
    {
      Var_90 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_4));
      MR_hl_field(MR_mktag(0), Var_90, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_90, 3) = ((MR_Box) (ModuleName_19));
    }
    Var_89 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[2]), Var_90, ImpMutables_63);
    Var_88 = mercury__list__condense_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), Var_89);
    ImpPredDecls_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), ImpPredDecls0_53, Var_88);
    Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), IntTypeDefnsMer_35, IntTypeDefnsForeign_36);
    IntTypeDefns_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), IntTypeDefnsAbs_34, Var_91);
    Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), ImpTypeDefnsMer_47, ImpTypeDefnsForeign_48);
    ImpTypeDefns_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), ImpTypeDefnsAbs_46, Var_92);
    IntTypeDefnMap_74 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(IntTypeDefns_72);
    IntInstDefnMap_75 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns_37);
    IntModeDefnMap_76 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns_38);
    ImpTypeDefnMap_77 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(ImpTypeDefns_73);
    ImpInstDefnMap_78 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(ImpInstDefns_49);
    ImpModeDefnMap_79 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(ImpModeDefns_50);
    ImpForeignEnumMap_80 = parse_tree__convert_parse_tree__type_ctor_foreign_enum_items_to_map_1_f_0(ImpForeignEnums_56);
    parse_tree__check_parse_tree_type_defns__create_type_ctor_checked_map_7_p_0((MR_Integer) 1, IntTypeDefnMap_74, ImpTypeDefnMap_77, ImpForeignEnumMap_80, &_TypeCtorCheckedMap_81, STATE_VARIABLE_Specs_0_82, STATE_VARIABLE_Specs_83);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (32 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt0_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_22));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeVersionNumbers_21));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (IntInclMap_23));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ImpInclMap_24));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (InclMap_25));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (IntImportMap_26));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (IntUseMap_27));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ImpImportMap_28));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ImpUseMap_29));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ImportUseMap_30));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (IntFIMSpecs_67));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ImpFIMSpecs_68));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (IntTypeDefnMap_74));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (IntInstDefnMap_75));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (IntModeDefnMap_76));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (IntTypeClasses_39));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (IntInstances_69));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (IntPredDecls_41));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (IntModeDecls_42));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (IntDeclPragmas_43));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (IntPromises_44));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (ImpTypeDefnMap_77));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (ImpInstDefnMap_78));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (ImpModeDefnMap_79));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (ImpTypeClasses_51));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (ImpInstances_70));
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (ImpPredDecls_71));
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (ImpModeDecls_54));
      MR_hl_field(MR_mktag(0), base, 29) = ((MR_Box) (ImpForeignEnumMap_80));
      MR_hl_field(MR_mktag(0), base, 30) = ((MR_Box) (ImpDeclPragmas_58));
      MR_hl_field(MR_mktag(0), base, 31) = ((MR_Box) (ImpPromises_60));
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv13_AllDefns_4;

    parse_tree__comp_unit_interface__keep_only_one_abstract_type_defn_2_p_0(((MR_Word) (wrapper_arg_1)), &conv13_AllDefns_4);
    *wrapper_arg_2 = ((MR_Box) (conv13_AllDefns_4));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_ItemTypeDefn_4;

    parse_tree__comp_unit_interface__make_type_defn_abstract_type_for_int3_2_p_0(((MR_Word) (wrapper_arg_1)), &conv12_ItemTypeDefn_4);
    *wrapper_arg_2 = ((MR_Box) (conv12_ItemTypeDefn_4));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv9_STATE_VARIABLE_ContextMap_21;
    MR_Word conv8_STATE_VARIABLE_ImportUseMap_23;

    parse_tree__comp_unit_interface__acc_int_imports_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_ContextMap_21, ((MR_Word) (wrapper_arg_5)), &conv8_STATE_VARIABLE_ImportUseMap_23);
    *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_ContextMap_21));
    *wrapper_arg_6 = ((MR_Box) (conv8_STATE_VARIABLE_ImportUseMap_23));
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv7_HeadVar__2_2;

    conv7_HeadVar__2_2 = parse_tree__comp_unit_interface__make_instance_abstract_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv6_TypeClass_4;

    conv6_TypeClass_4 = parse_tree__comp_unit_interface__make_typeclass_abstract_for_int3_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv6_TypeClass_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__2_2;

    conv5_HeadVar__2_2 = parse_tree__comp_unit_interface__make_mode_defn_abstract_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__2_2;

    conv4_HeadVar__2_2 = parse_tree__comp_unit_interface__make_inst_defn_abstract_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ContextMap_14;
    MR_Word conv0_STATE_VARIABLE_IncludeMap_16;

    parse_tree__comp_unit_interface__acc_int_includes_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_ContextMap_14, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_IncludeMap_16);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_ContextMap_14));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_IncludeMap_16));
  }
}

void MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0(
  MR_Word Globals_6,
  MR_Word ParseTreeModuleSrc_7,
  MR_Word * ParseTreeInt3_8,
  MR_Word STATE_VARIABLE_Specs_0_77,
  MR_Word * STATE_VARIABLE_Specs_78)
{
  {
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_7, (MR_Integer) 0))));
    MR_Word ModuleNameContext_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_7, (MR_Integer) 1))));
    MR_Word OrigInclMap_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_7, (MR_Integer) 4))));
    MR_Word OrigImportUseMap_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_7, (MR_Integer) 9))));
    MR_Word OrigIntTypeDefnsAbs_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_7, (MR_Integer) 13))));
    MR_Word OrigIntTypeDefnsMer_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_7, (MR_Integer) 14))));
    MR_Word OrigIntTypeDefnsFor_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_7, (MR_Integer) 15))));
    MR_Word OrigIntInstDefns_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_7, (MR_Integer) 16))));
    MR_Word OrigIntModeDefns_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_7, (MR_Integer) 17))));
    MR_Word OrigIntTypeClasses_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_7, (MR_Integer) 18))));
    MR_Word OrigIntInstances_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_7, (MR_Integer) 19))));
    MR_Word OrigImpTypeDefnsAbs_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_7, (MR_Integer) 25))));
    MR_Word OrigImpTypeDefnsMer_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_7, (MR_Integer) 26))));
    MR_Word OrigImpTypeDefnsFor_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_7, (MR_Integer) 27))));
    MR_Word OrigImpForeignEnums_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_7, (MR_Integer) 35))));
    MR_Word IntInclMap_53;
    MR_Word InclMap_54;
    MR_Word IntInstDefns_55;
    MR_Word IntModeDefns_56;
    MR_Word IntTypeClasses_57;
    MR_Word IntInstances_58;
    MR_Word IntImportMap_59;
    MR_Word ImportUseMap_60;
    MR_Word OrigIntTypeDefns_63;
    MR_Word OrigImpTypeDefns_64;
    MR_Word IntTypeDefns_65;
    MR_Word IntTypeDefnMap0_66;
    MR_Word IntInstDefnMap_67;
    MR_Word IntModeDefnMap_68;
    MR_Word IntTypeDefnMap_69;
    MR_Word OrigIntTypeDefnMap_70;
    MR_Word OrigImpTypeDefnMap_71;
    MR_Word OrigImpForeignEnumMap_72;
    MR_Word TypeCtorCheckedMap_73;
    MR_Word IntTypeRepnMap_74;
    MR_Word OrigParseTreeInt3_75;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Box conv3_IntInclMap_53;
    MR_Box conv2_InclMap_54;
    MR_Word _Specs_76;

    Var_80 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    Var_81 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0));
    mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[0]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[1]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[6]), OrigInclMap_14, ((MR_Box) (Var_80)), &conv3_IntInclMap_53, ((MR_Box) (Var_81)), &conv2_InclMap_54);
    IntInclMap_53 = ((MR_Word) (conv3_IntInclMap_53));
    InclMap_54 = ((MR_Word) (conv2_InclMap_54));
    IntInstDefns_55 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[7]), OrigIntInstDefns_26);
    IntModeDefns_56 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[8]), OrigIntModeDefns_27);
    IntTypeClasses_57 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[9]), OrigIntTypeClasses_28);
    IntInstances_58 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[10]), OrigIntInstances_29);
    if ((IntInstances_58 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__one_or_more_map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), &IntImportMap_59);
      mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), &ImportUseMap_60);
    }
    else
    {
      MR_Word Var_87;
      MR_Word Var_88;
      MR_Box conv11_IntImportMap_59;
      MR_Box conv10_ImportUseMap_60;

      Var_87 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
      Var_88 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0));
      mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[0]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[2]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[11]), OrigImportUseMap_19, ((MR_Box) (Var_87)), &conv11_IntImportMap_59, ((MR_Box) (Var_88)), &conv10_ImportUseMap_60);
      IntImportMap_59 = ((MR_Word) (conv11_IntImportMap_59));
      ImportUseMap_60 = ((MR_Word) (conv10_ImportUseMap_60));
    }
    Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), OrigIntTypeDefnsMer_24, OrigIntTypeDefnsFor_25);
    OrigIntTypeDefns_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), OrigIntTypeDefnsAbs_23, Var_89);
    Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), OrigImpTypeDefnsMer_36, OrigImpTypeDefnsFor_37);
    OrigImpTypeDefns_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), OrigImpTypeDefnsAbs_35, Var_90);
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[12]), OrigIntTypeDefns_63, &IntTypeDefns_65);
    IntTypeDefnMap0_66 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(IntTypeDefns_65);
    IntInstDefnMap_67 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns_55);
    IntModeDefnMap_68 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns_56);
    mercury__map__map_values_only_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[13]), IntTypeDefnMap0_66, &IntTypeDefnMap_69);
    OrigIntTypeDefnMap_70 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(OrigIntTypeDefns_63);
    OrigImpTypeDefnMap_71 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(OrigImpTypeDefns_64);
    OrigImpForeignEnumMap_72 = parse_tree__convert_parse_tree__type_ctor_foreign_enum_items_to_map_1_f_0(OrigImpForeignEnums_45);
    parse_tree__check_parse_tree_type_defns__create_type_ctor_checked_map_7_p_0((MR_Integer) 0, OrigIntTypeDefnMap_70, OrigImpTypeDefnMap_71, OrigImpForeignEnumMap_72, &TypeCtorCheckedMap_73, STATE_VARIABLE_Specs_0_77, STATE_VARIABLE_Specs_78);
    parse_tree__decide_type_repn__decide_repns_for_simple_types_for_int3_3_p_0(ModuleName_10, TypeCtorCheckedMap_73, &IntTypeRepnMap_74);
    {
      OrigParseTreeInt3_75 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OrigParseTreeInt3_75, 0) = ((MR_Box) (ModuleName_10));
      MR_hl_field(MR_mktag(0), OrigParseTreeInt3_75, 1) = ((MR_Box) (ModuleNameContext_11));
      MR_hl_field(MR_mktag(0), OrigParseTreeInt3_75, 2) = ((MR_Box) (IntInclMap_53));
      MR_hl_field(MR_mktag(0), OrigParseTreeInt3_75, 3) = ((MR_Box) (InclMap_54));
      MR_hl_field(MR_mktag(0), OrigParseTreeInt3_75, 4) = ((MR_Box) (IntImportMap_59));
      MR_hl_field(MR_mktag(0), OrigParseTreeInt3_75, 5) = ((MR_Box) (ImportUseMap_60));
      MR_hl_field(MR_mktag(0), OrigParseTreeInt3_75, 6) = ((MR_Box) (IntTypeDefnMap_69));
      MR_hl_field(MR_mktag(0), OrigParseTreeInt3_75, 7) = ((MR_Box) (IntInstDefnMap_67));
      MR_hl_field(MR_mktag(0), OrigParseTreeInt3_75, 8) = ((MR_Box) (IntModeDefnMap_68));
      MR_hl_field(MR_mktag(0), OrigParseTreeInt3_75, 9) = ((MR_Box) (IntTypeClasses_57));
      MR_hl_field(MR_mktag(0), OrigParseTreeInt3_75, 10) = ((MR_Box) (IntInstances_58));
      MR_hl_field(MR_mktag(0), OrigParseTreeInt3_75, 11) = ((MR_Box) (IntTypeRepnMap_74));
    }
    parse_tree__module_qual__module_qualify_parse_tree_int3_5_p_0(Globals_6, OrigParseTreeInt3_75, ParseTreeInt3_8, (MR_Word) ((MR_Unsigned) 0U), &_Specs_76);
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_unqual_symnames_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__comp_unit_interface____Unify____maybe_unqual_symnames_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_unqual_symnames_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__comp_unit_interface____Compare____maybe_unqual_symnames_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____type_defn_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__comp_unit_interface____Unify____type_defn_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____type_defn_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__comp_unit_interface____Compare____type_defn_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____type_defn_pair_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__comp_unit_interface____Unify____type_defn_pair_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____type_defn_pair_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__comp_unit_interface____Compare____type_defn_pair_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__comp_unit_interface__init(void)
{
}

void mercury__parse_tree__comp_unit_interface__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_unqual_symnames_0);
	MR_register_type_ctor_info(&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_type_defn_map_0);
	MR_register_type_ctor_info(&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_type_defn_pair_0);
}

void mercury__parse_tree__comp_unit_interface__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__comp_unit_interface__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.comp_unit_interface.
