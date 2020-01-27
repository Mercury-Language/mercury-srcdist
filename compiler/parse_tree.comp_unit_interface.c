/*
** Automatically generated from `comp_unit_interface.m'
** by the Mercury compiler,
** version 20.01-beta-2020-01-12
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
#include "multi_map.mih"
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


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_block_1__plain_parse_tree__prog_item__type_ctor_info_src_module_section_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_block_1__plain_parse_tree__prog_item__type_ctor_info_module_section_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__list__pti_list_1__plain_libs__globals__type_ctor_info_foreign_language_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__list__ti_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0;

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

static const MR_FA_TypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__comp_unit_interface__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__IntroducedFrom__pred__get_interface_int1_items_loop_int__1337__1_2_p_0(
  MR_Word Langs_112,
  MR_Word HeadVar__2_154);

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

static void MR_CALL 
parse_tree__comp_unit_interface__add_fim_to_specs_3_p_0(
  MR_Word FIM_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_11,
  MR_Word * STATE_VARIABLE_FIMSpecs_12);

static void MR_CALL 
parse_tree__comp_unit_interface__add_self_fim_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Lang_6,
  MR_Word STATE_VARIABLE_FIMSpecs_0_9,
  MR_Word * STATE_VARIABLE_FIMSpecs_10);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_14_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_14_p_0(
  MR_Word Globals_15,
  MR_Word AugCompUnit_16,
  MR_Word IntInclModuleNames_17,
  MR_Word IntImportsUses_18,
  MR_Word IntExplicitFIMSpecs_19,
  MR_Word ImpExplicitFIMSpecs_20,
  MR_Word IntTypeDefns_21,
  MR_Word IntInstDefns_22,
  MR_Word IntModeDefns_23,
  MR_Word IntTypeClasses_24,
  MR_Word IntInstances_25,
  MR_Word ImpTypeDefns_26,
  MR_Word TypeCtorCheckedMap_27,
  MR_Word * ParseTreeInt2_28);

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
parse_tree__comp_unit_interface__generate_interface_int1_15_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_15_p_0(
  MR_Word AugCompUnit_16,
  MR_Word * IntIncls_17,
  MR_Word * IntImportsUses_18,
  MR_Word * IntExplicitFIMSpecs_19,
  MR_Word * ImpExplicitFIMSpecs_20,
  MR_Word * IntTypeDefns_21,
  MR_Word * IntInstDefns_22,
  MR_Word * IntModeDefns_23,
  MR_Word * IntTypeClasses_24,
  MR_Word * IntInstances_25,
  MR_Word * ImpTypeDefns_26,
  MR_Word * TypeCtorCheckedMap_27,
  MR_Word * ParseTreeInt1_28,
  MR_Word STATE_VARIABLE_Specs_0_97,
  MR_Word * STATE_VARIABLE_Specs_98);

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
parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_51_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_51_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_51_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_51_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_51_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntIncls_0_2,
  MR_Word * STATE_VARIABLE_IntIncls_3,
  MR_Word STATE_VARIABLE_ImpIncls_0_4,
  MR_Word * STATE_VARIABLE_ImpIncls_5,
  MR_Word STATE_VARIABLE_IntImportsUses_0_6,
  MR_Word * STATE_VARIABLE_IntImportsUses_7,
  MR_Word STATE_VARIABLE_ImpImportsUses_0_8,
  MR_Word * STATE_VARIABLE_ImpImportsUses_9,
  MR_Word STATE_VARIABLE_IntExplicitFIMSpecs_0_10,
  MR_Word * STATE_VARIABLE_IntExplicitFIMSpecs_11,
  MR_Word STATE_VARIABLE_ImpExplicitFIMSpecs_0_12,
  MR_Word * STATE_VARIABLE_ImpExplicitFIMSpecs_13,
  MR_Word STATE_VARIABLE_IntImplicitFIMLangs_0_14,
  MR_Word * STATE_VARIABLE_IntImplicitFIMLangs_15,
  MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_0_16,
  MR_Word * STATE_VARIABLE_ImpImplicitFIMLangs_17,
  MR_Word STATE_VARIABLE_IntTypesMap_0_18,
  MR_Word * STATE_VARIABLE_IntTypesMap_19,
  MR_Word STATE_VARIABLE_IntTypeDefnsCord_0_20,
  MR_Word * STATE_VARIABLE_IntTypeDefnsCord_21,
  MR_Word STATE_VARIABLE_IntInstDefnsCord_0_22,
  MR_Word * STATE_VARIABLE_IntInstDefnsCord_23,
  MR_Word STATE_VARIABLE_IntModeDefnsCord_0_24,
  MR_Word * STATE_VARIABLE_IntModeDefnsCord_25,
  MR_Word STATE_VARIABLE_IntTypeClassesCord_0_26,
  MR_Word * STATE_VARIABLE_IntTypeClassesCord_27,
  MR_Word STATE_VARIABLE_IntInstancesCord_0_28,
  MR_Word * STATE_VARIABLE_IntInstancesCord_29,
  MR_Word STATE_VARIABLE_IntPredDeclsCord_0_30,
  MR_Word * STATE_VARIABLE_IntPredDeclsCord_31,
  MR_Word STATE_VARIABLE_IntModeDeclsCord_0_32,
  MR_Word * STATE_VARIABLE_IntModeDeclsCord_33,
  MR_Word STATE_VARIABLE_IntForeignEnumsCord_0_34,
  MR_Word * STATE_VARIABLE_IntForeignEnumsCord_35,
  MR_Word STATE_VARIABLE_IntPragmasCord_0_36,
  MR_Word * STATE_VARIABLE_IntPragmasCord_37,
  MR_Word STATE_VARIABLE_IntPromisesCord_0_38,
  MR_Word * STATE_VARIABLE_IntPromisesCord_39,
  MR_Word STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_40,
  MR_Word * STATE_VARIABLE_IntModulesNeededByTypeClassDefns_41,
  MR_Word STATE_VARIABLE_ImpTypesMap_0_42,
  MR_Word * STATE_VARIABLE_ImpTypesMap_43,
  MR_Word STATE_VARIABLE_OrigImpTypeDefnsCord_0_44,
  MR_Word * STATE_VARIABLE_OrigImpTypeDefnsCord_45,
  MR_Word STATE_VARIABLE_ImpTypeClassesCord_0_46,
  MR_Word * STATE_VARIABLE_ImpTypeClassesCord_47,
  MR_Word STATE_VARIABLE_ImpForeignEnumsCord_0_48,
  MR_Word * STATE_VARIABLE_ImpForeignEnumsCord_49,
  MR_Word STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_50,
  MR_Word * STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_51);

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_imp_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_imp_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_0_2,
  MR_Word * STATE_VARIABLE_ImpImplicitFIMLangs_3,
  MR_Word STATE_VARIABLE_ImpTypesMap_0_4,
  MR_Word * STATE_VARIABLE_ImpTypesMap_5,
  MR_Word STATE_VARIABLE_OrigImpTypeDefnsCord_0_6,
  MR_Word * STATE_VARIABLE_OrigImpTypeDefnsCord_7,
  MR_Word STATE_VARIABLE_ImpTypeClassesCord_0_8,
  MR_Word * STATE_VARIABLE_ImpTypeClassesCord_9,
  MR_Word STATE_VARIABLE_ImpForeignEnumsCord_0_10,
  MR_Word * STATE_VARIABLE_ImpForeignEnumsCord_11,
  MR_Word STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_12,
  MR_Word * STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_13);

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_27_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_27_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_27_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntImplicitFIMLangs_0_2,
  MR_Word * STATE_VARIABLE_IntImplicitFIMLangs_3,
  MR_Word STATE_VARIABLE_IntTypesMap_0_4,
  MR_Word * STATE_VARIABLE_IntTypesMap_5,
  MR_Word STATE_VARIABLE_IntTypeDefnsCord_0_6,
  MR_Word * STATE_VARIABLE_IntTypeDefnsCord_7,
  MR_Word STATE_VARIABLE_IntInstDefnsCord_0_8,
  MR_Word * STATE_VARIABLE_IntInstDefnsCord_9,
  MR_Word STATE_VARIABLE_IntModeDefnsCord_0_10,
  MR_Word * STATE_VARIABLE_IntModeDefnsCord_11,
  MR_Word STATE_VARIABLE_IntTypeClassesCord_0_12,
  MR_Word * STATE_VARIABLE_IntTypeClassesCord_13,
  MR_Word STATE_VARIABLE_IntInstancesCord_0_14,
  MR_Word * STATE_VARIABLE_IntInstancesCord_15,
  MR_Word STATE_VARIABLE_IntPredDeclsCord_0_16,
  MR_Word * STATE_VARIABLE_IntPredDeclsCord_17,
  MR_Word STATE_VARIABLE_IntModeDeclsCord_0_18,
  MR_Word * STATE_VARIABLE_IntModeDeclsCord_19,
  MR_Word STATE_VARIABLE_IntForeignEnumsCord_0_20,
  MR_Word * STATE_VARIABLE_IntForeignEnumsCord_21,
  MR_Word STATE_VARIABLE_IntPragmasCord_0_22,
  MR_Word * STATE_VARIABLE_IntPragmasCord_23,
  MR_Word STATE_VARIABLE_IntPromisesCord_0_24,
  MR_Word * STATE_VARIABLE_IntPromisesCord_25,
  MR_Word STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_26,
  MR_Word * STATE_VARIABLE_IntModulesNeededByTypeClassDefns_27);

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_avails_loop_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImportsUses_0_2,
  MR_Word * STATE_VARIABLE_ImportsUses_3);

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

static void MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_58_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_58_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_58_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_58_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_58_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_58_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_58_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_58_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_58_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_IntIncls_0_3,
  MR_Word * STATE_VARIABLE_IntIncls_4,
  MR_Word STATE_VARIABLE_ImpIncls_0_5,
  MR_Word * STATE_VARIABLE_ImpIncls_6,
  MR_Word STATE_VARIABLE_IntImports_0_7,
  MR_Word * STATE_VARIABLE_IntImports_8,
  MR_Word STATE_VARIABLE_IntUses_0_9,
  MR_Word * STATE_VARIABLE_IntUses_10,
  MR_Word STATE_VARIABLE_ImpImports_0_11,
  MR_Word * STATE_VARIABLE_ImpImports_12,
  MR_Word STATE_VARIABLE_ImpUses_0_13,
  MR_Word * STATE_VARIABLE_ImpUses_14,
  MR_Word STATE_VARIABLE_IntFIMSpecs_0_15,
  MR_Word * STATE_VARIABLE_IntFIMSpecs_16,
  MR_Word STATE_VARIABLE_ImpFIMSpecs_0_17,
  MR_Word * STATE_VARIABLE_ImpFIMSpecs_18,
  MR_Word STATE_VARIABLE_IntTypeDefns_0_19,
  MR_Word * STATE_VARIABLE_IntTypeDefns_20,
  MR_Word STATE_VARIABLE_ImpTypeDefns_0_21,
  MR_Word * STATE_VARIABLE_ImpTypeDefns_22,
  MR_Word STATE_VARIABLE_IntInstDefns_0_23,
  MR_Word * STATE_VARIABLE_IntInstDefns_24,
  MR_Word STATE_VARIABLE_ImpInstDefns_0_25,
  MR_Word * STATE_VARIABLE_ImpInstDefns_26,
  MR_Word STATE_VARIABLE_IntModeDefns_0_27,
  MR_Word * STATE_VARIABLE_IntModeDefns_28,
  MR_Word STATE_VARIABLE_ImpModeDefns_0_29,
  MR_Word * STATE_VARIABLE_ImpModeDefns_30,
  MR_Word STATE_VARIABLE_IntTypeClasses_0_31,
  MR_Word * STATE_VARIABLE_IntTypeClasses_32,
  MR_Word STATE_VARIABLE_ImpTypeClasses_0_33,
  MR_Word * STATE_VARIABLE_ImpTypeClasses_34,
  MR_Word STATE_VARIABLE_IntInstances_0_35,
  MR_Word * STATE_VARIABLE_IntInstances_36,
  MR_Word STATE_VARIABLE_ImpInstances_0_37,
  MR_Word * STATE_VARIABLE_ImpInstances_38,
  MR_Word STATE_VARIABLE_IntPredDecls_0_39,
  MR_Word * STATE_VARIABLE_IntPredDecls_40,
  MR_Word STATE_VARIABLE_ImpPredDecls_0_41,
  MR_Word * STATE_VARIABLE_ImpPredDecls_42,
  MR_Word STATE_VARIABLE_IntModeDecls_0_43,
  MR_Word * STATE_VARIABLE_IntModeDecls_44,
  MR_Word STATE_VARIABLE_ImpModeDecls_0_45,
  MR_Word * STATE_VARIABLE_ImpModeDecls_46,
  MR_Word STATE_VARIABLE_IntForeignEnums_0_47,
  MR_Word * STATE_VARIABLE_IntForeignEnums_48,
  MR_Word STATE_VARIABLE_ImpForeignEnums_0_49,
  MR_Word * STATE_VARIABLE_ImpForeignEnums_50,
  MR_Word STATE_VARIABLE_IntPragmas_0_51,
  MR_Word * STATE_VARIABLE_IntPragmas_52,
  MR_Word STATE_VARIABLE_ImpPragmas_0_53,
  MR_Word * STATE_VARIABLE_ImpPragmas_54,
  MR_Word STATE_VARIABLE_IntPromises_0_55,
  MR_Word * STATE_VARIABLE_IntPromises_56,
  MR_Word STATE_VARIABLE_ImpPromises_0_57,
  MR_Word * STATE_VARIABLE_ImpPromises_58);

static void MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_items_22_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_items_22_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_TypeDefns_0_3,
  MR_Word * STATE_VARIABLE_TypeDefns_4,
  MR_Word STATE_VARIABLE_InstDefns_0_5,
  MR_Word * STATE_VARIABLE_InstDefns_6,
  MR_Word STATE_VARIABLE_ModeDefns_0_7,
  MR_Word * STATE_VARIABLE_ModeDefns_8,
  MR_Word STATE_VARIABLE_TypeClasses_0_9,
  MR_Word * STATE_VARIABLE_TypeClasses_10,
  MR_Word STATE_VARIABLE_Instances_0_11,
  MR_Word * STATE_VARIABLE_Instances_12,
  MR_Word STATE_VARIABLE_PredDecls_0_13,
  MR_Word * STATE_VARIABLE_PredDecls_14,
  MR_Word STATE_VARIABLE_ModeDecls_0_15,
  MR_Word * STATE_VARIABLE_ModeDecls_16,
  MR_Word STATE_VARIABLE_ForeignEnums_0_17,
  MR_Word * STATE_VARIABLE_ForeignEnums_18,
  MR_Word STATE_VARIABLE_Pragmas_0_19,
  MR_Word * STATE_VARIABLE_Pragmas_20,
  MR_Word STATE_VARIABLE_Promises_0_21,
  MR_Word * STATE_VARIABLE_Promises_22);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_via_int3_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_25_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_25_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_25_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_25_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntIncls_0_2,
  MR_Word * STATE_VARIABLE_IntIncls_3,
  MR_Word STATE_VARIABLE_IntImports_0_4,
  MR_Word * STATE_VARIABLE_IntImports_5,
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
  MR_Word * STATE_VARIABLE_NeedImports_25);

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

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_2[25][3];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_3[2][1];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_4[5][6];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_5[6][5];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_6[1][10];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_7[2][4];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_8[2][13];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_9[2][11];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_10[1][12];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_11[1][9];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_12[1][7];




static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_1[15][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[0]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
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
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[0])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_2[25][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[6]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_25_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_25_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_25_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[2])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_via_int3_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_58_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_58_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[3])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_58_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_58_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_58_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_58_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[3])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_58_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_58_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[2])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_27_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[2])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_interface_int1_items_loop_imp_13_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_51_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_51_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_51_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_51_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[3])),
    ((MR_Box) (parse_tree__comp_unit_interface__type_to_user_type_ctor_set_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[4])),
    ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[4])),
    ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[1])),
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

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_4[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_5[6][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_import_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_import_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_block_1__plain_parse_tree__prog_item__type_ctor_info_src_module_section_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_block_1__plain_parse_tree__prog_item__type_ctor_info_module_section_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_6[1][10] = {
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

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_7[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__comp_unit_interface_scalar_common_2[14]))),
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_8[2][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
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
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
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
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
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
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_10[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_11[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_12[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_block_1__plain_parse_tree__prog_item__type_ctor_info_src_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_block_1__plain_parse_tree__prog_item__type_ctor_info_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__list__pti_list_1__plain_libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__list__ti_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__comp_unit_interface__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__comp_unit_interface__list__ti_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0)
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

static const MR_FA_TypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&parse_tree__comp_unit_interface__list__ti_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)
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
  {     (MR_PseudoTypeInfo) (&parse_tree__comp_unit_interface__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0) },
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
parse_tree__comp_unit_interface__IntroducedFrom__pred__get_interface_int1_items_loop_int__1337__1_2_p_0(
  MR_Word Langs_112,
  MR_Word HeadVar__2_154)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[10]), ((MR_Box) (Langs_112)), ((MR_Box) (HeadVar__2_154)));
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

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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
    MR_Word Defns_16;
    MR_Box conv0_Defns_16;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[6]), IntTypesMap_7, ((MR_Box) (TypeCtor_12)), &conv0_Defns_16);
    if (succeeded)
    {
      Defns_16 = ((MR_Word) (conv0_Defns_16));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      succeeded = parse_tree__comp_unit_interface__some_type_defn_is_non_abstract_1_p_0(Defns_16);
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
    MR_Word TypeInfo_26_26;
    MR_Word Var_22;

    succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_13)), NeededTypeCtors_12);
    if (succeeded)
    {
      if ((ImpItemTypeDefnInfos_14 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.make_imp_types_abstract\'/3", (MR_String) "!.ImpItemTypeDefnInfos = []");
          return;
        }
      else
      {
        MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpItemTypeDefnInfos_14, (MR_Integer) 1))));
        MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpItemTypeDefnInfos_14, (MR_Integer) 0))));

        if ((Var_43 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word ImpItemTypeDefnInfo_33;
          MR_Word TypeDefn0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 2))));

          switch (MR_tag((MR_Word) TypeDefn0_51)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word DetailsDu0_55 = (MR_Word) ((MR_Word) (TypeDefn0_51));
                MR_Word OoMCtors_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_55, (MR_Integer) 0))));
                MR_Word MaybeEqCmp_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_55, (MR_Integer) 1))));
                MR_Word MaybeDirectArgCtors_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_55, (MR_Integer) 2))));

                succeeded = parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0(BothTypesMap_10, OoMCtors_56, MaybeEqCmp_57, MaybeDirectArgCtors_58);
                if (succeeded)
                  ImpItemTypeDefnInfo_33 = Var_44;
                else
                {
                  MR_Word DetailsAbs_61;
                  MR_Word TypeDefn_62;
                  MR_Integer NumFunctors_59;
                  MR_Word Var_70;
                  MR_Word Var_71;
                  MR_Word Var_73;
                  MR_Word Var_74;
                  MR_Integer Var_75;

                  succeeded = parse_tree__prog_type__du_type_is_enum_2_p_0(DetailsDu0_55, &NumFunctors_59);
                  if (succeeded)
                  {
                    MR_Integer NumBits_60;

                    parse_tree__prog_type__num_bits_needed_for_n_values_2_p_0(NumFunctors_59, &NumBits_60);
                    {
                      DetailsAbs_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), DetailsAbs_61, 0) = ((MR_Box) (NumBits_60));
                    }
                  }
                  else
                    DetailsAbs_61 = (MR_Word) ((MR_Unsigned) 0U);
                  {
                    TypeDefn_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), TypeDefn_62, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), TypeDefn_62, 1) = ((MR_Box) (DetailsAbs_61));
                  }
                  Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 0))));
                  Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 1))));
                  Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 3))));
                  Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 4))));
                  Var_75 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 5))));
                  {
                    ImpItemTypeDefnInfo_33 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ImpItemTypeDefnInfo_33, 0) = ((MR_Box) (Var_70));
                    MR_hl_field(MR_mktag(0), ImpItemTypeDefnInfo_33, 1) = ((MR_Box) (Var_71));
                    MR_hl_field(MR_mktag(0), ImpItemTypeDefnInfo_33, 2) = ((MR_Box) (TypeDefn_62));
                    MR_hl_field(MR_mktag(0), ImpItemTypeDefnInfo_33, 3) = ((MR_Box) (Var_73));
                    MR_hl_field(MR_mktag(0), ImpItemTypeDefnInfo_33, 4) = ((MR_Box) (Var_74));
                    MR_hl_field(MR_mktag(0), ImpItemTypeDefnInfo_33, 5) = ((MR_Box) (Var_75));
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
              ImpItemTypeDefnInfo_33 = Var_44;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn0_51, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ImpItemTypeDefnInfo_33 = Var_44;
                  break;
                case (MR_Integer) 1:
                  ImpItemTypeDefnInfo_33 = Var_44;
                  break;
              }
              break;
          }
          {
            AbstractImpItemTypeDefnInfos_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), AbstractImpItemTypeDefnInfos_17, 0) = ((MR_Box) (ImpItemTypeDefnInfo_33));
            MR_hl_field(MR_mktag(1), AbstractImpItemTypeDefnInfos_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        else
          AbstractImpItemTypeDefnInfos_17 = ImpItemTypeDefnInfos_14;
      }
      TypeInfo_26_26 = (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]);
      succeeded = mercury__multi_map__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), TypeInfo_26_26, IntTypesMap_11, ((MR_Box) (TypeCtor_13)));
      if (succeeded)
      {
        Var_22 = (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[24]);
        succeeded = mercury__list__all_true_2_p_0(TypeInfo_26_26, Var_22, AbstractImpItemTypeDefnInfos_17);
      }
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word ImpTypeDefn_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AbstractImpItemTypeDefnInfos_17, (MR_Integer) 0))));
      MR_Word ImpTypeDefns_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AbstractImpItemTypeDefnInfos_17, (MR_Integer) 1))));
      MR_Word TypeDefn_88;
      MR_Word STATE_VARIABLE_RevImpTypeDefns_30_100;
      MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_32_102;
      MR_Word ForeignType_93;
      MR_Word DetailsForeign_92;

      {
        STATE_VARIABLE_RevImpTypeDefns_30_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevImpTypeDefns_30_100, 0) = ((MR_Box) (ImpTypeDefn_82));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevImpTypeDefns_30_100, 1) = ((MR_Box) (STATE_VARIABLE_ImpTypeDefns_0_18));
      }
      TypeDefn_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpTypeDefn_82, (MR_Integer) 2))));
      succeeded = ((((MR_tag((MR_Word) TypeDefn_88)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_88, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        DetailsForeign_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_88, (MR_Integer) 1))));
        ForeignType_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_92, (MR_Integer) 0))));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Var_101;

        Var_101 = parse_tree__prog_foreign__foreign_type_language_1_f_0(ForeignType_93);
        mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Var_101)), STATE_VARIABLE_ImpImplicitFIMLangs_0_20, &STATE_VARIABLE_ImpImplicitFIMLangs_32_102);
      }
      else
        STATE_VARIABLE_ImpImplicitFIMLangs_32_102 = STATE_VARIABLE_ImpImplicitFIMLangs_0_20;
      parse_tree__comp_unit_interface__add_type_defn_items_5_p_0(ImpTypeDefns_83, STATE_VARIABLE_RevImpTypeDefns_30_100, STATE_VARIABLE_ImpTypeDefns_19, STATE_VARIABLE_ImpImplicitFIMLangs_32_102, STATE_VARIABLE_ImpImplicitFIMLangs_21);
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

          Var_38 = mercury__list__one_or_more_to_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMCtors_26);
          Var_39 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
          parse_tree__comp_unit_interface__ctors_to_user_type_ctor_set_3_p_0(Var_38, Var_39, &RhsTypeCtors_51);
          mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), RhsTypeCtors_51, STATE_VARIABLE_DuArgTypeCtors_0_34, STATE_VARIABLE_DuArgTypeCtors_35);
          mercury__set__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[22]), RhsTypeCtors_51, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_0_36)), &conv1_STATE_VARIABLE_ModulesNeededByTypeDefns_37);
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
          mercury__set__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[23]), NewRhsTypeCtors_23, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_0_36)), &conv3_STATE_VARIABLE_ModulesNeededByTypeDefns_46_46);
          STATE_VARIABLE_ModulesNeededByTypeDefns_46_46 = ((MR_Word) (conv3_STATE_VARIABLE_ModulesNeededByTypeDefns_46_46));
          {
            Var_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_9[0]));
            MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_3));
            MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (ImpTypesMap_9));
          }
          Var_49 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
          mercury__set__fold3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), Var_47, NewRhsTypeCtors_23, ((MR_Box) (STATE_VARIABLE_AbsExpEqvRhsTypeCtors_44_44)), &conv9_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_33, ((MR_Box) (Var_49)), &conv8_Var_24, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_46_46)), &conv7_STATE_VARIABLE_ModulesNeededByTypeDefns_37);
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
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[21]), ArgTypes_7, ((MR_Box) (STATE_VARIABLE_TypeCtors_15_15)), &conv1_STATE_VARIABLE_TypeCtors_14);
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
        MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_9[1]));
        MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_rhs_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (ImpTypesMap_9));
      }
      mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), Var_21, ImpTypeDefns_14, ((MR_Box) (STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_15)), &conv6_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16, ((MR_Box) (STATE_VARIABLE_DuArgTypeCtors_0_17)), &conv5_STATE_VARIABLE_DuArgTypeCtors_18, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_0_19)), &conv4_STATE_VARIABLE_ModulesNeededByTypeDefns_20);
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
  if ((ImpItemTypeDefnInfos_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.accumulate_abs_imp_exported_type_lhs\'/10", (MR_String) "ImpItemTypeDefnInfos = []");
      return;
    }
  else
  {
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpItemTypeDefnInfos_14, (MR_Integer) 1))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpItemTypeDefnInfos_14, (MR_Integer) 0))));

    if ((Var_48 == (MR_Word) ((MR_Unsigned) 0U)))
      parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_in_defn_10_p_0(IntTypesMap_11, BothTypesMap_12, TypeCtor_13, Var_49, STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_22, STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23, STATE_VARIABLE_AbsExpEnumTypeCtors_0_24, STATE_VARIABLE_AbsExpEnumTypeCtors_25, STATE_VARIABLE_DirectDummyTypeCtors_0_26, STATE_VARIABLE_DirectDummyTypeCtors_27);
    else
    {
      MR_Word Var_29;
      MR_Box conv5_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23;
      MR_Box conv4_STATE_VARIABLE_AbsExpEnumTypeCtors_25;
      MR_Box conv3_STATE_VARIABLE_DirectDummyTypeCtors_27;

      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_8[1]));
        MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_10_p_0_1));
        MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (IntTypesMap_11));
        MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) (BothTypesMap_12));
        MR_hl_field(MR_mktag(0), Var_29, 5) = ((MR_Box) (TypeCtor_13));
      }
      mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), Var_29, ImpItemTypeDefnInfos_14, ((MR_Box) (STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_22)), &conv5_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23, ((MR_Box) (STATE_VARIABLE_AbsExpEnumTypeCtors_0_24)), &conv4_STATE_VARIABLE_AbsExpEnumTypeCtors_25, ((MR_Box) (STATE_VARIABLE_DirectDummyTypeCtors_0_26)), &conv3_STATE_VARIABLE_DirectDummyTypeCtors_27);
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

          (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__succeeded = mercury__multi_map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__TypeDefnMap_5, ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__TypeCtor_35)), &ItemTypeDefnInfos_36);
          if ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__succeeded)
            mercury__list__member_2_p_1((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), &(env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_env_0__conv0_ItemTypeDefnInfo_37, ItemTypeDefnInfos_36, parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_4_p_0_3, env_ptr);
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

          (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__succeeded = mercury__multi_map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__TypeDefnMap_6, ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__TypeCtor_31)), &ItemTypeDefnInfos_32);
          if ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__succeeded)
            mercury__list__member_2_p_1((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), &(env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_env_0__conv0_ItemTypeDefnInfo_33, ItemTypeDefnInfos_32, parse_tree__comp_unit_interface__constructor_list_represents_dummy_type_2_5_p_0_3, env_ptr);
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

static void MR_CALL 
parse_tree__comp_unit_interface__add_fim_to_specs_3_p_0(
  MR_Word FIM_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_11,
  MR_Word * STATE_VARIABLE_FIMSpecs_12)
{
  {
    MR_Word Lang_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FIM_4, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ModuleName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FIM_4, (MR_Integer) 1))));
    MR_Word FIMSpec_10;

    {
      FIMSpec_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FIMSpec_10, 0) = (MR_Box) ((MR_Unsigned) (Lang_6));
      MR_hl_field(MR_mktag(0), FIMSpec_10, 1) = ((MR_Box) (ModuleName_7));
    }
    mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ((MR_Box) (FIMSpec_10)), STATE_VARIABLE_FIMSpecs_0_11, STATE_VARIABLE_FIMSpecs_12);
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
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  {
    MR_Word IntInclModuleNames_12;
    MR_Word IntImportsUses_13;
    MR_Word IntExplicitFIMSpecs_14;
    MR_Word ImpExplicitFIMSpecs_15;
    MR_Word IntTypeDefns_16;
    MR_Word IntInstDefns_17;
    MR_Word IntModeDefns_18;
    MR_Word IntTypeClasses_19;
    MR_Word IntInstances_20;
    MR_Word ImpTypeDefns_21;
    MR_Word TypeCtorCheckedMap_22;
    MR_Word ParseTreeInt1A_23;
    MR_Word ParseTreeInt2A_24;

    parse_tree__comp_unit_interface__generate_interface_int1_15_p_0(AugCompUnit_8, &IntInclModuleNames_12, &IntImportsUses_13, &IntExplicitFIMSpecs_14, &ImpExplicitFIMSpecs_15, &IntTypeDefns_16, &IntInstDefns_17, &IntModeDefns_18, &IntTypeClasses_19, &IntInstances_20, &ImpTypeDefns_21, &TypeCtorCheckedMap_22, &ParseTreeInt1A_23, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
    parse_tree__comp_unit_interface__generate_interface_int2_14_p_0(Globals_7, AugCompUnit_8, IntInclModuleNames_12, IntImportsUses_13, IntExplicitFIMSpecs_14, ImpExplicitFIMSpecs_15, IntTypeDefns_16, IntInstDefns_17, IntModeDefns_18, IntTypeClasses_19, IntInstances_20, ImpTypeDefns_21, TypeCtorCheckedMap_22, &ParseTreeInt2A_24);
    *ParseTreeInt1_9 = parse_tree__convert_parse_tree__convert_parse_tree_int1_to_int_1_f_0(ParseTreeInt1A_23);
    *ParseTreeInt2_10 = parse_tree__convert_parse_tree__convert_parse_tree_int2_to_int_1_f_0(ParseTreeInt2A_24);
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_14_p_0_3(
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
parse_tree__comp_unit_interface__generate_interface_int2_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_FIMSpecs_10;

    parse_tree__comp_unit_interface__add_self_fim_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_FIMSpecs_10);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_FIMSpecs_10));
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_14_p_0_1(
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
parse_tree__comp_unit_interface__generate_interface_int2_14_p_0(
  MR_Word Globals_15,
  MR_Word AugCompUnit_16,
  MR_Word IntInclModuleNames_17,
  MR_Word IntImportsUses_18,
  MR_Word IntExplicitFIMSpecs_19,
  MR_Word ImpExplicitFIMSpecs_20,
  MR_Word IntTypeDefns_21,
  MR_Word IntInstDefns_22,
  MR_Word IntModeDefns_23,
  MR_Word IntTypeClasses_24,
  MR_Word IntInstances_25,
  MR_Word ImpTypeDefns_26,
  MR_Word TypeCtorCheckedMap_27,
  MR_Word * ParseTreeInt2_28)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_16, (MR_Integer) 0))));
    MR_Word ModuleNameContext_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_16, (MR_Integer) 1))));
    MR_Word UnqualSymNames_37;
    MR_Word UsedModuleNames_38;
    MR_Word ShortIntTypeDefnsCord_39;
    MR_Word ShortIntImplicitFIMLangs_40;
    MR_Word ShortIntTypeClassesCord_41;
    MR_Word ShortIntInstancesCord_42;
    MR_Word ShortIntTypeDefns_43;
    MR_Word ShortIntTypeClasses_46;
    MR_Word ShortIntInstances_47;
    MR_Word ShortImpImplicitFIMLangs_48;
    MR_Word Experiment1_49;
    MR_Word ShortIntTypeRepnMap_50;
    MR_Word ShortIntUsedModuleNames_52;
    MR_Word ShortIntExplicitFIMSpecs_53;
    MR_Word ShortIntFIMSpecs_54;
    MR_Word ExplicitFIMSpecs_55;
    MR_Word ShortImpExplicitFIMSpecs_56;
    MR_Word ShortImpFIMSpecs0_57;
    MR_Word ShortImpFIMSpecs_58;
    MR_Word ShortIntTypeDefnMap_61;
    MR_Word ShortIntInstDefnMap_62;
    MR_Word ShortIntModeDefnMap_63;
    MR_Word ShortImpTypeDefnMap_64;
    MR_Word STATE_VARIABLE_UsedModuleNames_66_66;
    MR_Word STATE_VARIABLE_UnqualSymNames_67_67;
    MR_Word STATE_VARIABLE_UsedModuleNames_68_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word STATE_VARIABLE_UnqualSymNames_71_71;
    MR_Word STATE_VARIABLE_UsedModuleNames_72_72;
    MR_Word STATE_VARIABLE_UnqualSymNames_73_73;
    MR_Word STATE_VARIABLE_UsedModuleNames_74_74;
    MR_Word STATE_VARIABLE_UnqualSymNames_75_75;
    MR_Word STATE_VARIABLE_UsedModuleNames_76_76;
    MR_Word Var_77;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Box conv1_ShortIntFIMSpecs_54;
    MR_Box conv2_ShortImpFIMSpecs0_57;

    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_UsedModuleNames_66_66);
    Var_69 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]));
    Var_70 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    parse_tree__comp_unit_interface__get_int2_items_from_int1_int_type_defn_9_p_0(IntTypeDefns_21, (MR_Integer) 0, &STATE_VARIABLE_UnqualSymNames_67_67, STATE_VARIABLE_UsedModuleNames_66_66, &STATE_VARIABLE_UsedModuleNames_68_68, Var_69, &ShortIntTypeDefnsCord_39, Var_70, &ShortIntImplicitFIMLangs_40);
    parse_tree__comp_unit_interface__get_int2_items_from_int1_int_inst_defn_5_p_0(IntInstDefns_22, STATE_VARIABLE_UnqualSymNames_67_67, &STATE_VARIABLE_UnqualSymNames_71_71, STATE_VARIABLE_UsedModuleNames_68_68, &STATE_VARIABLE_UsedModuleNames_72_72);
    parse_tree__comp_unit_interface__get_int2_items_from_int1_int_mode_defn_5_p_0(IntModeDefns_23, STATE_VARIABLE_UnqualSymNames_71_71, &STATE_VARIABLE_UnqualSymNames_73_73, STATE_VARIABLE_UsedModuleNames_72_72, &STATE_VARIABLE_UsedModuleNames_74_74);
    Var_77 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0));
    parse_tree__comp_unit_interface__get_int2_items_from_int1_int_typeclass_7_p_0(IntTypeClasses_24, STATE_VARIABLE_UnqualSymNames_73_73, &STATE_VARIABLE_UnqualSymNames_75_75, STATE_VARIABLE_UsedModuleNames_74_74, &STATE_VARIABLE_UsedModuleNames_76_76, Var_77, &ShortIntTypeClassesCord_41);
    Var_80 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0));
    parse_tree__comp_unit_interface__get_int2_items_from_int1_int_instance_7_p_0(IntInstances_25, STATE_VARIABLE_UnqualSymNames_75_75, &UnqualSymNames_37, STATE_VARIABLE_UsedModuleNames_76_76, &UsedModuleNames_38, Var_80, &ShortIntInstancesCord_42);
    ShortIntTypeDefns_43 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), ShortIntTypeDefnsCord_39);
    ShortIntTypeClasses_46 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ShortIntTypeClassesCord_41);
    ShortIntInstances_47 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ShortIntInstancesCord_42);
    Var_81 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    parse_tree__comp_unit_interface__get_int2_items_from_int1_imp_types_3_p_0(ImpTypeDefns_26, Var_81, &ShortImpImplicitFIMLangs_48);
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 698, &Experiment1_49);
    switch (Experiment1_49) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0), &ShortIntTypeRepnMap_50);
        break;
      case (MR_Integer) 1:
        {
          MR_Word ShortIntTypeRepns_51;

          parse_tree__decide_type_repn__decide_repns_for_simple_types_for_int3_3_p_0(ModuleName_29, TypeCtorCheckedMap_27, &ShortIntTypeRepns_51);
          ShortIntTypeRepnMap_50 = parse_tree__convert_parse_tree__type_ctor_repn_items_to_map_1_f_0(ShortIntTypeRepns_51);
        }
        break;
    }
    switch (UnqualSymNames_37) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__set__intersect_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), UsedModuleNames_38, IntImportsUses_18, &ShortIntUsedModuleNames_52);
        break;
      case (MR_Integer) 1:
        ShortIntUsedModuleNames_52 = IntImportsUses_18;
        break;
    }
    {
      Var_83 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[5]));
      MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_14_p_0_1));
      MR_hl_field(MR_mktag(0), Var_83, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_83, 3) = ((MR_Box) (ShortIntImplicitFIMLangs_40));
    }
    mercury__set__filter_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_83, IntExplicitFIMSpecs_19, &ShortIntExplicitFIMSpecs_53);
    {
      Var_84 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_12[0]));
      MR_hl_field(MR_mktag(0), Var_84, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_14_p_0_2));
      MR_hl_field(MR_mktag(0), Var_84, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_84, 3) = ((MR_Box) (ModuleName_29));
    }
    mercury__set__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[5]), Var_84, ShortIntImplicitFIMLangs_40, ((MR_Box) (ShortIntExplicitFIMSpecs_53)), &conv1_ShortIntFIMSpecs_54);
    ShortIntFIMSpecs_54 = ((MR_Word) (conv1_ShortIntFIMSpecs_54));
    mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), IntExplicitFIMSpecs_19, ImpExplicitFIMSpecs_20, &ExplicitFIMSpecs_55);
    {
      Var_85 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[5]));
      MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_14_p_0_3));
      MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (ShortImpImplicitFIMLangs_48));
    }
    mercury__set__filter_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_85, ExplicitFIMSpecs_55, &ShortImpExplicitFIMSpecs_56);
    mercury__set__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[5]), Var_84, ShortImpImplicitFIMLangs_48, ((MR_Box) (ShortImpExplicitFIMSpecs_56)), &conv2_ShortImpFIMSpecs0_57);
    ShortImpFIMSpecs0_57 = ((MR_Word) (conv2_ShortImpFIMSpecs0_57));
    mercury__set__difference_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ShortImpFIMSpecs0_57, ShortIntFIMSpecs_54, &ShortImpFIMSpecs_58);
    ShortIntTypeDefnMap_61 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(ShortIntTypeDefns_43);
    ShortIntInstDefnMap_62 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns_22);
    ShortIntModeDefnMap_63 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns_23);
    ShortImpTypeDefnMap_64 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(ImpTypeDefns_26);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt2_28 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_29));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_30));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (IntInclModuleNames_17));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ShortIntUsedModuleNames_52));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ShortIntFIMSpecs_54));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ShortImpFIMSpecs_58));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ShortIntTypeDefnMap_61));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ShortIntInstDefnMap_62));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ShortIntModeDefnMap_63));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ShortIntTypeClasses_46));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ShortIntInstances_47));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ShortIntTypeRepnMap_50));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ShortImpTypeDefnMap_64));
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
parse_tree__comp_unit_interface__generate_interface_int1_15_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_FIMSpecs_10;

    parse_tree__comp_unit_interface__add_self_fim_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_FIMSpecs_10);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_FIMSpecs_10));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_STATE_VARIABLE_ImpForeignEnumItems_18;
    MR_Word conv4_STATE_VARIABLE_ImpImplicitFIMLangs_20;

    parse_tree__comp_unit_interface__add_foreign_enum_item_if_needed_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_ImpForeignEnumItems_18, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_ImpImplicitFIMLangs_20);
    *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_ImpForeignEnumItems_18));
    *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_ImpImplicitFIMLangs_20));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_15_p_0_1(
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
    MR_Word conv1_STATE_VARIABLE_ImpTypeDefns_19;
    MR_Word conv0_STATE_VARIABLE_ImpImplicitFIMLangs_21;

    parse_tree__comp_unit_interface__maybe_add_maybe_abstract_type_defns_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_ImpTypeDefns_19, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_ImpImplicitFIMLangs_21);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_ImpTypeDefns_19));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_ImpImplicitFIMLangs_21));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_15_p_0(
  MR_Word AugCompUnit_16,
  MR_Word * IntIncls_17,
  MR_Word * IntImportsUses_18,
  MR_Word * IntExplicitFIMSpecs_19,
  MR_Word * ImpExplicitFIMSpecs_20,
  MR_Word * IntTypeDefns_21,
  MR_Word * IntInstDefns_22,
  MR_Word * IntModeDefns_23,
  MR_Word * IntTypeClasses_24,
  MR_Word * IntInstances_25,
  MR_Word * ImpTypeDefns_26,
  MR_Word * TypeCtorCheckedMap_27,
  MR_Word * ParseTreeInt1_28,
  MR_Word STATE_VARIABLE_Specs_0_97,
  MR_Word * STATE_VARIABLE_Specs_98)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_16, (MR_Integer) 0))));
    MR_Word ModuleNameContext_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_16, (MR_Integer) 1))));
    MR_Word SrcItemBlocks_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_16, (MR_Integer) 3))));
    MR_Word IntImportsUses0_38;
    MR_Word ImpImportsUses0_39;
    MR_Word IntExplicitFIMSpecs0_40;
    MR_Word ImpExplicitFIMSpecs0_41;
    MR_Word IntImplicitFIMLangs0_42;
    MR_Word ImpImplicitFIMLangs0_43;
    MR_Word IntTypesMap0_44;
    MR_Word ImpTypesMap0_45;
    MR_Word ImpIncls_46;
    MR_Word ImpImportsUses1_47;
    MR_Word IntImplicitFIMLangs_48;
    MR_Word ImpImplicitFIMLangs1_49;
    MR_Word IntTypesMap_50;
    MR_Word IntTypeDefnsCord_51;
    MR_Word IntInstDefnsCord_52;
    MR_Word IntModeDefnsCord_53;
    MR_Word IntTypeClassesCord_54;
    MR_Word IntInstancesCord_55;
    MR_Word IntPredDeclsCord_56;
    MR_Word IntModeDeclsCord_57;
    MR_Word IntForeignEnumsCord_58;
    MR_Word IntPragmasCord_59;
    MR_Word IntPromisesCord_60;
    MR_Word ImpTypesMap_62;
    MR_Word OrigImpTypeDefnsCord_63;
    MR_Word ImpTypeClassesCord_64;
    MR_Word ImpForeignEnumsCord_65;
    MR_Word ImpModulesNeededByTypeClassDefns_66;
    MR_Word IntPredDecls_67;
    MR_Word IntModeDecls_68;
    MR_Word IntForeignEnums_69;
    MR_Word IntPragmas_70;
    MR_Word IntPromises_71;
    MR_Word OrigImpTypeDefns_72;
    MR_Word ImpTypeClasses_73;
    MR_Word ImpForeignEnums0_74;
    MR_Word BothTypesMap_75;
    MR_Word NeededImpTypeCtors_76;
    MR_Word ImpModulesNeededByTypeDefns_77;
    MR_Word ImpNeededModules_78;
    MR_Word ImpImportsUses_79;
    MR_Word ImpImplicitFIMLangs2_81;
    MR_Word ImpForeignEnums_82;
    MR_Word ImpImplicitFIMLangs_83;
    MR_Word IntFIMSpecs_84;
    MR_Word ImpFIMSpecs0_85;
    MR_Word ImpFIMSpecs_86;
    MR_Word IntTypeDefnMap_87;
    MR_Word IntInstDefnMap_88;
    MR_Word IntModeDefnMap_89;
    MR_Word IntForeignEnumMap_90;
    MR_Word IntTypeRepnMap_91;
    MR_Word OrigImpTypeDefnMap_93;
    MR_Word ImpTypeDefnMap_94;
    MR_Word ImpForeignEnumMap_95;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_118;
    MR_Word Var_120;
    MR_Word _IntModulesNeededByTypeClassDefns_61;
    MR_Box conv3_ImpTypeDefns_26;
    MR_Box conv2_ImpImplicitFIMLangs2_81;
    MR_Box conv7_ImpForeignEnums_82;
    MR_Box conv6_ImpImplicitFIMLangs_83;
    MR_Box conv9_IntFIMSpecs_84;
    MR_Box conv10_ImpFIMSpecs0_85;

    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &IntImportsUses0_38);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &ImpImportsUses0_39);
    mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), &IntExplicitFIMSpecs0_40);
    mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), &ImpExplicitFIMSpecs0_41);
    mercury__set__init_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), &IntImplicitFIMLangs0_42);
    mercury__set__init_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), &ImpImplicitFIMLangs0_43);
    mercury__multi_map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), &IntTypesMap0_44);
    mercury__multi_map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), &ImpTypesMap0_45);
    Var_99 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_100 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_101 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]));
    Var_102 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0));
    Var_103 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0));
    Var_104 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0));
    Var_105 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0));
    Var_106 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0));
    Var_107 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0));
    Var_108 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0));
    Var_109 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[3]));
    Var_110 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0));
    Var_111 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_112 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]));
    Var_113 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0));
    Var_114 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0));
    Var_115 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_51_p_0(SrcItemBlocks_33, Var_99, IntIncls_17, Var_100, &ImpIncls_46, IntImportsUses0_38, IntImportsUses_18, ImpImportsUses0_39, &ImpImportsUses1_47, IntExplicitFIMSpecs0_40, IntExplicitFIMSpecs_19, ImpExplicitFIMSpecs0_41, ImpExplicitFIMSpecs_20, IntImplicitFIMLangs0_42, &IntImplicitFIMLangs_48, ImpImplicitFIMLangs0_43, &ImpImplicitFIMLangs1_49, IntTypesMap0_44, &IntTypesMap_50, Var_101, &IntTypeDefnsCord_51, Var_102, &IntInstDefnsCord_52, Var_103, &IntModeDefnsCord_53, Var_104, &IntTypeClassesCord_54, Var_105, &IntInstancesCord_55, Var_106, &IntPredDeclsCord_56, Var_107, &IntModeDeclsCord_57, Var_108, &IntForeignEnumsCord_58, Var_109, &IntPragmasCord_59, Var_110, &IntPromisesCord_60, Var_111, &_IntModulesNeededByTypeClassDefns_61, ImpTypesMap0_45, &ImpTypesMap_62, Var_112, &OrigImpTypeDefnsCord_63, Var_113, &ImpTypeClassesCord_64, Var_114, &ImpForeignEnumsCord_65, Var_115, &ImpModulesNeededByTypeClassDefns_66);
    *IntTypeDefns_21 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), IntTypeDefnsCord_51);
    *IntInstDefns_22 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), IntInstDefnsCord_52);
    *IntModeDefns_23 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), IntModeDefnsCord_53);
    *IntTypeClasses_24 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClassesCord_54);
    *IntInstances_25 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstancesCord_55);
    IntPredDecls_67 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), IntPredDeclsCord_56);
    IntModeDecls_68 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), IntModeDeclsCord_57);
    IntForeignEnums_69 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), IntForeignEnumsCord_58);
    IntPragmas_70 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[3]), IntPragmasCord_59);
    IntPromises_71 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), IntPromisesCord_60);
    OrigImpTypeDefns_72 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), OrigImpTypeDefnsCord_63);
    ImpTypeClasses_73 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ImpTypeClassesCord_64);
    ImpForeignEnums0_74 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ImpForeignEnumsCord_65);
    BothTypesMap_75 = mercury__multi_map__merge_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), IntTypesMap_50, ImpTypesMap_62);
    parse_tree__comp_unit_interface__get_requirements_of_imp_exported_types_5_p_0(IntTypesMap_50, ImpTypesMap_62, BothTypesMap_75, &NeededImpTypeCtors_76, &ImpModulesNeededByTypeDefns_77);
    mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpModulesNeededByTypeClassDefns_66, ImpModulesNeededByTypeDefns_77, &ImpNeededModules_78);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpNeededModules_78);
    if (succeeded)
      mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &ImpImportsUses_79);
    else
    {
      MR_Word ImpImportsUses2_80;

      ImpImportsUses2_80 = mercury__set__intersect_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImportsUses1_47, ImpNeededModules_78);
      ImpImportsUses_79 = mercury__set__difference_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImportsUses2_80, *IntImportsUses_18);
    }
    {
      Var_116 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_116, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_116, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_15_p_0_1));
      MR_hl_field(MR_mktag(0), Var_116, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_116, 3) = ((MR_Box) (BothTypesMap_75));
      MR_hl_field(MR_mktag(0), Var_116, 4) = ((MR_Box) (IntTypesMap_50));
      MR_hl_field(MR_mktag(0), Var_116, 5) = ((MR_Box) (NeededImpTypeCtors_76));
    }
    mercury__map__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[6]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[6]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[7]), Var_116, ImpTypesMap_62, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_ImpTypeDefns_26, ((MR_Box) (ImpImplicitFIMLangs1_49)), &conv2_ImpImplicitFIMLangs2_81);
    *ImpTypeDefns_26 = ((MR_Word) (conv3_ImpTypeDefns_26));
    ImpImplicitFIMLangs2_81 = ((MR_Word) (conv2_ImpImplicitFIMLangs2_81));
    {
      Var_118 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_118, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), Var_118, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_15_p_0_2));
      MR_hl_field(MR_mktag(0), Var_118, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_118, 3) = ((MR_Box) (IntTypesMap_50));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[8]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[7]), Var_118, ImpForeignEnums0_74, ((MR_Box) ((MR_Unsigned) 0U)), &conv7_ImpForeignEnums_82, ((MR_Box) (ImpImplicitFIMLangs2_81)), &conv6_ImpImplicitFIMLangs_83);
    ImpForeignEnums_82 = ((MR_Word) (conv7_ImpForeignEnums_82));
    ImpImplicitFIMLangs_83 = ((MR_Word) (conv6_ImpImplicitFIMLangs_83));
    {
      Var_120 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_120, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_12[0]));
      MR_hl_field(MR_mktag(0), Var_120, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_15_p_0_3));
      MR_hl_field(MR_mktag(0), Var_120, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_120, 3) = ((MR_Box) (ModuleName_30));
    }
    mercury__set__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[5]), Var_120, IntImplicitFIMLangs_48, ((MR_Box) (*IntExplicitFIMSpecs_19)), &conv9_IntFIMSpecs_84);
    IntFIMSpecs_84 = ((MR_Word) (conv9_IntFIMSpecs_84));
    mercury__set__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[5]), Var_120, ImpImplicitFIMLangs_83, ((MR_Box) (*ImpExplicitFIMSpecs_20)), &conv10_ImpFIMSpecs0_85);
    ImpFIMSpecs0_85 = ((MR_Word) (conv10_ImpFIMSpecs0_85));
    mercury__set__difference_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ImpFIMSpecs0_85, IntFIMSpecs_84, &ImpFIMSpecs_86);
    IntTypeDefnMap_87 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(*IntTypeDefns_21);
    IntInstDefnMap_88 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(*IntInstDefns_22);
    IntModeDefnMap_89 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(*IntModeDefns_23);
    IntForeignEnumMap_90 = parse_tree__convert_parse_tree__type_ctor_foreign_enum_items_to_map_1_f_0(IntForeignEnums_69);
    OrigImpTypeDefnMap_93 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(OrigImpTypeDefns_72);
    ImpTypeDefnMap_94 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(*ImpTypeDefns_26);
    ImpForeignEnumMap_95 = parse_tree__convert_parse_tree__type_ctor_foreign_enum_items_to_map_1_f_0(ImpForeignEnums_82);
    parse_tree__check_parse_tree_type_defns__create_type_ctor_checked_map_9_p_0((MR_Integer) 1, ModuleName_30, IntTypeDefnMap_87, OrigImpTypeDefnMap_93, IntForeignEnumMap_90, ImpForeignEnumMap_95, TypeCtorCheckedMap_27, STATE_VARIABLE_Specs_0_97, STATE_VARIABLE_Specs_98);
    IntTypeRepnMap_91 = parse_tree__convert_parse_tree__type_ctor_repn_items_to_map_1_f_0((MR_Word) ((MR_Unsigned) 0U));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (23 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt1_28 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_30));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_31));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (*IntIncls_17));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ImpIncls_46));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (*IntImportsUses_18));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ImpImportsUses_79));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (IntFIMSpecs_84));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ImpFIMSpecs_86));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (IntTypeDefnMap_87));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (IntInstDefnMap_88));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (IntModeDefnMap_89));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (*IntTypeClasses_24));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (*IntInstances_25));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (IntPredDecls_67));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (IntModeDecls_68));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (IntForeignEnumMap_90));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (IntPragmas_70));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (IntPromises_71));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (IntTypeRepnMap_91));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (ImpTypeDefnMap_94));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (ImpForeignEnumMap_95));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (ImpTypeClasses_73));
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
    mercury__map__foldl3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[6]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), Var_16, ImpTypesMap_7, ((MR_Box) (Var_17)), &conv5_AbsExpEqvLhsTypeCtors_11, ((MR_Box) (Var_18)), &conv4_AbsExpEnumTypeCtors_12, ((MR_Box) (Var_19)), &conv3_DirectDummyTypeCtors_13);
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
    mercury__set__fold3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), Var_20, AbsExpEqvLhsTypeCtors_11, ((MR_Box) (Var_21)), &conv11_AbsExpEqvRhsTypeCtors_14, ((MR_Box) (Var_22)), &conv10_DuArgTypeCtors_15, ((MR_Box) (Var_23)), &conv9_ModulesNeededByTypeDefns_10);
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

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_51_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_FIMSpecs_12;

    parse_tree__comp_unit_interface__add_fim_to_specs_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_FIMSpecs_12);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_FIMSpecs_12));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_51_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__3_3;

    parse_tree__prog_item__add_included_module_name_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_51_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_FIMSpecs_12;

    parse_tree__comp_unit_interface__add_fim_to_specs_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_FIMSpecs_12);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_FIMSpecs_12));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_51_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    parse_tree__prog_item__add_included_module_name_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_51_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntIncls_0_2,
  MR_Word * STATE_VARIABLE_IntIncls_3,
  MR_Word STATE_VARIABLE_ImpIncls_0_4,
  MR_Word * STATE_VARIABLE_ImpIncls_5,
  MR_Word STATE_VARIABLE_IntImportsUses_0_6,
  MR_Word * STATE_VARIABLE_IntImportsUses_7,
  MR_Word STATE_VARIABLE_ImpImportsUses_0_8,
  MR_Word * STATE_VARIABLE_ImpImportsUses_9,
  MR_Word STATE_VARIABLE_IntExplicitFIMSpecs_0_10,
  MR_Word * STATE_VARIABLE_IntExplicitFIMSpecs_11,
  MR_Word STATE_VARIABLE_ImpExplicitFIMSpecs_0_12,
  MR_Word * STATE_VARIABLE_ImpExplicitFIMSpecs_13,
  MR_Word STATE_VARIABLE_IntImplicitFIMLangs_0_14,
  MR_Word * STATE_VARIABLE_IntImplicitFIMLangs_15,
  MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_0_16,
  MR_Word * STATE_VARIABLE_ImpImplicitFIMLangs_17,
  MR_Word STATE_VARIABLE_IntTypesMap_0_18,
  MR_Word * STATE_VARIABLE_IntTypesMap_19,
  MR_Word STATE_VARIABLE_IntTypeDefnsCord_0_20,
  MR_Word * STATE_VARIABLE_IntTypeDefnsCord_21,
  MR_Word STATE_VARIABLE_IntInstDefnsCord_0_22,
  MR_Word * STATE_VARIABLE_IntInstDefnsCord_23,
  MR_Word STATE_VARIABLE_IntModeDefnsCord_0_24,
  MR_Word * STATE_VARIABLE_IntModeDefnsCord_25,
  MR_Word STATE_VARIABLE_IntTypeClassesCord_0_26,
  MR_Word * STATE_VARIABLE_IntTypeClassesCord_27,
  MR_Word STATE_VARIABLE_IntInstancesCord_0_28,
  MR_Word * STATE_VARIABLE_IntInstancesCord_29,
  MR_Word STATE_VARIABLE_IntPredDeclsCord_0_30,
  MR_Word * STATE_VARIABLE_IntPredDeclsCord_31,
  MR_Word STATE_VARIABLE_IntModeDeclsCord_0_32,
  MR_Word * STATE_VARIABLE_IntModeDeclsCord_33,
  MR_Word STATE_VARIABLE_IntForeignEnumsCord_0_34,
  MR_Word * STATE_VARIABLE_IntForeignEnumsCord_35,
  MR_Word STATE_VARIABLE_IntPragmasCord_0_36,
  MR_Word * STATE_VARIABLE_IntPragmasCord_37,
  MR_Word STATE_VARIABLE_IntPromisesCord_0_38,
  MR_Word * STATE_VARIABLE_IntPromisesCord_39,
  MR_Word STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_40,
  MR_Word * STATE_VARIABLE_IntModulesNeededByTypeClassDefns_41,
  MR_Word STATE_VARIABLE_ImpTypesMap_0_42,
  MR_Word * STATE_VARIABLE_ImpTypesMap_43,
  MR_Word STATE_VARIABLE_OrigImpTypeDefnsCord_0_44,
  MR_Word * STATE_VARIABLE_OrigImpTypeDefnsCord_45,
  MR_Word STATE_VARIABLE_ImpTypeClassesCord_0_46,
  MR_Word * STATE_VARIABLE_ImpTypeClassesCord_47,
  MR_Word STATE_VARIABLE_ImpForeignEnumsCord_0_48,
  MR_Word * STATE_VARIABLE_ImpForeignEnumsCord_49,
  MR_Word STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_50,
  MR_Word * STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_51)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_51 = STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_50;
      *STATE_VARIABLE_ImpForeignEnumsCord_49 = STATE_VARIABLE_ImpForeignEnumsCord_0_48;
      *STATE_VARIABLE_ImpTypeClassesCord_47 = STATE_VARIABLE_ImpTypeClassesCord_0_46;
      *STATE_VARIABLE_OrigImpTypeDefnsCord_45 = STATE_VARIABLE_OrigImpTypeDefnsCord_0_44;
      *STATE_VARIABLE_ImpTypesMap_43 = STATE_VARIABLE_ImpTypesMap_0_42;
      *STATE_VARIABLE_IntModulesNeededByTypeClassDefns_41 = STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_40;
      *STATE_VARIABLE_IntPromisesCord_39 = STATE_VARIABLE_IntPromisesCord_0_38;
      *STATE_VARIABLE_IntPragmasCord_37 = STATE_VARIABLE_IntPragmasCord_0_36;
      *STATE_VARIABLE_IntForeignEnumsCord_35 = STATE_VARIABLE_IntForeignEnumsCord_0_34;
      *STATE_VARIABLE_IntModeDeclsCord_33 = STATE_VARIABLE_IntModeDeclsCord_0_32;
      *STATE_VARIABLE_IntPredDeclsCord_31 = STATE_VARIABLE_IntPredDeclsCord_0_30;
      *STATE_VARIABLE_IntInstancesCord_29 = STATE_VARIABLE_IntInstancesCord_0_28;
      *STATE_VARIABLE_IntTypeClassesCord_27 = STATE_VARIABLE_IntTypeClassesCord_0_26;
      *STATE_VARIABLE_IntModeDefnsCord_25 = STATE_VARIABLE_IntModeDefnsCord_0_24;
      *STATE_VARIABLE_IntInstDefnsCord_23 = STATE_VARIABLE_IntInstDefnsCord_0_22;
      *STATE_VARIABLE_IntTypeDefnsCord_21 = STATE_VARIABLE_IntTypeDefnsCord_0_20;
      *STATE_VARIABLE_IntTypesMap_19 = STATE_VARIABLE_IntTypesMap_0_18;
      *STATE_VARIABLE_ImpImplicitFIMLangs_17 = STATE_VARIABLE_ImpImplicitFIMLangs_0_16;
      *STATE_VARIABLE_IntImplicitFIMLangs_15 = STATE_VARIABLE_IntImplicitFIMLangs_0_14;
      *STATE_VARIABLE_ImpExplicitFIMSpecs_13 = STATE_VARIABLE_ImpExplicitFIMSpecs_0_12;
      *STATE_VARIABLE_IntExplicitFIMSpecs_11 = STATE_VARIABLE_IntExplicitFIMSpecs_0_10;
      *STATE_VARIABLE_ImpImportsUses_9 = STATE_VARIABLE_ImpImportsUses_0_8;
      *STATE_VARIABLE_IntImportsUses_7 = STATE_VARIABLE_IntImportsUses_0_6;
      *STATE_VARIABLE_ImpIncls_5 = STATE_VARIABLE_ImpIncls_0_4;
      *STATE_VARIABLE_IntIncls_3 = STATE_VARIABLE_IntIncls_0_2;
    }
    else
    {
      MR_Word SrcItemBlock_127 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word SrcItemBlocks_128 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word SrcSection_155 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_127, (MR_Integer) 1))));
      MR_Word Incls_156 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_127, (MR_Integer) 2))));
      MR_Word Avails_157 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_127, (MR_Integer) 3))));
      MR_Word FIMs_158 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_127, (MR_Integer) 4))));
      MR_Word Items_159 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_127, (MR_Integer) 5))));
      MR_Word STATE_VARIABLE_ImpIncls_213_213;
      MR_Word STATE_VARIABLE_ImpImportsUses_214_214;
      MR_Word STATE_VARIABLE_ImpExplicitFIMSpecs_216_216;
      MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_217_217;
      MR_Word STATE_VARIABLE_ImpTypesMap_218_218;
      MR_Word STATE_VARIABLE_OrigImpTypeDefnsCord_219_219;
      MR_Word STATE_VARIABLE_ImpTypeClassesCord_220_220;
      MR_Word STATE_VARIABLE_ImpForeignEnumsCord_221_221;
      MR_Word STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_222_222;
      MR_Word STATE_VARIABLE_IntIncls_224_224;
      MR_Word STATE_VARIABLE_IntImportsUses_225_225;
      MR_Word STATE_VARIABLE_IntExplicitFIMSpecs_227_227;
      MR_Word STATE_VARIABLE_IntImplicitFIMLangs_228_228;
      MR_Word STATE_VARIABLE_IntTypesMap_229_229;
      MR_Word STATE_VARIABLE_IntTypeDefnsCord_230_230;
      MR_Word STATE_VARIABLE_IntInstDefnsCord_231_231;
      MR_Word STATE_VARIABLE_IntModeDefnsCord_232_232;
      MR_Word STATE_VARIABLE_IntTypeClassesCord_233_233;
      MR_Word STATE_VARIABLE_IntInstancesCord_234_234;
      MR_Word STATE_VARIABLE_IntPredDeclsCord_235_235;
      MR_Word STATE_VARIABLE_IntModeDeclsCord_236_236;
      MR_Word STATE_VARIABLE_IntForeignEnumsCord_237_237;
      MR_Word STATE_VARIABLE_IntPragmasCord_238_238;
      MR_Word STATE_VARIABLE_IntPromisesCord_239_239;
      MR_Word STATE_VARIABLE_IntModulesNeededByTypeClassDefns_240_240;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_IntIncls_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ImpIncls_0_4;
      MR_Word next_value_of_STATE_VARIABLE_IntImportsUses_0_6;
      MR_Word next_value_of_STATE_VARIABLE_ImpImportsUses_0_8;
      MR_Word next_value_of_STATE_VARIABLE_IntExplicitFIMSpecs_0_10;
      MR_Word next_value_of_STATE_VARIABLE_ImpExplicitFIMSpecs_0_12;
      MR_Word next_value_of_STATE_VARIABLE_IntImplicitFIMLangs_0_14;
      MR_Word next_value_of_STATE_VARIABLE_ImpImplicitFIMLangs_0_16;
      MR_Word next_value_of_STATE_VARIABLE_IntTypesMap_0_18;
      MR_Word next_value_of_STATE_VARIABLE_IntTypeDefnsCord_0_20;
      MR_Word next_value_of_STATE_VARIABLE_IntInstDefnsCord_0_22;
      MR_Word next_value_of_STATE_VARIABLE_IntModeDefnsCord_0_24;
      MR_Word next_value_of_STATE_VARIABLE_IntTypeClassesCord_0_26;
      MR_Word next_value_of_STATE_VARIABLE_IntInstancesCord_0_28;
      MR_Word next_value_of_STATE_VARIABLE_IntPredDeclsCord_0_30;
      MR_Word next_value_of_STATE_VARIABLE_IntModeDeclsCord_0_32;
      MR_Word next_value_of_STATE_VARIABLE_IntForeignEnumsCord_0_34;
      MR_Word next_value_of_STATE_VARIABLE_IntPragmasCord_0_36;
      MR_Word next_value_of_STATE_VARIABLE_IntPromisesCord_0_38;
      MR_Word next_value_of_STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_40;
      MR_Word next_value_of_STATE_VARIABLE_ImpTypesMap_0_42;
      MR_Word next_value_of_STATE_VARIABLE_OrigImpTypeDefnsCord_0_44;
      MR_Word next_value_of_STATE_VARIABLE_ImpTypeClassesCord_0_46;
      MR_Word next_value_of_STATE_VARIABLE_ImpForeignEnumsCord_0_48;
      MR_Word next_value_of_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_50;

      switch (SrcSection_155) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.get_interface_int1_item_blocks_loop\'/51", (MR_String) "sms_impl_but_exported_to_submodules");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box conv1_STATE_VARIABLE_ImpIncls_213_213;
            MR_Box conv3_STATE_VARIABLE_ImpExplicitFIMSpecs_216_216;

            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[17]), Incls_156, ((MR_Box) (STATE_VARIABLE_ImpIncls_0_4)), &conv1_STATE_VARIABLE_ImpIncls_213_213);
            STATE_VARIABLE_ImpIncls_213_213 = ((MR_Word) (conv1_STATE_VARIABLE_ImpIncls_213_213));
            parse_tree__comp_unit_interface__get_interface_int1_avails_loop_3_p_0(Avails_157, STATE_VARIABLE_ImpImportsUses_0_8, &STATE_VARIABLE_ImpImportsUses_214_214);
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[5]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[18]), FIMs_158, ((MR_Box) (STATE_VARIABLE_ImpExplicitFIMSpecs_0_12)), &conv3_STATE_VARIABLE_ImpExplicitFIMSpecs_216_216);
            STATE_VARIABLE_ImpExplicitFIMSpecs_216_216 = ((MR_Word) (conv3_STATE_VARIABLE_ImpExplicitFIMSpecs_216_216));
            parse_tree__comp_unit_interface__get_interface_int1_items_loop_imp_13_p_0(Items_159, STATE_VARIABLE_ImpImplicitFIMLangs_0_16, &STATE_VARIABLE_ImpImplicitFIMLangs_217_217, STATE_VARIABLE_ImpTypesMap_0_42, &STATE_VARIABLE_ImpTypesMap_218_218, STATE_VARIABLE_OrigImpTypeDefnsCord_0_44, &STATE_VARIABLE_OrigImpTypeDefnsCord_219_219, STATE_VARIABLE_ImpTypeClassesCord_0_46, &STATE_VARIABLE_ImpTypeClassesCord_220_220, STATE_VARIABLE_ImpForeignEnumsCord_0_48, &STATE_VARIABLE_ImpForeignEnumsCord_221_221, STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_50, &STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_222_222);
            STATE_VARIABLE_IntIncls_224_224 = STATE_VARIABLE_IntIncls_0_2;
            STATE_VARIABLE_IntImportsUses_225_225 = STATE_VARIABLE_IntImportsUses_0_6;
            STATE_VARIABLE_IntExplicitFIMSpecs_227_227 = STATE_VARIABLE_IntExplicitFIMSpecs_0_10;
            STATE_VARIABLE_IntImplicitFIMLangs_228_228 = STATE_VARIABLE_IntImplicitFIMLangs_0_14;
            STATE_VARIABLE_IntTypesMap_229_229 = STATE_VARIABLE_IntTypesMap_0_18;
            STATE_VARIABLE_IntTypeDefnsCord_230_230 = STATE_VARIABLE_IntTypeDefnsCord_0_20;
            STATE_VARIABLE_IntInstDefnsCord_231_231 = STATE_VARIABLE_IntInstDefnsCord_0_22;
            STATE_VARIABLE_IntModeDefnsCord_232_232 = STATE_VARIABLE_IntModeDefnsCord_0_24;
            STATE_VARIABLE_IntTypeClassesCord_233_233 = STATE_VARIABLE_IntTypeClassesCord_0_26;
            STATE_VARIABLE_IntInstancesCord_234_234 = STATE_VARIABLE_IntInstancesCord_0_28;
            STATE_VARIABLE_IntPredDeclsCord_235_235 = STATE_VARIABLE_IntPredDeclsCord_0_30;
            STATE_VARIABLE_IntModeDeclsCord_236_236 = STATE_VARIABLE_IntModeDeclsCord_0_32;
            STATE_VARIABLE_IntForeignEnumsCord_237_237 = STATE_VARIABLE_IntForeignEnumsCord_0_34;
            STATE_VARIABLE_IntPragmasCord_238_238 = STATE_VARIABLE_IntPragmasCord_0_36;
            STATE_VARIABLE_IntPromisesCord_239_239 = STATE_VARIABLE_IntPromisesCord_0_38;
            STATE_VARIABLE_IntModulesNeededByTypeClassDefns_240_240 = STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_40;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Box conv5_STATE_VARIABLE_IntIncls_224_224;
            MR_Box conv7_STATE_VARIABLE_IntExplicitFIMSpecs_227_227;

            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[19]), Incls_156, ((MR_Box) (STATE_VARIABLE_IntIncls_0_2)), &conv5_STATE_VARIABLE_IntIncls_224_224);
            STATE_VARIABLE_IntIncls_224_224 = ((MR_Word) (conv5_STATE_VARIABLE_IntIncls_224_224));
            parse_tree__comp_unit_interface__get_interface_int1_avails_loop_3_p_0(Avails_157, STATE_VARIABLE_IntImportsUses_0_6, &STATE_VARIABLE_IntImportsUses_225_225);
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[5]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[20]), FIMs_158, ((MR_Box) (STATE_VARIABLE_IntExplicitFIMSpecs_0_10)), &conv7_STATE_VARIABLE_IntExplicitFIMSpecs_227_227);
            STATE_VARIABLE_IntExplicitFIMSpecs_227_227 = ((MR_Word) (conv7_STATE_VARIABLE_IntExplicitFIMSpecs_227_227));
            parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_27_p_0(Items_159, STATE_VARIABLE_IntImplicitFIMLangs_0_14, &STATE_VARIABLE_IntImplicitFIMLangs_228_228, STATE_VARIABLE_IntTypesMap_0_18, &STATE_VARIABLE_IntTypesMap_229_229, STATE_VARIABLE_IntTypeDefnsCord_0_20, &STATE_VARIABLE_IntTypeDefnsCord_230_230, STATE_VARIABLE_IntInstDefnsCord_0_22, &STATE_VARIABLE_IntInstDefnsCord_231_231, STATE_VARIABLE_IntModeDefnsCord_0_24, &STATE_VARIABLE_IntModeDefnsCord_232_232, STATE_VARIABLE_IntTypeClassesCord_0_26, &STATE_VARIABLE_IntTypeClassesCord_233_233, STATE_VARIABLE_IntInstancesCord_0_28, &STATE_VARIABLE_IntInstancesCord_234_234, STATE_VARIABLE_IntPredDeclsCord_0_30, &STATE_VARIABLE_IntPredDeclsCord_235_235, STATE_VARIABLE_IntModeDeclsCord_0_32, &STATE_VARIABLE_IntModeDeclsCord_236_236, STATE_VARIABLE_IntForeignEnumsCord_0_34, &STATE_VARIABLE_IntForeignEnumsCord_237_237, STATE_VARIABLE_IntPragmasCord_0_36, &STATE_VARIABLE_IntPragmasCord_238_238, STATE_VARIABLE_IntPromisesCord_0_38, &STATE_VARIABLE_IntPromisesCord_239_239, STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_40, &STATE_VARIABLE_IntModulesNeededByTypeClassDefns_240_240);
            STATE_VARIABLE_ImpIncls_213_213 = STATE_VARIABLE_ImpIncls_0_4;
            STATE_VARIABLE_ImpImportsUses_214_214 = STATE_VARIABLE_ImpImportsUses_0_8;
            STATE_VARIABLE_ImpExplicitFIMSpecs_216_216 = STATE_VARIABLE_ImpExplicitFIMSpecs_0_12;
            STATE_VARIABLE_ImpImplicitFIMLangs_217_217 = STATE_VARIABLE_ImpImplicitFIMLangs_0_16;
            STATE_VARIABLE_ImpTypesMap_218_218 = STATE_VARIABLE_ImpTypesMap_0_42;
            STATE_VARIABLE_OrigImpTypeDefnsCord_219_219 = STATE_VARIABLE_OrigImpTypeDefnsCord_0_44;
            STATE_VARIABLE_ImpTypeClassesCord_220_220 = STATE_VARIABLE_ImpTypeClassesCord_0_46;
            STATE_VARIABLE_ImpForeignEnumsCord_221_221 = STATE_VARIABLE_ImpForeignEnumsCord_0_48;
            STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_222_222 = STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_50;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = SrcItemBlocks_128;
      next_value_of_STATE_VARIABLE_IntIncls_0_2 = STATE_VARIABLE_IntIncls_224_224;
      next_value_of_STATE_VARIABLE_ImpIncls_0_4 = STATE_VARIABLE_ImpIncls_213_213;
      next_value_of_STATE_VARIABLE_IntImportsUses_0_6 = STATE_VARIABLE_IntImportsUses_225_225;
      next_value_of_STATE_VARIABLE_ImpImportsUses_0_8 = STATE_VARIABLE_ImpImportsUses_214_214;
      next_value_of_STATE_VARIABLE_IntExplicitFIMSpecs_0_10 = STATE_VARIABLE_IntExplicitFIMSpecs_227_227;
      next_value_of_STATE_VARIABLE_ImpExplicitFIMSpecs_0_12 = STATE_VARIABLE_ImpExplicitFIMSpecs_216_216;
      next_value_of_STATE_VARIABLE_IntImplicitFIMLangs_0_14 = STATE_VARIABLE_IntImplicitFIMLangs_228_228;
      next_value_of_STATE_VARIABLE_ImpImplicitFIMLangs_0_16 = STATE_VARIABLE_ImpImplicitFIMLangs_217_217;
      next_value_of_STATE_VARIABLE_IntTypesMap_0_18 = STATE_VARIABLE_IntTypesMap_229_229;
      next_value_of_STATE_VARIABLE_IntTypeDefnsCord_0_20 = STATE_VARIABLE_IntTypeDefnsCord_230_230;
      next_value_of_STATE_VARIABLE_IntInstDefnsCord_0_22 = STATE_VARIABLE_IntInstDefnsCord_231_231;
      next_value_of_STATE_VARIABLE_IntModeDefnsCord_0_24 = STATE_VARIABLE_IntModeDefnsCord_232_232;
      next_value_of_STATE_VARIABLE_IntTypeClassesCord_0_26 = STATE_VARIABLE_IntTypeClassesCord_233_233;
      next_value_of_STATE_VARIABLE_IntInstancesCord_0_28 = STATE_VARIABLE_IntInstancesCord_234_234;
      next_value_of_STATE_VARIABLE_IntPredDeclsCord_0_30 = STATE_VARIABLE_IntPredDeclsCord_235_235;
      next_value_of_STATE_VARIABLE_IntModeDeclsCord_0_32 = STATE_VARIABLE_IntModeDeclsCord_236_236;
      next_value_of_STATE_VARIABLE_IntForeignEnumsCord_0_34 = STATE_VARIABLE_IntForeignEnumsCord_237_237;
      next_value_of_STATE_VARIABLE_IntPragmasCord_0_36 = STATE_VARIABLE_IntPragmasCord_238_238;
      next_value_of_STATE_VARIABLE_IntPromisesCord_0_38 = STATE_VARIABLE_IntPromisesCord_239_239;
      next_value_of_STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_40 = STATE_VARIABLE_IntModulesNeededByTypeClassDefns_240_240;
      next_value_of_STATE_VARIABLE_ImpTypesMap_0_42 = STATE_VARIABLE_ImpTypesMap_218_218;
      next_value_of_STATE_VARIABLE_OrigImpTypeDefnsCord_0_44 = STATE_VARIABLE_OrigImpTypeDefnsCord_219_219;
      next_value_of_STATE_VARIABLE_ImpTypeClassesCord_0_46 = STATE_VARIABLE_ImpTypeClassesCord_220_220;
      next_value_of_STATE_VARIABLE_ImpForeignEnumsCord_0_48 = STATE_VARIABLE_ImpForeignEnumsCord_221_221;
      next_value_of_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_50 = STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_222_222;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_IntIncls_0_2 = next_value_of_STATE_VARIABLE_IntIncls_0_2;
      STATE_VARIABLE_ImpIncls_0_4 = next_value_of_STATE_VARIABLE_ImpIncls_0_4;
      STATE_VARIABLE_IntImportsUses_0_6 = next_value_of_STATE_VARIABLE_IntImportsUses_0_6;
      STATE_VARIABLE_ImpImportsUses_0_8 = next_value_of_STATE_VARIABLE_ImpImportsUses_0_8;
      STATE_VARIABLE_IntExplicitFIMSpecs_0_10 = next_value_of_STATE_VARIABLE_IntExplicitFIMSpecs_0_10;
      STATE_VARIABLE_ImpExplicitFIMSpecs_0_12 = next_value_of_STATE_VARIABLE_ImpExplicitFIMSpecs_0_12;
      STATE_VARIABLE_IntImplicitFIMLangs_0_14 = next_value_of_STATE_VARIABLE_IntImplicitFIMLangs_0_14;
      STATE_VARIABLE_ImpImplicitFIMLangs_0_16 = next_value_of_STATE_VARIABLE_ImpImplicitFIMLangs_0_16;
      STATE_VARIABLE_IntTypesMap_0_18 = next_value_of_STATE_VARIABLE_IntTypesMap_0_18;
      STATE_VARIABLE_IntTypeDefnsCord_0_20 = next_value_of_STATE_VARIABLE_IntTypeDefnsCord_0_20;
      STATE_VARIABLE_IntInstDefnsCord_0_22 = next_value_of_STATE_VARIABLE_IntInstDefnsCord_0_22;
      STATE_VARIABLE_IntModeDefnsCord_0_24 = next_value_of_STATE_VARIABLE_IntModeDefnsCord_0_24;
      STATE_VARIABLE_IntTypeClassesCord_0_26 = next_value_of_STATE_VARIABLE_IntTypeClassesCord_0_26;
      STATE_VARIABLE_IntInstancesCord_0_28 = next_value_of_STATE_VARIABLE_IntInstancesCord_0_28;
      STATE_VARIABLE_IntPredDeclsCord_0_30 = next_value_of_STATE_VARIABLE_IntPredDeclsCord_0_30;
      STATE_VARIABLE_IntModeDeclsCord_0_32 = next_value_of_STATE_VARIABLE_IntModeDeclsCord_0_32;
      STATE_VARIABLE_IntForeignEnumsCord_0_34 = next_value_of_STATE_VARIABLE_IntForeignEnumsCord_0_34;
      STATE_VARIABLE_IntPragmasCord_0_36 = next_value_of_STATE_VARIABLE_IntPragmasCord_0_36;
      STATE_VARIABLE_IntPromisesCord_0_38 = next_value_of_STATE_VARIABLE_IntPromisesCord_0_38;
      STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_40 = next_value_of_STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_40;
      STATE_VARIABLE_ImpTypesMap_0_42 = next_value_of_STATE_VARIABLE_ImpTypesMap_0_42;
      STATE_VARIABLE_OrigImpTypeDefnsCord_0_44 = next_value_of_STATE_VARIABLE_OrigImpTypeDefnsCord_0_44;
      STATE_VARIABLE_ImpTypeClassesCord_0_46 = next_value_of_STATE_VARIABLE_ImpTypeClassesCord_0_46;
      STATE_VARIABLE_ImpForeignEnumsCord_0_48 = next_value_of_STATE_VARIABLE_ImpForeignEnumsCord_0_48;
      STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_50 = next_value_of_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_50;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_imp_13_p_0_1(
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
parse_tree__comp_unit_interface__get_interface_int1_items_loop_imp_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_0_2,
  MR_Word * STATE_VARIABLE_ImpImplicitFIMLangs_3,
  MR_Word STATE_VARIABLE_ImpTypesMap_0_4,
  MR_Word * STATE_VARIABLE_ImpTypesMap_5,
  MR_Word STATE_VARIABLE_OrigImpTypeDefnsCord_0_6,
  MR_Word * STATE_VARIABLE_OrigImpTypeDefnsCord_7,
  MR_Word STATE_VARIABLE_ImpTypeClassesCord_0_8,
  MR_Word * STATE_VARIABLE_ImpTypeClassesCord_9,
  MR_Word STATE_VARIABLE_ImpForeignEnumsCord_0_10,
  MR_Word * STATE_VARIABLE_ImpForeignEnumsCord_11,
  MR_Word STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_12,
  MR_Word * STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_13 = STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_12;
      *STATE_VARIABLE_ImpForeignEnumsCord_11 = STATE_VARIABLE_ImpForeignEnumsCord_0_10;
      *STATE_VARIABLE_ImpTypeClassesCord_9 = STATE_VARIABLE_ImpTypeClassesCord_0_8;
      *STATE_VARIABLE_OrigImpTypeDefnsCord_7 = STATE_VARIABLE_OrigImpTypeDefnsCord_0_6;
      *STATE_VARIABLE_ImpTypesMap_5 = STATE_VARIABLE_ImpTypesMap_0_4;
      *STATE_VARIABLE_ImpImplicitFIMLangs_3 = STATE_VARIABLE_ImpImplicitFIMLangs_0_2;
    }
    else
    {
      MR_Word Item_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ImpForeignEnumsCord_90_90;
      MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_91_91;
      MR_Word STATE_VARIABLE_ImpTypeClassesCord_92_92;
      MR_Word STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_94_94;
      MR_Word STATE_VARIABLE_ImpTypesMap_97_97;
      MR_Word STATE_VARIABLE_OrigImpTypeDefnsCord_98_98;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImpImplicitFIMLangs_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ImpTypesMap_0_4;
      MR_Word next_value_of_STATE_VARIABLE_OrigImpTypeDefnsCord_0_6;
      MR_Word next_value_of_STATE_VARIABLE_ImpTypeClassesCord_0_8;
      MR_Word next_value_of_STATE_VARIABLE_ImpForeignEnumsCord_0_10;
      MR_Word next_value_of_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_12;

      switch (MR_tag((MR_Word) Item_32)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.get_interface_int1_items_loop_imp\'/13", (MR_String) "generate_pre_grab_pre_qual_items_imp should\'ve deleted imp item");
            return;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_32, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 3:
            case (MR_Integer) 4:
            case (MR_Integer) 6:
            case (MR_Integer) 7:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
            case (MR_Integer) 10:
            case (MR_Integer) 12:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.get_interface_int1_items_loop_imp\'/13", (MR_String) "generate_pre_grab_pre_qual_items_imp should\'ve deleted imp item");
                return;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ItemForeignEnum_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_32, (MR_Integer) 1))));
                MR_Word Lang_58;

                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ((MR_Box) (ItemForeignEnum_57)), STATE_VARIABLE_ImpForeignEnumsCord_0_10, &STATE_VARIABLE_ImpForeignEnumsCord_90_90);
                Lang_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemForeignEnum_57, (MR_Integer) 0))) & (MR_Integer) 3);
                mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_58)), STATE_VARIABLE_ImpImplicitFIMLangs_0_2, &STATE_VARIABLE_ImpImplicitFIMLangs_91_91);
                STATE_VARIABLE_ImpTypesMap_97_97 = STATE_VARIABLE_ImpTypesMap_0_4;
                STATE_VARIABLE_OrigImpTypeDefnsCord_98_98 = STATE_VARIABLE_OrigImpTypeDefnsCord_0_6;
                STATE_VARIABLE_ImpTypeClassesCord_92_92 = STATE_VARIABLE_ImpTypeClassesCord_0_8;
                STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_94_94 = STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_12;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemTypeClass_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_32, (MR_Integer) 1))));
                MR_Word Constraints_56;
                MR_Box conv1_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_94_94;

                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ((MR_Box) (ItemTypeClass_55)), STATE_VARIABLE_ImpTypeClassesCord_0_8, &STATE_VARIABLE_ImpTypeClassesCord_92_92);
                Constraints_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_55, (MR_Integer) 2))));
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[16]), Constraints_56, ((MR_Box) (STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_12)), &conv1_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_94_94);
                STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_94_94 = ((MR_Word) (conv1_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_94_94));
                STATE_VARIABLE_ImpImplicitFIMLangs_91_91 = STATE_VARIABLE_ImpImplicitFIMLangs_0_2;
                STATE_VARIABLE_ImpTypesMap_97_97 = STATE_VARIABLE_ImpTypesMap_0_4;
                STATE_VARIABLE_OrigImpTypeDefnsCord_98_98 = STATE_VARIABLE_OrigImpTypeDefnsCord_0_6;
                STATE_VARIABLE_ImpForeignEnumsCord_90_90 = STATE_VARIABLE_ImpForeignEnumsCord_0_10;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemTypeDefn_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_32, (MR_Integer) 1))));
                MR_Word Name_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_40, (MR_Integer) 0))));
                MR_Word TypeParams_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_40, (MR_Integer) 1))));
                MR_Word TypeDefn_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_40, (MR_Integer) 2))));
                MR_Word TypeCtor_47;
                MR_Word ItemTypeDefn1_50;
                MR_Integer Var_95;

                Var_95 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[9]), TypeParams_42);
                {
                  TypeCtor_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), TypeCtor_47, 0) = ((MR_Box) (Name_41));
                  MR_hl_field(MR_mktag(0), TypeCtor_47, 1) = ((MR_Box) (Var_95));
                }
                switch (MR_tag((MR_Word) TypeDefn_43)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    ItemTypeDefn1_50 = ItemTypeDefn_40;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_40, (MR_Integer) 0))));
                      MR_Word Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_40, (MR_Integer) 1))));
                      MR_Word Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_40, (MR_Integer) 3))));
                      MR_Word Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_40, (MR_Integer) 4))));
                      MR_Integer Var_110 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_40, (MR_Integer) 5))));

                      {
                        ItemTypeDefn1_50 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ItemTypeDefn1_50, 0) = ((MR_Box) (Var_105));
                        MR_hl_field(MR_mktag(0), ItemTypeDefn1_50, 1) = ((MR_Box) (Var_106));
                        MR_hl_field(MR_mktag(0), ItemTypeDefn1_50, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__comp_unit_interface_scalar_common_1[13])));
                        MR_hl_field(MR_mktag(0), ItemTypeDefn1_50, 3) = ((MR_Box) (Var_108));
                        MR_hl_field(MR_mktag(0), ItemTypeDefn1_50, 4) = ((MR_Box) (Var_109));
                        MR_hl_field(MR_mktag(0), ItemTypeDefn1_50, 5) = ((MR_Box) (Var_110));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    ItemTypeDefn1_50 = ItemTypeDefn_40;
                    break;
                  case (MR_Integer) 3:
                    ItemTypeDefn1_50 = ItemTypeDefn_40;
                    break;
                }
                mercury__multi_map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), ((MR_Box) (TypeCtor_47)), ((MR_Box) (ItemTypeDefn1_50)), STATE_VARIABLE_ImpTypesMap_0_4, &STATE_VARIABLE_ImpTypesMap_97_97);
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), ((MR_Box) (ItemTypeDefn_40)), STATE_VARIABLE_OrigImpTypeDefnsCord_0_6, &STATE_VARIABLE_OrigImpTypeDefnsCord_98_98);
                STATE_VARIABLE_ImpImplicitFIMLangs_91_91 = STATE_VARIABLE_ImpImplicitFIMLangs_0_2;
                STATE_VARIABLE_ImpTypeClassesCord_92_92 = STATE_VARIABLE_ImpTypeClassesCord_0_8;
                STATE_VARIABLE_ImpForeignEnumsCord_90_90 = STATE_VARIABLE_ImpForeignEnumsCord_0_10;
                STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_94_94 = STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_12;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_33;
      next_value_of_STATE_VARIABLE_ImpImplicitFIMLangs_0_2 = STATE_VARIABLE_ImpImplicitFIMLangs_91_91;
      next_value_of_STATE_VARIABLE_ImpTypesMap_0_4 = STATE_VARIABLE_ImpTypesMap_97_97;
      next_value_of_STATE_VARIABLE_OrigImpTypeDefnsCord_0_6 = STATE_VARIABLE_OrigImpTypeDefnsCord_98_98;
      next_value_of_STATE_VARIABLE_ImpTypeClassesCord_0_8 = STATE_VARIABLE_ImpTypeClassesCord_92_92;
      next_value_of_STATE_VARIABLE_ImpForeignEnumsCord_0_10 = STATE_VARIABLE_ImpForeignEnumsCord_90_90;
      next_value_of_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_12 = STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_94_94;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ImpImplicitFIMLangs_0_2 = next_value_of_STATE_VARIABLE_ImpImplicitFIMLangs_0_2;
      STATE_VARIABLE_ImpTypesMap_0_4 = next_value_of_STATE_VARIABLE_ImpTypesMap_0_4;
      STATE_VARIABLE_OrigImpTypeDefnsCord_0_6 = next_value_of_STATE_VARIABLE_OrigImpTypeDefnsCord_0_6;
      STATE_VARIABLE_ImpTypeClassesCord_0_8 = next_value_of_STATE_VARIABLE_ImpTypeClassesCord_0_8;
      STATE_VARIABLE_ImpForeignEnumsCord_0_10 = next_value_of_STATE_VARIABLE_ImpForeignEnumsCord_0_10;
      STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_12 = next_value_of_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_27_p_0_2(
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

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_27_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__comp_unit_interface__IntroducedFrom__pred__get_interface_int1_items_loop_int__1337__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_27_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntImplicitFIMLangs_0_2,
  MR_Word * STATE_VARIABLE_IntImplicitFIMLangs_3,
  MR_Word STATE_VARIABLE_IntTypesMap_0_4,
  MR_Word * STATE_VARIABLE_IntTypesMap_5,
  MR_Word STATE_VARIABLE_IntTypeDefnsCord_0_6,
  MR_Word * STATE_VARIABLE_IntTypeDefnsCord_7,
  MR_Word STATE_VARIABLE_IntInstDefnsCord_0_8,
  MR_Word * STATE_VARIABLE_IntInstDefnsCord_9,
  MR_Word STATE_VARIABLE_IntModeDefnsCord_0_10,
  MR_Word * STATE_VARIABLE_IntModeDefnsCord_11,
  MR_Word STATE_VARIABLE_IntTypeClassesCord_0_12,
  MR_Word * STATE_VARIABLE_IntTypeClassesCord_13,
  MR_Word STATE_VARIABLE_IntInstancesCord_0_14,
  MR_Word * STATE_VARIABLE_IntInstancesCord_15,
  MR_Word STATE_VARIABLE_IntPredDeclsCord_0_16,
  MR_Word * STATE_VARIABLE_IntPredDeclsCord_17,
  MR_Word STATE_VARIABLE_IntModeDeclsCord_0_18,
  MR_Word * STATE_VARIABLE_IntModeDeclsCord_19,
  MR_Word STATE_VARIABLE_IntForeignEnumsCord_0_20,
  MR_Word * STATE_VARIABLE_IntForeignEnumsCord_21,
  MR_Word STATE_VARIABLE_IntPragmasCord_0_22,
  MR_Word * STATE_VARIABLE_IntPragmasCord_23,
  MR_Word STATE_VARIABLE_IntPromisesCord_0_24,
  MR_Word * STATE_VARIABLE_IntPromisesCord_25,
  MR_Word STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_26,
  MR_Word * STATE_VARIABLE_IntModulesNeededByTypeClassDefns_27)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_IntModulesNeededByTypeClassDefns_27 = STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_26;
      *STATE_VARIABLE_IntPromisesCord_25 = STATE_VARIABLE_IntPromisesCord_0_24;
      *STATE_VARIABLE_IntPragmasCord_23 = STATE_VARIABLE_IntPragmasCord_0_22;
      *STATE_VARIABLE_IntForeignEnumsCord_21 = STATE_VARIABLE_IntForeignEnumsCord_0_20;
      *STATE_VARIABLE_IntModeDeclsCord_19 = STATE_VARIABLE_IntModeDeclsCord_0_18;
      *STATE_VARIABLE_IntPredDeclsCord_17 = STATE_VARIABLE_IntPredDeclsCord_0_16;
      *STATE_VARIABLE_IntInstancesCord_15 = STATE_VARIABLE_IntInstancesCord_0_14;
      *STATE_VARIABLE_IntTypeClassesCord_13 = STATE_VARIABLE_IntTypeClassesCord_0_12;
      *STATE_VARIABLE_IntModeDefnsCord_11 = STATE_VARIABLE_IntModeDefnsCord_0_10;
      *STATE_VARIABLE_IntInstDefnsCord_9 = STATE_VARIABLE_IntInstDefnsCord_0_8;
      *STATE_VARIABLE_IntTypeDefnsCord_7 = STATE_VARIABLE_IntTypeDefnsCord_0_6;
      *STATE_VARIABLE_IntTypesMap_5 = STATE_VARIABLE_IntTypesMap_0_4;
      *STATE_VARIABLE_IntImplicitFIMLangs_3 = STATE_VARIABLE_IntImplicitFIMLangs_0_2;
    }
    else
    {
      MR_Word Item_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_IntPromisesCord_149_149;
      MR_Word STATE_VARIABLE_IntPragmasCord_150_150;
      MR_Word STATE_VARIABLE_IntForeignEnumsCord_155_155;
      MR_Word STATE_VARIABLE_IntModeDeclsCord_157_157;
      MR_Word STATE_VARIABLE_IntPredDeclsCord_158_158;
      MR_Word STATE_VARIABLE_IntInstancesCord_159_159;
      MR_Word STATE_VARIABLE_IntTypeClassesCord_160_160;
      MR_Word STATE_VARIABLE_IntModulesNeededByTypeClassDefns_162_162;
      MR_Word STATE_VARIABLE_IntModeDefnsCord_163_163;
      MR_Word STATE_VARIABLE_IntInstDefnsCord_164_164;
      MR_Word STATE_VARIABLE_IntTypesMap_166_166;
      MR_Word STATE_VARIABLE_IntTypeDefnsCord_167_167;
      MR_Word STATE_VARIABLE_IntImplicitFIMLangs_168_168;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_IntImplicitFIMLangs_0_2;
      MR_Word next_value_of_STATE_VARIABLE_IntTypesMap_0_4;
      MR_Word next_value_of_STATE_VARIABLE_IntTypeDefnsCord_0_6;
      MR_Word next_value_of_STATE_VARIABLE_IntInstDefnsCord_0_8;
      MR_Word next_value_of_STATE_VARIABLE_IntModeDefnsCord_0_10;
      MR_Word next_value_of_STATE_VARIABLE_IntTypeClassesCord_0_12;
      MR_Word next_value_of_STATE_VARIABLE_IntInstancesCord_0_14;
      MR_Word next_value_of_STATE_VARIABLE_IntPredDeclsCord_0_16;
      MR_Word next_value_of_STATE_VARIABLE_IntModeDeclsCord_0_18;
      MR_Word next_value_of_STATE_VARIABLE_IntForeignEnumsCord_0_20;
      MR_Word next_value_of_STATE_VARIABLE_IntPragmasCord_0_22;
      MR_Word next_value_of_STATE_VARIABLE_IntPromisesCord_0_24;
      MR_Word next_value_of_STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_26;

      switch (MR_tag((MR_Word) Item_67)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_IntImplicitFIMLangs_168_168 = STATE_VARIABLE_IntImplicitFIMLangs_0_2;
            STATE_VARIABLE_IntTypesMap_166_166 = STATE_VARIABLE_IntTypesMap_0_4;
            STATE_VARIABLE_IntTypeDefnsCord_167_167 = STATE_VARIABLE_IntTypeDefnsCord_0_6;
            STATE_VARIABLE_IntInstDefnsCord_164_164 = STATE_VARIABLE_IntInstDefnsCord_0_8;
            STATE_VARIABLE_IntModeDefnsCord_163_163 = STATE_VARIABLE_IntModeDefnsCord_0_10;
            STATE_VARIABLE_IntTypeClassesCord_160_160 = STATE_VARIABLE_IntTypeClassesCord_0_12;
            STATE_VARIABLE_IntInstancesCord_159_159 = STATE_VARIABLE_IntInstancesCord_0_14;
            STATE_VARIABLE_IntPredDeclsCord_158_158 = STATE_VARIABLE_IntPredDeclsCord_0_16;
            STATE_VARIABLE_IntModeDeclsCord_157_157 = STATE_VARIABLE_IntModeDeclsCord_0_18;
            STATE_VARIABLE_IntForeignEnumsCord_155_155 = STATE_VARIABLE_IntForeignEnumsCord_0_20;
            STATE_VARIABLE_IntPragmasCord_150_150 = STATE_VARIABLE_IntPragmasCord_0_22;
            STATE_VARIABLE_IntPromisesCord_149_149 = STATE_VARIABLE_IntPromisesCord_0_24;
            STATE_VARIABLE_IntModulesNeededByTypeClassDefns_162_162 = STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_26;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemInstDefn_95 = (MR_Word) (MR_body((MR_Word) (Item_67), (MR_Integer) 1));

            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), ((MR_Box) (ItemInstDefn_95)), STATE_VARIABLE_IntInstDefnsCord_0_8, &STATE_VARIABLE_IntInstDefnsCord_164_164);
            STATE_VARIABLE_IntImplicitFIMLangs_168_168 = STATE_VARIABLE_IntImplicitFIMLangs_0_2;
            STATE_VARIABLE_IntTypesMap_166_166 = STATE_VARIABLE_IntTypesMap_0_4;
            STATE_VARIABLE_IntTypeDefnsCord_167_167 = STATE_VARIABLE_IntTypeDefnsCord_0_6;
            STATE_VARIABLE_IntModeDefnsCord_163_163 = STATE_VARIABLE_IntModeDefnsCord_0_10;
            STATE_VARIABLE_IntTypeClassesCord_160_160 = STATE_VARIABLE_IntTypeClassesCord_0_12;
            STATE_VARIABLE_IntInstancesCord_159_159 = STATE_VARIABLE_IntInstancesCord_0_14;
            STATE_VARIABLE_IntPredDeclsCord_158_158 = STATE_VARIABLE_IntPredDeclsCord_0_16;
            STATE_VARIABLE_IntModeDeclsCord_157_157 = STATE_VARIABLE_IntModeDeclsCord_0_18;
            STATE_VARIABLE_IntForeignEnumsCord_155_155 = STATE_VARIABLE_IntForeignEnumsCord_0_20;
            STATE_VARIABLE_IntPragmasCord_150_150 = STATE_VARIABLE_IntPragmasCord_0_22;
            STATE_VARIABLE_IntPromisesCord_149_149 = STATE_VARIABLE_IntPromisesCord_0_24;
            STATE_VARIABLE_IntModulesNeededByTypeClassDefns_162_162 = STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_26;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemModeDefn_96 = (MR_Word) (MR_body((MR_Word) (Item_67), (MR_Integer) 2));

            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), ((MR_Box) (ItemModeDefn_96)), STATE_VARIABLE_IntModeDefnsCord_0_10, &STATE_VARIABLE_IntModeDefnsCord_163_163);
            STATE_VARIABLE_IntImplicitFIMLangs_168_168 = STATE_VARIABLE_IntImplicitFIMLangs_0_2;
            STATE_VARIABLE_IntTypesMap_166_166 = STATE_VARIABLE_IntTypesMap_0_4;
            STATE_VARIABLE_IntTypeDefnsCord_167_167 = STATE_VARIABLE_IntTypeDefnsCord_0_6;
            STATE_VARIABLE_IntInstDefnsCord_164_164 = STATE_VARIABLE_IntInstDefnsCord_0_8;
            STATE_VARIABLE_IntTypeClassesCord_160_160 = STATE_VARIABLE_IntTypeClassesCord_0_12;
            STATE_VARIABLE_IntInstancesCord_159_159 = STATE_VARIABLE_IntInstancesCord_0_14;
            STATE_VARIABLE_IntPredDeclsCord_158_158 = STATE_VARIABLE_IntPredDeclsCord_0_16;
            STATE_VARIABLE_IntModeDeclsCord_157_157 = STATE_VARIABLE_IntModeDeclsCord_0_18;
            STATE_VARIABLE_IntForeignEnumsCord_155_155 = STATE_VARIABLE_IntForeignEnumsCord_0_20;
            STATE_VARIABLE_IntPragmasCord_150_150 = STATE_VARIABLE_IntPragmasCord_0_22;
            STATE_VARIABLE_IntPromisesCord_149_149 = STATE_VARIABLE_IntPromisesCord_0_24;
            STATE_VARIABLE_IntModulesNeededByTypeClassDefns_162_162 = STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_26;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_67, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ItemPredDecl_100 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_67, (MR_Integer) 1))));

                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), ((MR_Box) (ItemPredDecl_100)), STATE_VARIABLE_IntPredDeclsCord_0_16, &STATE_VARIABLE_IntPredDeclsCord_158_158);
                STATE_VARIABLE_IntImplicitFIMLangs_168_168 = STATE_VARIABLE_IntImplicitFIMLangs_0_2;
                STATE_VARIABLE_IntTypesMap_166_166 = STATE_VARIABLE_IntTypesMap_0_4;
                STATE_VARIABLE_IntTypeDefnsCord_167_167 = STATE_VARIABLE_IntTypeDefnsCord_0_6;
                STATE_VARIABLE_IntInstDefnsCord_164_164 = STATE_VARIABLE_IntInstDefnsCord_0_8;
                STATE_VARIABLE_IntModeDefnsCord_163_163 = STATE_VARIABLE_IntModeDefnsCord_0_10;
                STATE_VARIABLE_IntTypeClassesCord_160_160 = STATE_VARIABLE_IntTypeClassesCord_0_12;
                STATE_VARIABLE_IntInstancesCord_159_159 = STATE_VARIABLE_IntInstancesCord_0_14;
                STATE_VARIABLE_IntModeDeclsCord_157_157 = STATE_VARIABLE_IntModeDeclsCord_0_18;
                STATE_VARIABLE_IntForeignEnumsCord_155_155 = STATE_VARIABLE_IntForeignEnumsCord_0_20;
                STATE_VARIABLE_IntPragmasCord_150_150 = STATE_VARIABLE_IntPragmasCord_0_22;
                STATE_VARIABLE_IntPromisesCord_149_149 = STATE_VARIABLE_IntPromisesCord_0_24;
                STATE_VARIABLE_IntModulesNeededByTypeClassDefns_162_162 = STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_26;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ItemModeDecl_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_67, (MR_Integer) 1))));

                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), ((MR_Box) (ItemModeDecl_101)), STATE_VARIABLE_IntModeDeclsCord_0_18, &STATE_VARIABLE_IntModeDeclsCord_157_157);
                STATE_VARIABLE_IntImplicitFIMLangs_168_168 = STATE_VARIABLE_IntImplicitFIMLangs_0_2;
                STATE_VARIABLE_IntTypesMap_166_166 = STATE_VARIABLE_IntTypesMap_0_4;
                STATE_VARIABLE_IntTypeDefnsCord_167_167 = STATE_VARIABLE_IntTypeDefnsCord_0_6;
                STATE_VARIABLE_IntInstDefnsCord_164_164 = STATE_VARIABLE_IntInstDefnsCord_0_8;
                STATE_VARIABLE_IntModeDefnsCord_163_163 = STATE_VARIABLE_IntModeDefnsCord_0_10;
                STATE_VARIABLE_IntTypeClassesCord_160_160 = STATE_VARIABLE_IntTypeClassesCord_0_12;
                STATE_VARIABLE_IntInstancesCord_159_159 = STATE_VARIABLE_IntInstancesCord_0_14;
                STATE_VARIABLE_IntPredDeclsCord_158_158 = STATE_VARIABLE_IntPredDeclsCord_0_16;
                STATE_VARIABLE_IntForeignEnumsCord_155_155 = STATE_VARIABLE_IntForeignEnumsCord_0_20;
                STATE_VARIABLE_IntPragmasCord_150_150 = STATE_VARIABLE_IntPragmasCord_0_22;
                STATE_VARIABLE_IntPromisesCord_149_149 = STATE_VARIABLE_IntPromisesCord_0_24;
                STATE_VARIABLE_IntModulesNeededByTypeClassDefns_162_162 = STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_26;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ItemForeignEnum_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_67, (MR_Integer) 1))));
                MR_Word Lang_182;

                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ((MR_Box) (ItemForeignEnum_102)), STATE_VARIABLE_IntForeignEnumsCord_0_20, &STATE_VARIABLE_IntForeignEnumsCord_155_155);
                Lang_182 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemForeignEnum_102, (MR_Integer) 0))) & (MR_Integer) 3);
                mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_182)), STATE_VARIABLE_IntImplicitFIMLangs_0_2, &STATE_VARIABLE_IntImplicitFIMLangs_168_168);
                STATE_VARIABLE_IntTypesMap_166_166 = STATE_VARIABLE_IntTypesMap_0_4;
                STATE_VARIABLE_IntTypeDefnsCord_167_167 = STATE_VARIABLE_IntTypeDefnsCord_0_6;
                STATE_VARIABLE_IntInstDefnsCord_164_164 = STATE_VARIABLE_IntInstDefnsCord_0_8;
                STATE_VARIABLE_IntModeDefnsCord_163_163 = STATE_VARIABLE_IntModeDefnsCord_0_10;
                STATE_VARIABLE_IntTypeClassesCord_160_160 = STATE_VARIABLE_IntTypeClassesCord_0_12;
                STATE_VARIABLE_IntInstancesCord_159_159 = STATE_VARIABLE_IntInstancesCord_0_14;
                STATE_VARIABLE_IntPredDeclsCord_158_158 = STATE_VARIABLE_IntPredDeclsCord_0_16;
                STATE_VARIABLE_IntModeDeclsCord_157_157 = STATE_VARIABLE_IntModeDeclsCord_0_18;
                STATE_VARIABLE_IntPragmasCord_150_150 = STATE_VARIABLE_IntPragmasCord_0_22;
                STATE_VARIABLE_IntPromisesCord_149_149 = STATE_VARIABLE_IntPromisesCord_0_24;
                STATE_VARIABLE_IntModulesNeededByTypeClassDefns_162_162 = STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_26;
              }
              break;
            case (MR_Integer) 3:
              {
                STATE_VARIABLE_IntImplicitFIMLangs_168_168 = STATE_VARIABLE_IntImplicitFIMLangs_0_2;
                STATE_VARIABLE_IntTypesMap_166_166 = STATE_VARIABLE_IntTypesMap_0_4;
                STATE_VARIABLE_IntTypeDefnsCord_167_167 = STATE_VARIABLE_IntTypeDefnsCord_0_6;
                STATE_VARIABLE_IntInstDefnsCord_164_164 = STATE_VARIABLE_IntInstDefnsCord_0_8;
                STATE_VARIABLE_IntModeDefnsCord_163_163 = STATE_VARIABLE_IntModeDefnsCord_0_10;
                STATE_VARIABLE_IntTypeClassesCord_160_160 = STATE_VARIABLE_IntTypeClassesCord_0_12;
                STATE_VARIABLE_IntInstancesCord_159_159 = STATE_VARIABLE_IntInstancesCord_0_14;
                STATE_VARIABLE_IntPredDeclsCord_158_158 = STATE_VARIABLE_IntPredDeclsCord_0_16;
                STATE_VARIABLE_IntModeDeclsCord_157_157 = STATE_VARIABLE_IntModeDeclsCord_0_18;
                STATE_VARIABLE_IntForeignEnumsCord_155_155 = STATE_VARIABLE_IntForeignEnumsCord_0_20;
                STATE_VARIABLE_IntPragmasCord_150_150 = STATE_VARIABLE_IntPragmasCord_0_22;
                STATE_VARIABLE_IntPromisesCord_149_149 = STATE_VARIABLE_IntPromisesCord_0_24;
                STATE_VARIABLE_IntModulesNeededByTypeClassDefns_162_162 = STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_26;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ItemPromise_113 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_67, (MR_Integer) 1))));
                MR_Word PromiseType_114 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPromise_113, (MR_Integer) 0))) & (MR_Integer) 3);

                switch (PromiseType_114) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 2:
                  case (MR_Integer) 1:
                    mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), ((MR_Box) (ItemPromise_113)), STATE_VARIABLE_IntPromisesCord_0_24, &STATE_VARIABLE_IntPromisesCord_149_149);
                    break;
                  case (MR_Integer) 3:
                    STATE_VARIABLE_IntPromisesCord_149_149 = STATE_VARIABLE_IntPromisesCord_0_24;
                    break;
                }
                STATE_VARIABLE_IntImplicitFIMLangs_168_168 = STATE_VARIABLE_IntImplicitFIMLangs_0_2;
                STATE_VARIABLE_IntTypesMap_166_166 = STATE_VARIABLE_IntTypesMap_0_4;
                STATE_VARIABLE_IntTypeDefnsCord_167_167 = STATE_VARIABLE_IntTypeDefnsCord_0_6;
                STATE_VARIABLE_IntInstDefnsCord_164_164 = STATE_VARIABLE_IntInstDefnsCord_0_8;
                STATE_VARIABLE_IntModeDefnsCord_163_163 = STATE_VARIABLE_IntModeDefnsCord_0_10;
                STATE_VARIABLE_IntTypeClassesCord_160_160 = STATE_VARIABLE_IntTypeClassesCord_0_12;
                STATE_VARIABLE_IntInstancesCord_159_159 = STATE_VARIABLE_IntInstancesCord_0_14;
                STATE_VARIABLE_IntPredDeclsCord_158_158 = STATE_VARIABLE_IntPredDeclsCord_0_16;
                STATE_VARIABLE_IntModeDeclsCord_157_157 = STATE_VARIABLE_IntModeDeclsCord_0_18;
                STATE_VARIABLE_IntForeignEnumsCord_155_155 = STATE_VARIABLE_IntForeignEnumsCord_0_20;
                STATE_VARIABLE_IntPragmasCord_150_150 = STATE_VARIABLE_IntPragmasCord_0_22;
                STATE_VARIABLE_IntModulesNeededByTypeClassDefns_162_162 = STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_26;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemTypeClass_97 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_67, (MR_Integer) 1))));
                MR_Word Constraints_98;
                MR_Box conv1_STATE_VARIABLE_IntModulesNeededByTypeClassDefns_162_162;

                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ((MR_Box) (ItemTypeClass_97)), STATE_VARIABLE_IntTypeClassesCord_0_12, &STATE_VARIABLE_IntTypeClassesCord_160_160);
                Constraints_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_97, (MR_Integer) 2))));
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[15]), Constraints_98, ((MR_Box) (STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_26)), &conv1_STATE_VARIABLE_IntModulesNeededByTypeClassDefns_162_162);
                STATE_VARIABLE_IntModulesNeededByTypeClassDefns_162_162 = ((MR_Word) (conv1_STATE_VARIABLE_IntModulesNeededByTypeClassDefns_162_162));
                STATE_VARIABLE_IntImplicitFIMLangs_168_168 = STATE_VARIABLE_IntImplicitFIMLangs_0_2;
                STATE_VARIABLE_IntTypesMap_166_166 = STATE_VARIABLE_IntTypesMap_0_4;
                STATE_VARIABLE_IntTypeDefnsCord_167_167 = STATE_VARIABLE_IntTypeDefnsCord_0_6;
                STATE_VARIABLE_IntInstDefnsCord_164_164 = STATE_VARIABLE_IntInstDefnsCord_0_8;
                STATE_VARIABLE_IntModeDefnsCord_163_163 = STATE_VARIABLE_IntModeDefnsCord_0_10;
                STATE_VARIABLE_IntInstancesCord_159_159 = STATE_VARIABLE_IntInstancesCord_0_14;
                STATE_VARIABLE_IntPredDeclsCord_158_158 = STATE_VARIABLE_IntPredDeclsCord_0_16;
                STATE_VARIABLE_IntModeDeclsCord_157_157 = STATE_VARIABLE_IntModeDeclsCord_0_18;
                STATE_VARIABLE_IntForeignEnumsCord_155_155 = STATE_VARIABLE_IntForeignEnumsCord_0_20;
                STATE_VARIABLE_IntPragmasCord_150_150 = STATE_VARIABLE_IntPragmasCord_0_22;
                STATE_VARIABLE_IntPromisesCord_149_149 = STATE_VARIABLE_IntPromisesCord_0_24;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemInstance_99 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_67, (MR_Integer) 1))));

                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ((MR_Box) (ItemInstance_99)), STATE_VARIABLE_IntInstancesCord_0_14, &STATE_VARIABLE_IntInstancesCord_159_159);
                STATE_VARIABLE_IntImplicitFIMLangs_168_168 = STATE_VARIABLE_IntImplicitFIMLangs_0_2;
                STATE_VARIABLE_IntTypesMap_166_166 = STATE_VARIABLE_IntTypesMap_0_4;
                STATE_VARIABLE_IntTypeDefnsCord_167_167 = STATE_VARIABLE_IntTypeDefnsCord_0_6;
                STATE_VARIABLE_IntInstDefnsCord_164_164 = STATE_VARIABLE_IntInstDefnsCord_0_8;
                STATE_VARIABLE_IntModeDefnsCord_163_163 = STATE_VARIABLE_IntModeDefnsCord_0_10;
                STATE_VARIABLE_IntTypeClassesCord_160_160 = STATE_VARIABLE_IntTypeClassesCord_0_12;
                STATE_VARIABLE_IntPredDeclsCord_158_158 = STATE_VARIABLE_IntPredDeclsCord_0_16;
                STATE_VARIABLE_IntModeDeclsCord_157_157 = STATE_VARIABLE_IntModeDeclsCord_0_18;
                STATE_VARIABLE_IntForeignEnumsCord_155_155 = STATE_VARIABLE_IntForeignEnumsCord_0_20;
                STATE_VARIABLE_IntPragmasCord_150_150 = STATE_VARIABLE_IntPragmasCord_0_22;
                STATE_VARIABLE_IntPromisesCord_149_149 = STATE_VARIABLE_IntPromisesCord_0_24;
                STATE_VARIABLE_IntModulesNeededByTypeClassDefns_162_162 = STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_26;
              }
              break;
            case (MR_Integer) 7:
              {
                STATE_VARIABLE_IntImplicitFIMLangs_168_168 = STATE_VARIABLE_IntImplicitFIMLangs_0_2;
                STATE_VARIABLE_IntTypesMap_166_166 = STATE_VARIABLE_IntTypesMap_0_4;
                STATE_VARIABLE_IntTypeDefnsCord_167_167 = STATE_VARIABLE_IntTypeDefnsCord_0_6;
                STATE_VARIABLE_IntInstDefnsCord_164_164 = STATE_VARIABLE_IntInstDefnsCord_0_8;
                STATE_VARIABLE_IntModeDefnsCord_163_163 = STATE_VARIABLE_IntModeDefnsCord_0_10;
                STATE_VARIABLE_IntTypeClassesCord_160_160 = STATE_VARIABLE_IntTypeClassesCord_0_12;
                STATE_VARIABLE_IntInstancesCord_159_159 = STATE_VARIABLE_IntInstancesCord_0_14;
                STATE_VARIABLE_IntPredDeclsCord_158_158 = STATE_VARIABLE_IntPredDeclsCord_0_16;
                STATE_VARIABLE_IntModeDeclsCord_157_157 = STATE_VARIABLE_IntModeDeclsCord_0_18;
                STATE_VARIABLE_IntForeignEnumsCord_155_155 = STATE_VARIABLE_IntForeignEnumsCord_0_20;
                STATE_VARIABLE_IntPragmasCord_150_150 = STATE_VARIABLE_IntPragmasCord_0_22;
                STATE_VARIABLE_IntPromisesCord_149_149 = STATE_VARIABLE_IntPromisesCord_0_24;
                STATE_VARIABLE_IntModulesNeededByTypeClassDefns_162_162 = STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_26;
              }
              break;
            case (MR_Integer) 8:
              {
                STATE_VARIABLE_IntImplicitFIMLangs_168_168 = STATE_VARIABLE_IntImplicitFIMLangs_0_2;
                STATE_VARIABLE_IntTypesMap_166_166 = STATE_VARIABLE_IntTypesMap_0_4;
                STATE_VARIABLE_IntTypeDefnsCord_167_167 = STATE_VARIABLE_IntTypeDefnsCord_0_6;
                STATE_VARIABLE_IntInstDefnsCord_164_164 = STATE_VARIABLE_IntInstDefnsCord_0_8;
                STATE_VARIABLE_IntModeDefnsCord_163_163 = STATE_VARIABLE_IntModeDefnsCord_0_10;
                STATE_VARIABLE_IntTypeClassesCord_160_160 = STATE_VARIABLE_IntTypeClassesCord_0_12;
                STATE_VARIABLE_IntInstancesCord_159_159 = STATE_VARIABLE_IntInstancesCord_0_14;
                STATE_VARIABLE_IntPredDeclsCord_158_158 = STATE_VARIABLE_IntPredDeclsCord_0_16;
                STATE_VARIABLE_IntModeDeclsCord_157_157 = STATE_VARIABLE_IntModeDeclsCord_0_18;
                STATE_VARIABLE_IntForeignEnumsCord_155_155 = STATE_VARIABLE_IntForeignEnumsCord_0_20;
                STATE_VARIABLE_IntPragmasCord_150_150 = STATE_VARIABLE_IntPragmasCord_0_22;
                STATE_VARIABLE_IntPromisesCord_149_149 = STATE_VARIABLE_IntPromisesCord_0_24;
                STATE_VARIABLE_IntModulesNeededByTypeClassDefns_162_162 = STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_26;
              }
              break;
            case (MR_Integer) 9:
              {
                STATE_VARIABLE_IntImplicitFIMLangs_168_168 = STATE_VARIABLE_IntImplicitFIMLangs_0_2;
                STATE_VARIABLE_IntTypesMap_166_166 = STATE_VARIABLE_IntTypesMap_0_4;
                STATE_VARIABLE_IntTypeDefnsCord_167_167 = STATE_VARIABLE_IntTypeDefnsCord_0_6;
                STATE_VARIABLE_IntInstDefnsCord_164_164 = STATE_VARIABLE_IntInstDefnsCord_0_8;
                STATE_VARIABLE_IntModeDefnsCord_163_163 = STATE_VARIABLE_IntModeDefnsCord_0_10;
                STATE_VARIABLE_IntTypeClassesCord_160_160 = STATE_VARIABLE_IntTypeClassesCord_0_12;
                STATE_VARIABLE_IntInstancesCord_159_159 = STATE_VARIABLE_IntInstancesCord_0_14;
                STATE_VARIABLE_IntPredDeclsCord_158_158 = STATE_VARIABLE_IntPredDeclsCord_0_16;
                STATE_VARIABLE_IntModeDeclsCord_157_157 = STATE_VARIABLE_IntModeDeclsCord_0_18;
                STATE_VARIABLE_IntForeignEnumsCord_155_155 = STATE_VARIABLE_IntForeignEnumsCord_0_20;
                STATE_VARIABLE_IntPragmasCord_150_150 = STATE_VARIABLE_IntPragmasCord_0_22;
                STATE_VARIABLE_IntPromisesCord_149_149 = STATE_VARIABLE_IntPromisesCord_0_24;
                STATE_VARIABLE_IntModulesNeededByTypeClassDefns_162_162 = STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_26;
              }
              break;
            case (MR_Integer) 10:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.get_interface_int1_items_loop_int\'/27", (MR_String) "item_type_repn");
                return;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemTypeDefn_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_67, (MR_Integer) 1))));
                MR_Word Name_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_82, (MR_Integer) 0))));
                MR_Word TypeParams_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_82, (MR_Integer) 1))));
                MR_Word TypeDefn_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_82, (MR_Integer) 2))));
                MR_Word TypeCtor_89;
                MR_Integer Var_165;
                MR_Word ForeignType_91;
                MR_Word DetailsForeign_90;

                Var_165 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[9]), TypeParams_84);
                {
                  TypeCtor_89 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), TypeCtor_89, 0) = ((MR_Box) (Name_83));
                  MR_hl_field(MR_mktag(0), TypeCtor_89, 1) = ((MR_Box) (Var_165));
                }
                mercury__multi_map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), ((MR_Box) (TypeCtor_89)), ((MR_Box) (ItemTypeDefn_82)), STATE_VARIABLE_IntTypesMap_0_4, &STATE_VARIABLE_IntTypesMap_166_166);
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), ((MR_Box) (ItemTypeDefn_82)), STATE_VARIABLE_IntTypeDefnsCord_0_6, &STATE_VARIABLE_IntTypeDefnsCord_167_167);
                succeeded = ((((MR_tag((MR_Word) TypeDefn_85)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_85, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  DetailsForeign_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_85, (MR_Integer) 1))));
                  ForeignType_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_90, (MR_Integer) 0))));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Word Lang_94;

                  Lang_94 = parse_tree__prog_foreign__foreign_type_language_1_f_0(ForeignType_91);
                  mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_94)), STATE_VARIABLE_IntImplicitFIMLangs_0_2, &STATE_VARIABLE_IntImplicitFIMLangs_168_168);
                }
                else
                  STATE_VARIABLE_IntImplicitFIMLangs_168_168 = STATE_VARIABLE_IntImplicitFIMLangs_0_2;
                STATE_VARIABLE_IntInstDefnsCord_164_164 = STATE_VARIABLE_IntInstDefnsCord_0_8;
                STATE_VARIABLE_IntModeDefnsCord_163_163 = STATE_VARIABLE_IntModeDefnsCord_0_10;
                STATE_VARIABLE_IntTypeClassesCord_160_160 = STATE_VARIABLE_IntTypeClassesCord_0_12;
                STATE_VARIABLE_IntInstancesCord_159_159 = STATE_VARIABLE_IntInstancesCord_0_14;
                STATE_VARIABLE_IntPredDeclsCord_158_158 = STATE_VARIABLE_IntPredDeclsCord_0_16;
                STATE_VARIABLE_IntModeDeclsCord_157_157 = STATE_VARIABLE_IntModeDeclsCord_0_18;
                STATE_VARIABLE_IntForeignEnumsCord_155_155 = STATE_VARIABLE_IntForeignEnumsCord_0_20;
                STATE_VARIABLE_IntPragmasCord_150_150 = STATE_VARIABLE_IntPragmasCord_0_22;
                STATE_VARIABLE_IntPromisesCord_149_149 = STATE_VARIABLE_IntPromisesCord_0_24;
                STATE_VARIABLE_IntModulesNeededByTypeClassDefns_162_162 = STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_26;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word ItemPragma_107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_67, (MR_Integer) 1))));
                MR_Word Pragma_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_107, (MR_Integer) 0))));
                MR_Word AllowedInInterface_111;

                AllowedInInterface_111 = parse_tree__prog_item__pragma_allowed_in_interface_1_f_0(Pragma_108);
                switch (AllowedInInterface_111) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_IntPragmasCord_150_150 = STATE_VARIABLE_IntPragmasCord_0_22;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Langs_112;
                      MR_Word Var_151;

                      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[3]), ((MR_Box) (ItemPragma_107)), STATE_VARIABLE_IntPragmasCord_0_22, &STATE_VARIABLE_IntPragmasCord_150_150);
                      Langs_112 = parse_tree__item_util__pragma_needs_foreign_imports_1_f_0(Pragma_108);
                      {
                        Var_151 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_151, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[4]));
                        MR_hl_field(MR_mktag(0), Var_151, 1) = ((MR_Box) (parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_27_p_0_1));
                        MR_hl_field(MR_mktag(0), Var_151, 2) = ((MR_Box) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(0), Var_151, 3) = ((MR_Box) (Langs_112));
                        MR_hl_field(MR_mktag(0), Var_151, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      mercury__require__expect_3_p_0(Var_151, (MR_String) "predicate \140parse_tree.comp_unit_interface.get_interface_int1_items_loop_int\'/27", (MR_String) "interface pragma needs Langs");
                    }
                    break;
                }
                STATE_VARIABLE_IntImplicitFIMLangs_168_168 = STATE_VARIABLE_IntImplicitFIMLangs_0_2;
                STATE_VARIABLE_IntTypesMap_166_166 = STATE_VARIABLE_IntTypesMap_0_4;
                STATE_VARIABLE_IntTypeDefnsCord_167_167 = STATE_VARIABLE_IntTypeDefnsCord_0_6;
                STATE_VARIABLE_IntInstDefnsCord_164_164 = STATE_VARIABLE_IntInstDefnsCord_0_8;
                STATE_VARIABLE_IntModeDefnsCord_163_163 = STATE_VARIABLE_IntModeDefnsCord_0_10;
                STATE_VARIABLE_IntTypeClassesCord_160_160 = STATE_VARIABLE_IntTypeClassesCord_0_12;
                STATE_VARIABLE_IntInstancesCord_159_159 = STATE_VARIABLE_IntInstancesCord_0_14;
                STATE_VARIABLE_IntPredDeclsCord_158_158 = STATE_VARIABLE_IntPredDeclsCord_0_16;
                STATE_VARIABLE_IntModeDeclsCord_157_157 = STATE_VARIABLE_IntModeDeclsCord_0_18;
                STATE_VARIABLE_IntForeignEnumsCord_155_155 = STATE_VARIABLE_IntForeignEnumsCord_0_20;
                STATE_VARIABLE_IntPromisesCord_149_149 = STATE_VARIABLE_IntPromisesCord_0_24;
                STATE_VARIABLE_IntModulesNeededByTypeClassDefns_162_162 = STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_26;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_68;
      next_value_of_STATE_VARIABLE_IntImplicitFIMLangs_0_2 = STATE_VARIABLE_IntImplicitFIMLangs_168_168;
      next_value_of_STATE_VARIABLE_IntTypesMap_0_4 = STATE_VARIABLE_IntTypesMap_166_166;
      next_value_of_STATE_VARIABLE_IntTypeDefnsCord_0_6 = STATE_VARIABLE_IntTypeDefnsCord_167_167;
      next_value_of_STATE_VARIABLE_IntInstDefnsCord_0_8 = STATE_VARIABLE_IntInstDefnsCord_164_164;
      next_value_of_STATE_VARIABLE_IntModeDefnsCord_0_10 = STATE_VARIABLE_IntModeDefnsCord_163_163;
      next_value_of_STATE_VARIABLE_IntTypeClassesCord_0_12 = STATE_VARIABLE_IntTypeClassesCord_160_160;
      next_value_of_STATE_VARIABLE_IntInstancesCord_0_14 = STATE_VARIABLE_IntInstancesCord_159_159;
      next_value_of_STATE_VARIABLE_IntPredDeclsCord_0_16 = STATE_VARIABLE_IntPredDeclsCord_158_158;
      next_value_of_STATE_VARIABLE_IntModeDeclsCord_0_18 = STATE_VARIABLE_IntModeDeclsCord_157_157;
      next_value_of_STATE_VARIABLE_IntForeignEnumsCord_0_20 = STATE_VARIABLE_IntForeignEnumsCord_155_155;
      next_value_of_STATE_VARIABLE_IntPragmasCord_0_22 = STATE_VARIABLE_IntPragmasCord_150_150;
      next_value_of_STATE_VARIABLE_IntPromisesCord_0_24 = STATE_VARIABLE_IntPromisesCord_149_149;
      next_value_of_STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_26 = STATE_VARIABLE_IntModulesNeededByTypeClassDefns_162_162;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_IntImplicitFIMLangs_0_2 = next_value_of_STATE_VARIABLE_IntImplicitFIMLangs_0_2;
      STATE_VARIABLE_IntTypesMap_0_4 = next_value_of_STATE_VARIABLE_IntTypesMap_0_4;
      STATE_VARIABLE_IntTypeDefnsCord_0_6 = next_value_of_STATE_VARIABLE_IntTypeDefnsCord_0_6;
      STATE_VARIABLE_IntInstDefnsCord_0_8 = next_value_of_STATE_VARIABLE_IntInstDefnsCord_0_8;
      STATE_VARIABLE_IntModeDefnsCord_0_10 = next_value_of_STATE_VARIABLE_IntModeDefnsCord_0_10;
      STATE_VARIABLE_IntTypeClassesCord_0_12 = next_value_of_STATE_VARIABLE_IntTypeClassesCord_0_12;
      STATE_VARIABLE_IntInstancesCord_0_14 = next_value_of_STATE_VARIABLE_IntInstancesCord_0_14;
      STATE_VARIABLE_IntPredDeclsCord_0_16 = next_value_of_STATE_VARIABLE_IntPredDeclsCord_0_16;
      STATE_VARIABLE_IntModeDeclsCord_0_18 = next_value_of_STATE_VARIABLE_IntModeDeclsCord_0_18;
      STATE_VARIABLE_IntForeignEnumsCord_0_20 = next_value_of_STATE_VARIABLE_IntForeignEnumsCord_0_20;
      STATE_VARIABLE_IntPragmasCord_0_22 = next_value_of_STATE_VARIABLE_IntPragmasCord_0_22;
      STATE_VARIABLE_IntPromisesCord_0_24 = next_value_of_STATE_VARIABLE_IntPromisesCord_0_24;
      STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_26 = next_value_of_STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_26;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_avails_loop_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImportsUses_0_2,
  MR_Word * STATE_VARIABLE_ImportsUses_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ImportsUses_3 = STATE_VARIABLE_ImportsUses_0_2;
    else
    {
      MR_Word Avail_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Avails_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ModuleName_10;
      MR_Word STATE_VARIABLE_ImportsUses_17_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImportsUses_0_2;

      if (((MR_tag((MR_Word) Avail_7)) == (MR_Integer) 0))
      {
        MR_Word Var_16 = (MR_Word) ((MR_Word) (Avail_7));

        ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
      }
      else
      {
        MR_Word Var_15 = (MR_Word) (MR_body((MR_Word) (Avail_7), (MR_Integer) 1));

        ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0))));
      }
      mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_10)), STATE_VARIABLE_ImportsUses_0_2, &STATE_VARIABLE_ImportsUses_17_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Avails_8;
      next_value_of_STATE_VARIABLE_ImportsUses_0_2 = STATE_VARIABLE_ImportsUses_17_17;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ImportsUses_0_2 = next_value_of_STATE_VARIABLE_ImportsUses_0_2;
      continue;
    }
    break;
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
    parse_tree__prog_item__int_imp_items_to_item_blocks_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0), ModuleName_5, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 1)), IntIncls_16, ImpIncls_17, IntAvails_18, ImpAvails_19, IntFIMs_20, ImpFIMs_21, IntItems_22, ImpItems_23, &InterfaceItemBlocks_24);
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
      MR_Word STATE_VARIABLE_ImpItemsCord_37_37;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImpItemsCord_0_2;

      switch (MR_tag((MR_Word) Item_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_ImpItemsCord_37_37 = STATE_VARIABLE_ImpItemsCord_0_2;
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_ImpItemsCord_37_37 = STATE_VARIABLE_ImpItemsCord_0_2;
          break;
        case (MR_Integer) 2:
          STATE_VARIABLE_ImpItemsCord_37_37 = STATE_VARIABLE_ImpItemsCord_0_2;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_ImpItemsCord_37_37 = STATE_VARIABLE_ImpItemsCord_0_2;
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_ImpItemsCord_37_37 = STATE_VARIABLE_ImpItemsCord_0_2;
              break;
            case (MR_Integer) 2:
              mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_7)), STATE_VARIABLE_ImpItemsCord_0_2, &STATE_VARIABLE_ImpItemsCord_37_37);
              break;
            case (MR_Integer) 3:
              STATE_VARIABLE_ImpItemsCord_37_37 = STATE_VARIABLE_ImpItemsCord_0_2;
              break;
            case (MR_Integer) 4:
              STATE_VARIABLE_ImpItemsCord_37_37 = STATE_VARIABLE_ImpItemsCord_0_2;
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemTypeClassInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 1))));
                MR_Word AbstractItemTypeClassInfo_14;
                MR_Word AbstractItem_15;
                MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_13, (MR_Integer) 0))));
                MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_13, (MR_Integer) 1))));
                MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_13, (MR_Integer) 2))));
                MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_13, (MR_Integer) 3))));
                MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_13, (MR_Integer) 5))));
                MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_13, (MR_Integer) 6))));
                MR_Integer Var_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_13, (MR_Integer) 7))));

                {
                  AbstractItemTypeClassInfo_14 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_14, 0) = ((MR_Box) (Var_39));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_14, 1) = ((MR_Box) (Var_40));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_14, 2) = ((MR_Box) (Var_41));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_14, 3) = ((MR_Box) (Var_42));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_14, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_14, 5) = ((MR_Box) (Var_44));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_14, 6) = ((MR_Box) (Var_45));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_14, 7) = ((MR_Box) (Var_46));
                }
                {
                  AbstractItem_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), AbstractItem_15, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), AbstractItem_15, 1) = ((MR_Box) (AbstractItemTypeClassInfo_14));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (AbstractItem_15)), STATE_VARIABLE_ImpItemsCord_0_2, &STATE_VARIABLE_ImpItemsCord_37_37);
              }
              break;
            case (MR_Integer) 6:
              STATE_VARIABLE_ImpItemsCord_37_37 = STATE_VARIABLE_ImpItemsCord_0_2;
              break;
            case (MR_Integer) 7:
              STATE_VARIABLE_ImpItemsCord_37_37 = STATE_VARIABLE_ImpItemsCord_0_2;
              break;
            case (MR_Integer) 8:
              STATE_VARIABLE_ImpItemsCord_37_37 = STATE_VARIABLE_ImpItemsCord_0_2;
              break;
            case (MR_Integer) 9:
              STATE_VARIABLE_ImpItemsCord_37_37 = STATE_VARIABLE_ImpItemsCord_0_2;
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
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item1_12)), STATE_VARIABLE_ImpItemsCord_0_2, &STATE_VARIABLE_ImpItemsCord_37_37);
              }
              break;
            case (MR_Integer) 12:
              STATE_VARIABLE_ImpItemsCord_37_37 = STATE_VARIABLE_ImpItemsCord_0_2;
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_8;
      next_value_of_STATE_VARIABLE_ImpItemsCord_0_2 = STATE_VARIABLE_ImpItemsCord_37_37;
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

void MR_CALL 
parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0(
  MR_Word AugCompUnit_5,
  MR_Word * ParseTreeInt0_6,
  MR_Word STATE_VARIABLE_Specs_0_89,
  MR_Word * STATE_VARIABLE_Specs_90)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 0))));
    MR_Word ModuleNameContext_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 1))));
    MR_Word ModuleVersionNumbers_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 2))));
    MR_Word SrcItemBlocks_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 3))));
    MR_Word IntIncls0_16;
    MR_Word ImpIncls0_17;
    MR_Word IntImports0_18;
    MR_Word IntUses0_19;
    MR_Word ImpImports0_20;
    MR_Word ImpUses0_21;
    MR_Word IntFIMSpecs0_22;
    MR_Word ImpFIMSpecs0_23;
    MR_Word IntIncls_24;
    MR_Word ImpIncls_25;
    MR_Word IntImports_26;
    MR_Word IntUses1_27;
    MR_Word ImpImports1_28;
    MR_Word ImpUses1_29;
    MR_Word IntFIMSpecs_30;
    MR_Word ImpFIMSpecs_31;
    MR_Word IntTypeDefnsCord_32;
    MR_Word ImpTypeDefnsCord_33;
    MR_Word IntInstDefnsCord_34;
    MR_Word ImpInstDefnsCord_35;
    MR_Word IntModeDefnsCord_36;
    MR_Word ImpModeDefnsCord_37;
    MR_Word IntTypeClassesCord_38;
    MR_Word ImpTypeClassesCord_39;
    MR_Word IntInstancesCord_40;
    MR_Word ImpInstancesCord_41;
    MR_Word IntPredDeclsCord_42;
    MR_Word ImpPredDeclsCord_43;
    MR_Word IntModeDeclsCord_44;
    MR_Word ImpModeDeclsCord_45;
    MR_Word IntForeignEnumsCord_46;
    MR_Word ImpForeignEnumsCord_47;
    MR_Word IntPragmasCord_48;
    MR_Word ImpPragmasCord_49;
    MR_Word IntPromisesCord_50;
    MR_Word ImpPromisesCord_51;
    MR_Word MaybeVersionNumbers_53;
    MR_Word IntUses_54;
    MR_Word IntImportsUses_55;
    MR_Word ImpImports_56;
    MR_Word ImpUses2_57;
    MR_Word ImpUses_58;
    MR_Word IntTypeDefns_59;
    MR_Word ImpTypeDefns_60;
    MR_Word IntInstDefns_61;
    MR_Word ImpInstDefns_62;
    MR_Word IntModeDefns_63;
    MR_Word ImpModeDefns_64;
    MR_Word IntTypeClasses_65;
    MR_Word ImpTypeClasses_66;
    MR_Word IntInstances_67;
    MR_Word ImpInstances_68;
    MR_Word IntPredDecls_69;
    MR_Word ImpPredDecls_70;
    MR_Word IntModeDecls_71;
    MR_Word ImpModeDecls_72;
    MR_Word IntForeignEnums_73;
    MR_Word ImpForeignEnums_74;
    MR_Word IntPragmas_75;
    MR_Word ImpPragmas_76;
    MR_Word IntPromises_77;
    MR_Word ImpPromises_78;
    MR_Word IntTypeDefnMap_79;
    MR_Word IntInstDefnMap_80;
    MR_Word IntModeDefnMap_81;
    MR_Word ImpTypeDefnMap_82;
    MR_Word ImpInstDefnMap_83;
    MR_Word ImpModeDefnMap_84;
    MR_Word IntForeignEnumMap_85;
    MR_Word ImpForeignEnumMap_86;
    MR_Word ParseTreeInt0Prime_88;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word VersionNumbers_52;
    MR_Box conv0_VersionNumbers_52;
    MR_Word _TypeCtorCheckedMap_87;

    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &IntIncls0_16);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &ImpIncls0_17);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &IntImports0_18);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &IntUses0_19);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &ImpImports0_20);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &ImpUses0_21);
    mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), &IntFIMSpecs0_22);
    mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), &ImpFIMSpecs0_23);
    Var_91 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]));
    Var_92 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]));
    Var_93 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0));
    Var_94 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0));
    Var_95 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0));
    Var_96 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0));
    Var_97 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0));
    Var_98 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0));
    Var_99 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0));
    Var_100 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0));
    Var_101 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0));
    Var_102 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0));
    Var_103 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0));
    Var_104 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0));
    Var_105 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0));
    Var_106 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0));
    Var_107 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[3]));
    Var_108 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[3]));
    Var_109 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0));
    Var_110 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0));
    parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_58_p_0(ModuleName_8, SrcItemBlocks_11, IntIncls0_16, &IntIncls_24, ImpIncls0_17, &ImpIncls_25, IntImports0_18, &IntImports_26, IntUses0_19, &IntUses1_27, ImpImports0_20, &ImpImports1_28, ImpUses0_21, &ImpUses1_29, IntFIMSpecs0_22, &IntFIMSpecs_30, ImpFIMSpecs0_23, &ImpFIMSpecs_31, Var_91, &IntTypeDefnsCord_32, Var_92, &ImpTypeDefnsCord_33, Var_93, &IntInstDefnsCord_34, Var_94, &ImpInstDefnsCord_35, Var_95, &IntModeDefnsCord_36, Var_96, &ImpModeDefnsCord_37, Var_97, &IntTypeClassesCord_38, Var_98, &ImpTypeClassesCord_39, Var_99, &IntInstancesCord_40, Var_100, &ImpInstancesCord_41, Var_101, &IntPredDeclsCord_42, Var_102, &ImpPredDeclsCord_43, Var_103, &IntModeDeclsCord_44, Var_104, &ImpModeDeclsCord_45, Var_105, &IntForeignEnumsCord_46, Var_106, &ImpForeignEnumsCord_47, Var_107, &IntPragmasCord_48, Var_108, &ImpPragmasCord_49, Var_109, &IntPromisesCord_50, Var_110, &ImpPromisesCord_51);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_version_numbers_0), ModuleVersionNumbers_10, ((MR_Box) (ModuleName_8)), &conv0_VersionNumbers_52);
    if (succeeded)
    {
      VersionNumbers_52 = ((MR_Word) (conv0_VersionNumbers_52));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      {
        MaybeVersionNumbers_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeVersionNumbers_53, 0) = ((MR_Box) (VersionNumbers_52));
      }
    else
      MaybeVersionNumbers_53 = (MR_Word) ((MR_Unsigned) 0U);
    mercury__set__difference_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses1_27, IntImports_26, &IntUses_54);
    mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_26, IntUses_54, &IntImportsUses_55);
    mercury__set__difference_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImports1_28, IntImportsUses_55, &ImpImports_56);
    mercury__set__difference_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses1_29, IntImportsUses_55, &ImpUses2_57);
    mercury__set__difference_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses2_57, ImpImports_56, &ImpUses_58);
    IntTypeDefns_59 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), IntTypeDefnsCord_32);
    ImpTypeDefns_60 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), ImpTypeDefnsCord_33);
    IntInstDefns_61 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), IntInstDefnsCord_34);
    ImpInstDefns_62 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), ImpInstDefnsCord_35);
    IntModeDefns_63 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), IntModeDefnsCord_36);
    ImpModeDefns_64 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), ImpModeDefnsCord_37);
    IntTypeClasses_65 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClassesCord_38);
    ImpTypeClasses_66 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ImpTypeClassesCord_39);
    IntInstances_67 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstancesCord_40);
    ImpInstances_68 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ImpInstancesCord_41);
    IntPredDecls_69 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), IntPredDeclsCord_42);
    ImpPredDecls_70 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), ImpPredDeclsCord_43);
    IntModeDecls_71 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), IntModeDeclsCord_44);
    ImpModeDecls_72 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), ImpModeDeclsCord_45);
    IntForeignEnums_73 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), IntForeignEnumsCord_46);
    ImpForeignEnums_74 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ImpForeignEnumsCord_47);
    IntPragmas_75 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[3]), IntPragmasCord_48);
    ImpPragmas_76 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[3]), ImpPragmasCord_49);
    IntPromises_77 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), IntPromisesCord_50);
    ImpPromises_78 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), ImpPromisesCord_51);
    IntTypeDefnMap_79 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(IntTypeDefns_59);
    IntInstDefnMap_80 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns_61);
    IntModeDefnMap_81 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns_63);
    ImpTypeDefnMap_82 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(ImpTypeDefns_60);
    ImpInstDefnMap_83 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(ImpInstDefns_62);
    ImpModeDefnMap_84 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(ImpModeDefns_64);
    IntForeignEnumMap_85 = parse_tree__convert_parse_tree__type_ctor_foreign_enum_items_to_map_1_f_0(IntForeignEnums_73);
    ImpForeignEnumMap_86 = parse_tree__convert_parse_tree__type_ctor_foreign_enum_items_to_map_1_f_0(ImpForeignEnums_74);
    parse_tree__check_parse_tree_type_defns__create_type_ctor_checked_map_9_p_0((MR_Integer) 1, ModuleName_8, IntTypeDefnMap_79, ImpTypeDefnMap_82, IntForeignEnumMap_85, ImpForeignEnumMap_86, &_TypeCtorCheckedMap_87, STATE_VARIABLE_Specs_0_89, STATE_VARIABLE_Specs_90);
    {
      ParseTreeInt0Prime_88 = (MR_Word) MR_new_object(MR_Word, (31 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_88, 0) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_88, 1) = ((MR_Box) (ModuleNameContext_9));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_88, 2) = ((MR_Box) (MaybeVersionNumbers_53));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_88, 3) = ((MR_Box) (IntIncls_24));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_88, 4) = ((MR_Box) (ImpIncls_25));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_88, 5) = ((MR_Box) (IntImports_26));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_88, 6) = ((MR_Box) (IntUses_54));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_88, 7) = ((MR_Box) (ImpImports_56));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_88, 8) = ((MR_Box) (ImpUses_58));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_88, 9) = ((MR_Box) (IntFIMSpecs_30));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_88, 10) = ((MR_Box) (ImpFIMSpecs_31));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_88, 11) = ((MR_Box) (IntTypeDefnMap_79));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_88, 12) = ((MR_Box) (IntInstDefnMap_80));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_88, 13) = ((MR_Box) (IntModeDefnMap_81));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_88, 14) = ((MR_Box) (IntTypeClasses_65));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_88, 15) = ((MR_Box) (IntInstances_67));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_88, 16) = ((MR_Box) (IntPredDecls_69));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_88, 17) = ((MR_Box) (IntModeDecls_71));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_88, 18) = ((MR_Box) (IntForeignEnumMap_85));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_88, 19) = ((MR_Box) (IntPragmas_75));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_88, 20) = ((MR_Box) (IntPromises_77));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_88, 21) = ((MR_Box) (ImpTypeDefnMap_82));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_88, 22) = ((MR_Box) (ImpInstDefnMap_83));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_88, 23) = ((MR_Box) (ImpModeDefnMap_84));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_88, 24) = ((MR_Box) (ImpTypeClasses_66));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_88, 25) = ((MR_Box) (ImpInstances_68));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_88, 26) = ((MR_Box) (ImpPredDecls_70));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_88, 27) = ((MR_Box) (ImpModeDecls_72));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_88, 28) = ((MR_Box) (ImpForeignEnumMap_86));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_88, 29) = ((MR_Box) (ImpPragmas_76));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_88, 30) = ((MR_Box) (ImpPromises_78));
    }
    *ParseTreeInt0_6 = parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0(ParseTreeInt0Prime_88);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_58_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_STATE_VARIABLE_FIMSpecs_12;

    parse_tree__comp_unit_interface__add_fim_to_specs_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_FIMSpecs_12);
    *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_FIMSpecs_12));
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_58_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv9_HeadVar__2_2;

    conv9_HeadVar__2_2 = parse_tree__prog_item__get_use_module_name_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv9_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_58_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv8_HeadVar__2_2;

    conv8_HeadVar__2_2 = parse_tree__prog_item__get_import_module_name_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_58_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__3_3;

    parse_tree__prog_item__add_included_module_name_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv6_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_58_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_FIMSpecs_12;

    parse_tree__comp_unit_interface__add_fim_to_specs_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_FIMSpecs_12);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_FIMSpecs_12));
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_58_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_2;

    conv3_HeadVar__2_2 = parse_tree__prog_item__get_use_module_name_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_58_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    conv2_HeadVar__2_2 = parse_tree__prog_item__get_import_module_name_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_58_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    parse_tree__prog_item__add_included_module_name_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_58_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_IntIncls_0_3,
  MR_Word * STATE_VARIABLE_IntIncls_4,
  MR_Word STATE_VARIABLE_ImpIncls_0_5,
  MR_Word * STATE_VARIABLE_ImpIncls_6,
  MR_Word STATE_VARIABLE_IntImports_0_7,
  MR_Word * STATE_VARIABLE_IntImports_8,
  MR_Word STATE_VARIABLE_IntUses_0_9,
  MR_Word * STATE_VARIABLE_IntUses_10,
  MR_Word STATE_VARIABLE_ImpImports_0_11,
  MR_Word * STATE_VARIABLE_ImpImports_12,
  MR_Word STATE_VARIABLE_ImpUses_0_13,
  MR_Word * STATE_VARIABLE_ImpUses_14,
  MR_Word STATE_VARIABLE_IntFIMSpecs_0_15,
  MR_Word * STATE_VARIABLE_IntFIMSpecs_16,
  MR_Word STATE_VARIABLE_ImpFIMSpecs_0_17,
  MR_Word * STATE_VARIABLE_ImpFIMSpecs_18,
  MR_Word STATE_VARIABLE_IntTypeDefns_0_19,
  MR_Word * STATE_VARIABLE_IntTypeDefns_20,
  MR_Word STATE_VARIABLE_ImpTypeDefns_0_21,
  MR_Word * STATE_VARIABLE_ImpTypeDefns_22,
  MR_Word STATE_VARIABLE_IntInstDefns_0_23,
  MR_Word * STATE_VARIABLE_IntInstDefns_24,
  MR_Word STATE_VARIABLE_ImpInstDefns_0_25,
  MR_Word * STATE_VARIABLE_ImpInstDefns_26,
  MR_Word STATE_VARIABLE_IntModeDefns_0_27,
  MR_Word * STATE_VARIABLE_IntModeDefns_28,
  MR_Word STATE_VARIABLE_ImpModeDefns_0_29,
  MR_Word * STATE_VARIABLE_ImpModeDefns_30,
  MR_Word STATE_VARIABLE_IntTypeClasses_0_31,
  MR_Word * STATE_VARIABLE_IntTypeClasses_32,
  MR_Word STATE_VARIABLE_ImpTypeClasses_0_33,
  MR_Word * STATE_VARIABLE_ImpTypeClasses_34,
  MR_Word STATE_VARIABLE_IntInstances_0_35,
  MR_Word * STATE_VARIABLE_IntInstances_36,
  MR_Word STATE_VARIABLE_ImpInstances_0_37,
  MR_Word * STATE_VARIABLE_ImpInstances_38,
  MR_Word STATE_VARIABLE_IntPredDecls_0_39,
  MR_Word * STATE_VARIABLE_IntPredDecls_40,
  MR_Word STATE_VARIABLE_ImpPredDecls_0_41,
  MR_Word * STATE_VARIABLE_ImpPredDecls_42,
  MR_Word STATE_VARIABLE_IntModeDecls_0_43,
  MR_Word * STATE_VARIABLE_IntModeDecls_44,
  MR_Word STATE_VARIABLE_ImpModeDecls_0_45,
  MR_Word * STATE_VARIABLE_ImpModeDecls_46,
  MR_Word STATE_VARIABLE_IntForeignEnums_0_47,
  MR_Word * STATE_VARIABLE_IntForeignEnums_48,
  MR_Word STATE_VARIABLE_ImpForeignEnums_0_49,
  MR_Word * STATE_VARIABLE_ImpForeignEnums_50,
  MR_Word STATE_VARIABLE_IntPragmas_0_51,
  MR_Word * STATE_VARIABLE_IntPragmas_52,
  MR_Word STATE_VARIABLE_ImpPragmas_0_53,
  MR_Word * STATE_VARIABLE_ImpPragmas_54,
  MR_Word STATE_VARIABLE_IntPromises_0_55,
  MR_Word * STATE_VARIABLE_IntPromises_56,
  MR_Word STATE_VARIABLE_ImpPromises_0_57,
  MR_Word * STATE_VARIABLE_ImpPromises_58)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ImpPromises_58 = STATE_VARIABLE_ImpPromises_0_57;
      *STATE_VARIABLE_IntPromises_56 = STATE_VARIABLE_IntPromises_0_55;
      *STATE_VARIABLE_ImpPragmas_54 = STATE_VARIABLE_ImpPragmas_0_53;
      *STATE_VARIABLE_IntPragmas_52 = STATE_VARIABLE_IntPragmas_0_51;
      *STATE_VARIABLE_ImpForeignEnums_50 = STATE_VARIABLE_ImpForeignEnums_0_49;
      *STATE_VARIABLE_IntForeignEnums_48 = STATE_VARIABLE_IntForeignEnums_0_47;
      *STATE_VARIABLE_ImpModeDecls_46 = STATE_VARIABLE_ImpModeDecls_0_45;
      *STATE_VARIABLE_IntModeDecls_44 = STATE_VARIABLE_IntModeDecls_0_43;
      *STATE_VARIABLE_ImpPredDecls_42 = STATE_VARIABLE_ImpPredDecls_0_41;
      *STATE_VARIABLE_IntPredDecls_40 = STATE_VARIABLE_IntPredDecls_0_39;
      *STATE_VARIABLE_ImpInstances_38 = STATE_VARIABLE_ImpInstances_0_37;
      *STATE_VARIABLE_IntInstances_36 = STATE_VARIABLE_IntInstances_0_35;
      *STATE_VARIABLE_ImpTypeClasses_34 = STATE_VARIABLE_ImpTypeClasses_0_33;
      *STATE_VARIABLE_IntTypeClasses_32 = STATE_VARIABLE_IntTypeClasses_0_31;
      *STATE_VARIABLE_ImpModeDefns_30 = STATE_VARIABLE_ImpModeDefns_0_29;
      *STATE_VARIABLE_IntModeDefns_28 = STATE_VARIABLE_IntModeDefns_0_27;
      *STATE_VARIABLE_ImpInstDefns_26 = STATE_VARIABLE_ImpInstDefns_0_25;
      *STATE_VARIABLE_IntInstDefns_24 = STATE_VARIABLE_IntInstDefns_0_23;
      *STATE_VARIABLE_ImpTypeDefns_22 = STATE_VARIABLE_ImpTypeDefns_0_21;
      *STATE_VARIABLE_IntTypeDefns_20 = STATE_VARIABLE_IntTypeDefns_0_19;
      *STATE_VARIABLE_ImpFIMSpecs_18 = STATE_VARIABLE_ImpFIMSpecs_0_17;
      *STATE_VARIABLE_IntFIMSpecs_16 = STATE_VARIABLE_IntFIMSpecs_0_15;
      *STATE_VARIABLE_ImpUses_14 = STATE_VARIABLE_ImpUses_0_13;
      *STATE_VARIABLE_ImpImports_12 = STATE_VARIABLE_ImpImports_0_11;
      *STATE_VARIABLE_IntUses_10 = STATE_VARIABLE_IntUses_0_9;
      *STATE_VARIABLE_IntImports_8 = STATE_VARIABLE_IntImports_0_7;
      *STATE_VARIABLE_ImpIncls_6 = STATE_VARIABLE_ImpIncls_0_5;
      *STATE_VARIABLE_IntIncls_4 = STATE_VARIABLE_IntIncls_0_3;
    }
    else
    {
      MR_Word ItemBlock_145 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ItemBlocks_146 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word SrcSection_176 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_145, (MR_Integer) 1))));
      MR_Word Incls_177 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_145, (MR_Integer) 2))));
      MR_Word Avails_178 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_145, (MR_Integer) 3))));
      MR_Word FIMs_179 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_145, (MR_Integer) 4))));
      MR_Word Items_180 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_145, (MR_Integer) 5))));
      MR_Word STATE_VARIABLE_ImpIncls_240_240;
      MR_Word STATE_VARIABLE_ImpImports_242_242;
      MR_Word STATE_VARIABLE_ImpUses_245_245;
      MR_Word STATE_VARIABLE_ImpFIMSpecs_248_248;
      MR_Word STATE_VARIABLE_ImpTypeDefns_249_249;
      MR_Word STATE_VARIABLE_ImpInstDefns_250_250;
      MR_Word STATE_VARIABLE_ImpModeDefns_251_251;
      MR_Word STATE_VARIABLE_ImpTypeClasses_252_252;
      MR_Word STATE_VARIABLE_ImpInstances_253_253;
      MR_Word STATE_VARIABLE_ImpPredDecls_254_254;
      MR_Word STATE_VARIABLE_ImpModeDecls_255_255;
      MR_Word STATE_VARIABLE_ImpForeignEnums_256_256;
      MR_Word STATE_VARIABLE_ImpPragmas_257_257;
      MR_Word STATE_VARIABLE_ImpPromises_258_258;
      MR_Word STATE_VARIABLE_IntIncls_260_260;
      MR_Word STATE_VARIABLE_IntImports_262_262;
      MR_Word STATE_VARIABLE_IntUses_265_265;
      MR_Word STATE_VARIABLE_IntFIMSpecs_268_268;
      MR_Word STATE_VARIABLE_IntTypeDefns_269_269;
      MR_Word STATE_VARIABLE_IntInstDefns_270_270;
      MR_Word STATE_VARIABLE_IntModeDefns_271_271;
      MR_Word STATE_VARIABLE_IntTypeClasses_272_272;
      MR_Word STATE_VARIABLE_IntInstances_273_273;
      MR_Word STATE_VARIABLE_IntPredDecls_274_274;
      MR_Word STATE_VARIABLE_IntModeDecls_275_275;
      MR_Word STATE_VARIABLE_IntForeignEnums_276_276;
      MR_Word STATE_VARIABLE_IntPragmas_277_277;
      MR_Word STATE_VARIABLE_IntPromises_278_278;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_IntIncls_0_3;
      MR_Word next_value_of_STATE_VARIABLE_ImpIncls_0_5;
      MR_Word next_value_of_STATE_VARIABLE_IntImports_0_7;
      MR_Word next_value_of_STATE_VARIABLE_IntUses_0_9;
      MR_Word next_value_of_STATE_VARIABLE_ImpImports_0_11;
      MR_Word next_value_of_STATE_VARIABLE_ImpUses_0_13;
      MR_Word next_value_of_STATE_VARIABLE_IntFIMSpecs_0_15;
      MR_Word next_value_of_STATE_VARIABLE_ImpFIMSpecs_0_17;
      MR_Word next_value_of_STATE_VARIABLE_IntTypeDefns_0_19;
      MR_Word next_value_of_STATE_VARIABLE_ImpTypeDefns_0_21;
      MR_Word next_value_of_STATE_VARIABLE_IntInstDefns_0_23;
      MR_Word next_value_of_STATE_VARIABLE_ImpInstDefns_0_25;
      MR_Word next_value_of_STATE_VARIABLE_IntModeDefns_0_27;
      MR_Word next_value_of_STATE_VARIABLE_ImpModeDefns_0_29;
      MR_Word next_value_of_STATE_VARIABLE_IntTypeClasses_0_31;
      MR_Word next_value_of_STATE_VARIABLE_ImpTypeClasses_0_33;
      MR_Word next_value_of_STATE_VARIABLE_IntInstances_0_35;
      MR_Word next_value_of_STATE_VARIABLE_ImpInstances_0_37;
      MR_Word next_value_of_STATE_VARIABLE_IntPredDecls_0_39;
      MR_Word next_value_of_STATE_VARIABLE_ImpPredDecls_0_41;
      MR_Word next_value_of_STATE_VARIABLE_IntModeDecls_0_43;
      MR_Word next_value_of_STATE_VARIABLE_ImpModeDecls_0_45;
      MR_Word next_value_of_STATE_VARIABLE_IntForeignEnums_0_47;
      MR_Word next_value_of_STATE_VARIABLE_ImpForeignEnums_0_49;
      MR_Word next_value_of_STATE_VARIABLE_IntPragmas_0_51;
      MR_Word next_value_of_STATE_VARIABLE_ImpPragmas_0_53;
      MR_Word next_value_of_STATE_VARIABLE_IntPromises_0_55;
      MR_Word next_value_of_STATE_VARIABLE_ImpPromises_0_57;

      switch (SrcSection_176) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
        case (MR_Integer) 1:
          {
            MR_Word Var_241;
            MR_Word Var_244;
            MR_Word Imports_307;
            MR_Word Uses_308;
            MR_Box conv1_STATE_VARIABLE_ImpIncls_240_240;
            MR_Box conv5_STATE_VARIABLE_ImpFIMSpecs_248_248;

            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[6]), Incls_177, ((MR_Box) (STATE_VARIABLE_ImpIncls_0_5)), &conv1_STATE_VARIABLE_ImpIncls_240_240);
            STATE_VARIABLE_ImpIncls_240_240 = ((MR_Word) (conv1_STATE_VARIABLE_ImpIncls_240_240));
            parse_tree__prog_item__avail_imports_uses_3_p_0(Avails_178, &Imports_307, &Uses_308);
            Var_241 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_import_info_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[7]), Imports_307);
            mercury__set__insert_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_241, STATE_VARIABLE_ImpImports_0_11, &STATE_VARIABLE_ImpImports_242_242);
            Var_244 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[8]), Uses_308);
            mercury__set__insert_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_244, STATE_VARIABLE_ImpUses_0_13, &STATE_VARIABLE_ImpUses_245_245);
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[5]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[9]), FIMs_179, ((MR_Box) (STATE_VARIABLE_ImpFIMSpecs_0_17)), &conv5_STATE_VARIABLE_ImpFIMSpecs_248_248);
            STATE_VARIABLE_ImpFIMSpecs_248_248 = ((MR_Word) (conv5_STATE_VARIABLE_ImpFIMSpecs_248_248));
            parse_tree__comp_unit_interface__get_private_interface_int0_from_items_22_p_0(HeadVar__1_1, Items_180, STATE_VARIABLE_ImpTypeDefns_0_21, &STATE_VARIABLE_ImpTypeDefns_249_249, STATE_VARIABLE_ImpInstDefns_0_25, &STATE_VARIABLE_ImpInstDefns_250_250, STATE_VARIABLE_ImpModeDefns_0_29, &STATE_VARIABLE_ImpModeDefns_251_251, STATE_VARIABLE_ImpTypeClasses_0_33, &STATE_VARIABLE_ImpTypeClasses_252_252, STATE_VARIABLE_ImpInstances_0_37, &STATE_VARIABLE_ImpInstances_253_253, STATE_VARIABLE_ImpPredDecls_0_41, &STATE_VARIABLE_ImpPredDecls_254_254, STATE_VARIABLE_ImpModeDecls_0_45, &STATE_VARIABLE_ImpModeDecls_255_255, STATE_VARIABLE_ImpForeignEnums_0_49, &STATE_VARIABLE_ImpForeignEnums_256_256, STATE_VARIABLE_ImpPragmas_0_53, &STATE_VARIABLE_ImpPragmas_257_257, STATE_VARIABLE_ImpPromises_0_57, &STATE_VARIABLE_ImpPromises_258_258);
            STATE_VARIABLE_IntIncls_260_260 = STATE_VARIABLE_IntIncls_0_3;
            STATE_VARIABLE_IntImports_262_262 = STATE_VARIABLE_IntImports_0_7;
            STATE_VARIABLE_IntUses_265_265 = STATE_VARIABLE_IntUses_0_9;
            STATE_VARIABLE_IntFIMSpecs_268_268 = STATE_VARIABLE_IntFIMSpecs_0_15;
            STATE_VARIABLE_IntTypeDefns_269_269 = STATE_VARIABLE_IntTypeDefns_0_19;
            STATE_VARIABLE_IntInstDefns_270_270 = STATE_VARIABLE_IntInstDefns_0_23;
            STATE_VARIABLE_IntModeDefns_271_271 = STATE_VARIABLE_IntModeDefns_0_27;
            STATE_VARIABLE_IntTypeClasses_272_272 = STATE_VARIABLE_IntTypeClasses_0_31;
            STATE_VARIABLE_IntInstances_273_273 = STATE_VARIABLE_IntInstances_0_35;
            STATE_VARIABLE_IntPredDecls_274_274 = STATE_VARIABLE_IntPredDecls_0_39;
            STATE_VARIABLE_IntModeDecls_275_275 = STATE_VARIABLE_IntModeDecls_0_43;
            STATE_VARIABLE_IntForeignEnums_276_276 = STATE_VARIABLE_IntForeignEnums_0_47;
            STATE_VARIABLE_IntPragmas_277_277 = STATE_VARIABLE_IntPragmas_0_51;
            STATE_VARIABLE_IntPromises_278_278 = STATE_VARIABLE_IntPromises_0_55;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Imports_181;
            MR_Word Uses_182;
            MR_Word Var_261;
            MR_Word Var_264;
            MR_Box conv7_STATE_VARIABLE_IntIncls_260_260;
            MR_Box conv11_STATE_VARIABLE_IntFIMSpecs_268_268;

            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[10]), Incls_177, ((MR_Box) (STATE_VARIABLE_IntIncls_0_3)), &conv7_STATE_VARIABLE_IntIncls_260_260);
            STATE_VARIABLE_IntIncls_260_260 = ((MR_Word) (conv7_STATE_VARIABLE_IntIncls_260_260));
            parse_tree__prog_item__avail_imports_uses_3_p_0(Avails_178, &Imports_181, &Uses_182);
            Var_261 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_import_info_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[11]), Imports_181);
            mercury__set__insert_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_261, STATE_VARIABLE_IntImports_0_7, &STATE_VARIABLE_IntImports_262_262);
            Var_264 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[12]), Uses_182);
            mercury__set__insert_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_264, STATE_VARIABLE_IntUses_0_9, &STATE_VARIABLE_IntUses_265_265);
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[5]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[13]), FIMs_179, ((MR_Box) (STATE_VARIABLE_IntFIMSpecs_0_15)), &conv11_STATE_VARIABLE_IntFIMSpecs_268_268);
            STATE_VARIABLE_IntFIMSpecs_268_268 = ((MR_Word) (conv11_STATE_VARIABLE_IntFIMSpecs_268_268));
            parse_tree__comp_unit_interface__get_private_interface_int0_from_items_22_p_0(HeadVar__1_1, Items_180, STATE_VARIABLE_IntTypeDefns_0_19, &STATE_VARIABLE_IntTypeDefns_269_269, STATE_VARIABLE_IntInstDefns_0_23, &STATE_VARIABLE_IntInstDefns_270_270, STATE_VARIABLE_IntModeDefns_0_27, &STATE_VARIABLE_IntModeDefns_271_271, STATE_VARIABLE_IntTypeClasses_0_31, &STATE_VARIABLE_IntTypeClasses_272_272, STATE_VARIABLE_IntInstances_0_35, &STATE_VARIABLE_IntInstances_273_273, STATE_VARIABLE_IntPredDecls_0_39, &STATE_VARIABLE_IntPredDecls_274_274, STATE_VARIABLE_IntModeDecls_0_43, &STATE_VARIABLE_IntModeDecls_275_275, STATE_VARIABLE_IntForeignEnums_0_47, &STATE_VARIABLE_IntForeignEnums_276_276, STATE_VARIABLE_IntPragmas_0_51, &STATE_VARIABLE_IntPragmas_277_277, STATE_VARIABLE_IntPromises_0_55, &STATE_VARIABLE_IntPromises_278_278);
            STATE_VARIABLE_ImpIncls_240_240 = STATE_VARIABLE_ImpIncls_0_5;
            STATE_VARIABLE_ImpImports_242_242 = STATE_VARIABLE_ImpImports_0_11;
            STATE_VARIABLE_ImpUses_245_245 = STATE_VARIABLE_ImpUses_0_13;
            STATE_VARIABLE_ImpFIMSpecs_248_248 = STATE_VARIABLE_ImpFIMSpecs_0_17;
            STATE_VARIABLE_ImpTypeDefns_249_249 = STATE_VARIABLE_ImpTypeDefns_0_21;
            STATE_VARIABLE_ImpInstDefns_250_250 = STATE_VARIABLE_ImpInstDefns_0_25;
            STATE_VARIABLE_ImpModeDefns_251_251 = STATE_VARIABLE_ImpModeDefns_0_29;
            STATE_VARIABLE_ImpTypeClasses_252_252 = STATE_VARIABLE_ImpTypeClasses_0_33;
            STATE_VARIABLE_ImpInstances_253_253 = STATE_VARIABLE_ImpInstances_0_37;
            STATE_VARIABLE_ImpPredDecls_254_254 = STATE_VARIABLE_ImpPredDecls_0_41;
            STATE_VARIABLE_ImpModeDecls_255_255 = STATE_VARIABLE_ImpModeDecls_0_45;
            STATE_VARIABLE_ImpForeignEnums_256_256 = STATE_VARIABLE_ImpForeignEnums_0_49;
            STATE_VARIABLE_ImpPragmas_257_257 = STATE_VARIABLE_ImpPragmas_0_53;
            STATE_VARIABLE_ImpPromises_258_258 = STATE_VARIABLE_ImpPromises_0_57;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ItemBlocks_146;
      next_value_of_STATE_VARIABLE_IntIncls_0_3 = STATE_VARIABLE_IntIncls_260_260;
      next_value_of_STATE_VARIABLE_ImpIncls_0_5 = STATE_VARIABLE_ImpIncls_240_240;
      next_value_of_STATE_VARIABLE_IntImports_0_7 = STATE_VARIABLE_IntImports_262_262;
      next_value_of_STATE_VARIABLE_IntUses_0_9 = STATE_VARIABLE_IntUses_265_265;
      next_value_of_STATE_VARIABLE_ImpImports_0_11 = STATE_VARIABLE_ImpImports_242_242;
      next_value_of_STATE_VARIABLE_ImpUses_0_13 = STATE_VARIABLE_ImpUses_245_245;
      next_value_of_STATE_VARIABLE_IntFIMSpecs_0_15 = STATE_VARIABLE_IntFIMSpecs_268_268;
      next_value_of_STATE_VARIABLE_ImpFIMSpecs_0_17 = STATE_VARIABLE_ImpFIMSpecs_248_248;
      next_value_of_STATE_VARIABLE_IntTypeDefns_0_19 = STATE_VARIABLE_IntTypeDefns_269_269;
      next_value_of_STATE_VARIABLE_ImpTypeDefns_0_21 = STATE_VARIABLE_ImpTypeDefns_249_249;
      next_value_of_STATE_VARIABLE_IntInstDefns_0_23 = STATE_VARIABLE_IntInstDefns_270_270;
      next_value_of_STATE_VARIABLE_ImpInstDefns_0_25 = STATE_VARIABLE_ImpInstDefns_250_250;
      next_value_of_STATE_VARIABLE_IntModeDefns_0_27 = STATE_VARIABLE_IntModeDefns_271_271;
      next_value_of_STATE_VARIABLE_ImpModeDefns_0_29 = STATE_VARIABLE_ImpModeDefns_251_251;
      next_value_of_STATE_VARIABLE_IntTypeClasses_0_31 = STATE_VARIABLE_IntTypeClasses_272_272;
      next_value_of_STATE_VARIABLE_ImpTypeClasses_0_33 = STATE_VARIABLE_ImpTypeClasses_252_252;
      next_value_of_STATE_VARIABLE_IntInstances_0_35 = STATE_VARIABLE_IntInstances_273_273;
      next_value_of_STATE_VARIABLE_ImpInstances_0_37 = STATE_VARIABLE_ImpInstances_253_253;
      next_value_of_STATE_VARIABLE_IntPredDecls_0_39 = STATE_VARIABLE_IntPredDecls_274_274;
      next_value_of_STATE_VARIABLE_ImpPredDecls_0_41 = STATE_VARIABLE_ImpPredDecls_254_254;
      next_value_of_STATE_VARIABLE_IntModeDecls_0_43 = STATE_VARIABLE_IntModeDecls_275_275;
      next_value_of_STATE_VARIABLE_ImpModeDecls_0_45 = STATE_VARIABLE_ImpModeDecls_255_255;
      next_value_of_STATE_VARIABLE_IntForeignEnums_0_47 = STATE_VARIABLE_IntForeignEnums_276_276;
      next_value_of_STATE_VARIABLE_ImpForeignEnums_0_49 = STATE_VARIABLE_ImpForeignEnums_256_256;
      next_value_of_STATE_VARIABLE_IntPragmas_0_51 = STATE_VARIABLE_IntPragmas_277_277;
      next_value_of_STATE_VARIABLE_ImpPragmas_0_53 = STATE_VARIABLE_ImpPragmas_257_257;
      next_value_of_STATE_VARIABLE_IntPromises_0_55 = STATE_VARIABLE_IntPromises_278_278;
      next_value_of_STATE_VARIABLE_ImpPromises_0_57 = STATE_VARIABLE_ImpPromises_258_258;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_IntIncls_0_3 = next_value_of_STATE_VARIABLE_IntIncls_0_3;
      STATE_VARIABLE_ImpIncls_0_5 = next_value_of_STATE_VARIABLE_ImpIncls_0_5;
      STATE_VARIABLE_IntImports_0_7 = next_value_of_STATE_VARIABLE_IntImports_0_7;
      STATE_VARIABLE_IntUses_0_9 = next_value_of_STATE_VARIABLE_IntUses_0_9;
      STATE_VARIABLE_ImpImports_0_11 = next_value_of_STATE_VARIABLE_ImpImports_0_11;
      STATE_VARIABLE_ImpUses_0_13 = next_value_of_STATE_VARIABLE_ImpUses_0_13;
      STATE_VARIABLE_IntFIMSpecs_0_15 = next_value_of_STATE_VARIABLE_IntFIMSpecs_0_15;
      STATE_VARIABLE_ImpFIMSpecs_0_17 = next_value_of_STATE_VARIABLE_ImpFIMSpecs_0_17;
      STATE_VARIABLE_IntTypeDefns_0_19 = next_value_of_STATE_VARIABLE_IntTypeDefns_0_19;
      STATE_VARIABLE_ImpTypeDefns_0_21 = next_value_of_STATE_VARIABLE_ImpTypeDefns_0_21;
      STATE_VARIABLE_IntInstDefns_0_23 = next_value_of_STATE_VARIABLE_IntInstDefns_0_23;
      STATE_VARIABLE_ImpInstDefns_0_25 = next_value_of_STATE_VARIABLE_ImpInstDefns_0_25;
      STATE_VARIABLE_IntModeDefns_0_27 = next_value_of_STATE_VARIABLE_IntModeDefns_0_27;
      STATE_VARIABLE_ImpModeDefns_0_29 = next_value_of_STATE_VARIABLE_ImpModeDefns_0_29;
      STATE_VARIABLE_IntTypeClasses_0_31 = next_value_of_STATE_VARIABLE_IntTypeClasses_0_31;
      STATE_VARIABLE_ImpTypeClasses_0_33 = next_value_of_STATE_VARIABLE_ImpTypeClasses_0_33;
      STATE_VARIABLE_IntInstances_0_35 = next_value_of_STATE_VARIABLE_IntInstances_0_35;
      STATE_VARIABLE_ImpInstances_0_37 = next_value_of_STATE_VARIABLE_ImpInstances_0_37;
      STATE_VARIABLE_IntPredDecls_0_39 = next_value_of_STATE_VARIABLE_IntPredDecls_0_39;
      STATE_VARIABLE_ImpPredDecls_0_41 = next_value_of_STATE_VARIABLE_ImpPredDecls_0_41;
      STATE_VARIABLE_IntModeDecls_0_43 = next_value_of_STATE_VARIABLE_IntModeDecls_0_43;
      STATE_VARIABLE_ImpModeDecls_0_45 = next_value_of_STATE_VARIABLE_ImpModeDecls_0_45;
      STATE_VARIABLE_IntForeignEnums_0_47 = next_value_of_STATE_VARIABLE_IntForeignEnums_0_47;
      STATE_VARIABLE_ImpForeignEnums_0_49 = next_value_of_STATE_VARIABLE_ImpForeignEnums_0_49;
      STATE_VARIABLE_IntPragmas_0_51 = next_value_of_STATE_VARIABLE_IntPragmas_0_51;
      STATE_VARIABLE_ImpPragmas_0_53 = next_value_of_STATE_VARIABLE_ImpPragmas_0_53;
      STATE_VARIABLE_IntPromises_0_55 = next_value_of_STATE_VARIABLE_IntPromises_0_55;
      STATE_VARIABLE_ImpPromises_0_57 = next_value_of_STATE_VARIABLE_ImpPromises_0_57;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_items_22_p_0_1(
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

static void MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_items_22_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_TypeDefns_0_3,
  MR_Word * STATE_VARIABLE_TypeDefns_4,
  MR_Word STATE_VARIABLE_InstDefns_0_5,
  MR_Word * STATE_VARIABLE_InstDefns_6,
  MR_Word STATE_VARIABLE_ModeDefns_0_7,
  MR_Word * STATE_VARIABLE_ModeDefns_8,
  MR_Word STATE_VARIABLE_TypeClasses_0_9,
  MR_Word * STATE_VARIABLE_TypeClasses_10,
  MR_Word STATE_VARIABLE_Instances_0_11,
  MR_Word * STATE_VARIABLE_Instances_12,
  MR_Word STATE_VARIABLE_PredDecls_0_13,
  MR_Word * STATE_VARIABLE_PredDecls_14,
  MR_Word STATE_VARIABLE_ModeDecls_0_15,
  MR_Word * STATE_VARIABLE_ModeDecls_16,
  MR_Word STATE_VARIABLE_ForeignEnums_0_17,
  MR_Word * STATE_VARIABLE_ForeignEnums_18,
  MR_Word STATE_VARIABLE_Pragmas_0_19,
  MR_Word * STATE_VARIABLE_Pragmas_20,
  MR_Word STATE_VARIABLE_Promises_0_21,
  MR_Word * STATE_VARIABLE_Promises_22)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Promises_22 = STATE_VARIABLE_Promises_0_21;
      *STATE_VARIABLE_Pragmas_20 = STATE_VARIABLE_Pragmas_0_19;
      *STATE_VARIABLE_ForeignEnums_18 = STATE_VARIABLE_ForeignEnums_0_17;
      *STATE_VARIABLE_ModeDecls_16 = STATE_VARIABLE_ModeDecls_0_15;
      *STATE_VARIABLE_PredDecls_14 = STATE_VARIABLE_PredDecls_0_13;
      *STATE_VARIABLE_Instances_12 = STATE_VARIABLE_Instances_0_11;
      *STATE_VARIABLE_TypeClasses_10 = STATE_VARIABLE_TypeClasses_0_9;
      *STATE_VARIABLE_ModeDefns_8 = STATE_VARIABLE_ModeDefns_0_7;
      *STATE_VARIABLE_InstDefns_6 = STATE_VARIABLE_InstDefns_0_5;
      *STATE_VARIABLE_TypeDefns_4 = STATE_VARIABLE_TypeDefns_0_3;
    }
    else
    {
      MR_Word Item_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Items_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Promises_123_123;
      MR_Word STATE_VARIABLE_Pragmas_124_124;
      MR_Word STATE_VARIABLE_ForeignEnums_125_125;
      MR_Word STATE_VARIABLE_Instances_127_127;
      MR_Word STATE_VARIABLE_TypeClasses_128_128;
      MR_Word STATE_VARIABLE_ModeDecls_129_129;
      MR_Word STATE_VARIABLE_PredDecls_130_130;
      MR_Word STATE_VARIABLE_ModeDefns_131_131;
      MR_Word STATE_VARIABLE_InstDefns_132_132;
      MR_Word STATE_VARIABLE_TypeDefns_133_133;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_TypeDefns_0_3;
      MR_Word next_value_of_STATE_VARIABLE_InstDefns_0_5;
      MR_Word next_value_of_STATE_VARIABLE_ModeDefns_0_7;
      MR_Word next_value_of_STATE_VARIABLE_TypeClasses_0_9;
      MR_Word next_value_of_STATE_VARIABLE_Instances_0_11;
      MR_Word next_value_of_STATE_VARIABLE_PredDecls_0_13;
      MR_Word next_value_of_STATE_VARIABLE_ModeDecls_0_15;
      MR_Word next_value_of_STATE_VARIABLE_ForeignEnums_0_17;
      MR_Word next_value_of_STATE_VARIABLE_Pragmas_0_19;
      MR_Word next_value_of_STATE_VARIABLE_Promises_0_21;

      switch (MR_tag((MR_Word) Item_55)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_TypeDefns_133_133 = STATE_VARIABLE_TypeDefns_0_3;
            STATE_VARIABLE_InstDefns_132_132 = STATE_VARIABLE_InstDefns_0_5;
            STATE_VARIABLE_ModeDefns_131_131 = STATE_VARIABLE_ModeDefns_0_7;
            STATE_VARIABLE_TypeClasses_128_128 = STATE_VARIABLE_TypeClasses_0_9;
            STATE_VARIABLE_Instances_127_127 = STATE_VARIABLE_Instances_0_11;
            STATE_VARIABLE_PredDecls_130_130 = STATE_VARIABLE_PredDecls_0_13;
            STATE_VARIABLE_ModeDecls_129_129 = STATE_VARIABLE_ModeDecls_0_15;
            STATE_VARIABLE_ForeignEnums_125_125 = STATE_VARIABLE_ForeignEnums_0_17;
            STATE_VARIABLE_Pragmas_124_124 = STATE_VARIABLE_Pragmas_0_19;
            STATE_VARIABLE_Promises_123_123 = STATE_VARIABLE_Promises_0_21;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word InstDefn_68 = (MR_Word) (MR_body((MR_Word) (Item_55), (MR_Integer) 1));

            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), ((MR_Box) (InstDefn_68)), STATE_VARIABLE_InstDefns_0_5, &STATE_VARIABLE_InstDefns_132_132);
            STATE_VARIABLE_TypeDefns_133_133 = STATE_VARIABLE_TypeDefns_0_3;
            STATE_VARIABLE_ModeDefns_131_131 = STATE_VARIABLE_ModeDefns_0_7;
            STATE_VARIABLE_TypeClasses_128_128 = STATE_VARIABLE_TypeClasses_0_9;
            STATE_VARIABLE_Instances_127_127 = STATE_VARIABLE_Instances_0_11;
            STATE_VARIABLE_PredDecls_130_130 = STATE_VARIABLE_PredDecls_0_13;
            STATE_VARIABLE_ModeDecls_129_129 = STATE_VARIABLE_ModeDecls_0_15;
            STATE_VARIABLE_ForeignEnums_125_125 = STATE_VARIABLE_ForeignEnums_0_17;
            STATE_VARIABLE_Pragmas_124_124 = STATE_VARIABLE_Pragmas_0_19;
            STATE_VARIABLE_Promises_123_123 = STATE_VARIABLE_Promises_0_21;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ModeDefn_69 = (MR_Word) (MR_body((MR_Word) (Item_55), (MR_Integer) 2));

            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), ((MR_Box) (ModeDefn_69)), STATE_VARIABLE_ModeDefns_0_7, &STATE_VARIABLE_ModeDefns_131_131);
            STATE_VARIABLE_TypeDefns_133_133 = STATE_VARIABLE_TypeDefns_0_3;
            STATE_VARIABLE_InstDefns_132_132 = STATE_VARIABLE_InstDefns_0_5;
            STATE_VARIABLE_TypeClasses_128_128 = STATE_VARIABLE_TypeClasses_0_9;
            STATE_VARIABLE_Instances_127_127 = STATE_VARIABLE_Instances_0_11;
            STATE_VARIABLE_PredDecls_130_130 = STATE_VARIABLE_PredDecls_0_13;
            STATE_VARIABLE_ModeDecls_129_129 = STATE_VARIABLE_ModeDecls_0_15;
            STATE_VARIABLE_ForeignEnums_125_125 = STATE_VARIABLE_ForeignEnums_0_17;
            STATE_VARIABLE_Pragmas_124_124 = STATE_VARIABLE_Pragmas_0_19;
            STATE_VARIABLE_Promises_123_123 = STATE_VARIABLE_Promises_0_21;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_55, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word PredDecl_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_55, (MR_Integer) 1))));

                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), ((MR_Box) (PredDecl_70)), STATE_VARIABLE_PredDecls_0_13, &STATE_VARIABLE_PredDecls_130_130);
                STATE_VARIABLE_TypeDefns_133_133 = STATE_VARIABLE_TypeDefns_0_3;
                STATE_VARIABLE_InstDefns_132_132 = STATE_VARIABLE_InstDefns_0_5;
                STATE_VARIABLE_ModeDefns_131_131 = STATE_VARIABLE_ModeDefns_0_7;
                STATE_VARIABLE_TypeClasses_128_128 = STATE_VARIABLE_TypeClasses_0_9;
                STATE_VARIABLE_Instances_127_127 = STATE_VARIABLE_Instances_0_11;
                STATE_VARIABLE_ModeDecls_129_129 = STATE_VARIABLE_ModeDecls_0_15;
                STATE_VARIABLE_ForeignEnums_125_125 = STATE_VARIABLE_ForeignEnums_0_17;
                STATE_VARIABLE_Pragmas_124_124 = STATE_VARIABLE_Pragmas_0_19;
                STATE_VARIABLE_Promises_123_123 = STATE_VARIABLE_Promises_0_21;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ModeDecl_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_55, (MR_Integer) 1))));

                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), ((MR_Box) (ModeDecl_71)), STATE_VARIABLE_ModeDecls_0_15, &STATE_VARIABLE_ModeDecls_129_129);
                STATE_VARIABLE_TypeDefns_133_133 = STATE_VARIABLE_TypeDefns_0_3;
                STATE_VARIABLE_InstDefns_132_132 = STATE_VARIABLE_InstDefns_0_5;
                STATE_VARIABLE_ModeDefns_131_131 = STATE_VARIABLE_ModeDefns_0_7;
                STATE_VARIABLE_TypeClasses_128_128 = STATE_VARIABLE_TypeClasses_0_9;
                STATE_VARIABLE_Instances_127_127 = STATE_VARIABLE_Instances_0_11;
                STATE_VARIABLE_PredDecls_130_130 = STATE_VARIABLE_PredDecls_0_13;
                STATE_VARIABLE_ForeignEnums_125_125 = STATE_VARIABLE_ForeignEnums_0_17;
                STATE_VARIABLE_Pragmas_124_124 = STATE_VARIABLE_Pragmas_0_19;
                STATE_VARIABLE_Promises_123_123 = STATE_VARIABLE_Promises_0_21;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ItemForeignEnumInfo_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_55, (MR_Integer) 1))));

                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ((MR_Box) (ItemForeignEnumInfo_75)), STATE_VARIABLE_ForeignEnums_0_17, &STATE_VARIABLE_ForeignEnums_125_125);
                STATE_VARIABLE_TypeDefns_133_133 = STATE_VARIABLE_TypeDefns_0_3;
                STATE_VARIABLE_InstDefns_132_132 = STATE_VARIABLE_InstDefns_0_5;
                STATE_VARIABLE_ModeDefns_131_131 = STATE_VARIABLE_ModeDefns_0_7;
                STATE_VARIABLE_TypeClasses_128_128 = STATE_VARIABLE_TypeClasses_0_9;
                STATE_VARIABLE_Instances_127_127 = STATE_VARIABLE_Instances_0_11;
                STATE_VARIABLE_PredDecls_130_130 = STATE_VARIABLE_PredDecls_0_13;
                STATE_VARIABLE_ModeDecls_129_129 = STATE_VARIABLE_ModeDecls_0_15;
                STATE_VARIABLE_Pragmas_124_124 = STATE_VARIABLE_Pragmas_0_19;
                STATE_VARIABLE_Promises_123_123 = STATE_VARIABLE_Promises_0_21;
              }
              break;
            case (MR_Integer) 3:
              {
                STATE_VARIABLE_TypeDefns_133_133 = STATE_VARIABLE_TypeDefns_0_3;
                STATE_VARIABLE_InstDefns_132_132 = STATE_VARIABLE_InstDefns_0_5;
                STATE_VARIABLE_ModeDefns_131_131 = STATE_VARIABLE_ModeDefns_0_7;
                STATE_VARIABLE_TypeClasses_128_128 = STATE_VARIABLE_TypeClasses_0_9;
                STATE_VARIABLE_Instances_127_127 = STATE_VARIABLE_Instances_0_11;
                STATE_VARIABLE_PredDecls_130_130 = STATE_VARIABLE_PredDecls_0_13;
                STATE_VARIABLE_ModeDecls_129_129 = STATE_VARIABLE_ModeDecls_0_15;
                STATE_VARIABLE_ForeignEnums_125_125 = STATE_VARIABLE_ForeignEnums_0_17;
                STATE_VARIABLE_Pragmas_124_124 = STATE_VARIABLE_Pragmas_0_19;
                STATE_VARIABLE_Promises_123_123 = STATE_VARIABLE_Promises_0_21;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Promise_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_55, (MR_Integer) 1))));

                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), ((MR_Box) (Promise_81)), STATE_VARIABLE_Promises_0_21, &STATE_VARIABLE_Promises_123_123);
                STATE_VARIABLE_TypeDefns_133_133 = STATE_VARIABLE_TypeDefns_0_3;
                STATE_VARIABLE_InstDefns_132_132 = STATE_VARIABLE_InstDefns_0_5;
                STATE_VARIABLE_ModeDefns_131_131 = STATE_VARIABLE_ModeDefns_0_7;
                STATE_VARIABLE_TypeClasses_128_128 = STATE_VARIABLE_TypeClasses_0_9;
                STATE_VARIABLE_Instances_127_127 = STATE_VARIABLE_Instances_0_11;
                STATE_VARIABLE_PredDecls_130_130 = STATE_VARIABLE_PredDecls_0_13;
                STATE_VARIABLE_ModeDecls_129_129 = STATE_VARIABLE_ModeDecls_0_15;
                STATE_VARIABLE_ForeignEnums_125_125 = STATE_VARIABLE_ForeignEnums_0_17;
                STATE_VARIABLE_Pragmas_124_124 = STATE_VARIABLE_Pragmas_0_19;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word TypeClass_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_55, (MR_Integer) 1))));

                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ((MR_Box) (TypeClass_72)), STATE_VARIABLE_TypeClasses_0_9, &STATE_VARIABLE_TypeClasses_128_128);
                STATE_VARIABLE_TypeDefns_133_133 = STATE_VARIABLE_TypeDefns_0_3;
                STATE_VARIABLE_InstDefns_132_132 = STATE_VARIABLE_InstDefns_0_5;
                STATE_VARIABLE_ModeDefns_131_131 = STATE_VARIABLE_ModeDefns_0_7;
                STATE_VARIABLE_Instances_127_127 = STATE_VARIABLE_Instances_0_11;
                STATE_VARIABLE_PredDecls_130_130 = STATE_VARIABLE_PredDecls_0_13;
                STATE_VARIABLE_ModeDecls_129_129 = STATE_VARIABLE_ModeDecls_0_15;
                STATE_VARIABLE_ForeignEnums_125_125 = STATE_VARIABLE_ForeignEnums_0_17;
                STATE_VARIABLE_Pragmas_124_124 = STATE_VARIABLE_Pragmas_0_19;
                STATE_VARIABLE_Promises_123_123 = STATE_VARIABLE_Promises_0_21;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Instance_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_55, (MR_Integer) 1))));
                MR_Word AbstractInstance_74;
                MR_Word Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance_73, (MR_Integer) 0))));
                MR_Word Var_145 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance_73, (MR_Integer) 1))));
                MR_Word Var_146 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance_73, (MR_Integer) 2))));
                MR_Word Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance_73, (MR_Integer) 3))));
                MR_Word Var_149 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance_73, (MR_Integer) 5))));
                MR_Word Var_150 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance_73, (MR_Integer) 6))));
                MR_Word Var_151 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance_73, (MR_Integer) 7))));
                MR_Integer Var_152 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Instance_73, (MR_Integer) 8))));

                {
                  AbstractInstance_74 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), AbstractInstance_74, 0) = ((MR_Box) (Var_144));
                  MR_hl_field(MR_mktag(0), AbstractInstance_74, 1) = ((MR_Box) (Var_145));
                  MR_hl_field(MR_mktag(0), AbstractInstance_74, 2) = ((MR_Box) (Var_146));
                  MR_hl_field(MR_mktag(0), AbstractInstance_74, 3) = ((MR_Box) (Var_147));
                  MR_hl_field(MR_mktag(0), AbstractInstance_74, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), AbstractInstance_74, 5) = ((MR_Box) (Var_149));
                  MR_hl_field(MR_mktag(0), AbstractInstance_74, 6) = ((MR_Box) (Var_150));
                  MR_hl_field(MR_mktag(0), AbstractInstance_74, 7) = ((MR_Box) (Var_151));
                  MR_hl_field(MR_mktag(0), AbstractInstance_74, 8) = ((MR_Box) (Var_152));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ((MR_Box) (AbstractInstance_74)), STATE_VARIABLE_Instances_0_11, &STATE_VARIABLE_Instances_127_127);
                STATE_VARIABLE_TypeDefns_133_133 = STATE_VARIABLE_TypeDefns_0_3;
                STATE_VARIABLE_InstDefns_132_132 = STATE_VARIABLE_InstDefns_0_5;
                STATE_VARIABLE_ModeDefns_131_131 = STATE_VARIABLE_ModeDefns_0_7;
                STATE_VARIABLE_TypeClasses_128_128 = STATE_VARIABLE_TypeClasses_0_9;
                STATE_VARIABLE_PredDecls_130_130 = STATE_VARIABLE_PredDecls_0_13;
                STATE_VARIABLE_ModeDecls_129_129 = STATE_VARIABLE_ModeDecls_0_15;
                STATE_VARIABLE_ForeignEnums_125_125 = STATE_VARIABLE_ForeignEnums_0_17;
                STATE_VARIABLE_Pragmas_124_124 = STATE_VARIABLE_Pragmas_0_19;
                STATE_VARIABLE_Promises_123_123 = STATE_VARIABLE_Promises_0_21;
              }
              break;
            case (MR_Integer) 7:
              {
                STATE_VARIABLE_TypeDefns_133_133 = STATE_VARIABLE_TypeDefns_0_3;
                STATE_VARIABLE_InstDefns_132_132 = STATE_VARIABLE_InstDefns_0_5;
                STATE_VARIABLE_ModeDefns_131_131 = STATE_VARIABLE_ModeDefns_0_7;
                STATE_VARIABLE_TypeClasses_128_128 = STATE_VARIABLE_TypeClasses_0_9;
                STATE_VARIABLE_Instances_127_127 = STATE_VARIABLE_Instances_0_11;
                STATE_VARIABLE_PredDecls_130_130 = STATE_VARIABLE_PredDecls_0_13;
                STATE_VARIABLE_ModeDecls_129_129 = STATE_VARIABLE_ModeDecls_0_15;
                STATE_VARIABLE_ForeignEnums_125_125 = STATE_VARIABLE_ForeignEnums_0_17;
                STATE_VARIABLE_Pragmas_124_124 = STATE_VARIABLE_Pragmas_0_19;
                STATE_VARIABLE_Promises_123_123 = STATE_VARIABLE_Promises_0_21;
              }
              break;
            case (MR_Integer) 8:
              {
                STATE_VARIABLE_TypeDefns_133_133 = STATE_VARIABLE_TypeDefns_0_3;
                STATE_VARIABLE_InstDefns_132_132 = STATE_VARIABLE_InstDefns_0_5;
                STATE_VARIABLE_ModeDefns_131_131 = STATE_VARIABLE_ModeDefns_0_7;
                STATE_VARIABLE_TypeClasses_128_128 = STATE_VARIABLE_TypeClasses_0_9;
                STATE_VARIABLE_Instances_127_127 = STATE_VARIABLE_Instances_0_11;
                STATE_VARIABLE_PredDecls_130_130 = STATE_VARIABLE_PredDecls_0_13;
                STATE_VARIABLE_ModeDecls_129_129 = STATE_VARIABLE_ModeDecls_0_15;
                STATE_VARIABLE_ForeignEnums_125_125 = STATE_VARIABLE_ForeignEnums_0_17;
                STATE_VARIABLE_Pragmas_124_124 = STATE_VARIABLE_Pragmas_0_19;
                STATE_VARIABLE_Promises_123_123 = STATE_VARIABLE_Promises_0_21;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word ItemMutable_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_55, (MR_Integer) 1))));
                MR_String MutableName_83 = ((MR_String) ((MR_hl_field(MR_mktag(0), ItemMutable_82, (MR_Integer) 0))));
                MR_Word Type_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_82, (MR_Integer) 2))));
                MR_Word Inst_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_82, (MR_Integer) 4))));
                MR_Word MutAttrs_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_82, (MR_Integer) 7))));
                MR_Word Context_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_82, (MR_Integer) 8))));
                MR_Word PublicAuxPreds_93;
                MR_Word PublicAuxPredDecls_94;
                MR_Word Var_120;
                MR_Word Var_122;

                parse_tree__prog_mutable__compute_needed_public_mutable_aux_preds_2_p_0(MutAttrs_90, &PublicAuxPreds_93);
                {
                  Var_120 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_120, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[0]));
                  MR_hl_field(MR_mktag(0), Var_120, 1) = ((MR_Box) (parse_tree__comp_unit_interface__get_private_interface_int0_from_items_22_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_120, 2) = ((MR_Box) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(0), Var_120, 3) = ((MR_Box) (HeadVar__1_1));
                  MR_hl_field(MR_mktag(0), Var_120, 4) = ((MR_Box) (MutableName_83));
                  MR_hl_field(MR_mktag(0), Var_120, 5) = ((MR_Box) (Type_85));
                  MR_hl_field(MR_mktag(0), Var_120, 6) = ((MR_Box) (Inst_87));
                  MR_hl_field(MR_mktag(0), Var_120, 7) = ((MR_Box) (Context_91));
                }
                mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), Var_120, PublicAuxPreds_93, &PublicAuxPredDecls_94);
                Var_122 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), PublicAuxPredDecls_94);
                STATE_VARIABLE_PredDecls_130_130 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), STATE_VARIABLE_PredDecls_0_13, Var_122);
                STATE_VARIABLE_TypeDefns_133_133 = STATE_VARIABLE_TypeDefns_0_3;
                STATE_VARIABLE_InstDefns_132_132 = STATE_VARIABLE_InstDefns_0_5;
                STATE_VARIABLE_ModeDefns_131_131 = STATE_VARIABLE_ModeDefns_0_7;
                STATE_VARIABLE_TypeClasses_128_128 = STATE_VARIABLE_TypeClasses_0_9;
                STATE_VARIABLE_Instances_127_127 = STATE_VARIABLE_Instances_0_11;
                STATE_VARIABLE_ModeDecls_129_129 = STATE_VARIABLE_ModeDecls_0_15;
                STATE_VARIABLE_ForeignEnums_125_125 = STATE_VARIABLE_ForeignEnums_0_17;
                STATE_VARIABLE_Pragmas_124_124 = STATE_VARIABLE_Pragmas_0_19;
                STATE_VARIABLE_Promises_123_123 = STATE_VARIABLE_Promises_0_21;
              }
              break;
            case (MR_Integer) 10:
              {
                STATE_VARIABLE_TypeDefns_133_133 = STATE_VARIABLE_TypeDefns_0_3;
                STATE_VARIABLE_InstDefns_132_132 = STATE_VARIABLE_InstDefns_0_5;
                STATE_VARIABLE_ModeDefns_131_131 = STATE_VARIABLE_ModeDefns_0_7;
                STATE_VARIABLE_TypeClasses_128_128 = STATE_VARIABLE_TypeClasses_0_9;
                STATE_VARIABLE_Instances_127_127 = STATE_VARIABLE_Instances_0_11;
                STATE_VARIABLE_PredDecls_130_130 = STATE_VARIABLE_PredDecls_0_13;
                STATE_VARIABLE_ModeDecls_129_129 = STATE_VARIABLE_ModeDecls_0_15;
                STATE_VARIABLE_ForeignEnums_125_125 = STATE_VARIABLE_ForeignEnums_0_17;
                STATE_VARIABLE_Pragmas_124_124 = STATE_VARIABLE_Pragmas_0_19;
                STATE_VARIABLE_Promises_123_123 = STATE_VARIABLE_Promises_0_21;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word TypeDefn_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_55, (MR_Integer) 1))));

                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), ((MR_Box) (TypeDefn_67)), STATE_VARIABLE_TypeDefns_0_3, &STATE_VARIABLE_TypeDefns_133_133);
                STATE_VARIABLE_InstDefns_132_132 = STATE_VARIABLE_InstDefns_0_5;
                STATE_VARIABLE_ModeDefns_131_131 = STATE_VARIABLE_ModeDefns_0_7;
                STATE_VARIABLE_TypeClasses_128_128 = STATE_VARIABLE_TypeClasses_0_9;
                STATE_VARIABLE_Instances_127_127 = STATE_VARIABLE_Instances_0_11;
                STATE_VARIABLE_PredDecls_130_130 = STATE_VARIABLE_PredDecls_0_13;
                STATE_VARIABLE_ModeDecls_129_129 = STATE_VARIABLE_ModeDecls_0_15;
                STATE_VARIABLE_ForeignEnums_125_125 = STATE_VARIABLE_ForeignEnums_0_17;
                STATE_VARIABLE_Pragmas_124_124 = STATE_VARIABLE_Pragmas_0_19;
                STATE_VARIABLE_Promises_123_123 = STATE_VARIABLE_Promises_0_21;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word ItemPragma_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_55, (MR_Integer) 1))));
                MR_Word Pragma_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_76, (MR_Integer) 0))));
                MR_Word AllowedInInterface_80;

                AllowedInInterface_80 = parse_tree__prog_item__pragma_allowed_in_interface_1_f_0(Pragma_77);
                switch (AllowedInInterface_80) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_Pragmas_124_124 = STATE_VARIABLE_Pragmas_0_19;
                    break;
                  case (MR_Integer) 1:
                    mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[3]), ((MR_Box) (ItemPragma_76)), STATE_VARIABLE_Pragmas_0_19, &STATE_VARIABLE_Pragmas_124_124);
                    break;
                }
                STATE_VARIABLE_TypeDefns_133_133 = STATE_VARIABLE_TypeDefns_0_3;
                STATE_VARIABLE_InstDefns_132_132 = STATE_VARIABLE_InstDefns_0_5;
                STATE_VARIABLE_ModeDefns_131_131 = STATE_VARIABLE_ModeDefns_0_7;
                STATE_VARIABLE_TypeClasses_128_128 = STATE_VARIABLE_TypeClasses_0_9;
                STATE_VARIABLE_Instances_127_127 = STATE_VARIABLE_Instances_0_11;
                STATE_VARIABLE_PredDecls_130_130 = STATE_VARIABLE_PredDecls_0_13;
                STATE_VARIABLE_ModeDecls_129_129 = STATE_VARIABLE_ModeDecls_0_15;
                STATE_VARIABLE_ForeignEnums_125_125 = STATE_VARIABLE_ForeignEnums_0_17;
                STATE_VARIABLE_Promises_123_123 = STATE_VARIABLE_Promises_0_21;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Items_56;
      next_value_of_STATE_VARIABLE_TypeDefns_0_3 = STATE_VARIABLE_TypeDefns_133_133;
      next_value_of_STATE_VARIABLE_InstDefns_0_5 = STATE_VARIABLE_InstDefns_132_132;
      next_value_of_STATE_VARIABLE_ModeDefns_0_7 = STATE_VARIABLE_ModeDefns_131_131;
      next_value_of_STATE_VARIABLE_TypeClasses_0_9 = STATE_VARIABLE_TypeClasses_128_128;
      next_value_of_STATE_VARIABLE_Instances_0_11 = STATE_VARIABLE_Instances_127_127;
      next_value_of_STATE_VARIABLE_PredDecls_0_13 = STATE_VARIABLE_PredDecls_130_130;
      next_value_of_STATE_VARIABLE_ModeDecls_0_15 = STATE_VARIABLE_ModeDecls_129_129;
      next_value_of_STATE_VARIABLE_ForeignEnums_0_17 = STATE_VARIABLE_ForeignEnums_125_125;
      next_value_of_STATE_VARIABLE_Pragmas_0_19 = STATE_VARIABLE_Pragmas_124_124;
      next_value_of_STATE_VARIABLE_Promises_0_21 = STATE_VARIABLE_Promises_123_123;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_TypeDefns_0_3 = next_value_of_STATE_VARIABLE_TypeDefns_0_3;
      STATE_VARIABLE_InstDefns_0_5 = next_value_of_STATE_VARIABLE_InstDefns_0_5;
      STATE_VARIABLE_ModeDefns_0_7 = next_value_of_STATE_VARIABLE_ModeDefns_0_7;
      STATE_VARIABLE_TypeClasses_0_9 = next_value_of_STATE_VARIABLE_TypeClasses_0_9;
      STATE_VARIABLE_Instances_0_11 = next_value_of_STATE_VARIABLE_Instances_0_11;
      STATE_VARIABLE_PredDecls_0_13 = next_value_of_STATE_VARIABLE_PredDecls_0_13;
      STATE_VARIABLE_ModeDecls_0_15 = next_value_of_STATE_VARIABLE_ModeDecls_0_15;
      STATE_VARIABLE_ForeignEnums_0_17 = next_value_of_STATE_VARIABLE_ForeignEnums_0_17;
      STATE_VARIABLE_Pragmas_0_19 = next_value_of_STATE_VARIABLE_Pragmas_0_19;
      STATE_VARIABLE_Promises_0_21 = next_value_of_STATE_VARIABLE_Promises_0_21;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_via_int3_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    parse_tree__prog_item__src_to_raw_item_block_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_via_int3_5_p_0(
  MR_Word Globals_6,
  MR_Word AugCompUnit_7,
  MR_Word * ParseTreeInt23_8,
  MR_Word STATE_VARIABLE_Specs_0_54,
  MR_Word * STATE_VARIABLE_Specs_55)
{
  {
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_7, (MR_Integer) 0))));
    MR_Word ModuleNameContext_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_7, (MR_Integer) 1))));
    MR_Word SrcItemBlocks_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_7, (MR_Integer) 3))));
    MR_Word RawItemBlocks_18;
    MR_Word IntInclModuleNames_19;
    MR_Word IntImportModuleNames0_20;
    MR_Word OrigIntTypeDefnsCord_21;
    MR_Word IntTypeDefnsCord_22;
    MR_Word IntInstDefnsCord_23;
    MR_Word IntModeDefnsCord_24;
    MR_Word IntTypeClassesCord_25;
    MR_Word IntInstancesCord_26;
    MR_Word OrigIntForeignEnumsCord_27;
    MR_Word OrigImpTypeDefnsCord_28;
    MR_Word OrigImpForeignEnumsCord_29;
    MR_Word NeedImports_30;
    MR_Word IntImportModuleNames_31;
    MR_Word OrigIntTypeDefns_32;
    MR_Word IntTypeDefns_33;
    MR_Word IntInstDefns_34;
    MR_Word IntModeDefns_35;
    MR_Word IntTypeClasses_36;
    MR_Word IntInstances_37;
    MR_Word OrigIntForeignEnums_38;
    MR_Word OrigImpTypeDefns_39;
    MR_Word OrigImpForeignEnums_40;
    MR_Word IntTypeDefnMap_41;
    MR_Word IntInstDefnMap_42;
    MR_Word IntModeDefnMap_43;
    MR_Word OrigIntTypeDefnMap_44;
    MR_Word OrigIntForeignEnumMap_45;
    MR_Word OrigImpTypeDefnMap_46;
    MR_Word OrigImpForeignEnumMap_47;
    MR_Word TypeCtorCheckedMap_48;
    MR_Word Experiment1_49;
    MR_Word IntTypeRepnMap_50;
    MR_Word ParseTreeInt3_52;
    MR_Word ParseTreeInt23Prime_53;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_73;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;

    mercury__list__map_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[2]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[5]), SrcItemBlocks_13, &RawItemBlocks_18);
    Var_57 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_58 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_59 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]));
    Var_60 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]));
    Var_61 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0));
    Var_62 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0));
    Var_63 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0));
    Var_64 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0));
    Var_65 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0));
    Var_66 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]));
    Var_67 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0));
    parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_25_p_0(RawItemBlocks_18, Var_57, &IntInclModuleNames_19, Var_58, &IntImportModuleNames0_20, Var_59, &OrigIntTypeDefnsCord_21, Var_60, &IntTypeDefnsCord_22, Var_61, &IntInstDefnsCord_23, Var_62, &IntModeDefnsCord_24, Var_63, &IntTypeClassesCord_25, Var_64, &IntInstancesCord_26, Var_65, &OrigIntForeignEnumsCord_27, Var_66, &OrigImpTypeDefnsCord_28, Var_67, &OrigImpForeignEnumsCord_29, (MR_Integer) 0, &NeedImports_30);
    switch (NeedImports_30) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        IntImportModuleNames_31 = IntImportModuleNames0_20;
        break;
      case (MR_Integer) 0:
        IntImportModuleNames_31 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
        break;
    }
    OrigIntTypeDefns_32 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), OrigIntTypeDefnsCord_21);
    IntTypeDefns_33 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), IntTypeDefnsCord_22);
    IntInstDefns_34 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), IntInstDefnsCord_23);
    IntModeDefns_35 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), IntModeDefnsCord_24);
    IntTypeClasses_36 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClassesCord_25);
    IntInstances_37 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstancesCord_26);
    OrigIntForeignEnums_38 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), OrigIntForeignEnumsCord_27);
    OrigImpTypeDefns_39 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), OrigImpTypeDefnsCord_28);
    OrigImpForeignEnums_40 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), OrigImpForeignEnumsCord_29);
    IntTypeDefnMap_41 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(IntTypeDefns_33);
    IntInstDefnMap_42 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns_34);
    IntModeDefnMap_43 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns_35);
    OrigIntTypeDefnMap_44 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(OrigIntTypeDefns_32);
    OrigIntForeignEnumMap_45 = parse_tree__convert_parse_tree__type_ctor_foreign_enum_items_to_map_1_f_0(OrigIntForeignEnums_38);
    OrigImpTypeDefnMap_46 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(OrigImpTypeDefns_39);
    OrigImpForeignEnumMap_47 = parse_tree__convert_parse_tree__type_ctor_foreign_enum_items_to_map_1_f_0(OrigImpForeignEnums_40);
    parse_tree__check_parse_tree_type_defns__create_type_ctor_checked_map_9_p_0((MR_Integer) 0, ModuleName_10, OrigIntTypeDefnMap_44, OrigImpTypeDefnMap_46, OrigIntForeignEnumMap_45, OrigImpForeignEnumMap_47, &TypeCtorCheckedMap_48, STATE_VARIABLE_Specs_0_54, STATE_VARIABLE_Specs_55);
    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 698, &Experiment1_49);
    switch (Experiment1_49) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0), &IntTypeRepnMap_50);
        break;
      case (MR_Integer) 1:
        {
          MR_Word IntTypeRepnInfos_51;

          parse_tree__decide_type_repn__decide_repns_for_simple_types_for_int3_3_p_0(ModuleName_10, TypeCtorCheckedMap_48, &IntTypeRepnInfos_51);
          IntTypeRepnMap_50 = parse_tree__convert_parse_tree__type_ctor_repn_items_to_map_1_f_0(IntTypeRepnInfos_51);
        }
        break;
    }
    {
      ParseTreeInt3_52 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ParseTreeInt3_52, 0) = ((MR_Box) (ModuleName_10));
      MR_hl_field(MR_mktag(0), ParseTreeInt3_52, 1) = ((MR_Box) (ModuleNameContext_11));
      MR_hl_field(MR_mktag(0), ParseTreeInt3_52, 2) = ((MR_Box) (IntInclModuleNames_19));
      MR_hl_field(MR_mktag(0), ParseTreeInt3_52, 3) = ((MR_Box) (IntImportModuleNames_31));
      MR_hl_field(MR_mktag(0), ParseTreeInt3_52, 4) = ((MR_Box) (IntTypeDefnMap_41));
      MR_hl_field(MR_mktag(0), ParseTreeInt3_52, 5) = ((MR_Box) (IntInstDefnMap_42));
      MR_hl_field(MR_mktag(0), ParseTreeInt3_52, 6) = ((MR_Box) (IntModeDefnMap_43));
      MR_hl_field(MR_mktag(0), ParseTreeInt3_52, 7) = ((MR_Box) (IntTypeClasses_36));
      MR_hl_field(MR_mktag(0), ParseTreeInt3_52, 8) = ((MR_Box) (IntInstances_37));
      MR_hl_field(MR_mktag(0), ParseTreeInt3_52, 9) = ((MR_Box) (IntTypeRepnMap_50));
    }
    ParseTreeInt23Prime_53 = parse_tree__convert_parse_tree__convert_parse_tree_int3_to_int_1_f_0(ParseTreeInt3_52);
    Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt23Prime_53, (MR_Integer) 0))));
    Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt23Prime_53, (MR_Integer) 2))));
    Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt23Prime_53, (MR_Integer) 3))));
    Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt23Prime_53, (MR_Integer) 4))));
    Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt23Prime_53, (MR_Integer) 5))));
    Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt23Prime_53, (MR_Integer) 6))));
    Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt23Prime_53, (MR_Integer) 7))));
    Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt23Prime_53, (MR_Integer) 8))));
    Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt23Prime_53, (MR_Integer) 9))));
    Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt23Prime_53, (MR_Integer) 10))));
    Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt23Prime_53, (MR_Integer) 11))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt23_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_79));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_84));
    }
  }
}

void MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_6_p_0(
  MR_Word Globals_7,
  MR_Word RawCompUnit_8,
  MR_Word * ParseTreeInt3_9,
  MR_Word * ParseTreeInt_10,
  MR_Word STATE_VARIABLE_Specs_0_50,
  MR_Word * STATE_VARIABLE_Specs_51)
{
  {
    MR_Word ModuleName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_8, (MR_Integer) 0))));
    MR_Word ModuleNameContext_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_8, (MR_Integer) 1))));
    MR_Word RawItemBlocks_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_8, (MR_Integer) 2))));
    MR_Word IntInclModuleNames_15;
    MR_Word IntImportModuleNames0_16;
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
    MR_Word IntImportModuleNames_27;
    MR_Word OrigIntTypeDefns_28;
    MR_Word IntTypeDefns_29;
    MR_Word IntInstDefns_30;
    MR_Word IntModeDefns_31;
    MR_Word IntTypeClasses_32;
    MR_Word IntInstances_33;
    MR_Word OrigIntForeignEnums_34;
    MR_Word OrigImpTypeDefns_35;
    MR_Word OrigImpForeignEnums_36;
    MR_Word IntTypeDefnMap_37;
    MR_Word IntInstDefnMap_38;
    MR_Word IntModeDefnMap_39;
    MR_Word OrigIntTypeDefnMap_40;
    MR_Word OrigIntForeignEnumMap_41;
    MR_Word OrigImpTypeDefnMap_42;
    MR_Word OrigImpForeignEnumMap_43;
    MR_Word TypeCtorCheckedMap_44;
    MR_Word Experiment1_45;
    MR_Word IntTypeRepnMap_46;
    MR_Word ParseTreeInt0_48;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word _Specs_49;

    Var_52 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_53 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_54 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]));
    Var_55 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]));
    Var_56 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0));
    Var_57 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0));
    Var_58 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0));
    Var_59 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0));
    Var_60 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0));
    Var_61 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]));
    Var_62 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0));
    parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_25_p_0(RawItemBlocks_14, Var_52, &IntInclModuleNames_15, Var_53, &IntImportModuleNames0_16, Var_54, &OrigIntTypeDefnsCord_17, Var_55, &IntTypeDefnsCord_18, Var_56, &IntInstDefnsCord_19, Var_57, &IntModeDefnsCord_20, Var_58, &IntTypeClassesCord_21, Var_59, &IntInstancesCord_22, Var_60, &OrigIntForeignEnumsCord_23, Var_61, &OrigImpTypeDefnsCord_24, Var_62, &OrigImpForeignEnumsCord_25, (MR_Integer) 0, &NeedImports_26);
    switch (NeedImports_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        IntImportModuleNames_27 = IntImportModuleNames0_16;
        break;
      case (MR_Integer) 0:
        IntImportModuleNames_27 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
        break;
    }
    OrigIntTypeDefns_28 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), OrigIntTypeDefnsCord_17);
    IntTypeDefns_29 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), IntTypeDefnsCord_18);
    IntInstDefns_30 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), IntInstDefnsCord_19);
    IntModeDefns_31 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), IntModeDefnsCord_20);
    IntTypeClasses_32 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClassesCord_21);
    IntInstances_33 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstancesCord_22);
    OrigIntForeignEnums_34 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), OrigIntForeignEnumsCord_23);
    OrigImpTypeDefns_35 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), OrigImpTypeDefnsCord_24);
    OrigImpForeignEnums_36 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), OrigImpForeignEnumsCord_25);
    IntTypeDefnMap_37 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(IntTypeDefns_29);
    IntInstDefnMap_38 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns_30);
    IntModeDefnMap_39 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns_31);
    OrigIntTypeDefnMap_40 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(OrigIntTypeDefns_28);
    OrigIntForeignEnumMap_41 = parse_tree__convert_parse_tree__type_ctor_foreign_enum_items_to_map_1_f_0(OrigIntForeignEnums_34);
    OrigImpTypeDefnMap_42 = parse_tree__convert_parse_tree__type_ctor_defn_items_to_map_1_f_0(OrigImpTypeDefns_35);
    OrigImpForeignEnumMap_43 = parse_tree__convert_parse_tree__type_ctor_foreign_enum_items_to_map_1_f_0(OrigImpForeignEnums_36);
    parse_tree__check_parse_tree_type_defns__create_type_ctor_checked_map_9_p_0((MR_Integer) 0, ModuleName_12, OrigIntTypeDefnMap_40, OrigImpTypeDefnMap_42, OrigIntForeignEnumMap_41, OrigImpForeignEnumMap_43, &TypeCtorCheckedMap_44, STATE_VARIABLE_Specs_0_50, STATE_VARIABLE_Specs_51);
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 698, &Experiment1_45);
    switch (Experiment1_45) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0), &IntTypeRepnMap_46);
        break;
      case (MR_Integer) 1:
        {
          MR_Word IntTypeRepnInfos_47;

          parse_tree__decide_type_repn__decide_repns_for_simple_types_for_int3_3_p_0(ModuleName_12, TypeCtorCheckedMap_44, &IntTypeRepnInfos_47);
          IntTypeRepnMap_46 = parse_tree__convert_parse_tree__type_ctor_repn_items_to_map_1_f_0(IntTypeRepnInfos_47);
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt3_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_13));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (IntInclModuleNames_15));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (IntImportModuleNames_27));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (IntTypeDefnMap_37));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (IntInstDefnMap_38));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (IntModeDefnMap_39));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (IntTypeClasses_32));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (IntInstances_33));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (IntTypeRepnMap_46));
    }
    ParseTreeInt0_48 = parse_tree__convert_parse_tree__convert_parse_tree_int3_to_int_1_f_0(*ParseTreeInt3_9);
    parse_tree__module_qual__module_qualify_parse_tree_int3_5_p_0(Globals_7, ParseTreeInt0_48, ParseTreeInt_10, (MR_Word) ((MR_Unsigned) 0U), &_Specs_49);
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_25_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_2;

    conv3_HeadVar__2_2 = parse_tree__prog_item__get_import_module_name_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_25_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    succeeded = parse_tree__prog_item__avail_is_import_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_25_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    parse_tree__prog_item__add_included_module_name_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_25_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntIncls_0_2,
  MR_Word * STATE_VARIABLE_IntIncls_3,
  MR_Word STATE_VARIABLE_IntImports_0_4,
  MR_Word * STATE_VARIABLE_IntImports_5,
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
  MR_Word * STATE_VARIABLE_NeedImports_25)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
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
      *STATE_VARIABLE_IntImports_5 = STATE_VARIABLE_IntImports_0_4;
      *STATE_VARIABLE_IntIncls_3 = STATE_VARIABLE_IntIncls_0_2;
    }
    else
    {
      MR_Word RawItemBlock_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word RawItemBlocks_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Section_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_62, (MR_Integer) 1))));
      MR_Word Incls_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_62, (MR_Integer) 2))));
      MR_Word Avails_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_62, (MR_Integer) 3))));
      MR_Word Items_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_62, (MR_Integer) 5))));
      MR_Word STATE_VARIABLE_OrigImpTypeDefns_108_108;
      MR_Word STATE_VARIABLE_OrigImpForeignEnums_109_109;
      MR_Word STATE_VARIABLE_IntIncls_111_111;
      MR_Word STATE_VARIABLE_IntImports_114_114;
      MR_Word STATE_VARIABLE_OrigIntTypeDefns_115_115;
      MR_Word STATE_VARIABLE_IntTypeDefns_116_116;
      MR_Word STATE_VARIABLE_IntInstDefns_117_117;
      MR_Word STATE_VARIABLE_IntModeDefns_118_118;
      MR_Word STATE_VARIABLE_IntTypeClasses_119_119;
      MR_Word STATE_VARIABLE_IntInstances_120_120;
      MR_Word STATE_VARIABLE_OrigIntForeignEnums_121_121;
      MR_Word STATE_VARIABLE_NeedImports_122_122;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_IntIncls_0_2;
      MR_Word next_value_of_STATE_VARIABLE_IntImports_0_4;
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

      switch (Section_77) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            parse_tree__comp_unit_interface__get_short_interface_int3_from_items_imp_5_p_0(Items_81, STATE_VARIABLE_OrigImpTypeDefns_0_20, &STATE_VARIABLE_OrigImpTypeDefns_108_108, STATE_VARIABLE_OrigImpForeignEnums_0_22, &STATE_VARIABLE_OrigImpForeignEnums_109_109);
            STATE_VARIABLE_IntIncls_111_111 = STATE_VARIABLE_IntIncls_0_2;
            STATE_VARIABLE_IntImports_114_114 = STATE_VARIABLE_IntImports_0_4;
            STATE_VARIABLE_OrigIntTypeDefns_115_115 = STATE_VARIABLE_OrigIntTypeDefns_0_6;
            STATE_VARIABLE_IntTypeDefns_116_116 = STATE_VARIABLE_IntTypeDefns_0_8;
            STATE_VARIABLE_IntInstDefns_117_117 = STATE_VARIABLE_IntInstDefns_0_10;
            STATE_VARIABLE_IntModeDefns_118_118 = STATE_VARIABLE_IntModeDefns_0_12;
            STATE_VARIABLE_IntTypeClasses_119_119 = STATE_VARIABLE_IntTypeClasses_0_14;
            STATE_VARIABLE_IntInstances_120_120 = STATE_VARIABLE_IntInstances_0_16;
            STATE_VARIABLE_OrigIntForeignEnums_121_121 = STATE_VARIABLE_OrigIntForeignEnums_0_18;
            STATE_VARIABLE_NeedImports_122_122 = STATE_VARIABLE_NeedImports_0_24;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Imports_82;
            MR_Word ImportModuleNames_83;
            MR_Box conv1_STATE_VARIABLE_IntIncls_111_111;

            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[2]), Incls_78, ((MR_Box) (STATE_VARIABLE_IntIncls_0_2)), &conv1_STATE_VARIABLE_IntIncls_111_111);
            STATE_VARIABLE_IntIncls_111_111 = ((MR_Word) (conv1_STATE_VARIABLE_IntIncls_111_111));
            mercury__list__filter_map_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_import_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), Avails_79, &Imports_82);
            ImportModuleNames_83 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_import_info_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), Imports_82);
            mercury__set__insert_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImportModuleNames_83, STATE_VARIABLE_IntImports_0_4, &STATE_VARIABLE_IntImports_114_114);
            parse_tree__comp_unit_interface__get_short_interface_int3_from_items_int_17_p_0(Items_81, STATE_VARIABLE_OrigIntTypeDefns_0_6, &STATE_VARIABLE_OrigIntTypeDefns_115_115, STATE_VARIABLE_IntTypeDefns_0_8, &STATE_VARIABLE_IntTypeDefns_116_116, STATE_VARIABLE_IntInstDefns_0_10, &STATE_VARIABLE_IntInstDefns_117_117, STATE_VARIABLE_IntModeDefns_0_12, &STATE_VARIABLE_IntModeDefns_118_118, STATE_VARIABLE_IntTypeClasses_0_14, &STATE_VARIABLE_IntTypeClasses_119_119, STATE_VARIABLE_IntInstances_0_16, &STATE_VARIABLE_IntInstances_120_120, STATE_VARIABLE_OrigIntForeignEnums_0_18, &STATE_VARIABLE_OrigIntForeignEnums_121_121, STATE_VARIABLE_NeedImports_0_24, &STATE_VARIABLE_NeedImports_122_122);
            STATE_VARIABLE_OrigImpTypeDefns_108_108 = STATE_VARIABLE_OrigImpTypeDefns_0_20;
            STATE_VARIABLE_OrigImpForeignEnums_109_109 = STATE_VARIABLE_OrigImpForeignEnums_0_22;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = RawItemBlocks_63;
      next_value_of_STATE_VARIABLE_IntIncls_0_2 = STATE_VARIABLE_IntIncls_111_111;
      next_value_of_STATE_VARIABLE_IntImports_0_4 = STATE_VARIABLE_IntImports_114_114;
      next_value_of_STATE_VARIABLE_OrigIntTypeDefns_0_6 = STATE_VARIABLE_OrigIntTypeDefns_115_115;
      next_value_of_STATE_VARIABLE_IntTypeDefns_0_8 = STATE_VARIABLE_IntTypeDefns_116_116;
      next_value_of_STATE_VARIABLE_IntInstDefns_0_10 = STATE_VARIABLE_IntInstDefns_117_117;
      next_value_of_STATE_VARIABLE_IntModeDefns_0_12 = STATE_VARIABLE_IntModeDefns_118_118;
      next_value_of_STATE_VARIABLE_IntTypeClasses_0_14 = STATE_VARIABLE_IntTypeClasses_119_119;
      next_value_of_STATE_VARIABLE_IntInstances_0_16 = STATE_VARIABLE_IntInstances_120_120;
      next_value_of_STATE_VARIABLE_OrigIntForeignEnums_0_18 = STATE_VARIABLE_OrigIntForeignEnums_121_121;
      next_value_of_STATE_VARIABLE_OrigImpTypeDefns_0_20 = STATE_VARIABLE_OrigImpTypeDefns_108_108;
      next_value_of_STATE_VARIABLE_OrigImpForeignEnums_0_22 = STATE_VARIABLE_OrigImpForeignEnums_109_109;
      next_value_of_STATE_VARIABLE_NeedImports_0_24 = STATE_VARIABLE_NeedImports_122_122;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_IntIncls_0_2 = next_value_of_STATE_VARIABLE_IntIncls_0_2;
      STATE_VARIABLE_IntImports_0_4 = next_value_of_STATE_VARIABLE_IntImports_0_4;
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
      MR_Word STATE_VARIABLE_ImpForeignEnums_36_36;
      MR_Word STATE_VARIABLE_ImpTypeDefns_37_37;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImpTypeDefns_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ImpForeignEnums_0_4;

      switch (MR_tag((MR_Word) Item_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_ImpTypeDefns_37_37 = STATE_VARIABLE_ImpTypeDefns_0_2;
            STATE_VARIABLE_ImpForeignEnums_36_36 = STATE_VARIABLE_ImpForeignEnums_0_4;
          }
          break;
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_ImpTypeDefns_37_37 = STATE_VARIABLE_ImpTypeDefns_0_2;
            STATE_VARIABLE_ImpForeignEnums_36_36 = STATE_VARIABLE_ImpForeignEnums_0_4;
          }
          break;
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_ImpTypeDefns_37_37 = STATE_VARIABLE_ImpTypeDefns_0_2;
            STATE_VARIABLE_ImpForeignEnums_36_36 = STATE_VARIABLE_ImpForeignEnums_0_4;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_ImpTypeDefns_37_37 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ImpForeignEnums_36_36 = STATE_VARIABLE_ImpForeignEnums_0_4;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_ImpTypeDefns_37_37 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ImpForeignEnums_36_36 = STATE_VARIABLE_ImpForeignEnums_0_4;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ItemForeignEnumInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 1))));

                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ((MR_Box) (ItemForeignEnumInfo_17)), STATE_VARIABLE_ImpForeignEnums_0_4, &STATE_VARIABLE_ImpForeignEnums_36_36);
                STATE_VARIABLE_ImpTypeDefns_37_37 = STATE_VARIABLE_ImpTypeDefns_0_2;
              }
              break;
            case (MR_Integer) 3:
              {
                STATE_VARIABLE_ImpTypeDefns_37_37 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ImpForeignEnums_36_36 = STATE_VARIABLE_ImpForeignEnums_0_4;
              }
              break;
            case (MR_Integer) 4:
              {
                STATE_VARIABLE_ImpTypeDefns_37_37 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ImpForeignEnums_36_36 = STATE_VARIABLE_ImpForeignEnums_0_4;
              }
              break;
            case (MR_Integer) 5:
              {
                STATE_VARIABLE_ImpTypeDefns_37_37 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ImpForeignEnums_36_36 = STATE_VARIABLE_ImpForeignEnums_0_4;
              }
              break;
            case (MR_Integer) 6:
              {
                STATE_VARIABLE_ImpTypeDefns_37_37 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ImpForeignEnums_36_36 = STATE_VARIABLE_ImpForeignEnums_0_4;
              }
              break;
            case (MR_Integer) 7:
              {
                STATE_VARIABLE_ImpTypeDefns_37_37 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ImpForeignEnums_36_36 = STATE_VARIABLE_ImpForeignEnums_0_4;
              }
              break;
            case (MR_Integer) 8:
              {
                STATE_VARIABLE_ImpTypeDefns_37_37 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ImpForeignEnums_36_36 = STATE_VARIABLE_ImpForeignEnums_0_4;
              }
              break;
            case (MR_Integer) 9:
              {
                STATE_VARIABLE_ImpTypeDefns_37_37 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ImpForeignEnums_36_36 = STATE_VARIABLE_ImpForeignEnums_0_4;
              }
              break;
            case (MR_Integer) 10:
              {
                STATE_VARIABLE_ImpTypeDefns_37_37 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ImpForeignEnums_36_36 = STATE_VARIABLE_ImpForeignEnums_0_4;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemTypeDefnInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 1))));

                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), ((MR_Box) (ItemTypeDefnInfo_16)), STATE_VARIABLE_ImpTypeDefns_0_2, &STATE_VARIABLE_ImpTypeDefns_37_37);
                STATE_VARIABLE_ImpForeignEnums_36_36 = STATE_VARIABLE_ImpForeignEnums_0_4;
              }
              break;
            case (MR_Integer) 12:
              {
                STATE_VARIABLE_ImpTypeDefns_37_37 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ImpForeignEnums_36_36 = STATE_VARIABLE_ImpForeignEnums_0_4;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_13;
      next_value_of_STATE_VARIABLE_ImpTypeDefns_0_2 = STATE_VARIABLE_ImpTypeDefns_37_37;
      next_value_of_STATE_VARIABLE_ImpForeignEnums_0_4 = STATE_VARIABLE_ImpForeignEnums_36_36;
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
      MR_Word STATE_VARIABLE_OrigIntForeignEnums_97_97;
      MR_Word STATE_VARIABLE_IntInstances_99_99;
      MR_Word STATE_VARIABLE_NeedImports_100_100;
      MR_Word STATE_VARIABLE_IntTypeClasses_104_104;
      MR_Word STATE_VARIABLE_IntModeDefns_106_106;
      MR_Word STATE_VARIABLE_IntInstDefns_108_108;
      MR_Word STATE_VARIABLE_OrigIntTypeDefns_109_109;
      MR_Word STATE_VARIABLE_IntTypeDefns_110_110;
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
            STATE_VARIABLE_OrigIntTypeDefns_109_109 = STATE_VARIABLE_OrigIntTypeDefns_0_2;
            STATE_VARIABLE_IntTypeDefns_110_110 = STATE_VARIABLE_IntTypeDefns_0_4;
            STATE_VARIABLE_IntInstDefns_108_108 = STATE_VARIABLE_IntInstDefns_0_6;
            STATE_VARIABLE_IntModeDefns_106_106 = STATE_VARIABLE_IntModeDefns_0_8;
            STATE_VARIABLE_IntTypeClasses_104_104 = STATE_VARIABLE_IntTypeClasses_0_10;
            STATE_VARIABLE_IntInstances_99_99 = STATE_VARIABLE_IntInstances_0_12;
            STATE_VARIABLE_OrigIntForeignEnums_97_97 = STATE_VARIABLE_OrigIntForeignEnums_0_14;
            STATE_VARIABLE_NeedImports_100_100 = STATE_VARIABLE_NeedImports_0_16;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemInstInfo_54 = (MR_Word) (MR_body((MR_Word) (Item_42), (MR_Integer) 1));
            MR_Word AbstractItemInstInfo_55;
            MR_Word Var_119 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstInfo_54, (MR_Integer) 0))));
            MR_Word Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstInfo_54, (MR_Integer) 1))));
            MR_Word Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstInfo_54, (MR_Integer) 2))));
            MR_Word Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstInfo_54, (MR_Integer) 4))));
            MR_Word Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstInfo_54, (MR_Integer) 5))));
            MR_Integer Var_125 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemInstInfo_54, (MR_Integer) 6))));

            {
              AbstractItemInstInfo_55 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), AbstractItemInstInfo_55, 0) = ((MR_Box) (Var_119));
              MR_hl_field(MR_mktag(0), AbstractItemInstInfo_55, 1) = ((MR_Box) (Var_120));
              MR_hl_field(MR_mktag(0), AbstractItemInstInfo_55, 2) = ((MR_Box) (Var_121));
              MR_hl_field(MR_mktag(0), AbstractItemInstInfo_55, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), AbstractItemInstInfo_55, 4) = ((MR_Box) (Var_123));
              MR_hl_field(MR_mktag(0), AbstractItemInstInfo_55, 5) = ((MR_Box) (Var_124));
              MR_hl_field(MR_mktag(0), AbstractItemInstInfo_55, 6) = ((MR_Box) (Var_125));
            }
            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), ((MR_Box) (AbstractItemInstInfo_55)), STATE_VARIABLE_IntInstDefns_0_6, &STATE_VARIABLE_IntInstDefns_108_108);
            STATE_VARIABLE_OrigIntTypeDefns_109_109 = STATE_VARIABLE_OrigIntTypeDefns_0_2;
            STATE_VARIABLE_IntTypeDefns_110_110 = STATE_VARIABLE_IntTypeDefns_0_4;
            STATE_VARIABLE_IntModeDefns_106_106 = STATE_VARIABLE_IntModeDefns_0_8;
            STATE_VARIABLE_IntTypeClasses_104_104 = STATE_VARIABLE_IntTypeClasses_0_10;
            STATE_VARIABLE_IntInstances_99_99 = STATE_VARIABLE_IntInstances_0_12;
            STATE_VARIABLE_OrigIntForeignEnums_97_97 = STATE_VARIABLE_OrigIntForeignEnums_0_14;
            STATE_VARIABLE_NeedImports_100_100 = STATE_VARIABLE_NeedImports_0_16;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemModeInfo_56 = (MR_Word) (MR_body((MR_Word) (Item_42), (MR_Integer) 2));
            MR_Word AbstractItemModeInfo_57;
            MR_Word Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeInfo_56, (MR_Integer) 0))));
            MR_Word Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeInfo_56, (MR_Integer) 1))));
            MR_Word Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeInfo_56, (MR_Integer) 3))));
            MR_Word Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeInfo_56, (MR_Integer) 4))));
            MR_Integer Var_131 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemModeInfo_56, (MR_Integer) 5))));

            {
              AbstractItemModeInfo_57 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), AbstractItemModeInfo_57, 0) = ((MR_Box) (Var_126));
              MR_hl_field(MR_mktag(0), AbstractItemModeInfo_57, 1) = ((MR_Box) (Var_127));
              MR_hl_field(MR_mktag(0), AbstractItemModeInfo_57, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), AbstractItemModeInfo_57, 3) = ((MR_Box) (Var_129));
              MR_hl_field(MR_mktag(0), AbstractItemModeInfo_57, 4) = ((MR_Box) (Var_130));
              MR_hl_field(MR_mktag(0), AbstractItemModeInfo_57, 5) = ((MR_Box) (Var_131));
            }
            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), ((MR_Box) (AbstractItemModeInfo_57)), STATE_VARIABLE_IntModeDefns_0_8, &STATE_VARIABLE_IntModeDefns_106_106);
            STATE_VARIABLE_OrigIntTypeDefns_109_109 = STATE_VARIABLE_OrigIntTypeDefns_0_2;
            STATE_VARIABLE_IntTypeDefns_110_110 = STATE_VARIABLE_IntTypeDefns_0_4;
            STATE_VARIABLE_IntInstDefns_108_108 = STATE_VARIABLE_IntInstDefns_0_6;
            STATE_VARIABLE_IntTypeClasses_104_104 = STATE_VARIABLE_IntTypeClasses_0_10;
            STATE_VARIABLE_IntInstances_99_99 = STATE_VARIABLE_IntInstances_0_12;
            STATE_VARIABLE_OrigIntForeignEnums_97_97 = STATE_VARIABLE_OrigIntForeignEnums_0_14;
            STATE_VARIABLE_NeedImports_100_100 = STATE_VARIABLE_NeedImports_0_16;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_42, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_OrigIntTypeDefns_109_109 = STATE_VARIABLE_OrigIntTypeDefns_0_2;
                STATE_VARIABLE_IntTypeDefns_110_110 = STATE_VARIABLE_IntTypeDefns_0_4;
                STATE_VARIABLE_IntInstDefns_108_108 = STATE_VARIABLE_IntInstDefns_0_6;
                STATE_VARIABLE_IntModeDefns_106_106 = STATE_VARIABLE_IntModeDefns_0_8;
                STATE_VARIABLE_IntTypeClasses_104_104 = STATE_VARIABLE_IntTypeClasses_0_10;
                STATE_VARIABLE_IntInstances_99_99 = STATE_VARIABLE_IntInstances_0_12;
                STATE_VARIABLE_OrigIntForeignEnums_97_97 = STATE_VARIABLE_OrigIntForeignEnums_0_14;
                STATE_VARIABLE_NeedImports_100_100 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_OrigIntTypeDefns_109_109 = STATE_VARIABLE_OrigIntTypeDefns_0_2;
                STATE_VARIABLE_IntTypeDefns_110_110 = STATE_VARIABLE_IntTypeDefns_0_4;
                STATE_VARIABLE_IntInstDefns_108_108 = STATE_VARIABLE_IntInstDefns_0_6;
                STATE_VARIABLE_IntModeDefns_106_106 = STATE_VARIABLE_IntModeDefns_0_8;
                STATE_VARIABLE_IntTypeClasses_104_104 = STATE_VARIABLE_IntTypeClasses_0_10;
                STATE_VARIABLE_IntInstances_99_99 = STATE_VARIABLE_IntInstances_0_12;
                STATE_VARIABLE_OrigIntForeignEnums_97_97 = STATE_VARIABLE_OrigIntForeignEnums_0_14;
                STATE_VARIABLE_NeedImports_100_100 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ItemForeignEnumInfo_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_42, (MR_Integer) 1))));

                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ((MR_Box) (ItemForeignEnumInfo_70)), STATE_VARIABLE_OrigIntForeignEnums_0_14, &STATE_VARIABLE_OrigIntForeignEnums_97_97);
                STATE_VARIABLE_OrigIntTypeDefns_109_109 = STATE_VARIABLE_OrigIntTypeDefns_0_2;
                STATE_VARIABLE_IntTypeDefns_110_110 = STATE_VARIABLE_IntTypeDefns_0_4;
                STATE_VARIABLE_IntInstDefns_108_108 = STATE_VARIABLE_IntInstDefns_0_6;
                STATE_VARIABLE_IntModeDefns_106_106 = STATE_VARIABLE_IntModeDefns_0_8;
                STATE_VARIABLE_IntTypeClasses_104_104 = STATE_VARIABLE_IntTypeClasses_0_10;
                STATE_VARIABLE_IntInstances_99_99 = STATE_VARIABLE_IntInstances_0_12;
                STATE_VARIABLE_NeedImports_100_100 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
            case (MR_Integer) 3:
              {
                STATE_VARIABLE_OrigIntTypeDefns_109_109 = STATE_VARIABLE_OrigIntTypeDefns_0_2;
                STATE_VARIABLE_IntTypeDefns_110_110 = STATE_VARIABLE_IntTypeDefns_0_4;
                STATE_VARIABLE_IntInstDefns_108_108 = STATE_VARIABLE_IntInstDefns_0_6;
                STATE_VARIABLE_IntModeDefns_106_106 = STATE_VARIABLE_IntModeDefns_0_8;
                STATE_VARIABLE_IntTypeClasses_104_104 = STATE_VARIABLE_IntTypeClasses_0_10;
                STATE_VARIABLE_IntInstances_99_99 = STATE_VARIABLE_IntInstances_0_12;
                STATE_VARIABLE_OrigIntForeignEnums_97_97 = STATE_VARIABLE_OrigIntForeignEnums_0_14;
                STATE_VARIABLE_NeedImports_100_100 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
            case (MR_Integer) 4:
              {
                STATE_VARIABLE_OrigIntTypeDefns_109_109 = STATE_VARIABLE_OrigIntTypeDefns_0_2;
                STATE_VARIABLE_IntTypeDefns_110_110 = STATE_VARIABLE_IntTypeDefns_0_4;
                STATE_VARIABLE_IntInstDefns_108_108 = STATE_VARIABLE_IntInstDefns_0_6;
                STATE_VARIABLE_IntModeDefns_106_106 = STATE_VARIABLE_IntModeDefns_0_8;
                STATE_VARIABLE_IntTypeClasses_104_104 = STATE_VARIABLE_IntTypeClasses_0_10;
                STATE_VARIABLE_IntInstances_99_99 = STATE_VARIABLE_IntInstances_0_12;
                STATE_VARIABLE_OrigIntForeignEnums_97_97 = STATE_VARIABLE_OrigIntForeignEnums_0_14;
                STATE_VARIABLE_NeedImports_100_100 = STATE_VARIABLE_NeedImports_0_16;
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
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ((MR_Box) (AbstractItemTypeClassInfo_67)), STATE_VARIABLE_IntTypeClasses_0_10, &STATE_VARIABLE_IntTypeClasses_104_104);
                STATE_VARIABLE_OrigIntTypeDefns_109_109 = STATE_VARIABLE_OrigIntTypeDefns_0_2;
                STATE_VARIABLE_IntTypeDefns_110_110 = STATE_VARIABLE_IntTypeDefns_0_4;
                STATE_VARIABLE_IntInstDefns_108_108 = STATE_VARIABLE_IntInstDefns_0_6;
                STATE_VARIABLE_IntModeDefns_106_106 = STATE_VARIABLE_IntModeDefns_0_8;
                STATE_VARIABLE_IntInstances_99_99 = STATE_VARIABLE_IntInstances_0_12;
                STATE_VARIABLE_OrigIntForeignEnums_97_97 = STATE_VARIABLE_OrigIntForeignEnums_0_14;
                STATE_VARIABLE_NeedImports_100_100 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemInstanceInfo_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_42, (MR_Integer) 1))));
                MR_Word AbstractItemInstanceInfo_69;
                MR_Word Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_68, (MR_Integer) 0))));
                MR_Word Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_68, (MR_Integer) 1))));
                MR_Word Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_68, (MR_Integer) 2))));
                MR_Word Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_68, (MR_Integer) 3))));
                MR_Word Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_68, (MR_Integer) 5))));
                MR_Word Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_68, (MR_Integer) 6))));
                MR_Word Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_68, (MR_Integer) 7))));
                MR_Integer Var_140 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_68, (MR_Integer) 8))));

                {
                  AbstractItemInstanceInfo_69 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_69, 0) = ((MR_Box) (Var_132));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_69, 1) = ((MR_Box) (Var_133));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_69, 2) = ((MR_Box) (Var_134));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_69, 3) = ((MR_Box) (Var_135));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_69, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_69, 5) = ((MR_Box) (Var_137));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_69, 6) = ((MR_Box) (Var_138));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_69, 7) = ((MR_Box) (Var_139));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_69, 8) = ((MR_Box) (Var_140));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ((MR_Box) (AbstractItemInstanceInfo_69)), STATE_VARIABLE_IntInstances_0_12, &STATE_VARIABLE_IntInstances_99_99);
                STATE_VARIABLE_NeedImports_100_100 = (MR_Integer) 1;
                STATE_VARIABLE_OrigIntTypeDefns_109_109 = STATE_VARIABLE_OrigIntTypeDefns_0_2;
                STATE_VARIABLE_IntTypeDefns_110_110 = STATE_VARIABLE_IntTypeDefns_0_4;
                STATE_VARIABLE_IntInstDefns_108_108 = STATE_VARIABLE_IntInstDefns_0_6;
                STATE_VARIABLE_IntModeDefns_106_106 = STATE_VARIABLE_IntModeDefns_0_8;
                STATE_VARIABLE_IntTypeClasses_104_104 = STATE_VARIABLE_IntTypeClasses_0_10;
                STATE_VARIABLE_OrigIntForeignEnums_97_97 = STATE_VARIABLE_OrigIntForeignEnums_0_14;
              }
              break;
            case (MR_Integer) 7:
              {
                STATE_VARIABLE_OrigIntTypeDefns_109_109 = STATE_VARIABLE_OrigIntTypeDefns_0_2;
                STATE_VARIABLE_IntTypeDefns_110_110 = STATE_VARIABLE_IntTypeDefns_0_4;
                STATE_VARIABLE_IntInstDefns_108_108 = STATE_VARIABLE_IntInstDefns_0_6;
                STATE_VARIABLE_IntModeDefns_106_106 = STATE_VARIABLE_IntModeDefns_0_8;
                STATE_VARIABLE_IntTypeClasses_104_104 = STATE_VARIABLE_IntTypeClasses_0_10;
                STATE_VARIABLE_IntInstances_99_99 = STATE_VARIABLE_IntInstances_0_12;
                STATE_VARIABLE_OrigIntForeignEnums_97_97 = STATE_VARIABLE_OrigIntForeignEnums_0_14;
                STATE_VARIABLE_NeedImports_100_100 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
            case (MR_Integer) 8:
              {
                STATE_VARIABLE_OrigIntTypeDefns_109_109 = STATE_VARIABLE_OrigIntTypeDefns_0_2;
                STATE_VARIABLE_IntTypeDefns_110_110 = STATE_VARIABLE_IntTypeDefns_0_4;
                STATE_VARIABLE_IntInstDefns_108_108 = STATE_VARIABLE_IntInstDefns_0_6;
                STATE_VARIABLE_IntModeDefns_106_106 = STATE_VARIABLE_IntModeDefns_0_8;
                STATE_VARIABLE_IntTypeClasses_104_104 = STATE_VARIABLE_IntTypeClasses_0_10;
                STATE_VARIABLE_IntInstances_99_99 = STATE_VARIABLE_IntInstances_0_12;
                STATE_VARIABLE_OrigIntForeignEnums_97_97 = STATE_VARIABLE_OrigIntForeignEnums_0_14;
                STATE_VARIABLE_NeedImports_100_100 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
            case (MR_Integer) 9:
              {
                STATE_VARIABLE_OrigIntTypeDefns_109_109 = STATE_VARIABLE_OrigIntTypeDefns_0_2;
                STATE_VARIABLE_IntTypeDefns_110_110 = STATE_VARIABLE_IntTypeDefns_0_4;
                STATE_VARIABLE_IntInstDefns_108_108 = STATE_VARIABLE_IntInstDefns_0_6;
                STATE_VARIABLE_IntModeDefns_106_106 = STATE_VARIABLE_IntModeDefns_0_8;
                STATE_VARIABLE_IntTypeClasses_104_104 = STATE_VARIABLE_IntTypeClasses_0_10;
                STATE_VARIABLE_IntInstances_99_99 = STATE_VARIABLE_IntInstances_0_12;
                STATE_VARIABLE_OrigIntForeignEnums_97_97 = STATE_VARIABLE_OrigIntForeignEnums_0_14;
                STATE_VARIABLE_NeedImports_100_100 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
            case (MR_Integer) 10:
              {
                STATE_VARIABLE_OrigIntTypeDefns_109_109 = STATE_VARIABLE_OrigIntTypeDefns_0_2;
                STATE_VARIABLE_IntTypeDefns_110_110 = STATE_VARIABLE_IntTypeDefns_0_4;
                STATE_VARIABLE_IntInstDefns_108_108 = STATE_VARIABLE_IntInstDefns_0_6;
                STATE_VARIABLE_IntModeDefns_106_106 = STATE_VARIABLE_IntModeDefns_0_8;
                STATE_VARIABLE_IntTypeClasses_104_104 = STATE_VARIABLE_IntTypeClasses_0_10;
                STATE_VARIABLE_IntInstances_99_99 = STATE_VARIABLE_IntInstances_0_12;
                STATE_VARIABLE_OrigIntForeignEnums_97_97 = STATE_VARIABLE_OrigIntForeignEnums_0_14;
                STATE_VARIABLE_NeedImports_100_100 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemTypeDefnInfo_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_42, (MR_Integer) 1))));
                MR_Word AbstractOrForeignItemTypeDefnInfo_53;

                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), ((MR_Box) (ItemTypeDefnInfo_52)), STATE_VARIABLE_OrigIntTypeDefns_0_2, &STATE_VARIABLE_OrigIntTypeDefns_109_109);
                parse_tree__comp_unit_interface__make_type_defn_abstract_type_for_int3_2_p_0(ItemTypeDefnInfo_52, &AbstractOrForeignItemTypeDefnInfo_53);
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), ((MR_Box) (AbstractOrForeignItemTypeDefnInfo_53)), STATE_VARIABLE_IntTypeDefns_0_4, &STATE_VARIABLE_IntTypeDefns_110_110);
                STATE_VARIABLE_IntInstDefns_108_108 = STATE_VARIABLE_IntInstDefns_0_6;
                STATE_VARIABLE_IntModeDefns_106_106 = STATE_VARIABLE_IntModeDefns_0_8;
                STATE_VARIABLE_IntTypeClasses_104_104 = STATE_VARIABLE_IntTypeClasses_0_10;
                STATE_VARIABLE_IntInstances_99_99 = STATE_VARIABLE_IntInstances_0_12;
                STATE_VARIABLE_OrigIntForeignEnums_97_97 = STATE_VARIABLE_OrigIntForeignEnums_0_14;
                STATE_VARIABLE_NeedImports_100_100 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
            case (MR_Integer) 12:
              {
                STATE_VARIABLE_OrigIntTypeDefns_109_109 = STATE_VARIABLE_OrigIntTypeDefns_0_2;
                STATE_VARIABLE_IntTypeDefns_110_110 = STATE_VARIABLE_IntTypeDefns_0_4;
                STATE_VARIABLE_IntInstDefns_108_108 = STATE_VARIABLE_IntInstDefns_0_6;
                STATE_VARIABLE_IntModeDefns_106_106 = STATE_VARIABLE_IntModeDefns_0_8;
                STATE_VARIABLE_IntTypeClasses_104_104 = STATE_VARIABLE_IntTypeClasses_0_10;
                STATE_VARIABLE_IntInstances_99_99 = STATE_VARIABLE_IntInstances_0_12;
                STATE_VARIABLE_OrigIntForeignEnums_97_97 = STATE_VARIABLE_OrigIntForeignEnums_0_14;
                STATE_VARIABLE_NeedImports_100_100 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_43;
      next_value_of_STATE_VARIABLE_OrigIntTypeDefns_0_2 = STATE_VARIABLE_OrigIntTypeDefns_109_109;
      next_value_of_STATE_VARIABLE_IntTypeDefns_0_4 = STATE_VARIABLE_IntTypeDefns_110_110;
      next_value_of_STATE_VARIABLE_IntInstDefns_0_6 = STATE_VARIABLE_IntInstDefns_108_108;
      next_value_of_STATE_VARIABLE_IntModeDefns_0_8 = STATE_VARIABLE_IntModeDefns_106_106;
      next_value_of_STATE_VARIABLE_IntTypeClasses_0_10 = STATE_VARIABLE_IntTypeClasses_104_104;
      next_value_of_STATE_VARIABLE_IntInstances_0_12 = STATE_VARIABLE_IntInstances_99_99;
      next_value_of_STATE_VARIABLE_OrigIntForeignEnums_0_14 = STATE_VARIABLE_OrigIntForeignEnums_97_97;
      next_value_of_STATE_VARIABLE_NeedImports_0_16 = STATE_VARIABLE_NeedImports_100_100;
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
