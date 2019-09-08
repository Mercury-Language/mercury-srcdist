/*
** Automatically generated from `comp_unit_interface.m'
** by the Mercury compiler,
** version rotd-2019-09-08
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



struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0_s {
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeDefnMap_5;
  MR_bool parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__Var_9;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ArgType_21;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeCtor_35;
  jmp_buf parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__commit_0;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ItemTypeDefnInfo_37;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeDefn_38;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__DetailsDu_39;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__OoMCtors_40;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__MaybeEqCmp_41;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__MaybeDirectArgCtors_42;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__Var_60;
  MR_Box parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__conv0_ItemTypeDefnInfo_37;
};

struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0_s {
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeDefnMap_6;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__CoveredTypes_8;
  MR_bool parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ArgType_17;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeCtor_31;
  jmp_buf parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__commit_0;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ItemTypeDefnInfo_33;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeDefn_34;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__DetailsDu_35;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__OoMCtors_36;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__MaybeEqCmp_37;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__MaybeDirectArgCtors_38;
  MR_Word parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__Var_56;
  MR_Box parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__conv0_ItemTypeDefnInfo_33;
};


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_block_1__plain_parse_tree__prog_item__type_ctor_info_src_module_section_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_block_1__plain_parse_tree__prog_item__type_ctor_info_module_section_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_item__type_ctor_info_fim_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__list__pti_list_1__plain_libs__globals__type_ctor_info_foreign_language_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_foreign_enum_spec_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__comp_unit_interface__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__list__ti_one_or_more_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__comp_unit_interface__pair__ti_pair_2libs__globals__type_ctor_info_foreign_language_0list__ti_one_or_more_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__list__ti_list_1pair__ti_pair_2libs__globals__type_ctor_info_foreign_language_0list__ti_one_or_more_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2libs__globals__type_ctor_info_foreign_language_0list__ti_one_or_more_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

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

static const MR_FA_TypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__comp_unit_interface__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__IntroducedFrom__pred__get_interface_int1_items_loop_int__1329__1_2_p_0(
  MR_Word Langs_98,
  MR_Word HeadVar__2_148);

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
parse_tree__comp_unit_interface__gather_type_defn_items_3_p_0(
  MR_Word TypeDefns_4,
  MR_Word STATE_VARIABLE_TypeDefns_0_5,
  MR_Word * STATE_VARIABLE_TypeDefns_6);

static void MR_CALL 
parse_tree__comp_unit_interface__add_foreign_enum_spec_if_needed_6_p_0(
  MR_Word IntTypesMap_7,
  MR_Word ForeignEnumSpec_8,
  MR_Word STATE_VARIABLE_ImpForeignEnumSpecs_0_17,
  MR_Word * STATE_VARIABLE_ImpForeignEnumSpecs_18,
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
parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0(
  MR_Word TypeDefnMap_5,
  MR_Word OoMCtors_6,
  MR_Word MaybeCanonical_7,
  MR_Word MaybeDirectArgCtors_8);

static void MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0(
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

static void MR_CALL 
parse_tree__comp_unit_interface__record_foreign_enum_spec_3_p_0(
  MR_Word ForeignEnumSpec_4,
  MR_Word STATE_VARIABLE_ForeignEnumTypeCtors_0_16,
  MR_Word * STATE_VARIABLE_ForeignEnumTypeCtors_17);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_17_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_17_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_17_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_17_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_17_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_17_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_17_p_0(
  MR_Word Globals_18,
  MR_Word AugCompUnit_19,
  MR_Word IntInclModuleNames_20,
  MR_Word IntImportsUses_21,
  MR_Word IntExplicitFIMSpecs_22,
  MR_Word ImpExplicitFIMSpecs_23,
  MR_Word IntTypeDefns_24,
  MR_Word IntInstDefns_25,
  MR_Word IntModeDefns_26,
  MR_Word IntTypeClasses_27,
  MR_Word IntInstances_28,
  MR_Word ImpTypeDefns_29,
  MR_Word IntTypesMap_30,
  MR_Word ImpTypesMap_31,
  MR_Word IntPragmas_32,
  MR_Word ImpForeignEnums_33,
  MR_Word * ParseTreeInt2_34);

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
parse_tree__comp_unit_interface__generate_interface_int1_16_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_16_p_0(
  MR_Word AugCompUnit_17,
  MR_Word * IntIncls_18,
  MR_Word * IntImportsUses_19,
  MR_Word * IntExplicitFIMSpecs_20,
  MR_Word * ImpExplicitFIMSpecs_21,
  MR_Word * IntTypeDefns_22,
  MR_Word * IntInstDefns_23,
  MR_Word * IntModeDefns_24,
  MR_Word * IntTypeClasses_25,
  MR_Word * IntInstances_26,
  MR_Word * ImpTypeDefns_27,
  MR_Word * IntTypesMap_28,
  MR_Word * ImpTypesMap_29,
  MR_Word * IntPragmas_30,
  MR_Word * ImpForeignEnums0_31,
  MR_Word * ParseTreeInt1_32);

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
parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_47_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_47_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_47_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_47_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_47_p_0(
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
  MR_Word STATE_VARIABLE_IntPragmasCord_0_34,
  MR_Word * STATE_VARIABLE_IntPragmasCord_35,
  MR_Word STATE_VARIABLE_IntPromisesCord_0_36,
  MR_Word * STATE_VARIABLE_IntPromisesCord_37,
  MR_Word STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_38,
  MR_Word * STATE_VARIABLE_IntModulesNeededByTypeClassDefns_39,
  MR_Word STATE_VARIABLE_ImpTypesMap_0_40,
  MR_Word * STATE_VARIABLE_ImpTypesMap_41,
  MR_Word STATE_VARIABLE_ImpTypeClassesCord_0_42,
  MR_Word * STATE_VARIABLE_ImpTypeClassesCord_43,
  MR_Word STATE_VARIABLE_ImpForeignEnumsCord_0_44,
  MR_Word * STATE_VARIABLE_ImpForeignEnumsCord_45,
  MR_Word STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_46,
  MR_Word * STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_47);

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_imp_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_imp_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_0_2,
  MR_Word * STATE_VARIABLE_ImpImplicitFIMLangs_3,
  MR_Word STATE_VARIABLE_ImpTypesMap_0_4,
  MR_Word * STATE_VARIABLE_ImpTypesMap_5,
  MR_Word STATE_VARIABLE_ImpTypeClassesCord_0_6,
  MR_Word * STATE_VARIABLE_ImpTypeClassesCord_7,
  MR_Word STATE_VARIABLE_ImpForeignEnumsCord_0_8,
  MR_Word * STATE_VARIABLE_ImpForeignEnumsCord_9,
  MR_Word STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_10,
  MR_Word * STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_11);

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_25_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_25_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_25_p_0(
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
  MR_Word STATE_VARIABLE_IntPragmasCord_0_20,
  MR_Word * STATE_VARIABLE_IntPragmasCord_21,
  MR_Word STATE_VARIABLE_IntPromisesCord_0_22,
  MR_Word * STATE_VARIABLE_IntPromisesCord_23,
  MR_Word STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_24,
  MR_Word * STATE_VARIABLE_IntModulesNeededByTypeClassDefns_25);

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
parse_tree__comp_unit_interface__make_canon_make_du_and_solver_types_abstract_2_p_0(
  MR_Word ItemTypeDefn_3,
  MR_Word * MaybeAbstractItemTypeDefn_4);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_items_int_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntItemsCord_0_2,
  MR_Word * STATE_VARIABLE_IntItemsCord_3);

static void MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_54_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_54_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_54_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_54_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_54_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_54_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_54_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_54_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_54_p_0(
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
  MR_Word STATE_VARIABLE_IntPragmas_0_47,
  MR_Word * STATE_VARIABLE_IntPragmas_48,
  MR_Word STATE_VARIABLE_ImpPragmas_0_49,
  MR_Word * STATE_VARIABLE_ImpPragmas_50,
  MR_Word STATE_VARIABLE_IntPromises_0_51,
  MR_Word * STATE_VARIABLE_IntPromises_52,
  MR_Word STATE_VARIABLE_ImpPromises_0_53,
  MR_Word * STATE_VARIABLE_ImpPromises_54);

static void MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_items_20_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_items_20_p_0(
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
  MR_Word STATE_VARIABLE_Pragmas_0_17,
  MR_Word * STATE_VARIABLE_Pragmas_18,
  MR_Word STATE_VARIABLE_Promises_0_19,
  MR_Word * STATE_VARIABLE_Promises_20);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_via_int3_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_23_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_23_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_23_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_23_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntIncls_0_2,
  MR_Word * STATE_VARIABLE_IntIncls_3,
  MR_Word STATE_VARIABLE_IntImports_0_4,
  MR_Word * STATE_VARIABLE_IntImports_5,
  MR_Word STATE_VARIABLE_IntTypeDefns_0_6,
  MR_Word * STATE_VARIABLE_IntTypeDefns_7,
  MR_Word STATE_VARIABLE_IntInstDefns_0_8,
  MR_Word * STATE_VARIABLE_IntInstDefns_9,
  MR_Word STATE_VARIABLE_IntModeDefns_0_10,
  MR_Word * STATE_VARIABLE_IntModeDefns_11,
  MR_Word STATE_VARIABLE_IntTypeClasses_0_12,
  MR_Word * STATE_VARIABLE_IntTypeClasses_13,
  MR_Word STATE_VARIABLE_IntInstances_0_14,
  MR_Word * STATE_VARIABLE_IntInstances_15,
  MR_Word STATE_VARIABLE_OrigIntTypeDefns_0_16,
  MR_Word * STATE_VARIABLE_OrigIntTypeDefns_17,
  MR_Word STATE_VARIABLE_OrigImpTypeDefns_0_18,
  MR_Word * STATE_VARIABLE_OrigImpTypeDefns_19,
  MR_Word STATE_VARIABLE_ForeignEnumTypeCtors_0_20,
  MR_Word * STATE_VARIABLE_ForeignEnumTypeCtors_21,
  MR_Word STATE_VARIABLE_NeedImports_0_22,
  MR_Word * STATE_VARIABLE_NeedImports_23);

static void MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_from_items_imp_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImpTypeDefns_0_2,
  MR_Word * STATE_VARIABLE_ImpTypeDefns_3,
  MR_Word STATE_VARIABLE_ForeignEnumTypeCtors_0_4,
  MR_Word * STATE_VARIABLE_ForeignEnumTypeCtors_5);

static void MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_from_items_int_17_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntTypeDefns_0_2,
  MR_Word * STATE_VARIABLE_IntTypeDefns_3,
  MR_Word STATE_VARIABLE_IntInstDefns_0_4,
  MR_Word * STATE_VARIABLE_IntInstDefns_5,
  MR_Word STATE_VARIABLE_IntModeDefns_0_6,
  MR_Word * STATE_VARIABLE_IntModeDefns_7,
  MR_Word STATE_VARIABLE_IntTypeClasses_0_8,
  MR_Word * STATE_VARIABLE_IntTypeClasses_9,
  MR_Word STATE_VARIABLE_IntInstances_0_10,
  MR_Word * STATE_VARIABLE_IntInstances_11,
  MR_Word STATE_VARIABLE_OrigIntTypeDefns_0_12,
  MR_Word * STATE_VARIABLE_OrigIntTypeDefns_13,
  MR_Word STATE_VARIABLE_ForeignEnumTypeCtors_0_14,
  MR_Word * STATE_VARIABLE_ForeignEnumTypeCtors_15,
  MR_Word STATE_VARIABLE_NeedImports_0_16,
  MR_Word * STATE_VARIABLE_NeedImports_17);

static void MR_CALL 
parse_tree__comp_unit_interface__maybe_record_foreign_enum_3_p_0(
  MR_Word ItemPragma_4,
  MR_Word STATE_VARIABLE_ForeignEnumTypeCtors_0_11,
  MR_Word * STATE_VARIABLE_ForeignEnumTypeCtors_12);

static void MR_CALL 
parse_tree__comp_unit_interface__make_type_defn_abstract_type_for_int3_2_p_0(
  MR_Word ItemTypeDefn_3,
  MR_Word * AbstractOrForeignItemTypeDefnInfo_4);

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


static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_1[31][3];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_2[14][2];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_3[2][1];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_4[8][6];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_5[6][5];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_6[1][10];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_7[2][13];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_8[2][11];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_9[1][12];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_10[1][9];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_11[1][7];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_12[1][4];




static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_1[31][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_2[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_2[6]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_23_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_23_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_23_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[2])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_via_int3_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_54_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_54_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[3])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_54_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_54_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_54_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_54_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[3])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_54_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_54_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[2])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_25_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[2])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_interface_int1_items_loop_imp_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_47_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_47_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_47_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_47_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[3])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_17_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[3])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_17_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[4])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_17_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[5])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_17_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[6])),
    ((MR_Box) (parse_tree__comp_unit_interface__type_to_user_type_ctor_set_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[7])),
    ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_4[7])),
    ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 30 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_12[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__maybe_add_maybe_abstract_type_defns_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_2[14][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[1]))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_fim_spec_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_foreign_enum_spec_0))
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
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 12U))
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

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_4[8][6] = {
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
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_item__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_item__type_ctor_info_fim_spec_0))
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
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2libs__globals__type_ctor_info_foreign_language_0list__ti_one_or_more_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2libs__globals__type_ctor_info_foreign_language_0list__ti_one_or_more_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_foreign_enum_spec_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2libs__globals__type_ctor_info_foreign_language_0list__ti_one_or_more_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2libs__globals__type_ctor_info_foreign_language_0list__ti_one_or_more_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0))
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_fim_spec_0))
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

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_7[2][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
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
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
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
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
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
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_9[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_10[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_foreign_enum_spec_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_foreign_enum_spec_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_foreign_enum_spec_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_11[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_item__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_item__type_ctor_info_fim_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_12[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0))
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_item__type_ctor_info_fim_spec_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_fim_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__list__pti_list_1__plain_libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__comp_unit_interface__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_foreign_enum_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_foreign_enum_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__comp_unit_interface__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__list__ti_one_or_more_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&parse_tree__comp_unit_interface__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__comp_unit_interface__pair__ti_pair_2libs__globals__type_ctor_info_foreign_language_0list__ti_one_or_more_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0),
    (MR_TypeInfo) (&parse_tree__comp_unit_interface__list__ti_one_or_more_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__list__ti_list_1pair__ti_pair_2libs__globals__type_ctor_info_foreign_language_0list__ti_one_or_more_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__comp_unit_interface__pair__ti_pair_2libs__globals__type_ctor_info_foreign_language_0list__ti_one_or_more_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2libs__globals__type_ctor_info_foreign_language_0list__ti_one_or_more_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__comp_unit_interface__list__ti_list_1pair__ti_pair_2libs__globals__type_ctor_info_foreign_language_0list__ti_one_or_more_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)
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

static const MR_FA_TypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&parse_tree__comp_unit_interface__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)
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
  {     (MR_PseudoTypeInfo) (&parse_tree__comp_unit_interface__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct2 parse_tree__comp_unit_interface__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)
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
  {     (MR_PseudoTypeInfo) (&parse_tree__comp_unit_interface__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__IntroducedFrom__pred__get_interface_int1_items_loop_int__1329__1_2_p_0(
  MR_Word Langs_98,
  MR_Word HeadVar__2_148)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[10]), ((MR_Box) (Langs_98)), ((MR_Box) (HeadVar__2_148)));
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

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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
parse_tree__comp_unit_interface__gather_type_defn_items_3_p_0(
  MR_Word TypeDefns_4,
  MR_Word STATE_VARIABLE_TypeDefns_0_5,
  MR_Word * STATE_VARIABLE_TypeDefns_6)
{
  {
    *STATE_VARIABLE_TypeDefns_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), TypeDefns_4, STATE_VARIABLE_TypeDefns_0_5);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__add_foreign_enum_spec_if_needed_6_p_0(
  MR_Word IntTypesMap_7,
  MR_Word ForeignEnumSpec_8,
  MR_Word STATE_VARIABLE_ImpForeignEnumSpecs_0_17,
  MR_Word * STATE_VARIABLE_ImpForeignEnumSpecs_18,
  MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_0_19,
  MR_Word * STATE_VARIABLE_ImpImplicitFIMLangs_20)
{
  {
    MR_bool succeeded;
    MR_Word FEInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignEnumSpec_8, (MR_Integer) 0))));
    MR_Word Lang_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FEInfo_11, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word TypeCtor_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FEInfo_11, (MR_Integer) 1))));
    MR_Word Defns_16;
    MR_Box conv0_Defns_16;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[6]), IntTypesMap_7, ((MR_Box) (TypeCtor_14)), &conv0_Defns_16);
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
        *STATE_VARIABLE_ImpForeignEnumSpecs_18 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ForeignEnumSpec_8));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ImpForeignEnumSpecs_0_17));
      }
      mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_13)), STATE_VARIABLE_ImpImplicitFIMLangs_0_19, STATE_VARIABLE_ImpImplicitFIMLangs_20);
    }
    else
    {
      *STATE_VARIABLE_ImpImplicitFIMLangs_20 = STATE_VARIABLE_ImpImplicitFIMLangs_0_19;
      *STATE_VARIABLE_ImpForeignEnumSpecs_18 = STATE_VARIABLE_ImpForeignEnumSpecs_0_17;
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
      succeeded = ((((MR_tag((MR_Word) Body_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Body_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        {
          MR_Word next_value_of_HeadVar__1_1 = Defns_3;

          // direct tailcall eliminated
          ;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
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

    succeeded = ((((MR_tag((MR_Word) Var_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
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
    MR_Word TypeCtorInfo_26_26;
    MR_Word Var_22;

    succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_13)), NeededTypeCtors_12);
    if (succeeded)
    {
      if ((ImpItemTypeDefnInfos_14 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.make_imp_types_abstract\'/3", (MR_String) "!.ImpItemTypeDefnInfos = []");
          return;
        }
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

                succeeded = parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0(BothTypesMap_10, OoMCtors_56, MaybeEqCmp_57, MaybeDirectArgCtors_58);
                if (succeeded)
                  ImpItemTypeDefnInfo_33 = Var_44;
                else
                {
                  MR_Word DetailsAbs_60;
                  MR_Word TypeDefn_61;
                  MR_Integer NumBits_59;
                  MR_Word Var_69;
                  MR_Word Var_70;
                  MR_Word Var_72;
                  MR_Word Var_73;
                  MR_Integer Var_74;

                  succeeded = parse_tree__prog_type__du_type_is_enum_2_p_0(DetailsDu0_55, &NumBits_59);
                  if (succeeded)
                    {
                      DetailsAbs_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), DetailsAbs_60, 0) = ((MR_Box) (NumBits_59));
                    }
                  else
                    DetailsAbs_60 = (MR_Word) ((MR_Unsigned) 0U);
                  {
                    TypeDefn_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), TypeDefn_61, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), TypeDefn_61, 1) = ((MR_Box) (DetailsAbs_60));
                  }
                  Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 0))));
                  Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 1))));
                  Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 3))));
                  Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 4))));
                  Var_74 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 5))));
                  {
                    ImpItemTypeDefnInfo_33 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ImpItemTypeDefnInfo_33, 0) = ((MR_Box) (Var_69));
                    MR_hl_field(MR_mktag(0), ImpItemTypeDefnInfo_33, 1) = ((MR_Box) (Var_70));
                    MR_hl_field(MR_mktag(0), ImpItemTypeDefnInfo_33, 2) = ((MR_Box) (TypeDefn_61));
                    MR_hl_field(MR_mktag(0), ImpItemTypeDefnInfo_33, 3) = ((MR_Box) (Var_72));
                    MR_hl_field(MR_mktag(0), ImpItemTypeDefnInfo_33, 4) = ((MR_Box) (Var_73));
                    MR_hl_field(MR_mktag(0), ImpItemTypeDefnInfo_33, 5) = ((MR_Box) (Var_74));
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.make_imp_type_abstract\'/3", (MR_String) "solver type should have been made abstract");
                  return;
                }
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
      TypeCtorInfo_26_26 = (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0);
      succeeded = mercury__multi_map__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), TypeCtorInfo_26_26, IntTypesMap_11, ((MR_Box) (TypeCtor_13)));
      if (succeeded)
      {
        Var_22 = (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[30]);
        succeeded = mercury__list__all_true_2_p_0(TypeCtorInfo_26_26, Var_22, AbstractImpItemTypeDefnInfos_17);
      }
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word ImpTypeDefn_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AbstractImpItemTypeDefnInfos_17, (MR_Integer) 0))));
      MR_Word ImpTypeDefns_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AbstractImpItemTypeDefnInfos_17, (MR_Integer) 1))));
      MR_Word TypeDefn_87;
      MR_Word STATE_VARIABLE_RevImpTypeDefns_30_99;
      MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_32_101;
      MR_Word ForeignType_92;
      MR_Word DetailsForeign_91;

      {
        STATE_VARIABLE_RevImpTypeDefns_30_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevImpTypeDefns_30_99, 0) = ((MR_Box) (ImpTypeDefn_81));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevImpTypeDefns_30_99, 1) = ((MR_Box) (STATE_VARIABLE_ImpTypeDefns_0_18));
      }
      TypeDefn_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpTypeDefn_81, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) TypeDefn_87)) == (MR_Integer) 2);
      if (succeeded)
      {
        DetailsForeign_91 = (MR_Word) (MR_body((MR_Word) (TypeDefn_87), (MR_Integer) 2));
        ForeignType_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_91, (MR_Integer) 0))));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Var_100;

        Var_100 = parse_tree__prog_foreign__foreign_type_language_1_f_0(ForeignType_92);
        mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Var_100)), STATE_VARIABLE_ImpImplicitFIMLangs_0_20, &STATE_VARIABLE_ImpImplicitFIMLangs_32_101);
      }
      else
        STATE_VARIABLE_ImpImplicitFIMLangs_32_101 = STATE_VARIABLE_ImpImplicitFIMLangs_0_20;
      parse_tree__comp_unit_interface__add_type_defn_items_5_p_0(ImpTypeDefns_82, STATE_VARIABLE_RevImpTypeDefns_30_99, STATE_VARIABLE_ImpTypeDefns_19, STATE_VARIABLE_ImpImplicitFIMLangs_32_101, STATE_VARIABLE_ImpImplicitFIMLangs_21);
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
      succeeded = ((MR_tag((MR_Word) TypeDefn_18)) == (MR_Integer) 2);
      if (succeeded)
      {
        DetailsForeign_22 = (MR_Word) (MR_body((MR_Word) (TypeDefn_18), (MR_Integer) 2));
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
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.accumulate_modules_used_by_type_ctor\'/3", (MR_String) "unqualified type encountered");
        return;
      }
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
          mercury__set__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[28]), RhsTypeCtors_51, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_0_36)), &conv1_STATE_VARIABLE_ModulesNeededByTypeDefns_37);
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
          *STATE_VARIABLE_AbsExpEqvRhsTypeCtors_33 = STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_32;
          *STATE_VARIABLE_DuArgTypeCtors_35 = STATE_VARIABLE_DuArgTypeCtors_0_34;
          *STATE_VARIABLE_ModulesNeededByTypeDefns_37 = STATE_VARIABLE_ModulesNeededByTypeDefns_0_36;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ImpTypeDefn_16, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DetailsEqv_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImpTypeDefn_16, (MR_Integer) 1))));
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
              mercury__set__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[29]), NewRhsTypeCtors_23, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_0_36)), &conv3_STATE_VARIABLE_ModulesNeededByTypeDefns_46_46);
              STATE_VARIABLE_ModulesNeededByTypeDefns_46_46 = ((MR_Word) (conv3_STATE_VARIABLE_ModulesNeededByTypeDefns_46_46));
              {
                Var_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_8[0]));
                MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_3));
                MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (ImpTypesMap_9));
              }
              Var_49 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
              mercury__set__fold3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), Var_47, NewRhsTypeCtors_23, ((MR_Box) (STATE_VARIABLE_AbsExpEqvRhsTypeCtors_44_44)), &conv9_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_33, ((MR_Box) (Var_49)), &conv8_Var_24, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_46_46)), &conv7_STATE_VARIABLE_ModulesNeededByTypeDefns_37);
              *STATE_VARIABLE_AbsExpEqvRhsTypeCtors_33 = ((MR_Word) (conv9_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_33));
              *STATE_VARIABLE_ModulesNeededByTypeDefns_37 = ((MR_Word) (conv7_STATE_VARIABLE_ModulesNeededByTypeDefns_37));
              *STATE_VARIABLE_DuArgTypeCtors_35 = STATE_VARIABLE_DuArgTypeCtors_0_34;
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
      {
        mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_6)), STATE_VARIABLE_TypeCtors_0_13, &STATE_VARIABLE_TypeCtors_15_15);
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[27]), ArgTypes_7, ((MR_Box) (STATE_VARIABLE_TypeCtors_15_15)), &conv1_STATE_VARIABLE_TypeCtors_14);
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

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[6]), ImpTypesMap_9, ((MR_Box) (TypeCtor_10)), &conv0_ImpTypeDefns_14);
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
      mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), Var_21, ImpTypeDefns_14, ((MR_Box) (STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_15)), &conv6_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16, ((MR_Box) (STATE_VARIABLE_DuArgTypeCtors_0_17)), &conv5_STATE_VARIABLE_DuArgTypeCtors_18, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_0_19)), &conv4_STATE_VARIABLE_ModulesNeededByTypeDefns_20);
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
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.accumulate_abs_imp_exported_type_lhs\'/10", (MR_String) "ImpItemTypeDefnInfos = []");
      return;
    }
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
        MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[1]));
        MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_10_p_0_1));
        MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (IntTypesMap_11));
        MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) (BothTypesMap_12));
        MR_hl_field(MR_mktag(0), Var_29, 5) = ((MR_Box) (TypeCtor_13));
      }
      mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[11]), Var_29, ImpItemTypeDefnInfos_14, ((MR_Box) (STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_22)), &conv5_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23, ((MR_Box) (STATE_VARIABLE_AbsExpEnumTypeCtors_0_24)), &conv4_STATE_VARIABLE_AbsExpEnumTypeCtors_25, ((MR_Box) (STATE_VARIABLE_DirectDummyTypeCtors_0_26)), &conv3_STATE_VARIABLE_DirectDummyTypeCtors_27);
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
          MR_Integer _NumBits_33;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[6]), IntTypesMap_11, ((MR_Box) (TypeCtor_13)), &conv0_Var_32);
          if (succeeded)
            succeeded = MR_TRUE;
          if (succeeded)
            succeeded = parse_tree__prog_type__du_type_is_enum_2_p_0(DetailsDu_28, &_NumBits_33);
          if (succeeded)
          {
            mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_13)), STATE_VARIABLE_AbsExpEnumTypeCtors_0_38, STATE_VARIABLE_AbsExpEnumTypeCtors_39);
            *STATE_VARIABLE_DirectDummyTypeCtors_41 = STATE_VARIABLE_DirectDummyTypeCtors_0_40;
          }
          else
          {
            succeeded = parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0(BothTypesMap_12, OoMCtors_29, MaybeEqCmp_30, MaybeDirectArgCtors_31);
            if (succeeded)
            {
              mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_13)), STATE_VARIABLE_DirectDummyTypeCtors_0_40, STATE_VARIABLE_DirectDummyTypeCtors_41);
            }
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
          MR_Box conv2_Var_27;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[6]), IntTypesMap_11, ((MR_Box) (TypeCtor_13)), &conv2_Var_27);
          if (succeeded)
            succeeded = MR_TRUE;
          if (succeeded)
          {
            mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_13)), STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_36, STATE_VARIABLE_AbsExpEqvLhsTypeCtors_37);
          }
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
              MR_Box conv1_Var_25;

              succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[6]), IntTypesMap_11, ((MR_Box) (TypeCtor_13)), &conv1_Var_25);
              if (succeeded)
                succeeded = MR_TRUE;
              if (succeeded)
              {
                mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_13)), STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_36, STATE_VARIABLE_AbsExpEqvLhsTypeCtors_37);
              }
              else
                *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_37 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_36;
              *STATE_VARIABLE_AbsExpEnumTypeCtors_39 = STATE_VARIABLE_AbsExpEnumTypeCtors_0_38;
              *STATE_VARIABLE_DirectDummyTypeCtors_41 = STATE_VARIABLE_DirectDummyTypeCtors_0_40;
            }
            break;
          case (MR_Integer) 1:
            {
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
parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_1(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_3(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ItemTypeDefnInfo_37 = ((MR_Word) ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__conv0_ItemTypeDefnInfo_37));
    parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_2(env_ptr);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_2(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ItemTypeDefnInfo_37, (MR_Integer) 0))));
      MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ItemTypeDefnInfo_37, (MR_Integer) 1))));
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Integer Var_66;

      (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeDefn_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ItemTypeDefnInfo_37, (MR_Integer) 2))));
      Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ItemTypeDefnInfo_37, (MR_Integer) 3))));
      Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ItemTypeDefnInfo_37, (MR_Integer) 4))));
      Var_66 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ItemTypeDefnInfo_37, (MR_Integer) 5))));
      (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeDefn_38)) == (MR_Integer) 0);
      if ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded)
      {
        (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__DetailsDu_39 = (MR_Word) ((MR_Word) ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeDefn_38));
        (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__OoMCtors_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__DetailsDu_39, (MR_Integer) 0))));
        (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__MaybeEqCmp_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__DetailsDu_39, (MR_Integer) 1))));
        (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__MaybeDirectArgCtors_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__DetailsDu_39, (MR_Integer) 2))));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__Var_60 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ArgType_21));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__Var_9));
        }
        (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeDefnMap_5, (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__OoMCtors_40, (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__MaybeEqCmp_41, (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__MaybeDirectArgCtors_42, (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__Var_60);
        if ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded)
          parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_1(env_ptr);
      }
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_4(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word ItemTypeDefnInfos_36;

          (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = mercury__multi_map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeDefnMap_5, ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeCtor_35)), &ItemTypeDefnInfos_36);
          if ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded)
            mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), &(env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__conv0_ItemTypeDefnInfo_37, ItemTypeDefnInfos_36, parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_3, env_ptr);
        }
        (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0(
  MR_Word TypeDefnMap_5,
  MR_Word OoMCtors_6,
  MR_Word MaybeCanonical_7,
  MR_Word MaybeDirectArgCtors_8)
{
  {
    struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0_s env;

    (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeDefnMap_5 = TypeDefnMap_5;
    {
      MR_Word Ctor_13;
      MR_Word MaybeExistConstraints_15;
      MR_Word CtorArgs_17;
      MR_Word Var_23;
      uint32_t _Ordinal_14;
      MR_Word _Name_16;
      MR_Integer _Arity_18;
      MR_Word _Context_19;

      (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = (MaybeCanonical_7 == (MR_Word) ((MR_Unsigned) 0U));
      if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded)
      {
        (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = (MaybeDirectArgCtors_8 == (MR_Word) ((MR_Unsigned) 0U));
        if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded)
        {
          (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__Var_9 = (MR_Word) ((MR_Unsigned) 0U);
          Ctor_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_6, (MR_Integer) 0))));
          Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_6, (MR_Integer) 1))));
          (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
          if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded)
          {
            _Ordinal_14 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 0)));
            MaybeExistConstraints_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 1))));
            _Name_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 2))));
            CtorArgs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 3))));
            _Arity_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 4))));
            _Context_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 5))));
            (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = (MaybeExistConstraints_15 == (MR_Word) ((MR_Unsigned) 0U));
            if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded)
            {
              if ((CtorArgs_17 == (MR_Word) ((MR_Unsigned) 0U)))
                (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = MR_TRUE;
              else
              {
                MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorArgs_17, (MR_Integer) 0))));
                MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorArgs_17, (MR_Integer) 1))));
                MR_Word Var_20;
                MR_Word Var_22;

                (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = (Var_25 == (MR_Word) ((MR_Unsigned) 0U));
                if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded)
                {
                  Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0))));
                  (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ArgType_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 1))));
                  Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 2))));
                  if (((MR_tag((MR_Word) (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ArgType_21)) == (MR_Integer) 1))
                  {
                    MR_Word SymName_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ArgType_21, (MR_Integer) 0))));
                    MR_Word TypeArgs_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ArgType_21, (MR_Integer) 1))));
                    MR_Word _Kind_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ArgType_21, (MR_Integer) 2))));

                    (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ArgType_21)), (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__Var_9);
                    if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded)
                      (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = MR_FALSE;
                    else
                    {
                      MR_Integer Arity_34;

                      Arity_34 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeArgs_32);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeCtor_35 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_31));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Arity_34));
                      }
                      {
                        MR_Word Var_61;

                        Var_61 = parse_tree__prog_type__is_type_ctor_a_builtin_dummy_1_f_0((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__TypeCtor_35);
                        (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = (Var_61 == (MR_Integer) 0);
                      }
                      if (!((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded))
                      {
                        parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_4(&env);
                      }
                    }
                  }
                  else
                  if (((((MR_tag((MR_Word) (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ArgType_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__ArgType_21, (MR_Integer) 0)))) == (MR_Integer) 3))))
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.comp_unit_interface.ctor_arg_is_dummy_type\'/3", (MR_String) "kinded_type");
                    (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = MR_TRUE;
                  }
                  else
                    (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded = MR_FALSE;
                }
              }
            }
          }
        }
      }
      return (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_4_p_0_env_0__succeeded;
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_1(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_3(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ItemTypeDefnInfo_33 = ((MR_Word) ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__conv0_ItemTypeDefnInfo_33));
    parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_2(env_ptr);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_2(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ItemTypeDefnInfo_33, (MR_Integer) 0))));
      MR_Word Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ItemTypeDefnInfo_33, (MR_Integer) 1))));
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Integer Var_62;

      (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeDefn_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ItemTypeDefnInfo_33, (MR_Integer) 2))));
      Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ItemTypeDefnInfo_33, (MR_Integer) 3))));
      Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ItemTypeDefnInfo_33, (MR_Integer) 4))));
      Var_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ItemTypeDefnInfo_33, (MR_Integer) 5))));
      (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeDefn_34)) == (MR_Integer) 0);
      if ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded)
      {
        (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__DetailsDu_35 = (MR_Word) ((MR_Word) ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeDefn_34));
        (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__OoMCtors_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__DetailsDu_35, (MR_Integer) 0))));
        (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__MaybeEqCmp_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__DetailsDu_35, (MR_Integer) 1))));
        (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__MaybeDirectArgCtors_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__DetailsDu_35, (MR_Integer) 2))));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__Var_56 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ArgType_17));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__CoveredTypes_8));
        }
        (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeDefnMap_6, (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__OoMCtors_36, (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__MaybeEqCmp_37, (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__MaybeDirectArgCtors_38, (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__Var_56);
        if ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded)
          parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_1(env_ptr);
      }
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_4(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word ItemTypeDefnInfos_32;

          (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = mercury__multi_map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeDefnMap_6, ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeCtor_31)), &ItemTypeDefnInfos_32);
          if ((env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded)
            mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), &(env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__conv0_ItemTypeDefnInfo_33, ItemTypeDefnInfos_32, parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_3, env_ptr);
        }
        (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0(
  MR_Word TypeDefnMap_6,
  MR_Word OoMCtors_7,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word CoveredTypes_8)
{
  {
    struct parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0_s env;

    (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeDefnMap_6 = TypeDefnMap_6;
    (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__CoveredTypes_8 = CoveredTypes_8;
    {
      MR_Word Ctor_9;
      MR_Word MaybeExistConstraints_11;
      MR_Word CtorArgs_13;
      MR_Word Var_19;
      uint32_t _Ordinal_10;
      MR_Word _Name_12;
      MR_Integer _Arity_14;
      MR_Word _Context_15;

      (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
      if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded)
      {
        (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = (HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U));
        if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded)
        {
          Ctor_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_7, (MR_Integer) 0))));
          Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_7, (MR_Integer) 1))));
          (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
          if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded)
          {
            _Ordinal_10 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 0)));
            MaybeExistConstraints_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 1))));
            _Name_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 2))));
            CtorArgs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 3))));
            _Arity_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 4))));
            _Context_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 5))));
            (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = (MaybeExistConstraints_11 == (MR_Word) ((MR_Unsigned) 0U));
            if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded)
            {
              if ((CtorArgs_13 == (MR_Word) ((MR_Unsigned) 0U)))
                (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = MR_TRUE;
              else
              {
                MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorArgs_13, (MR_Integer) 0))));
                MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorArgs_13, (MR_Integer) 1))));
                MR_Word Var_16;
                MR_Word Var_18;

                (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 0U));
                if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded)
                {
                  Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 0))));
                  (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ArgType_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 1))));
                  Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 2))));
                  if (((MR_tag((MR_Word) (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ArgType_17)) == (MR_Integer) 1))
                  {
                    MR_Word SymName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ArgType_17, (MR_Integer) 0))));
                    MR_Word TypeArgs_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ArgType_17, (MR_Integer) 1))));
                    MR_Word _Kind_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ArgType_17, (MR_Integer) 2))));

                    (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ArgType_17)), (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__CoveredTypes_8);
                    if ((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded)
                      (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = MR_FALSE;
                    else
                    {
                      MR_Integer Arity_30;

                      Arity_30 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeArgs_28);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeCtor_31 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_27));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Arity_30));
                      }
                      {
                        MR_Word Var_57;

                        Var_57 = parse_tree__prog_type__is_type_ctor_a_builtin_dummy_1_f_0((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__TypeCtor_31);
                        (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = (Var_57 == (MR_Integer) 0);
                      }
                      if (!((env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded))
                      {
                        parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_4(&env);
                      }
                    }
                  }
                  else
                  if (((((MR_tag((MR_Word) (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ArgType_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__ArgType_17, (MR_Integer) 0)))) == (MR_Integer) 3))))
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.comp_unit_interface.ctor_arg_is_dummy_type\'/3", (MR_String) "kinded_type");
                    (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = MR_TRUE;
                  }
                  else
                    (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded = MR_FALSE;
                }
              }
            }
          }
        }
      }
      return (env).parse_tree__comp_unit_interface__constructor_list_represents_dummy_argument_type_2_5_p_0_env_0__succeeded;
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
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.accumulate_modules_from_constraint\'/3", (MR_String) "unknown typeclass in constraint");
        return;
      }
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
    mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_fim_spec_0), ((MR_Box) (FIMSpec_10)), STATE_VARIABLE_FIMSpecs_0_11, STATE_VARIABLE_FIMSpecs_12);
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
    mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_fim_spec_0), ((MR_Box) (FIMSpec_8)), STATE_VARIABLE_FIMSpecs_0_9, STATE_VARIABLE_FIMSpecs_10);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__record_foreign_enum_spec_3_p_0(
  MR_Word ForeignEnumSpec_4,
  MR_Word STATE_VARIABLE_ForeignEnumTypeCtors_0_16,
  MR_Word * STATE_VARIABLE_ForeignEnumTypeCtors_17)
{
  {
    MR_bool succeeded;
    MR_Word PragmaInfoForeignEnum_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignEnumSpec_4, (MR_Integer) 0))));
    MR_Word Lang_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PragmaInfoForeignEnum_6, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word TypeCtor_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaInfoForeignEnum_6, (MR_Integer) 1))));
    MR_Word OoMValues_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaInfoForeignEnum_6, (MR_Integer) 2))));
    MR_Word TypeSymName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_9, (MR_Integer) 0))));
    MR_Integer TypeArity_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_9, (MR_Integer) 1))));
    MR_String TypeName_13;
    MR_Word UnqualTypeCtor_14;
    MR_Word LVs0_15;
    MR_Box conv0_LVs0_15;

    TypeName_13 = mdbcomp__sym_name__unqualify_name_1_f_0(TypeSymName_11);
    {
      UnqualTypeCtor_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnqualTypeCtor_14, 0) = ((MR_Box) (TypeName_13));
      MR_hl_field(MR_mktag(0), UnqualTypeCtor_14, 1) = ((MR_Box) (TypeArity_12));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[1]), STATE_VARIABLE_ForeignEnumTypeCtors_0_16, ((MR_Box) (UnqualTypeCtor_14)), &conv0_LVs0_15);
    if (succeeded)
    {
      LVs0_15 = ((MR_Word) (conv0_LVs0_15));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_18;
      MR_Word Var_20;

      {
        Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (Lang_8));
        MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (OoMValues_10));
      }
      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (LVs0_15));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[1]), ((MR_Box) (UnqualTypeCtor_14)), ((MR_Box) (Var_18)), STATE_VARIABLE_ForeignEnumTypeCtors_0_16, STATE_VARIABLE_ForeignEnumTypeCtors_17);
    }
    else
    {
      MR_Word Var_21;
      MR_Word Var_23;

      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (Lang_8));
        MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (OoMValues_10));
      }
      {
        Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[1]), ((MR_Box) (UnqualTypeCtor_14)), ((MR_Box) (Var_21)), STATE_VARIABLE_ForeignEnumTypeCtors_0_16, STATE_VARIABLE_ForeignEnumTypeCtors_17);
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
      MR_hl_field(MR_mktag(0), FIM_6, 3) = ((MR_Box) ((MR_Integer) -1));
    }
    return FIM_6;
  }
}

void MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_4_p_0(
  MR_Word Globals_5,
  MR_Word AugCompUnit_6,
  MR_Word * ParseTreeInt1_7,
  MR_Word * ParseTreeInt2_8)
{
  {
    MR_Word IntInclModuleNames_9;
    MR_Word IntImportsUses_10;
    MR_Word IntExplicitFIMSpecs_11;
    MR_Word ImpExplicitFIMSpecs_12;
    MR_Word IntTypeDefns_13;
    MR_Word IntInstDefns_14;
    MR_Word IntModeDefns_15;
    MR_Word IntTypeClasses_16;
    MR_Word IntInstances_17;
    MR_Word ImpTypeDefns_18;
    MR_Word IntTypesMap_19;
    MR_Word ImpTypesMap_20;
    MR_Word IntPragmas_21;
    MR_Word ImpForeignEnums_22;
    MR_Word ParseTreeInt1A_23;
    MR_Word ParseTreeInt2A_24;

    parse_tree__comp_unit_interface__generate_interface_int1_16_p_0(AugCompUnit_6, &IntInclModuleNames_9, &IntImportsUses_10, &IntExplicitFIMSpecs_11, &ImpExplicitFIMSpecs_12, &IntTypeDefns_13, &IntInstDefns_14, &IntModeDefns_15, &IntTypeClasses_16, &IntInstances_17, &ImpTypeDefns_18, &IntTypesMap_19, &ImpTypesMap_20, &IntPragmas_21, &ImpForeignEnums_22, &ParseTreeInt1A_23);
    parse_tree__comp_unit_interface__generate_interface_int2_17_p_0(Globals_5, AugCompUnit_6, IntInclModuleNames_9, IntImportsUses_10, IntExplicitFIMSpecs_11, ImpExplicitFIMSpecs_12, IntTypeDefns_13, IntInstDefns_14, IntModeDefns_15, IntTypeClasses_16, IntInstances_17, ImpTypeDefns_18, IntTypesMap_19, ImpTypesMap_20, IntPragmas_21, ImpForeignEnums_22, &ParseTreeInt2A_24);
    *ParseTreeInt1_7 = parse_tree__prog_item__convert_parse_tree_int1_to_parse_tree_int_1_f_0(ParseTreeInt1A_23);
    *ParseTreeInt2_8 = parse_tree__prog_item__convert_parse_tree_int2_to_parse_tree_int_1_f_0(ParseTreeInt2A_24);
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_17_p_0_7(
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
parse_tree__comp_unit_interface__generate_interface_int2_17_p_0_6(
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

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_17_p_0_5(
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
parse_tree__comp_unit_interface__generate_interface_int2_17_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_ForeignEnumTypeCtors_17;

    parse_tree__comp_unit_interface__record_foreign_enum_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_ForeignEnumTypeCtors_17);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ForeignEnumTypeCtors_17));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_17_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_ForeignEnumTypeCtors_12;

    parse_tree__comp_unit_interface__maybe_record_foreign_enum_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ForeignEnumTypeCtors_12);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ForeignEnumTypeCtors_12));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_17_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_TypeDefns_6;

    parse_tree__comp_unit_interface__gather_type_defn_items_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_TypeDefns_6);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_TypeDefns_6));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_TypeDefns_6;

    parse_tree__comp_unit_interface__gather_type_defn_items_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeDefns_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeDefns_6));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_17_p_0(
  MR_Word Globals_18,
  MR_Word AugCompUnit_19,
  MR_Word IntInclModuleNames_20,
  MR_Word IntImportsUses_21,
  MR_Word IntExplicitFIMSpecs_22,
  MR_Word ImpExplicitFIMSpecs_23,
  MR_Word IntTypeDefns_24,
  MR_Word IntInstDefns_25,
  MR_Word IntModeDefns_26,
  MR_Word IntTypeClasses_27,
  MR_Word IntInstances_28,
  MR_Word ImpTypeDefns_29,
  MR_Word IntTypesMap_30,
  MR_Word ImpTypesMap_31,
  MR_Word IntPragmas_32,
  MR_Word ImpForeignEnums_33,
  MR_Word * ParseTreeInt2_34)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_19, (MR_Integer) 0))));
    MR_Word ModuleNameContext_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_19, (MR_Integer) 1))));
    MR_Word UnqualSymNames_43;
    MR_Word UsedModuleNames_44;
    MR_Word ShortIntTypeDefnsCord_45;
    MR_Word ShortIntImplicitFIMLangs_46;
    MR_Word ShortIntTypeClassesCord_47;
    MR_Word ShortIntInstancesCord_48;
    MR_Word ShortIntTypeDefns_49;
    MR_Word ShortIntTypeClasses_52;
    MR_Word ShortIntInstances_53;
    MR_Word ShortImpImplicitFIMLangs_54;
    MR_Word Experiment1_55;
    MR_Word ShortIntTypeRepns_56;
    MR_Word ShortIntUsedModuleNames_62;
    MR_Word ShortIntExplicitFIMSpecs_63;
    MR_Word ShortIntFIMSpecs_64;
    MR_Word ExplicitFIMSpecs_65;
    MR_Word ShortImpExplicitFIMSpecs_66;
    MR_Word ShortImpFIMSpecs0_67;
    MR_Word ShortImpFIMSpecs_68;
    MR_Word STATE_VARIABLE_UsedModuleNames_72_72;
    MR_Word STATE_VARIABLE_UnqualSymNames_73_73;
    MR_Word STATE_VARIABLE_UsedModuleNames_74_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word STATE_VARIABLE_UnqualSymNames_77_77;
    MR_Word STATE_VARIABLE_UsedModuleNames_78_78;
    MR_Word STATE_VARIABLE_UnqualSymNames_79_79;
    MR_Word STATE_VARIABLE_UsedModuleNames_80_80;
    MR_Word STATE_VARIABLE_UnqualSymNames_81_81;
    MR_Word STATE_VARIABLE_UsedModuleNames_82_82;
    MR_Word Var_83;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Box conv9_ShortIntFIMSpecs_64;
    MR_Box conv10_ShortImpFIMSpecs0_67;

    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_UsedModuleNames_72_72);
    Var_75 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0));
    Var_76 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    parse_tree__comp_unit_interface__get_int2_items_from_int1_int_type_defn_9_p_0(IntTypeDefns_24, (MR_Integer) 0, &STATE_VARIABLE_UnqualSymNames_73_73, STATE_VARIABLE_UsedModuleNames_72_72, &STATE_VARIABLE_UsedModuleNames_74_74, Var_75, &ShortIntTypeDefnsCord_45, Var_76, &ShortIntImplicitFIMLangs_46);
    parse_tree__comp_unit_interface__get_int2_items_from_int1_int_inst_defn_5_p_0(IntInstDefns_25, STATE_VARIABLE_UnqualSymNames_73_73, &STATE_VARIABLE_UnqualSymNames_77_77, STATE_VARIABLE_UsedModuleNames_74_74, &STATE_VARIABLE_UsedModuleNames_78_78);
    parse_tree__comp_unit_interface__get_int2_items_from_int1_int_mode_defn_5_p_0(IntModeDefns_26, STATE_VARIABLE_UnqualSymNames_77_77, &STATE_VARIABLE_UnqualSymNames_79_79, STATE_VARIABLE_UsedModuleNames_78_78, &STATE_VARIABLE_UsedModuleNames_80_80);
    Var_83 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0));
    parse_tree__comp_unit_interface__get_int2_items_from_int1_int_typeclass_7_p_0(IntTypeClasses_27, STATE_VARIABLE_UnqualSymNames_79_79, &STATE_VARIABLE_UnqualSymNames_81_81, STATE_VARIABLE_UsedModuleNames_80_80, &STATE_VARIABLE_UsedModuleNames_82_82, Var_83, &ShortIntTypeClassesCord_47);
    Var_86 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0));
    parse_tree__comp_unit_interface__get_int2_items_from_int1_int_instance_7_p_0(IntInstances_28, STATE_VARIABLE_UnqualSymNames_81_81, &UnqualSymNames_43, STATE_VARIABLE_UsedModuleNames_82_82, &UsedModuleNames_44, Var_86, &ShortIntInstancesCord_48);
    ShortIntTypeDefns_49 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), ShortIntTypeDefnsCord_45);
    ShortIntTypeClasses_52 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ShortIntTypeClassesCord_47);
    ShortIntInstances_53 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ShortIntInstancesCord_48);
    Var_87 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    parse_tree__comp_unit_interface__get_int2_items_from_int1_imp_types_3_p_0(ImpTypeDefns_29, Var_87, &ShortImpImplicitFIMLangs_54);
    libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 695, &Experiment1_55);
    switch (Experiment1_55) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ShortIntTypeRepns_56 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word OrigIntTypeDefns_57;
          MR_Word OrigImpTypeDefns_58;
          MR_Word ForeignEnumTypeCtors0_59;
          MR_Word ForeignEnumTypeCtors_60;
          MR_Word Var_94;
          MR_Box conv1_OrigIntTypeDefns_57;
          MR_Box conv3_OrigImpTypeDefns_58;
          MR_Box conv5_ForeignEnumTypeCtors0_59;
          MR_Box conv7_ForeignEnumTypeCtors_60;
          MR_Word _ShortImpTypeRepns_61;

          mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[6]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[6]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[23]), IntTypesMap_30, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_OrigIntTypeDefns_57);
          OrigIntTypeDefns_57 = ((MR_Word) (conv1_OrigIntTypeDefns_57));
          mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[6]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[6]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[24]), ImpTypesMap_31, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_OrigImpTypeDefns_58);
          OrigImpTypeDefns_58 = ((MR_Word) (conv3_OrigImpTypeDefns_58));
          Var_94 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[1]));
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[2]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[25]), IntPragmas_32, ((MR_Box) (Var_94)), &conv5_ForeignEnumTypeCtors0_59);
          ForeignEnumTypeCtors0_59 = ((MR_Word) (conv5_ForeignEnumTypeCtors0_59));
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_foreign_enum_spec_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[2]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[26]), ImpForeignEnums_33, ((MR_Box) (ForeignEnumTypeCtors0_59)), &conv7_ForeignEnumTypeCtors_60);
          ForeignEnumTypeCtors_60 = ((MR_Word) (conv7_ForeignEnumTypeCtors_60));
          parse_tree__decide_type_repn__decide_repns_for_simple_types_6_p_0(ModuleName_35, OrigIntTypeDefns_57, OrigImpTypeDefns_58, ForeignEnumTypeCtors_60, &ShortIntTypeRepns_56, &_ShortImpTypeRepns_61);
        }
        break;
    }
    switch (UnqualSymNames_43) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__set__intersect_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), UsedModuleNames_44, IntImportsUses_21, &ShortIntUsedModuleNames_62);
        }
        break;
      case (MR_Integer) 1:
        ShortIntUsedModuleNames_62 = IntImportsUses_21;
        break;
    }
    {
      Var_96 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[5]));
      MR_hl_field(MR_mktag(0), Var_96, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_17_p_0_5));
      MR_hl_field(MR_mktag(0), Var_96, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_96, 3) = ((MR_Box) (ShortIntImplicitFIMLangs_46));
    }
    mercury__set__filter_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_fim_spec_0), Var_96, IntExplicitFIMSpecs_22, &ShortIntExplicitFIMSpecs_63);
    {
      Var_97 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_97, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), Var_97, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_17_p_0_6));
      MR_hl_field(MR_mktag(0), Var_97, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_97, 3) = ((MR_Box) (ModuleName_35));
    }
    mercury__set__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[5]), Var_97, ShortIntImplicitFIMLangs_46, ((MR_Box) (ShortIntExplicitFIMSpecs_63)), &conv9_ShortIntFIMSpecs_64);
    ShortIntFIMSpecs_64 = ((MR_Word) (conv9_ShortIntFIMSpecs_64));
    mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_fim_spec_0), IntExplicitFIMSpecs_22, ImpExplicitFIMSpecs_23, &ExplicitFIMSpecs_65);
    {
      Var_98 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_98, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[5]));
      MR_hl_field(MR_mktag(0), Var_98, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_17_p_0_7));
      MR_hl_field(MR_mktag(0), Var_98, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_98, 3) = ((MR_Box) (ShortImpImplicitFIMLangs_54));
    }
    mercury__set__filter_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_fim_spec_0), Var_98, ExplicitFIMSpecs_65, &ShortImpExplicitFIMSpecs_66);
    mercury__set__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[5]), Var_97, ShortImpImplicitFIMLangs_54, ((MR_Box) (ShortImpExplicitFIMSpecs_66)), &conv10_ShortImpFIMSpecs0_67);
    ShortImpFIMSpecs0_67 = ((MR_Word) (conv10_ShortImpFIMSpecs0_67));
    mercury__set__difference_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_fim_spec_0), ShortImpFIMSpecs0_67, ShortIntFIMSpecs_64, &ShortImpFIMSpecs_68);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt2_34 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_35));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_36));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (IntInclModuleNames_20));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ShortIntUsedModuleNames_62));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ShortIntFIMSpecs_64));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ShortImpFIMSpecs_68));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ShortIntTypeDefns_49));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (IntInstDefns_25));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (IntModeDefns_26));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ShortIntTypeClasses_52));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ShortIntInstances_53));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ShortIntTypeRepns_56));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ImpTypeDefns_29));
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

      succeeded = ((MR_tag((MR_Word) TypeDefn_10)) == (MR_Integer) 2);
      if (succeeded)
      {
        DetailsForeign_11 = (MR_Word) (MR_body((MR_Word) (TypeDefn_10), (MR_Integer) 2));
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
      MR_Word TypeDefnInfo_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TypeDefnInfos_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MaybeAbstractTypeDefnInfo_28;
      MR_Word TypeDefn_31;
      MR_Word STATE_VARIABLE_MaybeUnqual_53_53;
      MR_Word STATE_VARIABLE_ModuleNames_54_54;
      MR_Word STATE_VARIABLE_IntImplicitFIMLangs_55_55;
      MR_Word STATE_VARIABLE_IntTypeDefnsCord_56_56;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_MaybeUnqual_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleNames_0_4;
      MR_Word next_value_of_STATE_VARIABLE_IntTypeDefnsCord_0_6;
      MR_Word next_value_of_STATE_VARIABLE_IntImplicitFIMLangs_0_8;

      parse_tree__comp_unit_interface__make_canon_make_du_and_solver_types_abstract_2_p_0(TypeDefnInfo_22, &MaybeAbstractTypeDefnInfo_28);
      TypeDefn_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeAbstractTypeDefnInfo_28, (MR_Integer) 2))));
      switch (MR_tag((MR_Word) TypeDefn_31)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_MaybeUnqual_53_53 = STATE_VARIABLE_MaybeUnqual_0_2;
            STATE_VARIABLE_ModuleNames_54_54 = STATE_VARIABLE_ModuleNames_0_4;
            STATE_VARIABLE_IntImplicitFIMLangs_55_55 = STATE_VARIABLE_IntImplicitFIMLangs_0_8;
          }
          break;
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_MaybeUnqual_53_53 = STATE_VARIABLE_MaybeUnqual_0_2;
            STATE_VARIABLE_ModuleNames_54_54 = STATE_VARIABLE_ModuleNames_0_4;
            STATE_VARIABLE_IntImplicitFIMLangs_55_55 = STATE_VARIABLE_IntImplicitFIMLangs_0_8;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word DetailsForeign_38 = (MR_Word) (MR_body((MR_Word) (TypeDefn_31), (MR_Integer) 2));
            MR_Word ForeignType_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_38, (MR_Integer) 0))));
            MR_Word Lang_42;

            Lang_42 = parse_tree__prog_foreign__foreign_type_language_1_f_0(ForeignType_39);
            mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_42)), STATE_VARIABLE_IntImplicitFIMLangs_0_8, &STATE_VARIABLE_IntImplicitFIMLangs_55_55);
            STATE_VARIABLE_MaybeUnqual_53_53 = STATE_VARIABLE_MaybeUnqual_0_2;
            STATE_VARIABLE_ModuleNames_54_54 = STATE_VARIABLE_ModuleNames_0_4;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_31, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word DetailsEqv_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_31, (MR_Integer) 1))));
                MR_Word EqvType_44 = (MR_Word) (DetailsEqv_43);

                parse_tree__comp_unit_interface__accumulate_modules_in_type_5_p_0(EqvType_44, STATE_VARIABLE_MaybeUnqual_0_2, &STATE_VARIABLE_MaybeUnqual_53_53, STATE_VARIABLE_ModuleNames_0_4, &STATE_VARIABLE_ModuleNames_54_54);
                STATE_VARIABLE_IntImplicitFIMLangs_55_55 = STATE_VARIABLE_IntImplicitFIMLangs_0_8;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_MaybeUnqual_53_53 = STATE_VARIABLE_MaybeUnqual_0_2;
                STATE_VARIABLE_ModuleNames_54_54 = STATE_VARIABLE_ModuleNames_0_4;
                STATE_VARIABLE_IntImplicitFIMLangs_55_55 = STATE_VARIABLE_IntImplicitFIMLangs_0_8;
              }
              break;
          }
          break;
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), ((MR_Box) (MaybeAbstractTypeDefnInfo_28)), STATE_VARIABLE_IntTypeDefnsCord_0_6, &STATE_VARIABLE_IntTypeDefnsCord_56_56);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = TypeDefnInfos_23;
      next_value_of_STATE_VARIABLE_MaybeUnqual_0_2 = STATE_VARIABLE_MaybeUnqual_53_53;
      next_value_of_STATE_VARIABLE_ModuleNames_0_4 = STATE_VARIABLE_ModuleNames_54_54;
      next_value_of_STATE_VARIABLE_IntTypeDefnsCord_0_6 = STATE_VARIABLE_IntTypeDefnsCord_56_56;
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
parse_tree__comp_unit_interface__generate_interface_int1_16_p_0_3(
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
parse_tree__comp_unit_interface__generate_interface_int1_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_STATE_VARIABLE_ImpForeignEnumSpecs_18;
    MR_Word conv4_STATE_VARIABLE_ImpImplicitFIMLangs_20;

    parse_tree__comp_unit_interface__add_foreign_enum_spec_if_needed_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_ImpForeignEnumSpecs_18, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_ImpImplicitFIMLangs_20);
    *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_ImpForeignEnumSpecs_18));
    *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_ImpImplicitFIMLangs_20));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_16_p_0_1(
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
parse_tree__comp_unit_interface__generate_interface_int1_16_p_0(
  MR_Word AugCompUnit_17,
  MR_Word * IntIncls_18,
  MR_Word * IntImportsUses_19,
  MR_Word * IntExplicitFIMSpecs_20,
  MR_Word * ImpExplicitFIMSpecs_21,
  MR_Word * IntTypeDefns_22,
  MR_Word * IntInstDefns_23,
  MR_Word * IntModeDefns_24,
  MR_Word * IntTypeClasses_25,
  MR_Word * IntInstances_26,
  MR_Word * ImpTypeDefns_27,
  MR_Word * IntTypesMap_28,
  MR_Word * ImpTypesMap_29,
  MR_Word * IntPragmas_30,
  MR_Word * ImpForeignEnums0_31,
  MR_Word * ParseTreeInt1_32)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_17, (MR_Integer) 0))));
    MR_Word ModuleNameContext_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_17, (MR_Integer) 1))));
    MR_Word SrcItemBlocks_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_17, (MR_Integer) 3))));
    MR_Word IntImportsUses0_41;
    MR_Word ImpImportsUses0_42;
    MR_Word IntExplicitFIMSpecs0_43;
    MR_Word ImpExplicitFIMSpecs0_44;
    MR_Word IntImplicitFIMLangs0_45;
    MR_Word ImpImplicitFIMLangs0_46;
    MR_Word IntTypesMap0_47;
    MR_Word ImpTypesMap0_48;
    MR_Word ImpIncls_49;
    MR_Word ImpImportsUses1_50;
    MR_Word IntImplicitFIMLangs_51;
    MR_Word ImpImplicitFIMLangs1_52;
    MR_Word IntTypeDefnsCord_53;
    MR_Word IntInstDefnsCord_54;
    MR_Word IntModeDefnsCord_55;
    MR_Word IntTypeClassesCord_56;
    MR_Word IntInstancesCord_57;
    MR_Word IntPredDeclsCord_58;
    MR_Word IntModeDeclsCord_59;
    MR_Word IntPragmasCord_60;
    MR_Word IntPromisesCord_61;
    MR_Word ImpTypeClassesCord_63;
    MR_Word ImpForeignEnumsCord_64;
    MR_Word ImpModulesNeededByTypeClassDefns_65;
    MR_Word IntPredDecls_66;
    MR_Word IntModeDecls_67;
    MR_Word IntPromises_68;
    MR_Word ImpTypeClasses_69;
    MR_Word BothTypesMap_70;
    MR_Word NeededImpTypeCtors_71;
    MR_Word ImpModulesNeededByTypeDefns_72;
    MR_Word ImpNeededModules_73;
    MR_Word ImpImportsUses_74;
    MR_Word ImpImplicitFIMLangs2_76;
    MR_Word ImpForeignEnums_77;
    MR_Word ImpImplicitFIMLangs_78;
    MR_Word IntFIMSpecs_79;
    MR_Word ImpFIMSpecs0_80;
    MR_Word ImpFIMSpecs_81;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_101;
    MR_Word Var_103;
    MR_Word _IntModulesNeededByTypeClassDefns_62;
    MR_Box conv3_ImpTypeDefns_27;
    MR_Box conv2_ImpImplicitFIMLangs2_76;
    MR_Box conv7_ImpForeignEnums_77;
    MR_Box conv6_ImpImplicitFIMLangs_78;
    MR_Box conv9_IntFIMSpecs_79;
    MR_Box conv10_ImpFIMSpecs0_80;

    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &IntImportsUses0_41);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &ImpImportsUses0_42);
    mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_fim_spec_0), &IntExplicitFIMSpecs0_43);
    mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_fim_spec_0), &ImpExplicitFIMSpecs0_44);
    mercury__set__init_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), &IntImplicitFIMLangs0_45);
    mercury__set__init_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), &ImpImplicitFIMLangs0_46);
    mercury__multi_map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), &IntTypesMap0_47);
    mercury__multi_map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), &ImpTypesMap0_48);
    Var_84 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_85 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_86 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0));
    Var_87 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0));
    Var_88 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0));
    Var_89 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0));
    Var_90 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0));
    Var_91 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0));
    Var_92 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0));
    Var_93 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_0));
    Var_94 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0));
    Var_95 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_96 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0));
    Var_97 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_foreign_enum_spec_0));
    Var_98 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_47_p_0(SrcItemBlocks_36, Var_84, IntIncls_18, Var_85, &ImpIncls_49, IntImportsUses0_41, IntImportsUses_19, ImpImportsUses0_42, &ImpImportsUses1_50, IntExplicitFIMSpecs0_43, IntExplicitFIMSpecs_20, ImpExplicitFIMSpecs0_44, ImpExplicitFIMSpecs_21, IntImplicitFIMLangs0_45, &IntImplicitFIMLangs_51, ImpImplicitFIMLangs0_46, &ImpImplicitFIMLangs1_52, IntTypesMap0_47, IntTypesMap_28, Var_86, &IntTypeDefnsCord_53, Var_87, &IntInstDefnsCord_54, Var_88, &IntModeDefnsCord_55, Var_89, &IntTypeClassesCord_56, Var_90, &IntInstancesCord_57, Var_91, &IntPredDeclsCord_58, Var_92, &IntModeDeclsCord_59, Var_93, &IntPragmasCord_60, Var_94, &IntPromisesCord_61, Var_95, &_IntModulesNeededByTypeClassDefns_62, ImpTypesMap0_48, ImpTypesMap_29, Var_96, &ImpTypeClassesCord_63, Var_97, &ImpForeignEnumsCord_64, Var_98, &ImpModulesNeededByTypeClassDefns_65);
    *IntTypeDefns_22 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), IntTypeDefnsCord_53);
    *IntInstDefns_23 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), IntInstDefnsCord_54);
    *IntModeDefns_24 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), IntModeDefnsCord_55);
    *IntTypeClasses_25 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClassesCord_56);
    *IntInstances_26 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstancesCord_57);
    IntPredDecls_66 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), IntPredDeclsCord_58);
    IntModeDecls_67 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), IntModeDeclsCord_59);
    *IntPragmas_30 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_0), IntPragmasCord_60);
    IntPromises_68 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), IntPromisesCord_61);
    ImpTypeClasses_69 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ImpTypeClassesCord_63);
    *ImpForeignEnums0_31 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_foreign_enum_spec_0), ImpForeignEnumsCord_64);
    BothTypesMap_70 = mercury__multi_map__merge_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), *IntTypesMap_28, *ImpTypesMap_29);
    parse_tree__comp_unit_interface__get_requirements_of_imp_exported_types_5_p_0(*IntTypesMap_28, *ImpTypesMap_29, BothTypesMap_70, &NeededImpTypeCtors_71, &ImpModulesNeededByTypeDefns_72);
    mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpModulesNeededByTypeClassDefns_65, ImpModulesNeededByTypeDefns_72, &ImpNeededModules_73);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpNeededModules_73);
    if (succeeded)
      mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &ImpImportsUses_74);
    else
    {
      MR_Word ImpImportsUses2_75;

      ImpImportsUses2_75 = mercury__set__intersect_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImportsUses1_50, ImpNeededModules_73);
      ImpImportsUses_74 = mercury__set__difference_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImportsUses2_75, *IntImportsUses_19);
    }
    {
      Var_99 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_99, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_16_p_0_1));
      MR_hl_field(MR_mktag(0), Var_99, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_99, 3) = ((MR_Box) (BothTypesMap_70));
      MR_hl_field(MR_mktag(0), Var_99, 4) = ((MR_Box) (*IntTypesMap_28));
      MR_hl_field(MR_mktag(0), Var_99, 5) = ((MR_Box) (NeededImpTypeCtors_71));
    }
    mercury__map__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[6]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[6]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[7]), Var_99, *ImpTypesMap_29, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_ImpTypeDefns_27, ((MR_Box) (ImpImplicitFIMLangs1_52)), &conv2_ImpImplicitFIMLangs2_76);
    *ImpTypeDefns_27 = ((MR_Word) (conv3_ImpTypeDefns_27));
    ImpImplicitFIMLangs2_76 = ((MR_Word) (conv2_ImpImplicitFIMLangs2_76));
    {
      Var_101 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_101, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_101, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_16_p_0_2));
      MR_hl_field(MR_mktag(0), Var_101, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_101, 3) = ((MR_Box) (*IntTypesMap_28));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_foreign_enum_spec_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[8]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[7]), Var_101, *ImpForeignEnums0_31, ((MR_Box) ((MR_Unsigned) 0U)), &conv7_ImpForeignEnums_77, ((MR_Box) (ImpImplicitFIMLangs2_76)), &conv6_ImpImplicitFIMLangs_78);
    ImpForeignEnums_77 = ((MR_Word) (conv7_ImpForeignEnums_77));
    ImpImplicitFIMLangs_78 = ((MR_Word) (conv6_ImpImplicitFIMLangs_78));
    {
      Var_103 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_103, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), Var_103, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_16_p_0_3));
      MR_hl_field(MR_mktag(0), Var_103, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_103, 3) = ((MR_Box) (ModuleName_33));
    }
    mercury__set__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[5]), Var_103, IntImplicitFIMLangs_51, ((MR_Box) (*IntExplicitFIMSpecs_20)), &conv9_IntFIMSpecs_79);
    IntFIMSpecs_79 = ((MR_Word) (conv9_IntFIMSpecs_79));
    mercury__set__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[5]), Var_103, ImpImplicitFIMLangs_78, ((MR_Box) (*ImpExplicitFIMSpecs_21)), &conv10_ImpFIMSpecs0_80);
    ImpFIMSpecs0_80 = ((MR_Word) (conv10_ImpFIMSpecs0_80));
    mercury__set__difference_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_fim_spec_0), ImpFIMSpecs0_80, IntFIMSpecs_79, &ImpFIMSpecs_81);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt1_32 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_33));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_34));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (*IntIncls_18));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ImpIncls_49));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (*IntImportsUses_19));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ImpImportsUses_74));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (IntFIMSpecs_79));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ImpFIMSpecs_81));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (*IntTypeDefns_22));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (*IntInstDefns_23));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (*IntModeDefns_24));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (*IntTypeClasses_25));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (*IntInstances_26));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (IntPredDecls_66));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (IntModeDecls_67));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (*IntPragmas_30));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (IntPromises_68));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (*ImpTypeDefns_27));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (ImpForeignEnums_77));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (ImpTypeClasses_69));
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
    mercury__map__foldl3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[6]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[11]), Var_16, ImpTypesMap_7, ((MR_Box) (Var_17)), &conv5_AbsExpEqvLhsTypeCtors_11, ((MR_Box) (Var_18)), &conv4_AbsExpEnumTypeCtors_12, ((MR_Box) (Var_19)), &conv3_DirectDummyTypeCtors_13);
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
    mercury__set__fold3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), Var_20, AbsExpEqvLhsTypeCtors_11, ((MR_Box) (Var_21)), &conv11_AbsExpEqvRhsTypeCtors_14, ((MR_Box) (Var_22)), &conv10_DuArgTypeCtors_15, ((MR_Box) (Var_23)), &conv9_ModulesNeededByTypeDefns_10);
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
parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_47_p_0_4(
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
parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_47_p_0_3(
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
parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_47_p_0_2(
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
parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_47_p_0_1(
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
parse_tree__comp_unit_interface__get_interface_int1_item_blocks_loop_47_p_0(
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
  MR_Word STATE_VARIABLE_IntPragmasCord_0_34,
  MR_Word * STATE_VARIABLE_IntPragmasCord_35,
  MR_Word STATE_VARIABLE_IntPromisesCord_0_36,
  MR_Word * STATE_VARIABLE_IntPromisesCord_37,
  MR_Word STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_38,
  MR_Word * STATE_VARIABLE_IntModulesNeededByTypeClassDefns_39,
  MR_Word STATE_VARIABLE_ImpTypesMap_0_40,
  MR_Word * STATE_VARIABLE_ImpTypesMap_41,
  MR_Word STATE_VARIABLE_ImpTypeClassesCord_0_42,
  MR_Word * STATE_VARIABLE_ImpTypeClassesCord_43,
  MR_Word STATE_VARIABLE_ImpForeignEnumsCord_0_44,
  MR_Word * STATE_VARIABLE_ImpForeignEnumsCord_45,
  MR_Word STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_46,
  MR_Word * STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_47)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_47 = STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_46;
      *STATE_VARIABLE_ImpForeignEnumsCord_45 = STATE_VARIABLE_ImpForeignEnumsCord_0_44;
      *STATE_VARIABLE_ImpTypeClassesCord_43 = STATE_VARIABLE_ImpTypeClassesCord_0_42;
      *STATE_VARIABLE_ImpTypesMap_41 = STATE_VARIABLE_ImpTypesMap_0_40;
      *STATE_VARIABLE_IntModulesNeededByTypeClassDefns_39 = STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_38;
      *STATE_VARIABLE_IntPromisesCord_37 = STATE_VARIABLE_IntPromisesCord_0_36;
      *STATE_VARIABLE_IntPragmasCord_35 = STATE_VARIABLE_IntPragmasCord_0_34;
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
      MR_Word SrcItemBlock_117 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word SrcItemBlocks_118 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word SrcSection_143 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_117, (MR_Integer) 1))));
      MR_Word Incls_144 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_117, (MR_Integer) 2))));
      MR_Word Avails_145 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_117, (MR_Integer) 3))));
      MR_Word FIMs_146 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_117, (MR_Integer) 4))));
      MR_Word Items_147 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_117, (MR_Integer) 5))));
      MR_Word STATE_VARIABLE_ImpIncls_197_197;
      MR_Word STATE_VARIABLE_ImpImportsUses_198_198;
      MR_Word STATE_VARIABLE_ImpExplicitFIMSpecs_200_200;
      MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_201_201;
      MR_Word STATE_VARIABLE_ImpTypesMap_202_202;
      MR_Word STATE_VARIABLE_ImpTypeClassesCord_203_203;
      MR_Word STATE_VARIABLE_ImpForeignEnumsCord_204_204;
      MR_Word STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_205_205;
      MR_Word STATE_VARIABLE_IntIncls_207_207;
      MR_Word STATE_VARIABLE_IntImportsUses_208_208;
      MR_Word STATE_VARIABLE_IntExplicitFIMSpecs_210_210;
      MR_Word STATE_VARIABLE_IntImplicitFIMLangs_211_211;
      MR_Word STATE_VARIABLE_IntTypesMap_212_212;
      MR_Word STATE_VARIABLE_IntTypeDefnsCord_213_213;
      MR_Word STATE_VARIABLE_IntInstDefnsCord_214_214;
      MR_Word STATE_VARIABLE_IntModeDefnsCord_215_215;
      MR_Word STATE_VARIABLE_IntTypeClassesCord_216_216;
      MR_Word STATE_VARIABLE_IntInstancesCord_217_217;
      MR_Word STATE_VARIABLE_IntPredDeclsCord_218_218;
      MR_Word STATE_VARIABLE_IntModeDeclsCord_219_219;
      MR_Word STATE_VARIABLE_IntPragmasCord_220_220;
      MR_Word STATE_VARIABLE_IntPromisesCord_221_221;
      MR_Word STATE_VARIABLE_IntModulesNeededByTypeClassDefns_222_222;
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
      MR_Word next_value_of_STATE_VARIABLE_IntPragmasCord_0_34;
      MR_Word next_value_of_STATE_VARIABLE_IntPromisesCord_0_36;
      MR_Word next_value_of_STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_38;
      MR_Word next_value_of_STATE_VARIABLE_ImpTypesMap_0_40;
      MR_Word next_value_of_STATE_VARIABLE_ImpTypeClassesCord_0_42;
      MR_Word next_value_of_STATE_VARIABLE_ImpForeignEnumsCord_0_44;
      MR_Word next_value_of_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_46;

      switch (SrcSection_143) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.get_interface_int1_item_blocks_loop\'/47", (MR_String) "sms_impl_but_exported_to_submodules");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box conv1_STATE_VARIABLE_ImpIncls_197_197;
            MR_Box conv3_STATE_VARIABLE_ImpExplicitFIMSpecs_200_200;

            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[19]), Incls_144, ((MR_Box) (STATE_VARIABLE_ImpIncls_0_4)), &conv1_STATE_VARIABLE_ImpIncls_197_197);
            STATE_VARIABLE_ImpIncls_197_197 = ((MR_Word) (conv1_STATE_VARIABLE_ImpIncls_197_197));
            parse_tree__comp_unit_interface__get_interface_int1_avails_loop_3_p_0(Avails_145, STATE_VARIABLE_ImpImportsUses_0_8, &STATE_VARIABLE_ImpImportsUses_198_198);
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[5]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[20]), FIMs_146, ((MR_Box) (STATE_VARIABLE_ImpExplicitFIMSpecs_0_12)), &conv3_STATE_VARIABLE_ImpExplicitFIMSpecs_200_200);
            STATE_VARIABLE_ImpExplicitFIMSpecs_200_200 = ((MR_Word) (conv3_STATE_VARIABLE_ImpExplicitFIMSpecs_200_200));
            parse_tree__comp_unit_interface__get_interface_int1_items_loop_imp_11_p_0(Items_147, STATE_VARIABLE_ImpImplicitFIMLangs_0_16, &STATE_VARIABLE_ImpImplicitFIMLangs_201_201, STATE_VARIABLE_ImpTypesMap_0_40, &STATE_VARIABLE_ImpTypesMap_202_202, STATE_VARIABLE_ImpTypeClassesCord_0_42, &STATE_VARIABLE_ImpTypeClassesCord_203_203, STATE_VARIABLE_ImpForeignEnumsCord_0_44, &STATE_VARIABLE_ImpForeignEnumsCord_204_204, STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_46, &STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_205_205);
            STATE_VARIABLE_IntIncls_207_207 = STATE_VARIABLE_IntIncls_0_2;
            STATE_VARIABLE_IntImportsUses_208_208 = STATE_VARIABLE_IntImportsUses_0_6;
            STATE_VARIABLE_IntExplicitFIMSpecs_210_210 = STATE_VARIABLE_IntExplicitFIMSpecs_0_10;
            STATE_VARIABLE_IntImplicitFIMLangs_211_211 = STATE_VARIABLE_IntImplicitFIMLangs_0_14;
            STATE_VARIABLE_IntTypesMap_212_212 = STATE_VARIABLE_IntTypesMap_0_18;
            STATE_VARIABLE_IntTypeDefnsCord_213_213 = STATE_VARIABLE_IntTypeDefnsCord_0_20;
            STATE_VARIABLE_IntInstDefnsCord_214_214 = STATE_VARIABLE_IntInstDefnsCord_0_22;
            STATE_VARIABLE_IntModeDefnsCord_215_215 = STATE_VARIABLE_IntModeDefnsCord_0_24;
            STATE_VARIABLE_IntTypeClassesCord_216_216 = STATE_VARIABLE_IntTypeClassesCord_0_26;
            STATE_VARIABLE_IntInstancesCord_217_217 = STATE_VARIABLE_IntInstancesCord_0_28;
            STATE_VARIABLE_IntPredDeclsCord_218_218 = STATE_VARIABLE_IntPredDeclsCord_0_30;
            STATE_VARIABLE_IntModeDeclsCord_219_219 = STATE_VARIABLE_IntModeDeclsCord_0_32;
            STATE_VARIABLE_IntPragmasCord_220_220 = STATE_VARIABLE_IntPragmasCord_0_34;
            STATE_VARIABLE_IntPromisesCord_221_221 = STATE_VARIABLE_IntPromisesCord_0_36;
            STATE_VARIABLE_IntModulesNeededByTypeClassDefns_222_222 = STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_38;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Box conv5_STATE_VARIABLE_IntIncls_207_207;
            MR_Box conv7_STATE_VARIABLE_IntExplicitFIMSpecs_210_210;

            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[21]), Incls_144, ((MR_Box) (STATE_VARIABLE_IntIncls_0_2)), &conv5_STATE_VARIABLE_IntIncls_207_207);
            STATE_VARIABLE_IntIncls_207_207 = ((MR_Word) (conv5_STATE_VARIABLE_IntIncls_207_207));
            parse_tree__comp_unit_interface__get_interface_int1_avails_loop_3_p_0(Avails_145, STATE_VARIABLE_IntImportsUses_0_6, &STATE_VARIABLE_IntImportsUses_208_208);
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[5]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[22]), FIMs_146, ((MR_Box) (STATE_VARIABLE_IntExplicitFIMSpecs_0_10)), &conv7_STATE_VARIABLE_IntExplicitFIMSpecs_210_210);
            STATE_VARIABLE_IntExplicitFIMSpecs_210_210 = ((MR_Word) (conv7_STATE_VARIABLE_IntExplicitFIMSpecs_210_210));
            parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_25_p_0(Items_147, STATE_VARIABLE_IntImplicitFIMLangs_0_14, &STATE_VARIABLE_IntImplicitFIMLangs_211_211, STATE_VARIABLE_IntTypesMap_0_18, &STATE_VARIABLE_IntTypesMap_212_212, STATE_VARIABLE_IntTypeDefnsCord_0_20, &STATE_VARIABLE_IntTypeDefnsCord_213_213, STATE_VARIABLE_IntInstDefnsCord_0_22, &STATE_VARIABLE_IntInstDefnsCord_214_214, STATE_VARIABLE_IntModeDefnsCord_0_24, &STATE_VARIABLE_IntModeDefnsCord_215_215, STATE_VARIABLE_IntTypeClassesCord_0_26, &STATE_VARIABLE_IntTypeClassesCord_216_216, STATE_VARIABLE_IntInstancesCord_0_28, &STATE_VARIABLE_IntInstancesCord_217_217, STATE_VARIABLE_IntPredDeclsCord_0_30, &STATE_VARIABLE_IntPredDeclsCord_218_218, STATE_VARIABLE_IntModeDeclsCord_0_32, &STATE_VARIABLE_IntModeDeclsCord_219_219, STATE_VARIABLE_IntPragmasCord_0_34, &STATE_VARIABLE_IntPragmasCord_220_220, STATE_VARIABLE_IntPromisesCord_0_36, &STATE_VARIABLE_IntPromisesCord_221_221, STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_38, &STATE_VARIABLE_IntModulesNeededByTypeClassDefns_222_222);
            STATE_VARIABLE_ImpIncls_197_197 = STATE_VARIABLE_ImpIncls_0_4;
            STATE_VARIABLE_ImpImportsUses_198_198 = STATE_VARIABLE_ImpImportsUses_0_8;
            STATE_VARIABLE_ImpExplicitFIMSpecs_200_200 = STATE_VARIABLE_ImpExplicitFIMSpecs_0_12;
            STATE_VARIABLE_ImpImplicitFIMLangs_201_201 = STATE_VARIABLE_ImpImplicitFIMLangs_0_16;
            STATE_VARIABLE_ImpTypesMap_202_202 = STATE_VARIABLE_ImpTypesMap_0_40;
            STATE_VARIABLE_ImpTypeClassesCord_203_203 = STATE_VARIABLE_ImpTypeClassesCord_0_42;
            STATE_VARIABLE_ImpForeignEnumsCord_204_204 = STATE_VARIABLE_ImpForeignEnumsCord_0_44;
            STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_205_205 = STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_46;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = SrcItemBlocks_118;
      next_value_of_STATE_VARIABLE_IntIncls_0_2 = STATE_VARIABLE_IntIncls_207_207;
      next_value_of_STATE_VARIABLE_ImpIncls_0_4 = STATE_VARIABLE_ImpIncls_197_197;
      next_value_of_STATE_VARIABLE_IntImportsUses_0_6 = STATE_VARIABLE_IntImportsUses_208_208;
      next_value_of_STATE_VARIABLE_ImpImportsUses_0_8 = STATE_VARIABLE_ImpImportsUses_198_198;
      next_value_of_STATE_VARIABLE_IntExplicitFIMSpecs_0_10 = STATE_VARIABLE_IntExplicitFIMSpecs_210_210;
      next_value_of_STATE_VARIABLE_ImpExplicitFIMSpecs_0_12 = STATE_VARIABLE_ImpExplicitFIMSpecs_200_200;
      next_value_of_STATE_VARIABLE_IntImplicitFIMLangs_0_14 = STATE_VARIABLE_IntImplicitFIMLangs_211_211;
      next_value_of_STATE_VARIABLE_ImpImplicitFIMLangs_0_16 = STATE_VARIABLE_ImpImplicitFIMLangs_201_201;
      next_value_of_STATE_VARIABLE_IntTypesMap_0_18 = STATE_VARIABLE_IntTypesMap_212_212;
      next_value_of_STATE_VARIABLE_IntTypeDefnsCord_0_20 = STATE_VARIABLE_IntTypeDefnsCord_213_213;
      next_value_of_STATE_VARIABLE_IntInstDefnsCord_0_22 = STATE_VARIABLE_IntInstDefnsCord_214_214;
      next_value_of_STATE_VARIABLE_IntModeDefnsCord_0_24 = STATE_VARIABLE_IntModeDefnsCord_215_215;
      next_value_of_STATE_VARIABLE_IntTypeClassesCord_0_26 = STATE_VARIABLE_IntTypeClassesCord_216_216;
      next_value_of_STATE_VARIABLE_IntInstancesCord_0_28 = STATE_VARIABLE_IntInstancesCord_217_217;
      next_value_of_STATE_VARIABLE_IntPredDeclsCord_0_30 = STATE_VARIABLE_IntPredDeclsCord_218_218;
      next_value_of_STATE_VARIABLE_IntModeDeclsCord_0_32 = STATE_VARIABLE_IntModeDeclsCord_219_219;
      next_value_of_STATE_VARIABLE_IntPragmasCord_0_34 = STATE_VARIABLE_IntPragmasCord_220_220;
      next_value_of_STATE_VARIABLE_IntPromisesCord_0_36 = STATE_VARIABLE_IntPromisesCord_221_221;
      next_value_of_STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_38 = STATE_VARIABLE_IntModulesNeededByTypeClassDefns_222_222;
      next_value_of_STATE_VARIABLE_ImpTypesMap_0_40 = STATE_VARIABLE_ImpTypesMap_202_202;
      next_value_of_STATE_VARIABLE_ImpTypeClassesCord_0_42 = STATE_VARIABLE_ImpTypeClassesCord_203_203;
      next_value_of_STATE_VARIABLE_ImpForeignEnumsCord_0_44 = STATE_VARIABLE_ImpForeignEnumsCord_204_204;
      next_value_of_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_46 = STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_205_205;
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
      STATE_VARIABLE_IntPragmasCord_0_34 = next_value_of_STATE_VARIABLE_IntPragmasCord_0_34;
      STATE_VARIABLE_IntPromisesCord_0_36 = next_value_of_STATE_VARIABLE_IntPromisesCord_0_36;
      STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_38 = next_value_of_STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_38;
      STATE_VARIABLE_ImpTypesMap_0_40 = next_value_of_STATE_VARIABLE_ImpTypesMap_0_40;
      STATE_VARIABLE_ImpTypeClassesCord_0_42 = next_value_of_STATE_VARIABLE_ImpTypeClassesCord_0_42;
      STATE_VARIABLE_ImpForeignEnumsCord_0_44 = next_value_of_STATE_VARIABLE_ImpForeignEnumsCord_0_44;
      STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_46 = next_value_of_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_46;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_imp_11_p_0_1(
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
parse_tree__comp_unit_interface__get_interface_int1_items_loop_imp_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_0_2,
  MR_Word * STATE_VARIABLE_ImpImplicitFIMLangs_3,
  MR_Word STATE_VARIABLE_ImpTypesMap_0_4,
  MR_Word * STATE_VARIABLE_ImpTypesMap_5,
  MR_Word STATE_VARIABLE_ImpTypeClassesCord_0_6,
  MR_Word * STATE_VARIABLE_ImpTypeClassesCord_7,
  MR_Word STATE_VARIABLE_ImpForeignEnumsCord_0_8,
  MR_Word * STATE_VARIABLE_ImpForeignEnumsCord_9,
  MR_Word STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_10,
  MR_Word * STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_11 = STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_10;
      *STATE_VARIABLE_ImpForeignEnumsCord_9 = STATE_VARIABLE_ImpForeignEnumsCord_0_8;
      *STATE_VARIABLE_ImpTypeClassesCord_7 = STATE_VARIABLE_ImpTypeClassesCord_0_6;
      *STATE_VARIABLE_ImpTypesMap_5 = STATE_VARIABLE_ImpTypesMap_0_4;
      *STATE_VARIABLE_ImpImplicitFIMLangs_3 = STATE_VARIABLE_ImpImplicitFIMLangs_0_2;
    }
    else
    {
      MR_Word Item_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ImpForeignEnumsCord_77_77;
      MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_78_78;
      MR_Word STATE_VARIABLE_ImpTypeClassesCord_81_81;
      MR_Word STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_83_83;
      MR_Word STATE_VARIABLE_ImpTypesMap_85_85;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImpImplicitFIMLangs_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ImpTypesMap_0_4;
      MR_Word next_value_of_STATE_VARIABLE_ImpTypeClassesCord_0_6;
      MR_Word next_value_of_STATE_VARIABLE_ImpForeignEnumsCord_0_8;
      MR_Word next_value_of_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_10;

      switch (MR_tag((MR_Word) Item_27)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 2:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.get_interface_int1_items_loop_imp\'/11", (MR_String) "generate_pre_grab_pre_qual_items_imp should\'ve deleted imp item");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemTypeDefn_34 = (MR_Word) (MR_body((MR_Word) (Item_27), (MR_Integer) 1));
            MR_Word Name_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_34, (MR_Integer) 0))));
            MR_Word TypeParams_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_34, (MR_Integer) 1))));
            MR_Word TypeCtor_41;
            MR_Integer Var_84;

            Var_84 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[9]), TypeParams_36);
            {
              TypeCtor_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeCtor_41, 0) = ((MR_Box) (Name_35));
              MR_hl_field(MR_mktag(0), TypeCtor_41, 1) = ((MR_Box) (Var_84));
            }
            mercury__multi_map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), ((MR_Box) (TypeCtor_41)), ((MR_Box) (ItemTypeDefn_34)), STATE_VARIABLE_ImpTypesMap_0_4, &STATE_VARIABLE_ImpTypesMap_85_85);
            STATE_VARIABLE_ImpImplicitFIMLangs_78_78 = STATE_VARIABLE_ImpImplicitFIMLangs_0_2;
            STATE_VARIABLE_ImpTypeClassesCord_81_81 = STATE_VARIABLE_ImpTypeClassesCord_0_6;
            STATE_VARIABLE_ImpForeignEnumsCord_77_77 = STATE_VARIABLE_ImpForeignEnumsCord_0_8;
            STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_83_83 = STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_10;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_27, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 4:
            case (MR_Integer) 6:
            case (MR_Integer) 7:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
            case (MR_Integer) 10:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.get_interface_int1_items_loop_imp\'/11", (MR_String) "generate_pre_grab_pre_qual_items_imp should\'ve deleted imp item");
                  return;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemPragma_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_27, (MR_Integer) 1))));
                MR_Word Pragma_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_44, (MR_Integer) 0))));
                MR_Word MaybeAttrs_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_44, (MR_Integer) 1))));
                MR_Word FEInfo_49;

                succeeded = ((((MR_tag((MR_Word) Pragma_45)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma_45, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  FEInfo_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_45, (MR_Integer) 1))));
                  {
                    MR_Word FESpec_50;
                    MR_Word FELang_51;

                    {
                      FESpec_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), FESpec_50, 0) = ((MR_Box) (FEInfo_49));
                      MR_hl_field(MR_mktag(0), FESpec_50, 1) = ((MR_Box) (MaybeAttrs_46));
                    }
                    mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_foreign_enum_spec_0), ((MR_Box) (FESpec_50)), STATE_VARIABLE_ImpForeignEnumsCord_0_8, &STATE_VARIABLE_ImpForeignEnumsCord_77_77);
                    FELang_51 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FEInfo_49, (MR_Integer) 0))) & (MR_Integer) 3);
                    mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (FELang_51)), STATE_VARIABLE_ImpImplicitFIMLangs_0_2, &STATE_VARIABLE_ImpImplicitFIMLangs_78_78);
                  }
                }
                else
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.get_interface_int1_items_loop_imp\'/11", (MR_String) "non-foreign-enum pragma");
                    return;
                  }
                }
                STATE_VARIABLE_ImpTypesMap_85_85 = STATE_VARIABLE_ImpTypesMap_0_4;
                STATE_VARIABLE_ImpTypeClassesCord_81_81 = STATE_VARIABLE_ImpTypeClassesCord_0_6;
                STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_83_83 = STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_10;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemTypeClass_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_27, (MR_Integer) 1))));
                MR_Word Constraints_43;
                MR_Box conv1_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_83_83;

                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ((MR_Box) (ItemTypeClass_42)), STATE_VARIABLE_ImpTypeClassesCord_0_6, &STATE_VARIABLE_ImpTypeClassesCord_81_81);
                Constraints_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_42, (MR_Integer) 2))));
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[18]), Constraints_43, ((MR_Box) (STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_10)), &conv1_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_83_83);
                STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_83_83 = ((MR_Word) (conv1_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_83_83));
                STATE_VARIABLE_ImpImplicitFIMLangs_78_78 = STATE_VARIABLE_ImpImplicitFIMLangs_0_2;
                STATE_VARIABLE_ImpTypesMap_85_85 = STATE_VARIABLE_ImpTypesMap_0_4;
                STATE_VARIABLE_ImpForeignEnumsCord_77_77 = STATE_VARIABLE_ImpForeignEnumsCord_0_8;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_28;
      next_value_of_STATE_VARIABLE_ImpImplicitFIMLangs_0_2 = STATE_VARIABLE_ImpImplicitFIMLangs_78_78;
      next_value_of_STATE_VARIABLE_ImpTypesMap_0_4 = STATE_VARIABLE_ImpTypesMap_85_85;
      next_value_of_STATE_VARIABLE_ImpTypeClassesCord_0_6 = STATE_VARIABLE_ImpTypeClassesCord_81_81;
      next_value_of_STATE_VARIABLE_ImpForeignEnumsCord_0_8 = STATE_VARIABLE_ImpForeignEnumsCord_77_77;
      next_value_of_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_10 = STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_83_83;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ImpImplicitFIMLangs_0_2 = next_value_of_STATE_VARIABLE_ImpImplicitFIMLangs_0_2;
      STATE_VARIABLE_ImpTypesMap_0_4 = next_value_of_STATE_VARIABLE_ImpTypesMap_0_4;
      STATE_VARIABLE_ImpTypeClassesCord_0_6 = next_value_of_STATE_VARIABLE_ImpTypeClassesCord_0_6;
      STATE_VARIABLE_ImpForeignEnumsCord_0_8 = next_value_of_STATE_VARIABLE_ImpForeignEnumsCord_0_8;
      STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_10 = next_value_of_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_10;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_25_p_0_2(
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
parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_25_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__comp_unit_interface__IntroducedFrom__pred__get_interface_int1_items_loop_int__1329__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_25_p_0(
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
  MR_Word STATE_VARIABLE_IntPragmasCord_0_20,
  MR_Word * STATE_VARIABLE_IntPragmasCord_21,
  MR_Word STATE_VARIABLE_IntPromisesCord_0_22,
  MR_Word * STATE_VARIABLE_IntPromisesCord_23,
  MR_Word STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_24,
  MR_Word * STATE_VARIABLE_IntModulesNeededByTypeClassDefns_25)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_IntModulesNeededByTypeClassDefns_25 = STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_24;
      *STATE_VARIABLE_IntPromisesCord_23 = STATE_VARIABLE_IntPromisesCord_0_22;
      *STATE_VARIABLE_IntPragmasCord_21 = STATE_VARIABLE_IntPragmasCord_0_20;
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
      MR_Word Item_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_IntInstancesCord_137_137;
      MR_Word STATE_VARIABLE_IntModeDeclsCord_138_138;
      MR_Word STATE_VARIABLE_IntPredDeclsCord_139_139;
      MR_Word STATE_VARIABLE_IntModeDefnsCord_140_140;
      MR_Word STATE_VARIABLE_IntInstDefnsCord_141_141;
      MR_Word STATE_VARIABLE_IntPromisesCord_142_142;
      MR_Word STATE_VARIABLE_IntPragmasCord_143_143;
      MR_Word STATE_VARIABLE_IntTypeClassesCord_149_149;
      MR_Word STATE_VARIABLE_IntModulesNeededByTypeClassDefns_151_151;
      MR_Word STATE_VARIABLE_IntTypesMap_153_153;
      MR_Word STATE_VARIABLE_IntTypeDefnsCord_154_154;
      MR_Word STATE_VARIABLE_IntImplicitFIMLangs_155_155;
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
      MR_Word next_value_of_STATE_VARIABLE_IntPragmasCord_0_20;
      MR_Word next_value_of_STATE_VARIABLE_IntPromisesCord_0_22;
      MR_Word next_value_of_STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_24;

      switch (MR_tag((MR_Word) Item_62)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_IntImplicitFIMLangs_155_155 = STATE_VARIABLE_IntImplicitFIMLangs_0_2;
            STATE_VARIABLE_IntTypesMap_153_153 = STATE_VARIABLE_IntTypesMap_0_4;
            STATE_VARIABLE_IntTypeDefnsCord_154_154 = STATE_VARIABLE_IntTypeDefnsCord_0_6;
            STATE_VARIABLE_IntInstDefnsCord_141_141 = STATE_VARIABLE_IntInstDefnsCord_0_8;
            STATE_VARIABLE_IntModeDefnsCord_140_140 = STATE_VARIABLE_IntModeDefnsCord_0_10;
            STATE_VARIABLE_IntTypeClassesCord_149_149 = STATE_VARIABLE_IntTypeClassesCord_0_12;
            STATE_VARIABLE_IntInstancesCord_137_137 = STATE_VARIABLE_IntInstancesCord_0_14;
            STATE_VARIABLE_IntPredDeclsCord_139_139 = STATE_VARIABLE_IntPredDeclsCord_0_16;
            STATE_VARIABLE_IntModeDeclsCord_138_138 = STATE_VARIABLE_IntModeDeclsCord_0_18;
            STATE_VARIABLE_IntPragmasCord_143_143 = STATE_VARIABLE_IntPragmasCord_0_20;
            STATE_VARIABLE_IntPromisesCord_142_142 = STATE_VARIABLE_IntPromisesCord_0_22;
            STATE_VARIABLE_IntModulesNeededByTypeClassDefns_151_151 = STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_24;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemTypeDefn_76 = (MR_Word) (MR_body((MR_Word) (Item_62), (MR_Integer) 1));
            MR_Word Name_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_76, (MR_Integer) 0))));
            MR_Word TypeParams_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_76, (MR_Integer) 1))));
            MR_Word TypeDefn_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_76, (MR_Integer) 2))));
            MR_Word TypeCtor_83;
            MR_Integer Var_152;
            MR_Word ForeignType_85;
            MR_Word DetailsForeign_84;

            Var_152 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[9]), TypeParams_78);
            {
              TypeCtor_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeCtor_83, 0) = ((MR_Box) (Name_77));
              MR_hl_field(MR_mktag(0), TypeCtor_83, 1) = ((MR_Box) (Var_152));
            }
            mercury__multi_map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), ((MR_Box) (TypeCtor_83)), ((MR_Box) (ItemTypeDefn_76)), STATE_VARIABLE_IntTypesMap_0_4, &STATE_VARIABLE_IntTypesMap_153_153);
            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), ((MR_Box) (ItemTypeDefn_76)), STATE_VARIABLE_IntTypeDefnsCord_0_6, &STATE_VARIABLE_IntTypeDefnsCord_154_154);
            succeeded = ((MR_tag((MR_Word) TypeDefn_79)) == (MR_Integer) 2);
            if (succeeded)
            {
              DetailsForeign_84 = (MR_Word) (MR_body((MR_Word) (TypeDefn_79), (MR_Integer) 2));
              ForeignType_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_84, (MR_Integer) 0))));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word Lang_88;

              Lang_88 = parse_tree__prog_foreign__foreign_type_language_1_f_0(ForeignType_85);
              mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_88)), STATE_VARIABLE_IntImplicitFIMLangs_0_2, &STATE_VARIABLE_IntImplicitFIMLangs_155_155);
            }
            else
              STATE_VARIABLE_IntImplicitFIMLangs_155_155 = STATE_VARIABLE_IntImplicitFIMLangs_0_2;
            STATE_VARIABLE_IntInstDefnsCord_141_141 = STATE_VARIABLE_IntInstDefnsCord_0_8;
            STATE_VARIABLE_IntModeDefnsCord_140_140 = STATE_VARIABLE_IntModeDefnsCord_0_10;
            STATE_VARIABLE_IntTypeClassesCord_149_149 = STATE_VARIABLE_IntTypeClassesCord_0_12;
            STATE_VARIABLE_IntInstancesCord_137_137 = STATE_VARIABLE_IntInstancesCord_0_14;
            STATE_VARIABLE_IntPredDeclsCord_139_139 = STATE_VARIABLE_IntPredDeclsCord_0_16;
            STATE_VARIABLE_IntModeDeclsCord_138_138 = STATE_VARIABLE_IntModeDeclsCord_0_18;
            STATE_VARIABLE_IntPragmasCord_143_143 = STATE_VARIABLE_IntPragmasCord_0_20;
            STATE_VARIABLE_IntPromisesCord_142_142 = STATE_VARIABLE_IntPromisesCord_0_22;
            STATE_VARIABLE_IntModulesNeededByTypeClassDefns_151_151 = STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_24;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemInstDefn_102 = (MR_Word) (MR_body((MR_Word) (Item_62), (MR_Integer) 2));

            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), ((MR_Box) (ItemInstDefn_102)), STATE_VARIABLE_IntInstDefnsCord_0_8, &STATE_VARIABLE_IntInstDefnsCord_141_141);
            STATE_VARIABLE_IntImplicitFIMLangs_155_155 = STATE_VARIABLE_IntImplicitFIMLangs_0_2;
            STATE_VARIABLE_IntTypesMap_153_153 = STATE_VARIABLE_IntTypesMap_0_4;
            STATE_VARIABLE_IntTypeDefnsCord_154_154 = STATE_VARIABLE_IntTypeDefnsCord_0_6;
            STATE_VARIABLE_IntModeDefnsCord_140_140 = STATE_VARIABLE_IntModeDefnsCord_0_10;
            STATE_VARIABLE_IntTypeClassesCord_149_149 = STATE_VARIABLE_IntTypeClassesCord_0_12;
            STATE_VARIABLE_IntInstancesCord_137_137 = STATE_VARIABLE_IntInstancesCord_0_14;
            STATE_VARIABLE_IntPredDeclsCord_139_139 = STATE_VARIABLE_IntPredDeclsCord_0_16;
            STATE_VARIABLE_IntModeDeclsCord_138_138 = STATE_VARIABLE_IntModeDeclsCord_0_18;
            STATE_VARIABLE_IntPragmasCord_143_143 = STATE_VARIABLE_IntPragmasCord_0_20;
            STATE_VARIABLE_IntPromisesCord_142_142 = STATE_VARIABLE_IntPromisesCord_0_22;
            STATE_VARIABLE_IntModulesNeededByTypeClassDefns_151_151 = STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_24;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_62, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ItemModeDefn_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_62, (MR_Integer) 1))));

                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), ((MR_Box) (ItemModeDefn_103)), STATE_VARIABLE_IntModeDefnsCord_0_10, &STATE_VARIABLE_IntModeDefnsCord_140_140);
                STATE_VARIABLE_IntImplicitFIMLangs_155_155 = STATE_VARIABLE_IntImplicitFIMLangs_0_2;
                STATE_VARIABLE_IntTypesMap_153_153 = STATE_VARIABLE_IntTypesMap_0_4;
                STATE_VARIABLE_IntTypeDefnsCord_154_154 = STATE_VARIABLE_IntTypeDefnsCord_0_6;
                STATE_VARIABLE_IntInstDefnsCord_141_141 = STATE_VARIABLE_IntInstDefnsCord_0_8;
                STATE_VARIABLE_IntTypeClassesCord_149_149 = STATE_VARIABLE_IntTypeClassesCord_0_12;
                STATE_VARIABLE_IntInstancesCord_137_137 = STATE_VARIABLE_IntInstancesCord_0_14;
                STATE_VARIABLE_IntPredDeclsCord_139_139 = STATE_VARIABLE_IntPredDeclsCord_0_16;
                STATE_VARIABLE_IntModeDeclsCord_138_138 = STATE_VARIABLE_IntModeDeclsCord_0_18;
                STATE_VARIABLE_IntPragmasCord_143_143 = STATE_VARIABLE_IntPragmasCord_0_20;
                STATE_VARIABLE_IntPromisesCord_142_142 = STATE_VARIABLE_IntPromisesCord_0_22;
                STATE_VARIABLE_IntModulesNeededByTypeClassDefns_151_151 = STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_24;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ItemPredDecl_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_62, (MR_Integer) 1))));

                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), ((MR_Box) (ItemPredDecl_104)), STATE_VARIABLE_IntPredDeclsCord_0_16, &STATE_VARIABLE_IntPredDeclsCord_139_139);
                STATE_VARIABLE_IntImplicitFIMLangs_155_155 = STATE_VARIABLE_IntImplicitFIMLangs_0_2;
                STATE_VARIABLE_IntTypesMap_153_153 = STATE_VARIABLE_IntTypesMap_0_4;
                STATE_VARIABLE_IntTypeDefnsCord_154_154 = STATE_VARIABLE_IntTypeDefnsCord_0_6;
                STATE_VARIABLE_IntInstDefnsCord_141_141 = STATE_VARIABLE_IntInstDefnsCord_0_8;
                STATE_VARIABLE_IntModeDefnsCord_140_140 = STATE_VARIABLE_IntModeDefnsCord_0_10;
                STATE_VARIABLE_IntTypeClassesCord_149_149 = STATE_VARIABLE_IntTypeClassesCord_0_12;
                STATE_VARIABLE_IntInstancesCord_137_137 = STATE_VARIABLE_IntInstancesCord_0_14;
                STATE_VARIABLE_IntModeDeclsCord_138_138 = STATE_VARIABLE_IntModeDeclsCord_0_18;
                STATE_VARIABLE_IntPragmasCord_143_143 = STATE_VARIABLE_IntPragmasCord_0_20;
                STATE_VARIABLE_IntPromisesCord_142_142 = STATE_VARIABLE_IntPromisesCord_0_22;
                STATE_VARIABLE_IntModulesNeededByTypeClassDefns_151_151 = STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_24;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ItemModeDecl_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_62, (MR_Integer) 1))));

                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), ((MR_Box) (ItemModeDecl_105)), STATE_VARIABLE_IntModeDeclsCord_0_18, &STATE_VARIABLE_IntModeDeclsCord_138_138);
                STATE_VARIABLE_IntImplicitFIMLangs_155_155 = STATE_VARIABLE_IntImplicitFIMLangs_0_2;
                STATE_VARIABLE_IntTypesMap_153_153 = STATE_VARIABLE_IntTypesMap_0_4;
                STATE_VARIABLE_IntTypeDefnsCord_154_154 = STATE_VARIABLE_IntTypeDefnsCord_0_6;
                STATE_VARIABLE_IntInstDefnsCord_141_141 = STATE_VARIABLE_IntInstDefnsCord_0_8;
                STATE_VARIABLE_IntModeDefnsCord_140_140 = STATE_VARIABLE_IntModeDefnsCord_0_10;
                STATE_VARIABLE_IntTypeClassesCord_149_149 = STATE_VARIABLE_IntTypeClassesCord_0_12;
                STATE_VARIABLE_IntInstancesCord_137_137 = STATE_VARIABLE_IntInstancesCord_0_14;
                STATE_VARIABLE_IntPredDeclsCord_139_139 = STATE_VARIABLE_IntPredDeclsCord_0_16;
                STATE_VARIABLE_IntPragmasCord_143_143 = STATE_VARIABLE_IntPragmasCord_0_20;
                STATE_VARIABLE_IntPromisesCord_142_142 = STATE_VARIABLE_IntPromisesCord_0_22;
                STATE_VARIABLE_IntModulesNeededByTypeClassDefns_151_151 = STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_24;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemPragma_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_62, (MR_Integer) 1))));
                MR_Word Pragma_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_92, (MR_Integer) 0))));
                MR_Word AllowedInInterface_97;

                AllowedInInterface_97 = parse_tree__prog_item__pragma_allowed_in_interface_1_f_0(Pragma_93);
                switch (AllowedInInterface_97) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      STATE_VARIABLE_IntImplicitFIMLangs_155_155 = STATE_VARIABLE_IntImplicitFIMLangs_0_2;
                      STATE_VARIABLE_IntPragmasCord_143_143 = STATE_VARIABLE_IntPragmasCord_0_20;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Langs_98;

                      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_0), ((MR_Box) (ItemPragma_92)), STATE_VARIABLE_IntPragmasCord_0_20, &STATE_VARIABLE_IntPragmasCord_143_143);
                      Langs_98 = parse_tree__item_util__pragma_needs_foreign_imports_1_f_0(Pragma_93);
                      succeeded = ((((MR_tag((MR_Word) Pragma_93)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma_93, (MR_Integer) 0)))) == (MR_Integer) 2)));
                      if (succeeded)
                      {
                        mercury__set__insert_list_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Langs_98, STATE_VARIABLE_IntImplicitFIMLangs_0_2, &STATE_VARIABLE_IntImplicitFIMLangs_155_155);
                      }
                      else
                      {
                        MR_Word Var_145;

                        {
                          Var_145 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_145, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[4]));
                          MR_hl_field(MR_mktag(0), Var_145, 1) = ((MR_Box) (parse_tree__comp_unit_interface__get_interface_int1_items_loop_int_25_p_0_1));
                          MR_hl_field(MR_mktag(0), Var_145, 2) = ((MR_Box) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(0), Var_145, 3) = ((MR_Box) (Langs_98));
                          MR_hl_field(MR_mktag(0), Var_145, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        mercury__require__expect_3_p_0(Var_145, (MR_String) "predicate \140parse_tree.comp_unit_interface.get_interface_int1_items_loop_int\'/25", (MR_String) "interface pragma other than foreign_enum needs Langs");
                        STATE_VARIABLE_IntImplicitFIMLangs_155_155 = STATE_VARIABLE_IntImplicitFIMLangs_0_2;
                      }
                    }
                    break;
                }
                STATE_VARIABLE_IntTypesMap_153_153 = STATE_VARIABLE_IntTypesMap_0_4;
                STATE_VARIABLE_IntTypeDefnsCord_154_154 = STATE_VARIABLE_IntTypeDefnsCord_0_6;
                STATE_VARIABLE_IntInstDefnsCord_141_141 = STATE_VARIABLE_IntInstDefnsCord_0_8;
                STATE_VARIABLE_IntModeDefnsCord_140_140 = STATE_VARIABLE_IntModeDefnsCord_0_10;
                STATE_VARIABLE_IntTypeClassesCord_149_149 = STATE_VARIABLE_IntTypeClassesCord_0_12;
                STATE_VARIABLE_IntInstancesCord_137_137 = STATE_VARIABLE_IntInstancesCord_0_14;
                STATE_VARIABLE_IntPredDeclsCord_139_139 = STATE_VARIABLE_IntPredDeclsCord_0_16;
                STATE_VARIABLE_IntModeDeclsCord_138_138 = STATE_VARIABLE_IntModeDeclsCord_0_18;
                STATE_VARIABLE_IntPromisesCord_142_142 = STATE_VARIABLE_IntPromisesCord_0_22;
                STATE_VARIABLE_IntModulesNeededByTypeClassDefns_151_151 = STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_24;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ItemPromise_100 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_62, (MR_Integer) 1))));
                MR_Word PromiseType_101 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPromise_100, (MR_Integer) 0))) & (MR_Integer) 3);

                switch (PromiseType_101) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 2:
                  case (MR_Integer) 1:
                    {
                      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), ((MR_Box) (ItemPromise_100)), STATE_VARIABLE_IntPromisesCord_0_22, &STATE_VARIABLE_IntPromisesCord_142_142);
                    }
                    break;
                  case (MR_Integer) 3:
                    STATE_VARIABLE_IntPromisesCord_142_142 = STATE_VARIABLE_IntPromisesCord_0_22;
                    break;
                }
                STATE_VARIABLE_IntImplicitFIMLangs_155_155 = STATE_VARIABLE_IntImplicitFIMLangs_0_2;
                STATE_VARIABLE_IntTypesMap_153_153 = STATE_VARIABLE_IntTypesMap_0_4;
                STATE_VARIABLE_IntTypeDefnsCord_154_154 = STATE_VARIABLE_IntTypeDefnsCord_0_6;
                STATE_VARIABLE_IntInstDefnsCord_141_141 = STATE_VARIABLE_IntInstDefnsCord_0_8;
                STATE_VARIABLE_IntModeDefnsCord_140_140 = STATE_VARIABLE_IntModeDefnsCord_0_10;
                STATE_VARIABLE_IntTypeClassesCord_149_149 = STATE_VARIABLE_IntTypeClassesCord_0_12;
                STATE_VARIABLE_IntInstancesCord_137_137 = STATE_VARIABLE_IntInstancesCord_0_14;
                STATE_VARIABLE_IntPredDeclsCord_139_139 = STATE_VARIABLE_IntPredDeclsCord_0_16;
                STATE_VARIABLE_IntModeDeclsCord_138_138 = STATE_VARIABLE_IntModeDeclsCord_0_18;
                STATE_VARIABLE_IntPragmasCord_143_143 = STATE_VARIABLE_IntPragmasCord_0_20;
                STATE_VARIABLE_IntModulesNeededByTypeClassDefns_151_151 = STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_24;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemTypeClass_89 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_62, (MR_Integer) 1))));
                MR_Word Constraints_90;
                MR_Box conv1_STATE_VARIABLE_IntModulesNeededByTypeClassDefns_151_151;

                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ((MR_Box) (ItemTypeClass_89)), STATE_VARIABLE_IntTypeClassesCord_0_12, &STATE_VARIABLE_IntTypeClassesCord_149_149);
                Constraints_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_89, (MR_Integer) 2))));
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[17]), Constraints_90, ((MR_Box) (STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_24)), &conv1_STATE_VARIABLE_IntModulesNeededByTypeClassDefns_151_151);
                STATE_VARIABLE_IntModulesNeededByTypeClassDefns_151_151 = ((MR_Word) (conv1_STATE_VARIABLE_IntModulesNeededByTypeClassDefns_151_151));
                STATE_VARIABLE_IntImplicitFIMLangs_155_155 = STATE_VARIABLE_IntImplicitFIMLangs_0_2;
                STATE_VARIABLE_IntTypesMap_153_153 = STATE_VARIABLE_IntTypesMap_0_4;
                STATE_VARIABLE_IntTypeDefnsCord_154_154 = STATE_VARIABLE_IntTypeDefnsCord_0_6;
                STATE_VARIABLE_IntInstDefnsCord_141_141 = STATE_VARIABLE_IntInstDefnsCord_0_8;
                STATE_VARIABLE_IntModeDefnsCord_140_140 = STATE_VARIABLE_IntModeDefnsCord_0_10;
                STATE_VARIABLE_IntInstancesCord_137_137 = STATE_VARIABLE_IntInstancesCord_0_14;
                STATE_VARIABLE_IntPredDeclsCord_139_139 = STATE_VARIABLE_IntPredDeclsCord_0_16;
                STATE_VARIABLE_IntModeDeclsCord_138_138 = STATE_VARIABLE_IntModeDeclsCord_0_18;
                STATE_VARIABLE_IntPragmasCord_143_143 = STATE_VARIABLE_IntPragmasCord_0_20;
                STATE_VARIABLE_IntPromisesCord_142_142 = STATE_VARIABLE_IntPromisesCord_0_22;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemInstance_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_62, (MR_Integer) 1))));

                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ((MR_Box) (ItemInstance_106)), STATE_VARIABLE_IntInstancesCord_0_14, &STATE_VARIABLE_IntInstancesCord_137_137);
                STATE_VARIABLE_IntImplicitFIMLangs_155_155 = STATE_VARIABLE_IntImplicitFIMLangs_0_2;
                STATE_VARIABLE_IntTypesMap_153_153 = STATE_VARIABLE_IntTypesMap_0_4;
                STATE_VARIABLE_IntTypeDefnsCord_154_154 = STATE_VARIABLE_IntTypeDefnsCord_0_6;
                STATE_VARIABLE_IntInstDefnsCord_141_141 = STATE_VARIABLE_IntInstDefnsCord_0_8;
                STATE_VARIABLE_IntModeDefnsCord_140_140 = STATE_VARIABLE_IntModeDefnsCord_0_10;
                STATE_VARIABLE_IntTypeClassesCord_149_149 = STATE_VARIABLE_IntTypeClassesCord_0_12;
                STATE_VARIABLE_IntPredDeclsCord_139_139 = STATE_VARIABLE_IntPredDeclsCord_0_16;
                STATE_VARIABLE_IntModeDeclsCord_138_138 = STATE_VARIABLE_IntModeDeclsCord_0_18;
                STATE_VARIABLE_IntPragmasCord_143_143 = STATE_VARIABLE_IntPragmasCord_0_20;
                STATE_VARIABLE_IntPromisesCord_142_142 = STATE_VARIABLE_IntPromisesCord_0_22;
                STATE_VARIABLE_IntModulesNeededByTypeClassDefns_151_151 = STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_24;
              }
              break;
            case (MR_Integer) 7:
              {
                STATE_VARIABLE_IntImplicitFIMLangs_155_155 = STATE_VARIABLE_IntImplicitFIMLangs_0_2;
                STATE_VARIABLE_IntTypesMap_153_153 = STATE_VARIABLE_IntTypesMap_0_4;
                STATE_VARIABLE_IntTypeDefnsCord_154_154 = STATE_VARIABLE_IntTypeDefnsCord_0_6;
                STATE_VARIABLE_IntInstDefnsCord_141_141 = STATE_VARIABLE_IntInstDefnsCord_0_8;
                STATE_VARIABLE_IntModeDefnsCord_140_140 = STATE_VARIABLE_IntModeDefnsCord_0_10;
                STATE_VARIABLE_IntTypeClassesCord_149_149 = STATE_VARIABLE_IntTypeClassesCord_0_12;
                STATE_VARIABLE_IntInstancesCord_137_137 = STATE_VARIABLE_IntInstancesCord_0_14;
                STATE_VARIABLE_IntPredDeclsCord_139_139 = STATE_VARIABLE_IntPredDeclsCord_0_16;
                STATE_VARIABLE_IntModeDeclsCord_138_138 = STATE_VARIABLE_IntModeDeclsCord_0_18;
                STATE_VARIABLE_IntPragmasCord_143_143 = STATE_VARIABLE_IntPragmasCord_0_20;
                STATE_VARIABLE_IntPromisesCord_142_142 = STATE_VARIABLE_IntPromisesCord_0_22;
                STATE_VARIABLE_IntModulesNeededByTypeClassDefns_151_151 = STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_24;
              }
              break;
            case (MR_Integer) 8:
              {
                STATE_VARIABLE_IntImplicitFIMLangs_155_155 = STATE_VARIABLE_IntImplicitFIMLangs_0_2;
                STATE_VARIABLE_IntTypesMap_153_153 = STATE_VARIABLE_IntTypesMap_0_4;
                STATE_VARIABLE_IntTypeDefnsCord_154_154 = STATE_VARIABLE_IntTypeDefnsCord_0_6;
                STATE_VARIABLE_IntInstDefnsCord_141_141 = STATE_VARIABLE_IntInstDefnsCord_0_8;
                STATE_VARIABLE_IntModeDefnsCord_140_140 = STATE_VARIABLE_IntModeDefnsCord_0_10;
                STATE_VARIABLE_IntTypeClassesCord_149_149 = STATE_VARIABLE_IntTypeClassesCord_0_12;
                STATE_VARIABLE_IntInstancesCord_137_137 = STATE_VARIABLE_IntInstancesCord_0_14;
                STATE_VARIABLE_IntPredDeclsCord_139_139 = STATE_VARIABLE_IntPredDeclsCord_0_16;
                STATE_VARIABLE_IntModeDeclsCord_138_138 = STATE_VARIABLE_IntModeDeclsCord_0_18;
                STATE_VARIABLE_IntPragmasCord_143_143 = STATE_VARIABLE_IntPragmasCord_0_20;
                STATE_VARIABLE_IntPromisesCord_142_142 = STATE_VARIABLE_IntPromisesCord_0_22;
                STATE_VARIABLE_IntModulesNeededByTypeClassDefns_151_151 = STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_24;
              }
              break;
            case (MR_Integer) 9:
              {
                STATE_VARIABLE_IntImplicitFIMLangs_155_155 = STATE_VARIABLE_IntImplicitFIMLangs_0_2;
                STATE_VARIABLE_IntTypesMap_153_153 = STATE_VARIABLE_IntTypesMap_0_4;
                STATE_VARIABLE_IntTypeDefnsCord_154_154 = STATE_VARIABLE_IntTypeDefnsCord_0_6;
                STATE_VARIABLE_IntInstDefnsCord_141_141 = STATE_VARIABLE_IntInstDefnsCord_0_8;
                STATE_VARIABLE_IntModeDefnsCord_140_140 = STATE_VARIABLE_IntModeDefnsCord_0_10;
                STATE_VARIABLE_IntTypeClassesCord_149_149 = STATE_VARIABLE_IntTypeClassesCord_0_12;
                STATE_VARIABLE_IntInstancesCord_137_137 = STATE_VARIABLE_IntInstancesCord_0_14;
                STATE_VARIABLE_IntPredDeclsCord_139_139 = STATE_VARIABLE_IntPredDeclsCord_0_16;
                STATE_VARIABLE_IntModeDeclsCord_138_138 = STATE_VARIABLE_IntModeDeclsCord_0_18;
                STATE_VARIABLE_IntPragmasCord_143_143 = STATE_VARIABLE_IntPragmasCord_0_20;
                STATE_VARIABLE_IntPromisesCord_142_142 = STATE_VARIABLE_IntPromisesCord_0_22;
                STATE_VARIABLE_IntModulesNeededByTypeClassDefns_151_151 = STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_24;
              }
              break;
            case (MR_Integer) 10:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.get_interface_int1_items_loop_int\'/25", (MR_String) "item_type_repn");
                  return;
                }
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_63;
      next_value_of_STATE_VARIABLE_IntImplicitFIMLangs_0_2 = STATE_VARIABLE_IntImplicitFIMLangs_155_155;
      next_value_of_STATE_VARIABLE_IntTypesMap_0_4 = STATE_VARIABLE_IntTypesMap_153_153;
      next_value_of_STATE_VARIABLE_IntTypeDefnsCord_0_6 = STATE_VARIABLE_IntTypeDefnsCord_154_154;
      next_value_of_STATE_VARIABLE_IntInstDefnsCord_0_8 = STATE_VARIABLE_IntInstDefnsCord_141_141;
      next_value_of_STATE_VARIABLE_IntModeDefnsCord_0_10 = STATE_VARIABLE_IntModeDefnsCord_140_140;
      next_value_of_STATE_VARIABLE_IntTypeClassesCord_0_12 = STATE_VARIABLE_IntTypeClassesCord_149_149;
      next_value_of_STATE_VARIABLE_IntInstancesCord_0_14 = STATE_VARIABLE_IntInstancesCord_137_137;
      next_value_of_STATE_VARIABLE_IntPredDeclsCord_0_16 = STATE_VARIABLE_IntPredDeclsCord_139_139;
      next_value_of_STATE_VARIABLE_IntModeDeclsCord_0_18 = STATE_VARIABLE_IntModeDeclsCord_138_138;
      next_value_of_STATE_VARIABLE_IntPragmasCord_0_20 = STATE_VARIABLE_IntPragmasCord_143_143;
      next_value_of_STATE_VARIABLE_IntPromisesCord_0_22 = STATE_VARIABLE_IntPromisesCord_142_142;
      next_value_of_STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_24 = STATE_VARIABLE_IntModulesNeededByTypeClassDefns_151_151;
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
      STATE_VARIABLE_IntPragmasCord_0_20 = next_value_of_STATE_VARIABLE_IntPragmasCord_0_20;
      STATE_VARIABLE_IntPromisesCord_0_22 = next_value_of_STATE_VARIABLE_IntPromisesCord_0_22;
      STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_24 = next_value_of_STATE_VARIABLE_IntModulesNeededByTypeClassDefns_0_24;
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
    MR_bool succeeded;

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
          {
            MR_Word ItemTypeDefnInfo_10 = (MR_Word) (MR_body((MR_Word) (Item_7), (MR_Integer) 1));
            MR_Word MaybeAbstractItemTypeDefnInfo_11;
            MR_Word AbstractItem_12;

            parse_tree__comp_unit_interface__make_canon_make_du_and_solver_types_abstract_2_p_0(ItemTypeDefnInfo_10, &MaybeAbstractItemTypeDefnInfo_11);
            AbstractItem_12 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (MaybeAbstractItemTypeDefnInfo_11)));
            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (AbstractItem_12)), STATE_VARIABLE_ImpItemsCord_0_2, &STATE_VARIABLE_ImpItemsCord_39_39);
          }
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
              STATE_VARIABLE_ImpItemsCord_39_39 = STATE_VARIABLE_ImpItemsCord_0_2;
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemPragma_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 1))));
                MR_Word Pragma_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_15, (MR_Integer) 0))));

                succeeded = ((((MR_tag((MR_Word) Pragma_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma_16, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_7)), STATE_VARIABLE_ImpItemsCord_0_2, &STATE_VARIABLE_ImpItemsCord_39_39);
                }
                else
                  STATE_VARIABLE_ImpItemsCord_39_39 = STATE_VARIABLE_ImpItemsCord_0_2;
              }
              break;
            case (MR_Integer) 4:
              STATE_VARIABLE_ImpItemsCord_39_39 = STATE_VARIABLE_ImpItemsCord_0_2;
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemTypeClassInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 1))));
                MR_Word AbstractItemTypeClassInfo_14;
                MR_Word AbstractItem_41;
                MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_13, (MR_Integer) 0))));
                MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_13, (MR_Integer) 1))));
                MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_13, (MR_Integer) 2))));
                MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_13, (MR_Integer) 3))));
                MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_13, (MR_Integer) 5))));
                MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_13, (MR_Integer) 6))));
                MR_Integer Var_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_13, (MR_Integer) 7))));

                {
                  AbstractItemTypeClassInfo_14 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_14, 0) = ((MR_Box) (Var_42));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_14, 1) = ((MR_Box) (Var_43));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_14, 2) = ((MR_Box) (Var_44));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_14, 3) = ((MR_Box) (Var_45));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_14, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_14, 5) = ((MR_Box) (Var_47));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_14, 6) = ((MR_Box) (Var_48));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_14, 7) = ((MR_Box) (Var_49));
                }
                {
                  AbstractItem_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), AbstractItem_41, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), AbstractItem_41, 1) = ((MR_Box) (AbstractItemTypeClassInfo_14));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (AbstractItem_41)), STATE_VARIABLE_ImpItemsCord_0_2, &STATE_VARIABLE_ImpItemsCord_39_39);
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
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.generate_pre_grab_pre_qual_items_imp\'/3", (MR_String) "item_type_repn");
                  return;
                }
              }
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
parse_tree__comp_unit_interface__make_canon_make_du_and_solver_types_abstract_2_p_0(
  MR_Word ItemTypeDefn_3,
  MR_Word * MaybeAbstractItemTypeDefn_4)
{
  {
    MR_Word TypeDefn_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_3, (MR_Integer) 2))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_3, (MR_Integer) 0))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_3, (MR_Integer) 1))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_3, (MR_Integer) 3))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_3, (MR_Integer) 4))));
    MR_Integer Var_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_3, (MR_Integer) 5))));

    switch (MR_tag((MR_Word) TypeDefn_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DetailsDu_6 = (MR_Word) ((MR_Word) (TypeDefn_5));
          MR_Word _Ctors_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_6, (MR_Integer) 0))));
          MR_Word MaybeCanonical_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_6, (MR_Integer) 1))));
          MR_Word _MaybeDirectArgCtors_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_6, (MR_Integer) 2))));

          if ((MaybeCanonical_8 == (MR_Word) ((MR_Unsigned) 0U)))
            *MaybeAbstractItemTypeDefn_4 = ItemTypeDefn_3;
          else
          {
            MR_Word AbstractDetailsDu_11;
            MR_Word AbstractTypeDefn_12;

            {
              AbstractDetailsDu_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), AbstractDetailsDu_11, 0) = ((MR_Box) (_Ctors_7));
              MR_hl_field(MR_mktag(0), AbstractDetailsDu_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__comp_unit_interface_scalar_common_3[1])));
              MR_hl_field(MR_mktag(0), AbstractDetailsDu_11, 2) = ((MR_Box) (_MaybeDirectArgCtors_9));
            }
            AbstractTypeDefn_12 = (MR_Word) ((MR_Word) (AbstractDetailsDu_11));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              *MaybeAbstractItemTypeDefn_4 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_36));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_37));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (AbstractTypeDefn_12));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_38));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_39));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_40));
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            *MaybeAbstractItemTypeDefn_4 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_36));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_37));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__comp_unit_interface_scalar_common_2[13])));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_38));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_39));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_40));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DetailsForeign_17 = (MR_Word) (MR_body((MR_Word) (TypeDefn_5), (MR_Integer) 2));
          MR_Word _ForeignType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_17, (MR_Integer) 0))));
          MR_Word _Assertions_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_17, (MR_Integer) 2))));
          MR_Word MaybeCanonical_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_17, (MR_Integer) 1))));

          if ((MaybeCanonical_33 == (MR_Word) ((MR_Unsigned) 0U)))
            *MaybeAbstractItemTypeDefn_4 = ItemTypeDefn_3;
          else
          {
            MR_Word AbstractDetailsForeign_20;
            MR_Word AbstractTypeDefn_30;

            {
              AbstractDetailsForeign_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), AbstractDetailsForeign_20, 0) = ((MR_Box) (_ForeignType_18));
              MR_hl_field(MR_mktag(0), AbstractDetailsForeign_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__comp_unit_interface_scalar_common_3[1])));
              MR_hl_field(MR_mktag(0), AbstractDetailsForeign_20, 2) = ((MR_Box) (_Assertions_19));
            }
            AbstractTypeDefn_30 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (AbstractDetailsForeign_20)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              *MaybeAbstractItemTypeDefn_4 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_36));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_37));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (AbstractTypeDefn_30));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_38));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_39));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_40));
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *MaybeAbstractItemTypeDefn_4 = ItemTypeDefn_3;
            break;
          case (MR_Integer) 1:
            *MaybeAbstractItemTypeDefn_4 = ItemTypeDefn_3;
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
      {
        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_7)), STATE_VARIABLE_IntItemsCord_0_2, &STATE_VARIABLE_IntItemsCord_16_16);
      }
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
parse_tree__comp_unit_interface__generate_private_interface_int0_2_p_0(
  MR_Word AugCompUnit_3,
  MR_Word * ParseTreeInt0_4)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_3, (MR_Integer) 0))));
    MR_Word ModuleNameContext_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_3, (MR_Integer) 1))));
    MR_Word ModuleVersionNumbers_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_3, (MR_Integer) 2))));
    MR_Word SrcItemBlocks_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_3, (MR_Integer) 3))));
    MR_Word IntIncls0_13;
    MR_Word ImpIncls0_14;
    MR_Word IntImports0_15;
    MR_Word IntUses0_16;
    MR_Word ImpImports0_17;
    MR_Word ImpUses0_18;
    MR_Word IntFIMSpecs0_19;
    MR_Word ImpFIMSpecs0_20;
    MR_Word IntIncls_21;
    MR_Word ImpIncls_22;
    MR_Word IntImports_23;
    MR_Word IntUses1_24;
    MR_Word ImpImports1_25;
    MR_Word ImpUses1_26;
    MR_Word IntFIMSpecs_27;
    MR_Word ImpFIMSpecs_28;
    MR_Word IntTypeDefnsCord_29;
    MR_Word ImpTypeDefnsCord_30;
    MR_Word IntInstDefnsCord_31;
    MR_Word ImpInstDefnsCord_32;
    MR_Word IntModeDefnsCord_33;
    MR_Word ImpModeDefnsCord_34;
    MR_Word IntTypeClassesCord_35;
    MR_Word ImpTypeClassesCord_36;
    MR_Word IntInstancesCord_37;
    MR_Word ImpInstancesCord_38;
    MR_Word IntPredDeclsCord_39;
    MR_Word ImpPredDeclsCord_40;
    MR_Word IntModeDeclsCord_41;
    MR_Word ImpModeDeclsCord_42;
    MR_Word IntPragmasCord_43;
    MR_Word ImpPragmasCord_44;
    MR_Word IntPromisesCord_45;
    MR_Word ImpPromisesCord_46;
    MR_Word MaybeVersionNumbers_48;
    MR_Word IntUses_49;
    MR_Word IntImportsUses_50;
    MR_Word ImpImports_51;
    MR_Word ImpUses2_52;
    MR_Word ImpUses_53;
    MR_Word IntTypeDefns_54;
    MR_Word ImpTypeDefns_55;
    MR_Word IntInstDefns_56;
    MR_Word ImpInstDefns_57;
    MR_Word IntModeDefns_58;
    MR_Word ImpModeDefns_59;
    MR_Word IntTypeClasses_60;
    MR_Word ImpTypeClasses_61;
    MR_Word IntInstances_62;
    MR_Word ImpInstances_63;
    MR_Word IntPredDecls_64;
    MR_Word ImpPredDecls_65;
    MR_Word IntModeDecls_66;
    MR_Word ImpModeDecls_67;
    MR_Word IntPragmas_68;
    MR_Word ImpPragmas_69;
    MR_Word IntPromises_70;
    MR_Word ImpPromises_71;
    MR_Word ParseTreeInt0Prime_72;
    MR_Word Var_73;
    MR_Word Var_74;
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
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word VersionNumbers_47;
    MR_Box conv0_VersionNumbers_47;

    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &IntIncls0_13);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &ImpIncls0_14);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &IntImports0_15);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &IntUses0_16);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &ImpImports0_17);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &ImpUses0_18);
    mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_fim_spec_0), &IntFIMSpecs0_19);
    mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_fim_spec_0), &ImpFIMSpecs0_20);
    Var_73 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0));
    Var_74 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0));
    Var_75 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0));
    Var_76 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0));
    Var_77 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0));
    Var_78 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0));
    Var_79 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0));
    Var_80 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0));
    Var_81 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0));
    Var_82 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0));
    Var_83 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0));
    Var_84 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0));
    Var_85 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0));
    Var_86 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0));
    Var_87 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_0));
    Var_88 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_0));
    Var_89 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0));
    Var_90 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0));
    parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_54_p_0(ModuleName_5, SrcItemBlocks_8, IntIncls0_13, &IntIncls_21, ImpIncls0_14, &ImpIncls_22, IntImports0_15, &IntImports_23, IntUses0_16, &IntUses1_24, ImpImports0_17, &ImpImports1_25, ImpUses0_18, &ImpUses1_26, IntFIMSpecs0_19, &IntFIMSpecs_27, ImpFIMSpecs0_20, &ImpFIMSpecs_28, Var_73, &IntTypeDefnsCord_29, Var_74, &ImpTypeDefnsCord_30, Var_75, &IntInstDefnsCord_31, Var_76, &ImpInstDefnsCord_32, Var_77, &IntModeDefnsCord_33, Var_78, &ImpModeDefnsCord_34, Var_79, &IntTypeClassesCord_35, Var_80, &ImpTypeClassesCord_36, Var_81, &IntInstancesCord_37, Var_82, &ImpInstancesCord_38, Var_83, &IntPredDeclsCord_39, Var_84, &ImpPredDeclsCord_40, Var_85, &IntModeDeclsCord_41, Var_86, &ImpModeDeclsCord_42, Var_87, &IntPragmasCord_43, Var_88, &ImpPragmasCord_44, Var_89, &IntPromisesCord_45, Var_90, &ImpPromisesCord_46);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_version_numbers_0), ModuleVersionNumbers_7, ((MR_Box) (ModuleName_5)), &conv0_VersionNumbers_47);
    if (succeeded)
    {
      VersionNumbers_47 = ((MR_Word) (conv0_VersionNumbers_47));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      {
        MaybeVersionNumbers_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeVersionNumbers_48, 0) = ((MR_Box) (VersionNumbers_47));
      }
    else
      MaybeVersionNumbers_48 = (MR_Word) ((MR_Unsigned) 0U);
    mercury__set__difference_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses1_24, IntImports_23, &IntUses_49);
    mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_23, IntUses_49, &IntImportsUses_50);
    mercury__set__difference_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImports1_25, IntImportsUses_50, &ImpImports_51);
    mercury__set__difference_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses1_26, IntImportsUses_50, &ImpUses2_52);
    mercury__set__difference_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses2_52, ImpImports_51, &ImpUses_53);
    IntTypeDefns_54 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), IntTypeDefnsCord_29);
    ImpTypeDefns_55 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), ImpTypeDefnsCord_30);
    IntInstDefns_56 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), IntInstDefnsCord_31);
    ImpInstDefns_57 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), ImpInstDefnsCord_32);
    IntModeDefns_58 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), IntModeDefnsCord_33);
    ImpModeDefns_59 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), ImpModeDefnsCord_34);
    IntTypeClasses_60 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClassesCord_35);
    ImpTypeClasses_61 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ImpTypeClassesCord_36);
    IntInstances_62 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstancesCord_37);
    ImpInstances_63 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ImpInstancesCord_38);
    IntPredDecls_64 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), IntPredDeclsCord_39);
    ImpPredDecls_65 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), ImpPredDeclsCord_40);
    IntModeDecls_66 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), IntModeDeclsCord_41);
    ImpModeDecls_67 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), ImpModeDeclsCord_42);
    IntPragmas_68 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_0), IntPragmasCord_43);
    ImpPragmas_69 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_0), ImpPragmasCord_44);
    IntPromises_70 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), IntPromisesCord_45);
    ImpPromises_71 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), ImpPromisesCord_46);
    {
      ParseTreeInt0Prime_72 = (MR_Word) MR_new_object(MR_Word, (29 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_72, 0) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_72, 1) = ((MR_Box) (ModuleNameContext_6));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_72, 2) = ((MR_Box) (MaybeVersionNumbers_48));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_72, 3) = ((MR_Box) (IntIncls_21));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_72, 4) = ((MR_Box) (ImpIncls_22));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_72, 5) = ((MR_Box) (IntImports_23));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_72, 6) = ((MR_Box) (IntUses_49));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_72, 7) = ((MR_Box) (ImpImports_51));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_72, 8) = ((MR_Box) (ImpUses_53));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_72, 9) = ((MR_Box) (IntFIMSpecs_27));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_72, 10) = ((MR_Box) (ImpFIMSpecs_28));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_72, 11) = ((MR_Box) (IntTypeDefns_54));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_72, 12) = ((MR_Box) (IntInstDefns_56));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_72, 13) = ((MR_Box) (IntModeDefns_58));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_72, 14) = ((MR_Box) (IntTypeClasses_60));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_72, 15) = ((MR_Box) (IntInstances_62));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_72, 16) = ((MR_Box) (IntPredDecls_64));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_72, 17) = ((MR_Box) (IntModeDecls_66));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_72, 18) = ((MR_Box) (IntPragmas_68));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_72, 19) = ((MR_Box) (IntPromises_70));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_72, 20) = ((MR_Box) (ImpTypeDefns_55));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_72, 21) = ((MR_Box) (ImpInstDefns_57));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_72, 22) = ((MR_Box) (ImpModeDefns_59));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_72, 23) = ((MR_Box) (ImpTypeClasses_61));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_72, 24) = ((MR_Box) (ImpInstances_63));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_72, 25) = ((MR_Box) (ImpPredDecls_65));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_72, 26) = ((MR_Box) (ImpModeDecls_67));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_72, 27) = ((MR_Box) (ImpPragmas_69));
      MR_hl_field(MR_mktag(0), ParseTreeInt0Prime_72, 28) = ((MR_Box) (ImpPromises_71));
    }
    *ParseTreeInt0_4 = parse_tree__prog_item__convert_parse_tree_int0_to_parse_tree_int_1_f_0(ParseTreeInt0Prime_72);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_54_p_0_8(
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
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_54_p_0_7(
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
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_54_p_0_6(
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
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_54_p_0_5(
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
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_54_p_0_4(
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
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_54_p_0_3(
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
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_54_p_0_2(
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
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_54_p_0_1(
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
parse_tree__comp_unit_interface__get_private_interface_int0_from_item_blocks_54_p_0(
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
  MR_Word STATE_VARIABLE_IntPragmas_0_47,
  MR_Word * STATE_VARIABLE_IntPragmas_48,
  MR_Word STATE_VARIABLE_ImpPragmas_0_49,
  MR_Word * STATE_VARIABLE_ImpPragmas_50,
  MR_Word STATE_VARIABLE_IntPromises_0_51,
  MR_Word * STATE_VARIABLE_IntPromises_52,
  MR_Word STATE_VARIABLE_ImpPromises_0_53,
  MR_Word * STATE_VARIABLE_ImpPromises_54)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ImpPromises_54 = STATE_VARIABLE_ImpPromises_0_53;
      *STATE_VARIABLE_IntPromises_52 = STATE_VARIABLE_IntPromises_0_51;
      *STATE_VARIABLE_ImpPragmas_50 = STATE_VARIABLE_ImpPragmas_0_49;
      *STATE_VARIABLE_IntPragmas_48 = STATE_VARIABLE_IntPragmas_0_47;
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
      MR_Word ItemBlock_135 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ItemBlocks_136 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word SrcSection_164 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_135, (MR_Integer) 1))));
      MR_Word Incls_165 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_135, (MR_Integer) 2))));
      MR_Word Avails_166 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_135, (MR_Integer) 3))));
      MR_Word FIMs_167 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_135, (MR_Integer) 4))));
      MR_Word Items_168 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_135, (MR_Integer) 5))));
      MR_Word STATE_VARIABLE_ImpIncls_224_224;
      MR_Word STATE_VARIABLE_ImpImports_226_226;
      MR_Word STATE_VARIABLE_ImpUses_229_229;
      MR_Word STATE_VARIABLE_ImpFIMSpecs_232_232;
      MR_Word STATE_VARIABLE_ImpTypeDefns_233_233;
      MR_Word STATE_VARIABLE_ImpInstDefns_234_234;
      MR_Word STATE_VARIABLE_ImpModeDefns_235_235;
      MR_Word STATE_VARIABLE_ImpTypeClasses_236_236;
      MR_Word STATE_VARIABLE_ImpInstances_237_237;
      MR_Word STATE_VARIABLE_ImpPredDecls_238_238;
      MR_Word STATE_VARIABLE_ImpModeDecls_239_239;
      MR_Word STATE_VARIABLE_ImpPragmas_240_240;
      MR_Word STATE_VARIABLE_ImpPromises_241_241;
      MR_Word STATE_VARIABLE_IntIncls_243_243;
      MR_Word STATE_VARIABLE_IntImports_245_245;
      MR_Word STATE_VARIABLE_IntUses_248_248;
      MR_Word STATE_VARIABLE_IntFIMSpecs_251_251;
      MR_Word STATE_VARIABLE_IntTypeDefns_252_252;
      MR_Word STATE_VARIABLE_IntInstDefns_253_253;
      MR_Word STATE_VARIABLE_IntModeDefns_254_254;
      MR_Word STATE_VARIABLE_IntTypeClasses_255_255;
      MR_Word STATE_VARIABLE_IntInstances_256_256;
      MR_Word STATE_VARIABLE_IntPredDecls_257_257;
      MR_Word STATE_VARIABLE_IntModeDecls_258_258;
      MR_Word STATE_VARIABLE_IntPragmas_259_259;
      MR_Word STATE_VARIABLE_IntPromises_260_260;
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
      MR_Word next_value_of_STATE_VARIABLE_IntPragmas_0_47;
      MR_Word next_value_of_STATE_VARIABLE_ImpPragmas_0_49;
      MR_Word next_value_of_STATE_VARIABLE_IntPromises_0_51;
      MR_Word next_value_of_STATE_VARIABLE_ImpPromises_0_53;

      switch (SrcSection_164) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
        case (MR_Integer) 1:
          {
            MR_Word Var_225;
            MR_Word Var_228;
            MR_Word Imports_287;
            MR_Word Uses_288;
            MR_Box conv1_STATE_VARIABLE_ImpIncls_224_224;
            MR_Box conv5_STATE_VARIABLE_ImpFIMSpecs_232_232;

            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[9]), Incls_165, ((MR_Box) (STATE_VARIABLE_ImpIncls_0_5)), &conv1_STATE_VARIABLE_ImpIncls_224_224);
            STATE_VARIABLE_ImpIncls_224_224 = ((MR_Word) (conv1_STATE_VARIABLE_ImpIncls_224_224));
            parse_tree__prog_item__avail_imports_uses_3_p_0(Avails_166, &Imports_287, &Uses_288);
            Var_225 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_import_info_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[10]), Imports_287);
            mercury__set__insert_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_225, STATE_VARIABLE_ImpImports_0_11, &STATE_VARIABLE_ImpImports_226_226);
            Var_228 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), Uses_288);
            mercury__set__insert_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_228, STATE_VARIABLE_ImpUses_0_13, &STATE_VARIABLE_ImpUses_229_229);
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[5]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[12]), FIMs_167, ((MR_Box) (STATE_VARIABLE_ImpFIMSpecs_0_17)), &conv5_STATE_VARIABLE_ImpFIMSpecs_232_232);
            STATE_VARIABLE_ImpFIMSpecs_232_232 = ((MR_Word) (conv5_STATE_VARIABLE_ImpFIMSpecs_232_232));
            parse_tree__comp_unit_interface__get_private_interface_int0_from_items_20_p_0(HeadVar__1_1, Items_168, STATE_VARIABLE_ImpTypeDefns_0_21, &STATE_VARIABLE_ImpTypeDefns_233_233, STATE_VARIABLE_ImpInstDefns_0_25, &STATE_VARIABLE_ImpInstDefns_234_234, STATE_VARIABLE_ImpModeDefns_0_29, &STATE_VARIABLE_ImpModeDefns_235_235, STATE_VARIABLE_ImpTypeClasses_0_33, &STATE_VARIABLE_ImpTypeClasses_236_236, STATE_VARIABLE_ImpInstances_0_37, &STATE_VARIABLE_ImpInstances_237_237, STATE_VARIABLE_ImpPredDecls_0_41, &STATE_VARIABLE_ImpPredDecls_238_238, STATE_VARIABLE_ImpModeDecls_0_45, &STATE_VARIABLE_ImpModeDecls_239_239, STATE_VARIABLE_ImpPragmas_0_49, &STATE_VARIABLE_ImpPragmas_240_240, STATE_VARIABLE_ImpPromises_0_53, &STATE_VARIABLE_ImpPromises_241_241);
            STATE_VARIABLE_IntIncls_243_243 = STATE_VARIABLE_IntIncls_0_3;
            STATE_VARIABLE_IntImports_245_245 = STATE_VARIABLE_IntImports_0_7;
            STATE_VARIABLE_IntUses_248_248 = STATE_VARIABLE_IntUses_0_9;
            STATE_VARIABLE_IntFIMSpecs_251_251 = STATE_VARIABLE_IntFIMSpecs_0_15;
            STATE_VARIABLE_IntTypeDefns_252_252 = STATE_VARIABLE_IntTypeDefns_0_19;
            STATE_VARIABLE_IntInstDefns_253_253 = STATE_VARIABLE_IntInstDefns_0_23;
            STATE_VARIABLE_IntModeDefns_254_254 = STATE_VARIABLE_IntModeDefns_0_27;
            STATE_VARIABLE_IntTypeClasses_255_255 = STATE_VARIABLE_IntTypeClasses_0_31;
            STATE_VARIABLE_IntInstances_256_256 = STATE_VARIABLE_IntInstances_0_35;
            STATE_VARIABLE_IntPredDecls_257_257 = STATE_VARIABLE_IntPredDecls_0_39;
            STATE_VARIABLE_IntModeDecls_258_258 = STATE_VARIABLE_IntModeDecls_0_43;
            STATE_VARIABLE_IntPragmas_259_259 = STATE_VARIABLE_IntPragmas_0_47;
            STATE_VARIABLE_IntPromises_260_260 = STATE_VARIABLE_IntPromises_0_51;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Imports_169;
            MR_Word Uses_170;
            MR_Word Var_244;
            MR_Word Var_247;
            MR_Box conv7_STATE_VARIABLE_IntIncls_243_243;
            MR_Box conv11_STATE_VARIABLE_IntFIMSpecs_251_251;

            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[13]), Incls_165, ((MR_Box) (STATE_VARIABLE_IntIncls_0_3)), &conv7_STATE_VARIABLE_IntIncls_243_243);
            STATE_VARIABLE_IntIncls_243_243 = ((MR_Word) (conv7_STATE_VARIABLE_IntIncls_243_243));
            parse_tree__prog_item__avail_imports_uses_3_p_0(Avails_166, &Imports_169, &Uses_170);
            Var_244 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_import_info_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[14]), Imports_169);
            mercury__set__insert_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_244, STATE_VARIABLE_IntImports_0_7, &STATE_VARIABLE_IntImports_245_245);
            Var_247 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[15]), Uses_170);
            mercury__set__insert_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_247, STATE_VARIABLE_IntUses_0_9, &STATE_VARIABLE_IntUses_248_248);
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[5]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[16]), FIMs_167, ((MR_Box) (STATE_VARIABLE_IntFIMSpecs_0_15)), &conv11_STATE_VARIABLE_IntFIMSpecs_251_251);
            STATE_VARIABLE_IntFIMSpecs_251_251 = ((MR_Word) (conv11_STATE_VARIABLE_IntFIMSpecs_251_251));
            parse_tree__comp_unit_interface__get_private_interface_int0_from_items_20_p_0(HeadVar__1_1, Items_168, STATE_VARIABLE_IntTypeDefns_0_19, &STATE_VARIABLE_IntTypeDefns_252_252, STATE_VARIABLE_IntInstDefns_0_23, &STATE_VARIABLE_IntInstDefns_253_253, STATE_VARIABLE_IntModeDefns_0_27, &STATE_VARIABLE_IntModeDefns_254_254, STATE_VARIABLE_IntTypeClasses_0_31, &STATE_VARIABLE_IntTypeClasses_255_255, STATE_VARIABLE_IntInstances_0_35, &STATE_VARIABLE_IntInstances_256_256, STATE_VARIABLE_IntPredDecls_0_39, &STATE_VARIABLE_IntPredDecls_257_257, STATE_VARIABLE_IntModeDecls_0_43, &STATE_VARIABLE_IntModeDecls_258_258, STATE_VARIABLE_IntPragmas_0_47, &STATE_VARIABLE_IntPragmas_259_259, STATE_VARIABLE_IntPromises_0_51, &STATE_VARIABLE_IntPromises_260_260);
            STATE_VARIABLE_ImpIncls_224_224 = STATE_VARIABLE_ImpIncls_0_5;
            STATE_VARIABLE_ImpImports_226_226 = STATE_VARIABLE_ImpImports_0_11;
            STATE_VARIABLE_ImpUses_229_229 = STATE_VARIABLE_ImpUses_0_13;
            STATE_VARIABLE_ImpFIMSpecs_232_232 = STATE_VARIABLE_ImpFIMSpecs_0_17;
            STATE_VARIABLE_ImpTypeDefns_233_233 = STATE_VARIABLE_ImpTypeDefns_0_21;
            STATE_VARIABLE_ImpInstDefns_234_234 = STATE_VARIABLE_ImpInstDefns_0_25;
            STATE_VARIABLE_ImpModeDefns_235_235 = STATE_VARIABLE_ImpModeDefns_0_29;
            STATE_VARIABLE_ImpTypeClasses_236_236 = STATE_VARIABLE_ImpTypeClasses_0_33;
            STATE_VARIABLE_ImpInstances_237_237 = STATE_VARIABLE_ImpInstances_0_37;
            STATE_VARIABLE_ImpPredDecls_238_238 = STATE_VARIABLE_ImpPredDecls_0_41;
            STATE_VARIABLE_ImpModeDecls_239_239 = STATE_VARIABLE_ImpModeDecls_0_45;
            STATE_VARIABLE_ImpPragmas_240_240 = STATE_VARIABLE_ImpPragmas_0_49;
            STATE_VARIABLE_ImpPromises_241_241 = STATE_VARIABLE_ImpPromises_0_53;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ItemBlocks_136;
      next_value_of_STATE_VARIABLE_IntIncls_0_3 = STATE_VARIABLE_IntIncls_243_243;
      next_value_of_STATE_VARIABLE_ImpIncls_0_5 = STATE_VARIABLE_ImpIncls_224_224;
      next_value_of_STATE_VARIABLE_IntImports_0_7 = STATE_VARIABLE_IntImports_245_245;
      next_value_of_STATE_VARIABLE_IntUses_0_9 = STATE_VARIABLE_IntUses_248_248;
      next_value_of_STATE_VARIABLE_ImpImports_0_11 = STATE_VARIABLE_ImpImports_226_226;
      next_value_of_STATE_VARIABLE_ImpUses_0_13 = STATE_VARIABLE_ImpUses_229_229;
      next_value_of_STATE_VARIABLE_IntFIMSpecs_0_15 = STATE_VARIABLE_IntFIMSpecs_251_251;
      next_value_of_STATE_VARIABLE_ImpFIMSpecs_0_17 = STATE_VARIABLE_ImpFIMSpecs_232_232;
      next_value_of_STATE_VARIABLE_IntTypeDefns_0_19 = STATE_VARIABLE_IntTypeDefns_252_252;
      next_value_of_STATE_VARIABLE_ImpTypeDefns_0_21 = STATE_VARIABLE_ImpTypeDefns_233_233;
      next_value_of_STATE_VARIABLE_IntInstDefns_0_23 = STATE_VARIABLE_IntInstDefns_253_253;
      next_value_of_STATE_VARIABLE_ImpInstDefns_0_25 = STATE_VARIABLE_ImpInstDefns_234_234;
      next_value_of_STATE_VARIABLE_IntModeDefns_0_27 = STATE_VARIABLE_IntModeDefns_254_254;
      next_value_of_STATE_VARIABLE_ImpModeDefns_0_29 = STATE_VARIABLE_ImpModeDefns_235_235;
      next_value_of_STATE_VARIABLE_IntTypeClasses_0_31 = STATE_VARIABLE_IntTypeClasses_255_255;
      next_value_of_STATE_VARIABLE_ImpTypeClasses_0_33 = STATE_VARIABLE_ImpTypeClasses_236_236;
      next_value_of_STATE_VARIABLE_IntInstances_0_35 = STATE_VARIABLE_IntInstances_256_256;
      next_value_of_STATE_VARIABLE_ImpInstances_0_37 = STATE_VARIABLE_ImpInstances_237_237;
      next_value_of_STATE_VARIABLE_IntPredDecls_0_39 = STATE_VARIABLE_IntPredDecls_257_257;
      next_value_of_STATE_VARIABLE_ImpPredDecls_0_41 = STATE_VARIABLE_ImpPredDecls_238_238;
      next_value_of_STATE_VARIABLE_IntModeDecls_0_43 = STATE_VARIABLE_IntModeDecls_258_258;
      next_value_of_STATE_VARIABLE_ImpModeDecls_0_45 = STATE_VARIABLE_ImpModeDecls_239_239;
      next_value_of_STATE_VARIABLE_IntPragmas_0_47 = STATE_VARIABLE_IntPragmas_259_259;
      next_value_of_STATE_VARIABLE_ImpPragmas_0_49 = STATE_VARIABLE_ImpPragmas_240_240;
      next_value_of_STATE_VARIABLE_IntPromises_0_51 = STATE_VARIABLE_IntPromises_260_260;
      next_value_of_STATE_VARIABLE_ImpPromises_0_53 = STATE_VARIABLE_ImpPromises_241_241;
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
      STATE_VARIABLE_IntPragmas_0_47 = next_value_of_STATE_VARIABLE_IntPragmas_0_47;
      STATE_VARIABLE_ImpPragmas_0_49 = next_value_of_STATE_VARIABLE_ImpPragmas_0_49;
      STATE_VARIABLE_IntPromises_0_51 = next_value_of_STATE_VARIABLE_IntPromises_0_51;
      STATE_VARIABLE_ImpPromises_0_53 = next_value_of_STATE_VARIABLE_ImpPromises_0_53;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_private_interface_int0_from_items_20_p_0_1(
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
parse_tree__comp_unit_interface__get_private_interface_int0_from_items_20_p_0(
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
  MR_Word STATE_VARIABLE_Pragmas_0_17,
  MR_Word * STATE_VARIABLE_Pragmas_18,
  MR_Word STATE_VARIABLE_Promises_0_19,
  MR_Word * STATE_VARIABLE_Promises_20)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Promises_20 = STATE_VARIABLE_Promises_0_19;
      *STATE_VARIABLE_Pragmas_18 = STATE_VARIABLE_Pragmas_0_17;
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
      MR_Word Item_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Items_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Instances_115_115;
      MR_Word STATE_VARIABLE_Promises_116_116;
      MR_Word STATE_VARIABLE_TypeClasses_117_117;
      MR_Word STATE_VARIABLE_ModeDecls_118_118;
      MR_Word STATE_VARIABLE_PredDecls_119_119;
      MR_Word STATE_VARIABLE_ModeDefns_120_120;
      MR_Word STATE_VARIABLE_InstDefns_121_121;
      MR_Word STATE_VARIABLE_TypeDefns_122_122;
      MR_Word STATE_VARIABLE_Pragmas_123_123;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_TypeDefns_0_3;
      MR_Word next_value_of_STATE_VARIABLE_InstDefns_0_5;
      MR_Word next_value_of_STATE_VARIABLE_ModeDefns_0_7;
      MR_Word next_value_of_STATE_VARIABLE_TypeClasses_0_9;
      MR_Word next_value_of_STATE_VARIABLE_Instances_0_11;
      MR_Word next_value_of_STATE_VARIABLE_PredDecls_0_13;
      MR_Word next_value_of_STATE_VARIABLE_ModeDecls_0_15;
      MR_Word next_value_of_STATE_VARIABLE_Pragmas_0_17;
      MR_Word next_value_of_STATE_VARIABLE_Promises_0_19;

      switch (MR_tag((MR_Word) Item_50)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_TypeDefns_122_122 = STATE_VARIABLE_TypeDefns_0_3;
            STATE_VARIABLE_InstDefns_121_121 = STATE_VARIABLE_InstDefns_0_5;
            STATE_VARIABLE_ModeDefns_120_120 = STATE_VARIABLE_ModeDefns_0_7;
            STATE_VARIABLE_TypeClasses_117_117 = STATE_VARIABLE_TypeClasses_0_9;
            STATE_VARIABLE_Instances_115_115 = STATE_VARIABLE_Instances_0_11;
            STATE_VARIABLE_PredDecls_119_119 = STATE_VARIABLE_PredDecls_0_13;
            STATE_VARIABLE_ModeDecls_118_118 = STATE_VARIABLE_ModeDecls_0_15;
            STATE_VARIABLE_Pragmas_123_123 = STATE_VARIABLE_Pragmas_0_17;
            STATE_VARIABLE_Promises_116_116 = STATE_VARIABLE_Promises_0_19;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeDefn_71 = (MR_Word) (MR_body((MR_Word) (Item_50), (MR_Integer) 1));

            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), ((MR_Box) (TypeDefn_71)), STATE_VARIABLE_TypeDefns_0_3, &STATE_VARIABLE_TypeDefns_122_122);
            STATE_VARIABLE_InstDefns_121_121 = STATE_VARIABLE_InstDefns_0_5;
            STATE_VARIABLE_ModeDefns_120_120 = STATE_VARIABLE_ModeDefns_0_7;
            STATE_VARIABLE_TypeClasses_117_117 = STATE_VARIABLE_TypeClasses_0_9;
            STATE_VARIABLE_Instances_115_115 = STATE_VARIABLE_Instances_0_11;
            STATE_VARIABLE_PredDecls_119_119 = STATE_VARIABLE_PredDecls_0_13;
            STATE_VARIABLE_ModeDecls_118_118 = STATE_VARIABLE_ModeDecls_0_15;
            STATE_VARIABLE_Pragmas_123_123 = STATE_VARIABLE_Pragmas_0_17;
            STATE_VARIABLE_Promises_116_116 = STATE_VARIABLE_Promises_0_19;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word InstDefn_72 = (MR_Word) (MR_body((MR_Word) (Item_50), (MR_Integer) 2));

            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), ((MR_Box) (InstDefn_72)), STATE_VARIABLE_InstDefns_0_5, &STATE_VARIABLE_InstDefns_121_121);
            STATE_VARIABLE_TypeDefns_122_122 = STATE_VARIABLE_TypeDefns_0_3;
            STATE_VARIABLE_ModeDefns_120_120 = STATE_VARIABLE_ModeDefns_0_7;
            STATE_VARIABLE_TypeClasses_117_117 = STATE_VARIABLE_TypeClasses_0_9;
            STATE_VARIABLE_Instances_115_115 = STATE_VARIABLE_Instances_0_11;
            STATE_VARIABLE_PredDecls_119_119 = STATE_VARIABLE_PredDecls_0_13;
            STATE_VARIABLE_ModeDecls_118_118 = STATE_VARIABLE_ModeDecls_0_15;
            STATE_VARIABLE_Pragmas_123_123 = STATE_VARIABLE_Pragmas_0_17;
            STATE_VARIABLE_Promises_116_116 = STATE_VARIABLE_Promises_0_19;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_50, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ModeDefn_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_50, (MR_Integer) 1))));

                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), ((MR_Box) (ModeDefn_73)), STATE_VARIABLE_ModeDefns_0_7, &STATE_VARIABLE_ModeDefns_120_120);
                STATE_VARIABLE_TypeDefns_122_122 = STATE_VARIABLE_TypeDefns_0_3;
                STATE_VARIABLE_InstDefns_121_121 = STATE_VARIABLE_InstDefns_0_5;
                STATE_VARIABLE_TypeClasses_117_117 = STATE_VARIABLE_TypeClasses_0_9;
                STATE_VARIABLE_Instances_115_115 = STATE_VARIABLE_Instances_0_11;
                STATE_VARIABLE_PredDecls_119_119 = STATE_VARIABLE_PredDecls_0_13;
                STATE_VARIABLE_ModeDecls_118_118 = STATE_VARIABLE_ModeDecls_0_15;
                STATE_VARIABLE_Pragmas_123_123 = STATE_VARIABLE_Pragmas_0_17;
                STATE_VARIABLE_Promises_116_116 = STATE_VARIABLE_Promises_0_19;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word PredDecl_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_50, (MR_Integer) 1))));

                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), ((MR_Box) (PredDecl_74)), STATE_VARIABLE_PredDecls_0_13, &STATE_VARIABLE_PredDecls_119_119);
                STATE_VARIABLE_TypeDefns_122_122 = STATE_VARIABLE_TypeDefns_0_3;
                STATE_VARIABLE_InstDefns_121_121 = STATE_VARIABLE_InstDefns_0_5;
                STATE_VARIABLE_ModeDefns_120_120 = STATE_VARIABLE_ModeDefns_0_7;
                STATE_VARIABLE_TypeClasses_117_117 = STATE_VARIABLE_TypeClasses_0_9;
                STATE_VARIABLE_Instances_115_115 = STATE_VARIABLE_Instances_0_11;
                STATE_VARIABLE_ModeDecls_118_118 = STATE_VARIABLE_ModeDecls_0_15;
                STATE_VARIABLE_Pragmas_123_123 = STATE_VARIABLE_Pragmas_0_17;
                STATE_VARIABLE_Promises_116_116 = STATE_VARIABLE_Promises_0_19;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ModeDecl_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_50, (MR_Integer) 1))));

                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), ((MR_Box) (ModeDecl_75)), STATE_VARIABLE_ModeDecls_0_15, &STATE_VARIABLE_ModeDecls_118_118);
                STATE_VARIABLE_TypeDefns_122_122 = STATE_VARIABLE_TypeDefns_0_3;
                STATE_VARIABLE_InstDefns_121_121 = STATE_VARIABLE_InstDefns_0_5;
                STATE_VARIABLE_ModeDefns_120_120 = STATE_VARIABLE_ModeDefns_0_7;
                STATE_VARIABLE_TypeClasses_117_117 = STATE_VARIABLE_TypeClasses_0_9;
                STATE_VARIABLE_Instances_115_115 = STATE_VARIABLE_Instances_0_11;
                STATE_VARIABLE_PredDecls_119_119 = STATE_VARIABLE_PredDecls_0_13;
                STATE_VARIABLE_Pragmas_123_123 = STATE_VARIABLE_Pragmas_0_17;
                STATE_VARIABLE_Promises_116_116 = STATE_VARIABLE_Promises_0_19;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemPragma_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_50, (MR_Integer) 1))));
                MR_Word Pragma_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_65, (MR_Integer) 0))));
                MR_Word AllowedInInterface_70;

                AllowedInInterface_70 = parse_tree__prog_item__pragma_allowed_in_interface_1_f_0(Pragma_66);
                switch (AllowedInInterface_70) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_Pragmas_123_123 = STATE_VARIABLE_Pragmas_0_17;
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_0), ((MR_Box) (ItemPragma_65)), STATE_VARIABLE_Pragmas_0_17, &STATE_VARIABLE_Pragmas_123_123);
                    }
                    break;
                }
                STATE_VARIABLE_TypeDefns_122_122 = STATE_VARIABLE_TypeDefns_0_3;
                STATE_VARIABLE_InstDefns_121_121 = STATE_VARIABLE_InstDefns_0_5;
                STATE_VARIABLE_ModeDefns_120_120 = STATE_VARIABLE_ModeDefns_0_7;
                STATE_VARIABLE_TypeClasses_117_117 = STATE_VARIABLE_TypeClasses_0_9;
                STATE_VARIABLE_Instances_115_115 = STATE_VARIABLE_Instances_0_11;
                STATE_VARIABLE_PredDecls_119_119 = STATE_VARIABLE_PredDecls_0_13;
                STATE_VARIABLE_ModeDecls_118_118 = STATE_VARIABLE_ModeDecls_0_15;
                STATE_VARIABLE_Promises_116_116 = STATE_VARIABLE_Promises_0_19;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Promise_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_50, (MR_Integer) 1))));

                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), ((MR_Box) (Promise_77)), STATE_VARIABLE_Promises_0_19, &STATE_VARIABLE_Promises_116_116);
                STATE_VARIABLE_TypeDefns_122_122 = STATE_VARIABLE_TypeDefns_0_3;
                STATE_VARIABLE_InstDefns_121_121 = STATE_VARIABLE_InstDefns_0_5;
                STATE_VARIABLE_ModeDefns_120_120 = STATE_VARIABLE_ModeDefns_0_7;
                STATE_VARIABLE_TypeClasses_117_117 = STATE_VARIABLE_TypeClasses_0_9;
                STATE_VARIABLE_Instances_115_115 = STATE_VARIABLE_Instances_0_11;
                STATE_VARIABLE_PredDecls_119_119 = STATE_VARIABLE_PredDecls_0_13;
                STATE_VARIABLE_ModeDecls_118_118 = STATE_VARIABLE_ModeDecls_0_15;
                STATE_VARIABLE_Pragmas_123_123 = STATE_VARIABLE_Pragmas_0_17;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word TypeClass_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_50, (MR_Integer) 1))));

                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ((MR_Box) (TypeClass_76)), STATE_VARIABLE_TypeClasses_0_9, &STATE_VARIABLE_TypeClasses_117_117);
                STATE_VARIABLE_TypeDefns_122_122 = STATE_VARIABLE_TypeDefns_0_3;
                STATE_VARIABLE_InstDefns_121_121 = STATE_VARIABLE_InstDefns_0_5;
                STATE_VARIABLE_ModeDefns_120_120 = STATE_VARIABLE_ModeDefns_0_7;
                STATE_VARIABLE_Instances_115_115 = STATE_VARIABLE_Instances_0_11;
                STATE_VARIABLE_PredDecls_119_119 = STATE_VARIABLE_PredDecls_0_13;
                STATE_VARIABLE_ModeDecls_118_118 = STATE_VARIABLE_ModeDecls_0_15;
                STATE_VARIABLE_Pragmas_123_123 = STATE_VARIABLE_Pragmas_0_17;
                STATE_VARIABLE_Promises_116_116 = STATE_VARIABLE_Promises_0_19;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Instance_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_50, (MR_Integer) 1))));
                MR_Word AbstractInstance_79;
                MR_Word Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance_78, (MR_Integer) 0))));
                MR_Word Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance_78, (MR_Integer) 1))));
                MR_Word Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance_78, (MR_Integer) 2))));
                MR_Word Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance_78, (MR_Integer) 3))));
                MR_Word Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance_78, (MR_Integer) 5))));
                MR_Word Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance_78, (MR_Integer) 6))));
                MR_Word Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance_78, (MR_Integer) 7))));
                MR_Integer Var_141 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Instance_78, (MR_Integer) 8))));

                {
                  AbstractInstance_79 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), AbstractInstance_79, 0) = ((MR_Box) (Var_133));
                  MR_hl_field(MR_mktag(0), AbstractInstance_79, 1) = ((MR_Box) (Var_134));
                  MR_hl_field(MR_mktag(0), AbstractInstance_79, 2) = ((MR_Box) (Var_135));
                  MR_hl_field(MR_mktag(0), AbstractInstance_79, 3) = ((MR_Box) (Var_136));
                  MR_hl_field(MR_mktag(0), AbstractInstance_79, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), AbstractInstance_79, 5) = ((MR_Box) (Var_138));
                  MR_hl_field(MR_mktag(0), AbstractInstance_79, 6) = ((MR_Box) (Var_139));
                  MR_hl_field(MR_mktag(0), AbstractInstance_79, 7) = ((MR_Box) (Var_140));
                  MR_hl_field(MR_mktag(0), AbstractInstance_79, 8) = ((MR_Box) (Var_141));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ((MR_Box) (AbstractInstance_79)), STATE_VARIABLE_Instances_0_11, &STATE_VARIABLE_Instances_115_115);
                STATE_VARIABLE_TypeDefns_122_122 = STATE_VARIABLE_TypeDefns_0_3;
                STATE_VARIABLE_InstDefns_121_121 = STATE_VARIABLE_InstDefns_0_5;
                STATE_VARIABLE_ModeDefns_120_120 = STATE_VARIABLE_ModeDefns_0_7;
                STATE_VARIABLE_TypeClasses_117_117 = STATE_VARIABLE_TypeClasses_0_9;
                STATE_VARIABLE_PredDecls_119_119 = STATE_VARIABLE_PredDecls_0_13;
                STATE_VARIABLE_ModeDecls_118_118 = STATE_VARIABLE_ModeDecls_0_15;
                STATE_VARIABLE_Pragmas_123_123 = STATE_VARIABLE_Pragmas_0_17;
                STATE_VARIABLE_Promises_116_116 = STATE_VARIABLE_Promises_0_19;
              }
              break;
            case (MR_Integer) 7:
              {
                STATE_VARIABLE_TypeDefns_122_122 = STATE_VARIABLE_TypeDefns_0_3;
                STATE_VARIABLE_InstDefns_121_121 = STATE_VARIABLE_InstDefns_0_5;
                STATE_VARIABLE_ModeDefns_120_120 = STATE_VARIABLE_ModeDefns_0_7;
                STATE_VARIABLE_TypeClasses_117_117 = STATE_VARIABLE_TypeClasses_0_9;
                STATE_VARIABLE_Instances_115_115 = STATE_VARIABLE_Instances_0_11;
                STATE_VARIABLE_PredDecls_119_119 = STATE_VARIABLE_PredDecls_0_13;
                STATE_VARIABLE_ModeDecls_118_118 = STATE_VARIABLE_ModeDecls_0_15;
                STATE_VARIABLE_Pragmas_123_123 = STATE_VARIABLE_Pragmas_0_17;
                STATE_VARIABLE_Promises_116_116 = STATE_VARIABLE_Promises_0_19;
              }
              break;
            case (MR_Integer) 8:
              {
                STATE_VARIABLE_TypeDefns_122_122 = STATE_VARIABLE_TypeDefns_0_3;
                STATE_VARIABLE_InstDefns_121_121 = STATE_VARIABLE_InstDefns_0_5;
                STATE_VARIABLE_ModeDefns_120_120 = STATE_VARIABLE_ModeDefns_0_7;
                STATE_VARIABLE_TypeClasses_117_117 = STATE_VARIABLE_TypeClasses_0_9;
                STATE_VARIABLE_Instances_115_115 = STATE_VARIABLE_Instances_0_11;
                STATE_VARIABLE_PredDecls_119_119 = STATE_VARIABLE_PredDecls_0_13;
                STATE_VARIABLE_ModeDecls_118_118 = STATE_VARIABLE_ModeDecls_0_15;
                STATE_VARIABLE_Pragmas_123_123 = STATE_VARIABLE_Pragmas_0_17;
                STATE_VARIABLE_Promises_116_116 = STATE_VARIABLE_Promises_0_19;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word ItemMutable_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_50, (MR_Integer) 1))));
                MR_String MutableName_81 = ((MR_String) ((MR_hl_field(MR_mktag(0), ItemMutable_80, (MR_Integer) 0))));
                MR_Word Type_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_80, (MR_Integer) 2))));
                MR_Word Inst_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_80, (MR_Integer) 4))));
                MR_Word MutAttrs_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_80, (MR_Integer) 7))));
                MR_Word Context_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_80, (MR_Integer) 8))));
                MR_Word PublicAuxPreds_91;
                MR_Word PublicAuxPredDecls_92;
                MR_Word Var_111;
                MR_Word Var_113;

                parse_tree__prog_mutable__compute_needed_public_mutable_aux_preds_2_p_0(MutAttrs_88, &PublicAuxPreds_91);
                {
                  Var_111 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_111, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[0]));
                  MR_hl_field(MR_mktag(0), Var_111, 1) = ((MR_Box) (parse_tree__comp_unit_interface__get_private_interface_int0_from_items_20_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_111, 2) = ((MR_Box) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(0), Var_111, 3) = ((MR_Box) (HeadVar__1_1));
                  MR_hl_field(MR_mktag(0), Var_111, 4) = ((MR_Box) (MutableName_81));
                  MR_hl_field(MR_mktag(0), Var_111, 5) = ((MR_Box) (Type_83));
                  MR_hl_field(MR_mktag(0), Var_111, 6) = ((MR_Box) (Inst_85));
                  MR_hl_field(MR_mktag(0), Var_111, 7) = ((MR_Box) (Context_89));
                }
                mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), Var_111, PublicAuxPreds_91, &PublicAuxPredDecls_92);
                Var_113 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), PublicAuxPredDecls_92);
                STATE_VARIABLE_PredDecls_119_119 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), STATE_VARIABLE_PredDecls_0_13, Var_113);
                STATE_VARIABLE_TypeDefns_122_122 = STATE_VARIABLE_TypeDefns_0_3;
                STATE_VARIABLE_InstDefns_121_121 = STATE_VARIABLE_InstDefns_0_5;
                STATE_VARIABLE_ModeDefns_120_120 = STATE_VARIABLE_ModeDefns_0_7;
                STATE_VARIABLE_TypeClasses_117_117 = STATE_VARIABLE_TypeClasses_0_9;
                STATE_VARIABLE_Instances_115_115 = STATE_VARIABLE_Instances_0_11;
                STATE_VARIABLE_ModeDecls_118_118 = STATE_VARIABLE_ModeDecls_0_15;
                STATE_VARIABLE_Pragmas_123_123 = STATE_VARIABLE_Pragmas_0_17;
                STATE_VARIABLE_Promises_116_116 = STATE_VARIABLE_Promises_0_19;
              }
              break;
            case (MR_Integer) 10:
              {
                STATE_VARIABLE_TypeDefns_122_122 = STATE_VARIABLE_TypeDefns_0_3;
                STATE_VARIABLE_InstDefns_121_121 = STATE_VARIABLE_InstDefns_0_5;
                STATE_VARIABLE_ModeDefns_120_120 = STATE_VARIABLE_ModeDefns_0_7;
                STATE_VARIABLE_TypeClasses_117_117 = STATE_VARIABLE_TypeClasses_0_9;
                STATE_VARIABLE_Instances_115_115 = STATE_VARIABLE_Instances_0_11;
                STATE_VARIABLE_PredDecls_119_119 = STATE_VARIABLE_PredDecls_0_13;
                STATE_VARIABLE_ModeDecls_118_118 = STATE_VARIABLE_ModeDecls_0_15;
                STATE_VARIABLE_Pragmas_123_123 = STATE_VARIABLE_Pragmas_0_17;
                STATE_VARIABLE_Promises_116_116 = STATE_VARIABLE_Promises_0_19;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Items_51;
      next_value_of_STATE_VARIABLE_TypeDefns_0_3 = STATE_VARIABLE_TypeDefns_122_122;
      next_value_of_STATE_VARIABLE_InstDefns_0_5 = STATE_VARIABLE_InstDefns_121_121;
      next_value_of_STATE_VARIABLE_ModeDefns_0_7 = STATE_VARIABLE_ModeDefns_120_120;
      next_value_of_STATE_VARIABLE_TypeClasses_0_9 = STATE_VARIABLE_TypeClasses_117_117;
      next_value_of_STATE_VARIABLE_Instances_0_11 = STATE_VARIABLE_Instances_115_115;
      next_value_of_STATE_VARIABLE_PredDecls_0_13 = STATE_VARIABLE_PredDecls_119_119;
      next_value_of_STATE_VARIABLE_ModeDecls_0_15 = STATE_VARIABLE_ModeDecls_118_118;
      next_value_of_STATE_VARIABLE_Pragmas_0_17 = STATE_VARIABLE_Pragmas_123_123;
      next_value_of_STATE_VARIABLE_Promises_0_19 = STATE_VARIABLE_Promises_116_116;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_TypeDefns_0_3 = next_value_of_STATE_VARIABLE_TypeDefns_0_3;
      STATE_VARIABLE_InstDefns_0_5 = next_value_of_STATE_VARIABLE_InstDefns_0_5;
      STATE_VARIABLE_ModeDefns_0_7 = next_value_of_STATE_VARIABLE_ModeDefns_0_7;
      STATE_VARIABLE_TypeClasses_0_9 = next_value_of_STATE_VARIABLE_TypeClasses_0_9;
      STATE_VARIABLE_Instances_0_11 = next_value_of_STATE_VARIABLE_Instances_0_11;
      STATE_VARIABLE_PredDecls_0_13 = next_value_of_STATE_VARIABLE_PredDecls_0_13;
      STATE_VARIABLE_ModeDecls_0_15 = next_value_of_STATE_VARIABLE_ModeDecls_0_15;
      STATE_VARIABLE_Pragmas_0_17 = next_value_of_STATE_VARIABLE_Pragmas_0_17;
      STATE_VARIABLE_Promises_0_19 = next_value_of_STATE_VARIABLE_Promises_0_19;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_via_int3_3_p_0_1(
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
parse_tree__comp_unit_interface__generate_interface_int2_via_int3_3_p_0(
  MR_Word Globals_4,
  MR_Word AugCompUnit_5,
  MR_Word * ParseTreeInt23_6)
{
  {
    MR_Word ModuleName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 0))));
    MR_Word ModuleNameContext_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 1))));
    MR_Word SrcItemBlocks_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 3))));
    MR_Word RawItemBlocks_15;
    MR_Word IntInclModuleNames_16;
    MR_Word IntImportModuleNames0_17;
    MR_Word IntTypeDefnsCord_18;
    MR_Word IntInstDefnsCord_19;
    MR_Word IntModeDefnsCord_20;
    MR_Word IntTypeClassesCord_21;
    MR_Word IntInstancesCord_22;
    MR_Word OrigIntTypeDefnsCord_23;
    MR_Word OrigImpTypeDefnsCord_24;
    MR_Word ForeignEnumTypeCtors_25;
    MR_Word NeedImports_26;
    MR_Word IntImportModuleNames_27;
    MR_Word IntTypeDefns_28;
    MR_Word IntInstDefns_29;
    MR_Word IntModeDefns_30;
    MR_Word IntTypeClasses_31;
    MR_Word IntInstances_32;
    MR_Word Experiment1_33;
    MR_Word TypeRepnInfos_34;
    MR_Word ParseTreeInt3_39;
    MR_Word ParseTreeInt23Prime_40;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_55;
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

    mercury__list__map_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[2]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[8]), SrcItemBlocks_10, &RawItemBlocks_15);
    Var_42 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_43 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_44 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0));
    Var_45 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0));
    Var_46 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0));
    Var_47 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0));
    Var_48 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0));
    Var_49 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0));
    Var_50 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0));
    Var_51 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[1]));
    parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_23_p_0(RawItemBlocks_15, Var_42, &IntInclModuleNames_16, Var_43, &IntImportModuleNames0_17, Var_44, &IntTypeDefnsCord_18, Var_45, &IntInstDefnsCord_19, Var_46, &IntModeDefnsCord_20, Var_47, &IntTypeClassesCord_21, Var_48, &IntInstancesCord_22, Var_49, &OrigIntTypeDefnsCord_23, Var_50, &OrigImpTypeDefnsCord_24, Var_51, &ForeignEnumTypeCtors_25, (MR_Integer) 0, &NeedImports_26);
    switch (NeedImports_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        IntImportModuleNames_27 = IntImportModuleNames0_17;
        break;
      case (MR_Integer) 0:
        IntImportModuleNames_27 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
        break;
    }
    IntTypeDefns_28 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), IntTypeDefnsCord_18);
    IntInstDefns_29 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), IntInstDefnsCord_19);
    IntModeDefns_30 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), IntModeDefnsCord_20);
    IntTypeClasses_31 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClassesCord_21);
    IntInstances_32 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstancesCord_22);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 695, &Experiment1_33);
    switch (Experiment1_33) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        TypeRepnInfos_34 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word OrigIntTypeDefns_35;
          MR_Word OrigImpTypeDefns_36;
          MR_Word _NonIntTypeRepnInfos_38;

          OrigIntTypeDefns_35 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), OrigIntTypeDefnsCord_23);
          OrigImpTypeDefns_36 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), OrigImpTypeDefnsCord_24);
          parse_tree__decide_type_repn__decide_repns_for_simple_types_6_p_0(ModuleName_7, OrigIntTypeDefns_35, OrigImpTypeDefns_36, ForeignEnumTypeCtors_25, &TypeRepnInfos_34, &_NonIntTypeRepnInfos_38);
        }
        break;
    }
    {
      ParseTreeInt3_39 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ParseTreeInt3_39, 0) = ((MR_Box) (ModuleName_7));
      MR_hl_field(MR_mktag(0), ParseTreeInt3_39, 1) = ((MR_Box) (ModuleNameContext_8));
      MR_hl_field(MR_mktag(0), ParseTreeInt3_39, 2) = ((MR_Box) (IntInclModuleNames_16));
      MR_hl_field(MR_mktag(0), ParseTreeInt3_39, 3) = ((MR_Box) (IntImportModuleNames_27));
      MR_hl_field(MR_mktag(0), ParseTreeInt3_39, 4) = ((MR_Box) (IntTypeDefns_28));
      MR_hl_field(MR_mktag(0), ParseTreeInt3_39, 5) = ((MR_Box) (IntInstDefns_29));
      MR_hl_field(MR_mktag(0), ParseTreeInt3_39, 6) = ((MR_Box) (IntModeDefns_30));
      MR_hl_field(MR_mktag(0), ParseTreeInt3_39, 7) = ((MR_Box) (IntTypeClasses_31));
      MR_hl_field(MR_mktag(0), ParseTreeInt3_39, 8) = ((MR_Box) (IntInstances_32));
      MR_hl_field(MR_mktag(0), ParseTreeInt3_39, 9) = ((MR_Box) (TypeRepnInfos_34));
    }
    ParseTreeInt23Prime_40 = parse_tree__prog_item__convert_parse_tree_int3_to_parse_tree_int_1_f_0(ParseTreeInt3_39);
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt23Prime_40, (MR_Integer) 0))));
    Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt23Prime_40, (MR_Integer) 2))));
    Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt23Prime_40, (MR_Integer) 3))));
    Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt23Prime_40, (MR_Integer) 4))));
    Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt23Prime_40, (MR_Integer) 5))));
    Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt23Prime_40, (MR_Integer) 6))));
    Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt23Prime_40, (MR_Integer) 7))));
    Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt23Prime_40, (MR_Integer) 8))));
    Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt23Prime_40, (MR_Integer) 9))));
    Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt23Prime_40, (MR_Integer) 10))));
    Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt23Prime_40, (MR_Integer) 11))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt23_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_66));
    }
  }
}

void MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_4_p_0(
  MR_Word Globals_5,
  MR_Word RawCompUnit_6,
  MR_Word * ParseTreeInt3_7,
  MR_Word * ParseTreeInt_8)
{
  {
    MR_Word ModuleName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_6, (MR_Integer) 0))));
    MR_Word ModuleNameContext_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_6, (MR_Integer) 1))));
    MR_Word RawItemBlocks_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_6, (MR_Integer) 2))));
    MR_Word IntInclModuleNames_12;
    MR_Word IntImportModuleNames0_13;
    MR_Word IntTypeDefnsCord_14;
    MR_Word IntInstDefnsCord_15;
    MR_Word IntModeDefnsCord_16;
    MR_Word IntTypeClassesCord_17;
    MR_Word IntInstancesCord_18;
    MR_Word OrigIntTypeDefnsCord_19;
    MR_Word OrigImpTypeDefnsCord_20;
    MR_Word ForeignEnumTypeCtors_21;
    MR_Word NeedImports_22;
    MR_Word IntImportModuleNames_23;
    MR_Word IntTypeDefns_24;
    MR_Word IntInstDefns_25;
    MR_Word IntModeDefns_26;
    MR_Word IntTypeClasses_27;
    MR_Word IntInstances_28;
    MR_Word Experiment1_29;
    MR_Word TypeRepnInfos_30;
    MR_Word ParseTreeInt0_35;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word _Specs_36;

    Var_37 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_38 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_39 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0));
    Var_40 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0));
    Var_41 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0));
    Var_42 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0));
    Var_43 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0));
    Var_44 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0));
    Var_45 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0));
    Var_46 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[1]));
    parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_23_p_0(RawItemBlocks_11, Var_37, &IntInclModuleNames_12, Var_38, &IntImportModuleNames0_13, Var_39, &IntTypeDefnsCord_14, Var_40, &IntInstDefnsCord_15, Var_41, &IntModeDefnsCord_16, Var_42, &IntTypeClassesCord_17, Var_43, &IntInstancesCord_18, Var_44, &OrigIntTypeDefnsCord_19, Var_45, &OrigImpTypeDefnsCord_20, Var_46, &ForeignEnumTypeCtors_21, (MR_Integer) 0, &NeedImports_22);
    switch (NeedImports_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        IntImportModuleNames_23 = IntImportModuleNames0_13;
        break;
      case (MR_Integer) 0:
        IntImportModuleNames_23 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
        break;
    }
    IntTypeDefns_24 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), IntTypeDefnsCord_14);
    IntInstDefns_25 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), IntInstDefnsCord_15);
    IntModeDefns_26 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), IntModeDefnsCord_16);
    IntTypeClasses_27 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClassesCord_17);
    IntInstances_28 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntInstancesCord_18);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 695, &Experiment1_29);
    switch (Experiment1_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        TypeRepnInfos_30 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word OrigIntTypeDefns_31;
          MR_Word OrigImpTypeDefns_32;
          MR_Word _NonIntTypeRepnInfos_34;

          OrigIntTypeDefns_31 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), OrigIntTypeDefnsCord_19);
          OrigImpTypeDefns_32 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), OrigImpTypeDefnsCord_20);
          parse_tree__decide_type_repn__decide_repns_for_simple_types_6_p_0(ModuleName_9, OrigIntTypeDefns_31, OrigImpTypeDefns_32, ForeignEnumTypeCtors_21, &TypeRepnInfos_30, &_NonIntTypeRepnInfos_34);
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt3_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (IntInclModuleNames_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (IntImportModuleNames_23));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (IntTypeDefns_24));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (IntInstDefns_25));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (IntModeDefns_26));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (IntTypeClasses_27));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (IntInstances_28));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (TypeRepnInfos_30));
    }
    ParseTreeInt0_35 = parse_tree__prog_item__convert_parse_tree_int3_to_parse_tree_int_1_f_0(*ParseTreeInt3_7);
    parse_tree__module_qual__module_qualify_parse_tree_int3_5_p_0(Globals_5, ParseTreeInt0_35, ParseTreeInt_8, (MR_Word) ((MR_Unsigned) 0U), &_Specs_36);
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_23_p_0_3(
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
parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_23_p_0_2(
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
parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_23_p_0_1(
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
parse_tree__comp_unit_interface__get_short_interface_int3_from_item_blocks_23_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntIncls_0_2,
  MR_Word * STATE_VARIABLE_IntIncls_3,
  MR_Word STATE_VARIABLE_IntImports_0_4,
  MR_Word * STATE_VARIABLE_IntImports_5,
  MR_Word STATE_VARIABLE_IntTypeDefns_0_6,
  MR_Word * STATE_VARIABLE_IntTypeDefns_7,
  MR_Word STATE_VARIABLE_IntInstDefns_0_8,
  MR_Word * STATE_VARIABLE_IntInstDefns_9,
  MR_Word STATE_VARIABLE_IntModeDefns_0_10,
  MR_Word * STATE_VARIABLE_IntModeDefns_11,
  MR_Word STATE_VARIABLE_IntTypeClasses_0_12,
  MR_Word * STATE_VARIABLE_IntTypeClasses_13,
  MR_Word STATE_VARIABLE_IntInstances_0_14,
  MR_Word * STATE_VARIABLE_IntInstances_15,
  MR_Word STATE_VARIABLE_OrigIntTypeDefns_0_16,
  MR_Word * STATE_VARIABLE_OrigIntTypeDefns_17,
  MR_Word STATE_VARIABLE_OrigImpTypeDefns_0_18,
  MR_Word * STATE_VARIABLE_OrigImpTypeDefns_19,
  MR_Word STATE_VARIABLE_ForeignEnumTypeCtors_0_20,
  MR_Word * STATE_VARIABLE_ForeignEnumTypeCtors_21,
  MR_Word STATE_VARIABLE_NeedImports_0_22,
  MR_Word * STATE_VARIABLE_NeedImports_23)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_NeedImports_23 = STATE_VARIABLE_NeedImports_0_22;
      *STATE_VARIABLE_ForeignEnumTypeCtors_21 = STATE_VARIABLE_ForeignEnumTypeCtors_0_20;
      *STATE_VARIABLE_OrigImpTypeDefns_19 = STATE_VARIABLE_OrigImpTypeDefns_0_18;
      *STATE_VARIABLE_OrigIntTypeDefns_17 = STATE_VARIABLE_OrigIntTypeDefns_0_16;
      *STATE_VARIABLE_IntInstances_15 = STATE_VARIABLE_IntInstances_0_14;
      *STATE_VARIABLE_IntTypeClasses_13 = STATE_VARIABLE_IntTypeClasses_0_12;
      *STATE_VARIABLE_IntModeDefns_11 = STATE_VARIABLE_IntModeDefns_0_10;
      *STATE_VARIABLE_IntInstDefns_9 = STATE_VARIABLE_IntInstDefns_0_8;
      *STATE_VARIABLE_IntTypeDefns_7 = STATE_VARIABLE_IntTypeDefns_0_6;
      *STATE_VARIABLE_IntImports_5 = STATE_VARIABLE_IntImports_0_4;
      *STATE_VARIABLE_IntIncls_3 = STATE_VARIABLE_IntIncls_0_2;
    }
    else
    {
      MR_Word RawItemBlock_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word RawItemBlocks_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Section_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_57, (MR_Integer) 1))));
      MR_Word Incls_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_57, (MR_Integer) 2))));
      MR_Word Avails_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_57, (MR_Integer) 3))));
      MR_Word Items_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_57, (MR_Integer) 5))));
      MR_Word STATE_VARIABLE_OrigImpTypeDefns_100_100;
      MR_Word STATE_VARIABLE_IntIncls_103_103;
      MR_Word STATE_VARIABLE_IntImports_106_106;
      MR_Word STATE_VARIABLE_IntTypeDefns_107_107;
      MR_Word STATE_VARIABLE_IntInstDefns_108_108;
      MR_Word STATE_VARIABLE_IntModeDefns_109_109;
      MR_Word STATE_VARIABLE_IntTypeClasses_110_110;
      MR_Word STATE_VARIABLE_IntInstances_111_111;
      MR_Word STATE_VARIABLE_OrigIntTypeDefns_112_112;
      MR_Word STATE_VARIABLE_ForeignEnumTypeCtors_113_113;
      MR_Word STATE_VARIABLE_NeedImports_114_114;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_IntIncls_0_2;
      MR_Word next_value_of_STATE_VARIABLE_IntImports_0_4;
      MR_Word next_value_of_STATE_VARIABLE_IntTypeDefns_0_6;
      MR_Word next_value_of_STATE_VARIABLE_IntInstDefns_0_8;
      MR_Word next_value_of_STATE_VARIABLE_IntModeDefns_0_10;
      MR_Word next_value_of_STATE_VARIABLE_IntTypeClasses_0_12;
      MR_Word next_value_of_STATE_VARIABLE_IntInstances_0_14;
      MR_Word next_value_of_STATE_VARIABLE_OrigIntTypeDefns_0_16;
      MR_Word next_value_of_STATE_VARIABLE_OrigImpTypeDefns_0_18;
      MR_Word next_value_of_STATE_VARIABLE_ForeignEnumTypeCtors_0_20;
      MR_Word next_value_of_STATE_VARIABLE_NeedImports_0_22;

      switch (Section_71) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            parse_tree__comp_unit_interface__get_short_interface_int3_from_items_imp_5_p_0(Items_75, STATE_VARIABLE_OrigImpTypeDefns_0_18, &STATE_VARIABLE_OrigImpTypeDefns_100_100, STATE_VARIABLE_ForeignEnumTypeCtors_0_20, &STATE_VARIABLE_ForeignEnumTypeCtors_113_113);
            STATE_VARIABLE_IntIncls_103_103 = STATE_VARIABLE_IntIncls_0_2;
            STATE_VARIABLE_IntImports_106_106 = STATE_VARIABLE_IntImports_0_4;
            STATE_VARIABLE_IntTypeDefns_107_107 = STATE_VARIABLE_IntTypeDefns_0_6;
            STATE_VARIABLE_IntInstDefns_108_108 = STATE_VARIABLE_IntInstDefns_0_8;
            STATE_VARIABLE_IntModeDefns_109_109 = STATE_VARIABLE_IntModeDefns_0_10;
            STATE_VARIABLE_IntTypeClasses_110_110 = STATE_VARIABLE_IntTypeClasses_0_12;
            STATE_VARIABLE_IntInstances_111_111 = STATE_VARIABLE_IntInstances_0_14;
            STATE_VARIABLE_OrigIntTypeDefns_112_112 = STATE_VARIABLE_OrigIntTypeDefns_0_16;
            STATE_VARIABLE_NeedImports_114_114 = STATE_VARIABLE_NeedImports_0_22;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Imports_76;
            MR_Word ImportModuleNames_77;
            MR_Box conv1_STATE_VARIABLE_IntIncls_103_103;

            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[5]), Incls_72, ((MR_Box) (STATE_VARIABLE_IntIncls_0_2)), &conv1_STATE_VARIABLE_IntIncls_103_103);
            STATE_VARIABLE_IntIncls_103_103 = ((MR_Word) (conv1_STATE_VARIABLE_IntIncls_103_103));
            mercury__list__filter_map_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_import_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[6]), Avails_73, &Imports_76);
            ImportModuleNames_77 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_import_info_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[7]), Imports_76);
            mercury__set__insert_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImportModuleNames_77, STATE_VARIABLE_IntImports_0_4, &STATE_VARIABLE_IntImports_106_106);
            parse_tree__comp_unit_interface__get_short_interface_int3_from_items_int_17_p_0(Items_75, STATE_VARIABLE_IntTypeDefns_0_6, &STATE_VARIABLE_IntTypeDefns_107_107, STATE_VARIABLE_IntInstDefns_0_8, &STATE_VARIABLE_IntInstDefns_108_108, STATE_VARIABLE_IntModeDefns_0_10, &STATE_VARIABLE_IntModeDefns_109_109, STATE_VARIABLE_IntTypeClasses_0_12, &STATE_VARIABLE_IntTypeClasses_110_110, STATE_VARIABLE_IntInstances_0_14, &STATE_VARIABLE_IntInstances_111_111, STATE_VARIABLE_OrigIntTypeDefns_0_16, &STATE_VARIABLE_OrigIntTypeDefns_112_112, STATE_VARIABLE_ForeignEnumTypeCtors_0_20, &STATE_VARIABLE_ForeignEnumTypeCtors_113_113, STATE_VARIABLE_NeedImports_0_22, &STATE_VARIABLE_NeedImports_114_114);
            STATE_VARIABLE_OrigImpTypeDefns_100_100 = STATE_VARIABLE_OrigImpTypeDefns_0_18;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = RawItemBlocks_58;
      next_value_of_STATE_VARIABLE_IntIncls_0_2 = STATE_VARIABLE_IntIncls_103_103;
      next_value_of_STATE_VARIABLE_IntImports_0_4 = STATE_VARIABLE_IntImports_106_106;
      next_value_of_STATE_VARIABLE_IntTypeDefns_0_6 = STATE_VARIABLE_IntTypeDefns_107_107;
      next_value_of_STATE_VARIABLE_IntInstDefns_0_8 = STATE_VARIABLE_IntInstDefns_108_108;
      next_value_of_STATE_VARIABLE_IntModeDefns_0_10 = STATE_VARIABLE_IntModeDefns_109_109;
      next_value_of_STATE_VARIABLE_IntTypeClasses_0_12 = STATE_VARIABLE_IntTypeClasses_110_110;
      next_value_of_STATE_VARIABLE_IntInstances_0_14 = STATE_VARIABLE_IntInstances_111_111;
      next_value_of_STATE_VARIABLE_OrigIntTypeDefns_0_16 = STATE_VARIABLE_OrigIntTypeDefns_112_112;
      next_value_of_STATE_VARIABLE_OrigImpTypeDefns_0_18 = STATE_VARIABLE_OrigImpTypeDefns_100_100;
      next_value_of_STATE_VARIABLE_ForeignEnumTypeCtors_0_20 = STATE_VARIABLE_ForeignEnumTypeCtors_113_113;
      next_value_of_STATE_VARIABLE_NeedImports_0_22 = STATE_VARIABLE_NeedImports_114_114;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_IntIncls_0_2 = next_value_of_STATE_VARIABLE_IntIncls_0_2;
      STATE_VARIABLE_IntImports_0_4 = next_value_of_STATE_VARIABLE_IntImports_0_4;
      STATE_VARIABLE_IntTypeDefns_0_6 = next_value_of_STATE_VARIABLE_IntTypeDefns_0_6;
      STATE_VARIABLE_IntInstDefns_0_8 = next_value_of_STATE_VARIABLE_IntInstDefns_0_8;
      STATE_VARIABLE_IntModeDefns_0_10 = next_value_of_STATE_VARIABLE_IntModeDefns_0_10;
      STATE_VARIABLE_IntTypeClasses_0_12 = next_value_of_STATE_VARIABLE_IntTypeClasses_0_12;
      STATE_VARIABLE_IntInstances_0_14 = next_value_of_STATE_VARIABLE_IntInstances_0_14;
      STATE_VARIABLE_OrigIntTypeDefns_0_16 = next_value_of_STATE_VARIABLE_OrigIntTypeDefns_0_16;
      STATE_VARIABLE_OrigImpTypeDefns_0_18 = next_value_of_STATE_VARIABLE_OrigImpTypeDefns_0_18;
      STATE_VARIABLE_ForeignEnumTypeCtors_0_20 = next_value_of_STATE_VARIABLE_ForeignEnumTypeCtors_0_20;
      STATE_VARIABLE_NeedImports_0_22 = next_value_of_STATE_VARIABLE_NeedImports_0_22;
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
  MR_Word STATE_VARIABLE_ForeignEnumTypeCtors_0_4,
  MR_Word * STATE_VARIABLE_ForeignEnumTypeCtors_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ForeignEnumTypeCtors_5 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
      *STATE_VARIABLE_ImpTypeDefns_3 = STATE_VARIABLE_ImpTypeDefns_0_2;
    }
    else
    {
      MR_Word Item_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ForeignEnumTypeCtors_34_34;
      MR_Word STATE_VARIABLE_ImpTypeDefns_35_35;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImpTypeDefns_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ForeignEnumTypeCtors_0_4;

      switch (MR_tag((MR_Word) Item_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_ImpTypeDefns_35_35 = STATE_VARIABLE_ImpTypeDefns_0_2;
            STATE_VARIABLE_ForeignEnumTypeCtors_34_34 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemTypeDefnInfo_16 = (MR_Word) (MR_body((MR_Word) (Item_12), (MR_Integer) 1));

            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), ((MR_Box) (ItemTypeDefnInfo_16)), STATE_VARIABLE_ImpTypeDefns_0_2, &STATE_VARIABLE_ImpTypeDefns_35_35);
            STATE_VARIABLE_ForeignEnumTypeCtors_34_34 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
          }
          break;
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_ImpTypeDefns_35_35 = STATE_VARIABLE_ImpTypeDefns_0_2;
            STATE_VARIABLE_ForeignEnumTypeCtors_34_34 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_ImpTypeDefns_35_35 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ForeignEnumTypeCtors_34_34 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_ImpTypeDefns_35_35 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ForeignEnumTypeCtors_34_34 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
              }
              break;
            case (MR_Integer) 2:
              {
                STATE_VARIABLE_ImpTypeDefns_35_35 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ForeignEnumTypeCtors_34_34 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemPragma_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 1))));

                parse_tree__comp_unit_interface__maybe_record_foreign_enum_3_p_0(ItemPragma_17, STATE_VARIABLE_ForeignEnumTypeCtors_0_4, &STATE_VARIABLE_ForeignEnumTypeCtors_34_34);
                STATE_VARIABLE_ImpTypeDefns_35_35 = STATE_VARIABLE_ImpTypeDefns_0_2;
              }
              break;
            case (MR_Integer) 4:
              {
                STATE_VARIABLE_ImpTypeDefns_35_35 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ForeignEnumTypeCtors_34_34 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
              }
              break;
            case (MR_Integer) 5:
              {
                STATE_VARIABLE_ImpTypeDefns_35_35 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ForeignEnumTypeCtors_34_34 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
              }
              break;
            case (MR_Integer) 6:
              {
                STATE_VARIABLE_ImpTypeDefns_35_35 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ForeignEnumTypeCtors_34_34 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
              }
              break;
            case (MR_Integer) 7:
              {
                STATE_VARIABLE_ImpTypeDefns_35_35 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ForeignEnumTypeCtors_34_34 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
              }
              break;
            case (MR_Integer) 8:
              {
                STATE_VARIABLE_ImpTypeDefns_35_35 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ForeignEnumTypeCtors_34_34 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
              }
              break;
            case (MR_Integer) 9:
              {
                STATE_VARIABLE_ImpTypeDefns_35_35 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ForeignEnumTypeCtors_34_34 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
              }
              break;
            case (MR_Integer) 10:
              {
                STATE_VARIABLE_ImpTypeDefns_35_35 = STATE_VARIABLE_ImpTypeDefns_0_2;
                STATE_VARIABLE_ForeignEnumTypeCtors_34_34 = STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_13;
      next_value_of_STATE_VARIABLE_ImpTypeDefns_0_2 = STATE_VARIABLE_ImpTypeDefns_35_35;
      next_value_of_STATE_VARIABLE_ForeignEnumTypeCtors_0_4 = STATE_VARIABLE_ForeignEnumTypeCtors_34_34;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ImpTypeDefns_0_2 = next_value_of_STATE_VARIABLE_ImpTypeDefns_0_2;
      STATE_VARIABLE_ForeignEnumTypeCtors_0_4 = next_value_of_STATE_VARIABLE_ForeignEnumTypeCtors_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_short_interface_int3_from_items_int_17_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntTypeDefns_0_2,
  MR_Word * STATE_VARIABLE_IntTypeDefns_3,
  MR_Word STATE_VARIABLE_IntInstDefns_0_4,
  MR_Word * STATE_VARIABLE_IntInstDefns_5,
  MR_Word STATE_VARIABLE_IntModeDefns_0_6,
  MR_Word * STATE_VARIABLE_IntModeDefns_7,
  MR_Word STATE_VARIABLE_IntTypeClasses_0_8,
  MR_Word * STATE_VARIABLE_IntTypeClasses_9,
  MR_Word STATE_VARIABLE_IntInstances_0_10,
  MR_Word * STATE_VARIABLE_IntInstances_11,
  MR_Word STATE_VARIABLE_OrigIntTypeDefns_0_12,
  MR_Word * STATE_VARIABLE_OrigIntTypeDefns_13,
  MR_Word STATE_VARIABLE_ForeignEnumTypeCtors_0_14,
  MR_Word * STATE_VARIABLE_ForeignEnumTypeCtors_15,
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
      *STATE_VARIABLE_ForeignEnumTypeCtors_15 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
      *STATE_VARIABLE_OrigIntTypeDefns_13 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
      *STATE_VARIABLE_IntInstances_11 = STATE_VARIABLE_IntInstances_0_10;
      *STATE_VARIABLE_IntTypeClasses_9 = STATE_VARIABLE_IntTypeClasses_0_8;
      *STATE_VARIABLE_IntModeDefns_7 = STATE_VARIABLE_IntModeDefns_0_6;
      *STATE_VARIABLE_IntInstDefns_5 = STATE_VARIABLE_IntInstDefns_0_4;
      *STATE_VARIABLE_IntTypeDefns_3 = STATE_VARIABLE_IntTypeDefns_0_2;
    }
    else
    {
      MR_Word Item_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ForeignEnumTypeCtors_95_95;
      MR_Word STATE_VARIABLE_IntModeDefns_97_97;
      MR_Word STATE_VARIABLE_IntInstDefns_99_99;
      MR_Word STATE_VARIABLE_IntInstances_101_101;
      MR_Word STATE_VARIABLE_NeedImports_102_102;
      MR_Word STATE_VARIABLE_IntTypeClasses_106_106;
      MR_Word STATE_VARIABLE_OrigIntTypeDefns_107_107;
      MR_Word STATE_VARIABLE_IntTypeDefns_108_108;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_IntTypeDefns_0_2;
      MR_Word next_value_of_STATE_VARIABLE_IntInstDefns_0_4;
      MR_Word next_value_of_STATE_VARIABLE_IntModeDefns_0_6;
      MR_Word next_value_of_STATE_VARIABLE_IntTypeClasses_0_8;
      MR_Word next_value_of_STATE_VARIABLE_IntInstances_0_10;
      MR_Word next_value_of_STATE_VARIABLE_OrigIntTypeDefns_0_12;
      MR_Word next_value_of_STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
      MR_Word next_value_of_STATE_VARIABLE_NeedImports_0_16;

      switch (MR_tag((MR_Word) Item_42)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_IntTypeDefns_108_108 = STATE_VARIABLE_IntTypeDefns_0_2;
            STATE_VARIABLE_IntInstDefns_99_99 = STATE_VARIABLE_IntInstDefns_0_4;
            STATE_VARIABLE_IntModeDefns_97_97 = STATE_VARIABLE_IntModeDefns_0_6;
            STATE_VARIABLE_IntTypeClasses_106_106 = STATE_VARIABLE_IntTypeClasses_0_8;
            STATE_VARIABLE_IntInstances_101_101 = STATE_VARIABLE_IntInstances_0_10;
            STATE_VARIABLE_OrigIntTypeDefns_107_107 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
            STATE_VARIABLE_ForeignEnumTypeCtors_95_95 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
            STATE_VARIABLE_NeedImports_102_102 = STATE_VARIABLE_NeedImports_0_16;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemTypeDefnInfo_52 = (MR_Word) (MR_body((MR_Word) (Item_42), (MR_Integer) 1));
            MR_Word AbstractOrForeignItemTypeDefnInfo_53;

            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), ((MR_Box) (ItemTypeDefnInfo_52)), STATE_VARIABLE_OrigIntTypeDefns_0_12, &STATE_VARIABLE_OrigIntTypeDefns_107_107);
            parse_tree__comp_unit_interface__make_type_defn_abstract_type_for_int3_2_p_0(ItemTypeDefnInfo_52, &AbstractOrForeignItemTypeDefnInfo_53);
            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), ((MR_Box) (AbstractOrForeignItemTypeDefnInfo_53)), STATE_VARIABLE_IntTypeDefns_0_2, &STATE_VARIABLE_IntTypeDefns_108_108);
            STATE_VARIABLE_IntInstDefns_99_99 = STATE_VARIABLE_IntInstDefns_0_4;
            STATE_VARIABLE_IntModeDefns_97_97 = STATE_VARIABLE_IntModeDefns_0_6;
            STATE_VARIABLE_IntTypeClasses_106_106 = STATE_VARIABLE_IntTypeClasses_0_8;
            STATE_VARIABLE_IntInstances_101_101 = STATE_VARIABLE_IntInstances_0_10;
            STATE_VARIABLE_ForeignEnumTypeCtors_95_95 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
            STATE_VARIABLE_NeedImports_102_102 = STATE_VARIABLE_NeedImports_0_16;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemInstInfo_66 = (MR_Word) (MR_body((MR_Word) (Item_42), (MR_Integer) 2));
            MR_Word AbstractItemInstInfo_67;
            MR_Word Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstInfo_66, (MR_Integer) 0))));
            MR_Word Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstInfo_66, (MR_Integer) 1))));
            MR_Word Var_128 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstInfo_66, (MR_Integer) 2))));
            MR_Word Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstInfo_66, (MR_Integer) 4))));
            MR_Word Var_131 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstInfo_66, (MR_Integer) 5))));
            MR_Integer Var_132 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemInstInfo_66, (MR_Integer) 6))));

            {
              AbstractItemInstInfo_67 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), AbstractItemInstInfo_67, 0) = ((MR_Box) (Var_126));
              MR_hl_field(MR_mktag(0), AbstractItemInstInfo_67, 1) = ((MR_Box) (Var_127));
              MR_hl_field(MR_mktag(0), AbstractItemInstInfo_67, 2) = ((MR_Box) (Var_128));
              MR_hl_field(MR_mktag(0), AbstractItemInstInfo_67, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), AbstractItemInstInfo_67, 4) = ((MR_Box) (Var_130));
              MR_hl_field(MR_mktag(0), AbstractItemInstInfo_67, 5) = ((MR_Box) (Var_131));
              MR_hl_field(MR_mktag(0), AbstractItemInstInfo_67, 6) = ((MR_Box) (Var_132));
            }
            mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), ((MR_Box) (AbstractItemInstInfo_67)), STATE_VARIABLE_IntInstDefns_0_4, &STATE_VARIABLE_IntInstDefns_99_99);
            STATE_VARIABLE_IntTypeDefns_108_108 = STATE_VARIABLE_IntTypeDefns_0_2;
            STATE_VARIABLE_IntModeDefns_97_97 = STATE_VARIABLE_IntModeDefns_0_6;
            STATE_VARIABLE_IntTypeClasses_106_106 = STATE_VARIABLE_IntTypeClasses_0_8;
            STATE_VARIABLE_IntInstances_101_101 = STATE_VARIABLE_IntInstances_0_10;
            STATE_VARIABLE_OrigIntTypeDefns_107_107 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
            STATE_VARIABLE_ForeignEnumTypeCtors_95_95 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
            STATE_VARIABLE_NeedImports_102_102 = STATE_VARIABLE_NeedImports_0_16;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_42, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ItemModeInfo_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_42, (MR_Integer) 1))));
                MR_Word AbstractItemModeInfo_69;
                MR_Word Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeInfo_68, (MR_Integer) 0))));
                MR_Word Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeInfo_68, (MR_Integer) 1))));
                MR_Word Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeInfo_68, (MR_Integer) 3))));
                MR_Word Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeInfo_68, (MR_Integer) 4))));
                MR_Integer Var_138 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemModeInfo_68, (MR_Integer) 5))));

                {
                  AbstractItemModeInfo_69 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), AbstractItemModeInfo_69, 0) = ((MR_Box) (Var_133));
                  MR_hl_field(MR_mktag(0), AbstractItemModeInfo_69, 1) = ((MR_Box) (Var_134));
                  MR_hl_field(MR_mktag(0), AbstractItemModeInfo_69, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), AbstractItemModeInfo_69, 3) = ((MR_Box) (Var_136));
                  MR_hl_field(MR_mktag(0), AbstractItemModeInfo_69, 4) = ((MR_Box) (Var_137));
                  MR_hl_field(MR_mktag(0), AbstractItemModeInfo_69, 5) = ((MR_Box) (Var_138));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), ((MR_Box) (AbstractItemModeInfo_69)), STATE_VARIABLE_IntModeDefns_0_6, &STATE_VARIABLE_IntModeDefns_97_97);
                STATE_VARIABLE_IntTypeDefns_108_108 = STATE_VARIABLE_IntTypeDefns_0_2;
                STATE_VARIABLE_IntInstDefns_99_99 = STATE_VARIABLE_IntInstDefns_0_4;
                STATE_VARIABLE_IntTypeClasses_106_106 = STATE_VARIABLE_IntTypeClasses_0_8;
                STATE_VARIABLE_IntInstances_101_101 = STATE_VARIABLE_IntInstances_0_10;
                STATE_VARIABLE_OrigIntTypeDefns_107_107 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
                STATE_VARIABLE_ForeignEnumTypeCtors_95_95 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
                STATE_VARIABLE_NeedImports_102_102 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_IntTypeDefns_108_108 = STATE_VARIABLE_IntTypeDefns_0_2;
                STATE_VARIABLE_IntInstDefns_99_99 = STATE_VARIABLE_IntInstDefns_0_4;
                STATE_VARIABLE_IntModeDefns_97_97 = STATE_VARIABLE_IntModeDefns_0_6;
                STATE_VARIABLE_IntTypeClasses_106_106 = STATE_VARIABLE_IntTypeClasses_0_8;
                STATE_VARIABLE_IntInstances_101_101 = STATE_VARIABLE_IntInstances_0_10;
                STATE_VARIABLE_OrigIntTypeDefns_107_107 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
                STATE_VARIABLE_ForeignEnumTypeCtors_95_95 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
                STATE_VARIABLE_NeedImports_102_102 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
            case (MR_Integer) 2:
              {
                STATE_VARIABLE_IntTypeDefns_108_108 = STATE_VARIABLE_IntTypeDefns_0_2;
                STATE_VARIABLE_IntInstDefns_99_99 = STATE_VARIABLE_IntInstDefns_0_4;
                STATE_VARIABLE_IntModeDefns_97_97 = STATE_VARIABLE_IntModeDefns_0_6;
                STATE_VARIABLE_IntTypeClasses_106_106 = STATE_VARIABLE_IntTypeClasses_0_8;
                STATE_VARIABLE_IntInstances_101_101 = STATE_VARIABLE_IntInstances_0_10;
                STATE_VARIABLE_OrigIntTypeDefns_107_107 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
                STATE_VARIABLE_ForeignEnumTypeCtors_95_95 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
                STATE_VARIABLE_NeedImports_102_102 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemPragma_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_42, (MR_Integer) 1))));

                parse_tree__comp_unit_interface__maybe_record_foreign_enum_3_p_0(ItemPragma_70, STATE_VARIABLE_ForeignEnumTypeCtors_0_14, &STATE_VARIABLE_ForeignEnumTypeCtors_95_95);
                STATE_VARIABLE_IntTypeDefns_108_108 = STATE_VARIABLE_IntTypeDefns_0_2;
                STATE_VARIABLE_IntInstDefns_99_99 = STATE_VARIABLE_IntInstDefns_0_4;
                STATE_VARIABLE_IntModeDefns_97_97 = STATE_VARIABLE_IntModeDefns_0_6;
                STATE_VARIABLE_IntTypeClasses_106_106 = STATE_VARIABLE_IntTypeClasses_0_8;
                STATE_VARIABLE_IntInstances_101_101 = STATE_VARIABLE_IntInstances_0_10;
                STATE_VARIABLE_OrigIntTypeDefns_107_107 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
                STATE_VARIABLE_NeedImports_102_102 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
            case (MR_Integer) 4:
              {
                STATE_VARIABLE_IntTypeDefns_108_108 = STATE_VARIABLE_IntTypeDefns_0_2;
                STATE_VARIABLE_IntInstDefns_99_99 = STATE_VARIABLE_IntInstDefns_0_4;
                STATE_VARIABLE_IntModeDefns_97_97 = STATE_VARIABLE_IntModeDefns_0_6;
                STATE_VARIABLE_IntTypeClasses_106_106 = STATE_VARIABLE_IntTypeClasses_0_8;
                STATE_VARIABLE_IntInstances_101_101 = STATE_VARIABLE_IntInstances_0_10;
                STATE_VARIABLE_OrigIntTypeDefns_107_107 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
                STATE_VARIABLE_ForeignEnumTypeCtors_95_95 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
                STATE_VARIABLE_NeedImports_102_102 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemTypeClassInfo_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_42, (MR_Integer) 1))));
                MR_Word ClassName_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_54, (MR_Integer) 0))));
                MR_Word ParamsTVars_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_54, (MR_Integer) 1))));
                MR_Word TVarSet_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_54, (MR_Integer) 5))));
                MR_Word Context_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_54, (MR_Integer) 6))));
                MR_Integer SeqNum_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo_54, (MR_Integer) 7))));
                MR_Word AbstractItemTypeClassInfo_63;

                {
                  AbstractItemTypeClassInfo_63 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_63, 0) = ((MR_Box) (ClassName_55));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_63, 1) = ((MR_Box) (ParamsTVars_56));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_63, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_63, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_63, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_63, 5) = ((MR_Box) (TVarSet_60));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_63, 6) = ((MR_Box) (Context_61));
                  MR_hl_field(MR_mktag(0), AbstractItemTypeClassInfo_63, 7) = ((MR_Box) (SeqNum_62));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ((MR_Box) (AbstractItemTypeClassInfo_63)), STATE_VARIABLE_IntTypeClasses_0_8, &STATE_VARIABLE_IntTypeClasses_106_106);
                STATE_VARIABLE_IntTypeDefns_108_108 = STATE_VARIABLE_IntTypeDefns_0_2;
                STATE_VARIABLE_IntInstDefns_99_99 = STATE_VARIABLE_IntInstDefns_0_4;
                STATE_VARIABLE_IntModeDefns_97_97 = STATE_VARIABLE_IntModeDefns_0_6;
                STATE_VARIABLE_IntInstances_101_101 = STATE_VARIABLE_IntInstances_0_10;
                STATE_VARIABLE_OrigIntTypeDefns_107_107 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
                STATE_VARIABLE_ForeignEnumTypeCtors_95_95 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
                STATE_VARIABLE_NeedImports_102_102 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemInstanceInfo_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_42, (MR_Integer) 1))));
                MR_Word AbstractItemInstanceInfo_65;
                MR_Word Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_64, (MR_Integer) 0))));
                MR_Word Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_64, (MR_Integer) 1))));
                MR_Word Var_119 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_64, (MR_Integer) 2))));
                MR_Word Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_64, (MR_Integer) 3))));
                MR_Word Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_64, (MR_Integer) 5))));
                MR_Word Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_64, (MR_Integer) 6))));
                MR_Word Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_64, (MR_Integer) 7))));
                MR_Integer Var_125 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_64, (MR_Integer) 8))));

                {
                  AbstractItemInstanceInfo_65 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_65, 0) = ((MR_Box) (Var_117));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_65, 1) = ((MR_Box) (Var_118));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_65, 2) = ((MR_Box) (Var_119));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_65, 3) = ((MR_Box) (Var_120));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_65, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_65, 5) = ((MR_Box) (Var_122));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_65, 6) = ((MR_Box) (Var_123));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_65, 7) = ((MR_Box) (Var_124));
                  MR_hl_field(MR_mktag(0), AbstractItemInstanceInfo_65, 8) = ((MR_Box) (Var_125));
                }
                mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ((MR_Box) (AbstractItemInstanceInfo_65)), STATE_VARIABLE_IntInstances_0_10, &STATE_VARIABLE_IntInstances_101_101);
                STATE_VARIABLE_NeedImports_102_102 = (MR_Integer) 1;
                STATE_VARIABLE_IntTypeDefns_108_108 = STATE_VARIABLE_IntTypeDefns_0_2;
                STATE_VARIABLE_IntInstDefns_99_99 = STATE_VARIABLE_IntInstDefns_0_4;
                STATE_VARIABLE_IntModeDefns_97_97 = STATE_VARIABLE_IntModeDefns_0_6;
                STATE_VARIABLE_IntTypeClasses_106_106 = STATE_VARIABLE_IntTypeClasses_0_8;
                STATE_VARIABLE_OrigIntTypeDefns_107_107 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
                STATE_VARIABLE_ForeignEnumTypeCtors_95_95 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
              }
              break;
            case (MR_Integer) 7:
              {
                STATE_VARIABLE_IntTypeDefns_108_108 = STATE_VARIABLE_IntTypeDefns_0_2;
                STATE_VARIABLE_IntInstDefns_99_99 = STATE_VARIABLE_IntInstDefns_0_4;
                STATE_VARIABLE_IntModeDefns_97_97 = STATE_VARIABLE_IntModeDefns_0_6;
                STATE_VARIABLE_IntTypeClasses_106_106 = STATE_VARIABLE_IntTypeClasses_0_8;
                STATE_VARIABLE_IntInstances_101_101 = STATE_VARIABLE_IntInstances_0_10;
                STATE_VARIABLE_OrigIntTypeDefns_107_107 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
                STATE_VARIABLE_ForeignEnumTypeCtors_95_95 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
                STATE_VARIABLE_NeedImports_102_102 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
            case (MR_Integer) 8:
              {
                STATE_VARIABLE_IntTypeDefns_108_108 = STATE_VARIABLE_IntTypeDefns_0_2;
                STATE_VARIABLE_IntInstDefns_99_99 = STATE_VARIABLE_IntInstDefns_0_4;
                STATE_VARIABLE_IntModeDefns_97_97 = STATE_VARIABLE_IntModeDefns_0_6;
                STATE_VARIABLE_IntTypeClasses_106_106 = STATE_VARIABLE_IntTypeClasses_0_8;
                STATE_VARIABLE_IntInstances_101_101 = STATE_VARIABLE_IntInstances_0_10;
                STATE_VARIABLE_OrigIntTypeDefns_107_107 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
                STATE_VARIABLE_ForeignEnumTypeCtors_95_95 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
                STATE_VARIABLE_NeedImports_102_102 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
            case (MR_Integer) 9:
              {
                STATE_VARIABLE_IntTypeDefns_108_108 = STATE_VARIABLE_IntTypeDefns_0_2;
                STATE_VARIABLE_IntInstDefns_99_99 = STATE_VARIABLE_IntInstDefns_0_4;
                STATE_VARIABLE_IntModeDefns_97_97 = STATE_VARIABLE_IntModeDefns_0_6;
                STATE_VARIABLE_IntTypeClasses_106_106 = STATE_VARIABLE_IntTypeClasses_0_8;
                STATE_VARIABLE_IntInstances_101_101 = STATE_VARIABLE_IntInstances_0_10;
                STATE_VARIABLE_OrigIntTypeDefns_107_107 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
                STATE_VARIABLE_ForeignEnumTypeCtors_95_95 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
                STATE_VARIABLE_NeedImports_102_102 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
            case (MR_Integer) 10:
              {
                STATE_VARIABLE_IntTypeDefns_108_108 = STATE_VARIABLE_IntTypeDefns_0_2;
                STATE_VARIABLE_IntInstDefns_99_99 = STATE_VARIABLE_IntInstDefns_0_4;
                STATE_VARIABLE_IntModeDefns_97_97 = STATE_VARIABLE_IntModeDefns_0_6;
                STATE_VARIABLE_IntTypeClasses_106_106 = STATE_VARIABLE_IntTypeClasses_0_8;
                STATE_VARIABLE_IntInstances_101_101 = STATE_VARIABLE_IntInstances_0_10;
                STATE_VARIABLE_OrigIntTypeDefns_107_107 = STATE_VARIABLE_OrigIntTypeDefns_0_12;
                STATE_VARIABLE_ForeignEnumTypeCtors_95_95 = STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
                STATE_VARIABLE_NeedImports_102_102 = STATE_VARIABLE_NeedImports_0_16;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_43;
      next_value_of_STATE_VARIABLE_IntTypeDefns_0_2 = STATE_VARIABLE_IntTypeDefns_108_108;
      next_value_of_STATE_VARIABLE_IntInstDefns_0_4 = STATE_VARIABLE_IntInstDefns_99_99;
      next_value_of_STATE_VARIABLE_IntModeDefns_0_6 = STATE_VARIABLE_IntModeDefns_97_97;
      next_value_of_STATE_VARIABLE_IntTypeClasses_0_8 = STATE_VARIABLE_IntTypeClasses_106_106;
      next_value_of_STATE_VARIABLE_IntInstances_0_10 = STATE_VARIABLE_IntInstances_101_101;
      next_value_of_STATE_VARIABLE_OrigIntTypeDefns_0_12 = STATE_VARIABLE_OrigIntTypeDefns_107_107;
      next_value_of_STATE_VARIABLE_ForeignEnumTypeCtors_0_14 = STATE_VARIABLE_ForeignEnumTypeCtors_95_95;
      next_value_of_STATE_VARIABLE_NeedImports_0_16 = STATE_VARIABLE_NeedImports_102_102;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_IntTypeDefns_0_2 = next_value_of_STATE_VARIABLE_IntTypeDefns_0_2;
      STATE_VARIABLE_IntInstDefns_0_4 = next_value_of_STATE_VARIABLE_IntInstDefns_0_4;
      STATE_VARIABLE_IntModeDefns_0_6 = next_value_of_STATE_VARIABLE_IntModeDefns_0_6;
      STATE_VARIABLE_IntTypeClasses_0_8 = next_value_of_STATE_VARIABLE_IntTypeClasses_0_8;
      STATE_VARIABLE_IntInstances_0_10 = next_value_of_STATE_VARIABLE_IntInstances_0_10;
      STATE_VARIABLE_OrigIntTypeDefns_0_12 = next_value_of_STATE_VARIABLE_OrigIntTypeDefns_0_12;
      STATE_VARIABLE_ForeignEnumTypeCtors_0_14 = next_value_of_STATE_VARIABLE_ForeignEnumTypeCtors_0_14;
      STATE_VARIABLE_NeedImports_0_16 = next_value_of_STATE_VARIABLE_NeedImports_0_16;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__maybe_record_foreign_enum_3_p_0(
  MR_Word ItemPragma_4,
  MR_Word STATE_VARIABLE_ForeignEnumTypeCtors_0_11,
  MR_Word * STATE_VARIABLE_ForeignEnumTypeCtors_12)
{
  {
    MR_bool succeeded;
    MR_Word Pragma_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_4, (MR_Integer) 0))));
    MR_Word PragmaInfoForeignEnum_10;

    succeeded = ((((MR_tag((MR_Word) Pragma_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      PragmaInfoForeignEnum_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_6, (MR_Integer) 1))));
      {
        MR_Word Lang_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PragmaInfoForeignEnum_10, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Word TypeCtor_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaInfoForeignEnum_10, (MR_Integer) 1))));
        MR_Word OoMValues_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaInfoForeignEnum_10, (MR_Integer) 2))));
        MR_Word TypeSymName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_19, (MR_Integer) 0))));
        MR_Integer TypeArity_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_19, (MR_Integer) 1))));
        MR_String TypeName_23;
        MR_Word UnqualTypeCtor_24;
        MR_Word LVs0_25;
        MR_Box conv0_LVs0_25;

        TypeName_23 = mdbcomp__sym_name__unqualify_name_1_f_0(TypeSymName_21);
        {
          UnqualTypeCtor_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), UnqualTypeCtor_24, 0) = ((MR_Box) (TypeName_23));
          MR_hl_field(MR_mktag(0), UnqualTypeCtor_24, 1) = ((MR_Box) (TypeArity_22));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[1]), STATE_VARIABLE_ForeignEnumTypeCtors_0_11, ((MR_Box) (UnqualTypeCtor_24)), &conv0_LVs0_25);
        if (succeeded)
        {
          LVs0_25 = ((MR_Word) (conv0_LVs0_25));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word Var_26;
          MR_Word Var_28;

          {
            Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (Lang_18));
            MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (OoMValues_20));
          }
          {
            Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_28));
            MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (LVs0_25));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[1]), ((MR_Box) (UnqualTypeCtor_24)), ((MR_Box) (Var_26)), STATE_VARIABLE_ForeignEnumTypeCtors_0_11, STATE_VARIABLE_ForeignEnumTypeCtors_12);
        }
        else
        {
          MR_Word Var_29;
          MR_Word Var_31;

          {
            Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Lang_18));
            MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (OoMValues_20));
          }
          {
            Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_31));
            MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[1]), ((MR_Box) (UnqualTypeCtor_24)), ((MR_Box) (Var_29)), STATE_VARIABLE_ForeignEnumTypeCtors_0_11, STATE_VARIABLE_ForeignEnumTypeCtors_12);
        }
      }
    }
    else
      *STATE_VARIABLE_ForeignEnumTypeCtors_12 = STATE_VARIABLE_ForeignEnumTypeCtors_0_11;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__make_type_defn_abstract_type_for_int3_2_p_0(
  MR_Word ItemTypeDefn_3,
  MR_Word * AbstractOrForeignItemTypeDefnInfo_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeDefn_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_3, (MR_Integer) 2))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_3, (MR_Integer) 0))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_3, (MR_Integer) 1))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_3, (MR_Integer) 3))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_3, (MR_Integer) 4))));
    MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_3, (MR_Integer) 5))));

    switch (MR_tag((MR_Word) TypeDefn_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DetailsDu_6 = (MR_Word) ((MR_Word) (TypeDefn_5));
          MR_Word Ctors_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_6, (MR_Integer) 0))));
          MR_Word MaybeCanonical_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_6, (MR_Integer) 1))));
          MR_Word AbstractDetails_11;
          MR_Word Var_26;
          MR_Integer NumBits_10;
          MR_Word Var_35;
          MR_Word Var_36;
          MR_Word Var_38;
          MR_Word Var_39;
          MR_Integer Var_40;

          succeeded = parse_tree__prog_type__du_type_is_enum_2_p_0(DetailsDu_6, &NumBits_10);
          if (succeeded)
            {
              AbstractDetails_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), AbstractDetails_11, 0) = ((MR_Box) (NumBits_10));
            }
          else
          {
            succeeded = parse_tree__prog_type__du_type_is_notag_2_p_0(Ctors_7, MaybeCanonical_8);
            if (succeeded)
              AbstractDetails_11 = (MR_Word) ((MR_Unsigned) 8U);
            else
            {
              succeeded = parse_tree__prog_type__du_type_is_dummy_1_p_0(DetailsDu_6);
              if (succeeded)
                AbstractDetails_11 = (MR_Word) ((MR_Unsigned) 4U);
              else
                AbstractDetails_11 = (MR_Word) ((MR_Unsigned) 0U);
            }
          }
          {
            Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (AbstractDetails_11));
          }
          Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_3, (MR_Integer) 0))));
          Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_3, (MR_Integer) 1))));
          Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_3, (MR_Integer) 3))));
          Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_3, (MR_Integer) 4))));
          Var_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_3, (MR_Integer) 5))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            *AbstractOrForeignItemTypeDefnInfo_4 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_35));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_36));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_26));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_38));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_39));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_40));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            *AbstractOrForeignItemTypeDefnInfo_4 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_30));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_31));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__comp_unit_interface_scalar_common_2[13])));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_32));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_33));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_34));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DetailsForeign_15 = (MR_Word) (MR_body((MR_Word) (TypeDefn_5), (MR_Integer) 2));
          MR_Word ForeignType_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_15, (MR_Integer) 0))));
          MR_Word Assertions_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_15, (MR_Integer) 2))));
          MR_Word MaybeCanonical_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_15, (MR_Integer) 1))));

          if ((MaybeCanonical_29 == (MR_Word) ((MR_Unsigned) 0U)))
            *AbstractOrForeignItemTypeDefnInfo_4 = ItemTypeDefn_3;
          else
          {
            MR_Word AbstractDetailsForeign_20;
            MR_Word AbstractForeignTypeDefn_21;

            {
              AbstractDetailsForeign_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), AbstractDetailsForeign_20, 0) = ((MR_Box) (ForeignType_16));
              MR_hl_field(MR_mktag(0), AbstractDetailsForeign_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__comp_unit_interface_scalar_common_3[1])));
              MR_hl_field(MR_mktag(0), AbstractDetailsForeign_20, 2) = ((MR_Box) (Assertions_17));
            }
            AbstractForeignTypeDefn_21 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (AbstractDetailsForeign_20)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              *AbstractOrForeignItemTypeDefnInfo_4 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_30));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_31));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (AbstractForeignTypeDefn_21));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_32));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_33));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_34));
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                *AbstractOrForeignItemTypeDefnInfo_4 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_30));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_31));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__comp_unit_interface_scalar_common_2[12])));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_32));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_33));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_34));
              }
            }
            break;
          case (MR_Integer) 1:
            *AbstractOrForeignItemTypeDefnInfo_4 = ItemTypeDefn_3;
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
