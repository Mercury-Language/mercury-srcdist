/*
** Automatically generated from `comp_unit_interface.m'
** by the Mercury compiler,
** version rotd-2020-03-13
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


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
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
#include "enum.mih"
#include "getopt_io.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
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
#include "parse_tree.check_parse_tree_type_defns.mih"
#include "parse_tree.convert_parse_tree.mih"
#include "parse_tree.decide_type_repn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
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
#include "parse_tree.set_of_var.mih"



struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0_s {
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__TypeDefnMap_5;
  MR_bool parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__succeeded;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__Var_9;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__ArgType_21;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__TypeCtor_35;
  jmp_buf parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__commit_0;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__ItemTypeDefnInfo_37;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__TypeDefn_38;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__DetailsDu_39;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__OoMCtors_40;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__MaybeEqCmp_41;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__MaybeDirectArgCtors_42;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__Var_60;
  MR_Box parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__conv0_ItemTypeDefnInfo_37;
};

struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0_s {
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__TypeDefnMap_6;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__CoveredTypes_8;
  MR_bool parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__succeeded;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__ArgType_17;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__TypeCtor_31;
  jmp_buf parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__commit_0;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__ItemTypeDefnInfo_33;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__TypeDefn_34;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__DetailsDu_35;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__OoMCtors_36;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__MaybeEqCmp_37;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__MaybeDirectArgCtors_38;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__Var_56;
  MR_Box parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__conv0_ItemTypeDefnInfo_33;
};


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__one_or_more__pti_one_or_more_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_include_module_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0;

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_unqual_symnames_0_0;

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_unqual_symnames_0_1;

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_maybe_unqual_symnames_0[2];

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_maybe_unqual_symnames_0[2];

static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_maybe_unqual_symnames_0[2];

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_need_imports_0_0;

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_need_imports_0_1;

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_need_imports_0[2];

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_need_imports_0[2];

static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_need_imports_0[2];

static const MR_FA_TypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__comp_unit_interface__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__IntroducedFrom__pred__generate_interface_int1__771__1_1_p_0(
  MR_Word IntImpImportUseModuleNameSet_94);

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
parse_tree__comp_unit_interface____Compare____need_imports_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____need_imports_0_0(
  MR_Word HeadVar__2_1,
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
  MR_Word STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_32,
  MR_Word * STATE_VARIABLE_AbsExpEqvRhsTypeCtors_33,
  MR_Word STATE_VARIABLE_DuArgTypeCtors_0_34,
  MR_Word * STATE_VARIABLE_DuArgTypeCtors_35,
  MR_Word STATE_VARIABLE_ModulesNeededByTypeDefns_0_36,
  MR_Word * STATE_VARIABLE_ModulesNeededByTypeDefns_37);

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
parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_in_defn_10_p_0(
  MR_Word IntTypesMap_11,
  MR_Word BothTypesMap_12,
  MR_Word TypeCtor_13,
  MR_Word ImpItemTypeDefnInfo_14,
  MR_Word STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_36,
  MR_Word * STATE_VARIABLE_AbsExpEqvLhsTypeCtors_37,
  MR_Word STATE_VARIABLE_AbsExpEnumTypeCtors_0_38,
  MR_Word * STATE_VARIABLE_AbsExpEnumTypeCtors_39,
  MR_Word STATE_VARIABLE_DirectDummyTypeCtors_0_40,
  MR_Word * STATE_VARIABLE_DirectDummyTypeCtors_41);

static void MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0(
  MR_Word TypeDefnMap_5,
  MR_Word OoMCtors_6,
  MR_Word MaybeCanonical_7,
  MR_Word MaybeDirectArgCtors_8);

static void MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0(
  MR_Word TypeDefnMap_6,
  MR_Word OoMCtors_7,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word CoveredTypes_8);

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

static void MR_CALL 
parse_tree__comp_unit_interface__mutable_public_aux_pred_decls_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__mutable_public_aux_pred_decls_2_f_0(
  MR_Word ModuleName_4,
  MR_Word ItemMutable_5);

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_instance_abstract_1_f_0(
  MR_Word Instance_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__avail_is_import_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_13_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_13_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_13_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_13_p_0(
  MR_Word Globals_14,
  MR_Word AugCompUnit_15,
  MR_Word IntImportUseMap_16,
  MR_Word IntExplicitFIMSpecs_17,
  MR_Word ImpExplicitFIMSpecs_18,
  MR_Word IntTypeDefns_19,
  MR_Word IntInstDefns_20,
  MR_Word IntModeDefns_21,
  MR_Word IntTypeClasses_22,
  MR_Word IntInstances_23,
  MR_Word ImpTypeDefns_24,
  MR_Word TypeCtorCheckedMap_25,
  MR_Word * ParseTreeInt2_26);

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
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_7(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0(
  MR_Word AugCompUnit_15,
  MR_Word * IntImportUseMap_16,
  MR_Word * IntExplicitFIMSpecs_17,
  MR_Word * ImpExplicitFIMSpecs_18,
  MR_Word * IntTypeDefns_19,
  MR_Word * IntInstDefns_20,
  MR_Word * IntModeDefns_21,
  MR_Word * IntTypeClasses_22,
  MR_Word * IntInstances_23,
  MR_Word * ImpTypeDefns_24,
  MR_Word * TypeCtorCheckedMap_25,
  MR_Word * ParseTreeInt1_26,
  MR_Word STATE_VARIABLE_Specs_0_112,
  MR_Word * STATE_VARIABLE_Specs_113);

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

static void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_item_blocks_17_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntInclsCord_0_2,
  MR_Word * STATE_VARIABLE_IntInclsCord_3,
  MR_Word STATE_VARIABLE_ImpInclsCord_0_4,
  MR_Word * STATE_VARIABLE_ImpInclsCord_5,
  MR_Word STATE_VARIABLE_IntAvailsCord_0_6,
  MR_Word * STATE_VARIABLE_IntAvailsCord_7,
  MR_Word STATE_VARIABLE_ImpAvailsCord_0_8,
  MR_Word * STATE_VARIABLE_ImpAvailsCord_9,
  MR_Word STATE_VARIABLE_IntFIMsCord_0_10,
  MR_Word * STATE_VARIABLE_IntFIMsCord_11,
  MR_Word STATE_VARIABLE_ImpFIMsCord_0_12,
  MR_Word * STATE_VARIABLE_ImpFIMsCord_13,
  MR_Word STATE_VARIABLE_IntItemsCord_0_14,
  MR_Word * STATE_VARIABLE_IntItemsCord_15,
  MR_Word STATE_VARIABLE_ImpItemsCord_0_16,
  MR_Word * STATE_VARIABLE_ImpItemsCord_17);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_items_imp_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImpItemsCord_0_2,
  MR_Word * STATE_VARIABLE_ImpItemsCord_3);

static void MR_CALL 
parse_tree__comp_unit_interface__delete_uc_preds_make_solver_type_dummy_2_p_0(
  MR_Word ItemTypeDefn0_3,
  MR_Word * ItemTypeDefn_4);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_items_int_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntItemsCord_0_2,
  MR_Word * STATE_VARIABLE_IntItemsCord_3);

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

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_27_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_27_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntIncls_0_2,
  MR_Word * STATE_VARIABLE_IntIncls_3,
  MR_Word STATE_VARIABLE_IntImportAvails_0_4,
  MR_Word * STATE_VARIABLE_IntImportAvails_5,
  MR_Word STATE_VARIABLE_OrigIntTypeDefns_0_6,
  MR_Word * STATE_VARIABLE_OrigIntTypeDefns_7,
  MR_Word STATE_VARIABLE_IntTypeDefns_0_8,
  MR_Word * STATE_VARIABLE_IntTypeDefns_9,
  MR_Word STATE_VARIABLE_IntInstDefns_0_10,
  MR_Word * STATE_VARIABLE_IntInstDefns_11,
  MR_Word STATE_VARIABLE_IntModeDefns_0_12,
  MR_Word * STATE_VARIABLE_IntModeDefns_13,
  MR_Word STATE_VARIABLE_IntTypeClasses_0_14,
  MR_Word * STATE_VARIABLE_IntTypeClasses_15,
  MR_Word STATE_VARIABLE_IntInstances_0_16,
  MR_Word * STATE_VARIABLE_IntInstances_17,
  MR_Word STATE_VARIABLE_OrigIntForeignEnums_0_18,
  MR_Word * STATE_VARIABLE_OrigIntForeignEnums_19,
  MR_Word STATE_VARIABLE_OrigImpTypeDefns_0_20,
  MR_Word * STATE_VARIABLE_OrigImpTypeDefns_21,
  MR_Word STATE_VARIABLE_OrigImpForeignEnums_0_22,
  MR_Word * STATE_VARIABLE_OrigImpForeignEnums_23,
  MR_Word STATE_VARIABLE_NeedImports_0_24,
  MR_Word * STATE_VARIABLE_NeedImports_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static void MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_from_items_imp_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImpTypeDefns_0_2,
  MR_Word * STATE_VARIABLE_ImpTypeDefns_3,
  MR_Word STATE_VARIABLE_ImpForeignEnums_0_4,
  MR_Word * STATE_VARIABLE_ImpForeignEnums_5);

static void MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_from_items_int_17_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_OrigIntTypeDefns_0_2,
  MR_Word * STATE_VARIABLE_OrigIntTypeDefns_3,
  MR_Word STATE_VARIABLE_IntTypeDefns_0_4,
  MR_Word * STATE_VARIABLE_IntTypeDefns_5,
  MR_Word STATE_VARIABLE_IntInstDefns_0_6,
  MR_Word * STATE_VARIABLE_IntInstDefns_7,
  MR_Word STATE_VARIABLE_IntModeDefns_0_8,
  MR_Word * STATE_VARIABLE_IntModeDefns_9,
  MR_Word STATE_VARIABLE_IntTypeClasses_0_10,
  MR_Word * STATE_VARIABLE_IntTypeClasses_11,
  MR_Word STATE_VARIABLE_IntInstances_0_12,
  MR_Word * STATE_VARIABLE_IntInstances_13,
  MR_Word STATE_VARIABLE_OrigIntForeignEnums_0_14,
  MR_Word * STATE_VARIABLE_OrigIntForeignEnums_15,
  MR_Word STATE_VARIABLE_NeedImports_0_16,
  MR_Word * STATE_VARIABLE_NeedImports_17);

static void MR_CALL 
parse_tree__comp_unit_interface__make_type_defn_abstract_type_for_int3_2_p_0(
  MR_Word ItemTypeDefn0_3,
  MR_Word * ItemTypeDefn_4);

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
parse_tree__comp_unit_interface____Unify____need_imports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____need_imports_0_0_10001(
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


static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_1[15][2];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_2[19][3];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_3[2][1];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_4[5][4];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_5[8][6];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_6[2][5];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_7[2][13];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_8[2][11];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_9[1][8];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_10[3][7];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_11[1][12];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_12[2][9];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_13[1][10];




static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_1[15][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_erlang_1)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[3]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[0]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[0]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
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
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 12U))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[1])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_2[19][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[6]))
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
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_27_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_9[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[2])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[2])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[3])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[4])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_10[2])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_13_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[5])),
    ((MR_Box) (parse_tree__comp_unit_interface__record_modules_needed_by_typeclass_imp_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[6])),
    ((MR_Box) (parse_tree__comp_unit_interface__type_to_user_type_ctor_set_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[7])),
    ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[7])),
    ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[4])),
    ((MR_Box) (parse_tree__comp_unit_interface__maybe_add_maybe_abstract_type_defns_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_3[2][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__comp_unit_interface_scalar_common_3[0])))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_4[5][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__comp_unit_interface_scalar_common_2[7]))),
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_5[8][6] = {
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

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_6[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_7[2][13] = {
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

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_8[2][11] = {
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

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_9[1][8] = {
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

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_10[3][7] = {
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

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_11[1][12] = {
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

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_12[2][9] = {
  /* row 0 */
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
  /* row 1 */
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

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_13[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0)
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

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_unqual_symnames_0_0 = {
  (MR_String) "no_unqual_symnames",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_unqual_symnames_0_1 = {
  (MR_String) "some_unqual_symnames",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_maybe_unqual_symnames_0[2] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__comp_unit_interface____Unify____maybe_unqual_symnames_0_0_10001)),
  ((MR_Box) (parse_tree__comp_unit_interface____Compare____maybe_unqual_symnames_0_0_10001)),
  (MR_String) "parse_tree.comp_unit_interface",
  (MR_String) "maybe_unqual_symnames",
  {     parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_maybe_unqual_symnames_0 },
  {     parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_maybe_unqual_symnames_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_maybe_unqual_symnames_0
};

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_need_imports_0_0 = {
  (MR_String) "do_not_need_imports",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_need_imports_0_1 = {
  (MR_String) "do_need_imports",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_need_imports_0[2] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_need_imports_0_0,
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_need_imports_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_need_imports_0[2] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_need_imports_0_1,
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_need_imports_0_0
};

static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_need_imports_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_need_imports_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__comp_unit_interface____Unify____need_imports_0_0_10001)),
  ((MR_Box) (parse_tree__comp_unit_interface____Compare____need_imports_0_0_10001)),
  (MR_String) "parse_tree.comp_unit_interface",
  (MR_String) "need_imports",
  {     parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_need_imports_0 },
  {     parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_value_ordered_need_imports_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_need_imports_0
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
  UINT8_C(17),
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
  NULL
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
  UINT8_C(17),
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
  NULL
};

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__IntroducedFrom__pred__generate_interface_int1__771__1_1_p_0(
  MR_Word IntImpImportUseModuleNameSet_94)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImpImportUseModuleNameSet_94);
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____type_defn_pair_0_0(
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
parse_tree__comp_unit_interface____Unify____type_defn_pair_0_0(
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
parse_tree__comp_unit_interface____Compare____type_defn_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____need_imports_0_0(
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
parse_tree__comp_unit_interface____Unify____need_imports_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

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

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[6]), IntTypesMap_7, ((MR_Box) (TypeCtor_12)), &conv0_Defns_16);
    if (succeeded)
    {
      Defns_16 = ((MR_Word) (conv0_Defns_16));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeInfo_26_26 = (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]);
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
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpItemTypeDefnInfo_2, (MR_Integer) 2))));

    succeeded = ((((MR_tag((MR_Word) Var_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_5, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (succeeded)
    {
      Details_3 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_5, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Details_3)) == (MR_Integer) 1);
      if (succeeded)
      {
      }
      succeeded = !(succeeded);
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

        switch (MR_tag((MR_Word) TypeDefn0_47)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DetailsDu0_51 = (MR_Word) ((MR_Word) (TypeDefn0_47));
              MR_Word OoMCtors_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_51, (MR_Integer) 0))));
              MR_Word MaybeEqCmp_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_51, (MR_Integer) 1))));
              MR_Word MaybeDirectArgCtors_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_51, (MR_Integer) 2))));

              succeeded = parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0(BothTypesMap_10, OoMCtors_52, MaybeEqCmp_53, MaybeDirectArgCtors_54);
              if (succeeded)
                HeadImpItemTypeDefnInfo_36 = HeadImpItemTypeDefnInfo0_34;
              else
              {
                MR_Word DetailsAbs_57;
                MR_Word TypeDefn_58;
                MR_Integer NumFunctors_55;
                MR_Word Var_66;
                MR_Word Var_67;
                MR_Word Var_69;
                MR_Word Var_70;
                MR_Integer Var_71;

                succeeded = parse_tree__prog_type__du_type_is_enum_2_p_0(DetailsDu0_51, &NumFunctors_55);
                if (succeeded)
                {
                  MR_Integer NumBits_56;

                  parse_tree__prog_type__num_bits_needed_for_n_values_2_p_0(NumFunctors_55, &NumBits_56);
                  {
                    DetailsAbs_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), DetailsAbs_57, 0) = ((MR_Box) (NumBits_56));
                  }
                }
                else
                  DetailsAbs_57 = (MR_Word) ((MR_Unsigned) 0U);
                {
                  TypeDefn_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), TypeDefn_58, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), TypeDefn_58, 1) = ((MR_Box) (DetailsAbs_57));
                }
                Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadImpItemTypeDefnInfo0_34, (MR_Integer) 0))));
                Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadImpItemTypeDefnInfo0_34, (MR_Integer) 1))));
                Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadImpItemTypeDefnInfo0_34, (MR_Integer) 3))));
                Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadImpItemTypeDefnInfo0_34, (MR_Integer) 4))));
                Var_71 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadImpItemTypeDefnInfo0_34, (MR_Integer) 5))));
                {
                  HeadImpItemTypeDefnInfo_36 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), HeadImpItemTypeDefnInfo_36, 0) = ((MR_Box) (Var_66));
                  MR_hl_field(MR_mktag(0), HeadImpItemTypeDefnInfo_36, 1) = ((MR_Box) (Var_67));
                  MR_hl_field(MR_mktag(0), HeadImpItemTypeDefnInfo_36, 2) = ((MR_Box) (TypeDefn_58));
                  MR_hl_field(MR_mktag(0), HeadImpItemTypeDefnInfo_36, 3) = ((MR_Box) (Var_69));
                  MR_hl_field(MR_mktag(0), HeadImpItemTypeDefnInfo_36, 4) = ((MR_Box) (Var_70));
                  MR_hl_field(MR_mktag(0), HeadImpItemTypeDefnInfo_36, 5) = ((MR_Box) (Var_71));
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
      TypeInfo_27_27 = (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]);
      succeeded = mercury__one_or_more_map__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), TypeInfo_27_27, IntTypesMap_11, ((MR_Box) (TypeCtor_13)));
      if (succeeded)
      {
        Var_22 = (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[18]);
        succeeded = mercury__one_or_more__all_true_2_p_0(TypeInfo_27_27, Var_22, AbstractImpItemTypeDefnInfos_17);
      }
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word Var_23;

      Var_23 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), AbstractImpItemTypeDefnInfos_17);
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
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.accumulate_modules_used_by_type_ctor\'/3", (MR_String) "unqualified type encountered");
        return;
      }
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
  MR_Word STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_32,
  MR_Word * STATE_VARIABLE_AbsExpEqvRhsTypeCtors_33,
  MR_Word STATE_VARIABLE_DuArgTypeCtors_0_34,
  MR_Word * STATE_VARIABLE_DuArgTypeCtors_35,
  MR_Word STATE_VARIABLE_ModulesNeededByTypeDefns_0_36,
  MR_Word * STATE_VARIABLE_ModulesNeededByTypeDefns_37)
{
  {
    MR_Word ImpTypeDefn_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpItemTypeDefnInfo_10, (MR_Integer) 2))));

    switch (MR_tag((MR_Word) ImpTypeDefn_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DetailsDu_25 = (MR_Word) ((MR_Word) (ImpTypeDefn_16));
          MR_Word OoMCtors_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_25, (MR_Integer) 0))));
          MR_Word Var_38;
          MR_Word Var_39;
          MR_Word RhsTypeCtors_51;
          MR_Box conv1_STATE_VARIABLE_ModulesNeededByTypeDefns_37;

          Var_38 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMCtors_26);
          Var_39 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
          parse_tree__comp_unit_interface__ctors_to_user_type_ctor_set_3_p_0(Var_38, Var_39, &RhsTypeCtors_51);
          mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), RhsTypeCtors_51, STATE_VARIABLE_DuArgTypeCtors_0_34, STATE_VARIABLE_DuArgTypeCtors_35);
          mercury__set__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[7]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[16]), RhsTypeCtors_51, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_0_36)), &conv1_STATE_VARIABLE_ModulesNeededByTypeDefns_37);
          *STATE_VARIABLE_ModulesNeededByTypeDefns_37 = ((MR_Word) (conv1_STATE_VARIABLE_ModulesNeededByTypeDefns_37));
          *STATE_VARIABLE_AbsExpEqvRhsTypeCtors_33 = STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_32;
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_AbsExpEqvRhsTypeCtors_33 = STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_32;
          *STATE_VARIABLE_DuArgTypeCtors_35 = STATE_VARIABLE_DuArgTypeCtors_0_34;
          *STATE_VARIABLE_ModulesNeededByTypeDefns_37 = STATE_VARIABLE_ModulesNeededByTypeDefns_0_36;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DetailsEqv_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ImpTypeDefn_16, (MR_Integer) 0))));
          MR_Word RhsType_21 = (MR_Word) (DetailsEqv_20);
          MR_Word RhsTypeCtors_22;
          MR_Word NewRhsTypeCtors_23;
          MR_Word Var_43;
          MR_Word STATE_VARIABLE_AbsExpEqvRhsTypeCtors_44_44;
          MR_Word STATE_VARIABLE_ModulesNeededByTypeDefns_46_46;
          MR_Word Var_47;
          MR_Word Var_49;
          MR_Box conv3_STATE_VARIABLE_ModulesNeededByTypeDefns_46_46;
          MR_Box conv9_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_33;
          MR_Box conv8_Var_24;
          MR_Box conv7_STATE_VARIABLE_ModulesNeededByTypeDefns_37;

          Var_43 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
          parse_tree__comp_unit_interface__type_to_user_type_ctor_set_3_p_0(RhsType_21, Var_43, &RhsTypeCtors_22);
          mercury__set__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), RhsTypeCtors_22, STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_32, &NewRhsTypeCtors_23);
          mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), NewRhsTypeCtors_23, STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_32, &STATE_VARIABLE_AbsExpEqvRhsTypeCtors_44_44);
          mercury__set__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[7]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[17]), NewRhsTypeCtors_23, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_0_36)), &conv3_STATE_VARIABLE_ModulesNeededByTypeDefns_46_46);
          STATE_VARIABLE_ModulesNeededByTypeDefns_46_46 = ((MR_Word) (conv3_STATE_VARIABLE_ModulesNeededByTypeDefns_46_46));
          {
            Var_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_8[0]));
            MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_3));
            MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (ImpTypesMap_9));
          }
          Var_49 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
          mercury__set__fold3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[7]), Var_47, NewRhsTypeCtors_23, ((MR_Box) (STATE_VARIABLE_AbsExpEqvRhsTypeCtors_44_44)), &conv9_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_33, ((MR_Box) (Var_49)), &conv8_Var_24, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_46_46)), &conv7_STATE_VARIABLE_ModulesNeededByTypeDefns_37);
          *STATE_VARIABLE_AbsExpEqvRhsTypeCtors_33 = ((MR_Word) (conv9_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_33));
          *STATE_VARIABLE_ModulesNeededByTypeDefns_37 = ((MR_Word) (conv7_STATE_VARIABLE_ModulesNeededByTypeDefns_37));
          *STATE_VARIABLE_DuArgTypeCtors_35 = STATE_VARIABLE_DuArgTypeCtors_0_34;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ImpTypeDefn_16, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_AbsExpEqvRhsTypeCtors_33 = STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_32;
              *STATE_VARIABLE_DuArgTypeCtors_35 = STATE_VARIABLE_DuArgTypeCtors_0_34;
              *STATE_VARIABLE_ModulesNeededByTypeDefns_37 = STATE_VARIABLE_ModulesNeededByTypeDefns_0_36;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_AbsExpEqvRhsTypeCtors_33 = STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_32;
              *STATE_VARIABLE_DuArgTypeCtors_35 = STATE_VARIABLE_DuArgTypeCtors_0_34;
              *STATE_VARIABLE_ModulesNeededByTypeDefns_37 = STATE_VARIABLE_ModulesNeededByTypeDefns_0_36;
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
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[15]), ArgTypes_7, ((MR_Box) (STATE_VARIABLE_TypeCtors_15_15)), &conv1_STATE_VARIABLE_TypeCtors_14);
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
    MR_Word conv3_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_33;
    MR_Word conv2_STATE_VARIABLE_DuArgTypeCtors_35;
    MR_Word conv1_STATE_VARIABLE_ModulesNeededByTypeDefns_37;

    parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_33, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_DuArgTypeCtors_35, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_ModulesNeededByTypeDefns_37);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_33));
    *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_DuArgTypeCtors_35));
    *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_ModulesNeededByTypeDefns_37));
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

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[6]), ImpTypesMap_9, ((MR_Box) (TypeCtor_10)), &conv0_ImpTypeDefns_14);
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
        MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_8[1]));
        MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_rhs_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (ImpTypesMap_9));
      }
      mercury__one_or_more__foldl3_8_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[7]), Var_21, ImpTypeDefns_14, ((MR_Box) (STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_15)), &conv6_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16, ((MR_Box) (STATE_VARIABLE_DuArgTypeCtors_0_17)), &conv5_STATE_VARIABLE_DuArgTypeCtors_18, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_0_19)), &conv4_STATE_VARIABLE_ModulesNeededByTypeDefns_20);
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
    MR_Word conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_37;
    MR_Word conv1_STATE_VARIABLE_AbsExpEnumTypeCtors_39;
    MR_Word conv0_STATE_VARIABLE_DirectDummyTypeCtors_41;

    parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_in_defn_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_37, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_AbsExpEnumTypeCtors_39, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_DirectDummyTypeCtors_41);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_37));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_AbsExpEnumTypeCtors_39));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_DirectDummyTypeCtors_41));
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
        MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[1]));
        MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_10_p_0_1));
        MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (IntTypesMap_11));
        MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) (BothTypesMap_12));
        MR_hl_field(MR_mktag(0), Var_28, 5) = ((MR_Box) (TypeCtor_13));
      }
      mercury__one_or_more__foldl3_8_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), Var_28, ImpItemTypeDefnInfos_14, ((MR_Box) (STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_22)), &conv5_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23, ((MR_Box) (STATE_VARIABLE_AbsExpEnumTypeCtors_0_24)), &conv4_STATE_VARIABLE_AbsExpEnumTypeCtors_25, ((MR_Box) (STATE_VARIABLE_DirectDummyTypeCtors_0_26)), &conv3_STATE_VARIABLE_DirectDummyTypeCtors_27);
      *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23 = ((MR_Word) (conv5_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23));
      *STATE_VARIABLE_AbsExpEnumTypeCtors_25 = ((MR_Word) (conv4_STATE_VARIABLE_AbsExpEnumTypeCtors_25));
      *STATE_VARIABLE_DirectDummyTypeCtors_27 = ((MR_Word) (conv3_STATE_VARIABLE_DirectDummyTypeCtors_27));
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_in_defn_10_p_0(
  MR_Word IntTypesMap_11,
  MR_Word BothTypesMap_12,
  MR_Word TypeCtor_13,
  MR_Word ImpItemTypeDefnInfo_14,
  MR_Word STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_36,
  MR_Word * STATE_VARIABLE_AbsExpEqvLhsTypeCtors_37,
  MR_Word STATE_VARIABLE_AbsExpEnumTypeCtors_0_38,
  MR_Word * STATE_VARIABLE_AbsExpEnumTypeCtors_39,
  MR_Word STATE_VARIABLE_DirectDummyTypeCtors_0_40,
  MR_Word * STATE_VARIABLE_DirectDummyTypeCtors_41)
{
  {
    MR_bool succeeded;
    MR_Word ImpTypeDefn_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpItemTypeDefnInfo_14, (MR_Integer) 2))));

    switch (MR_tag((MR_Word) ImpTypeDefn_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DetailsDu_28 = (MR_Word) ((MR_Word) (ImpTypeDefn_20));
          MR_Word OoMCtors_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_28, (MR_Integer) 0))));
          MR_Word MaybeEqCmp_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_28, (MR_Integer) 1))));
          MR_Word MaybeDirectArgCtors_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_28, (MR_Integer) 2))));
          MR_Box conv0_Var_32;
          MR_Integer _NumFunctors_33;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[6]), IntTypesMap_11, ((MR_Box) (TypeCtor_13)), &conv0_Var_32);
          if (succeeded)
            succeeded = MR_TRUE;
          if (succeeded)
            succeeded = parse_tree__prog_type__du_type_is_enum_2_p_0(DetailsDu_28, &_NumFunctors_33);
          if (succeeded)
          {
            mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_13)), STATE_VARIABLE_AbsExpEnumTypeCtors_0_38, STATE_VARIABLE_AbsExpEnumTypeCtors_39);
            *STATE_VARIABLE_DirectDummyTypeCtors_41 = STATE_VARIABLE_DirectDummyTypeCtors_0_40;
          }
          else
          {
            succeeded = parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0(BothTypesMap_12, OoMCtors_29, MaybeEqCmp_30, MaybeDirectArgCtors_31);
            if (succeeded)
              mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_13)), STATE_VARIABLE_DirectDummyTypeCtors_0_40, STATE_VARIABLE_DirectDummyTypeCtors_41);
            else
              *STATE_VARIABLE_DirectDummyTypeCtors_41 = STATE_VARIABLE_DirectDummyTypeCtors_0_40;
            *STATE_VARIABLE_AbsExpEnumTypeCtors_39 = STATE_VARIABLE_AbsExpEnumTypeCtors_0_38;
          }
          *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_37 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_36;
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_37 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_36;
          *STATE_VARIABLE_AbsExpEnumTypeCtors_39 = STATE_VARIABLE_AbsExpEnumTypeCtors_0_38;
          *STATE_VARIABLE_DirectDummyTypeCtors_41 = STATE_VARIABLE_DirectDummyTypeCtors_0_40;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box conv1_Var_25;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[6]), IntTypesMap_11, ((MR_Box) (TypeCtor_13)), &conv1_Var_25);
          if (succeeded)
            succeeded = MR_TRUE;
          if (succeeded)
            mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_13)), STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_36, STATE_VARIABLE_AbsExpEqvLhsTypeCtors_37);
          else
            *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_37 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_36;
          *STATE_VARIABLE_AbsExpEnumTypeCtors_39 = STATE_VARIABLE_AbsExpEnumTypeCtors_0_38;
          *STATE_VARIABLE_DirectDummyTypeCtors_41 = STATE_VARIABLE_DirectDummyTypeCtors_0_40;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ImpTypeDefn_20, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_37 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_36;
              *STATE_VARIABLE_AbsExpEnumTypeCtors_39 = STATE_VARIABLE_AbsExpEnumTypeCtors_0_38;
              *STATE_VARIABLE_DirectDummyTypeCtors_41 = STATE_VARIABLE_DirectDummyTypeCtors_0_40;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box conv2_Var_27;

              succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[6]), IntTypesMap_11, ((MR_Box) (TypeCtor_13)), &conv2_Var_27);
              if (succeeded)
                succeeded = MR_TRUE;
              if (succeeded)
                mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_13)), STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_36, STATE_VARIABLE_AbsExpEqvLhsTypeCtors_37);
              else
                *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_37 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_36;
              *STATE_VARIABLE_AbsExpEnumTypeCtors_39 = STATE_VARIABLE_AbsExpEnumTypeCtors_0_38;
              *STATE_VARIABLE_DirectDummyTypeCtors_41 = STATE_VARIABLE_DirectDummyTypeCtors_0_40;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_1(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_3(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__ItemTypeDefnInfo_37 = ((MR_Word) ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__conv0_ItemTypeDefnInfo_37));
    parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_2(env_ptr);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_2(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__ItemTypeDefnInfo_37, (MR_Integer) 0))));
      MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__ItemTypeDefnInfo_37, (MR_Integer) 1))));
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Integer Var_66;

      (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__TypeDefn_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__ItemTypeDefnInfo_37, (MR_Integer) 2))));
      Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__ItemTypeDefnInfo_37, (MR_Integer) 3))));
      Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__ItemTypeDefnInfo_37, (MR_Integer) 4))));
      Var_66 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__ItemTypeDefnInfo_37, (MR_Integer) 5))));
      (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__TypeDefn_38)) == (MR_Integer) 0);
      if ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__succeeded)
      {
        (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__DetailsDu_39 = (MR_Word) ((MR_Word) ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__TypeDefn_38));
        (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__OoMCtors_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__DetailsDu_39, (MR_Integer) 0))));
        (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__MaybeEqCmp_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__DetailsDu_39, (MR_Integer) 1))));
        (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__MaybeDirectArgCtors_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__DetailsDu_39, (MR_Integer) 2))));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__Var_60 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__ArgType_21));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__Var_9));
        }
        (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__succeeded = parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__TypeDefnMap_5, (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__OoMCtors_40, (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__MaybeEqCmp_41, (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__MaybeDirectArgCtors_42, (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__Var_60);
        if ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__succeeded)
          parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_1(env_ptr);
      }
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_4(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word ItemTypeDefnInfos_36;

          (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__succeeded = mercury__one_or_more_map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__TypeDefnMap_5, ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__TypeCtor_35)), &ItemTypeDefnInfos_36);
          if ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__succeeded)
            mercury__one_or_more__member_2_p_1((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), &(env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__conv0_ItemTypeDefnInfo_37, ItemTypeDefnInfos_36, parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_3, env_ptr);
        }
        (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0(
  MR_Word TypeDefnMap_5,
  MR_Word OoMCtors_6,
  MR_Word MaybeCanonical_7,
  MR_Word MaybeDirectArgCtors_8)
{
  {
    struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0_s env;

    (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__TypeDefnMap_5 = TypeDefnMap_5;
    {
      MR_Word Ctor_13;
      MR_Word MaybeExistConstraints_15;
      MR_Word CtorArgs_17;
      MR_Word Var_23;
      uint32_t _Ordinal_14;
      MR_Word _Name_16;
      MR_Integer _Arity_18;
      MR_Word _Context_19;

      (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__succeeded = (MaybeCanonical_7 == (MR_Word) ((MR_Unsigned) 0U));
      if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__succeeded)
      {
        (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__succeeded = (MaybeDirectArgCtors_8 == (MR_Word) ((MR_Unsigned) 0U));
        if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__succeeded)
        {
          (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__Var_9 = (MR_Word) ((MR_Unsigned) 0U);
          Ctor_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_6, (MR_Integer) 0))));
          Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_6, (MR_Integer) 1))));
          (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
          if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__succeeded)
          {
            _Ordinal_14 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 0)));
            MaybeExistConstraints_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 1))));
            _Name_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 2))));
            CtorArgs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 3))));
            _Arity_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 4))));
            _Context_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 5))));
            (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__succeeded = (MaybeExistConstraints_15 == (MR_Word) ((MR_Unsigned) 0U));
            if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__succeeded)
            {
              if ((CtorArgs_17 == (MR_Word) ((MR_Unsigned) 0U)))
                (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__succeeded = MR_TRUE;
              else
              {
                MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorArgs_17, (MR_Integer) 0))));
                MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorArgs_17, (MR_Integer) 1))));
                MR_Word Var_20;
                MR_Word Var_22;

                (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__succeeded = (Var_25 == (MR_Word) ((MR_Unsigned) 0U));
                if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__succeeded)
                {
                  Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0))));
                  (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__ArgType_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 1))));
                  Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 2))));
                  if (((MR_tag((MR_Word) (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__ArgType_21)) == (MR_Integer) 1))
                  {
                    MR_Word SymName_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__ArgType_21, (MR_Integer) 0))));
                    MR_Word TypeArgs_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__ArgType_21, (MR_Integer) 1))));
                    MR_Word _Kind_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__ArgType_21, (MR_Integer) 2))));

                    (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__ArgType_21)), (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__Var_9);
                    if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__succeeded)
                      (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__succeeded = MR_FALSE;
                    else
                    {
                      MR_Integer Arity_34;

                      Arity_34 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeArgs_32);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__TypeCtor_35 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_31));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Arity_34));
                      }
                      {
                        MR_Word Var_61;

                        Var_61 = parse_tree__prog_type__is_type_ctor_a_builtin_dummy_1_f_0((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__TypeCtor_35);
                        (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__succeeded = (Var_61 == (MR_Integer) 0);
                      }
                      if (!((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__succeeded))
                        parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_4(&env);
                    }
                  }
                  else
                  if (((((MR_tag((MR_Word) (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__ArgType_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__ArgType_21, (MR_Integer) 0)))) == (MR_Integer) 3))))
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.comp_unit_interface.ctor_arg_is_dummy_type\'/3", (MR_String) "kinded_type");
                    (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__succeeded = MR_TRUE;
                  }
                  else
                    (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__succeeded = MR_FALSE;
                }
              }
            }
          }
        }
      }
      return (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__succeeded;
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_1(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_3(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__ItemTypeDefnInfo_33 = ((MR_Word) ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__conv0_ItemTypeDefnInfo_33));
    parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_2(env_ptr);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_2(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__ItemTypeDefnInfo_33, (MR_Integer) 0))));
      MR_Word Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__ItemTypeDefnInfo_33, (MR_Integer) 1))));
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Integer Var_62;

      (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__TypeDefn_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__ItemTypeDefnInfo_33, (MR_Integer) 2))));
      Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__ItemTypeDefnInfo_33, (MR_Integer) 3))));
      Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__ItemTypeDefnInfo_33, (MR_Integer) 4))));
      Var_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__ItemTypeDefnInfo_33, (MR_Integer) 5))));
      (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__TypeDefn_34)) == (MR_Integer) 0);
      if ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__succeeded)
      {
        (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__DetailsDu_35 = (MR_Word) ((MR_Word) ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__TypeDefn_34));
        (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__OoMCtors_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__DetailsDu_35, (MR_Integer) 0))));
        (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__MaybeEqCmp_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__DetailsDu_35, (MR_Integer) 1))));
        (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__MaybeDirectArgCtors_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__DetailsDu_35, (MR_Integer) 2))));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__Var_56 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__ArgType_17));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__CoveredTypes_8));
        }
        (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__succeeded = parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__TypeDefnMap_6, (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__OoMCtors_36, (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__MaybeEqCmp_37, (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__MaybeDirectArgCtors_38, (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__Var_56);
        if ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__succeeded)
          parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_1(env_ptr);
      }
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_4(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word ItemTypeDefnInfos_32;

          (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__succeeded = mercury__one_or_more_map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__TypeDefnMap_6, ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__TypeCtor_31)), &ItemTypeDefnInfos_32);
          if ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__succeeded)
            mercury__one_or_more__member_2_p_1((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), &(env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__conv0_ItemTypeDefnInfo_33, ItemTypeDefnInfos_32, parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_3, env_ptr);
        }
        (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0(
  MR_Word TypeDefnMap_6,
  MR_Word OoMCtors_7,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word CoveredTypes_8)
{
  {
    struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0_s env;

    (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__TypeDefnMap_6 = TypeDefnMap_6;
    (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__CoveredTypes_8 = CoveredTypes_8;
    {
      MR_Word Ctor_9;
      MR_Word MaybeExistConstraints_11;
      MR_Word CtorArgs_13;
      MR_Word Var_19;
      uint32_t _Ordinal_10;
      MR_Word _Name_12;
      MR_Integer _Arity_14;
      MR_Word _Context_15;

      (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
      if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__succeeded)
      {
        (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__succeeded = (HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U));
        if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__succeeded)
        {
          Ctor_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_7, (MR_Integer) 0))));
          Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_7, (MR_Integer) 1))));
          (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
          if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__succeeded)
          {
            _Ordinal_10 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 0)));
            MaybeExistConstraints_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 1))));
            _Name_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 2))));
            CtorArgs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 3))));
            _Arity_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 4))));
            _Context_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 5))));
            (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__succeeded = (MaybeExistConstraints_11 == (MR_Word) ((MR_Unsigned) 0U));
            if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__succeeded)
            {
              if ((CtorArgs_13 == (MR_Word) ((MR_Unsigned) 0U)))
                (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__succeeded = MR_TRUE;
              else
              {
                MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorArgs_13, (MR_Integer) 0))));
                MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorArgs_13, (MR_Integer) 1))));
                MR_Word Var_16;
                MR_Word Var_18;

                (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 0U));
                if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__succeeded)
                {
                  Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 0))));
                  (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__ArgType_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 1))));
                  Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 2))));
                  if (((MR_tag((MR_Word) (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__ArgType_17)) == (MR_Integer) 1))
                  {
                    MR_Word SymName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__ArgType_17, (MR_Integer) 0))));
                    MR_Word TypeArgs_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__ArgType_17, (MR_Integer) 1))));
                    MR_Word _Kind_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__ArgType_17, (MR_Integer) 2))));

                    (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__ArgType_17)), (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__CoveredTypes_8);
                    if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__succeeded)
                      (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__succeeded = MR_FALSE;
                    else
                    {
                      MR_Integer Arity_30;

                      Arity_30 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeArgs_28);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__TypeCtor_31 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_27));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Arity_30));
                      }
                      {
                        MR_Word Var_57;

                        Var_57 = parse_tree__prog_type__is_type_ctor_a_builtin_dummy_1_f_0((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__TypeCtor_31);
                        (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__succeeded = (Var_57 == (MR_Integer) 0);
                      }
                      if (!((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__succeeded))
                        parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_4(&env);
                    }
                  }
                  else
                  if (((((MR_tag((MR_Word) (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__ArgType_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__ArgType_17, (MR_Integer) 0)))) == (MR_Integer) 3))))
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.comp_unit_interface.ctor_arg_is_dummy_type\'/3", (MR_String) "kinded_type");
                    (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__succeeded = MR_TRUE;
                  }
                  else
                    (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__succeeded = MR_FALSE;
                }
              }
            }
          }
        }
      }
      return (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__succeeded;
    }
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

    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[7]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[14]), Constraints_6, ((MR_Box) (STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_7)), &conv1_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_8);
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
          MR_Integer Var_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_4, (MR_Integer) 5))));

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
    mercury__one_or_more_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), ((MR_Box) (TypeCtor_12)), ((MR_Box) (ItemTypeDefn1_15)), STATE_VARIABLE_ImpTypesMap_0_20, STATE_VARIABLE_ImpTypesMap_21);
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
    mercury__one_or_more_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), ((MR_Box) (TypeCtor_15)), ((MR_Box) (ItemTypeDefn_6)), STATE_VARIABLE_IntTypesMap_0_27, STATE_VARIABLE_IntTypesMap_28);
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

static void MR_CALL 
parse_tree__comp_unit_interface__mutable_public_aux_pred_decls_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__7_7;

    parse_tree__prog_mutable__make_mutable_aux_pred_decl_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__7_7);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__7_7));
  }
}

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__mutable_public_aux_pred_decls_2_f_0(
  MR_Word ModuleName_4,
  MR_Word ItemMutable_5)
{
  {
    MR_Word PublicAuxPredDecls_6;
    MR_String MutableName_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), ItemMutable_5, (MR_Integer) 0))));
    MR_Word Type_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_5, (MR_Integer) 2))));
    MR_Word Inst_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_5, (MR_Integer) 4))));
    MR_Word MutAttrs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_5, (MR_Integer) 7))));
    MR_Word Context_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_5, (MR_Integer) 8))));
    MR_Word PublicAuxPreds_17;
    MR_Word Var_18;

    parse_tree__prog_mutable__compute_needed_public_mutable_aux_preds_2_p_0(MutAttrs_14, &PublicAuxPreds_17);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_13[0]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (parse_tree__comp_unit_interface__mutable_public_aux_pred_decls_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (ModuleName_4));
      MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (MutableName_7));
      MR_hl_field(MR_mktag(0), Var_18, 5) = ((MR_Box) (Type_9));
      MR_hl_field(MR_mktag(0), Var_18, 6) = ((MR_Box) (Inst_11));
      MR_hl_field(MR_mktag(0), Var_18, 7) = ((MR_Box) (Context_15));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), Var_18, PublicAuxPreds_17, &PublicAuxPredDecls_6);
    return PublicAuxPredDecls_6;
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
    MR_Integer Var_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Instance_3, (MR_Integer) 8))));

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

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__avail_is_import_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0);

    if (succeeded)
    {
    }
    return succeeded;
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
      MR_hl_field(MR_mktag(0), FIM_6, 3) = ((MR_Box) ((MR_Integer) -1));
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
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
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
    MR_Word TypeCtorCheckedMap_21;
    MR_Word ParseTreeInt1A_22;
    MR_Word ParseTreeInt2A_23;

    parse_tree__comp_unit_interface__generate_interface_int1_14_p_0(AugCompUnit_8, &IntImportUseMap_12, &IntExplicitFIMSpecs_13, &ImpExplicitFIMSpecs_14, &IntTypeDefns_15, &IntInstDefns_16, &IntModeDefns_17, &IntTypeClasses_18, &IntInstances_19, &ImpTypeDefns_20, &TypeCtorCheckedMap_21, &ParseTreeInt1A_22, STATE_VARIABLE_Specs_0_24, STATE_VARIABLE_Specs_25);
    parse_tree__comp_unit_interface__generate_interface_int2_13_p_0(Globals_7, AugCompUnit_8, IntImportUseMap_12, IntExplicitFIMSpecs_13, ImpExplicitFIMSpecs_14, IntTypeDefns_15, IntInstDefns_16, IntModeDefns_17, IntTypeClasses_18, IntInstances_19, ImpTypeDefns_20, TypeCtorCheckedMap_21, &ParseTreeInt2A_23);
    *ParseTreeInt1_9 = parse_tree__convert_parse_tree__convert_parse_tree_int1_to_int_1_f_0(ParseTreeInt1A_22);
    *ParseTreeInt2_10 = parse_tree__convert_parse_tree__convert_parse_tree_int2_to_int_1_f_0(ParseTreeInt2A_23);
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_13_p_0_5(
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
parse_tree__comp_unit_interface__generate_interface_int2_13_p_0_4(
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
parse_tree__comp_unit_interface__generate_interface_int2_13_p_0_3(
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
parse_tree__comp_unit_interface__generate_interface_int2_13_p_0_2(
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
parse_tree__comp_unit_interface__generate_interface_int2_13_p_0_1(
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
parse_tree__comp_unit_interface__generate_interface_int2_13_p_0(
  MR_Word Globals_14,
  MR_Word AugCompUnit_15,
  MR_Word IntImportUseMap_16,
  MR_Word IntExplicitFIMSpecs_17,
  MR_Word ImpExplicitFIMSpecs_18,
  MR_Word IntTypeDefns_19,
  MR_Word IntInstDefns_20,
  MR_Word IntModeDefns_21,
  MR_Word IntTypeClasses_22,
  MR_Word IntInstances_23,
  MR_Word ImpTypeDefns_24,
  MR_Word TypeCtorCheckedMap_25,
  MR_Word * ParseTreeInt2_26)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_15, (MR_Integer) 0))));
    MR_Word ModuleNameContext_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_15, (MR_Integer) 1))));
    MR_Word ParseTreeModuleSrc_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_15, (MR_Integer) 3))));
    MR_Word IntInclMap_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_30, (MR_Integer) 2))));
    MR_Word InclMap_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_30, (MR_Integer) 4))));
    MR_Word ShortInclMap_39;
    MR_Word UnqualSymNames_40;
    MR_Word UsedModuleNames_41;
    MR_Word ShortIntTypeDefnsCord_42;
    MR_Word ShortIntImplicitFIMLangs_43;
    MR_Word ShortIntTypeClassesCord_44;
    MR_Word ShortIntInstancesCord_45;
    MR_Word ShortIntTypeDefns_46;
    MR_Word ShortIntTypeClasses_49;
    MR_Word ShortIntInstances_50;
    MR_Word ShortImpImplicitFIMLangs_51;
    MR_Word Experiment1_52;
    MR_Word ShortIntTypeRepnMap_53;
    MR_Word ShortIntUseMap_55;
    MR_Word ImportUseMap_56;
    MR_Word ShortImportUseMap_57;
    MR_Word ShortIntExplicitFIMSpecs_58;
    MR_Word ShortIntFIMSpecs_59;
    MR_Word ExplicitFIMSpecs_60;
    MR_Word ShortImpExplicitFIMSpecs_61;
    MR_Word ShortImpFIMSpecs0_62;
    MR_Word ShortImpFIMSpecs_63;
    MR_Word ShortIntTypeDefnMap_66;
    MR_Word ShortIntInstDefnMap_67;
    MR_Word ShortIntModeDefnMap_68;
    MR_Word ShortImpTypeDefnMap_69;
    MR_Word Var_71;
    MR_Word STATE_VARIABLE_UsedModuleNames_73_73;
    MR_Word STATE_VARIABLE_UnqualSymNames_74_74;
    MR_Word STATE_VARIABLE_UsedModuleNames_75_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word STATE_VARIABLE_UnqualSymNames_78_78;
    MR_Word STATE_VARIABLE_UsedModuleNames_79_79;
    MR_Word STATE_VARIABLE_UnqualSymNames_80_80;
    MR_Word STATE_VARIABLE_UsedModuleNames_81_81;
    MR_Word STATE_VARIABLE_UnqualSymNames_82_82;
    MR_Word STATE_VARIABLE_UsedModuleNames_83_83;
    MR_Word Var_84;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Box conv1_ShortInclMap_39;
    MR_Box conv3_ShortImportUseMap_57;
    MR_Box conv5_ShortIntFIMSpecs_59;
    MR_Box conv6_ShortImpFIMSpecs0_62;

    Var_71 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[1]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[13]), InclMap_38, ((MR_Box) (Var_71)), &conv1_ShortInclMap_39);
    ShortInclMap_39 = ((MR_Word) (conv1_ShortInclMap_39));
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_UsedModuleNames_73_73);
    Var_76 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]));
    Var_77 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    parse_tree__comp_unit_interface__get_int2_items_from_int1_int_type_defn_9_p_0(IntTypeDefns_19, (MR_Integer) 0, &STATE_VARIABLE_UnqualSymNames_74_74, STATE_VARIABLE_UsedModuleNames_73_73, &STATE_VARIABLE_UsedModuleNames_75_75, Var_76, &ShortIntTypeDefnsCord_42, Var_77, &ShortIntImplicitFIMLangs_43);
    parse_tree__comp_unit_interface__get_int2_items_from_int1_int_inst_defn_5_p_0(IntInstDefns_20, STATE_VARIABLE_UnqualSymNames_74_74, &STATE_VARIABLE_UnqualSymNames_78_78, STATE_VARIABLE_UsedModuleNames_75_75, &STATE_VARIABLE_UsedModuleNames_79_79);
    parse_tree__comp_unit_interface__get_int2_items_from_int1_int_mode_defn_5_p_0(IntModeDefns_21, STATE_VARIABLE_UnqualSymNames_78_78, &STATE_VARIABLE_UnqualSymNames_80_80, STATE_VARIABLE_UsedModuleNames_79_79, &STATE_VARIABLE_UsedModuleNames_81_81);
    Var_84 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0));
    parse_tree__comp_unit_interface__get_int2_items_from_int1_int_typeclass_7_p_0(IntTypeClasses_22, STATE_VARIABLE_UnqualSymNames_80_80, &STATE_VARIABLE_UnqualSymNames_82_82, STATE_VARIABLE_UsedModuleNames_81_81, &STATE_VARIABLE_UsedModuleNames_83_83, Var_84, &ShortIntTypeClassesCord_44);
    Var_87 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0));
    parse_tree__comp_unit_interface__get_int2_items_from_int1_int_instance_7_p_0(IntInstances_23, STATE_VARIABLE_UnqualSymNames_82_82, &UnqualSymNames_40, STATE_VARIABLE_UsedModuleNames_83_83, &UsedModuleNames_41, Var_87, &ShortIntInstancesCord_45);
    ShortIntTypeDefns_46 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), ShortIntTypeDefnsCord_42);
    ShortIntTypeClasses_49 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ShortIntTypeClassesCord_44);
    ShortIntInstances_50 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ShortIntInstancesCord_45);
    Var_88 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    parse_tree__comp_unit_interface__get_int2_items_from_int1_imp_types_3_p_0(ImpTypeDefns_24, Var_88, &ShortImpImplicitFIMLangs_51);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 700, &Experiment1_52);
    switch (Experiment1_52) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0), &ShortIntTypeRepnMap_53);
        break;
      case (MR_Integer) 1:
        {
          MR_Word ShortIntTypeRepns_54;

          parse_tree__decide_type_repn__decide_repns_for_simple_types_for_int3_3_p_0(ModuleName_27, TypeCtorCheckedMap_25, &ShortIntTypeRepns_54);
          ShortIntTypeRepnMap_53 = parse_tree__convert_parse_tree__type_ctor_repn_items_to_map_1_f_0(ShortIntTypeRepns_54);
        }
        break;
    }
    switch (UnqualSymNames_40) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__one_or_more_map__select_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntImportUseMap_16, UsedModuleNames_41, &ShortIntUseMap_55);
        break;
      case (MR_Integer) 1:
        ShortIntUseMap_55 = IntImportUseMap_16;
        break;
    }
    ImportUseMap_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_30, (MR_Integer) 9))));
    {
      Var_90 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_12[1]));
      MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_13_p_0_2));
      MR_hl_field(MR_mktag(0), Var_90, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_90, 3) = ((MR_Box) (UnqualSymNames_40));
      MR_hl_field(MR_mktag(0), Var_90, 4) = ((MR_Box) (UsedModuleNames_41));
    }
    Var_91 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[2]), Var_90, ImportUseMap_56, ((MR_Box) (Var_91)), &conv3_ShortImportUseMap_57);
    ShortImportUseMap_57 = ((MR_Word) (conv3_ShortImportUseMap_57));
    {
      Var_92 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_92, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_92, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_13_p_0_3));
      MR_hl_field(MR_mktag(0), Var_92, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_92, 3) = ((MR_Box) (ShortIntImplicitFIMLangs_43));
    }
    mercury__set__filter_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_92, IntExplicitFIMSpecs_17, &ShortIntExplicitFIMSpecs_58);
    {
      Var_93 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_93, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_10[1]));
      MR_hl_field(MR_mktag(0), Var_93, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_13_p_0_4));
      MR_hl_field(MR_mktag(0), Var_93, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_93, 3) = ((MR_Box) (ModuleName_27));
    }
    mercury__set__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[9]), Var_93, ShortIntImplicitFIMLangs_43, ((MR_Box) (ShortIntExplicitFIMSpecs_58)), &conv5_ShortIntFIMSpecs_59);
    ShortIntFIMSpecs_59 = ((MR_Word) (conv5_ShortIntFIMSpecs_59));
    mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), IntExplicitFIMSpecs_17, ImpExplicitFIMSpecs_18, &ExplicitFIMSpecs_60);
    {
      Var_94 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_94, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_13_p_0_5));
      MR_hl_field(MR_mktag(0), Var_94, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_94, 3) = ((MR_Box) (ShortImpImplicitFIMLangs_51));
    }
    mercury__set__filter_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_94, ExplicitFIMSpecs_60, &ShortImpExplicitFIMSpecs_61);
    mercury__set__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[9]), Var_93, ShortImpImplicitFIMLangs_51, ((MR_Box) (ShortImpExplicitFIMSpecs_61)), &conv6_ShortImpFIMSpecs0_62);
    ShortImpFIMSpecs0_62 = ((MR_Word) (conv6_ShortImpFIMSpecs0_62));
    mercury__set__difference_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ShortImpFIMSpecs0_62, ShortIntFIMSpecs_59, &ShortImpFIMSpecs_63);
    ShortIntTypeDefnMap_66 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(ShortIntTypeDefns_46);
    ShortIntInstDefnMap_67 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns_20);
    ShortIntModeDefnMap_68 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns_21);
    ShortImpTypeDefnMap_69 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(ImpTypeDefns_24);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt2_26 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_27));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_28));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (IntInclMap_37));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ShortInclMap_39));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ShortIntUseMap_55));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ShortImportUseMap_57));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ShortIntFIMSpecs_59));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ShortImpFIMSpecs_63));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ShortIntTypeDefnMap_66));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ShortIntInstDefnMap_67));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ShortIntModeDefnMap_68));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ShortIntTypeClasses_49));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ShortIntInstances_50));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (ShortIntTypeRepnMap_53));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (ShortImpTypeDefnMap_69));
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
      MR_Integer SeqNum_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), InstanceInfo_17, (MR_Integer) 8))));
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
      MR_Integer SeqNum_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeClassInfo_17, (MR_Integer) 7))));
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
      MR_Integer Var_72 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeDefnInfo0_22, (MR_Integer) 5))));
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
            MR_Integer Var_78;

            parse_tree__comp_unit_interface__delete_uc_preds_from_du_type_2_p_0(DetailsDu0_29, &DetailsDu_30);
            TypeDefn_31 = (MR_Word) ((MR_Word) (DetailsDu_30));
            Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo0_22, (MR_Integer) 0))));
            Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo0_22, (MR_Integer) 1))));
            Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo0_22, (MR_Integer) 3))));
            Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo0_22, (MR_Integer) 4))));
            Var_78 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeDefnInfo0_22, (MR_Integer) 5))));
            {
              TypeDefnInfo_32 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeDefnInfo_32, 0) = ((MR_Box) (Var_73));
              MR_hl_field(MR_mktag(0), TypeDefnInfo_32, 1) = ((MR_Box) (Var_74));
              MR_hl_field(MR_mktag(0), TypeDefnInfo_32, 2) = ((MR_Box) (TypeDefn_31));
              MR_hl_field(MR_mktag(0), TypeDefnInfo_32, 3) = ((MR_Box) (Var_76));
              MR_hl_field(MR_mktag(0), TypeDefnInfo_32, 4) = ((MR_Box) (Var_77));
              MR_hl_field(MR_mktag(0), TypeDefnInfo_32, 5) = ((MR_Box) (Var_78));
            }
            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), ((MR_Box) (TypeDefnInfo_32)), STATE_VARIABLE_IntTypeDefnsCord_0_6, &STATE_VARIABLE_IntTypeDefnsCord_59_59);
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
            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), ((MR_Box) (TypeDefnInfo_65)), STATE_VARIABLE_IntTypeDefnsCord_0_6, &STATE_VARIABLE_IntTypeDefnsCord_59_59);
            STATE_VARIABLE_MaybeUnqual_52_52 = STATE_VARIABLE_MaybeUnqual_0_2;
            STATE_VARIABLE_ModuleNames_53_53 = STATE_VARIABLE_ModuleNames_0_4;
            STATE_VARIABLE_IntImplicitFIMLangs_55_55 = STATE_VARIABLE_IntImplicitFIMLangs_0_8;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word DetailsEqv0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeDefn0_28, (MR_Integer) 0))));
            MR_Word EqvType0_42;

            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), ((MR_Box) (TypeDefnInfo0_22)), STATE_VARIABLE_IntTypeDefnsCord_0_6, &STATE_VARIABLE_IntTypeDefnsCord_59_59);
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
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), ((MR_Box) (TypeDefnInfo0_22)), STATE_VARIABLE_IntTypeDefnsCord_0_6, &STATE_VARIABLE_IntTypeDefnsCord_59_59);
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
                MR_Integer Var_90;

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
                Var_90 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeDefnInfo0_22, (MR_Integer) 5))));
                {
                  TypeDefnInfo_67 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), TypeDefnInfo_67, 0) = ((MR_Box) (Var_85));
                  MR_hl_field(MR_mktag(0), TypeDefnInfo_67, 1) = ((MR_Box) (Var_86));
                  MR_hl_field(MR_mktag(0), TypeDefnInfo_67, 2) = ((MR_Box) (TypeDefn_66));
                  MR_hl_field(MR_mktag(0), TypeDefnInfo_67, 3) = ((MR_Box) (Var_88));
                  MR_hl_field(MR_mktag(0), TypeDefnInfo_67, 4) = ((MR_Box) (Var_89));
                  MR_hl_field(MR_mktag(0), TypeDefnInfo_67, 5) = ((MR_Box) (Var_90));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), ((MR_Box) (TypeDefnInfo_67)), STATE_VARIABLE_IntTypeDefnsCord_0_6, &STATE_VARIABLE_IntTypeDefnsCord_59_59);
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
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__comp_unit_interface_scalar_common_3[1])));
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
    MR_Word MaybeCanonical_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_3, (MR_Integer) 1))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_3, (MR_Integer) 0))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_3, (MR_Integer) 2))));

    if ((MaybeCanonical_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *DetailsDu_4 = DetailsDu0_3;
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *DetailsDu_4 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_10));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__comp_unit_interface_scalar_common_3[1])));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_10(
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
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_9(
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
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_8(
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
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_7(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__comp_unit_interface__IntroducedFrom__pred__generate_interface_int1__771__1_1_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_6(
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
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_5(
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
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_4(
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
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_3(
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
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_2(
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
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_1(
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
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0(
  MR_Word AugCompUnit_15,
  MR_Word * IntImportUseMap_16,
  MR_Word * IntExplicitFIMSpecs_17,
  MR_Word * ImpExplicitFIMSpecs_18,
  MR_Word * IntTypeDefns_19,
  MR_Word * IntInstDefns_20,
  MR_Word * IntModeDefns_21,
  MR_Word * IntTypeClasses_22,
  MR_Word * IntInstances_23,
  MR_Word * ImpTypeDefns_24,
  MR_Word * TypeCtorCheckedMap_25,
  MR_Word * ParseTreeInt1_26,
  MR_Word STATE_VARIABLE_Specs_0_112,
  MR_Word * STATE_VARIABLE_Specs_113)
{
  {
    MR_bool succeeded;
    MR_Word ParseTreeModuleSrc_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_15, (MR_Integer) 3))));
    MR_Word ModuleName_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_31, (MR_Integer) 0))));
    MR_Word ModuleNameContext_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_31, (MR_Integer) 1))));
    MR_Word IntInclMap_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_31, (MR_Integer) 2))));
    MR_Word ImpInclMap_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_31, (MR_Integer) 3))));
    MR_Word InclMap_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_31, (MR_Integer) 4))));
    MR_Word IntImportMap_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_31, (MR_Integer) 5))));
    MR_Word IntUseMap_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_31, (MR_Integer) 6))));
    MR_Word ImpImportMap_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_31, (MR_Integer) 7))));
    MR_Word ImpUseMap_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_31, (MR_Integer) 8))));
    MR_Word ImportUseMap0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_31, (MR_Integer) 9))));
    MR_Word IntFIMSpecMap_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_31, (MR_Integer) 10))));
    MR_Word ImpFIMSpecMap_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_31, (MR_Integer) 11))));
    MR_Word MaybeImplicitFIMLangs_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_31, (MR_Integer) 12))));
    MR_Word IntTypeDefnsAbs_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_31, (MR_Integer) 13))));
    MR_Word IntTypeDefnsMer_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_31, (MR_Integer) 14))));
    MR_Word IntTypeDefnsForeign_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_31, (MR_Integer) 15))));
    MR_Word IntPredDecls_54;
    MR_Word IntModeDecls_55;
    MR_Word IntDeclPragmas_57;
    MR_Word IntPromises0_58;
    MR_Word ImpTypeDefnsAbs_60;
    MR_Word ImpTypeDefnsMer_61;
    MR_Word ImpTypeDefnsForeign_62;
    MR_Word ImpTypeClasses_65;
    MR_Word ImpForeignEnums0_70;
    MR_Word OrigImpTypeDefns_78;
    MR_Word IntImplicitFIMLangs_79;
    MR_Word IntTypesMap_80;
    MR_Word ImpTypesMap_81;
    MR_Word IntPromises_82;
    MR_Word ImpModulesNeededByTypeClassDefns_83;
    MR_Word ImpImplicitFIMLangs1_84;
    MR_Word BothTypesMap_85;
    MR_Word NeededImpTypeCtors_86;
    MR_Word ImpModulesNeededByTypeDefns_87;
    MR_Word ImpNeededModules_88;
    MR_Word ImpImportUseMap1_89;
    MR_Word ImportUseMap_90;
    MR_Word ImpImportUseMap_91;
    MR_Word ImpImplicitFIMLangs2_95;
    MR_Word ImpForeignEnums_96;
    MR_Word ImpImplicitFIMLangs_97;
    MR_Word ImplicitFIMLangs_98;
    MR_Word IntFIMSpecs_99;
    MR_Word ImpFIMSpecs0_100;
    MR_Word ImpFIMSpecs_101;
    MR_Word IntTypeDefnMap_102;
    MR_Word IntInstDefnMap_103;
    MR_Word IntModeDefnMap_104;
    MR_Word IntForeignEnumMap_105;
    MR_Word IntTypeRepnMap_106;
    MR_Word OrigImpTypeDefnMap_108;
    MR_Word ImpTypeDefnMap_109;
    MR_Word ImpForeignEnumMap_110;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_120;
    MR_Word Var_123;
    MR_Word Var_125;
    MR_Word Var_126;
    MR_Word Var_130;
    MR_Word Var_132;
    MR_Word Var_136;
    MR_Word Var_137;
    MR_Box conv3_IntImplicitFIMLangs_79;
    MR_Box conv2_IntTypesMap_80;
    MR_Box conv5_ImpTypesMap_81;
    MR_Box conv7_ImpModulesNeededByTypeClassDefns_83;
    MR_Box conv9_ImpImplicitFIMLangs1_84;
    MR_Box conv14_ImpTypeDefns_24;
    MR_Box conv13_ImpImplicitFIMLangs2_95;
    MR_Box conv18_ImpForeignEnums_96;
    MR_Box conv17_ImpImplicitFIMLangs_97;
    MR_Box conv20_IntFIMSpecs_99;
    MR_Box conv21_ImpFIMSpecs0_100;

    *IntInstDefns_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_31, (MR_Integer) 16))));
    *IntModeDefns_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_31, (MR_Integer) 17))));
    *IntTypeClasses_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_31, (MR_Integer) 18))));
    *IntInstances_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_31, (MR_Integer) 19))));
    IntPredDecls_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_31, (MR_Integer) 20))));
    IntModeDecls_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_31, (MR_Integer) 21))));
    IntDeclPragmas_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_31, (MR_Integer) 23))));
    IntPromises0_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_31, (MR_Integer) 24))));
    ImpTypeDefnsAbs_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_31, (MR_Integer) 26))));
    ImpTypeDefnsMer_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_31, (MR_Integer) 27))));
    ImpTypeDefnsForeign_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_31, (MR_Integer) 28))));
    ImpTypeClasses_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_31, (MR_Integer) 31))));
    ImpForeignEnums0_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_31, (MR_Integer) 36))));
    mercury__map__keys_as_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntFIMSpecMap_48, IntExplicitFIMSpecs_17);
    mercury__map__keys_as_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpFIMSpecMap_49, ImpExplicitFIMSpecs_18);
    Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), IntTypeDefnsMer_52, IntTypeDefnsForeign_53);
    *IntTypeDefns_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), IntTypeDefnsAbs_51, Var_114);
    Var_115 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), ImpTypeDefnsMer_61, ImpTypeDefnsForeign_62);
    OrigImpTypeDefns_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), ImpTypeDefnsAbs_60, Var_115);
    Var_117 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    Var_118 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]));
    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[5]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[0]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[8]), *IntTypeDefns_19, ((MR_Box) (Var_117)), &conv3_IntImplicitFIMLangs_79, ((MR_Box) (Var_118)), &conv2_IntTypesMap_80);
    IntImplicitFIMLangs_79 = ((MR_Word) (conv3_IntImplicitFIMLangs_79));
    IntTypesMap_80 = ((MR_Word) (conv2_IntTypesMap_80));
    Var_120 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[0]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[9]), OrigImpTypeDefns_78, ((MR_Box) (Var_120)), &conv5_ImpTypesMap_81);
    ImpTypesMap_81 = ((MR_Word) (conv5_ImpTypesMap_81));
    mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[10]), IntPromises0_58, &IntPromises_82);
    Var_123 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[7]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[11]), ImpTypeClasses_65, ((MR_Box) (Var_123)), &conv7_ImpModulesNeededByTypeClassDefns_83);
    ImpModulesNeededByTypeClassDefns_83 = ((MR_Word) (conv7_ImpModulesNeededByTypeClassDefns_83));
    Var_125 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[5]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[12]), ImpForeignEnums0_70, ((MR_Box) (Var_125)), &conv9_ImpImplicitFIMLangs1_84);
    ImpImplicitFIMLangs1_84 = ((MR_Word) (conv9_ImpImplicitFIMLangs1_84));
    BothTypesMap_85 = mercury__one_or_more_map__merge_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), IntTypesMap_80, ImpTypesMap_81);
    parse_tree__comp_unit_interface__get_requirements_of_imp_exported_types_5_p_0(IntTypesMap_80, ImpTypesMap_81, BothTypesMap_85, &NeededImpTypeCtors_86, &ImpModulesNeededByTypeDefns_87);
    mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpModulesNeededByTypeClassDefns_83, ImpModulesNeededByTypeDefns_87, &ImpNeededModules_88);
    mercury__one_or_more_map__merge_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntImportMap_43, IntUseMap_44, IntImportUseMap_16);
    mercury__one_or_more_map__merge_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpImportMap_45, ImpUseMap_46, &ImpImportUseMap1_89);
    {
      Var_126 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_126, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_126, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_6));
      MR_hl_field(MR_mktag(0), Var_126, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_126, 3) = ((MR_Box) (ImpNeededModules_88));
    }
    mercury__map__filter_map_values_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), Var_126, ImportUseMap0_47, &ImportUseMap_90);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpNeededModules_88);
    if (succeeded)
      mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), &ImpImportUseMap_91);
    else
    {
      MR_Word IntImportUseModuleNameSet_92;
      MR_Word ImpImportUseModuleNameSet_93;
      MR_Word IntImpImportUseModuleNameSet_94;
      MR_Word Var_127;

      mercury__one_or_more_map__select_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpImportUseMap1_89, ImpNeededModules_88, &ImpImportUseMap_91);
      mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), *IntImportUseMap_16, &IntImportUseModuleNameSet_92);
      mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), ImpImportUseMap_91, &ImpImportUseModuleNameSet_93);
      mercury__set__intersect_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImportUseModuleNameSet_92, ImpImportUseModuleNameSet_93, &IntImpImportUseModuleNameSet_94);
      {
        Var_127 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_127, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[3]));
        MR_hl_field(MR_mktag(0), Var_127, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_7));
        MR_hl_field(MR_mktag(0), Var_127, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_127, 3) = ((MR_Box) (IntImpImportUseModuleNameSet_94));
      }
      mercury__require__expect_3_p_0(Var_127, (MR_String) "predicate \140parse_tree.comp_unit_interface.generate_interface_int1\'/14", (MR_String) "Int and Imp ImportUseModuleNames intersect");
    }
    {
      Var_130 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_130, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), Var_130, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_8));
      MR_hl_field(MR_mktag(0), Var_130, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_130, 3) = ((MR_Box) (BothTypesMap_85));
      MR_hl_field(MR_mktag(0), Var_130, 4) = ((MR_Box) (IntTypesMap_80));
      MR_hl_field(MR_mktag(0), Var_130, 5) = ((MR_Box) (NeededImpTypeCtors_86));
    }
    mercury__map__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[6]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[8]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[5]), Var_130, ImpTypesMap_81, ((MR_Box) ((MR_Unsigned) 0U)), &conv14_ImpTypeDefns_24, ((MR_Box) (ImpImplicitFIMLangs1_84)), &conv13_ImpImplicitFIMLangs2_95);
    *ImpTypeDefns_24 = ((MR_Word) (conv14_ImpTypeDefns_24));
    ImpImplicitFIMLangs2_95 = ((MR_Word) (conv13_ImpImplicitFIMLangs2_95));
    {
      Var_132 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_132, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_12[0]));
      MR_hl_field(MR_mktag(0), Var_132, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_9));
      MR_hl_field(MR_mktag(0), Var_132, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_132, 3) = ((MR_Box) (IntTypesMap_80));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[5]), Var_132, ImpForeignEnums0_70, ((MR_Box) ((MR_Unsigned) 0U)), &conv18_ImpForeignEnums_96, ((MR_Box) (ImpImplicitFIMLangs2_95)), &conv17_ImpImplicitFIMLangs_97);
    ImpForeignEnums_96 = ((MR_Word) (conv18_ImpForeignEnums_96));
    ImpImplicitFIMLangs_97 = ((MR_Word) (conv17_ImpImplicitFIMLangs_97));
    if ((MaybeImplicitFIMLangs_50 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.generate_interface_int1\'/14", (MR_String) "MaybeImplicitFIMLangs = no");
        return;
      }
    else
      ImplicitFIMLangs_98 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeImplicitFIMLangs_50, (MR_Integer) 0))));
    {
      Var_136 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_136, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_10[1]));
      MR_hl_field(MR_mktag(0), Var_136, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_10));
      MR_hl_field(MR_mktag(0), Var_136, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_136, 3) = ((MR_Box) (ModuleName_38));
    }
    Var_137 = mercury__set__union_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), IntImplicitFIMLangs_79, ImplicitFIMLangs_98);
    mercury__set__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[9]), Var_136, Var_137, ((MR_Box) (*IntExplicitFIMSpecs_17)), &conv20_IntFIMSpecs_99);
    IntFIMSpecs_99 = ((MR_Word) (conv20_IntFIMSpecs_99));
    mercury__set__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[9]), Var_136, ImpImplicitFIMLangs_97, ((MR_Box) (*ImpExplicitFIMSpecs_18)), &conv21_ImpFIMSpecs0_100);
    ImpFIMSpecs0_100 = ((MR_Word) (conv21_ImpFIMSpecs0_100));
    mercury__set__difference_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ImpFIMSpecs0_100, IntFIMSpecs_99, &ImpFIMSpecs_101);
    IntTypeDefnMap_102 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(*IntTypeDefns_19);
    IntInstDefnMap_103 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(*IntInstDefns_20);
    IntModeDefnMap_104 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(*IntModeDefns_21);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), &IntForeignEnumMap_105);
    OrigImpTypeDefnMap_108 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(OrigImpTypeDefns_78);
    ImpTypeDefnMap_109 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(*ImpTypeDefns_24);
    ImpForeignEnumMap_110 = parse_tree__convert_parse_tree__type_ctor_foreign_enum_items_to_map_1_f_0(ImpForeignEnums_96);
    parse_tree__check_parse_tree_type_defns__create_type_ctor_checked_map_9_p_0((MR_Integer) 1, ModuleName_38, IntTypeDefnMap_102, OrigImpTypeDefnMap_108, IntForeignEnumMap_105, ImpForeignEnumMap_110, TypeCtorCheckedMap_25, STATE_VARIABLE_Specs_0_112, STATE_VARIABLE_Specs_113);
    IntTypeRepnMap_106 = parse_tree__convert_parse_tree__type_ctor_repn_items_to_map_1_f_0((MR_Word) ((MR_Unsigned) 0U));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt1_26 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_38));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_39));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (IntInclMap_40));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ImpInclMap_41));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (InclMap_42));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (*IntImportUseMap_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ImpImportUseMap_91));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ImportUseMap_90));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (IntFIMSpecs_99));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ImpFIMSpecs_101));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (IntTypeDefnMap_102));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (IntInstDefnMap_103));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (IntModeDefnMap_104));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (*IntTypeClasses_22));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (*IntInstances_23));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (IntPredDecls_54));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (IntModeDecls_55));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (IntForeignEnumMap_105));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (IntDeclPragmas_57));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (IntPromises_82));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (IntTypeRepnMap_106));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (ImpTypeDefnMap_109));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (ImpForeignEnumMap_110));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (ImpTypeClasses_65));
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
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (parse_tree__comp_unit_interface__get_requirements_of_imp_exported_types_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (IntTypesMap_6));
      MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (BothTypesMap_8));
    }
    Var_17 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    Var_18 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    Var_19 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    mercury__map__foldl3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[6]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), Var_16, ImpTypesMap_7, ((MR_Box) (Var_17)), &conv5_AbsExpEqvLhsTypeCtors_11, ((MR_Box) (Var_18)), &conv4_AbsExpEnumTypeCtors_12, ((MR_Box) (Var_19)), &conv3_DirectDummyTypeCtors_13);
    AbsExpEqvLhsTypeCtors_11 = ((MR_Word) (conv5_AbsExpEqvLhsTypeCtors_11));
    AbsExpEnumTypeCtors_12 = ((MR_Word) (conv4_AbsExpEnumTypeCtors_12));
    DirectDummyTypeCtors_13 = ((MR_Word) (conv3_DirectDummyTypeCtors_13));
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (parse_tree__comp_unit_interface__get_requirements_of_imp_exported_types_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (ImpTypesMap_7));
    }
    Var_21 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    Var_22 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    Var_23 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__set__fold3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[7]), Var_20, AbsExpEqvLhsTypeCtors_11, ((MR_Box) (Var_21)), &conv11_AbsExpEqvRhsTypeCtors_14, ((MR_Box) (Var_22)), &conv10_DuArgTypeCtors_15, ((MR_Box) (Var_23)), &conv9_ModulesNeededByTypeDefns_10);
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

void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0(
  MR_Word RawCompUnit_3,
  MR_Word * InterfaceRawCompUnit_4)
{
  {
    MR_Word ModuleName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_3, (MR_Integer) 0))));
    MR_Word ModuleNameContext_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_3, (MR_Integer) 1))));
    MR_Word RawItemBlocks_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_3, (MR_Integer) 2))));
    MR_Word IntInclsCord_8;
    MR_Word ImpInclsCord_9;
    MR_Word IntAvailsCord_10;
    MR_Word ImpAvailsCord_11;
    MR_Word IntFIMsCord_12;
    MR_Word ImpFIMsCord_13;
    MR_Word IntItemsCord_14;
    MR_Word ImpItemsCord_15;
    MR_Word IntIncls_16;
    MR_Word ImpIncls_17;
    MR_Word IntAvails_18;
    MR_Word ImpAvails_19;
    MR_Word IntFIMs_20;
    MR_Word ImpFIMs_21;
    MR_Word IntItems_22;
    MR_Word ImpItems_23;
    MR_Word InterfaceItemBlocks_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;

    Var_25 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
    Var_26 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
    Var_27 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
    Var_28 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
    Var_29 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
    Var_30 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
    Var_31 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    Var_32 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_item_blocks_17_p_0(RawItemBlocks_7, Var_25, &IntInclsCord_8, Var_26, &ImpInclsCord_9, Var_27, &IntAvailsCord_10, Var_28, &ImpAvailsCord_11, Var_29, &IntFIMsCord_12, Var_30, &ImpFIMsCord_13, Var_31, &IntItemsCord_14, Var_32, &ImpItemsCord_15);
    IntIncls_16 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), IntInclsCord_8);
    ImpIncls_17 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), ImpInclsCord_9);
    IntAvails_18 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), IntAvailsCord_10);
    ImpAvails_19 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImpAvailsCord_11);
    IntFIMs_20 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), IntFIMsCord_12);
    ImpFIMs_21 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), ImpFIMsCord_13);
    IntItems_22 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), IntItemsCord_14);
    ImpItems_23 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ImpItemsCord_15);
    parse_tree__item_util__int_imp_items_to_item_blocks_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0), ModuleName_5, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 1)), IntIncls_16, ImpIncls_17, IntAvails_18, ImpAvails_19, IntFIMs_20, ImpFIMs_21, IntItems_22, ImpItems_23, &InterfaceItemBlocks_24);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *InterfaceRawCompUnit_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_6));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (InterfaceItemBlocks_24));
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_item_blocks_17_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntInclsCord_0_2,
  MR_Word * STATE_VARIABLE_IntInclsCord_3,
  MR_Word STATE_VARIABLE_ImpInclsCord_0_4,
  MR_Word * STATE_VARIABLE_ImpInclsCord_5,
  MR_Word STATE_VARIABLE_IntAvailsCord_0_6,
  MR_Word * STATE_VARIABLE_IntAvailsCord_7,
  MR_Word STATE_VARIABLE_ImpAvailsCord_0_8,
  MR_Word * STATE_VARIABLE_ImpAvailsCord_9,
  MR_Word STATE_VARIABLE_IntFIMsCord_0_10,
  MR_Word * STATE_VARIABLE_IntFIMsCord_11,
  MR_Word STATE_VARIABLE_ImpFIMsCord_0_12,
  MR_Word * STATE_VARIABLE_ImpFIMsCord_13,
  MR_Word STATE_VARIABLE_IntItemsCord_0_14,
  MR_Word * STATE_VARIABLE_IntItemsCord_15,
  MR_Word STATE_VARIABLE_ImpItemsCord_0_16,
  MR_Word * STATE_VARIABLE_ImpItemsCord_17)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ImpItemsCord_17 = STATE_VARIABLE_ImpItemsCord_0_16;
      *STATE_VARIABLE_IntItemsCord_15 = STATE_VARIABLE_IntItemsCord_0_14;
      *STATE_VARIABLE_ImpFIMsCord_13 = STATE_VARIABLE_ImpFIMsCord_0_12;
      *STATE_VARIABLE_IntFIMsCord_11 = STATE_VARIABLE_IntFIMsCord_0_10;
      *STATE_VARIABLE_ImpAvailsCord_9 = STATE_VARIABLE_ImpAvailsCord_0_8;
      *STATE_VARIABLE_IntAvailsCord_7 = STATE_VARIABLE_IntAvailsCord_0_6;
      *STATE_VARIABLE_ImpInclsCord_5 = STATE_VARIABLE_ImpInclsCord_0_4;
      *STATE_VARIABLE_IntInclsCord_3 = STATE_VARIABLE_IntInclsCord_0_2;
    }
    else
    {
      MR_Word RawItemBlock_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word RawItemBlocks_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Section_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_42, (MR_Integer) 1))));
      MR_Word Incls_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_42, (MR_Integer) 2))));
      MR_Word Avails_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_42, (MR_Integer) 3))));
      MR_Word FIMs_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_42, (MR_Integer) 4))));
      MR_Word Items_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_42, (MR_Integer) 5))));
      MR_Word STATE_VARIABLE_ImpInclsCord_74_74;
      MR_Word STATE_VARIABLE_ImpAvailsCord_76_76;
      MR_Word STATE_VARIABLE_ImpFIMsCord_78_78;
      MR_Word STATE_VARIABLE_ImpItemsCord_80_80;
      MR_Word STATE_VARIABLE_IntInclsCord_81_81;
      MR_Word STATE_VARIABLE_IntAvailsCord_83_83;
      MR_Word STATE_VARIABLE_IntFIMsCord_85_85;
      MR_Word STATE_VARIABLE_IntItemsCord_87_87;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_IntInclsCord_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ImpInclsCord_0_4;
      MR_Word next_value_of_STATE_VARIABLE_IntAvailsCord_0_6;
      MR_Word next_value_of_STATE_VARIABLE_ImpAvailsCord_0_8;
      MR_Word next_value_of_STATE_VARIABLE_IntFIMsCord_0_10;
      MR_Word next_value_of_STATE_VARIABLE_ImpFIMsCord_0_12;
      MR_Word next_value_of_STATE_VARIABLE_IntItemsCord_0_14;
      MR_Word next_value_of_STATE_VARIABLE_ImpItemsCord_0_16;

      switch (Section_53) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word Var_75;
            MR_Word Var_77;
            MR_Word Var_79;

            Var_75 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Incls_54);
            STATE_VARIABLE_ImpInclsCord_74_74 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_ImpInclsCord_0_4, Var_75);
            Var_77 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Avails_55);
            STATE_VARIABLE_ImpAvailsCord_76_76 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), STATE_VARIABLE_ImpAvailsCord_0_8, Var_77);
            Var_79 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), FIMs_56);
            STATE_VARIABLE_ImpFIMsCord_78_78 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), STATE_VARIABLE_ImpFIMsCord_0_12, Var_79);
            parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_items_imp_3_p_0(Items_57, STATE_VARIABLE_ImpItemsCord_0_16, &STATE_VARIABLE_ImpItemsCord_80_80);
            STATE_VARIABLE_IntInclsCord_81_81 = STATE_VARIABLE_IntInclsCord_0_2;
            STATE_VARIABLE_IntAvailsCord_83_83 = STATE_VARIABLE_IntAvailsCord_0_6;
            STATE_VARIABLE_IntFIMsCord_85_85 = STATE_VARIABLE_IntFIMsCord_0_10;
            STATE_VARIABLE_IntItemsCord_87_87 = STATE_VARIABLE_IntItemsCord_0_14;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Var_82;
            MR_Word Var_84;
            MR_Word Var_86;

            Var_82 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Incls_54);
            STATE_VARIABLE_IntInclsCord_81_81 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_IntInclsCord_0_2, Var_82);
            Var_84 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Avails_55);
            STATE_VARIABLE_IntAvailsCord_83_83 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), STATE_VARIABLE_IntAvailsCord_0_6, Var_84);
            Var_86 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), FIMs_56);
            STATE_VARIABLE_IntFIMsCord_85_85 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), STATE_VARIABLE_IntFIMsCord_0_10, Var_86);
            parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_items_int_3_p_0(Items_57, STATE_VARIABLE_IntItemsCord_0_14, &STATE_VARIABLE_IntItemsCord_87_87);
            STATE_VARIABLE_ImpInclsCord_74_74 = STATE_VARIABLE_ImpInclsCord_0_4;
            STATE_VARIABLE_ImpAvailsCord_76_76 = STATE_VARIABLE_ImpAvailsCord_0_8;
            STATE_VARIABLE_ImpFIMsCord_78_78 = STATE_VARIABLE_ImpFIMsCord_0_12;
            STATE_VARIABLE_ImpItemsCord_80_80 = STATE_VARIABLE_ImpItemsCord_0_16;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = RawItemBlocks_43;
      next_value_of_STATE_VARIABLE_IntInclsCord_0_2 = STATE_VARIABLE_IntInclsCord_81_81;
      next_value_of_STATE_VARIABLE_ImpInclsCord_0_4 = STATE_VARIABLE_ImpInclsCord_74_74;
      next_value_of_STATE_VARIABLE_IntAvailsCord_0_6 = STATE_VARIABLE_IntAvailsCord_83_83;
      next_value_of_STATE_VARIABLE_ImpAvailsCord_0_8 = STATE_VARIABLE_ImpAvailsCord_76_76;
      next_value_of_STATE_VARIABLE_IntFIMsCord_0_10 = STATE_VARIABLE_IntFIMsCord_85_85;
      next_value_of_STATE_VARIABLE_ImpFIMsCord_0_12 = STATE_VARIABLE_ImpFIMsCord_78_78;
      next_value_of_STATE_VARIABLE_IntItemsCord_0_14 = STATE_VARIABLE_IntItemsCord_87_87;
      next_value_of_STATE_VARIABLE_ImpItemsCord_0_16 = STATE_VARIABLE_ImpItemsCord_80_80;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_IntInclsCord_0_2 = next_value_of_STATE_VARIABLE_IntInclsCord_0_2;
      STATE_VARIABLE_ImpInclsCord_0_4 = next_value_of_STATE_VARIABLE_ImpInclsCord_0_4;
      STATE_VARIABLE_IntAvailsCord_0_6 = next_value_of_STATE_VARIABLE_IntAvailsCord_0_6;
      STATE_VARIABLE_ImpAvailsCord_0_8 = next_value_of_STATE_VARIABLE_ImpAvailsCord_0_8;
      STATE_VARIABLE_IntFIMsCord_0_10 = next_value_of_STATE_VARIABLE_IntFIMsCord_0_10;
      STATE_VARIABLE_ImpFIMsCord_0_12 = next_value_of_STATE_VARIABLE_ImpFIMsCord_0_12;
      STATE_VARIABLE_IntItemsCord_0_14 = next_value_of_STATE_VARIABLE_IntItemsCord_0_14;
      STATE_VARIABLE_ImpItemsCord_0_16 = next_value_of_STATE_VARIABLE_ImpItemsCord_0_16;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_items_imp_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImpItemsCord_0_2,
  MR_Word * STATE_VARIABLE_ImpItemsCord_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ImpItemsCord_3 = STATE_VARIABLE_ImpItemsCord_0_2;
    else
    {
      MR_Word Item_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ImpItemsCord_39_39;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImpItemsCord_0_2;

      switch (MR_tag((MR_Word) Item_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_ImpItemsCord_39_39 = STATE_VARIABLE_ImpItemsCord_0_2;
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_ImpItemsCord_39_39 = STATE_VARIABLE_ImpItemsCord_0_2;
          break;
        case (MR_Integer) 2:
          STATE_VARIABLE_ImpItemsCord_39_39 = STATE_VARIABLE_ImpItemsCord_0_2;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_ImpItemsCord_39_39 = STATE_VARIABLE_ImpItemsCord_0_2;
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_ImpItemsCord_39_39 = STATE_VARIABLE_ImpItemsCord_0_2;
              break;
            case (MR_Integer) 2:
              mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_7)), STATE_VARIABLE_ImpItemsCord_0_2, &STATE_VARIABLE_ImpItemsCord_39_39);
              break;
            case (MR_Integer) 3:
              STATE_VARIABLE_ImpItemsCord_39_39 = STATE_VARIABLE_ImpItemsCord_0_2;
              break;
            case (MR_Integer) 4:
              STATE_VARIABLE_ImpItemsCord_39_39 = STATE_VARIABLE_ImpItemsCord_0_2;
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemTypeClassInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 1))));
                MR_Word AbstractItemTypeClassInfo_14;
                MR_Word AbstractItem_15;
                MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_13, (MR_Integer) 0))));
                MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_13, (MR_Integer) 1))));
                MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_13, (MR_Integer) 2))));
                MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_13, (MR_Integer) 3))));
                MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_13, (MR_Integer) 5))));
                MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_13, (MR_Integer) 6))));
                MR_Integer Var_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_13, (MR_Integer) 7))));

                {
                  AbstractItemTypeClassInfo_14 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_14, 0) = ((MR_Box) (Var_41));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_14, 1) = ((MR_Box) (Var_42));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_14, 2) = ((MR_Box) (Var_43));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_14, 3) = ((MR_Box) (Var_44));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_14, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_14, 5) = ((MR_Box) (Var_46));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_14, 6) = ((MR_Box) (Var_47));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_14, 7) = ((MR_Box) (Var_48));
                }
                {
                  AbstractItem_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), AbstractItem_15, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), AbstractItem_15, 1) = ((MR_Box) (AbstractItemTypeClassInfo_14));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (AbstractItem_15)), STATE_VARIABLE_ImpItemsCord_0_2, &STATE_VARIABLE_ImpItemsCord_39_39);
              }
              break;
            case (MR_Integer) 6:
              STATE_VARIABLE_ImpItemsCord_39_39 = STATE_VARIABLE_ImpItemsCord_0_2;
              break;
            case (MR_Integer) 7:
              STATE_VARIABLE_ImpItemsCord_39_39 = STATE_VARIABLE_ImpItemsCord_0_2;
              break;
            case (MR_Integer) 8:
              STATE_VARIABLE_ImpItemsCord_39_39 = STATE_VARIABLE_ImpItemsCord_0_2;
              break;
            case (MR_Integer) 9:
              STATE_VARIABLE_ImpItemsCord_39_39 = STATE_VARIABLE_ImpItemsCord_0_2;
              break;
            case (MR_Integer) 10:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.generate_pre_grab_pre_qual_items_imp\'/3", (MR_String) "item_type_repn");
                return;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word TypeDefnInfo_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 1))));
                MR_Word TypeDefnInfo1_11;
                MR_Word Item1_12;

                parse_tree__comp_unit_interface__delete_uc_preds_make_solver_type_dummy_2_p_0(TypeDefnInfo_10, &TypeDefnInfo1_11);
                {
                  Item1_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Item1_12, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                  MR_hl_field(MR_mktag(3), Item1_12, 1) = ((MR_Box) (TypeDefnInfo1_11));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item1_12)), STATE_VARIABLE_ImpItemsCord_0_2, &STATE_VARIABLE_ImpItemsCord_39_39);
              }
              break;
            case (MR_Integer) 12:
              STATE_VARIABLE_ImpItemsCord_39_39 = STATE_VARIABLE_ImpItemsCord_0_2;
              break;
            case (MR_Integer) 13:
              STATE_VARIABLE_ImpItemsCord_39_39 = STATE_VARIABLE_ImpItemsCord_0_2;
              break;
            case (MR_Integer) 14:
              STATE_VARIABLE_ImpItemsCord_39_39 = STATE_VARIABLE_ImpItemsCord_0_2;
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_8;
      next_value_of_STATE_VARIABLE_ImpItemsCord_0_2 = STATE_VARIABLE_ImpItemsCord_39_39;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ImpItemsCord_0_2 = next_value_of_STATE_VARIABLE_ImpItemsCord_0_2;
      continue;
    }
    break;
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
    MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_3, (MR_Integer) 5))));

    switch (MR_tag((MR_Word) TypeDefn0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DetailsDu0_6 = (MR_Word) ((MR_Word) (TypeDefn0_5));
          MR_Word DetailsDu_7;
          MR_Word TypeDefn_8;
          MR_Word MaybeCanonical_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_6, (MR_Integer) 1))));
          MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_6, (MR_Integer) 0))));
          MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_6, (MR_Integer) 2))));

          if ((MaybeCanonical_43 == (MR_Word) ((MR_Unsigned) 0U)))
            DetailsDu_7 = DetailsDu0_6;
          else
            {
              DetailsDu_7 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), DetailsDu_7, 0) = ((MR_Box) (Var_48));
              MR_hl_field(MR_mktag(0), DetailsDu_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__comp_unit_interface_scalar_common_3[1])));
              MR_hl_field(MR_mktag(0), DetailsDu_7, 2) = ((MR_Box) (Var_49));
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
              MR_Word MaybeCanonical0_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_12, (MR_Integer) 1))));
              MR_Word Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_12, (MR_Integer) 0))));
              MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_12, (MR_Integer) 2))));

              if ((MaybeCanonical0_55 == (MR_Word) ((MR_Unsigned) 0U)))
                DetailsForeign_13 = DetailsForeign0_12;
              else
                {
                  DetailsForeign_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), DetailsForeign_13, 0) = ((MR_Box) (Var_60));
                  MR_hl_field(MR_mktag(0), DetailsForeign_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__comp_unit_interface_scalar_common_3[1])));
                  MR_hl_field(MR_mktag(0), DetailsForeign_13, 2) = ((MR_Box) (Var_61));
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
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_items_int_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntItemsCord_0_2,
  MR_Word * STATE_VARIABLE_IntItemsCord_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_IntItemsCord_3 = STATE_VARIABLE_IntItemsCord_0_2;
    else
    {
      MR_Word Item_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_IntItemsCord_16_16;
      MR_Word ItemInstance_10;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_IntItemsCord_0_2;

      succeeded = ((((MR_tag((MR_Word) Item_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 0)))) == (MR_Integer) 6)));
      if (succeeded)
      {
        ItemInstance_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 1))));
        {
          MR_Word AbstractItemInstance_11;
          MR_Word AbstractItem_12;
          MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance_10, (MR_Integer) 0))));
          MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance_10, (MR_Integer) 1))));
          MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance_10, (MR_Integer) 2))));
          MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance_10, (MR_Integer) 3))));
          MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance_10, (MR_Integer) 5))));
          MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance_10, (MR_Integer) 6))));
          MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance_10, (MR_Integer) 7))));
          MR_Integer Var_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemInstance_10, (MR_Integer) 8))));

          {
            AbstractItemInstance_11 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), AbstractItemInstance_11, 0) = ((MR_Box) (Var_19));
            MR_hl_field(MR_mktag(0), AbstractItemInstance_11, 1) = ((MR_Box) (Var_20));
            MR_hl_field(MR_mktag(0), AbstractItemInstance_11, 2) = ((MR_Box) (Var_21));
            MR_hl_field(MR_mktag(0), AbstractItemInstance_11, 3) = ((MR_Box) (Var_22));
            MR_hl_field(MR_mktag(0), AbstractItemInstance_11, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), AbstractItemInstance_11, 5) = ((MR_Box) (Var_24));
            MR_hl_field(MR_mktag(0), AbstractItemInstance_11, 6) = ((MR_Box) (Var_25));
            MR_hl_field(MR_mktag(0), AbstractItemInstance_11, 7) = ((MR_Box) (Var_26));
            MR_hl_field(MR_mktag(0), AbstractItemInstance_11, 8) = ((MR_Box) (Var_27));
          }
          {
            AbstractItem_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), AbstractItem_12, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), AbstractItem_12, 1) = ((MR_Box) (AbstractItemInstance_11));
          }
          mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (AbstractItem_12)), STATE_VARIABLE_IntItemsCord_0_2, &STATE_VARIABLE_IntItemsCord_16_16);
        }
      }
      else
        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_7)), STATE_VARIABLE_IntItemsCord_0_2, &STATE_VARIABLE_IntItemsCord_16_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_8;
      next_value_of_STATE_VARIABLE_IntItemsCord_0_2 = STATE_VARIABLE_IntItemsCord_16_16;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_IntItemsCord_0_2 = next_value_of_STATE_VARIABLE_IntItemsCord_0_2;
      continue;
    }
    break;
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
    MR_Word conv4_PublicAuxPredDecls_6;

    conv4_PublicAuxPredDecls_6 = parse_tree__comp_unit_interface__mutable_public_aux_pred_decls_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_PublicAuxPredDecls_6));
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
  MR_Word STATE_VARIABLE_Specs_0_84,
  MR_Word * STATE_VARIABLE_Specs_85)
{
  {
    MR_bool succeeded;
    MR_Word ModuleVersionNumbers_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 2))));
    MR_Word ParseTreeModuleSrc_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 3))));
    MR_Word ModuleName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 0))));
    MR_Word MaybeVersionNumbers_20;
    MR_Word ModuleNameContext_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 1))));
    MR_Word IntInclMap_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 2))));
    MR_Word ImpInclMap_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 3))));
    MR_Word InclMap_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 4))));
    MR_Word IntImportMap_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 5))));
    MR_Word IntUseMap_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 6))));
    MR_Word ImpImportMap_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 7))));
    MR_Word ImpUseMap_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 8))));
    MR_Word ImportUseMap_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 9))));
    MR_Word IntFIMSpecMap_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 10))));
    MR_Word ImpFIMSpecMap_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 11))));
    MR_Word MaybeImplicitFIMLangs_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 12))));
    MR_Word IntTypeDefnsAbs_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 13))));
    MR_Word IntTypeDefnsMer_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 14))));
    MR_Word IntTypeDefnsForeign_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 15))));
    MR_Word IntInstDefns_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 16))));
    MR_Word IntModeDefns_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 17))));
    MR_Word IntTypeClasses_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 18))));
    MR_Word IntInstances0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 19))));
    MR_Word IntPredDecls_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 20))));
    MR_Word IntModeDecls_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 21))));
    MR_Word IntDeclPragmas_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 23))));
    MR_Word IntPromises_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 24))));
    MR_Word ImpTypeDefnsAbs_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 26))));
    MR_Word ImpTypeDefnsMer_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 27))));
    MR_Word ImpTypeDefnsForeign_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 28))));
    MR_Word ImpInstDefns_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 29))));
    MR_Word ImpModeDefns_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 30))));
    MR_Word ImpTypeClasses_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 31))));
    MR_Word ImpInstances0_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 32))));
    MR_Word ImpPredDecls0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 33))));
    MR_Word ImpModeDecls_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 34))));
    MR_Word ImpForeignEnums_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 36))));
    MR_Word ImpDeclPragmas_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 38))));
    MR_Word ImpPromises_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 40))));
    MR_Word ImpMutables_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 43))));
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
    MR_Word IntForeignEnumMap_80;
    MR_Word ImpForeignEnumMap_81;
    MR_Word ParseTreeInt0Prime_83;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word VersionNumbers_19;
    MR_Box conv0_VersionNumbers_19;
    MR_Word _TypeCtorCheckedMap_82;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_version_numbers_0), ModuleVersionNumbers_10, ((MR_Box) (ModuleName_18)), &conv0_VersionNumbers_19);
    if (succeeded)
    {
      VersionNumbers_19 = ((MR_Word) (conv0_VersionNumbers_19));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      {
        MaybeVersionNumbers_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeVersionNumbers_20, 0) = ((MR_Box) (VersionNumbers_19));
      }
    else
      MaybeVersionNumbers_20 = (MR_Word) ((MR_Unsigned) 0U);
    mercury__map__keys_as_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntFIMSpecMap_30, &IntFIMSpecs0_64);
    mercury__map__keys_as_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpFIMSpecMap_31, &ImpFIMSpecs0_65);
    if ((MaybeImplicitFIMLangs_32 == (MR_Word) ((MR_Unsigned) 0U)))
      IntFIMSpecs_67 = IntFIMSpecs0_64;
    else
    {
      MR_Word ImplicitFIMLangs_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeImplicitFIMLangs_32, (MR_Integer) 0))));
      MR_Word Var_86;
      MR_Word Var_87;

      {
        Var_87 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_87, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_87, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_87, 3) = ((MR_Box) (ModuleName_18));
      }
      Var_86 = mercury__set__map_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_87, ImplicitFIMLangs_66);
      mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_86, IntFIMSpecs0_64, &IntFIMSpecs_67);
    }
    mercury__set__difference_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ImpFIMSpecs0_65, IntFIMSpecs_67, &ImpFIMSpecs_68);
    IntInstances_69 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[5]), IntInstances0_39);
    ImpInstances_70 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[6]), ImpInstances0_52);
    {
      Var_92 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_92, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_92, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_4));
      MR_hl_field(MR_mktag(0), Var_92, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_92, 3) = ((MR_Box) (ModuleName_18));
    }
    Var_91 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[2]), Var_92, ImpMutables_63);
    Var_90 = mercury__list__condense_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), Var_91);
    ImpPredDecls_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), ImpPredDecls0_53, Var_90);
    Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), IntTypeDefnsMer_34, IntTypeDefnsForeign_35);
    IntTypeDefns_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), IntTypeDefnsAbs_33, Var_93);
    Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), ImpTypeDefnsMer_47, ImpTypeDefnsForeign_48);
    ImpTypeDefns_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), ImpTypeDefnsAbs_46, Var_94);
    IntTypeDefnMap_74 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(IntTypeDefns_72);
    IntInstDefnMap_75 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns_36);
    IntModeDefnMap_76 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns_37);
    ImpTypeDefnMap_77 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(ImpTypeDefns_73);
    ImpInstDefnMap_78 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(ImpInstDefns_49);
    ImpModeDefnMap_79 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(ImpModeDefns_50);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), &IntForeignEnumMap_80);
    ImpForeignEnumMap_81 = parse_tree__convert_parse_tree__type_ctor_foreign_enum_items_to_map_1_f_0(ImpForeignEnums_56);
    parse_tree__check_parse_tree_type_defns__create_type_ctor_checked_map_9_p_0((MR_Integer) 1, ModuleName_18, IntTypeDefnMap_74, ImpTypeDefnMap_77, IntForeignEnumMap_80, ImpForeignEnumMap_81, &_TypeCtorCheckedMap_82, STATE_VARIABLE_Specs_0_84, STATE_VARIABLE_Specs_85);
    {
      ParseTreeInt0Prime_83 = (MR_Word) MR_new_object(MR_Word, (33 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_83, 0) = ((MR_Box) (ModuleName_18));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_83, 1) = ((MR_Box) (ModuleNameContext_21));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_83, 2) = ((MR_Box) (MaybeVersionNumbers_20));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_83, 3) = ((MR_Box) (IntInclMap_22));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_83, 4) = ((MR_Box) (ImpInclMap_23));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_83, 5) = ((MR_Box) (InclMap_24));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_83, 6) = ((MR_Box) (IntImportMap_25));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_83, 7) = ((MR_Box) (IntUseMap_26));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_83, 8) = ((MR_Box) (ImpImportMap_27));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_83, 9) = ((MR_Box) (ImpUseMap_28));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_83, 10) = ((MR_Box) (ImportUseMap_29));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_83, 11) = ((MR_Box) (IntFIMSpecs_67));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_83, 12) = ((MR_Box) (ImpFIMSpecs_68));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_83, 13) = ((MR_Box) (IntTypeDefnMap_74));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_83, 14) = ((MR_Box) (IntInstDefnMap_75));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_83, 15) = ((MR_Box) (IntModeDefnMap_76));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_83, 16) = ((MR_Box) (IntTypeClasses_38));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_83, 17) = ((MR_Box) (IntInstances_69));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_83, 18) = ((MR_Box) (IntPredDecls_40));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_83, 19) = ((MR_Box) (IntModeDecls_41));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_83, 20) = ((MR_Box) (IntForeignEnumMap_80));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_83, 21) = ((MR_Box) (IntDeclPragmas_43));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_83, 22) = ((MR_Box) (IntPromises_44));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_83, 23) = ((MR_Box) (ImpTypeDefnMap_77));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_83, 24) = ((MR_Box) (ImpInstDefnMap_78));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_83, 25) = ((MR_Box) (ImpModeDefnMap_79));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_83, 26) = ((MR_Box) (ImpTypeClasses_51));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_83, 27) = ((MR_Box) (ImpInstances_70));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_83, 28) = ((MR_Box) (ImpPredDecls_71));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_83, 29) = ((MR_Box) (ImpModeDecls_54));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_83, 30) = ((MR_Box) (ImpForeignEnumMap_81));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_83, 31) = ((MR_Box) (ImpDeclPragmas_58));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_83, 32) = ((MR_Box) (ImpPromises_60));
    }
    *ParseTreeInt0_6 = parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0(ParseTreeInt0Prime_83);
  }
}

void MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_6_p_0(
  MR_Word Globals_7,
  MR_Word RawCompUnit_8,
  MR_Word * ParseTreeInt3_9,
  MR_Word * ParseTreeInt_10,
  MR_Word STATE_VARIABLE_Specs_0_61,
  MR_Word * STATE_VARIABLE_Specs_62)
{
  {
    MR_Word ModuleName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_8, (MR_Integer) 0))));
    MR_Word ModuleNameContext_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_8, (MR_Integer) 1))));
    MR_Word RawItemBlocks_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_8, (MR_Integer) 2))));
    MR_Word IntIncls_15;
    MR_Word IntImportAvails0_16;
    MR_Word OrigIntTypeDefnsCord_17;
    MR_Word IntTypeDefnsCord_18;
    MR_Word IntInstDefnsCord_19;
    MR_Word IntModeDefnsCord_20;
    MR_Word IntTypeClassesCord_21;
    MR_Word IntInstancesCord_22;
    MR_Word OrigIntForeignEnumsCord_23;
    MR_Word OrigImpTypeDefnsCord_24;
    MR_Word OrigImpForeignEnumsCord_25;
    MR_Word NeedImports_26;
    MR_Word IntInclMap_28;
    MR_Word InclMap_30;
    MR_Word IntImportAvails_31;
    MR_Word IntImportMap_32;
    MR_Word IntUseMap_34;
    MR_Word ImpImportMap_35;
    MR_Word ImpUseMap_36;
    MR_Word SectionImportUseMap_37;
    MR_Word ImportUseMap_38;
    MR_Word OrigIntTypeDefns_39;
    MR_Word IntTypeDefns_40;
    MR_Word IntInstDefns_41;
    MR_Word IntModeDefns_42;
    MR_Word IntTypeClasses_43;
    MR_Word IntInstances_44;
    MR_Word OrigIntForeignEnums_45;
    MR_Word OrigImpTypeDefns_46;
    MR_Word OrigImpForeignEnums_47;
    MR_Word IntTypeDefnMap_48;
    MR_Word IntInstDefnMap_49;
    MR_Word IntModeDefnMap_50;
    MR_Word OrigIntTypeDefnMap_51;
    MR_Word OrigIntForeignEnumMap_52;
    MR_Word OrigImpTypeDefnMap_53;
    MR_Word OrigImpForeignEnumMap_54;
    MR_Word TypeCtorCheckedMap_55;
    MR_Word Experiment1_56;
    MR_Word IntTypeRepnMap_57;
    MR_Word OrigParseTreeInt3_59;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word STATE_VARIABLE_Specs_75_75;
    MR_Word STATE_VARIABLE_Specs_76_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word STATE_VARIABLE_Specs_79_79;
    MR_Word _ImpInclMap_29;
    MR_Word _IntUseMap_33;
    MR_Word _Specs_60;

    Var_65 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]));
    Var_66 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]));
    Var_67 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0));
    Var_68 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0));
    Var_69 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0));
    Var_70 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0));
    Var_71 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0));
    Var_72 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]));
    Var_73 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0));
    parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_27_p_0(RawItemBlocks_14, (MR_Word) ((MR_Unsigned) 0U), &IntIncls_15, (MR_Word) ((MR_Unsigned) 0U), &IntImportAvails0_16, Var_65, &OrigIntTypeDefnsCord_17, Var_66, &IntTypeDefnsCord_18, Var_67, &IntInstDefnsCord_19, Var_68, &IntModeDefnsCord_20, Var_69, &IntTypeClassesCord_21, Var_70, &IntInstancesCord_22, Var_71, &OrigIntForeignEnumsCord_23, Var_72, &OrigImpTypeDefnsCord_24, Var_73, &OrigImpForeignEnumsCord_25, (MR_Integer) 0, &NeedImports_26, STATE_VARIABLE_Specs_0_61, &STATE_VARIABLE_Specs_75_75);
    parse_tree__item_util__classify_include_modules_7_p_0(IntIncls_15, (MR_Word) ((MR_Unsigned) 0U), &IntInclMap_28, &_ImpInclMap_29, &InclMap_30, STATE_VARIABLE_Specs_75_75, &STATE_VARIABLE_Specs_76_76);
    switch (NeedImports_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        IntImportAvails_31 = IntImportAvails0_16;
        break;
      case (MR_Integer) 0:
        IntImportAvails_31 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
    Var_77 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]));
    Var_78 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]));
    parse_tree__item_util__accumulate_imports_uses_maps_5_p_0(IntImportAvails_31, Var_77, &IntImportMap_32, Var_78, &_IntUseMap_33);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), &IntUseMap_34);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), &ImpImportMap_35);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), &ImpUseMap_36);
    parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0(ModuleName_12, IntImportMap_32, IntUseMap_34, ImpImportMap_35, ImpUseMap_36, &SectionImportUseMap_37, STATE_VARIABLE_Specs_76_76, &STATE_VARIABLE_Specs_79_79);
    parse_tree__item_util__import_and_or_use_map_section_to_maybe_implicit_2_p_0(SectionImportUseMap_37, &ImportUseMap_38);
    OrigIntTypeDefns_39 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), OrigIntTypeDefnsCord_17);
    IntTypeDefns_40 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), IntTypeDefnsCord_18);
    IntInstDefns_41 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), IntInstDefnsCord_19);
    IntModeDefns_42 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), IntModeDefnsCord_20);
    IntTypeClasses_43 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClassesCord_21);
    IntInstances_44 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstancesCord_22);
    OrigIntForeignEnums_45 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), OrigIntForeignEnumsCord_23);
    OrigImpTypeDefns_46 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), OrigImpTypeDefnsCord_24);
    OrigImpForeignEnums_47 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), OrigImpForeignEnumsCord_25);
    IntTypeDefnMap_48 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(IntTypeDefns_40);
    IntInstDefnMap_49 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns_41);
    IntModeDefnMap_50 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns_42);
    OrigIntTypeDefnMap_51 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(OrigIntTypeDefns_39);
    OrigIntForeignEnumMap_52 = parse_tree__convert_parse_tree__type_ctor_foreign_enum_items_to_map_1_f_0(OrigIntForeignEnums_45);
    OrigImpTypeDefnMap_53 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(OrigImpTypeDefns_46);
    OrigImpForeignEnumMap_54 = parse_tree__convert_parse_tree__type_ctor_foreign_enum_items_to_map_1_f_0(OrigImpForeignEnums_47);
    parse_tree__check_parse_tree_type_defns__create_type_ctor_checked_map_9_p_0((MR_Integer) 0, ModuleName_12, OrigIntTypeDefnMap_51, OrigImpTypeDefnMap_53, OrigIntForeignEnumMap_52, OrigImpForeignEnumMap_54, &TypeCtorCheckedMap_55, STATE_VARIABLE_Specs_79_79, STATE_VARIABLE_Specs_62);
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 700, &Experiment1_56);
    switch (Experiment1_56) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0), &IntTypeRepnMap_57);
        break;
      case (MR_Integer) 1:
        {
          MR_Word IntTypeRepnInfos_58;

          parse_tree__decide_type_repn__decide_repns_for_simple_types_for_int3_3_p_0(ModuleName_12, TypeCtorCheckedMap_55, &IntTypeRepnInfos_58);
          IntTypeRepnMap_57 = parse_tree__convert_parse_tree__type_ctor_repn_items_to_map_1_f_0(IntTypeRepnInfos_58);
        }
        break;
    }
    {
      OrigParseTreeInt3_59 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OrigParseTreeInt3_59, 0) = ((MR_Box) (ModuleName_12));
      MR_hl_field(MR_mktag(0), OrigParseTreeInt3_59, 1) = ((MR_Box) (ModuleNameContext_13));
      MR_hl_field(MR_mktag(0), OrigParseTreeInt3_59, 2) = ((MR_Box) (IntInclMap_28));
      MR_hl_field(MR_mktag(0), OrigParseTreeInt3_59, 3) = ((MR_Box) (InclMap_30));
      MR_hl_field(MR_mktag(0), OrigParseTreeInt3_59, 4) = ((MR_Box) (IntImportMap_32));
      MR_hl_field(MR_mktag(0), OrigParseTreeInt3_59, 5) = ((MR_Box) (ImportUseMap_38));
      MR_hl_field(MR_mktag(0), OrigParseTreeInt3_59, 6) = ((MR_Box) (IntTypeDefnMap_48));
      MR_hl_field(MR_mktag(0), OrigParseTreeInt3_59, 7) = ((MR_Box) (IntInstDefnMap_49));
      MR_hl_field(MR_mktag(0), OrigParseTreeInt3_59, 8) = ((MR_Box) (IntModeDefnMap_50));
      MR_hl_field(MR_mktag(0), OrigParseTreeInt3_59, 9) = ((MR_Box) (IntTypeClasses_43));
      MR_hl_field(MR_mktag(0), OrigParseTreeInt3_59, 10) = ((MR_Box) (IntInstances_44));
      MR_hl_field(MR_mktag(0), OrigParseTreeInt3_59, 11) = ((MR_Box) (IntTypeRepnMap_57));
    }
    parse_tree__module_qual__module_qualify_parse_tree_int3_5_p_0(Globals_7, OrigParseTreeInt3_59, ParseTreeInt3_9, (MR_Word) ((MR_Unsigned) 0U), &_Specs_60);
    *ParseTreeInt_10 = parse_tree__convert_parse_tree__convert_parse_tree_int3_to_int_1_f_0(*ParseTreeInt3_9);
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_27_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__comp_unit_interface__avail_is_import_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_27_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntIncls_0_2,
  MR_Word * STATE_VARIABLE_IntIncls_3,
  MR_Word STATE_VARIABLE_IntImportAvails_0_4,
  MR_Word * STATE_VARIABLE_IntImportAvails_5,
  MR_Word STATE_VARIABLE_OrigIntTypeDefns_0_6,
  MR_Word * STATE_VARIABLE_OrigIntTypeDefns_7,
  MR_Word STATE_VARIABLE_IntTypeDefns_0_8,
  MR_Word * STATE_VARIABLE_IntTypeDefns_9,
  MR_Word STATE_VARIABLE_IntInstDefns_0_10,
  MR_Word * STATE_VARIABLE_IntInstDefns_11,
  MR_Word STATE_VARIABLE_IntModeDefns_0_12,
  MR_Word * STATE_VARIABLE_IntModeDefns_13,
  MR_Word STATE_VARIABLE_IntTypeClasses_0_14,
  MR_Word * STATE_VARIABLE_IntTypeClasses_15,
  MR_Word STATE_VARIABLE_IntInstances_0_16,
  MR_Word * STATE_VARIABLE_IntInstances_17,
  MR_Word STATE_VARIABLE_OrigIntForeignEnums_0_18,
  MR_Word * STATE_VARIABLE_OrigIntForeignEnums_19,
  MR_Word STATE_VARIABLE_OrigImpTypeDefns_0_20,
  MR_Word * STATE_VARIABLE_OrigImpTypeDefns_21,
  MR_Word STATE_VARIABLE_OrigImpForeignEnums_0_22,
  MR_Word * STATE_VARIABLE_OrigImpForeignEnums_23,
  MR_Word STATE_VARIABLE_NeedImports_0_24,
  MR_Word * STATE_VARIABLE_NeedImports_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
      *STATE_VARIABLE_NeedImports_25 = STATE_VARIABLE_NeedImports_0_24;
      *STATE_VARIABLE_OrigImpForeignEnums_23 = STATE_VARIABLE_OrigImpForeignEnums_0_22;
      *STATE_VARIABLE_OrigImpTypeDefns_21 = STATE_VARIABLE_OrigImpTypeDefns_0_20;
      *STATE_VARIABLE_OrigIntForeignEnums_19 = STATE_VARIABLE_OrigIntForeignEnums_0_18;
      *STATE_VARIABLE_IntInstances_17 = STATE_VARIABLE_IntInstances_0_16;
      *STATE_VARIABLE_IntTypeClasses_15 = STATE_VARIABLE_IntTypeClasses_0_14;
      *STATE_VARIABLE_IntModeDefns_13 = STATE_VARIABLE_IntModeDefns_0_12;
      *STATE_VARIABLE_IntInstDefns_11 = STATE_VARIABLE_IntInstDefns_0_10;
      *STATE_VARIABLE_IntTypeDefns_9 = STATE_VARIABLE_IntTypeDefns_0_8;
      *STATE_VARIABLE_OrigIntTypeDefns_7 = STATE_VARIABLE_OrigIntTypeDefns_0_6;
      *STATE_VARIABLE_IntImportAvails_5 = STATE_VARIABLE_IntImportAvails_0_4;
      *STATE_VARIABLE_IntIncls_3 = STATE_VARIABLE_IntIncls_0_2;
    }
    else
    {
      MR_Word RawItemBlock_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word RawItemBlocks_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Section_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_67, (MR_Integer) 1))));
      MR_Word Incls_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_67, (MR_Integer) 2))));
      MR_Word Avails_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_67, (MR_Integer) 3))));
      MR_Word Items_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_67, (MR_Integer) 5))));
      MR_Word STATE_VARIABLE_OrigImpTypeDefns_115_115;
      MR_Word STATE_VARIABLE_OrigImpForeignEnums_116_116;
      MR_Word STATE_VARIABLE_IntIncls_117_117;
      MR_Word STATE_VARIABLE_IntImportAvails_119_119;
      MR_Word STATE_VARIABLE_OrigIntTypeDefns_120_120;
      MR_Word STATE_VARIABLE_IntTypeDefns_121_121;
      MR_Word STATE_VARIABLE_IntInstDefns_122_122;
      MR_Word STATE_VARIABLE_IntModeDefns_123_123;
      MR_Word STATE_VARIABLE_IntTypeClasses_124_124;
      MR_Word STATE_VARIABLE_IntInstances_125_125;
      MR_Word STATE_VARIABLE_OrigIntForeignEnums_126_126;
      MR_Word STATE_VARIABLE_NeedImports_127_127;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_IntIncls_0_2;
      MR_Word next_value_of_STATE_VARIABLE_IntImportAvails_0_4;
      MR_Word next_value_of_STATE_VARIABLE_OrigIntTypeDefns_0_6;
      MR_Word next_value_of_STATE_VARIABLE_IntTypeDefns_0_8;
      MR_Word next_value_of_STATE_VARIABLE_IntInstDefns_0_10;
      MR_Word next_value_of_STATE_VARIABLE_IntModeDefns_0_12;
      MR_Word next_value_of_STATE_VARIABLE_IntTypeClasses_0_14;
      MR_Word next_value_of_STATE_VARIABLE_IntInstances_0_16;
      MR_Word next_value_of_STATE_VARIABLE_OrigIntForeignEnums_0_18;
      MR_Word next_value_of_STATE_VARIABLE_OrigImpTypeDefns_0_20;
      MR_Word next_value_of_STATE_VARIABLE_OrigImpForeignEnums_0_22;
      MR_Word next_value_of_STATE_VARIABLE_NeedImports_0_24;

      switch (Section_83) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            parse_tree__comp_unit_interface__get_short_interface_int3_from_items_imp_5_p_0(Items_87, STATE_VARIABLE_OrigImpTypeDefns_0_20, &STATE_VARIABLE_OrigImpTypeDefns_115_115, STATE_VARIABLE_OrigImpForeignEnums_0_22, &STATE_VARIABLE_OrigImpForeignEnums_116_116);
            STATE_VARIABLE_IntIncls_117_117 = STATE_VARIABLE_IntIncls_0_2;
            STATE_VARIABLE_IntImportAvails_119_119 = STATE_VARIABLE_IntImportAvails_0_4;
            STATE_VARIABLE_OrigIntTypeDefns_120_120 = STATE_VARIABLE_OrigIntTypeDefns_0_6;
            STATE_VARIABLE_IntTypeDefns_121_121 = STATE_VARIABLE_IntTypeDefns_0_8;
            STATE_VARIABLE_IntInstDefns_122_122 = STATE_VARIABLE_IntInstDefns_0_10;
            STATE_VARIABLE_IntModeDefns_123_123 = STATE_VARIABLE_IntModeDefns_0_12;
            STATE_VARIABLE_IntTypeClasses_124_124 = STATE_VARIABLE_IntTypeClasses_0_14;
            STATE_VARIABLE_IntInstances_125_125 = STATE_VARIABLE_IntInstances_0_16;
            STATE_VARIABLE_OrigIntForeignEnums_126_126 = STATE_VARIABLE_OrigIntForeignEnums_0_18;
            STATE_VARIABLE_NeedImports_127_127 = STATE_VARIABLE_NeedImports_0_24;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word ImportAvails_88;

            STATE_VARIABLE_IntIncls_117_117 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_IntIncls_0_2, Incls_84);
            mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), Avails_85, &ImportAvails_88);
            STATE_VARIABLE_IntImportAvails_119_119 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), STATE_VARIABLE_IntImportAvails_0_4, ImportAvails_88);
            parse_tree__comp_unit_interface__get_short_interface_int3_from_items_int_17_p_0(Items_87, STATE_VARIABLE_OrigIntTypeDefns_0_6, &STATE_VARIABLE_OrigIntTypeDefns_120_120, STATE_VARIABLE_IntTypeDefns_0_8, &STATE_VARIABLE_IntTypeDefns_121_121, STATE_VARIABLE_IntInstDefns_0_10, &STATE_VARIABLE_IntInstDefns_122_122, STATE_VARIABLE_IntModeDefns_0_12, &STATE_VARIABLE_IntModeDefns_123_123, STATE_VARIABLE_IntTypeClasses_0_14, &STATE_VARIABLE_IntTypeClasses_124_124, STATE_VARIABLE_IntInstances_0_16, &STATE_VARIABLE_IntInstances_125_125, STATE_VARIABLE_OrigIntForeignEnums_0_18, &STATE_VARIABLE_OrigIntForeignEnums_126_126, STATE_VARIABLE_NeedImports_0_24, &STATE_VARIABLE_NeedImports_127_127);
            STATE_VARIABLE_OrigImpTypeDefns_115_115 = STATE_VARIABLE_OrigImpTypeDefns_0_20;
            STATE_VARIABLE_OrigImpForeignEnums_116_116 = STATE_VARIABLE_OrigImpForeignEnums_0_22;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = RawItemBlocks_68;
      next_value_of_STATE_VARIABLE_IntIncls_0_2 = STATE_VARIABLE_IntIncls_117_117;
      next_value_of_STATE_VARIABLE_IntImportAvails_0_4 = STATE_VARIABLE_IntImportAvails_119_119;
      next_value_of_STATE_VARIABLE_OrigIntTypeDefns_0_6 = STATE_VARIABLE_OrigIntTypeDefns_120_120;
      next_value_of_STATE_VARIABLE_IntTypeDefns_0_8 = STATE_VARIABLE_IntTypeDefns_121_121;
      next_value_of_STATE_VARIABLE_IntInstDefns_0_10 = STATE_VARIABLE_IntInstDefns_122_122;
      next_value_of_STATE_VARIABLE_IntModeDefns_0_12 = STATE_VARIABLE_IntModeDefns_123_123;
      next_value_of_STATE_VARIABLE_IntTypeClasses_0_14 = STATE_VARIABLE_IntTypeClasses_124_124;
      next_value_of_STATE_VARIABLE_IntInstances_0_16 = STATE_VARIABLE_IntInstances_125_125;
      next_value_of_STATE_VARIABLE_OrigIntForeignEnums_0_18 = STATE_VARIABLE_OrigIntForeignEnums_126_126;
      next_value_of_STATE_VARIABLE_OrigImpTypeDefns_0_20 = STATE_VARIABLE_OrigImpTypeDefns_115_115;
      next_value_of_STATE_VARIABLE_OrigImpForeignEnums_0_22 = STATE_VARIABLE_OrigImpForeignEnums_116_116;
      next_value_of_STATE_VARIABLE_NeedImports_0_24 = STATE_VARIABLE_NeedImports_127_127;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_IntIncls_0_2 = next_value_of_STATE_VARIABLE_IntIncls_0_2;
      STATE_VARIABLE_IntImportAvails_0_4 = next_value_of_STATE_VARIABLE_IntImportAvails_0_4;
      STATE_VARIABLE_OrigIntTypeDefns_0_6 = next_value_of_STATE_VARIABLE_OrigIntTypeDefns_0_6;
      STATE_VARIABLE_IntTypeDefns_0_8 = next_value_of_STATE_VARIABLE_IntTypeDefns_0_8;
      STATE_VARIABLE_IntInstDefns_0_10 = next_value_of_STATE_VARIABLE_IntInstDefns_0_10;
      STATE_VARIABLE_IntModeDefns_0_12 = next_value_of_STATE_VARIABLE_IntModeDefns_0_12;
      STATE_VARIABLE_IntTypeClasses_0_14 = next_value_of_STATE_VARIABLE_IntTypeClasses_0_14;
      STATE_VARIABLE_IntInstances_0_16 = next_value_of_STATE_VARIABLE_IntInstances_0_16;
      STATE_VARIABLE_OrigIntForeignEnums_0_18 = next_value_of_STATE_VARIABLE_OrigIntForeignEnums_0_18;
      STATE_VARIABLE_OrigImpTypeDefns_0_20 = next_value_of_STATE_VARIABLE_OrigImpTypeDefns_0_20;
      STATE_VARIABLE_OrigImpForeignEnums_0_22 = next_value_of_STATE_VARIABLE_OrigImpForeignEnums_0_22;
      STATE_VARIABLE_NeedImports_0_24 = next_value_of_STATE_VARIABLE_NeedImports_0_24;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_from_items_imp_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImpTypeDefns_0_2,
  MR_Word * STATE_VARIABLE_ImpTypeDefns_3,
  MR_Word STATE_VARIABLE_ImpForeignEnums_0_4,
  MR_Word * STATE_VARIABLE_ImpForeignEnums_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ImpForeignEnums_5 = STATE_VARIABLE_ImpForeignEnums_0_4;
      *STATE_VARIABLE_ImpTypeDefns_3 = STATE_VARIABLE_ImpTypeDefns_0_2;
    }
    else
    {
      MR_Word Item_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ImpForeignEnums_38_38;
      MR_Word STATE_VARIABLE_ImpTypeDefns_39_39;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImpTypeDefns_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ImpForeignEnums_0_4;

      switch (MR_tag((MR_Word) Item_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_ImpTypeDefns_39_39 = STATE_VARIABLE_ImpTypeDefns_0_2;
            STATE_VARIABLE_ImpForeignEnums_38_38 = STATE_VARIABLE_ImpForeignEnums_0_4;
          }
          break;
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_ImpTypeDefns_39_39 = STATE_VARIABLE_ImpTypeDefns_0_2;
            STATE_VARIABLE_ImpForeignEnums_38_38 = STATE_VARIABLE_ImpForeignEnums_0_4;
          }
          break;
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_ImpTypeDefns_39_39 = STATE_VARIABLE_ImpTypeDefns_0_2;
            STATE_VARIABLE_ImpForeignEnums_38_38 = STATE_VARIABLE_ImpForeignEnums_0_4;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_ImpTypeDefns_39_39 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ImpForeignEnums_38_38 = STATE_VARIABLE_ImpForeignEnums_0_4;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_ImpTypeDefns_39_39 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ImpForeignEnums_38_38 = STATE_VARIABLE_ImpForeignEnums_0_4;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ItemForeignEnumInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 1))));

                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ((MR_Box) (ItemForeignEnumInfo_17)), STATE_VARIABLE_ImpForeignEnums_0_4, &STATE_VARIABLE_ImpForeignEnums_38_38);
                STATE_VARIABLE_ImpTypeDefns_39_39 = STATE_VARIABLE_ImpTypeDefns_0_2;
              }
              break;
            case (MR_Integer) 3:
              {
                STATE_VARIABLE_ImpTypeDefns_39_39 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ImpForeignEnums_38_38 = STATE_VARIABLE_ImpForeignEnums_0_4;
              }
              break;
            case (MR_Integer) 4:
              {
                STATE_VARIABLE_ImpTypeDefns_39_39 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ImpForeignEnums_38_38 = STATE_VARIABLE_ImpForeignEnums_0_4;
              }
              break;
            case (MR_Integer) 5:
              {
                STATE_VARIABLE_ImpTypeDefns_39_39 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ImpForeignEnums_38_38 = STATE_VARIABLE_ImpForeignEnums_0_4;
              }
              break;
            case (MR_Integer) 6:
              {
                STATE_VARIABLE_ImpTypeDefns_39_39 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ImpForeignEnums_38_38 = STATE_VARIABLE_ImpForeignEnums_0_4;
              }
              break;
            case (MR_Integer) 7:
              {
                STATE_VARIABLE_ImpTypeDefns_39_39 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ImpForeignEnums_38_38 = STATE_VARIABLE_ImpForeignEnums_0_4;
              }
              break;
            case (MR_Integer) 8:
              {
                STATE_VARIABLE_ImpTypeDefns_39_39 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ImpForeignEnums_38_38 = STATE_VARIABLE_ImpForeignEnums_0_4;
              }
              break;
            case (MR_Integer) 9:
              {
                STATE_VARIABLE_ImpTypeDefns_39_39 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ImpForeignEnums_38_38 = STATE_VARIABLE_ImpForeignEnums_0_4;
              }
              break;
            case (MR_Integer) 10:
              {
                STATE_VARIABLE_ImpTypeDefns_39_39 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ImpForeignEnums_38_38 = STATE_VARIABLE_ImpForeignEnums_0_4;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemTypeDefnInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 1))));

                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), ((MR_Box) (ItemTypeDefnInfo_16)), STATE_VARIABLE_ImpTypeDefns_0_2, &STATE_VARIABLE_ImpTypeDefns_39_39);
                STATE_VARIABLE_ImpForeignEnums_38_38 = STATE_VARIABLE_ImpForeignEnums_0_4;
              }
              break;
            case (MR_Integer) 12:
              {
                STATE_VARIABLE_ImpTypeDefns_39_39 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ImpForeignEnums_38_38 = STATE_VARIABLE_ImpForeignEnums_0_4;
              }
              break;
            case (MR_Integer) 13:
              {
                STATE_VARIABLE_ImpTypeDefns_39_39 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ImpForeignEnums_38_38 = STATE_VARIABLE_ImpForeignEnums_0_4;
              }
              break;
            case (MR_Integer) 14:
              {
                STATE_VARIABLE_ImpTypeDefns_39_39 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ImpForeignEnums_38_38 = STATE_VARIABLE_ImpForeignEnums_0_4;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_13;
      next_value_of_STATE_VARIABLE_ImpTypeDefns_0_2 = STATE_VARIABLE_ImpTypeDefns_39_39;
      next_value_of_STATE_VARIABLE_ImpForeignEnums_0_4 = STATE_VARIABLE_ImpForeignEnums_38_38;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ImpTypeDefns_0_2 = next_value_of_STATE_VARIABLE_ImpTypeDefns_0_2;
      STATE_VARIABLE_ImpForeignEnums_0_4 = next_value_of_STATE_VARIABLE_ImpForeignEnums_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_from_items_int_17_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_OrigIntTypeDefns_0_2,
  MR_Word * STATE_VARIABLE_OrigIntTypeDefns_3,
  MR_Word STATE_VARIABLE_IntTypeDefns_0_4,
  MR_Word * STATE_VARIABLE_IntTypeDefns_5,
  MR_Word STATE_VARIABLE_IntInstDefns_0_6,
  MR_Word * STATE_VARIABLE_IntInstDefns_7,
  MR_Word STATE_VARIABLE_IntModeDefns_0_8,
  MR_Word * STATE_VARIABLE_IntModeDefns_9,
  MR_Word STATE_VARIABLE_IntTypeClasses_0_10,
  MR_Word * STATE_VARIABLE_IntTypeClasses_11,
  MR_Word STATE_VARIABLE_IntInstances_0_12,
  MR_Word * STATE_VARIABLE_IntInstances_13,
  MR_Word STATE_VARIABLE_OrigIntForeignEnums_0_14,
  MR_Word * STATE_VARIABLE_OrigIntForeignEnums_15,
  MR_Word STATE_VARIABLE_NeedImports_0_16,
  MR_Word * STATE_VARIABLE_NeedImports_17)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_NeedImports_17 = STATE_VARIABLE_NeedImports_0_16;
      *STATE_VARIABLE_OrigIntForeignEnums_15 = STATE_VARIABLE_OrigIntForeignEnums_0_14;
      *STATE_VARIABLE_IntInstances_13 = STATE_VARIABLE_IntInstances_0_12;
      *STATE_VARIABLE_IntTypeClasses_11 = STATE_VARIABLE_IntTypeClasses_0_10;
      *STATE_VARIABLE_IntModeDefns_9 = STATE_VARIABLE_IntModeDefns_0_8;
      *STATE_VARIABLE_IntInstDefns_7 = STATE_VARIABLE_IntInstDefns_0_6;
      *STATE_VARIABLE_IntTypeDefns_5 = STATE_VARIABLE_IntTypeDefns_0_4;
      *STATE_VARIABLE_OrigIntTypeDefns_3 = STATE_VARIABLE_OrigIntTypeDefns_0_2;
    }
    else
    {
      MR_Word Item_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_OrigIntForeignEnums_99_99;
      MR_Word STATE_VARIABLE_IntInstances_101_101;
      MR_Word STATE_VARIABLE_NeedImports_102_102;
      MR_Word STATE_VARIABLE_IntTypeClasses_106_106;
      MR_Word STATE_VARIABLE_IntModeDefns_108_108;
      MR_Word STATE_VARIABLE_IntInstDefns_110_110;
      MR_Word STATE_VARIABLE_OrigIntTypeDefns_111_111;
      MR_Word STATE_VARIABLE_IntTypeDefns_112_112;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_OrigIntTypeDefns_0_2;
      MR_Word next_value_of_STATE_VARIABLE_IntTypeDefns_0_4;
      MR_Word next_value_of_STATE_VARIABLE_IntInstDefns_0_6;
      MR_Word next_value_of_STATE_VARIABLE_IntModeDefns_0_8;
      MR_Word next_value_of_STATE_VARIABLE_IntTypeClasses_0_10;
      MR_Word next_value_of_STATE_VARIABLE_IntInstances_0_12;
      MR_Word next_value_of_STATE_VARIABLE_OrigIntForeignEnums_0_14;
      MR_Word next_value_of_STATE_VARIABLE_NeedImports_0_16;

      switch (MR_tag((MR_Word) Item_42)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_OrigIntTypeDefns_111_111 = STATE_VARIABLE_OrigIntTypeDefns_0_2;
            STATE_VARIABLE_IntTypeDefns_112_112 = STATE_VARIABLE_IntTypeDefns_0_4;
            STATE_VARIABLE_IntInstDefns_110_110 = STATE_VARIABLE_IntInstDefns_0_6;
            STATE_VARIABLE_IntModeDefns_108_108 = STATE_VARIABLE_IntModeDefns_0_8;
            STATE_VARIABLE_IntTypeClasses_106_106 = STATE_VARIABLE_IntTypeClasses_0_10;
            STATE_VARIABLE_IntInstances_101_101 = STATE_VARIABLE_IntInstances_0_12;
            STATE_VARIABLE_OrigIntForeignEnums_99_99 = STATE_VARIABLE_OrigIntForeignEnums_0_14;
            STATE_VARIABLE_NeedImports_102_102 = STATE_VARIABLE_NeedImports_0_16;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemInstInfo_54 = (MR_Word) (MR_body((MR_Word) (Item_42), (MR_Integer) 1));
            MR_Word AbstractItemInstInfo_55;
            MR_Word Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstInfo_54, (MR_Integer) 0))));
            MR_Word Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstInfo_54, (MR_Integer) 1))));
            MR_Word Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstInfo_54, (MR_Integer) 2))));
            MR_Word Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstInfo_54, (MR_Integer) 4))));
            MR_Word Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstInfo_54, (MR_Integer) 5))));
            MR_Integer Var_127 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemInstInfo_54, (MR_Integer) 6))));

            {
              AbstractItemInstInfo_55 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), AbstractItemInstInfo_55, 0) = ((MR_Box) (Var_121));
              MR_hl_field(MR_mktag(0), AbstractItemInstInfo_55, 1) = ((MR_Box) (Var_122));
              MR_hl_field(MR_mktag(0), AbstractItemInstInfo_55, 2) = ((MR_Box) (Var_123));
              MR_hl_field(MR_mktag(0), AbstractItemInstInfo_55, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), AbstractItemInstInfo_55, 4) = ((MR_Box) (Var_125));
              MR_hl_field(MR_mktag(0), AbstractItemInstInfo_55, 5) = ((MR_Box) (Var_126));
              MR_hl_field(MR_mktag(0), AbstractItemInstInfo_55, 6) = ((MR_Box) (Var_127));
            }
            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), ((MR_Box) (AbstractItemInstInfo_55)), STATE_VARIABLE_IntInstDefns_0_6, &STATE_VARIABLE_IntInstDefns_110_110);
            STATE_VARIABLE_OrigIntTypeDefns_111_111 = STATE_VARIABLE_OrigIntTypeDefns_0_2;
            STATE_VARIABLE_IntTypeDefns_112_112 = STATE_VARIABLE_IntTypeDefns_0_4;
            STATE_VARIABLE_IntModeDefns_108_108 = STATE_VARIABLE_IntModeDefns_0_8;
            STATE_VARIABLE_IntTypeClasses_106_106 = STATE_VARIABLE_IntTypeClasses_0_10;
            STATE_VARIABLE_IntInstances_101_101 = STATE_VARIABLE_IntInstances_0_12;
            STATE_VARIABLE_OrigIntForeignEnums_99_99 = STATE_VARIABLE_OrigIntForeignEnums_0_14;
            STATE_VARIABLE_NeedImports_102_102 = STATE_VARIABLE_NeedImports_0_16;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemModeInfo_56 = (MR_Word) (MR_body((MR_Word) (Item_42), (MR_Integer) 2));
            MR_Word AbstractItemModeInfo_57;
            MR_Word Var_128 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeInfo_56, (MR_Integer) 0))));
            MR_Word Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeInfo_56, (MR_Integer) 1))));
            MR_Word Var_131 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeInfo_56, (MR_Integer) 3))));
            MR_Word Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeInfo_56, (MR_Integer) 4))));
            MR_Integer Var_133 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemModeInfo_56, (MR_Integer) 5))));

            {
              AbstractItemModeInfo_57 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), AbstractItemModeInfo_57, 0) = ((MR_Box) (Var_128));
              MR_hl_field(MR_mktag(0), AbstractItemModeInfo_57, 1) = ((MR_Box) (Var_129));
              MR_hl_field(MR_mktag(0), AbstractItemModeInfo_57, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), AbstractItemModeInfo_57, 3) = ((MR_Box) (Var_131));
              MR_hl_field(MR_mktag(0), AbstractItemModeInfo_57, 4) = ((MR_Box) (Var_132));
              MR_hl_field(MR_mktag(0), AbstractItemModeInfo_57, 5) = ((MR_Box) (Var_133));
            }
            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), ((MR_Box) (AbstractItemModeInfo_57)), STATE_VARIABLE_IntModeDefns_0_8, &STATE_VARIABLE_IntModeDefns_108_108);
            STATE_VARIABLE_OrigIntTypeDefns_111_111 = STATE_VARIABLE_OrigIntTypeDefns_0_2;
            STATE_VARIABLE_IntTypeDefns_112_112 = STATE_VARIABLE_IntTypeDefns_0_4;
            STATE_VARIABLE_IntInstDefns_110_110 = STATE_VARIABLE_IntInstDefns_0_6;
            STATE_VARIABLE_IntTypeClasses_106_106 = STATE_VARIABLE_IntTypeClasses_0_10;
            STATE_VARIABLE_IntInstances_101_101 = STATE_VARIABLE_IntInstances_0_12;
            STATE_VARIABLE_OrigIntForeignEnums_99_99 = STATE_VARIABLE_OrigIntForeignEnums_0_14;
            STATE_VARIABLE_NeedImports_102_102 = STATE_VARIABLE_NeedImports_0_16;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_42, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_OrigIntTypeDefns_111_111 = STATE_VARIABLE_OrigIntTypeDefns_0_2;
                STATE_VARIABLE_IntTypeDefns_112_112 = STATE_VARIABLE_IntTypeDefns_0_4;
                STATE_VARIABLE_IntInstDefns_110_110 = STATE_VARIABLE_IntInstDefns_0_6;
                STATE_VARIABLE_IntModeDefns_108_108 = STATE_VARIABLE_IntModeDefns_0_8;
                STATE_VARIABLE_IntTypeClasses_106_106 = STATE_VARIABLE_IntTypeClasses_0_10;
                STATE_VARIABLE_IntInstances_101_101 = STATE_VARIABLE_IntInstances_0_12;
                STATE_VARIABLE_OrigIntForeignEnums_99_99 = STATE_VARIABLE_OrigIntForeignEnums_0_14;
                STATE_VARIABLE_NeedImports_102_102 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_OrigIntTypeDefns_111_111 = STATE_VARIABLE_OrigIntTypeDefns_0_2;
                STATE_VARIABLE_IntTypeDefns_112_112 = STATE_VARIABLE_IntTypeDefns_0_4;
                STATE_VARIABLE_IntInstDefns_110_110 = STATE_VARIABLE_IntInstDefns_0_6;
                STATE_VARIABLE_IntModeDefns_108_108 = STATE_VARIABLE_IntModeDefns_0_8;
                STATE_VARIABLE_IntTypeClasses_106_106 = STATE_VARIABLE_IntTypeClasses_0_10;
                STATE_VARIABLE_IntInstances_101_101 = STATE_VARIABLE_IntInstances_0_12;
                STATE_VARIABLE_OrigIntForeignEnums_99_99 = STATE_VARIABLE_OrigIntForeignEnums_0_14;
                STATE_VARIABLE_NeedImports_102_102 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ItemForeignEnumInfo_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_42, (MR_Integer) 1))));

                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ((MR_Box) (ItemForeignEnumInfo_70)), STATE_VARIABLE_OrigIntForeignEnums_0_14, &STATE_VARIABLE_OrigIntForeignEnums_99_99);
                STATE_VARIABLE_OrigIntTypeDefns_111_111 = STATE_VARIABLE_OrigIntTypeDefns_0_2;
                STATE_VARIABLE_IntTypeDefns_112_112 = STATE_VARIABLE_IntTypeDefns_0_4;
                STATE_VARIABLE_IntInstDefns_110_110 = STATE_VARIABLE_IntInstDefns_0_6;
                STATE_VARIABLE_IntModeDefns_108_108 = STATE_VARIABLE_IntModeDefns_0_8;
                STATE_VARIABLE_IntTypeClasses_106_106 = STATE_VARIABLE_IntTypeClasses_0_10;
                STATE_VARIABLE_IntInstances_101_101 = STATE_VARIABLE_IntInstances_0_12;
                STATE_VARIABLE_NeedImports_102_102 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
            case (MR_Integer) 3:
              {
                STATE_VARIABLE_OrigIntTypeDefns_111_111 = STATE_VARIABLE_OrigIntTypeDefns_0_2;
                STATE_VARIABLE_IntTypeDefns_112_112 = STATE_VARIABLE_IntTypeDefns_0_4;
                STATE_VARIABLE_IntInstDefns_110_110 = STATE_VARIABLE_IntInstDefns_0_6;
                STATE_VARIABLE_IntModeDefns_108_108 = STATE_VARIABLE_IntModeDefns_0_8;
                STATE_VARIABLE_IntTypeClasses_106_106 = STATE_VARIABLE_IntTypeClasses_0_10;
                STATE_VARIABLE_IntInstances_101_101 = STATE_VARIABLE_IntInstances_0_12;
                STATE_VARIABLE_OrigIntForeignEnums_99_99 = STATE_VARIABLE_OrigIntForeignEnums_0_14;
                STATE_VARIABLE_NeedImports_102_102 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
            case (MR_Integer) 4:
              {
                STATE_VARIABLE_OrigIntTypeDefns_111_111 = STATE_VARIABLE_OrigIntTypeDefns_0_2;
                STATE_VARIABLE_IntTypeDefns_112_112 = STATE_VARIABLE_IntTypeDefns_0_4;
                STATE_VARIABLE_IntInstDefns_110_110 = STATE_VARIABLE_IntInstDefns_0_6;
                STATE_VARIABLE_IntModeDefns_108_108 = STATE_VARIABLE_IntModeDefns_0_8;
                STATE_VARIABLE_IntTypeClasses_106_106 = STATE_VARIABLE_IntTypeClasses_0_10;
                STATE_VARIABLE_IntInstances_101_101 = STATE_VARIABLE_IntInstances_0_12;
                STATE_VARIABLE_OrigIntForeignEnums_99_99 = STATE_VARIABLE_OrigIntForeignEnums_0_14;
                STATE_VARIABLE_NeedImports_102_102 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemTypeClassInfo_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_42, (MR_Integer) 1))));
                MR_Word ClassName_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_58, (MR_Integer) 0))));
                MR_Word ParamsTVars_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_58, (MR_Integer) 1))));
                MR_Word TVarSet_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_58, (MR_Integer) 5))));
                MR_Word Context_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_58, (MR_Integer) 6))));
                MR_Integer SeqNum_66 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_58, (MR_Integer) 7))));
                MR_Word AbstractItemTypeClassInfo_67;

                {
                  AbstractItemTypeClassInfo_67 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_67, 0) = ((MR_Box) (ClassName_59));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_67, 1) = ((MR_Box) (ParamsTVars_60));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_67, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_67, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_67, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_67, 5) = ((MR_Box) (TVarSet_64));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_67, 6) = ((MR_Box) (Context_65));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_67, 7) = ((MR_Box) (SeqNum_66));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ((MR_Box) (AbstractItemTypeClassInfo_67)), STATE_VARIABLE_IntTypeClasses_0_10, &STATE_VARIABLE_IntTypeClasses_106_106);
                STATE_VARIABLE_OrigIntTypeDefns_111_111 = STATE_VARIABLE_OrigIntTypeDefns_0_2;
                STATE_VARIABLE_IntTypeDefns_112_112 = STATE_VARIABLE_IntTypeDefns_0_4;
                STATE_VARIABLE_IntInstDefns_110_110 = STATE_VARIABLE_IntInstDefns_0_6;
                STATE_VARIABLE_IntModeDefns_108_108 = STATE_VARIABLE_IntModeDefns_0_8;
                STATE_VARIABLE_IntInstances_101_101 = STATE_VARIABLE_IntInstances_0_12;
                STATE_VARIABLE_OrigIntForeignEnums_99_99 = STATE_VARIABLE_OrigIntForeignEnums_0_14;
                STATE_VARIABLE_NeedImports_102_102 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemInstanceInfo_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_42, (MR_Integer) 1))));
                MR_Word AbstractItemInstanceInfo_69;
                MR_Word Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_68, (MR_Integer) 0))));
                MR_Word Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_68, (MR_Integer) 1))));
                MR_Word Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_68, (MR_Integer) 2))));
                MR_Word Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_68, (MR_Integer) 3))));
                MR_Word Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_68, (MR_Integer) 5))));
                MR_Word Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_68, (MR_Integer) 6))));
                MR_Word Var_141 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_68, (MR_Integer) 7))));
                MR_Integer Var_142 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_68, (MR_Integer) 8))));

                {
                  AbstractItemInstanceInfo_69 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_69, 0) = ((MR_Box) (Var_134));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_69, 1) = ((MR_Box) (Var_135));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_69, 2) = ((MR_Box) (Var_136));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_69, 3) = ((MR_Box) (Var_137));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_69, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_69, 5) = ((MR_Box) (Var_139));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_69, 6) = ((MR_Box) (Var_140));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_69, 7) = ((MR_Box) (Var_141));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_69, 8) = ((MR_Box) (Var_142));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ((MR_Box) (AbstractItemInstanceInfo_69)), STATE_VARIABLE_IntInstances_0_12, &STATE_VARIABLE_IntInstances_101_101);
                STATE_VARIABLE_NeedImports_102_102 = (MR_Integer) 1;
                STATE_VARIABLE_OrigIntTypeDefns_111_111 = STATE_VARIABLE_OrigIntTypeDefns_0_2;
                STATE_VARIABLE_IntTypeDefns_112_112 = STATE_VARIABLE_IntTypeDefns_0_4;
                STATE_VARIABLE_IntInstDefns_110_110 = STATE_VARIABLE_IntInstDefns_0_6;
                STATE_VARIABLE_IntModeDefns_108_108 = STATE_VARIABLE_IntModeDefns_0_8;
                STATE_VARIABLE_IntTypeClasses_106_106 = STATE_VARIABLE_IntTypeClasses_0_10;
                STATE_VARIABLE_OrigIntForeignEnums_99_99 = STATE_VARIABLE_OrigIntForeignEnums_0_14;
              }
              break;
            case (MR_Integer) 7:
              {
                STATE_VARIABLE_OrigIntTypeDefns_111_111 = STATE_VARIABLE_OrigIntTypeDefns_0_2;
                STATE_VARIABLE_IntTypeDefns_112_112 = STATE_VARIABLE_IntTypeDefns_0_4;
                STATE_VARIABLE_IntInstDefns_110_110 = STATE_VARIABLE_IntInstDefns_0_6;
                STATE_VARIABLE_IntModeDefns_108_108 = STATE_VARIABLE_IntModeDefns_0_8;
                STATE_VARIABLE_IntTypeClasses_106_106 = STATE_VARIABLE_IntTypeClasses_0_10;
                STATE_VARIABLE_IntInstances_101_101 = STATE_VARIABLE_IntInstances_0_12;
                STATE_VARIABLE_OrigIntForeignEnums_99_99 = STATE_VARIABLE_OrigIntForeignEnums_0_14;
                STATE_VARIABLE_NeedImports_102_102 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
            case (MR_Integer) 8:
              {
                STATE_VARIABLE_OrigIntTypeDefns_111_111 = STATE_VARIABLE_OrigIntTypeDefns_0_2;
                STATE_VARIABLE_IntTypeDefns_112_112 = STATE_VARIABLE_IntTypeDefns_0_4;
                STATE_VARIABLE_IntInstDefns_110_110 = STATE_VARIABLE_IntInstDefns_0_6;
                STATE_VARIABLE_IntModeDefns_108_108 = STATE_VARIABLE_IntModeDefns_0_8;
                STATE_VARIABLE_IntTypeClasses_106_106 = STATE_VARIABLE_IntTypeClasses_0_10;
                STATE_VARIABLE_IntInstances_101_101 = STATE_VARIABLE_IntInstances_0_12;
                STATE_VARIABLE_OrigIntForeignEnums_99_99 = STATE_VARIABLE_OrigIntForeignEnums_0_14;
                STATE_VARIABLE_NeedImports_102_102 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
            case (MR_Integer) 9:
              {
                STATE_VARIABLE_OrigIntTypeDefns_111_111 = STATE_VARIABLE_OrigIntTypeDefns_0_2;
                STATE_VARIABLE_IntTypeDefns_112_112 = STATE_VARIABLE_IntTypeDefns_0_4;
                STATE_VARIABLE_IntInstDefns_110_110 = STATE_VARIABLE_IntInstDefns_0_6;
                STATE_VARIABLE_IntModeDefns_108_108 = STATE_VARIABLE_IntModeDefns_0_8;
                STATE_VARIABLE_IntTypeClasses_106_106 = STATE_VARIABLE_IntTypeClasses_0_10;
                STATE_VARIABLE_IntInstances_101_101 = STATE_VARIABLE_IntInstances_0_12;
                STATE_VARIABLE_OrigIntForeignEnums_99_99 = STATE_VARIABLE_OrigIntForeignEnums_0_14;
                STATE_VARIABLE_NeedImports_102_102 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
            case (MR_Integer) 10:
              {
                STATE_VARIABLE_OrigIntTypeDefns_111_111 = STATE_VARIABLE_OrigIntTypeDefns_0_2;
                STATE_VARIABLE_IntTypeDefns_112_112 = STATE_VARIABLE_IntTypeDefns_0_4;
                STATE_VARIABLE_IntInstDefns_110_110 = STATE_VARIABLE_IntInstDefns_0_6;
                STATE_VARIABLE_IntModeDefns_108_108 = STATE_VARIABLE_IntModeDefns_0_8;
                STATE_VARIABLE_IntTypeClasses_106_106 = STATE_VARIABLE_IntTypeClasses_0_10;
                STATE_VARIABLE_IntInstances_101_101 = STATE_VARIABLE_IntInstances_0_12;
                STATE_VARIABLE_OrigIntForeignEnums_99_99 = STATE_VARIABLE_OrigIntForeignEnums_0_14;
                STATE_VARIABLE_NeedImports_102_102 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemTypeDefnInfo_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_42, (MR_Integer) 1))));
                MR_Word AbstractOrForeignItemTypeDefnInfo_53;

                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), ((MR_Box) (ItemTypeDefnInfo_52)), STATE_VARIABLE_OrigIntTypeDefns_0_2, &STATE_VARIABLE_OrigIntTypeDefns_111_111);
                parse_tree__comp_unit_interface__make_type_defn_abstract_type_for_int3_2_p_0(ItemTypeDefnInfo_52, &AbstractOrForeignItemTypeDefnInfo_53);
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), ((MR_Box) (AbstractOrForeignItemTypeDefnInfo_53)), STATE_VARIABLE_IntTypeDefns_0_4, &STATE_VARIABLE_IntTypeDefns_112_112);
                STATE_VARIABLE_IntInstDefns_110_110 = STATE_VARIABLE_IntInstDefns_0_6;
                STATE_VARIABLE_IntModeDefns_108_108 = STATE_VARIABLE_IntModeDefns_0_8;
                STATE_VARIABLE_IntTypeClasses_106_106 = STATE_VARIABLE_IntTypeClasses_0_10;
                STATE_VARIABLE_IntInstances_101_101 = STATE_VARIABLE_IntInstances_0_12;
                STATE_VARIABLE_OrigIntForeignEnums_99_99 = STATE_VARIABLE_OrigIntForeignEnums_0_14;
                STATE_VARIABLE_NeedImports_102_102 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
            case (MR_Integer) 12:
              {
                STATE_VARIABLE_OrigIntTypeDefns_111_111 = STATE_VARIABLE_OrigIntTypeDefns_0_2;
                STATE_VARIABLE_IntTypeDefns_112_112 = STATE_VARIABLE_IntTypeDefns_0_4;
                STATE_VARIABLE_IntInstDefns_110_110 = STATE_VARIABLE_IntInstDefns_0_6;
                STATE_VARIABLE_IntModeDefns_108_108 = STATE_VARIABLE_IntModeDefns_0_8;
                STATE_VARIABLE_IntTypeClasses_106_106 = STATE_VARIABLE_IntTypeClasses_0_10;
                STATE_VARIABLE_IntInstances_101_101 = STATE_VARIABLE_IntInstances_0_12;
                STATE_VARIABLE_OrigIntForeignEnums_99_99 = STATE_VARIABLE_OrigIntForeignEnums_0_14;
                STATE_VARIABLE_NeedImports_102_102 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
            case (MR_Integer) 13:
              {
                STATE_VARIABLE_OrigIntTypeDefns_111_111 = STATE_VARIABLE_OrigIntTypeDefns_0_2;
                STATE_VARIABLE_IntTypeDefns_112_112 = STATE_VARIABLE_IntTypeDefns_0_4;
                STATE_VARIABLE_IntInstDefns_110_110 = STATE_VARIABLE_IntInstDefns_0_6;
                STATE_VARIABLE_IntModeDefns_108_108 = STATE_VARIABLE_IntModeDefns_0_8;
                STATE_VARIABLE_IntTypeClasses_106_106 = STATE_VARIABLE_IntTypeClasses_0_10;
                STATE_VARIABLE_IntInstances_101_101 = STATE_VARIABLE_IntInstances_0_12;
                STATE_VARIABLE_OrigIntForeignEnums_99_99 = STATE_VARIABLE_OrigIntForeignEnums_0_14;
                STATE_VARIABLE_NeedImports_102_102 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
            case (MR_Integer) 14:
              {
                STATE_VARIABLE_OrigIntTypeDefns_111_111 = STATE_VARIABLE_OrigIntTypeDefns_0_2;
                STATE_VARIABLE_IntTypeDefns_112_112 = STATE_VARIABLE_IntTypeDefns_0_4;
                STATE_VARIABLE_IntInstDefns_110_110 = STATE_VARIABLE_IntInstDefns_0_6;
                STATE_VARIABLE_IntModeDefns_108_108 = STATE_VARIABLE_IntModeDefns_0_8;
                STATE_VARIABLE_IntTypeClasses_106_106 = STATE_VARIABLE_IntTypeClasses_0_10;
                STATE_VARIABLE_IntInstances_101_101 = STATE_VARIABLE_IntInstances_0_12;
                STATE_VARIABLE_OrigIntForeignEnums_99_99 = STATE_VARIABLE_OrigIntForeignEnums_0_14;
                STATE_VARIABLE_NeedImports_102_102 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_43;
      next_value_of_STATE_VARIABLE_OrigIntTypeDefns_0_2 = STATE_VARIABLE_OrigIntTypeDefns_111_111;
      next_value_of_STATE_VARIABLE_IntTypeDefns_0_4 = STATE_VARIABLE_IntTypeDefns_112_112;
      next_value_of_STATE_VARIABLE_IntInstDefns_0_6 = STATE_VARIABLE_IntInstDefns_110_110;
      next_value_of_STATE_VARIABLE_IntModeDefns_0_8 = STATE_VARIABLE_IntModeDefns_108_108;
      next_value_of_STATE_VARIABLE_IntTypeClasses_0_10 = STATE_VARIABLE_IntTypeClasses_106_106;
      next_value_of_STATE_VARIABLE_IntInstances_0_12 = STATE_VARIABLE_IntInstances_101_101;
      next_value_of_STATE_VARIABLE_OrigIntForeignEnums_0_14 = STATE_VARIABLE_OrigIntForeignEnums_99_99;
      next_value_of_STATE_VARIABLE_NeedImports_0_16 = STATE_VARIABLE_NeedImports_102_102;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_OrigIntTypeDefns_0_2 = next_value_of_STATE_VARIABLE_OrigIntTypeDefns_0_2;
      STATE_VARIABLE_IntTypeDefns_0_4 = next_value_of_STATE_VARIABLE_IntTypeDefns_0_4;
      STATE_VARIABLE_IntInstDefns_0_6 = next_value_of_STATE_VARIABLE_IntInstDefns_0_6;
      STATE_VARIABLE_IntModeDefns_0_8 = next_value_of_STATE_VARIABLE_IntModeDefns_0_8;
      STATE_VARIABLE_IntTypeClasses_0_10 = next_value_of_STATE_VARIABLE_IntTypeClasses_0_10;
      STATE_VARIABLE_IntInstances_0_12 = next_value_of_STATE_VARIABLE_IntInstances_0_12;
      STATE_VARIABLE_OrigIntForeignEnums_0_14 = next_value_of_STATE_VARIABLE_OrigIntForeignEnums_0_14;
      STATE_VARIABLE_NeedImports_0_16 = next_value_of_STATE_VARIABLE_NeedImports_0_16;
      continue;
    }
    break;
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
    MR_Integer Var_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_3, (MR_Integer) 5))));

    switch (MR_tag((MR_Word) TypeDefn0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DetailsDu_6 = (MR_Word) ((MR_Word) (TypeDefn0_5));
          MR_Word DetailsAbstract_7;
          MR_Word Var_16;
          MR_Word Ctors_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_6, (MR_Integer) 0))));
          MR_Word MaybeCanonical_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_6, (MR_Integer) 1))));
          MR_Integer NumFunctors_54;
          MR_Word Var_24;
          MR_Word Var_25;
          MR_Word Var_27;
          MR_Word Var_28;
          MR_Integer Var_29;

          succeeded = parse_tree__prog_type__du_type_is_enum_2_p_0(DetailsDu_6, &NumFunctors_54);
          if (succeeded)
          {
            MR_Integer NumBits_55;

            parse_tree__prog_type__num_bits_needed_for_n_values_2_p_0(NumFunctors_54, &NumBits_55);
            {
              DetailsAbstract_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), DetailsAbstract_7, 0) = ((MR_Box) (NumBits_55));
            }
          }
          else
          {
            succeeded = parse_tree__prog_type__du_type_is_notag_2_p_0(Ctors_51, MaybeCanonical_52);
            if (succeeded)
              DetailsAbstract_7 = (MR_Word) ((MR_Unsigned) 8U);
            else
            {
              succeeded = parse_tree__prog_type__du_type_is_dummy_1_p_0(DetailsDu_6);
              if (succeeded)
                DetailsAbstract_7 = (MR_Word) ((MR_Unsigned) 4U);
              else
                DetailsAbstract_7 = (MR_Word) ((MR_Unsigned) 0U);
            }
          }
          {
            Var_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_16, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_16, 1) = ((MR_Box) (DetailsAbstract_7));
          }
          Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_3, (MR_Integer) 0))));
          Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_3, (MR_Integer) 1))));
          Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_3, (MR_Integer) 3))));
          Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_3, (MR_Integer) 4))));
          Var_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_3, (MR_Integer) 5))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            *ItemTypeDefn_4 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_24));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_25));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_16));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_27));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_28));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_29));
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
              MR_Word MaybeCanonical0_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_11, (MR_Integer) 1))));
              MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_11, (MR_Integer) 0))));
              MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_11, (MR_Integer) 2))));

              if ((MaybeCanonical0_58 == (MR_Word) ((MR_Unsigned) 0U)))
                DetailsForeign_12 = DetailsForeign0_11;
              else
                {
                  DetailsForeign_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), DetailsForeign_12, 0) = ((MR_Box) (Var_63));
                  MR_hl_field(MR_mktag(0), DetailsForeign_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__comp_unit_interface_scalar_common_3[1])));
                  MR_hl_field(MR_mktag(0), DetailsForeign_12, 2) = ((MR_Box) (Var_64));
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
parse_tree__comp_unit_interface____Unify____need_imports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__comp_unit_interface____Unify____need_imports_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____need_imports_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__comp_unit_interface____Compare____need_imports_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
	MR_register_type_ctor_info(&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_need_imports_0);
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
